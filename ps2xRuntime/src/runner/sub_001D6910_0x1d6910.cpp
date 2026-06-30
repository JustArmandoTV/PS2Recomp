#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D6910
// Address: 0x1d6910 - 0x1d6fe0
void sub_001D6910_0x1d6910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6910_0x1d6910");
#endif

    switch (ctx->pc) {
        case 0x1d6910u: goto label_1d6910;
        case 0x1d6914u: goto label_1d6914;
        case 0x1d6918u: goto label_1d6918;
        case 0x1d691cu: goto label_1d691c;
        case 0x1d6920u: goto label_1d6920;
        case 0x1d6924u: goto label_1d6924;
        case 0x1d6928u: goto label_1d6928;
        case 0x1d692cu: goto label_1d692c;
        case 0x1d6930u: goto label_1d6930;
        case 0x1d6934u: goto label_1d6934;
        case 0x1d6938u: goto label_1d6938;
        case 0x1d693cu: goto label_1d693c;
        case 0x1d6940u: goto label_1d6940;
        case 0x1d6944u: goto label_1d6944;
        case 0x1d6948u: goto label_1d6948;
        case 0x1d694cu: goto label_1d694c;
        case 0x1d6950u: goto label_1d6950;
        case 0x1d6954u: goto label_1d6954;
        case 0x1d6958u: goto label_1d6958;
        case 0x1d695cu: goto label_1d695c;
        case 0x1d6960u: goto label_1d6960;
        case 0x1d6964u: goto label_1d6964;
        case 0x1d6968u: goto label_1d6968;
        case 0x1d696cu: goto label_1d696c;
        case 0x1d6970u: goto label_1d6970;
        case 0x1d6974u: goto label_1d6974;
        case 0x1d6978u: goto label_1d6978;
        case 0x1d697cu: goto label_1d697c;
        case 0x1d6980u: goto label_1d6980;
        case 0x1d6984u: goto label_1d6984;
        case 0x1d6988u: goto label_1d6988;
        case 0x1d698cu: goto label_1d698c;
        case 0x1d6990u: goto label_1d6990;
        case 0x1d6994u: goto label_1d6994;
        case 0x1d6998u: goto label_1d6998;
        case 0x1d699cu: goto label_1d699c;
        case 0x1d69a0u: goto label_1d69a0;
        case 0x1d69a4u: goto label_1d69a4;
        case 0x1d69a8u: goto label_1d69a8;
        case 0x1d69acu: goto label_1d69ac;
        case 0x1d69b0u: goto label_1d69b0;
        case 0x1d69b4u: goto label_1d69b4;
        case 0x1d69b8u: goto label_1d69b8;
        case 0x1d69bcu: goto label_1d69bc;
        case 0x1d69c0u: goto label_1d69c0;
        case 0x1d69c4u: goto label_1d69c4;
        case 0x1d69c8u: goto label_1d69c8;
        case 0x1d69ccu: goto label_1d69cc;
        case 0x1d69d0u: goto label_1d69d0;
        case 0x1d69d4u: goto label_1d69d4;
        case 0x1d69d8u: goto label_1d69d8;
        case 0x1d69dcu: goto label_1d69dc;
        case 0x1d69e0u: goto label_1d69e0;
        case 0x1d69e4u: goto label_1d69e4;
        case 0x1d69e8u: goto label_1d69e8;
        case 0x1d69ecu: goto label_1d69ec;
        case 0x1d69f0u: goto label_1d69f0;
        case 0x1d69f4u: goto label_1d69f4;
        case 0x1d69f8u: goto label_1d69f8;
        case 0x1d69fcu: goto label_1d69fc;
        case 0x1d6a00u: goto label_1d6a00;
        case 0x1d6a04u: goto label_1d6a04;
        case 0x1d6a08u: goto label_1d6a08;
        case 0x1d6a0cu: goto label_1d6a0c;
        case 0x1d6a10u: goto label_1d6a10;
        case 0x1d6a14u: goto label_1d6a14;
        case 0x1d6a18u: goto label_1d6a18;
        case 0x1d6a1cu: goto label_1d6a1c;
        case 0x1d6a20u: goto label_1d6a20;
        case 0x1d6a24u: goto label_1d6a24;
        case 0x1d6a28u: goto label_1d6a28;
        case 0x1d6a2cu: goto label_1d6a2c;
        case 0x1d6a30u: goto label_1d6a30;
        case 0x1d6a34u: goto label_1d6a34;
        case 0x1d6a38u: goto label_1d6a38;
        case 0x1d6a3cu: goto label_1d6a3c;
        case 0x1d6a40u: goto label_1d6a40;
        case 0x1d6a44u: goto label_1d6a44;
        case 0x1d6a48u: goto label_1d6a48;
        case 0x1d6a4cu: goto label_1d6a4c;
        case 0x1d6a50u: goto label_1d6a50;
        case 0x1d6a54u: goto label_1d6a54;
        case 0x1d6a58u: goto label_1d6a58;
        case 0x1d6a5cu: goto label_1d6a5c;
        case 0x1d6a60u: goto label_1d6a60;
        case 0x1d6a64u: goto label_1d6a64;
        case 0x1d6a68u: goto label_1d6a68;
        case 0x1d6a6cu: goto label_1d6a6c;
        case 0x1d6a70u: goto label_1d6a70;
        case 0x1d6a74u: goto label_1d6a74;
        case 0x1d6a78u: goto label_1d6a78;
        case 0x1d6a7cu: goto label_1d6a7c;
        case 0x1d6a80u: goto label_1d6a80;
        case 0x1d6a84u: goto label_1d6a84;
        case 0x1d6a88u: goto label_1d6a88;
        case 0x1d6a8cu: goto label_1d6a8c;
        case 0x1d6a90u: goto label_1d6a90;
        case 0x1d6a94u: goto label_1d6a94;
        case 0x1d6a98u: goto label_1d6a98;
        case 0x1d6a9cu: goto label_1d6a9c;
        case 0x1d6aa0u: goto label_1d6aa0;
        case 0x1d6aa4u: goto label_1d6aa4;
        case 0x1d6aa8u: goto label_1d6aa8;
        case 0x1d6aacu: goto label_1d6aac;
        case 0x1d6ab0u: goto label_1d6ab0;
        case 0x1d6ab4u: goto label_1d6ab4;
        case 0x1d6ab8u: goto label_1d6ab8;
        case 0x1d6abcu: goto label_1d6abc;
        case 0x1d6ac0u: goto label_1d6ac0;
        case 0x1d6ac4u: goto label_1d6ac4;
        case 0x1d6ac8u: goto label_1d6ac8;
        case 0x1d6accu: goto label_1d6acc;
        case 0x1d6ad0u: goto label_1d6ad0;
        case 0x1d6ad4u: goto label_1d6ad4;
        case 0x1d6ad8u: goto label_1d6ad8;
        case 0x1d6adcu: goto label_1d6adc;
        case 0x1d6ae0u: goto label_1d6ae0;
        case 0x1d6ae4u: goto label_1d6ae4;
        case 0x1d6ae8u: goto label_1d6ae8;
        case 0x1d6aecu: goto label_1d6aec;
        case 0x1d6af0u: goto label_1d6af0;
        case 0x1d6af4u: goto label_1d6af4;
        case 0x1d6af8u: goto label_1d6af8;
        case 0x1d6afcu: goto label_1d6afc;
        case 0x1d6b00u: goto label_1d6b00;
        case 0x1d6b04u: goto label_1d6b04;
        case 0x1d6b08u: goto label_1d6b08;
        case 0x1d6b0cu: goto label_1d6b0c;
        case 0x1d6b10u: goto label_1d6b10;
        case 0x1d6b14u: goto label_1d6b14;
        case 0x1d6b18u: goto label_1d6b18;
        case 0x1d6b1cu: goto label_1d6b1c;
        case 0x1d6b20u: goto label_1d6b20;
        case 0x1d6b24u: goto label_1d6b24;
        case 0x1d6b28u: goto label_1d6b28;
        case 0x1d6b2cu: goto label_1d6b2c;
        case 0x1d6b30u: goto label_1d6b30;
        case 0x1d6b34u: goto label_1d6b34;
        case 0x1d6b38u: goto label_1d6b38;
        case 0x1d6b3cu: goto label_1d6b3c;
        case 0x1d6b40u: goto label_1d6b40;
        case 0x1d6b44u: goto label_1d6b44;
        case 0x1d6b48u: goto label_1d6b48;
        case 0x1d6b4cu: goto label_1d6b4c;
        case 0x1d6b50u: goto label_1d6b50;
        case 0x1d6b54u: goto label_1d6b54;
        case 0x1d6b58u: goto label_1d6b58;
        case 0x1d6b5cu: goto label_1d6b5c;
        case 0x1d6b60u: goto label_1d6b60;
        case 0x1d6b64u: goto label_1d6b64;
        case 0x1d6b68u: goto label_1d6b68;
        case 0x1d6b6cu: goto label_1d6b6c;
        case 0x1d6b70u: goto label_1d6b70;
        case 0x1d6b74u: goto label_1d6b74;
        case 0x1d6b78u: goto label_1d6b78;
        case 0x1d6b7cu: goto label_1d6b7c;
        case 0x1d6b80u: goto label_1d6b80;
        case 0x1d6b84u: goto label_1d6b84;
        case 0x1d6b88u: goto label_1d6b88;
        case 0x1d6b8cu: goto label_1d6b8c;
        case 0x1d6b90u: goto label_1d6b90;
        case 0x1d6b94u: goto label_1d6b94;
        case 0x1d6b98u: goto label_1d6b98;
        case 0x1d6b9cu: goto label_1d6b9c;
        case 0x1d6ba0u: goto label_1d6ba0;
        case 0x1d6ba4u: goto label_1d6ba4;
        case 0x1d6ba8u: goto label_1d6ba8;
        case 0x1d6bacu: goto label_1d6bac;
        case 0x1d6bb0u: goto label_1d6bb0;
        case 0x1d6bb4u: goto label_1d6bb4;
        case 0x1d6bb8u: goto label_1d6bb8;
        case 0x1d6bbcu: goto label_1d6bbc;
        case 0x1d6bc0u: goto label_1d6bc0;
        case 0x1d6bc4u: goto label_1d6bc4;
        case 0x1d6bc8u: goto label_1d6bc8;
        case 0x1d6bccu: goto label_1d6bcc;
        case 0x1d6bd0u: goto label_1d6bd0;
        case 0x1d6bd4u: goto label_1d6bd4;
        case 0x1d6bd8u: goto label_1d6bd8;
        case 0x1d6bdcu: goto label_1d6bdc;
        case 0x1d6be0u: goto label_1d6be0;
        case 0x1d6be4u: goto label_1d6be4;
        case 0x1d6be8u: goto label_1d6be8;
        case 0x1d6becu: goto label_1d6bec;
        case 0x1d6bf0u: goto label_1d6bf0;
        case 0x1d6bf4u: goto label_1d6bf4;
        case 0x1d6bf8u: goto label_1d6bf8;
        case 0x1d6bfcu: goto label_1d6bfc;
        case 0x1d6c00u: goto label_1d6c00;
        case 0x1d6c04u: goto label_1d6c04;
        case 0x1d6c08u: goto label_1d6c08;
        case 0x1d6c0cu: goto label_1d6c0c;
        case 0x1d6c10u: goto label_1d6c10;
        case 0x1d6c14u: goto label_1d6c14;
        case 0x1d6c18u: goto label_1d6c18;
        case 0x1d6c1cu: goto label_1d6c1c;
        case 0x1d6c20u: goto label_1d6c20;
        case 0x1d6c24u: goto label_1d6c24;
        case 0x1d6c28u: goto label_1d6c28;
        case 0x1d6c2cu: goto label_1d6c2c;
        case 0x1d6c30u: goto label_1d6c30;
        case 0x1d6c34u: goto label_1d6c34;
        case 0x1d6c38u: goto label_1d6c38;
        case 0x1d6c3cu: goto label_1d6c3c;
        case 0x1d6c40u: goto label_1d6c40;
        case 0x1d6c44u: goto label_1d6c44;
        case 0x1d6c48u: goto label_1d6c48;
        case 0x1d6c4cu: goto label_1d6c4c;
        case 0x1d6c50u: goto label_1d6c50;
        case 0x1d6c54u: goto label_1d6c54;
        case 0x1d6c58u: goto label_1d6c58;
        case 0x1d6c5cu: goto label_1d6c5c;
        case 0x1d6c60u: goto label_1d6c60;
        case 0x1d6c64u: goto label_1d6c64;
        case 0x1d6c68u: goto label_1d6c68;
        case 0x1d6c6cu: goto label_1d6c6c;
        case 0x1d6c70u: goto label_1d6c70;
        case 0x1d6c74u: goto label_1d6c74;
        case 0x1d6c78u: goto label_1d6c78;
        case 0x1d6c7cu: goto label_1d6c7c;
        case 0x1d6c80u: goto label_1d6c80;
        case 0x1d6c84u: goto label_1d6c84;
        case 0x1d6c88u: goto label_1d6c88;
        case 0x1d6c8cu: goto label_1d6c8c;
        case 0x1d6c90u: goto label_1d6c90;
        case 0x1d6c94u: goto label_1d6c94;
        case 0x1d6c98u: goto label_1d6c98;
        case 0x1d6c9cu: goto label_1d6c9c;
        case 0x1d6ca0u: goto label_1d6ca0;
        case 0x1d6ca4u: goto label_1d6ca4;
        case 0x1d6ca8u: goto label_1d6ca8;
        case 0x1d6cacu: goto label_1d6cac;
        case 0x1d6cb0u: goto label_1d6cb0;
        case 0x1d6cb4u: goto label_1d6cb4;
        case 0x1d6cb8u: goto label_1d6cb8;
        case 0x1d6cbcu: goto label_1d6cbc;
        case 0x1d6cc0u: goto label_1d6cc0;
        case 0x1d6cc4u: goto label_1d6cc4;
        case 0x1d6cc8u: goto label_1d6cc8;
        case 0x1d6cccu: goto label_1d6ccc;
        case 0x1d6cd0u: goto label_1d6cd0;
        case 0x1d6cd4u: goto label_1d6cd4;
        case 0x1d6cd8u: goto label_1d6cd8;
        case 0x1d6cdcu: goto label_1d6cdc;
        case 0x1d6ce0u: goto label_1d6ce0;
        case 0x1d6ce4u: goto label_1d6ce4;
        case 0x1d6ce8u: goto label_1d6ce8;
        case 0x1d6cecu: goto label_1d6cec;
        case 0x1d6cf0u: goto label_1d6cf0;
        case 0x1d6cf4u: goto label_1d6cf4;
        case 0x1d6cf8u: goto label_1d6cf8;
        case 0x1d6cfcu: goto label_1d6cfc;
        case 0x1d6d00u: goto label_1d6d00;
        case 0x1d6d04u: goto label_1d6d04;
        case 0x1d6d08u: goto label_1d6d08;
        case 0x1d6d0cu: goto label_1d6d0c;
        case 0x1d6d10u: goto label_1d6d10;
        case 0x1d6d14u: goto label_1d6d14;
        case 0x1d6d18u: goto label_1d6d18;
        case 0x1d6d1cu: goto label_1d6d1c;
        case 0x1d6d20u: goto label_1d6d20;
        case 0x1d6d24u: goto label_1d6d24;
        case 0x1d6d28u: goto label_1d6d28;
        case 0x1d6d2cu: goto label_1d6d2c;
        case 0x1d6d30u: goto label_1d6d30;
        case 0x1d6d34u: goto label_1d6d34;
        case 0x1d6d38u: goto label_1d6d38;
        case 0x1d6d3cu: goto label_1d6d3c;
        case 0x1d6d40u: goto label_1d6d40;
        case 0x1d6d44u: goto label_1d6d44;
        case 0x1d6d48u: goto label_1d6d48;
        case 0x1d6d4cu: goto label_1d6d4c;
        case 0x1d6d50u: goto label_1d6d50;
        case 0x1d6d54u: goto label_1d6d54;
        case 0x1d6d58u: goto label_1d6d58;
        case 0x1d6d5cu: goto label_1d6d5c;
        case 0x1d6d60u: goto label_1d6d60;
        case 0x1d6d64u: goto label_1d6d64;
        case 0x1d6d68u: goto label_1d6d68;
        case 0x1d6d6cu: goto label_1d6d6c;
        case 0x1d6d70u: goto label_1d6d70;
        case 0x1d6d74u: goto label_1d6d74;
        case 0x1d6d78u: goto label_1d6d78;
        case 0x1d6d7cu: goto label_1d6d7c;
        case 0x1d6d80u: goto label_1d6d80;
        case 0x1d6d84u: goto label_1d6d84;
        case 0x1d6d88u: goto label_1d6d88;
        case 0x1d6d8cu: goto label_1d6d8c;
        case 0x1d6d90u: goto label_1d6d90;
        case 0x1d6d94u: goto label_1d6d94;
        case 0x1d6d98u: goto label_1d6d98;
        case 0x1d6d9cu: goto label_1d6d9c;
        case 0x1d6da0u: goto label_1d6da0;
        case 0x1d6da4u: goto label_1d6da4;
        case 0x1d6da8u: goto label_1d6da8;
        case 0x1d6dacu: goto label_1d6dac;
        case 0x1d6db0u: goto label_1d6db0;
        case 0x1d6db4u: goto label_1d6db4;
        case 0x1d6db8u: goto label_1d6db8;
        case 0x1d6dbcu: goto label_1d6dbc;
        case 0x1d6dc0u: goto label_1d6dc0;
        case 0x1d6dc4u: goto label_1d6dc4;
        case 0x1d6dc8u: goto label_1d6dc8;
        case 0x1d6dccu: goto label_1d6dcc;
        case 0x1d6dd0u: goto label_1d6dd0;
        case 0x1d6dd4u: goto label_1d6dd4;
        case 0x1d6dd8u: goto label_1d6dd8;
        case 0x1d6ddcu: goto label_1d6ddc;
        case 0x1d6de0u: goto label_1d6de0;
        case 0x1d6de4u: goto label_1d6de4;
        case 0x1d6de8u: goto label_1d6de8;
        case 0x1d6decu: goto label_1d6dec;
        case 0x1d6df0u: goto label_1d6df0;
        case 0x1d6df4u: goto label_1d6df4;
        case 0x1d6df8u: goto label_1d6df8;
        case 0x1d6dfcu: goto label_1d6dfc;
        case 0x1d6e00u: goto label_1d6e00;
        case 0x1d6e04u: goto label_1d6e04;
        case 0x1d6e08u: goto label_1d6e08;
        case 0x1d6e0cu: goto label_1d6e0c;
        case 0x1d6e10u: goto label_1d6e10;
        case 0x1d6e14u: goto label_1d6e14;
        case 0x1d6e18u: goto label_1d6e18;
        case 0x1d6e1cu: goto label_1d6e1c;
        case 0x1d6e20u: goto label_1d6e20;
        case 0x1d6e24u: goto label_1d6e24;
        case 0x1d6e28u: goto label_1d6e28;
        case 0x1d6e2cu: goto label_1d6e2c;
        case 0x1d6e30u: goto label_1d6e30;
        case 0x1d6e34u: goto label_1d6e34;
        case 0x1d6e38u: goto label_1d6e38;
        case 0x1d6e3cu: goto label_1d6e3c;
        case 0x1d6e40u: goto label_1d6e40;
        case 0x1d6e44u: goto label_1d6e44;
        case 0x1d6e48u: goto label_1d6e48;
        case 0x1d6e4cu: goto label_1d6e4c;
        case 0x1d6e50u: goto label_1d6e50;
        case 0x1d6e54u: goto label_1d6e54;
        case 0x1d6e58u: goto label_1d6e58;
        case 0x1d6e5cu: goto label_1d6e5c;
        case 0x1d6e60u: goto label_1d6e60;
        case 0x1d6e64u: goto label_1d6e64;
        case 0x1d6e68u: goto label_1d6e68;
        case 0x1d6e6cu: goto label_1d6e6c;
        case 0x1d6e70u: goto label_1d6e70;
        case 0x1d6e74u: goto label_1d6e74;
        case 0x1d6e78u: goto label_1d6e78;
        case 0x1d6e7cu: goto label_1d6e7c;
        case 0x1d6e80u: goto label_1d6e80;
        case 0x1d6e84u: goto label_1d6e84;
        case 0x1d6e88u: goto label_1d6e88;
        case 0x1d6e8cu: goto label_1d6e8c;
        case 0x1d6e90u: goto label_1d6e90;
        case 0x1d6e94u: goto label_1d6e94;
        case 0x1d6e98u: goto label_1d6e98;
        case 0x1d6e9cu: goto label_1d6e9c;
        case 0x1d6ea0u: goto label_1d6ea0;
        case 0x1d6ea4u: goto label_1d6ea4;
        case 0x1d6ea8u: goto label_1d6ea8;
        case 0x1d6eacu: goto label_1d6eac;
        case 0x1d6eb0u: goto label_1d6eb0;
        case 0x1d6eb4u: goto label_1d6eb4;
        case 0x1d6eb8u: goto label_1d6eb8;
        case 0x1d6ebcu: goto label_1d6ebc;
        case 0x1d6ec0u: goto label_1d6ec0;
        case 0x1d6ec4u: goto label_1d6ec4;
        case 0x1d6ec8u: goto label_1d6ec8;
        case 0x1d6eccu: goto label_1d6ecc;
        case 0x1d6ed0u: goto label_1d6ed0;
        case 0x1d6ed4u: goto label_1d6ed4;
        case 0x1d6ed8u: goto label_1d6ed8;
        case 0x1d6edcu: goto label_1d6edc;
        case 0x1d6ee0u: goto label_1d6ee0;
        case 0x1d6ee4u: goto label_1d6ee4;
        case 0x1d6ee8u: goto label_1d6ee8;
        case 0x1d6eecu: goto label_1d6eec;
        case 0x1d6ef0u: goto label_1d6ef0;
        case 0x1d6ef4u: goto label_1d6ef4;
        case 0x1d6ef8u: goto label_1d6ef8;
        case 0x1d6efcu: goto label_1d6efc;
        case 0x1d6f00u: goto label_1d6f00;
        case 0x1d6f04u: goto label_1d6f04;
        case 0x1d6f08u: goto label_1d6f08;
        case 0x1d6f0cu: goto label_1d6f0c;
        case 0x1d6f10u: goto label_1d6f10;
        case 0x1d6f14u: goto label_1d6f14;
        case 0x1d6f18u: goto label_1d6f18;
        case 0x1d6f1cu: goto label_1d6f1c;
        case 0x1d6f20u: goto label_1d6f20;
        case 0x1d6f24u: goto label_1d6f24;
        case 0x1d6f28u: goto label_1d6f28;
        case 0x1d6f2cu: goto label_1d6f2c;
        case 0x1d6f30u: goto label_1d6f30;
        case 0x1d6f34u: goto label_1d6f34;
        case 0x1d6f38u: goto label_1d6f38;
        case 0x1d6f3cu: goto label_1d6f3c;
        case 0x1d6f40u: goto label_1d6f40;
        case 0x1d6f44u: goto label_1d6f44;
        case 0x1d6f48u: goto label_1d6f48;
        case 0x1d6f4cu: goto label_1d6f4c;
        case 0x1d6f50u: goto label_1d6f50;
        case 0x1d6f54u: goto label_1d6f54;
        case 0x1d6f58u: goto label_1d6f58;
        case 0x1d6f5cu: goto label_1d6f5c;
        case 0x1d6f60u: goto label_1d6f60;
        case 0x1d6f64u: goto label_1d6f64;
        case 0x1d6f68u: goto label_1d6f68;
        case 0x1d6f6cu: goto label_1d6f6c;
        case 0x1d6f70u: goto label_1d6f70;
        case 0x1d6f74u: goto label_1d6f74;
        case 0x1d6f78u: goto label_1d6f78;
        case 0x1d6f7cu: goto label_1d6f7c;
        case 0x1d6f80u: goto label_1d6f80;
        case 0x1d6f84u: goto label_1d6f84;
        case 0x1d6f88u: goto label_1d6f88;
        case 0x1d6f8cu: goto label_1d6f8c;
        case 0x1d6f90u: goto label_1d6f90;
        case 0x1d6f94u: goto label_1d6f94;
        case 0x1d6f98u: goto label_1d6f98;
        case 0x1d6f9cu: goto label_1d6f9c;
        case 0x1d6fa0u: goto label_1d6fa0;
        case 0x1d6fa4u: goto label_1d6fa4;
        case 0x1d6fa8u: goto label_1d6fa8;
        case 0x1d6facu: goto label_1d6fac;
        case 0x1d6fb0u: goto label_1d6fb0;
        case 0x1d6fb4u: goto label_1d6fb4;
        case 0x1d6fb8u: goto label_1d6fb8;
        case 0x1d6fbcu: goto label_1d6fbc;
        case 0x1d6fc0u: goto label_1d6fc0;
        case 0x1d6fc4u: goto label_1d6fc4;
        case 0x1d6fc8u: goto label_1d6fc8;
        case 0x1d6fccu: goto label_1d6fcc;
        case 0x1d6fd0u: goto label_1d6fd0;
        case 0x1d6fd4u: goto label_1d6fd4;
        case 0x1d6fd8u: goto label_1d6fd8;
        case 0x1d6fdcu: goto label_1d6fdc;
        default: break;
    }

    ctx->pc = 0x1d6910u;

label_1d6910:
    // 0x1d6910: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d6910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d6914:
    // 0x1d6914: 0x30cb00ff  andi        $t3, $a2, 0xFF
    ctx->pc = 0x1d6914u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1d6918:
    // 0x1d6918: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x1d6918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_1d691c:
    // 0x1d691c: 0x3c0800af  lui         $t0, 0xAF
    ctx->pc = 0x1d691cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)175 << 16));
label_1d6920:
    // 0x1d6920: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x1d6920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_1d6924:
    // 0x1d6924: 0x30ea00ff  andi        $t2, $a3, 0xFF
    ctx->pc = 0x1d6924u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1d6928:
    // 0x1d6928: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x1d6928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1d692c:
    // 0x1d692c: 0x2508ef10  addiu       $t0, $t0, -0x10F0
    ctx->pc = 0x1d692cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962960));
label_1d6930:
    // 0x1d6930: 0x4a4821  addu        $t1, $v0, $t2
    ctx->pc = 0x1d6930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1d6934:
    // 0x1d6934: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x1d6934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_1d6938:
    // 0x1d6938: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x1d6938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_1d693c:
    // 0x1d693c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d693cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1d6940:
    // 0x1d6940: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x1d6940u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1d6944:
    // 0x1d6944: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1d6944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1d6948:
    // 0x1d6948: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x1d6948u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d694c:
    // 0x1d694c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1d694cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1d6950:
    // 0x1d6950: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1d6950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1d6954:
    // 0x1d6954: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x1d6954u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_1d6958:
    // 0x1d6958: 0x2442caf0  addiu       $v0, $v0, -0x3510
    ctx->pc = 0x1d6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953712));
label_1d695c:
    // 0x1d695c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1d695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1d6960:
    // 0x1d6960: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x1d6960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1d6964:
    // 0x1d6964: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d6964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1d6968:
    // 0x1d6968: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x1d6968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
label_1d696c:
    // 0x1d696c: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x1d696cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
label_1d6970:
    // 0x1d6970: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1d6970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1d6974:
    // 0x1d6974: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1d6974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_1d6978:
    // 0x1d6978: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1d6978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1d697c:
    // 0x1d697c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1d697cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1d6980:
    // 0x1d6980: 0x2442cafa  addiu       $v0, $v0, -0x3506
    ctx->pc = 0x1d6980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953722));
label_1d6984:
    // 0x1d6984: 0xa0860010  sb          $a2, 0x10($a0)
    ctx->pc = 0x1d6984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 6));
label_1d6988:
    // 0x1d6988: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1d6988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1d698c:
    // 0x1d698c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1d698cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_1d6990:
    // 0x1d6990: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1d6990u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6994:
    // 0x1d6994: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d6994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d6998:
    // 0x1d6998: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1d6998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
label_1d699c:
    // 0x1d699c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d699cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d69a0:
    // 0x1d69a0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1d69a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1d69a4:
    // 0x1d69a4: 0xa087001c  sb          $a3, 0x1C($a0)
    ctx->pc = 0x1d69a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 7));
label_1d69a8:
    // 0x1d69a8: 0xac880020  sw          $t0, 0x20($a0)
    ctx->pc = 0x1d69a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
label_1d69ac:
    // 0x1d69ac: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1d69acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_1d69b0:
    // 0x1d69b0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1d69b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_1d69b4:
    // 0x1d69b4: 0x3e00008  jr          $ra
label_1d69b8:
    if (ctx->pc == 0x1D69B8u) {
        ctx->pc = 0x1D69B8u;
            // 0x1d69b8: 0xa0a311ad  sb          $v1, 0x11AD($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4525), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D69BCu;
        goto label_1d69bc;
    }
    ctx->pc = 0x1D69B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D69B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D69B4u;
            // 0x1d69b8: 0xa0a311ad  sb          $v1, 0x11AD($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4525), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D69BCu;
label_1d69bc:
    // 0x1d69bc: 0x0  nop
    ctx->pc = 0x1d69bcu;
    // NOP
label_1d69c0:
    // 0x1d69c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d69c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d69c4:
    // 0x1d69c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d69c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d69c8:
    // 0x1d69c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d69c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d69cc:
    // 0x1d69cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d69ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d69d0:
    // 0x1d69d0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1d69d4:
    if (ctx->pc == 0x1D69D4u) {
        ctx->pc = 0x1D69D4u;
            // 0x1d69d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D69D8u;
        goto label_1d69d8;
    }
    ctx->pc = 0x1D69D0u;
    {
        const bool branch_taken_0x1d69d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d69d0) {
            ctx->pc = 0x1D69D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D69D0u;
            // 0x1d69d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D69FCu;
            goto label_1d69fc;
        }
    }
    ctx->pc = 0x1D69D8u;
label_1d69d8:
    // 0x1d69d8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1d69d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1d69dc:
    // 0x1d69dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1d69e0:
    // 0x1d69e0: 0x2463cdc0  addiu       $v1, $v1, -0x3240
    ctx->pc = 0x1d69e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954432));
label_1d69e4:
    // 0x1d69e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d69e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d69e8:
    // 0x1d69e8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1d69ec:
    if (ctx->pc == 0x1D69ECu) {
        ctx->pc = 0x1D69ECu;
            // 0x1d69ec: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x1D69F0u;
        goto label_1d69f0;
    }
    ctx->pc = 0x1D69E8u;
    {
        const bool branch_taken_0x1d69e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D69ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D69E8u;
            // 0x1d69ec: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69e8) {
            ctx->pc = 0x1D69F8u;
            goto label_1d69f8;
        }
    }
    ctx->pc = 0x1D69F0u;
label_1d69f0:
    // 0x1d69f0: 0xc0400a8  jal         func_1002A0
label_1d69f4:
    if (ctx->pc == 0x1D69F4u) {
        ctx->pc = 0x1D69F8u;
        goto label_1d69f8;
    }
    ctx->pc = 0x1D69F0u;
    SET_GPR_U32(ctx, 31, 0x1D69F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D69F8u; }
        if (ctx->pc != 0x1D69F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D69F8u; }
        if (ctx->pc != 0x1D69F8u) { return; }
    }
    ctx->pc = 0x1D69F8u;
label_1d69f8:
    // 0x1d69f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d69f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d69fc:
    // 0x1d69fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d69fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6a00:
    // 0x1d6a00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6a04:
    // 0x1d6a04: 0x3e00008  jr          $ra
label_1d6a08:
    if (ctx->pc == 0x1D6A08u) {
        ctx->pc = 0x1D6A08u;
            // 0x1d6a08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D6A0Cu;
        goto label_1d6a0c;
    }
    ctx->pc = 0x1D6A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A04u;
            // 0x1d6a08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6A0Cu;
label_1d6a0c:
    // 0x1d6a0c: 0x0  nop
    ctx->pc = 0x1d6a0cu;
    // NOP
label_1d6a10:
    // 0x1d6a10: 0x3e00008  jr          $ra
label_1d6a14:
    if (ctx->pc == 0x1D6A14u) {
        ctx->pc = 0x1D6A18u;
        goto label_1d6a18;
    }
    ctx->pc = 0x1D6A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6A18u;
label_1d6a18:
    // 0x1d6a18: 0x0  nop
    ctx->pc = 0x1d6a18u;
    // NOP
label_1d6a1c:
    // 0x1d6a1c: 0x0  nop
    ctx->pc = 0x1d6a1cu;
    // NOP
label_1d6a20:
    // 0x1d6a20: 0x3e00008  jr          $ra
label_1d6a24:
    if (ctx->pc == 0x1D6A24u) {
        ctx->pc = 0x1D6A28u;
        goto label_1d6a28;
    }
    ctx->pc = 0x1D6A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6A28u;
label_1d6a28:
    // 0x1d6a28: 0x0  nop
    ctx->pc = 0x1d6a28u;
    // NOP
label_1d6a2c:
    // 0x1d6a2c: 0x0  nop
    ctx->pc = 0x1d6a2cu;
    // NOP
label_1d6a30:
    // 0x1d6a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d6a34:
    // 0x1d6a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d6a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d6a38:
    // 0x1d6a38: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d6a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d6a3c:
    // 0x1d6a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d6a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d6a40:
    // 0x1d6a40: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x1d6a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1d6a44:
    // 0x1d6a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d6a48:
    // 0x1d6a48: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1d6a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1d6a4c:
    // 0x1d6a4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d6a50:
    // 0x1d6a50: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x1d6a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_1d6a54:
    // 0x1d6a54: 0x2484f570  addiu       $a0, $a0, -0xA90
    ctx->pc = 0x1d6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964592));
label_1d6a58:
    // 0x1d6a58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d6a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d6a5c:
    // 0x1d6a5c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d6a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1d6a60:
    // 0x1d6a60: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1d6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1d6a64:
    // 0x1d6a64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d6a68:
    // 0x1d6a68: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1d6a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_1d6a6c:
    // 0x1d6a6c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1d6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1d6a70:
    // 0x1d6a70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d6a74:
    // 0x1d6a74: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1d6a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1d6a78:
    // 0x1d6a78: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6a7c:
    // 0x1d6a7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d6a80:
    // 0x1d6a80: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1d6a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1d6a84:
    // 0x1d6a84: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1d6a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_1d6a88:
    // 0x1d6a88: 0xc075128  jal         func_1D44A0
label_1d6a8c:
    if (ctx->pc == 0x1D6A8Cu) {
        ctx->pc = 0x1D6A8Cu;
            // 0x1d6a8c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x1D6A90u;
        goto label_1d6a90;
    }
    ctx->pc = 0x1D6A88u;
    SET_GPR_U32(ctx, 31, 0x1D6A90u);
    ctx->pc = 0x1D6A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A88u;
            // 0x1d6a8c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A90u; }
        if (ctx->pc != 0x1D6A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A90u; }
        if (ctx->pc != 0x1D6A90u) { return; }
    }
    ctx->pc = 0x1D6A90u;
label_1d6a90:
    // 0x1d6a90: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x1d6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_1d6a94:
    // 0x1d6a94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6a98:
    // 0x1d6a98: 0x8c86f570  lw          $a2, -0xA90($a0)
    ctx->pc = 0x1d6a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964592)));
label_1d6a9c:
    // 0x1d6a9c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x1d6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_1d6aa0:
    // 0x1d6aa0: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x1d6aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1d6aa4:
    // 0x1d6aa4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1d6aa4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d6aa8:
    // 0x1d6aa8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d6aac:
    if (ctx->pc == 0x1D6AACu) {
        ctx->pc = 0x1D6AB0u;
        goto label_1d6ab0;
    }
    ctx->pc = 0x1D6AA8u;
    {
        const bool branch_taken_0x1d6aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6aa8) {
            ctx->pc = 0x1D6AB8u;
            goto label_1d6ab8;
        }
    }
    ctx->pc = 0x1D6AB0u;
label_1d6ab0:
    // 0x1d6ab0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6ab4:
    // 0x1d6ab4: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x1d6ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_1d6ab8:
    // 0x1d6ab8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6abc:
    // 0x1d6abc: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x1d6abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_1d6ac0:
    // 0x1d6ac0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x1d6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_1d6ac4:
    // 0x1d6ac4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1d6ac4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d6ac8:
    // 0x1d6ac8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d6acc:
    if (ctx->pc == 0x1D6ACCu) {
        ctx->pc = 0x1D6ACCu;
            // 0x1d6acc: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x1D6AD0u;
        goto label_1d6ad0;
    }
    ctx->pc = 0x1D6AC8u;
    {
        const bool branch_taken_0x1d6ac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6AC8u;
            // 0x1d6acc: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ac8) {
            ctx->pc = 0x1D6AD8u;
            goto label_1d6ad8;
        }
    }
    ctx->pc = 0x1D6AD0u;
label_1d6ad0:
    // 0x1d6ad0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6ad4:
    // 0x1d6ad4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x1d6ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_1d6ad8:
    // 0x1d6ad8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6adc:
    // 0x1d6adc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d6adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d6ae0:
    // 0x1d6ae0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x1d6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_1d6ae4:
    // 0x1d6ae4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1d6ae4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d6ae8:
    // 0x1d6ae8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d6aec:
    if (ctx->pc == 0x1D6AECu) {
        ctx->pc = 0x1D6AF0u;
        goto label_1d6af0;
    }
    ctx->pc = 0x1D6AE8u;
    {
        const bool branch_taken_0x1d6ae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ae8) {
            ctx->pc = 0x1D6AF8u;
            goto label_1d6af8;
        }
    }
    ctx->pc = 0x1D6AF0u;
label_1d6af0:
    // 0x1d6af0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6af4:
    // 0x1d6af4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x1d6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_1d6af8:
    // 0x1d6af8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6afc:
    // 0x1d6afc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d6afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d6b00:
    // 0x1d6b00: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x1d6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_1d6b04:
    // 0x1d6b04: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1d6b04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d6b08:
    // 0x1d6b08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d6b0c:
    if (ctx->pc == 0x1D6B0Cu) {
        ctx->pc = 0x1D6B10u;
        goto label_1d6b10;
    }
    ctx->pc = 0x1D6B08u;
    {
        const bool branch_taken_0x1d6b08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b08) {
            ctx->pc = 0x1D6B18u;
            goto label_1d6b18;
        }
    }
    ctx->pc = 0x1D6B10u;
label_1d6b10:
    // 0x1d6b10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6b14:
    // 0x1d6b14: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x1d6b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_1d6b18:
    // 0x1d6b18: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_1d6b1c:
    // 0x1d6b1c: 0x8c63f590  lw          $v1, -0xA70($v1)
    ctx->pc = 0x1d6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964624)));
label_1d6b20:
    // 0x1d6b20: 0x54600036  bnel        $v1, $zero, . + 4 + (0x36 << 2)
label_1d6b24:
    if (ctx->pc == 0x1D6B24u) {
        ctx->pc = 0x1D6B24u;
            // 0x1d6b24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1D6B28u;
        goto label_1d6b28;
    }
    ctx->pc = 0x1D6B20u;
    {
        const bool branch_taken_0x1d6b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b20) {
            ctx->pc = 0x1D6B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6B20u;
            // 0x1d6b24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6BFCu;
            goto label_1d6bfc;
        }
    }
    ctx->pc = 0x1D6B28u;
label_1d6b28:
    // 0x1d6b28: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1d6b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d6b2c:
    // 0x1d6b2c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x1d6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_1d6b30:
    // 0x1d6b30: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d6b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d6b34:
    // 0x1d6b34: 0x2484f590  addiu       $a0, $a0, -0xA70
    ctx->pc = 0x1d6b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
label_1d6b38:
    // 0x1d6b38: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d6b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d6b3c:
    // 0x1d6b3c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1d6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1d6b40:
    // 0x1d6b40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d6b44:
    // 0x1d6b44: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d6b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1d6b48:
    // 0x1d6b48: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1d6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_1d6b4c:
    // 0x1d6b4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d6b50:
    // 0x1d6b50: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1d6b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1d6b54:
    // 0x1d6b54: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1d6b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_1d6b58:
    // 0x1d6b58: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1d6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_1d6b5c:
    // 0x1d6b5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d6b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d6b60:
    // 0x1d6b60: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1d6b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1d6b64:
    // 0x1d6b64: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1d6b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_1d6b68:
    // 0x1d6b68: 0xc075128  jal         func_1D44A0
label_1d6b6c:
    if (ctx->pc == 0x1D6B6Cu) {
        ctx->pc = 0x1D6B6Cu;
            // 0x1d6b6c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x1D6B70u;
        goto label_1d6b70;
    }
    ctx->pc = 0x1D6B68u;
    SET_GPR_U32(ctx, 31, 0x1D6B70u);
    ctx->pc = 0x1D6B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6B68u;
            // 0x1d6b6c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B70u; }
        if (ctx->pc != 0x1D6B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B70u; }
        if (ctx->pc != 0x1D6B70u) { return; }
    }
    ctx->pc = 0x1D6B70u;
label_1d6b70:
    // 0x1d6b70: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x1d6b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_1d6b74:
    // 0x1d6b74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6b78:
    // 0x1d6b78: 0x8c86f590  lw          $a2, -0xA70($a0)
    ctx->pc = 0x1d6b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964624)));
label_1d6b7c:
    // 0x1d6b7c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x1d6b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_1d6b80:
    // 0x1d6b80: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x1d6b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1d6b84:
    // 0x1d6b84: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1d6b84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d6b88:
    // 0x1d6b88: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d6b8c:
    if (ctx->pc == 0x1D6B8Cu) {
        ctx->pc = 0x1D6B90u;
        goto label_1d6b90;
    }
    ctx->pc = 0x1D6B88u;
    {
        const bool branch_taken_0x1d6b88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b88) {
            ctx->pc = 0x1D6B98u;
            goto label_1d6b98;
        }
    }
    ctx->pc = 0x1D6B90u;
label_1d6b90:
    // 0x1d6b90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6b94:
    // 0x1d6b94: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x1d6b94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_1d6b98:
    // 0x1d6b98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6b9c:
    // 0x1d6b9c: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x1d6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_1d6ba0:
    // 0x1d6ba0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x1d6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_1d6ba4:
    // 0x1d6ba4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1d6ba4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d6ba8:
    // 0x1d6ba8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d6bac:
    if (ctx->pc == 0x1D6BACu) {
        ctx->pc = 0x1D6BACu;
            // 0x1d6bac: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x1D6BB0u;
        goto label_1d6bb0;
    }
    ctx->pc = 0x1D6BA8u;
    {
        const bool branch_taken_0x1d6ba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6BA8u;
            // 0x1d6bac: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ba8) {
            ctx->pc = 0x1D6BB8u;
            goto label_1d6bb8;
        }
    }
    ctx->pc = 0x1D6BB0u;
label_1d6bb0:
    // 0x1d6bb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6bb4:
    // 0x1d6bb4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x1d6bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_1d6bb8:
    // 0x1d6bb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6bbc:
    // 0x1d6bbc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d6bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d6bc0:
    // 0x1d6bc0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x1d6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_1d6bc4:
    // 0x1d6bc4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1d6bc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d6bc8:
    // 0x1d6bc8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d6bcc:
    if (ctx->pc == 0x1D6BCCu) {
        ctx->pc = 0x1D6BD0u;
        goto label_1d6bd0;
    }
    ctx->pc = 0x1D6BC8u;
    {
        const bool branch_taken_0x1d6bc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6bc8) {
            ctx->pc = 0x1D6BD8u;
            goto label_1d6bd8;
        }
    }
    ctx->pc = 0x1D6BD0u;
label_1d6bd0:
    // 0x1d6bd0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6bd4:
    // 0x1d6bd4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x1d6bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_1d6bd8:
    // 0x1d6bd8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6bdc:
    // 0x1d6bdc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d6bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d6be0:
    // 0x1d6be0: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x1d6be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_1d6be4:
    // 0x1d6be4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1d6be4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d6be8:
    // 0x1d6be8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d6bec:
    if (ctx->pc == 0x1D6BECu) {
        ctx->pc = 0x1D6BF0u;
        goto label_1d6bf0;
    }
    ctx->pc = 0x1D6BE8u;
    {
        const bool branch_taken_0x1d6be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6be8) {
            ctx->pc = 0x1D6BF8u;
            goto label_1d6bf8;
        }
    }
    ctx->pc = 0x1D6BF0u;
label_1d6bf0:
    // 0x1d6bf0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6bf4:
    // 0x1d6bf4: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x1d6bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_1d6bf8:
    // 0x1d6bf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d6bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6bfc:
    // 0x1d6bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6c00:
    // 0x1d6c00: 0x3e00008  jr          $ra
label_1d6c04:
    if (ctx->pc == 0x1D6C04u) {
        ctx->pc = 0x1D6C04u;
            // 0x1d6c04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1D6C08u;
        goto label_1d6c08;
    }
    ctx->pc = 0x1D6C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C00u;
            // 0x1d6c04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6C08u;
label_1d6c08:
    // 0x1d6c08: 0x0  nop
    ctx->pc = 0x1d6c08u;
    // NOP
label_1d6c0c:
    // 0x1d6c0c: 0x0  nop
    ctx->pc = 0x1d6c0cu;
    // NOP
label_1d6c10:
    // 0x1d6c10: 0x3e00008  jr          $ra
label_1d6c14:
    if (ctx->pc == 0x1D6C14u) {
        ctx->pc = 0x1D6C18u;
        goto label_1d6c18;
    }
    ctx->pc = 0x1D6C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6C18u;
label_1d6c18:
    // 0x1d6c18: 0x0  nop
    ctx->pc = 0x1d6c18u;
    // NOP
label_1d6c1c:
    // 0x1d6c1c: 0x0  nop
    ctx->pc = 0x1d6c1cu;
    // NOP
label_1d6c20:
    // 0x1d6c20: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d6c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1d6c24:
    // 0x1d6c24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d6c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1d6c28:
    // 0x1d6c28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d6c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d6c2c:
    // 0x1d6c2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d6c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d6c30:
    // 0x1d6c30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d6c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d6c34:
    // 0x1d6c34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d6c38:
    // 0x1d6c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d6c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d6c3c:
    // 0x1d6c3c: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1d6c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d6c40:
    // 0x1d6c40: 0x8e230e30  lw          $v1, 0xE30($s1)
    ctx->pc = 0x1d6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
label_1d6c44:
    // 0x1d6c44: 0x5060003f  beql        $v1, $zero, . + 4 + (0x3F << 2)
label_1d6c48:
    if (ctx->pc == 0x1D6C48u) {
        ctx->pc = 0x1D6C48u;
            // 0x1d6c48: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1D6C4Cu;
        goto label_1d6c4c;
    }
    ctx->pc = 0x1D6C44u;
    {
        const bool branch_taken_0x1d6c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6c44) {
            ctx->pc = 0x1D6C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C44u;
            // 0x1d6c48: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6D44u;
            goto label_1d6d44;
        }
    }
    ctx->pc = 0x1D6C4Cu;
label_1d6c4c:
    // 0x1d6c4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d6c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d6c50:
    // 0x1d6c50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d6c54:
    // 0x1d6c54: 0x8c53e370  lw          $s3, -0x1C90($v0)
    ctx->pc = 0x1d6c54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_1d6c58:
    // 0x1d6c58: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x1d6c58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_1d6c5c:
    // 0x1d6c5c: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x1d6c5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_1d6c60:
    // 0x1d6c60: 0x2610f570  addiu       $s0, $s0, -0xA90
    ctx->pc = 0x1d6c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964592));
label_1d6c64:
    // 0x1d6c64: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x1d6c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1d6c68:
    // 0x1d6c68: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1d6c6c:
    // 0x1d6c6c: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x1d6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_1d6c70:
    // 0x1d6c70: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d6c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d6c74:
    // 0x1d6c74: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1d6c78:
    // 0x1d6c78: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1d6c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1d6c7c:
    // 0x1d6c7c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x1d6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_1d6c80:
    // 0x1d6c80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d6c84:
    // 0x1d6c84: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1d6c88:
    // 0x1d6c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d6c8c:
    // 0x1d6c8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6c90:
    // 0x1d6c90: 0x320f809  jalr        $t9
label_1d6c94:
    if (ctx->pc == 0x1D6C94u) {
        ctx->pc = 0x1D6C94u;
            // 0x1d6c94: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x1D6C98u;
        goto label_1d6c98;
    }
    ctx->pc = 0x1D6C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D6C98u);
        ctx->pc = 0x1D6C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C90u;
            // 0x1d6c94: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6C98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6C98u; }
            if (ctx->pc != 0x1D6C98u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6C98u;
label_1d6c98:
    // 0x1d6c98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d6c9c:
    // 0x1d6c9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d6c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1d6ca0:
    // 0x1d6ca0: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1d6ca0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
label_1d6ca4:
    // 0x1d6ca4: 0xc04f3fc  jal         func_13CFF0
label_1d6ca8:
    if (ctx->pc == 0x1D6CA8u) {
        ctx->pc = 0x1D6CA8u;
            // 0x1d6ca8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1D6CACu;
        goto label_1d6cac;
    }
    ctx->pc = 0x1D6CA4u;
    SET_GPR_U32(ctx, 31, 0x1D6CACu);
    ctx->pc = 0x1D6CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6CA4u;
            // 0x1d6ca8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CACu; }
        if (ctx->pc != 0x1D6CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CACu; }
        if (ctx->pc != 0x1D6CACu) { return; }
    }
    ctx->pc = 0x1D6CACu;
label_1d6cac:
    // 0x1d6cac: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x1d6cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_1d6cb0:
    // 0x1d6cb0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1d6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1d6cb4:
    // 0x1d6cb4: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
label_1d6cb8:
    if (ctx->pc == 0x1D6CB8u) {
        ctx->pc = 0x1D6CBCu;
        goto label_1d6cbc;
    }
    ctx->pc = 0x1D6CB4u;
    {
        const bool branch_taken_0x1d6cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d6cb4) {
            ctx->pc = 0x1D6D40u;
            goto label_1d6d40;
        }
    }
    ctx->pc = 0x1D6CBCu;
label_1d6cbc:
    // 0x1d6cbc: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x1d6cbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_1d6cc0:
    // 0x1d6cc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d6cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d6cc4:
    // 0x1d6cc4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d6cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d6cc8:
    // 0x1d6cc8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1d6cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1d6ccc:
    // 0x1d6ccc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d6cd0:
    // 0x1d6cd0: 0xc04cd60  jal         func_133580
label_1d6cd4:
    if (ctx->pc == 0x1D6CD4u) {
        ctx->pc = 0x1D6CD4u;
            // 0x1d6cd4: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x1D6CD8u;
        goto label_1d6cd8;
    }
    ctx->pc = 0x1D6CD0u;
    SET_GPR_U32(ctx, 31, 0x1D6CD8u);
    ctx->pc = 0x1D6CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6CD0u;
            // 0x1d6cd4: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CD8u; }
        if (ctx->pc != 0x1D6CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CD8u; }
        if (ctx->pc != 0x1D6CD8u) { return; }
    }
    ctx->pc = 0x1D6CD8u;
label_1d6cd8:
    // 0x1d6cd8: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x1d6cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6cdc:
    // 0x1d6cdc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d6cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6ce0:
    // 0x1d6ce0: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1d6ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d6ce4:
    // 0x1d6ce4: 0xc054bbc  jal         func_152EF0
label_1d6ce8:
    if (ctx->pc == 0x1D6CE8u) {
        ctx->pc = 0x1D6CE8u;
            // 0x1d6ce8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x1D6CECu;
        goto label_1d6cec;
    }
    ctx->pc = 0x1D6CE4u;
    SET_GPR_U32(ctx, 31, 0x1D6CECu);
    ctx->pc = 0x1D6CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6CE4u;
            // 0x1d6ce8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CECu; }
        if (ctx->pc != 0x1D6CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CECu; }
        if (ctx->pc != 0x1D6CECu) { return; }
    }
    ctx->pc = 0x1D6CECu;
label_1d6cec:
    // 0x1d6cec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6cf0:
    // 0x1d6cf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d6cf4:
    // 0x1d6cf4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1d6cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1d6cf8:
    // 0x1d6cf8: 0xc04e4a4  jal         func_139290
label_1d6cfc:
    if (ctx->pc == 0x1D6CFCu) {
        ctx->pc = 0x1D6CFCu;
            // 0x1d6cfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D00u;
        goto label_1d6d00;
    }
    ctx->pc = 0x1D6CF8u;
    SET_GPR_U32(ctx, 31, 0x1D6D00u);
    ctx->pc = 0x1D6CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6CF8u;
            // 0x1d6cfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D00u; }
        if (ctx->pc != 0x1D6D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D00u; }
        if (ctx->pc != 0x1D6D00u) { return; }
    }
    ctx->pc = 0x1D6D00u;
label_1d6d00:
    // 0x1d6d00: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d6d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6d04:
    // 0x1d6d04: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x1d6d04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_1d6d08:
    // 0x1d6d08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d0c:
    // 0x1d6d0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d6d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d10:
    // 0x1d6d10: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1d6d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d6d14:
    // 0x1d6d14: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x1d6d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_1d6d18:
    // 0x1d6d18: 0xc04cfcc  jal         func_133F30
label_1d6d1c:
    if (ctx->pc == 0x1D6D1Cu) {
        ctx->pc = 0x1D6D1Cu;
            // 0x1d6d1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D20u;
        goto label_1d6d20;
    }
    ctx->pc = 0x1D6D18u;
    SET_GPR_U32(ctx, 31, 0x1D6D20u);
    ctx->pc = 0x1D6D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D18u;
            // 0x1d6d1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D20u; }
        if (ctx->pc != 0x1D6D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D20u; }
        if (ctx->pc != 0x1D6D20u) { return; }
    }
    ctx->pc = 0x1D6D20u;
label_1d6d20:
    // 0x1d6d20: 0xc04e738  jal         func_139CE0
label_1d6d24:
    if (ctx->pc == 0x1D6D24u) {
        ctx->pc = 0x1D6D24u;
            // 0x1d6d24: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1D6D28u;
        goto label_1d6d28;
    }
    ctx->pc = 0x1D6D20u;
    SET_GPR_U32(ctx, 31, 0x1D6D28u);
    ctx->pc = 0x1D6D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D20u;
            // 0x1d6d24: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D28u; }
        if (ctx->pc != 0x1D6D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D28u; }
        if (ctx->pc != 0x1D6D28u) { return; }
    }
    ctx->pc = 0x1D6D28u;
label_1d6d28:
    // 0x1d6d28: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1d6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d6d2c:
    // 0x1d6d2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d6d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d30:
    // 0x1d6d30: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d6d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d34:
    // 0x1d6d34: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1d6d34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_1d6d38:
    // 0x1d6d38: 0xc054c2c  jal         func_1530B0
label_1d6d3c:
    if (ctx->pc == 0x1D6D3Cu) {
        ctx->pc = 0x1D6D3Cu;
            // 0x1d6d3c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1D6D40u;
        goto label_1d6d40;
    }
    ctx->pc = 0x1D6D38u;
    SET_GPR_U32(ctx, 31, 0x1D6D40u);
    ctx->pc = 0x1D6D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D38u;
            // 0x1d6d3c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D40u; }
        if (ctx->pc != 0x1D6D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D40u; }
        if (ctx->pc != 0x1D6D40u) { return; }
    }
    ctx->pc = 0x1D6D40u;
label_1d6d40:
    // 0x1d6d40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d6d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d6d44:
    // 0x1d6d44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d6d44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d6d48:
    // 0x1d6d48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d6d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d6d4c:
    // 0x1d6d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d6d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6d50:
    // 0x1d6d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6d54:
    // 0x1d6d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6d58:
    // 0x1d6d58: 0x3e00008  jr          $ra
label_1d6d5c:
    if (ctx->pc == 0x1D6D5Cu) {
        ctx->pc = 0x1D6D5Cu;
            // 0x1d6d5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1D6D60u;
        goto label_1d6d60;
    }
    ctx->pc = 0x1D6D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D58u;
            // 0x1d6d5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6D60u;
label_1d6d60:
    // 0x1d6d60: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1d6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1d6d64:
    // 0x1d6d64: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1d6d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6d68:
    // 0x1d6d68: 0xc440c608  lwc1        $f0, -0x39F8($v0)
    ctx->pc = 0x1d6d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6d6c:
    // 0x1d6d6c: 0x3e00008  jr          $ra
label_1d6d70:
    if (ctx->pc == 0x1D6D70u) {
        ctx->pc = 0x1D6D70u;
            // 0x1d6d70: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1D6D74u;
        goto label_1d6d74;
    }
    ctx->pc = 0x1D6D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D6Cu;
            // 0x1d6d70: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6D74u;
label_1d6d74:
    // 0x1d6d74: 0x0  nop
    ctx->pc = 0x1d6d74u;
    // NOP
label_1d6d78:
    // 0x1d6d78: 0x0  nop
    ctx->pc = 0x1d6d78u;
    // NOP
label_1d6d7c:
    // 0x1d6d7c: 0x0  nop
    ctx->pc = 0x1d6d7cu;
    // NOP
label_1d6d80:
    // 0x1d6d80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d6d84:
    // 0x1d6d84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d6d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d6d88:
    // 0x1d6d88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d6d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d6d8c:
    // 0x1d6d8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d6d90:
    // 0x1d6d90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d6d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d6d94:
    // 0x1d6d94: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1d6d94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d6d98:
    // 0x1d6d98: 0x8e030e30  lw          $v1, 0xE30($s0)
    ctx->pc = 0x1d6d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3632)));
label_1d6d9c:
    // 0x1d6d9c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_1d6da0:
    if (ctx->pc == 0x1D6DA0u) {
        ctx->pc = 0x1D6DA0u;
            // 0x1d6da0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DA4u;
        goto label_1d6da4;
    }
    ctx->pc = 0x1D6D9Cu;
    {
        const bool branch_taken_0x1d6d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D9Cu;
            // 0x1d6da0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d9c) {
            ctx->pc = 0x1D6E10u;
            goto label_1d6e10;
        }
    }
    ctx->pc = 0x1D6DA4u;
label_1d6da4:
    // 0x1d6da4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1d6da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1d6da8:
    // 0x1d6da8: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x1d6da8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_1d6dac:
    // 0x1d6dac: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x1d6dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_1d6db0:
    // 0x1d6db0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x1d6db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_1d6db4:
    // 0x1d6db4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_1d6db8:
    // 0x1d6db8: 0xc460f58c  lwc1        $f0, -0xA74($v1)
    ctx->pc = 0x1d6db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6dbc:
    // 0x1d6dbc: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1d6dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6dc0:
    // 0x1d6dc0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d6dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_1d6dc4:
    // 0x1d6dc4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1d6dc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d6dc8:
    // 0x1d6dc8: 0x8c63f584  lw          $v1, -0xA7C($v1)
    ctx->pc = 0x1d6dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964612)));
label_1d6dcc:
    // 0x1d6dcc: 0xe481f58c  swc1        $f1, -0xA74($a0)
    ctx->pc = 0x1d6dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964620), bits); }
label_1d6dd0:
    // 0x1d6dd0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d6dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6dd4:
    // 0x1d6dd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d6dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6dd8:
    // 0x1d6dd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d6ddc:
    if (ctx->pc == 0x1D6DDCu) {
        ctx->pc = 0x1D6DDCu;
            // 0x1d6ddc: 0x24c6f570  addiu       $a2, $a2, -0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964592));
        ctx->pc = 0x1D6DE0u;
        goto label_1d6de0;
    }
    ctx->pc = 0x1D6DD8u;
    {
        const bool branch_taken_0x1d6dd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DD8u;
            // 0x1d6ddc: 0x24c6f570  addiu       $a2, $a2, -0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6dd8) {
            ctx->pc = 0x1D6DE4u;
            goto label_1d6de4;
        }
    }
    ctx->pc = 0x1D6DE0u;
label_1d6de0:
    // 0x1d6de0: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x1d6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_1d6de4:
    // 0x1d6de4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d6de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d6de8:
    // 0x1d6de8: 0x8c630d74  lw          $v1, 0xD74($v1)
    ctx->pc = 0x1d6de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3444)));
label_1d6dec:
    // 0x1d6dec: 0x906302c4  lbu         $v1, 0x2C4($v1)
    ctx->pc = 0x1d6decu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 708)));
label_1d6df0:
    // 0x1d6df0: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_1d6df4:
    if (ctx->pc == 0x1D6DF4u) {
        ctx->pc = 0x1D6DF4u;
            // 0x1d6df4: 0xc6010e1c  lwc1        $f1, 0xE1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1D6DF8u;
        goto label_1d6df8;
    }
    ctx->pc = 0x1D6DF0u;
    {
        const bool branch_taken_0x1d6df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6df0) {
            ctx->pc = 0x1D6DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DF0u;
            // 0x1d6df4: 0xc6010e1c  lwc1        $f1, 0xE1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6E14u;
            goto label_1d6e14;
        }
    }
    ctx->pc = 0x1D6DF8u;
label_1d6df8:
    // 0x1d6df8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1d6dfc:
    // 0x1d6dfc: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1d6dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1d6e00:
    // 0x1d6e00: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x1d6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_1d6e04:
    // 0x1d6e04: 0xc057b7c  jal         func_15EDF0
label_1d6e08:
    if (ctx->pc == 0x1D6E08u) {
        ctx->pc = 0x1D6E08u;
            // 0x1d6e08: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1D6E0Cu;
        goto label_1d6e0c;
    }
    ctx->pc = 0x1D6E04u;
    SET_GPR_U32(ctx, 31, 0x1D6E0Cu);
    ctx->pc = 0x1D6E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E04u;
            // 0x1d6e08: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E0Cu; }
        if (ctx->pc != 0x1D6E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E0Cu; }
        if (ctx->pc != 0x1D6E0Cu) { return; }
    }
    ctx->pc = 0x1D6E0Cu;
label_1d6e0c:
    // 0x1d6e0c: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1d6e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_1d6e10:
    // 0x1d6e10: 0xc6010e1c  lwc1        $f1, 0xE1C($s0)
    ctx->pc = 0x1d6e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6e14:
    // 0x1d6e14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6e14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6e18:
    // 0x1d6e18: 0x0  nop
    ctx->pc = 0x1d6e18u;
    // NOP
label_1d6e1c:
    // 0x1d6e1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d6e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6e20:
    // 0x1d6e20: 0x45030038  bc1tl       . + 4 + (0x38 << 2)
label_1d6e24:
    if (ctx->pc == 0x1D6E24u) {
        ctx->pc = 0x1D6E24u;
            // 0x1d6e24: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1D6E28u;
        goto label_1d6e28;
    }
    ctx->pc = 0x1D6E20u;
    {
        const bool branch_taken_0x1d6e20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6e20) {
            ctx->pc = 0x1D6E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E20u;
            // 0x1d6e24: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6F04u;
            goto label_1d6f04;
        }
    }
    ctx->pc = 0x1D6E28u;
label_1d6e28:
    // 0x1d6e28: 0x820511ad  lb          $a1, 0x11AD($s0)
    ctx->pc = 0x1d6e28u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4525)));
label_1d6e2c:
    // 0x1d6e2c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x1d6e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_1d6e30:
    // 0x1d6e30: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x1d6e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_1d6e34:
    // 0x1d6e34: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x1d6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_1d6e38:
    // 0x1d6e38: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1d6e38u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d6e3c:
    // 0x1d6e3c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d6e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d6e40:
    // 0x1d6e40: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d6e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d6e44:
    // 0x1d6e44: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1d6e44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d6e48:
    // 0x1d6e48: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1d6e4c:
    if (ctx->pc == 0x1D6E4Cu) {
        ctx->pc = 0x1D6E4Cu;
            // 0x1d6e4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E50u;
        goto label_1d6e50;
    }
    ctx->pc = 0x1D6E48u;
    {
        const bool branch_taken_0x1d6e48 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D6E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E48u;
            // 0x1d6e4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e48) {
            ctx->pc = 0x1D6E60u;
            goto label_1d6e60;
        }
    }
    ctx->pc = 0x1D6E50u;
label_1d6e50:
    // 0x1d6e50: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1d6e50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d6e54:
    // 0x1d6e54: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d6e58:
    if (ctx->pc == 0x1D6E58u) {
        ctx->pc = 0x1D6E5Cu;
        goto label_1d6e5c;
    }
    ctx->pc = 0x1D6E54u;
    {
        const bool branch_taken_0x1d6e54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e54) {
            ctx->pc = 0x1D6E60u;
            goto label_1d6e60;
        }
    }
    ctx->pc = 0x1D6E5Cu;
label_1d6e5c:
    // 0x1d6e5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d6e60:
    // 0x1d6e60: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_1d6e64:
    if (ctx->pc == 0x1D6E64u) {
        ctx->pc = 0x1D6E68u;
        goto label_1d6e68;
    }
    ctx->pc = 0x1D6E60u;
    {
        const bool branch_taken_0x1d6e60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e60) {
            ctx->pc = 0x1D6E7Cu;
            goto label_1d6e7c;
        }
    }
    ctx->pc = 0x1D6E68u;
label_1d6e68:
    // 0x1d6e68: 0xc075eb4  jal         func_1D7AD0
label_1d6e6c:
    if (ctx->pc == 0x1D6E6Cu) {
        ctx->pc = 0x1D6E6Cu;
            // 0x1d6e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E70u;
        goto label_1d6e70;
    }
    ctx->pc = 0x1D6E68u;
    SET_GPR_U32(ctx, 31, 0x1D6E70u);
    ctx->pc = 0x1D6E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E68u;
            // 0x1d6e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E70u; }
        if (ctx->pc != 0x1D6E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E70u; }
        if (ctx->pc != 0x1D6E70u) { return; }
    }
    ctx->pc = 0x1D6E70u;
label_1d6e70:
    // 0x1d6e70: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1d6e74:
    if (ctx->pc == 0x1D6E74u) {
        ctx->pc = 0x1D6E78u;
        goto label_1d6e78;
    }
    ctx->pc = 0x1D6E70u;
    {
        const bool branch_taken_0x1d6e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e70) {
            ctx->pc = 0x1D6E7Cu;
            goto label_1d6e7c;
        }
    }
    ctx->pc = 0x1D6E78u;
label_1d6e78:
    // 0x1d6e78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d6e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6e7c:
    // 0x1d6e7c: 0x5620001b  bnel        $s1, $zero, . + 4 + (0x1B << 2)
label_1d6e80:
    if (ctx->pc == 0x1D6E80u) {
        ctx->pc = 0x1D6E80u;
            // 0x1d6e80: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->pc = 0x1D6E84u;
        goto label_1d6e84;
    }
    ctx->pc = 0x1D6E7Cu;
    {
        const bool branch_taken_0x1d6e7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e7c) {
            ctx->pc = 0x1D6E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E7Cu;
            // 0x1d6e80: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6EECu;
            goto label_1d6eec;
        }
    }
    ctx->pc = 0x1D6E84u;
label_1d6e84:
    // 0x1d6e84: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x1d6e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_1d6e88:
    // 0x1d6e88: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d6e8c:
    // 0x1d6e8c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_1d6e90:
    if (ctx->pc == 0x1D6E90u) {
        ctx->pc = 0x1D6E94u;
        goto label_1d6e94;
    }
    ctx->pc = 0x1D6E8Cu;
    {
        const bool branch_taken_0x1d6e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6e8c) {
            ctx->pc = 0x1D6EE8u;
            goto label_1d6ee8;
        }
    }
    ctx->pc = 0x1D6E94u;
label_1d6e94:
    // 0x1d6e94: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x1d6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_1d6e98:
    // 0x1d6e98: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1d6e98u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d6e9c:
    // 0x1d6e9c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1d6ea0:
    if (ctx->pc == 0x1D6EA0u) {
        ctx->pc = 0x1D6EA0u;
            // 0x1d6ea0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6EA4u;
        goto label_1d6ea4;
    }
    ctx->pc = 0x1D6E9Cu;
    {
        const bool branch_taken_0x1d6e9c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D6EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E9Cu;
            // 0x1d6ea0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e9c) {
            ctx->pc = 0x1D6EB4u;
            goto label_1d6eb4;
        }
    }
    ctx->pc = 0x1D6EA4u;
label_1d6ea4:
    // 0x1d6ea4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1d6ea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d6ea8:
    // 0x1d6ea8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d6eac:
    if (ctx->pc == 0x1D6EACu) {
        ctx->pc = 0x1D6EB0u;
        goto label_1d6eb0;
    }
    ctx->pc = 0x1D6EA8u;
    {
        const bool branch_taken_0x1d6ea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ea8) {
            ctx->pc = 0x1D6EB4u;
            goto label_1d6eb4;
        }
    }
    ctx->pc = 0x1D6EB0u;
label_1d6eb0:
    // 0x1d6eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d6eb4:
    // 0x1d6eb4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1d6eb8:
    if (ctx->pc == 0x1D6EB8u) {
        ctx->pc = 0x1D6EBCu;
        goto label_1d6ebc;
    }
    ctx->pc = 0x1D6EB4u;
    {
        const bool branch_taken_0x1d6eb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6eb4) {
            ctx->pc = 0x1D6ED0u;
            goto label_1d6ed0;
        }
    }
    ctx->pc = 0x1D6EBCu;
label_1d6ebc:
    // 0x1d6ebc: 0xc075eb4  jal         func_1D7AD0
label_1d6ec0:
    if (ctx->pc == 0x1D6EC0u) {
        ctx->pc = 0x1D6EC0u;
            // 0x1d6ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6EC4u;
        goto label_1d6ec4;
    }
    ctx->pc = 0x1D6EBCu;
    SET_GPR_U32(ctx, 31, 0x1D6EC4u);
    ctx->pc = 0x1D6EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6EBCu;
            // 0x1d6ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6EC4u; }
        if (ctx->pc != 0x1D6EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6EC4u; }
        if (ctx->pc != 0x1D6EC4u) { return; }
    }
    ctx->pc = 0x1D6EC4u;
label_1d6ec4:
    // 0x1d6ec4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1d6ec8:
    if (ctx->pc == 0x1D6EC8u) {
        ctx->pc = 0x1D6ECCu;
        goto label_1d6ecc;
    }
    ctx->pc = 0x1D6EC4u;
    {
        const bool branch_taken_0x1d6ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ec4) {
            ctx->pc = 0x1D6ED0u;
            goto label_1d6ed0;
        }
    }
    ctx->pc = 0x1D6ECCu;
label_1d6ecc:
    // 0x1d6ecc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d6eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6ed0:
    // 0x1d6ed0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1d6ed4:
    if (ctx->pc == 0x1D6ED4u) {
        ctx->pc = 0x1D6ED8u;
        goto label_1d6ed8;
    }
    ctx->pc = 0x1D6ED0u;
    {
        const bool branch_taken_0x1d6ed0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ed0) {
            ctx->pc = 0x1D6EE8u;
            goto label_1d6ee8;
        }
    }
    ctx->pc = 0x1D6ED8u;
label_1d6ed8:
    // 0x1d6ed8: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x1d6ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_1d6edc:
    // 0x1d6edc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d6ee0:
    // 0x1d6ee0: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_1d6ee4:
    if (ctx->pc == 0x1D6EE4u) {
        ctx->pc = 0x1D6EE4u;
            // 0x1d6ee4: 0xae000e1c  sw          $zero, 0xE1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3612), GPR_U32(ctx, 0));
        ctx->pc = 0x1D6EE8u;
        goto label_1d6ee8;
    }
    ctx->pc = 0x1D6EE0u;
    {
        const bool branch_taken_0x1d6ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d6ee0) {
            ctx->pc = 0x1D6EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6EE0u;
            // 0x1d6ee4: 0xae000e1c  sw          $zero, 0xE1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6EF8u;
            goto label_1d6ef8;
        }
    }
    ctx->pc = 0x1D6EE8u;
label_1d6ee8:
    // 0x1d6ee8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1d6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_1d6eec:
    // 0x1d6eec: 0xc073234  jal         func_1CC8D0
label_1d6ef0:
    if (ctx->pc == 0x1D6EF0u) {
        ctx->pc = 0x1D6EF0u;
            // 0x1d6ef0: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1D6EF4u;
        goto label_1d6ef4;
    }
    ctx->pc = 0x1D6EECu;
    SET_GPR_U32(ctx, 31, 0x1D6EF4u);
    ctx->pc = 0x1D6EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6EECu;
            // 0x1d6ef0: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6EF4u; }
        if (ctx->pc != 0x1D6EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6EF4u; }
        if (ctx->pc != 0x1D6EF4u) { return; }
    }
    ctx->pc = 0x1D6EF4u;
label_1d6ef4:
    // 0x1d6ef4: 0xae000e1c  sw          $zero, 0xE1C($s0)
    ctx->pc = 0x1d6ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3612), GPR_U32(ctx, 0));
label_1d6ef8:
    // 0x1d6ef8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d6ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d6efc:
    // 0x1d6efc: 0xa20311ad  sb          $v1, 0x11AD($s0)
    ctx->pc = 0x1d6efcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4525), (uint8_t)GPR_U32(ctx, 3));
label_1d6f00:
    // 0x1d6f00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d6f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d6f04:
    // 0x1d6f04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d6f04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6f08:
    // 0x1d6f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6f0c:
    // 0x1d6f0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6f10:
    // 0x1d6f10: 0x3e00008  jr          $ra
label_1d6f14:
    if (ctx->pc == 0x1D6F14u) {
        ctx->pc = 0x1D6F14u;
            // 0x1d6f14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1D6F18u;
        goto label_1d6f18;
    }
    ctx->pc = 0x1D6F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F10u;
            // 0x1d6f14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6F18u;
label_1d6f18:
    // 0x1d6f18: 0x0  nop
    ctx->pc = 0x1d6f18u;
    // NOP
label_1d6f1c:
    // 0x1d6f1c: 0x0  nop
    ctx->pc = 0x1d6f1cu;
    // NOP
label_1d6f20:
    // 0x1d6f20: 0x3e00008  jr          $ra
label_1d6f24:
    if (ctx->pc == 0x1D6F24u) {
        ctx->pc = 0x1D6F28u;
        goto label_1d6f28;
    }
    ctx->pc = 0x1D6F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6F28u;
label_1d6f28:
    // 0x1d6f28: 0x0  nop
    ctx->pc = 0x1d6f28u;
    // NOP
label_1d6f2c:
    // 0x1d6f2c: 0x0  nop
    ctx->pc = 0x1d6f2cu;
    // NOP
label_1d6f30:
    // 0x1d6f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d6f34:
    // 0x1d6f34: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1d6f38:
    // 0x1d6f38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d6f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d6f3c:
    // 0x1d6f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d6f40:
    // 0x1d6f40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d6f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d6f44:
    // 0x1d6f44: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d6f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d6f48:
    // 0x1d6f48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d6f4c:
    // 0x1d6f4c: 0x8c640d60  lw          $a0, 0xD60($v1)
    ctx->pc = 0x1d6f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3424)));
label_1d6f50:
    // 0x1d6f50: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1d6f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1d6f54:
    // 0x1d6f54: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d6f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d6f58:
    // 0x1d6f58: 0x320f809  jalr        $t9
label_1d6f5c:
    if (ctx->pc == 0x1D6F5Cu) {
        ctx->pc = 0x1D6F5Cu;
            // 0x1d6f5c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1D6F60u;
        goto label_1d6f60;
    }
    ctx->pc = 0x1D6F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D6F60u);
        ctx->pc = 0x1D6F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F58u;
            // 0x1d6f5c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6F60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F60u; }
            if (ctx->pc != 0x1D6F60u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6F60u;
label_1d6f60:
    // 0x1d6f60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d6f64:
    // 0x1d6f64: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1d6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1d6f68:
    // 0x1d6f68: 0xc12ca3c  jal         func_4B28F0
label_1d6f6c:
    if (ctx->pc == 0x1D6F6Cu) {
        ctx->pc = 0x1D6F6Cu;
            // 0x1d6f6c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x1D6F70u;
        goto label_1d6f70;
    }
    ctx->pc = 0x1D6F68u;
    SET_GPR_U32(ctx, 31, 0x1D6F70u);
    ctx->pc = 0x1D6F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F68u;
            // 0x1d6f6c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F70u; }
        if (ctx->pc != 0x1D6F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F70u; }
        if (ctx->pc != 0x1D6F70u) { return; }
    }
    ctx->pc = 0x1D6F70u;
label_1d6f70:
    // 0x1d6f70: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1d6f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1d6f74:
    // 0x1d6f74: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_1d6f78:
    if (ctx->pc == 0x1D6F78u) {
        ctx->pc = 0x1D6F78u;
            // 0x1d6f78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1D6F7Cu;
        goto label_1d6f7c;
    }
    ctx->pc = 0x1D6F74u;
    {
        const bool branch_taken_0x1d6f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f74) {
            ctx->pc = 0x1D6F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F74u;
            // 0x1d6f78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6FC8u;
            goto label_1d6fc8;
        }
    }
    ctx->pc = 0x1D6F7Cu;
label_1d6f7c:
    // 0x1d6f7c: 0xc040180  jal         func_100600
label_1d6f80:
    if (ctx->pc == 0x1D6F80u) {
        ctx->pc = 0x1D6F80u;
            // 0x1d6f80: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x1D6F84u;
        goto label_1d6f84;
    }
    ctx->pc = 0x1D6F7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6F84u);
    ctx->pc = 0x1D6F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F7Cu;
            // 0x1d6f80: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F84u; }
        if (ctx->pc != 0x1D6F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F84u; }
        if (ctx->pc != 0x1D6F84u) { return; }
    }
    ctx->pc = 0x1D6F84u;
label_1d6f84:
    // 0x1d6f84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1d6f88:
    if (ctx->pc == 0x1D6F88u) {
        ctx->pc = 0x1D6F88u;
            // 0x1d6f88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F8Cu;
        goto label_1d6f8c;
    }
    ctx->pc = 0x1D6F84u;
    {
        const bool branch_taken_0x1d6f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F84u;
            // 0x1d6f88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f84) {
            ctx->pc = 0x1D6FC0u;
            goto label_1d6fc0;
        }
    }
    ctx->pc = 0x1D6F8Cu;
label_1d6f8c:
    // 0x1d6f8c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1d6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1d6f90:
    // 0x1d6f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d6f94:
    // 0x1d6f94: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x1d6f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_1d6f98:
    // 0x1d6f98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d6f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6f9c:
    // 0x1d6f9c: 0xc10ca68  jal         func_4329A0
label_1d6fa0:
    if (ctx->pc == 0x1D6FA0u) {
        ctx->pc = 0x1D6FA0u;
            // 0x1d6fa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FA4u;
        goto label_1d6fa4;
    }
    ctx->pc = 0x1D6F9Cu;
    SET_GPR_U32(ctx, 31, 0x1D6FA4u);
    ctx->pc = 0x1D6FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F9Cu;
            // 0x1d6fa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FA4u; }
        if (ctx->pc != 0x1D6FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FA4u; }
        if (ctx->pc != 0x1D6FA4u) { return; }
    }
    ctx->pc = 0x1D6FA4u;
label_1d6fa4:
    // 0x1d6fa4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d6fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1d6fa8:
    // 0x1d6fa8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1d6fac:
    // 0x1d6fac: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x1d6facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_1d6fb0:
    // 0x1d6fb0: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x1d6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_1d6fb4:
    // 0x1d6fb4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1d6fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1d6fb8:
    // 0x1d6fb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1d6fbc:
    // 0x1d6fbc: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x1d6fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_1d6fc0:
    // 0x1d6fc0: 0xae110060  sw          $s1, 0x60($s0)
    ctx->pc = 0x1d6fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
label_1d6fc4:
    // 0x1d6fc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d6fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6fc8:
    // 0x1d6fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6fcc:
    // 0x1d6fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6fd0:
    // 0x1d6fd0: 0x3e00008  jr          $ra
label_1d6fd4:
    if (ctx->pc == 0x1D6FD4u) {
        ctx->pc = 0x1D6FD4u;
            // 0x1d6fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D6FD8u;
        goto label_1d6fd8;
    }
    ctx->pc = 0x1D6FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6FD0u;
            // 0x1d6fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6FD8u;
label_1d6fd8:
    // 0x1d6fd8: 0x0  nop
    ctx->pc = 0x1d6fd8u;
    // NOP
label_1d6fdc:
    // 0x1d6fdc: 0x0  nop
    ctx->pc = 0x1d6fdcu;
    // NOP
}
