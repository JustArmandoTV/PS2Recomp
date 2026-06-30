#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E19F0
// Address: 0x4e19f0 - 0x4e2170
void sub_004E19F0_0x4e19f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E19F0_0x4e19f0");
#endif

    switch (ctx->pc) {
        case 0x4e19f0u: goto label_4e19f0;
        case 0x4e19f4u: goto label_4e19f4;
        case 0x4e19f8u: goto label_4e19f8;
        case 0x4e19fcu: goto label_4e19fc;
        case 0x4e1a00u: goto label_4e1a00;
        case 0x4e1a04u: goto label_4e1a04;
        case 0x4e1a08u: goto label_4e1a08;
        case 0x4e1a0cu: goto label_4e1a0c;
        case 0x4e1a10u: goto label_4e1a10;
        case 0x4e1a14u: goto label_4e1a14;
        case 0x4e1a18u: goto label_4e1a18;
        case 0x4e1a1cu: goto label_4e1a1c;
        case 0x4e1a20u: goto label_4e1a20;
        case 0x4e1a24u: goto label_4e1a24;
        case 0x4e1a28u: goto label_4e1a28;
        case 0x4e1a2cu: goto label_4e1a2c;
        case 0x4e1a30u: goto label_4e1a30;
        case 0x4e1a34u: goto label_4e1a34;
        case 0x4e1a38u: goto label_4e1a38;
        case 0x4e1a3cu: goto label_4e1a3c;
        case 0x4e1a40u: goto label_4e1a40;
        case 0x4e1a44u: goto label_4e1a44;
        case 0x4e1a48u: goto label_4e1a48;
        case 0x4e1a4cu: goto label_4e1a4c;
        case 0x4e1a50u: goto label_4e1a50;
        case 0x4e1a54u: goto label_4e1a54;
        case 0x4e1a58u: goto label_4e1a58;
        case 0x4e1a5cu: goto label_4e1a5c;
        case 0x4e1a60u: goto label_4e1a60;
        case 0x4e1a64u: goto label_4e1a64;
        case 0x4e1a68u: goto label_4e1a68;
        case 0x4e1a6cu: goto label_4e1a6c;
        case 0x4e1a70u: goto label_4e1a70;
        case 0x4e1a74u: goto label_4e1a74;
        case 0x4e1a78u: goto label_4e1a78;
        case 0x4e1a7cu: goto label_4e1a7c;
        case 0x4e1a80u: goto label_4e1a80;
        case 0x4e1a84u: goto label_4e1a84;
        case 0x4e1a88u: goto label_4e1a88;
        case 0x4e1a8cu: goto label_4e1a8c;
        case 0x4e1a90u: goto label_4e1a90;
        case 0x4e1a94u: goto label_4e1a94;
        case 0x4e1a98u: goto label_4e1a98;
        case 0x4e1a9cu: goto label_4e1a9c;
        case 0x4e1aa0u: goto label_4e1aa0;
        case 0x4e1aa4u: goto label_4e1aa4;
        case 0x4e1aa8u: goto label_4e1aa8;
        case 0x4e1aacu: goto label_4e1aac;
        case 0x4e1ab0u: goto label_4e1ab0;
        case 0x4e1ab4u: goto label_4e1ab4;
        case 0x4e1ab8u: goto label_4e1ab8;
        case 0x4e1abcu: goto label_4e1abc;
        case 0x4e1ac0u: goto label_4e1ac0;
        case 0x4e1ac4u: goto label_4e1ac4;
        case 0x4e1ac8u: goto label_4e1ac8;
        case 0x4e1accu: goto label_4e1acc;
        case 0x4e1ad0u: goto label_4e1ad0;
        case 0x4e1ad4u: goto label_4e1ad4;
        case 0x4e1ad8u: goto label_4e1ad8;
        case 0x4e1adcu: goto label_4e1adc;
        case 0x4e1ae0u: goto label_4e1ae0;
        case 0x4e1ae4u: goto label_4e1ae4;
        case 0x4e1ae8u: goto label_4e1ae8;
        case 0x4e1aecu: goto label_4e1aec;
        case 0x4e1af0u: goto label_4e1af0;
        case 0x4e1af4u: goto label_4e1af4;
        case 0x4e1af8u: goto label_4e1af8;
        case 0x4e1afcu: goto label_4e1afc;
        case 0x4e1b00u: goto label_4e1b00;
        case 0x4e1b04u: goto label_4e1b04;
        case 0x4e1b08u: goto label_4e1b08;
        case 0x4e1b0cu: goto label_4e1b0c;
        case 0x4e1b10u: goto label_4e1b10;
        case 0x4e1b14u: goto label_4e1b14;
        case 0x4e1b18u: goto label_4e1b18;
        case 0x4e1b1cu: goto label_4e1b1c;
        case 0x4e1b20u: goto label_4e1b20;
        case 0x4e1b24u: goto label_4e1b24;
        case 0x4e1b28u: goto label_4e1b28;
        case 0x4e1b2cu: goto label_4e1b2c;
        case 0x4e1b30u: goto label_4e1b30;
        case 0x4e1b34u: goto label_4e1b34;
        case 0x4e1b38u: goto label_4e1b38;
        case 0x4e1b3cu: goto label_4e1b3c;
        case 0x4e1b40u: goto label_4e1b40;
        case 0x4e1b44u: goto label_4e1b44;
        case 0x4e1b48u: goto label_4e1b48;
        case 0x4e1b4cu: goto label_4e1b4c;
        case 0x4e1b50u: goto label_4e1b50;
        case 0x4e1b54u: goto label_4e1b54;
        case 0x4e1b58u: goto label_4e1b58;
        case 0x4e1b5cu: goto label_4e1b5c;
        case 0x4e1b60u: goto label_4e1b60;
        case 0x4e1b64u: goto label_4e1b64;
        case 0x4e1b68u: goto label_4e1b68;
        case 0x4e1b6cu: goto label_4e1b6c;
        case 0x4e1b70u: goto label_4e1b70;
        case 0x4e1b74u: goto label_4e1b74;
        case 0x4e1b78u: goto label_4e1b78;
        case 0x4e1b7cu: goto label_4e1b7c;
        case 0x4e1b80u: goto label_4e1b80;
        case 0x4e1b84u: goto label_4e1b84;
        case 0x4e1b88u: goto label_4e1b88;
        case 0x4e1b8cu: goto label_4e1b8c;
        case 0x4e1b90u: goto label_4e1b90;
        case 0x4e1b94u: goto label_4e1b94;
        case 0x4e1b98u: goto label_4e1b98;
        case 0x4e1b9cu: goto label_4e1b9c;
        case 0x4e1ba0u: goto label_4e1ba0;
        case 0x4e1ba4u: goto label_4e1ba4;
        case 0x4e1ba8u: goto label_4e1ba8;
        case 0x4e1bacu: goto label_4e1bac;
        case 0x4e1bb0u: goto label_4e1bb0;
        case 0x4e1bb4u: goto label_4e1bb4;
        case 0x4e1bb8u: goto label_4e1bb8;
        case 0x4e1bbcu: goto label_4e1bbc;
        case 0x4e1bc0u: goto label_4e1bc0;
        case 0x4e1bc4u: goto label_4e1bc4;
        case 0x4e1bc8u: goto label_4e1bc8;
        case 0x4e1bccu: goto label_4e1bcc;
        case 0x4e1bd0u: goto label_4e1bd0;
        case 0x4e1bd4u: goto label_4e1bd4;
        case 0x4e1bd8u: goto label_4e1bd8;
        case 0x4e1bdcu: goto label_4e1bdc;
        case 0x4e1be0u: goto label_4e1be0;
        case 0x4e1be4u: goto label_4e1be4;
        case 0x4e1be8u: goto label_4e1be8;
        case 0x4e1becu: goto label_4e1bec;
        case 0x4e1bf0u: goto label_4e1bf0;
        case 0x4e1bf4u: goto label_4e1bf4;
        case 0x4e1bf8u: goto label_4e1bf8;
        case 0x4e1bfcu: goto label_4e1bfc;
        case 0x4e1c00u: goto label_4e1c00;
        case 0x4e1c04u: goto label_4e1c04;
        case 0x4e1c08u: goto label_4e1c08;
        case 0x4e1c0cu: goto label_4e1c0c;
        case 0x4e1c10u: goto label_4e1c10;
        case 0x4e1c14u: goto label_4e1c14;
        case 0x4e1c18u: goto label_4e1c18;
        case 0x4e1c1cu: goto label_4e1c1c;
        case 0x4e1c20u: goto label_4e1c20;
        case 0x4e1c24u: goto label_4e1c24;
        case 0x4e1c28u: goto label_4e1c28;
        case 0x4e1c2cu: goto label_4e1c2c;
        case 0x4e1c30u: goto label_4e1c30;
        case 0x4e1c34u: goto label_4e1c34;
        case 0x4e1c38u: goto label_4e1c38;
        case 0x4e1c3cu: goto label_4e1c3c;
        case 0x4e1c40u: goto label_4e1c40;
        case 0x4e1c44u: goto label_4e1c44;
        case 0x4e1c48u: goto label_4e1c48;
        case 0x4e1c4cu: goto label_4e1c4c;
        case 0x4e1c50u: goto label_4e1c50;
        case 0x4e1c54u: goto label_4e1c54;
        case 0x4e1c58u: goto label_4e1c58;
        case 0x4e1c5cu: goto label_4e1c5c;
        case 0x4e1c60u: goto label_4e1c60;
        case 0x4e1c64u: goto label_4e1c64;
        case 0x4e1c68u: goto label_4e1c68;
        case 0x4e1c6cu: goto label_4e1c6c;
        case 0x4e1c70u: goto label_4e1c70;
        case 0x4e1c74u: goto label_4e1c74;
        case 0x4e1c78u: goto label_4e1c78;
        case 0x4e1c7cu: goto label_4e1c7c;
        case 0x4e1c80u: goto label_4e1c80;
        case 0x4e1c84u: goto label_4e1c84;
        case 0x4e1c88u: goto label_4e1c88;
        case 0x4e1c8cu: goto label_4e1c8c;
        case 0x4e1c90u: goto label_4e1c90;
        case 0x4e1c94u: goto label_4e1c94;
        case 0x4e1c98u: goto label_4e1c98;
        case 0x4e1c9cu: goto label_4e1c9c;
        case 0x4e1ca0u: goto label_4e1ca0;
        case 0x4e1ca4u: goto label_4e1ca4;
        case 0x4e1ca8u: goto label_4e1ca8;
        case 0x4e1cacu: goto label_4e1cac;
        case 0x4e1cb0u: goto label_4e1cb0;
        case 0x4e1cb4u: goto label_4e1cb4;
        case 0x4e1cb8u: goto label_4e1cb8;
        case 0x4e1cbcu: goto label_4e1cbc;
        case 0x4e1cc0u: goto label_4e1cc0;
        case 0x4e1cc4u: goto label_4e1cc4;
        case 0x4e1cc8u: goto label_4e1cc8;
        case 0x4e1cccu: goto label_4e1ccc;
        case 0x4e1cd0u: goto label_4e1cd0;
        case 0x4e1cd4u: goto label_4e1cd4;
        case 0x4e1cd8u: goto label_4e1cd8;
        case 0x4e1cdcu: goto label_4e1cdc;
        case 0x4e1ce0u: goto label_4e1ce0;
        case 0x4e1ce4u: goto label_4e1ce4;
        case 0x4e1ce8u: goto label_4e1ce8;
        case 0x4e1cecu: goto label_4e1cec;
        case 0x4e1cf0u: goto label_4e1cf0;
        case 0x4e1cf4u: goto label_4e1cf4;
        case 0x4e1cf8u: goto label_4e1cf8;
        case 0x4e1cfcu: goto label_4e1cfc;
        case 0x4e1d00u: goto label_4e1d00;
        case 0x4e1d04u: goto label_4e1d04;
        case 0x4e1d08u: goto label_4e1d08;
        case 0x4e1d0cu: goto label_4e1d0c;
        case 0x4e1d10u: goto label_4e1d10;
        case 0x4e1d14u: goto label_4e1d14;
        case 0x4e1d18u: goto label_4e1d18;
        case 0x4e1d1cu: goto label_4e1d1c;
        case 0x4e1d20u: goto label_4e1d20;
        case 0x4e1d24u: goto label_4e1d24;
        case 0x4e1d28u: goto label_4e1d28;
        case 0x4e1d2cu: goto label_4e1d2c;
        case 0x4e1d30u: goto label_4e1d30;
        case 0x4e1d34u: goto label_4e1d34;
        case 0x4e1d38u: goto label_4e1d38;
        case 0x4e1d3cu: goto label_4e1d3c;
        case 0x4e1d40u: goto label_4e1d40;
        case 0x4e1d44u: goto label_4e1d44;
        case 0x4e1d48u: goto label_4e1d48;
        case 0x4e1d4cu: goto label_4e1d4c;
        case 0x4e1d50u: goto label_4e1d50;
        case 0x4e1d54u: goto label_4e1d54;
        case 0x4e1d58u: goto label_4e1d58;
        case 0x4e1d5cu: goto label_4e1d5c;
        case 0x4e1d60u: goto label_4e1d60;
        case 0x4e1d64u: goto label_4e1d64;
        case 0x4e1d68u: goto label_4e1d68;
        case 0x4e1d6cu: goto label_4e1d6c;
        case 0x4e1d70u: goto label_4e1d70;
        case 0x4e1d74u: goto label_4e1d74;
        case 0x4e1d78u: goto label_4e1d78;
        case 0x4e1d7cu: goto label_4e1d7c;
        case 0x4e1d80u: goto label_4e1d80;
        case 0x4e1d84u: goto label_4e1d84;
        case 0x4e1d88u: goto label_4e1d88;
        case 0x4e1d8cu: goto label_4e1d8c;
        case 0x4e1d90u: goto label_4e1d90;
        case 0x4e1d94u: goto label_4e1d94;
        case 0x4e1d98u: goto label_4e1d98;
        case 0x4e1d9cu: goto label_4e1d9c;
        case 0x4e1da0u: goto label_4e1da0;
        case 0x4e1da4u: goto label_4e1da4;
        case 0x4e1da8u: goto label_4e1da8;
        case 0x4e1dacu: goto label_4e1dac;
        case 0x4e1db0u: goto label_4e1db0;
        case 0x4e1db4u: goto label_4e1db4;
        case 0x4e1db8u: goto label_4e1db8;
        case 0x4e1dbcu: goto label_4e1dbc;
        case 0x4e1dc0u: goto label_4e1dc0;
        case 0x4e1dc4u: goto label_4e1dc4;
        case 0x4e1dc8u: goto label_4e1dc8;
        case 0x4e1dccu: goto label_4e1dcc;
        case 0x4e1dd0u: goto label_4e1dd0;
        case 0x4e1dd4u: goto label_4e1dd4;
        case 0x4e1dd8u: goto label_4e1dd8;
        case 0x4e1ddcu: goto label_4e1ddc;
        case 0x4e1de0u: goto label_4e1de0;
        case 0x4e1de4u: goto label_4e1de4;
        case 0x4e1de8u: goto label_4e1de8;
        case 0x4e1decu: goto label_4e1dec;
        case 0x4e1df0u: goto label_4e1df0;
        case 0x4e1df4u: goto label_4e1df4;
        case 0x4e1df8u: goto label_4e1df8;
        case 0x4e1dfcu: goto label_4e1dfc;
        case 0x4e1e00u: goto label_4e1e00;
        case 0x4e1e04u: goto label_4e1e04;
        case 0x4e1e08u: goto label_4e1e08;
        case 0x4e1e0cu: goto label_4e1e0c;
        case 0x4e1e10u: goto label_4e1e10;
        case 0x4e1e14u: goto label_4e1e14;
        case 0x4e1e18u: goto label_4e1e18;
        case 0x4e1e1cu: goto label_4e1e1c;
        case 0x4e1e20u: goto label_4e1e20;
        case 0x4e1e24u: goto label_4e1e24;
        case 0x4e1e28u: goto label_4e1e28;
        case 0x4e1e2cu: goto label_4e1e2c;
        case 0x4e1e30u: goto label_4e1e30;
        case 0x4e1e34u: goto label_4e1e34;
        case 0x4e1e38u: goto label_4e1e38;
        case 0x4e1e3cu: goto label_4e1e3c;
        case 0x4e1e40u: goto label_4e1e40;
        case 0x4e1e44u: goto label_4e1e44;
        case 0x4e1e48u: goto label_4e1e48;
        case 0x4e1e4cu: goto label_4e1e4c;
        case 0x4e1e50u: goto label_4e1e50;
        case 0x4e1e54u: goto label_4e1e54;
        case 0x4e1e58u: goto label_4e1e58;
        case 0x4e1e5cu: goto label_4e1e5c;
        case 0x4e1e60u: goto label_4e1e60;
        case 0x4e1e64u: goto label_4e1e64;
        case 0x4e1e68u: goto label_4e1e68;
        case 0x4e1e6cu: goto label_4e1e6c;
        case 0x4e1e70u: goto label_4e1e70;
        case 0x4e1e74u: goto label_4e1e74;
        case 0x4e1e78u: goto label_4e1e78;
        case 0x4e1e7cu: goto label_4e1e7c;
        case 0x4e1e80u: goto label_4e1e80;
        case 0x4e1e84u: goto label_4e1e84;
        case 0x4e1e88u: goto label_4e1e88;
        case 0x4e1e8cu: goto label_4e1e8c;
        case 0x4e1e90u: goto label_4e1e90;
        case 0x4e1e94u: goto label_4e1e94;
        case 0x4e1e98u: goto label_4e1e98;
        case 0x4e1e9cu: goto label_4e1e9c;
        case 0x4e1ea0u: goto label_4e1ea0;
        case 0x4e1ea4u: goto label_4e1ea4;
        case 0x4e1ea8u: goto label_4e1ea8;
        case 0x4e1eacu: goto label_4e1eac;
        case 0x4e1eb0u: goto label_4e1eb0;
        case 0x4e1eb4u: goto label_4e1eb4;
        case 0x4e1eb8u: goto label_4e1eb8;
        case 0x4e1ebcu: goto label_4e1ebc;
        case 0x4e1ec0u: goto label_4e1ec0;
        case 0x4e1ec4u: goto label_4e1ec4;
        case 0x4e1ec8u: goto label_4e1ec8;
        case 0x4e1eccu: goto label_4e1ecc;
        case 0x4e1ed0u: goto label_4e1ed0;
        case 0x4e1ed4u: goto label_4e1ed4;
        case 0x4e1ed8u: goto label_4e1ed8;
        case 0x4e1edcu: goto label_4e1edc;
        case 0x4e1ee0u: goto label_4e1ee0;
        case 0x4e1ee4u: goto label_4e1ee4;
        case 0x4e1ee8u: goto label_4e1ee8;
        case 0x4e1eecu: goto label_4e1eec;
        case 0x4e1ef0u: goto label_4e1ef0;
        case 0x4e1ef4u: goto label_4e1ef4;
        case 0x4e1ef8u: goto label_4e1ef8;
        case 0x4e1efcu: goto label_4e1efc;
        case 0x4e1f00u: goto label_4e1f00;
        case 0x4e1f04u: goto label_4e1f04;
        case 0x4e1f08u: goto label_4e1f08;
        case 0x4e1f0cu: goto label_4e1f0c;
        case 0x4e1f10u: goto label_4e1f10;
        case 0x4e1f14u: goto label_4e1f14;
        case 0x4e1f18u: goto label_4e1f18;
        case 0x4e1f1cu: goto label_4e1f1c;
        case 0x4e1f20u: goto label_4e1f20;
        case 0x4e1f24u: goto label_4e1f24;
        case 0x4e1f28u: goto label_4e1f28;
        case 0x4e1f2cu: goto label_4e1f2c;
        case 0x4e1f30u: goto label_4e1f30;
        case 0x4e1f34u: goto label_4e1f34;
        case 0x4e1f38u: goto label_4e1f38;
        case 0x4e1f3cu: goto label_4e1f3c;
        case 0x4e1f40u: goto label_4e1f40;
        case 0x4e1f44u: goto label_4e1f44;
        case 0x4e1f48u: goto label_4e1f48;
        case 0x4e1f4cu: goto label_4e1f4c;
        case 0x4e1f50u: goto label_4e1f50;
        case 0x4e1f54u: goto label_4e1f54;
        case 0x4e1f58u: goto label_4e1f58;
        case 0x4e1f5cu: goto label_4e1f5c;
        case 0x4e1f60u: goto label_4e1f60;
        case 0x4e1f64u: goto label_4e1f64;
        case 0x4e1f68u: goto label_4e1f68;
        case 0x4e1f6cu: goto label_4e1f6c;
        case 0x4e1f70u: goto label_4e1f70;
        case 0x4e1f74u: goto label_4e1f74;
        case 0x4e1f78u: goto label_4e1f78;
        case 0x4e1f7cu: goto label_4e1f7c;
        case 0x4e1f80u: goto label_4e1f80;
        case 0x4e1f84u: goto label_4e1f84;
        case 0x4e1f88u: goto label_4e1f88;
        case 0x4e1f8cu: goto label_4e1f8c;
        case 0x4e1f90u: goto label_4e1f90;
        case 0x4e1f94u: goto label_4e1f94;
        case 0x4e1f98u: goto label_4e1f98;
        case 0x4e1f9cu: goto label_4e1f9c;
        case 0x4e1fa0u: goto label_4e1fa0;
        case 0x4e1fa4u: goto label_4e1fa4;
        case 0x4e1fa8u: goto label_4e1fa8;
        case 0x4e1facu: goto label_4e1fac;
        case 0x4e1fb0u: goto label_4e1fb0;
        case 0x4e1fb4u: goto label_4e1fb4;
        case 0x4e1fb8u: goto label_4e1fb8;
        case 0x4e1fbcu: goto label_4e1fbc;
        case 0x4e1fc0u: goto label_4e1fc0;
        case 0x4e1fc4u: goto label_4e1fc4;
        case 0x4e1fc8u: goto label_4e1fc8;
        case 0x4e1fccu: goto label_4e1fcc;
        case 0x4e1fd0u: goto label_4e1fd0;
        case 0x4e1fd4u: goto label_4e1fd4;
        case 0x4e1fd8u: goto label_4e1fd8;
        case 0x4e1fdcu: goto label_4e1fdc;
        case 0x4e1fe0u: goto label_4e1fe0;
        case 0x4e1fe4u: goto label_4e1fe4;
        case 0x4e1fe8u: goto label_4e1fe8;
        case 0x4e1fecu: goto label_4e1fec;
        case 0x4e1ff0u: goto label_4e1ff0;
        case 0x4e1ff4u: goto label_4e1ff4;
        case 0x4e1ff8u: goto label_4e1ff8;
        case 0x4e1ffcu: goto label_4e1ffc;
        case 0x4e2000u: goto label_4e2000;
        case 0x4e2004u: goto label_4e2004;
        case 0x4e2008u: goto label_4e2008;
        case 0x4e200cu: goto label_4e200c;
        case 0x4e2010u: goto label_4e2010;
        case 0x4e2014u: goto label_4e2014;
        case 0x4e2018u: goto label_4e2018;
        case 0x4e201cu: goto label_4e201c;
        case 0x4e2020u: goto label_4e2020;
        case 0x4e2024u: goto label_4e2024;
        case 0x4e2028u: goto label_4e2028;
        case 0x4e202cu: goto label_4e202c;
        case 0x4e2030u: goto label_4e2030;
        case 0x4e2034u: goto label_4e2034;
        case 0x4e2038u: goto label_4e2038;
        case 0x4e203cu: goto label_4e203c;
        case 0x4e2040u: goto label_4e2040;
        case 0x4e2044u: goto label_4e2044;
        case 0x4e2048u: goto label_4e2048;
        case 0x4e204cu: goto label_4e204c;
        case 0x4e2050u: goto label_4e2050;
        case 0x4e2054u: goto label_4e2054;
        case 0x4e2058u: goto label_4e2058;
        case 0x4e205cu: goto label_4e205c;
        case 0x4e2060u: goto label_4e2060;
        case 0x4e2064u: goto label_4e2064;
        case 0x4e2068u: goto label_4e2068;
        case 0x4e206cu: goto label_4e206c;
        case 0x4e2070u: goto label_4e2070;
        case 0x4e2074u: goto label_4e2074;
        case 0x4e2078u: goto label_4e2078;
        case 0x4e207cu: goto label_4e207c;
        case 0x4e2080u: goto label_4e2080;
        case 0x4e2084u: goto label_4e2084;
        case 0x4e2088u: goto label_4e2088;
        case 0x4e208cu: goto label_4e208c;
        case 0x4e2090u: goto label_4e2090;
        case 0x4e2094u: goto label_4e2094;
        case 0x4e2098u: goto label_4e2098;
        case 0x4e209cu: goto label_4e209c;
        case 0x4e20a0u: goto label_4e20a0;
        case 0x4e20a4u: goto label_4e20a4;
        case 0x4e20a8u: goto label_4e20a8;
        case 0x4e20acu: goto label_4e20ac;
        case 0x4e20b0u: goto label_4e20b0;
        case 0x4e20b4u: goto label_4e20b4;
        case 0x4e20b8u: goto label_4e20b8;
        case 0x4e20bcu: goto label_4e20bc;
        case 0x4e20c0u: goto label_4e20c0;
        case 0x4e20c4u: goto label_4e20c4;
        case 0x4e20c8u: goto label_4e20c8;
        case 0x4e20ccu: goto label_4e20cc;
        case 0x4e20d0u: goto label_4e20d0;
        case 0x4e20d4u: goto label_4e20d4;
        case 0x4e20d8u: goto label_4e20d8;
        case 0x4e20dcu: goto label_4e20dc;
        case 0x4e20e0u: goto label_4e20e0;
        case 0x4e20e4u: goto label_4e20e4;
        case 0x4e20e8u: goto label_4e20e8;
        case 0x4e20ecu: goto label_4e20ec;
        case 0x4e20f0u: goto label_4e20f0;
        case 0x4e20f4u: goto label_4e20f4;
        case 0x4e20f8u: goto label_4e20f8;
        case 0x4e20fcu: goto label_4e20fc;
        case 0x4e2100u: goto label_4e2100;
        case 0x4e2104u: goto label_4e2104;
        case 0x4e2108u: goto label_4e2108;
        case 0x4e210cu: goto label_4e210c;
        case 0x4e2110u: goto label_4e2110;
        case 0x4e2114u: goto label_4e2114;
        case 0x4e2118u: goto label_4e2118;
        case 0x4e211cu: goto label_4e211c;
        case 0x4e2120u: goto label_4e2120;
        case 0x4e2124u: goto label_4e2124;
        case 0x4e2128u: goto label_4e2128;
        case 0x4e212cu: goto label_4e212c;
        case 0x4e2130u: goto label_4e2130;
        case 0x4e2134u: goto label_4e2134;
        case 0x4e2138u: goto label_4e2138;
        case 0x4e213cu: goto label_4e213c;
        case 0x4e2140u: goto label_4e2140;
        case 0x4e2144u: goto label_4e2144;
        case 0x4e2148u: goto label_4e2148;
        case 0x4e214cu: goto label_4e214c;
        case 0x4e2150u: goto label_4e2150;
        case 0x4e2154u: goto label_4e2154;
        case 0x4e2158u: goto label_4e2158;
        case 0x4e215cu: goto label_4e215c;
        case 0x4e2160u: goto label_4e2160;
        case 0x4e2164u: goto label_4e2164;
        case 0x4e2168u: goto label_4e2168;
        case 0x4e216cu: goto label_4e216c;
        default: break;
    }

    ctx->pc = 0x4e19f0u;

label_4e19f0:
    // 0x4e19f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e19f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e19f4:
    // 0x4e19f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4e19f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e19f8:
    // 0x4e19f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e19f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e19fc:
    // 0x4e19fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e19fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e1a00:
    // 0x4e1a00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e1a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e1a04:
    // 0x4e1a04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e1a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e1a08:
    // 0x4e1a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e1a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e1a0c:
    // 0x4e1a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e1a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e1a10:
    // 0x4e1a10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4e1a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e1a14:
    // 0x4e1a14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4e1a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e1a18:
    // 0x4e1a18: 0xc10ca68  jal         func_4329A0
label_4e1a1c:
    if (ctx->pc == 0x4E1A1Cu) {
        ctx->pc = 0x4E1A1Cu;
            // 0x4e1a1c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4E1A20u;
        goto label_4e1a20;
    }
    ctx->pc = 0x4E1A18u;
    SET_GPR_U32(ctx, 31, 0x4E1A20u);
    ctx->pc = 0x4E1A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1A18u;
            // 0x4e1a1c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1A20u; }
        if (ctx->pc != 0x4E1A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1A20u; }
        if (ctx->pc != 0x4E1A20u) { return; }
    }
    ctx->pc = 0x4E1A20u;
label_4e1a20:
    // 0x4e1a20: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e1a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e1a24:
    // 0x4e1a24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e1a28:
    // 0x4e1a28: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4e1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4e1a2c:
    // 0x4e1a2c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4e1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4e1a30:
    // 0x4e1a30: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e1a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4e1a34:
    // 0x4e1a34: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4e1a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4e1a38:
    // 0x4e1a38: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4e1a3c:
    // 0x4e1a3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4e1a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e1a40:
    // 0x4e1a40: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4e1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4e1a44:
    // 0x4e1a44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e1a48:
    // 0x4e1a48: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4e1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4e1a4c:
    // 0x4e1a4c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4e1a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e1a50:
    // 0x4e1a50: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4e1a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4e1a54:
    // 0x4e1a54: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4e1a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4e1a58:
    // 0x4e1a58: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4e1a58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4e1a5c:
    // 0x4e1a5c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4e1a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4e1a60:
    // 0x4e1a60: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4e1a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4e1a64:
    // 0x4e1a64: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e1a68:
    // 0x4e1a68: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4e1a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4e1a6c:
    // 0x4e1a6c: 0xc0582cc  jal         func_160B30
label_4e1a70:
    if (ctx->pc == 0x4E1A70u) {
        ctx->pc = 0x4E1A70u;
            // 0x4e1a70: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4E1A74u;
        goto label_4e1a74;
    }
    ctx->pc = 0x4E1A6Cu;
    SET_GPR_U32(ctx, 31, 0x4E1A74u);
    ctx->pc = 0x4E1A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1A6Cu;
            // 0x4e1a70: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1A74u; }
        if (ctx->pc != 0x4E1A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1A74u; }
        if (ctx->pc != 0x4E1A74u) { return; }
    }
    ctx->pc = 0x4E1A74u;
label_4e1a74:
    // 0x4e1a74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e1a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e1a78:
    // 0x4e1a78: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4e1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4e1a7c:
    // 0x4e1a7c: 0x24633538  addiu       $v1, $v1, 0x3538
    ctx->pc = 0x4e1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13624));
label_4e1a80:
    // 0x4e1a80: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4e1a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4e1a84:
    // 0x4e1a84: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4e1a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4e1a88:
    // 0x4e1a88: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e1a8c:
    // 0x4e1a8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e1a90:
    // 0x4e1a90: 0xac44aa90  sw          $a0, -0x5570($v0)
    ctx->pc = 0x4e1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945424), GPR_U32(ctx, 4));
label_4e1a94:
    // 0x4e1a94: 0x24633550  addiu       $v1, $v1, 0x3550
    ctx->pc = 0x4e1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13648));
label_4e1a98:
    // 0x4e1a98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e1a9c:
    // 0x4e1a9c: 0x24423588  addiu       $v0, $v0, 0x3588
    ctx->pc = 0x4e1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13704));
label_4e1aa0:
    // 0x4e1aa0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e1aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4e1aa4:
    // 0x4e1aa4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4e1aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4e1aa8:
    // 0x4e1aa8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4e1aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4e1aac:
    // 0x4e1aac: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4e1aacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4e1ab0:
    // 0x4e1ab0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4e1ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4e1ab4:
    // 0x4e1ab4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4e1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4e1ab8:
    // 0x4e1ab8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4e1ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4e1abc:
    // 0x4e1abc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4e1abcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4e1ac0:
    // 0x4e1ac0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4e1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4e1ac4:
    // 0x4e1ac4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4e1ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4e1ac8:
    // 0x4e1ac8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4e1ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4e1acc:
    // 0x4e1acc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4e1accu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4e1ad0:
    // 0x4e1ad0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4e1ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4e1ad4:
    // 0x4e1ad4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4e1ad8:
    if (ctx->pc == 0x4E1AD8u) {
        ctx->pc = 0x4E1ADCu;
        goto label_4e1adc;
    }
    ctx->pc = 0x4E1AD4u;
    {
        const bool branch_taken_0x4e1ad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1ad4) {
            ctx->pc = 0x4E1B68u;
            goto label_4e1b68;
        }
    }
    ctx->pc = 0x4E1ADCu;
label_4e1adc:
    // 0x4e1adc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4e1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4e1ae0:
    // 0x4e1ae0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4e1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4e1ae4:
    // 0x4e1ae4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4e1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4e1ae8:
    // 0x4e1ae8: 0xc040138  jal         func_1004E0
label_4e1aec:
    if (ctx->pc == 0x4E1AECu) {
        ctx->pc = 0x4E1AECu;
            // 0x4e1aec: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4E1AF0u;
        goto label_4e1af0;
    }
    ctx->pc = 0x4E1AE8u;
    SET_GPR_U32(ctx, 31, 0x4E1AF0u);
    ctx->pc = 0x4E1AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1AE8u;
            // 0x4e1aec: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1AF0u; }
        if (ctx->pc != 0x4E1AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1AF0u; }
        if (ctx->pc != 0x4E1AF0u) { return; }
    }
    ctx->pc = 0x4E1AF0u;
label_4e1af0:
    // 0x4e1af0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e1af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4e1af4:
    // 0x4e1af4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x4e1af4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_4e1af8:
    // 0x4e1af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e1afc:
    // 0x4e1afc: 0x24a51b90  addiu       $a1, $a1, 0x1B90
    ctx->pc = 0x4e1afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7056));
label_4e1b00:
    // 0x4e1b00: 0x24c612c0  addiu       $a2, $a2, 0x12C0
    ctx->pc = 0x4e1b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4800));
label_4e1b04:
    // 0x4e1b04: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4e1b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_4e1b08:
    // 0x4e1b08: 0xc040840  jal         func_102100
label_4e1b0c:
    if (ctx->pc == 0x4E1B0Cu) {
        ctx->pc = 0x4E1B0Cu;
            // 0x4e1b0c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1B10u;
        goto label_4e1b10;
    }
    ctx->pc = 0x4E1B08u;
    SET_GPR_U32(ctx, 31, 0x4E1B10u);
    ctx->pc = 0x4E1B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1B08u;
            // 0x4e1b0c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1B10u; }
        if (ctx->pc != 0x4E1B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1B10u; }
        if (ctx->pc != 0x4E1B10u) { return; }
    }
    ctx->pc = 0x4E1B10u;
label_4e1b10:
    // 0x4e1b10: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4e1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4e1b14:
    // 0x4e1b14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e1b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e1b18:
    // 0x4e1b18: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4e1b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4e1b1c:
    // 0x4e1b1c: 0xc0788fc  jal         func_1E23F0
label_4e1b20:
    if (ctx->pc == 0x4E1B20u) {
        ctx->pc = 0x4E1B20u;
            // 0x4e1b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1B24u;
        goto label_4e1b24;
    }
    ctx->pc = 0x4E1B1Cu;
    SET_GPR_U32(ctx, 31, 0x4E1B24u);
    ctx->pc = 0x4E1B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1B1Cu;
            // 0x4e1b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1B24u; }
        if (ctx->pc != 0x4E1B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1B24u; }
        if (ctx->pc != 0x4E1B24u) { return; }
    }
    ctx->pc = 0x4E1B24u;
label_4e1b24:
    // 0x4e1b24: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4e1b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4e1b28:
    // 0x4e1b28: 0xc0788fc  jal         func_1E23F0
label_4e1b2c:
    if (ctx->pc == 0x4E1B2Cu) {
        ctx->pc = 0x4E1B2Cu;
            // 0x4e1b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1B30u;
        goto label_4e1b30;
    }
    ctx->pc = 0x4E1B28u;
    SET_GPR_U32(ctx, 31, 0x4E1B30u);
    ctx->pc = 0x4E1B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1B28u;
            // 0x4e1b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1B30u; }
        if (ctx->pc != 0x4E1B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1B30u; }
        if (ctx->pc != 0x4E1B30u) { return; }
    }
    ctx->pc = 0x4E1B30u;
label_4e1b30:
    // 0x4e1b30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e1b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1b34:
    // 0x4e1b34: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4e1b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4e1b38:
    // 0x4e1b38: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4e1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4e1b3c:
    // 0x4e1b3c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4e1b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4e1b40:
    // 0x4e1b40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e1b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e1b44:
    // 0x4e1b44: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4e1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4e1b48:
    // 0x4e1b48: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4e1b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4e1b4c:
    // 0x4e1b4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e1b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e1b50:
    // 0x4e1b50: 0xc0a997c  jal         func_2A65F0
label_4e1b54:
    if (ctx->pc == 0x4E1B54u) {
        ctx->pc = 0x4E1B54u;
            // 0x4e1b54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4E1B58u;
        goto label_4e1b58;
    }
    ctx->pc = 0x4E1B50u;
    SET_GPR_U32(ctx, 31, 0x4E1B58u);
    ctx->pc = 0x4E1B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1B50u;
            // 0x4e1b54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1B58u; }
        if (ctx->pc != 0x4E1B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1B58u; }
        if (ctx->pc != 0x4E1B58u) { return; }
    }
    ctx->pc = 0x4E1B58u;
label_4e1b58:
    // 0x4e1b58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4e1b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4e1b5c:
    // 0x4e1b5c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4e1b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4e1b60:
    // 0x4e1b60: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4e1b64:
    if (ctx->pc == 0x4E1B64u) {
        ctx->pc = 0x4E1B64u;
            // 0x4e1b64: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x4E1B68u;
        goto label_4e1b68;
    }
    ctx->pc = 0x4E1B60u;
    {
        const bool branch_taken_0x4e1b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1B60u;
            // 0x4e1b64: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1b60) {
            ctx->pc = 0x4E1B34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e1b34;
        }
    }
    ctx->pc = 0x4E1B68u;
label_4e1b68:
    // 0x4e1b68: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e1b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e1b6c:
    // 0x4e1b6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e1b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e1b70:
    // 0x4e1b70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e1b70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e1b74:
    // 0x4e1b74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e1b74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e1b78:
    // 0x4e1b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e1b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1b7c:
    // 0x4e1b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1b80:
    // 0x4e1b80: 0x3e00008  jr          $ra
label_4e1b84:
    if (ctx->pc == 0x4E1B84u) {
        ctx->pc = 0x4E1B84u;
            // 0x4e1b84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E1B88u;
        goto label_4e1b88;
    }
    ctx->pc = 0x4E1B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1B80u;
            // 0x4e1b84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1B88u;
label_4e1b88:
    // 0x4e1b88: 0x0  nop
    ctx->pc = 0x4e1b88u;
    // NOP
label_4e1b8c:
    // 0x4e1b8c: 0x0  nop
    ctx->pc = 0x4e1b8cu;
    // NOP
label_4e1b90:
    // 0x4e1b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e1b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e1b94:
    // 0x4e1b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e1b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e1b98:
    // 0x4e1b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e1b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e1b9c:
    // 0x4e1b9c: 0xc12e6bc  jal         func_4B9AF0
label_4e1ba0:
    if (ctx->pc == 0x4E1BA0u) {
        ctx->pc = 0x4E1BA0u;
            // 0x4e1ba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1BA4u;
        goto label_4e1ba4;
    }
    ctx->pc = 0x4E1B9Cu;
    SET_GPR_U32(ctx, 31, 0x4E1BA4u);
    ctx->pc = 0x4E1BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1B9Cu;
            // 0x4e1ba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1BA4u; }
        if (ctx->pc != 0x4E1BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1BA4u; }
        if (ctx->pc != 0x4E1BA4u) { return; }
    }
    ctx->pc = 0x4E1BA4u;
label_4e1ba4:
    // 0x4e1ba4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e1ba8:
    // 0x4e1ba8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e1bac:
    // 0x4e1bac: 0x244235f0  addiu       $v0, $v0, 0x35F0
    ctx->pc = 0x4e1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13808));
label_4e1bb0:
    // 0x4e1bb0: 0x24633630  addiu       $v1, $v1, 0x3630
    ctx->pc = 0x4e1bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13872));
label_4e1bb4:
    // 0x4e1bb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e1bb8:
    // 0x4e1bb8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4e1bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4e1bbc:
    // 0x4e1bbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e1bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e1bc0:
    // 0x4e1bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e1bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1bc4:
    // 0x4e1bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1bc8:
    // 0x4e1bc8: 0x3e00008  jr          $ra
label_4e1bcc:
    if (ctx->pc == 0x4E1BCCu) {
        ctx->pc = 0x4E1BCCu;
            // 0x4e1bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E1BD0u;
        goto label_4e1bd0;
    }
    ctx->pc = 0x4E1BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1BC8u;
            // 0x4e1bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1BD0u;
label_4e1bd0:
    // 0x4e1bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e1bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e1bd4:
    // 0x4e1bd4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e1bd8:
    // 0x4e1bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e1bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e1bdc:
    // 0x4e1bdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4e1bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e1be0:
    // 0x4e1be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e1be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e1be4:
    // 0x4e1be4: 0x8c42aa90  lw          $v0, -0x5570($v0)
    ctx->pc = 0x4e1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945424)));
label_4e1be8:
    // 0x4e1be8: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4e1be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4e1bec:
    // 0x4e1bec: 0xc12e608  jal         func_4B9820
label_4e1bf0:
    if (ctx->pc == 0x4E1BF0u) {
        ctx->pc = 0x4E1BF0u;
            // 0x4e1bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1BF4u;
        goto label_4e1bf4;
    }
    ctx->pc = 0x4E1BECu;
    SET_GPR_U32(ctx, 31, 0x4E1BF4u);
    ctx->pc = 0x4E1BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1BECu;
            // 0x4e1bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1BF4u; }
        if (ctx->pc != 0x4E1BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1BF4u; }
        if (ctx->pc != 0x4E1BF4u) { return; }
    }
    ctx->pc = 0x4E1BF4u;
label_4e1bf4:
    // 0x4e1bf4: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x4e1bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
label_4e1bf8:
    // 0x4e1bf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e1bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1bfc:
    // 0x4e1bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1c00:
    // 0x4e1c00: 0x3e00008  jr          $ra
label_4e1c04:
    if (ctx->pc == 0x4E1C04u) {
        ctx->pc = 0x4E1C04u;
            // 0x4e1c04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E1C08u;
        goto label_4e1c08;
    }
    ctx->pc = 0x4E1C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1C00u;
            // 0x4e1c04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1C08u;
label_4e1c08:
    // 0x4e1c08: 0x0  nop
    ctx->pc = 0x4e1c08u;
    // NOP
label_4e1c0c:
    // 0x4e1c0c: 0x0  nop
    ctx->pc = 0x4e1c0cu;
    // NOP
label_4e1c10:
    // 0x4e1c10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e1c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e1c14:
    // 0x4e1c14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4e1c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4e1c18:
    // 0x4e1c18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e1c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e1c1c:
    // 0x4e1c1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e1c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e1c20:
    // 0x4e1c20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e1c20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e1c24:
    // 0x4e1c24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e1c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e1c28:
    // 0x4e1c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e1c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e1c2c:
    // 0x4e1c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e1c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e1c30:
    // 0x4e1c30: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4e1c30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e1c34:
    // 0x4e1c34: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4e1c38:
    if (ctx->pc == 0x4E1C38u) {
        ctx->pc = 0x4E1C38u;
            // 0x4e1c38: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1C3Cu;
        goto label_4e1c3c;
    }
    ctx->pc = 0x4E1C34u;
    {
        const bool branch_taken_0x4e1c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1C34u;
            // 0x4e1c38: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1c34) {
            ctx->pc = 0x4E1C78u;
            goto label_4e1c78;
        }
    }
    ctx->pc = 0x4E1C3Cu;
label_4e1c3c:
    // 0x4e1c3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e1c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1c40:
    // 0x4e1c40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e1c40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1c44:
    // 0x4e1c44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e1c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1c48:
    // 0x4e1c48: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4e1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4e1c4c:
    // 0x4e1c4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4e1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4e1c50:
    // 0x4e1c50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4e1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e1c54:
    // 0x4e1c54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e1c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e1c58:
    // 0x4e1c58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4e1c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4e1c5c:
    // 0x4e1c5c: 0x320f809  jalr        $t9
label_4e1c60:
    if (ctx->pc == 0x4E1C60u) {
        ctx->pc = 0x4E1C64u;
        goto label_4e1c64;
    }
    ctx->pc = 0x4E1C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E1C64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E1C64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E1C64u; }
            if (ctx->pc != 0x4E1C64u) { return; }
        }
        }
    }
    ctx->pc = 0x4E1C64u;
label_4e1c64:
    // 0x4e1c64: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4e1c64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4e1c68:
    // 0x4e1c68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4e1c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4e1c6c:
    // 0x4e1c6c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4e1c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4e1c70:
    // 0x4e1c70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4e1c74:
    if (ctx->pc == 0x4E1C74u) {
        ctx->pc = 0x4E1C74u;
            // 0x4e1c74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4E1C78u;
        goto label_4e1c78;
    }
    ctx->pc = 0x4E1C70u;
    {
        const bool branch_taken_0x4e1c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1C70u;
            // 0x4e1c74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1c70) {
            ctx->pc = 0x4E1C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e1c48;
        }
    }
    ctx->pc = 0x4E1C78u;
label_4e1c78:
    // 0x4e1c78: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e1c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e1c7c:
    // 0x4e1c7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4e1c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4e1c80:
    // 0x4e1c80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e1c80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e1c84:
    // 0x4e1c84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e1c84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e1c88:
    // 0x4e1c88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e1c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e1c8c:
    // 0x4e1c8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e1c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1c90:
    // 0x4e1c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1c94:
    // 0x4e1c94: 0x3e00008  jr          $ra
label_4e1c98:
    if (ctx->pc == 0x4E1C98u) {
        ctx->pc = 0x4E1C98u;
            // 0x4e1c98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E1C9Cu;
        goto label_4e1c9c;
    }
    ctx->pc = 0x4E1C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1C94u;
            // 0x4e1c98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1C9Cu;
label_4e1c9c:
    // 0x4e1c9c: 0x0  nop
    ctx->pc = 0x4e1c9cu;
    // NOP
label_4e1ca0:
    // 0x4e1ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e1ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e1ca4:
    // 0x4e1ca4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e1ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e1ca8:
    // 0x4e1ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e1ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e1cac:
    // 0x4e1cac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4e1cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4e1cb0:
    // 0x4e1cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e1cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e1cb4:
    // 0x4e1cb4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4e1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4e1cb8:
    // 0x4e1cb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4e1cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e1cbc:
    // 0x4e1cbc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4e1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4e1cc0:
    // 0x4e1cc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e1cc4:
    // 0x4e1cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e1cc8:
    // 0x4e1cc8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4e1cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4e1ccc:
    // 0x4e1ccc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4e1cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e1cd0:
    // 0x4e1cd0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4e1cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4e1cd4:
    // 0x4e1cd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4e1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4e1cd8:
    // 0x4e1cd8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4e1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4e1cdc:
    // 0x4e1cdc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4e1cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4e1ce0:
    // 0x4e1ce0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4e1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4e1ce4:
    // 0x4e1ce4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4e1ce8:
    // 0x4e1ce8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4e1ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4e1cec:
    // 0x4e1cec: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4e1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e1cf0:
    // 0x4e1cf0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4e1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4e1cf4:
    // 0x4e1cf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e1cf8:
    // 0x4e1cf8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4e1cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e1cfc:
    // 0x4e1cfc: 0xc0a997c  jal         func_2A65F0
label_4e1d00:
    if (ctx->pc == 0x4E1D00u) {
        ctx->pc = 0x4E1D00u;
            // 0x4e1d00: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4E1D04u;
        goto label_4e1d04;
    }
    ctx->pc = 0x4E1CFCu;
    SET_GPR_U32(ctx, 31, 0x4E1D04u);
    ctx->pc = 0x4E1D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1CFCu;
            // 0x4e1d00: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1D04u; }
        if (ctx->pc != 0x4E1D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1D04u; }
        if (ctx->pc != 0x4E1D04u) { return; }
    }
    ctx->pc = 0x4E1D04u;
label_4e1d04:
    // 0x4e1d04: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4e1d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4e1d08:
    // 0x4e1d08: 0xc0d879c  jal         func_361E70
label_4e1d0c:
    if (ctx->pc == 0x4E1D0Cu) {
        ctx->pc = 0x4E1D0Cu;
            // 0x4e1d0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1D10u;
        goto label_4e1d10;
    }
    ctx->pc = 0x4E1D08u;
    SET_GPR_U32(ctx, 31, 0x4E1D10u);
    ctx->pc = 0x4E1D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1D08u;
            // 0x4e1d0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1D10u; }
        if (ctx->pc != 0x4E1D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1D10u; }
        if (ctx->pc != 0x4E1D10u) { return; }
    }
    ctx->pc = 0x4E1D10u;
label_4e1d10:
    // 0x4e1d10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e1d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1d14:
    // 0x4e1d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1d18:
    // 0x4e1d18: 0x3e00008  jr          $ra
label_4e1d1c:
    if (ctx->pc == 0x4E1D1Cu) {
        ctx->pc = 0x4E1D1Cu;
            // 0x4e1d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E1D20u;
        goto label_4e1d20;
    }
    ctx->pc = 0x4E1D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1D18u;
            // 0x4e1d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1D20u;
label_4e1d20:
    // 0x4e1d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e1d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e1d24:
    // 0x4e1d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e1d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e1d28:
    // 0x4e1d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e1d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e1d2c:
    // 0x4e1d2c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4e1d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4e1d30:
    // 0x4e1d30: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4e1d34:
    if (ctx->pc == 0x4E1D34u) {
        ctx->pc = 0x4E1D34u;
            // 0x4e1d34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1D38u;
        goto label_4e1d38;
    }
    ctx->pc = 0x4E1D30u;
    {
        const bool branch_taken_0x4e1d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1D30u;
            // 0x4e1d34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1d30) {
            ctx->pc = 0x4E1E50u;
            goto label_4e1e50;
        }
    }
    ctx->pc = 0x4E1D38u;
label_4e1d38:
    // 0x4e1d38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e1d3c:
    // 0x4e1d3c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4e1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4e1d40:
    // 0x4e1d40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4e1d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4e1d44:
    // 0x4e1d44: 0xc075128  jal         func_1D44A0
label_4e1d48:
    if (ctx->pc == 0x4E1D48u) {
        ctx->pc = 0x4E1D48u;
            // 0x4e1d48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4E1D4Cu;
        goto label_4e1d4c;
    }
    ctx->pc = 0x4E1D44u;
    SET_GPR_U32(ctx, 31, 0x4E1D4Cu);
    ctx->pc = 0x4E1D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1D44u;
            // 0x4e1d48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1D4Cu; }
        if (ctx->pc != 0x4E1D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1D4Cu; }
        if (ctx->pc != 0x4E1D4Cu) { return; }
    }
    ctx->pc = 0x4E1D4Cu;
label_4e1d4c:
    // 0x4e1d4c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4e1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e1d50:
    // 0x4e1d50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e1d54:
    // 0x4e1d54: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4e1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4e1d58:
    // 0x4e1d58: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4e1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4e1d5c:
    // 0x4e1d5c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e1d5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e1d60:
    // 0x4e1d60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e1d64:
    if (ctx->pc == 0x4E1D64u) {
        ctx->pc = 0x4E1D64u;
            // 0x4e1d64: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4E1D68u;
        goto label_4e1d68;
    }
    ctx->pc = 0x4E1D60u;
    {
        const bool branch_taken_0x4e1d60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1D60u;
            // 0x4e1d64: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1d60) {
            ctx->pc = 0x4E1D70u;
            goto label_4e1d70;
        }
    }
    ctx->pc = 0x4E1D68u;
label_4e1d68:
    // 0x4e1d68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e1d6c:
    // 0x4e1d6c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4e1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4e1d70:
    // 0x4e1d70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e1d74:
    // 0x4e1d74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e1d78:
    // 0x4e1d78: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4e1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4e1d7c:
    // 0x4e1d7c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4e1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4e1d80:
    // 0x4e1d80: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e1d80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e1d84:
    // 0x4e1d84: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e1d88:
    if (ctx->pc == 0x4E1D88u) {
        ctx->pc = 0x4E1D88u;
            // 0x4e1d88: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E1D8Cu;
        goto label_4e1d8c;
    }
    ctx->pc = 0x4E1D84u;
    {
        const bool branch_taken_0x4e1d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1d84) {
            ctx->pc = 0x4E1D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1D84u;
            // 0x4e1d88: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E1D98u;
            goto label_4e1d98;
        }
    }
    ctx->pc = 0x4E1D8Cu;
label_4e1d8c:
    // 0x4e1d8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e1d90:
    // 0x4e1d90: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4e1d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4e1d94:
    // 0x4e1d94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e1d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e1d98:
    // 0x4e1d98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e1d9c:
    // 0x4e1d9c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4e1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4e1da0:
    // 0x4e1da0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4e1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4e1da4:
    // 0x4e1da4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e1da4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e1da8:
    // 0x4e1da8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e1dac:
    if (ctx->pc == 0x4E1DACu) {
        ctx->pc = 0x4E1DACu;
            // 0x4e1dac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E1DB0u;
        goto label_4e1db0;
    }
    ctx->pc = 0x4E1DA8u;
    {
        const bool branch_taken_0x4e1da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1da8) {
            ctx->pc = 0x4E1DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1DA8u;
            // 0x4e1dac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E1DBCu;
            goto label_4e1dbc;
        }
    }
    ctx->pc = 0x4E1DB0u;
label_4e1db0:
    // 0x4e1db0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e1db4:
    // 0x4e1db4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4e1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4e1db8:
    // 0x4e1db8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e1db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e1dbc:
    // 0x4e1dbc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4e1dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4e1dc0:
    // 0x4e1dc0: 0x320f809  jalr        $t9
label_4e1dc4:
    if (ctx->pc == 0x4E1DC4u) {
        ctx->pc = 0x4E1DC4u;
            // 0x4e1dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1DC8u;
        goto label_4e1dc8;
    }
    ctx->pc = 0x4E1DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E1DC8u);
        ctx->pc = 0x4E1DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1DC0u;
            // 0x4e1dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E1DC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E1DC8u; }
            if (ctx->pc != 0x4E1DC8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E1DC8u;
label_4e1dc8:
    // 0x4e1dc8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4e1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e1dcc:
    // 0x4e1dcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1dd0:
    // 0x4e1dd0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4e1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4e1dd4:
    // 0x4e1dd4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e1dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e1dd8:
    // 0x4e1dd8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4e1dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4e1ddc:
    // 0x4e1ddc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e1ddcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e1de0:
    // 0x4e1de0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e1de4:
    if (ctx->pc == 0x4E1DE4u) {
        ctx->pc = 0x4E1DE4u;
            // 0x4e1de4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4E1DE8u;
        goto label_4e1de8;
    }
    ctx->pc = 0x4E1DE0u;
    {
        const bool branch_taken_0x4e1de0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1de0) {
            ctx->pc = 0x4E1DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1DE0u;
            // 0x4e1de4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E1DF4u;
            goto label_4e1df4;
        }
    }
    ctx->pc = 0x4E1DE8u;
label_4e1de8:
    // 0x4e1de8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1dec:
    // 0x4e1dec: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4e1decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4e1df0:
    // 0x4e1df0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4e1df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e1df4:
    // 0x4e1df4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1df8:
    // 0x4e1df8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4e1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4e1dfc:
    // 0x4e1dfc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e1dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e1e00:
    // 0x4e1e00: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4e1e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4e1e04:
    // 0x4e1e04: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e1e04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e1e08:
    // 0x4e1e08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e1e0c:
    if (ctx->pc == 0x4E1E0Cu) {
        ctx->pc = 0x4E1E10u;
        goto label_4e1e10;
    }
    ctx->pc = 0x4E1E08u;
    {
        const bool branch_taken_0x4e1e08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1e08) {
            ctx->pc = 0x4E1E18u;
            goto label_4e1e18;
        }
    }
    ctx->pc = 0x4E1E10u;
label_4e1e10:
    // 0x4e1e10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1e14:
    // 0x4e1e14: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4e1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4e1e18:
    // 0x4e1e18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1e1c:
    // 0x4e1e1c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4e1e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4e1e20:
    // 0x4e1e20: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4e1e20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4e1e24:
    // 0x4e1e24: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e1e28:
    if (ctx->pc == 0x4E1E28u) {
        ctx->pc = 0x4E1E2Cu;
        goto label_4e1e2c;
    }
    ctx->pc = 0x4E1E24u;
    {
        const bool branch_taken_0x4e1e24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1e24) {
            ctx->pc = 0x4E1E34u;
            goto label_4e1e34;
        }
    }
    ctx->pc = 0x4E1E2Cu;
label_4e1e2c:
    // 0x4e1e2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1e30:
    // 0x4e1e30: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4e1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4e1e34:
    // 0x4e1e34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1e38:
    // 0x4e1e38: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4e1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4e1e3c:
    // 0x4e1e3c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4e1e3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4e1e40:
    // 0x4e1e40: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e1e44:
    if (ctx->pc == 0x4E1E44u) {
        ctx->pc = 0x4E1E44u;
            // 0x4e1e44: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4E1E48u;
        goto label_4e1e48;
    }
    ctx->pc = 0x4E1E40u;
    {
        const bool branch_taken_0x4e1e40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1e40) {
            ctx->pc = 0x4E1E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1E40u;
            // 0x4e1e44: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E1E54u;
            goto label_4e1e54;
        }
    }
    ctx->pc = 0x4E1E48u;
label_4e1e48:
    // 0x4e1e48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1e4c:
    // 0x4e1e4c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4e1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4e1e50:
    // 0x4e1e50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e1e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1e54:
    // 0x4e1e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1e58:
    // 0x4e1e58: 0x3e00008  jr          $ra
label_4e1e5c:
    if (ctx->pc == 0x4E1E5Cu) {
        ctx->pc = 0x4E1E5Cu;
            // 0x4e1e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E1E60u;
        goto label_4e1e60;
    }
    ctx->pc = 0x4E1E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1E58u;
            // 0x4e1e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1E60u;
label_4e1e60:
    // 0x4e1e60: 0x81384b0  j           func_4E12C0
label_4e1e64:
    if (ctx->pc == 0x4E1E64u) {
        ctx->pc = 0x4E1E64u;
            // 0x4e1e64: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4E1E68u;
        goto label_4e1e68;
    }
    ctx->pc = 0x4E1E60u;
    ctx->pc = 0x4E1E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1E60u;
            // 0x4e1e64: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E12C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4E12C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E1E68u;
label_4e1e68:
    // 0x4e1e68: 0x0  nop
    ctx->pc = 0x4e1e68u;
    // NOP
label_4e1e6c:
    // 0x4e1e6c: 0x0  nop
    ctx->pc = 0x4e1e6cu;
    // NOP
label_4e1e70:
    // 0x4e1e70: 0x8138610  j           func_4E1840
label_4e1e74:
    if (ctx->pc == 0x4E1E74u) {
        ctx->pc = 0x4E1E74u;
            // 0x4e1e74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E1E78u;
        goto label_4e1e78;
    }
    ctx->pc = 0x4E1E70u;
    ctx->pc = 0x4E1E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1E70u;
            // 0x4e1e74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E1840u;
    {
        auto targetFn = runtime->lookupFunction(0x4E1840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E1E78u;
label_4e1e78:
    // 0x4e1e78: 0x0  nop
    ctx->pc = 0x4e1e78u;
    // NOP
label_4e1e7c:
    // 0x4e1e7c: 0x0  nop
    ctx->pc = 0x4e1e7cu;
    // NOP
label_4e1e80:
    // 0x4e1e80: 0x8138458  j           func_4E1160
label_4e1e84:
    if (ctx->pc == 0x4E1E84u) {
        ctx->pc = 0x4E1E84u;
            // 0x4e1e84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E1E88u;
        goto label_4e1e88;
    }
    ctx->pc = 0x4E1E80u;
    ctx->pc = 0x4E1E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1E80u;
            // 0x4e1e84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E1160u;
    if (runtime->hasFunction(0x4E1160u)) {
        auto targetFn = runtime->lookupFunction(0x4E1160u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004E1160_0x4e1160(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4E1E88u;
label_4e1e88:
    // 0x4e1e88: 0x0  nop
    ctx->pc = 0x4e1e88u;
    // NOP
label_4e1e8c:
    // 0x4e1e8c: 0x0  nop
    ctx->pc = 0x4e1e8cu;
    // NOP
label_4e1e90:
    // 0x4e1e90: 0x8138434  j           func_4E10D0
label_4e1e94:
    if (ctx->pc == 0x4E1E94u) {
        ctx->pc = 0x4E1E94u;
            // 0x4e1e94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E1E98u;
        goto label_4e1e98;
    }
    ctx->pc = 0x4E1E90u;
    ctx->pc = 0x4E1E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1E90u;
            // 0x4e1e94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E10D0u;
    {
        auto targetFn = runtime->lookupFunction(0x4E10D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E1E98u;
label_4e1e98:
    // 0x4e1e98: 0x0  nop
    ctx->pc = 0x4e1e98u;
    // NOP
label_4e1e9c:
    // 0x4e1e9c: 0x0  nop
    ctx->pc = 0x4e1e9cu;
    // NOP
label_4e1ea0:
    // 0x4e1ea0: 0x3e00008  jr          $ra
label_4e1ea4:
    if (ctx->pc == 0x4E1EA4u) {
        ctx->pc = 0x4E1EA4u;
            // 0x4e1ea4: 0x240265a4  addiu       $v0, $zero, 0x65A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26020));
        ctx->pc = 0x4E1EA8u;
        goto label_4e1ea8;
    }
    ctx->pc = 0x4E1EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1EA0u;
            // 0x4e1ea4: 0x240265a4  addiu       $v0, $zero, 0x65A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1EA8u;
label_4e1ea8:
    // 0x4e1ea8: 0x0  nop
    ctx->pc = 0x4e1ea8u;
    // NOP
label_4e1eac:
    // 0x4e1eac: 0x0  nop
    ctx->pc = 0x4e1eacu;
    // NOP
label_4e1eb0:
    // 0x4e1eb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4e1eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4e1eb4:
    // 0x4e1eb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4e1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e1eb8:
    // 0x4e1eb8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4e1eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4e1ebc:
    // 0x4e1ebc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4e1ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4e1ec0:
    // 0x4e1ec0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4e1ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4e1ec4:
    // 0x4e1ec4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4e1ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4e1ec8:
    // 0x4e1ec8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e1ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e1ecc:
    // 0x4e1ecc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e1eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e1ed0:
    // 0x4e1ed0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e1ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e1ed4:
    // 0x4e1ed4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e1ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e1ed8:
    // 0x4e1ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e1ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e1edc:
    // 0x4e1edc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4e1edcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e1ee0:
    // 0x4e1ee0: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4e1ee4:
    if (ctx->pc == 0x4E1EE4u) {
        ctx->pc = 0x4E1EE4u;
            // 0x4e1ee4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E1EE8u;
        goto label_4e1ee8;
    }
    ctx->pc = 0x4E1EE0u;
    {
        const bool branch_taken_0x4e1ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E1EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1EE0u;
            // 0x4e1ee4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1ee0) {
            ctx->pc = 0x4E1F30u;
            goto label_4e1f30;
        }
    }
    ctx->pc = 0x4E1EE8u;
label_4e1ee8:
    // 0x4e1ee8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e1ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e1eec:
    // 0x4e1eec: 0x10a30032  beq         $a1, $v1, . + 4 + (0x32 << 2)
label_4e1ef0:
    if (ctx->pc == 0x4E1EF0u) {
        ctx->pc = 0x4E1EF4u;
        goto label_4e1ef4;
    }
    ctx->pc = 0x4E1EECu;
    {
        const bool branch_taken_0x4e1eec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e1eec) {
            ctx->pc = 0x4E1FB8u;
            goto label_4e1fb8;
        }
    }
    ctx->pc = 0x4E1EF4u;
label_4e1ef4:
    // 0x4e1ef4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e1ef8:
    // 0x4e1ef8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4e1efc:
    if (ctx->pc == 0x4E1EFCu) {
        ctx->pc = 0x4E1F00u;
        goto label_4e1f00;
    }
    ctx->pc = 0x4E1EF8u;
    {
        const bool branch_taken_0x4e1ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e1ef8) {
            ctx->pc = 0x4E1F08u;
            goto label_4e1f08;
        }
    }
    ctx->pc = 0x4E1F00u;
label_4e1f00:
    // 0x4e1f00: 0x1000002d  b           . + 4 + (0x2D << 2)
label_4e1f04:
    if (ctx->pc == 0x4E1F04u) {
        ctx->pc = 0x4E1F08u;
        goto label_4e1f08;
    }
    ctx->pc = 0x4E1F00u;
    {
        const bool branch_taken_0x4e1f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1f00) {
            ctx->pc = 0x4E1FB8u;
            goto label_4e1fb8;
        }
    }
    ctx->pc = 0x4E1F08u;
label_4e1f08:
    // 0x4e1f08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e1f0c:
    // 0x4e1f0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e1f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e1f10:
    // 0x4e1f10: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4e1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4e1f14:
    // 0x4e1f14: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4e1f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4e1f18:
    // 0x4e1f18: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4e1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4e1f1c:
    // 0x4e1f1c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4e1f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4e1f20:
    // 0x4e1f20: 0x320f809  jalr        $t9
label_4e1f24:
    if (ctx->pc == 0x4E1F24u) {
        ctx->pc = 0x4E1F24u;
            // 0x4e1f24: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4E1F28u;
        goto label_4e1f28;
    }
    ctx->pc = 0x4E1F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E1F28u);
        ctx->pc = 0x4E1F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1F20u;
            // 0x4e1f24: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E1F28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E1F28u; }
            if (ctx->pc != 0x4E1F28u) { return; }
        }
        }
    }
    ctx->pc = 0x4E1F28u;
label_4e1f28:
    // 0x4e1f28: 0x10000023  b           . + 4 + (0x23 << 2)
label_4e1f2c:
    if (ctx->pc == 0x4E1F2Cu) {
        ctx->pc = 0x4E1F30u;
        goto label_4e1f30;
    }
    ctx->pc = 0x4E1F28u;
    {
        const bool branch_taken_0x4e1f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1f28) {
            ctx->pc = 0x4E1FB8u;
            goto label_4e1fb8;
        }
    }
    ctx->pc = 0x4E1F30u;
label_4e1f30:
    // 0x4e1f30: 0x8e320070  lw          $s2, 0x70($s1)
    ctx->pc = 0x4e1f30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_4e1f34:
    // 0x4e1f34: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
label_4e1f38:
    if (ctx->pc == 0x4E1F38u) {
        ctx->pc = 0x4E1F3Cu;
        goto label_4e1f3c;
    }
    ctx->pc = 0x4E1F34u;
    {
        const bool branch_taken_0x4e1f34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1f34) {
            ctx->pc = 0x4E1FB8u;
            goto label_4e1fb8;
        }
    }
    ctx->pc = 0x4E1F3Cu;
label_4e1f3c:
    // 0x4e1f3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e1f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e1f40:
    // 0x4e1f40: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4e1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4e1f44:
    // 0x4e1f44: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4e1f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4e1f48:
    // 0x4e1f48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4e1f48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1f4c:
    // 0x4e1f4c: 0x8c70e378  lw          $s0, -0x1C88($v1)
    ctx->pc = 0x4e1f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4e1f50:
    // 0x4e1f50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e1f50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e1f54:
    // 0x4e1f54: 0x8e350088  lw          $s5, 0x88($s1)
    ctx->pc = 0x4e1f54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_4e1f58:
    // 0x4e1f58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e1f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e1f5c:
    // 0x4e1f5c: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x4e1f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4e1f60:
    // 0x4e1f60: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4e1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4e1f64:
    // 0x4e1f64: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x4e1f64u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4e1f68:
    // 0x4e1f68: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4e1f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4e1f6c:
    // 0x4e1f6c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e1f70:
    // 0x4e1f70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4e1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4e1f74:
    // 0x4e1f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e1f78:
    // 0x4e1f78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e1f7c:
    // 0x4e1f7c: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x4e1f7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4e1f80:
    // 0x4e1f80: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x4e1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4e1f84:
    // 0x4e1f84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4e1f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4e1f88:
    // 0x4e1f88: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4e1f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4e1f8c:
    // 0x4e1f8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4e1f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e1f90:
    // 0x4e1f90: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e1f90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e1f94:
    // 0x4e1f94: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4e1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4e1f98:
    // 0x4e1f98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4e1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e1f9c:
    // 0x4e1f9c: 0xc13885c  jal         func_4E2170
label_4e1fa0:
    if (ctx->pc == 0x4E1FA0u) {
        ctx->pc = 0x4E1FA0u;
            // 0x4e1fa0: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4E1FA4u;
        goto label_4e1fa4;
    }
    ctx->pc = 0x4E1F9Cu;
    SET_GPR_U32(ctx, 31, 0x4E1FA4u);
    ctx->pc = 0x4E1FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1F9Cu;
            // 0x4e1fa0: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E2170u;
    if (runtime->hasFunction(0x4E2170u)) {
        auto targetFn = runtime->lookupFunction(0x4E2170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1FA4u; }
        if (ctx->pc != 0x4E1FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E2170_0x4e2170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1FA4u; }
        if (ctx->pc != 0x4E1FA4u) { return; }
    }
    ctx->pc = 0x4E1FA4u;
label_4e1fa4:
    // 0x4e1fa4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4e1fa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4e1fa8:
    // 0x4e1fa8: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x4e1fa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4e1fac:
    // 0x4e1fac: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_4e1fb0:
    if (ctx->pc == 0x4E1FB0u) {
        ctx->pc = 0x4E1FB0u;
            // 0x4e1fb0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4E1FB4u;
        goto label_4e1fb4;
    }
    ctx->pc = 0x4E1FACu;
    {
        const bool branch_taken_0x4e1fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1FACu;
            // 0x4e1fb0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1fac) {
            ctx->pc = 0x4E1F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e1f80;
        }
    }
    ctx->pc = 0x4E1FB4u;
label_4e1fb4:
    // 0x4e1fb4: 0x0  nop
    ctx->pc = 0x4e1fb4u;
    // NOP
label_4e1fb8:
    // 0x4e1fb8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4e1fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4e1fbc:
    // 0x4e1fbc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4e1fbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e1fc0:
    // 0x4e1fc0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4e1fc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e1fc4:
    // 0x4e1fc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4e1fc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e1fc8:
    // 0x4e1fc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e1fc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e1fcc:
    // 0x4e1fcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e1fccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e1fd0:
    // 0x4e1fd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e1fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e1fd4:
    // 0x4e1fd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e1fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1fd8:
    // 0x4e1fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1fdc:
    // 0x4e1fdc: 0x3e00008  jr          $ra
label_4e1fe0:
    if (ctx->pc == 0x4E1FE0u) {
        ctx->pc = 0x4E1FE0u;
            // 0x4e1fe0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4E1FE4u;
        goto label_4e1fe4;
    }
    ctx->pc = 0x4E1FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1FDCu;
            // 0x4e1fe0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1FE4u;
label_4e1fe4:
    // 0x4e1fe4: 0x0  nop
    ctx->pc = 0x4e1fe4u;
    // NOP
label_4e1fe8:
    // 0x4e1fe8: 0x0  nop
    ctx->pc = 0x4e1fe8u;
    // NOP
label_4e1fec:
    // 0x4e1fec: 0x0  nop
    ctx->pc = 0x4e1fecu;
    // NOP
label_4e1ff0:
    // 0x4e1ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e1ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e1ff4:
    // 0x4e1ff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e1ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e1ff8:
    // 0x4e1ff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e1ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e1ffc:
    // 0x4e1ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e1ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e2000:
    // 0x4e2000: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e2000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e2004:
    // 0x4e2004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e2004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e2008:
    // 0x4e2008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e2008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e200c:
    // 0x4e200c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x4e200cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e2010:
    // 0x4e2010: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4e2010u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e2014:
    // 0x4e2014: 0x50910020  beql        $a0, $s1, . + 4 + (0x20 << 2)
label_4e2018:
    if (ctx->pc == 0x4E2018u) {
        ctx->pc = 0x4E2018u;
            // 0x4e2018: 0x8e700070  lw          $s0, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x4E201Cu;
        goto label_4e201c;
    }
    ctx->pc = 0x4E2014u;
    {
        const bool branch_taken_0x4e2014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x4e2014) {
            ctx->pc = 0x4E2018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2014u;
            // 0x4e2018: 0x8e700070  lw          $s0, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E2098u;
            goto label_4e2098;
        }
    }
    ctx->pc = 0x4E201Cu;
label_4e201c:
    // 0x4e201c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e201cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e2020:
    // 0x4e2020: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_4e2024:
    if (ctx->pc == 0x4E2024u) {
        ctx->pc = 0x4E2024u;
            // 0x4e2024: 0x8e620088  lw          $v0, 0x88($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
        ctx->pc = 0x4E2028u;
        goto label_4e2028;
    }
    ctx->pc = 0x4E2020u;
    {
        const bool branch_taken_0x4e2020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e2020) {
            ctx->pc = 0x4E2024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2020u;
            // 0x4e2024: 0x8e620088  lw          $v0, 0x88($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E203Cu;
            goto label_4e203c;
        }
    }
    ctx->pc = 0x4E2028u;
label_4e2028:
    // 0x4e2028: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e2028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e202c:
    // 0x4e202c: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
label_4e2030:
    if (ctx->pc == 0x4E2030u) {
        ctx->pc = 0x4E2034u;
        goto label_4e2034;
    }
    ctx->pc = 0x4E202Cu;
    {
        const bool branch_taken_0x4e202c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e202c) {
            ctx->pc = 0x4E20C8u;
            goto label_4e20c8;
        }
    }
    ctx->pc = 0x4E2034u;
label_4e2034:
    // 0x4e2034: 0x10000024  b           . + 4 + (0x24 << 2)
label_4e2038:
    if (ctx->pc == 0x4E2038u) {
        ctx->pc = 0x4E203Cu;
        goto label_4e203c;
    }
    ctx->pc = 0x4E2034u;
    {
        const bool branch_taken_0x4e2034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2034) {
            ctx->pc = 0x4E20C8u;
            goto label_4e20c8;
        }
    }
    ctx->pc = 0x4E203Cu;
label_4e203c:
    // 0x4e203c: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x4e203cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_4e2040:
    // 0x4e2040: 0x26108150  addiu       $s0, $s0, -0x7EB0
    ctx->pc = 0x4e2040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934864));
label_4e2044:
    // 0x4e2044: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e2044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e2048:
    // 0x4e2048: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x4e2048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_4e204c:
    // 0x4e204c: 0x24520120  addiu       $s2, $v0, 0x120
    ctx->pc = 0x4e204cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_4e2050:
    // 0x4e2050: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e2050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e2054:
    // 0x4e2054: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e2054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e2058:
    // 0x4e2058: 0x8c42c9f0  lw          $v0, -0x3610($v0)
    ctx->pc = 0x4e2058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953456)));
label_4e205c:
    // 0x4e205c: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x4e205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_4e2060:
    // 0x4e2060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e2060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2064:
    // 0x4e2064: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4e2064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4e2068:
    // 0x4e2068: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4e2068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e206c:
    // 0x4e206c: 0xc04a508  jal         func_129420
label_4e2070:
    if (ctx->pc == 0x4E2070u) {
        ctx->pc = 0x4E2070u;
            // 0x4e2070: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4E2074u;
        goto label_4e2074;
    }
    ctx->pc = 0x4E206Cu;
    SET_GPR_U32(ctx, 31, 0x4E2074u);
    ctx->pc = 0x4E2070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E206Cu;
            // 0x4e2070: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2074u; }
        if (ctx->pc != 0x4E2074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2074u; }
        if (ctx->pc != 0x4E2074u) { return; }
    }
    ctx->pc = 0x4E2074u;
label_4e2074:
    // 0x4e2074: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4e2074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4e2078:
    // 0x4e2078: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x4e2078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_4e207c:
    // 0x4e207c: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_4e2080:
    if (ctx->pc == 0x4E2080u) {
        ctx->pc = 0x4E2080u;
            // 0x4e2080: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x4E2084u;
        goto label_4e2084;
    }
    ctx->pc = 0x4E207Cu;
    {
        const bool branch_taken_0x4e207c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E207Cu;
            // 0x4e2080: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e207c) {
            ctx->pc = 0x4E2050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e2050;
        }
    }
    ctx->pc = 0x4E2084u;
label_4e2084:
    // 0x4e2084: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4e2084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4e2088:
    // 0x4e2088: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4e2088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4e208c:
    // 0x4e208c: 0x320f809  jalr        $t9
label_4e2090:
    if (ctx->pc == 0x4E2090u) {
        ctx->pc = 0x4E2090u;
            // 0x4e2090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2094u;
        goto label_4e2094;
    }
    ctx->pc = 0x4E208Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E2094u);
        ctx->pc = 0x4E2090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E208Cu;
            // 0x4e2090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E2094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E2094u; }
            if (ctx->pc != 0x4E2094u) { return; }
        }
        }
    }
    ctx->pc = 0x4E2094u;
label_4e2094:
    // 0x4e2094: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x4e2094u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4e2098:
    // 0x4e2098: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_4e209c:
    if (ctx->pc == 0x4E209Cu) {
        ctx->pc = 0x4E20A0u;
        goto label_4e20a0;
    }
    ctx->pc = 0x4E2098u;
    {
        const bool branch_taken_0x4e2098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2098) {
            ctx->pc = 0x4E20C8u;
            goto label_4e20c8;
        }
    }
    ctx->pc = 0x4E20A0u;
label_4e20a0:
    // 0x4e20a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e20a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e20a4:
    // 0x4e20a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e20a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e20a8:
    // 0x4e20a8: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4e20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4e20ac:
    // 0x4e20ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4e20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4e20b0:
    // 0x4e20b0: 0xc0e3658  jal         func_38D960
label_4e20b4:
    if (ctx->pc == 0x4E20B4u) {
        ctx->pc = 0x4E20B4u;
            // 0x4e20b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4E20B8u;
        goto label_4e20b8;
    }
    ctx->pc = 0x4E20B0u;
    SET_GPR_U32(ctx, 31, 0x4E20B8u);
    ctx->pc = 0x4E20B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E20B0u;
            // 0x4e20b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E20B8u; }
        if (ctx->pc != 0x4E20B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E20B8u; }
        if (ctx->pc != 0x4E20B8u) { return; }
    }
    ctx->pc = 0x4E20B8u;
label_4e20b8:
    // 0x4e20b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4e20b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4e20bc:
    // 0x4e20bc: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4e20bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4e20c0:
    // 0x4e20c0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4e20c4:
    if (ctx->pc == 0x4E20C4u) {
        ctx->pc = 0x4E20C4u;
            // 0x4e20c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4E20C8u;
        goto label_4e20c8;
    }
    ctx->pc = 0x4E20C0u;
    {
        const bool branch_taken_0x4e20c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E20C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E20C0u;
            // 0x4e20c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e20c0) {
            ctx->pc = 0x4E20A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e20a8;
        }
    }
    ctx->pc = 0x4E20C8u;
label_4e20c8:
    // 0x4e20c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e20c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e20cc:
    // 0x4e20cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e20ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e20d0:
    // 0x4e20d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e20d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e20d4:
    // 0x4e20d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e20d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e20d8:
    // 0x4e20d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e20d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e20dc:
    // 0x4e20dc: 0x3e00008  jr          $ra
label_4e20e0:
    if (ctx->pc == 0x4E20E0u) {
        ctx->pc = 0x4E20E0u;
            // 0x4e20e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E20E4u;
        goto label_4e20e4;
    }
    ctx->pc = 0x4E20DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E20E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E20DCu;
            // 0x4e20e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E20E4u;
label_4e20e4:
    // 0x4e20e4: 0x0  nop
    ctx->pc = 0x4e20e4u;
    // NOP
label_4e20e8:
    // 0x4e20e8: 0x0  nop
    ctx->pc = 0x4e20e8u;
    // NOP
label_4e20ec:
    // 0x4e20ec: 0x0  nop
    ctx->pc = 0x4e20ecu;
    // NOP
label_4e20f0:
    // 0x4e20f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e20f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e20f4:
    // 0x4e20f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e20f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e20f8:
    // 0x4e20f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e20f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e20fc:
    // 0x4e20fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e20fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e2100:
    // 0x4e2100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e2100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e2104:
    // 0x4e2104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e2104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e2108:
    // 0x4e2108: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4e2108u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e210c:
    // 0x4e210c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4e2110:
    if (ctx->pc == 0x4E2110u) {
        ctx->pc = 0x4E2110u;
            // 0x4e2110: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2114u;
        goto label_4e2114;
    }
    ctx->pc = 0x4E210Cu;
    {
        const bool branch_taken_0x4e210c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E210Cu;
            // 0x4e2110: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e210c) {
            ctx->pc = 0x4E2148u;
            goto label_4e2148;
        }
    }
    ctx->pc = 0x4E2114u;
label_4e2114:
    // 0x4e2114: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e2114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e2118:
    // 0x4e2118: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e2118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e211c:
    // 0x4e211c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4e211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4e2120:
    // 0x4e2120: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4e2120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4e2124:
    // 0x4e2124: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4e2124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e2128:
    // 0x4e2128: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e2128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e212c:
    // 0x4e212c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4e212cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4e2130:
    // 0x4e2130: 0x320f809  jalr        $t9
label_4e2134:
    if (ctx->pc == 0x4E2134u) {
        ctx->pc = 0x4E2138u;
        goto label_4e2138;
    }
    ctx->pc = 0x4E2130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E2138u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E2138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E2138u; }
            if (ctx->pc != 0x4E2138u) { return; }
        }
        }
    }
    ctx->pc = 0x4E2138u;
label_4e2138:
    // 0x4e2138: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4e2138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4e213c:
    // 0x4e213c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4e213cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e2140:
    // 0x4e2140: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4e2144:
    if (ctx->pc == 0x4E2144u) {
        ctx->pc = 0x4E2144u;
            // 0x4e2144: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4E2148u;
        goto label_4e2148;
    }
    ctx->pc = 0x4E2140u;
    {
        const bool branch_taken_0x4e2140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2140u;
            // 0x4e2144: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2140) {
            ctx->pc = 0x4E211Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e211c;
        }
    }
    ctx->pc = 0x4E2148u;
label_4e2148:
    // 0x4e2148: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e2148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e214c:
    // 0x4e214c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e214cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e2150:
    // 0x4e2150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e2150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e2154:
    // 0x4e2154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e2154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2158:
    // 0x4e2158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e2158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e215c:
    // 0x4e215c: 0x3e00008  jr          $ra
label_4e2160:
    if (ctx->pc == 0x4E2160u) {
        ctx->pc = 0x4E2160u;
            // 0x4e2160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E2164u;
        goto label_4e2164;
    }
    ctx->pc = 0x4E215Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E215Cu;
            // 0x4e2160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E2164u;
label_4e2164:
    // 0x4e2164: 0x0  nop
    ctx->pc = 0x4e2164u;
    // NOP
label_4e2168:
    // 0x4e2168: 0x0  nop
    ctx->pc = 0x4e2168u;
    // NOP
label_4e216c:
    // 0x4e216c: 0x0  nop
    ctx->pc = 0x4e216cu;
    // NOP
}
