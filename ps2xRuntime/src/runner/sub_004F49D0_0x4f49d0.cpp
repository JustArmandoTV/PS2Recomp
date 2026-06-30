#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F49D0
// Address: 0x4f49d0 - 0x4f5610
void sub_004F49D0_0x4f49d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F49D0_0x4f49d0");
#endif

    switch (ctx->pc) {
        case 0x4f49d0u: goto label_4f49d0;
        case 0x4f49d4u: goto label_4f49d4;
        case 0x4f49d8u: goto label_4f49d8;
        case 0x4f49dcu: goto label_4f49dc;
        case 0x4f49e0u: goto label_4f49e0;
        case 0x4f49e4u: goto label_4f49e4;
        case 0x4f49e8u: goto label_4f49e8;
        case 0x4f49ecu: goto label_4f49ec;
        case 0x4f49f0u: goto label_4f49f0;
        case 0x4f49f4u: goto label_4f49f4;
        case 0x4f49f8u: goto label_4f49f8;
        case 0x4f49fcu: goto label_4f49fc;
        case 0x4f4a00u: goto label_4f4a00;
        case 0x4f4a04u: goto label_4f4a04;
        case 0x4f4a08u: goto label_4f4a08;
        case 0x4f4a0cu: goto label_4f4a0c;
        case 0x4f4a10u: goto label_4f4a10;
        case 0x4f4a14u: goto label_4f4a14;
        case 0x4f4a18u: goto label_4f4a18;
        case 0x4f4a1cu: goto label_4f4a1c;
        case 0x4f4a20u: goto label_4f4a20;
        case 0x4f4a24u: goto label_4f4a24;
        case 0x4f4a28u: goto label_4f4a28;
        case 0x4f4a2cu: goto label_4f4a2c;
        case 0x4f4a30u: goto label_4f4a30;
        case 0x4f4a34u: goto label_4f4a34;
        case 0x4f4a38u: goto label_4f4a38;
        case 0x4f4a3cu: goto label_4f4a3c;
        case 0x4f4a40u: goto label_4f4a40;
        case 0x4f4a44u: goto label_4f4a44;
        case 0x4f4a48u: goto label_4f4a48;
        case 0x4f4a4cu: goto label_4f4a4c;
        case 0x4f4a50u: goto label_4f4a50;
        case 0x4f4a54u: goto label_4f4a54;
        case 0x4f4a58u: goto label_4f4a58;
        case 0x4f4a5cu: goto label_4f4a5c;
        case 0x4f4a60u: goto label_4f4a60;
        case 0x4f4a64u: goto label_4f4a64;
        case 0x4f4a68u: goto label_4f4a68;
        case 0x4f4a6cu: goto label_4f4a6c;
        case 0x4f4a70u: goto label_4f4a70;
        case 0x4f4a74u: goto label_4f4a74;
        case 0x4f4a78u: goto label_4f4a78;
        case 0x4f4a7cu: goto label_4f4a7c;
        case 0x4f4a80u: goto label_4f4a80;
        case 0x4f4a84u: goto label_4f4a84;
        case 0x4f4a88u: goto label_4f4a88;
        case 0x4f4a8cu: goto label_4f4a8c;
        case 0x4f4a90u: goto label_4f4a90;
        case 0x4f4a94u: goto label_4f4a94;
        case 0x4f4a98u: goto label_4f4a98;
        case 0x4f4a9cu: goto label_4f4a9c;
        case 0x4f4aa0u: goto label_4f4aa0;
        case 0x4f4aa4u: goto label_4f4aa4;
        case 0x4f4aa8u: goto label_4f4aa8;
        case 0x4f4aacu: goto label_4f4aac;
        case 0x4f4ab0u: goto label_4f4ab0;
        case 0x4f4ab4u: goto label_4f4ab4;
        case 0x4f4ab8u: goto label_4f4ab8;
        case 0x4f4abcu: goto label_4f4abc;
        case 0x4f4ac0u: goto label_4f4ac0;
        case 0x4f4ac4u: goto label_4f4ac4;
        case 0x4f4ac8u: goto label_4f4ac8;
        case 0x4f4accu: goto label_4f4acc;
        case 0x4f4ad0u: goto label_4f4ad0;
        case 0x4f4ad4u: goto label_4f4ad4;
        case 0x4f4ad8u: goto label_4f4ad8;
        case 0x4f4adcu: goto label_4f4adc;
        case 0x4f4ae0u: goto label_4f4ae0;
        case 0x4f4ae4u: goto label_4f4ae4;
        case 0x4f4ae8u: goto label_4f4ae8;
        case 0x4f4aecu: goto label_4f4aec;
        case 0x4f4af0u: goto label_4f4af0;
        case 0x4f4af4u: goto label_4f4af4;
        case 0x4f4af8u: goto label_4f4af8;
        case 0x4f4afcu: goto label_4f4afc;
        case 0x4f4b00u: goto label_4f4b00;
        case 0x4f4b04u: goto label_4f4b04;
        case 0x4f4b08u: goto label_4f4b08;
        case 0x4f4b0cu: goto label_4f4b0c;
        case 0x4f4b10u: goto label_4f4b10;
        case 0x4f4b14u: goto label_4f4b14;
        case 0x4f4b18u: goto label_4f4b18;
        case 0x4f4b1cu: goto label_4f4b1c;
        case 0x4f4b20u: goto label_4f4b20;
        case 0x4f4b24u: goto label_4f4b24;
        case 0x4f4b28u: goto label_4f4b28;
        case 0x4f4b2cu: goto label_4f4b2c;
        case 0x4f4b30u: goto label_4f4b30;
        case 0x4f4b34u: goto label_4f4b34;
        case 0x4f4b38u: goto label_4f4b38;
        case 0x4f4b3cu: goto label_4f4b3c;
        case 0x4f4b40u: goto label_4f4b40;
        case 0x4f4b44u: goto label_4f4b44;
        case 0x4f4b48u: goto label_4f4b48;
        case 0x4f4b4cu: goto label_4f4b4c;
        case 0x4f4b50u: goto label_4f4b50;
        case 0x4f4b54u: goto label_4f4b54;
        case 0x4f4b58u: goto label_4f4b58;
        case 0x4f4b5cu: goto label_4f4b5c;
        case 0x4f4b60u: goto label_4f4b60;
        case 0x4f4b64u: goto label_4f4b64;
        case 0x4f4b68u: goto label_4f4b68;
        case 0x4f4b6cu: goto label_4f4b6c;
        case 0x4f4b70u: goto label_4f4b70;
        case 0x4f4b74u: goto label_4f4b74;
        case 0x4f4b78u: goto label_4f4b78;
        case 0x4f4b7cu: goto label_4f4b7c;
        case 0x4f4b80u: goto label_4f4b80;
        case 0x4f4b84u: goto label_4f4b84;
        case 0x4f4b88u: goto label_4f4b88;
        case 0x4f4b8cu: goto label_4f4b8c;
        case 0x4f4b90u: goto label_4f4b90;
        case 0x4f4b94u: goto label_4f4b94;
        case 0x4f4b98u: goto label_4f4b98;
        case 0x4f4b9cu: goto label_4f4b9c;
        case 0x4f4ba0u: goto label_4f4ba0;
        case 0x4f4ba4u: goto label_4f4ba4;
        case 0x4f4ba8u: goto label_4f4ba8;
        case 0x4f4bacu: goto label_4f4bac;
        case 0x4f4bb0u: goto label_4f4bb0;
        case 0x4f4bb4u: goto label_4f4bb4;
        case 0x4f4bb8u: goto label_4f4bb8;
        case 0x4f4bbcu: goto label_4f4bbc;
        case 0x4f4bc0u: goto label_4f4bc0;
        case 0x4f4bc4u: goto label_4f4bc4;
        case 0x4f4bc8u: goto label_4f4bc8;
        case 0x4f4bccu: goto label_4f4bcc;
        case 0x4f4bd0u: goto label_4f4bd0;
        case 0x4f4bd4u: goto label_4f4bd4;
        case 0x4f4bd8u: goto label_4f4bd8;
        case 0x4f4bdcu: goto label_4f4bdc;
        case 0x4f4be0u: goto label_4f4be0;
        case 0x4f4be4u: goto label_4f4be4;
        case 0x4f4be8u: goto label_4f4be8;
        case 0x4f4becu: goto label_4f4bec;
        case 0x4f4bf0u: goto label_4f4bf0;
        case 0x4f4bf4u: goto label_4f4bf4;
        case 0x4f4bf8u: goto label_4f4bf8;
        case 0x4f4bfcu: goto label_4f4bfc;
        case 0x4f4c00u: goto label_4f4c00;
        case 0x4f4c04u: goto label_4f4c04;
        case 0x4f4c08u: goto label_4f4c08;
        case 0x4f4c0cu: goto label_4f4c0c;
        case 0x4f4c10u: goto label_4f4c10;
        case 0x4f4c14u: goto label_4f4c14;
        case 0x4f4c18u: goto label_4f4c18;
        case 0x4f4c1cu: goto label_4f4c1c;
        case 0x4f4c20u: goto label_4f4c20;
        case 0x4f4c24u: goto label_4f4c24;
        case 0x4f4c28u: goto label_4f4c28;
        case 0x4f4c2cu: goto label_4f4c2c;
        case 0x4f4c30u: goto label_4f4c30;
        case 0x4f4c34u: goto label_4f4c34;
        case 0x4f4c38u: goto label_4f4c38;
        case 0x4f4c3cu: goto label_4f4c3c;
        case 0x4f4c40u: goto label_4f4c40;
        case 0x4f4c44u: goto label_4f4c44;
        case 0x4f4c48u: goto label_4f4c48;
        case 0x4f4c4cu: goto label_4f4c4c;
        case 0x4f4c50u: goto label_4f4c50;
        case 0x4f4c54u: goto label_4f4c54;
        case 0x4f4c58u: goto label_4f4c58;
        case 0x4f4c5cu: goto label_4f4c5c;
        case 0x4f4c60u: goto label_4f4c60;
        case 0x4f4c64u: goto label_4f4c64;
        case 0x4f4c68u: goto label_4f4c68;
        case 0x4f4c6cu: goto label_4f4c6c;
        case 0x4f4c70u: goto label_4f4c70;
        case 0x4f4c74u: goto label_4f4c74;
        case 0x4f4c78u: goto label_4f4c78;
        case 0x4f4c7cu: goto label_4f4c7c;
        case 0x4f4c80u: goto label_4f4c80;
        case 0x4f4c84u: goto label_4f4c84;
        case 0x4f4c88u: goto label_4f4c88;
        case 0x4f4c8cu: goto label_4f4c8c;
        case 0x4f4c90u: goto label_4f4c90;
        case 0x4f4c94u: goto label_4f4c94;
        case 0x4f4c98u: goto label_4f4c98;
        case 0x4f4c9cu: goto label_4f4c9c;
        case 0x4f4ca0u: goto label_4f4ca0;
        case 0x4f4ca4u: goto label_4f4ca4;
        case 0x4f4ca8u: goto label_4f4ca8;
        case 0x4f4cacu: goto label_4f4cac;
        case 0x4f4cb0u: goto label_4f4cb0;
        case 0x4f4cb4u: goto label_4f4cb4;
        case 0x4f4cb8u: goto label_4f4cb8;
        case 0x4f4cbcu: goto label_4f4cbc;
        case 0x4f4cc0u: goto label_4f4cc0;
        case 0x4f4cc4u: goto label_4f4cc4;
        case 0x4f4cc8u: goto label_4f4cc8;
        case 0x4f4cccu: goto label_4f4ccc;
        case 0x4f4cd0u: goto label_4f4cd0;
        case 0x4f4cd4u: goto label_4f4cd4;
        case 0x4f4cd8u: goto label_4f4cd8;
        case 0x4f4cdcu: goto label_4f4cdc;
        case 0x4f4ce0u: goto label_4f4ce0;
        case 0x4f4ce4u: goto label_4f4ce4;
        case 0x4f4ce8u: goto label_4f4ce8;
        case 0x4f4cecu: goto label_4f4cec;
        case 0x4f4cf0u: goto label_4f4cf0;
        case 0x4f4cf4u: goto label_4f4cf4;
        case 0x4f4cf8u: goto label_4f4cf8;
        case 0x4f4cfcu: goto label_4f4cfc;
        case 0x4f4d00u: goto label_4f4d00;
        case 0x4f4d04u: goto label_4f4d04;
        case 0x4f4d08u: goto label_4f4d08;
        case 0x4f4d0cu: goto label_4f4d0c;
        case 0x4f4d10u: goto label_4f4d10;
        case 0x4f4d14u: goto label_4f4d14;
        case 0x4f4d18u: goto label_4f4d18;
        case 0x4f4d1cu: goto label_4f4d1c;
        case 0x4f4d20u: goto label_4f4d20;
        case 0x4f4d24u: goto label_4f4d24;
        case 0x4f4d28u: goto label_4f4d28;
        case 0x4f4d2cu: goto label_4f4d2c;
        case 0x4f4d30u: goto label_4f4d30;
        case 0x4f4d34u: goto label_4f4d34;
        case 0x4f4d38u: goto label_4f4d38;
        case 0x4f4d3cu: goto label_4f4d3c;
        case 0x4f4d40u: goto label_4f4d40;
        case 0x4f4d44u: goto label_4f4d44;
        case 0x4f4d48u: goto label_4f4d48;
        case 0x4f4d4cu: goto label_4f4d4c;
        case 0x4f4d50u: goto label_4f4d50;
        case 0x4f4d54u: goto label_4f4d54;
        case 0x4f4d58u: goto label_4f4d58;
        case 0x4f4d5cu: goto label_4f4d5c;
        case 0x4f4d60u: goto label_4f4d60;
        case 0x4f4d64u: goto label_4f4d64;
        case 0x4f4d68u: goto label_4f4d68;
        case 0x4f4d6cu: goto label_4f4d6c;
        case 0x4f4d70u: goto label_4f4d70;
        case 0x4f4d74u: goto label_4f4d74;
        case 0x4f4d78u: goto label_4f4d78;
        case 0x4f4d7cu: goto label_4f4d7c;
        case 0x4f4d80u: goto label_4f4d80;
        case 0x4f4d84u: goto label_4f4d84;
        case 0x4f4d88u: goto label_4f4d88;
        case 0x4f4d8cu: goto label_4f4d8c;
        case 0x4f4d90u: goto label_4f4d90;
        case 0x4f4d94u: goto label_4f4d94;
        case 0x4f4d98u: goto label_4f4d98;
        case 0x4f4d9cu: goto label_4f4d9c;
        case 0x4f4da0u: goto label_4f4da0;
        case 0x4f4da4u: goto label_4f4da4;
        case 0x4f4da8u: goto label_4f4da8;
        case 0x4f4dacu: goto label_4f4dac;
        case 0x4f4db0u: goto label_4f4db0;
        case 0x4f4db4u: goto label_4f4db4;
        case 0x4f4db8u: goto label_4f4db8;
        case 0x4f4dbcu: goto label_4f4dbc;
        case 0x4f4dc0u: goto label_4f4dc0;
        case 0x4f4dc4u: goto label_4f4dc4;
        case 0x4f4dc8u: goto label_4f4dc8;
        case 0x4f4dccu: goto label_4f4dcc;
        case 0x4f4dd0u: goto label_4f4dd0;
        case 0x4f4dd4u: goto label_4f4dd4;
        case 0x4f4dd8u: goto label_4f4dd8;
        case 0x4f4ddcu: goto label_4f4ddc;
        case 0x4f4de0u: goto label_4f4de0;
        case 0x4f4de4u: goto label_4f4de4;
        case 0x4f4de8u: goto label_4f4de8;
        case 0x4f4decu: goto label_4f4dec;
        case 0x4f4df0u: goto label_4f4df0;
        case 0x4f4df4u: goto label_4f4df4;
        case 0x4f4df8u: goto label_4f4df8;
        case 0x4f4dfcu: goto label_4f4dfc;
        case 0x4f4e00u: goto label_4f4e00;
        case 0x4f4e04u: goto label_4f4e04;
        case 0x4f4e08u: goto label_4f4e08;
        case 0x4f4e0cu: goto label_4f4e0c;
        case 0x4f4e10u: goto label_4f4e10;
        case 0x4f4e14u: goto label_4f4e14;
        case 0x4f4e18u: goto label_4f4e18;
        case 0x4f4e1cu: goto label_4f4e1c;
        case 0x4f4e20u: goto label_4f4e20;
        case 0x4f4e24u: goto label_4f4e24;
        case 0x4f4e28u: goto label_4f4e28;
        case 0x4f4e2cu: goto label_4f4e2c;
        case 0x4f4e30u: goto label_4f4e30;
        case 0x4f4e34u: goto label_4f4e34;
        case 0x4f4e38u: goto label_4f4e38;
        case 0x4f4e3cu: goto label_4f4e3c;
        case 0x4f4e40u: goto label_4f4e40;
        case 0x4f4e44u: goto label_4f4e44;
        case 0x4f4e48u: goto label_4f4e48;
        case 0x4f4e4cu: goto label_4f4e4c;
        case 0x4f4e50u: goto label_4f4e50;
        case 0x4f4e54u: goto label_4f4e54;
        case 0x4f4e58u: goto label_4f4e58;
        case 0x4f4e5cu: goto label_4f4e5c;
        case 0x4f4e60u: goto label_4f4e60;
        case 0x4f4e64u: goto label_4f4e64;
        case 0x4f4e68u: goto label_4f4e68;
        case 0x4f4e6cu: goto label_4f4e6c;
        case 0x4f4e70u: goto label_4f4e70;
        case 0x4f4e74u: goto label_4f4e74;
        case 0x4f4e78u: goto label_4f4e78;
        case 0x4f4e7cu: goto label_4f4e7c;
        case 0x4f4e80u: goto label_4f4e80;
        case 0x4f4e84u: goto label_4f4e84;
        case 0x4f4e88u: goto label_4f4e88;
        case 0x4f4e8cu: goto label_4f4e8c;
        case 0x4f4e90u: goto label_4f4e90;
        case 0x4f4e94u: goto label_4f4e94;
        case 0x4f4e98u: goto label_4f4e98;
        case 0x4f4e9cu: goto label_4f4e9c;
        case 0x4f4ea0u: goto label_4f4ea0;
        case 0x4f4ea4u: goto label_4f4ea4;
        case 0x4f4ea8u: goto label_4f4ea8;
        case 0x4f4eacu: goto label_4f4eac;
        case 0x4f4eb0u: goto label_4f4eb0;
        case 0x4f4eb4u: goto label_4f4eb4;
        case 0x4f4eb8u: goto label_4f4eb8;
        case 0x4f4ebcu: goto label_4f4ebc;
        case 0x4f4ec0u: goto label_4f4ec0;
        case 0x4f4ec4u: goto label_4f4ec4;
        case 0x4f4ec8u: goto label_4f4ec8;
        case 0x4f4eccu: goto label_4f4ecc;
        case 0x4f4ed0u: goto label_4f4ed0;
        case 0x4f4ed4u: goto label_4f4ed4;
        case 0x4f4ed8u: goto label_4f4ed8;
        case 0x4f4edcu: goto label_4f4edc;
        case 0x4f4ee0u: goto label_4f4ee0;
        case 0x4f4ee4u: goto label_4f4ee4;
        case 0x4f4ee8u: goto label_4f4ee8;
        case 0x4f4eecu: goto label_4f4eec;
        case 0x4f4ef0u: goto label_4f4ef0;
        case 0x4f4ef4u: goto label_4f4ef4;
        case 0x4f4ef8u: goto label_4f4ef8;
        case 0x4f4efcu: goto label_4f4efc;
        case 0x4f4f00u: goto label_4f4f00;
        case 0x4f4f04u: goto label_4f4f04;
        case 0x4f4f08u: goto label_4f4f08;
        case 0x4f4f0cu: goto label_4f4f0c;
        case 0x4f4f10u: goto label_4f4f10;
        case 0x4f4f14u: goto label_4f4f14;
        case 0x4f4f18u: goto label_4f4f18;
        case 0x4f4f1cu: goto label_4f4f1c;
        case 0x4f4f20u: goto label_4f4f20;
        case 0x4f4f24u: goto label_4f4f24;
        case 0x4f4f28u: goto label_4f4f28;
        case 0x4f4f2cu: goto label_4f4f2c;
        case 0x4f4f30u: goto label_4f4f30;
        case 0x4f4f34u: goto label_4f4f34;
        case 0x4f4f38u: goto label_4f4f38;
        case 0x4f4f3cu: goto label_4f4f3c;
        case 0x4f4f40u: goto label_4f4f40;
        case 0x4f4f44u: goto label_4f4f44;
        case 0x4f4f48u: goto label_4f4f48;
        case 0x4f4f4cu: goto label_4f4f4c;
        case 0x4f4f50u: goto label_4f4f50;
        case 0x4f4f54u: goto label_4f4f54;
        case 0x4f4f58u: goto label_4f4f58;
        case 0x4f4f5cu: goto label_4f4f5c;
        case 0x4f4f60u: goto label_4f4f60;
        case 0x4f4f64u: goto label_4f4f64;
        case 0x4f4f68u: goto label_4f4f68;
        case 0x4f4f6cu: goto label_4f4f6c;
        case 0x4f4f70u: goto label_4f4f70;
        case 0x4f4f74u: goto label_4f4f74;
        case 0x4f4f78u: goto label_4f4f78;
        case 0x4f4f7cu: goto label_4f4f7c;
        case 0x4f4f80u: goto label_4f4f80;
        case 0x4f4f84u: goto label_4f4f84;
        case 0x4f4f88u: goto label_4f4f88;
        case 0x4f4f8cu: goto label_4f4f8c;
        case 0x4f4f90u: goto label_4f4f90;
        case 0x4f4f94u: goto label_4f4f94;
        case 0x4f4f98u: goto label_4f4f98;
        case 0x4f4f9cu: goto label_4f4f9c;
        case 0x4f4fa0u: goto label_4f4fa0;
        case 0x4f4fa4u: goto label_4f4fa4;
        case 0x4f4fa8u: goto label_4f4fa8;
        case 0x4f4facu: goto label_4f4fac;
        case 0x4f4fb0u: goto label_4f4fb0;
        case 0x4f4fb4u: goto label_4f4fb4;
        case 0x4f4fb8u: goto label_4f4fb8;
        case 0x4f4fbcu: goto label_4f4fbc;
        case 0x4f4fc0u: goto label_4f4fc0;
        case 0x4f4fc4u: goto label_4f4fc4;
        case 0x4f4fc8u: goto label_4f4fc8;
        case 0x4f4fccu: goto label_4f4fcc;
        case 0x4f4fd0u: goto label_4f4fd0;
        case 0x4f4fd4u: goto label_4f4fd4;
        case 0x4f4fd8u: goto label_4f4fd8;
        case 0x4f4fdcu: goto label_4f4fdc;
        case 0x4f4fe0u: goto label_4f4fe0;
        case 0x4f4fe4u: goto label_4f4fe4;
        case 0x4f4fe8u: goto label_4f4fe8;
        case 0x4f4fecu: goto label_4f4fec;
        case 0x4f4ff0u: goto label_4f4ff0;
        case 0x4f4ff4u: goto label_4f4ff4;
        case 0x4f4ff8u: goto label_4f4ff8;
        case 0x4f4ffcu: goto label_4f4ffc;
        case 0x4f5000u: goto label_4f5000;
        case 0x4f5004u: goto label_4f5004;
        case 0x4f5008u: goto label_4f5008;
        case 0x4f500cu: goto label_4f500c;
        case 0x4f5010u: goto label_4f5010;
        case 0x4f5014u: goto label_4f5014;
        case 0x4f5018u: goto label_4f5018;
        case 0x4f501cu: goto label_4f501c;
        case 0x4f5020u: goto label_4f5020;
        case 0x4f5024u: goto label_4f5024;
        case 0x4f5028u: goto label_4f5028;
        case 0x4f502cu: goto label_4f502c;
        case 0x4f5030u: goto label_4f5030;
        case 0x4f5034u: goto label_4f5034;
        case 0x4f5038u: goto label_4f5038;
        case 0x4f503cu: goto label_4f503c;
        case 0x4f5040u: goto label_4f5040;
        case 0x4f5044u: goto label_4f5044;
        case 0x4f5048u: goto label_4f5048;
        case 0x4f504cu: goto label_4f504c;
        case 0x4f5050u: goto label_4f5050;
        case 0x4f5054u: goto label_4f5054;
        case 0x4f5058u: goto label_4f5058;
        case 0x4f505cu: goto label_4f505c;
        case 0x4f5060u: goto label_4f5060;
        case 0x4f5064u: goto label_4f5064;
        case 0x4f5068u: goto label_4f5068;
        case 0x4f506cu: goto label_4f506c;
        case 0x4f5070u: goto label_4f5070;
        case 0x4f5074u: goto label_4f5074;
        case 0x4f5078u: goto label_4f5078;
        case 0x4f507cu: goto label_4f507c;
        case 0x4f5080u: goto label_4f5080;
        case 0x4f5084u: goto label_4f5084;
        case 0x4f5088u: goto label_4f5088;
        case 0x4f508cu: goto label_4f508c;
        case 0x4f5090u: goto label_4f5090;
        case 0x4f5094u: goto label_4f5094;
        case 0x4f5098u: goto label_4f5098;
        case 0x4f509cu: goto label_4f509c;
        case 0x4f50a0u: goto label_4f50a0;
        case 0x4f50a4u: goto label_4f50a4;
        case 0x4f50a8u: goto label_4f50a8;
        case 0x4f50acu: goto label_4f50ac;
        case 0x4f50b0u: goto label_4f50b0;
        case 0x4f50b4u: goto label_4f50b4;
        case 0x4f50b8u: goto label_4f50b8;
        case 0x4f50bcu: goto label_4f50bc;
        case 0x4f50c0u: goto label_4f50c0;
        case 0x4f50c4u: goto label_4f50c4;
        case 0x4f50c8u: goto label_4f50c8;
        case 0x4f50ccu: goto label_4f50cc;
        case 0x4f50d0u: goto label_4f50d0;
        case 0x4f50d4u: goto label_4f50d4;
        case 0x4f50d8u: goto label_4f50d8;
        case 0x4f50dcu: goto label_4f50dc;
        case 0x4f50e0u: goto label_4f50e0;
        case 0x4f50e4u: goto label_4f50e4;
        case 0x4f50e8u: goto label_4f50e8;
        case 0x4f50ecu: goto label_4f50ec;
        case 0x4f50f0u: goto label_4f50f0;
        case 0x4f50f4u: goto label_4f50f4;
        case 0x4f50f8u: goto label_4f50f8;
        case 0x4f50fcu: goto label_4f50fc;
        case 0x4f5100u: goto label_4f5100;
        case 0x4f5104u: goto label_4f5104;
        case 0x4f5108u: goto label_4f5108;
        case 0x4f510cu: goto label_4f510c;
        case 0x4f5110u: goto label_4f5110;
        case 0x4f5114u: goto label_4f5114;
        case 0x4f5118u: goto label_4f5118;
        case 0x4f511cu: goto label_4f511c;
        case 0x4f5120u: goto label_4f5120;
        case 0x4f5124u: goto label_4f5124;
        case 0x4f5128u: goto label_4f5128;
        case 0x4f512cu: goto label_4f512c;
        case 0x4f5130u: goto label_4f5130;
        case 0x4f5134u: goto label_4f5134;
        case 0x4f5138u: goto label_4f5138;
        case 0x4f513cu: goto label_4f513c;
        case 0x4f5140u: goto label_4f5140;
        case 0x4f5144u: goto label_4f5144;
        case 0x4f5148u: goto label_4f5148;
        case 0x4f514cu: goto label_4f514c;
        case 0x4f5150u: goto label_4f5150;
        case 0x4f5154u: goto label_4f5154;
        case 0x4f5158u: goto label_4f5158;
        case 0x4f515cu: goto label_4f515c;
        case 0x4f5160u: goto label_4f5160;
        case 0x4f5164u: goto label_4f5164;
        case 0x4f5168u: goto label_4f5168;
        case 0x4f516cu: goto label_4f516c;
        case 0x4f5170u: goto label_4f5170;
        case 0x4f5174u: goto label_4f5174;
        case 0x4f5178u: goto label_4f5178;
        case 0x4f517cu: goto label_4f517c;
        case 0x4f5180u: goto label_4f5180;
        case 0x4f5184u: goto label_4f5184;
        case 0x4f5188u: goto label_4f5188;
        case 0x4f518cu: goto label_4f518c;
        case 0x4f5190u: goto label_4f5190;
        case 0x4f5194u: goto label_4f5194;
        case 0x4f5198u: goto label_4f5198;
        case 0x4f519cu: goto label_4f519c;
        case 0x4f51a0u: goto label_4f51a0;
        case 0x4f51a4u: goto label_4f51a4;
        case 0x4f51a8u: goto label_4f51a8;
        case 0x4f51acu: goto label_4f51ac;
        case 0x4f51b0u: goto label_4f51b0;
        case 0x4f51b4u: goto label_4f51b4;
        case 0x4f51b8u: goto label_4f51b8;
        case 0x4f51bcu: goto label_4f51bc;
        case 0x4f51c0u: goto label_4f51c0;
        case 0x4f51c4u: goto label_4f51c4;
        case 0x4f51c8u: goto label_4f51c8;
        case 0x4f51ccu: goto label_4f51cc;
        case 0x4f51d0u: goto label_4f51d0;
        case 0x4f51d4u: goto label_4f51d4;
        case 0x4f51d8u: goto label_4f51d8;
        case 0x4f51dcu: goto label_4f51dc;
        case 0x4f51e0u: goto label_4f51e0;
        case 0x4f51e4u: goto label_4f51e4;
        case 0x4f51e8u: goto label_4f51e8;
        case 0x4f51ecu: goto label_4f51ec;
        case 0x4f51f0u: goto label_4f51f0;
        case 0x4f51f4u: goto label_4f51f4;
        case 0x4f51f8u: goto label_4f51f8;
        case 0x4f51fcu: goto label_4f51fc;
        case 0x4f5200u: goto label_4f5200;
        case 0x4f5204u: goto label_4f5204;
        case 0x4f5208u: goto label_4f5208;
        case 0x4f520cu: goto label_4f520c;
        case 0x4f5210u: goto label_4f5210;
        case 0x4f5214u: goto label_4f5214;
        case 0x4f5218u: goto label_4f5218;
        case 0x4f521cu: goto label_4f521c;
        case 0x4f5220u: goto label_4f5220;
        case 0x4f5224u: goto label_4f5224;
        case 0x4f5228u: goto label_4f5228;
        case 0x4f522cu: goto label_4f522c;
        case 0x4f5230u: goto label_4f5230;
        case 0x4f5234u: goto label_4f5234;
        case 0x4f5238u: goto label_4f5238;
        case 0x4f523cu: goto label_4f523c;
        case 0x4f5240u: goto label_4f5240;
        case 0x4f5244u: goto label_4f5244;
        case 0x4f5248u: goto label_4f5248;
        case 0x4f524cu: goto label_4f524c;
        case 0x4f5250u: goto label_4f5250;
        case 0x4f5254u: goto label_4f5254;
        case 0x4f5258u: goto label_4f5258;
        case 0x4f525cu: goto label_4f525c;
        case 0x4f5260u: goto label_4f5260;
        case 0x4f5264u: goto label_4f5264;
        case 0x4f5268u: goto label_4f5268;
        case 0x4f526cu: goto label_4f526c;
        case 0x4f5270u: goto label_4f5270;
        case 0x4f5274u: goto label_4f5274;
        case 0x4f5278u: goto label_4f5278;
        case 0x4f527cu: goto label_4f527c;
        case 0x4f5280u: goto label_4f5280;
        case 0x4f5284u: goto label_4f5284;
        case 0x4f5288u: goto label_4f5288;
        case 0x4f528cu: goto label_4f528c;
        case 0x4f5290u: goto label_4f5290;
        case 0x4f5294u: goto label_4f5294;
        case 0x4f5298u: goto label_4f5298;
        case 0x4f529cu: goto label_4f529c;
        case 0x4f52a0u: goto label_4f52a0;
        case 0x4f52a4u: goto label_4f52a4;
        case 0x4f52a8u: goto label_4f52a8;
        case 0x4f52acu: goto label_4f52ac;
        case 0x4f52b0u: goto label_4f52b0;
        case 0x4f52b4u: goto label_4f52b4;
        case 0x4f52b8u: goto label_4f52b8;
        case 0x4f52bcu: goto label_4f52bc;
        case 0x4f52c0u: goto label_4f52c0;
        case 0x4f52c4u: goto label_4f52c4;
        case 0x4f52c8u: goto label_4f52c8;
        case 0x4f52ccu: goto label_4f52cc;
        case 0x4f52d0u: goto label_4f52d0;
        case 0x4f52d4u: goto label_4f52d4;
        case 0x4f52d8u: goto label_4f52d8;
        case 0x4f52dcu: goto label_4f52dc;
        case 0x4f52e0u: goto label_4f52e0;
        case 0x4f52e4u: goto label_4f52e4;
        case 0x4f52e8u: goto label_4f52e8;
        case 0x4f52ecu: goto label_4f52ec;
        case 0x4f52f0u: goto label_4f52f0;
        case 0x4f52f4u: goto label_4f52f4;
        case 0x4f52f8u: goto label_4f52f8;
        case 0x4f52fcu: goto label_4f52fc;
        case 0x4f5300u: goto label_4f5300;
        case 0x4f5304u: goto label_4f5304;
        case 0x4f5308u: goto label_4f5308;
        case 0x4f530cu: goto label_4f530c;
        case 0x4f5310u: goto label_4f5310;
        case 0x4f5314u: goto label_4f5314;
        case 0x4f5318u: goto label_4f5318;
        case 0x4f531cu: goto label_4f531c;
        case 0x4f5320u: goto label_4f5320;
        case 0x4f5324u: goto label_4f5324;
        case 0x4f5328u: goto label_4f5328;
        case 0x4f532cu: goto label_4f532c;
        case 0x4f5330u: goto label_4f5330;
        case 0x4f5334u: goto label_4f5334;
        case 0x4f5338u: goto label_4f5338;
        case 0x4f533cu: goto label_4f533c;
        case 0x4f5340u: goto label_4f5340;
        case 0x4f5344u: goto label_4f5344;
        case 0x4f5348u: goto label_4f5348;
        case 0x4f534cu: goto label_4f534c;
        case 0x4f5350u: goto label_4f5350;
        case 0x4f5354u: goto label_4f5354;
        case 0x4f5358u: goto label_4f5358;
        case 0x4f535cu: goto label_4f535c;
        case 0x4f5360u: goto label_4f5360;
        case 0x4f5364u: goto label_4f5364;
        case 0x4f5368u: goto label_4f5368;
        case 0x4f536cu: goto label_4f536c;
        case 0x4f5370u: goto label_4f5370;
        case 0x4f5374u: goto label_4f5374;
        case 0x4f5378u: goto label_4f5378;
        case 0x4f537cu: goto label_4f537c;
        case 0x4f5380u: goto label_4f5380;
        case 0x4f5384u: goto label_4f5384;
        case 0x4f5388u: goto label_4f5388;
        case 0x4f538cu: goto label_4f538c;
        case 0x4f5390u: goto label_4f5390;
        case 0x4f5394u: goto label_4f5394;
        case 0x4f5398u: goto label_4f5398;
        case 0x4f539cu: goto label_4f539c;
        case 0x4f53a0u: goto label_4f53a0;
        case 0x4f53a4u: goto label_4f53a4;
        case 0x4f53a8u: goto label_4f53a8;
        case 0x4f53acu: goto label_4f53ac;
        case 0x4f53b0u: goto label_4f53b0;
        case 0x4f53b4u: goto label_4f53b4;
        case 0x4f53b8u: goto label_4f53b8;
        case 0x4f53bcu: goto label_4f53bc;
        case 0x4f53c0u: goto label_4f53c0;
        case 0x4f53c4u: goto label_4f53c4;
        case 0x4f53c8u: goto label_4f53c8;
        case 0x4f53ccu: goto label_4f53cc;
        case 0x4f53d0u: goto label_4f53d0;
        case 0x4f53d4u: goto label_4f53d4;
        case 0x4f53d8u: goto label_4f53d8;
        case 0x4f53dcu: goto label_4f53dc;
        case 0x4f53e0u: goto label_4f53e0;
        case 0x4f53e4u: goto label_4f53e4;
        case 0x4f53e8u: goto label_4f53e8;
        case 0x4f53ecu: goto label_4f53ec;
        case 0x4f53f0u: goto label_4f53f0;
        case 0x4f53f4u: goto label_4f53f4;
        case 0x4f53f8u: goto label_4f53f8;
        case 0x4f53fcu: goto label_4f53fc;
        case 0x4f5400u: goto label_4f5400;
        case 0x4f5404u: goto label_4f5404;
        case 0x4f5408u: goto label_4f5408;
        case 0x4f540cu: goto label_4f540c;
        case 0x4f5410u: goto label_4f5410;
        case 0x4f5414u: goto label_4f5414;
        case 0x4f5418u: goto label_4f5418;
        case 0x4f541cu: goto label_4f541c;
        case 0x4f5420u: goto label_4f5420;
        case 0x4f5424u: goto label_4f5424;
        case 0x4f5428u: goto label_4f5428;
        case 0x4f542cu: goto label_4f542c;
        case 0x4f5430u: goto label_4f5430;
        case 0x4f5434u: goto label_4f5434;
        case 0x4f5438u: goto label_4f5438;
        case 0x4f543cu: goto label_4f543c;
        case 0x4f5440u: goto label_4f5440;
        case 0x4f5444u: goto label_4f5444;
        case 0x4f5448u: goto label_4f5448;
        case 0x4f544cu: goto label_4f544c;
        case 0x4f5450u: goto label_4f5450;
        case 0x4f5454u: goto label_4f5454;
        case 0x4f5458u: goto label_4f5458;
        case 0x4f545cu: goto label_4f545c;
        case 0x4f5460u: goto label_4f5460;
        case 0x4f5464u: goto label_4f5464;
        case 0x4f5468u: goto label_4f5468;
        case 0x4f546cu: goto label_4f546c;
        case 0x4f5470u: goto label_4f5470;
        case 0x4f5474u: goto label_4f5474;
        case 0x4f5478u: goto label_4f5478;
        case 0x4f547cu: goto label_4f547c;
        case 0x4f5480u: goto label_4f5480;
        case 0x4f5484u: goto label_4f5484;
        case 0x4f5488u: goto label_4f5488;
        case 0x4f548cu: goto label_4f548c;
        case 0x4f5490u: goto label_4f5490;
        case 0x4f5494u: goto label_4f5494;
        case 0x4f5498u: goto label_4f5498;
        case 0x4f549cu: goto label_4f549c;
        case 0x4f54a0u: goto label_4f54a0;
        case 0x4f54a4u: goto label_4f54a4;
        case 0x4f54a8u: goto label_4f54a8;
        case 0x4f54acu: goto label_4f54ac;
        case 0x4f54b0u: goto label_4f54b0;
        case 0x4f54b4u: goto label_4f54b4;
        case 0x4f54b8u: goto label_4f54b8;
        case 0x4f54bcu: goto label_4f54bc;
        case 0x4f54c0u: goto label_4f54c0;
        case 0x4f54c4u: goto label_4f54c4;
        case 0x4f54c8u: goto label_4f54c8;
        case 0x4f54ccu: goto label_4f54cc;
        case 0x4f54d0u: goto label_4f54d0;
        case 0x4f54d4u: goto label_4f54d4;
        case 0x4f54d8u: goto label_4f54d8;
        case 0x4f54dcu: goto label_4f54dc;
        case 0x4f54e0u: goto label_4f54e0;
        case 0x4f54e4u: goto label_4f54e4;
        case 0x4f54e8u: goto label_4f54e8;
        case 0x4f54ecu: goto label_4f54ec;
        case 0x4f54f0u: goto label_4f54f0;
        case 0x4f54f4u: goto label_4f54f4;
        case 0x4f54f8u: goto label_4f54f8;
        case 0x4f54fcu: goto label_4f54fc;
        case 0x4f5500u: goto label_4f5500;
        case 0x4f5504u: goto label_4f5504;
        case 0x4f5508u: goto label_4f5508;
        case 0x4f550cu: goto label_4f550c;
        case 0x4f5510u: goto label_4f5510;
        case 0x4f5514u: goto label_4f5514;
        case 0x4f5518u: goto label_4f5518;
        case 0x4f551cu: goto label_4f551c;
        case 0x4f5520u: goto label_4f5520;
        case 0x4f5524u: goto label_4f5524;
        case 0x4f5528u: goto label_4f5528;
        case 0x4f552cu: goto label_4f552c;
        case 0x4f5530u: goto label_4f5530;
        case 0x4f5534u: goto label_4f5534;
        case 0x4f5538u: goto label_4f5538;
        case 0x4f553cu: goto label_4f553c;
        case 0x4f5540u: goto label_4f5540;
        case 0x4f5544u: goto label_4f5544;
        case 0x4f5548u: goto label_4f5548;
        case 0x4f554cu: goto label_4f554c;
        case 0x4f5550u: goto label_4f5550;
        case 0x4f5554u: goto label_4f5554;
        case 0x4f5558u: goto label_4f5558;
        case 0x4f555cu: goto label_4f555c;
        case 0x4f5560u: goto label_4f5560;
        case 0x4f5564u: goto label_4f5564;
        case 0x4f5568u: goto label_4f5568;
        case 0x4f556cu: goto label_4f556c;
        case 0x4f5570u: goto label_4f5570;
        case 0x4f5574u: goto label_4f5574;
        case 0x4f5578u: goto label_4f5578;
        case 0x4f557cu: goto label_4f557c;
        case 0x4f5580u: goto label_4f5580;
        case 0x4f5584u: goto label_4f5584;
        case 0x4f5588u: goto label_4f5588;
        case 0x4f558cu: goto label_4f558c;
        case 0x4f5590u: goto label_4f5590;
        case 0x4f5594u: goto label_4f5594;
        case 0x4f5598u: goto label_4f5598;
        case 0x4f559cu: goto label_4f559c;
        case 0x4f55a0u: goto label_4f55a0;
        case 0x4f55a4u: goto label_4f55a4;
        case 0x4f55a8u: goto label_4f55a8;
        case 0x4f55acu: goto label_4f55ac;
        case 0x4f55b0u: goto label_4f55b0;
        case 0x4f55b4u: goto label_4f55b4;
        case 0x4f55b8u: goto label_4f55b8;
        case 0x4f55bcu: goto label_4f55bc;
        case 0x4f55c0u: goto label_4f55c0;
        case 0x4f55c4u: goto label_4f55c4;
        case 0x4f55c8u: goto label_4f55c8;
        case 0x4f55ccu: goto label_4f55cc;
        case 0x4f55d0u: goto label_4f55d0;
        case 0x4f55d4u: goto label_4f55d4;
        case 0x4f55d8u: goto label_4f55d8;
        case 0x4f55dcu: goto label_4f55dc;
        case 0x4f55e0u: goto label_4f55e0;
        case 0x4f55e4u: goto label_4f55e4;
        case 0x4f55e8u: goto label_4f55e8;
        case 0x4f55ecu: goto label_4f55ec;
        case 0x4f55f0u: goto label_4f55f0;
        case 0x4f55f4u: goto label_4f55f4;
        case 0x4f55f8u: goto label_4f55f8;
        case 0x4f55fcu: goto label_4f55fc;
        case 0x4f5600u: goto label_4f5600;
        case 0x4f5604u: goto label_4f5604;
        case 0x4f5608u: goto label_4f5608;
        case 0x4f560cu: goto label_4f560c;
        default: break;
    }

    ctx->pc = 0x4f49d0u;

label_4f49d0:
    // 0x4f49d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f49d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f49d4:
    // 0x4f49d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4f49d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f49d8:
    // 0x4f49d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f49d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4f49dc:
    // 0x4f49dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f49dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f49e0:
    // 0x4f49e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f49e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f49e4:
    // 0x4f49e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f49e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f49e8:
    // 0x4f49e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f49e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f49ec:
    // 0x4f49ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f49ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f49f0:
    // 0x4f49f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f49f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f49f4:
    // 0x4f49f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4f49f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f49f8:
    // 0x4f49f8: 0xc10ca68  jal         func_4329A0
label_4f49fc:
    if (ctx->pc == 0x4F49FCu) {
        ctx->pc = 0x4F49FCu;
            // 0x4f49fc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4F4A00u;
        goto label_4f4a00;
    }
    ctx->pc = 0x4F49F8u;
    SET_GPR_U32(ctx, 31, 0x4F4A00u);
    ctx->pc = 0x4F49FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F49F8u;
            // 0x4f49fc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4A00u; }
        if (ctx->pc != 0x4F4A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4A00u; }
        if (ctx->pc != 0x4F4A00u) { return; }
    }
    ctx->pc = 0x4F4A00u;
label_4f4a00:
    // 0x4f4a00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4f4a04:
    // 0x4f4a04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f4a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f4a08:
    // 0x4f4a08: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4f4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4f4a0c:
    // 0x4f4a0c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4f4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4f4a10:
    // 0x4f4a10: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f4a10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4f4a14:
    // 0x4f4a14: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4f4a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4f4a18:
    // 0x4f4a18: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f4a18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f4a1c:
    // 0x4f4a1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4f4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4f4a20:
    // 0x4f4a20: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4f4a20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4f4a24:
    // 0x4f4a24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f4a28:
    // 0x4f4a28: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4f4a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4f4a2c:
    // 0x4f4a2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4f4a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4f4a30:
    // 0x4f4a30: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4f4a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4f4a34:
    // 0x4f4a34: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4f4a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4f4a38:
    // 0x4f4a38: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4f4a38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4f4a3c:
    // 0x4f4a3c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4f4a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4f4a40:
    // 0x4f4a40: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4f4a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4f4a44:
    // 0x4f4a44: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4f4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4f4a48:
    // 0x4f4a48: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4f4a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4f4a4c:
    // 0x4f4a4c: 0xc0582cc  jal         func_160B30
label_4f4a50:
    if (ctx->pc == 0x4F4A50u) {
        ctx->pc = 0x4F4A50u;
            // 0x4f4a50: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4F4A54u;
        goto label_4f4a54;
    }
    ctx->pc = 0x4F4A4Cu;
    SET_GPR_U32(ctx, 31, 0x4F4A54u);
    ctx->pc = 0x4F4A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4A4Cu;
            // 0x4f4a50: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4A54u; }
        if (ctx->pc != 0x4F4A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4A54u; }
        if (ctx->pc != 0x4F4A54u) { return; }
    }
    ctx->pc = 0x4F4A54u;
label_4f4a54:
    // 0x4f4a54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f4a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f4a58:
    // 0x4f4a58: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4f4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4f4a5c:
    // 0x4f4a5c: 0x246344c0  addiu       $v1, $v1, 0x44C0
    ctx->pc = 0x4f4a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17600));
label_4f4a60:
    // 0x4f4a60: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4f4a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4f4a64:
    // 0x4f4a64: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4f4a64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4f4a68:
    // 0x4f4a68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f4a6c:
    // 0x4f4a6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f4a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f4a70:
    // 0x4f4a70: 0xac4464c0  sw          $a0, 0x64C0($v0)
    ctx->pc = 0x4f4a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25792), GPR_U32(ctx, 4));
label_4f4a74:
    // 0x4f4a74: 0x246344d0  addiu       $v1, $v1, 0x44D0
    ctx->pc = 0x4f4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17616));
label_4f4a78:
    // 0x4f4a78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f4a7c:
    // 0x4f4a7c: 0x24424508  addiu       $v0, $v0, 0x4508
    ctx->pc = 0x4f4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17672));
label_4f4a80:
    // 0x4f4a80: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f4a80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4f4a84:
    // 0x4f4a84: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4f4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4f4a88:
    // 0x4f4a88: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4f4a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4f4a8c:
    // 0x4f4a8c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4f4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4f4a90:
    // 0x4f4a90: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4f4a90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4f4a94:
    // 0x4f4a94: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4f4a94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4f4a98:
    // 0x4f4a98: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4f4a98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4f4a9c:
    // 0x4f4a9c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4f4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4f4aa0:
    // 0x4f4aa0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4f4aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4f4aa4:
    // 0x4f4aa4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4f4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4f4aa8:
    // 0x4f4aa8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4f4aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4f4aac:
    // 0x4f4aac: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4f4aacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4f4ab0:
    // 0x4f4ab0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4f4ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4f4ab4:
    // 0x4f4ab4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4f4ab8:
    if (ctx->pc == 0x4F4AB8u) {
        ctx->pc = 0x4F4ABCu;
        goto label_4f4abc;
    }
    ctx->pc = 0x4F4AB4u;
    {
        const bool branch_taken_0x4f4ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4ab4) {
            ctx->pc = 0x4F4B48u;
            goto label_4f4b48;
        }
    }
    ctx->pc = 0x4F4ABCu;
label_4f4abc:
    // 0x4f4abc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4f4abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4f4ac0:
    // 0x4f4ac0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4f4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4f4ac4:
    // 0x4f4ac4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4f4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4f4ac8:
    // 0x4f4ac8: 0xc040138  jal         func_1004E0
label_4f4acc:
    if (ctx->pc == 0x4F4ACCu) {
        ctx->pc = 0x4F4ACCu;
            // 0x4f4acc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4F4AD0u;
        goto label_4f4ad0;
    }
    ctx->pc = 0x4F4AC8u;
    SET_GPR_U32(ctx, 31, 0x4F4AD0u);
    ctx->pc = 0x4F4ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4AC8u;
            // 0x4f4acc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4AD0u; }
        if (ctx->pc != 0x4F4AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4AD0u; }
        if (ctx->pc != 0x4F4AD0u) { return; }
    }
    ctx->pc = 0x4F4AD0u;
label_4f4ad0:
    // 0x4f4ad0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f4ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_4f4ad4:
    // 0x4f4ad4: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x4f4ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_4f4ad8:
    // 0x4f4ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f4ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f4adc:
    // 0x4f4adc: 0x24a54b70  addiu       $a1, $a1, 0x4B70
    ctx->pc = 0x4f4adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19312));
label_4f4ae0:
    // 0x4f4ae0: 0x24c63f70  addiu       $a2, $a2, 0x3F70
    ctx->pc = 0x4f4ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16240));
label_4f4ae4:
    // 0x4f4ae4: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x4f4ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_4f4ae8:
    // 0x4f4ae8: 0xc040840  jal         func_102100
label_4f4aec:
    if (ctx->pc == 0x4F4AECu) {
        ctx->pc = 0x4F4AECu;
            // 0x4f4aec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4AF0u;
        goto label_4f4af0;
    }
    ctx->pc = 0x4F4AE8u;
    SET_GPR_U32(ctx, 31, 0x4F4AF0u);
    ctx->pc = 0x4F4AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4AE8u;
            // 0x4f4aec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4AF0u; }
        if (ctx->pc != 0x4F4AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4AF0u; }
        if (ctx->pc != 0x4F4AF0u) { return; }
    }
    ctx->pc = 0x4F4AF0u;
label_4f4af0:
    // 0x4f4af0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4f4af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4f4af4:
    // 0x4f4af4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f4af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f4af8:
    // 0x4f4af8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4f4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4f4afc:
    // 0x4f4afc: 0xc0788fc  jal         func_1E23F0
label_4f4b00:
    if (ctx->pc == 0x4F4B00u) {
        ctx->pc = 0x4F4B00u;
            // 0x4f4b00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4B04u;
        goto label_4f4b04;
    }
    ctx->pc = 0x4F4AFCu;
    SET_GPR_U32(ctx, 31, 0x4F4B04u);
    ctx->pc = 0x4F4B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4AFCu;
            // 0x4f4b00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4B04u; }
        if (ctx->pc != 0x4F4B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4B04u; }
        if (ctx->pc != 0x4F4B04u) { return; }
    }
    ctx->pc = 0x4F4B04u;
label_4f4b04:
    // 0x4f4b04: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4f4b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4f4b08:
    // 0x4f4b08: 0xc0788fc  jal         func_1E23F0
label_4f4b0c:
    if (ctx->pc == 0x4F4B0Cu) {
        ctx->pc = 0x4F4B0Cu;
            // 0x4f4b0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4B10u;
        goto label_4f4b10;
    }
    ctx->pc = 0x4F4B08u;
    SET_GPR_U32(ctx, 31, 0x4F4B10u);
    ctx->pc = 0x4F4B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4B08u;
            // 0x4f4b0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4B10u; }
        if (ctx->pc != 0x4F4B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4B10u; }
        if (ctx->pc != 0x4F4B10u) { return; }
    }
    ctx->pc = 0x4F4B10u;
label_4f4b10:
    // 0x4f4b10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f4b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f4b14:
    // 0x4f4b14: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4f4b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4f4b18:
    // 0x4f4b18: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4f4b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4f4b1c:
    // 0x4f4b1c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4f4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4f4b20:
    // 0x4f4b20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f4b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f4b24:
    // 0x4f4b24: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4f4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4f4b28:
    // 0x4f4b28: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4f4b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4f4b2c:
    // 0x4f4b2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f4b30:
    // 0x4f4b30: 0xc0a997c  jal         func_2A65F0
label_4f4b34:
    if (ctx->pc == 0x4F4B34u) {
        ctx->pc = 0x4F4B34u;
            // 0x4f4b34: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4F4B38u;
        goto label_4f4b38;
    }
    ctx->pc = 0x4F4B30u;
    SET_GPR_U32(ctx, 31, 0x4F4B38u);
    ctx->pc = 0x4F4B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4B30u;
            // 0x4f4b34: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4B38u; }
        if (ctx->pc != 0x4F4B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4B38u; }
        if (ctx->pc != 0x4F4B38u) { return; }
    }
    ctx->pc = 0x4F4B38u;
label_4f4b38:
    // 0x4f4b38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4f4b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4f4b3c:
    // 0x4f4b3c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4f4b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4f4b40:
    // 0x4f4b40: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4f4b44:
    if (ctx->pc == 0x4F4B44u) {
        ctx->pc = 0x4F4B44u;
            // 0x4f4b44: 0x26520140  addiu       $s2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->pc = 0x4F4B48u;
        goto label_4f4b48;
    }
    ctx->pc = 0x4F4B40u;
    {
        const bool branch_taken_0x4f4b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F4B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4B40u;
            // 0x4f4b44: 0x26520140  addiu       $s2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4b40) {
            ctx->pc = 0x4F4B14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f4b14;
        }
    }
    ctx->pc = 0x4F4B48u;
label_4f4b48:
    // 0x4f4b48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4f4b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f4b4c:
    // 0x4f4b4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f4b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4f4b50:
    // 0x4f4b50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f4b50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4b54:
    // 0x4f4b54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f4b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4b58:
    // 0x4f4b58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f4b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4b5c:
    // 0x4f4b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f4b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4b60:
    // 0x4f4b60: 0x3e00008  jr          $ra
label_4f4b64:
    if (ctx->pc == 0x4F4B64u) {
        ctx->pc = 0x4F4B64u;
            // 0x4f4b64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4F4B68u;
        goto label_4f4b68;
    }
    ctx->pc = 0x4F4B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4B60u;
            // 0x4f4b64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F4B68u;
label_4f4b68:
    // 0x4f4b68: 0x0  nop
    ctx->pc = 0x4f4b68u;
    // NOP
label_4f4b6c:
    // 0x4f4b6c: 0x0  nop
    ctx->pc = 0x4f4b6cu;
    // NOP
label_4f4b70:
    // 0x4f4b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f4b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f4b74:
    // 0x4f4b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f4b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f4b78:
    // 0x4f4b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f4b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f4b7c:
    // 0x4f4b7c: 0xc0aeebc  jal         func_2BBAF0
label_4f4b80:
    if (ctx->pc == 0x4F4B80u) {
        ctx->pc = 0x4F4B80u;
            // 0x4f4b80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4B84u;
        goto label_4f4b84;
    }
    ctx->pc = 0x4F4B7Cu;
    SET_GPR_U32(ctx, 31, 0x4F4B84u);
    ctx->pc = 0x4F4B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4B7Cu;
            // 0x4f4b80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4B84u; }
        if (ctx->pc != 0x4F4B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4B84u; }
        if (ctx->pc != 0x4F4B84u) { return; }
    }
    ctx->pc = 0x4F4B84u;
label_4f4b84:
    // 0x4f4b84: 0xc0aeeb4  jal         func_2BBAD0
label_4f4b88:
    if (ctx->pc == 0x4F4B88u) {
        ctx->pc = 0x4F4B88u;
            // 0x4f4b88: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4F4B8Cu;
        goto label_4f4b8c;
    }
    ctx->pc = 0x4F4B84u;
    SET_GPR_U32(ctx, 31, 0x4F4B8Cu);
    ctx->pc = 0x4F4B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4B84u;
            // 0x4f4b88: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4B8Cu; }
        if (ctx->pc != 0x4F4B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4B8Cu; }
        if (ctx->pc != 0x4F4B8Cu) { return; }
    }
    ctx->pc = 0x4F4B8Cu;
label_4f4b8c:
    // 0x4f4b8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f4b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4f4b90:
    // 0x4f4b90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f4b94:
    // 0x4f4b94: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4f4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4f4b98:
    // 0x4f4b98: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4f4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4f4b9c:
    // 0x4f4b9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f4ba0:
    // 0x4f4ba0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4f4ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4f4ba4:
    // 0x4f4ba4: 0xc0aeea4  jal         func_2BBA90
label_4f4ba8:
    if (ctx->pc == 0x4F4BA8u) {
        ctx->pc = 0x4F4BA8u;
            // 0x4f4ba8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4F4BACu;
        goto label_4f4bac;
    }
    ctx->pc = 0x4F4BA4u;
    SET_GPR_U32(ctx, 31, 0x4F4BACu);
    ctx->pc = 0x4F4BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4BA4u;
            // 0x4f4ba8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4BACu; }
        if (ctx->pc != 0x4F4BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4BACu; }
        if (ctx->pc != 0x4F4BACu) { return; }
    }
    ctx->pc = 0x4F4BACu;
label_4f4bac:
    // 0x4f4bac: 0xc0aee8c  jal         func_2BBA30
label_4f4bb0:
    if (ctx->pc == 0x4F4BB0u) {
        ctx->pc = 0x4F4BB0u;
            // 0x4f4bb0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4F4BB4u;
        goto label_4f4bb4;
    }
    ctx->pc = 0x4F4BACu;
    SET_GPR_U32(ctx, 31, 0x4F4BB4u);
    ctx->pc = 0x4F4BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4BACu;
            // 0x4f4bb0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4BB4u; }
        if (ctx->pc != 0x4F4BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4BB4u; }
        if (ctx->pc != 0x4F4BB4u) { return; }
    }
    ctx->pc = 0x4F4BB4u;
label_4f4bb4:
    // 0x4f4bb4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4f4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4f4bb8:
    // 0x4f4bb8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4f4bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_4f4bbc:
    // 0x4f4bbc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4f4bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4f4bc0:
    // 0x4f4bc0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4f4bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4f4bc4:
    // 0x4f4bc4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4f4bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4f4bc8:
    // 0x4f4bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f4bcc:
    // 0x4f4bcc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4f4bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_4f4bd0:
    // 0x4f4bd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4f4bd4:
    // 0x4f4bd4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4f4bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_4f4bd8:
    // 0x4f4bd8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4f4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_4f4bdc:
    // 0x4f4bdc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4f4bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_4f4be0:
    // 0x4f4be0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4f4be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_4f4be4:
    // 0x4f4be4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4f4be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_4f4be8:
    // 0x4f4be8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4f4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_4f4bec:
    // 0x4f4bec: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4f4becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_4f4bf0:
    // 0x4f4bf0: 0xc0775b8  jal         func_1DD6E0
label_4f4bf4:
    if (ctx->pc == 0x4F4BF4u) {
        ctx->pc = 0x4F4BF4u;
            // 0x4f4bf4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4F4BF8u;
        goto label_4f4bf8;
    }
    ctx->pc = 0x4F4BF0u;
    SET_GPR_U32(ctx, 31, 0x4F4BF8u);
    ctx->pc = 0x4F4BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4BF0u;
            // 0x4f4bf4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4BF8u; }
        if (ctx->pc != 0x4F4BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4BF8u; }
        if (ctx->pc != 0x4F4BF8u) { return; }
    }
    ctx->pc = 0x4F4BF8u;
label_4f4bf8:
    // 0x4f4bf8: 0xc077314  jal         func_1DCC50
label_4f4bfc:
    if (ctx->pc == 0x4F4BFCu) {
        ctx->pc = 0x4F4BFCu;
            // 0x4f4bfc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4F4C00u;
        goto label_4f4c00;
    }
    ctx->pc = 0x4F4BF8u;
    SET_GPR_U32(ctx, 31, 0x4F4C00u);
    ctx->pc = 0x4F4BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4BF8u;
            // 0x4f4bfc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4C00u; }
        if (ctx->pc != 0x4F4C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4C00u; }
        if (ctx->pc != 0x4F4C00u) { return; }
    }
    ctx->pc = 0x4F4C00u;
label_4f4c00:
    // 0x4f4c00: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4f4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4f4c04:
    // 0x4f4c04: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4f4c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4f4c08:
    // 0x4f4c08: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4f4c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_4f4c0c:
    // 0x4f4c0c: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x4f4c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_4f4c10:
    // 0x4f4c10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f4c14:
    // 0x4f4c14: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x4f4c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_4f4c18:
    // 0x4f4c18: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x4f4c18u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4f4c1c:
    // 0x4f4c1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f4c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f4c20:
    // 0x4f4c20: 0x24634420  addiu       $v1, $v1, 0x4420
    ctx->pc = 0x4f4c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17440));
label_4f4c24:
    // 0x4f4c24: 0x24a58a60  addiu       $a1, $a1, -0x75A0
    ctx->pc = 0x4f4c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937184));
label_4f4c28:
    // 0x4f4c28: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x4f4c28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4f4c2c:
    // 0x4f4c2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f4c30:
    // 0x4f4c30: 0x24424460  addiu       $v0, $v0, 0x4460
    ctx->pc = 0x4f4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17504));
label_4f4c34:
    // 0x4f4c34: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x4f4c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_4f4c38:
    // 0x4f4c38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f4c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f4c3c:
    // 0x4f4c3c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f4c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f4c40:
    // 0x4f4c40: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x4f4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_4f4c44:
    // 0x4f4c44: 0xc04cce8  jal         func_1333A0
label_4f4c48:
    if (ctx->pc == 0x4F4C48u) {
        ctx->pc = 0x4F4C48u;
            // 0x4f4c48: 0xae000134  sw          $zero, 0x134($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
        ctx->pc = 0x4F4C4Cu;
        goto label_4f4c4c;
    }
    ctx->pc = 0x4F4C44u;
    SET_GPR_U32(ctx, 31, 0x4F4C4Cu);
    ctx->pc = 0x4F4C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4C44u;
            // 0x4f4c48: 0xae000134  sw          $zero, 0x134($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4C4Cu; }
        if (ctx->pc != 0x4F4C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4C4Cu; }
        if (ctx->pc != 0x4F4C4Cu) { return; }
    }
    ctx->pc = 0x4F4C4Cu;
label_4f4c4c:
    // 0x4f4c4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f4c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4c50:
    // 0x4f4c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f4c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4c54:
    // 0x4f4c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f4c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4c58:
    // 0x4f4c58: 0x3e00008  jr          $ra
label_4f4c5c:
    if (ctx->pc == 0x4F4C5Cu) {
        ctx->pc = 0x4F4C5Cu;
            // 0x4f4c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F4C60u;
        goto label_4f4c60;
    }
    ctx->pc = 0x4F4C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4C58u;
            // 0x4f4c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F4C60u;
label_4f4c60:
    // 0x4f4c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f4c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f4c64:
    // 0x4f4c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f4c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f4c68:
    // 0x4f4c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f4c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f4c6c:
    // 0x4f4c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f4c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4c70:
    // 0x4f4c70: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x4f4c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4f4c74:
    // 0x4f4c74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f4c78:
    if (ctx->pc == 0x4F4C78u) {
        ctx->pc = 0x4F4C78u;
            // 0x4f4c78: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->pc = 0x4F4C7Cu;
        goto label_4f4c7c;
    }
    ctx->pc = 0x4F4C74u;
    {
        const bool branch_taken_0x4f4c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4c74) {
            ctx->pc = 0x4F4C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4C74u;
            // 0x4f4c78: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4C90u;
            goto label_4f4c90;
        }
    }
    ctx->pc = 0x4F4C7Cu;
label_4f4c7c:
    // 0x4f4c7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f4c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f4c80:
    // 0x4f4c80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f4c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f4c84:
    // 0x4f4c84: 0x320f809  jalr        $t9
label_4f4c88:
    if (ctx->pc == 0x4F4C88u) {
        ctx->pc = 0x4F4C88u;
            // 0x4f4c88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F4C8Cu;
        goto label_4f4c8c;
    }
    ctx->pc = 0x4F4C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F4C8Cu);
        ctx->pc = 0x4F4C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4C84u;
            // 0x4f4c88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F4C8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F4C8Cu; }
            if (ctx->pc != 0x4F4C8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4F4C8Cu;
label_4f4c8c:
    // 0x4f4c8c: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x4f4c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_4f4c90:
    // 0x4f4c90: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x4f4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_4f4c94:
    // 0x4f4c94: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_4f4c98:
    if (ctx->pc == 0x4F4C98u) {
        ctx->pc = 0x4F4C98u;
            // 0x4f4c98: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4F4C9Cu;
        goto label_4f4c9c;
    }
    ctx->pc = 0x4F4C94u;
    {
        const bool branch_taken_0x4f4c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4c94) {
            ctx->pc = 0x4F4C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4C94u;
            // 0x4f4c98: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4CBCu;
            goto label_4f4cbc;
        }
    }
    ctx->pc = 0x4F4C9Cu;
label_4f4c9c:
    // 0x4f4c9c: 0xa0600060  sb          $zero, 0x60($v1)
    ctx->pc = 0x4f4c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 0));
label_4f4ca0:
    // 0x4f4ca0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4f4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4f4ca4:
    // 0x4f4ca4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4f4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4f4ca8:
    // 0x4f4ca8: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x4f4ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_4f4cac:
    // 0x4f4cac: 0xc057b7c  jal         func_15EDF0
label_4f4cb0:
    if (ctx->pc == 0x4F4CB0u) {
        ctx->pc = 0x4F4CB0u;
            // 0x4f4cb0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4F4CB4u;
        goto label_4f4cb4;
    }
    ctx->pc = 0x4F4CACu;
    SET_GPR_U32(ctx, 31, 0x4F4CB4u);
    ctx->pc = 0x4F4CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4CACu;
            // 0x4f4cb0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4CB4u; }
        if (ctx->pc != 0x4F4CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4CB4u; }
        if (ctx->pc != 0x4F4CB4u) { return; }
    }
    ctx->pc = 0x4F4CB4u;
label_4f4cb4:
    // 0x4f4cb4: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x4f4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_4f4cb8:
    // 0x4f4cb8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4f4cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4f4cbc:
    // 0x4f4cbc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f4cc0:
    if (ctx->pc == 0x4F4CC0u) {
        ctx->pc = 0x4F4CC0u;
            // 0x4f4cc0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4F4CC4u;
        goto label_4f4cc4;
    }
    ctx->pc = 0x4F4CBCu;
    {
        const bool branch_taken_0x4f4cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4cbc) {
            ctx->pc = 0x4F4CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4CBCu;
            // 0x4f4cc0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4CD8u;
            goto label_4f4cd8;
        }
    }
    ctx->pc = 0x4F4CC4u;
label_4f4cc4:
    // 0x4f4cc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f4cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f4cc8:
    // 0x4f4cc8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f4cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f4ccc:
    // 0x4f4ccc: 0x320f809  jalr        $t9
label_4f4cd0:
    if (ctx->pc == 0x4F4CD0u) {
        ctx->pc = 0x4F4CD0u;
            // 0x4f4cd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F4CD4u;
        goto label_4f4cd4;
    }
    ctx->pc = 0x4F4CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F4CD4u);
        ctx->pc = 0x4F4CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4CCCu;
            // 0x4f4cd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F4CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F4CD4u; }
            if (ctx->pc != 0x4F4CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x4F4CD4u;
label_4f4cd4:
    // 0x4f4cd4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4f4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4f4cd8:
    // 0x4f4cd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f4cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4cdc:
    // 0x4f4cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f4cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4ce0:
    // 0x4f4ce0: 0x3e00008  jr          $ra
label_4f4ce4:
    if (ctx->pc == 0x4F4CE4u) {
        ctx->pc = 0x4F4CE4u;
            // 0x4f4ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F4CE8u;
        goto label_4f4ce8;
    }
    ctx->pc = 0x4F4CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4CE0u;
            // 0x4f4ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F4CE8u;
label_4f4ce8:
    // 0x4f4ce8: 0x0  nop
    ctx->pc = 0x4f4ce8u;
    // NOP
label_4f4cec:
    // 0x4f4cec: 0x0  nop
    ctx->pc = 0x4f4cecu;
    // NOP
label_4f4cf0:
    // 0x4f4cf0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x4f4cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_4f4cf4:
    // 0x4f4cf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f4cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4f4cf8:
    // 0x4f4cf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f4cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f4cfc:
    // 0x4f4cfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f4cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f4d00:
    // 0x4f4d00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f4d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4d04:
    // 0x4f4d04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f4d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f4d08:
    // 0x4f4d08: 0xc0892d0  jal         func_224B40
label_4f4d0c:
    if (ctx->pc == 0x4F4D0Cu) {
        ctx->pc = 0x4F4D0Cu;
            // 0x4f4d0c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4F4D10u;
        goto label_4f4d10;
    }
    ctx->pc = 0x4F4D08u;
    SET_GPR_U32(ctx, 31, 0x4F4D10u);
    ctx->pc = 0x4F4D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4D08u;
            // 0x4f4d0c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D10u; }
        if (ctx->pc != 0x4F4D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D10u; }
        if (ctx->pc != 0x4F4D10u) { return; }
    }
    ctx->pc = 0x4F4D10u;
label_4f4d10:
    // 0x4f4d10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f4d14:
    // 0x4f4d14: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4f4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4f4d18:
    // 0x4f4d18: 0x8c4264c0  lw          $v0, 0x64C0($v0)
    ctx->pc = 0x4f4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25792)));
label_4f4d1c:
    // 0x4f4d1c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x4f4d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4f4d20:
    // 0x4f4d20: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4f4d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4f4d24:
    // 0x4f4d24: 0xc0b6e68  jal         func_2DB9A0
label_4f4d28:
    if (ctx->pc == 0x4F4D28u) {
        ctx->pc = 0x4F4D28u;
            // 0x4f4d28: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x4F4D2Cu;
        goto label_4f4d2c;
    }
    ctx->pc = 0x4F4D24u;
    SET_GPR_U32(ctx, 31, 0x4F4D2Cu);
    ctx->pc = 0x4F4D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4D24u;
            // 0x4f4d28: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D2Cu; }
        if (ctx->pc != 0x4F4D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D2Cu; }
        if (ctx->pc != 0x4F4D2Cu) { return; }
    }
    ctx->pc = 0x4F4D2Cu;
label_4f4d2c:
    // 0x4f4d2c: 0xc0b6dac  jal         func_2DB6B0
label_4f4d30:
    if (ctx->pc == 0x4F4D30u) {
        ctx->pc = 0x4F4D30u;
            // 0x4f4d30: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4F4D34u;
        goto label_4f4d34;
    }
    ctx->pc = 0x4F4D2Cu;
    SET_GPR_U32(ctx, 31, 0x4F4D34u);
    ctx->pc = 0x4F4D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4D2Cu;
            // 0x4f4d30: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D34u; }
        if (ctx->pc != 0x4F4D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D34u; }
        if (ctx->pc != 0x4F4D34u) { return; }
    }
    ctx->pc = 0x4F4D34u;
label_4f4d34:
    // 0x4f4d34: 0xc0cac94  jal         func_32B250
label_4f4d38:
    if (ctx->pc == 0x4F4D38u) {
        ctx->pc = 0x4F4D38u;
            // 0x4f4d38: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4F4D3Cu;
        goto label_4f4d3c;
    }
    ctx->pc = 0x4F4D34u;
    SET_GPR_U32(ctx, 31, 0x4F4D3Cu);
    ctx->pc = 0x4F4D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4D34u;
            // 0x4f4d38: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D3Cu; }
        if (ctx->pc != 0x4F4D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D3Cu; }
        if (ctx->pc != 0x4F4D3Cu) { return; }
    }
    ctx->pc = 0x4F4D3Cu;
label_4f4d3c:
    // 0x4f4d3c: 0xc0cac84  jal         func_32B210
label_4f4d40:
    if (ctx->pc == 0x4F4D40u) {
        ctx->pc = 0x4F4D40u;
            // 0x4f4d40: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4F4D44u;
        goto label_4f4d44;
    }
    ctx->pc = 0x4F4D3Cu;
    SET_GPR_U32(ctx, 31, 0x4F4D44u);
    ctx->pc = 0x4F4D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4D3Cu;
            // 0x4f4d40: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D44u; }
        if (ctx->pc != 0x4F4D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D44u; }
        if (ctx->pc != 0x4F4D44u) { return; }
    }
    ctx->pc = 0x4F4D44u;
label_4f4d44:
    // 0x4f4d44: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4f4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4f4d48:
    // 0x4f4d48: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x4f4d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4f4d4c:
    // 0x4f4d4c: 0xc44dc918  lwc1        $f13, -0x36E8($v0)
    ctx->pc = 0x4f4d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4f4d50:
    // 0x4f4d50: 0xc0a562c  jal         func_2958B0
label_4f4d54:
    if (ctx->pc == 0x4F4D54u) {
        ctx->pc = 0x4F4D54u;
            // 0x4f4d54: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4F4D58u;
        goto label_4f4d58;
    }
    ctx->pc = 0x4F4D50u;
    SET_GPR_U32(ctx, 31, 0x4F4D58u);
    ctx->pc = 0x4F4D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4D50u;
            // 0x4f4d54: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D58u; }
        if (ctx->pc != 0x4F4D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4D58u; }
        if (ctx->pc != 0x4F4D58u) { return; }
    }
    ctx->pc = 0x4F4D58u;
label_4f4d58:
    // 0x4f4d58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f4d5c:
    // 0x4f4d5c: 0x3c0b42c8  lui         $t3, 0x42C8
    ctx->pc = 0x4f4d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17096 << 16));
label_4f4d60:
    // 0x4f4d60: 0x8c4364c0  lw          $v1, 0x64C0($v0)
    ctx->pc = 0x4f4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25792)));
label_4f4d64:
    // 0x4f4d64: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x4f4d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f4d68:
    // 0x4f4d68: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x4f4d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f4d6c:
    // 0x4f4d6c: 0x3c0a43af  lui         $t2, 0x43AF
    ctx->pc = 0x4f4d6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17327 << 16));
label_4f4d70:
    // 0x4f4d70: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x4f4d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f4d74:
    // 0x4f4d74: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4f4d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f4d78:
    // 0x4f4d78: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x4f4d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_4f4d7c:
    // 0x4f4d7c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x4f4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_4f4d80:
    // 0x4f4d80: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x4f4d80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_4f4d84:
    // 0x4f4d84: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4f4d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f4d88:
    // 0x4f4d88: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4f4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4f4d8c:
    // 0x4f4d8c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4f4d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4f4d90:
    // 0x4f4d90: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x4f4d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_4f4d94:
    // 0x4f4d94: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x4f4d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_4f4d98:
    // 0x4f4d98: 0xc6290018  lwc1        $f9, 0x18($s1)
    ctx->pc = 0x4f4d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_4f4d9c:
    // 0x4f4d9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f4d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f4da0:
    // 0x4f4da0: 0xc6280014  lwc1        $f8, 0x14($s1)
    ctx->pc = 0x4f4da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4f4da4:
    // 0x4f4da4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4f4da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4f4da8:
    // 0x4f4da8: 0xc6270010  lwc1        $f7, 0x10($s1)
    ctx->pc = 0x4f4da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4f4dac:
    // 0x4f4dac: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4f4dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4f4db0:
    // 0x4f4db0: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x4f4db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4f4db4:
    // 0x4f4db4: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x4f4db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4f4db8:
    // 0x4f4db8: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x4f4db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4f4dbc:
    // 0x4f4dbc: 0xafab0158  sw          $t3, 0x158($sp)
    ctx->pc = 0x4f4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 11));
label_4f4dc0:
    // 0x4f4dc0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x4f4dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f4dc4:
    // 0x4f4dc4: 0xafaa0154  sw          $t2, 0x154($sp)
    ctx->pc = 0x4f4dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 10));
label_4f4dc8:
    // 0x4f4dc8: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x4f4dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4f4dcc:
    // 0x4f4dcc: 0xa3a90160  sb          $t1, 0x160($sp)
    ctx->pc = 0x4f4dccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 9));
label_4f4dd0:
    // 0x4f4dd0: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x4f4dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4f4dd4:
    // 0x4f4dd4: 0xafa8015c  sw          $t0, 0x15C($sp)
    ctx->pc = 0x4f4dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 8));
label_4f4dd8:
    // 0x4f4dd8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x4f4dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4f4ddc:
    // 0x4f4ddc: 0xa3a70162  sb          $a3, 0x162($sp)
    ctx->pc = 0x4f4ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 354), (uint8_t)GPR_U32(ctx, 7));
label_4f4de0:
    // 0x4f4de0: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x4f4de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f4de4:
    // 0x4f4de4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x4f4de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_4f4de8:
    // 0x4f4de8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x4f4de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f4dec:
    // 0x4f4dec: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x4f4decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_4f4df0:
    // 0x4f4df0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x4f4df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f4df4:
    // 0x4f4df4: 0xe7a2011c  swc1        $f2, 0x11C($sp)
    ctx->pc = 0x4f4df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4f4df8:
    // 0x4f4df8: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x4f4df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4f4dfc:
    // 0x4f4dfc: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x4f4dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4f4e00:
    // 0x4f4e00: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x4f4e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f4e04:
    // 0x4f4e04: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x4f4e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f4e08:
    // 0x4f4e08: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x4f4e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f4e0c:
    // 0x4f4e0c: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x4f4e0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4f4e10:
    // 0x4f4e10: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x4f4e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4f4e14:
    // 0x4f4e14: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x4f4e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4f4e18:
    // 0x4f4e18: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x4f4e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4f4e1c:
    // 0x4f4e1c: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x4f4e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4f4e20:
    // 0x4f4e20: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x4f4e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f4e24:
    // 0x4f4e24: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x4f4e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f4e28:
    // 0x4f4e28: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x4f4e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f4e2c:
    // 0x4f4e2c: 0xe7a700c0  swc1        $f7, 0xC0($sp)
    ctx->pc = 0x4f4e2cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_4f4e30:
    // 0x4f4e30: 0xe7a800c4  swc1        $f8, 0xC4($sp)
    ctx->pc = 0x4f4e30u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_4f4e34:
    // 0x4f4e34: 0xe7a900c8  swc1        $f9, 0xC8($sp)
    ctx->pc = 0x4f4e34u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_4f4e38:
    // 0x4f4e38: 0xe7a60100  swc1        $f6, 0x100($sp)
    ctx->pc = 0x4f4e38u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_4f4e3c:
    // 0x4f4e3c: 0xe7a50104  swc1        $f5, 0x104($sp)
    ctx->pc = 0x4f4e3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_4f4e40:
    // 0x4f4e40: 0xe7a40108  swc1        $f4, 0x108($sp)
    ctx->pc = 0x4f4e40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_4f4e44:
    // 0x4f4e44: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x4f4e44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_4f4e48:
    // 0x4f4e48: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x4f4e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4f4e4c:
    // 0x4f4e4c: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x4f4e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4f4e50:
    // 0x4f4e50: 0xc0a7a88  jal         func_29EA20
label_4f4e54:
    if (ctx->pc == 0x4F4E54u) {
        ctx->pc = 0x4F4E54u;
            // 0x4f4e54: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->pc = 0x4F4E58u;
        goto label_4f4e58;
    }
    ctx->pc = 0x4F4E50u;
    SET_GPR_U32(ctx, 31, 0x4F4E58u);
    ctx->pc = 0x4F4E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4E50u;
            // 0x4f4e54: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4E58u; }
        if (ctx->pc != 0x4F4E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4E58u; }
        if (ctx->pc != 0x4F4E58u) { return; }
    }
    ctx->pc = 0x4F4E58u;
label_4f4e58:
    // 0x4f4e58: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4f4e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4f4e5c:
    // 0x4f4e5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4f4e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f4e60:
    // 0x4f4e60: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4f4e64:
    if (ctx->pc == 0x4F4E64u) {
        ctx->pc = 0x4F4E64u;
            // 0x4f4e64: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4F4E68u;
        goto label_4f4e68;
    }
    ctx->pc = 0x4F4E60u;
    {
        const bool branch_taken_0x4f4e60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4E60u;
            // 0x4f4e64: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4e60) {
            ctx->pc = 0x4F4EB0u;
            goto label_4f4eb0;
        }
    }
    ctx->pc = 0x4F4E68u;
label_4f4e68:
    // 0x4f4e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f4e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4e6c:
    // 0x4f4e6c: 0xc088ef4  jal         func_223BD0
label_4f4e70:
    if (ctx->pc == 0x4F4E70u) {
        ctx->pc = 0x4F4E70u;
            // 0x4f4e70: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4F4E74u;
        goto label_4f4e74;
    }
    ctx->pc = 0x4F4E6Cu;
    SET_GPR_U32(ctx, 31, 0x4F4E74u);
    ctx->pc = 0x4F4E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4E6Cu;
            // 0x4f4e70: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4E74u; }
        if (ctx->pc != 0x4F4E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4E74u; }
        if (ctx->pc != 0x4F4E74u) { return; }
    }
    ctx->pc = 0x4F4E74u;
label_4f4e74:
    // 0x4f4e74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f4e78:
    // 0x4f4e78: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f4e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4f4e7c:
    // 0x4f4e7c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4f4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4f4e80:
    // 0x4f4e80: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4f4e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4f4e84:
    // 0x4f4e84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4f4e88:
    // 0x4f4e88: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4f4e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_4f4e8c:
    // 0x4f4e8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f4e90:
    // 0x4f4e90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f4e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f4e94:
    // 0x4f4e94: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4f4e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4f4e98:
    // 0x4f4e98: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4f4e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4f4e9c:
    // 0x4f4e9c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4f4e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4f4ea0:
    // 0x4f4ea0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f4ea4:
    // 0x4f4ea4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4f4ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f4ea8:
    // 0x4f4ea8: 0xc088b38  jal         func_222CE0
label_4f4eac:
    if (ctx->pc == 0x4F4EACu) {
        ctx->pc = 0x4F4EACu;
            // 0x4f4eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4EB0u;
        goto label_4f4eb0;
    }
    ctx->pc = 0x4F4EA8u;
    SET_GPR_U32(ctx, 31, 0x4F4EB0u);
    ctx->pc = 0x4F4EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4EA8u;
            // 0x4f4eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4EB0u; }
        if (ctx->pc != 0x4F4EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4EB0u; }
        if (ctx->pc != 0x4F4EB0u) { return; }
    }
    ctx->pc = 0x4F4EB0u;
label_4f4eb0:
    // 0x4f4eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f4eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4eb4:
    // 0x4f4eb4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4f4eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4f4eb8:
    // 0x4f4eb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f4eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f4ebc:
    // 0x4f4ebc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f4ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f4ec0:
    // 0x4f4ec0: 0xc08914c  jal         func_224530
label_4f4ec4:
    if (ctx->pc == 0x4F4EC4u) {
        ctx->pc = 0x4F4EC4u;
            // 0x4f4ec4: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x4F4EC8u;
        goto label_4f4ec8;
    }
    ctx->pc = 0x4F4EC0u;
    SET_GPR_U32(ctx, 31, 0x4F4EC8u);
    ctx->pc = 0x4F4EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4EC0u;
            // 0x4f4ec4: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4EC8u; }
        if (ctx->pc != 0x4F4EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4EC8u; }
        if (ctx->pc != 0x4F4EC8u) { return; }
    }
    ctx->pc = 0x4F4EC8u;
label_4f4ec8:
    // 0x4f4ec8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4f4ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f4ecc:
    // 0x4f4ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f4eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4ed0:
    // 0x4f4ed0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4f4ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f4ed4:
    // 0x4f4ed4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4f4ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4f4ed8:
    // 0x4f4ed8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4f4ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f4edc:
    // 0x4f4edc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4f4edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4f4ee0:
    // 0x4f4ee0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4f4ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4f4ee4:
    // 0x4f4ee4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4f4ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4f4ee8:
    // 0x4f4ee8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4f4ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4f4eec:
    // 0x4f4eec: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4f4eecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4f4ef0:
    // 0x4f4ef0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4f4ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4f4ef4:
    // 0x4f4ef4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4f4ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f4ef8:
    // 0x4f4ef8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4f4ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f4efc:
    // 0x4f4efc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4f4efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f4f00:
    // 0x4f4f00: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4f4f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4f4f04:
    // 0x4f4f04: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4f4f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4f4f08:
    // 0x4f4f08: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4f4f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4f4f0c:
    // 0x4f4f0c: 0xc0892b0  jal         func_224AC0
label_4f4f10:
    if (ctx->pc == 0x4F4F10u) {
        ctx->pc = 0x4F4F10u;
            // 0x4f4f10: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4F4F14u;
        goto label_4f4f14;
    }
    ctx->pc = 0x4F4F0Cu;
    SET_GPR_U32(ctx, 31, 0x4F4F14u);
    ctx->pc = 0x4F4F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4F0Cu;
            // 0x4f4f10: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4F14u; }
        if (ctx->pc != 0x4F4F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4F14u; }
        if (ctx->pc != 0x4F4F14u) { return; }
    }
    ctx->pc = 0x4F4F14u;
label_4f4f14:
    // 0x4f4f14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f4f18:
    // 0x4f4f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f4f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4f1c:
    // 0x4f4f1c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f4f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f4f20:
    // 0x4f4f20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4f4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4f4f24:
    // 0x4f4f24: 0xc08c164  jal         func_230590
label_4f4f28:
    if (ctx->pc == 0x4F4F28u) {
        ctx->pc = 0x4F4F28u;
            // 0x4f4f28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F4F2Cu;
        goto label_4f4f2c;
    }
    ctx->pc = 0x4F4F24u;
    SET_GPR_U32(ctx, 31, 0x4F4F2Cu);
    ctx->pc = 0x4F4F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4F24u;
            // 0x4f4f28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4F2Cu; }
        if (ctx->pc != 0x4F4F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4F2Cu; }
        if (ctx->pc != 0x4F4F2Cu) { return; }
    }
    ctx->pc = 0x4F4F2Cu;
label_4f4f2c:
    // 0x4f4f2c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4f4f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_4f4f30:
    // 0x4f4f30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f4f34:
    // 0x4f4f34: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4f4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4f4f38:
    // 0x4f4f38: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4f4f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4f4f3c:
    // 0x4f4f3c: 0xc0a7a88  jal         func_29EA20
label_4f4f40:
    if (ctx->pc == 0x4F4F40u) {
        ctx->pc = 0x4F4F40u;
            // 0x4f4f40: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4F4F44u;
        goto label_4f4f44;
    }
    ctx->pc = 0x4F4F3Cu;
    SET_GPR_U32(ctx, 31, 0x4F4F44u);
    ctx->pc = 0x4F4F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4F3Cu;
            // 0x4f4f40: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4F44u; }
        if (ctx->pc != 0x4F4F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4F44u; }
        if (ctx->pc != 0x4F4F44u) { return; }
    }
    ctx->pc = 0x4F4F44u;
label_4f4f44:
    // 0x4f4f44: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4f4f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4f4f48:
    // 0x4f4f48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f4f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f4f4c:
    // 0x4f4f4c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4f4f50:
    if (ctx->pc == 0x4F4F50u) {
        ctx->pc = 0x4F4F50u;
            // 0x4f4f50: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4F4F54u;
        goto label_4f4f54;
    }
    ctx->pc = 0x4F4F4Cu;
    {
        const bool branch_taken_0x4f4f4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4F4Cu;
            // 0x4f4f50: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4f4c) {
            ctx->pc = 0x4F4F70u;
            goto label_4f4f70;
        }
    }
    ctx->pc = 0x4F4F54u;
label_4f4f54:
    // 0x4f4f54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f4f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f4f58:
    // 0x4f4f58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f4f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4f5c:
    // 0x4f4f5c: 0xc0869d0  jal         func_21A740
label_4f4f60:
    if (ctx->pc == 0x4F4F60u) {
        ctx->pc = 0x4F4F60u;
            // 0x4f4f60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4F64u;
        goto label_4f4f64;
    }
    ctx->pc = 0x4F4F5Cu;
    SET_GPR_U32(ctx, 31, 0x4F4F64u);
    ctx->pc = 0x4F4F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4F5Cu;
            // 0x4f4f60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4F64u; }
        if (ctx->pc != 0x4F4F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4F64u; }
        if (ctx->pc != 0x4F4F64u) { return; }
    }
    ctx->pc = 0x4F4F64u;
label_4f4f64:
    // 0x4f4f64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f4f68:
    // 0x4f4f68: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4f4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4f4f6c:
    // 0x4f4f6c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f4f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4f4f70:
    // 0x4f4f70: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4f4f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4f4f74:
    // 0x4f4f74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f4f78:
    // 0x4f4f78: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f4f7c:
    // 0x4f4f7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4f4f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4f4f80:
    // 0x4f4f80: 0xc08c650  jal         func_231940
label_4f4f84:
    if (ctx->pc == 0x4F4F84u) {
        ctx->pc = 0x4F4F84u;
            // 0x4f4f84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4F88u;
        goto label_4f4f88;
    }
    ctx->pc = 0x4F4F80u;
    SET_GPR_U32(ctx, 31, 0x4F4F88u);
    ctx->pc = 0x4F4F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4F80u;
            // 0x4f4f84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4F88u; }
        if (ctx->pc != 0x4F4F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4F88u; }
        if (ctx->pc != 0x4F4F88u) { return; }
    }
    ctx->pc = 0x4F4F88u;
label_4f4f88:
    // 0x4f4f88: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x4f4f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_4f4f8c:
    // 0x4f4f8c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x4f4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4f4f90:
    // 0x4f4f90: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x4f4f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_4f4f94:
    // 0x4f4f94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f4f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4f4f98:
    // 0x4f4f98: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4f4f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_4f4f9c:
    // 0x4f4f9c: 0xc040180  jal         func_100600
label_4f4fa0:
    if (ctx->pc == 0x4F4FA0u) {
        ctx->pc = 0x4F4FA0u;
            // 0x4f4fa0: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
        ctx->pc = 0x4F4FA4u;
        goto label_4f4fa4;
    }
    ctx->pc = 0x4F4F9Cu;
    SET_GPR_U32(ctx, 31, 0x4F4FA4u);
    ctx->pc = 0x4F4FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4F9Cu;
            // 0x4f4fa0: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4FA4u; }
        if (ctx->pc != 0x4F4FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4FA4u; }
        if (ctx->pc != 0x4F4FA4u) { return; }
    }
    ctx->pc = 0x4F4FA4u;
label_4f4fa4:
    // 0x4f4fa4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_4f4fa8:
    if (ctx->pc == 0x4F4FA8u) {
        ctx->pc = 0x4F4FA8u;
            // 0x4f4fa8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x4F4FACu;
        goto label_4f4fac;
    }
    ctx->pc = 0x4F4FA4u;
    {
        const bool branch_taken_0x4f4fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4fa4) {
            ctx->pc = 0x4F4FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4FA4u;
            // 0x4f4fa8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4FF4u;
            goto label_4f4ff4;
        }
    }
    ctx->pc = 0x4F4FACu;
label_4f4fac:
    // 0x4f4fac: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x4f4facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4f4fb0:
    // 0x4f4fb0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4f4fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_4f4fb4:
    // 0x4f4fb4: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x4f4fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_4f4fb8:
    // 0x4f4fb8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4f4fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4f4fbc:
    // 0x4f4fbc: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4f4fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4f4fc0:
    // 0x4f4fc0: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x4f4fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_4f4fc4:
    // 0x4f4fc4: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x4f4fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_4f4fc8:
    // 0x4f4fc8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4f4fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_4f4fcc:
    // 0x4f4fcc: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x4f4fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_4f4fd0:
    // 0x4f4fd0: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4f4fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_4f4fd4:
    // 0x4f4fd4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x4f4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_4f4fd8:
    // 0x4f4fd8: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x4f4fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_4f4fdc:
    // 0x4f4fdc: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x4f4fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_4f4fe0:
    // 0x4f4fe0: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x4f4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_4f4fe4:
    // 0x4f4fe4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x4f4fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_4f4fe8:
    // 0x4f4fe8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x4f4fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_4f4fec:
    // 0x4f4fec: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x4f4fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_4f4ff0:
    // 0x4f4ff0: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x4f4ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_4f4ff4:
    // 0x4f4ff4: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x4f4ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4f4ff8:
    // 0x4f4ff8: 0x8e2700b0  lw          $a3, 0xB0($s1)
    ctx->pc = 0x4f4ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4f4ffc:
    // 0x4f4ffc: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x4f4ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_4f5000:
    // 0x4f5000: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f5000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f5004:
    // 0x4f5004: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4f5004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f5008:
    // 0x4f5008: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4f5008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4f500c:
    // 0x4f500c: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x4f500cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_4f5010:
    // 0x4f5010: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x4f5010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_4f5014:
    // 0x4f5014: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4f5014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4f5018:
    // 0x4f5018: 0xae2600b0  sw          $a2, 0xB0($s1)
    ctx->pc = 0x4f5018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 6));
label_4f501c:
    // 0x4f501c: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x4f501cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_4f5020:
    // 0x4f5020: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x4f5020u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_4f5024:
    // 0x4f5024: 0xc040180  jal         func_100600
label_4f5028:
    if (ctx->pc == 0x4F5028u) {
        ctx->pc = 0x4F5028u;
            // 0x4f5028: 0xa2220065  sb          $v0, 0x65($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4F502Cu;
        goto label_4f502c;
    }
    ctx->pc = 0x4F5024u;
    SET_GPR_U32(ctx, 31, 0x4F502Cu);
    ctx->pc = 0x4F5028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5024u;
            // 0x4f5028: 0xa2220065  sb          $v0, 0x65($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F502Cu; }
        if (ctx->pc != 0x4F502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F502Cu; }
        if (ctx->pc != 0x4F502Cu) { return; }
    }
    ctx->pc = 0x4F502Cu;
label_4f502c:
    // 0x4f502c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4f502cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f5030:
    // 0x4f5030: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4f5034:
    if (ctx->pc == 0x4F5034u) {
        ctx->pc = 0x4F5034u;
            // 0x4f5034: 0x3c024845  lui         $v0, 0x4845 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18501 << 16));
        ctx->pc = 0x4F5038u;
        goto label_4f5038;
    }
    ctx->pc = 0x4F5030u;
    {
        const bool branch_taken_0x4f5030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5030) {
            ctx->pc = 0x4F5034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5030u;
            // 0x4f5034: 0x3c024845  lui         $v0, 0x4845 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18501 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F5070u;
            goto label_4f5070;
        }
    }
    ctx->pc = 0x4F5038u;
label_4f5038:
    // 0x4f5038: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f5038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4f503c:
    // 0x4f503c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f5040:
    // 0x4f5040: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4f5040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4f5044:
    // 0x4f5044: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4f5044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4f5048:
    // 0x4f5048: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f5048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f504c:
    // 0x4f504c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4f504cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4f5050:
    // 0x4f5050: 0xc040138  jal         func_1004E0
label_4f5054:
    if (ctx->pc == 0x4F5054u) {
        ctx->pc = 0x4F5054u;
            // 0x4f5054: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4F5058u;
        goto label_4f5058;
    }
    ctx->pc = 0x4F5050u;
    SET_GPR_U32(ctx, 31, 0x4F5058u);
    ctx->pc = 0x4F5054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5050u;
            // 0x4f5054: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5058u; }
        if (ctx->pc != 0x4F5058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5058u; }
        if (ctx->pc != 0x4F5058u) { return; }
    }
    ctx->pc = 0x4F5058u;
label_4f5058:
    // 0x4f5058: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4f5058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4f505c:
    // 0x4f505c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4f505cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4f5060:
    // 0x4f5060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f5060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f5064:
    // 0x4f5064: 0xc04a576  jal         func_1295D8
label_4f5068:
    if (ctx->pc == 0x4F5068u) {
        ctx->pc = 0x4F5068u;
            // 0x4f5068: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4F506Cu;
        goto label_4f506c;
    }
    ctx->pc = 0x4F5064u;
    SET_GPR_U32(ctx, 31, 0x4F506Cu);
    ctx->pc = 0x4F5068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5064u;
            // 0x4f5068: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F506Cu; }
        if (ctx->pc != 0x4F506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F506Cu; }
        if (ctx->pc != 0x4F506Cu) { return; }
    }
    ctx->pc = 0x4F506Cu;
label_4f506c:
    // 0x4f506c: 0x3c024845  lui         $v0, 0x4845
    ctx->pc = 0x4f506cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18501 << 16));
label_4f5070:
    // 0x4f5070: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4f5070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4f5074:
    // 0x4f5074: 0x3442c100  ori         $v0, $v0, 0xC100
    ctx->pc = 0x4f5074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49408);
label_4f5078:
    // 0x4f5078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f5078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f507c:
    // 0x4f507c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4f507cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f5080:
    // 0x4f5080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f5080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f5084:
    // 0x4f5084: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4f5084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4f5088:
    // 0x4f5088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f5088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f508c:
    // 0x4f508c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4f508cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4f5090:
    // 0x4f5090: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x4f5090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_4f5094:
    // 0x4f5094: 0xc122cd8  jal         func_48B360
label_4f5098:
    if (ctx->pc == 0x4F5098u) {
        ctx->pc = 0x4F5098u;
            // 0x4f5098: 0xae300130  sw          $s0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 16));
        ctx->pc = 0x4F509Cu;
        goto label_4f509c;
    }
    ctx->pc = 0x4F5094u;
    SET_GPR_U32(ctx, 31, 0x4F509Cu);
    ctx->pc = 0x4F5098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5094u;
            // 0x4f5098: 0xae300130  sw          $s0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F509Cu; }
        if (ctx->pc != 0x4F509Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F509Cu; }
        if (ctx->pc != 0x4F509Cu) { return; }
    }
    ctx->pc = 0x4F509Cu;
label_4f509c:
    // 0x4f509c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f509cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4f50a0:
    // 0x4f50a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f50a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f50a4:
    // 0x4f50a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f50a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f50a8:
    // 0x4f50a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f50a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f50ac:
    // 0x4f50ac: 0x3e00008  jr          $ra
label_4f50b0:
    if (ctx->pc == 0x4F50B0u) {
        ctx->pc = 0x4F50B0u;
            // 0x4f50b0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x4F50B4u;
        goto label_4f50b4;
    }
    ctx->pc = 0x4F50ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F50B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F50ACu;
            // 0x4f50b0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F50B4u;
label_4f50b4:
    // 0x4f50b4: 0x0  nop
    ctx->pc = 0x4f50b4u;
    // NOP
label_4f50b8:
    // 0x4f50b8: 0x0  nop
    ctx->pc = 0x4f50b8u;
    // NOP
label_4f50bc:
    // 0x4f50bc: 0x0  nop
    ctx->pc = 0x4f50bcu;
    // NOP
label_4f50c0:
    // 0x4f50c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f50c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f50c4:
    // 0x4f50c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f50c8:
    // 0x4f50c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f50c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f50cc:
    // 0x4f50cc: 0xc0e3580  jal         func_38D600
label_4f50d0:
    if (ctx->pc == 0x4F50D0u) {
        ctx->pc = 0x4F50D0u;
            // 0x4f50d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F50D4u;
        goto label_4f50d4;
    }
    ctx->pc = 0x4F50CCu;
    SET_GPR_U32(ctx, 31, 0x4F50D4u);
    ctx->pc = 0x4F50D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F50CCu;
            // 0x4f50d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F50D4u; }
        if (ctx->pc != 0x4F50D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F50D4u; }
        if (ctx->pc != 0x4F50D4u) { return; }
    }
    ctx->pc = 0x4F50D4u;
label_4f50d4:
    // 0x4f50d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f50d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f50d8:
    // 0x4f50d8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x4f50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_4f50dc:
    // 0x4f50dc: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x4f50dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
label_4f50e0:
    // 0x4f50e0: 0x2405f9ff  addiu       $a1, $zero, -0x601
    ctx->pc = 0x4f50e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_4f50e4:
    // 0x4f50e4: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x4f50e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_4f50e8:
    // 0x4f50e8: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x4f50e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_4f50ec:
    // 0x4f50ec: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x4f50ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_4f50f0:
    // 0x4f50f0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4f50f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4f50f4:
    // 0x4f50f4: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x4f50f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_4f50f8:
    // 0x4f50f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4f50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f50fc:
    // 0x4f50fc: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x4f50fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4f5100:
    // 0x4f5100: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4f5100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f5104:
    // 0x4f5104: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4f5104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4f5108:
    // 0x4f5108: 0x34a50600  ori         $a1, $a1, 0x600
    ctx->pc = 0x4f5108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1536);
label_4f510c:
    // 0x4f510c: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4f510cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_4f5110:
    // 0x4f5110: 0xa2040064  sb          $a0, 0x64($s0)
    ctx->pc = 0x4f5110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 4));
label_4f5114:
    // 0x4f5114: 0xa2030065  sb          $v1, 0x65($s0)
    ctx->pc = 0x4f5114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 3));
label_4f5118:
    // 0x4f5118: 0xa2030066  sb          $v1, 0x66($s0)
    ctx->pc = 0x4f5118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 3));
label_4f511c:
    // 0x4f511c: 0xa2030067  sb          $v1, 0x67($s0)
    ctx->pc = 0x4f511cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 3));
label_4f5120:
    // 0x4f5120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f5120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5124:
    // 0x4f5124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f5124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f5128:
    // 0x4f5128: 0x3e00008  jr          $ra
label_4f512c:
    if (ctx->pc == 0x4F512Cu) {
        ctx->pc = 0x4F512Cu;
            // 0x4f512c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F5130u;
        goto label_4f5130;
    }
    ctx->pc = 0x4F5128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F512Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5128u;
            // 0x4f512c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5130u;
label_4f5130:
    // 0x4f5130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f5134:
    // 0x4f5134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f5138:
    // 0x4f5138: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x4f5138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4f513c:
    // 0x4f513c: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x4f513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4f5140:
    // 0x4f5140: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x4f5140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4f5144:
    // 0x4f5144: 0xc04cbd8  jal         func_132F60
label_4f5148:
    if (ctx->pc == 0x4F5148u) {
        ctx->pc = 0x4F5148u;
            // 0x4f5148: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4F514Cu;
        goto label_4f514c;
    }
    ctx->pc = 0x4F5144u;
    SET_GPR_U32(ctx, 31, 0x4F514Cu);
    ctx->pc = 0x4F5148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5144u;
            // 0x4f5148: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F514Cu; }
        if (ctx->pc != 0x4F514Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F514Cu; }
        if (ctx->pc != 0x4F514Cu) { return; }
    }
    ctx->pc = 0x4F514Cu;
label_4f514c:
    // 0x4f514c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x4f514cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_4f5150:
    // 0x4f5150: 0xc073234  jal         func_1CC8D0
label_4f5154:
    if (ctx->pc == 0x4F5154u) {
        ctx->pc = 0x4F5154u;
            // 0x4f5154: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x4F5158u;
        goto label_4f5158;
    }
    ctx->pc = 0x4F5150u;
    SET_GPR_U32(ctx, 31, 0x4F5158u);
    ctx->pc = 0x4F5154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5150u;
            // 0x4f5154: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5158u; }
        if (ctx->pc != 0x4F5158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5158u; }
        if (ctx->pc != 0x4F5158u) { return; }
    }
    ctx->pc = 0x4F5158u;
label_4f5158:
    // 0x4f5158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f515c:
    // 0x4f515c: 0x3e00008  jr          $ra
label_4f5160:
    if (ctx->pc == 0x4F5160u) {
        ctx->pc = 0x4F5160u;
            // 0x4f5160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F5164u;
        goto label_4f5164;
    }
    ctx->pc = 0x4F515Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F515Cu;
            // 0x4f5160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5164u;
label_4f5164:
    // 0x4f5164: 0x0  nop
    ctx->pc = 0x4f5164u;
    // NOP
label_4f5168:
    // 0x4f5168: 0x0  nop
    ctx->pc = 0x4f5168u;
    // NOP
label_4f516c:
    // 0x4f516c: 0x0  nop
    ctx->pc = 0x4f516cu;
    // NOP
label_4f5170:
    // 0x4f5170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f5174:
    // 0x4f5174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f5174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f5178:
    // 0x4f5178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f5178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f517c:
    // 0x4f517c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f5180:
    // 0x4f5180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f5180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5184:
    // 0x4f5184: 0xc0baaa0  jal         func_2EAA80
label_4f5188:
    if (ctx->pc == 0x4F5188u) {
        ctx->pc = 0x4F5188u;
            // 0x4f5188: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4F518Cu;
        goto label_4f518c;
    }
    ctx->pc = 0x4F5184u;
    SET_GPR_U32(ctx, 31, 0x4F518Cu);
    ctx->pc = 0x4F5188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5184u;
            // 0x4f5188: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F518Cu; }
        if (ctx->pc != 0x4F518Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F518Cu; }
        if (ctx->pc != 0x4F518Cu) { return; }
    }
    ctx->pc = 0x4F518Cu;
label_4f518c:
    // 0x4f518c: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x4f518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_4f5190:
    // 0x4f5190: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4f5194:
    if (ctx->pc == 0x4F5194u) {
        ctx->pc = 0x4F5194u;
            // 0x4f5194: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->pc = 0x4F5198u;
        goto label_4f5198;
    }
    ctx->pc = 0x4F5190u;
    {
        const bool branch_taken_0x4f5190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5190) {
            ctx->pc = 0x4F5194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5190u;
            // 0x4f5194: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F51B8u;
            goto label_4f51b8;
        }
    }
    ctx->pc = 0x4F5198u;
label_4f5198:
    // 0x4f5198: 0xa0400060  sb          $zero, 0x60($v0)
    ctx->pc = 0x4f5198u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 0));
label_4f519c:
    // 0x4f519c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4f519cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4f51a0:
    // 0x4f51a0: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x4f51a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_4f51a4:
    // 0x4f51a4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4f51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4f51a8:
    // 0x4f51a8: 0xc057b7c  jal         func_15EDF0
label_4f51ac:
    if (ctx->pc == 0x4F51ACu) {
        ctx->pc = 0x4F51ACu;
            // 0x4f51ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4F51B0u;
        goto label_4f51b0;
    }
    ctx->pc = 0x4F51A8u;
    SET_GPR_U32(ctx, 31, 0x4F51B0u);
    ctx->pc = 0x4F51ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F51A8u;
            // 0x4f51ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F51B0u; }
        if (ctx->pc != 0x4F51B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F51B0u; }
        if (ctx->pc != 0x4F51B0u) { return; }
    }
    ctx->pc = 0x4F51B0u;
label_4f51b0:
    // 0x4f51b0: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x4f51b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_4f51b4:
    // 0x4f51b4: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x4f51b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_4f51b8:
    // 0x4f51b8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4f51b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4f51bc:
    // 0x4f51bc: 0xc122d2c  jal         func_48B4B0
label_4f51c0:
    if (ctx->pc == 0x4F51C0u) {
        ctx->pc = 0x4F51C0u;
            // 0x4f51c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F51C4u;
        goto label_4f51c4;
    }
    ctx->pc = 0x4F51BCu;
    SET_GPR_U32(ctx, 31, 0x4F51C4u);
    ctx->pc = 0x4F51C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F51BCu;
            // 0x4f51c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F51C4u; }
        if (ctx->pc != 0x4F51C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F51C4u; }
        if (ctx->pc != 0x4F51C4u) { return; }
    }
    ctx->pc = 0x4F51C4u;
label_4f51c4:
    // 0x4f51c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f51c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f51c8:
    // 0x4f51c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f51c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f51cc:
    // 0x4f51cc: 0x3e00008  jr          $ra
label_4f51d0:
    if (ctx->pc == 0x4F51D0u) {
        ctx->pc = 0x4F51D0u;
            // 0x4f51d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F51D4u;
        goto label_4f51d4;
    }
    ctx->pc = 0x4F51CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F51D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F51CCu;
            // 0x4f51d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F51D4u;
label_4f51d4:
    // 0x4f51d4: 0x0  nop
    ctx->pc = 0x4f51d4u;
    // NOP
label_4f51d8:
    // 0x4f51d8: 0x0  nop
    ctx->pc = 0x4f51d8u;
    // NOP
label_4f51dc:
    // 0x4f51dc: 0x0  nop
    ctx->pc = 0x4f51dcu;
    // NOP
label_4f51e0:
    // 0x4f51e0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x4f51e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_4f51e4:
    // 0x4f51e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4f51e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f51e8:
    // 0x4f51e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f51e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4f51ec:
    // 0x4f51ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f51ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4f51f0:
    // 0x4f51f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f51f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f51f4:
    // 0x4f51f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f51f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f51f8:
    // 0x4f51f8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4f51f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4f51fc:
    // 0x4f51fc: 0x8c8600d0  lw          $a2, 0xD0($a0)
    ctx->pc = 0x4f51fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4f5200:
    // 0x4f5200: 0x10c500b8  beq         $a2, $a1, . + 4 + (0xB8 << 2)
label_4f5204:
    if (ctx->pc == 0x4F5204u) {
        ctx->pc = 0x4F5204u;
            // 0x4f5204: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F5208u;
        goto label_4f5208;
    }
    ctx->pc = 0x4F5200u;
    {
        const bool branch_taken_0x4f5200 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x4F5204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5200u;
            // 0x4f5204: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5200) {
            ctx->pc = 0x4F54E4u;
            goto label_4f54e4;
        }
    }
    ctx->pc = 0x4F5208u;
label_4f5208:
    // 0x4f5208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f5208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f520c:
    // 0x4f520c: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
label_4f5210:
    if (ctx->pc == 0x4F5210u) {
        ctx->pc = 0x4F5214u;
        goto label_4f5214;
    }
    ctx->pc = 0x4F520Cu;
    {
        const bool branch_taken_0x4f520c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f520c) {
            ctx->pc = 0x4F5230u;
            goto label_4f5230;
        }
    }
    ctx->pc = 0x4F5214u;
label_4f5214:
    // 0x4f5214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f5214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f5218:
    // 0x4f5218: 0x50c300f4  beql        $a2, $v1, . + 4 + (0xF4 << 2)
label_4f521c:
    if (ctx->pc == 0x4F521Cu) {
        ctx->pc = 0x4F521Cu;
            // 0x4f521c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4F5220u;
        goto label_4f5220;
    }
    ctx->pc = 0x4F5218u;
    {
        const bool branch_taken_0x4f5218 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f5218) {
            ctx->pc = 0x4F521Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5218u;
            // 0x4f521c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F55ECu;
            goto label_4f55ec;
        }
    }
    ctx->pc = 0x4F5220u;
label_4f5220:
    // 0x4f5220: 0x50c000f1  beql        $a2, $zero, . + 4 + (0xF1 << 2)
label_4f5224:
    if (ctx->pc == 0x4F5224u) {
        ctx->pc = 0x4F5224u;
            // 0x4f5224: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x4F5228u;
        goto label_4f5228;
    }
    ctx->pc = 0x4F5220u;
    {
        const bool branch_taken_0x4f5220 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5220) {
            ctx->pc = 0x4F5224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5220u;
            // 0x4f5224: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F55E8u;
            goto label_4f55e8;
        }
    }
    ctx->pc = 0x4F5228u;
label_4f5228:
    // 0x4f5228: 0x100000ef  b           . + 4 + (0xEF << 2)
label_4f522c:
    if (ctx->pc == 0x4F522Cu) {
        ctx->pc = 0x4F5230u;
        goto label_4f5230;
    }
    ctx->pc = 0x4F5228u;
    {
        const bool branch_taken_0x4f5228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5228) {
            ctx->pc = 0x4F55E8u;
            goto label_4f55e8;
        }
    }
    ctx->pc = 0x4F5230u;
label_4f5230:
    // 0x4f5230: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4f5230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4f5234:
    // 0x4f5234: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4f5234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4f5238:
    // 0x4f5238: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x4f5238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f523c:
    // 0x4f523c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f523cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f5240:
    // 0x4f5240: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4f5240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f5244:
    // 0x4f5244: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4f5244u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4f5248:
    // 0x4f5248: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4f5248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f524c:
    // 0x4f524c: 0x450000e6  bc1f        . + 4 + (0xE6 << 2)
label_4f5250:
    if (ctx->pc == 0x4F5250u) {
        ctx->pc = 0x4F5250u;
            // 0x4f5250: 0xe60100d4  swc1        $f1, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x4F5254u;
        goto label_4f5254;
    }
    ctx->pc = 0x4F524Cu;
    {
        const bool branch_taken_0x4f524c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4F5250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F524Cu;
            // 0x4f5250: 0xe60100d4  swc1        $f1, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f524c) {
            ctx->pc = 0x4F55E8u;
            goto label_4f55e8;
        }
    }
    ctx->pc = 0x4F5254u;
label_4f5254:
    // 0x4f5254: 0xc0d1dc8  jal         func_347720
label_4f5258:
    if (ctx->pc == 0x4F5258u) {
        ctx->pc = 0x4F5258u;
            // 0x4f5258: 0xae0500d0  sw          $a1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
        ctx->pc = 0x4F525Cu;
        goto label_4f525c;
    }
    ctx->pc = 0x4F5254u;
    SET_GPR_U32(ctx, 31, 0x4F525Cu);
    ctx->pc = 0x4F5258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5254u;
            // 0x4f5258: 0xae0500d0  sw          $a1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F525Cu; }
        if (ctx->pc != 0x4F525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F525Cu; }
        if (ctx->pc != 0x4F525Cu) { return; }
    }
    ctx->pc = 0x4F525Cu;
label_4f525c:
    // 0x4f525c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4f525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f5260:
    // 0x4f5260: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f5260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f5264:
    // 0x4f5264: 0x0  nop
    ctx->pc = 0x4f5264u;
    // NOP
label_4f5268:
    // 0x4f5268: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4f5268u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f526c:
    // 0x4f526c: 0x450100de  bc1t        . + 4 + (0xDE << 2)
label_4f5270:
    if (ctx->pc == 0x4F5270u) {
        ctx->pc = 0x4F5274u;
        goto label_4f5274;
    }
    ctx->pc = 0x4F526Cu;
    {
        const bool branch_taken_0x4f526c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f526c) {
            ctx->pc = 0x4F55E8u;
            goto label_4f55e8;
        }
    }
    ctx->pc = 0x4F5274u;
label_4f5274:
    // 0x4f5274: 0xc0d1dc8  jal         func_347720
label_4f5278:
    if (ctx->pc == 0x4F5278u) {
        ctx->pc = 0x4F5278u;
            // 0x4f5278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F527Cu;
        goto label_4f527c;
    }
    ctx->pc = 0x4F5274u;
    SET_GPR_U32(ctx, 31, 0x4F527Cu);
    ctx->pc = 0x4F5278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5274u;
            // 0x4f5278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F527Cu; }
        if (ctx->pc != 0x4F527Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F527Cu; }
        if (ctx->pc != 0x4F527Cu) { return; }
    }
    ctx->pc = 0x4F527Cu;
label_4f527c:
    // 0x4f527c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4f527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f5280:
    // 0x4f5280: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4f5280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4f5284:
    // 0x4f5284: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x4f5284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_4f5288:
    // 0x4f5288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4f5288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4f528c:
    // 0x4f528c: 0x0  nop
    ctx->pc = 0x4f528cu;
    // NOP
label_4f5290:
    // 0x4f5290: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4f5290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4f5294:
    // 0x4f5294: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4f5294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_4f5298:
    // 0x4f5298: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4f5298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4f529c:
    // 0x4f529c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f529cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f52a0:
    // 0x4f52a0: 0x0  nop
    ctx->pc = 0x4f52a0u;
    // NOP
label_4f52a4:
    // 0x4f52a4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x4f52a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_4f52a8:
    // 0x4f52a8: 0x0  nop
    ctx->pc = 0x4f52a8u;
    // NOP
label_4f52ac:
    // 0x4f52ac: 0x0  nop
    ctx->pc = 0x4f52acu;
    // NOP
label_4f52b0:
    // 0x4f52b0: 0xc13d618  jal         func_4F5860
label_4f52b4:
    if (ctx->pc == 0x4F52B4u) {
        ctx->pc = 0x4F52B8u;
        goto label_4f52b8;
    }
    ctx->pc = 0x4F52B0u;
    SET_GPR_U32(ctx, 31, 0x4F52B8u);
    ctx->pc = 0x4F5860u;
    if (runtime->hasFunction(0x4F5860u)) {
        auto targetFn = runtime->lookupFunction(0x4F5860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52B8u; }
        if (ctx->pc != 0x4F52B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5860_0x4f5860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52B8u; }
        if (ctx->pc != 0x4F52B8u) { return; }
    }
    ctx->pc = 0x4F52B8u;
label_4f52b8:
    // 0x4f52b8: 0xc0dc408  jal         func_371020
label_4f52bc:
    if (ctx->pc == 0x4F52BCu) {
        ctx->pc = 0x4F52BCu;
            // 0x4f52bc: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4F52C0u;
        goto label_4f52c0;
    }
    ctx->pc = 0x4F52B8u;
    SET_GPR_U32(ctx, 31, 0x4F52C0u);
    ctx->pc = 0x4F52BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F52B8u;
            // 0x4f52bc: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52C0u; }
        if (ctx->pc != 0x4F52C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52C0u; }
        if (ctx->pc != 0x4F52C0u) { return; }
    }
    ctx->pc = 0x4F52C0u;
label_4f52c0:
    // 0x4f52c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4f52c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f52c4:
    // 0x4f52c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f52c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f52c8:
    // 0x4f52c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4f52c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f52cc:
    // 0x4f52cc: 0xc08914c  jal         func_224530
label_4f52d0:
    if (ctx->pc == 0x4F52D0u) {
        ctx->pc = 0x4F52D0u;
            // 0x4f52d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F52D4u;
        goto label_4f52d4;
    }
    ctx->pc = 0x4F52CCu;
    SET_GPR_U32(ctx, 31, 0x4F52D4u);
    ctx->pc = 0x4F52D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F52CCu;
            // 0x4f52d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52D4u; }
        if (ctx->pc != 0x4F52D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52D4u; }
        if (ctx->pc != 0x4F52D4u) { return; }
    }
    ctx->pc = 0x4F52D4u;
label_4f52d4:
    // 0x4f52d4: 0xc0dc408  jal         func_371020
label_4f52d8:
    if (ctx->pc == 0x4F52D8u) {
        ctx->pc = 0x4F52D8u;
            // 0x4f52d8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4F52DCu;
        goto label_4f52dc;
    }
    ctx->pc = 0x4F52D4u;
    SET_GPR_U32(ctx, 31, 0x4F52DCu);
    ctx->pc = 0x4F52D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F52D4u;
            // 0x4f52d8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52DCu; }
        if (ctx->pc != 0x4F52DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52DCu; }
        if (ctx->pc != 0x4F52DCu) { return; }
    }
    ctx->pc = 0x4F52DCu;
label_4f52dc:
    // 0x4f52dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4f52dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f52e0:
    // 0x4f52e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f52e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f52e4:
    // 0x4f52e4: 0xc0e1af4  jal         func_386BD0
label_4f52e8:
    if (ctx->pc == 0x4F52E8u) {
        ctx->pc = 0x4F52E8u;
            // 0x4f52e8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F52ECu;
        goto label_4f52ec;
    }
    ctx->pc = 0x4F52E4u;
    SET_GPR_U32(ctx, 31, 0x4F52ECu);
    ctx->pc = 0x4F52E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F52E4u;
            // 0x4f52e8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BD0u;
    if (runtime->hasFunction(0x386BD0u)) {
        auto targetFn = runtime->lookupFunction(0x386BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52ECu; }
        if (ctx->pc != 0x4F52ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BD0_0x386bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52ECu; }
        if (ctx->pc != 0x4F52ECu) { return; }
    }
    ctx->pc = 0x4F52ECu;
label_4f52ec:
    // 0x4f52ec: 0xc0d1dc8  jal         func_347720
label_4f52f0:
    if (ctx->pc == 0x4F52F0u) {
        ctx->pc = 0x4F52F0u;
            // 0x4f52f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F52F4u;
        goto label_4f52f4;
    }
    ctx->pc = 0x4F52ECu;
    SET_GPR_U32(ctx, 31, 0x4F52F4u);
    ctx->pc = 0x4F52F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F52ECu;
            // 0x4f52f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52F4u; }
        if (ctx->pc != 0x4F52F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F52F4u; }
        if (ctx->pc != 0x4F52F4u) { return; }
    }
    ctx->pc = 0x4F52F4u;
label_4f52f4:
    // 0x4f52f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4f52f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f52f8:
    // 0x4f52f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f52f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f52fc:
    // 0x4f52fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f52fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4f5300:
    // 0x4f5300: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4f5300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4f5304:
    // 0x4f5304: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x4f5304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
label_4f5308:
    // 0x4f5308: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f5308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4f530c:
    // 0x4f530c: 0x0  nop
    ctx->pc = 0x4f530cu;
    // NOP
label_4f5310:
    // 0x4f5310: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4f5310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4f5314:
    // 0x4f5314: 0xc0d1c10  jal         func_347040
label_4f5318:
    if (ctx->pc == 0x4F5318u) {
        ctx->pc = 0x4F5318u;
            // 0x4f5318: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4F531Cu;
        goto label_4f531c;
    }
    ctx->pc = 0x4F5314u;
    SET_GPR_U32(ctx, 31, 0x4F531Cu);
    ctx->pc = 0x4F5318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5314u;
            // 0x4f5318: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F531Cu; }
        if (ctx->pc != 0x4F531Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F531Cu; }
        if (ctx->pc != 0x4F531Cu) { return; }
    }
    ctx->pc = 0x4F531Cu;
label_4f531c:
    // 0x4f531c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4f531cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f5320:
    // 0x4f5320: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4f5320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f5324:
    // 0x4f5324: 0xc04cc90  jal         func_133240
label_4f5328:
    if (ctx->pc == 0x4F5328u) {
        ctx->pc = 0x4F5328u;
            // 0x4f5328: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4F532Cu;
        goto label_4f532c;
    }
    ctx->pc = 0x4F5324u;
    SET_GPR_U32(ctx, 31, 0x4F532Cu);
    ctx->pc = 0x4F5328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5324u;
            // 0x4f5328: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F532Cu; }
        if (ctx->pc != 0x4F532Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F532Cu; }
        if (ctx->pc != 0x4F532Cu) { return; }
    }
    ctx->pc = 0x4F532Cu;
label_4f532c:
    // 0x4f532c: 0xc04cc14  jal         func_133050
label_4f5330:
    if (ctx->pc == 0x4F5330u) {
        ctx->pc = 0x4F5330u;
            // 0x4f5330: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4F5334u;
        goto label_4f5334;
    }
    ctx->pc = 0x4F532Cu;
    SET_GPR_U32(ctx, 31, 0x4F5334u);
    ctx->pc = 0x4F5330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F532Cu;
            // 0x4f5330: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5334u; }
        if (ctx->pc != 0x4F5334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5334u; }
        if (ctx->pc != 0x4F5334u) { return; }
    }
    ctx->pc = 0x4F5334u;
label_4f5334:
    // 0x4f5334: 0x0  nop
    ctx->pc = 0x4f5334u;
    // NOP
label_4f5338:
    // 0x4f5338: 0x0  nop
    ctx->pc = 0x4f5338u;
    // NOP
label_4f533c:
    // 0x4f533c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x4f533cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
label_4f5340:
    // 0x4f5340: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4f5340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4f5344:
    // 0x4f5344: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4f5344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5348:
    // 0x4f5348: 0xc04cc44  jal         func_133110
label_4f534c:
    if (ctx->pc == 0x4F534Cu) {
        ctx->pc = 0x4F534Cu;
            // 0x4f534c: 0xe60000d8  swc1        $f0, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->pc = 0x4F5350u;
        goto label_4f5350;
    }
    ctx->pc = 0x4F5348u;
    SET_GPR_U32(ctx, 31, 0x4F5350u);
    ctx->pc = 0x4F534Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5348u;
            // 0x4f534c: 0xe60000d8  swc1        $f0, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5350u; }
        if (ctx->pc != 0x4F5350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5350u; }
        if (ctx->pc != 0x4F5350u) { return; }
    }
    ctx->pc = 0x4F5350u;
label_4f5350:
    // 0x4f5350: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4f5350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4f5354:
    // 0x4f5354: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4f5354u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4f5358:
    // 0x4f5358: 0xc04cc70  jal         func_1331C0
label_4f535c:
    if (ctx->pc == 0x4F535Cu) {
        ctx->pc = 0x4F535Cu;
            // 0x4f535c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F5360u;
        goto label_4f5360;
    }
    ctx->pc = 0x4F5358u;
    SET_GPR_U32(ctx, 31, 0x4F5360u);
    ctx->pc = 0x4F535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5358u;
            // 0x4f535c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5360u; }
        if (ctx->pc != 0x4F5360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5360u; }
        if (ctx->pc != 0x4F5360u) { return; }
    }
    ctx->pc = 0x4F5360u;
label_4f5360:
    // 0x4f5360: 0xc0dc408  jal         func_371020
label_4f5364:
    if (ctx->pc == 0x4F5364u) {
        ctx->pc = 0x4F5364u;
            // 0x4f5364: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4F5368u;
        goto label_4f5368;
    }
    ctx->pc = 0x4F5360u;
    SET_GPR_U32(ctx, 31, 0x4F5368u);
    ctx->pc = 0x4F5364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5360u;
            // 0x4f5364: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5368u; }
        if (ctx->pc != 0x4F5368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5368u; }
        if (ctx->pc != 0x4F5368u) { return; }
    }
    ctx->pc = 0x4F5368u;
label_4f5368:
    // 0x4f5368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f5368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f536c:
    // 0x4f536c: 0xc13d5e4  jal         func_4F5790
label_4f5370:
    if (ctx->pc == 0x4F5370u) {
        ctx->pc = 0x4F5370u;
            // 0x4f5370: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4F5374u;
        goto label_4f5374;
    }
    ctx->pc = 0x4F536Cu;
    SET_GPR_U32(ctx, 31, 0x4F5374u);
    ctx->pc = 0x4F5370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F536Cu;
            // 0x4f5370: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5790u;
    if (runtime->hasFunction(0x4F5790u)) {
        auto targetFn = runtime->lookupFunction(0x4F5790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5374u; }
        if (ctx->pc != 0x4F5374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5790_0x4f5790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5374u; }
        if (ctx->pc != 0x4F5374u) { return; }
    }
    ctx->pc = 0x4F5374u;
label_4f5374:
    // 0x4f5374: 0xc0dc408  jal         func_371020
label_4f5378:
    if (ctx->pc == 0x4F5378u) {
        ctx->pc = 0x4F5378u;
            // 0x4f5378: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4F537Cu;
        goto label_4f537c;
    }
    ctx->pc = 0x4F5374u;
    SET_GPR_U32(ctx, 31, 0x4F537Cu);
    ctx->pc = 0x4F5378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5374u;
            // 0x4f5378: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F537Cu; }
        if (ctx->pc != 0x4F537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F537Cu; }
        if (ctx->pc != 0x4F537Cu) { return; }
    }
    ctx->pc = 0x4F537Cu;
label_4f537c:
    // 0x4f537c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f537cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f5380:
    // 0x4f5380: 0xc0d1c10  jal         func_347040
label_4f5384:
    if (ctx->pc == 0x4F5384u) {
        ctx->pc = 0x4F5384u;
            // 0x4f5384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F5388u;
        goto label_4f5388;
    }
    ctx->pc = 0x4F5380u;
    SET_GPR_U32(ctx, 31, 0x4F5388u);
    ctx->pc = 0x4F5384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5380u;
            // 0x4f5384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5388u; }
        if (ctx->pc != 0x4F5388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5388u; }
        if (ctx->pc != 0x4F5388u) { return; }
    }
    ctx->pc = 0x4F5388u;
label_4f5388:
    // 0x4f5388: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4f5388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f538c:
    // 0x4f538c: 0xc0d1c14  jal         func_347050
label_4f5390:
    if (ctx->pc == 0x4F5390u) {
        ctx->pc = 0x4F5390u;
            // 0x4f5390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F5394u;
        goto label_4f5394;
    }
    ctx->pc = 0x4F538Cu;
    SET_GPR_U32(ctx, 31, 0x4F5394u);
    ctx->pc = 0x4F5390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F538Cu;
            // 0x4f5390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5394u; }
        if (ctx->pc != 0x4F5394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5394u; }
        if (ctx->pc != 0x4F5394u) { return; }
    }
    ctx->pc = 0x4F5394u;
label_4f5394:
    // 0x4f5394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f5394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f5398:
    // 0x4f5398: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4f5398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f539c:
    // 0x4f539c: 0xc0e1ad4  jal         func_386B50
label_4f53a0:
    if (ctx->pc == 0x4F53A0u) {
        ctx->pc = 0x4F53A0u;
            // 0x4f53a0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F53A4u;
        goto label_4f53a4;
    }
    ctx->pc = 0x4F539Cu;
    SET_GPR_U32(ctx, 31, 0x4F53A4u);
    ctx->pc = 0x4F53A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F539Cu;
            // 0x4f53a0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386B50u;
    if (runtime->hasFunction(0x386B50u)) {
        auto targetFn = runtime->lookupFunction(0x386B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53A4u; }
        if (ctx->pc != 0x4F53A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386B50_0x386b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53A4u; }
        if (ctx->pc != 0x4F53A4u) { return; }
    }
    ctx->pc = 0x4F53A4u;
label_4f53a4:
    // 0x4f53a4: 0xc0d1c14  jal         func_347050
label_4f53a8:
    if (ctx->pc == 0x4F53A8u) {
        ctx->pc = 0x4F53A8u;
            // 0x4f53a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F53ACu;
        goto label_4f53ac;
    }
    ctx->pc = 0x4F53A4u;
    SET_GPR_U32(ctx, 31, 0x4F53ACu);
    ctx->pc = 0x4F53A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F53A4u;
            // 0x4f53a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53ACu; }
        if (ctx->pc != 0x4F53ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53ACu; }
        if (ctx->pc != 0x4F53ACu) { return; }
    }
    ctx->pc = 0x4F53ACu;
label_4f53ac:
    // 0x4f53ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f53acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f53b0:
    // 0x4f53b0: 0xc04f278  jal         func_13C9E0
label_4f53b4:
    if (ctx->pc == 0x4F53B4u) {
        ctx->pc = 0x4F53B4u;
            // 0x4f53b4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4F53B8u;
        goto label_4f53b8;
    }
    ctx->pc = 0x4F53B0u;
    SET_GPR_U32(ctx, 31, 0x4F53B8u);
    ctx->pc = 0x4F53B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F53B0u;
            // 0x4f53b4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53B8u; }
        if (ctx->pc != 0x4F53B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53B8u; }
        if (ctx->pc != 0x4F53B8u) { return; }
    }
    ctx->pc = 0x4F53B8u;
label_4f53b8:
    // 0x4f53b8: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x4f53b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_4f53bc:
    // 0x4f53bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4f53bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4f53c0:
    // 0x4f53c0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4f53c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4f53c4:
    // 0x4f53c4: 0xc04cca0  jal         func_133280
label_4f53c8:
    if (ctx->pc == 0x4F53C8u) {
        ctx->pc = 0x4F53C8u;
            // 0x4f53c8: 0x24c68aa0  addiu       $a2, $a2, -0x7560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937248));
        ctx->pc = 0x4F53CCu;
        goto label_4f53cc;
    }
    ctx->pc = 0x4F53C4u;
    SET_GPR_U32(ctx, 31, 0x4F53CCu);
    ctx->pc = 0x4F53C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F53C4u;
            // 0x4f53c8: 0x24c68aa0  addiu       $a2, $a2, -0x7560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53CCu; }
        if (ctx->pc != 0x4F53CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53CCu; }
        if (ctx->pc != 0x4F53CCu) { return; }
    }
    ctx->pc = 0x4F53CCu;
label_4f53cc:
    // 0x4f53cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4f53ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4f53d0:
    // 0x4f53d0: 0xc04cc44  jal         func_133110
label_4f53d4:
    if (ctx->pc == 0x4F53D4u) {
        ctx->pc = 0x4F53D4u;
            // 0x4f53d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F53D8u;
        goto label_4f53d8;
    }
    ctx->pc = 0x4F53D0u;
    SET_GPR_U32(ctx, 31, 0x4F53D8u);
    ctx->pc = 0x4F53D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F53D0u;
            // 0x4f53d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53D8u; }
        if (ctx->pc != 0x4F53D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53D8u; }
        if (ctx->pc != 0x4F53D8u) { return; }
    }
    ctx->pc = 0x4F53D8u;
label_4f53d8:
    // 0x4f53d8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4f53d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4f53dc:
    // 0x4f53dc: 0xc04cc44  jal         func_133110
label_4f53e0:
    if (ctx->pc == 0x4F53E0u) {
        ctx->pc = 0x4F53E0u;
            // 0x4f53e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F53E4u;
        goto label_4f53e4;
    }
    ctx->pc = 0x4F53DCu;
    SET_GPR_U32(ctx, 31, 0x4F53E4u);
    ctx->pc = 0x4F53E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F53DCu;
            // 0x4f53e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53E4u; }
        if (ctx->pc != 0x4F53E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53E4u; }
        if (ctx->pc != 0x4F53E4u) { return; }
    }
    ctx->pc = 0x4F53E4u;
label_4f53e4:
    // 0x4f53e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4f53e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4f53e8:
    // 0x4f53e8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4f53e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4f53ec:
    // 0x4f53ec: 0xc04cbf0  jal         func_132FC0
label_4f53f0:
    if (ctx->pc == 0x4F53F0u) {
        ctx->pc = 0x4F53F0u;
            // 0x4f53f0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4F53F4u;
        goto label_4f53f4;
    }
    ctx->pc = 0x4F53ECu;
    SET_GPR_U32(ctx, 31, 0x4F53F4u);
    ctx->pc = 0x4F53F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F53ECu;
            // 0x4f53f0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53F4u; }
        if (ctx->pc != 0x4F53F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F53F4u; }
        if (ctx->pc != 0x4F53F4u) { return; }
    }
    ctx->pc = 0x4F53F4u;
label_4f53f4:
    // 0x4f53f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4f53f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4f53f8:
    // 0x4f53f8: 0xc04cc44  jal         func_133110
label_4f53fc:
    if (ctx->pc == 0x4F53FCu) {
        ctx->pc = 0x4F53FCu;
            // 0x4f53fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F5400u;
        goto label_4f5400;
    }
    ctx->pc = 0x4F53F8u;
    SET_GPR_U32(ctx, 31, 0x4F5400u);
    ctx->pc = 0x4F53FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F53F8u;
            // 0x4f53fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5400u; }
        if (ctx->pc != 0x4F5400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5400u; }
        if (ctx->pc != 0x4F5400u) { return; }
    }
    ctx->pc = 0x4F5400u;
label_4f5400:
    // 0x4f5400: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4f5400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4f5404:
    // 0x4f5404: 0xc13d5a8  jal         func_4F56A0
label_4f5408:
    if (ctx->pc == 0x4F5408u) {
        ctx->pc = 0x4F5408u;
            // 0x4f5408: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4F540Cu;
        goto label_4f540c;
    }
    ctx->pc = 0x4F5404u;
    SET_GPR_U32(ctx, 31, 0x4F540Cu);
    ctx->pc = 0x4F5408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5404u;
            // 0x4f5408: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F56A0u;
    if (runtime->hasFunction(0x4F56A0u)) {
        auto targetFn = runtime->lookupFunction(0x4F56A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F540Cu; }
        if (ctx->pc != 0x4F540Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F56A0_0x4f56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F540Cu; }
        if (ctx->pc != 0x4F540Cu) { return; }
    }
    ctx->pc = 0x4F540Cu;
label_4f540c:
    // 0x4f540c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x4f540cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_4f5410:
    // 0x4f5410: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x4f5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_4f5414:
    // 0x4f5414: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4f5414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4f5418:
    // 0x4f5418: 0x0  nop
    ctx->pc = 0x4f5418u;
    // NOP
label_4f541c:
    // 0x4f541c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4f541cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4f5420:
    // 0x4f5420: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f5420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4f5424:
    // 0x4f5424: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x4f5424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4f5428:
    // 0x4f5428: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x4f5428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4f542c:
    // 0x4f542c: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x4f542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4f5430:
    // 0x4f5430: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4f5430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4f5434:
    // 0x4f5434: 0xc04c970  jal         func_1325C0
label_4f5438:
    if (ctx->pc == 0x4F5438u) {
        ctx->pc = 0x4F5438u;
            // 0x4f5438: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4F543Cu;
        goto label_4f543c;
    }
    ctx->pc = 0x4F5434u;
    SET_GPR_U32(ctx, 31, 0x4F543Cu);
    ctx->pc = 0x4F5438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5434u;
            // 0x4f5438: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F543Cu; }
        if (ctx->pc != 0x4F543Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F543Cu; }
        if (ctx->pc != 0x4F543Cu) { return; }
    }
    ctx->pc = 0x4F543Cu;
label_4f543c:
    // 0x4f543c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4f543cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4f5440:
    // 0x4f5440: 0xc04c74c  jal         func_131D30
label_4f5444:
    if (ctx->pc == 0x4F5444u) {
        ctx->pc = 0x4F5444u;
            // 0x4f5444: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F5448u;
        goto label_4f5448;
    }
    ctx->pc = 0x4F5440u;
    SET_GPR_U32(ctx, 31, 0x4F5448u);
    ctx->pc = 0x4F5444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5440u;
            // 0x4f5444: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5448u; }
        if (ctx->pc != 0x4F5448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5448u; }
        if (ctx->pc != 0x4F5448u) { return; }
    }
    ctx->pc = 0x4F5448u;
label_4f5448:
    // 0x4f5448: 0xc0dc408  jal         func_371020
label_4f544c:
    if (ctx->pc == 0x4F544Cu) {
        ctx->pc = 0x4F544Cu;
            // 0x4f544c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4F5450u;
        goto label_4f5450;
    }
    ctx->pc = 0x4F5448u;
    SET_GPR_U32(ctx, 31, 0x4F5450u);
    ctx->pc = 0x4F544Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5448u;
            // 0x4f544c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5450u; }
        if (ctx->pc != 0x4F5450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5450u; }
        if (ctx->pc != 0x4F5450u) { return; }
    }
    ctx->pc = 0x4F5450u;
label_4f5450:
    // 0x4f5450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f5450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f5454:
    // 0x4f5454: 0xc0dd810  jal         func_376040
label_4f5458:
    if (ctx->pc == 0x4F5458u) {
        ctx->pc = 0x4F5458u;
            // 0x4f5458: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4F545Cu;
        goto label_4f545c;
    }
    ctx->pc = 0x4F5454u;
    SET_GPR_U32(ctx, 31, 0x4F545Cu);
    ctx->pc = 0x4F5458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5454u;
            // 0x4f5458: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376040u;
    if (runtime->hasFunction(0x376040u)) {
        auto targetFn = runtime->lookupFunction(0x376040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F545Cu; }
        if (ctx->pc != 0x4F545Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376040_0x376040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F545Cu; }
        if (ctx->pc != 0x4F545Cu) { return; }
    }
    ctx->pc = 0x4F545Cu;
label_4f545c:
    // 0x4f545c: 0xc0b9ffc  jal         func_2E7FF0
label_4f5460:
    if (ctx->pc == 0x4F5460u) {
        ctx->pc = 0x4F5464u;
        goto label_4f5464;
    }
    ctx->pc = 0x4F545Cu;
    SET_GPR_U32(ctx, 31, 0x4F5464u);
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5464u; }
        if (ctx->pc != 0x4F5464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5464u; }
        if (ctx->pc != 0x4F5464u) { return; }
    }
    ctx->pc = 0x4F5464u;
label_4f5464:
    // 0x4f5464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f5464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f5468:
    // 0x4f5468: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x4f5468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_4f546c:
    // 0x4f546c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4f546cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f5470:
    // 0x4f5470: 0xc13d584  jal         func_4F5610
label_4f5474:
    if (ctx->pc == 0x4F5474u) {
        ctx->pc = 0x4F5478u;
        goto label_4f5478;
    }
    ctx->pc = 0x4F5470u;
    SET_GPR_U32(ctx, 31, 0x4F5478u);
    ctx->pc = 0x4F5610u;
    if (runtime->hasFunction(0x4F5610u)) {
        auto targetFn = runtime->lookupFunction(0x4F5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5478u; }
        if (ctx->pc != 0x4F5478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5610_0x4f5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5478u; }
        if (ctx->pc != 0x4F5478u) { return; }
    }
    ctx->pc = 0x4F5478u;
label_4f5478:
    // 0x4f5478: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4f5478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_4f547c:
    // 0x4f547c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4f547cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4f5480:
    // 0x4f5480: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4f5480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4f5484:
    // 0x4f5484: 0x0  nop
    ctx->pc = 0x4f5484u;
    // NOP
label_4f5488:
    // 0x4f5488: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4f5488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4f548c:
    // 0x4f548c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f548cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4f5490:
    // 0x4f5490: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x4f5490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_4f5494:
    // 0x4f5494: 0xc0b9ffc  jal         func_2E7FF0
label_4f5498:
    if (ctx->pc == 0x4F5498u) {
        ctx->pc = 0x4F549Cu;
        goto label_4f549c;
    }
    ctx->pc = 0x4F5494u;
    SET_GPR_U32(ctx, 31, 0x4F549Cu);
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F549Cu; }
        if (ctx->pc != 0x4F549Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F549Cu; }
        if (ctx->pc != 0x4F549Cu) { return; }
    }
    ctx->pc = 0x4F549Cu;
label_4f549c:
    // 0x4f549c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f54a0:
    // 0x4f54a0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x4f54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_4f54a4:
    // 0x4f54a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4f54a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f54a8:
    // 0x4f54a8: 0xc13d584  jal         func_4F5610
label_4f54ac:
    if (ctx->pc == 0x4F54ACu) {
        ctx->pc = 0x4F54B0u;
        goto label_4f54b0;
    }
    ctx->pc = 0x4F54A8u;
    SET_GPR_U32(ctx, 31, 0x4F54B0u);
    ctx->pc = 0x4F5610u;
    if (runtime->hasFunction(0x4F5610u)) {
        auto targetFn = runtime->lookupFunction(0x4F5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F54B0u; }
        if (ctx->pc != 0x4F54B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5610_0x4f5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F54B0u; }
        if (ctx->pc != 0x4F54B0u) { return; }
    }
    ctx->pc = 0x4F54B0u;
label_4f54b0:
    // 0x4f54b0: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4f54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_4f54b4:
    // 0x4f54b4: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x4f54b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_4f54b8:
    // 0x4f54b8: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4f54b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4f54bc:
    // 0x4f54bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4f54bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f54c0:
    // 0x4f54c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4f54c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4f54c4:
    // 0x4f54c4: 0x0  nop
    ctx->pc = 0x4f54c4u;
    // NOP
label_4f54c8:
    // 0x4f54c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4f54c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4f54cc:
    // 0x4f54cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f54ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4f54d0:
    // 0x4f54d0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4f54d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4f54d4:
    // 0x4f54d4: 0xc04ca18  jal         func_132860
label_4f54d8:
    if (ctx->pc == 0x4F54D8u) {
        ctx->pc = 0x4F54D8u;
            // 0x4f54d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F54DCu;
        goto label_4f54dc;
    }
    ctx->pc = 0x4F54D4u;
    SET_GPR_U32(ctx, 31, 0x4F54DCu);
    ctx->pc = 0x4F54D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F54D4u;
            // 0x4f54d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F54DCu; }
        if (ctx->pc != 0x4F54DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F54DCu; }
        if (ctx->pc != 0x4F54DCu) { return; }
    }
    ctx->pc = 0x4F54DCu;
label_4f54dc:
    // 0x4f54dc: 0x10000042  b           . + 4 + (0x42 << 2)
label_4f54e0:
    if (ctx->pc == 0x4F54E0u) {
        ctx->pc = 0x4F54E4u;
        goto label_4f54e4;
    }
    ctx->pc = 0x4F54DCu;
    {
        const bool branch_taken_0x4f54dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f54dc) {
            ctx->pc = 0x4F55E8u;
            goto label_4f55e8;
        }
    }
    ctx->pc = 0x4F54E4u;
label_4f54e4:
    // 0x4f54e4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4f54e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4f54e8:
    // 0x4f54e8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x4f54e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4f54ec:
    // 0x4f54ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4f54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4f54f0:
    // 0x4f54f0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4f54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4f54f4:
    // 0x4f54f4: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x4f54f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4f54f8:
    // 0x4f54f8: 0xc089688  jal         func_225A20
label_4f54fc:
    if (ctx->pc == 0x4F54FCu) {
        ctx->pc = 0x4F54FCu;
            // 0x4f54fc: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x4F5500u;
        goto label_4f5500;
    }
    ctx->pc = 0x4F54F8u;
    SET_GPR_U32(ctx, 31, 0x4F5500u);
    ctx->pc = 0x4F54FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F54F8u;
            // 0x4f54fc: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5500u; }
        if (ctx->pc != 0x4F5500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5500u; }
        if (ctx->pc != 0x4F5500u) { return; }
    }
    ctx->pc = 0x4F5500u;
label_4f5500:
    // 0x4f5500: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x4f5500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4f5504:
    // 0x4f5504: 0xc7ad0104  lwc1        $f13, 0x104($sp)
    ctx->pc = 0x4f5504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4f5508:
    // 0x4f5508: 0xc7ae0108  lwc1        $f14, 0x108($sp)
    ctx->pc = 0x4f5508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4f550c:
    // 0x4f550c: 0xc04cbd8  jal         func_132F60
label_4f5510:
    if (ctx->pc == 0x4F5510u) {
        ctx->pc = 0x4F5510u;
            // 0x4f5510: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4F5514u;
        goto label_4f5514;
    }
    ctx->pc = 0x4F550Cu;
    SET_GPR_U32(ctx, 31, 0x4F5514u);
    ctx->pc = 0x4F5510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F550Cu;
            // 0x4f5510: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5514u; }
        if (ctx->pc != 0x4F5514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5514u; }
        if (ctx->pc != 0x4F5514u) { return; }
    }
    ctx->pc = 0x4F5514u;
label_4f5514:
    // 0x4f5514: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4f5514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4f5518:
    // 0x4f5518: 0xc04cc04  jal         func_133010
label_4f551c:
    if (ctx->pc == 0x4F551Cu) {
        ctx->pc = 0x4F551Cu;
            // 0x4f551c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4F5520u;
        goto label_4f5520;
    }
    ctx->pc = 0x4F5518u;
    SET_GPR_U32(ctx, 31, 0x4F5520u);
    ctx->pc = 0x4F551Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5518u;
            // 0x4f551c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5520u; }
        if (ctx->pc != 0x4F5520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5520u; }
        if (ctx->pc != 0x4F5520u) { return; }
    }
    ctx->pc = 0x4F5520u;
label_4f5520:
    // 0x4f5520: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4f5520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4f5524:
    // 0x4f5524: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x4f5524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4f5528:
    // 0x4f5528: 0xc04c72c  jal         func_131CB0
label_4f552c:
    if (ctx->pc == 0x4F552Cu) {
        ctx->pc = 0x4F552Cu;
            // 0x4f552c: 0x26060120  addiu       $a2, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->pc = 0x4F5530u;
        goto label_4f5530;
    }
    ctx->pc = 0x4F5528u;
    SET_GPR_U32(ctx, 31, 0x4F5530u);
    ctx->pc = 0x4F552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5528u;
            // 0x4f552c: 0x26060120  addiu       $a2, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5530u; }
        if (ctx->pc != 0x4F5530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5530u; }
        if (ctx->pc != 0x4F5530u) { return; }
    }
    ctx->pc = 0x4F5530u;
label_4f5530:
    // 0x4f5530: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4f5530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4f5534:
    // 0x4f5534: 0xc04c720  jal         func_131C80
label_4f5538:
    if (ctx->pc == 0x4F5538u) {
        ctx->pc = 0x4F5538u;
            // 0x4f5538: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x4F553Cu;
        goto label_4f553c;
    }
    ctx->pc = 0x4F5534u;
    SET_GPR_U32(ctx, 31, 0x4F553Cu);
    ctx->pc = 0x4F5538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5534u;
            // 0x4f5538: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F553Cu; }
        if (ctx->pc != 0x4F553Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F553Cu; }
        if (ctx->pc != 0x4F553Cu) { return; }
    }
    ctx->pc = 0x4F553Cu;
label_4f553c:
    // 0x4f553c: 0xc088b74  jal         func_222DD0
label_4f5540:
    if (ctx->pc == 0x4F5540u) {
        ctx->pc = 0x4F5540u;
            // 0x4f5540: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4F5544u;
        goto label_4f5544;
    }
    ctx->pc = 0x4F553Cu;
    SET_GPR_U32(ctx, 31, 0x4F5544u);
    ctx->pc = 0x4F5540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F553Cu;
            // 0x4f5540: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5544u; }
        if (ctx->pc != 0x4F5544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5544u; }
        if (ctx->pc != 0x4F5544u) { return; }
    }
    ctx->pc = 0x4F5544u;
label_4f5544:
    // 0x4f5544: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4f5544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4f5548:
    // 0x4f5548: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f5548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f554c:
    // 0x4f554c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4f554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4f5550:
    // 0x4f5550: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x4f5550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f5554:
    // 0x4f5554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f5554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f5558:
    // 0x4f5558: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4f5558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f555c:
    // 0x4f555c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4f555cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4f5560:
    // 0x4f5560: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4f5560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f5564:
    // 0x4f5564: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4f5568:
    if (ctx->pc == 0x4F5568u) {
        ctx->pc = 0x4F5568u;
            // 0x4f5568: 0xe60100d8  swc1        $f1, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->pc = 0x4F556Cu;
        goto label_4f556c;
    }
    ctx->pc = 0x4F5564u;
    {
        const bool branch_taken_0x4f5564 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4F5568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5564u;
            // 0x4f5568: 0xe60100d8  swc1        $f1, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5564) {
            ctx->pc = 0x4F5570u;
            goto label_4f5570;
        }
    }
    ctx->pc = 0x4F556Cu;
label_4f556c:
    // 0x4f556c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4f556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f5570:
    // 0x4f5570: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f5570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4f5574:
    // 0x4f5574: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4f5574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4f5578:
    // 0x4f5578: 0x8c6364c0  lw          $v1, 0x64C0($v1)
    ctx->pc = 0x4f5578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25792)));
label_4f557c:
    // 0x4f557c: 0x90630091  lbu         $v1, 0x91($v1)
    ctx->pc = 0x4f557cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 145)));
label_4f5580:
    // 0x4f5580: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x4f5580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_4f5584:
    // 0x4f5584: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4f5584u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f5588:
    // 0x4f5588: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4f5588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4f558c:
    // 0x4f558c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_4f5590:
    if (ctx->pc == 0x4F5590u) {
        ctx->pc = 0x4F5594u;
        goto label_4f5594;
    }
    ctx->pc = 0x4F558Cu;
    {
        const bool branch_taken_0x4f558c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f558c) {
            ctx->pc = 0x4F55E8u;
            goto label_4f55e8;
        }
    }
    ctx->pc = 0x4F5594u;
label_4f5594:
    // 0x4f5594: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4f5594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f5598:
    // 0x4f5598: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f5598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f559c:
    // 0x4f559c: 0x10650012  beq         $v1, $a1, . + 4 + (0x12 << 2)
label_4f55a0:
    if (ctx->pc == 0x4F55A0u) {
        ctx->pc = 0x4F55A4u;
        goto label_4f55a4;
    }
    ctx->pc = 0x4F559Cu;
    {
        const bool branch_taken_0x4f559c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4f559c) {
            ctx->pc = 0x4F55E8u;
            goto label_4f55e8;
        }
    }
    ctx->pc = 0x4F55A4u;
label_4f55a4:
    // 0x4f55a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f55a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f55a8:
    // 0x4f55a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4f55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4f55ac:
    // 0x4f55ac: 0xae06008c  sw          $a2, 0x8C($s0)
    ctx->pc = 0x4f55acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 6));
label_4f55b0:
    // 0x4f55b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4f55b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4f55b4:
    // 0x4f55b4: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x4f55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_4f55b8:
    // 0x4f55b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f55b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f55bc:
    // 0x4f55bc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x4f55bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_4f55c0:
    // 0x4f55c0: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x4f55c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_4f55c4:
    // 0x4f55c4: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x4f55c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_4f55c8:
    // 0x4f55c8: 0xae060084  sw          $a2, 0x84($s0)
    ctx->pc = 0x4f55c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 6));
label_4f55cc:
    // 0x4f55cc: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x4f55ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f55d0:
    // 0x4f55d0: 0xc0e32a4  jal         func_38CA90
label_4f55d4:
    if (ctx->pc == 0x4F55D4u) {
        ctx->pc = 0x4F55D4u;
            // 0x4f55d4: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x4F55D8u;
        goto label_4f55d8;
    }
    ctx->pc = 0x4F55D0u;
    SET_GPR_U32(ctx, 31, 0x4F55D8u);
    ctx->pc = 0x4F55D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F55D0u;
            // 0x4f55d4: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F55D8u; }
        if (ctx->pc != 0x4F55D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F55D8u; }
        if (ctx->pc != 0x4F55D8u) { return; }
    }
    ctx->pc = 0x4F55D8u;
label_4f55d8:
    // 0x4f55d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4f55d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f55dc:
    // 0x4f55dc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x4f55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4f55e0:
    // 0x4f55e0: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x4f55e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_4f55e4:
    // 0x4f55e4: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x4f55e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_4f55e8:
    // 0x4f55e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f55e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4f55ec:
    // 0x4f55ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4f55ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f55f0:
    // 0x4f55f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f55f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f55f4:
    // 0x4f55f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f55f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f55f8:
    // 0x4f55f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f55f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f55fc:
    // 0x4f55fc: 0x3e00008  jr          $ra
label_4f5600:
    if (ctx->pc == 0x4F5600u) {
        ctx->pc = 0x4F5600u;
            // 0x4f5600: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4F5604u;
        goto label_4f5604;
    }
    ctx->pc = 0x4F55FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F55FCu;
            // 0x4f5600: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5604u;
label_4f5604:
    // 0x4f5604: 0x0  nop
    ctx->pc = 0x4f5604u;
    // NOP
label_4f5608:
    // 0x4f5608: 0x0  nop
    ctx->pc = 0x4f5608u;
    // NOP
label_4f560c:
    // 0x4f560c: 0x0  nop
    ctx->pc = 0x4f560cu;
    // NOP
}
