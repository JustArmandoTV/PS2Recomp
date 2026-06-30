#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C7A30
// Address: 0x4c7a30 - 0x4c81b0
void sub_004C7A30_0x4c7a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C7A30_0x4c7a30");
#endif

    switch (ctx->pc) {
        case 0x4c7a30u: goto label_4c7a30;
        case 0x4c7a34u: goto label_4c7a34;
        case 0x4c7a38u: goto label_4c7a38;
        case 0x4c7a3cu: goto label_4c7a3c;
        case 0x4c7a40u: goto label_4c7a40;
        case 0x4c7a44u: goto label_4c7a44;
        case 0x4c7a48u: goto label_4c7a48;
        case 0x4c7a4cu: goto label_4c7a4c;
        case 0x4c7a50u: goto label_4c7a50;
        case 0x4c7a54u: goto label_4c7a54;
        case 0x4c7a58u: goto label_4c7a58;
        case 0x4c7a5cu: goto label_4c7a5c;
        case 0x4c7a60u: goto label_4c7a60;
        case 0x4c7a64u: goto label_4c7a64;
        case 0x4c7a68u: goto label_4c7a68;
        case 0x4c7a6cu: goto label_4c7a6c;
        case 0x4c7a70u: goto label_4c7a70;
        case 0x4c7a74u: goto label_4c7a74;
        case 0x4c7a78u: goto label_4c7a78;
        case 0x4c7a7cu: goto label_4c7a7c;
        case 0x4c7a80u: goto label_4c7a80;
        case 0x4c7a84u: goto label_4c7a84;
        case 0x4c7a88u: goto label_4c7a88;
        case 0x4c7a8cu: goto label_4c7a8c;
        case 0x4c7a90u: goto label_4c7a90;
        case 0x4c7a94u: goto label_4c7a94;
        case 0x4c7a98u: goto label_4c7a98;
        case 0x4c7a9cu: goto label_4c7a9c;
        case 0x4c7aa0u: goto label_4c7aa0;
        case 0x4c7aa4u: goto label_4c7aa4;
        case 0x4c7aa8u: goto label_4c7aa8;
        case 0x4c7aacu: goto label_4c7aac;
        case 0x4c7ab0u: goto label_4c7ab0;
        case 0x4c7ab4u: goto label_4c7ab4;
        case 0x4c7ab8u: goto label_4c7ab8;
        case 0x4c7abcu: goto label_4c7abc;
        case 0x4c7ac0u: goto label_4c7ac0;
        case 0x4c7ac4u: goto label_4c7ac4;
        case 0x4c7ac8u: goto label_4c7ac8;
        case 0x4c7accu: goto label_4c7acc;
        case 0x4c7ad0u: goto label_4c7ad0;
        case 0x4c7ad4u: goto label_4c7ad4;
        case 0x4c7ad8u: goto label_4c7ad8;
        case 0x4c7adcu: goto label_4c7adc;
        case 0x4c7ae0u: goto label_4c7ae0;
        case 0x4c7ae4u: goto label_4c7ae4;
        case 0x4c7ae8u: goto label_4c7ae8;
        case 0x4c7aecu: goto label_4c7aec;
        case 0x4c7af0u: goto label_4c7af0;
        case 0x4c7af4u: goto label_4c7af4;
        case 0x4c7af8u: goto label_4c7af8;
        case 0x4c7afcu: goto label_4c7afc;
        case 0x4c7b00u: goto label_4c7b00;
        case 0x4c7b04u: goto label_4c7b04;
        case 0x4c7b08u: goto label_4c7b08;
        case 0x4c7b0cu: goto label_4c7b0c;
        case 0x4c7b10u: goto label_4c7b10;
        case 0x4c7b14u: goto label_4c7b14;
        case 0x4c7b18u: goto label_4c7b18;
        case 0x4c7b1cu: goto label_4c7b1c;
        case 0x4c7b20u: goto label_4c7b20;
        case 0x4c7b24u: goto label_4c7b24;
        case 0x4c7b28u: goto label_4c7b28;
        case 0x4c7b2cu: goto label_4c7b2c;
        case 0x4c7b30u: goto label_4c7b30;
        case 0x4c7b34u: goto label_4c7b34;
        case 0x4c7b38u: goto label_4c7b38;
        case 0x4c7b3cu: goto label_4c7b3c;
        case 0x4c7b40u: goto label_4c7b40;
        case 0x4c7b44u: goto label_4c7b44;
        case 0x4c7b48u: goto label_4c7b48;
        case 0x4c7b4cu: goto label_4c7b4c;
        case 0x4c7b50u: goto label_4c7b50;
        case 0x4c7b54u: goto label_4c7b54;
        case 0x4c7b58u: goto label_4c7b58;
        case 0x4c7b5cu: goto label_4c7b5c;
        case 0x4c7b60u: goto label_4c7b60;
        case 0x4c7b64u: goto label_4c7b64;
        case 0x4c7b68u: goto label_4c7b68;
        case 0x4c7b6cu: goto label_4c7b6c;
        case 0x4c7b70u: goto label_4c7b70;
        case 0x4c7b74u: goto label_4c7b74;
        case 0x4c7b78u: goto label_4c7b78;
        case 0x4c7b7cu: goto label_4c7b7c;
        case 0x4c7b80u: goto label_4c7b80;
        case 0x4c7b84u: goto label_4c7b84;
        case 0x4c7b88u: goto label_4c7b88;
        case 0x4c7b8cu: goto label_4c7b8c;
        case 0x4c7b90u: goto label_4c7b90;
        case 0x4c7b94u: goto label_4c7b94;
        case 0x4c7b98u: goto label_4c7b98;
        case 0x4c7b9cu: goto label_4c7b9c;
        case 0x4c7ba0u: goto label_4c7ba0;
        case 0x4c7ba4u: goto label_4c7ba4;
        case 0x4c7ba8u: goto label_4c7ba8;
        case 0x4c7bacu: goto label_4c7bac;
        case 0x4c7bb0u: goto label_4c7bb0;
        case 0x4c7bb4u: goto label_4c7bb4;
        case 0x4c7bb8u: goto label_4c7bb8;
        case 0x4c7bbcu: goto label_4c7bbc;
        case 0x4c7bc0u: goto label_4c7bc0;
        case 0x4c7bc4u: goto label_4c7bc4;
        case 0x4c7bc8u: goto label_4c7bc8;
        case 0x4c7bccu: goto label_4c7bcc;
        case 0x4c7bd0u: goto label_4c7bd0;
        case 0x4c7bd4u: goto label_4c7bd4;
        case 0x4c7bd8u: goto label_4c7bd8;
        case 0x4c7bdcu: goto label_4c7bdc;
        case 0x4c7be0u: goto label_4c7be0;
        case 0x4c7be4u: goto label_4c7be4;
        case 0x4c7be8u: goto label_4c7be8;
        case 0x4c7becu: goto label_4c7bec;
        case 0x4c7bf0u: goto label_4c7bf0;
        case 0x4c7bf4u: goto label_4c7bf4;
        case 0x4c7bf8u: goto label_4c7bf8;
        case 0x4c7bfcu: goto label_4c7bfc;
        case 0x4c7c00u: goto label_4c7c00;
        case 0x4c7c04u: goto label_4c7c04;
        case 0x4c7c08u: goto label_4c7c08;
        case 0x4c7c0cu: goto label_4c7c0c;
        case 0x4c7c10u: goto label_4c7c10;
        case 0x4c7c14u: goto label_4c7c14;
        case 0x4c7c18u: goto label_4c7c18;
        case 0x4c7c1cu: goto label_4c7c1c;
        case 0x4c7c20u: goto label_4c7c20;
        case 0x4c7c24u: goto label_4c7c24;
        case 0x4c7c28u: goto label_4c7c28;
        case 0x4c7c2cu: goto label_4c7c2c;
        case 0x4c7c30u: goto label_4c7c30;
        case 0x4c7c34u: goto label_4c7c34;
        case 0x4c7c38u: goto label_4c7c38;
        case 0x4c7c3cu: goto label_4c7c3c;
        case 0x4c7c40u: goto label_4c7c40;
        case 0x4c7c44u: goto label_4c7c44;
        case 0x4c7c48u: goto label_4c7c48;
        case 0x4c7c4cu: goto label_4c7c4c;
        case 0x4c7c50u: goto label_4c7c50;
        case 0x4c7c54u: goto label_4c7c54;
        case 0x4c7c58u: goto label_4c7c58;
        case 0x4c7c5cu: goto label_4c7c5c;
        case 0x4c7c60u: goto label_4c7c60;
        case 0x4c7c64u: goto label_4c7c64;
        case 0x4c7c68u: goto label_4c7c68;
        case 0x4c7c6cu: goto label_4c7c6c;
        case 0x4c7c70u: goto label_4c7c70;
        case 0x4c7c74u: goto label_4c7c74;
        case 0x4c7c78u: goto label_4c7c78;
        case 0x4c7c7cu: goto label_4c7c7c;
        case 0x4c7c80u: goto label_4c7c80;
        case 0x4c7c84u: goto label_4c7c84;
        case 0x4c7c88u: goto label_4c7c88;
        case 0x4c7c8cu: goto label_4c7c8c;
        case 0x4c7c90u: goto label_4c7c90;
        case 0x4c7c94u: goto label_4c7c94;
        case 0x4c7c98u: goto label_4c7c98;
        case 0x4c7c9cu: goto label_4c7c9c;
        case 0x4c7ca0u: goto label_4c7ca0;
        case 0x4c7ca4u: goto label_4c7ca4;
        case 0x4c7ca8u: goto label_4c7ca8;
        case 0x4c7cacu: goto label_4c7cac;
        case 0x4c7cb0u: goto label_4c7cb0;
        case 0x4c7cb4u: goto label_4c7cb4;
        case 0x4c7cb8u: goto label_4c7cb8;
        case 0x4c7cbcu: goto label_4c7cbc;
        case 0x4c7cc0u: goto label_4c7cc0;
        case 0x4c7cc4u: goto label_4c7cc4;
        case 0x4c7cc8u: goto label_4c7cc8;
        case 0x4c7cccu: goto label_4c7ccc;
        case 0x4c7cd0u: goto label_4c7cd0;
        case 0x4c7cd4u: goto label_4c7cd4;
        case 0x4c7cd8u: goto label_4c7cd8;
        case 0x4c7cdcu: goto label_4c7cdc;
        case 0x4c7ce0u: goto label_4c7ce0;
        case 0x4c7ce4u: goto label_4c7ce4;
        case 0x4c7ce8u: goto label_4c7ce8;
        case 0x4c7cecu: goto label_4c7cec;
        case 0x4c7cf0u: goto label_4c7cf0;
        case 0x4c7cf4u: goto label_4c7cf4;
        case 0x4c7cf8u: goto label_4c7cf8;
        case 0x4c7cfcu: goto label_4c7cfc;
        case 0x4c7d00u: goto label_4c7d00;
        case 0x4c7d04u: goto label_4c7d04;
        case 0x4c7d08u: goto label_4c7d08;
        case 0x4c7d0cu: goto label_4c7d0c;
        case 0x4c7d10u: goto label_4c7d10;
        case 0x4c7d14u: goto label_4c7d14;
        case 0x4c7d18u: goto label_4c7d18;
        case 0x4c7d1cu: goto label_4c7d1c;
        case 0x4c7d20u: goto label_4c7d20;
        case 0x4c7d24u: goto label_4c7d24;
        case 0x4c7d28u: goto label_4c7d28;
        case 0x4c7d2cu: goto label_4c7d2c;
        case 0x4c7d30u: goto label_4c7d30;
        case 0x4c7d34u: goto label_4c7d34;
        case 0x4c7d38u: goto label_4c7d38;
        case 0x4c7d3cu: goto label_4c7d3c;
        case 0x4c7d40u: goto label_4c7d40;
        case 0x4c7d44u: goto label_4c7d44;
        case 0x4c7d48u: goto label_4c7d48;
        case 0x4c7d4cu: goto label_4c7d4c;
        case 0x4c7d50u: goto label_4c7d50;
        case 0x4c7d54u: goto label_4c7d54;
        case 0x4c7d58u: goto label_4c7d58;
        case 0x4c7d5cu: goto label_4c7d5c;
        case 0x4c7d60u: goto label_4c7d60;
        case 0x4c7d64u: goto label_4c7d64;
        case 0x4c7d68u: goto label_4c7d68;
        case 0x4c7d6cu: goto label_4c7d6c;
        case 0x4c7d70u: goto label_4c7d70;
        case 0x4c7d74u: goto label_4c7d74;
        case 0x4c7d78u: goto label_4c7d78;
        case 0x4c7d7cu: goto label_4c7d7c;
        case 0x4c7d80u: goto label_4c7d80;
        case 0x4c7d84u: goto label_4c7d84;
        case 0x4c7d88u: goto label_4c7d88;
        case 0x4c7d8cu: goto label_4c7d8c;
        case 0x4c7d90u: goto label_4c7d90;
        case 0x4c7d94u: goto label_4c7d94;
        case 0x4c7d98u: goto label_4c7d98;
        case 0x4c7d9cu: goto label_4c7d9c;
        case 0x4c7da0u: goto label_4c7da0;
        case 0x4c7da4u: goto label_4c7da4;
        case 0x4c7da8u: goto label_4c7da8;
        case 0x4c7dacu: goto label_4c7dac;
        case 0x4c7db0u: goto label_4c7db0;
        case 0x4c7db4u: goto label_4c7db4;
        case 0x4c7db8u: goto label_4c7db8;
        case 0x4c7dbcu: goto label_4c7dbc;
        case 0x4c7dc0u: goto label_4c7dc0;
        case 0x4c7dc4u: goto label_4c7dc4;
        case 0x4c7dc8u: goto label_4c7dc8;
        case 0x4c7dccu: goto label_4c7dcc;
        case 0x4c7dd0u: goto label_4c7dd0;
        case 0x4c7dd4u: goto label_4c7dd4;
        case 0x4c7dd8u: goto label_4c7dd8;
        case 0x4c7ddcu: goto label_4c7ddc;
        case 0x4c7de0u: goto label_4c7de0;
        case 0x4c7de4u: goto label_4c7de4;
        case 0x4c7de8u: goto label_4c7de8;
        case 0x4c7decu: goto label_4c7dec;
        case 0x4c7df0u: goto label_4c7df0;
        case 0x4c7df4u: goto label_4c7df4;
        case 0x4c7df8u: goto label_4c7df8;
        case 0x4c7dfcu: goto label_4c7dfc;
        case 0x4c7e00u: goto label_4c7e00;
        case 0x4c7e04u: goto label_4c7e04;
        case 0x4c7e08u: goto label_4c7e08;
        case 0x4c7e0cu: goto label_4c7e0c;
        case 0x4c7e10u: goto label_4c7e10;
        case 0x4c7e14u: goto label_4c7e14;
        case 0x4c7e18u: goto label_4c7e18;
        case 0x4c7e1cu: goto label_4c7e1c;
        case 0x4c7e20u: goto label_4c7e20;
        case 0x4c7e24u: goto label_4c7e24;
        case 0x4c7e28u: goto label_4c7e28;
        case 0x4c7e2cu: goto label_4c7e2c;
        case 0x4c7e30u: goto label_4c7e30;
        case 0x4c7e34u: goto label_4c7e34;
        case 0x4c7e38u: goto label_4c7e38;
        case 0x4c7e3cu: goto label_4c7e3c;
        case 0x4c7e40u: goto label_4c7e40;
        case 0x4c7e44u: goto label_4c7e44;
        case 0x4c7e48u: goto label_4c7e48;
        case 0x4c7e4cu: goto label_4c7e4c;
        case 0x4c7e50u: goto label_4c7e50;
        case 0x4c7e54u: goto label_4c7e54;
        case 0x4c7e58u: goto label_4c7e58;
        case 0x4c7e5cu: goto label_4c7e5c;
        case 0x4c7e60u: goto label_4c7e60;
        case 0x4c7e64u: goto label_4c7e64;
        case 0x4c7e68u: goto label_4c7e68;
        case 0x4c7e6cu: goto label_4c7e6c;
        case 0x4c7e70u: goto label_4c7e70;
        case 0x4c7e74u: goto label_4c7e74;
        case 0x4c7e78u: goto label_4c7e78;
        case 0x4c7e7cu: goto label_4c7e7c;
        case 0x4c7e80u: goto label_4c7e80;
        case 0x4c7e84u: goto label_4c7e84;
        case 0x4c7e88u: goto label_4c7e88;
        case 0x4c7e8cu: goto label_4c7e8c;
        case 0x4c7e90u: goto label_4c7e90;
        case 0x4c7e94u: goto label_4c7e94;
        case 0x4c7e98u: goto label_4c7e98;
        case 0x4c7e9cu: goto label_4c7e9c;
        case 0x4c7ea0u: goto label_4c7ea0;
        case 0x4c7ea4u: goto label_4c7ea4;
        case 0x4c7ea8u: goto label_4c7ea8;
        case 0x4c7eacu: goto label_4c7eac;
        case 0x4c7eb0u: goto label_4c7eb0;
        case 0x4c7eb4u: goto label_4c7eb4;
        case 0x4c7eb8u: goto label_4c7eb8;
        case 0x4c7ebcu: goto label_4c7ebc;
        case 0x4c7ec0u: goto label_4c7ec0;
        case 0x4c7ec4u: goto label_4c7ec4;
        case 0x4c7ec8u: goto label_4c7ec8;
        case 0x4c7eccu: goto label_4c7ecc;
        case 0x4c7ed0u: goto label_4c7ed0;
        case 0x4c7ed4u: goto label_4c7ed4;
        case 0x4c7ed8u: goto label_4c7ed8;
        case 0x4c7edcu: goto label_4c7edc;
        case 0x4c7ee0u: goto label_4c7ee0;
        case 0x4c7ee4u: goto label_4c7ee4;
        case 0x4c7ee8u: goto label_4c7ee8;
        case 0x4c7eecu: goto label_4c7eec;
        case 0x4c7ef0u: goto label_4c7ef0;
        case 0x4c7ef4u: goto label_4c7ef4;
        case 0x4c7ef8u: goto label_4c7ef8;
        case 0x4c7efcu: goto label_4c7efc;
        case 0x4c7f00u: goto label_4c7f00;
        case 0x4c7f04u: goto label_4c7f04;
        case 0x4c7f08u: goto label_4c7f08;
        case 0x4c7f0cu: goto label_4c7f0c;
        case 0x4c7f10u: goto label_4c7f10;
        case 0x4c7f14u: goto label_4c7f14;
        case 0x4c7f18u: goto label_4c7f18;
        case 0x4c7f1cu: goto label_4c7f1c;
        case 0x4c7f20u: goto label_4c7f20;
        case 0x4c7f24u: goto label_4c7f24;
        case 0x4c7f28u: goto label_4c7f28;
        case 0x4c7f2cu: goto label_4c7f2c;
        case 0x4c7f30u: goto label_4c7f30;
        case 0x4c7f34u: goto label_4c7f34;
        case 0x4c7f38u: goto label_4c7f38;
        case 0x4c7f3cu: goto label_4c7f3c;
        case 0x4c7f40u: goto label_4c7f40;
        case 0x4c7f44u: goto label_4c7f44;
        case 0x4c7f48u: goto label_4c7f48;
        case 0x4c7f4cu: goto label_4c7f4c;
        case 0x4c7f50u: goto label_4c7f50;
        case 0x4c7f54u: goto label_4c7f54;
        case 0x4c7f58u: goto label_4c7f58;
        case 0x4c7f5cu: goto label_4c7f5c;
        case 0x4c7f60u: goto label_4c7f60;
        case 0x4c7f64u: goto label_4c7f64;
        case 0x4c7f68u: goto label_4c7f68;
        case 0x4c7f6cu: goto label_4c7f6c;
        case 0x4c7f70u: goto label_4c7f70;
        case 0x4c7f74u: goto label_4c7f74;
        case 0x4c7f78u: goto label_4c7f78;
        case 0x4c7f7cu: goto label_4c7f7c;
        case 0x4c7f80u: goto label_4c7f80;
        case 0x4c7f84u: goto label_4c7f84;
        case 0x4c7f88u: goto label_4c7f88;
        case 0x4c7f8cu: goto label_4c7f8c;
        case 0x4c7f90u: goto label_4c7f90;
        case 0x4c7f94u: goto label_4c7f94;
        case 0x4c7f98u: goto label_4c7f98;
        case 0x4c7f9cu: goto label_4c7f9c;
        case 0x4c7fa0u: goto label_4c7fa0;
        case 0x4c7fa4u: goto label_4c7fa4;
        case 0x4c7fa8u: goto label_4c7fa8;
        case 0x4c7facu: goto label_4c7fac;
        case 0x4c7fb0u: goto label_4c7fb0;
        case 0x4c7fb4u: goto label_4c7fb4;
        case 0x4c7fb8u: goto label_4c7fb8;
        case 0x4c7fbcu: goto label_4c7fbc;
        case 0x4c7fc0u: goto label_4c7fc0;
        case 0x4c7fc4u: goto label_4c7fc4;
        case 0x4c7fc8u: goto label_4c7fc8;
        case 0x4c7fccu: goto label_4c7fcc;
        case 0x4c7fd0u: goto label_4c7fd0;
        case 0x4c7fd4u: goto label_4c7fd4;
        case 0x4c7fd8u: goto label_4c7fd8;
        case 0x4c7fdcu: goto label_4c7fdc;
        case 0x4c7fe0u: goto label_4c7fe0;
        case 0x4c7fe4u: goto label_4c7fe4;
        case 0x4c7fe8u: goto label_4c7fe8;
        case 0x4c7fecu: goto label_4c7fec;
        case 0x4c7ff0u: goto label_4c7ff0;
        case 0x4c7ff4u: goto label_4c7ff4;
        case 0x4c7ff8u: goto label_4c7ff8;
        case 0x4c7ffcu: goto label_4c7ffc;
        case 0x4c8000u: goto label_4c8000;
        case 0x4c8004u: goto label_4c8004;
        case 0x4c8008u: goto label_4c8008;
        case 0x4c800cu: goto label_4c800c;
        case 0x4c8010u: goto label_4c8010;
        case 0x4c8014u: goto label_4c8014;
        case 0x4c8018u: goto label_4c8018;
        case 0x4c801cu: goto label_4c801c;
        case 0x4c8020u: goto label_4c8020;
        case 0x4c8024u: goto label_4c8024;
        case 0x4c8028u: goto label_4c8028;
        case 0x4c802cu: goto label_4c802c;
        case 0x4c8030u: goto label_4c8030;
        case 0x4c8034u: goto label_4c8034;
        case 0x4c8038u: goto label_4c8038;
        case 0x4c803cu: goto label_4c803c;
        case 0x4c8040u: goto label_4c8040;
        case 0x4c8044u: goto label_4c8044;
        case 0x4c8048u: goto label_4c8048;
        case 0x4c804cu: goto label_4c804c;
        case 0x4c8050u: goto label_4c8050;
        case 0x4c8054u: goto label_4c8054;
        case 0x4c8058u: goto label_4c8058;
        case 0x4c805cu: goto label_4c805c;
        case 0x4c8060u: goto label_4c8060;
        case 0x4c8064u: goto label_4c8064;
        case 0x4c8068u: goto label_4c8068;
        case 0x4c806cu: goto label_4c806c;
        case 0x4c8070u: goto label_4c8070;
        case 0x4c8074u: goto label_4c8074;
        case 0x4c8078u: goto label_4c8078;
        case 0x4c807cu: goto label_4c807c;
        case 0x4c8080u: goto label_4c8080;
        case 0x4c8084u: goto label_4c8084;
        case 0x4c8088u: goto label_4c8088;
        case 0x4c808cu: goto label_4c808c;
        case 0x4c8090u: goto label_4c8090;
        case 0x4c8094u: goto label_4c8094;
        case 0x4c8098u: goto label_4c8098;
        case 0x4c809cu: goto label_4c809c;
        case 0x4c80a0u: goto label_4c80a0;
        case 0x4c80a4u: goto label_4c80a4;
        case 0x4c80a8u: goto label_4c80a8;
        case 0x4c80acu: goto label_4c80ac;
        case 0x4c80b0u: goto label_4c80b0;
        case 0x4c80b4u: goto label_4c80b4;
        case 0x4c80b8u: goto label_4c80b8;
        case 0x4c80bcu: goto label_4c80bc;
        case 0x4c80c0u: goto label_4c80c0;
        case 0x4c80c4u: goto label_4c80c4;
        case 0x4c80c8u: goto label_4c80c8;
        case 0x4c80ccu: goto label_4c80cc;
        case 0x4c80d0u: goto label_4c80d0;
        case 0x4c80d4u: goto label_4c80d4;
        case 0x4c80d8u: goto label_4c80d8;
        case 0x4c80dcu: goto label_4c80dc;
        case 0x4c80e0u: goto label_4c80e0;
        case 0x4c80e4u: goto label_4c80e4;
        case 0x4c80e8u: goto label_4c80e8;
        case 0x4c80ecu: goto label_4c80ec;
        case 0x4c80f0u: goto label_4c80f0;
        case 0x4c80f4u: goto label_4c80f4;
        case 0x4c80f8u: goto label_4c80f8;
        case 0x4c80fcu: goto label_4c80fc;
        case 0x4c8100u: goto label_4c8100;
        case 0x4c8104u: goto label_4c8104;
        case 0x4c8108u: goto label_4c8108;
        case 0x4c810cu: goto label_4c810c;
        case 0x4c8110u: goto label_4c8110;
        case 0x4c8114u: goto label_4c8114;
        case 0x4c8118u: goto label_4c8118;
        case 0x4c811cu: goto label_4c811c;
        case 0x4c8120u: goto label_4c8120;
        case 0x4c8124u: goto label_4c8124;
        case 0x4c8128u: goto label_4c8128;
        case 0x4c812cu: goto label_4c812c;
        case 0x4c8130u: goto label_4c8130;
        case 0x4c8134u: goto label_4c8134;
        case 0x4c8138u: goto label_4c8138;
        case 0x4c813cu: goto label_4c813c;
        case 0x4c8140u: goto label_4c8140;
        case 0x4c8144u: goto label_4c8144;
        case 0x4c8148u: goto label_4c8148;
        case 0x4c814cu: goto label_4c814c;
        case 0x4c8150u: goto label_4c8150;
        case 0x4c8154u: goto label_4c8154;
        case 0x4c8158u: goto label_4c8158;
        case 0x4c815cu: goto label_4c815c;
        case 0x4c8160u: goto label_4c8160;
        case 0x4c8164u: goto label_4c8164;
        case 0x4c8168u: goto label_4c8168;
        case 0x4c816cu: goto label_4c816c;
        case 0x4c8170u: goto label_4c8170;
        case 0x4c8174u: goto label_4c8174;
        case 0x4c8178u: goto label_4c8178;
        case 0x4c817cu: goto label_4c817c;
        case 0x4c8180u: goto label_4c8180;
        case 0x4c8184u: goto label_4c8184;
        case 0x4c8188u: goto label_4c8188;
        case 0x4c818cu: goto label_4c818c;
        case 0x4c8190u: goto label_4c8190;
        case 0x4c8194u: goto label_4c8194;
        case 0x4c8198u: goto label_4c8198;
        case 0x4c819cu: goto label_4c819c;
        case 0x4c81a0u: goto label_4c81a0;
        case 0x4c81a4u: goto label_4c81a4;
        case 0x4c81a8u: goto label_4c81a8;
        case 0x4c81acu: goto label_4c81ac;
        default: break;
    }

    ctx->pc = 0x4c7a30u;

label_4c7a30:
    // 0x4c7a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c7a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c7a34:
    // 0x4c7a34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c7a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c7a38:
    // 0x4c7a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c7a3c:
    // 0x4c7a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c7a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c7a40:
    // 0x4c7a40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c7a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c7a44:
    // 0x4c7a44: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4c7a48:
    if (ctx->pc == 0x4C7A48u) {
        ctx->pc = 0x4C7A48u;
            // 0x4c7a48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7A4Cu;
        goto label_4c7a4c;
    }
    ctx->pc = 0x4C7A44u;
    {
        const bool branch_taken_0x4c7a44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7A44u;
            // 0x4c7a48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7a44) {
            ctx->pc = 0x4C7B78u;
            goto label_4c7b78;
        }
    }
    ctx->pc = 0x4C7A4Cu;
label_4c7a4c:
    // 0x4c7a4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c7a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c7a50:
    // 0x4c7a50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c7a54:
    // 0x4c7a54: 0x24631940  addiu       $v1, $v1, 0x1940
    ctx->pc = 0x4c7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6464));
label_4c7a58:
    // 0x4c7a58: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4c7a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_4c7a5c:
    // 0x4c7a5c: 0x24421978  addiu       $v0, $v0, 0x1978
    ctx->pc = 0x4c7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6520));
label_4c7a60:
    // 0x4c7a60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c7a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4c7a64:
    // 0x4c7a64: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4c7a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4c7a68:
    // 0x4c7a68: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4c7a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4c7a6c:
    // 0x4c7a6c: 0xc0407c0  jal         func_101F00
label_4c7a70:
    if (ctx->pc == 0x4C7A70u) {
        ctx->pc = 0x4C7A70u;
            // 0x4c7a70: 0x24a57b90  addiu       $a1, $a1, 0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31632));
        ctx->pc = 0x4C7A74u;
        goto label_4c7a74;
    }
    ctx->pc = 0x4C7A6Cu;
    SET_GPR_U32(ctx, 31, 0x4C7A74u);
    ctx->pc = 0x4C7A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7A6Cu;
            // 0x4c7a70: 0x24a57b90  addiu       $a1, $a1, 0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7A74u; }
        if (ctx->pc != 0x4C7A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7A74u; }
        if (ctx->pc != 0x4C7A74u) { return; }
    }
    ctx->pc = 0x4C7A74u;
label_4c7a74:
    // 0x4c7a74: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4c7a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4c7a78:
    // 0x4c7a78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4c7a7c:
    if (ctx->pc == 0x4C7A7Cu) {
        ctx->pc = 0x4C7A7Cu;
            // 0x4c7a7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4C7A80u;
        goto label_4c7a80;
    }
    ctx->pc = 0x4C7A78u;
    {
        const bool branch_taken_0x4c7a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7a78) {
            ctx->pc = 0x4C7A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7A78u;
            // 0x4c7a7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7A8Cu;
            goto label_4c7a8c;
        }
    }
    ctx->pc = 0x4C7A80u;
label_4c7a80:
    // 0x4c7a80: 0xc07507c  jal         func_1D41F0
label_4c7a84:
    if (ctx->pc == 0x4C7A84u) {
        ctx->pc = 0x4C7A84u;
            // 0x4c7a84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4C7A88u;
        goto label_4c7a88;
    }
    ctx->pc = 0x4C7A80u;
    SET_GPR_U32(ctx, 31, 0x4C7A88u);
    ctx->pc = 0x4C7A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7A80u;
            // 0x4c7a84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7A88u; }
        if (ctx->pc != 0x4C7A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7A88u; }
        if (ctx->pc != 0x4C7A88u) { return; }
    }
    ctx->pc = 0x4C7A88u;
label_4c7a88:
    // 0x4c7a88: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4c7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4c7a8c:
    // 0x4c7a8c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4c7a90:
    if (ctx->pc == 0x4C7A90u) {
        ctx->pc = 0x4C7A90u;
            // 0x4c7a90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4C7A94u;
        goto label_4c7a94;
    }
    ctx->pc = 0x4C7A8Cu;
    {
        const bool branch_taken_0x4c7a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7a8c) {
            ctx->pc = 0x4C7A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7A8Cu;
            // 0x4c7a90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7ABCu;
            goto label_4c7abc;
        }
    }
    ctx->pc = 0x4C7A94u;
label_4c7a94:
    // 0x4c7a94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c7a98:
    if (ctx->pc == 0x4C7A98u) {
        ctx->pc = 0x4C7A9Cu;
        goto label_4c7a9c;
    }
    ctx->pc = 0x4C7A94u;
    {
        const bool branch_taken_0x4c7a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7a94) {
            ctx->pc = 0x4C7AB8u;
            goto label_4c7ab8;
        }
    }
    ctx->pc = 0x4C7A9Cu;
label_4c7a9c:
    // 0x4c7a9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c7aa0:
    if (ctx->pc == 0x4C7AA0u) {
        ctx->pc = 0x4C7AA4u;
        goto label_4c7aa4;
    }
    ctx->pc = 0x4C7A9Cu;
    {
        const bool branch_taken_0x4c7a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7a9c) {
            ctx->pc = 0x4C7AB8u;
            goto label_4c7ab8;
        }
    }
    ctx->pc = 0x4C7AA4u;
label_4c7aa4:
    // 0x4c7aa4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4c7aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4c7aa8:
    // 0x4c7aa8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4c7aac:
    if (ctx->pc == 0x4C7AACu) {
        ctx->pc = 0x4C7AB0u;
        goto label_4c7ab0;
    }
    ctx->pc = 0x4C7AA8u;
    {
        const bool branch_taken_0x4c7aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7aa8) {
            ctx->pc = 0x4C7AB8u;
            goto label_4c7ab8;
        }
    }
    ctx->pc = 0x4C7AB0u;
label_4c7ab0:
    // 0x4c7ab0: 0xc0400a8  jal         func_1002A0
label_4c7ab4:
    if (ctx->pc == 0x4C7AB4u) {
        ctx->pc = 0x4C7AB8u;
        goto label_4c7ab8;
    }
    ctx->pc = 0x4C7AB0u;
    SET_GPR_U32(ctx, 31, 0x4C7AB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7AB8u; }
        if (ctx->pc != 0x4C7AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7AB8u; }
        if (ctx->pc != 0x4C7AB8u) { return; }
    }
    ctx->pc = 0x4C7AB8u;
label_4c7ab8:
    // 0x4c7ab8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4c7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4c7abc:
    // 0x4c7abc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4c7ac0:
    if (ctx->pc == 0x4C7AC0u) {
        ctx->pc = 0x4C7AC0u;
            // 0x4c7ac0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4C7AC4u;
        goto label_4c7ac4;
    }
    ctx->pc = 0x4C7ABCu;
    {
        const bool branch_taken_0x4c7abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7abc) {
            ctx->pc = 0x4C7AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7ABCu;
            // 0x4c7ac0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7AECu;
            goto label_4c7aec;
        }
    }
    ctx->pc = 0x4C7AC4u;
label_4c7ac4:
    // 0x4c7ac4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c7ac8:
    if (ctx->pc == 0x4C7AC8u) {
        ctx->pc = 0x4C7ACCu;
        goto label_4c7acc;
    }
    ctx->pc = 0x4C7AC4u;
    {
        const bool branch_taken_0x4c7ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7ac4) {
            ctx->pc = 0x4C7AE8u;
            goto label_4c7ae8;
        }
    }
    ctx->pc = 0x4C7ACCu;
label_4c7acc:
    // 0x4c7acc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c7ad0:
    if (ctx->pc == 0x4C7AD0u) {
        ctx->pc = 0x4C7AD4u;
        goto label_4c7ad4;
    }
    ctx->pc = 0x4C7ACCu;
    {
        const bool branch_taken_0x4c7acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7acc) {
            ctx->pc = 0x4C7AE8u;
            goto label_4c7ae8;
        }
    }
    ctx->pc = 0x4C7AD4u;
label_4c7ad4:
    // 0x4c7ad4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4c7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4c7ad8:
    // 0x4c7ad8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4c7adc:
    if (ctx->pc == 0x4C7ADCu) {
        ctx->pc = 0x4C7AE0u;
        goto label_4c7ae0;
    }
    ctx->pc = 0x4C7AD8u;
    {
        const bool branch_taken_0x4c7ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7ad8) {
            ctx->pc = 0x4C7AE8u;
            goto label_4c7ae8;
        }
    }
    ctx->pc = 0x4C7AE0u;
label_4c7ae0:
    // 0x4c7ae0: 0xc0400a8  jal         func_1002A0
label_4c7ae4:
    if (ctx->pc == 0x4C7AE4u) {
        ctx->pc = 0x4C7AE8u;
        goto label_4c7ae8;
    }
    ctx->pc = 0x4C7AE0u;
    SET_GPR_U32(ctx, 31, 0x4C7AE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7AE8u; }
        if (ctx->pc != 0x4C7AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7AE8u; }
        if (ctx->pc != 0x4C7AE8u) { return; }
    }
    ctx->pc = 0x4C7AE8u;
label_4c7ae8:
    // 0x4c7ae8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4c7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4c7aec:
    // 0x4c7aec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c7af0:
    if (ctx->pc == 0x4C7AF0u) {
        ctx->pc = 0x4C7AF4u;
        goto label_4c7af4;
    }
    ctx->pc = 0x4C7AECu;
    {
        const bool branch_taken_0x4c7aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7aec) {
            ctx->pc = 0x4C7B08u;
            goto label_4c7b08;
        }
    }
    ctx->pc = 0x4C7AF4u;
label_4c7af4:
    // 0x4c7af4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c7af8:
    // 0x4c7af8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c7afc:
    // 0x4c7afc: 0x24631930  addiu       $v1, $v1, 0x1930
    ctx->pc = 0x4c7afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6448));
label_4c7b00:
    // 0x4c7b00: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4c7b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4c7b04:
    // 0x4c7b04: 0xac40aa08  sw          $zero, -0x55F8($v0)
    ctx->pc = 0x4c7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945288), GPR_U32(ctx, 0));
label_4c7b08:
    // 0x4c7b08: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4c7b0c:
    if (ctx->pc == 0x4C7B0Cu) {
        ctx->pc = 0x4C7B0Cu;
            // 0x4c7b0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4C7B10u;
        goto label_4c7b10;
    }
    ctx->pc = 0x4C7B08u;
    {
        const bool branch_taken_0x4c7b08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7b08) {
            ctx->pc = 0x4C7B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7B08u;
            // 0x4c7b0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7B64u;
            goto label_4c7b64;
        }
    }
    ctx->pc = 0x4C7B10u;
label_4c7b10:
    // 0x4c7b10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c7b14:
    // 0x4c7b14: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4c7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4c7b18:
    // 0x4c7b18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c7b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c7b1c:
    // 0x4c7b1c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4c7b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4c7b20:
    // 0x4c7b20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c7b24:
    if (ctx->pc == 0x4C7B24u) {
        ctx->pc = 0x4C7B24u;
            // 0x4c7b24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4C7B28u;
        goto label_4c7b28;
    }
    ctx->pc = 0x4C7B20u;
    {
        const bool branch_taken_0x4c7b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7b20) {
            ctx->pc = 0x4C7B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7B20u;
            // 0x4c7b24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7B3Cu;
            goto label_4c7b3c;
        }
    }
    ctx->pc = 0x4C7B28u;
label_4c7b28:
    // 0x4c7b28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c7b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c7b2c:
    // 0x4c7b2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c7b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c7b30:
    // 0x4c7b30: 0x320f809  jalr        $t9
label_4c7b34:
    if (ctx->pc == 0x4C7B34u) {
        ctx->pc = 0x4C7B34u;
            // 0x4c7b34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C7B38u;
        goto label_4c7b38;
    }
    ctx->pc = 0x4C7B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C7B38u);
        ctx->pc = 0x4C7B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7B30u;
            // 0x4c7b34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C7B38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C7B38u; }
            if (ctx->pc != 0x4C7B38u) { return; }
        }
        }
    }
    ctx->pc = 0x4C7B38u;
label_4c7b38:
    // 0x4c7b38: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4c7b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4c7b3c:
    // 0x4c7b3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c7b40:
    if (ctx->pc == 0x4C7B40u) {
        ctx->pc = 0x4C7B40u;
            // 0x4c7b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7B44u;
        goto label_4c7b44;
    }
    ctx->pc = 0x4C7B3Cu;
    {
        const bool branch_taken_0x4c7b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7b3c) {
            ctx->pc = 0x4C7B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7B3Cu;
            // 0x4c7b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7B58u;
            goto label_4c7b58;
        }
    }
    ctx->pc = 0x4C7B44u;
label_4c7b44:
    // 0x4c7b44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c7b44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c7b48:
    // 0x4c7b48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c7b48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c7b4c:
    // 0x4c7b4c: 0x320f809  jalr        $t9
label_4c7b50:
    if (ctx->pc == 0x4C7B50u) {
        ctx->pc = 0x4C7B50u;
            // 0x4c7b50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C7B54u;
        goto label_4c7b54;
    }
    ctx->pc = 0x4C7B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C7B54u);
        ctx->pc = 0x4C7B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7B4Cu;
            // 0x4c7b50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C7B54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C7B54u; }
            if (ctx->pc != 0x4C7B54u) { return; }
        }
        }
    }
    ctx->pc = 0x4C7B54u;
label_4c7b54:
    // 0x4c7b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c7b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c7b58:
    // 0x4c7b58: 0xc075bf8  jal         func_1D6FE0
label_4c7b5c:
    if (ctx->pc == 0x4C7B5Cu) {
        ctx->pc = 0x4C7B5Cu;
            // 0x4c7b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7B60u;
        goto label_4c7b60;
    }
    ctx->pc = 0x4C7B58u;
    SET_GPR_U32(ctx, 31, 0x4C7B60u);
    ctx->pc = 0x4C7B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7B58u;
            // 0x4c7b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7B60u; }
        if (ctx->pc != 0x4C7B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7B60u; }
        if (ctx->pc != 0x4C7B60u) { return; }
    }
    ctx->pc = 0x4C7B60u;
label_4c7b60:
    // 0x4c7b60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4c7b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4c7b64:
    // 0x4c7b64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c7b64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c7b68:
    // 0x4c7b68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c7b6c:
    if (ctx->pc == 0x4C7B6Cu) {
        ctx->pc = 0x4C7B6Cu;
            // 0x4c7b6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7B70u;
        goto label_4c7b70;
    }
    ctx->pc = 0x4C7B68u;
    {
        const bool branch_taken_0x4c7b68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c7b68) {
            ctx->pc = 0x4C7B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7B68u;
            // 0x4c7b6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7B7Cu;
            goto label_4c7b7c;
        }
    }
    ctx->pc = 0x4C7B70u;
label_4c7b70:
    // 0x4c7b70: 0xc0400a8  jal         func_1002A0
label_4c7b74:
    if (ctx->pc == 0x4C7B74u) {
        ctx->pc = 0x4C7B74u;
            // 0x4c7b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7B78u;
        goto label_4c7b78;
    }
    ctx->pc = 0x4C7B70u;
    SET_GPR_U32(ctx, 31, 0x4C7B78u);
    ctx->pc = 0x4C7B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7B70u;
            // 0x4c7b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7B78u; }
        if (ctx->pc != 0x4C7B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7B78u; }
        if (ctx->pc != 0x4C7B78u) { return; }
    }
    ctx->pc = 0x4C7B78u;
label_4c7b78:
    // 0x4c7b78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c7b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c7b7c:
    // 0x4c7b7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c7b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c7b80:
    // 0x4c7b80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c7b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c7b84:
    // 0x4c7b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c7b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c7b88:
    // 0x4c7b88: 0x3e00008  jr          $ra
label_4c7b8c:
    if (ctx->pc == 0x4C7B8Cu) {
        ctx->pc = 0x4C7B8Cu;
            // 0x4c7b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C7B90u;
        goto label_4c7b90;
    }
    ctx->pc = 0x4C7B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7B88u;
            // 0x4c7b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C7B90u;
label_4c7b90:
    // 0x4c7b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c7b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c7b94:
    // 0x4c7b94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c7b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c7b98:
    // 0x4c7b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c7b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c7b9c:
    // 0x4c7b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c7b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c7ba0:
    // 0x4c7ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c7ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c7ba4:
    // 0x4c7ba4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4c7ba8:
    if (ctx->pc == 0x4C7BA8u) {
        ctx->pc = 0x4C7BA8u;
            // 0x4c7ba8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7BACu;
        goto label_4c7bac;
    }
    ctx->pc = 0x4C7BA4u;
    {
        const bool branch_taken_0x4c7ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7BA4u;
            // 0x4c7ba8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7ba4) {
            ctx->pc = 0x4C7C6Cu;
            goto label_4c7c6c;
        }
    }
    ctx->pc = 0x4C7BACu;
label_4c7bac:
    // 0x4c7bac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c7bb0:
    // 0x4c7bb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c7bb4:
    // 0x4c7bb4: 0x24631890  addiu       $v1, $v1, 0x1890
    ctx->pc = 0x4c7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6288));
label_4c7bb8:
    // 0x4c7bb8: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x4c7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
label_4c7bbc:
    // 0x4c7bbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c7bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c7bc0:
    // 0x4c7bc0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c7bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c7bc4:
    // 0x4c7bc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c7bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c7bc8:
    // 0x4c7bc8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4c7bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4c7bcc:
    // 0x4c7bcc: 0x320f809  jalr        $t9
label_4c7bd0:
    if (ctx->pc == 0x4C7BD0u) {
        ctx->pc = 0x4C7BD4u;
        goto label_4c7bd4;
    }
    ctx->pc = 0x4C7BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C7BD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C7BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C7BD4u; }
            if (ctx->pc != 0x4C7BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x4C7BD4u;
label_4c7bd4:
    // 0x4c7bd4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4c7bd8:
    if (ctx->pc == 0x4C7BD8u) {
        ctx->pc = 0x4C7BD8u;
            // 0x4c7bd8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4C7BDCu;
        goto label_4c7bdc;
    }
    ctx->pc = 0x4C7BD4u;
    {
        const bool branch_taken_0x4c7bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7bd4) {
            ctx->pc = 0x4C7BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7BD4u;
            // 0x4c7bd8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7C58u;
            goto label_4c7c58;
        }
    }
    ctx->pc = 0x4C7BDCu;
label_4c7bdc:
    // 0x4c7bdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c7be0:
    // 0x4c7be0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c7be4:
    // 0x4c7be4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4c7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4c7be8:
    // 0x4c7be8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4c7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4c7bec:
    // 0x4c7bec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c7becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c7bf0:
    // 0x4c7bf0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c7bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c7bf4:
    // 0x4c7bf4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4c7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4c7bf8:
    // 0x4c7bf8: 0xc0aecc4  jal         func_2BB310
label_4c7bfc:
    if (ctx->pc == 0x4C7BFCu) {
        ctx->pc = 0x4C7BFCu;
            // 0x4c7bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C7C00u;
        goto label_4c7c00;
    }
    ctx->pc = 0x4C7BF8u;
    SET_GPR_U32(ctx, 31, 0x4C7C00u);
    ctx->pc = 0x4C7BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7BF8u;
            // 0x4c7bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C00u; }
        if (ctx->pc != 0x4C7C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C00u; }
        if (ctx->pc != 0x4C7C00u) { return; }
    }
    ctx->pc = 0x4C7C00u;
label_4c7c00:
    // 0x4c7c00: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4c7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4c7c04:
    // 0x4c7c04: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4c7c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4c7c08:
    // 0x4c7c08: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c7c0c:
    if (ctx->pc == 0x4C7C0Cu) {
        ctx->pc = 0x4C7C0Cu;
            // 0x4c7c0c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4C7C10u;
        goto label_4c7c10;
    }
    ctx->pc = 0x4C7C08u;
    {
        const bool branch_taken_0x4c7c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7c08) {
            ctx->pc = 0x4C7C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7C08u;
            // 0x4c7c0c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7C24u;
            goto label_4c7c24;
        }
    }
    ctx->pc = 0x4C7C10u;
label_4c7c10:
    // 0x4c7c10: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4c7c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4c7c14:
    // 0x4c7c14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c7c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c7c18:
    // 0x4c7c18: 0x320f809  jalr        $t9
label_4c7c1c:
    if (ctx->pc == 0x4C7C1Cu) {
        ctx->pc = 0x4C7C1Cu;
            // 0x4c7c1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C7C20u;
        goto label_4c7c20;
    }
    ctx->pc = 0x4C7C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C7C20u);
        ctx->pc = 0x4C7C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7C18u;
            // 0x4c7c1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C7C20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C20u; }
            if (ctx->pc != 0x4C7C20u) { return; }
        }
        }
    }
    ctx->pc = 0x4C7C20u;
label_4c7c20:
    // 0x4c7c20: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4c7c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4c7c24:
    // 0x4c7c24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4c7c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c7c28:
    // 0x4c7c28: 0xc0aec9c  jal         func_2BB270
label_4c7c2c:
    if (ctx->pc == 0x4C7C2Cu) {
        ctx->pc = 0x4C7C2Cu;
            // 0x4c7c2c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4C7C30u;
        goto label_4c7c30;
    }
    ctx->pc = 0x4C7C28u;
    SET_GPR_U32(ctx, 31, 0x4C7C30u);
    ctx->pc = 0x4C7C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7C28u;
            // 0x4c7c2c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C30u; }
        if (ctx->pc != 0x4C7C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C30u; }
        if (ctx->pc != 0x4C7C30u) { return; }
    }
    ctx->pc = 0x4C7C30u;
label_4c7c30:
    // 0x4c7c30: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4c7c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4c7c34:
    // 0x4c7c34: 0xc0aec88  jal         func_2BB220
label_4c7c38:
    if (ctx->pc == 0x4C7C38u) {
        ctx->pc = 0x4C7C38u;
            // 0x4c7c38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4C7C3Cu;
        goto label_4c7c3c;
    }
    ctx->pc = 0x4C7C34u;
    SET_GPR_U32(ctx, 31, 0x4C7C3Cu);
    ctx->pc = 0x4C7C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7C34u;
            // 0x4c7c38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C3Cu; }
        if (ctx->pc != 0x4C7C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C3Cu; }
        if (ctx->pc != 0x4C7C3Cu) { return; }
    }
    ctx->pc = 0x4C7C3Cu;
label_4c7c3c:
    // 0x4c7c3c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4c7c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4c7c40:
    // 0x4c7c40: 0xc0aec0c  jal         func_2BB030
label_4c7c44:
    if (ctx->pc == 0x4C7C44u) {
        ctx->pc = 0x4C7C44u;
            // 0x4c7c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7C48u;
        goto label_4c7c48;
    }
    ctx->pc = 0x4C7C40u;
    SET_GPR_U32(ctx, 31, 0x4C7C48u);
    ctx->pc = 0x4C7C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7C40u;
            // 0x4c7c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C48u; }
        if (ctx->pc != 0x4C7C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C48u; }
        if (ctx->pc != 0x4C7C48u) { return; }
    }
    ctx->pc = 0x4C7C48u;
label_4c7c48:
    // 0x4c7c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c7c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c7c4c:
    // 0x4c7c4c: 0xc0aeaa8  jal         func_2BAAA0
label_4c7c50:
    if (ctx->pc == 0x4C7C50u) {
        ctx->pc = 0x4C7C50u;
            // 0x4c7c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7C54u;
        goto label_4c7c54;
    }
    ctx->pc = 0x4C7C4Cu;
    SET_GPR_U32(ctx, 31, 0x4C7C54u);
    ctx->pc = 0x4C7C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7C4Cu;
            // 0x4c7c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C54u; }
        if (ctx->pc != 0x4C7C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C54u; }
        if (ctx->pc != 0x4C7C54u) { return; }
    }
    ctx->pc = 0x4C7C54u;
label_4c7c54:
    // 0x4c7c54: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4c7c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4c7c58:
    // 0x4c7c58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c7c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c7c5c:
    // 0x4c7c5c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c7c60:
    if (ctx->pc == 0x4C7C60u) {
        ctx->pc = 0x4C7C60u;
            // 0x4c7c60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7C64u;
        goto label_4c7c64;
    }
    ctx->pc = 0x4C7C5Cu;
    {
        const bool branch_taken_0x4c7c5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c7c5c) {
            ctx->pc = 0x4C7C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7C5Cu;
            // 0x4c7c60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7C70u;
            goto label_4c7c70;
        }
    }
    ctx->pc = 0x4C7C64u;
label_4c7c64:
    // 0x4c7c64: 0xc0400a8  jal         func_1002A0
label_4c7c68:
    if (ctx->pc == 0x4C7C68u) {
        ctx->pc = 0x4C7C68u;
            // 0x4c7c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7C6Cu;
        goto label_4c7c6c;
    }
    ctx->pc = 0x4C7C64u;
    SET_GPR_U32(ctx, 31, 0x4C7C6Cu);
    ctx->pc = 0x4C7C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7C64u;
            // 0x4c7c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C6Cu; }
        if (ctx->pc != 0x4C7C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7C6Cu; }
        if (ctx->pc != 0x4C7C6Cu) { return; }
    }
    ctx->pc = 0x4C7C6Cu;
label_4c7c6c:
    // 0x4c7c6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c7c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c7c70:
    // 0x4c7c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c7c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c7c74:
    // 0x4c7c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c7c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c7c78:
    // 0x4c7c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c7c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c7c7c:
    // 0x4c7c7c: 0x3e00008  jr          $ra
label_4c7c80:
    if (ctx->pc == 0x4C7C80u) {
        ctx->pc = 0x4C7C80u;
            // 0x4c7c80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C7C84u;
        goto label_4c7c84;
    }
    ctx->pc = 0x4C7C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7C7Cu;
            // 0x4c7c80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C7C84u;
label_4c7c84:
    // 0x4c7c84: 0x0  nop
    ctx->pc = 0x4c7c84u;
    // NOP
label_4c7c88:
    // 0x4c7c88: 0x0  nop
    ctx->pc = 0x4c7c88u;
    // NOP
label_4c7c8c:
    // 0x4c7c8c: 0x0  nop
    ctx->pc = 0x4c7c8cu;
    // NOP
label_4c7c90:
    // 0x4c7c90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4c7c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4c7c94:
    // 0x4c7c94: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4c7c98:
    // 0x4c7c98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4c7c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4c7c9c:
    // 0x4c7c9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4c7c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4c7ca0:
    // 0x4c7ca0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4c7ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4c7ca4:
    // 0x4c7ca4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4c7ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4c7ca8:
    // 0x4c7ca8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c7ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c7cac:
    // 0x4c7cac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4c7cacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c7cb0:
    // 0x4c7cb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c7cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c7cb4:
    // 0x4c7cb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c7cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c7cb8:
    // 0x4c7cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c7cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c7cbc:
    // 0x4c7cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c7cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c7cc0:
    // 0x4c7cc0: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x4c7cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4c7cc4:
    // 0x4c7cc4: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x4c7cc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_4c7cc8:
    // 0x4c7cc8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c7ccc:
    // 0x4c7ccc: 0x50830011  beql        $a0, $v1, . + 4 + (0x11 << 2)
label_4c7cd0:
    if (ctx->pc == 0x4C7CD0u) {
        ctx->pc = 0x4C7CD0u;
            // 0x4c7cd0: 0x8eb1007c  lw          $s1, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->pc = 0x4C7CD4u;
        goto label_4c7cd4;
    }
    ctx->pc = 0x4C7CCCu;
    {
        const bool branch_taken_0x4c7ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c7ccc) {
            ctx->pc = 0x4C7CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7CCCu;
            // 0x4c7cd0: 0x8eb1007c  lw          $s1, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7D14u;
            goto label_4c7d14;
        }
    }
    ctx->pc = 0x4C7CD4u;
label_4c7cd4:
    // 0x4c7cd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c7cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c7cd8:
    // 0x4c7cd8: 0x50830044  beql        $a0, $v1, . + 4 + (0x44 << 2)
label_4c7cdc:
    if (ctx->pc == 0x4C7CDCu) {
        ctx->pc = 0x4C7CDCu;
            // 0x4c7cdc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x4C7CE0u;
        goto label_4c7ce0;
    }
    ctx->pc = 0x4C7CD8u;
    {
        const bool branch_taken_0x4c7cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c7cd8) {
            ctx->pc = 0x4C7CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7CD8u;
            // 0x4c7cdc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7DECu;
            goto label_4c7dec;
        }
    }
    ctx->pc = 0x4C7CE0u;
label_4c7ce0:
    // 0x4c7ce0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c7ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c7ce4:
    // 0x4c7ce4: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_4c7ce8:
    if (ctx->pc == 0x4C7CE8u) {
        ctx->pc = 0x4C7CE8u;
            // 0x4c7ce8: 0x8eb9000c  lw          $t9, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->pc = 0x4C7CECu;
        goto label_4c7cec;
    }
    ctx->pc = 0x4C7CE4u;
    {
        const bool branch_taken_0x4c7ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c7ce4) {
            ctx->pc = 0x4C7CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7CE4u;
            // 0x4c7ce8: 0x8eb9000c  lw          $t9, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7CF4u;
            goto label_4c7cf4;
        }
    }
    ctx->pc = 0x4C7CECu;
label_4c7cec:
    // 0x4c7cec: 0x1000003e  b           . + 4 + (0x3E << 2)
label_4c7cf0:
    if (ctx->pc == 0x4C7CF0u) {
        ctx->pc = 0x4C7CF4u;
        goto label_4c7cf4;
    }
    ctx->pc = 0x4C7CECu;
    {
        const bool branch_taken_0x4c7cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7cec) {
            ctx->pc = 0x4C7DE8u;
            goto label_4c7de8;
        }
    }
    ctx->pc = 0x4C7CF4u;
label_4c7cf4:
    // 0x4c7cf4: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x4c7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_4c7cf8:
    // 0x4c7cf8: 0x8ca20cb4  lw          $v0, 0xCB4($a1)
    ctx->pc = 0x4c7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3252)));
label_4c7cfc:
    // 0x4c7cfc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4c7cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4c7d00:
    // 0x4c7d00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c7d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c7d04:
    // 0x4c7d04: 0x320f809  jalr        $t9
label_4c7d08:
    if (ctx->pc == 0x4C7D08u) {
        ctx->pc = 0x4C7D08u;
            // 0x4c7d08: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4C7D0Cu;
        goto label_4c7d0c;
    }
    ctx->pc = 0x4C7D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C7D0Cu);
        ctx->pc = 0x4C7D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7D04u;
            // 0x4c7d08: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C7D0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C7D0Cu; }
            if (ctx->pc != 0x4C7D0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C7D0Cu;
label_4c7d0c:
    // 0x4c7d0c: 0x10000036  b           . + 4 + (0x36 << 2)
label_4c7d10:
    if (ctx->pc == 0x4C7D10u) {
        ctx->pc = 0x4C7D14u;
        goto label_4c7d14;
    }
    ctx->pc = 0x4C7D0Cu;
    {
        const bool branch_taken_0x4c7d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7d0c) {
            ctx->pc = 0x4C7DE8u;
            goto label_4c7de8;
        }
    }
    ctx->pc = 0x4C7D14u;
label_4c7d14:
    // 0x4c7d14: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_4c7d18:
    if (ctx->pc == 0x4C7D18u) {
        ctx->pc = 0x4C7D1Cu;
        goto label_4c7d1c;
    }
    ctx->pc = 0x4C7D14u;
    {
        const bool branch_taken_0x4c7d14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7d14) {
            ctx->pc = 0x4C7DE8u;
            goto label_4c7de8;
        }
    }
    ctx->pc = 0x4C7D1Cu;
label_4c7d1c:
    // 0x4c7d1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c7d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c7d20:
    // 0x4c7d20: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4c7d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4c7d24:
    // 0x4c7d24: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4c7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4c7d28:
    // 0x4c7d28: 0x26b00090  addiu       $s0, $s5, 0x90
    ctx->pc = 0x4c7d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_4c7d2c:
    // 0x4c7d2c: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x4c7d2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4c7d30:
    // 0x4c7d30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c7d34:
    // 0x4c7d34: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x4c7d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4c7d38:
    // 0x4c7d38: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4c7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4c7d3c:
    // 0x4c7d3c: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x4c7d3cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4c7d40:
    // 0x4c7d40: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4c7d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4c7d44:
    // 0x4c7d44: 0x8ea40094  lw          $a0, 0x94($s5)
    ctx->pc = 0x4c7d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_4c7d48:
    // 0x4c7d48: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4c7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4c7d4c:
    // 0x4c7d4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4c7d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4c7d50:
    // 0x4c7d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c7d54:
    // 0x4c7d54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4c7d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c7d58:
    // 0x4c7d58: 0xc04e738  jal         func_139CE0
label_4c7d5c:
    if (ctx->pc == 0x4C7D5Cu) {
        ctx->pc = 0x4C7D5Cu;
            // 0x4c7d5c: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4C7D60u;
        goto label_4c7d60;
    }
    ctx->pc = 0x4C7D58u;
    SET_GPR_U32(ctx, 31, 0x4C7D60u);
    ctx->pc = 0x4C7D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7D58u;
            // 0x4c7d5c: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7D60u; }
        if (ctx->pc != 0x4C7D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7D60u; }
        if (ctx->pc != 0x4C7D60u) { return; }
    }
    ctx->pc = 0x4C7D60u;
label_4c7d60:
    // 0x4c7d60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c7d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c7d64:
    // 0x4c7d64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c7d68:
    // 0x4c7d68: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4c7d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4c7d6c:
    // 0x4c7d6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c7d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7d70:
    // 0x4c7d70: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4c7d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4c7d74:
    // 0x4c7d74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c7d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7d78:
    // 0x4c7d78: 0x8ea30080  lw          $v1, 0x80($s5)
    ctx->pc = 0x4c7d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_4c7d7c:
    // 0x4c7d7c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4c7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4c7d80:
    // 0x4c7d80: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4c7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4c7d84:
    // 0x4c7d84: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4c7d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4c7d88:
    // 0x4c7d88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4c7d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c7d8c:
    // 0x4c7d8c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4c7d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c7d90:
    // 0x4c7d90: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4c7d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4c7d94:
    // 0x4c7d94: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4c7d94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c7d98:
    // 0x4c7d98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c7d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c7d9c:
    // 0x4c7d9c: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x4c7d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_4c7da0:
    // 0x4c7da0: 0xc1324bc  jal         func_4C92F0
label_4c7da4:
    if (ctx->pc == 0x4C7DA4u) {
        ctx->pc = 0x4C7DA4u;
            // 0x4c7da4: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C7DA8u;
        goto label_4c7da8;
    }
    ctx->pc = 0x4C7DA0u;
    SET_GPR_U32(ctx, 31, 0x4C7DA8u);
    ctx->pc = 0x4C7DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7DA0u;
            // 0x4c7da4: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C92F0u;
    if (runtime->hasFunction(0x4C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x4C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7DA8u; }
        if (ctx->pc != 0x4C7DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C92F0_0x4c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7DA8u; }
        if (ctx->pc != 0x4C7DA8u) { return; }
    }
    ctx->pc = 0x4C7DA8u;
label_4c7da8:
    // 0x4c7da8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4c7da8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4c7dac:
    // 0x4c7dac: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4c7dacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4c7db0:
    // 0x4c7db0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_4c7db4:
    if (ctx->pc == 0x4C7DB4u) {
        ctx->pc = 0x4C7DB4u;
            // 0x4c7db4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4C7DB8u;
        goto label_4c7db8;
    }
    ctx->pc = 0x4C7DB0u;
    {
        const bool branch_taken_0x4c7db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C7DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7DB0u;
            // 0x4c7db4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7db0) {
            ctx->pc = 0x4C7D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c7d78;
        }
    }
    ctx->pc = 0x4C7DB8u;
label_4c7db8:
    // 0x4c7db8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c7dbc:
    // 0x4c7dbc: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4c7dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4c7dc0:
    // 0x4c7dc0: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4c7dc4:
    if (ctx->pc == 0x4C7DC4u) {
        ctx->pc = 0x4C7DC4u;
            // 0x4c7dc4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4C7DC8u;
        goto label_4c7dc8;
    }
    ctx->pc = 0x4C7DC0u;
    {
        const bool branch_taken_0x4c7dc0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4C7DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7DC0u;
            // 0x4c7dc4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7dc0) {
            ctx->pc = 0x4C7DE8u;
            goto label_4c7de8;
        }
    }
    ctx->pc = 0x4C7DC8u;
label_4c7dc8:
    // 0x4c7dc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c7dcc:
    // 0x4c7dcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c7dd0:
    // 0x4c7dd0: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4c7dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4c7dd4:
    // 0x4c7dd4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4c7dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4c7dd8:
    // 0x4c7dd8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4c7dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4c7ddc:
    // 0x4c7ddc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4c7ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7de0:
    // 0x4c7de0: 0xc055d28  jal         func_1574A0
label_4c7de4:
    if (ctx->pc == 0x4C7DE4u) {
        ctx->pc = 0x4C7DE4u;
            // 0x4c7de4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7DE8u;
        goto label_4c7de8;
    }
    ctx->pc = 0x4C7DE0u;
    SET_GPR_U32(ctx, 31, 0x4C7DE8u);
    ctx->pc = 0x4C7DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7DE0u;
            // 0x4c7de4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7DE8u; }
        if (ctx->pc != 0x4C7DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7DE8u; }
        if (ctx->pc != 0x4C7DE8u) { return; }
    }
    ctx->pc = 0x4C7DE8u;
label_4c7de8:
    // 0x4c7de8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4c7de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4c7dec:
    // 0x4c7dec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4c7decu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c7df0:
    // 0x4c7df0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4c7df0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7df4:
    // 0x4c7df4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4c7df4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c7df8:
    // 0x4c7df8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c7df8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c7dfc:
    // 0x4c7dfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c7dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c7e00:
    // 0x4c7e00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c7e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c7e04:
    // 0x4c7e04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c7e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c7e08:
    // 0x4c7e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c7e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c7e0c:
    // 0x4c7e0c: 0x3e00008  jr          $ra
label_4c7e10:
    if (ctx->pc == 0x4C7E10u) {
        ctx->pc = 0x4C7E10u;
            // 0x4c7e10: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4C7E14u;
        goto label_4c7e14;
    }
    ctx->pc = 0x4C7E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7E0Cu;
            // 0x4c7e10: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C7E14u;
label_4c7e14:
    // 0x4c7e14: 0x0  nop
    ctx->pc = 0x4c7e14u;
    // NOP
label_4c7e18:
    // 0x4c7e18: 0x0  nop
    ctx->pc = 0x4c7e18u;
    // NOP
label_4c7e1c:
    // 0x4c7e1c: 0x0  nop
    ctx->pc = 0x4c7e1cu;
    // NOP
label_4c7e20:
    // 0x4c7e20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4c7e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4c7e24:
    // 0x4c7e24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c7e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c7e28:
    // 0x4c7e28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4c7e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4c7e2c:
    // 0x4c7e2c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4c7e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4c7e30:
    // 0x4c7e30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4c7e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4c7e34:
    // 0x4c7e34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4c7e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4c7e38:
    // 0x4c7e38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4c7e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4c7e3c:
    // 0x4c7e3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c7e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c7e40:
    // 0x4c7e40: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c7e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c7e44:
    // 0x4c7e44: 0x9085001c  lbu         $a1, 0x1C($a0)
    ctx->pc = 0x4c7e44u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_4c7e48:
    // 0x4c7e48: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4c7e4c:
    if (ctx->pc == 0x4C7E4Cu) {
        ctx->pc = 0x4C7E4Cu;
            // 0x4c7e4c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7E50u;
        goto label_4c7e50;
    }
    ctx->pc = 0x4C7E48u;
    {
        const bool branch_taken_0x4c7e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C7E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7E48u;
            // 0x4c7e4c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7e48) {
            ctx->pc = 0x4C7EACu;
            goto label_4c7eac;
        }
    }
    ctx->pc = 0x4C7E50u;
label_4c7e50:
    // 0x4c7e50: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c7e54:
    // 0x4c7e54: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_4c7e58:
    if (ctx->pc == 0x4C7E58u) {
        ctx->pc = 0x4C7E58u;
            // 0x4c7e58: 0x8e99000c  lw          $t9, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x4C7E5Cu;
        goto label_4c7e5c;
    }
    ctx->pc = 0x4C7E54u;
    {
        const bool branch_taken_0x4c7e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c7e54) {
            ctx->pc = 0x4C7E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7E54u;
            // 0x4c7e58: 0x8e99000c  lw          $t9, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7EA0u;
            goto label_4c7ea0;
        }
    }
    ctx->pc = 0x4C7E5Cu;
label_4c7e5c:
    // 0x4c7e5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c7e60:
    // 0x4c7e60: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4c7e64:
    if (ctx->pc == 0x4C7E64u) {
        ctx->pc = 0x4C7E68u;
        goto label_4c7e68;
    }
    ctx->pc = 0x4C7E60u;
    {
        const bool branch_taken_0x4c7e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c7e60) {
            ctx->pc = 0x4C7E70u;
            goto label_4c7e70;
        }
    }
    ctx->pc = 0x4C7E68u;
label_4c7e68:
    // 0x4c7e68: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_4c7e6c:
    if (ctx->pc == 0x4C7E6Cu) {
        ctx->pc = 0x4C7E70u;
        goto label_4c7e70;
    }
    ctx->pc = 0x4C7E68u;
    {
        const bool branch_taken_0x4c7e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7e68) {
            ctx->pc = 0x4C8188u;
            goto label_4c8188;
        }
    }
    ctx->pc = 0x4C7E70u;
label_4c7e70:
    // 0x4c7e70: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c7e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4c7e74:
    // 0x4c7e74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c7e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c7e78:
    // 0x4c7e78: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4c7e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4c7e7c:
    // 0x4c7e7c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4c7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4c7e80:
    // 0x4c7e80: 0x106500c1  beq         $v1, $a1, . + 4 + (0xC1 << 2)
label_4c7e84:
    if (ctx->pc == 0x4C7E84u) {
        ctx->pc = 0x4C7E88u;
        goto label_4c7e88;
    }
    ctx->pc = 0x4C7E80u;
    {
        const bool branch_taken_0x4c7e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c7e80) {
            ctx->pc = 0x4C8188u;
            goto label_4c8188;
        }
    }
    ctx->pc = 0x4C7E88u;
label_4c7e88:
    // 0x4c7e88: 0x8c99009c  lw          $t9, 0x9C($a0)
    ctx->pc = 0x4c7e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4c7e8c:
    // 0x4c7e8c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4c7e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4c7e90:
    // 0x4c7e90: 0x320f809  jalr        $t9
label_4c7e94:
    if (ctx->pc == 0x4C7E94u) {
        ctx->pc = 0x4C7E98u;
        goto label_4c7e98;
    }
    ctx->pc = 0x4C7E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C7E98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C7E98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C7E98u; }
            if (ctx->pc != 0x4C7E98u) { return; }
        }
        }
    }
    ctx->pc = 0x4C7E98u;
label_4c7e98:
    // 0x4c7e98: 0x100000bb  b           . + 4 + (0xBB << 2)
label_4c7e9c:
    if (ctx->pc == 0x4C7E9Cu) {
        ctx->pc = 0x4C7EA0u;
        goto label_4c7ea0;
    }
    ctx->pc = 0x4C7E98u;
    {
        const bool branch_taken_0x4c7e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7e98) {
            ctx->pc = 0x4C8188u;
            goto label_4c8188;
        }
    }
    ctx->pc = 0x4C7EA0u;
label_4c7ea0:
    // 0x4c7ea0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4c7ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4c7ea4:
    // 0x4c7ea4: 0x320f809  jalr        $t9
label_4c7ea8:
    if (ctx->pc == 0x4C7EA8u) {
        ctx->pc = 0x4C7EA8u;
            // 0x4c7ea8: 0x2684000c  addiu       $a0, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x4C7EACu;
        goto label_4c7eac;
    }
    ctx->pc = 0x4C7EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C7EACu);
        ctx->pc = 0x4C7EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7EA4u;
            // 0x4c7ea8: 0x2684000c  addiu       $a0, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C7EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C7EACu; }
            if (ctx->pc != 0x4C7EACu) { return; }
        }
        }
    }
    ctx->pc = 0x4C7EACu;
label_4c7eac:
    // 0x4c7eac: 0x8e90007c  lw          $s0, 0x7C($s4)
    ctx->pc = 0x4c7eacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
label_4c7eb0:
    // 0x4c7eb0: 0x120000b5  beqz        $s0, . + 4 + (0xB5 << 2)
label_4c7eb4:
    if (ctx->pc == 0x4C7EB4u) {
        ctx->pc = 0x4C7EB8u;
        goto label_4c7eb8;
    }
    ctx->pc = 0x4C7EB0u;
    {
        const bool branch_taken_0x4c7eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7eb0) {
            ctx->pc = 0x4C8188u;
            goto label_4c8188;
        }
    }
    ctx->pc = 0x4C7EB8u;
label_4c7eb8:
    // 0x4c7eb8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4c7ebc:
    // 0x4c7ebc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4c7ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4c7ec0:
    // 0x4c7ec0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4c7ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4c7ec4:
    // 0x4c7ec4: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x4c7ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_4c7ec8:
    // 0x4c7ec8: 0x146000af  bnez        $v1, . + 4 + (0xAF << 2)
label_4c7ecc:
    if (ctx->pc == 0x4C7ECCu) {
        ctx->pc = 0x4C7ED0u;
        goto label_4c7ed0;
    }
    ctx->pc = 0x4C7EC8u;
    {
        const bool branch_taken_0x4c7ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c7ec8) {
            ctx->pc = 0x4C8188u;
            goto label_4c8188;
        }
    }
    ctx->pc = 0x4C7ED0u;
label_4c7ed0:
    // 0x4c7ed0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c7ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7ed4:
    // 0x4c7ed4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c7ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7ed8:
    // 0x4c7ed8: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x4c7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_4c7edc:
    // 0x4c7edc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4c7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4c7ee0:
    // 0x4c7ee0: 0xc0e3658  jal         func_38D960
label_4c7ee4:
    if (ctx->pc == 0x4C7EE4u) {
        ctx->pc = 0x4C7EE4u;
            // 0x4c7ee4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4C7EE8u;
        goto label_4c7ee8;
    }
    ctx->pc = 0x4C7EE0u;
    SET_GPR_U32(ctx, 31, 0x4C7EE8u);
    ctx->pc = 0x4C7EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7EE0u;
            // 0x4c7ee4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7EE8u; }
        if (ctx->pc != 0x4C7EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7EE8u; }
        if (ctx->pc != 0x4C7EE8u) { return; }
    }
    ctx->pc = 0x4C7EE8u;
label_4c7ee8:
    // 0x4c7ee8: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x4c7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_4c7eec:
    // 0x4c7eec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4c7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4c7ef0:
    // 0x4c7ef0: 0xc0775b8  jal         func_1DD6E0
label_4c7ef4:
    if (ctx->pc == 0x4C7EF4u) {
        ctx->pc = 0x4C7EF4u;
            // 0x4c7ef4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4C7EF8u;
        goto label_4c7ef8;
    }
    ctx->pc = 0x4C7EF0u;
    SET_GPR_U32(ctx, 31, 0x4C7EF8u);
    ctx->pc = 0x4C7EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7EF0u;
            // 0x4c7ef4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7EF8u; }
        if (ctx->pc != 0x4C7EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7EF8u; }
        if (ctx->pc != 0x4C7EF8u) { return; }
    }
    ctx->pc = 0x4C7EF8u;
label_4c7ef8:
    // 0x4c7ef8: 0xc0775b4  jal         func_1DD6D0
label_4c7efc:
    if (ctx->pc == 0x4C7EFCu) {
        ctx->pc = 0x4C7EFCu;
            // 0x4c7efc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4C7F00u;
        goto label_4c7f00;
    }
    ctx->pc = 0x4C7EF8u;
    SET_GPR_U32(ctx, 31, 0x4C7F00u);
    ctx->pc = 0x4C7EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7EF8u;
            // 0x4c7efc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7F00u; }
        if (ctx->pc != 0x4C7F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7F00u; }
        if (ctx->pc != 0x4C7F00u) { return; }
    }
    ctx->pc = 0x4C7F00u;
label_4c7f00:
    // 0x4c7f00: 0xc64200fc  lwc1        $f2, 0xFC($s2)
    ctx->pc = 0x4c7f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c7f04:
    // 0x4c7f04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4c7f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c7f08:
    // 0x4c7f08: 0x0  nop
    ctx->pc = 0x4c7f08u;
    // NOP
label_4c7f0c:
    // 0x4c7f0c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4c7f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c7f10:
    // 0x4c7f10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4c7f14:
    if (ctx->pc == 0x4C7F14u) {
        ctx->pc = 0x4C7F14u;
            // 0x4c7f14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C7F18u;
        goto label_4c7f18;
    }
    ctx->pc = 0x4C7F10u;
    {
        const bool branch_taken_0x4c7f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C7F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7F10u;
            // 0x4c7f14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7f10) {
            ctx->pc = 0x4C7F1Cu;
            goto label_4c7f1c;
        }
    }
    ctx->pc = 0x4C7F18u;
label_4c7f18:
    // 0x4c7f18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c7f18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7f1c:
    // 0x4c7f1c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4c7f20:
    if (ctx->pc == 0x4C7F20u) {
        ctx->pc = 0x4C7F20u;
            // 0x4c7f20: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4C7F24u;
        goto label_4c7f24;
    }
    ctx->pc = 0x4C7F1Cu;
    {
        const bool branch_taken_0x4c7f1c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4c7f1c) {
            ctx->pc = 0x4C7F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7F1Cu;
            // 0x4c7f20: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7F30u;
            goto label_4c7f30;
        }
    }
    ctx->pc = 0x4C7F24u;
label_4c7f24:
    // 0x4c7f24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4c7f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c7f28:
    // 0x4c7f28: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c7f2c:
    if (ctx->pc == 0x4C7F2Cu) {
        ctx->pc = 0x4C7F2Cu;
            // 0x4c7f2c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4C7F30u;
        goto label_4c7f30;
    }
    ctx->pc = 0x4C7F28u;
    {
        const bool branch_taken_0x4c7f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7F28u;
            // 0x4c7f2c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7f28) {
            ctx->pc = 0x4C7F48u;
            goto label_4c7f48;
        }
    }
    ctx->pc = 0x4C7F30u;
label_4c7f30:
    // 0x4c7f30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4c7f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4c7f34:
    // 0x4c7f34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4c7f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4c7f38:
    // 0x4c7f38: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4c7f38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c7f3c:
    // 0x4c7f3c: 0x0  nop
    ctx->pc = 0x4c7f3cu;
    // NOP
label_4c7f40:
    // 0x4c7f40: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x4c7f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4c7f44:
    // 0x4c7f44: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4c7f44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4c7f48:
    // 0x4c7f48: 0xc64200fc  lwc1        $f2, 0xFC($s2)
    ctx->pc = 0x4c7f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c7f4c:
    // 0x4c7f4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4c7f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c7f50:
    // 0x4c7f50: 0x0  nop
    ctx->pc = 0x4c7f50u;
    // NOP
label_4c7f54:
    // 0x4c7f54: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4c7f54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4c7f58:
    // 0x4c7f58: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x4c7f58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_4c7f5c:
    // 0x4c7f5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c7f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c7f60:
    // 0x4c7f60: 0x45000085  bc1f        . + 4 + (0x85 << 2)
label_4c7f64:
    if (ctx->pc == 0x4C7F64u) {
        ctx->pc = 0x4C7F64u;
            // 0x4c7f64: 0xe64000fc  swc1        $f0, 0xFC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        ctx->pc = 0x4C7F68u;
        goto label_4c7f68;
    }
    ctx->pc = 0x4C7F60u;
    {
        const bool branch_taken_0x4c7f60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C7F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7F60u;
            // 0x4c7f64: 0xe64000fc  swc1        $f0, 0xFC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7f60) {
            ctx->pc = 0x4C8178u;
            goto label_4c8178;
        }
    }
    ctx->pc = 0x4C7F68u;
label_4c7f68:
    // 0x4c7f68: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x4c7f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_4c7f6c:
    // 0x4c7f6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c7f70:
    // 0x4c7f70: 0x1083007f  beq         $a0, $v1, . + 4 + (0x7F << 2)
label_4c7f74:
    if (ctx->pc == 0x4C7F74u) {
        ctx->pc = 0x4C7F78u;
        goto label_4c7f78;
    }
    ctx->pc = 0x4C7F70u;
    {
        const bool branch_taken_0x4c7f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c7f70) {
            ctx->pc = 0x4C8170u;
            goto label_4c8170;
        }
    }
    ctx->pc = 0x4C7F78u;
label_4c7f78:
    // 0x4c7f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c7f7c:
    // 0x4c7f7c: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
label_4c7f80:
    if (ctx->pc == 0x4C7F80u) {
        ctx->pc = 0x4C7F84u;
        goto label_4c7f84;
    }
    ctx->pc = 0x4C7F7Cu;
    {
        const bool branch_taken_0x4c7f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c7f7c) {
            ctx->pc = 0x4C80A8u;
            goto label_4c80a8;
        }
    }
    ctx->pc = 0x4C7F84u;
label_4c7f84:
    // 0x4c7f84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4c7f88:
    if (ctx->pc == 0x4C7F88u) {
        ctx->pc = 0x4C7F8Cu;
        goto label_4c7f8c;
    }
    ctx->pc = 0x4C7F84u;
    {
        const bool branch_taken_0x4c7f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7f84) {
            ctx->pc = 0x4C7F98u;
            goto label_4c7f98;
        }
    }
    ctx->pc = 0x4C7F8Cu;
label_4c7f8c:
    // 0x4c7f8c: 0x1000007a  b           . + 4 + (0x7A << 2)
label_4c7f90:
    if (ctx->pc == 0x4C7F90u) {
        ctx->pc = 0x4C7F94u;
        goto label_4c7f94;
    }
    ctx->pc = 0x4C7F8Cu;
    {
        const bool branch_taken_0x4c7f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7f8c) {
            ctx->pc = 0x4C8178u;
            goto label_4c8178;
        }
    }
    ctx->pc = 0x4C7F94u;
label_4c7f94:
    // 0x4c7f94: 0x0  nop
    ctx->pc = 0x4c7f94u;
    // NOP
label_4c7f98:
    // 0x4c7f98: 0xc0dd4bc  jal         func_3752F0
label_4c7f9c:
    if (ctx->pc == 0x4C7F9Cu) {
        ctx->pc = 0x4C7F9Cu;
            // 0x4c7f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7FA0u;
        goto label_4c7fa0;
    }
    ctx->pc = 0x4C7F98u;
    SET_GPR_U32(ctx, 31, 0x4C7FA0u);
    ctx->pc = 0x4C7F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7F98u;
            // 0x4c7f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3752F0u;
    if (runtime->hasFunction(0x3752F0u)) {
        auto targetFn = runtime->lookupFunction(0x3752F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7FA0u; }
        if (ctx->pc != 0x4C7FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003752F0_0x3752f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7FA0u; }
        if (ctx->pc != 0x4C7FA0u) { return; }
    }
    ctx->pc = 0x4C7FA0u;
label_4c7fa0:
    // 0x4c7fa0: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_4c7fa4:
    if (ctx->pc == 0x4C7FA4u) {
        ctx->pc = 0x4C7FA8u;
        goto label_4c7fa8;
    }
    ctx->pc = 0x4C7FA0u;
    {
        const bool branch_taken_0x4c7fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c7fa0) {
            ctx->pc = 0x4C8090u;
            goto label_4c8090;
        }
    }
    ctx->pc = 0x4C7FA8u;
label_4c7fa8:
    // 0x4c7fa8: 0xc0b6e68  jal         func_2DB9A0
label_4c7fac:
    if (ctx->pc == 0x4C7FACu) {
        ctx->pc = 0x4C7FACu;
            // 0x4c7fac: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C7FB0u;
        goto label_4c7fb0;
    }
    ctx->pc = 0x4C7FA8u;
    SET_GPR_U32(ctx, 31, 0x4C7FB0u);
    ctx->pc = 0x4C7FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7FA8u;
            // 0x4c7fac: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7FB0u; }
        if (ctx->pc != 0x4C7FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7FB0u; }
        if (ctx->pc != 0x4C7FB0u) { return; }
    }
    ctx->pc = 0x4C7FB0u;
label_4c7fb0:
    // 0x4c7fb0: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x4c7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_4c7fb4:
    // 0x4c7fb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c7fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c7fb8:
    // 0x4c7fb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c7fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c7fbc:
    // 0x4c7fbc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4c7fc0:
    if (ctx->pc == 0x4C7FC0u) {
        ctx->pc = 0x4C7FC0u;
            // 0x4c7fc0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4C7FC4u;
        goto label_4c7fc4;
    }
    ctx->pc = 0x4C7FBCu;
    {
        const bool branch_taken_0x4c7fbc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c7fbc) {
            ctx->pc = 0x4C7FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7FBCu;
            // 0x4c7fc0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7FD0u;
            goto label_4c7fd0;
        }
    }
    ctx->pc = 0x4C7FC4u;
label_4c7fc4:
    // 0x4c7fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4c7fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c7fc8:
    // 0x4c7fc8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c7fcc:
    if (ctx->pc == 0x4C7FCCu) {
        ctx->pc = 0x4C7FCCu;
            // 0x4c7fcc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4C7FD0u;
        goto label_4c7fd0;
    }
    ctx->pc = 0x4C7FC8u;
    {
        const bool branch_taken_0x4c7fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7FC8u;
            // 0x4c7fcc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7fc8) {
            ctx->pc = 0x4C7FE8u;
            goto label_4c7fe8;
        }
    }
    ctx->pc = 0x4C7FD0u;
label_4c7fd0:
    // 0x4c7fd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c7fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4c7fd4:
    // 0x4c7fd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c7fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c7fd8:
    // 0x4c7fd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c7fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c7fdc:
    // 0x4c7fdc: 0x0  nop
    ctx->pc = 0x4c7fdcu;
    // NOP
label_4c7fe0:
    // 0x4c7fe0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4c7fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4c7fe4:
    // 0x4c7fe4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4c7fe4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4c7fe8:
    // 0x4c7fe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4c7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4c7fec:
    // 0x4c7fec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4c7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4c7ff0:
    // 0x4c7ff0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4c7ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c7ff4:
    // 0x4c7ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c7ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c7ff8:
    // 0x4c7ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c7ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c7ffc:
    // 0x4c7ffc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4c7ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4c8000:
    // 0x4c8000: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4c8000u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4c8004:
    // 0x4c8004: 0xc132070  jal         func_4C81C0
label_4c8008:
    if (ctx->pc == 0x4C8008u) {
        ctx->pc = 0x4C8008u;
            // 0x4c8008: 0x4603151d  msub.s      $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x4C800Cu;
        goto label_4c800c;
    }
    ctx->pc = 0x4C8004u;
    SET_GPR_U32(ctx, 31, 0x4C800Cu);
    ctx->pc = 0x4C8008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8004u;
            // 0x4c8008: 0x4603151d  msub.s      $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C81C0u;
    if (runtime->hasFunction(0x4C81C0u)) {
        auto targetFn = runtime->lookupFunction(0x4C81C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C800Cu; }
        if (ctx->pc != 0x4C800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C81C0_0x4c81c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C800Cu; }
        if (ctx->pc != 0x4C800Cu) { return; }
    }
    ctx->pc = 0x4C800Cu;
label_4c800c:
    // 0x4c800c: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x4c800cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_4c8010:
    // 0x4c8010: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4c8010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4c8014:
    // 0x4c8014: 0xc04cc70  jal         func_1331C0
label_4c8018:
    if (ctx->pc == 0x4C8018u) {
        ctx->pc = 0x4C8018u;
            // 0x4c8018: 0x264500e0  addiu       $a1, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x4C801Cu;
        goto label_4c801c;
    }
    ctx->pc = 0x4C8014u;
    SET_GPR_U32(ctx, 31, 0x4C801Cu);
    ctx->pc = 0x4C8018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8014u;
            // 0x4c8018: 0x264500e0  addiu       $a1, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C801Cu; }
        if (ctx->pc != 0x4C801Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C801Cu; }
        if (ctx->pc != 0x4C801Cu) { return; }
    }
    ctx->pc = 0x4C801Cu;
label_4c801c:
    // 0x4c801c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x4c801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c8020:
    // 0x4c8020: 0xc7ad00a4  lwc1        $f13, 0xA4($sp)
    ctx->pc = 0x4c8020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4c8024:
    // 0x4c8024: 0xc7ae00a8  lwc1        $f14, 0xA8($sp)
    ctx->pc = 0x4c8024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4c8028:
    // 0x4c8028: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x4c8028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4c802c:
    // 0x4c802c: 0xc0b6e3c  jal         func_2DB8F0
label_4c8030:
    if (ctx->pc == 0x4C8030u) {
        ctx->pc = 0x4C8030u;
            // 0x4c8030: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C8034u;
        goto label_4c8034;
    }
    ctx->pc = 0x4C802Cu;
    SET_GPR_U32(ctx, 31, 0x4C8034u);
    ctx->pc = 0x4C8030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C802Cu;
            // 0x4c8030: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8034u; }
        if (ctx->pc != 0x4C8034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8034u; }
        if (ctx->pc != 0x4C8034u) { return; }
    }
    ctx->pc = 0x4C8034u;
label_4c8034:
    // 0x4c8034: 0xc0775b8  jal         func_1DD6E0
label_4c8038:
    if (ctx->pc == 0x4C8038u) {
        ctx->pc = 0x4C803Cu;
        goto label_4c803c;
    }
    ctx->pc = 0x4C8034u;
    SET_GPR_U32(ctx, 31, 0x4C803Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C803Cu; }
        if (ctx->pc != 0x4C803Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C803Cu; }
        if (ctx->pc != 0x4C803Cu) { return; }
    }
    ctx->pc = 0x4C803Cu;
label_4c803c:
    // 0x4c803c: 0xc0b6e5c  jal         func_2DB970
label_4c8040:
    if (ctx->pc == 0x4C8040u) {
        ctx->pc = 0x4C8040u;
            // 0x4c8040: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4C8044u;
        goto label_4c8044;
    }
    ctx->pc = 0x4C803Cu;
    SET_GPR_U32(ctx, 31, 0x4C8044u);
    ctx->pc = 0x4C8040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C803Cu;
            // 0x4c8040: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB970u;
    if (runtime->hasFunction(0x2DB970u)) {
        auto targetFn = runtime->lookupFunction(0x2DB970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8044u; }
        if (ctx->pc != 0x4C8044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB970_0x2db970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8044u; }
        if (ctx->pc != 0x4C8044u) { return; }
    }
    ctx->pc = 0x4C8044u;
label_4c8044:
    // 0x4c8044: 0xc0775b8  jal         func_1DD6E0
label_4c8048:
    if (ctx->pc == 0x4C8048u) {
        ctx->pc = 0x4C8048u;
            // 0x4c8048: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4C804Cu;
        goto label_4c804c;
    }
    ctx->pc = 0x4C8044u;
    SET_GPR_U32(ctx, 31, 0x4C804Cu);
    ctx->pc = 0x4C8048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8044u;
            // 0x4c8048: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C804Cu; }
        if (ctx->pc != 0x4C804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C804Cu; }
        if (ctx->pc != 0x4C804Cu) { return; }
    }
    ctx->pc = 0x4C804Cu;
label_4c804c:
    // 0x4c804c: 0xc0775b4  jal         func_1DD6D0
label_4c8050:
    if (ctx->pc == 0x4C8050u) {
        ctx->pc = 0x4C8050u;
            // 0x4c8050: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4C8054u;
        goto label_4c8054;
    }
    ctx->pc = 0x4C804Cu;
    SET_GPR_U32(ctx, 31, 0x4C8054u);
    ctx->pc = 0x4C8050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C804Cu;
            // 0x4c8050: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8054u; }
        if (ctx->pc != 0x4C8054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8054u; }
        if (ctx->pc != 0x4C8054u) { return; }
    }
    ctx->pc = 0x4C8054u;
label_4c8054:
    // 0x4c8054: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x4c8054u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_4c8058:
    // 0x4c8058: 0xc0b6e28  jal         func_2DB8A0
label_4c805c:
    if (ctx->pc == 0x4C805Cu) {
        ctx->pc = 0x4C805Cu;
            // 0x4c805c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C8060u;
        goto label_4c8060;
    }
    ctx->pc = 0x4C8058u;
    SET_GPR_U32(ctx, 31, 0x4C8060u);
    ctx->pc = 0x4C805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8058u;
            // 0x4c805c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8060u; }
        if (ctx->pc != 0x4C8060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8060u; }
        if (ctx->pc != 0x4C8060u) { return; }
    }
    ctx->pc = 0x4C8060u;
label_4c8060:
    // 0x4c8060: 0xc0dc408  jal         func_371020
label_4c8064:
    if (ctx->pc == 0x4C8064u) {
        ctx->pc = 0x4C8064u;
            // 0x4c8064: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x4C8068u;
        goto label_4c8068;
    }
    ctx->pc = 0x4C8060u;
    SET_GPR_U32(ctx, 31, 0x4C8068u);
    ctx->pc = 0x4C8064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8060u;
            // 0x4c8064: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8068u; }
        if (ctx->pc != 0x4C8068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8068u; }
        if (ctx->pc != 0x4C8068u) { return; }
    }
    ctx->pc = 0x4C8068u;
label_4c8068:
    // 0x4c8068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c8068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c806c:
    // 0x4c806c: 0xc0e07f8  jal         func_381FE0
label_4c8070:
    if (ctx->pc == 0x4C8070u) {
        ctx->pc = 0x4C8070u;
            // 0x4c8070: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C8074u;
        goto label_4c8074;
    }
    ctx->pc = 0x4C806Cu;
    SET_GPR_U32(ctx, 31, 0x4C8074u);
    ctx->pc = 0x4C8070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C806Cu;
            // 0x4c8070: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8074u; }
        if (ctx->pc != 0x4C8074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8074u; }
        if (ctx->pc != 0x4C8074u) { return; }
    }
    ctx->pc = 0x4C8074u;
label_4c8074:
    // 0x4c8074: 0xc0d1c10  jal         func_347040
label_4c8078:
    if (ctx->pc == 0x4C8078u) {
        ctx->pc = 0x4C8078u;
            // 0x4c8078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C807Cu;
        goto label_4c807c;
    }
    ctx->pc = 0x4C8074u;
    SET_GPR_U32(ctx, 31, 0x4C807Cu);
    ctx->pc = 0x4C8078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8074u;
            // 0x4c8078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C807Cu; }
        if (ctx->pc != 0x4C807Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C807Cu; }
        if (ctx->pc != 0x4C807Cu) { return; }
    }
    ctx->pc = 0x4C807Cu;
label_4c807c:
    // 0x4c807c: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x4c807cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_4c8080:
    // 0x4c8080: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4c8080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c8084:
    // 0x4c8084: 0xc122d2c  jal         func_48B4B0
label_4c8088:
    if (ctx->pc == 0x4C8088u) {
        ctx->pc = 0x4C8088u;
            // 0x4c8088: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C808Cu;
        goto label_4c808c;
    }
    ctx->pc = 0x4C8084u;
    SET_GPR_U32(ctx, 31, 0x4C808Cu);
    ctx->pc = 0x4C8088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8084u;
            // 0x4c8088: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C808Cu; }
        if (ctx->pc != 0x4C808Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C808Cu; }
        if (ctx->pc != 0x4C808Cu) { return; }
    }
    ctx->pc = 0x4C808Cu;
label_4c808c:
    // 0x4c808c: 0x0  nop
    ctx->pc = 0x4c808cu;
    // NOP
label_4c8090:
    // 0x4c8090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c8090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c8094:
    // 0x4c8094: 0xae4300d4  sw          $v1, 0xD4($s2)
    ctx->pc = 0x4c8094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
label_4c8098:
    // 0x4c8098: 0xc64000f8  lwc1        $f0, 0xF8($s2)
    ctx->pc = 0x4c8098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c809c:
    // 0x4c809c: 0x10000036  b           . + 4 + (0x36 << 2)
label_4c80a0:
    if (ctx->pc == 0x4C80A0u) {
        ctx->pc = 0x4C80A0u;
            // 0x4c80a0: 0xe64000fc  swc1        $f0, 0xFC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        ctx->pc = 0x4C80A4u;
        goto label_4c80a4;
    }
    ctx->pc = 0x4C809Cu;
    {
        const bool branch_taken_0x4c809c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C80A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C809Cu;
            // 0x4c80a0: 0xe64000fc  swc1        $f0, 0xFC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c809c) {
            ctx->pc = 0x4C8178u;
            goto label_4c8178;
        }
    }
    ctx->pc = 0x4C80A4u;
label_4c80a4:
    // 0x4c80a4: 0x0  nop
    ctx->pc = 0x4c80a4u;
    // NOP
label_4c80a8:
    // 0x4c80a8: 0xc0dd4bc  jal         func_3752F0
label_4c80ac:
    if (ctx->pc == 0x4C80ACu) {
        ctx->pc = 0x4C80ACu;
            // 0x4c80ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C80B0u;
        goto label_4c80b0;
    }
    ctx->pc = 0x4C80A8u;
    SET_GPR_U32(ctx, 31, 0x4C80B0u);
    ctx->pc = 0x4C80ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C80A8u;
            // 0x4c80ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3752F0u;
    if (runtime->hasFunction(0x3752F0u)) {
        auto targetFn = runtime->lookupFunction(0x3752F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80B0u; }
        if (ctx->pc != 0x4C80B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003752F0_0x3752f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80B0u; }
        if (ctx->pc != 0x4C80B0u) { return; }
    }
    ctx->pc = 0x4C80B0u;
label_4c80b0:
    // 0x4c80b0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_4c80b4:
    if (ctx->pc == 0x4C80B4u) {
        ctx->pc = 0x4C80B8u;
        goto label_4c80b8;
    }
    ctx->pc = 0x4C80B0u;
    {
        const bool branch_taken_0x4c80b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c80b0) {
            ctx->pc = 0x4C8150u;
            goto label_4c8150;
        }
    }
    ctx->pc = 0x4C80B8u;
label_4c80b8:
    // 0x4c80b8: 0xc0b6e68  jal         func_2DB9A0
label_4c80bc:
    if (ctx->pc == 0x4C80BCu) {
        ctx->pc = 0x4C80BCu;
            // 0x4c80bc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C80C0u;
        goto label_4c80c0;
    }
    ctx->pc = 0x4C80B8u;
    SET_GPR_U32(ctx, 31, 0x4C80C0u);
    ctx->pc = 0x4C80BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C80B8u;
            // 0x4c80bc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80C0u; }
        if (ctx->pc != 0x4C80C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80C0u; }
        if (ctx->pc != 0x4C80C0u) { return; }
    }
    ctx->pc = 0x4C80C0u;
label_4c80c0:
    // 0x4c80c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4c80c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c80c4:
    // 0x4c80c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4c80c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4c80c8:
    // 0x4c80c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4c80c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4c80cc:
    // 0x4c80cc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4c80ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4c80d0:
    // 0x4c80d0: 0xc0b6e3c  jal         func_2DB8F0
label_4c80d4:
    if (ctx->pc == 0x4C80D4u) {
        ctx->pc = 0x4C80D4u;
            // 0x4c80d4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4C80D8u;
        goto label_4c80d8;
    }
    ctx->pc = 0x4C80D0u;
    SET_GPR_U32(ctx, 31, 0x4C80D8u);
    ctx->pc = 0x4C80D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C80D0u;
            // 0x4c80d4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80D8u; }
        if (ctx->pc != 0x4C80D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80D8u; }
        if (ctx->pc != 0x4C80D8u) { return; }
    }
    ctx->pc = 0x4C80D8u;
label_4c80d8:
    // 0x4c80d8: 0xc0dc408  jal         func_371020
label_4c80dc:
    if (ctx->pc == 0x4C80DCu) {
        ctx->pc = 0x4C80DCu;
            // 0x4c80dc: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x4C80E0u;
        goto label_4c80e0;
    }
    ctx->pc = 0x4C80D8u;
    SET_GPR_U32(ctx, 31, 0x4C80E0u);
    ctx->pc = 0x4C80DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C80D8u;
            // 0x4c80dc: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80E0u; }
        if (ctx->pc != 0x4C80E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80E0u; }
        if (ctx->pc != 0x4C80E0u) { return; }
    }
    ctx->pc = 0x4C80E0u;
label_4c80e0:
    // 0x4c80e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c80e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c80e4:
    // 0x4c80e4: 0xc0e07f8  jal         func_381FE0
label_4c80e8:
    if (ctx->pc == 0x4C80E8u) {
        ctx->pc = 0x4C80E8u;
            // 0x4c80e8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C80ECu;
        goto label_4c80ec;
    }
    ctx->pc = 0x4C80E4u;
    SET_GPR_U32(ctx, 31, 0x4C80ECu);
    ctx->pc = 0x4C80E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C80E4u;
            // 0x4c80e8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80ECu; }
        if (ctx->pc != 0x4C80ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80ECu; }
        if (ctx->pc != 0x4C80ECu) { return; }
    }
    ctx->pc = 0x4C80ECu;
label_4c80ec:
    // 0x4c80ec: 0xc13206c  jal         func_4C81B0
label_4c80f0:
    if (ctx->pc == 0x4C80F0u) {
        ctx->pc = 0x4C80F0u;
            // 0x4c80f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C80F4u;
        goto label_4c80f4;
    }
    ctx->pc = 0x4C80ECu;
    SET_GPR_U32(ctx, 31, 0x4C80F4u);
    ctx->pc = 0x4C80F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C80ECu;
            // 0x4c80f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C81B0u;
    if (runtime->hasFunction(0x4C81B0u)) {
        auto targetFn = runtime->lookupFunction(0x4C81B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80F4u; }
        if (ctx->pc != 0x4C80F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C81B0_0x4c81b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C80F4u; }
        if (ctx->pc != 0x4C80F4u) { return; }
    }
    ctx->pc = 0x4C80F4u;
label_4c80f4:
    // 0x4c80f4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x4c80f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4c80f8:
    // 0x4c80f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4c80f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4c80fc:
    // 0x4c80fc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c8100:
    // 0x4c8100: 0x24427370  addiu       $v0, $v0, 0x7370
    ctx->pc = 0x4c8100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29552));
label_4c8104:
    // 0x4c8104: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4c8104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c8108:
    // 0x4c8108: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x4c8108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_4c810c:
    // 0x4c810c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x4c810cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_4c8110:
    // 0x4c8110: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c8110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c8114:
    // 0x4c8114: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4c8114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4c8118:
    // 0x4c8118: 0xc04cc04  jal         func_133010
label_4c811c:
    if (ctx->pc == 0x4C811Cu) {
        ctx->pc = 0x4C811Cu;
            // 0x4c811c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4C8120u;
        goto label_4c8120;
    }
    ctx->pc = 0x4C8118u;
    SET_GPR_U32(ctx, 31, 0x4C8120u);
    ctx->pc = 0x4C811Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8118u;
            // 0x4c811c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8120u; }
        if (ctx->pc != 0x4C8120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8120u; }
        if (ctx->pc != 0x4C8120u) { return; }
    }
    ctx->pc = 0x4C8120u;
label_4c8120:
    // 0x4c8120: 0xc0dc408  jal         func_371020
label_4c8124:
    if (ctx->pc == 0x4C8124u) {
        ctx->pc = 0x4C8124u;
            // 0x4c8124: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x4C8128u;
        goto label_4c8128;
    }
    ctx->pc = 0x4C8120u;
    SET_GPR_U32(ctx, 31, 0x4C8128u);
    ctx->pc = 0x4C8124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8120u;
            // 0x4c8124: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8128u; }
        if (ctx->pc != 0x4C8128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8128u; }
        if (ctx->pc != 0x4C8128u) { return; }
    }
    ctx->pc = 0x4C8128u;
label_4c8128:
    // 0x4c8128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c8128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c812c:
    // 0x4c812c: 0xc115524  jal         func_455490
label_4c8130:
    if (ctx->pc == 0x4C8130u) {
        ctx->pc = 0x4C8130u;
            // 0x4c8130: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4C8134u;
        goto label_4c8134;
    }
    ctx->pc = 0x4C812Cu;
    SET_GPR_U32(ctx, 31, 0x4C8134u);
    ctx->pc = 0x4C8130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C812Cu;
            // 0x4c8130: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x455490u;
    if (runtime->hasFunction(0x455490u)) {
        auto targetFn = runtime->lookupFunction(0x455490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8134u; }
        if (ctx->pc != 0x4C8134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00455490_0x455490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8134u; }
        if (ctx->pc != 0x4C8134u) { return; }
    }
    ctx->pc = 0x4C8134u;
label_4c8134:
    // 0x4c8134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c8134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c8138:
    // 0x4c8138: 0xc0f8e34  jal         func_3E38D0
label_4c813c:
    if (ctx->pc == 0x4C813Cu) {
        ctx->pc = 0x4C813Cu;
            // 0x4c813c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4C8140u;
        goto label_4c8140;
    }
    ctx->pc = 0x4C8138u;
    SET_GPR_U32(ctx, 31, 0x4C8140u);
    ctx->pc = 0x4C813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8138u;
            // 0x4c813c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8140u; }
        if (ctx->pc != 0x4C8140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8140u; }
        if (ctx->pc != 0x4C8140u) { return; }
    }
    ctx->pc = 0x4C8140u;
label_4c8140:
    // 0x4c8140: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x4c8140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_4c8144:
    // 0x4c8144: 0xc122c5c  jal         func_48B170
label_4c8148:
    if (ctx->pc == 0x4C8148u) {
        ctx->pc = 0x4C8148u;
            // 0x4c8148: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4C814Cu;
        goto label_4c814c;
    }
    ctx->pc = 0x4C8144u;
    SET_GPR_U32(ctx, 31, 0x4C814Cu);
    ctx->pc = 0x4C8148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8144u;
            // 0x4c8148: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C814Cu; }
        if (ctx->pc != 0x4C814Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C814Cu; }
        if (ctx->pc != 0x4C814Cu) { return; }
    }
    ctx->pc = 0x4C814Cu;
label_4c814c:
    // 0x4c814c: 0x0  nop
    ctx->pc = 0x4c814cu;
    // NOP
label_4c8150:
    // 0x4c8150: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x4c8150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
label_4c8154:
    // 0x4c8154: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x4c8154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_4c8158:
    // 0x4c8158: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x4c8158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_4c815c:
    // 0x4c815c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4c815cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c8160:
    // 0x4c8160: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x4c8160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
label_4c8164:
    // 0x4c8164: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x4c8164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8168:
    // 0x4c8168: 0x10000003  b           . + 4 + (0x3 << 2)
label_4c816c:
    if (ctx->pc == 0x4C816Cu) {
        ctx->pc = 0x4C816Cu;
            // 0x4c816c: 0xe64000fc  swc1        $f0, 0xFC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        ctx->pc = 0x4C8170u;
        goto label_4c8170;
    }
    ctx->pc = 0x4C8168u;
    {
        const bool branch_taken_0x4c8168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C816Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8168u;
            // 0x4c816c: 0xe64000fc  swc1        $f0, 0xFC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8168) {
            ctx->pc = 0x4C8178u;
            goto label_4c8178;
        }
    }
    ctx->pc = 0x4C8170u;
label_4c8170:
    // 0x4c8170: 0xe64100fc  swc1        $f1, 0xFC($s2)
    ctx->pc = 0x4c8170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
label_4c8174:
    // 0x4c8174: 0x0  nop
    ctx->pc = 0x4c8174u;
    // NOP
label_4c8178:
    // 0x4c8178: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4c8178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4c817c:
    // 0x4c817c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x4c817cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c8180:
    // 0x4c8180: 0x1460ff55  bnez        $v1, . + 4 + (-0xAB << 2)
label_4c8184:
    if (ctx->pc == 0x4C8184u) {
        ctx->pc = 0x4C8184u;
            // 0x4c8184: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4C8188u;
        goto label_4c8188;
    }
    ctx->pc = 0x4C8180u;
    {
        const bool branch_taken_0x4c8180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8180u;
            // 0x4c8184: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8180) {
            ctx->pc = 0x4C7ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c7ed8;
        }
    }
    ctx->pc = 0x4C8188u;
label_4c8188:
    // 0x4c8188: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4c8188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4c818c:
    // 0x4c818c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4c818cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c8190:
    // 0x4c8190: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4c8190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c8194:
    // 0x4c8194: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4c8194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c8198:
    // 0x4c8198: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4c8198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c819c:
    // 0x4c819c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4c819cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c81a0:
    // 0x4c81a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c81a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c81a4:
    // 0x4c81a4: 0x3e00008  jr          $ra
label_4c81a8:
    if (ctx->pc == 0x4C81A8u) {
        ctx->pc = 0x4C81A8u;
            // 0x4c81a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4C81ACu;
        goto label_4c81ac;
    }
    ctx->pc = 0x4C81A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C81A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C81A4u;
            // 0x4c81a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C81ACu;
label_4c81ac:
    // 0x4c81ac: 0x0  nop
    ctx->pc = 0x4c81acu;
    // NOP
}
