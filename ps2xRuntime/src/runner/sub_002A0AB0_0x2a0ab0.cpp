#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A0AB0
// Address: 0x2a0ab0 - 0x2a1040
void sub_002A0AB0_0x2a0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0AB0_0x2a0ab0");
#endif

    switch (ctx->pc) {
        case 0x2a0ab0u: goto label_2a0ab0;
        case 0x2a0ab4u: goto label_2a0ab4;
        case 0x2a0ab8u: goto label_2a0ab8;
        case 0x2a0abcu: goto label_2a0abc;
        case 0x2a0ac0u: goto label_2a0ac0;
        case 0x2a0ac4u: goto label_2a0ac4;
        case 0x2a0ac8u: goto label_2a0ac8;
        case 0x2a0accu: goto label_2a0acc;
        case 0x2a0ad0u: goto label_2a0ad0;
        case 0x2a0ad4u: goto label_2a0ad4;
        case 0x2a0ad8u: goto label_2a0ad8;
        case 0x2a0adcu: goto label_2a0adc;
        case 0x2a0ae0u: goto label_2a0ae0;
        case 0x2a0ae4u: goto label_2a0ae4;
        case 0x2a0ae8u: goto label_2a0ae8;
        case 0x2a0aecu: goto label_2a0aec;
        case 0x2a0af0u: goto label_2a0af0;
        case 0x2a0af4u: goto label_2a0af4;
        case 0x2a0af8u: goto label_2a0af8;
        case 0x2a0afcu: goto label_2a0afc;
        case 0x2a0b00u: goto label_2a0b00;
        case 0x2a0b04u: goto label_2a0b04;
        case 0x2a0b08u: goto label_2a0b08;
        case 0x2a0b0cu: goto label_2a0b0c;
        case 0x2a0b10u: goto label_2a0b10;
        case 0x2a0b14u: goto label_2a0b14;
        case 0x2a0b18u: goto label_2a0b18;
        case 0x2a0b1cu: goto label_2a0b1c;
        case 0x2a0b20u: goto label_2a0b20;
        case 0x2a0b24u: goto label_2a0b24;
        case 0x2a0b28u: goto label_2a0b28;
        case 0x2a0b2cu: goto label_2a0b2c;
        case 0x2a0b30u: goto label_2a0b30;
        case 0x2a0b34u: goto label_2a0b34;
        case 0x2a0b38u: goto label_2a0b38;
        case 0x2a0b3cu: goto label_2a0b3c;
        case 0x2a0b40u: goto label_2a0b40;
        case 0x2a0b44u: goto label_2a0b44;
        case 0x2a0b48u: goto label_2a0b48;
        case 0x2a0b4cu: goto label_2a0b4c;
        case 0x2a0b50u: goto label_2a0b50;
        case 0x2a0b54u: goto label_2a0b54;
        case 0x2a0b58u: goto label_2a0b58;
        case 0x2a0b5cu: goto label_2a0b5c;
        case 0x2a0b60u: goto label_2a0b60;
        case 0x2a0b64u: goto label_2a0b64;
        case 0x2a0b68u: goto label_2a0b68;
        case 0x2a0b6cu: goto label_2a0b6c;
        case 0x2a0b70u: goto label_2a0b70;
        case 0x2a0b74u: goto label_2a0b74;
        case 0x2a0b78u: goto label_2a0b78;
        case 0x2a0b7cu: goto label_2a0b7c;
        case 0x2a0b80u: goto label_2a0b80;
        case 0x2a0b84u: goto label_2a0b84;
        case 0x2a0b88u: goto label_2a0b88;
        case 0x2a0b8cu: goto label_2a0b8c;
        case 0x2a0b90u: goto label_2a0b90;
        case 0x2a0b94u: goto label_2a0b94;
        case 0x2a0b98u: goto label_2a0b98;
        case 0x2a0b9cu: goto label_2a0b9c;
        case 0x2a0ba0u: goto label_2a0ba0;
        case 0x2a0ba4u: goto label_2a0ba4;
        case 0x2a0ba8u: goto label_2a0ba8;
        case 0x2a0bacu: goto label_2a0bac;
        case 0x2a0bb0u: goto label_2a0bb0;
        case 0x2a0bb4u: goto label_2a0bb4;
        case 0x2a0bb8u: goto label_2a0bb8;
        case 0x2a0bbcu: goto label_2a0bbc;
        case 0x2a0bc0u: goto label_2a0bc0;
        case 0x2a0bc4u: goto label_2a0bc4;
        case 0x2a0bc8u: goto label_2a0bc8;
        case 0x2a0bccu: goto label_2a0bcc;
        case 0x2a0bd0u: goto label_2a0bd0;
        case 0x2a0bd4u: goto label_2a0bd4;
        case 0x2a0bd8u: goto label_2a0bd8;
        case 0x2a0bdcu: goto label_2a0bdc;
        case 0x2a0be0u: goto label_2a0be0;
        case 0x2a0be4u: goto label_2a0be4;
        case 0x2a0be8u: goto label_2a0be8;
        case 0x2a0becu: goto label_2a0bec;
        case 0x2a0bf0u: goto label_2a0bf0;
        case 0x2a0bf4u: goto label_2a0bf4;
        case 0x2a0bf8u: goto label_2a0bf8;
        case 0x2a0bfcu: goto label_2a0bfc;
        case 0x2a0c00u: goto label_2a0c00;
        case 0x2a0c04u: goto label_2a0c04;
        case 0x2a0c08u: goto label_2a0c08;
        case 0x2a0c0cu: goto label_2a0c0c;
        case 0x2a0c10u: goto label_2a0c10;
        case 0x2a0c14u: goto label_2a0c14;
        case 0x2a0c18u: goto label_2a0c18;
        case 0x2a0c1cu: goto label_2a0c1c;
        case 0x2a0c20u: goto label_2a0c20;
        case 0x2a0c24u: goto label_2a0c24;
        case 0x2a0c28u: goto label_2a0c28;
        case 0x2a0c2cu: goto label_2a0c2c;
        case 0x2a0c30u: goto label_2a0c30;
        case 0x2a0c34u: goto label_2a0c34;
        case 0x2a0c38u: goto label_2a0c38;
        case 0x2a0c3cu: goto label_2a0c3c;
        case 0x2a0c40u: goto label_2a0c40;
        case 0x2a0c44u: goto label_2a0c44;
        case 0x2a0c48u: goto label_2a0c48;
        case 0x2a0c4cu: goto label_2a0c4c;
        case 0x2a0c50u: goto label_2a0c50;
        case 0x2a0c54u: goto label_2a0c54;
        case 0x2a0c58u: goto label_2a0c58;
        case 0x2a0c5cu: goto label_2a0c5c;
        case 0x2a0c60u: goto label_2a0c60;
        case 0x2a0c64u: goto label_2a0c64;
        case 0x2a0c68u: goto label_2a0c68;
        case 0x2a0c6cu: goto label_2a0c6c;
        case 0x2a0c70u: goto label_2a0c70;
        case 0x2a0c74u: goto label_2a0c74;
        case 0x2a0c78u: goto label_2a0c78;
        case 0x2a0c7cu: goto label_2a0c7c;
        case 0x2a0c80u: goto label_2a0c80;
        case 0x2a0c84u: goto label_2a0c84;
        case 0x2a0c88u: goto label_2a0c88;
        case 0x2a0c8cu: goto label_2a0c8c;
        case 0x2a0c90u: goto label_2a0c90;
        case 0x2a0c94u: goto label_2a0c94;
        case 0x2a0c98u: goto label_2a0c98;
        case 0x2a0c9cu: goto label_2a0c9c;
        case 0x2a0ca0u: goto label_2a0ca0;
        case 0x2a0ca4u: goto label_2a0ca4;
        case 0x2a0ca8u: goto label_2a0ca8;
        case 0x2a0cacu: goto label_2a0cac;
        case 0x2a0cb0u: goto label_2a0cb0;
        case 0x2a0cb4u: goto label_2a0cb4;
        case 0x2a0cb8u: goto label_2a0cb8;
        case 0x2a0cbcu: goto label_2a0cbc;
        case 0x2a0cc0u: goto label_2a0cc0;
        case 0x2a0cc4u: goto label_2a0cc4;
        case 0x2a0cc8u: goto label_2a0cc8;
        case 0x2a0cccu: goto label_2a0ccc;
        case 0x2a0cd0u: goto label_2a0cd0;
        case 0x2a0cd4u: goto label_2a0cd4;
        case 0x2a0cd8u: goto label_2a0cd8;
        case 0x2a0cdcu: goto label_2a0cdc;
        case 0x2a0ce0u: goto label_2a0ce0;
        case 0x2a0ce4u: goto label_2a0ce4;
        case 0x2a0ce8u: goto label_2a0ce8;
        case 0x2a0cecu: goto label_2a0cec;
        case 0x2a0cf0u: goto label_2a0cf0;
        case 0x2a0cf4u: goto label_2a0cf4;
        case 0x2a0cf8u: goto label_2a0cf8;
        case 0x2a0cfcu: goto label_2a0cfc;
        case 0x2a0d00u: goto label_2a0d00;
        case 0x2a0d04u: goto label_2a0d04;
        case 0x2a0d08u: goto label_2a0d08;
        case 0x2a0d0cu: goto label_2a0d0c;
        case 0x2a0d10u: goto label_2a0d10;
        case 0x2a0d14u: goto label_2a0d14;
        case 0x2a0d18u: goto label_2a0d18;
        case 0x2a0d1cu: goto label_2a0d1c;
        case 0x2a0d20u: goto label_2a0d20;
        case 0x2a0d24u: goto label_2a0d24;
        case 0x2a0d28u: goto label_2a0d28;
        case 0x2a0d2cu: goto label_2a0d2c;
        case 0x2a0d30u: goto label_2a0d30;
        case 0x2a0d34u: goto label_2a0d34;
        case 0x2a0d38u: goto label_2a0d38;
        case 0x2a0d3cu: goto label_2a0d3c;
        case 0x2a0d40u: goto label_2a0d40;
        case 0x2a0d44u: goto label_2a0d44;
        case 0x2a0d48u: goto label_2a0d48;
        case 0x2a0d4cu: goto label_2a0d4c;
        case 0x2a0d50u: goto label_2a0d50;
        case 0x2a0d54u: goto label_2a0d54;
        case 0x2a0d58u: goto label_2a0d58;
        case 0x2a0d5cu: goto label_2a0d5c;
        case 0x2a0d60u: goto label_2a0d60;
        case 0x2a0d64u: goto label_2a0d64;
        case 0x2a0d68u: goto label_2a0d68;
        case 0x2a0d6cu: goto label_2a0d6c;
        case 0x2a0d70u: goto label_2a0d70;
        case 0x2a0d74u: goto label_2a0d74;
        case 0x2a0d78u: goto label_2a0d78;
        case 0x2a0d7cu: goto label_2a0d7c;
        case 0x2a0d80u: goto label_2a0d80;
        case 0x2a0d84u: goto label_2a0d84;
        case 0x2a0d88u: goto label_2a0d88;
        case 0x2a0d8cu: goto label_2a0d8c;
        case 0x2a0d90u: goto label_2a0d90;
        case 0x2a0d94u: goto label_2a0d94;
        case 0x2a0d98u: goto label_2a0d98;
        case 0x2a0d9cu: goto label_2a0d9c;
        case 0x2a0da0u: goto label_2a0da0;
        case 0x2a0da4u: goto label_2a0da4;
        case 0x2a0da8u: goto label_2a0da8;
        case 0x2a0dacu: goto label_2a0dac;
        case 0x2a0db0u: goto label_2a0db0;
        case 0x2a0db4u: goto label_2a0db4;
        case 0x2a0db8u: goto label_2a0db8;
        case 0x2a0dbcu: goto label_2a0dbc;
        case 0x2a0dc0u: goto label_2a0dc0;
        case 0x2a0dc4u: goto label_2a0dc4;
        case 0x2a0dc8u: goto label_2a0dc8;
        case 0x2a0dccu: goto label_2a0dcc;
        case 0x2a0dd0u: goto label_2a0dd0;
        case 0x2a0dd4u: goto label_2a0dd4;
        case 0x2a0dd8u: goto label_2a0dd8;
        case 0x2a0ddcu: goto label_2a0ddc;
        case 0x2a0de0u: goto label_2a0de0;
        case 0x2a0de4u: goto label_2a0de4;
        case 0x2a0de8u: goto label_2a0de8;
        case 0x2a0decu: goto label_2a0dec;
        case 0x2a0df0u: goto label_2a0df0;
        case 0x2a0df4u: goto label_2a0df4;
        case 0x2a0df8u: goto label_2a0df8;
        case 0x2a0dfcu: goto label_2a0dfc;
        case 0x2a0e00u: goto label_2a0e00;
        case 0x2a0e04u: goto label_2a0e04;
        case 0x2a0e08u: goto label_2a0e08;
        case 0x2a0e0cu: goto label_2a0e0c;
        case 0x2a0e10u: goto label_2a0e10;
        case 0x2a0e14u: goto label_2a0e14;
        case 0x2a0e18u: goto label_2a0e18;
        case 0x2a0e1cu: goto label_2a0e1c;
        case 0x2a0e20u: goto label_2a0e20;
        case 0x2a0e24u: goto label_2a0e24;
        case 0x2a0e28u: goto label_2a0e28;
        case 0x2a0e2cu: goto label_2a0e2c;
        case 0x2a0e30u: goto label_2a0e30;
        case 0x2a0e34u: goto label_2a0e34;
        case 0x2a0e38u: goto label_2a0e38;
        case 0x2a0e3cu: goto label_2a0e3c;
        case 0x2a0e40u: goto label_2a0e40;
        case 0x2a0e44u: goto label_2a0e44;
        case 0x2a0e48u: goto label_2a0e48;
        case 0x2a0e4cu: goto label_2a0e4c;
        case 0x2a0e50u: goto label_2a0e50;
        case 0x2a0e54u: goto label_2a0e54;
        case 0x2a0e58u: goto label_2a0e58;
        case 0x2a0e5cu: goto label_2a0e5c;
        case 0x2a0e60u: goto label_2a0e60;
        case 0x2a0e64u: goto label_2a0e64;
        case 0x2a0e68u: goto label_2a0e68;
        case 0x2a0e6cu: goto label_2a0e6c;
        case 0x2a0e70u: goto label_2a0e70;
        case 0x2a0e74u: goto label_2a0e74;
        case 0x2a0e78u: goto label_2a0e78;
        case 0x2a0e7cu: goto label_2a0e7c;
        case 0x2a0e80u: goto label_2a0e80;
        case 0x2a0e84u: goto label_2a0e84;
        case 0x2a0e88u: goto label_2a0e88;
        case 0x2a0e8cu: goto label_2a0e8c;
        case 0x2a0e90u: goto label_2a0e90;
        case 0x2a0e94u: goto label_2a0e94;
        case 0x2a0e98u: goto label_2a0e98;
        case 0x2a0e9cu: goto label_2a0e9c;
        case 0x2a0ea0u: goto label_2a0ea0;
        case 0x2a0ea4u: goto label_2a0ea4;
        case 0x2a0ea8u: goto label_2a0ea8;
        case 0x2a0eacu: goto label_2a0eac;
        case 0x2a0eb0u: goto label_2a0eb0;
        case 0x2a0eb4u: goto label_2a0eb4;
        case 0x2a0eb8u: goto label_2a0eb8;
        case 0x2a0ebcu: goto label_2a0ebc;
        case 0x2a0ec0u: goto label_2a0ec0;
        case 0x2a0ec4u: goto label_2a0ec4;
        case 0x2a0ec8u: goto label_2a0ec8;
        case 0x2a0eccu: goto label_2a0ecc;
        case 0x2a0ed0u: goto label_2a0ed0;
        case 0x2a0ed4u: goto label_2a0ed4;
        case 0x2a0ed8u: goto label_2a0ed8;
        case 0x2a0edcu: goto label_2a0edc;
        case 0x2a0ee0u: goto label_2a0ee0;
        case 0x2a0ee4u: goto label_2a0ee4;
        case 0x2a0ee8u: goto label_2a0ee8;
        case 0x2a0eecu: goto label_2a0eec;
        case 0x2a0ef0u: goto label_2a0ef0;
        case 0x2a0ef4u: goto label_2a0ef4;
        case 0x2a0ef8u: goto label_2a0ef8;
        case 0x2a0efcu: goto label_2a0efc;
        case 0x2a0f00u: goto label_2a0f00;
        case 0x2a0f04u: goto label_2a0f04;
        case 0x2a0f08u: goto label_2a0f08;
        case 0x2a0f0cu: goto label_2a0f0c;
        case 0x2a0f10u: goto label_2a0f10;
        case 0x2a0f14u: goto label_2a0f14;
        case 0x2a0f18u: goto label_2a0f18;
        case 0x2a0f1cu: goto label_2a0f1c;
        case 0x2a0f20u: goto label_2a0f20;
        case 0x2a0f24u: goto label_2a0f24;
        case 0x2a0f28u: goto label_2a0f28;
        case 0x2a0f2cu: goto label_2a0f2c;
        case 0x2a0f30u: goto label_2a0f30;
        case 0x2a0f34u: goto label_2a0f34;
        case 0x2a0f38u: goto label_2a0f38;
        case 0x2a0f3cu: goto label_2a0f3c;
        case 0x2a0f40u: goto label_2a0f40;
        case 0x2a0f44u: goto label_2a0f44;
        case 0x2a0f48u: goto label_2a0f48;
        case 0x2a0f4cu: goto label_2a0f4c;
        case 0x2a0f50u: goto label_2a0f50;
        case 0x2a0f54u: goto label_2a0f54;
        case 0x2a0f58u: goto label_2a0f58;
        case 0x2a0f5cu: goto label_2a0f5c;
        case 0x2a0f60u: goto label_2a0f60;
        case 0x2a0f64u: goto label_2a0f64;
        case 0x2a0f68u: goto label_2a0f68;
        case 0x2a0f6cu: goto label_2a0f6c;
        case 0x2a0f70u: goto label_2a0f70;
        case 0x2a0f74u: goto label_2a0f74;
        case 0x2a0f78u: goto label_2a0f78;
        case 0x2a0f7cu: goto label_2a0f7c;
        case 0x2a0f80u: goto label_2a0f80;
        case 0x2a0f84u: goto label_2a0f84;
        case 0x2a0f88u: goto label_2a0f88;
        case 0x2a0f8cu: goto label_2a0f8c;
        case 0x2a0f90u: goto label_2a0f90;
        case 0x2a0f94u: goto label_2a0f94;
        case 0x2a0f98u: goto label_2a0f98;
        case 0x2a0f9cu: goto label_2a0f9c;
        case 0x2a0fa0u: goto label_2a0fa0;
        case 0x2a0fa4u: goto label_2a0fa4;
        case 0x2a0fa8u: goto label_2a0fa8;
        case 0x2a0facu: goto label_2a0fac;
        case 0x2a0fb0u: goto label_2a0fb0;
        case 0x2a0fb4u: goto label_2a0fb4;
        case 0x2a0fb8u: goto label_2a0fb8;
        case 0x2a0fbcu: goto label_2a0fbc;
        case 0x2a0fc0u: goto label_2a0fc0;
        case 0x2a0fc4u: goto label_2a0fc4;
        case 0x2a0fc8u: goto label_2a0fc8;
        case 0x2a0fccu: goto label_2a0fcc;
        case 0x2a0fd0u: goto label_2a0fd0;
        case 0x2a0fd4u: goto label_2a0fd4;
        case 0x2a0fd8u: goto label_2a0fd8;
        case 0x2a0fdcu: goto label_2a0fdc;
        case 0x2a0fe0u: goto label_2a0fe0;
        case 0x2a0fe4u: goto label_2a0fe4;
        case 0x2a0fe8u: goto label_2a0fe8;
        case 0x2a0fecu: goto label_2a0fec;
        case 0x2a0ff0u: goto label_2a0ff0;
        case 0x2a0ff4u: goto label_2a0ff4;
        case 0x2a0ff8u: goto label_2a0ff8;
        case 0x2a0ffcu: goto label_2a0ffc;
        case 0x2a1000u: goto label_2a1000;
        case 0x2a1004u: goto label_2a1004;
        case 0x2a1008u: goto label_2a1008;
        case 0x2a100cu: goto label_2a100c;
        case 0x2a1010u: goto label_2a1010;
        case 0x2a1014u: goto label_2a1014;
        case 0x2a1018u: goto label_2a1018;
        case 0x2a101cu: goto label_2a101c;
        case 0x2a1020u: goto label_2a1020;
        case 0x2a1024u: goto label_2a1024;
        case 0x2a1028u: goto label_2a1028;
        case 0x2a102cu: goto label_2a102c;
        case 0x2a1030u: goto label_2a1030;
        case 0x2a1034u: goto label_2a1034;
        case 0x2a1038u: goto label_2a1038;
        case 0x2a103cu: goto label_2a103c;
        default: break;
    }

    ctx->pc = 0x2a0ab0u;

label_2a0ab0:
    // 0x2a0ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a0ab4:
    // 0x2a0ab4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a0ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a0ab8:
    // 0x2a0ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a0abc:
    // 0x2a0abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a0ac0:
    // 0x2a0ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0ac4:
    // 0x2a0ac4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2a0ac8:
    // 0x2a0ac8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2a0acc:
    if (ctx->pc == 0x2A0ACCu) {
        ctx->pc = 0x2A0ACCu;
            // 0x2a0acc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0AD0u;
        goto label_2a0ad0;
    }
    ctx->pc = 0x2A0AC8u;
    {
        const bool branch_taken_0x2a0ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0AC8u;
            // 0x2a0acc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ac8) {
            ctx->pc = 0x2A0B24u;
            goto label_2a0b24;
        }
    }
    ctx->pc = 0x2A0AD0u;
label_2a0ad0:
    // 0x2a0ad0: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x2a0ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2a0ad4:
    // 0x2a0ad4: 0x1a000010  blez        $s0, . + 4 + (0x10 << 2)
label_2a0ad8:
    if (ctx->pc == 0x2A0AD8u) {
        ctx->pc = 0x2A0AD8u;
            // 0x2a0ad8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0ADCu;
        goto label_2a0adc;
    }
    ctx->pc = 0x2A0AD4u;
    {
        const bool branch_taken_0x2a0ad4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2A0AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0AD4u;
            // 0x2a0ad8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ad4) {
            ctx->pc = 0x2A0B18u;
            goto label_2a0b18;
        }
    }
    ctx->pc = 0x2A0ADCu;
label_2a0adc:
    // 0x2a0adc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2a0adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2a0ae0:
    // 0x2a0ae0: 0x2113023  subu        $a2, $s0, $s1
    ctx->pc = 0x2a0ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2a0ae4:
    // 0x2a0ae4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2a0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2a0ae8:
    // 0x2a0ae8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a0ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0aec:
    // 0x2a0aec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a0aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a0af0:
    // 0x2a0af0: 0x320f809  jalr        $t9
label_2a0af4:
    if (ctx->pc == 0x2A0AF4u) {
        ctx->pc = 0x2A0AF4u;
            // 0x2a0af4: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x2A0AF8u;
        goto label_2a0af8;
    }
    ctx->pc = 0x2A0AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0AF8u);
        ctx->pc = 0x2A0AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0AF0u;
            // 0x2a0af4: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0AF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0AF8u; }
            if (ctx->pc != 0x2A0AF8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0AF8u;
label_2a0af8:
    // 0x2a0af8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2a0afc:
    if (ctx->pc == 0x2A0AFCu) {
        ctx->pc = 0x2A0AFCu;
            // 0x2a0afc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x2A0B00u;
        goto label_2a0b00;
    }
    ctx->pc = 0x2A0AF8u;
    {
        const bool branch_taken_0x2a0af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0AF8u;
            // 0x2a0afc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0af8) {
            ctx->pc = 0x2A0B08u;
            goto label_2a0b08;
        }
    }
    ctx->pc = 0x2A0B00u;
label_2a0b00:
    // 0x2a0b00: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a0b04:
    if (ctx->pc == 0x2A0B04u) {
        ctx->pc = 0x2A0B04u;
            // 0x2a0b04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B08u;
        goto label_2a0b08;
    }
    ctx->pc = 0x2A0B00u;
    {
        const bool branch_taken_0x2a0b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B00u;
            // 0x2a0b04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b00) {
            ctx->pc = 0x2A0B28u;
            goto label_2a0b28;
        }
    }
    ctx->pc = 0x2A0B08u;
label_2a0b08:
    // 0x2a0b08: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2a0b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2a0b0c:
    // 0x2a0b0c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_2a0b10:
    if (ctx->pc == 0x2A0B10u) {
        ctx->pc = 0x2A0B10u;
            // 0x2a0b10: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x2A0B14u;
        goto label_2a0b14;
    }
    ctx->pc = 0x2A0B0Cu;
    {
        const bool branch_taken_0x2a0b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b0c) {
            ctx->pc = 0x2A0B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B0Cu;
            // 0x2a0b10: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a0ae0;
        }
    }
    ctx->pc = 0x2A0B14u;
label_2a0b14:
    // 0x2a0b14: 0x0  nop
    ctx->pc = 0x2a0b14u;
    // NOP
label_2a0b18:
    // 0x2a0b18: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2a0b18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2a0b1c:
    // 0x2a0b1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a0b20:
    if (ctx->pc == 0x2A0B20u) {
        ctx->pc = 0x2A0B20u;
            // 0x2a0b20: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B24u;
        goto label_2a0b24;
    }
    ctx->pc = 0x2A0B1Cu;
    {
        const bool branch_taken_0x2a0b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B1Cu;
            // 0x2a0b20: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b1c) {
            ctx->pc = 0x2A0B28u;
            goto label_2a0b28;
        }
    }
    ctx->pc = 0x2A0B24u;
label_2a0b24:
    // 0x2a0b24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b28:
    // 0x2a0b28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a0b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a0b2c:
    // 0x2a0b2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a0b30:
    // 0x2a0b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0b34:
    // 0x2a0b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0b38:
    // 0x2a0b38: 0x3e00008  jr          $ra
label_2a0b3c:
    if (ctx->pc == 0x2A0B3Cu) {
        ctx->pc = 0x2A0B3Cu;
            // 0x2a0b3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2A0B40u;
        goto label_2a0b40;
    }
    ctx->pc = 0x2A0B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B38u;
            // 0x2a0b3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0B40u;
label_2a0b40:
    // 0x2a0b40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a0b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a0b44:
    // 0x2a0b44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a0b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a0b48:
    // 0x2a0b48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a0b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a0b4c:
    // 0x2a0b4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a0b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a0b50:
    // 0x2a0b50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a0b50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b54:
    // 0x2a0b54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a0b58:
    // 0x2a0b58: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a0b58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b5c:
    // 0x2a0b5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a0b60:
    // 0x2a0b60: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x2a0b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b64:
    // 0x2a0b64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0b68:
    // 0x2a0b68: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2a0b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2a0b6c:
    // 0x2a0b6c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2a0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2a0b70:
    // 0x2a0b70: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x2a0b70u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a0b74:
    // 0x2a0b74: 0x233082a  slt         $at, $s1, $s3
    ctx->pc = 0x2a0b74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2a0b78:
    // 0x2a0b78: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_2a0b7c:
    if (ctx->pc == 0x2A0B7Cu) {
        ctx->pc = 0x2A0B7Cu;
            // 0x2a0b7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B80u;
        goto label_2a0b80;
    }
    ctx->pc = 0x2A0B78u;
    {
        const bool branch_taken_0x2a0b78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B78u;
            // 0x2a0b7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b78) {
            ctx->pc = 0x2A0BD8u;
            goto label_2a0bd8;
        }
    }
    ctx->pc = 0x2A0B80u;
label_2a0b80:
    // 0x2a0b80: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2a0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2a0b84:
    // 0x2a0b84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b88:
    // 0x2a0b88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a0b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0b8c:
    // 0x2a0b8c: 0xc0a8448  jal         func_2A1120
label_2a0b90:
    if (ctx->pc == 0x2A0B90u) {
        ctx->pc = 0x2A0B90u;
            // 0x2a0b90: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2A0B94u;
        goto label_2a0b94;
    }
    ctx->pc = 0x2A0B8Cu;
    SET_GPR_U32(ctx, 31, 0x2A0B94u);
    ctx->pc = 0x2A0B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B8Cu;
            // 0x2a0b90: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B94u; }
        if (ctx->pc != 0x2A0B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B94u; }
        if (ctx->pc != 0x2A0B94u) { return; }
    }
    ctx->pc = 0x2A0B94u;
label_2a0b94:
    // 0x2a0b94: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2a0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2a0b98:
    // 0x2a0b98: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2a0b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2a0b9c:
    // 0x2a0b9c: 0x2519023  subu        $s2, $s2, $s1
    ctx->pc = 0x2a0b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2a0ba0:
    // 0x2a0ba0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a0ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a0ba4:
    // 0x2a0ba4: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x2a0ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2a0ba8:
    // 0x2a0ba8: 0xc0a82ac  jal         func_2A0AB0
label_2a0bac:
    if (ctx->pc == 0x2A0BACu) {
        ctx->pc = 0x2A0BACu;
            // 0x2a0bac: 0xae910010  sw          $s1, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 17));
        ctx->pc = 0x2A0BB0u;
        goto label_2a0bb0;
    }
    ctx->pc = 0x2A0BA8u;
    SET_GPR_U32(ctx, 31, 0x2A0BB0u);
    ctx->pc = 0x2A0BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BA8u;
            // 0x2a0bac: 0xae910010  sw          $s1, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0AB0u;
    goto label_2a0ab0;
    ctx->pc = 0x2A0BB0u;
label_2a0bb0:
    // 0x2a0bb0: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
label_2a0bb4:
    if (ctx->pc == 0x2A0BB4u) {
        ctx->pc = 0x2A0BB4u;
            // 0x2a0bb4: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x2A0BB8u;
        goto label_2a0bb8;
    }
    ctx->pc = 0x2A0BB0u;
    {
        const bool branch_taken_0x2a0bb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0bb0) {
            ctx->pc = 0x2A0BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BB0u;
            // 0x2a0bb4: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0BC0u;
            goto label_2a0bc0;
        }
    }
    ctx->pc = 0x2A0BB8u;
label_2a0bb8:
    // 0x2a0bb8: 0x10000010  b           . + 4 + (0x10 << 2)
label_2a0bbc:
    if (ctx->pc == 0x2A0BBCu) {
        ctx->pc = 0x2A0BBCu;
            // 0x2a0bbc: 0x2721023  subu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->pc = 0x2A0BC0u;
        goto label_2a0bc0;
    }
    ctx->pc = 0x2A0BB8u;
    {
        const bool branch_taken_0x2a0bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BB8u;
            // 0x2a0bbc: 0x2721023  subu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0bb8) {
            ctx->pc = 0x2A0BFCu;
            goto label_2a0bfc;
        }
    }
    ctx->pc = 0x2A0BC0u;
label_2a0bc0:
    // 0x2a0bc0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2a0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2a0bc4:
    // 0x2a0bc4: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a0bc8:
    // 0x2a0bc8: 0x232082a  slt         $at, $s1, $s2
    ctx->pc = 0x2a0bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2a0bcc:
    // 0x2a0bcc: 0x5420ffed  bnel        $at, $zero, . + 4 + (-0x13 << 2)
label_2a0bd0:
    if (ctx->pc == 0x2A0BD0u) {
        ctx->pc = 0x2A0BD0u;
            // 0x2a0bd0: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x2A0BD4u;
        goto label_2a0bd4;
    }
    ctx->pc = 0x2A0BCCu;
    {
        const bool branch_taken_0x2a0bcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0bcc) {
            ctx->pc = 0x2A0BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BCCu;
            // 0x2a0bd0: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0B84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a0b84;
        }
    }
    ctx->pc = 0x2A0BD4u;
label_2a0bd4:
    // 0x2a0bd4: 0x0  nop
    ctx->pc = 0x2a0bd4u;
    // NOP
label_2a0bd8:
    // 0x2a0bd8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2a0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2a0bdc:
    // 0x2a0bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0be0:
    // 0x2a0be0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a0be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a0be4:
    // 0x2a0be4: 0xc0a8448  jal         func_2A1120
label_2a0be8:
    if (ctx->pc == 0x2A0BE8u) {
        ctx->pc = 0x2A0BE8u;
            // 0x2a0be8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2A0BECu;
        goto label_2a0bec;
    }
    ctx->pc = 0x2A0BE4u;
    SET_GPR_U32(ctx, 31, 0x2A0BECu);
    ctx->pc = 0x2A0BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BE4u;
            // 0x2a0be8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BECu; }
        if (ctx->pc != 0x2A0BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BECu; }
        if (ctx->pc != 0x2A0BECu) { return; }
    }
    ctx->pc = 0x2A0BECu;
label_2a0bec:
    // 0x2a0bec: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2a0becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2a0bf0:
    // 0x2a0bf0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2a0bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a0bf4:
    // 0x2a0bf4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2a0bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2a0bf8:
    // 0x2a0bf8: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x2a0bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
label_2a0bfc:
    // 0x2a0bfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a0bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a0c00:
    // 0x2a0c00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a0c00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a0c04:
    // 0x2a0c04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a0c04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a0c08:
    // 0x2a0c08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0c08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a0c0c:
    // 0x2a0c0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0c10:
    // 0x2a0c10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0c14:
    // 0x2a0c14: 0x3e00008  jr          $ra
label_2a0c18:
    if (ctx->pc == 0x2A0C18u) {
        ctx->pc = 0x2A0C18u;
            // 0x2a0c18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2A0C1Cu;
        goto label_2a0c1c;
    }
    ctx->pc = 0x2A0C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C14u;
            // 0x2a0c18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0C1Cu;
label_2a0c1c:
    // 0x2a0c1c: 0x0  nop
    ctx->pc = 0x2a0c1cu;
    // NOP
label_2a0c20:
    // 0x2a0c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a0c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a0c24:
    // 0x2a0c24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a0c28:
    // 0x2a0c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0c2c:
    // 0x2a0c2c: 0xc0a82ac  jal         func_2A0AB0
label_2a0c30:
    if (ctx->pc == 0x2A0C30u) {
        ctx->pc = 0x2A0C30u;
            // 0x2a0c30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C34u;
        goto label_2a0c34;
    }
    ctx->pc = 0x2A0C2Cu;
    SET_GPR_U32(ctx, 31, 0x2A0C34u);
    ctx->pc = 0x2A0C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C2Cu;
            // 0x2a0c30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0AB0u;
    goto label_2a0ab0;
    ctx->pc = 0x2A0C34u;
label_2a0c34:
    // 0x2a0c34: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2a0c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a0c38:
    // 0x2a0c38: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2a0c3c:
    if (ctx->pc == 0x2A0C3Cu) {
        ctx->pc = 0x2A0C3Cu;
            // 0x2a0c3c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2A0C40u;
        goto label_2a0c40;
    }
    ctx->pc = 0x2A0C38u;
    {
        const bool branch_taken_0x2a0c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0c38) {
            ctx->pc = 0x2A0C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C38u;
            // 0x2a0c3c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0C54u;
            goto label_2a0c54;
        }
    }
    ctx->pc = 0x2A0C40u;
label_2a0c40:
    // 0x2a0c40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a0c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0c44:
    // 0x2a0c44: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2a0c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2a0c48:
    // 0x2a0c48: 0x320f809  jalr        $t9
label_2a0c4c:
    if (ctx->pc == 0x2A0C4Cu) {
        ctx->pc = 0x2A0C50u;
        goto label_2a0c50;
    }
    ctx->pc = 0x2A0C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0C50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0C50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C50u; }
            if (ctx->pc != 0x2A0C50u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0C50u;
label_2a0c50:
    // 0x2a0c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0c54:
    // 0x2a0c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0c58:
    // 0x2a0c58: 0x3e00008  jr          $ra
label_2a0c5c:
    if (ctx->pc == 0x2A0C5Cu) {
        ctx->pc = 0x2A0C5Cu;
            // 0x2a0c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A0C60u;
        goto label_2a0c60;
    }
    ctx->pc = 0x2A0C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C58u;
            // 0x2a0c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0C60u;
label_2a0c60:
    // 0x2a0c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a0c64:
    // 0x2a0c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a0c68:
    // 0x2a0c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0c6c:
    // 0x2a0c6c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2a0c70:
    // 0x2a0c70: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2a0c74:
    if (ctx->pc == 0x2A0C74u) {
        ctx->pc = 0x2A0C74u;
            // 0x2a0c74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C78u;
        goto label_2a0c78;
    }
    ctx->pc = 0x2A0C70u;
    {
        const bool branch_taken_0x2a0c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C70u;
            // 0x2a0c74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c70) {
            ctx->pc = 0x2A0C94u;
            goto label_2a0c94;
        }
    }
    ctx->pc = 0x2A0C78u;
label_2a0c78:
    // 0x2a0c78: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x2a0c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a0c7c:
    // 0x2a0c7c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x2a0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2a0c80:
    // 0x2a0c80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a0c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a0c84:
    // 0x2a0c84: 0x320f809  jalr        $t9
label_2a0c88:
    if (ctx->pc == 0x2A0C88u) {
        ctx->pc = 0x2A0C88u;
            // 0x2a0c88: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C8Cu;
        goto label_2a0c8c;
    }
    ctx->pc = 0x2A0C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0C8Cu);
        ctx->pc = 0x2A0C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C84u;
            // 0x2a0c88: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0C8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C8Cu; }
            if (ctx->pc != 0x2A0C8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A0C8Cu;
label_2a0c8c:
    // 0x2a0c8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a0c90:
    if (ctx->pc == 0x2A0C90u) {
        ctx->pc = 0x2A0C90u;
            // 0x2a0c90: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->pc = 0x2A0C94u;
        goto label_2a0c94;
    }
    ctx->pc = 0x2A0C8Cu;
    {
        const bool branch_taken_0x2a0c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C8Cu;
            // 0x2a0c90: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c8c) {
            ctx->pc = 0x2A0CACu;
            goto label_2a0cac;
        }
    }
    ctx->pc = 0x2A0C94u;
label_2a0c94:
    // 0x2a0c94: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2a0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2a0c98:
    // 0x2a0c98: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x2a0c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_2a0c9c:
    // 0x2a0c9c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2a0c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2a0ca0:
    // 0x2a0ca0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x2a0ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_2a0ca4:
    // 0x2a0ca4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2a0ca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a0ca8:
    // 0x2a0ca8: 0xa3a30028  sb          $v1, 0x28($sp)
    ctx->pc = 0x2a0ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 3));
label_2a0cac:
    // 0x2a0cac: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2a0cacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2a0cb0:
    // 0x2a0cb0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2a0cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2a0cb4:
    // 0x2a0cb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0cb8:
    // 0x2a0cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0cbc:
    // 0x2a0cbc: 0x3e00008  jr          $ra
label_2a0cc0:
    if (ctx->pc == 0x2A0CC0u) {
        ctx->pc = 0x2A0CC0u;
            // 0x2a0cc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A0CC4u;
        goto label_2a0cc4;
    }
    ctx->pc = 0x2A0CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CBCu;
            // 0x2a0cc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0CC4u;
label_2a0cc4:
    // 0x2a0cc4: 0x0  nop
    ctx->pc = 0x2a0cc4u;
    // NOP
label_2a0cc8:
    // 0x2a0cc8: 0x0  nop
    ctx->pc = 0x2a0cc8u;
    // NOP
label_2a0ccc:
    // 0x2a0ccc: 0x0  nop
    ctx->pc = 0x2a0cccu;
    // NOP
label_2a0cd0:
    // 0x2a0cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a0cd4:
    // 0x2a0cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a0cd8:
    // 0x2a0cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0cdc:
    // 0x2a0cdc: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2a0cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2a0ce0:
    // 0x2a0ce0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2a0ce4:
    if (ctx->pc == 0x2A0CE4u) {
        ctx->pc = 0x2A0CE4u;
            // 0x2a0ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0CE8u;
        goto label_2a0ce8;
    }
    ctx->pc = 0x2A0CE0u;
    {
        const bool branch_taken_0x2a0ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CE0u;
            // 0x2a0ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ce0) {
            ctx->pc = 0x2A0D00u;
            goto label_2a0d00;
        }
    }
    ctx->pc = 0x2A0CE8u;
label_2a0ce8:
    // 0x2a0ce8: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x2a0ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0cec:
    // 0x2a0cec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2a0cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2a0cf0:
    // 0x2a0cf0: 0x320f809  jalr        $t9
label_2a0cf4:
    if (ctx->pc == 0x2A0CF4u) {
        ctx->pc = 0x2A0CF4u;
            // 0x2a0cf4: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->pc = 0x2A0CF8u;
        goto label_2a0cf8;
    }
    ctx->pc = 0x2A0CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0CF8u);
        ctx->pc = 0x2A0CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CF0u;
            // 0x2a0cf4: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0CF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0CF8u; }
            if (ctx->pc != 0x2A0CF8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0CF8u;
label_2a0cf8:
    // 0x2a0cf8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a0cfc:
    if (ctx->pc == 0x2A0CFCu) {
        ctx->pc = 0x2A0CFCu;
            // 0x2a0cfc: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->pc = 0x2A0D00u;
        goto label_2a0d00;
    }
    ctx->pc = 0x2A0CF8u;
    {
        const bool branch_taken_0x2a0cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CF8u;
            // 0x2a0cfc: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0cf8) {
            ctx->pc = 0x2A0D0Cu;
            goto label_2a0d0c;
        }
    }
    ctx->pc = 0x2A0D00u;
label_2a0d00:
    // 0x2a0d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0d04:
    // 0x2a0d04: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2a0d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_2a0d08:
    // 0x2a0d08: 0xa3a30028  sb          $v1, 0x28($sp)
    ctx->pc = 0x2a0d08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 3));
label_2a0d0c:
    // 0x2a0d0c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2a0d0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0d10:
    // 0x2a0d10: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2a0d10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2a0d14:
    // 0x2a0d14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0d18:
    // 0x2a0d18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0d1c:
    // 0x2a0d1c: 0x3e00008  jr          $ra
label_2a0d20:
    if (ctx->pc == 0x2A0D20u) {
        ctx->pc = 0x2A0D20u;
            // 0x2a0d20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A0D24u;
        goto label_2a0d24;
    }
    ctx->pc = 0x2A0D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D1Cu;
            // 0x2a0d20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0D24u;
label_2a0d24:
    // 0x2a0d24: 0x0  nop
    ctx->pc = 0x2a0d24u;
    // NOP
label_2a0d28:
    // 0x2a0d28: 0x0  nop
    ctx->pc = 0x2a0d28u;
    // NOP
label_2a0d2c:
    // 0x2a0d2c: 0x0  nop
    ctx->pc = 0x2a0d2cu;
    // NOP
label_2a0d30:
    // 0x2a0d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a0d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a0d34:
    // 0x2a0d34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a0d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a0d38:
    // 0x2a0d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a0d3c:
    // 0x2a0d3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a0d40:
    // 0x2a0d40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a0d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d44:
    // 0x2a0d44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0d48:
    // 0x2a0d48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a0d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d4c:
    // 0x2a0d4c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2a0d50:
    // 0x2a0d50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2a0d54:
    if (ctx->pc == 0x2A0D54u) {
        ctx->pc = 0x2A0D54u;
            // 0x2a0d54: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D58u;
        goto label_2a0d58;
    }
    ctx->pc = 0x2A0D50u;
    {
        const bool branch_taken_0x2a0d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D50u;
            // 0x2a0d54: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d50) {
            ctx->pc = 0x2A0D80u;
            goto label_2a0d80;
        }
    }
    ctx->pc = 0x2A0D58u;
label_2a0d58:
    // 0x2a0d58: 0xc0a82ac  jal         func_2A0AB0
label_2a0d5c:
    if (ctx->pc == 0x2A0D5Cu) {
        ctx->pc = 0x2A0D60u;
        goto label_2a0d60;
    }
    ctx->pc = 0x2A0D58u;
    SET_GPR_U32(ctx, 31, 0x2A0D60u);
    ctx->pc = 0x2A0AB0u;
    goto label_2a0ab0;
    ctx->pc = 0x2A0D60u;
label_2a0d60:
    // 0x2a0d60: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2a0d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2a0d64:
    // 0x2a0d64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d68:
    // 0x2a0d68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a0d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0d6c:
    // 0x2a0d6c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2a0d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2a0d70:
    // 0x2a0d70: 0x320f809  jalr        $t9
label_2a0d74:
    if (ctx->pc == 0x2A0D74u) {
        ctx->pc = 0x2A0D74u;
            // 0x2a0d74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D78u;
        goto label_2a0d78;
    }
    ctx->pc = 0x2A0D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0D78u);
        ctx->pc = 0x2A0D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D70u;
            // 0x2a0d74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0D78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D78u; }
            if (ctx->pc != 0x2A0D78u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0D78u;
label_2a0d78:
    // 0x2a0d78: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2a0d7c:
    if (ctx->pc == 0x2A0D7Cu) {
        ctx->pc = 0x2A0D7Cu;
            // 0x2a0d7c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2A0D80u;
        goto label_2a0d80;
    }
    ctx->pc = 0x2A0D78u;
    {
        const bool branch_taken_0x2a0d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D78u;
            // 0x2a0d7c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d78) {
            ctx->pc = 0x2A0DECu;
            goto label_2a0dec;
        }
    }
    ctx->pc = 0x2A0D80u;
label_2a0d80:
    // 0x2a0d80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a0d84:
    // 0x2a0d84: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_2a0d88:
    if (ctx->pc == 0x2A0D88u) {
        ctx->pc = 0x2A0D88u;
            // 0x2a0d88: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A0D8Cu;
        goto label_2a0d8c;
    }
    ctx->pc = 0x2A0D84u;
    {
        const bool branch_taken_0x2a0d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D84u;
            // 0x2a0d88: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d84) {
            ctx->pc = 0x2A0DB0u;
            goto label_2a0db0;
        }
    }
    ctx->pc = 0x2A0D8Cu;
label_2a0d8c:
    // 0x2a0d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0d90:
    // 0x2a0d90: 0x52020005  beql        $s0, $v0, . + 4 + (0x5 << 2)
label_2a0d94:
    if (ctx->pc == 0x2A0D94u) {
        ctx->pc = 0x2A0D94u;
            // 0x2a0d94: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x2A0D98u;
        goto label_2a0d98;
    }
    ctx->pc = 0x2A0D90u;
    {
        const bool branch_taken_0x2a0d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0d90) {
            ctx->pc = 0x2A0D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D90u;
            // 0x2a0d94: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0DA8u;
            goto label_2a0da8;
        }
    }
    ctx->pc = 0x2A0D98u;
label_2a0d98:
    // 0x2a0d98: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_2a0d9c:
    if (ctx->pc == 0x2A0D9Cu) {
        ctx->pc = 0x2A0D9Cu;
            // 0x2a0d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DA0u;
        goto label_2a0da0;
    }
    ctx->pc = 0x2A0D98u;
    {
        const bool branch_taken_0x2a0d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d98) {
            ctx->pc = 0x2A0D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D98u;
            // 0x2a0d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0DB8u;
            goto label_2a0db8;
        }
    }
    ctx->pc = 0x2A0DA0u;
label_2a0da0:
    // 0x2a0da0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a0da4:
    if (ctx->pc == 0x2A0DA4u) {
        ctx->pc = 0x2A0DA4u;
            // 0x2a0da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DA8u;
        goto label_2a0da8;
    }
    ctx->pc = 0x2A0DA0u;
    {
        const bool branch_taken_0x2a0da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DA0u;
            // 0x2a0da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0da0) {
            ctx->pc = 0x2A0DBCu;
            goto label_2a0dbc;
        }
    }
    ctx->pc = 0x2A0DA8u;
label_2a0da8:
    // 0x2a0da8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a0dac:
    if (ctx->pc == 0x2A0DACu) {
        ctx->pc = 0x2A0DACu;
            // 0x2a0dac: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x2A0DB0u;
        goto label_2a0db0;
    }
    ctx->pc = 0x2A0DA8u;
    {
        const bool branch_taken_0x2a0da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DA8u;
            // 0x2a0dac: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0da8) {
            ctx->pc = 0x2A0DB8u;
            goto label_2a0db8;
        }
    }
    ctx->pc = 0x2A0DB0u;
label_2a0db0:
    // 0x2a0db0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2a0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2a0db4:
    // 0x2a0db4: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x2a0db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2a0db8:
    // 0x2a0db8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0dbc:
    // 0x2a0dbc: 0x4830004  bgezl       $a0, . + 4 + (0x4 << 2)
label_2a0dc0:
    if (ctx->pc == 0x2A0DC0u) {
        ctx->pc = 0x2A0DC0u;
            // 0x2a0dc0: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x2A0DC4u;
        goto label_2a0dc4;
    }
    ctx->pc = 0x2A0DBCu;
    {
        const bool branch_taken_0x2a0dbc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2a0dbc) {
            ctx->pc = 0x2A0DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DBCu;
            // 0x2a0dc0: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0DD0u;
            goto label_2a0dd0;
        }
    }
    ctx->pc = 0x2A0DC4u;
label_2a0dc4:
    // 0x2a0dc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a0dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0dc8:
    // 0x2a0dc8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a0dcc:
    if (ctx->pc == 0x2A0DCCu) {
        ctx->pc = 0x2A0DCCu;
            // 0x2a0dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A0DD0u;
        goto label_2a0dd0;
    }
    ctx->pc = 0x2A0DC8u;
    {
        const bool branch_taken_0x2a0dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DC8u;
            // 0x2a0dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0dc8) {
            ctx->pc = 0x2A0DE4u;
            goto label_2a0de4;
        }
    }
    ctx->pc = 0x2A0DD0u;
label_2a0dd0:
    // 0x2a0dd0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2a0dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2a0dd4:
    // 0x2a0dd4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_2a0dd8:
    if (ctx->pc == 0x2A0DD8u) {
        ctx->pc = 0x2A0DD8u;
            // 0x2a0dd8: 0xae440010  sw          $a0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
        ctx->pc = 0x2A0DDCu;
        goto label_2a0ddc;
    }
    ctx->pc = 0x2A0DD4u;
    {
        const bool branch_taken_0x2a0dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0dd4) {
            ctx->pc = 0x2A0DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DD4u;
            // 0x2a0dd8: 0xae440010  sw          $a0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0DE8u;
            goto label_2a0de8;
        }
    }
    ctx->pc = 0x2A0DDCu;
label_2a0ddc:
    // 0x2a0ddc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a0ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a0de0:
    // 0x2a0de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0de4:
    // 0x2a0de4: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x2a0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
label_2a0de8:
    // 0x2a0de8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a0de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a0dec:
    // 0x2a0dec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a0df0:
    // 0x2a0df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0df4:
    // 0x2a0df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0df8:
    // 0x2a0df8: 0x3e00008  jr          $ra
label_2a0dfc:
    if (ctx->pc == 0x2A0DFCu) {
        ctx->pc = 0x2A0DFCu;
            // 0x2a0dfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2A0E00u;
        goto label_2a0e00;
    }
    ctx->pc = 0x2A0DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DF8u;
            // 0x2a0dfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0E00u;
label_2a0e00:
    // 0x2a0e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a0e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a0e04:
    // 0x2a0e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a0e08:
    // 0x2a0e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0e0c:
    // 0x2a0e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e10:
    // 0x2a0e10: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2a0e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2a0e14:
    // 0x2a0e14: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2a0e18:
    if (ctx->pc == 0x2A0E18u) {
        ctx->pc = 0x2A0E18u;
            // 0x2a0e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E1Cu;
        goto label_2a0e1c;
    }
    ctx->pc = 0x2A0E14u;
    {
        const bool branch_taken_0x2a0e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0e14) {
            ctx->pc = 0x2A0E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E14u;
            // 0x2a0e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0E2Cu;
            goto label_2a0e2c;
        }
    }
    ctx->pc = 0x2A0E1Cu;
label_2a0e1c:
    // 0x2a0e1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a0e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0e20:
    // 0x2a0e20: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2a0e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2a0e24:
    // 0x2a0e24: 0x320f809  jalr        $t9
label_2a0e28:
    if (ctx->pc == 0x2A0E28u) {
        ctx->pc = 0x2A0E2Cu;
        goto label_2a0e2c;
    }
    ctx->pc = 0x2A0E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0E2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0E2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E2Cu; }
            if (ctx->pc != 0x2A0E2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A0E2Cu;
label_2a0e2c:
    // 0x2a0e2c: 0x4420003  bltzl       $v0, . + 4 + (0x3 << 2)
label_2a0e30:
    if (ctx->pc == 0x2A0E30u) {
        ctx->pc = 0x2A0E30u;
            // 0x2a0e30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A0E34u;
        goto label_2a0e34;
    }
    ctx->pc = 0x2A0E2Cu;
    {
        const bool branch_taken_0x2a0e2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a0e2c) {
            ctx->pc = 0x2A0E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E2Cu;
            // 0x2a0e30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0E3Cu;
            goto label_2a0e3c;
        }
    }
    ctx->pc = 0x2A0E34u;
label_2a0e34:
    // 0x2a0e34: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2a0e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a0e38:
    // 0x2a0e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a0e3c:
    // 0x2a0e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0e40:
    // 0x2a0e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0e44:
    // 0x2a0e44: 0x3e00008  jr          $ra
label_2a0e48:
    if (ctx->pc == 0x2A0E48u) {
        ctx->pc = 0x2A0E48u;
            // 0x2a0e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A0E4Cu;
        goto label_2a0e4c;
    }
    ctx->pc = 0x2A0E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E44u;
            // 0x2a0e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0E4Cu;
label_2a0e4c:
    // 0x2a0e4c: 0x0  nop
    ctx->pc = 0x2a0e4cu;
    // NOP
label_2a0e50:
    // 0x2a0e50: 0x27bdf9b0  addiu       $sp, $sp, -0x650
    ctx->pc = 0x2a0e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965680));
label_2a0e54:
    // 0x2a0e54: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a0e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a0e58:
    // 0x2a0e58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a0e5c:
    // 0x2a0e5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0e60:
    // 0x2a0e60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0e64:
    // 0x2a0e64: 0x2484eac0  addiu       $a0, $a0, -0x1540
    ctx->pc = 0x2a0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961856));
label_2a0e68:
    // 0x2a0e68: 0x8c45eab0  lw          $a1, -0x1550($v0)
    ctx->pc = 0x2a0e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961840)));
label_2a0e6c:
    // 0x2a0e6c: 0xc073c7e  jal         func_1CF1F8
label_2a0e70:
    if (ctx->pc == 0x2A0E70u) {
        ctx->pc = 0x2A0E70u;
            // 0x2a0e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E74u;
        goto label_2a0e74;
    }
    ctx->pc = 0x2A0E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E74u);
    ctx->pc = 0x2A0E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E6Cu;
            // 0x2a0e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF1F8u;
    if (runtime->hasFunction(0x1CF1F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CF1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E74u; }
        if (ctx->pc != 0x2A0E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF1F8_0x1cf1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E74u; }
        if (ctx->pc != 0x2A0E74u) { return; }
    }
    ctx->pc = 0x2A0E74u;
label_2a0e74:
    // 0x2a0e74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e78:
    // 0x2a0e78: 0x601001d  bgez        $s0, . + 4 + (0x1D << 2)
label_2a0e7c:
    if (ctx->pc == 0x2A0E7Cu) {
        ctx->pc = 0x2A0E80u;
        goto label_2a0e80;
    }
    ctx->pc = 0x2A0E78u;
    {
        const bool branch_taken_0x2a0e78 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2a0e78) {
            ctx->pc = 0x2A0EF0u;
            goto label_2a0ef0;
        }
    }
    ctx->pc = 0x2A0E80u;
label_2a0e80:
    // 0x2a0e80: 0x27a40640  addiu       $a0, $sp, 0x640
    ctx->pc = 0x2a0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_2a0e84:
    // 0x2a0e84: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x2a0e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_2a0e88:
    // 0x2a0e88: 0xc0a7214  jal         func_29C850
label_2a0e8c:
    if (ctx->pc == 0x2A0E8Cu) {
        ctx->pc = 0x2A0E8Cu;
            // 0x2a0e8c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x2A0E90u;
        goto label_2a0e90;
    }
    ctx->pc = 0x2A0E88u;
    SET_GPR_U32(ctx, 31, 0x2A0E90u);
    ctx->pc = 0x2A0E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E88u;
            // 0x2a0e8c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E90u; }
        if (ctx->pc != 0x2A0E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E90u; }
        if (ctx->pc != 0x2A0E90u) { return; }
    }
    ctx->pc = 0x2A0E90u;
label_2a0e90:
    // 0x2a0e90: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2a0e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2a0e94:
    // 0x2a0e94: 0x27a40640  addiu       $a0, $sp, 0x640
    ctx->pc = 0x2a0e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_2a0e98:
    // 0x2a0e98: 0xc0a7fc0  jal         func_29FF00
label_2a0e9c:
    if (ctx->pc == 0x2A0E9Cu) {
        ctx->pc = 0x2A0E9Cu;
            // 0x2a0e9c: 0x24a5dbe0  addiu       $a1, $a1, -0x2420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958048));
        ctx->pc = 0x2A0EA0u;
        goto label_2a0ea0;
    }
    ctx->pc = 0x2A0E98u;
    SET_GPR_U32(ctx, 31, 0x2A0EA0u);
    ctx->pc = 0x2A0E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E98u;
            // 0x2a0e9c: 0x24a5dbe0  addiu       $a1, $a1, -0x2420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0EA0u; }
        if (ctx->pc != 0x2A0EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0EA0u; }
        if (ctx->pc != 0x2A0EA0u) { return; }
    }
    ctx->pc = 0x2A0EA0u;
label_2a0ea0:
    // 0x2a0ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0ea4:
    // 0x2a0ea4: 0xc0a7fcc  jal         func_29FF30
label_2a0ea8:
    if (ctx->pc == 0x2A0EA8u) {
        ctx->pc = 0x2A0EA8u;
            // 0x2a0ea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0EACu;
        goto label_2a0eac;
    }
    ctx->pc = 0x2A0EA4u;
    SET_GPR_U32(ctx, 31, 0x2A0EACu);
    ctx->pc = 0x2A0EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0EA4u;
            // 0x2a0ea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF30u;
    if (runtime->hasFunction(0x29FF30u)) {
        auto targetFn = runtime->lookupFunction(0x29FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0EACu; }
        if (ctx->pc != 0x2A0EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF30_0x29ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0EACu; }
        if (ctx->pc != 0x2A0EACu) { return; }
    }
    ctx->pc = 0x2A0EACu;
label_2a0eac:
    // 0x2a0eac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0eb0:
    // 0x2a0eb0: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x2a0eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_2a0eb4:
    // 0x2a0eb4: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x2a0eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_2a0eb8:
    // 0x2a0eb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a0eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a0ebc:
    // 0x2a0ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a0ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0ec0:
    // 0x2a0ec0: 0x27a70420  addiu       $a3, $sp, 0x420
    ctx->pc = 0x2a0ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_2a0ec4:
    // 0x2a0ec4: 0x2508dbc0  addiu       $t0, $t0, -0x2440
    ctx->pc = 0x2a0ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958016));
label_2a0ec8:
    // 0x2a0ec8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a0ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0ecc:
    // 0x2a0ecc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a0eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a0ed0:
    // 0x2a0ed0: 0x320f809  jalr        $t9
label_2a0ed4:
    if (ctx->pc == 0x2A0ED4u) {
        ctx->pc = 0x2A0ED4u;
            // 0x2a0ed4: 0x240900bd  addiu       $t1, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->pc = 0x2A0ED8u;
        goto label_2a0ed8;
    }
    ctx->pc = 0x2A0ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0ED8u);
        ctx->pc = 0x2A0ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0ED0u;
            // 0x2a0ed4: 0x240900bd  addiu       $t1, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0ED8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0ED8u; }
            if (ctx->pc != 0x2A0ED8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0ED8u;
label_2a0ed8:
    // 0x2a0ed8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a0edc:
    // 0x2a0edc: 0x27a40640  addiu       $a0, $sp, 0x640
    ctx->pc = 0x2a0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_2a0ee0:
    // 0x2a0ee0: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x2a0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_2a0ee4:
    // 0x2a0ee4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0ee8:
    // 0x2a0ee8: 0xc0a7f78  jal         func_29FDE0
label_2a0eec:
    if (ctx->pc == 0x2A0EECu) {
        ctx->pc = 0x2A0EECu;
            // 0x2a0eec: 0xafa20640  sw          $v0, 0x640($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
        ctx->pc = 0x2A0EF0u;
        goto label_2a0ef0;
    }
    ctx->pc = 0x2A0EE8u;
    SET_GPR_U32(ctx, 31, 0x2A0EF0u);
    ctx->pc = 0x2A0EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0EE8u;
            // 0x2a0eec: 0xafa20640  sw          $v0, 0x640($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0EF0u; }
        if (ctx->pc != 0x2A0EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0EF0u; }
        if (ctx->pc != 0x2A0EF0u) { return; }
    }
    ctx->pc = 0x2A0EF0u;
label_2a0ef0:
    // 0x2a0ef0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0ef4:
    // 0x2a0ef4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a0ef8:
    // 0x2a0ef8: 0x8c45eab0  lw          $a1, -0x1550($v0)
    ctx->pc = 0x2a0ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961840)));
label_2a0efc:
    // 0x2a0efc: 0xc073d22  jal         func_1CF488
label_2a0f00:
    if (ctx->pc == 0x2A0F00u) {
        ctx->pc = 0x2A0F00u;
            // 0x2a0f00: 0x2484eac0  addiu       $a0, $a0, -0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961856));
        ctx->pc = 0x2A0F04u;
        goto label_2a0f04;
    }
    ctx->pc = 0x2A0EFCu;
    SET_GPR_U32(ctx, 31, 0x2A0F04u);
    ctx->pc = 0x2A0F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0EFCu;
            // 0x2a0f00: 0x2484eac0  addiu       $a0, $a0, -0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF488u;
    if (runtime->hasFunction(0x1CF488u)) {
        auto targetFn = runtime->lookupFunction(0x1CF488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F04u; }
        if (ctx->pc != 0x2A0F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF488_0x1cf488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F04u; }
        if (ctx->pc != 0x2A0F04u) { return; }
    }
    ctx->pc = 0x2A0F04u;
label_2a0f04:
    // 0x2a0f04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0f08:
    // 0x2a0f08: 0x601001d  bgez        $s0, . + 4 + (0x1D << 2)
label_2a0f0c:
    if (ctx->pc == 0x2A0F0Cu) {
        ctx->pc = 0x2A0F10u;
        goto label_2a0f10;
    }
    ctx->pc = 0x2A0F08u;
    {
        const bool branch_taken_0x2a0f08 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2a0f08) {
            ctx->pc = 0x2A0F80u;
            goto label_2a0f80;
        }
    }
    ctx->pc = 0x2A0F10u;
label_2a0f10:
    // 0x2a0f10: 0x27a40630  addiu       $a0, $sp, 0x630
    ctx->pc = 0x2a0f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_2a0f14:
    // 0x2a0f14: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x2a0f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2a0f18:
    // 0x2a0f18: 0xc0a7214  jal         func_29C850
label_2a0f1c:
    if (ctx->pc == 0x2A0F1Cu) {
        ctx->pc = 0x2A0F1Cu;
            // 0x2a0f1c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x2A0F20u;
        goto label_2a0f20;
    }
    ctx->pc = 0x2A0F18u;
    SET_GPR_U32(ctx, 31, 0x2A0F20u);
    ctx->pc = 0x2A0F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F18u;
            // 0x2a0f1c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F20u; }
        if (ctx->pc != 0x2A0F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F20u; }
        if (ctx->pc != 0x2A0F20u) { return; }
    }
    ctx->pc = 0x2A0F20u;
label_2a0f20:
    // 0x2a0f20: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2a0f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2a0f24:
    // 0x2a0f24: 0x27a40630  addiu       $a0, $sp, 0x630
    ctx->pc = 0x2a0f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_2a0f28:
    // 0x2a0f28: 0xc0a7fc0  jal         func_29FF00
label_2a0f2c:
    if (ctx->pc == 0x2A0F2Cu) {
        ctx->pc = 0x2A0F2Cu;
            // 0x2a0f2c: 0x24a5dc10  addiu       $a1, $a1, -0x23F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958096));
        ctx->pc = 0x2A0F30u;
        goto label_2a0f30;
    }
    ctx->pc = 0x2A0F28u;
    SET_GPR_U32(ctx, 31, 0x2A0F30u);
    ctx->pc = 0x2A0F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F28u;
            // 0x2a0f2c: 0x24a5dc10  addiu       $a1, $a1, -0x23F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F30u; }
        if (ctx->pc != 0x2A0F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F30u; }
        if (ctx->pc != 0x2A0F30u) { return; }
    }
    ctx->pc = 0x2A0F30u;
label_2a0f30:
    // 0x2a0f30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0f34:
    // 0x2a0f34: 0xc0a7fcc  jal         func_29FF30
label_2a0f38:
    if (ctx->pc == 0x2A0F38u) {
        ctx->pc = 0x2A0F38u;
            // 0x2a0f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F3Cu;
        goto label_2a0f3c;
    }
    ctx->pc = 0x2A0F34u;
    SET_GPR_U32(ctx, 31, 0x2A0F3Cu);
    ctx->pc = 0x2A0F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F34u;
            // 0x2a0f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF30u;
    if (runtime->hasFunction(0x29FF30u)) {
        auto targetFn = runtime->lookupFunction(0x29FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F3Cu; }
        if (ctx->pc != 0x2A0F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF30_0x29ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F3Cu; }
        if (ctx->pc != 0x2A0F3Cu) { return; }
    }
    ctx->pc = 0x2A0F3Cu;
label_2a0f3c:
    // 0x2a0f3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0f40:
    // 0x2a0f40: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x2a0f40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_2a0f44:
    // 0x2a0f44: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x2a0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_2a0f48:
    // 0x2a0f48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a0f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a0f4c:
    // 0x2a0f4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a0f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0f50:
    // 0x2a0f50: 0x27a70220  addiu       $a3, $sp, 0x220
    ctx->pc = 0x2a0f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2a0f54:
    // 0x2a0f54: 0x2508dbc0  addiu       $t0, $t0, -0x2440
    ctx->pc = 0x2a0f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958016));
label_2a0f58:
    // 0x2a0f58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a0f58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0f5c:
    // 0x2a0f5c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a0f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a0f60:
    // 0x2a0f60: 0x320f809  jalr        $t9
label_2a0f64:
    if (ctx->pc == 0x2A0F64u) {
        ctx->pc = 0x2A0F64u;
            // 0x2a0f64: 0x240900c2  addiu       $t1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->pc = 0x2A0F68u;
        goto label_2a0f68;
    }
    ctx->pc = 0x2A0F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0F68u);
        ctx->pc = 0x2A0F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F60u;
            // 0x2a0f64: 0x240900c2  addiu       $t1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0F68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F68u; }
            if (ctx->pc != 0x2A0F68u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0F68u;
label_2a0f68:
    // 0x2a0f68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a0f6c:
    // 0x2a0f6c: 0x27a40630  addiu       $a0, $sp, 0x630
    ctx->pc = 0x2a0f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_2a0f70:
    // 0x2a0f70: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x2a0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_2a0f74:
    // 0x2a0f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0f78:
    // 0x2a0f78: 0xc0a7f78  jal         func_29FDE0
label_2a0f7c:
    if (ctx->pc == 0x2A0F7Cu) {
        ctx->pc = 0x2A0F7Cu;
            // 0x2a0f7c: 0xafa20630  sw          $v0, 0x630($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1584), GPR_U32(ctx, 2));
        ctx->pc = 0x2A0F80u;
        goto label_2a0f80;
    }
    ctx->pc = 0x2A0F78u;
    SET_GPR_U32(ctx, 31, 0x2A0F80u);
    ctx->pc = 0x2A0F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F78u;
            // 0x2a0f7c: 0xafa20630  sw          $v0, 0x630($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F80u; }
        if (ctx->pc != 0x2A0F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F80u; }
        if (ctx->pc != 0x2A0F80u) { return; }
    }
    ctx->pc = 0x2A0F80u;
label_2a0f80:
    // 0x2a0f80: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a0f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a0f84:
    // 0x2a0f84: 0xc073cf2  jal         func_1CF3C8
label_2a0f88:
    if (ctx->pc == 0x2A0F88u) {
        ctx->pc = 0x2A0F88u;
            // 0x2a0f88: 0x2484eac0  addiu       $a0, $a0, -0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961856));
        ctx->pc = 0x2A0F8Cu;
        goto label_2a0f8c;
    }
    ctx->pc = 0x2A0F84u;
    SET_GPR_U32(ctx, 31, 0x2A0F8Cu);
    ctx->pc = 0x2A0F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F84u;
            // 0x2a0f88: 0x2484eac0  addiu       $a0, $a0, -0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF3C8u;
    if (runtime->hasFunction(0x1CF3C8u)) {
        auto targetFn = runtime->lookupFunction(0x1CF3C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F8Cu; }
        if (ctx->pc != 0x2A0F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF3C8_0x1cf3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F8Cu; }
        if (ctx->pc != 0x2A0F8Cu) { return; }
    }
    ctx->pc = 0x2A0F8Cu;
label_2a0f8c:
    // 0x2a0f8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0f90:
    // 0x2a0f90: 0x601001d  bgez        $s0, . + 4 + (0x1D << 2)
label_2a0f94:
    if (ctx->pc == 0x2A0F94u) {
        ctx->pc = 0x2A0F98u;
        goto label_2a0f98;
    }
    ctx->pc = 0x2A0F90u;
    {
        const bool branch_taken_0x2a0f90 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2a0f90) {
            ctx->pc = 0x2A1008u;
            goto label_2a1008;
        }
    }
    ctx->pc = 0x2A0F98u;
label_2a0f98:
    // 0x2a0f98: 0x27a40620  addiu       $a0, $sp, 0x620
    ctx->pc = 0x2a0f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_2a0f9c:
    // 0x2a0f9c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a0f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a0fa0:
    // 0x2a0fa0: 0xc0a7214  jal         func_29C850
label_2a0fa4:
    if (ctx->pc == 0x2A0FA4u) {
        ctx->pc = 0x2A0FA4u;
            // 0x2a0fa4: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x2A0FA8u;
        goto label_2a0fa8;
    }
    ctx->pc = 0x2A0FA0u;
    SET_GPR_U32(ctx, 31, 0x2A0FA8u);
    ctx->pc = 0x2A0FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0FA0u;
            // 0x2a0fa4: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FA8u; }
        if (ctx->pc != 0x2A0FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FA8u; }
        if (ctx->pc != 0x2A0FA8u) { return; }
    }
    ctx->pc = 0x2A0FA8u;
label_2a0fa8:
    // 0x2a0fa8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2a0fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2a0fac:
    // 0x2a0fac: 0x27a40620  addiu       $a0, $sp, 0x620
    ctx->pc = 0x2a0facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_2a0fb0:
    // 0x2a0fb0: 0xc0a7fc0  jal         func_29FF00
label_2a0fb4:
    if (ctx->pc == 0x2A0FB4u) {
        ctx->pc = 0x2A0FB4u;
            // 0x2a0fb4: 0x24a5dc40  addiu       $a1, $a1, -0x23C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958144));
        ctx->pc = 0x2A0FB8u;
        goto label_2a0fb8;
    }
    ctx->pc = 0x2A0FB0u;
    SET_GPR_U32(ctx, 31, 0x2A0FB8u);
    ctx->pc = 0x2A0FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0FB0u;
            // 0x2a0fb4: 0x24a5dc40  addiu       $a1, $a1, -0x23C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FB8u; }
        if (ctx->pc != 0x2A0FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FB8u; }
        if (ctx->pc != 0x2A0FB8u) { return; }
    }
    ctx->pc = 0x2A0FB8u;
label_2a0fb8:
    // 0x2a0fb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0fbc:
    // 0x2a0fbc: 0xc0a7fcc  jal         func_29FF30
label_2a0fc0:
    if (ctx->pc == 0x2A0FC0u) {
        ctx->pc = 0x2A0FC0u;
            // 0x2a0fc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0FC4u;
        goto label_2a0fc4;
    }
    ctx->pc = 0x2A0FBCu;
    SET_GPR_U32(ctx, 31, 0x2A0FC4u);
    ctx->pc = 0x2A0FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0FBCu;
            // 0x2a0fc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF30u;
    if (runtime->hasFunction(0x29FF30u)) {
        auto targetFn = runtime->lookupFunction(0x29FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FC4u; }
        if (ctx->pc != 0x2A0FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF30_0x29ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FC4u; }
        if (ctx->pc != 0x2A0FC4u) { return; }
    }
    ctx->pc = 0x2A0FC4u;
label_2a0fc4:
    // 0x2a0fc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0fc8:
    // 0x2a0fc8: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x2a0fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_2a0fcc:
    // 0x2a0fcc: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x2a0fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_2a0fd0:
    // 0x2a0fd0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a0fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a0fd4:
    // 0x2a0fd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a0fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0fd8:
    // 0x2a0fd8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a0fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a0fdc:
    // 0x2a0fdc: 0x2508dbc0  addiu       $t0, $t0, -0x2440
    ctx->pc = 0x2a0fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958016));
label_2a0fe0:
    // 0x2a0fe0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a0fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0fe4:
    // 0x2a0fe4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a0fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a0fe8:
    // 0x2a0fe8: 0x320f809  jalr        $t9
label_2a0fec:
    if (ctx->pc == 0x2A0FECu) {
        ctx->pc = 0x2A0FECu;
            // 0x2a0fec: 0x240900c7  addiu       $t1, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->pc = 0x2A0FF0u;
        goto label_2a0ff0;
    }
    ctx->pc = 0x2A0FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0FF0u);
        ctx->pc = 0x2A0FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0FE8u;
            // 0x2a0fec: 0x240900c7  addiu       $t1, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0FF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FF0u; }
            if (ctx->pc != 0x2A0FF0u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0FF0u;
label_2a0ff0:
    // 0x2a0ff0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a0ff4:
    // 0x2a0ff4: 0x27a40620  addiu       $a0, $sp, 0x620
    ctx->pc = 0x2a0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_2a0ff8:
    // 0x2a0ff8: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x2a0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_2a0ffc:
    // 0x2a0ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1000:
    // 0x2a1000: 0xc0a7f78  jal         func_29FDE0
label_2a1004:
    if (ctx->pc == 0x2A1004u) {
        ctx->pc = 0x2A1004u;
            // 0x2a1004: 0xafa20620  sw          $v0, 0x620($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1568), GPR_U32(ctx, 2));
        ctx->pc = 0x2A1008u;
        goto label_2a1008;
    }
    ctx->pc = 0x2A1000u;
    SET_GPR_U32(ctx, 31, 0x2A1008u);
    ctx->pc = 0x2A1004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1000u;
            // 0x2a1004: 0xafa20620  sw          $v0, 0x620($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1008u; }
        if (ctx->pc != 0x2A1008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1008u; }
        if (ctx->pc != 0x2A1008u) { return; }
    }
    ctx->pc = 0x2A1008u;
label_2a1008:
    // 0x2a1008: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a1008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a100c:
    // 0x2a100c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a1010:
    // 0x2a1010: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x2a1010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_2a1014:
    // 0x2a1014: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a1014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a1018:
    // 0x2a1018: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2a1018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2a101c:
    // 0x2a101c: 0x320f809  jalr        $t9
label_2a1020:
    if (ctx->pc == 0x2A1020u) {
        ctx->pc = 0x2A1020u;
            // 0x2a1020: 0x8c45eab0  lw          $a1, -0x1550($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961840)));
        ctx->pc = 0x2A1024u;
        goto label_2a1024;
    }
    ctx->pc = 0x2A101Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A1024u);
        ctx->pc = 0x2A1020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A101Cu;
            // 0x2a1020: 0x8c45eab0  lw          $a1, -0x1550($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961840)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A1024u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A1024u; }
            if (ctx->pc != 0x2A1024u) { return; }
        }
        }
    }
    ctx->pc = 0x2A1024u;
label_2a1024:
    // 0x2a1024: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a1024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a1028:
    // 0x2a1028: 0xac60eab0  sw          $zero, -0x1550($v1)
    ctx->pc = 0x2a1028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961840), GPR_U32(ctx, 0));
label_2a102c:
    // 0x2a102c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a102cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a1030:
    // 0x2a1030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a1034:
    // 0x2a1034: 0x3e00008  jr          $ra
label_2a1038:
    if (ctx->pc == 0x2A1038u) {
        ctx->pc = 0x2A1038u;
            // 0x2a1038: 0x27bd0650  addiu       $sp, $sp, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
        ctx->pc = 0x2A103Cu;
        goto label_2a103c;
    }
    ctx->pc = 0x2A1034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1034u;
            // 0x2a1038: 0x27bd0650  addiu       $sp, $sp, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A103Cu;
label_2a103c:
    // 0x2a103c: 0x0  nop
    ctx->pc = 0x2a103cu;
    // NOP
}
