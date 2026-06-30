#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6AB0
// Address: 0x1e6ab0 - 0x1e81c0
void sub_001E6AB0_0x1e6ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6AB0_0x1e6ab0");
#endif

    switch (ctx->pc) {
        case 0x1e6ab0u: goto label_1e6ab0;
        case 0x1e6ab4u: goto label_1e6ab4;
        case 0x1e6ab8u: goto label_1e6ab8;
        case 0x1e6abcu: goto label_1e6abc;
        case 0x1e6ac0u: goto label_1e6ac0;
        case 0x1e6ac4u: goto label_1e6ac4;
        case 0x1e6ac8u: goto label_1e6ac8;
        case 0x1e6accu: goto label_1e6acc;
        case 0x1e6ad0u: goto label_1e6ad0;
        case 0x1e6ad4u: goto label_1e6ad4;
        case 0x1e6ad8u: goto label_1e6ad8;
        case 0x1e6adcu: goto label_1e6adc;
        case 0x1e6ae0u: goto label_1e6ae0;
        case 0x1e6ae4u: goto label_1e6ae4;
        case 0x1e6ae8u: goto label_1e6ae8;
        case 0x1e6aecu: goto label_1e6aec;
        case 0x1e6af0u: goto label_1e6af0;
        case 0x1e6af4u: goto label_1e6af4;
        case 0x1e6af8u: goto label_1e6af8;
        case 0x1e6afcu: goto label_1e6afc;
        case 0x1e6b00u: goto label_1e6b00;
        case 0x1e6b04u: goto label_1e6b04;
        case 0x1e6b08u: goto label_1e6b08;
        case 0x1e6b0cu: goto label_1e6b0c;
        case 0x1e6b10u: goto label_1e6b10;
        case 0x1e6b14u: goto label_1e6b14;
        case 0x1e6b18u: goto label_1e6b18;
        case 0x1e6b1cu: goto label_1e6b1c;
        case 0x1e6b20u: goto label_1e6b20;
        case 0x1e6b24u: goto label_1e6b24;
        case 0x1e6b28u: goto label_1e6b28;
        case 0x1e6b2cu: goto label_1e6b2c;
        case 0x1e6b30u: goto label_1e6b30;
        case 0x1e6b34u: goto label_1e6b34;
        case 0x1e6b38u: goto label_1e6b38;
        case 0x1e6b3cu: goto label_1e6b3c;
        case 0x1e6b40u: goto label_1e6b40;
        case 0x1e6b44u: goto label_1e6b44;
        case 0x1e6b48u: goto label_1e6b48;
        case 0x1e6b4cu: goto label_1e6b4c;
        case 0x1e6b50u: goto label_1e6b50;
        case 0x1e6b54u: goto label_1e6b54;
        case 0x1e6b58u: goto label_1e6b58;
        case 0x1e6b5cu: goto label_1e6b5c;
        case 0x1e6b60u: goto label_1e6b60;
        case 0x1e6b64u: goto label_1e6b64;
        case 0x1e6b68u: goto label_1e6b68;
        case 0x1e6b6cu: goto label_1e6b6c;
        case 0x1e6b70u: goto label_1e6b70;
        case 0x1e6b74u: goto label_1e6b74;
        case 0x1e6b78u: goto label_1e6b78;
        case 0x1e6b7cu: goto label_1e6b7c;
        case 0x1e6b80u: goto label_1e6b80;
        case 0x1e6b84u: goto label_1e6b84;
        case 0x1e6b88u: goto label_1e6b88;
        case 0x1e6b8cu: goto label_1e6b8c;
        case 0x1e6b90u: goto label_1e6b90;
        case 0x1e6b94u: goto label_1e6b94;
        case 0x1e6b98u: goto label_1e6b98;
        case 0x1e6b9cu: goto label_1e6b9c;
        case 0x1e6ba0u: goto label_1e6ba0;
        case 0x1e6ba4u: goto label_1e6ba4;
        case 0x1e6ba8u: goto label_1e6ba8;
        case 0x1e6bacu: goto label_1e6bac;
        case 0x1e6bb0u: goto label_1e6bb0;
        case 0x1e6bb4u: goto label_1e6bb4;
        case 0x1e6bb8u: goto label_1e6bb8;
        case 0x1e6bbcu: goto label_1e6bbc;
        case 0x1e6bc0u: goto label_1e6bc0;
        case 0x1e6bc4u: goto label_1e6bc4;
        case 0x1e6bc8u: goto label_1e6bc8;
        case 0x1e6bccu: goto label_1e6bcc;
        case 0x1e6bd0u: goto label_1e6bd0;
        case 0x1e6bd4u: goto label_1e6bd4;
        case 0x1e6bd8u: goto label_1e6bd8;
        case 0x1e6bdcu: goto label_1e6bdc;
        case 0x1e6be0u: goto label_1e6be0;
        case 0x1e6be4u: goto label_1e6be4;
        case 0x1e6be8u: goto label_1e6be8;
        case 0x1e6becu: goto label_1e6bec;
        case 0x1e6bf0u: goto label_1e6bf0;
        case 0x1e6bf4u: goto label_1e6bf4;
        case 0x1e6bf8u: goto label_1e6bf8;
        case 0x1e6bfcu: goto label_1e6bfc;
        case 0x1e6c00u: goto label_1e6c00;
        case 0x1e6c04u: goto label_1e6c04;
        case 0x1e6c08u: goto label_1e6c08;
        case 0x1e6c0cu: goto label_1e6c0c;
        case 0x1e6c10u: goto label_1e6c10;
        case 0x1e6c14u: goto label_1e6c14;
        case 0x1e6c18u: goto label_1e6c18;
        case 0x1e6c1cu: goto label_1e6c1c;
        case 0x1e6c20u: goto label_1e6c20;
        case 0x1e6c24u: goto label_1e6c24;
        case 0x1e6c28u: goto label_1e6c28;
        case 0x1e6c2cu: goto label_1e6c2c;
        case 0x1e6c30u: goto label_1e6c30;
        case 0x1e6c34u: goto label_1e6c34;
        case 0x1e6c38u: goto label_1e6c38;
        case 0x1e6c3cu: goto label_1e6c3c;
        case 0x1e6c40u: goto label_1e6c40;
        case 0x1e6c44u: goto label_1e6c44;
        case 0x1e6c48u: goto label_1e6c48;
        case 0x1e6c4cu: goto label_1e6c4c;
        case 0x1e6c50u: goto label_1e6c50;
        case 0x1e6c54u: goto label_1e6c54;
        case 0x1e6c58u: goto label_1e6c58;
        case 0x1e6c5cu: goto label_1e6c5c;
        case 0x1e6c60u: goto label_1e6c60;
        case 0x1e6c64u: goto label_1e6c64;
        case 0x1e6c68u: goto label_1e6c68;
        case 0x1e6c6cu: goto label_1e6c6c;
        case 0x1e6c70u: goto label_1e6c70;
        case 0x1e6c74u: goto label_1e6c74;
        case 0x1e6c78u: goto label_1e6c78;
        case 0x1e6c7cu: goto label_1e6c7c;
        case 0x1e6c80u: goto label_1e6c80;
        case 0x1e6c84u: goto label_1e6c84;
        case 0x1e6c88u: goto label_1e6c88;
        case 0x1e6c8cu: goto label_1e6c8c;
        case 0x1e6c90u: goto label_1e6c90;
        case 0x1e6c94u: goto label_1e6c94;
        case 0x1e6c98u: goto label_1e6c98;
        case 0x1e6c9cu: goto label_1e6c9c;
        case 0x1e6ca0u: goto label_1e6ca0;
        case 0x1e6ca4u: goto label_1e6ca4;
        case 0x1e6ca8u: goto label_1e6ca8;
        case 0x1e6cacu: goto label_1e6cac;
        case 0x1e6cb0u: goto label_1e6cb0;
        case 0x1e6cb4u: goto label_1e6cb4;
        case 0x1e6cb8u: goto label_1e6cb8;
        case 0x1e6cbcu: goto label_1e6cbc;
        case 0x1e6cc0u: goto label_1e6cc0;
        case 0x1e6cc4u: goto label_1e6cc4;
        case 0x1e6cc8u: goto label_1e6cc8;
        case 0x1e6cccu: goto label_1e6ccc;
        case 0x1e6cd0u: goto label_1e6cd0;
        case 0x1e6cd4u: goto label_1e6cd4;
        case 0x1e6cd8u: goto label_1e6cd8;
        case 0x1e6cdcu: goto label_1e6cdc;
        case 0x1e6ce0u: goto label_1e6ce0;
        case 0x1e6ce4u: goto label_1e6ce4;
        case 0x1e6ce8u: goto label_1e6ce8;
        case 0x1e6cecu: goto label_1e6cec;
        case 0x1e6cf0u: goto label_1e6cf0;
        case 0x1e6cf4u: goto label_1e6cf4;
        case 0x1e6cf8u: goto label_1e6cf8;
        case 0x1e6cfcu: goto label_1e6cfc;
        case 0x1e6d00u: goto label_1e6d00;
        case 0x1e6d04u: goto label_1e6d04;
        case 0x1e6d08u: goto label_1e6d08;
        case 0x1e6d0cu: goto label_1e6d0c;
        case 0x1e6d10u: goto label_1e6d10;
        case 0x1e6d14u: goto label_1e6d14;
        case 0x1e6d18u: goto label_1e6d18;
        case 0x1e6d1cu: goto label_1e6d1c;
        case 0x1e6d20u: goto label_1e6d20;
        case 0x1e6d24u: goto label_1e6d24;
        case 0x1e6d28u: goto label_1e6d28;
        case 0x1e6d2cu: goto label_1e6d2c;
        case 0x1e6d30u: goto label_1e6d30;
        case 0x1e6d34u: goto label_1e6d34;
        case 0x1e6d38u: goto label_1e6d38;
        case 0x1e6d3cu: goto label_1e6d3c;
        case 0x1e6d40u: goto label_1e6d40;
        case 0x1e6d44u: goto label_1e6d44;
        case 0x1e6d48u: goto label_1e6d48;
        case 0x1e6d4cu: goto label_1e6d4c;
        case 0x1e6d50u: goto label_1e6d50;
        case 0x1e6d54u: goto label_1e6d54;
        case 0x1e6d58u: goto label_1e6d58;
        case 0x1e6d5cu: goto label_1e6d5c;
        case 0x1e6d60u: goto label_1e6d60;
        case 0x1e6d64u: goto label_1e6d64;
        case 0x1e6d68u: goto label_1e6d68;
        case 0x1e6d6cu: goto label_1e6d6c;
        case 0x1e6d70u: goto label_1e6d70;
        case 0x1e6d74u: goto label_1e6d74;
        case 0x1e6d78u: goto label_1e6d78;
        case 0x1e6d7cu: goto label_1e6d7c;
        case 0x1e6d80u: goto label_1e6d80;
        case 0x1e6d84u: goto label_1e6d84;
        case 0x1e6d88u: goto label_1e6d88;
        case 0x1e6d8cu: goto label_1e6d8c;
        case 0x1e6d90u: goto label_1e6d90;
        case 0x1e6d94u: goto label_1e6d94;
        case 0x1e6d98u: goto label_1e6d98;
        case 0x1e6d9cu: goto label_1e6d9c;
        case 0x1e6da0u: goto label_1e6da0;
        case 0x1e6da4u: goto label_1e6da4;
        case 0x1e6da8u: goto label_1e6da8;
        case 0x1e6dacu: goto label_1e6dac;
        case 0x1e6db0u: goto label_1e6db0;
        case 0x1e6db4u: goto label_1e6db4;
        case 0x1e6db8u: goto label_1e6db8;
        case 0x1e6dbcu: goto label_1e6dbc;
        case 0x1e6dc0u: goto label_1e6dc0;
        case 0x1e6dc4u: goto label_1e6dc4;
        case 0x1e6dc8u: goto label_1e6dc8;
        case 0x1e6dccu: goto label_1e6dcc;
        case 0x1e6dd0u: goto label_1e6dd0;
        case 0x1e6dd4u: goto label_1e6dd4;
        case 0x1e6dd8u: goto label_1e6dd8;
        case 0x1e6ddcu: goto label_1e6ddc;
        case 0x1e6de0u: goto label_1e6de0;
        case 0x1e6de4u: goto label_1e6de4;
        case 0x1e6de8u: goto label_1e6de8;
        case 0x1e6decu: goto label_1e6dec;
        case 0x1e6df0u: goto label_1e6df0;
        case 0x1e6df4u: goto label_1e6df4;
        case 0x1e6df8u: goto label_1e6df8;
        case 0x1e6dfcu: goto label_1e6dfc;
        case 0x1e6e00u: goto label_1e6e00;
        case 0x1e6e04u: goto label_1e6e04;
        case 0x1e6e08u: goto label_1e6e08;
        case 0x1e6e0cu: goto label_1e6e0c;
        case 0x1e6e10u: goto label_1e6e10;
        case 0x1e6e14u: goto label_1e6e14;
        case 0x1e6e18u: goto label_1e6e18;
        case 0x1e6e1cu: goto label_1e6e1c;
        case 0x1e6e20u: goto label_1e6e20;
        case 0x1e6e24u: goto label_1e6e24;
        case 0x1e6e28u: goto label_1e6e28;
        case 0x1e6e2cu: goto label_1e6e2c;
        case 0x1e6e30u: goto label_1e6e30;
        case 0x1e6e34u: goto label_1e6e34;
        case 0x1e6e38u: goto label_1e6e38;
        case 0x1e6e3cu: goto label_1e6e3c;
        case 0x1e6e40u: goto label_1e6e40;
        case 0x1e6e44u: goto label_1e6e44;
        case 0x1e6e48u: goto label_1e6e48;
        case 0x1e6e4cu: goto label_1e6e4c;
        case 0x1e6e50u: goto label_1e6e50;
        case 0x1e6e54u: goto label_1e6e54;
        case 0x1e6e58u: goto label_1e6e58;
        case 0x1e6e5cu: goto label_1e6e5c;
        case 0x1e6e60u: goto label_1e6e60;
        case 0x1e6e64u: goto label_1e6e64;
        case 0x1e6e68u: goto label_1e6e68;
        case 0x1e6e6cu: goto label_1e6e6c;
        case 0x1e6e70u: goto label_1e6e70;
        case 0x1e6e74u: goto label_1e6e74;
        case 0x1e6e78u: goto label_1e6e78;
        case 0x1e6e7cu: goto label_1e6e7c;
        case 0x1e6e80u: goto label_1e6e80;
        case 0x1e6e84u: goto label_1e6e84;
        case 0x1e6e88u: goto label_1e6e88;
        case 0x1e6e8cu: goto label_1e6e8c;
        case 0x1e6e90u: goto label_1e6e90;
        case 0x1e6e94u: goto label_1e6e94;
        case 0x1e6e98u: goto label_1e6e98;
        case 0x1e6e9cu: goto label_1e6e9c;
        case 0x1e6ea0u: goto label_1e6ea0;
        case 0x1e6ea4u: goto label_1e6ea4;
        case 0x1e6ea8u: goto label_1e6ea8;
        case 0x1e6eacu: goto label_1e6eac;
        case 0x1e6eb0u: goto label_1e6eb0;
        case 0x1e6eb4u: goto label_1e6eb4;
        case 0x1e6eb8u: goto label_1e6eb8;
        case 0x1e6ebcu: goto label_1e6ebc;
        case 0x1e6ec0u: goto label_1e6ec0;
        case 0x1e6ec4u: goto label_1e6ec4;
        case 0x1e6ec8u: goto label_1e6ec8;
        case 0x1e6eccu: goto label_1e6ecc;
        case 0x1e6ed0u: goto label_1e6ed0;
        case 0x1e6ed4u: goto label_1e6ed4;
        case 0x1e6ed8u: goto label_1e6ed8;
        case 0x1e6edcu: goto label_1e6edc;
        case 0x1e6ee0u: goto label_1e6ee0;
        case 0x1e6ee4u: goto label_1e6ee4;
        case 0x1e6ee8u: goto label_1e6ee8;
        case 0x1e6eecu: goto label_1e6eec;
        case 0x1e6ef0u: goto label_1e6ef0;
        case 0x1e6ef4u: goto label_1e6ef4;
        case 0x1e6ef8u: goto label_1e6ef8;
        case 0x1e6efcu: goto label_1e6efc;
        case 0x1e6f00u: goto label_1e6f00;
        case 0x1e6f04u: goto label_1e6f04;
        case 0x1e6f08u: goto label_1e6f08;
        case 0x1e6f0cu: goto label_1e6f0c;
        case 0x1e6f10u: goto label_1e6f10;
        case 0x1e6f14u: goto label_1e6f14;
        case 0x1e6f18u: goto label_1e6f18;
        case 0x1e6f1cu: goto label_1e6f1c;
        case 0x1e6f20u: goto label_1e6f20;
        case 0x1e6f24u: goto label_1e6f24;
        case 0x1e6f28u: goto label_1e6f28;
        case 0x1e6f2cu: goto label_1e6f2c;
        case 0x1e6f30u: goto label_1e6f30;
        case 0x1e6f34u: goto label_1e6f34;
        case 0x1e6f38u: goto label_1e6f38;
        case 0x1e6f3cu: goto label_1e6f3c;
        case 0x1e6f40u: goto label_1e6f40;
        case 0x1e6f44u: goto label_1e6f44;
        case 0x1e6f48u: goto label_1e6f48;
        case 0x1e6f4cu: goto label_1e6f4c;
        case 0x1e6f50u: goto label_1e6f50;
        case 0x1e6f54u: goto label_1e6f54;
        case 0x1e6f58u: goto label_1e6f58;
        case 0x1e6f5cu: goto label_1e6f5c;
        case 0x1e6f60u: goto label_1e6f60;
        case 0x1e6f64u: goto label_1e6f64;
        case 0x1e6f68u: goto label_1e6f68;
        case 0x1e6f6cu: goto label_1e6f6c;
        case 0x1e6f70u: goto label_1e6f70;
        case 0x1e6f74u: goto label_1e6f74;
        case 0x1e6f78u: goto label_1e6f78;
        case 0x1e6f7cu: goto label_1e6f7c;
        case 0x1e6f80u: goto label_1e6f80;
        case 0x1e6f84u: goto label_1e6f84;
        case 0x1e6f88u: goto label_1e6f88;
        case 0x1e6f8cu: goto label_1e6f8c;
        case 0x1e6f90u: goto label_1e6f90;
        case 0x1e6f94u: goto label_1e6f94;
        case 0x1e6f98u: goto label_1e6f98;
        case 0x1e6f9cu: goto label_1e6f9c;
        case 0x1e6fa0u: goto label_1e6fa0;
        case 0x1e6fa4u: goto label_1e6fa4;
        case 0x1e6fa8u: goto label_1e6fa8;
        case 0x1e6facu: goto label_1e6fac;
        case 0x1e6fb0u: goto label_1e6fb0;
        case 0x1e6fb4u: goto label_1e6fb4;
        case 0x1e6fb8u: goto label_1e6fb8;
        case 0x1e6fbcu: goto label_1e6fbc;
        case 0x1e6fc0u: goto label_1e6fc0;
        case 0x1e6fc4u: goto label_1e6fc4;
        case 0x1e6fc8u: goto label_1e6fc8;
        case 0x1e6fccu: goto label_1e6fcc;
        case 0x1e6fd0u: goto label_1e6fd0;
        case 0x1e6fd4u: goto label_1e6fd4;
        case 0x1e6fd8u: goto label_1e6fd8;
        case 0x1e6fdcu: goto label_1e6fdc;
        case 0x1e6fe0u: goto label_1e6fe0;
        case 0x1e6fe4u: goto label_1e6fe4;
        case 0x1e6fe8u: goto label_1e6fe8;
        case 0x1e6fecu: goto label_1e6fec;
        case 0x1e6ff0u: goto label_1e6ff0;
        case 0x1e6ff4u: goto label_1e6ff4;
        case 0x1e6ff8u: goto label_1e6ff8;
        case 0x1e6ffcu: goto label_1e6ffc;
        case 0x1e7000u: goto label_1e7000;
        case 0x1e7004u: goto label_1e7004;
        case 0x1e7008u: goto label_1e7008;
        case 0x1e700cu: goto label_1e700c;
        case 0x1e7010u: goto label_1e7010;
        case 0x1e7014u: goto label_1e7014;
        case 0x1e7018u: goto label_1e7018;
        case 0x1e701cu: goto label_1e701c;
        case 0x1e7020u: goto label_1e7020;
        case 0x1e7024u: goto label_1e7024;
        case 0x1e7028u: goto label_1e7028;
        case 0x1e702cu: goto label_1e702c;
        case 0x1e7030u: goto label_1e7030;
        case 0x1e7034u: goto label_1e7034;
        case 0x1e7038u: goto label_1e7038;
        case 0x1e703cu: goto label_1e703c;
        case 0x1e7040u: goto label_1e7040;
        case 0x1e7044u: goto label_1e7044;
        case 0x1e7048u: goto label_1e7048;
        case 0x1e704cu: goto label_1e704c;
        case 0x1e7050u: goto label_1e7050;
        case 0x1e7054u: goto label_1e7054;
        case 0x1e7058u: goto label_1e7058;
        case 0x1e705cu: goto label_1e705c;
        case 0x1e7060u: goto label_1e7060;
        case 0x1e7064u: goto label_1e7064;
        case 0x1e7068u: goto label_1e7068;
        case 0x1e706cu: goto label_1e706c;
        case 0x1e7070u: goto label_1e7070;
        case 0x1e7074u: goto label_1e7074;
        case 0x1e7078u: goto label_1e7078;
        case 0x1e707cu: goto label_1e707c;
        case 0x1e7080u: goto label_1e7080;
        case 0x1e7084u: goto label_1e7084;
        case 0x1e7088u: goto label_1e7088;
        case 0x1e708cu: goto label_1e708c;
        case 0x1e7090u: goto label_1e7090;
        case 0x1e7094u: goto label_1e7094;
        case 0x1e7098u: goto label_1e7098;
        case 0x1e709cu: goto label_1e709c;
        case 0x1e70a0u: goto label_1e70a0;
        case 0x1e70a4u: goto label_1e70a4;
        case 0x1e70a8u: goto label_1e70a8;
        case 0x1e70acu: goto label_1e70ac;
        case 0x1e70b0u: goto label_1e70b0;
        case 0x1e70b4u: goto label_1e70b4;
        case 0x1e70b8u: goto label_1e70b8;
        case 0x1e70bcu: goto label_1e70bc;
        case 0x1e70c0u: goto label_1e70c0;
        case 0x1e70c4u: goto label_1e70c4;
        case 0x1e70c8u: goto label_1e70c8;
        case 0x1e70ccu: goto label_1e70cc;
        case 0x1e70d0u: goto label_1e70d0;
        case 0x1e70d4u: goto label_1e70d4;
        case 0x1e70d8u: goto label_1e70d8;
        case 0x1e70dcu: goto label_1e70dc;
        case 0x1e70e0u: goto label_1e70e0;
        case 0x1e70e4u: goto label_1e70e4;
        case 0x1e70e8u: goto label_1e70e8;
        case 0x1e70ecu: goto label_1e70ec;
        case 0x1e70f0u: goto label_1e70f0;
        case 0x1e70f4u: goto label_1e70f4;
        case 0x1e70f8u: goto label_1e70f8;
        case 0x1e70fcu: goto label_1e70fc;
        case 0x1e7100u: goto label_1e7100;
        case 0x1e7104u: goto label_1e7104;
        case 0x1e7108u: goto label_1e7108;
        case 0x1e710cu: goto label_1e710c;
        case 0x1e7110u: goto label_1e7110;
        case 0x1e7114u: goto label_1e7114;
        case 0x1e7118u: goto label_1e7118;
        case 0x1e711cu: goto label_1e711c;
        case 0x1e7120u: goto label_1e7120;
        case 0x1e7124u: goto label_1e7124;
        case 0x1e7128u: goto label_1e7128;
        case 0x1e712cu: goto label_1e712c;
        case 0x1e7130u: goto label_1e7130;
        case 0x1e7134u: goto label_1e7134;
        case 0x1e7138u: goto label_1e7138;
        case 0x1e713cu: goto label_1e713c;
        case 0x1e7140u: goto label_1e7140;
        case 0x1e7144u: goto label_1e7144;
        case 0x1e7148u: goto label_1e7148;
        case 0x1e714cu: goto label_1e714c;
        case 0x1e7150u: goto label_1e7150;
        case 0x1e7154u: goto label_1e7154;
        case 0x1e7158u: goto label_1e7158;
        case 0x1e715cu: goto label_1e715c;
        case 0x1e7160u: goto label_1e7160;
        case 0x1e7164u: goto label_1e7164;
        case 0x1e7168u: goto label_1e7168;
        case 0x1e716cu: goto label_1e716c;
        case 0x1e7170u: goto label_1e7170;
        case 0x1e7174u: goto label_1e7174;
        case 0x1e7178u: goto label_1e7178;
        case 0x1e717cu: goto label_1e717c;
        case 0x1e7180u: goto label_1e7180;
        case 0x1e7184u: goto label_1e7184;
        case 0x1e7188u: goto label_1e7188;
        case 0x1e718cu: goto label_1e718c;
        case 0x1e7190u: goto label_1e7190;
        case 0x1e7194u: goto label_1e7194;
        case 0x1e7198u: goto label_1e7198;
        case 0x1e719cu: goto label_1e719c;
        case 0x1e71a0u: goto label_1e71a0;
        case 0x1e71a4u: goto label_1e71a4;
        case 0x1e71a8u: goto label_1e71a8;
        case 0x1e71acu: goto label_1e71ac;
        case 0x1e71b0u: goto label_1e71b0;
        case 0x1e71b4u: goto label_1e71b4;
        case 0x1e71b8u: goto label_1e71b8;
        case 0x1e71bcu: goto label_1e71bc;
        case 0x1e71c0u: goto label_1e71c0;
        case 0x1e71c4u: goto label_1e71c4;
        case 0x1e71c8u: goto label_1e71c8;
        case 0x1e71ccu: goto label_1e71cc;
        case 0x1e71d0u: goto label_1e71d0;
        case 0x1e71d4u: goto label_1e71d4;
        case 0x1e71d8u: goto label_1e71d8;
        case 0x1e71dcu: goto label_1e71dc;
        case 0x1e71e0u: goto label_1e71e0;
        case 0x1e71e4u: goto label_1e71e4;
        case 0x1e71e8u: goto label_1e71e8;
        case 0x1e71ecu: goto label_1e71ec;
        case 0x1e71f0u: goto label_1e71f0;
        case 0x1e71f4u: goto label_1e71f4;
        case 0x1e71f8u: goto label_1e71f8;
        case 0x1e71fcu: goto label_1e71fc;
        case 0x1e7200u: goto label_1e7200;
        case 0x1e7204u: goto label_1e7204;
        case 0x1e7208u: goto label_1e7208;
        case 0x1e720cu: goto label_1e720c;
        case 0x1e7210u: goto label_1e7210;
        case 0x1e7214u: goto label_1e7214;
        case 0x1e7218u: goto label_1e7218;
        case 0x1e721cu: goto label_1e721c;
        case 0x1e7220u: goto label_1e7220;
        case 0x1e7224u: goto label_1e7224;
        case 0x1e7228u: goto label_1e7228;
        case 0x1e722cu: goto label_1e722c;
        case 0x1e7230u: goto label_1e7230;
        case 0x1e7234u: goto label_1e7234;
        case 0x1e7238u: goto label_1e7238;
        case 0x1e723cu: goto label_1e723c;
        case 0x1e7240u: goto label_1e7240;
        case 0x1e7244u: goto label_1e7244;
        case 0x1e7248u: goto label_1e7248;
        case 0x1e724cu: goto label_1e724c;
        case 0x1e7250u: goto label_1e7250;
        case 0x1e7254u: goto label_1e7254;
        case 0x1e7258u: goto label_1e7258;
        case 0x1e725cu: goto label_1e725c;
        case 0x1e7260u: goto label_1e7260;
        case 0x1e7264u: goto label_1e7264;
        case 0x1e7268u: goto label_1e7268;
        case 0x1e726cu: goto label_1e726c;
        case 0x1e7270u: goto label_1e7270;
        case 0x1e7274u: goto label_1e7274;
        case 0x1e7278u: goto label_1e7278;
        case 0x1e727cu: goto label_1e727c;
        case 0x1e7280u: goto label_1e7280;
        case 0x1e7284u: goto label_1e7284;
        case 0x1e7288u: goto label_1e7288;
        case 0x1e728cu: goto label_1e728c;
        case 0x1e7290u: goto label_1e7290;
        case 0x1e7294u: goto label_1e7294;
        case 0x1e7298u: goto label_1e7298;
        case 0x1e729cu: goto label_1e729c;
        case 0x1e72a0u: goto label_1e72a0;
        case 0x1e72a4u: goto label_1e72a4;
        case 0x1e72a8u: goto label_1e72a8;
        case 0x1e72acu: goto label_1e72ac;
        case 0x1e72b0u: goto label_1e72b0;
        case 0x1e72b4u: goto label_1e72b4;
        case 0x1e72b8u: goto label_1e72b8;
        case 0x1e72bcu: goto label_1e72bc;
        case 0x1e72c0u: goto label_1e72c0;
        case 0x1e72c4u: goto label_1e72c4;
        case 0x1e72c8u: goto label_1e72c8;
        case 0x1e72ccu: goto label_1e72cc;
        case 0x1e72d0u: goto label_1e72d0;
        case 0x1e72d4u: goto label_1e72d4;
        case 0x1e72d8u: goto label_1e72d8;
        case 0x1e72dcu: goto label_1e72dc;
        case 0x1e72e0u: goto label_1e72e0;
        case 0x1e72e4u: goto label_1e72e4;
        case 0x1e72e8u: goto label_1e72e8;
        case 0x1e72ecu: goto label_1e72ec;
        case 0x1e72f0u: goto label_1e72f0;
        case 0x1e72f4u: goto label_1e72f4;
        case 0x1e72f8u: goto label_1e72f8;
        case 0x1e72fcu: goto label_1e72fc;
        case 0x1e7300u: goto label_1e7300;
        case 0x1e7304u: goto label_1e7304;
        case 0x1e7308u: goto label_1e7308;
        case 0x1e730cu: goto label_1e730c;
        case 0x1e7310u: goto label_1e7310;
        case 0x1e7314u: goto label_1e7314;
        case 0x1e7318u: goto label_1e7318;
        case 0x1e731cu: goto label_1e731c;
        case 0x1e7320u: goto label_1e7320;
        case 0x1e7324u: goto label_1e7324;
        case 0x1e7328u: goto label_1e7328;
        case 0x1e732cu: goto label_1e732c;
        case 0x1e7330u: goto label_1e7330;
        case 0x1e7334u: goto label_1e7334;
        case 0x1e7338u: goto label_1e7338;
        case 0x1e733cu: goto label_1e733c;
        case 0x1e7340u: goto label_1e7340;
        case 0x1e7344u: goto label_1e7344;
        case 0x1e7348u: goto label_1e7348;
        case 0x1e734cu: goto label_1e734c;
        case 0x1e7350u: goto label_1e7350;
        case 0x1e7354u: goto label_1e7354;
        case 0x1e7358u: goto label_1e7358;
        case 0x1e735cu: goto label_1e735c;
        case 0x1e7360u: goto label_1e7360;
        case 0x1e7364u: goto label_1e7364;
        case 0x1e7368u: goto label_1e7368;
        case 0x1e736cu: goto label_1e736c;
        case 0x1e7370u: goto label_1e7370;
        case 0x1e7374u: goto label_1e7374;
        case 0x1e7378u: goto label_1e7378;
        case 0x1e737cu: goto label_1e737c;
        case 0x1e7380u: goto label_1e7380;
        case 0x1e7384u: goto label_1e7384;
        case 0x1e7388u: goto label_1e7388;
        case 0x1e738cu: goto label_1e738c;
        case 0x1e7390u: goto label_1e7390;
        case 0x1e7394u: goto label_1e7394;
        case 0x1e7398u: goto label_1e7398;
        case 0x1e739cu: goto label_1e739c;
        case 0x1e73a0u: goto label_1e73a0;
        case 0x1e73a4u: goto label_1e73a4;
        case 0x1e73a8u: goto label_1e73a8;
        case 0x1e73acu: goto label_1e73ac;
        case 0x1e73b0u: goto label_1e73b0;
        case 0x1e73b4u: goto label_1e73b4;
        case 0x1e73b8u: goto label_1e73b8;
        case 0x1e73bcu: goto label_1e73bc;
        case 0x1e73c0u: goto label_1e73c0;
        case 0x1e73c4u: goto label_1e73c4;
        case 0x1e73c8u: goto label_1e73c8;
        case 0x1e73ccu: goto label_1e73cc;
        case 0x1e73d0u: goto label_1e73d0;
        case 0x1e73d4u: goto label_1e73d4;
        case 0x1e73d8u: goto label_1e73d8;
        case 0x1e73dcu: goto label_1e73dc;
        case 0x1e73e0u: goto label_1e73e0;
        case 0x1e73e4u: goto label_1e73e4;
        case 0x1e73e8u: goto label_1e73e8;
        case 0x1e73ecu: goto label_1e73ec;
        case 0x1e73f0u: goto label_1e73f0;
        case 0x1e73f4u: goto label_1e73f4;
        case 0x1e73f8u: goto label_1e73f8;
        case 0x1e73fcu: goto label_1e73fc;
        case 0x1e7400u: goto label_1e7400;
        case 0x1e7404u: goto label_1e7404;
        case 0x1e7408u: goto label_1e7408;
        case 0x1e740cu: goto label_1e740c;
        case 0x1e7410u: goto label_1e7410;
        case 0x1e7414u: goto label_1e7414;
        case 0x1e7418u: goto label_1e7418;
        case 0x1e741cu: goto label_1e741c;
        case 0x1e7420u: goto label_1e7420;
        case 0x1e7424u: goto label_1e7424;
        case 0x1e7428u: goto label_1e7428;
        case 0x1e742cu: goto label_1e742c;
        case 0x1e7430u: goto label_1e7430;
        case 0x1e7434u: goto label_1e7434;
        case 0x1e7438u: goto label_1e7438;
        case 0x1e743cu: goto label_1e743c;
        case 0x1e7440u: goto label_1e7440;
        case 0x1e7444u: goto label_1e7444;
        case 0x1e7448u: goto label_1e7448;
        case 0x1e744cu: goto label_1e744c;
        case 0x1e7450u: goto label_1e7450;
        case 0x1e7454u: goto label_1e7454;
        case 0x1e7458u: goto label_1e7458;
        case 0x1e745cu: goto label_1e745c;
        case 0x1e7460u: goto label_1e7460;
        case 0x1e7464u: goto label_1e7464;
        case 0x1e7468u: goto label_1e7468;
        case 0x1e746cu: goto label_1e746c;
        case 0x1e7470u: goto label_1e7470;
        case 0x1e7474u: goto label_1e7474;
        case 0x1e7478u: goto label_1e7478;
        case 0x1e747cu: goto label_1e747c;
        case 0x1e7480u: goto label_1e7480;
        case 0x1e7484u: goto label_1e7484;
        case 0x1e7488u: goto label_1e7488;
        case 0x1e748cu: goto label_1e748c;
        case 0x1e7490u: goto label_1e7490;
        case 0x1e7494u: goto label_1e7494;
        case 0x1e7498u: goto label_1e7498;
        case 0x1e749cu: goto label_1e749c;
        case 0x1e74a0u: goto label_1e74a0;
        case 0x1e74a4u: goto label_1e74a4;
        case 0x1e74a8u: goto label_1e74a8;
        case 0x1e74acu: goto label_1e74ac;
        case 0x1e74b0u: goto label_1e74b0;
        case 0x1e74b4u: goto label_1e74b4;
        case 0x1e74b8u: goto label_1e74b8;
        case 0x1e74bcu: goto label_1e74bc;
        case 0x1e74c0u: goto label_1e74c0;
        case 0x1e74c4u: goto label_1e74c4;
        case 0x1e74c8u: goto label_1e74c8;
        case 0x1e74ccu: goto label_1e74cc;
        case 0x1e74d0u: goto label_1e74d0;
        case 0x1e74d4u: goto label_1e74d4;
        case 0x1e74d8u: goto label_1e74d8;
        case 0x1e74dcu: goto label_1e74dc;
        case 0x1e74e0u: goto label_1e74e0;
        case 0x1e74e4u: goto label_1e74e4;
        case 0x1e74e8u: goto label_1e74e8;
        case 0x1e74ecu: goto label_1e74ec;
        case 0x1e74f0u: goto label_1e74f0;
        case 0x1e74f4u: goto label_1e74f4;
        case 0x1e74f8u: goto label_1e74f8;
        case 0x1e74fcu: goto label_1e74fc;
        case 0x1e7500u: goto label_1e7500;
        case 0x1e7504u: goto label_1e7504;
        case 0x1e7508u: goto label_1e7508;
        case 0x1e750cu: goto label_1e750c;
        case 0x1e7510u: goto label_1e7510;
        case 0x1e7514u: goto label_1e7514;
        case 0x1e7518u: goto label_1e7518;
        case 0x1e751cu: goto label_1e751c;
        case 0x1e7520u: goto label_1e7520;
        case 0x1e7524u: goto label_1e7524;
        case 0x1e7528u: goto label_1e7528;
        case 0x1e752cu: goto label_1e752c;
        case 0x1e7530u: goto label_1e7530;
        case 0x1e7534u: goto label_1e7534;
        case 0x1e7538u: goto label_1e7538;
        case 0x1e753cu: goto label_1e753c;
        case 0x1e7540u: goto label_1e7540;
        case 0x1e7544u: goto label_1e7544;
        case 0x1e7548u: goto label_1e7548;
        case 0x1e754cu: goto label_1e754c;
        case 0x1e7550u: goto label_1e7550;
        case 0x1e7554u: goto label_1e7554;
        case 0x1e7558u: goto label_1e7558;
        case 0x1e755cu: goto label_1e755c;
        case 0x1e7560u: goto label_1e7560;
        case 0x1e7564u: goto label_1e7564;
        case 0x1e7568u: goto label_1e7568;
        case 0x1e756cu: goto label_1e756c;
        case 0x1e7570u: goto label_1e7570;
        case 0x1e7574u: goto label_1e7574;
        case 0x1e7578u: goto label_1e7578;
        case 0x1e757cu: goto label_1e757c;
        case 0x1e7580u: goto label_1e7580;
        case 0x1e7584u: goto label_1e7584;
        case 0x1e7588u: goto label_1e7588;
        case 0x1e758cu: goto label_1e758c;
        case 0x1e7590u: goto label_1e7590;
        case 0x1e7594u: goto label_1e7594;
        case 0x1e7598u: goto label_1e7598;
        case 0x1e759cu: goto label_1e759c;
        case 0x1e75a0u: goto label_1e75a0;
        case 0x1e75a4u: goto label_1e75a4;
        case 0x1e75a8u: goto label_1e75a8;
        case 0x1e75acu: goto label_1e75ac;
        case 0x1e75b0u: goto label_1e75b0;
        case 0x1e75b4u: goto label_1e75b4;
        case 0x1e75b8u: goto label_1e75b8;
        case 0x1e75bcu: goto label_1e75bc;
        case 0x1e75c0u: goto label_1e75c0;
        case 0x1e75c4u: goto label_1e75c4;
        case 0x1e75c8u: goto label_1e75c8;
        case 0x1e75ccu: goto label_1e75cc;
        case 0x1e75d0u: goto label_1e75d0;
        case 0x1e75d4u: goto label_1e75d4;
        case 0x1e75d8u: goto label_1e75d8;
        case 0x1e75dcu: goto label_1e75dc;
        case 0x1e75e0u: goto label_1e75e0;
        case 0x1e75e4u: goto label_1e75e4;
        case 0x1e75e8u: goto label_1e75e8;
        case 0x1e75ecu: goto label_1e75ec;
        case 0x1e75f0u: goto label_1e75f0;
        case 0x1e75f4u: goto label_1e75f4;
        case 0x1e75f8u: goto label_1e75f8;
        case 0x1e75fcu: goto label_1e75fc;
        case 0x1e7600u: goto label_1e7600;
        case 0x1e7604u: goto label_1e7604;
        case 0x1e7608u: goto label_1e7608;
        case 0x1e760cu: goto label_1e760c;
        case 0x1e7610u: goto label_1e7610;
        case 0x1e7614u: goto label_1e7614;
        case 0x1e7618u: goto label_1e7618;
        case 0x1e761cu: goto label_1e761c;
        case 0x1e7620u: goto label_1e7620;
        case 0x1e7624u: goto label_1e7624;
        case 0x1e7628u: goto label_1e7628;
        case 0x1e762cu: goto label_1e762c;
        case 0x1e7630u: goto label_1e7630;
        case 0x1e7634u: goto label_1e7634;
        case 0x1e7638u: goto label_1e7638;
        case 0x1e763cu: goto label_1e763c;
        case 0x1e7640u: goto label_1e7640;
        case 0x1e7644u: goto label_1e7644;
        case 0x1e7648u: goto label_1e7648;
        case 0x1e764cu: goto label_1e764c;
        case 0x1e7650u: goto label_1e7650;
        case 0x1e7654u: goto label_1e7654;
        case 0x1e7658u: goto label_1e7658;
        case 0x1e765cu: goto label_1e765c;
        case 0x1e7660u: goto label_1e7660;
        case 0x1e7664u: goto label_1e7664;
        case 0x1e7668u: goto label_1e7668;
        case 0x1e766cu: goto label_1e766c;
        case 0x1e7670u: goto label_1e7670;
        case 0x1e7674u: goto label_1e7674;
        case 0x1e7678u: goto label_1e7678;
        case 0x1e767cu: goto label_1e767c;
        case 0x1e7680u: goto label_1e7680;
        case 0x1e7684u: goto label_1e7684;
        case 0x1e7688u: goto label_1e7688;
        case 0x1e768cu: goto label_1e768c;
        case 0x1e7690u: goto label_1e7690;
        case 0x1e7694u: goto label_1e7694;
        case 0x1e7698u: goto label_1e7698;
        case 0x1e769cu: goto label_1e769c;
        case 0x1e76a0u: goto label_1e76a0;
        case 0x1e76a4u: goto label_1e76a4;
        case 0x1e76a8u: goto label_1e76a8;
        case 0x1e76acu: goto label_1e76ac;
        case 0x1e76b0u: goto label_1e76b0;
        case 0x1e76b4u: goto label_1e76b4;
        case 0x1e76b8u: goto label_1e76b8;
        case 0x1e76bcu: goto label_1e76bc;
        case 0x1e76c0u: goto label_1e76c0;
        case 0x1e76c4u: goto label_1e76c4;
        case 0x1e76c8u: goto label_1e76c8;
        case 0x1e76ccu: goto label_1e76cc;
        case 0x1e76d0u: goto label_1e76d0;
        case 0x1e76d4u: goto label_1e76d4;
        case 0x1e76d8u: goto label_1e76d8;
        case 0x1e76dcu: goto label_1e76dc;
        case 0x1e76e0u: goto label_1e76e0;
        case 0x1e76e4u: goto label_1e76e4;
        case 0x1e76e8u: goto label_1e76e8;
        case 0x1e76ecu: goto label_1e76ec;
        case 0x1e76f0u: goto label_1e76f0;
        case 0x1e76f4u: goto label_1e76f4;
        case 0x1e76f8u: goto label_1e76f8;
        case 0x1e76fcu: goto label_1e76fc;
        case 0x1e7700u: goto label_1e7700;
        case 0x1e7704u: goto label_1e7704;
        case 0x1e7708u: goto label_1e7708;
        case 0x1e770cu: goto label_1e770c;
        case 0x1e7710u: goto label_1e7710;
        case 0x1e7714u: goto label_1e7714;
        case 0x1e7718u: goto label_1e7718;
        case 0x1e771cu: goto label_1e771c;
        case 0x1e7720u: goto label_1e7720;
        case 0x1e7724u: goto label_1e7724;
        case 0x1e7728u: goto label_1e7728;
        case 0x1e772cu: goto label_1e772c;
        case 0x1e7730u: goto label_1e7730;
        case 0x1e7734u: goto label_1e7734;
        case 0x1e7738u: goto label_1e7738;
        case 0x1e773cu: goto label_1e773c;
        case 0x1e7740u: goto label_1e7740;
        case 0x1e7744u: goto label_1e7744;
        case 0x1e7748u: goto label_1e7748;
        case 0x1e774cu: goto label_1e774c;
        case 0x1e7750u: goto label_1e7750;
        case 0x1e7754u: goto label_1e7754;
        case 0x1e7758u: goto label_1e7758;
        case 0x1e775cu: goto label_1e775c;
        case 0x1e7760u: goto label_1e7760;
        case 0x1e7764u: goto label_1e7764;
        case 0x1e7768u: goto label_1e7768;
        case 0x1e776cu: goto label_1e776c;
        case 0x1e7770u: goto label_1e7770;
        case 0x1e7774u: goto label_1e7774;
        case 0x1e7778u: goto label_1e7778;
        case 0x1e777cu: goto label_1e777c;
        case 0x1e7780u: goto label_1e7780;
        case 0x1e7784u: goto label_1e7784;
        case 0x1e7788u: goto label_1e7788;
        case 0x1e778cu: goto label_1e778c;
        case 0x1e7790u: goto label_1e7790;
        case 0x1e7794u: goto label_1e7794;
        case 0x1e7798u: goto label_1e7798;
        case 0x1e779cu: goto label_1e779c;
        case 0x1e77a0u: goto label_1e77a0;
        case 0x1e77a4u: goto label_1e77a4;
        case 0x1e77a8u: goto label_1e77a8;
        case 0x1e77acu: goto label_1e77ac;
        case 0x1e77b0u: goto label_1e77b0;
        case 0x1e77b4u: goto label_1e77b4;
        case 0x1e77b8u: goto label_1e77b8;
        case 0x1e77bcu: goto label_1e77bc;
        case 0x1e77c0u: goto label_1e77c0;
        case 0x1e77c4u: goto label_1e77c4;
        case 0x1e77c8u: goto label_1e77c8;
        case 0x1e77ccu: goto label_1e77cc;
        case 0x1e77d0u: goto label_1e77d0;
        case 0x1e77d4u: goto label_1e77d4;
        case 0x1e77d8u: goto label_1e77d8;
        case 0x1e77dcu: goto label_1e77dc;
        case 0x1e77e0u: goto label_1e77e0;
        case 0x1e77e4u: goto label_1e77e4;
        case 0x1e77e8u: goto label_1e77e8;
        case 0x1e77ecu: goto label_1e77ec;
        case 0x1e77f0u: goto label_1e77f0;
        case 0x1e77f4u: goto label_1e77f4;
        case 0x1e77f8u: goto label_1e77f8;
        case 0x1e77fcu: goto label_1e77fc;
        case 0x1e7800u: goto label_1e7800;
        case 0x1e7804u: goto label_1e7804;
        case 0x1e7808u: goto label_1e7808;
        case 0x1e780cu: goto label_1e780c;
        case 0x1e7810u: goto label_1e7810;
        case 0x1e7814u: goto label_1e7814;
        case 0x1e7818u: goto label_1e7818;
        case 0x1e781cu: goto label_1e781c;
        case 0x1e7820u: goto label_1e7820;
        case 0x1e7824u: goto label_1e7824;
        case 0x1e7828u: goto label_1e7828;
        case 0x1e782cu: goto label_1e782c;
        case 0x1e7830u: goto label_1e7830;
        case 0x1e7834u: goto label_1e7834;
        case 0x1e7838u: goto label_1e7838;
        case 0x1e783cu: goto label_1e783c;
        case 0x1e7840u: goto label_1e7840;
        case 0x1e7844u: goto label_1e7844;
        case 0x1e7848u: goto label_1e7848;
        case 0x1e784cu: goto label_1e784c;
        case 0x1e7850u: goto label_1e7850;
        case 0x1e7854u: goto label_1e7854;
        case 0x1e7858u: goto label_1e7858;
        case 0x1e785cu: goto label_1e785c;
        case 0x1e7860u: goto label_1e7860;
        case 0x1e7864u: goto label_1e7864;
        case 0x1e7868u: goto label_1e7868;
        case 0x1e786cu: goto label_1e786c;
        case 0x1e7870u: goto label_1e7870;
        case 0x1e7874u: goto label_1e7874;
        case 0x1e7878u: goto label_1e7878;
        case 0x1e787cu: goto label_1e787c;
        case 0x1e7880u: goto label_1e7880;
        case 0x1e7884u: goto label_1e7884;
        case 0x1e7888u: goto label_1e7888;
        case 0x1e788cu: goto label_1e788c;
        case 0x1e7890u: goto label_1e7890;
        case 0x1e7894u: goto label_1e7894;
        case 0x1e7898u: goto label_1e7898;
        case 0x1e789cu: goto label_1e789c;
        case 0x1e78a0u: goto label_1e78a0;
        case 0x1e78a4u: goto label_1e78a4;
        case 0x1e78a8u: goto label_1e78a8;
        case 0x1e78acu: goto label_1e78ac;
        case 0x1e78b0u: goto label_1e78b0;
        case 0x1e78b4u: goto label_1e78b4;
        case 0x1e78b8u: goto label_1e78b8;
        case 0x1e78bcu: goto label_1e78bc;
        case 0x1e78c0u: goto label_1e78c0;
        case 0x1e78c4u: goto label_1e78c4;
        case 0x1e78c8u: goto label_1e78c8;
        case 0x1e78ccu: goto label_1e78cc;
        case 0x1e78d0u: goto label_1e78d0;
        case 0x1e78d4u: goto label_1e78d4;
        case 0x1e78d8u: goto label_1e78d8;
        case 0x1e78dcu: goto label_1e78dc;
        case 0x1e78e0u: goto label_1e78e0;
        case 0x1e78e4u: goto label_1e78e4;
        case 0x1e78e8u: goto label_1e78e8;
        case 0x1e78ecu: goto label_1e78ec;
        case 0x1e78f0u: goto label_1e78f0;
        case 0x1e78f4u: goto label_1e78f4;
        case 0x1e78f8u: goto label_1e78f8;
        case 0x1e78fcu: goto label_1e78fc;
        case 0x1e7900u: goto label_1e7900;
        case 0x1e7904u: goto label_1e7904;
        case 0x1e7908u: goto label_1e7908;
        case 0x1e790cu: goto label_1e790c;
        case 0x1e7910u: goto label_1e7910;
        case 0x1e7914u: goto label_1e7914;
        case 0x1e7918u: goto label_1e7918;
        case 0x1e791cu: goto label_1e791c;
        case 0x1e7920u: goto label_1e7920;
        case 0x1e7924u: goto label_1e7924;
        case 0x1e7928u: goto label_1e7928;
        case 0x1e792cu: goto label_1e792c;
        case 0x1e7930u: goto label_1e7930;
        case 0x1e7934u: goto label_1e7934;
        case 0x1e7938u: goto label_1e7938;
        case 0x1e793cu: goto label_1e793c;
        case 0x1e7940u: goto label_1e7940;
        case 0x1e7944u: goto label_1e7944;
        case 0x1e7948u: goto label_1e7948;
        case 0x1e794cu: goto label_1e794c;
        case 0x1e7950u: goto label_1e7950;
        case 0x1e7954u: goto label_1e7954;
        case 0x1e7958u: goto label_1e7958;
        case 0x1e795cu: goto label_1e795c;
        case 0x1e7960u: goto label_1e7960;
        case 0x1e7964u: goto label_1e7964;
        case 0x1e7968u: goto label_1e7968;
        case 0x1e796cu: goto label_1e796c;
        case 0x1e7970u: goto label_1e7970;
        case 0x1e7974u: goto label_1e7974;
        case 0x1e7978u: goto label_1e7978;
        case 0x1e797cu: goto label_1e797c;
        case 0x1e7980u: goto label_1e7980;
        case 0x1e7984u: goto label_1e7984;
        case 0x1e7988u: goto label_1e7988;
        case 0x1e798cu: goto label_1e798c;
        case 0x1e7990u: goto label_1e7990;
        case 0x1e7994u: goto label_1e7994;
        case 0x1e7998u: goto label_1e7998;
        case 0x1e799cu: goto label_1e799c;
        case 0x1e79a0u: goto label_1e79a0;
        case 0x1e79a4u: goto label_1e79a4;
        case 0x1e79a8u: goto label_1e79a8;
        case 0x1e79acu: goto label_1e79ac;
        case 0x1e79b0u: goto label_1e79b0;
        case 0x1e79b4u: goto label_1e79b4;
        case 0x1e79b8u: goto label_1e79b8;
        case 0x1e79bcu: goto label_1e79bc;
        case 0x1e79c0u: goto label_1e79c0;
        case 0x1e79c4u: goto label_1e79c4;
        case 0x1e79c8u: goto label_1e79c8;
        case 0x1e79ccu: goto label_1e79cc;
        case 0x1e79d0u: goto label_1e79d0;
        case 0x1e79d4u: goto label_1e79d4;
        case 0x1e79d8u: goto label_1e79d8;
        case 0x1e79dcu: goto label_1e79dc;
        case 0x1e79e0u: goto label_1e79e0;
        case 0x1e79e4u: goto label_1e79e4;
        case 0x1e79e8u: goto label_1e79e8;
        case 0x1e79ecu: goto label_1e79ec;
        case 0x1e79f0u: goto label_1e79f0;
        case 0x1e79f4u: goto label_1e79f4;
        case 0x1e79f8u: goto label_1e79f8;
        case 0x1e79fcu: goto label_1e79fc;
        case 0x1e7a00u: goto label_1e7a00;
        case 0x1e7a04u: goto label_1e7a04;
        case 0x1e7a08u: goto label_1e7a08;
        case 0x1e7a0cu: goto label_1e7a0c;
        case 0x1e7a10u: goto label_1e7a10;
        case 0x1e7a14u: goto label_1e7a14;
        case 0x1e7a18u: goto label_1e7a18;
        case 0x1e7a1cu: goto label_1e7a1c;
        case 0x1e7a20u: goto label_1e7a20;
        case 0x1e7a24u: goto label_1e7a24;
        case 0x1e7a28u: goto label_1e7a28;
        case 0x1e7a2cu: goto label_1e7a2c;
        case 0x1e7a30u: goto label_1e7a30;
        case 0x1e7a34u: goto label_1e7a34;
        case 0x1e7a38u: goto label_1e7a38;
        case 0x1e7a3cu: goto label_1e7a3c;
        case 0x1e7a40u: goto label_1e7a40;
        case 0x1e7a44u: goto label_1e7a44;
        case 0x1e7a48u: goto label_1e7a48;
        case 0x1e7a4cu: goto label_1e7a4c;
        case 0x1e7a50u: goto label_1e7a50;
        case 0x1e7a54u: goto label_1e7a54;
        case 0x1e7a58u: goto label_1e7a58;
        case 0x1e7a5cu: goto label_1e7a5c;
        case 0x1e7a60u: goto label_1e7a60;
        case 0x1e7a64u: goto label_1e7a64;
        case 0x1e7a68u: goto label_1e7a68;
        case 0x1e7a6cu: goto label_1e7a6c;
        case 0x1e7a70u: goto label_1e7a70;
        case 0x1e7a74u: goto label_1e7a74;
        case 0x1e7a78u: goto label_1e7a78;
        case 0x1e7a7cu: goto label_1e7a7c;
        case 0x1e7a80u: goto label_1e7a80;
        case 0x1e7a84u: goto label_1e7a84;
        case 0x1e7a88u: goto label_1e7a88;
        case 0x1e7a8cu: goto label_1e7a8c;
        case 0x1e7a90u: goto label_1e7a90;
        case 0x1e7a94u: goto label_1e7a94;
        case 0x1e7a98u: goto label_1e7a98;
        case 0x1e7a9cu: goto label_1e7a9c;
        case 0x1e7aa0u: goto label_1e7aa0;
        case 0x1e7aa4u: goto label_1e7aa4;
        case 0x1e7aa8u: goto label_1e7aa8;
        case 0x1e7aacu: goto label_1e7aac;
        case 0x1e7ab0u: goto label_1e7ab0;
        case 0x1e7ab4u: goto label_1e7ab4;
        case 0x1e7ab8u: goto label_1e7ab8;
        case 0x1e7abcu: goto label_1e7abc;
        case 0x1e7ac0u: goto label_1e7ac0;
        case 0x1e7ac4u: goto label_1e7ac4;
        case 0x1e7ac8u: goto label_1e7ac8;
        case 0x1e7accu: goto label_1e7acc;
        case 0x1e7ad0u: goto label_1e7ad0;
        case 0x1e7ad4u: goto label_1e7ad4;
        case 0x1e7ad8u: goto label_1e7ad8;
        case 0x1e7adcu: goto label_1e7adc;
        case 0x1e7ae0u: goto label_1e7ae0;
        case 0x1e7ae4u: goto label_1e7ae4;
        case 0x1e7ae8u: goto label_1e7ae8;
        case 0x1e7aecu: goto label_1e7aec;
        case 0x1e7af0u: goto label_1e7af0;
        case 0x1e7af4u: goto label_1e7af4;
        case 0x1e7af8u: goto label_1e7af8;
        case 0x1e7afcu: goto label_1e7afc;
        case 0x1e7b00u: goto label_1e7b00;
        case 0x1e7b04u: goto label_1e7b04;
        case 0x1e7b08u: goto label_1e7b08;
        case 0x1e7b0cu: goto label_1e7b0c;
        case 0x1e7b10u: goto label_1e7b10;
        case 0x1e7b14u: goto label_1e7b14;
        case 0x1e7b18u: goto label_1e7b18;
        case 0x1e7b1cu: goto label_1e7b1c;
        case 0x1e7b20u: goto label_1e7b20;
        case 0x1e7b24u: goto label_1e7b24;
        case 0x1e7b28u: goto label_1e7b28;
        case 0x1e7b2cu: goto label_1e7b2c;
        case 0x1e7b30u: goto label_1e7b30;
        case 0x1e7b34u: goto label_1e7b34;
        case 0x1e7b38u: goto label_1e7b38;
        case 0x1e7b3cu: goto label_1e7b3c;
        case 0x1e7b40u: goto label_1e7b40;
        case 0x1e7b44u: goto label_1e7b44;
        case 0x1e7b48u: goto label_1e7b48;
        case 0x1e7b4cu: goto label_1e7b4c;
        case 0x1e7b50u: goto label_1e7b50;
        case 0x1e7b54u: goto label_1e7b54;
        case 0x1e7b58u: goto label_1e7b58;
        case 0x1e7b5cu: goto label_1e7b5c;
        case 0x1e7b60u: goto label_1e7b60;
        case 0x1e7b64u: goto label_1e7b64;
        case 0x1e7b68u: goto label_1e7b68;
        case 0x1e7b6cu: goto label_1e7b6c;
        case 0x1e7b70u: goto label_1e7b70;
        case 0x1e7b74u: goto label_1e7b74;
        case 0x1e7b78u: goto label_1e7b78;
        case 0x1e7b7cu: goto label_1e7b7c;
        case 0x1e7b80u: goto label_1e7b80;
        case 0x1e7b84u: goto label_1e7b84;
        case 0x1e7b88u: goto label_1e7b88;
        case 0x1e7b8cu: goto label_1e7b8c;
        case 0x1e7b90u: goto label_1e7b90;
        case 0x1e7b94u: goto label_1e7b94;
        case 0x1e7b98u: goto label_1e7b98;
        case 0x1e7b9cu: goto label_1e7b9c;
        case 0x1e7ba0u: goto label_1e7ba0;
        case 0x1e7ba4u: goto label_1e7ba4;
        case 0x1e7ba8u: goto label_1e7ba8;
        case 0x1e7bacu: goto label_1e7bac;
        case 0x1e7bb0u: goto label_1e7bb0;
        case 0x1e7bb4u: goto label_1e7bb4;
        case 0x1e7bb8u: goto label_1e7bb8;
        case 0x1e7bbcu: goto label_1e7bbc;
        case 0x1e7bc0u: goto label_1e7bc0;
        case 0x1e7bc4u: goto label_1e7bc4;
        case 0x1e7bc8u: goto label_1e7bc8;
        case 0x1e7bccu: goto label_1e7bcc;
        case 0x1e7bd0u: goto label_1e7bd0;
        case 0x1e7bd4u: goto label_1e7bd4;
        case 0x1e7bd8u: goto label_1e7bd8;
        case 0x1e7bdcu: goto label_1e7bdc;
        case 0x1e7be0u: goto label_1e7be0;
        case 0x1e7be4u: goto label_1e7be4;
        case 0x1e7be8u: goto label_1e7be8;
        case 0x1e7becu: goto label_1e7bec;
        case 0x1e7bf0u: goto label_1e7bf0;
        case 0x1e7bf4u: goto label_1e7bf4;
        case 0x1e7bf8u: goto label_1e7bf8;
        case 0x1e7bfcu: goto label_1e7bfc;
        case 0x1e7c00u: goto label_1e7c00;
        case 0x1e7c04u: goto label_1e7c04;
        case 0x1e7c08u: goto label_1e7c08;
        case 0x1e7c0cu: goto label_1e7c0c;
        case 0x1e7c10u: goto label_1e7c10;
        case 0x1e7c14u: goto label_1e7c14;
        case 0x1e7c18u: goto label_1e7c18;
        case 0x1e7c1cu: goto label_1e7c1c;
        case 0x1e7c20u: goto label_1e7c20;
        case 0x1e7c24u: goto label_1e7c24;
        case 0x1e7c28u: goto label_1e7c28;
        case 0x1e7c2cu: goto label_1e7c2c;
        case 0x1e7c30u: goto label_1e7c30;
        case 0x1e7c34u: goto label_1e7c34;
        case 0x1e7c38u: goto label_1e7c38;
        case 0x1e7c3cu: goto label_1e7c3c;
        case 0x1e7c40u: goto label_1e7c40;
        case 0x1e7c44u: goto label_1e7c44;
        case 0x1e7c48u: goto label_1e7c48;
        case 0x1e7c4cu: goto label_1e7c4c;
        case 0x1e7c50u: goto label_1e7c50;
        case 0x1e7c54u: goto label_1e7c54;
        case 0x1e7c58u: goto label_1e7c58;
        case 0x1e7c5cu: goto label_1e7c5c;
        case 0x1e7c60u: goto label_1e7c60;
        case 0x1e7c64u: goto label_1e7c64;
        case 0x1e7c68u: goto label_1e7c68;
        case 0x1e7c6cu: goto label_1e7c6c;
        case 0x1e7c70u: goto label_1e7c70;
        case 0x1e7c74u: goto label_1e7c74;
        case 0x1e7c78u: goto label_1e7c78;
        case 0x1e7c7cu: goto label_1e7c7c;
        case 0x1e7c80u: goto label_1e7c80;
        case 0x1e7c84u: goto label_1e7c84;
        case 0x1e7c88u: goto label_1e7c88;
        case 0x1e7c8cu: goto label_1e7c8c;
        case 0x1e7c90u: goto label_1e7c90;
        case 0x1e7c94u: goto label_1e7c94;
        case 0x1e7c98u: goto label_1e7c98;
        case 0x1e7c9cu: goto label_1e7c9c;
        case 0x1e7ca0u: goto label_1e7ca0;
        case 0x1e7ca4u: goto label_1e7ca4;
        case 0x1e7ca8u: goto label_1e7ca8;
        case 0x1e7cacu: goto label_1e7cac;
        case 0x1e7cb0u: goto label_1e7cb0;
        case 0x1e7cb4u: goto label_1e7cb4;
        case 0x1e7cb8u: goto label_1e7cb8;
        case 0x1e7cbcu: goto label_1e7cbc;
        case 0x1e7cc0u: goto label_1e7cc0;
        case 0x1e7cc4u: goto label_1e7cc4;
        case 0x1e7cc8u: goto label_1e7cc8;
        case 0x1e7cccu: goto label_1e7ccc;
        case 0x1e7cd0u: goto label_1e7cd0;
        case 0x1e7cd4u: goto label_1e7cd4;
        case 0x1e7cd8u: goto label_1e7cd8;
        case 0x1e7cdcu: goto label_1e7cdc;
        case 0x1e7ce0u: goto label_1e7ce0;
        case 0x1e7ce4u: goto label_1e7ce4;
        case 0x1e7ce8u: goto label_1e7ce8;
        case 0x1e7cecu: goto label_1e7cec;
        case 0x1e7cf0u: goto label_1e7cf0;
        case 0x1e7cf4u: goto label_1e7cf4;
        case 0x1e7cf8u: goto label_1e7cf8;
        case 0x1e7cfcu: goto label_1e7cfc;
        case 0x1e7d00u: goto label_1e7d00;
        case 0x1e7d04u: goto label_1e7d04;
        case 0x1e7d08u: goto label_1e7d08;
        case 0x1e7d0cu: goto label_1e7d0c;
        case 0x1e7d10u: goto label_1e7d10;
        case 0x1e7d14u: goto label_1e7d14;
        case 0x1e7d18u: goto label_1e7d18;
        case 0x1e7d1cu: goto label_1e7d1c;
        case 0x1e7d20u: goto label_1e7d20;
        case 0x1e7d24u: goto label_1e7d24;
        case 0x1e7d28u: goto label_1e7d28;
        case 0x1e7d2cu: goto label_1e7d2c;
        case 0x1e7d30u: goto label_1e7d30;
        case 0x1e7d34u: goto label_1e7d34;
        case 0x1e7d38u: goto label_1e7d38;
        case 0x1e7d3cu: goto label_1e7d3c;
        case 0x1e7d40u: goto label_1e7d40;
        case 0x1e7d44u: goto label_1e7d44;
        case 0x1e7d48u: goto label_1e7d48;
        case 0x1e7d4cu: goto label_1e7d4c;
        case 0x1e7d50u: goto label_1e7d50;
        case 0x1e7d54u: goto label_1e7d54;
        case 0x1e7d58u: goto label_1e7d58;
        case 0x1e7d5cu: goto label_1e7d5c;
        case 0x1e7d60u: goto label_1e7d60;
        case 0x1e7d64u: goto label_1e7d64;
        case 0x1e7d68u: goto label_1e7d68;
        case 0x1e7d6cu: goto label_1e7d6c;
        case 0x1e7d70u: goto label_1e7d70;
        case 0x1e7d74u: goto label_1e7d74;
        case 0x1e7d78u: goto label_1e7d78;
        case 0x1e7d7cu: goto label_1e7d7c;
        case 0x1e7d80u: goto label_1e7d80;
        case 0x1e7d84u: goto label_1e7d84;
        case 0x1e7d88u: goto label_1e7d88;
        case 0x1e7d8cu: goto label_1e7d8c;
        case 0x1e7d90u: goto label_1e7d90;
        case 0x1e7d94u: goto label_1e7d94;
        case 0x1e7d98u: goto label_1e7d98;
        case 0x1e7d9cu: goto label_1e7d9c;
        case 0x1e7da0u: goto label_1e7da0;
        case 0x1e7da4u: goto label_1e7da4;
        case 0x1e7da8u: goto label_1e7da8;
        case 0x1e7dacu: goto label_1e7dac;
        case 0x1e7db0u: goto label_1e7db0;
        case 0x1e7db4u: goto label_1e7db4;
        case 0x1e7db8u: goto label_1e7db8;
        case 0x1e7dbcu: goto label_1e7dbc;
        case 0x1e7dc0u: goto label_1e7dc0;
        case 0x1e7dc4u: goto label_1e7dc4;
        case 0x1e7dc8u: goto label_1e7dc8;
        case 0x1e7dccu: goto label_1e7dcc;
        case 0x1e7dd0u: goto label_1e7dd0;
        case 0x1e7dd4u: goto label_1e7dd4;
        case 0x1e7dd8u: goto label_1e7dd8;
        case 0x1e7ddcu: goto label_1e7ddc;
        case 0x1e7de0u: goto label_1e7de0;
        case 0x1e7de4u: goto label_1e7de4;
        case 0x1e7de8u: goto label_1e7de8;
        case 0x1e7decu: goto label_1e7dec;
        case 0x1e7df0u: goto label_1e7df0;
        case 0x1e7df4u: goto label_1e7df4;
        case 0x1e7df8u: goto label_1e7df8;
        case 0x1e7dfcu: goto label_1e7dfc;
        case 0x1e7e00u: goto label_1e7e00;
        case 0x1e7e04u: goto label_1e7e04;
        case 0x1e7e08u: goto label_1e7e08;
        case 0x1e7e0cu: goto label_1e7e0c;
        case 0x1e7e10u: goto label_1e7e10;
        case 0x1e7e14u: goto label_1e7e14;
        case 0x1e7e18u: goto label_1e7e18;
        case 0x1e7e1cu: goto label_1e7e1c;
        case 0x1e7e20u: goto label_1e7e20;
        case 0x1e7e24u: goto label_1e7e24;
        case 0x1e7e28u: goto label_1e7e28;
        case 0x1e7e2cu: goto label_1e7e2c;
        case 0x1e7e30u: goto label_1e7e30;
        case 0x1e7e34u: goto label_1e7e34;
        case 0x1e7e38u: goto label_1e7e38;
        case 0x1e7e3cu: goto label_1e7e3c;
        case 0x1e7e40u: goto label_1e7e40;
        case 0x1e7e44u: goto label_1e7e44;
        case 0x1e7e48u: goto label_1e7e48;
        case 0x1e7e4cu: goto label_1e7e4c;
        case 0x1e7e50u: goto label_1e7e50;
        case 0x1e7e54u: goto label_1e7e54;
        case 0x1e7e58u: goto label_1e7e58;
        case 0x1e7e5cu: goto label_1e7e5c;
        case 0x1e7e60u: goto label_1e7e60;
        case 0x1e7e64u: goto label_1e7e64;
        case 0x1e7e68u: goto label_1e7e68;
        case 0x1e7e6cu: goto label_1e7e6c;
        case 0x1e7e70u: goto label_1e7e70;
        case 0x1e7e74u: goto label_1e7e74;
        case 0x1e7e78u: goto label_1e7e78;
        case 0x1e7e7cu: goto label_1e7e7c;
        case 0x1e7e80u: goto label_1e7e80;
        case 0x1e7e84u: goto label_1e7e84;
        case 0x1e7e88u: goto label_1e7e88;
        case 0x1e7e8cu: goto label_1e7e8c;
        case 0x1e7e90u: goto label_1e7e90;
        case 0x1e7e94u: goto label_1e7e94;
        case 0x1e7e98u: goto label_1e7e98;
        case 0x1e7e9cu: goto label_1e7e9c;
        case 0x1e7ea0u: goto label_1e7ea0;
        case 0x1e7ea4u: goto label_1e7ea4;
        case 0x1e7ea8u: goto label_1e7ea8;
        case 0x1e7eacu: goto label_1e7eac;
        case 0x1e7eb0u: goto label_1e7eb0;
        case 0x1e7eb4u: goto label_1e7eb4;
        case 0x1e7eb8u: goto label_1e7eb8;
        case 0x1e7ebcu: goto label_1e7ebc;
        case 0x1e7ec0u: goto label_1e7ec0;
        case 0x1e7ec4u: goto label_1e7ec4;
        case 0x1e7ec8u: goto label_1e7ec8;
        case 0x1e7eccu: goto label_1e7ecc;
        case 0x1e7ed0u: goto label_1e7ed0;
        case 0x1e7ed4u: goto label_1e7ed4;
        case 0x1e7ed8u: goto label_1e7ed8;
        case 0x1e7edcu: goto label_1e7edc;
        case 0x1e7ee0u: goto label_1e7ee0;
        case 0x1e7ee4u: goto label_1e7ee4;
        case 0x1e7ee8u: goto label_1e7ee8;
        case 0x1e7eecu: goto label_1e7eec;
        case 0x1e7ef0u: goto label_1e7ef0;
        case 0x1e7ef4u: goto label_1e7ef4;
        case 0x1e7ef8u: goto label_1e7ef8;
        case 0x1e7efcu: goto label_1e7efc;
        case 0x1e7f00u: goto label_1e7f00;
        case 0x1e7f04u: goto label_1e7f04;
        case 0x1e7f08u: goto label_1e7f08;
        case 0x1e7f0cu: goto label_1e7f0c;
        case 0x1e7f10u: goto label_1e7f10;
        case 0x1e7f14u: goto label_1e7f14;
        case 0x1e7f18u: goto label_1e7f18;
        case 0x1e7f1cu: goto label_1e7f1c;
        case 0x1e7f20u: goto label_1e7f20;
        case 0x1e7f24u: goto label_1e7f24;
        case 0x1e7f28u: goto label_1e7f28;
        case 0x1e7f2cu: goto label_1e7f2c;
        case 0x1e7f30u: goto label_1e7f30;
        case 0x1e7f34u: goto label_1e7f34;
        case 0x1e7f38u: goto label_1e7f38;
        case 0x1e7f3cu: goto label_1e7f3c;
        case 0x1e7f40u: goto label_1e7f40;
        case 0x1e7f44u: goto label_1e7f44;
        case 0x1e7f48u: goto label_1e7f48;
        case 0x1e7f4cu: goto label_1e7f4c;
        case 0x1e7f50u: goto label_1e7f50;
        case 0x1e7f54u: goto label_1e7f54;
        case 0x1e7f58u: goto label_1e7f58;
        case 0x1e7f5cu: goto label_1e7f5c;
        case 0x1e7f60u: goto label_1e7f60;
        case 0x1e7f64u: goto label_1e7f64;
        case 0x1e7f68u: goto label_1e7f68;
        case 0x1e7f6cu: goto label_1e7f6c;
        case 0x1e7f70u: goto label_1e7f70;
        case 0x1e7f74u: goto label_1e7f74;
        case 0x1e7f78u: goto label_1e7f78;
        case 0x1e7f7cu: goto label_1e7f7c;
        case 0x1e7f80u: goto label_1e7f80;
        case 0x1e7f84u: goto label_1e7f84;
        case 0x1e7f88u: goto label_1e7f88;
        case 0x1e7f8cu: goto label_1e7f8c;
        case 0x1e7f90u: goto label_1e7f90;
        case 0x1e7f94u: goto label_1e7f94;
        case 0x1e7f98u: goto label_1e7f98;
        case 0x1e7f9cu: goto label_1e7f9c;
        case 0x1e7fa0u: goto label_1e7fa0;
        case 0x1e7fa4u: goto label_1e7fa4;
        case 0x1e7fa8u: goto label_1e7fa8;
        case 0x1e7facu: goto label_1e7fac;
        case 0x1e7fb0u: goto label_1e7fb0;
        case 0x1e7fb4u: goto label_1e7fb4;
        case 0x1e7fb8u: goto label_1e7fb8;
        case 0x1e7fbcu: goto label_1e7fbc;
        case 0x1e7fc0u: goto label_1e7fc0;
        case 0x1e7fc4u: goto label_1e7fc4;
        case 0x1e7fc8u: goto label_1e7fc8;
        case 0x1e7fccu: goto label_1e7fcc;
        case 0x1e7fd0u: goto label_1e7fd0;
        case 0x1e7fd4u: goto label_1e7fd4;
        case 0x1e7fd8u: goto label_1e7fd8;
        case 0x1e7fdcu: goto label_1e7fdc;
        case 0x1e7fe0u: goto label_1e7fe0;
        case 0x1e7fe4u: goto label_1e7fe4;
        case 0x1e7fe8u: goto label_1e7fe8;
        case 0x1e7fecu: goto label_1e7fec;
        case 0x1e7ff0u: goto label_1e7ff0;
        case 0x1e7ff4u: goto label_1e7ff4;
        case 0x1e7ff8u: goto label_1e7ff8;
        case 0x1e7ffcu: goto label_1e7ffc;
        case 0x1e8000u: goto label_1e8000;
        case 0x1e8004u: goto label_1e8004;
        case 0x1e8008u: goto label_1e8008;
        case 0x1e800cu: goto label_1e800c;
        case 0x1e8010u: goto label_1e8010;
        case 0x1e8014u: goto label_1e8014;
        case 0x1e8018u: goto label_1e8018;
        case 0x1e801cu: goto label_1e801c;
        case 0x1e8020u: goto label_1e8020;
        case 0x1e8024u: goto label_1e8024;
        case 0x1e8028u: goto label_1e8028;
        case 0x1e802cu: goto label_1e802c;
        case 0x1e8030u: goto label_1e8030;
        case 0x1e8034u: goto label_1e8034;
        case 0x1e8038u: goto label_1e8038;
        case 0x1e803cu: goto label_1e803c;
        case 0x1e8040u: goto label_1e8040;
        case 0x1e8044u: goto label_1e8044;
        case 0x1e8048u: goto label_1e8048;
        case 0x1e804cu: goto label_1e804c;
        case 0x1e8050u: goto label_1e8050;
        case 0x1e8054u: goto label_1e8054;
        case 0x1e8058u: goto label_1e8058;
        case 0x1e805cu: goto label_1e805c;
        case 0x1e8060u: goto label_1e8060;
        case 0x1e8064u: goto label_1e8064;
        case 0x1e8068u: goto label_1e8068;
        case 0x1e806cu: goto label_1e806c;
        case 0x1e8070u: goto label_1e8070;
        case 0x1e8074u: goto label_1e8074;
        case 0x1e8078u: goto label_1e8078;
        case 0x1e807cu: goto label_1e807c;
        case 0x1e8080u: goto label_1e8080;
        case 0x1e8084u: goto label_1e8084;
        case 0x1e8088u: goto label_1e8088;
        case 0x1e808cu: goto label_1e808c;
        case 0x1e8090u: goto label_1e8090;
        case 0x1e8094u: goto label_1e8094;
        case 0x1e8098u: goto label_1e8098;
        case 0x1e809cu: goto label_1e809c;
        case 0x1e80a0u: goto label_1e80a0;
        case 0x1e80a4u: goto label_1e80a4;
        case 0x1e80a8u: goto label_1e80a8;
        case 0x1e80acu: goto label_1e80ac;
        case 0x1e80b0u: goto label_1e80b0;
        case 0x1e80b4u: goto label_1e80b4;
        case 0x1e80b8u: goto label_1e80b8;
        case 0x1e80bcu: goto label_1e80bc;
        case 0x1e80c0u: goto label_1e80c0;
        case 0x1e80c4u: goto label_1e80c4;
        case 0x1e80c8u: goto label_1e80c8;
        case 0x1e80ccu: goto label_1e80cc;
        case 0x1e80d0u: goto label_1e80d0;
        case 0x1e80d4u: goto label_1e80d4;
        case 0x1e80d8u: goto label_1e80d8;
        case 0x1e80dcu: goto label_1e80dc;
        case 0x1e80e0u: goto label_1e80e0;
        case 0x1e80e4u: goto label_1e80e4;
        case 0x1e80e8u: goto label_1e80e8;
        case 0x1e80ecu: goto label_1e80ec;
        case 0x1e80f0u: goto label_1e80f0;
        case 0x1e80f4u: goto label_1e80f4;
        case 0x1e80f8u: goto label_1e80f8;
        case 0x1e80fcu: goto label_1e80fc;
        case 0x1e8100u: goto label_1e8100;
        case 0x1e8104u: goto label_1e8104;
        case 0x1e8108u: goto label_1e8108;
        case 0x1e810cu: goto label_1e810c;
        case 0x1e8110u: goto label_1e8110;
        case 0x1e8114u: goto label_1e8114;
        case 0x1e8118u: goto label_1e8118;
        case 0x1e811cu: goto label_1e811c;
        case 0x1e8120u: goto label_1e8120;
        case 0x1e8124u: goto label_1e8124;
        case 0x1e8128u: goto label_1e8128;
        case 0x1e812cu: goto label_1e812c;
        case 0x1e8130u: goto label_1e8130;
        case 0x1e8134u: goto label_1e8134;
        case 0x1e8138u: goto label_1e8138;
        case 0x1e813cu: goto label_1e813c;
        case 0x1e8140u: goto label_1e8140;
        case 0x1e8144u: goto label_1e8144;
        case 0x1e8148u: goto label_1e8148;
        case 0x1e814cu: goto label_1e814c;
        case 0x1e8150u: goto label_1e8150;
        case 0x1e8154u: goto label_1e8154;
        case 0x1e8158u: goto label_1e8158;
        case 0x1e815cu: goto label_1e815c;
        case 0x1e8160u: goto label_1e8160;
        case 0x1e8164u: goto label_1e8164;
        case 0x1e8168u: goto label_1e8168;
        case 0x1e816cu: goto label_1e816c;
        case 0x1e8170u: goto label_1e8170;
        case 0x1e8174u: goto label_1e8174;
        case 0x1e8178u: goto label_1e8178;
        case 0x1e817cu: goto label_1e817c;
        case 0x1e8180u: goto label_1e8180;
        case 0x1e8184u: goto label_1e8184;
        case 0x1e8188u: goto label_1e8188;
        case 0x1e818cu: goto label_1e818c;
        case 0x1e8190u: goto label_1e8190;
        case 0x1e8194u: goto label_1e8194;
        case 0x1e8198u: goto label_1e8198;
        case 0x1e819cu: goto label_1e819c;
        case 0x1e81a0u: goto label_1e81a0;
        case 0x1e81a4u: goto label_1e81a4;
        case 0x1e81a8u: goto label_1e81a8;
        case 0x1e81acu: goto label_1e81ac;
        case 0x1e81b0u: goto label_1e81b0;
        case 0x1e81b4u: goto label_1e81b4;
        case 0x1e81b8u: goto label_1e81b8;
        case 0x1e81bcu: goto label_1e81bc;
        default: break;
    }

    ctx->pc = 0x1e6ab0u;

label_1e6ab0:
    // 0x1e6ab0: 0x27bdf810  addiu       $sp, $sp, -0x7F0
    ctx->pc = 0x1e6ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965264));
label_1e6ab4:
    // 0x1e6ab4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e6ab8:
    // 0x1e6ab8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1e6ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1e6abc:
    // 0x1e6abc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1e6abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1e6ac0:
    // 0x1e6ac0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1e6ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1e6ac4:
    // 0x1e6ac4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e6ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1e6ac8:
    // 0x1e6ac8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e6ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1e6acc:
    // 0x1e6acc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e6accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1e6ad0:
    // 0x1e6ad0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e6ad0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6ad4:
    // 0x1e6ad4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e6ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1e6ad8:
    // 0x1e6ad8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e6ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e6adc:
    // 0x1e6adc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e6adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e6ae0:
    // 0x1e6ae0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x1e6ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_1e6ae4:
    // 0x1e6ae4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e6ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e6ae8:
    // 0x1e6ae8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e6aec:
    // 0x1e6aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e6aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6af0:
    // 0x1e6af0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1e6af0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e6af4:
    // 0x1e6af4: 0xafa600fc  sw          $a2, 0xFC($sp)
    ctx->pc = 0x1e6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
label_1e6af8:
    // 0x1e6af8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e6af8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e6afc:
    // 0x1e6afc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1e6afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e6b00:
    // 0x1e6b00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e6b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e6b04:
    // 0x1e6b04: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e6b08:
    // 0x1e6b08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e6b0c:
    // 0x1e6b0c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e6b10:
    // 0x1e6b10: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e6b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e6b14:
    // 0x1e6b14: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e6b18:
    if (ctx->pc == 0x1E6B18u) {
        ctx->pc = 0x1E6B18u;
            // 0x1e6b18: 0xafa800f8  sw          $t0, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 8));
        ctx->pc = 0x1E6B1Cu;
        goto label_1e6b1c;
    }
    ctx->pc = 0x1E6B14u;
    {
        const bool branch_taken_0x1e6b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B14u;
            // 0x1e6b18: 0xafa800f8  sw          $t0, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b14) {
            ctx->pc = 0x1E6B50u;
            goto label_1e6b50;
        }
    }
    ctx->pc = 0x1E6B1Cu;
label_1e6b1c:
    // 0x1e6b1c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e6b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e6b20:
    // 0x1e6b20: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e6b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e6b24:
    // 0x1e6b24: 0x2463aa28  addiu       $v1, $v1, -0x55D8
    ctx->pc = 0x1e6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945320));
label_1e6b28:
    // 0x1e6b28: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e6b2c:
    // 0x1e6b2c: 0x2442aa38  addiu       $v0, $v0, -0x55C8
    ctx->pc = 0x1e6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945336));
label_1e6b30:
    // 0x1e6b30: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e6b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e6b34:
    // 0x1e6b34: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e6b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1e6b38:
    // 0x1e6b38: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e6b3c:
    // 0x1e6b3c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e6b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e6b40:
    // 0x1e6b40: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e6b44:
    // 0x1e6b44: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1e6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e6b48:
    // 0x1e6b48: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e6b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1e6b4c:
    // 0x1e6b4c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e6b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1e6b50:
    // 0x1e6b50: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1e6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1e6b54:
    // 0x1e6b54: 0x27a303bc  addiu       $v1, $sp, 0x3BC
    ctx->pc = 0x1e6b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 956));
label_1e6b58:
    // 0x1e6b58: 0x8c560004  lw          $s6, 0x4($v0)
    ctx->pc = 0x1e6b58u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e6b5c:
    // 0x1e6b5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e6b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e6b60:
    // 0x1e6b60: 0xafa303b0  sw          $v1, 0x3B0($sp)
    ctx->pc = 0x1e6b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 3));
label_1e6b64:
    // 0x1e6b64: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1e6b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1e6b68:
    // 0x1e6b68: 0xafa003b4  sw          $zero, 0x3B4($sp)
    ctx->pc = 0x1e6b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 948), GPR_U32(ctx, 0));
label_1e6b6c:
    // 0x1e6b6c: 0xafa203b8  sw          $v0, 0x3B8($sp)
    ctx->pc = 0x1e6b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 952), GPR_U32(ctx, 2));
label_1e6b70:
    // 0x1e6b70: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1e6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e6b74:
    // 0x1e6b74: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x1e6b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e6b78:
    // 0x1e6b78: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1e6b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e6b7c:
    // 0x1e6b7c: 0xc0a45a0  jal         func_291680
label_1e6b80:
    if (ctx->pc == 0x1E6B80u) {
        ctx->pc = 0x1E6B80u;
            // 0x1e6b80: 0x27a40370  addiu       $a0, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->pc = 0x1E6B84u;
        goto label_1e6b84;
    }
    ctx->pc = 0x1E6B7Cu;
    SET_GPR_U32(ctx, 31, 0x1E6B84u);
    ctx->pc = 0x1E6B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B7Cu;
            // 0x1e6b80: 0x27a40370  addiu       $a0, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B84u; }
        if (ctx->pc != 0x1E6B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B84u; }
        if (ctx->pc != 0x1E6B84u) { return; }
    }
    ctx->pc = 0x1E6B84u;
label_1e6b84:
    // 0x1e6b84: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1e6b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e6b88:
    // 0x1e6b88: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x1e6b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6b8c:
    // 0x1e6b8c: 0x8eb40008  lw          $s4, 0x8($s5)
    ctx->pc = 0x1e6b8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e6b90:
    // 0x1e6b90: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1e6b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e6b94:
    // 0x1e6b94: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1e6b94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e6b98:
    // 0x1e6b98: 0xc681005c  lwc1        $f1, 0x5C($s4)
    ctx->pc = 0x1e6b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6b9c:
    // 0x1e6b9c: 0xc6830040  lwc1        $f3, 0x40($s4)
    ctx->pc = 0x1e6b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e6ba0:
    // 0x1e6ba0: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x1e6ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6ba4:
    // 0x1e6ba4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e6ba8:
    // 0x1e6ba8: 0x46011142  mul.s       $f5, $f2, $f1
    ctx->pc = 0x1e6ba8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e6bac:
    // 0x1e6bac: 0x8042e480  lb          $v0, -0x1B80($v0)
    ctx->pc = 0x1e6bacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294960256)));
label_1e6bb0:
    // 0x1e6bb0: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x1e6bb0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1e6bb4:
    // 0x1e6bb4: 0xc6820050  lwc1        $f2, 0x50($s4)
    ctx->pc = 0x1e6bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6bb8:
    // 0x1e6bb8: 0xc6810044  lwc1        $f1, 0x44($s4)
    ctx->pc = 0x1e6bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6bbc:
    // 0x1e6bbc: 0xc6800054  lwc1        $f0, 0x54($s4)
    ctx->pc = 0x1e6bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6bc0:
    // 0x1e6bc0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1e6bc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1e6bc4:
    // 0x1e6bc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e6bc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e6bc8:
    // 0x1e6bc8: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x1e6bc8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1e6bcc:
    // 0x1e6bcc: 0x46002982  mul.s       $f6, $f5, $f0
    ctx->pc = 0x1e6bccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1e6bd0:
    // 0x1e6bd0: 0xc6830048  lwc1        $f3, 0x48($s4)
    ctx->pc = 0x1e6bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e6bd4:
    // 0x1e6bd4: 0xc6820058  lwc1        $f2, 0x58($s4)
    ctx->pc = 0x1e6bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6bd8:
    // 0x1e6bd8: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x1e6bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6bdc:
    // 0x1e6bdc: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x1e6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6be0:
    // 0x1e6be0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1e6be0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1e6be4:
    // 0x1e6be4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e6be4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e6be8:
    // 0x1e6be8: 0x46003a1c  madd.s      $f8, $f7, $f0
    ctx->pc = 0x1e6be8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
label_1e6bec:
    // 0x1e6bec: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x1e6becu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1e6bf0:
    // 0x1e6bf0: 0xc6430054  lwc1        $f3, 0x54($s2)
    ctx->pc = 0x1e6bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e6bf4:
    // 0x1e6bf4: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x1e6bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6bf8:
    // 0x1e6bf8: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x1e6bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6bfc:
    // 0x1e6bfc: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x1e6bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6c00:
    // 0x1e6c00: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1e6c00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1e6c04:
    // 0x1e6c04: 0x46062018  adda.s      $f4, $f6
    ctx->pc = 0x1e6c04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
label_1e6c08:
    // 0x1e6c08: 0x4602399c  madd.s      $f6, $f7, $f2
    ctx->pc = 0x1e6c08u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_1e6c0c:
    // 0x1e6c0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e6c0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e6c10:
    // 0x1e6c10: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x1e6c10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_1e6c14:
    // 0x1e6c14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e6c18:
    if (ctx->pc == 0x1E6C18u) {
        ctx->pc = 0x1E6C18u;
            // 0x1e6c18: 0x460039dc  madd.s      $f7, $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
        ctx->pc = 0x1E6C1Cu;
        goto label_1e6c1c;
    }
    ctx->pc = 0x1E6C14u;
    {
        const bool branch_taken_0x1e6c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C14u;
            // 0x1e6c18: 0x460039dc  madd.s      $f7, $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c14) {
            ctx->pc = 0x1E6C24u;
            goto label_1e6c24;
        }
    }
    ctx->pc = 0x1E6C1Cu;
label_1e6c1c:
    // 0x1e6c1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e6c20:
    if (ctx->pc == 0x1E6C20u) {
        ctx->pc = 0x1E6C20u;
            // 0x1e6c20: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x1E6C24u;
        goto label_1e6c24;
    }
    ctx->pc = 0x1E6C1Cu;
    {
        const bool branch_taken_0x1e6c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C1Cu;
            // 0x1e6c20: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c1c) {
            ctx->pc = 0x1E6C28u;
            goto label_1e6c28;
        }
    }
    ctx->pc = 0x1E6C24u;
label_1e6c24:
    // 0x1e6c24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e6c24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6c28:
    // 0x1e6c28: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1e6c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6c2c:
    // 0x1e6c2c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e6c30:
    // 0x1e6c30: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1e6c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6c34:
    // 0x1e6c34: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x1e6c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_1e6c38:
    // 0x1e6c38: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1e6c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6c3c:
    // 0x1e6c3c: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x1e6c3cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_1e6c40:
    // 0x1e6c40: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x1e6c40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_1e6c44:
    // 0x1e6c44: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1e6c44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1e6c48:
    // 0x1e6c48: 0x4602381c  madd.s      $f0, $f7, $f2
    ctx->pc = 0x1e6c48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_1e6c4c:
    // 0x1e6c4c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1e6c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1e6c50:
    // 0x1e6c50: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x1e6c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6c54:
    // 0x1e6c54: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x1e6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e6c58:
    // 0x1e6c58: 0xc6440018  lwc1        $f4, 0x18($s2)
    ctx->pc = 0x1e6c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e6c5c:
    // 0x1e6c5c: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x1e6c5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_1e6c60:
    // 0x1e6c60: 0x4603401e  madda.s     $f8, $f3
    ctx->pc = 0x1e6c60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1e6c64:
    // 0x1e6c64: 0x4604381c  madd.s      $f0, $f7, $f4
    ctx->pc = 0x1e6c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_1e6c68:
    // 0x1e6c68: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1e6c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1e6c6c:
    // 0x1e6c6c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1e6c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6c70:
    // 0x1e6c70: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x1e6c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6c74:
    // 0x1e6c74: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x1e6c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6c78:
    // 0x1e6c78: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x1e6c78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_1e6c7c:
    // 0x1e6c7c: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1e6c7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1e6c80:
    // 0x1e6c80: 0x4602381c  madd.s      $f0, $f7, $f2
    ctx->pc = 0x1e6c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_1e6c84:
    // 0x1e6c84: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1e6c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1e6c88:
    // 0x1e6c88: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
label_1e6c8c:
    if (ctx->pc == 0x1E6C8Cu) {
        ctx->pc = 0x1E6C8Cu;
            // 0x1e6c8c: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->pc = 0x1E6C90u;
        goto label_1e6c90;
    }
    ctx->pc = 0x1E6C88u;
    {
        const bool branch_taken_0x1e6c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C88u;
            // 0x1e6c8c: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c88) {
            ctx->pc = 0x1E7050u;
            goto label_1e7050;
        }
    }
    ctx->pc = 0x1E6C90u;
label_1e6c90:
    // 0x1e6c90: 0xc643009c  lwc1        $f3, 0x9C($s2)
    ctx->pc = 0x1e6c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e6c94:
    // 0x1e6c94: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1e6c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e6c98:
    // 0x1e6c98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1e6c9c:
    // 0x1e6c9c: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x1e6c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_1e6ca0:
    // 0x1e6ca0: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x1e6ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6ca4:
    // 0x1e6ca4: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1e6ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1e6ca8:
    // 0x1e6ca8: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x1e6ca8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_1e6cac:
    // 0x1e6cac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e6cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6cb0:
    // 0x1e6cb0: 0x2657009c  addiu       $s7, $s2, 0x9C
    ctx->pc = 0x1e6cb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
label_1e6cb4:
    // 0x1e6cb4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e6cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e6cb8:
    // 0x1e6cb8: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1e6cb8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e6cbc:
    // 0x1e6cbc: 0xc681009c  lwc1        $f1, 0x9C($s4)
    ctx->pc = 0x1e6cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6cc0:
    // 0x1e6cc0: 0xc68000a0  lwc1        $f0, 0xA0($s4)
    ctx->pc = 0x1e6cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6cc4:
    // 0x1e6cc4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1e6cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6cc8:
    // 0x1e6cc8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e6cc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1e6ccc:
    // 0x1e6ccc: 0x46152818  adda.s      $f5, $f21
    ctx->pc = 0x1e6cccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[21]);
label_1e6cd0:
    // 0x1e6cd0: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x1e6cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_1e6cd4:
    // 0x1e6cd4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1e6cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e6cd8:
    // 0x1e6cd8: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x1e6cd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1e6cdc:
    // 0x1e6cdc: 0x320f809  jalr        $t9
label_1e6ce0:
    if (ctx->pc == 0x1E6CE0u) {
        ctx->pc = 0x1E6CE0u;
            // 0x1e6ce0: 0x4602a31c  madd.s      $f12, $f20, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
        ctx->pc = 0x1E6CE4u;
        goto label_1e6ce4;
    }
    ctx->pc = 0x1E6CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6CE4u);
        ctx->pc = 0x1E6CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CDCu;
            // 0x1e6ce0: 0x4602a31c  madd.s      $f12, $f20, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6CE4u; }
            if (ctx->pc != 0x1E6CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6CE4u;
label_1e6ce4:
    // 0x1e6ce4: 0xc68100a0  lwc1        $f1, 0xA0($s4)
    ctx->pc = 0x1e6ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6ce8:
    // 0x1e6ce8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e6ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1e6cec:
    // 0x1e6cec: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x1e6cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e6cf0:
    // 0x1e6cf0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1e6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e6cf4:
    // 0x1e6cf4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e6cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6cf8:
    // 0x1e6cf8: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x1e6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_1e6cfc:
    // 0x1e6cfc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e6cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e6d00:
    // 0x1e6d00: 0x46016018  adda.s      $f12, $f1
    ctx->pc = 0x1e6d00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_1e6d04:
    // 0x1e6d04: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e6d08:
    // 0x1e6d08: 0x4605105c  madd.s      $f1, $f2, $f5
    ctx->pc = 0x1e6d08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
label_1e6d0c:
    // 0x1e6d0c: 0x4601aac0  add.s       $f11, $f21, $f1
    ctx->pc = 0x1e6d0cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_1e6d10:
    // 0x1e6d10: 0xc6840050  lwc1        $f4, 0x50($s4)
    ctx->pc = 0x1e6d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e6d14:
    // 0x1e6d14: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1e6d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6d18:
    // 0x1e6d18: 0xc6820058  lwc1        $f2, 0x58($s4)
    ctx->pc = 0x1e6d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6d1c:
    // 0x1e6d1c: 0xc6860054  lwc1        $f6, 0x54($s4)
    ctx->pc = 0x1e6d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e6d20:
    // 0x1e6d20: 0x46012281  sub.s       $f10, $f4, $f1
    ctx->pc = 0x1e6d20u;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_1e6d24:
    // 0x1e6d24: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1e6d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6d28:
    // 0x1e6d28: 0xc4440034  lwc1        $f4, 0x34($v0)
    ctx->pc = 0x1e6d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e6d2c:
    // 0x1e6d2c: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x1e6d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e6d30:
    // 0x1e6d30: 0x46011201  sub.s       $f8, $f2, $f1
    ctx->pc = 0x1e6d30u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1e6d34:
    // 0x1e6d34: 0x46043241  sub.s       $f9, $f6, $f4
    ctx->pc = 0x1e6d34u;
    ctx->f[9] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
label_1e6d38:
    // 0x1e6d38: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e6d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6d3c:
    // 0x1e6d3c: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x1e6d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e6d40:
    // 0x1e6d40: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x1e6d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6d44:
    // 0x1e6d44: 0x4601481a  mula.s      $f9, $f1
    ctx->pc = 0x1e6d44u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_1e6d48:
    // 0x1e6d48: 0x4604501e  madda.s     $f10, $f4
    ctx->pc = 0x1e6d48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
label_1e6d4c:
    // 0x1e6d4c: 0x460541dc  madd.s      $f7, $f8, $f5
    ctx->pc = 0x1e6d4cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
label_1e6d50:
    // 0x1e6d50: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1e6d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6d54:
    // 0x1e6d54: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x1e6d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e6d58:
    // 0x1e6d58: 0xc4440020  lwc1        $f4, 0x20($v0)
    ctx->pc = 0x1e6d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e6d5c:
    // 0x1e6d5c: 0x4601481a  mula.s      $f9, $f1
    ctx->pc = 0x1e6d5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_1e6d60:
    // 0x1e6d60: 0x4602501e  madda.s     $f10, $f2
    ctx->pc = 0x1e6d60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
label_1e6d64:
    // 0x1e6d64: 0x4606409c  madd.s      $f2, $f8, $f6
    ctx->pc = 0x1e6d64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[6]));
label_1e6d68:
    // 0x1e6d68: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1e6d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6d6c:
    // 0x1e6d6c: 0xc4450028  lwc1        $f5, 0x28($v0)
    ctx->pc = 0x1e6d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e6d70:
    // 0x1e6d70: 0x460b3b40  add.s       $f13, $f7, $f11
    ctx->pc = 0x1e6d70u;
    ctx->f[13] = FPU_ADD_S(ctx->f[7], ctx->f[11]);
label_1e6d74:
    // 0x1e6d74: 0x4601481a  mula.s      $f9, $f1
    ctx->pc = 0x1e6d74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_1e6d78:
    // 0x1e6d78: 0x4604501e  madda.s     $f10, $f4
    ctx->pc = 0x1e6d78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
label_1e6d7c:
    // 0x1e6d7c: 0x4605405c  madd.s      $f1, $f8, $f5
    ctx->pc = 0x1e6d7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
label_1e6d80:
    // 0x1e6d80: 0x460b3901  sub.s       $f4, $f7, $f11
    ctx->pc = 0x1e6d80u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[11]);
label_1e6d84:
    // 0x1e6d84: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x1e6d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6d88:
    // 0x1e6d88: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x1e6d88u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1e6d8c:
    // 0x1e6d8c: 0x460b1200  add.s       $f8, $f2, $f11
    ctx->pc = 0x1e6d8cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
label_1e6d90:
    // 0x1e6d90: 0x460b0a40  add.s       $f9, $f1, $f11
    ctx->pc = 0x1e6d90u;
    ctx->f[9] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
label_1e6d94:
    // 0x1e6d94: 0x460b6280  add.s       $f10, $f12, $f11
    ctx->pc = 0x1e6d94u;
    ctx->f[10] = FPU_ADD_S(ctx->f[12], ctx->f[11]);
label_1e6d98:
    // 0x1e6d98: 0x460b61c1  sub.s       $f7, $f12, $f11
    ctx->pc = 0x1e6d98u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
label_1e6d9c:
    // 0x1e6d9c: 0x460b1141  sub.s       $f5, $f2, $f11
    ctx->pc = 0x1e6d9cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
label_1e6da0:
    // 0x1e6da0: 0x460b0981  sub.s       $f6, $f1, $f11
    ctx->pc = 0x1e6da0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
label_1e6da4:
    // 0x1e6da4: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x1e6da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e6da8:
    // 0x1e6da8: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1e6da8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6dac:
    // 0x1e6dac: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x1e6dacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1e6db0:
    // 0x1e6db0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1e6db4:
    if (ctx->pc == 0x1E6DB4u) {
        ctx->pc = 0x1E6DB4u;
            // 0x1e6db4: 0xe7a10118  swc1        $f1, 0x118($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->pc = 0x1E6DB8u;
        goto label_1e6db8;
    }
    ctx->pc = 0x1E6DB0u;
    {
        const bool branch_taken_0x1e6db0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DB0u;
            // 0x1e6db4: 0xe7a10118  swc1        $f1, 0x118($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6db0) {
            ctx->pc = 0x1E6DC0u;
            goto label_1e6dc0;
        }
    }
    ctx->pc = 0x1E6DB8u;
label_1e6db8:
    // 0x1e6db8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e6dbc:
    if (ctx->pc == 0x1E6DBCu) {
        ctx->pc = 0x1E6DBCu;
            // 0x1e6dbc: 0xc7a00134  lwc1        $f0, 0x134($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1E6DC0u;
        goto label_1e6dc0;
    }
    ctx->pc = 0x1E6DB8u;
    {
        const bool branch_taken_0x1e6db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DB8u;
            // 0x1e6dbc: 0xc7a00134  lwc1        $f0, 0x134($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6db8) {
            ctx->pc = 0x1E6DC8u;
            goto label_1e6dc8;
        }
    }
    ctx->pc = 0x1E6DC0u;
label_1e6dc0:
    // 0x1e6dc0: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x1e6dc0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
label_1e6dc4:
    // 0x1e6dc4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1e6dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6dc8:
    // 0x1e6dc8: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x1e6dc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6dcc:
    // 0x1e6dcc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1e6dd0:
    if (ctx->pc == 0x1E6DD0u) {
        ctx->pc = 0x1E6DD0u;
            // 0x1e6dd0: 0xe7a30130  swc1        $f3, 0x130($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->pc = 0x1E6DD4u;
        goto label_1e6dd4;
    }
    ctx->pc = 0x1E6DCCu;
    {
        const bool branch_taken_0x1e6dcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DCCu;
            // 0x1e6dd0: 0xe7a30130  swc1        $f3, 0x130($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6dcc) {
            ctx->pc = 0x1E6DDCu;
            goto label_1e6ddc;
        }
    }
    ctx->pc = 0x1E6DD4u;
label_1e6dd4:
    // 0x1e6dd4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e6dd8:
    if (ctx->pc == 0x1E6DD8u) {
        ctx->pc = 0x1E6DD8u;
            // 0x1e6dd8: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->pc = 0x1E6DDCu;
        goto label_1e6ddc;
    }
    ctx->pc = 0x1E6DD4u;
    {
        const bool branch_taken_0x1e6dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DD4u;
            // 0x1e6dd8: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6dd4) {
            ctx->pc = 0x1E6DE4u;
            goto label_1e6de4;
        }
    }
    ctx->pc = 0x1E6DDCu;
label_1e6ddc:
    // 0x1e6ddc: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x1e6ddcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
label_1e6de0:
    // 0x1e6de0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1e6de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1e6de4:
    // 0x1e6de4: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1e6de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6de8:
    // 0x1e6de8: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x1e6de8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6dec:
    // 0x1e6dec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e6df0:
    if (ctx->pc == 0x1E6DF0u) {
        ctx->pc = 0x1E6DF0u;
            // 0x1e6df0: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x1E6DF4u;
        goto label_1e6df4;
    }
    ctx->pc = 0x1E6DECu;
    {
        const bool branch_taken_0x1e6dec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6dec) {
            ctx->pc = 0x1E6DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DECu;
            // 0x1e6df0: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6DF4u;
            goto label_1e6df4;
        }
    }
    ctx->pc = 0x1E6DF4u;
label_1e6df4:
    // 0x1e6df4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1e6df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1e6df8:
    // 0x1e6df8: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1e6df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6dfc:
    // 0x1e6dfc: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x1e6dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6e00:
    // 0x1e6e00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e6e04:
    if (ctx->pc == 0x1E6E04u) {
        ctx->pc = 0x1E6E04u;
            // 0x1e6e04: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[7]);
        ctx->pc = 0x1E6E08u;
        goto label_1e6e08;
    }
    ctx->pc = 0x1E6E00u;
    {
        const bool branch_taken_0x1e6e00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6e00) {
            ctx->pc = 0x1E6E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E00u;
            // 0x1e6e04: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6E08u;
            goto label_1e6e08;
        }
    }
    ctx->pc = 0x1E6E08u;
label_1e6e08:
    // 0x1e6e08: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1e6e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1e6e0c:
    // 0x1e6e0c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1e6e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6e10:
    // 0x1e6e10: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x1e6e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6e14:
    // 0x1e6e14: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e6e18:
    if (ctx->pc == 0x1E6E18u) {
        ctx->pc = 0x1E6E18u;
            // 0x1e6e18: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1E6E1Cu;
        goto label_1e6e1c;
    }
    ctx->pc = 0x1E6E14u;
    {
        const bool branch_taken_0x1e6e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6e14) {
            ctx->pc = 0x1E6E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E14u;
            // 0x1e6e18: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6E1Cu;
            goto label_1e6e1c;
        }
    }
    ctx->pc = 0x1E6E1Cu;
label_1e6e1c:
    // 0x1e6e1c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1e6e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1e6e20:
    // 0x1e6e20: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1e6e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6e24:
    // 0x1e6e24: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x1e6e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6e28:
    // 0x1e6e28: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e6e2c:
    if (ctx->pc == 0x1E6E2Cu) {
        ctx->pc = 0x1E6E2Cu;
            // 0x1e6e2c: 0x46004006  mov.s       $f0, $f8 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[8]);
        ctx->pc = 0x1E6E30u;
        goto label_1e6e30;
    }
    ctx->pc = 0x1E6E28u;
    {
        const bool branch_taken_0x1e6e28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6e28) {
            ctx->pc = 0x1E6E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E28u;
            // 0x1e6e2c: 0x46004006  mov.s       $f0, $f8 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6E30u;
            goto label_1e6e30;
        }
    }
    ctx->pc = 0x1E6E30u;
label_1e6e30:
    // 0x1e6e30: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1e6e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1e6e34:
    // 0x1e6e34: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1e6e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6e38:
    // 0x1e6e38: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x1e6e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6e3c:
    // 0x1e6e3c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e6e40:
    if (ctx->pc == 0x1E6E40u) {
        ctx->pc = 0x1E6E40u;
            // 0x1e6e40: 0x46004806  mov.s       $f0, $f9 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[9]);
        ctx->pc = 0x1E6E44u;
        goto label_1e6e44;
    }
    ctx->pc = 0x1E6E3Cu;
    {
        const bool branch_taken_0x1e6e3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6e3c) {
            ctx->pc = 0x1E6E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E3Cu;
            // 0x1e6e40: 0x46004806  mov.s       $f0, $f9 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6E44u;
            goto label_1e6e44;
        }
    }
    ctx->pc = 0x1E6E44u;
label_1e6e44:
    // 0x1e6e44: 0xc7a9014c  lwc1        $f9, 0x14C($sp)
    ctx->pc = 0x1e6e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1e6e48:
    // 0x1e6e48: 0x460a4834  c.lt.s      $f9, $f10
    ctx->pc = 0x1e6e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6e4c:
    // 0x1e6e4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e6e50:
    if (ctx->pc == 0x1E6E50u) {
        ctx->pc = 0x1E6E50u;
            // 0x1e6e50: 0xe7a00148  swc1        $f0, 0x148($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
        ctx->pc = 0x1E6E54u;
        goto label_1e6e54;
    }
    ctx->pc = 0x1E6E4Cu;
    {
        const bool branch_taken_0x1e6e4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E4Cu;
            // 0x1e6e50: 0xe7a00148  swc1        $f0, 0x148($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e4c) {
            ctx->pc = 0x1E6E5Cu;
            goto label_1e6e5c;
        }
    }
    ctx->pc = 0x1E6E54u;
label_1e6e54:
    // 0x1e6e54: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e6e58:
    if (ctx->pc == 0x1E6E58u) {
        ctx->pc = 0x1E6E58u;
            // 0x1e6e58: 0xe7a9014c  swc1        $f9, 0x14C($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
        ctx->pc = 0x1E6E5Cu;
        goto label_1e6e5c;
    }
    ctx->pc = 0x1E6E54u;
    {
        const bool branch_taken_0x1e6e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E54u;
            // 0x1e6e58: 0xe7a9014c  swc1        $f9, 0x14C($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e54) {
            ctx->pc = 0x1E6E64u;
            goto label_1e6e64;
        }
    }
    ctx->pc = 0x1E6E5Cu;
label_1e6e5c:
    // 0x1e6e5c: 0x46005246  mov.s       $f9, $f10
    ctx->pc = 0x1e6e5cu;
    ctx->f[9] = FPU_MOV_S(ctx->f[10]);
label_1e6e60:
    // 0x1e6e60: 0xe7a9014c  swc1        $f9, 0x14C($sp)
    ctx->pc = 0x1e6e60u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1e6e64:
    // 0x1e6e64: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x1e6e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e6e68:
    // 0x1e6e68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6e6c:
    // 0x1e6e6c: 0xc7a60140  lwc1        $f6, 0x140($sp)
    ctx->pc = 0x1e6e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e6e70:
    // 0x1e6e70: 0xc7a50130  lwc1        $f5, 0x130($sp)
    ctx->pc = 0x1e6e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e6e74:
    // 0x1e6e74: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1e6e74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6e78:
    // 0x1e6e78: 0x460530c1  sub.s       $f3, $f6, $f5
    ctx->pc = 0x1e6e78u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_1e6e7c:
    // 0x1e6e7c: 0xc7a6013c  lwc1        $f6, 0x13C($sp)
    ctx->pc = 0x1e6e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e6e80:
    // 0x1e6e80: 0xc7a80144  lwc1        $f8, 0x144($sp)
    ctx->pc = 0x1e6e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1e6e84:
    // 0x1e6e84: 0xc7a40134  lwc1        $f4, 0x134($sp)
    ctx->pc = 0x1e6e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e6e88:
    // 0x1e6e88: 0xc7a70148  lwc1        $f7, 0x148($sp)
    ctx->pc = 0x1e6e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e6e8c:
    // 0x1e6e8c: 0xc7a50138  lwc1        $f5, 0x138($sp)
    ctx->pc = 0x1e6e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e6e90:
    // 0x1e6e90: 0x46044101  sub.s       $f4, $f8, $f4
    ctx->pc = 0x1e6e90u;
    ctx->f[4] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
label_1e6e94:
    // 0x1e6e94: 0x46053941  sub.s       $f5, $f7, $f5
    ctx->pc = 0x1e6e94u;
    ctx->f[5] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
label_1e6e98:
    // 0x1e6e98: 0x45010027  bc1t        . + 4 + (0x27 << 2)
label_1e6e9c:
    if (ctx->pc == 0x1E6E9Cu) {
        ctx->pc = 0x1E6E9Cu;
            // 0x1e6e9c: 0x46064981  sub.s       $f6, $f9, $f6 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
        ctx->pc = 0x1E6EA0u;
        goto label_1e6ea0;
    }
    ctx->pc = 0x1E6E98u;
    {
        const bool branch_taken_0x1e6e98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E98u;
            // 0x1e6e9c: 0x46064981  sub.s       $f6, $f9, $f6 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e98) {
            ctx->pc = 0x1E6F38u;
            goto label_1e6f38;
        }
    }
    ctx->pc = 0x1E6EA0u;
label_1e6ea0:
    // 0x1e6ea0: 0xc64c0084  lwc1        $f12, 0x84($s2)
    ctx->pc = 0x1e6ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6ea4:
    // 0x1e6ea4: 0xc64b0088  lwc1        $f11, 0x88($s2)
    ctx->pc = 0x1e6ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1e6ea8:
    // 0x1e6ea8: 0xc64e0098  lwc1        $f14, 0x98($s2)
    ctx->pc = 0x1e6ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1e6eac:
    // 0x1e6eac: 0x460c1401  sub.s       $f16, $f2, $f12
    ctx->pc = 0x1e6eacu;
    ctx->f[16] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_1e6eb0:
    // 0x1e6eb0: 0x460b0bc1  sub.s       $f15, $f1, $f11
    ctx->pc = 0x1e6eb0u;
    ctx->f[15] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
label_1e6eb4:
    // 0x1e6eb4: 0x460e8042  mul.s       $f1, $f16, $f14
    ctx->pc = 0x1e6eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[14]);
label_1e6eb8:
    // 0x1e6eb8: 0xc642005c  lwc1        $f2, 0x5C($s2)
    ctx->pc = 0x1e6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6ebc:
    // 0x1e6ebc: 0xc60b0028  lwc1        $f11, 0x28($s0)
    ctx->pc = 0x1e6ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1e6ec0:
    // 0x1e6ec0: 0xc64c0094  lwc1        $f12, 0x94($s2)
    ctx->pc = 0x1e6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6ec4:
    // 0x1e6ec4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e6ec4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e6ec8:
    // 0x1e6ec8: 0x46025ac2  mul.s       $f11, $f11, $f2
    ctx->pc = 0x1e6ec8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
label_1e6ecc:
    // 0x1e6ecc: 0xc7aa0120  lwc1        $f10, 0x120($sp)
    ctx->pc = 0x1e6eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1e6ed0:
    // 0x1e6ed0: 0x460c785d  msub.s      $f1, $f15, $f12
    ctx->pc = 0x1e6ed0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[12]));
label_1e6ed4:
    // 0x1e6ed4: 0xc64d0090  lwc1        $f13, 0x90($s2)
    ctx->pc = 0x1e6ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e6ed8:
    // 0x1e6ed8: 0x460a0018  adda.s      $f0, $f10
    ctx->pc = 0x1e6ed8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
label_1e6edc:
    // 0x1e6edc: 0x4601585c  madd.s      $f1, $f11, $f1
    ctx->pc = 0x1e6edcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
label_1e6ee0:
    // 0x1e6ee0: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x1e6ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1e6ee4:
    // 0x1e6ee4: 0x460d7842  mul.s       $f1, $f15, $f13
    ctx->pc = 0x1e6ee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[13]);
label_1e6ee8:
    // 0x1e6ee8: 0xc7a80110  lwc1        $f8, 0x110($sp)
    ctx->pc = 0x1e6ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1e6eec:
    // 0x1e6eec: 0xc6470080  lwc1        $f7, 0x80($s2)
    ctx->pc = 0x1e6eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e6ef0:
    // 0x1e6ef0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e6ef0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e6ef4:
    // 0x1e6ef4: 0xc7a90124  lwc1        $f9, 0x124($sp)
    ctx->pc = 0x1e6ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1e6ef8:
    // 0x1e6ef8: 0x46074441  sub.s       $f17, $f8, $f7
    ctx->pc = 0x1e6ef8u;
    ctx->f[17] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
label_1e6efc:
    // 0x1e6efc: 0x460e889d  msub.s      $f2, $f17, $f14
    ctx->pc = 0x1e6efcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[14]));
label_1e6f00:
    // 0x1e6f00: 0x46090018  adda.s      $f0, $f9
    ctx->pc = 0x1e6f00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
label_1e6f04:
    // 0x1e6f04: 0x4602589c  madd.s      $f2, $f11, $f2
    ctx->pc = 0x1e6f04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[2]));
label_1e6f08:
    // 0x1e6f08: 0x460c8842  mul.s       $f1, $f17, $f12
    ctx->pc = 0x1e6f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[17], ctx->f[12]);
label_1e6f0c:
    // 0x1e6f0c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e6f0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e6f10:
    // 0x1e6f10: 0xc7a80128  lwc1        $f8, 0x128($sp)
    ctx->pc = 0x1e6f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1e6f14:
    // 0x1e6f14: 0x460d805d  msub.s      $f1, $f16, $f13
    ctx->pc = 0x1e6f14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[13]));
label_1e6f18:
    // 0x1e6f18: 0xc7a7012c  lwc1        $f7, 0x12C($sp)
    ctx->pc = 0x1e6f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e6f1c:
    // 0x1e6f1c: 0x46080018  adda.s      $f0, $f8
    ctx->pc = 0x1e6f1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_1e6f20:
    // 0x1e6f20: 0x4601585c  madd.s      $f1, $f11, $f1
    ctx->pc = 0x1e6f20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
label_1e6f24:
    // 0x1e6f24: 0x46070018  adda.s      $f0, $f7
    ctx->pc = 0x1e6f24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_1e6f28:
    // 0x1e6f28: 0x4600581c  madd.s      $f0, $f11, $f0
    ctx->pc = 0x1e6f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[0]));
label_1e6f2c:
    // 0x1e6f2c: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x1e6f2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1e6f30:
    // 0x1e6f30: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x1e6f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1e6f34:
    // 0x1e6f34: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e6f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1e6f38:
    // 0x1e6f38: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1e6f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6f3c:
    // 0x1e6f3c: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1e6f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1e6f40:
    // 0x1e6f40: 0x0  nop
    ctx->pc = 0x1e6f40u;
    // NOP
label_1e6f44:
    // 0x1e6f44: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x1e6f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6f48:
    // 0x1e6f48: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e6f4c:
    if (ctx->pc == 0x1E6F4Cu) {
        ctx->pc = 0x1E6F4Cu;
            // 0x1e6f4c: 0x46000206  mov.s       $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E6F50u;
        goto label_1e6f50;
    }
    ctx->pc = 0x1E6F48u;
    {
        const bool branch_taken_0x1e6f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6f48) {
            ctx->pc = 0x1E6F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F48u;
            // 0x1e6f4c: 0x46000206  mov.s       $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F50u;
            goto label_1e6f50;
        }
    }
    ctx->pc = 0x1E6F50u;
label_1e6f50:
    // 0x1e6f50: 0xc7a70124  lwc1        $f7, 0x124($sp)
    ctx->pc = 0x1e6f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e6f54:
    // 0x1e6f54: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x1e6f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1e6f58:
    // 0x1e6f58: 0x0  nop
    ctx->pc = 0x1e6f58u;
    // NOP
label_1e6f5c:
    // 0x1e6f5c: 0x46075034  c.lt.s      $f10, $f7
    ctx->pc = 0x1e6f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6f60:
    // 0x1e6f60: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e6f64:
    if (ctx->pc == 0x1E6F64u) {
        ctx->pc = 0x1E6F64u;
            // 0x1e6f64: 0x46003a86  mov.s       $f10, $f7 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[7]);
        ctx->pc = 0x1E6F68u;
        goto label_1e6f68;
    }
    ctx->pc = 0x1E6F60u;
    {
        const bool branch_taken_0x1e6f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6f60) {
            ctx->pc = 0x1E6F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F60u;
            // 0x1e6f64: 0x46003a86  mov.s       $f10, $f7 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F68u;
            goto label_1e6f68;
        }
    }
    ctx->pc = 0x1E6F68u;
label_1e6f68:
    // 0x1e6f68: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x1e6f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6f6c:
    // 0x1e6f6c: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x1e6f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_1e6f70:
    // 0x1e6f70: 0x0  nop
    ctx->pc = 0x1e6f70u;
    // NOP
label_1e6f74:
    // 0x1e6f74: 0x46028834  c.lt.s      $f17, $f2
    ctx->pc = 0x1e6f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6f78:
    // 0x1e6f78: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e6f7c:
    if (ctx->pc == 0x1E6F7Cu) {
        ctx->pc = 0x1E6F7Cu;
            // 0x1e6f7c: 0x46001446  mov.s       $f17, $f2 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x1E6F80u;
        goto label_1e6f80;
    }
    ctx->pc = 0x1E6F78u;
    {
        const bool branch_taken_0x1e6f78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6f78) {
            ctx->pc = 0x1E6F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F78u;
            // 0x1e6f7c: 0x46001446  mov.s       $f17, $f2 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F80u;
            goto label_1e6f80;
        }
    }
    ctx->pc = 0x1E6F80u;
label_1e6f80:
    // 0x1e6f80: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x1e6f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6f84:
    // 0x1e6f84: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1e6f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1e6f88:
    // 0x1e6f88: 0x0  nop
    ctx->pc = 0x1e6f88u;
    // NOP
label_1e6f8c:
    // 0x1e6f8c: 0x46018034  c.lt.s      $f16, $f1
    ctx->pc = 0x1e6f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6f90:
    // 0x1e6f90: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e6f94:
    if (ctx->pc == 0x1E6F94u) {
        ctx->pc = 0x1E6F94u;
            // 0x1e6f94: 0x46000c06  mov.s       $f16, $f1 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1E6F98u;
        goto label_1e6f98;
    }
    ctx->pc = 0x1E6F90u;
    {
        const bool branch_taken_0x1e6f90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6f90) {
            ctx->pc = 0x1E6F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F90u;
            // 0x1e6f94: 0x46000c06  mov.s       $f16, $f1 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F98u;
            goto label_1e6f98;
        }
    }
    ctx->pc = 0x1E6F98u;
label_1e6f98:
    // 0x1e6f98: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1e6f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6f9c:
    // 0x1e6f9c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1e6f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1e6fa0:
    // 0x1e6fa0: 0x0  nop
    ctx->pc = 0x1e6fa0u;
    // NOP
label_1e6fa4:
    // 0x1e6fa4: 0x46007836  c.le.s      $f15, $f0
    ctx->pc = 0x1e6fa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6fa8:
    // 0x1e6fa8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e6fac:
    if (ctx->pc == 0x1E6FACu) {
        ctx->pc = 0x1E6FACu;
            // 0x1e6fac: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E6FB0u;
        goto label_1e6fb0;
    }
    ctx->pc = 0x1E6FA8u;
    {
        const bool branch_taken_0x1e6fa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6fa8) {
            ctx->pc = 0x1E6FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FA8u;
            // 0x1e6fac: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6FB0u;
            goto label_1e6fb0;
        }
    }
    ctx->pc = 0x1E6FB0u;
label_1e6fb0:
    // 0x1e6fb0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1e6fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1e6fb4:
    // 0x1e6fb4: 0x0  nop
    ctx->pc = 0x1e6fb4u;
    // NOP
label_1e6fb8:
    // 0x1e6fb8: 0x46077036  c.le.s      $f14, $f7
    ctx->pc = 0x1e6fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6fbc:
    // 0x1e6fbc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e6fc0:
    if (ctx->pc == 0x1E6FC0u) {
        ctx->pc = 0x1E6FC0u;
            // 0x1e6fc0: 0x46003b86  mov.s       $f14, $f7 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[7]);
        ctx->pc = 0x1E6FC4u;
        goto label_1e6fc4;
    }
    ctx->pc = 0x1E6FBCu;
    {
        const bool branch_taken_0x1e6fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6fbc) {
            ctx->pc = 0x1E6FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FBCu;
            // 0x1e6fc0: 0x46003b86  mov.s       $f14, $f7 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6FC4u;
            goto label_1e6fc4;
        }
    }
    ctx->pc = 0x1E6FC4u;
label_1e6fc4:
    // 0x1e6fc4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e6fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e6fc8:
    // 0x1e6fc8: 0x0  nop
    ctx->pc = 0x1e6fc8u;
    // NOP
label_1e6fcc:
    // 0x1e6fcc: 0x46026836  c.le.s      $f13, $f2
    ctx->pc = 0x1e6fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6fd0:
    // 0x1e6fd0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e6fd4:
    if (ctx->pc == 0x1E6FD4u) {
        ctx->pc = 0x1E6FD4u;
            // 0x1e6fd4: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x1E6FD8u;
        goto label_1e6fd8;
    }
    ctx->pc = 0x1E6FD0u;
    {
        const bool branch_taken_0x1e6fd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6fd0) {
            ctx->pc = 0x1E6FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FD0u;
            // 0x1e6fd4: 0x46001346  mov.s       $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6FD8u;
            goto label_1e6fd8;
        }
    }
    ctx->pc = 0x1E6FD8u;
label_1e6fd8:
    // 0x1e6fd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e6fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6fdc:
    // 0x1e6fdc: 0x0  nop
    ctx->pc = 0x1e6fdcu;
    // NOP
label_1e6fe0:
    // 0x1e6fe0: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1e6fe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6fe4:
    // 0x1e6fe4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e6fe8:
    if (ctx->pc == 0x1E6FE8u) {
        ctx->pc = 0x1E6FE8u;
            // 0x1e6fe8: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1E6FECu;
        goto label_1e6fec;
    }
    ctx->pc = 0x1E6FE4u;
    {
        const bool branch_taken_0x1e6fe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6fe4) {
            ctx->pc = 0x1E6FE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FE4u;
            // 0x1e6fe8: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6FECu;
            goto label_1e6fec;
        }
    }
    ctx->pc = 0x1E6FECu;
label_1e6fec:
    // 0x1e6fec: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x1e6fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6ff0:
    // 0x1e6ff0: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1e6ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6ff4:
    // 0x1e6ff4: 0xc7a90138  lwc1        $f9, 0x138($sp)
    ctx->pc = 0x1e6ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1e6ff8:
    // 0x1e6ff8: 0x46080ac0  add.s       $f11, $f1, $f8
    ctx->pc = 0x1e6ff8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_1e6ffc:
    // 0x1e6ffc: 0x460a0280  add.s       $f10, $f0, $f10
    ctx->pc = 0x1e6ffcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
label_1e7000:
    // 0x1e7000: 0xc7a8013c  lwc1        $f8, 0x13C($sp)
    ctx->pc = 0x1e7000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1e7004:
    // 0x1e7004: 0xc7a70140  lwc1        $f7, 0x140($sp)
    ctx->pc = 0x1e7004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e7008:
    // 0x1e7008: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x1e7008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e700c:
    // 0x1e700c: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x1e700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7010:
    // 0x1e7010: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1e7010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7014:
    // 0x1e7014: 0x46114a40  add.s       $f9, $f9, $f17
    ctx->pc = 0x1e7014u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[17]);
label_1e7018:
    // 0x1e7018: 0x46104200  add.s       $f8, $f8, $f16
    ctx->pc = 0x1e7018u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[16]);
label_1e701c:
    // 0x1e701c: 0x460f39c0  add.s       $f7, $f7, $f15
    ctx->pc = 0x1e701cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[15]);
label_1e7020:
    // 0x1e7020: 0x460e1080  add.s       $f2, $f2, $f14
    ctx->pc = 0x1e7020u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
label_1e7024:
    // 0x1e7024: 0x460d0840  add.s       $f1, $f1, $f13
    ctx->pc = 0x1e7024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
label_1e7028:
    // 0x1e7028: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1e7028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_1e702c:
    // 0x1e702c: 0xe7ab0130  swc1        $f11, 0x130($sp)
    ctx->pc = 0x1e702cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1e7030:
    // 0x1e7030: 0xe7aa0134  swc1        $f10, 0x134($sp)
    ctx->pc = 0x1e7030u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1e7034:
    // 0x1e7034: 0xe7a90138  swc1        $f9, 0x138($sp)
    ctx->pc = 0x1e7034u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1e7038:
    // 0x1e7038: 0xe7a8013c  swc1        $f8, 0x13C($sp)
    ctx->pc = 0x1e7038u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1e703c:
    // 0x1e703c: 0xe7a70140  swc1        $f7, 0x140($sp)
    ctx->pc = 0x1e703cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1e7040:
    // 0x1e7040: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x1e7040u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1e7044:
    // 0x1e7044: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x1e7044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1e7048:
    // 0x1e7048: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e704c:
    if (ctx->pc == 0x1E704Cu) {
        ctx->pc = 0x1E704Cu;
            // 0x1e704c: 0xe7a0014c  swc1        $f0, 0x14C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
        ctx->pc = 0x1E7050u;
        goto label_1e7050;
    }
    ctx->pc = 0x1E7048u;
    {
        const bool branch_taken_0x1e7048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7048u;
            // 0x1e704c: 0xe7a0014c  swc1        $f0, 0x14C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7048) {
            ctx->pc = 0x1E70A8u;
            goto label_1e70a8;
        }
    }
    ctx->pc = 0x1E7050u;
label_1e7050:
    // 0x1e7050: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1e7050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e7054:
    // 0x1e7054: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e7054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1e7058:
    // 0x1e7058: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1e7058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e705c:
    // 0x1e705c: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x1e705cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_1e7060:
    // 0x1e7060: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1e7060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e7064:
    // 0x1e7064: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1e7064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1e7068:
    // 0x1e7068: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e7068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e706c:
    // 0x1e706c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e706cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e7070:
    // 0x1e7070: 0x320f809  jalr        $t9
label_1e7074:
    if (ctx->pc == 0x1E7074u) {
        ctx->pc = 0x1E7074u;
            // 0x1e7074: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1E7078u;
        goto label_1e7078;
    }
    ctx->pc = 0x1E7070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7078u);
        ctx->pc = 0x1E7074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7070u;
            // 0x1e7074: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7078u; }
            if (ctx->pc != 0x1E7078u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7078u;
label_1e7078:
    // 0x1e7078: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x1e7078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e707c:
    // 0x1e707c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x1e707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7080:
    // 0x1e7080: 0xc7a60144  lwc1        $f6, 0x144($sp)
    ctx->pc = 0x1e7080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e7084:
    // 0x1e7084: 0xc7a40134  lwc1        $f4, 0x134($sp)
    ctx->pc = 0x1e7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e7088:
    // 0x1e7088: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1e7088u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e708c:
    // 0x1e708c: 0x46043101  sub.s       $f4, $f6, $f4
    ctx->pc = 0x1e708cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
label_1e7090:
    // 0x1e7090: 0xc7a50148  lwc1        $f5, 0x148($sp)
    ctx->pc = 0x1e7090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e7094:
    // 0x1e7094: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x1e7094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e7098:
    // 0x1e7098: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x1e7098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e709c:
    // 0x1e709c: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1e709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e70a0:
    // 0x1e70a0: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x1e70a0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_1e70a4:
    // 0x1e70a4: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x1e70a4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e70a8:
    // 0x1e70a8: 0x526000ea  beql        $s3, $zero, . + 4 + (0xEA << 2)
label_1e70ac:
    if (ctx->pc == 0x1E70ACu) {
        ctx->pc = 0x1E70ACu;
            // 0x1e70ac: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->pc = 0x1E70B0u;
        goto label_1e70b0;
    }
    ctx->pc = 0x1E70A8u;
    {
        const bool branch_taken_0x1e70a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e70a8) {
            ctx->pc = 0x1E70ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70A8u;
            // 0x1e70ac: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7454u;
            goto label_1e7454;
        }
    }
    ctx->pc = 0x1E70B0u;
label_1e70b0:
    // 0x1e70b0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1e70b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e70b4:
    // 0x1e70b4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1e70b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e70b8:
    // 0x1e70b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e70b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e70bc:
    // 0x1e70bc: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1e70c0:
    if (ctx->pc == 0x1E70C0u) {
        ctx->pc = 0x1E70C0u;
            // 0x1e70c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E70C4u;
        goto label_1e70c4;
    }
    ctx->pc = 0x1E70BCu;
    {
        const bool branch_taken_0x1e70bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e70bc) {
            ctx->pc = 0x1E70C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70BCu;
            // 0x1e70c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E70C8u;
            goto label_1e70c8;
        }
    }
    ctx->pc = 0x1E70C4u;
label_1e70c4:
    // 0x1e70c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e70c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e70c8:
    // 0x1e70c8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1e70c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e70cc:
    // 0x1e70cc: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x1e70ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e70d0:
    // 0x1e70d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e70d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e70d4:
    // 0x1e70d4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1e70d8:
    if (ctx->pc == 0x1E70D8u) {
        ctx->pc = 0x1E70D8u;
            // 0x1e70d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E70DCu;
        goto label_1e70dc;
    }
    ctx->pc = 0x1E70D4u;
    {
        const bool branch_taken_0x1e70d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e70d4) {
            ctx->pc = 0x1E70D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70D4u;
            // 0x1e70d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E70E0u;
            goto label_1e70e0;
        }
    }
    ctx->pc = 0x1E70DCu;
label_1e70dc:
    // 0x1e70dc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e70e0:
    // 0x1e70e0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1e70e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e70e4:
    // 0x1e70e4: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1e70e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e70e8:
    // 0x1e70e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e70e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e70ec:
    // 0x1e70ec: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1e70f0:
    if (ctx->pc == 0x1E70F0u) {
        ctx->pc = 0x1E70F0u;
            // 0x1e70f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E70F4u;
        goto label_1e70f4;
    }
    ctx->pc = 0x1E70ECu;
    {
        const bool branch_taken_0x1e70ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e70ec) {
            ctx->pc = 0x1E70F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70ECu;
            // 0x1e70f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E70F8u;
            goto label_1e70f8;
        }
    }
    ctx->pc = 0x1E70F4u;
label_1e70f4:
    // 0x1e70f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e70f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e70f8:
    // 0x1e70f8: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x1e70f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e70fc:
    // 0x1e70fc: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1e70fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7100:
    // 0x1e7100: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e7100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7104:
    // 0x1e7104: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1e7108:
    if (ctx->pc == 0x1E7108u) {
        ctx->pc = 0x1E7108u;
            // 0x1e7108: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E710Cu;
        goto label_1e710c;
    }
    ctx->pc = 0x1E7104u;
    {
        const bool branch_taken_0x1e7104 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7104u;
            // 0x1e7108: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7104) {
            ctx->pc = 0x1E7110u;
            goto label_1e7110;
        }
    }
    ctx->pc = 0x1E710Cu;
label_1e710c:
    // 0x1e710c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e710cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7110:
    // 0x1e7110: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1e7110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1e7114:
    // 0x1e7114: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e7114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e7118:
    // 0x1e7118: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1e7118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1e711c:
    // 0x1e711c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1e711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e7120:
    // 0x1e7120: 0xafa207d8  sw          $v0, 0x7D8($sp)
    ctx->pc = 0x1e7120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2008), GPR_U32(ctx, 2));
label_1e7124:
    // 0x1e7124: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1e7124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7128:
    // 0x1e7128: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1e7128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e712c:
    // 0x1e712c: 0xc7a207d8  lwc1        $f2, 0x7D8($sp)
    ctx->pc = 0x1e712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e7130:
    // 0x1e7130: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e7130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7134:
    // 0x1e7134: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e7138:
    if (ctx->pc == 0x1E7138u) {
        ctx->pc = 0x1E7138u;
            // 0x1e7138: 0xe7a207e0  swc1        $f2, 0x7E0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2016), bits); }
        ctx->pc = 0x1E713Cu;
        goto label_1e713c;
    }
    ctx->pc = 0x1E7134u;
    {
        const bool branch_taken_0x1e7134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7134u;
            // 0x1e7138: 0xe7a207e0  swc1        $f2, 0x7E0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2016), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7134) {
            ctx->pc = 0x1E7144u;
            goto label_1e7144;
        }
    }
    ctx->pc = 0x1E713Cu;
label_1e713c:
    // 0x1e713c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e7140:
    if (ctx->pc == 0x1E7140u) {
        ctx->pc = 0x1E7140u;
            // 0x1e7140: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1E7144u;
        goto label_1e7144;
    }
    ctx->pc = 0x1E713Cu;
    {
        const bool branch_taken_0x1e713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E713Cu;
            // 0x1e7140: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e713c) {
            ctx->pc = 0x1E7148u;
            goto label_1e7148;
        }
    }
    ctx->pc = 0x1E7144u;
label_1e7144:
    // 0x1e7144: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e7144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7148:
    // 0x1e7148: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x1e7148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e714c:
    // 0x1e714c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1e714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7150:
    // 0x1e7150: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e7150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7154:
    // 0x1e7154: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1e7158:
    if (ctx->pc == 0x1E7158u) {
        ctx->pc = 0x1E7158u;
            // 0x1e7158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E715Cu;
        goto label_1e715c;
    }
    ctx->pc = 0x1E7154u;
    {
        const bool branch_taken_0x1e7154 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7154) {
            ctx->pc = 0x1E7158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7154u;
            // 0x1e7158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7160u;
            goto label_1e7160;
        }
    }
    ctx->pc = 0x1E715Cu;
label_1e715c:
    // 0x1e715c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e7160:
    // 0x1e7160: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x1e7160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7164:
    // 0x1e7164: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1e7164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7168:
    // 0x1e7168: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e7168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e716c:
    // 0x1e716c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1e7170:
    if (ctx->pc == 0x1E7170u) {
        ctx->pc = 0x1E7170u;
            // 0x1e7170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7174u;
        goto label_1e7174;
    }
    ctx->pc = 0x1E716Cu;
    {
        const bool branch_taken_0x1e716c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e716c) {
            ctx->pc = 0x1E7170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E716Cu;
            // 0x1e7170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7178u;
            goto label_1e7178;
        }
    }
    ctx->pc = 0x1E7174u;
label_1e7174:
    // 0x1e7174: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e7174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7178:
    // 0x1e7178: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1e7178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e717c:
    // 0x1e717c: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1e717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7180:
    // 0x1e7180: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e7180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7184:
    // 0x1e7184: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1e7188:
    if (ctx->pc == 0x1E7188u) {
        ctx->pc = 0x1E7188u;
            // 0x1e7188: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E718Cu;
        goto label_1e718c;
    }
    ctx->pc = 0x1E7184u;
    {
        const bool branch_taken_0x1e7184 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7184u;
            // 0x1e7188: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7184) {
            ctx->pc = 0x1E7190u;
            goto label_1e7190;
        }
    }
    ctx->pc = 0x1E718Cu;
label_1e718c:
    // 0x1e718c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e718cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7190:
    // 0x1e7190: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e7190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1e7194:
    // 0x1e7194: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1e7194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e7198:
    // 0x1e7198: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1e7198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1e719c:
    // 0x1e719c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1e719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1e71a0:
    // 0x1e71a0: 0x8fa307e0  lw          $v1, 0x7E0($sp)
    ctx->pc = 0x1e71a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2016)));
label_1e71a4:
    // 0x1e71a4: 0xafa207d4  sw          $v0, 0x7D4($sp)
    ctx->pc = 0x1e71a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2004), GPR_U32(ctx, 2));
label_1e71a8:
    // 0x1e71a8: 0xc7a007d4  lwc1        $f0, 0x7D4($sp)
    ctx->pc = 0x1e71a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e71ac:
    // 0x1e71ac: 0xe7a007dc  swc1        $f0, 0x7DC($sp)
    ctx->pc = 0x1e71acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2012), bits); }
label_1e71b0:
    // 0x1e71b0: 0x8fa207dc  lw          $v0, 0x7DC($sp)
    ctx->pc = 0x1e71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2012)));
label_1e71b4:
    // 0x1e71b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e71b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e71b8:
    // 0x1e71b8: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1e71b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_1e71bc:
    // 0x1e71bc: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1e71bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
label_1e71c0:
    // 0x1e71c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e71c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e71c4:
    // 0x1e71c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e71c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e71c8:
    // 0x1e71c8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1e71cc:
    if (ctx->pc == 0x1E71CCu) {
        ctx->pc = 0x1E71CCu;
            // 0x1e71cc: 0xc7a00120  lwc1        $f0, 0x120($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1E71D0u;
        goto label_1e71d0;
    }
    ctx->pc = 0x1E71C8u;
    {
        const bool branch_taken_0x1e71c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e71c8) {
            ctx->pc = 0x1E71CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71C8u;
            // 0x1e71cc: 0xc7a00120  lwc1        $f0, 0x120($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E71D8u;
            goto label_1e71d8;
        }
    }
    ctx->pc = 0x1E71D0u;
label_1e71d0:
    // 0x1e71d0: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_1e71d4:
    if (ctx->pc == 0x1E71D4u) {
        ctx->pc = 0x1E71D4u;
            // 0x1e71d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E71D8u;
        goto label_1e71d8;
    }
    ctx->pc = 0x1E71D0u;
    {
        const bool branch_taken_0x1e71d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E71D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71D0u;
            // 0x1e71d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e71d0) {
            ctx->pc = 0x1E7470u;
            goto label_1e7470;
        }
    }
    ctx->pc = 0x1E71D8u;
label_1e71d8:
    // 0x1e71d8: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x1e71d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1e71dc:
    // 0x1e71dc: 0x0  nop
    ctx->pc = 0x1e71dcu;
    // NOP
label_1e71e0:
    // 0x1e71e0: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x1e71e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e71e4:
    // 0x1e71e4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e71e8:
    if (ctx->pc == 0x1E71E8u) {
        ctx->pc = 0x1E71E8u;
            // 0x1e71e8: 0x46000286  mov.s       $f10, $f0 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E71ECu;
        goto label_1e71ec;
    }
    ctx->pc = 0x1E71E4u;
    {
        const bool branch_taken_0x1e71e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e71e4) {
            ctx->pc = 0x1E71E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71E4u;
            // 0x1e71e8: 0x46000286  mov.s       $f10, $f0 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E71ECu;
            goto label_1e71ec;
        }
    }
    ctx->pc = 0x1E71ECu;
label_1e71ec:
    // 0x1e71ec: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x1e71ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e71f0:
    // 0x1e71f0: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x1e71f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1e71f4:
    // 0x1e71f4: 0x0  nop
    ctx->pc = 0x1e71f4u;
    // NOP
label_1e71f8:
    // 0x1e71f8: 0x46014834  c.lt.s      $f9, $f1
    ctx->pc = 0x1e71f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e71fc:
    // 0x1e71fc: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e7200:
    if (ctx->pc == 0x1E7200u) {
        ctx->pc = 0x1E7200u;
            // 0x1e7200: 0x46000a46  mov.s       $f9, $f1 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1E7204u;
        goto label_1e7204;
    }
    ctx->pc = 0x1E71FCu;
    {
        const bool branch_taken_0x1e71fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e71fc) {
            ctx->pc = 0x1E7200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71FCu;
            // 0x1e7200: 0x46000a46  mov.s       $f9, $f1 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7204u;
            goto label_1e7204;
        }
    }
    ctx->pc = 0x1E7204u;
label_1e7204:
    // 0x1e7204: 0xc7ad0128  lwc1        $f13, 0x128($sp)
    ctx->pc = 0x1e7204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e7208:
    // 0x1e7208: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1e7208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1e720c:
    // 0x1e720c: 0x0  nop
    ctx->pc = 0x1e720cu;
    // NOP
label_1e7210:
    // 0x1e7210: 0x460d4034  c.lt.s      $f8, $f13
    ctx->pc = 0x1e7210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7214:
    // 0x1e7214: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e7218:
    if (ctx->pc == 0x1E7218u) {
        ctx->pc = 0x1E7218u;
            // 0x1e7218: 0x46006a06  mov.s       $f8, $f13 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1E721Cu;
        goto label_1e721c;
    }
    ctx->pc = 0x1E7214u;
    {
        const bool branch_taken_0x1e7214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7214) {
            ctx->pc = 0x1E7218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7214u;
            // 0x1e7218: 0x46006a06  mov.s       $f8, $f13 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E721Cu;
            goto label_1e721c;
        }
    }
    ctx->pc = 0x1E721Cu;
label_1e721c:
    // 0x1e721c: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x1e721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e7220:
    // 0x1e7220: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x1e7220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1e7224:
    // 0x1e7224: 0x0  nop
    ctx->pc = 0x1e7224u;
    // NOP
label_1e7228:
    // 0x1e7228: 0x460c5834  c.lt.s      $f11, $f12
    ctx->pc = 0x1e7228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e722c:
    // 0x1e722c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e7230:
    if (ctx->pc == 0x1E7230u) {
        ctx->pc = 0x1E7230u;
            // 0x1e7230: 0x460062c6  mov.s       $f11, $f12 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E7234u;
        goto label_1e7234;
    }
    ctx->pc = 0x1E722Cu;
    {
        const bool branch_taken_0x1e722c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e722c) {
            ctx->pc = 0x1E7230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E722Cu;
            // 0x1e7230: 0x460062c6  mov.s       $f11, $f12 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7234u;
            goto label_1e7234;
        }
    }
    ctx->pc = 0x1E7234u;
label_1e7234:
    // 0x1e7234: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1e7234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7238:
    // 0x1e7238: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1e7238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e723c:
    // 0x1e723c: 0x0  nop
    ctx->pc = 0x1e723cu;
    // NOP
label_1e7240:
    // 0x1e7240: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x1e7240u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7244:
    // 0x1e7244: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e7248:
    if (ctx->pc == 0x1E7248u) {
        ctx->pc = 0x1E7248u;
            // 0x1e7248: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E724Cu;
        goto label_1e724c;
    }
    ctx->pc = 0x1E7244u;
    {
        const bool branch_taken_0x1e7244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7244) {
            ctx->pc = 0x1E7248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7244u;
            // 0x1e7248: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E724Cu;
            goto label_1e724c;
        }
    }
    ctx->pc = 0x1E724Cu;
label_1e724c:
    // 0x1e724c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e724cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e7250:
    // 0x1e7250: 0x0  nop
    ctx->pc = 0x1e7250u;
    // NOP
label_1e7254:
    // 0x1e7254: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1e7254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7258:
    // 0x1e7258: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e725c:
    if (ctx->pc == 0x1E725Cu) {
        ctx->pc = 0x1E725Cu;
            // 0x1e725c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1E7260u;
        goto label_1e7260;
    }
    ctx->pc = 0x1E7258u;
    {
        const bool branch_taken_0x1e7258 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7258) {
            ctx->pc = 0x1E725Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7258u;
            // 0x1e725c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7260u;
            goto label_1e7260;
        }
    }
    ctx->pc = 0x1E7260u;
label_1e7260:
    // 0x1e7260: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e7260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e7264:
    // 0x1e7264: 0x0  nop
    ctx->pc = 0x1e7264u;
    // NOP
label_1e7268:
    // 0x1e7268: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x1e7268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e726c:
    // 0x1e726c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e7270:
    if (ctx->pc == 0x1E7270u) {
        ctx->pc = 0x1E7270u;
            // 0x1e7270: 0x46006846  mov.s       $f1, $f13 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1E7274u;
        goto label_1e7274;
    }
    ctx->pc = 0x1E726Cu;
    {
        const bool branch_taken_0x1e726c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e726c) {
            ctx->pc = 0x1E7270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E726Cu;
            // 0x1e7270: 0x46006846  mov.s       $f1, $f13 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7274u;
            goto label_1e7274;
        }
    }
    ctx->pc = 0x1E7274u;
label_1e7274:
    // 0x1e7274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e7274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7278:
    // 0x1e7278: 0x0  nop
    ctx->pc = 0x1e7278u;
    // NOP
label_1e727c:
    // 0x1e727c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1e727cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7280:
    // 0x1e7280: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e7284:
    if (ctx->pc == 0x1E7284u) {
        ctx->pc = 0x1E7284u;
            // 0x1e7284: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E7288u;
        goto label_1e7288;
    }
    ctx->pc = 0x1E7280u;
    {
        const bool branch_taken_0x1e7280 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7280) {
            ctx->pc = 0x1E7284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7280u;
            // 0x1e7284: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7288u;
            goto label_1e7288;
        }
    }
    ctx->pc = 0x1E7288u;
label_1e7288:
    // 0x1e7288: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x1e7288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e728c:
    // 0x1e728c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e728cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e7290:
    // 0x1e7290: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7294:
    // 0x1e7294: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1e7294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_1e7298:
    // 0x1e7298: 0x460da582  mul.s       $f22, $f20, $f13
    ctx->pc = 0x1e7298u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
label_1e729c:
    // 0x1e729c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e729cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e72a0:
    // 0x1e72a0: 0xc7ad014c  lwc1        $f13, 0x14C($sp)
    ctx->pc = 0x1e72a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e72a4:
    // 0x1e72a4: 0xc7b50130  lwc1        $f21, 0x130($sp)
    ctx->pc = 0x1e72a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e72a8:
    // 0x1e72a8: 0xc7b30134  lwc1        $f19, 0x134($sp)
    ctx->pc = 0x1e72a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_1e72ac:
    // 0x1e72ac: 0x46166b40  add.s       $f13, $f13, $f22
    ctx->pc = 0x1e72acu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[22]);
label_1e72b0:
    // 0x1e72b0: 0xe7ad014c  swc1        $f13, 0x14C($sp)
    ctx->pc = 0x1e72b0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1e72b4:
    // 0x1e72b4: 0x46076342  mul.s       $f13, $f12, $f7
    ctx->pc = 0x1e72b4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
label_1e72b8:
    // 0x1e72b8: 0x460b61c2  mul.s       $f7, $f12, $f11
    ctx->pc = 0x1e72b8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
label_1e72bc:
    // 0x1e72bc: 0x44825800  mtc1        $v0, $f11
    ctx->pc = 0x1e72bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1e72c0:
    // 0x1e72c0: 0xc7b20138  lwc1        $f18, 0x138($sp)
    ctx->pc = 0x1e72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_1e72c4:
    // 0x1e72c4: 0xc7b1013c  lwc1        $f17, 0x13C($sp)
    ctx->pc = 0x1e72c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_1e72c8:
    // 0x1e72c8: 0xc7b00140  lwc1        $f16, 0x140($sp)
    ctx->pc = 0x1e72c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1e72cc:
    // 0x1e72cc: 0xc7af0144  lwc1        $f15, 0x144($sp)
    ctx->pc = 0x1e72ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1e72d0:
    // 0x1e72d0: 0xc7ae0148  lwc1        $f14, 0x148($sp)
    ctx->pc = 0x1e72d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1e72d4:
    // 0x1e72d4: 0x4616ad01  sub.s       $f20, $f21, $f22
    ctx->pc = 0x1e72d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
label_1e72d8:
    // 0x1e72d8: 0x46169cc1  sub.s       $f19, $f19, $f22
    ctx->pc = 0x1e72d8u;
    ctx->f[19] = FPU_SUB_S(ctx->f[19], ctx->f[22]);
label_1e72dc:
    // 0x1e72dc: 0x46169481  sub.s       $f18, $f18, $f22
    ctx->pc = 0x1e72dcu;
    ctx->f[18] = FPU_SUB_S(ctx->f[18], ctx->f[22]);
label_1e72e0:
    // 0x1e72e0: 0x46168c41  sub.s       $f17, $f17, $f22
    ctx->pc = 0x1e72e0u;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[22]);
label_1e72e4:
    // 0x1e72e4: 0x46168400  add.s       $f16, $f16, $f22
    ctx->pc = 0x1e72e4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[22]);
label_1e72e8:
    // 0x1e72e8: 0x46167bc0  add.s       $f15, $f15, $f22
    ctx->pc = 0x1e72e8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[22]);
label_1e72ec:
    // 0x1e72ec: 0x46167380  add.s       $f14, $f14, $f22
    ctx->pc = 0x1e72ecu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[22]);
label_1e72f0:
    // 0x1e72f0: 0x460a6282  mul.s       $f10, $f12, $f10
    ctx->pc = 0x1e72f0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
label_1e72f4:
    // 0x1e72f4: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x1e72f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
label_1e72f8:
    // 0x1e72f8: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x1e72f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_1e72fc:
    // 0x1e72fc: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x1e72fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_1e7300:
    // 0x1e7300: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1e7300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1e7304:
    // 0x1e7304: 0x46096242  mul.s       $f9, $f12, $f9
    ctx->pc = 0x1e7304u;
    ctx->f[9] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
label_1e7308:
    // 0x1e7308: 0x46086202  mul.s       $f8, $f12, $f8
    ctx->pc = 0x1e7308u;
    ctx->f[8] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
label_1e730c:
    // 0x1e730c: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x1e730cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
label_1e7310:
    // 0x1e7310: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x1e7310u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
label_1e7314:
    // 0x1e7314: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x1e7314u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
label_1e7318:
    // 0x1e7318: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x1e7318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e731c:
    // 0x1e731c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1e731cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1e7320:
    // 0x1e7320: 0xe7b30134  swc1        $f19, 0x134($sp)
    ctx->pc = 0x1e7320u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1e7324:
    // 0x1e7324: 0xe7b20138  swc1        $f18, 0x138($sp)
    ctx->pc = 0x1e7324u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1e7328:
    // 0x1e7328: 0xe7b1013c  swc1        $f17, 0x13C($sp)
    ctx->pc = 0x1e7328u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1e732c:
    // 0x1e732c: 0xe7b00140  swc1        $f16, 0x140($sp)
    ctx->pc = 0x1e732cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1e7330:
    // 0x1e7330: 0xe7af0144  swc1        $f15, 0x144($sp)
    ctx->pc = 0x1e7330u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1e7334:
    // 0x1e7334: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e7338:
    if (ctx->pc == 0x1E7338u) {
        ctx->pc = 0x1E7338u;
            // 0x1e7338: 0xe7ae0148  swc1        $f14, 0x148($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
        ctx->pc = 0x1E733Cu;
        goto label_1e733c;
    }
    ctx->pc = 0x1E7334u;
    {
        const bool branch_taken_0x1e7334 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7334u;
            // 0x1e7338: 0xe7ae0148  swc1        $f14, 0x148($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7334) {
            ctx->pc = 0x1E7344u;
            goto label_1e7344;
        }
    }
    ctx->pc = 0x1E733Cu;
label_1e733c:
    // 0x1e733c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e7340:
    if (ctx->pc == 0x1E7340u) {
        ctx->pc = 0x1E7344u;
        goto label_1e7344;
    }
    ctx->pc = 0x1E733Cu;
    {
        const bool branch_taken_0x1e733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e733c) {
            ctx->pc = 0x1E7348u;
            goto label_1e7348;
        }
    }
    ctx->pc = 0x1E7344u;
label_1e7344:
    // 0x1e7344: 0x46001a86  mov.s       $f10, $f3
    ctx->pc = 0x1e7344u;
    ctx->f[10] = FPU_MOV_S(ctx->f[3]);
label_1e7348:
    // 0x1e7348: 0x46044834  c.lt.s      $f9, $f4
    ctx->pc = 0x1e7348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e734c:
    // 0x1e734c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e7350:
    if (ctx->pc == 0x1E7350u) {
        ctx->pc = 0x1E7350u;
            // 0x1e7350: 0x46002246  mov.s       $f9, $f4 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x1E7354u;
        goto label_1e7354;
    }
    ctx->pc = 0x1E734Cu;
    {
        const bool branch_taken_0x1e734c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e734c) {
            ctx->pc = 0x1E7350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E734Cu;
            // 0x1e7350: 0x46002246  mov.s       $f9, $f4 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7354u;
            goto label_1e7354;
        }
    }
    ctx->pc = 0x1E7354u;
label_1e7354:
    // 0x1e7354: 0x46054034  c.lt.s      $f8, $f5
    ctx->pc = 0x1e7354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7358:
    // 0x1e7358: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e735c:
    if (ctx->pc == 0x1E735Cu) {
        ctx->pc = 0x1E735Cu;
            // 0x1e735c: 0x46002a06  mov.s       $f8, $f5 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x1E7360u;
        goto label_1e7360;
    }
    ctx->pc = 0x1E7358u;
    {
        const bool branch_taken_0x1e7358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7358) {
            ctx->pc = 0x1E735Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7358u;
            // 0x1e735c: 0x46002a06  mov.s       $f8, $f5 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7360u;
            goto label_1e7360;
        }
    }
    ctx->pc = 0x1E7360u;
label_1e7360:
    // 0x1e7360: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x1e7360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7364:
    // 0x1e7364: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1e7368:
    if (ctx->pc == 0x1E7368u) {
        ctx->pc = 0x1E7368u;
            // 0x1e7368: 0x460031c6  mov.s       $f7, $f6 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x1E736Cu;
        goto label_1e736c;
    }
    ctx->pc = 0x1E7364u;
    {
        const bool branch_taken_0x1e7364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7364) {
            ctx->pc = 0x1E7368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7364u;
            // 0x1e7368: 0x460031c6  mov.s       $f7, $f6 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E736Cu;
            goto label_1e736c;
        }
    }
    ctx->pc = 0x1E736Cu;
label_1e736c:
    // 0x1e736c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x1e736cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_1e7370:
    // 0x1e7370: 0x46036836  c.le.s      $f13, $f3
    ctx->pc = 0x1e7370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7374:
    // 0x1e7374: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1e7374u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_1e7378:
    // 0x1e7378: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x1e7378u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
label_1e737c:
    // 0x1e737c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1e7380:
    if (ctx->pc == 0x1E7380u) {
        ctx->pc = 0x1E7380u;
            // 0x1e7380: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
        ctx->f[6] = FPU_NEG_S(ctx->f[6]);
        ctx->pc = 0x1E7384u;
        goto label_1e7384;
    }
    ctx->pc = 0x1E737Cu;
    {
        const bool branch_taken_0x1e737c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E737Cu;
            // 0x1e7380: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
        ctx->f[6] = FPU_NEG_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e737c) {
            ctx->pc = 0x1E738Cu;
            goto label_1e738c;
        }
    }
    ctx->pc = 0x1E7384u;
label_1e7384:
    // 0x1e7384: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e7388:
    if (ctx->pc == 0x1E7388u) {
        ctx->pc = 0x1E738Cu;
        goto label_1e738c;
    }
    ctx->pc = 0x1E7384u;
    {
        const bool branch_taken_0x1e7384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7384) {
            ctx->pc = 0x1E7390u;
            goto label_1e7390;
        }
    }
    ctx->pc = 0x1E738Cu;
label_1e738c:
    // 0x1e738c: 0x46001b46  mov.s       $f13, $f3
    ctx->pc = 0x1e738cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[3]);
label_1e7390:
    // 0x1e7390: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x1e7390u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7394:
    // 0x1e7394: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e7398:
    if (ctx->pc == 0x1E7398u) {
        ctx->pc = 0x1E7398u;
            // 0x1e7398: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x1E739Cu;
        goto label_1e739c;
    }
    ctx->pc = 0x1E7394u;
    {
        const bool branch_taken_0x1e7394 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7394) {
            ctx->pc = 0x1E7398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7394u;
            // 0x1e7398: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E739Cu;
            goto label_1e739c;
        }
    }
    ctx->pc = 0x1E739Cu;
label_1e739c:
    // 0x1e739c: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x1e739cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e73a0:
    // 0x1e73a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e73a4:
    if (ctx->pc == 0x1E73A4u) {
        ctx->pc = 0x1E73A4u;
            // 0x1e73a4: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x1E73A8u;
        goto label_1e73a8;
    }
    ctx->pc = 0x1E73A0u;
    {
        const bool branch_taken_0x1e73a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e73a0) {
            ctx->pc = 0x1E73A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73A0u;
            // 0x1e73a4: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E73A8u;
            goto label_1e73a8;
        }
    }
    ctx->pc = 0x1E73A8u;
label_1e73a8:
    // 0x1e73a8: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x1e73a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e73ac:
    // 0x1e73ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e73b0:
    if (ctx->pc == 0x1E73B0u) {
        ctx->pc = 0x1E73B0u;
            // 0x1e73b0: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x1E73B4u;
        goto label_1e73b4;
    }
    ctx->pc = 0x1E73ACu;
    {
        const bool branch_taken_0x1e73ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e73ac) {
            ctx->pc = 0x1E73B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73ACu;
            // 0x1e73b0: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E73B4u;
            goto label_1e73b4;
        }
    }
    ctx->pc = 0x1E73B4u;
label_1e73b4:
    // 0x1e73b4: 0xc7ab0138  lwc1        $f11, 0x138($sp)
    ctx->pc = 0x1e73b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1e73b8:
    // 0x1e73b8: 0xc7a6013c  lwc1        $f6, 0x13C($sp)
    ctx->pc = 0x1e73b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e73bc:
    // 0x1e73bc: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x1e73bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e73c0:
    // 0x1e73c0: 0xc7ac0134  lwc1        $f12, 0x134($sp)
    ctx->pc = 0x1e73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e73c4:
    // 0x1e73c4: 0x46015840  add.s       $f1, $f11, $f1
    ctx->pc = 0x1e73c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
label_1e73c8:
    // 0x1e73c8: 0x460d1b40  add.s       $f13, $f3, $f13
    ctx->pc = 0x1e73c8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
label_1e73cc:
    // 0x1e73cc: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x1e73ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_1e73d0:
    // 0x1e73d0: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1e73d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_1e73d4:
    // 0x1e73d4: 0xc7a50140  lwc1        $f5, 0x140($sp)
    ctx->pc = 0x1e73d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e73d8:
    // 0x1e73d8: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x1e73d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1e73dc:
    // 0x1e73dc: 0xc7a40144  lwc1        $f4, 0x144($sp)
    ctx->pc = 0x1e73dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e73e0:
    // 0x1e73e0: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1e73e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1e73e4:
    // 0x1e73e4: 0x460a2840  add.s       $f1, $f5, $f10
    ctx->pc = 0x1e73e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
label_1e73e8:
    // 0x1e73e8: 0x46092000  add.s       $f0, $f4, $f9
    ctx->pc = 0x1e73e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
label_1e73ec:
    // 0x1e73ec: 0xc7a30148  lwc1        $f3, 0x148($sp)
    ctx->pc = 0x1e73ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e73f0:
    // 0x1e73f0: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x1e73f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1e73f4:
    // 0x1e73f4: 0xc7a2014c  lwc1        $f2, 0x14C($sp)
    ctx->pc = 0x1e73f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e73f8:
    // 0x1e73f8: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1e73f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1e73fc:
    // 0x1e73fc: 0x46081840  add.s       $f1, $f3, $f8
    ctx->pc = 0x1e73fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
label_1e7400:
    // 0x1e7400: 0x46071000  add.s       $f0, $f2, $f7
    ctx->pc = 0x1e7400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_1e7404:
    // 0x1e7404: 0xe7ad0130  swc1        $f13, 0x130($sp)
    ctx->pc = 0x1e7404u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1e7408:
    // 0x1e7408: 0xe7ac0134  swc1        $f12, 0x134($sp)
    ctx->pc = 0x1e7408u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1e740c:
    // 0x1e740c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x1e740cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1e7410:
    // 0x1e7410: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1e7410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1e7414:
    // 0x1e7414: 0xe66d0000  swc1        $f13, 0x0($s3)
    ctx->pc = 0x1e7414u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1e7418:
    // 0x1e7418: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1e7418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e741c:
    // 0x1e741c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1e741cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1e7420:
    // 0x1e7420: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1e7420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7424:
    // 0x1e7424: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1e7424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1e7428:
    // 0x1e7428: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1e7428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e742c:
    // 0x1e742c: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1e742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1e7430:
    // 0x1e7430: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1e7430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7434:
    // 0x1e7434: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x1e7434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_1e7438:
    // 0x1e7438: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1e7438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e743c:
    // 0x1e743c: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1e743cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_1e7440:
    // 0x1e7440: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1e7440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7444:
    // 0x1e7444: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x1e7444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_1e7448:
    // 0x1e7448: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1e7448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e744c:
    // 0x1e744c: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x1e744cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_1e7450:
    // 0x1e7450: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1e7450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e7454:
    // 0x1e7454: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1e7454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1e7458:
    // 0x1e7458: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e7458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e745c:
    // 0x1e745c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e745cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7460:
    // 0x1e7460: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1e7460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1e7464:
    // 0x1e7464: 0x320f809  jalr        $t9
label_1e7468:
    if (ctx->pc == 0x1E7468u) {
        ctx->pc = 0x1E7468u;
            // 0x1e7468: 0x27a603b0  addiu       $a2, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->pc = 0x1E746Cu;
        goto label_1e746c;
    }
    ctx->pc = 0x1E7464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E746Cu);
        ctx->pc = 0x1E7468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7464u;
            // 0x1e7468: 0x27a603b0  addiu       $a2, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E746Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E746Cu; }
            if (ctx->pc != 0x1E746Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E746Cu;
label_1e746c:
    // 0x1e746c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e746cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7470:
    // 0x1e7470: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1e7474:
    if (ctx->pc == 0x1E7474u) {
        ctx->pc = 0x1E7474u;
            // 0x1e7474: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->pc = 0x1E7478u;
        goto label_1e7478;
    }
    ctx->pc = 0x1E7470u;
    {
        const bool branch_taken_0x1e7470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7470) {
            ctx->pc = 0x1E7474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7470u;
            // 0x1e7474: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E74B8u;
            goto label_1e74b8;
        }
    }
    ctx->pc = 0x1E7478u;
label_1e7478:
    // 0x1e7478: 0x8fa303b8  lw          $v1, 0x3B8($sp)
    ctx->pc = 0x1e7478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_1e747c:
    // 0x1e747c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e747cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e7480:
    // 0x1e7480: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e7480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e7484:
    // 0x1e7484: 0x144002f1  bnez        $v0, . + 4 + (0x2F1 << 2)
label_1e7488:
    if (ctx->pc == 0x1E7488u) {
        ctx->pc = 0x1E748Cu;
        goto label_1e748c;
    }
    ctx->pc = 0x1E7484u;
    {
        const bool branch_taken_0x1e7484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7484) {
            ctx->pc = 0x1E804Cu;
            goto label_1e804c;
        }
    }
    ctx->pc = 0x1E748Cu;
label_1e748c:
    // 0x1e748c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e748cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e7490:
    // 0x1e7490: 0x8fa303b8  lw          $v1, 0x3B8($sp)
    ctx->pc = 0x1e7490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_1e7494:
    // 0x1e7494: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e7494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e7498:
    // 0x1e7498: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e7498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e749c:
    // 0x1e749c: 0x8fa503b0  lw          $a1, 0x3B0($sp)
    ctx->pc = 0x1e749cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_1e74a0:
    // 0x1e74a0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1e74a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1e74a4:
    // 0x1e74a4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1e74a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1e74a8:
    // 0x1e74a8: 0xc0a7ab4  jal         func_29EAD0
label_1e74ac:
    if (ctx->pc == 0x1E74ACu) {
        ctx->pc = 0x1E74ACu;
            // 0x1e74ac: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E74B0u;
        goto label_1e74b0;
    }
    ctx->pc = 0x1E74A8u;
    SET_GPR_U32(ctx, 31, 0x1E74B0u);
    ctx->pc = 0x1E74ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74A8u;
            // 0x1e74ac: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74B0u; }
        if (ctx->pc != 0x1E74B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74B0u; }
        if (ctx->pc != 0x1E74B0u) { return; }
    }
    ctx->pc = 0x1E74B0u;
label_1e74b0:
    // 0x1e74b0: 0x100002e6  b           . + 4 + (0x2E6 << 2)
label_1e74b4:
    if (ctx->pc == 0x1E74B4u) {
        ctx->pc = 0x1E74B8u;
        goto label_1e74b8;
    }
    ctx->pc = 0x1E74B0u;
    {
        const bool branch_taken_0x1e74b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e74b0) {
            ctx->pc = 0x1E804Cu;
            goto label_1e804c;
        }
    }
    ctx->pc = 0x1E74B8u;
label_1e74b8:
    // 0x1e74b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e74b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e74bc:
    // 0x1e74bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e74bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e74c0:
    // 0x1e74c0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e74c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e74c4:
    // 0x1e74c4: 0x320f809  jalr        $t9
label_1e74c8:
    if (ctx->pc == 0x1E74C8u) {
        ctx->pc = 0x1E74CCu;
        goto label_1e74cc;
    }
    ctx->pc = 0x1E74C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E74CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E74CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E74CCu; }
            if (ctx->pc != 0x1E74CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E74CCu;
label_1e74cc:
    // 0x1e74cc: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x1e74ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e74d0:
    // 0x1e74d0: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x1e74d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
label_1e74d4:
    // 0x1e74d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e74d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e74d8:
    // 0x1e74d8: 0x8064e478  lb          $a0, -0x1B88($v1)
    ctx->pc = 0x1e74d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960248)));
label_1e74dc:
    // 0x1e74dc: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x1e74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e74e0:
    // 0x1e74e0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1e74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e74e4:
    // 0x1e74e4: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x1e74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_1e74e8:
    // 0x1e74e8: 0x1080013e  beqz        $a0, . + 4 + (0x13E << 2)
label_1e74ec:
    if (ctx->pc == 0x1E74ECu) {
        ctx->pc = 0x1E74ECu;
            // 0x1e74ec: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->pc = 0x1E74F0u;
        goto label_1e74f0;
    }
    ctx->pc = 0x1E74E8u;
    {
        const bool branch_taken_0x1e74e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E74ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74E8u;
            // 0x1e74ec: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74e8) {
            ctx->pc = 0x1E79E4u;
            goto label_1e79e4;
        }
    }
    ctx->pc = 0x1E74F0u;
label_1e74f0:
    // 0x1e74f0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e74f4:
    // 0x1e74f4: 0x8fa303b4  lw          $v1, 0x3B4($sp)
    ctx->pc = 0x1e74f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_1e74f8:
    // 0x1e74f8: 0x8e34000c  lw          $s4, 0xC($s1)
    ctx->pc = 0x1e74f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e74fc:
    // 0x1e74fc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1e74fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1e7500:
    // 0x1e7500: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e7500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e7504:
    // 0x1e7504: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e7504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e7508:
    // 0x1e7508: 0x8fb203b0  lw          $s2, 0x3B0($sp)
    ctx->pc = 0x1e7508u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_1e750c:
    // 0x1e750c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1e750cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e7510:
    // 0x1e7510: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1e7510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e7514:
    // 0x1e7514: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e7514u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e7518:
    // 0x1e7518: 0x2849821  addu        $s3, $s4, $a0
    ctx->pc = 0x1e7518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1e751c:
    // 0x1e751c: 0x12740046  beq         $s3, $s4, . + 4 + (0x46 << 2)
label_1e7520:
    if (ctx->pc == 0x1E7520u) {
        ctx->pc = 0x1E7520u;
            // 0x1e7520: 0x243b821  addu        $s7, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x1E7524u;
        goto label_1e7524;
    }
    ctx->pc = 0x1E751Cu;
    {
        const bool branch_taken_0x1e751c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x1E7520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E751Cu;
            // 0x1e7520: 0x243b821  addu        $s7, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e751c) {
            ctx->pc = 0x1E7638u;
            goto label_1e7638;
        }
    }
    ctx->pc = 0x1E7524u;
label_1e7524:
    // 0x1e7524: 0x12570008  beq         $s2, $s7, . + 4 + (0x8 << 2)
label_1e7528:
    if (ctx->pc == 0x1E7528u) {
        ctx->pc = 0x1E752Cu;
        goto label_1e752c;
    }
    ctx->pc = 0x1E7524u;
    {
        const bool branch_taken_0x1e7524 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        if (branch_taken_0x1e7524) {
            ctx->pc = 0x1E7548u;
            goto label_1e7548;
        }
    }
    ctx->pc = 0x1E752Cu;
label_1e752c:
    // 0x1e752c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e7530:
    // 0x1e7530: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1e7530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e7534:
    // 0x1e7534: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_1e7538:
    if (ctx->pc == 0x1E7538u) {
        ctx->pc = 0x1E753Cu;
        goto label_1e753c;
    }
    ctx->pc = 0x1E7534u;
    {
        const bool branch_taken_0x1e7534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7534) {
            ctx->pc = 0x1E7548u;
            goto label_1e7548;
        }
    }
    ctx->pc = 0x1E753Cu;
label_1e753c:
    // 0x1e753c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1e7540:
    if (ctx->pc == 0x1E7540u) {
        ctx->pc = 0x1E7540u;
            // 0x1e7540: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1E7544u;
        goto label_1e7544;
    }
    ctx->pc = 0x1E753Cu;
    {
        const bool branch_taken_0x1e753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E753Cu;
            // 0x1e7540: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e753c) {
            ctx->pc = 0x1E7628u;
            goto label_1e7628;
        }
    }
    ctx->pc = 0x1E7544u;
label_1e7544:
    // 0x1e7544: 0x0  nop
    ctx->pc = 0x1e7544u;
    // NOP
label_1e7548:
    // 0x1e7548: 0x8fb203b0  lw          $s2, 0x3B0($sp)
    ctx->pc = 0x1e7548u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_1e754c:
    // 0x1e754c: 0x1257000c  beq         $s2, $s7, . + 4 + (0xC << 2)
label_1e7550:
    if (ctx->pc == 0x1E7550u) {
        ctx->pc = 0x1E7554u;
        goto label_1e7554;
    }
    ctx->pc = 0x1E754Cu;
    {
        const bool branch_taken_0x1e754c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        if (branch_taken_0x1e754c) {
            ctx->pc = 0x1E7580u;
            goto label_1e7580;
        }
    }
    ctx->pc = 0x1E7554u;
label_1e7554:
    // 0x1e7554: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e7554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e7558:
    // 0x1e7558: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e7558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e755c:
    // 0x1e755c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_1e7560:
    if (ctx->pc == 0x1E7560u) {
        ctx->pc = 0x1E7564u;
        goto label_1e7564;
    }
    ctx->pc = 0x1E755Cu;
    {
        const bool branch_taken_0x1e755c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e755c) {
            ctx->pc = 0x1E7570u;
            goto label_1e7570;
        }
    }
    ctx->pc = 0x1E7564u;
label_1e7564:
    // 0x1e7564: 0x10000030  b           . + 4 + (0x30 << 2)
label_1e7568:
    if (ctx->pc == 0x1E7568u) {
        ctx->pc = 0x1E7568u;
            // 0x1e7568: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1E756Cu;
        goto label_1e756c;
    }
    ctx->pc = 0x1E7564u;
    {
        const bool branch_taken_0x1e7564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7564u;
            // 0x1e7568: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7564) {
            ctx->pc = 0x1E7628u;
            goto label_1e7628;
        }
    }
    ctx->pc = 0x1E756Cu;
label_1e756c:
    // 0x1e756c: 0x0  nop
    ctx->pc = 0x1e756cu;
    // NOP
label_1e7570:
    // 0x1e7570: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1e7570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1e7574:
    // 0x1e7574: 0x1657fff8  bne         $s2, $s7, . + 4 + (-0x8 << 2)
label_1e7578:
    if (ctx->pc == 0x1E7578u) {
        ctx->pc = 0x1E757Cu;
        goto label_1e757c;
    }
    ctx->pc = 0x1E7574u;
    {
        const bool branch_taken_0x1e7574 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        if (branch_taken_0x1e7574) {
            ctx->pc = 0x1E7558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7558;
        }
    }
    ctx->pc = 0x1E757Cu;
label_1e757c:
    // 0x1e757c: 0x0  nop
    ctx->pc = 0x1e757cu;
    // NOP
label_1e7580:
    // 0x1e7580: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1e7580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e7584:
    // 0x1e7584: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e7584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7588:
    // 0x1e7588: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e7588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e758c:
    // 0x1e758c: 0x320f809  jalr        $t9
label_1e7590:
    if (ctx->pc == 0x1E7590u) {
        ctx->pc = 0x1E7590u;
            // 0x1e7590: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7594u;
        goto label_1e7594;
    }
    ctx->pc = 0x1E758Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7594u);
        ctx->pc = 0x1E7590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E758Cu;
            // 0x1e7590: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7594u; }
            if (ctx->pc != 0x1E7594u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7594u;
label_1e7594:
    // 0x1e7594: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1e7594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e7598:
    // 0x1e7598: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1e7598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1e759c:
    // 0x1e759c: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x1e759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1e75a0:
    // 0x1e75a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e75a4:
    // 0x1e75a4: 0x2842023  subu        $a0, $s4, $a0
    ctx->pc = 0x1e75a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1e75a8:
    // 0x1e75a8: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1e75a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e75ac:
    // 0x1e75ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e75acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e75b0:
    // 0x1e75b0: 0x0  nop
    ctx->pc = 0x1e75b0u;
    // NOP
label_1e75b4:
    // 0x1e75b4: 0x1810  mfhi        $v1
    ctx->pc = 0x1e75b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1e75b8:
    // 0x1e75b8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1e75b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1e75bc:
    // 0x1e75bc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1e75bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1e75c0:
    // 0x1e75c0: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1e75c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e75c4:
    // 0x1e75c4: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x1e75c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e75c8:
    // 0x1e75c8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1e75cc:
    if (ctx->pc == 0x1E75CCu) {
        ctx->pc = 0x1E75CCu;
            // 0x1e75cc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1E75D0u;
        goto label_1e75d0;
    }
    ctx->pc = 0x1E75C8u;
    {
        const bool branch_taken_0x1e75c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E75CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E75C8u;
            // 0x1e75cc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75c8) {
            ctx->pc = 0x1E7620u;
            goto label_1e7620;
        }
    }
    ctx->pc = 0x1E75D0u;
label_1e75d0:
    // 0x1e75d0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1e75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1e75d4:
    // 0x1e75d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e75d8:
    // 0x1e75d8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1e75d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e75dc:
    // 0x1e75dc: 0x0  nop
    ctx->pc = 0x1e75dcu;
    // NOP
label_1e75e0:
    // 0x1e75e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e75e4:
    // 0x1e75e4: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x1e75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_1e75e8:
    // 0x1e75e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e75e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e75ec:
    // 0x1e75ec: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1e75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e75f0:
    // 0x1e75f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e75f4:
    // 0x1e75f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e75f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e75f8:
    // 0x1e75f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e75fc:
    // 0x1e75fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e75fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e7600:
    // 0x1e7600: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e7600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e7604:
    // 0x1e7604: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e7604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e7608:
    // 0x1e7608: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e7608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e760c:
    // 0x1e760c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1e760cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1e7610:
    // 0x1e7610: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e7610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e7614:
    // 0x1e7614: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x1e7614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e7618:
    // 0x1e7618: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1e761c:
    if (ctx->pc == 0x1E761Cu) {
        ctx->pc = 0x1E7620u;
        goto label_1e7620;
    }
    ctx->pc = 0x1E7618u;
    {
        const bool branch_taken_0x1e7618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7618) {
            ctx->pc = 0x1E75E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e75e0;
        }
    }
    ctx->pc = 0x1E7620u;
label_1e7620:
    // 0x1e7620: 0x2694fff4  addiu       $s4, $s4, -0xC
    ctx->pc = 0x1e7620u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967284));
label_1e7624:
    // 0x1e7624: 0x2673fff4  addiu       $s3, $s3, -0xC
    ctx->pc = 0x1e7624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
label_1e7628:
    // 0x1e7628: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1e7628u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1e762c:
    // 0x1e762c: 0x1674ffbd  bne         $s3, $s4, . + 4 + (-0x43 << 2)
label_1e7630:
    if (ctx->pc == 0x1E7630u) {
        ctx->pc = 0x1E7634u;
        goto label_1e7634;
    }
    ctx->pc = 0x1E762Cu;
    {
        const bool branch_taken_0x1e762c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x1e762c) {
            ctx->pc = 0x1E7524u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7524;
        }
    }
    ctx->pc = 0x1E7634u;
label_1e7634:
    // 0x1e7634: 0x0  nop
    ctx->pc = 0x1e7634u;
    // NOP
label_1e7638:
    // 0x1e7638: 0x8fa403b4  lw          $a0, 0x3B4($sp)
    ctx->pc = 0x1e7638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_1e763c:
    // 0x1e763c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1e763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e7640:
    // 0x1e7640: 0x10830274  beq         $a0, $v1, . + 4 + (0x274 << 2)
label_1e7644:
    if (ctx->pc == 0x1E7644u) {
        ctx->pc = 0x1E7644u;
            // 0x1e7644: 0x8fb70150  lw          $s7, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->pc = 0x1E7648u;
        goto label_1e7648;
    }
    ctx->pc = 0x1E7640u;
    {
        const bool branch_taken_0x1e7640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E7644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7640u;
            // 0x1e7644: 0x8fb70150  lw          $s7, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7640) {
            ctx->pc = 0x1E8014u;
            goto label_1e8014;
        }
    }
    ctx->pc = 0x1E7648u;
label_1e7648:
    // 0x1e7648: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1e7648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e764c:
    // 0x1e764c: 0x8fb303b0  lw          $s3, 0x3B0($sp)
    ctx->pc = 0x1e764cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_1e7650:
    // 0x1e7650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e7650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e7654:
    // 0x1e7654: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1e7654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e7658:
    // 0x1e7658: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1e7658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e765c:
    // 0x1e765c: 0x8fa303b4  lw          $v1, 0x3B4($sp)
    ctx->pc = 0x1e765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_1e7660:
    // 0x1e7660: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e7660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e7664:
    // 0x1e7664: 0x263f021  addu        $fp, $s3, $v1
    ctx->pc = 0x1e7664u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1e7668:
    // 0x1e7668: 0x127e026a  beq         $s3, $fp, . + 4 + (0x26A << 2)
label_1e766c:
    if (ctx->pc == 0x1E766Cu) {
        ctx->pc = 0x1E766Cu;
            // 0x1e766c: 0xc42821  addu        $a1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->pc = 0x1E7670u;
        goto label_1e7670;
    }
    ctx->pc = 0x1E7668u;
    {
        const bool branch_taken_0x1e7668 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        ctx->pc = 0x1E766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7668u;
            // 0x1e766c: 0xc42821  addu        $a1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7668) {
            ctx->pc = 0x1E8014u;
            goto label_1e8014;
        }
    }
    ctx->pc = 0x1E7670u;
label_1e7670:
    // 0x1e7670: 0x10c50007  beq         $a2, $a1, . + 4 + (0x7 << 2)
label_1e7674:
    if (ctx->pc == 0x1E7674u) {
        ctx->pc = 0x1E7678u;
        goto label_1e7678;
    }
    ctx->pc = 0x1E7670u;
    {
        const bool branch_taken_0x1e7670 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e7670) {
            ctx->pc = 0x1E7690u;
            goto label_1e7690;
        }
    }
    ctx->pc = 0x1E7678u;
label_1e7678:
    // 0x1e7678: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1e7678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e767c:
    // 0x1e767c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1e767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e7680:
    // 0x1e7680: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1e7684:
    if (ctx->pc == 0x1E7684u) {
        ctx->pc = 0x1E7688u;
        goto label_1e7688;
    }
    ctx->pc = 0x1E7680u;
    {
        const bool branch_taken_0x1e7680 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7680) {
            ctx->pc = 0x1E7690u;
            goto label_1e7690;
        }
    }
    ctx->pc = 0x1E7688u;
label_1e7688:
    // 0x1e7688: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_1e768c:
    if (ctx->pc == 0x1E768Cu) {
        ctx->pc = 0x1E768Cu;
            // 0x1e768c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->pc = 0x1E7690u;
        goto label_1e7690;
    }
    ctx->pc = 0x1E7688u;
    {
        const bool branch_taken_0x1e7688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7688u;
            // 0x1e768c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7688) {
            ctx->pc = 0x1E79D0u;
            goto label_1e79d0;
        }
    }
    ctx->pc = 0x1E7690u;
label_1e7690:
    // 0x1e7690: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x1e7690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_1e7694:
    // 0x1e7694: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x1e7694u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1e7698:
    // 0x1e7698: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e769c:
    if (ctx->pc == 0x1E769Cu) {
        ctx->pc = 0x1E769Cu;
            // 0x1e769c: 0x3a083  sra         $s4, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x1E76A0u;
        goto label_1e76a0;
    }
    ctx->pc = 0x1E7698u;
    {
        const bool branch_taken_0x1e7698 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E769Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7698u;
            // 0x1e769c: 0x3a083  sra         $s4, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7698) {
            ctx->pc = 0x1E76A8u;
            goto label_1e76a8;
        }
    }
    ctx->pc = 0x1E76A0u;
label_1e76a0:
    // 0x1e76a0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1e76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_1e76a4:
    // 0x1e76a4: 0x3a083  sra         $s4, $v1, 2
    ctx->pc = 0x1e76a4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 2));
label_1e76a8:
    // 0x1e76a8: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x1e76a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e76ac:
    // 0x1e76ac: 0x54b023  subu        $s6, $v0, $s4
    ctx->pc = 0x1e76acu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1e76b0:
    // 0x1e76b0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e76b4:
    // 0x1e76b4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1e76b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1e76b8:
    // 0x1e76b8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1e76b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1e76bc:
    // 0x1e76bc: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x1e76bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1e76c0:
    // 0x1e76c0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1e76c4:
    if (ctx->pc == 0x1E76C4u) {
        ctx->pc = 0x1E76C8u;
        goto label_1e76c8;
    }
    ctx->pc = 0x1E76C0u;
    {
        const bool branch_taken_0x1e76c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e76c0) {
            ctx->pc = 0x1E76F0u;
            goto label_1e76f0;
        }
    }
    ctx->pc = 0x1E76C8u;
label_1e76c8:
    // 0x1e76c8: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x1e76c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1e76cc:
    // 0x1e76cc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1e76d0:
    if (ctx->pc == 0x1E76D0u) {
        ctx->pc = 0x1E76D4u;
        goto label_1e76d4;
    }
    ctx->pc = 0x1E76CCu;
    {
        const bool branch_taken_0x1e76cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e76cc) {
            ctx->pc = 0x1E76F0u;
            goto label_1e76f0;
        }
    }
    ctx->pc = 0x1E76D4u;
label_1e76d4:
    // 0x1e76d4: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1e76d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e76d8:
    // 0x1e76d8: 0x245082a  slt         $at, $s2, $a1
    ctx->pc = 0x1e76d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1e76dc:
    // 0x1e76dc: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_1e76e0:
    if (ctx->pc == 0x1E76E0u) {
        ctx->pc = 0x1E76E0u;
            // 0x1e76e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E76E4u;
        goto label_1e76e4;
    }
    ctx->pc = 0x1E76DCu;
    {
        const bool branch_taken_0x1e76dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e76dc) {
            ctx->pc = 0x1E76E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E76DCu;
            // 0x1e76e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E76E4u;
            goto label_1e76e4;
        }
    }
    ctx->pc = 0x1E76E4u;
label_1e76e4:
    // 0x1e76e4: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x1e76e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1e76e8:
    // 0x1e76e8: 0xc0a725c  jal         func_29C970
label_1e76ec:
    if (ctx->pc == 0x1E76ECu) {
        ctx->pc = 0x1E76ECu;
            // 0x1e76ec: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x1E76F0u;
        goto label_1e76f0;
    }
    ctx->pc = 0x1E76E8u;
    SET_GPR_U32(ctx, 31, 0x1E76F0u);
    ctx->pc = 0x1E76ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E76E8u;
            // 0x1e76ec: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76F0u; }
        if (ctx->pc != 0x1E76F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76F0u; }
        if (ctx->pc != 0x1E76F0u) { return; }
    }
    ctx->pc = 0x1E76F0u;
label_1e76f0:
    // 0x1e76f0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1e76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_1e76f4:
    // 0x1e76f4: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1e76f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1e76f8:
    // 0x1e76f8: 0x26c7ffff  addiu       $a3, $s6, -0x1
    ctx->pc = 0x1e76f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_1e76fc:
    // 0x1e76fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e7700:
    // 0x1e7700: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1e7700u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e7704:
    // 0x1e7704: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1e7704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e7708:
    // 0x1e7708: 0x4e0006b  bltz        $a3, . + 4 + (0x6B << 2)
label_1e770c:
    if (ctx->pc == 0x1E770Cu) {
        ctx->pc = 0x1E770Cu;
            // 0x1e770c: 0x2462000c  addiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x1E7710u;
        goto label_1e7710;
    }
    ctx->pc = 0x1E7708u;
    {
        const bool branch_taken_0x1e7708 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1E770Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7708u;
            // 0x1e770c: 0x2462000c  addiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7708) {
            ctx->pc = 0x1E78B8u;
            goto label_1e78b8;
        }
    }
    ctx->pc = 0x1E7710u;
label_1e7710:
    // 0x1e7710: 0x2ac10009  slti        $at, $s6, 0x9
    ctx->pc = 0x1e7710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
label_1e7714:
    // 0x1e7714: 0x14200056  bnez        $at, . + 4 + (0x56 << 2)
label_1e7718:
    if (ctx->pc == 0x1E7718u) {
        ctx->pc = 0x1E771Cu;
        goto label_1e771c;
    }
    ctx->pc = 0x1E7714u;
    {
        const bool branch_taken_0x1e7714 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7714) {
            ctx->pc = 0x1E7870u;
            goto label_1e7870;
        }
    }
    ctx->pc = 0x1E771Cu;
label_1e771c:
    // 0x1e771c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e771cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7720:
    // 0x1e7720: 0x4e00007  bltz        $a3, . + 4 + (0x7 << 2)
label_1e7724:
    if (ctx->pc == 0x1E7724u) {
        ctx->pc = 0x1E7724u;
            // 0x1e7724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7728u;
        goto label_1e7728;
    }
    ctx->pc = 0x1E7720u;
    {
        const bool branch_taken_0x1e7720 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1E7724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7720u;
            // 0x1e7724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7720) {
            ctx->pc = 0x1E7740u;
            goto label_1e7740;
        }
    }
    ctx->pc = 0x1E7728u;
label_1e7728:
    // 0x1e7728: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1e7728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1e772c:
    // 0x1e772c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x1e772cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_1e7730:
    // 0x1e7730: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x1e7730u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1e7734:
    // 0x1e7734: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_1e7738:
    if (ctx->pc == 0x1E7738u) {
        ctx->pc = 0x1E773Cu;
        goto label_1e773c;
    }
    ctx->pc = 0x1E7734u;
    {
        const bool branch_taken_0x1e7734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7734) {
            ctx->pc = 0x1E7740u;
            goto label_1e7740;
        }
    }
    ctx->pc = 0x1E773Cu;
label_1e773c:
    // 0x1e773c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x1e773cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e7740:
    // 0x1e7740: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_1e7744:
    if (ctx->pc == 0x1E7744u) {
        ctx->pc = 0x1E7748u;
        goto label_1e7748;
    }
    ctx->pc = 0x1E7740u;
    {
        const bool branch_taken_0x1e7740 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7740) {
            ctx->pc = 0x1E7778u;
            goto label_1e7778;
        }
    }
    ctx->pc = 0x1E7748u;
label_1e7748:
    // 0x1e7748: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1e7748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_1e774c:
    // 0x1e774c: 0xe62024  and         $a0, $a3, $a2
    ctx->pc = 0x1e774cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_1e7750:
    // 0x1e7750: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1e7754:
    if (ctx->pc == 0x1E7754u) {
        ctx->pc = 0x1E7754u;
            // 0x1e7754: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x1E7758u;
        goto label_1e7758;
    }
    ctx->pc = 0x1E7750u;
    {
        const bool branch_taken_0x1e7750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7750u;
            // 0x1e7754: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7750) {
            ctx->pc = 0x1E7768u;
            goto label_1e7768;
        }
    }
    ctx->pc = 0x1E7758u;
label_1e7758:
    // 0x1e7758: 0x2c62024  and         $a0, $s6, $a2
    ctx->pc = 0x1e7758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & GPR_U64(ctx, 6));
label_1e775c:
    // 0x1e775c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_1e7760:
    if (ctx->pc == 0x1E7760u) {
        ctx->pc = 0x1E7764u;
        goto label_1e7764;
    }
    ctx->pc = 0x1E775Cu;
    {
        const bool branch_taken_0x1e775c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e775c) {
            ctx->pc = 0x1E7768u;
            goto label_1e7768;
        }
    }
    ctx->pc = 0x1E7764u;
label_1e7764:
    // 0x1e7764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e7764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7768:
    // 0x1e7768: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_1e776c:
    if (ctx->pc == 0x1E776Cu) {
        ctx->pc = 0x1E7770u;
        goto label_1e7770;
    }
    ctx->pc = 0x1E7768u;
    {
        const bool branch_taken_0x1e7768 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7768) {
            ctx->pc = 0x1E7778u;
            goto label_1e7778;
        }
    }
    ctx->pc = 0x1E7770u;
label_1e7770:
    // 0x1e7770: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x1e7770u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e7774:
    // 0x1e7774: 0x0  nop
    ctx->pc = 0x1e7774u;
    // NOP
label_1e7778:
    // 0x1e7778: 0x1120003d  beqz        $t1, . + 4 + (0x3D << 2)
label_1e777c:
    if (ctx->pc == 0x1E777Cu) {
        ctx->pc = 0x1E7780u;
        goto label_1e7780;
    }
    ctx->pc = 0x1E7778u;
    {
        const bool branch_taken_0x1e7778 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7778) {
            ctx->pc = 0x1E7870u;
            goto label_1e7870;
        }
    }
    ctx->pc = 0x1E7780u;
label_1e7780:
    // 0x1e7780: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x1e7780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1e7784:
    // 0x1e7784: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1e7784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1e7788:
    // 0x1e7788: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e7788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e778c:
    // 0x1e778c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1e778cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e7790:
    // 0x1e7790: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1e7790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e7794:
    // 0x1e7794: 0x0  nop
    ctx->pc = 0x1e7794u;
    // NOP
label_1e7798:
    // 0x1e7798: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1e7798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e779c:
    // 0x1e779c: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x1e779cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
label_1e77a0:
    // 0x1e77a0: 0x28e10008  slti        $at, $a3, 0x8
    ctx->pc = 0x1e77a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e77a4:
    // 0x1e77a4: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1e77a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_1e77a8:
    // 0x1e77a8: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x1e77a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1e77ac:
    // 0x1e77ac: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x1e77acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
label_1e77b0:
    // 0x1e77b0: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x1e77b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1e77b4:
    // 0x1e77b4: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1e77b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
label_1e77b8:
    // 0x1e77b8: 0x8cc8fff4  lw          $t0, -0xC($a2)
    ctx->pc = 0x1e77b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
label_1e77bc:
    // 0x1e77bc: 0xac88fff4  sw          $t0, -0xC($a0)
    ctx->pc = 0x1e77bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967284), GPR_U32(ctx, 8));
label_1e77c0:
    // 0x1e77c0: 0x8cc8fff8  lw          $t0, -0x8($a2)
    ctx->pc = 0x1e77c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_1e77c4:
    // 0x1e77c4: 0xac88fff8  sw          $t0, -0x8($a0)
    ctx->pc = 0x1e77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 8));
label_1e77c8:
    // 0x1e77c8: 0x8cc8fffc  lw          $t0, -0x4($a2)
    ctx->pc = 0x1e77c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_1e77cc:
    // 0x1e77cc: 0xac88fffc  sw          $t0, -0x4($a0)
    ctx->pc = 0x1e77ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 8));
label_1e77d0:
    // 0x1e77d0: 0x8cc8ffe8  lw          $t0, -0x18($a2)
    ctx->pc = 0x1e77d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967272)));
label_1e77d4:
    // 0x1e77d4: 0xac88ffe8  sw          $t0, -0x18($a0)
    ctx->pc = 0x1e77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967272), GPR_U32(ctx, 8));
label_1e77d8:
    // 0x1e77d8: 0x8cc8ffec  lw          $t0, -0x14($a2)
    ctx->pc = 0x1e77d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967276)));
label_1e77dc:
    // 0x1e77dc: 0xac88ffec  sw          $t0, -0x14($a0)
    ctx->pc = 0x1e77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967276), GPR_U32(ctx, 8));
label_1e77e0:
    // 0x1e77e0: 0x8cc8fff0  lw          $t0, -0x10($a2)
    ctx->pc = 0x1e77e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_1e77e4:
    // 0x1e77e4: 0xac88fff0  sw          $t0, -0x10($a0)
    ctx->pc = 0x1e77e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_U32(ctx, 8));
label_1e77e8:
    // 0x1e77e8: 0x8cc8ffdc  lw          $t0, -0x24($a2)
    ctx->pc = 0x1e77e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967260)));
label_1e77ec:
    // 0x1e77ec: 0xac88ffdc  sw          $t0, -0x24($a0)
    ctx->pc = 0x1e77ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967260), GPR_U32(ctx, 8));
label_1e77f0:
    // 0x1e77f0: 0x8cc8ffe0  lw          $t0, -0x20($a2)
    ctx->pc = 0x1e77f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967264)));
label_1e77f4:
    // 0x1e77f4: 0xac88ffe0  sw          $t0, -0x20($a0)
    ctx->pc = 0x1e77f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967264), GPR_U32(ctx, 8));
label_1e77f8:
    // 0x1e77f8: 0x8cc8ffe4  lw          $t0, -0x1C($a2)
    ctx->pc = 0x1e77f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967268)));
label_1e77fc:
    // 0x1e77fc: 0xac88ffe4  sw          $t0, -0x1C($a0)
    ctx->pc = 0x1e77fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967268), GPR_U32(ctx, 8));
label_1e7800:
    // 0x1e7800: 0x8cc8ffd0  lw          $t0, -0x30($a2)
    ctx->pc = 0x1e7800u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967248)));
label_1e7804:
    // 0x1e7804: 0xac88ffd0  sw          $t0, -0x30($a0)
    ctx->pc = 0x1e7804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967248), GPR_U32(ctx, 8));
label_1e7808:
    // 0x1e7808: 0x8cc8ffd4  lw          $t0, -0x2C($a2)
    ctx->pc = 0x1e7808u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967252)));
label_1e780c:
    // 0x1e780c: 0xac88ffd4  sw          $t0, -0x2C($a0)
    ctx->pc = 0x1e780cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967252), GPR_U32(ctx, 8));
label_1e7810:
    // 0x1e7810: 0x8cc8ffd8  lw          $t0, -0x28($a2)
    ctx->pc = 0x1e7810u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967256)));
label_1e7814:
    // 0x1e7814: 0xac88ffd8  sw          $t0, -0x28($a0)
    ctx->pc = 0x1e7814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967256), GPR_U32(ctx, 8));
label_1e7818:
    // 0x1e7818: 0x8cc8ffc4  lw          $t0, -0x3C($a2)
    ctx->pc = 0x1e7818u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967236)));
label_1e781c:
    // 0x1e781c: 0xac88ffc4  sw          $t0, -0x3C($a0)
    ctx->pc = 0x1e781cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967236), GPR_U32(ctx, 8));
label_1e7820:
    // 0x1e7820: 0x8cc8ffc8  lw          $t0, -0x38($a2)
    ctx->pc = 0x1e7820u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967240)));
label_1e7824:
    // 0x1e7824: 0xac88ffc8  sw          $t0, -0x38($a0)
    ctx->pc = 0x1e7824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967240), GPR_U32(ctx, 8));
label_1e7828:
    // 0x1e7828: 0x8cc8ffcc  lw          $t0, -0x34($a2)
    ctx->pc = 0x1e7828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967244)));
label_1e782c:
    // 0x1e782c: 0xac88ffcc  sw          $t0, -0x34($a0)
    ctx->pc = 0x1e782cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967244), GPR_U32(ctx, 8));
label_1e7830:
    // 0x1e7830: 0x8cc8ffb8  lw          $t0, -0x48($a2)
    ctx->pc = 0x1e7830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967224)));
label_1e7834:
    // 0x1e7834: 0xac88ffb8  sw          $t0, -0x48($a0)
    ctx->pc = 0x1e7834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967224), GPR_U32(ctx, 8));
label_1e7838:
    // 0x1e7838: 0x8cc8ffbc  lw          $t0, -0x44($a2)
    ctx->pc = 0x1e7838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967228)));
label_1e783c:
    // 0x1e783c: 0xac88ffbc  sw          $t0, -0x44($a0)
    ctx->pc = 0x1e783cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967228), GPR_U32(ctx, 8));
label_1e7840:
    // 0x1e7840: 0x8cc8ffc0  lw          $t0, -0x40($a2)
    ctx->pc = 0x1e7840u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967232)));
label_1e7844:
    // 0x1e7844: 0xac88ffc0  sw          $t0, -0x40($a0)
    ctx->pc = 0x1e7844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967232), GPR_U32(ctx, 8));
label_1e7848:
    // 0x1e7848: 0x8cc8ffac  lw          $t0, -0x54($a2)
    ctx->pc = 0x1e7848u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967212)));
label_1e784c:
    // 0x1e784c: 0xac88ffac  sw          $t0, -0x54($a0)
    ctx->pc = 0x1e784cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967212), GPR_U32(ctx, 8));
label_1e7850:
    // 0x1e7850: 0x8cc8ffb0  lw          $t0, -0x50($a2)
    ctx->pc = 0x1e7850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967216)));
label_1e7854:
    // 0x1e7854: 0xac88ffb0  sw          $t0, -0x50($a0)
    ctx->pc = 0x1e7854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967216), GPR_U32(ctx, 8));
label_1e7858:
    // 0x1e7858: 0x8cc8ffb4  lw          $t0, -0x4C($a2)
    ctx->pc = 0x1e7858u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967220)));
label_1e785c:
    // 0x1e785c: 0xac88ffb4  sw          $t0, -0x4C($a0)
    ctx->pc = 0x1e785cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967220), GPR_U32(ctx, 8));
label_1e7860:
    // 0x1e7860: 0x24c6ffa0  addiu       $a2, $a2, -0x60
    ctx->pc = 0x1e7860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967200));
label_1e7864:
    // 0x1e7864: 0x1020ffcc  beqz        $at, . + 4 + (-0x34 << 2)
label_1e7868:
    if (ctx->pc == 0x1E7868u) {
        ctx->pc = 0x1E7868u;
            // 0x1e7868: 0x2484ffa0  addiu       $a0, $a0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
        ctx->pc = 0x1E786Cu;
        goto label_1e786c;
    }
    ctx->pc = 0x1E7864u;
    {
        const bool branch_taken_0x1e7864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7864u;
            // 0x1e7868: 0x2484ffa0  addiu       $a0, $a0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7864) {
            ctx->pc = 0x1E7798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7798;
        }
    }
    ctx->pc = 0x1E786Cu;
label_1e786c:
    // 0x1e786c: 0x0  nop
    ctx->pc = 0x1e786cu;
    // NOP
label_1e7870:
    // 0x1e7870: 0x4e00011  bltz        $a3, . + 4 + (0x11 << 2)
label_1e7874:
    if (ctx->pc == 0x1E7874u) {
        ctx->pc = 0x1E7878u;
        goto label_1e7878;
    }
    ctx->pc = 0x1E7870u;
    {
        const bool branch_taken_0x1e7870 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x1e7870) {
            ctx->pc = 0x1E78B8u;
            goto label_1e78b8;
        }
    }
    ctx->pc = 0x1E7878u;
label_1e7878:
    // 0x1e7878: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x1e7878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1e787c:
    // 0x1e787c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1e787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1e7880:
    // 0x1e7880: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e7880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e7884:
    // 0x1e7884: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1e7884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e7888:
    // 0x1e7888: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1e7888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e788c:
    // 0x1e788c: 0x0  nop
    ctx->pc = 0x1e788cu;
    // NOP
label_1e7890:
    // 0x1e7890: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e7890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e7894:
    // 0x1e7894: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1e7894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1e7898:
    // 0x1e7898: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e7898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e789c:
    // 0x1e789c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1e789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1e78a0:
    // 0x1e78a0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e78a4:
    // 0x1e78a4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1e78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1e78a8:
    // 0x1e78a8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1e78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1e78ac:
    // 0x1e78ac: 0x24c6fff4  addiu       $a2, $a2, -0xC
    ctx->pc = 0x1e78acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967284));
label_1e78b0:
    // 0x1e78b0: 0x4e1fff7  bgez        $a3, . + 4 + (-0x9 << 2)
label_1e78b4:
    if (ctx->pc == 0x1E78B4u) {
        ctx->pc = 0x1E78B4u;
            // 0x1e78b4: 0x2463fff4  addiu       $v1, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->pc = 0x1E78B8u;
        goto label_1e78b8;
    }
    ctx->pc = 0x1E78B0u;
    {
        const bool branch_taken_0x1e78b0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E78B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78B0u;
            // 0x1e78b4: 0x2463fff4  addiu       $v1, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78b0) {
            ctx->pc = 0x1E7890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7890;
        }
    }
    ctx->pc = 0x1E78B8u;
label_1e78b8:
    // 0x1e78b8: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1e78b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
label_1e78bc:
    // 0x1e78bc: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1e78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1e78c0:
    // 0x1e78c0: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x1e78c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1e78c4:
    // 0x1e78c4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e78c8:
    // 0x1e78c8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x1e78c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e78cc:
    // 0x1e78cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e78ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e78d0:
    // 0x1e78d0: 0x45a021  addu        $s4, $v0, $a1
    ctx->pc = 0x1e78d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e78d4:
    // 0x1e78d4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e78d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e78d8:
    // 0x1e78d8: 0x320f809  jalr        $t9
label_1e78dc:
    if (ctx->pc == 0x1E78DCu) {
        ctx->pc = 0x1E78DCu;
            // 0x1e78dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E78E0u;
        goto label_1e78e0;
    }
    ctx->pc = 0x1E78D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E78E0u);
        ctx->pc = 0x1E78DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78D8u;
            // 0x1e78dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E78E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E78E0u; }
            if (ctx->pc != 0x1E78E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E78E0u;
label_1e78e0:
    // 0x1e78e0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1e78e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_1e78e4:
    // 0x1e78e4: 0x27a407ec  addiu       $a0, $sp, 0x7EC
    ctx->pc = 0x1e78e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2028));
label_1e78e8:
    // 0x1e78e8: 0xafb20158  sw          $s2, 0x158($sp)
    ctx->pc = 0x1e78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 18));
label_1e78ec:
    // 0x1e78ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e78ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e78f0:
    // 0x1e78f0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1e78f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e78f4:
    // 0x1e78f4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1e78f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e78f8:
    // 0x1e78f8: 0x8fa800fc  lw          $t0, 0xFC($sp)
    ctx->pc = 0x1e78f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e78fc:
    // 0x1e78fc: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1e78fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e7900:
    // 0x1e7900: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x1e7900u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7904:
    // 0x1e7904: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1e7904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e7908:
    // 0x1e7908: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e7908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e790c:
    // 0x1e790c: 0x320f809  jalr        $t9
label_1e7910:
    if (ctx->pc == 0x1E7910u) {
        ctx->pc = 0x1E7910u;
            // 0x1e7910: 0x27b60154  addiu       $s6, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->pc = 0x1E7914u;
        goto label_1e7914;
    }
    ctx->pc = 0x1E790Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7914u);
        ctx->pc = 0x1E7910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E790Cu;
            // 0x1e7910: 0x27b60154  addiu       $s6, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7914u; }
            if (ctx->pc != 0x1E7914u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7914u;
label_1e7914:
    // 0x1e7914: 0x27a207ec  addiu       $v0, $sp, 0x7EC
    ctx->pc = 0x1e7914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2028));
label_1e7918:
    // 0x1e7918: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1e7918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e791c:
    // 0x1e791c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1e7920:
    if (ctx->pc == 0x1E7920u) {
        ctx->pc = 0x1E7924u;
        goto label_1e7924;
    }
    ctx->pc = 0x1E791Cu;
    {
        const bool branch_taken_0x1e791c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e791c) {
            ctx->pc = 0x1E7998u;
            goto label_1e7998;
        }
    }
    ctx->pc = 0x1E7924u;
label_1e7924:
    // 0x1e7924: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x1e7924u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e7928:
    // 0x1e7928: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e7928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e792c:
    // 0x1e792c: 0x82030010  lb          $v1, 0x10($s0)
    ctx->pc = 0x1e792cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1e7930:
    // 0x1e7930: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e7930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e7934:
    // 0x1e7934: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x1e7934u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1e7938:
    // 0x1e7938: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x1e7938u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1e793c:
    // 0x1e793c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7940:
    // 0x1e7940: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e7940u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e7944:
    // 0x1e7944: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x1e7944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1e7948:
    // 0x1e7948: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x1e7948u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1e794c:
    // 0x1e794c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e7950:
    if (ctx->pc == 0x1E7950u) {
        ctx->pc = 0x1E7950u;
            // 0x1e7950: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7954u;
        goto label_1e7954;
    }
    ctx->pc = 0x1E794Cu;
    {
        const bool branch_taken_0x1e794c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E794Cu;
            // 0x1e7950: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e794c) {
            ctx->pc = 0x1E795Cu;
            goto label_1e795c;
        }
    }
    ctx->pc = 0x1E7954u;
label_1e7954:
    // 0x1e7954: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e7958:
    if (ctx->pc == 0x1E7958u) {
        ctx->pc = 0x1E7958u;
            // 0x1e7958: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->pc = 0x1E795Cu;
        goto label_1e795c;
    }
    ctx->pc = 0x1E7954u;
    {
        const bool branch_taken_0x1e7954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7954u;
            // 0x1e7958: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7954) {
            ctx->pc = 0x1E7960u;
            goto label_1e7960;
        }
    }
    ctx->pc = 0x1E795Cu;
label_1e795c:
    // 0x1e795c: 0x244801a0  addiu       $t0, $v0, 0x1A0
    ctx->pc = 0x1e795cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_1e7960:
    // 0x1e7960: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x1e7960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1e7964:
    // 0x1e7964: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1e7964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1e7968:
    // 0x1e7968: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1e7968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1e796c:
    // 0x1e796c: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1e796cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e7970:
    // 0x1e7970: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1e7970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1e7974:
    // 0x1e7974: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1e7974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1e7978:
    // 0x1e7978: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e7978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e797c:
    // 0x1e797c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7980:
    // 0x1e7980: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1e7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1e7984:
    // 0x1e7984: 0x40f809  jalr        $v0
label_1e7988:
    if (ctx->pc == 0x1E7988u) {
        ctx->pc = 0x1E798Cu;
        goto label_1e798c;
    }
    ctx->pc = 0x1E7984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E798Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E798Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E798Cu; }
            if (ctx->pc != 0x1E798Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E798Cu;
label_1e798c:
    // 0x1e798c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e7990:
    if (ctx->pc == 0x1E7990u) {
        ctx->pc = 0x1E7990u;
            // 0x1e7990: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1E7994u;
        goto label_1e7994;
    }
    ctx->pc = 0x1E798Cu;
    {
        const bool branch_taken_0x1e798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E798Cu;
            // 0x1e7990: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e798c) {
            ctx->pc = 0x1E79A8u;
            goto label_1e79a8;
        }
    }
    ctx->pc = 0x1E7994u;
label_1e7994:
    // 0x1e7994: 0x0  nop
    ctx->pc = 0x1e7994u;
    // NOP
label_1e7998:
    // 0x1e7998: 0xc07d284  jal         func_1F4A10
label_1e799c:
    if (ctx->pc == 0x1E799Cu) {
        ctx->pc = 0x1E79A0u;
        goto label_1e79a0;
    }
    ctx->pc = 0x1E7998u;
    SET_GPR_U32(ctx, 31, 0x1E79A0u);
    ctx->pc = 0x1F4A10u;
    if (runtime->hasFunction(0x1F4A10u)) {
        auto targetFn = runtime->lookupFunction(0x1F4A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79A0u; }
        if (ctx->pc != 0x1E79A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79A0u; }
        if (ctx->pc != 0x1E79A0u) { return; }
    }
    ctx->pc = 0x1E79A0u;
label_1e79a0:
    // 0x1e79a0: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1e79a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_1e79a4:
    // 0x1e79a4: 0x0  nop
    ctx->pc = 0x1e79a4u;
    // NOP
label_1e79a8:
    // 0x1e79a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e79ac:
    // 0x1e79ac: 0x2686000c  addiu       $a2, $s4, 0xC
    ctx->pc = 0x1e79acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1e79b0:
    // 0x1e79b0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1e79b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1e79b4:
    // 0x1e79b4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e79b8:
    // 0x1e79b8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e79bc:
    // 0x1e79bc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1e79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e79c0:
    // 0x1e79c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1e79c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e79c4:
    // 0x1e79c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e79c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e79c8:
    // 0x1e79c8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1e79c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e79cc:
    // 0x1e79cc: 0x0  nop
    ctx->pc = 0x1e79ccu;
    // NOP
label_1e79d0:
    // 0x1e79d0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e79d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1e79d4:
    // 0x1e79d4: 0x167eff26  bne         $s3, $fp, . + 4 + (-0xDA << 2)
label_1e79d8:
    if (ctx->pc == 0x1E79D8u) {
        ctx->pc = 0x1E79DCu;
        goto label_1e79dc;
    }
    ctx->pc = 0x1E79D4u;
    {
        const bool branch_taken_0x1e79d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        if (branch_taken_0x1e79d4) {
            ctx->pc = 0x1E7670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7670;
        }
    }
    ctx->pc = 0x1E79DCu;
label_1e79dc:
    // 0x1e79dc: 0x1000018e  b           . + 4 + (0x18E << 2)
label_1e79e0:
    if (ctx->pc == 0x1E79E0u) {
        ctx->pc = 0x1E79E0u;
            // 0x1e79e0: 0x8fa303b8  lw          $v1, 0x3B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
        ctx->pc = 0x1E79E4u;
        goto label_1e79e4;
    }
    ctx->pc = 0x1E79DCu;
    {
        const bool branch_taken_0x1e79dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E79E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79DCu;
            // 0x1e79e0: 0x8fa303b8  lw          $v1, 0x3B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e79dc) {
            ctx->pc = 0x1E8018u;
            goto label_1e8018;
        }
    }
    ctx->pc = 0x1E79E4u;
label_1e79e4:
    // 0x1e79e4: 0x8fa503b4  lw          $a1, 0x3B4($sp)
    ctx->pc = 0x1e79e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_1e79e8:
    // 0x1e79e8: 0xc07a348  jal         func_1E8D20
label_1e79ec:
    if (ctx->pc == 0x1E79ECu) {
        ctx->pc = 0x1E79ECu;
            // 0x1e79ec: 0x8fa403b0  lw          $a0, 0x3B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
        ctx->pc = 0x1E79F0u;
        goto label_1e79f0;
    }
    ctx->pc = 0x1E79E8u;
    SET_GPR_U32(ctx, 31, 0x1E79F0u);
    ctx->pc = 0x1E79ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79E8u;
            // 0x1e79ec: 0x8fa403b0  lw          $a0, 0x3B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D20u;
    if (runtime->hasFunction(0x1E8D20u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79F0u; }
        if (ctx->pc != 0x1E79F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8D20_0x1e8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79F0u; }
        if (ctx->pc != 0x1E79F0u) { return; }
    }
    ctx->pc = 0x1E79F0u;
label_1e79f0:
    // 0x1e79f0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e79f4:
    // 0x1e79f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e79f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1e79f8:
    // 0x1e79f8: 0x8e34000c  lw          $s4, 0xC($s1)
    ctx->pc = 0x1e79f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e79fc:
    // 0x1e79fc: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1e79fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1e7a00:
    // 0x1e7a00: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1e7a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e7a04:
    // 0x1e7a04: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1e7a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1e7a08:
    // 0x1e7a08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e7a0c:
    // 0x1e7a0c: 0x8fb303b0  lw          $s3, 0x3B0($sp)
    ctx->pc = 0x1e7a0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_1e7a10:
    // 0x1e7a10: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e7a14:
    // 0x1e7a14: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x1e7a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
label_1e7a18:
    // 0x1e7a18: 0x8fa303b4  lw          $v1, 0x3B4($sp)
    ctx->pc = 0x1e7a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_1e7a1c:
    // 0x1e7a1c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1e7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1e7a20:
    // 0x1e7a20: 0x8fb203b4  lw          $s2, 0x3B4($sp)
    ctx->pc = 0x1e7a20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_1e7a24:
    // 0x1e7a24: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e7a28:
    // 0x1e7a28: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1e7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_1e7a2c:
    // 0x1e7a2c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1e7a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e7a30:
    // 0x1e7a30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e7a34:
    // 0x1e7a34: 0x266f021  addu        $fp, $s3, $a2
    ctx->pc = 0x1e7a34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_1e7a38:
    // 0x1e7a38: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1e7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1e7a3c:
    // 0x1e7a3c: 0x123040  sll         $a2, $s2, 1
    ctx->pc = 0x1e7a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_1e7a40:
    // 0x1e7a40: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1e7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_1e7a44:
    // 0x1e7a44: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1e7a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1e7a48:
    // 0x1e7a48: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x1e7a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e7a4c:
    // 0x1e7a4c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1e7a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1e7a50:
    // 0x1e7a50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1e7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e7a54:
    // 0x1e7a54: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1e7a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1e7a58:
    // 0x1e7a58: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1e7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1e7a5c:
    // 0x1e7a5c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1e7a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1e7a60:
    // 0x1e7a60: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1e7a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e7a64:
    // 0x1e7a64: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x1e7a64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1e7a68:
    // 0x1e7a68: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e7a6c:
    if (ctx->pc == 0x1E7A6Cu) {
        ctx->pc = 0x1E7A6Cu;
            // 0x1e7a6c: 0x27b70100  addiu       $s7, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1E7A70u;
        goto label_1e7a70;
    }
    ctx->pc = 0x1E7A68u;
    {
        const bool branch_taken_0x1e7a68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A68u;
            // 0x1e7a6c: 0x27b70100  addiu       $s7, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a68) {
            ctx->pc = 0x1E7A78u;
            goto label_1e7a78;
        }
    }
    ctx->pc = 0x1E7A70u;
label_1e7a70:
    // 0x1e7a70: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e7a74:
    if (ctx->pc == 0x1E7A74u) {
        ctx->pc = 0x1E7A74u;
            // 0x1e7a74: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x1E7A78u;
        goto label_1e7a78;
    }
    ctx->pc = 0x1E7A70u;
    {
        const bool branch_taken_0x1e7a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A70u;
            // 0x1e7a74: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a70) {
            ctx->pc = 0x1E7A88u;
            goto label_1e7a88;
        }
    }
    ctx->pc = 0x1E7A78u;
label_1e7a78:
    // 0x1e7a78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e7a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7a7c:
    // 0x1e7a7c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e7a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e7a80:
    // 0x1e7a80: 0x320f809  jalr        $t9
label_1e7a84:
    if (ctx->pc == 0x1E7A84u) {
        ctx->pc = 0x1E7A88u;
        goto label_1e7a88;
    }
    ctx->pc = 0x1E7A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7A88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A88u; }
            if (ctx->pc != 0x1E7A88u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7A88u;
label_1e7a88:
    // 0x1e7a88: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1e7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_1e7a8c:
    // 0x1e7a8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e7a90:
    // 0x1e7a90: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1e7a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_1e7a94:
    // 0x1e7a94: 0xaee20008  sw          $v0, 0x8($s7)
    ctx->pc = 0x1e7a94u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
label_1e7a98:
    // 0x1e7a98: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1e7a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1e7a9c:
    // 0x1e7a9c: 0x8fb203b4  lw          $s2, 0x3B4($sp)
    ctx->pc = 0x1e7a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_1e7aa0:
    // 0x1e7aa0: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x1e7aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
label_1e7aa4:
    // 0x1e7aa4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1e7aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1e7aa8:
    // 0x1e7aa8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1e7aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1e7aac:
    // 0x1e7aac: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1e7aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1e7ab0:
    // 0x1e7ab0: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x1e7ab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1e7ab4:
    // 0x1e7ab4: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_1e7ab8:
    if (ctx->pc == 0x1E7AB8u) {
        ctx->pc = 0x1E7AB8u;
            // 0x1e7ab8: 0xafb20104  sw          $s2, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 18));
        ctx->pc = 0x1E7ABCu;
        goto label_1e7abc;
    }
    ctx->pc = 0x1E7AB4u;
    {
        const bool branch_taken_0x1e7ab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ab4) {
            ctx->pc = 0x1E7AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AB4u;
            // 0x1e7ab8: 0xafb20104  sw          $s2, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7ADCu;
            goto label_1e7adc;
        }
    }
    ctx->pc = 0x1E7ABCu;
label_1e7abc:
    // 0x1e7abc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1e7abcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e7ac0:
    // 0x1e7ac0: 0x245082a  slt         $at, $s2, $a1
    ctx->pc = 0x1e7ac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1e7ac4:
    // 0x1e7ac4: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_1e7ac8:
    if (ctx->pc == 0x1E7AC8u) {
        ctx->pc = 0x1E7AC8u;
            // 0x1e7ac8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7ACCu;
        goto label_1e7acc;
    }
    ctx->pc = 0x1E7AC4u;
    {
        const bool branch_taken_0x1e7ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ac4) {
            ctx->pc = 0x1E7AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AC4u;
            // 0x1e7ac8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7ACCu;
            goto label_1e7acc;
        }
    }
    ctx->pc = 0x1E7ACCu;
label_1e7acc:
    // 0x1e7acc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e7accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1e7ad0:
    // 0x1e7ad0: 0xc0a725c  jal         func_29C970
label_1e7ad4:
    if (ctx->pc == 0x1E7AD4u) {
        ctx->pc = 0x1E7AD4u;
            // 0x1e7ad4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x1E7AD8u;
        goto label_1e7ad8;
    }
    ctx->pc = 0x1E7AD0u;
    SET_GPR_U32(ctx, 31, 0x1E7AD8u);
    ctx->pc = 0x1E7AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AD0u;
            // 0x1e7ad4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AD8u; }
        if (ctx->pc != 0x1E7AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AD8u; }
        if (ctx->pc != 0x1E7AD8u) { return; }
    }
    ctx->pc = 0x1E7AD8u;
label_1e7ad8:
    // 0x1e7ad8: 0xafb20104  sw          $s2, 0x104($sp)
    ctx->pc = 0x1e7ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 18));
label_1e7adc:
    // 0x1e7adc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1e7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1e7ae0:
    // 0x1e7ae0: 0x8fb20100  lw          $s2, 0x100($sp)
    ctx->pc = 0x1e7ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1e7ae4:
    // 0x1e7ae4: 0x10000058  b           . + 4 + (0x58 << 2)
label_1e7ae8:
    if (ctx->pc == 0x1E7AE8u) {
        ctx->pc = 0x1E7AE8u;
            // 0x1e7ae8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x1E7AECu;
        goto label_1e7aec;
    }
    ctx->pc = 0x1E7AE4u;
    {
        const bool branch_taken_0x1e7ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AE4u;
            // 0x1e7ae8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ae4) {
            ctx->pc = 0x1E7C48u;
            goto label_1e7c48;
        }
    }
    ctx->pc = 0x1E7AECu;
label_1e7aec:
    // 0x1e7aec: 0x8e770000  lw          $s7, 0x0($s3)
    ctx->pc = 0x1e7aecu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7af0:
    // 0x1e7af0: 0x16e2000b  bne         $s7, $v0, . + 4 + (0xB << 2)
label_1e7af4:
    if (ctx->pc == 0x1E7AF4u) {
        ctx->pc = 0x1E7AF8u;
        goto label_1e7af8;
    }
    ctx->pc = 0x1E7AF0u;
    {
        const bool branch_taken_0x1e7af0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7af0) {
            ctx->pc = 0x1E7B20u;
            goto label_1e7b20;
        }
    }
    ctx->pc = 0x1E7AF8u;
label_1e7af8:
    // 0x1e7af8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e7afc:
    // 0x1e7afc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e7afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1e7b00:
    // 0x1e7b00: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e7b00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1e7b04:
    // 0x1e7b04: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1e7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1e7b08:
    // 0x1e7b08: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1e7b08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1e7b0c:
    // 0x1e7b0c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e7b10:
    // 0x1e7b10: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1e7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1e7b14:
    // 0x1e7b14: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1e7b14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1e7b18:
    // 0x1e7b18: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1e7b1c:
    if (ctx->pc == 0x1E7B1Cu) {
        ctx->pc = 0x1E7B1Cu;
            // 0x1e7b1c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x1E7B20u;
        goto label_1e7b20;
    }
    ctx->pc = 0x1E7B18u;
    {
        const bool branch_taken_0x1e7b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B18u;
            // 0x1e7b1c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b18) {
            ctx->pc = 0x1E7C48u;
            goto label_1e7c48;
        }
    }
    ctx->pc = 0x1E7B20u;
label_1e7b20:
    // 0x1e7b20: 0x2e2082b  sltu        $at, $s7, $v0
    ctx->pc = 0x1e7b20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e7b24:
    // 0x1e7b24: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_1e7b28:
    if (ctx->pc == 0x1E7B28u) {
        ctx->pc = 0x1E7B2Cu;
        goto label_1e7b2c;
    }
    ctx->pc = 0x1E7B24u;
    {
        const bool branch_taken_0x1e7b24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b24) {
            ctx->pc = 0x1E7C20u;
            goto label_1e7c20;
        }
    }
    ctx->pc = 0x1E7B2Cu;
label_1e7b2c:
    // 0x1e7b2c: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1e7b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1e7b30:
    // 0x1e7b30: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1e7b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e7b34:
    // 0x1e7b34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e7b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7b38:
    // 0x1e7b38: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e7b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e7b3c:
    // 0x1e7b3c: 0x320f809  jalr        $t9
label_1e7b40:
    if (ctx->pc == 0x1E7B40u) {
        ctx->pc = 0x1E7B40u;
            // 0x1e7b40: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x1E7B44u;
        goto label_1e7b44;
    }
    ctx->pc = 0x1E7B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7B44u);
        ctx->pc = 0x1E7B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B3Cu;
            // 0x1e7b40: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7B44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B44u; }
            if (ctx->pc != 0x1E7B44u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7B44u;
label_1e7b44:
    // 0x1e7b44: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1e7b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_1e7b48:
    // 0x1e7b48: 0x27a407e8  addiu       $a0, $sp, 0x7E8
    ctx->pc = 0x1e7b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2024));
label_1e7b4c:
    // 0x1e7b4c: 0xafb70158  sw          $s7, 0x158($sp)
    ctx->pc = 0x1e7b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 23));
label_1e7b50:
    // 0x1e7b50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7b54:
    // 0x1e7b54: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1e7b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e7b58:
    // 0x1e7b58: 0x8fa800fc  lw          $t0, 0xFC($sp)
    ctx->pc = 0x1e7b58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e7b5c:
    // 0x1e7b5c: 0x8fa900c0  lw          $t1, 0xC0($sp)
    ctx->pc = 0x1e7b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1e7b60:
    // 0x1e7b60: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1e7b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e7b64:
    // 0x1e7b64: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x1e7b64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7b68:
    // 0x1e7b68: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e7b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e7b6c:
    // 0x1e7b6c: 0x320f809  jalr        $t9
label_1e7b70:
    if (ctx->pc == 0x1E7B70u) {
        ctx->pc = 0x1E7B70u;
            // 0x1e7b70: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B74u;
        goto label_1e7b74;
    }
    ctx->pc = 0x1E7B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7B74u);
        ctx->pc = 0x1E7B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B6Cu;
            // 0x1e7b70: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7B74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B74u; }
            if (ctx->pc != 0x1E7B74u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7B74u;
label_1e7b74:
    // 0x1e7b74: 0x27a207e8  addiu       $v0, $sp, 0x7E8
    ctx->pc = 0x1e7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2024));
label_1e7b78:
    // 0x1e7b78: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1e7b78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e7b7c:
    // 0x1e7b7c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1e7b80:
    if (ctx->pc == 0x1E7B80u) {
        ctx->pc = 0x1E7B84u;
        goto label_1e7b84;
    }
    ctx->pc = 0x1E7B7Cu;
    {
        const bool branch_taken_0x1e7b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b7c) {
            ctx->pc = 0x1E7BF8u;
            goto label_1e7bf8;
        }
    }
    ctx->pc = 0x1E7B84u;
label_1e7b84:
    // 0x1e7b84: 0x27a50154  addiu       $a1, $sp, 0x154
    ctx->pc = 0x1e7b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_1e7b88:
    // 0x1e7b88: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x1e7b88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e7b8c:
    // 0x1e7b8c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e7b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e7b90:
    // 0x1e7b90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7b94:
    // 0x1e7b94: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1e7b94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e7b98:
    // 0x1e7b98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e7b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e7b9c:
    // 0x1e7b9c: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x1e7b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1e7ba0:
    // 0x1e7ba0: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x1e7ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1e7ba4:
    // 0x1e7ba4: 0x82030010  lb          $v1, 0x10($s0)
    ctx->pc = 0x1e7ba4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1e7ba8:
    // 0x1e7ba8: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x1e7ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1e7bac:
    // 0x1e7bac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e7bacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e7bb0:
    // 0x1e7bb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e7bb4:
    if (ctx->pc == 0x1E7BB4u) {
        ctx->pc = 0x1E7BB4u;
            // 0x1e7bb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BB8u;
        goto label_1e7bb8;
    }
    ctx->pc = 0x1E7BB0u;
    {
        const bool branch_taken_0x1e7bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7BB0u;
            // 0x1e7bb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bb0) {
            ctx->pc = 0x1E7BC0u;
            goto label_1e7bc0;
        }
    }
    ctx->pc = 0x1E7BB8u;
label_1e7bb8:
    // 0x1e7bb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e7bbc:
    if (ctx->pc == 0x1E7BBCu) {
        ctx->pc = 0x1E7BBCu;
            // 0x1e7bbc: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->pc = 0x1E7BC0u;
        goto label_1e7bc0;
    }
    ctx->pc = 0x1E7BB8u;
    {
        const bool branch_taken_0x1e7bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7BB8u;
            // 0x1e7bbc: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bb8) {
            ctx->pc = 0x1E7BC4u;
            goto label_1e7bc4;
        }
    }
    ctx->pc = 0x1E7BC0u;
label_1e7bc0:
    // 0x1e7bc0: 0x244801a0  addiu       $t0, $v0, 0x1A0
    ctx->pc = 0x1e7bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_1e7bc4:
    // 0x1e7bc4: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x1e7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1e7bc8:
    // 0x1e7bc8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1e7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1e7bcc:
    // 0x1e7bcc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1e7bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1e7bd0:
    // 0x1e7bd0: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1e7bd0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e7bd4:
    // 0x1e7bd4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1e7bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1e7bd8:
    // 0x1e7bd8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1e7bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1e7bdc:
    // 0x1e7bdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e7be0:
    // 0x1e7be0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7be4:
    // 0x1e7be4: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1e7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1e7be8:
    // 0x1e7be8: 0x40f809  jalr        $v0
label_1e7bec:
    if (ctx->pc == 0x1E7BECu) {
        ctx->pc = 0x1E7BF0u;
        goto label_1e7bf0;
    }
    ctx->pc = 0x1E7BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E7BF0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7BF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7BF0u; }
            if (ctx->pc != 0x1E7BF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7BF0u;
label_1e7bf0:
    // 0x1e7bf0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e7bf4:
    if (ctx->pc == 0x1E7BF4u) {
        ctx->pc = 0x1E7BF4u;
            // 0x1e7bf4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1E7BF8u;
        goto label_1e7bf8;
    }
    ctx->pc = 0x1E7BF0u;
    {
        const bool branch_taken_0x1e7bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7BF0u;
            // 0x1e7bf4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bf0) {
            ctx->pc = 0x1E7C08u;
            goto label_1e7c08;
        }
    }
    ctx->pc = 0x1E7BF8u;
label_1e7bf8:
    // 0x1e7bf8: 0xc07d284  jal         func_1F4A10
label_1e7bfc:
    if (ctx->pc == 0x1E7BFCu) {
        ctx->pc = 0x1E7C00u;
        goto label_1e7c00;
    }
    ctx->pc = 0x1E7BF8u;
    SET_GPR_U32(ctx, 31, 0x1E7C00u);
    ctx->pc = 0x1F4A10u;
    if (runtime->hasFunction(0x1F4A10u)) {
        auto targetFn = runtime->lookupFunction(0x1F4A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C00u; }
        if (ctx->pc != 0x1E7C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C00u; }
        if (ctx->pc != 0x1E7C00u) { return; }
    }
    ctx->pc = 0x1E7C00u;
label_1e7c00:
    // 0x1e7c00: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1e7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1e7c04:
    // 0x1e7c04: 0x0  nop
    ctx->pc = 0x1e7c04u;
    // NOP
label_1e7c08:
    // 0x1e7c08: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7c0c:
    // 0x1e7c0c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1e7c10:
    // 0x1e7c10: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e7c10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1e7c14:
    // 0x1e7c14: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e7c18:
    if (ctx->pc == 0x1E7C18u) {
        ctx->pc = 0x1E7C18u;
            // 0x1e7c18: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x1E7C1Cu;
        goto label_1e7c1c;
    }
    ctx->pc = 0x1E7C14u;
    {
        const bool branch_taken_0x1e7c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C14u;
            // 0x1e7c18: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c14) {
            ctx->pc = 0x1E7C48u;
            goto label_1e7c48;
        }
    }
    ctx->pc = 0x1E7C1Cu;
label_1e7c1c:
    // 0x1e7c1c: 0x0  nop
    ctx->pc = 0x1e7c1cu;
    // NOP
label_1e7c20:
    // 0x1e7c20: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1e7c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e7c24:
    // 0x1e7c24: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1e7c28:
    if (ctx->pc == 0x1E7C28u) {
        ctx->pc = 0x1E7C2Cu;
        goto label_1e7c2c;
    }
    ctx->pc = 0x1E7C24u;
    {
        const bool branch_taken_0x1e7c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7c24) {
            ctx->pc = 0x1E7C40u;
            goto label_1e7c40;
        }
    }
    ctx->pc = 0x1E7C2Cu;
label_1e7c2c:
    // 0x1e7c2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e7c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7c30:
    // 0x1e7c30: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e7c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e7c34:
    // 0x1e7c34: 0x320f809  jalr        $t9
label_1e7c38:
    if (ctx->pc == 0x1E7C38u) {
        ctx->pc = 0x1E7C38u;
            // 0x1e7c38: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C3Cu;
        goto label_1e7c3c;
    }
    ctx->pc = 0x1E7C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7C3Cu);
        ctx->pc = 0x1E7C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C34u;
            // 0x1e7c38: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7C3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C3Cu; }
            if (ctx->pc != 0x1E7C3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E7C3Cu;
label_1e7c3c:
    // 0x1e7c3c: 0x0  nop
    ctx->pc = 0x1e7c3cu;
    // NOP
label_1e7c40:
    // 0x1e7c40: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1e7c40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1e7c44:
    // 0x1e7c44: 0x0  nop
    ctx->pc = 0x1e7c44u;
    // NOP
label_1e7c48:
    // 0x1e7c48: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1e7c48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e7c4c:
    // 0x1e7c4c: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
label_1e7c50:
    if (ctx->pc == 0x1E7C50u) {
        ctx->pc = 0x1E7C54u;
        goto label_1e7c54;
    }
    ctx->pc = 0x1E7C4Cu;
    {
        const bool branch_taken_0x1e7c4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e7c4c) {
            ctx->pc = 0x1E7C60u;
            goto label_1e7c60;
        }
    }
    ctx->pc = 0x1E7C54u;
label_1e7c54:
    // 0x1e7c54: 0x567effa5  bnel        $s3, $fp, . + 4 + (-0x5B << 2)
label_1e7c58:
    if (ctx->pc == 0x1E7C58u) {
        ctx->pc = 0x1E7C58u;
            // 0x1e7c58: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x1E7C5Cu;
        goto label_1e7c5c;
    }
    ctx->pc = 0x1E7C54u;
    {
        const bool branch_taken_0x1e7c54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        if (branch_taken_0x1e7c54) {
            ctx->pc = 0x1E7C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C54u;
            // 0x1e7c58: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7AECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7aec;
        }
    }
    ctx->pc = 0x1E7C5Cu;
label_1e7c5c:
    // 0x1e7c5c: 0x0  nop
    ctx->pc = 0x1e7c5cu;
    // NOP
label_1e7c60:
    // 0x1e7c60: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1e7c60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e7c64:
    // 0x1e7c64: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
label_1e7c68:
    if (ctx->pc == 0x1E7C68u) {
        ctx->pc = 0x1E7C6Cu;
        goto label_1e7c6c;
    }
    ctx->pc = 0x1E7C64u;
    {
        const bool branch_taken_0x1e7c64 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e7c64) {
            ctx->pc = 0x1E7C98u;
            goto label_1e7c98;
        }
    }
    ctx->pc = 0x1E7C6Cu;
label_1e7c6c:
    // 0x1e7c6c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1e7c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e7c70:
    // 0x1e7c70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1e7c74:
    if (ctx->pc == 0x1E7C74u) {
        ctx->pc = 0x1E7C78u;
        goto label_1e7c78;
    }
    ctx->pc = 0x1E7C70u;
    {
        const bool branch_taken_0x1e7c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7c70) {
            ctx->pc = 0x1E7C88u;
            goto label_1e7c88;
        }
    }
    ctx->pc = 0x1E7C78u;
label_1e7c78:
    // 0x1e7c78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e7c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7c7c:
    // 0x1e7c7c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e7c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e7c80:
    // 0x1e7c80: 0x320f809  jalr        $t9
label_1e7c84:
    if (ctx->pc == 0x1E7C84u) {
        ctx->pc = 0x1E7C84u;
            // 0x1e7c84: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C88u;
        goto label_1e7c88;
    }
    ctx->pc = 0x1E7C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7C88u);
        ctx->pc = 0x1E7C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C80u;
            // 0x1e7c84: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7C88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C88u; }
            if (ctx->pc != 0x1E7C88u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7C88u;
label_1e7c88:
    // 0x1e7c88: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1e7c88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e7c8c:
    // 0x1e7c8c: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1e7c8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1e7c90:
    // 0x1e7c90: 0x5682fff7  bnel        $s4, $v0, . + 4 + (-0x9 << 2)
label_1e7c94:
    if (ctx->pc == 0x1E7C94u) {
        ctx->pc = 0x1E7C94u;
            // 0x1e7c94: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x1E7C98u;
        goto label_1e7c98;
    }
    ctx->pc = 0x1E7C90u;
    {
        const bool branch_taken_0x1e7c90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7c90) {
            ctx->pc = 0x1E7C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C90u;
            // 0x1e7c94: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7C70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7c70;
        }
    }
    ctx->pc = 0x1E7C98u;
label_1e7c98:
    // 0x1e7c98: 0x127e0041  beq         $s3, $fp, . + 4 + (0x41 << 2)
label_1e7c9c:
    if (ctx->pc == 0x1E7C9Cu) {
        ctx->pc = 0x1E7CA0u;
        goto label_1e7ca0;
    }
    ctx->pc = 0x1E7C98u;
    {
        const bool branch_taken_0x1e7c98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        if (branch_taken_0x1e7c98) {
            ctx->pc = 0x1E7DA0u;
            goto label_1e7da0;
        }
    }
    ctx->pc = 0x1E7CA0u;
label_1e7ca0:
    // 0x1e7ca0: 0x127e003f  beq         $s3, $fp, . + 4 + (0x3F << 2)
label_1e7ca4:
    if (ctx->pc == 0x1E7CA4u) {
        ctx->pc = 0x1E7CA4u;
            // 0x1e7ca4: 0x27b60154  addiu       $s6, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->pc = 0x1E7CA8u;
        goto label_1e7ca8;
    }
    ctx->pc = 0x1E7CA0u;
    {
        const bool branch_taken_0x1e7ca0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        ctx->pc = 0x1E7CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7CA0u;
            // 0x1e7ca4: 0x27b60154  addiu       $s6, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ca0) {
            ctx->pc = 0x1E7DA0u;
            goto label_1e7da0;
        }
    }
    ctx->pc = 0x1E7CA8u;
label_1e7ca8:
    // 0x1e7ca8: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1e7ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1e7cac:
    // 0x1e7cac: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x1e7cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1e7cb0:
    // 0x1e7cb0: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x1e7cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7cb4:
    // 0x1e7cb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e7cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7cb8:
    // 0x1e7cb8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e7cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e7cbc:
    // 0x1e7cbc: 0x320f809  jalr        $t9
label_1e7cc0:
    if (ctx->pc == 0x1E7CC0u) {
        ctx->pc = 0x1E7CC0u;
            // 0x1e7cc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CC4u;
        goto label_1e7cc4;
    }
    ctx->pc = 0x1E7CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7CC4u);
        ctx->pc = 0x1E7CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7CBCu;
            // 0x1e7cc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7CC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7CC4u; }
            if (ctx->pc != 0x1E7CC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7CC4u;
label_1e7cc4:
    // 0x1e7cc4: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1e7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_1e7cc8:
    // 0x1e7cc8: 0x27a407e4  addiu       $a0, $sp, 0x7E4
    ctx->pc = 0x1e7cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2020));
label_1e7ccc:
    // 0x1e7ccc: 0xafb40158  sw          $s4, 0x158($sp)
    ctx->pc = 0x1e7cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 20));
label_1e7cd0:
    // 0x1e7cd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7cd4:
    // 0x1e7cd4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1e7cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e7cd8:
    // 0x1e7cd8: 0x8fa800fc  lw          $t0, 0xFC($sp)
    ctx->pc = 0x1e7cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e7cdc:
    // 0x1e7cdc: 0x8fa900c0  lw          $t1, 0xC0($sp)
    ctx->pc = 0x1e7cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1e7ce0:
    // 0x1e7ce0: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1e7ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e7ce4:
    // 0x1e7ce4: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x1e7ce4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7ce8:
    // 0x1e7ce8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e7ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e7cec:
    // 0x1e7cec: 0x320f809  jalr        $t9
label_1e7cf0:
    if (ctx->pc == 0x1E7CF0u) {
        ctx->pc = 0x1E7CF0u;
            // 0x1e7cf0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CF4u;
        goto label_1e7cf4;
    }
    ctx->pc = 0x1E7CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7CF4u);
        ctx->pc = 0x1E7CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7CECu;
            // 0x1e7cf0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7CF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7CF4u; }
            if (ctx->pc != 0x1E7CF4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7CF4u;
label_1e7cf4:
    // 0x1e7cf4: 0x27a207e4  addiu       $v0, $sp, 0x7E4
    ctx->pc = 0x1e7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2020));
label_1e7cf8:
    // 0x1e7cf8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1e7cf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e7cfc:
    // 0x1e7cfc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1e7d00:
    if (ctx->pc == 0x1E7D00u) {
        ctx->pc = 0x1E7D04u;
        goto label_1e7d04;
    }
    ctx->pc = 0x1E7CFCu;
    {
        const bool branch_taken_0x1e7cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7cfc) {
            ctx->pc = 0x1E7D78u;
            goto label_1e7d78;
        }
    }
    ctx->pc = 0x1E7D04u;
label_1e7d04:
    // 0x1e7d04: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x1e7d04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e7d08:
    // 0x1e7d08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e7d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e7d0c:
    // 0x1e7d0c: 0x82030010  lb          $v1, 0x10($s0)
    ctx->pc = 0x1e7d0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1e7d10:
    // 0x1e7d10: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e7d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e7d14:
    // 0x1e7d14: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x1e7d14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1e7d18:
    // 0x1e7d18: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x1e7d18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1e7d1c:
    // 0x1e7d1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7d20:
    // 0x1e7d20: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e7d20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e7d24:
    // 0x1e7d24: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x1e7d24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1e7d28:
    // 0x1e7d28: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x1e7d28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1e7d2c:
    // 0x1e7d2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e7d30:
    if (ctx->pc == 0x1E7D30u) {
        ctx->pc = 0x1E7D30u;
            // 0x1e7d30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D34u;
        goto label_1e7d34;
    }
    ctx->pc = 0x1E7D2Cu;
    {
        const bool branch_taken_0x1e7d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D2Cu;
            // 0x1e7d30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d2c) {
            ctx->pc = 0x1E7D3Cu;
            goto label_1e7d3c;
        }
    }
    ctx->pc = 0x1E7D34u;
label_1e7d34:
    // 0x1e7d34: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e7d38:
    if (ctx->pc == 0x1E7D38u) {
        ctx->pc = 0x1E7D38u;
            // 0x1e7d38: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->pc = 0x1E7D3Cu;
        goto label_1e7d3c;
    }
    ctx->pc = 0x1E7D34u;
    {
        const bool branch_taken_0x1e7d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D34u;
            // 0x1e7d38: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d34) {
            ctx->pc = 0x1E7D40u;
            goto label_1e7d40;
        }
    }
    ctx->pc = 0x1E7D3Cu;
label_1e7d3c:
    // 0x1e7d3c: 0x244801a0  addiu       $t0, $v0, 0x1A0
    ctx->pc = 0x1e7d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_1e7d40:
    // 0x1e7d40: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x1e7d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1e7d44:
    // 0x1e7d44: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1e7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1e7d48:
    // 0x1e7d48: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1e7d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1e7d4c:
    // 0x1e7d4c: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1e7d4cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e7d50:
    // 0x1e7d50: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1e7d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1e7d54:
    // 0x1e7d54: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1e7d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1e7d58:
    // 0x1e7d58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e7d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e7d5c:
    // 0x1e7d5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7d60:
    // 0x1e7d60: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1e7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1e7d64:
    // 0x1e7d64: 0x40f809  jalr        $v0
label_1e7d68:
    if (ctx->pc == 0x1E7D68u) {
        ctx->pc = 0x1E7D6Cu;
        goto label_1e7d6c;
    }
    ctx->pc = 0x1E7D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E7D6Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7D6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D6Cu; }
            if (ctx->pc != 0x1E7D6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E7D6Cu;
label_1e7d6c:
    // 0x1e7d6c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e7d70:
    if (ctx->pc == 0x1E7D70u) {
        ctx->pc = 0x1E7D70u;
            // 0x1e7d70: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1E7D74u;
        goto label_1e7d74;
    }
    ctx->pc = 0x1E7D6Cu;
    {
        const bool branch_taken_0x1e7d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D6Cu;
            // 0x1e7d70: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d6c) {
            ctx->pc = 0x1E7D88u;
            goto label_1e7d88;
        }
    }
    ctx->pc = 0x1E7D74u;
label_1e7d74:
    // 0x1e7d74: 0x0  nop
    ctx->pc = 0x1e7d74u;
    // NOP
label_1e7d78:
    // 0x1e7d78: 0xc07d284  jal         func_1F4A10
label_1e7d7c:
    if (ctx->pc == 0x1E7D7Cu) {
        ctx->pc = 0x1E7D80u;
        goto label_1e7d80;
    }
    ctx->pc = 0x1E7D78u;
    SET_GPR_U32(ctx, 31, 0x1E7D80u);
    ctx->pc = 0x1F4A10u;
    if (runtime->hasFunction(0x1F4A10u)) {
        auto targetFn = runtime->lookupFunction(0x1F4A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D80u; }
        if (ctx->pc != 0x1E7D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D80u; }
        if (ctx->pc != 0x1E7D80u) { return; }
    }
    ctx->pc = 0x1E7D80u;
label_1e7d80:
    // 0x1e7d80: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1e7d80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1e7d84:
    // 0x1e7d84: 0x0  nop
    ctx->pc = 0x1e7d84u;
    // NOP
label_1e7d88:
    // 0x1e7d88: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7d8c:
    // 0x1e7d8c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e7d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1e7d90:
    // 0x1e7d90: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e7d90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1e7d94:
    // 0x1e7d94: 0x167effc4  bne         $s3, $fp, . + 4 + (-0x3C << 2)
label_1e7d98:
    if (ctx->pc == 0x1E7D98u) {
        ctx->pc = 0x1E7D98u;
            // 0x1e7d98: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x1E7D9Cu;
        goto label_1e7d9c;
    }
    ctx->pc = 0x1E7D94u;
    {
        const bool branch_taken_0x1e7d94 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        ctx->pc = 0x1E7D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D94u;
            // 0x1e7d98: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d94) {
            ctx->pc = 0x1E7CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7ca8;
        }
    }
    ctx->pc = 0x1E7D9Cu;
label_1e7d9c:
    // 0x1e7d9c: 0x0  nop
    ctx->pc = 0x1e7d9cu;
    // NOP
label_1e7da0:
    // 0x1e7da0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e7da4:
    // 0x1e7da4: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1e7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_1e7da8:
    // 0x1e7da8: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x1e7da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
label_1e7dac:
    // 0x1e7dac: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x1e7dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
label_1e7db0:
    // 0x1e7db0: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x1e7db0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e7db4:
    // 0x1e7db4: 0x5020001e  beql        $at, $zero, . + 4 + (0x1E << 2)
label_1e7db8:
    if (ctx->pc == 0x1E7DB8u) {
        ctx->pc = 0x1E7DB8u;
            // 0x1e7db8: 0x8fa30104  lw          $v1, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->pc = 0x1E7DBCu;
        goto label_1e7dbc;
    }
    ctx->pc = 0x1E7DB4u;
    {
        const bool branch_taken_0x1e7db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7db4) {
            ctx->pc = 0x1E7DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DB4u;
            // 0x1e7db8: 0x8fa30104  lw          $v1, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7E30u;
            goto label_1e7e30;
        }
    }
    ctx->pc = 0x1E7DBCu;
label_1e7dbc:
    // 0x1e7dbc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e7dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e7dc0:
    // 0x1e7dc0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e7dc4:
    // 0x1e7dc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e7dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e7dc8:
    // 0x1e7dc8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1e7dcc:
    if (ctx->pc == 0x1E7DCCu) {
        ctx->pc = 0x1E7DD0u;
        goto label_1e7dd0;
    }
    ctx->pc = 0x1E7DC8u;
    {
        const bool branch_taken_0x1e7dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7dc8) {
            ctx->pc = 0x1E7DF0u;
            goto label_1e7df0;
        }
    }
    ctx->pc = 0x1E7DD0u;
label_1e7dd0:
    // 0x1e7dd0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e7dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1e7dd4:
    // 0x1e7dd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e7dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e7dd8:
    // 0x1e7dd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e7ddc:
    // 0x1e7ddc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e7ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e7de0:
    // 0x1e7de0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e7de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e7de4:
    // 0x1e7de4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1e7de4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e7de8:
    // 0x1e7de8: 0xc0a7ab4  jal         func_29EAD0
label_1e7dec:
    if (ctx->pc == 0x1E7DECu) {
        ctx->pc = 0x1E7DECu;
            // 0x1e7dec: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x1E7DF0u;
        goto label_1e7df0;
    }
    ctx->pc = 0x1E7DE8u;
    SET_GPR_U32(ctx, 31, 0x1E7DF0u);
    ctx->pc = 0x1E7DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DE8u;
            // 0x1e7dec: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DF0u; }
        if (ctx->pc != 0x1E7DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DF0u; }
        if (ctx->pc != 0x1E7DF0u) { return; }
    }
    ctx->pc = 0x1E7DF0u;
label_1e7df0:
    // 0x1e7df0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e7df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e7df4:
    // 0x1e7df4: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x1e7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_1e7df8:
    // 0x1e7df8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e7dfc:
    // 0x1e7dfc: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1e7dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e7e00:
    // 0x1e7e00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e7e04:
    // 0x1e7e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7e08:
    // 0x1e7e08: 0xc0a7a88  jal         func_29EA20
label_1e7e0c:
    if (ctx->pc == 0x1E7E0Cu) {
        ctx->pc = 0x1E7E0Cu;
            // 0x1e7e0c: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E7E10u;
        goto label_1e7e10;
    }
    ctx->pc = 0x1E7E08u;
    SET_GPR_U32(ctx, 31, 0x1E7E10u);
    ctx->pc = 0x1E7E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E08u;
            // 0x1e7e0c: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E10u; }
        if (ctx->pc != 0x1E7E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E10u; }
        if (ctx->pc != 0x1E7E10u) { return; }
    }
    ctx->pc = 0x1E7E10u;
label_1e7e10:
    // 0x1e7e10: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1e7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1e7e14:
    // 0x1e7e14: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1e7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1e7e18:
    // 0x1e7e18: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1e7e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e7e1c:
    // 0x1e7e1c: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1e7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_1e7e20:
    // 0x1e7e20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e7e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e7e24:
    // 0x1e7e24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e7e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e7e28:
    // 0x1e7e28: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1e7e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1e7e2c:
    // 0x1e7e2c: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x1e7e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_1e7e30:
    // 0x1e7e30: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1e7e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_1e7e34:
    // 0x1e7e34: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x1e7e34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1e7e38:
    // 0x1e7e38: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x1e7e38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e7e3c:
    // 0x1e7e3c: 0x1860005a  blez        $v1, . + 4 + (0x5A << 2)
label_1e7e40:
    if (ctx->pc == 0x1E7E40u) {
        ctx->pc = 0x1E7E40u;
            // 0x1e7e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E44u;
        goto label_1e7e44;
    }
    ctx->pc = 0x1E7E3Cu;
    {
        const bool branch_taken_0x1e7e3c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1E7E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E3Cu;
            // 0x1e7e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e3c) {
            ctx->pc = 0x1E7FA8u;
            goto label_1e7fa8;
        }
    }
    ctx->pc = 0x1E7E44u;
label_1e7e44:
    // 0x1e7e44: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1e7e44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_1e7e48:
    // 0x1e7e48: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
label_1e7e4c:
    if (ctx->pc == 0x1E7E4Cu) {
        ctx->pc = 0x1E7E4Cu;
            // 0x1e7e4c: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1E7E50u;
        goto label_1e7e50;
    }
    ctx->pc = 0x1E7E48u;
    {
        const bool branch_taken_0x1e7e48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E48u;
            // 0x1e7e4c: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e48) {
            ctx->pc = 0x1E7F58u;
            goto label_1e7f58;
        }
    }
    ctx->pc = 0x1E7E50u;
label_1e7e50:
    // 0x1e7e50: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
label_1e7e54:
    if (ctx->pc == 0x1E7E54u) {
        ctx->pc = 0x1E7E54u;
            // 0x1e7e54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E58u;
        goto label_1e7e58;
    }
    ctx->pc = 0x1E7E50u;
    {
        const bool branch_taken_0x1e7e50 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1E7E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E50u;
            // 0x1e7e54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e50) {
            ctx->pc = 0x1E7E70u;
            goto label_1e7e70;
        }
    }
    ctx->pc = 0x1E7E58u;
label_1e7e58:
    // 0x1e7e58: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1e7e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_1e7e5c:
    // 0x1e7e5c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1e7e5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_1e7e60:
    // 0x1e7e60: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e7e60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_1e7e64:
    // 0x1e7e64: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1e7e68:
    if (ctx->pc == 0x1E7E68u) {
        ctx->pc = 0x1E7E6Cu;
        goto label_1e7e6c;
    }
    ctx->pc = 0x1E7E64u;
    {
        const bool branch_taken_0x1e7e64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7e64) {
            ctx->pc = 0x1E7E70u;
            goto label_1e7e70;
        }
    }
    ctx->pc = 0x1E7E6Cu;
label_1e7e6c:
    // 0x1e7e6c: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1e7e6cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e7e70:
    // 0x1e7e70: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
label_1e7e74:
    if (ctx->pc == 0x1E7E74u) {
        ctx->pc = 0x1E7E78u;
        goto label_1e7e78;
    }
    ctx->pc = 0x1E7E70u;
    {
        const bool branch_taken_0x1e7e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7e70) {
            ctx->pc = 0x1E7F58u;
            goto label_1e7f58;
        }
    }
    ctx->pc = 0x1E7E78u;
label_1e7e78:
    // 0x1e7e78: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1e7e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e7e7c:
    // 0x1e7e7c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1e7e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e7e80:
    // 0x1e7e80: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x1e7e80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e7e84:
    // 0x1e7e84: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1e7e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1e7e88:
    // 0x1e7e88: 0xc2482a  slt         $t1, $a2, $v0
    ctx->pc = 0x1e7e88u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e7e8c:
    // 0x1e7e8c: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x1e7e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
label_1e7e90:
    // 0x1e7e90: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x1e7e90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e7e94:
    // 0x1e7e94: 0xac8a0004  sw          $t2, 0x4($a0)
    ctx->pc = 0x1e7e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 10));
label_1e7e98:
    // 0x1e7e98: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x1e7e98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e7e9c:
    // 0x1e7e9c: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x1e7e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
label_1e7ea0:
    // 0x1e7ea0: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x1e7ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1e7ea4:
    // 0x1e7ea4: 0xac8a000c  sw          $t2, 0xC($a0)
    ctx->pc = 0x1e7ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 10));
label_1e7ea8:
    // 0x1e7ea8: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x1e7ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1e7eac:
    // 0x1e7eac: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x1e7eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
label_1e7eb0:
    // 0x1e7eb0: 0x8caa0014  lw          $t2, 0x14($a1)
    ctx->pc = 0x1e7eb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1e7eb4:
    // 0x1e7eb4: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x1e7eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
label_1e7eb8:
    // 0x1e7eb8: 0x8caa0018  lw          $t2, 0x18($a1)
    ctx->pc = 0x1e7eb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1e7ebc:
    // 0x1e7ebc: 0xac8a0018  sw          $t2, 0x18($a0)
    ctx->pc = 0x1e7ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 10));
label_1e7ec0:
    // 0x1e7ec0: 0x8caa001c  lw          $t2, 0x1C($a1)
    ctx->pc = 0x1e7ec0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_1e7ec4:
    // 0x1e7ec4: 0xac8a001c  sw          $t2, 0x1C($a0)
    ctx->pc = 0x1e7ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 10));
label_1e7ec8:
    // 0x1e7ec8: 0x8caa0020  lw          $t2, 0x20($a1)
    ctx->pc = 0x1e7ec8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_1e7ecc:
    // 0x1e7ecc: 0xac8a0020  sw          $t2, 0x20($a0)
    ctx->pc = 0x1e7eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 10));
label_1e7ed0:
    // 0x1e7ed0: 0x8caa0024  lw          $t2, 0x24($a1)
    ctx->pc = 0x1e7ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1e7ed4:
    // 0x1e7ed4: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x1e7ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
label_1e7ed8:
    // 0x1e7ed8: 0x8caa0028  lw          $t2, 0x28($a1)
    ctx->pc = 0x1e7ed8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_1e7edc:
    // 0x1e7edc: 0xac8a0028  sw          $t2, 0x28($a0)
    ctx->pc = 0x1e7edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 10));
label_1e7ee0:
    // 0x1e7ee0: 0x8caa002c  lw          $t2, 0x2C($a1)
    ctx->pc = 0x1e7ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_1e7ee4:
    // 0x1e7ee4: 0xac8a002c  sw          $t2, 0x2C($a0)
    ctx->pc = 0x1e7ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 10));
label_1e7ee8:
    // 0x1e7ee8: 0x8caa0030  lw          $t2, 0x30($a1)
    ctx->pc = 0x1e7ee8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1e7eec:
    // 0x1e7eec: 0xac8a0030  sw          $t2, 0x30($a0)
    ctx->pc = 0x1e7eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 10));
label_1e7ef0:
    // 0x1e7ef0: 0x8caa0034  lw          $t2, 0x34($a1)
    ctx->pc = 0x1e7ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1e7ef4:
    // 0x1e7ef4: 0xac8a0034  sw          $t2, 0x34($a0)
    ctx->pc = 0x1e7ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 10));
label_1e7ef8:
    // 0x1e7ef8: 0x8caa0038  lw          $t2, 0x38($a1)
    ctx->pc = 0x1e7ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_1e7efc:
    // 0x1e7efc: 0xac8a0038  sw          $t2, 0x38($a0)
    ctx->pc = 0x1e7efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 10));
label_1e7f00:
    // 0x1e7f00: 0x8caa003c  lw          $t2, 0x3C($a1)
    ctx->pc = 0x1e7f00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_1e7f04:
    // 0x1e7f04: 0xac8a003c  sw          $t2, 0x3C($a0)
    ctx->pc = 0x1e7f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 10));
label_1e7f08:
    // 0x1e7f08: 0x8caa0040  lw          $t2, 0x40($a1)
    ctx->pc = 0x1e7f08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_1e7f0c:
    // 0x1e7f0c: 0xac8a0040  sw          $t2, 0x40($a0)
    ctx->pc = 0x1e7f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 10));
label_1e7f10:
    // 0x1e7f10: 0x8caa0044  lw          $t2, 0x44($a1)
    ctx->pc = 0x1e7f10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_1e7f14:
    // 0x1e7f14: 0xac8a0044  sw          $t2, 0x44($a0)
    ctx->pc = 0x1e7f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 10));
label_1e7f18:
    // 0x1e7f18: 0x8caa0048  lw          $t2, 0x48($a1)
    ctx->pc = 0x1e7f18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_1e7f1c:
    // 0x1e7f1c: 0xac8a0048  sw          $t2, 0x48($a0)
    ctx->pc = 0x1e7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 10));
label_1e7f20:
    // 0x1e7f20: 0x8caa004c  lw          $t2, 0x4C($a1)
    ctx->pc = 0x1e7f20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_1e7f24:
    // 0x1e7f24: 0xac8a004c  sw          $t2, 0x4C($a0)
    ctx->pc = 0x1e7f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 10));
label_1e7f28:
    // 0x1e7f28: 0x8caa0050  lw          $t2, 0x50($a1)
    ctx->pc = 0x1e7f28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_1e7f2c:
    // 0x1e7f2c: 0xac8a0050  sw          $t2, 0x50($a0)
    ctx->pc = 0x1e7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 10));
label_1e7f30:
    // 0x1e7f30: 0x8caa0054  lw          $t2, 0x54($a1)
    ctx->pc = 0x1e7f30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_1e7f34:
    // 0x1e7f34: 0xac8a0054  sw          $t2, 0x54($a0)
    ctx->pc = 0x1e7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 10));
label_1e7f38:
    // 0x1e7f38: 0x8caa0058  lw          $t2, 0x58($a1)
    ctx->pc = 0x1e7f38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_1e7f3c:
    // 0x1e7f3c: 0xac8a0058  sw          $t2, 0x58($a0)
    ctx->pc = 0x1e7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 10));
label_1e7f40:
    // 0x1e7f40: 0x8caa005c  lw          $t2, 0x5C($a1)
    ctx->pc = 0x1e7f40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_1e7f44:
    // 0x1e7f44: 0xac8a005c  sw          $t2, 0x5C($a0)
    ctx->pc = 0x1e7f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 10));
label_1e7f48:
    // 0x1e7f48: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x1e7f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_1e7f4c:
    // 0x1e7f4c: 0x1520ffcc  bnez        $t1, . + 4 + (-0x34 << 2)
label_1e7f50:
    if (ctx->pc == 0x1E7F50u) {
        ctx->pc = 0x1E7F50u;
            // 0x1e7f50: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->pc = 0x1E7F54u;
        goto label_1e7f54;
    }
    ctx->pc = 0x1E7F4Cu;
    {
        const bool branch_taken_0x1e7f4c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F4Cu;
            // 0x1e7f50: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f4c) {
            ctx->pc = 0x1E7E80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7e80;
        }
    }
    ctx->pc = 0x1E7F54u;
label_1e7f54:
    // 0x1e7f54: 0x0  nop
    ctx->pc = 0x1e7f54u;
    // NOP
label_1e7f58:
    // 0x1e7f58: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1e7f58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e7f5c:
    // 0x1e7f5c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_1e7f60:
    if (ctx->pc == 0x1E7F60u) {
        ctx->pc = 0x1E7F64u;
        goto label_1e7f64;
    }
    ctx->pc = 0x1E7F5Cu;
    {
        const bool branch_taken_0x1e7f5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f5c) {
            ctx->pc = 0x1E7FA8u;
            goto label_1e7fa8;
        }
    }
    ctx->pc = 0x1E7F64u;
label_1e7f64:
    // 0x1e7f64: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1e7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1e7f68:
    // 0x1e7f68: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e7f6c:
    // 0x1e7f6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e7f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e7f70:
    // 0x1e7f70: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1e7f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1e7f74:
    // 0x1e7f74: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x1e7f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1e7f78:
    // 0x1e7f78: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1e7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1e7f7c:
    // 0x1e7f7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e7f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e7f80:
    // 0x1e7f80: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1e7f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e7f84:
    // 0x1e7f84: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1e7f84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1e7f88:
    // 0x1e7f88: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1e7f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1e7f8c:
    // 0x1e7f8c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1e7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1e7f90:
    // 0x1e7f90: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1e7f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1e7f94:
    // 0x1e7f94: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1e7f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1e7f98:
    // 0x1e7f98: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1e7f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_1e7f9c:
    // 0x1e7f9c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1e7fa0:
    if (ctx->pc == 0x1E7FA0u) {
        ctx->pc = 0x1E7FA0u;
            // 0x1e7fa0: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->pc = 0x1E7FA4u;
        goto label_1e7fa4;
    }
    ctx->pc = 0x1E7F9Cu;
    {
        const bool branch_taken_0x1e7f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F9Cu;
            // 0x1e7fa0: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f9c) {
            ctx->pc = 0x1E7F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7f78;
        }
    }
    ctx->pc = 0x1E7FA4u;
label_1e7fa4:
    // 0x1e7fa4: 0x0  nop
    ctx->pc = 0x1e7fa4u;
    // NOP
label_1e7fa8:
    // 0x1e7fa8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e7fac:
    // 0x1e7fac: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x1e7facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_1e7fb0:
    // 0x1e7fb0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e7fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e7fb4:
    // 0x1e7fb4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1e7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_1e7fb8:
    // 0x1e7fb8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1e7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1e7fbc:
    // 0x1e7fbc: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
label_1e7fc0:
    if (ctx->pc == 0x1E7FC0u) {
        ctx->pc = 0x1E7FC0u;
            // 0x1e7fc0: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->pc = 0x1E7FC4u;
        goto label_1e7fc4;
    }
    ctx->pc = 0x1E7FBCu;
    {
        const bool branch_taken_0x1e7fbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7fbc) {
            ctx->pc = 0x1E7FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FBCu;
            // 0x1e7fc0: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7FD8u;
            goto label_1e7fd8;
        }
    }
    ctx->pc = 0x1E7FC4u;
label_1e7fc4:
    // 0x1e7fc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e7fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7fc8:
    // 0x1e7fc8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e7fc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e7fcc:
    // 0x1e7fcc: 0x320f809  jalr        $t9
label_1e7fd0:
    if (ctx->pc == 0x1E7FD0u) {
        ctx->pc = 0x1E7FD4u;
        goto label_1e7fd4;
    }
    ctx->pc = 0x1E7FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7FD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7FD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FD4u; }
            if (ctx->pc != 0x1E7FD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7FD4u;
label_1e7fd4:
    // 0x1e7fd4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1e7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1e7fd8:
    // 0x1e7fd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e7fdc:
    // 0x1e7fdc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e7fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e7fe0:
    // 0x1e7fe0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1e7fe4:
    if (ctx->pc == 0x1E7FE4u) {
        ctx->pc = 0x1E7FE8u;
        goto label_1e7fe8;
    }
    ctx->pc = 0x1E7FE0u;
    {
        const bool branch_taken_0x1e7fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fe0) {
            ctx->pc = 0x1E8014u;
            goto label_1e8014;
        }
    }
    ctx->pc = 0x1E7FE8u;
label_1e7fe8:
    // 0x1e7fe8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1e7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1e7fec:
    // 0x1e7fec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e7ff0:
    // 0x1e7ff0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e7ff4:
    // 0x1e7ff4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e7ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e7ff8:
    // 0x1e7ff8: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1e7ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1e7ffc:
    // 0x1e7ffc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1e7ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_1e8000:
    // 0x1e8000: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x1e8000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_1e8004:
    // 0x1e8004: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e8004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e8008:
    // 0x1e8008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e800c:
    // 0x1e800c: 0xc0a7ab4  jal         func_29EAD0
label_1e8010:
    if (ctx->pc == 0x1E8010u) {
        ctx->pc = 0x1E8010u;
            // 0x1e8010: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E8014u;
        goto label_1e8014;
    }
    ctx->pc = 0x1E800Cu;
    SET_GPR_U32(ctx, 31, 0x1E8014u);
    ctx->pc = 0x1E8010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E800Cu;
            // 0x1e8010: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8014u; }
        if (ctx->pc != 0x1E8014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8014u; }
        if (ctx->pc != 0x1E8014u) { return; }
    }
    ctx->pc = 0x1E8014u;
label_1e8014:
    // 0x1e8014: 0x8fa303b8  lw          $v1, 0x3B8($sp)
    ctx->pc = 0x1e8014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_1e8018:
    // 0x1e8018: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e8018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e801c:
    // 0x1e801c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e8020:
    // 0x1e8020: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1e8024:
    if (ctx->pc == 0x1E8024u) {
        ctx->pc = 0x1E8028u;
        goto label_1e8028;
    }
    ctx->pc = 0x1E8020u;
    {
        const bool branch_taken_0x1e8020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8020) {
            ctx->pc = 0x1E804Cu;
            goto label_1e804c;
        }
    }
    ctx->pc = 0x1E8028u;
label_1e8028:
    // 0x1e8028: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e8028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e802c:
    // 0x1e802c: 0x8fa303b8  lw          $v1, 0x3B8($sp)
    ctx->pc = 0x1e802cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_1e8030:
    // 0x1e8030: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e8030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e8034:
    // 0x1e8034: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e8034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e8038:
    // 0x1e8038: 0x8fa503b0  lw          $a1, 0x3B0($sp)
    ctx->pc = 0x1e8038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_1e803c:
    // 0x1e803c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1e803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1e8040:
    // 0x1e8040: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1e8040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1e8044:
    // 0x1e8044: 0xc0a7ab4  jal         func_29EAD0
label_1e8048:
    if (ctx->pc == 0x1E8048u) {
        ctx->pc = 0x1E8048u;
            // 0x1e8048: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E804Cu;
        goto label_1e804c;
    }
    ctx->pc = 0x1E8044u;
    SET_GPR_U32(ctx, 31, 0x1E804Cu);
    ctx->pc = 0x1E8048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8044u;
            // 0x1e8048: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E804Cu; }
        if (ctx->pc != 0x1E804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E804Cu; }
        if (ctx->pc != 0x1E804Cu) { return; }
    }
    ctx->pc = 0x1E804Cu;
label_1e804c:
    // 0x1e804c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e804cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e8050:
    // 0x1e8050: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e8050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e8054:
    // 0x1e8054: 0x8c44ea64  lw          $a0, -0x159C($v0)
    ctx->pc = 0x1e8054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e8058:
    // 0x1e8058: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x1e8058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_1e805c:
    // 0x1e805c: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x1e805cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e8060:
    // 0x1e8060: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1e8060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e8064:
    // 0x1e8064: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e8064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e8068:
    // 0x1e8068: 0x8c43ea6c  lw          $v1, -0x1594($v0)
    ctx->pc = 0x1e8068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e806c:
    // 0x1e806c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1e806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e8070:
    // 0x1e8070: 0xafa205cc  sw          $v0, 0x5CC($sp)
    ctx->pc = 0x1e8070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1484), GPR_U32(ctx, 2));
label_1e8074:
    // 0x1e8074: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1e8074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1e8078:
    // 0x1e8078: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x1e8078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e807c:
    // 0x1e807c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1e807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e8080:
    // 0x1e8080: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1e8080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e8084:
    // 0x1e8084: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1e8084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e8088:
    // 0x1e8088: 0xafa605c8  sw          $a2, 0x5C8($sp)
    ctx->pc = 0x1e8088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1480), GPR_U32(ctx, 6));
label_1e808c:
    // 0x1e808c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1e808cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1e8090:
    // 0x1e8090: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e8094:
    if (ctx->pc == 0x1E8094u) {
        ctx->pc = 0x1E8094u;
            // 0x1e8094: 0x2438821  addu        $s1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x1E8098u;
        goto label_1e8098;
    }
    ctx->pc = 0x1E8090u;
    {
        const bool branch_taken_0x1e8090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8090u;
            // 0x1e8094: 0x2438821  addu        $s1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8090) {
            ctx->pc = 0x1E80C0u;
            goto label_1e80c0;
        }
    }
    ctx->pc = 0x1E8098u;
label_1e8098:
    // 0x1e8098: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e8098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e809c:
    // 0x1e809c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e80a0:
    // 0x1e80a0: 0x2442aa48  addiu       $v0, $v0, -0x55B8
    ctx->pc = 0x1e80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945352));
label_1e80a4:
    // 0x1e80a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e80a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e80a8:
    // 0x1e80a8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e80ac:
    // 0x1e80ac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e80acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e80b0:
    // 0x1e80b0: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e80b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_1e80b4:
    // 0x1e80b4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e80b8:
    // 0x1e80b8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1e80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1e80bc:
    // 0x1e80bc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e80bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1e80c0:
    // 0x1e80c0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1e80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1e80c4:
    // 0x1e80c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e80c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e80c8:
    // 0x1e80c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e80c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e80cc:
    // 0x1e80cc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e80ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e80d0:
    // 0x1e80d0: 0x320f809  jalr        $t9
label_1e80d4:
    if (ctx->pc == 0x1E80D4u) {
        ctx->pc = 0x1E80D8u;
        goto label_1e80d8;
    }
    ctx->pc = 0x1E80D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E80D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E80D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E80D8u; }
            if (ctx->pc != 0x1E80D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E80D8u;
label_1e80d8:
    // 0x1e80d8: 0x12510015  beq         $s2, $s1, . + 4 + (0x15 << 2)
label_1e80dc:
    if (ctx->pc == 0x1E80DCu) {
        ctx->pc = 0x1E80DCu;
            // 0x1e80dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E80E0u;
        goto label_1e80e0;
    }
    ctx->pc = 0x1E80D8u;
    {
        const bool branch_taken_0x1e80d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x1E80DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80D8u;
            // 0x1e80dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80d8) {
            ctx->pc = 0x1E8130u;
            goto label_1e8130;
        }
    }
    ctx->pc = 0x1E80E0u;
label_1e80e0:
    // 0x1e80e0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e80e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e80e4:
    // 0x1e80e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e80e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e80e8:
    // 0x1e80e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1e80e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e80ec:
    // 0x1e80ec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e80ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e80f0:
    // 0x1e80f0: 0x320f809  jalr        $t9
label_1e80f4:
    if (ctx->pc == 0x1E80F4u) {
        ctx->pc = 0x1E80F4u;
            // 0x1e80f4: 0x27a605d0  addiu       $a2, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->pc = 0x1E80F8u;
        goto label_1e80f8;
    }
    ctx->pc = 0x1E80F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E80F8u);
        ctx->pc = 0x1E80F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80F0u;
            // 0x1e80f4: 0x27a605d0  addiu       $a2, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E80F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E80F8u; }
            if (ctx->pc != 0x1E80F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E80F8u;
label_1e80f8:
    // 0x1e80f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e80f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e80fc:
    // 0x1e80fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e80fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e8100:
    // 0x1e8100: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x1e8100u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1e8104:
    // 0x1e8104: 0x27a605c0  addiu       $a2, $sp, 0x5C0
    ctx->pc = 0x1e8104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
label_1e8108:
    // 0x1e8108: 0xafa305c4  sw          $v1, 0x5C4($sp)
    ctx->pc = 0x1e8108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1476), GPR_U32(ctx, 3));
label_1e810c:
    // 0x1e810c: 0xafa205c0  sw          $v0, 0x5C0($sp)
    ctx->pc = 0x1e810cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1472), GPR_U32(ctx, 2));
label_1e8110:
    // 0x1e8110: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1e8110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e8114:
    // 0x1e8114: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e8114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8118:
    // 0x1e8118: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e8118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e811c:
    // 0x1e811c: 0x320f809  jalr        $t9
label_1e8120:
    if (ctx->pc == 0x1E8120u) {
        ctx->pc = 0x1E8120u;
            // 0x1e8120: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8124u;
        goto label_1e8124;
    }
    ctx->pc = 0x1E811Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8124u);
        ctx->pc = 0x1E8120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E811Cu;
            // 0x1e8120: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8124u; }
            if (ctx->pc != 0x1E8124u) { return; }
        }
        }
    }
    ctx->pc = 0x1E8124u;
label_1e8124:
    // 0x1e8124: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x1e8124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1e8128:
    // 0x1e8128: 0x5651ffee  bnel        $s2, $s1, . + 4 + (-0x12 << 2)
label_1e812c:
    if (ctx->pc == 0x1E812Cu) {
        ctx->pc = 0x1E812Cu;
            // 0x1e812c: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1E8130u;
        goto label_1e8130;
    }
    ctx->pc = 0x1E8128u;
    {
        const bool branch_taken_0x1e8128 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x1e8128) {
            ctx->pc = 0x1E812Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8128u;
            // 0x1e812c: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E80E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e80e4;
        }
    }
    ctx->pc = 0x1E8130u;
label_1e8130:
    // 0x1e8130: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e8130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e8134:
    // 0x1e8134: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e8134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e8138:
    // 0x1e8138: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1e8138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1e813c:
    // 0x1e813c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e813cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e8140:
    // 0x1e8140: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e8140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e8144:
    // 0x1e8144: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e8144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e8148:
    // 0x1e8148: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e814c:
    if (ctx->pc == 0x1E814Cu) {
        ctx->pc = 0x1E814Cu;
            // 0x1e814c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E8150u;
        goto label_1e8150;
    }
    ctx->pc = 0x1E8148u;
    {
        const bool branch_taken_0x1e8148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8148u;
            // 0x1e814c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8148) {
            ctx->pc = 0x1E8178u;
            goto label_1e8178;
        }
    }
    ctx->pc = 0x1E8150u;
label_1e8150:
    // 0x1e8150: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e8150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e8154:
    // 0x1e8154: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e8154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e8158:
    // 0x1e8158: 0x2463aa58  addiu       $v1, $v1, -0x55A8
    ctx->pc = 0x1e8158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945368));
label_1e815c:
    // 0x1e815c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e815cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e8160:
    // 0x1e8160: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8160u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e8164:
    // 0x1e8164: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e8164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e8168:
    // 0x1e8168: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8168u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e816c:
    // 0x1e816c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e8170:
    // 0x1e8170: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e8170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e8174:
    // 0x1e8174: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e8174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e8178:
    // 0x1e8178: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1e8178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1e817c:
    // 0x1e817c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1e817cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1e8180:
    // 0x1e8180: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1e8180u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e8184:
    // 0x1e8184: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e8184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e8188:
    // 0x1e8188: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1e8188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e818c:
    // 0x1e818c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e8190:
    // 0x1e8190: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e8190u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e8194:
    // 0x1e8194: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e8194u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e8198:
    // 0x1e8198: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e8198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e819c:
    // 0x1e819c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e819cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e81a0:
    // 0x1e81a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e81a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e81a4:
    // 0x1e81a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e81a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e81a8:
    // 0x1e81a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e81a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e81ac:
    // 0x1e81ac: 0x3e00008  jr          $ra
label_1e81b0:
    if (ctx->pc == 0x1E81B0u) {
        ctx->pc = 0x1E81B0u;
            // 0x1e81b0: 0x27bd07f0  addiu       $sp, $sp, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2032));
        ctx->pc = 0x1E81B4u;
        goto label_1e81b4;
    }
    ctx->pc = 0x1E81ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E81B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E81ACu;
            // 0x1e81b0: 0x27bd07f0  addiu       $sp, $sp, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2032));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E81B4u;
label_1e81b4:
    // 0x1e81b4: 0x0  nop
    ctx->pc = 0x1e81b4u;
    // NOP
label_1e81b8:
    // 0x1e81b8: 0x0  nop
    ctx->pc = 0x1e81b8u;
    // NOP
label_1e81bc:
    // 0x1e81bc: 0x0  nop
    ctx->pc = 0x1e81bcu;
    // NOP
}
