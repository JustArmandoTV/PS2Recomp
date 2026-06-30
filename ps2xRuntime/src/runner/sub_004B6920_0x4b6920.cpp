#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B6920
// Address: 0x4b6920 - 0x4b6fe0
void sub_004B6920_0x4b6920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6920_0x4b6920");
#endif

    switch (ctx->pc) {
        case 0x4b6920u: goto label_4b6920;
        case 0x4b6924u: goto label_4b6924;
        case 0x4b6928u: goto label_4b6928;
        case 0x4b692cu: goto label_4b692c;
        case 0x4b6930u: goto label_4b6930;
        case 0x4b6934u: goto label_4b6934;
        case 0x4b6938u: goto label_4b6938;
        case 0x4b693cu: goto label_4b693c;
        case 0x4b6940u: goto label_4b6940;
        case 0x4b6944u: goto label_4b6944;
        case 0x4b6948u: goto label_4b6948;
        case 0x4b694cu: goto label_4b694c;
        case 0x4b6950u: goto label_4b6950;
        case 0x4b6954u: goto label_4b6954;
        case 0x4b6958u: goto label_4b6958;
        case 0x4b695cu: goto label_4b695c;
        case 0x4b6960u: goto label_4b6960;
        case 0x4b6964u: goto label_4b6964;
        case 0x4b6968u: goto label_4b6968;
        case 0x4b696cu: goto label_4b696c;
        case 0x4b6970u: goto label_4b6970;
        case 0x4b6974u: goto label_4b6974;
        case 0x4b6978u: goto label_4b6978;
        case 0x4b697cu: goto label_4b697c;
        case 0x4b6980u: goto label_4b6980;
        case 0x4b6984u: goto label_4b6984;
        case 0x4b6988u: goto label_4b6988;
        case 0x4b698cu: goto label_4b698c;
        case 0x4b6990u: goto label_4b6990;
        case 0x4b6994u: goto label_4b6994;
        case 0x4b6998u: goto label_4b6998;
        case 0x4b699cu: goto label_4b699c;
        case 0x4b69a0u: goto label_4b69a0;
        case 0x4b69a4u: goto label_4b69a4;
        case 0x4b69a8u: goto label_4b69a8;
        case 0x4b69acu: goto label_4b69ac;
        case 0x4b69b0u: goto label_4b69b0;
        case 0x4b69b4u: goto label_4b69b4;
        case 0x4b69b8u: goto label_4b69b8;
        case 0x4b69bcu: goto label_4b69bc;
        case 0x4b69c0u: goto label_4b69c0;
        case 0x4b69c4u: goto label_4b69c4;
        case 0x4b69c8u: goto label_4b69c8;
        case 0x4b69ccu: goto label_4b69cc;
        case 0x4b69d0u: goto label_4b69d0;
        case 0x4b69d4u: goto label_4b69d4;
        case 0x4b69d8u: goto label_4b69d8;
        case 0x4b69dcu: goto label_4b69dc;
        case 0x4b69e0u: goto label_4b69e0;
        case 0x4b69e4u: goto label_4b69e4;
        case 0x4b69e8u: goto label_4b69e8;
        case 0x4b69ecu: goto label_4b69ec;
        case 0x4b69f0u: goto label_4b69f0;
        case 0x4b69f4u: goto label_4b69f4;
        case 0x4b69f8u: goto label_4b69f8;
        case 0x4b69fcu: goto label_4b69fc;
        case 0x4b6a00u: goto label_4b6a00;
        case 0x4b6a04u: goto label_4b6a04;
        case 0x4b6a08u: goto label_4b6a08;
        case 0x4b6a0cu: goto label_4b6a0c;
        case 0x4b6a10u: goto label_4b6a10;
        case 0x4b6a14u: goto label_4b6a14;
        case 0x4b6a18u: goto label_4b6a18;
        case 0x4b6a1cu: goto label_4b6a1c;
        case 0x4b6a20u: goto label_4b6a20;
        case 0x4b6a24u: goto label_4b6a24;
        case 0x4b6a28u: goto label_4b6a28;
        case 0x4b6a2cu: goto label_4b6a2c;
        case 0x4b6a30u: goto label_4b6a30;
        case 0x4b6a34u: goto label_4b6a34;
        case 0x4b6a38u: goto label_4b6a38;
        case 0x4b6a3cu: goto label_4b6a3c;
        case 0x4b6a40u: goto label_4b6a40;
        case 0x4b6a44u: goto label_4b6a44;
        case 0x4b6a48u: goto label_4b6a48;
        case 0x4b6a4cu: goto label_4b6a4c;
        case 0x4b6a50u: goto label_4b6a50;
        case 0x4b6a54u: goto label_4b6a54;
        case 0x4b6a58u: goto label_4b6a58;
        case 0x4b6a5cu: goto label_4b6a5c;
        case 0x4b6a60u: goto label_4b6a60;
        case 0x4b6a64u: goto label_4b6a64;
        case 0x4b6a68u: goto label_4b6a68;
        case 0x4b6a6cu: goto label_4b6a6c;
        case 0x4b6a70u: goto label_4b6a70;
        case 0x4b6a74u: goto label_4b6a74;
        case 0x4b6a78u: goto label_4b6a78;
        case 0x4b6a7cu: goto label_4b6a7c;
        case 0x4b6a80u: goto label_4b6a80;
        case 0x4b6a84u: goto label_4b6a84;
        case 0x4b6a88u: goto label_4b6a88;
        case 0x4b6a8cu: goto label_4b6a8c;
        case 0x4b6a90u: goto label_4b6a90;
        case 0x4b6a94u: goto label_4b6a94;
        case 0x4b6a98u: goto label_4b6a98;
        case 0x4b6a9cu: goto label_4b6a9c;
        case 0x4b6aa0u: goto label_4b6aa0;
        case 0x4b6aa4u: goto label_4b6aa4;
        case 0x4b6aa8u: goto label_4b6aa8;
        case 0x4b6aacu: goto label_4b6aac;
        case 0x4b6ab0u: goto label_4b6ab0;
        case 0x4b6ab4u: goto label_4b6ab4;
        case 0x4b6ab8u: goto label_4b6ab8;
        case 0x4b6abcu: goto label_4b6abc;
        case 0x4b6ac0u: goto label_4b6ac0;
        case 0x4b6ac4u: goto label_4b6ac4;
        case 0x4b6ac8u: goto label_4b6ac8;
        case 0x4b6accu: goto label_4b6acc;
        case 0x4b6ad0u: goto label_4b6ad0;
        case 0x4b6ad4u: goto label_4b6ad4;
        case 0x4b6ad8u: goto label_4b6ad8;
        case 0x4b6adcu: goto label_4b6adc;
        case 0x4b6ae0u: goto label_4b6ae0;
        case 0x4b6ae4u: goto label_4b6ae4;
        case 0x4b6ae8u: goto label_4b6ae8;
        case 0x4b6aecu: goto label_4b6aec;
        case 0x4b6af0u: goto label_4b6af0;
        case 0x4b6af4u: goto label_4b6af4;
        case 0x4b6af8u: goto label_4b6af8;
        case 0x4b6afcu: goto label_4b6afc;
        case 0x4b6b00u: goto label_4b6b00;
        case 0x4b6b04u: goto label_4b6b04;
        case 0x4b6b08u: goto label_4b6b08;
        case 0x4b6b0cu: goto label_4b6b0c;
        case 0x4b6b10u: goto label_4b6b10;
        case 0x4b6b14u: goto label_4b6b14;
        case 0x4b6b18u: goto label_4b6b18;
        case 0x4b6b1cu: goto label_4b6b1c;
        case 0x4b6b20u: goto label_4b6b20;
        case 0x4b6b24u: goto label_4b6b24;
        case 0x4b6b28u: goto label_4b6b28;
        case 0x4b6b2cu: goto label_4b6b2c;
        case 0x4b6b30u: goto label_4b6b30;
        case 0x4b6b34u: goto label_4b6b34;
        case 0x4b6b38u: goto label_4b6b38;
        case 0x4b6b3cu: goto label_4b6b3c;
        case 0x4b6b40u: goto label_4b6b40;
        case 0x4b6b44u: goto label_4b6b44;
        case 0x4b6b48u: goto label_4b6b48;
        case 0x4b6b4cu: goto label_4b6b4c;
        case 0x4b6b50u: goto label_4b6b50;
        case 0x4b6b54u: goto label_4b6b54;
        case 0x4b6b58u: goto label_4b6b58;
        case 0x4b6b5cu: goto label_4b6b5c;
        case 0x4b6b60u: goto label_4b6b60;
        case 0x4b6b64u: goto label_4b6b64;
        case 0x4b6b68u: goto label_4b6b68;
        case 0x4b6b6cu: goto label_4b6b6c;
        case 0x4b6b70u: goto label_4b6b70;
        case 0x4b6b74u: goto label_4b6b74;
        case 0x4b6b78u: goto label_4b6b78;
        case 0x4b6b7cu: goto label_4b6b7c;
        case 0x4b6b80u: goto label_4b6b80;
        case 0x4b6b84u: goto label_4b6b84;
        case 0x4b6b88u: goto label_4b6b88;
        case 0x4b6b8cu: goto label_4b6b8c;
        case 0x4b6b90u: goto label_4b6b90;
        case 0x4b6b94u: goto label_4b6b94;
        case 0x4b6b98u: goto label_4b6b98;
        case 0x4b6b9cu: goto label_4b6b9c;
        case 0x4b6ba0u: goto label_4b6ba0;
        case 0x4b6ba4u: goto label_4b6ba4;
        case 0x4b6ba8u: goto label_4b6ba8;
        case 0x4b6bacu: goto label_4b6bac;
        case 0x4b6bb0u: goto label_4b6bb0;
        case 0x4b6bb4u: goto label_4b6bb4;
        case 0x4b6bb8u: goto label_4b6bb8;
        case 0x4b6bbcu: goto label_4b6bbc;
        case 0x4b6bc0u: goto label_4b6bc0;
        case 0x4b6bc4u: goto label_4b6bc4;
        case 0x4b6bc8u: goto label_4b6bc8;
        case 0x4b6bccu: goto label_4b6bcc;
        case 0x4b6bd0u: goto label_4b6bd0;
        case 0x4b6bd4u: goto label_4b6bd4;
        case 0x4b6bd8u: goto label_4b6bd8;
        case 0x4b6bdcu: goto label_4b6bdc;
        case 0x4b6be0u: goto label_4b6be0;
        case 0x4b6be4u: goto label_4b6be4;
        case 0x4b6be8u: goto label_4b6be8;
        case 0x4b6becu: goto label_4b6bec;
        case 0x4b6bf0u: goto label_4b6bf0;
        case 0x4b6bf4u: goto label_4b6bf4;
        case 0x4b6bf8u: goto label_4b6bf8;
        case 0x4b6bfcu: goto label_4b6bfc;
        case 0x4b6c00u: goto label_4b6c00;
        case 0x4b6c04u: goto label_4b6c04;
        case 0x4b6c08u: goto label_4b6c08;
        case 0x4b6c0cu: goto label_4b6c0c;
        case 0x4b6c10u: goto label_4b6c10;
        case 0x4b6c14u: goto label_4b6c14;
        case 0x4b6c18u: goto label_4b6c18;
        case 0x4b6c1cu: goto label_4b6c1c;
        case 0x4b6c20u: goto label_4b6c20;
        case 0x4b6c24u: goto label_4b6c24;
        case 0x4b6c28u: goto label_4b6c28;
        case 0x4b6c2cu: goto label_4b6c2c;
        case 0x4b6c30u: goto label_4b6c30;
        case 0x4b6c34u: goto label_4b6c34;
        case 0x4b6c38u: goto label_4b6c38;
        case 0x4b6c3cu: goto label_4b6c3c;
        case 0x4b6c40u: goto label_4b6c40;
        case 0x4b6c44u: goto label_4b6c44;
        case 0x4b6c48u: goto label_4b6c48;
        case 0x4b6c4cu: goto label_4b6c4c;
        case 0x4b6c50u: goto label_4b6c50;
        case 0x4b6c54u: goto label_4b6c54;
        case 0x4b6c58u: goto label_4b6c58;
        case 0x4b6c5cu: goto label_4b6c5c;
        case 0x4b6c60u: goto label_4b6c60;
        case 0x4b6c64u: goto label_4b6c64;
        case 0x4b6c68u: goto label_4b6c68;
        case 0x4b6c6cu: goto label_4b6c6c;
        case 0x4b6c70u: goto label_4b6c70;
        case 0x4b6c74u: goto label_4b6c74;
        case 0x4b6c78u: goto label_4b6c78;
        case 0x4b6c7cu: goto label_4b6c7c;
        case 0x4b6c80u: goto label_4b6c80;
        case 0x4b6c84u: goto label_4b6c84;
        case 0x4b6c88u: goto label_4b6c88;
        case 0x4b6c8cu: goto label_4b6c8c;
        case 0x4b6c90u: goto label_4b6c90;
        case 0x4b6c94u: goto label_4b6c94;
        case 0x4b6c98u: goto label_4b6c98;
        case 0x4b6c9cu: goto label_4b6c9c;
        case 0x4b6ca0u: goto label_4b6ca0;
        case 0x4b6ca4u: goto label_4b6ca4;
        case 0x4b6ca8u: goto label_4b6ca8;
        case 0x4b6cacu: goto label_4b6cac;
        case 0x4b6cb0u: goto label_4b6cb0;
        case 0x4b6cb4u: goto label_4b6cb4;
        case 0x4b6cb8u: goto label_4b6cb8;
        case 0x4b6cbcu: goto label_4b6cbc;
        case 0x4b6cc0u: goto label_4b6cc0;
        case 0x4b6cc4u: goto label_4b6cc4;
        case 0x4b6cc8u: goto label_4b6cc8;
        case 0x4b6cccu: goto label_4b6ccc;
        case 0x4b6cd0u: goto label_4b6cd0;
        case 0x4b6cd4u: goto label_4b6cd4;
        case 0x4b6cd8u: goto label_4b6cd8;
        case 0x4b6cdcu: goto label_4b6cdc;
        case 0x4b6ce0u: goto label_4b6ce0;
        case 0x4b6ce4u: goto label_4b6ce4;
        case 0x4b6ce8u: goto label_4b6ce8;
        case 0x4b6cecu: goto label_4b6cec;
        case 0x4b6cf0u: goto label_4b6cf0;
        case 0x4b6cf4u: goto label_4b6cf4;
        case 0x4b6cf8u: goto label_4b6cf8;
        case 0x4b6cfcu: goto label_4b6cfc;
        case 0x4b6d00u: goto label_4b6d00;
        case 0x4b6d04u: goto label_4b6d04;
        case 0x4b6d08u: goto label_4b6d08;
        case 0x4b6d0cu: goto label_4b6d0c;
        case 0x4b6d10u: goto label_4b6d10;
        case 0x4b6d14u: goto label_4b6d14;
        case 0x4b6d18u: goto label_4b6d18;
        case 0x4b6d1cu: goto label_4b6d1c;
        case 0x4b6d20u: goto label_4b6d20;
        case 0x4b6d24u: goto label_4b6d24;
        case 0x4b6d28u: goto label_4b6d28;
        case 0x4b6d2cu: goto label_4b6d2c;
        case 0x4b6d30u: goto label_4b6d30;
        case 0x4b6d34u: goto label_4b6d34;
        case 0x4b6d38u: goto label_4b6d38;
        case 0x4b6d3cu: goto label_4b6d3c;
        case 0x4b6d40u: goto label_4b6d40;
        case 0x4b6d44u: goto label_4b6d44;
        case 0x4b6d48u: goto label_4b6d48;
        case 0x4b6d4cu: goto label_4b6d4c;
        case 0x4b6d50u: goto label_4b6d50;
        case 0x4b6d54u: goto label_4b6d54;
        case 0x4b6d58u: goto label_4b6d58;
        case 0x4b6d5cu: goto label_4b6d5c;
        case 0x4b6d60u: goto label_4b6d60;
        case 0x4b6d64u: goto label_4b6d64;
        case 0x4b6d68u: goto label_4b6d68;
        case 0x4b6d6cu: goto label_4b6d6c;
        case 0x4b6d70u: goto label_4b6d70;
        case 0x4b6d74u: goto label_4b6d74;
        case 0x4b6d78u: goto label_4b6d78;
        case 0x4b6d7cu: goto label_4b6d7c;
        case 0x4b6d80u: goto label_4b6d80;
        case 0x4b6d84u: goto label_4b6d84;
        case 0x4b6d88u: goto label_4b6d88;
        case 0x4b6d8cu: goto label_4b6d8c;
        case 0x4b6d90u: goto label_4b6d90;
        case 0x4b6d94u: goto label_4b6d94;
        case 0x4b6d98u: goto label_4b6d98;
        case 0x4b6d9cu: goto label_4b6d9c;
        case 0x4b6da0u: goto label_4b6da0;
        case 0x4b6da4u: goto label_4b6da4;
        case 0x4b6da8u: goto label_4b6da8;
        case 0x4b6dacu: goto label_4b6dac;
        case 0x4b6db0u: goto label_4b6db0;
        case 0x4b6db4u: goto label_4b6db4;
        case 0x4b6db8u: goto label_4b6db8;
        case 0x4b6dbcu: goto label_4b6dbc;
        case 0x4b6dc0u: goto label_4b6dc0;
        case 0x4b6dc4u: goto label_4b6dc4;
        case 0x4b6dc8u: goto label_4b6dc8;
        case 0x4b6dccu: goto label_4b6dcc;
        case 0x4b6dd0u: goto label_4b6dd0;
        case 0x4b6dd4u: goto label_4b6dd4;
        case 0x4b6dd8u: goto label_4b6dd8;
        case 0x4b6ddcu: goto label_4b6ddc;
        case 0x4b6de0u: goto label_4b6de0;
        case 0x4b6de4u: goto label_4b6de4;
        case 0x4b6de8u: goto label_4b6de8;
        case 0x4b6decu: goto label_4b6dec;
        case 0x4b6df0u: goto label_4b6df0;
        case 0x4b6df4u: goto label_4b6df4;
        case 0x4b6df8u: goto label_4b6df8;
        case 0x4b6dfcu: goto label_4b6dfc;
        case 0x4b6e00u: goto label_4b6e00;
        case 0x4b6e04u: goto label_4b6e04;
        case 0x4b6e08u: goto label_4b6e08;
        case 0x4b6e0cu: goto label_4b6e0c;
        case 0x4b6e10u: goto label_4b6e10;
        case 0x4b6e14u: goto label_4b6e14;
        case 0x4b6e18u: goto label_4b6e18;
        case 0x4b6e1cu: goto label_4b6e1c;
        case 0x4b6e20u: goto label_4b6e20;
        case 0x4b6e24u: goto label_4b6e24;
        case 0x4b6e28u: goto label_4b6e28;
        case 0x4b6e2cu: goto label_4b6e2c;
        case 0x4b6e30u: goto label_4b6e30;
        case 0x4b6e34u: goto label_4b6e34;
        case 0x4b6e38u: goto label_4b6e38;
        case 0x4b6e3cu: goto label_4b6e3c;
        case 0x4b6e40u: goto label_4b6e40;
        case 0x4b6e44u: goto label_4b6e44;
        case 0x4b6e48u: goto label_4b6e48;
        case 0x4b6e4cu: goto label_4b6e4c;
        case 0x4b6e50u: goto label_4b6e50;
        case 0x4b6e54u: goto label_4b6e54;
        case 0x4b6e58u: goto label_4b6e58;
        case 0x4b6e5cu: goto label_4b6e5c;
        case 0x4b6e60u: goto label_4b6e60;
        case 0x4b6e64u: goto label_4b6e64;
        case 0x4b6e68u: goto label_4b6e68;
        case 0x4b6e6cu: goto label_4b6e6c;
        case 0x4b6e70u: goto label_4b6e70;
        case 0x4b6e74u: goto label_4b6e74;
        case 0x4b6e78u: goto label_4b6e78;
        case 0x4b6e7cu: goto label_4b6e7c;
        case 0x4b6e80u: goto label_4b6e80;
        case 0x4b6e84u: goto label_4b6e84;
        case 0x4b6e88u: goto label_4b6e88;
        case 0x4b6e8cu: goto label_4b6e8c;
        case 0x4b6e90u: goto label_4b6e90;
        case 0x4b6e94u: goto label_4b6e94;
        case 0x4b6e98u: goto label_4b6e98;
        case 0x4b6e9cu: goto label_4b6e9c;
        case 0x4b6ea0u: goto label_4b6ea0;
        case 0x4b6ea4u: goto label_4b6ea4;
        case 0x4b6ea8u: goto label_4b6ea8;
        case 0x4b6eacu: goto label_4b6eac;
        case 0x4b6eb0u: goto label_4b6eb0;
        case 0x4b6eb4u: goto label_4b6eb4;
        case 0x4b6eb8u: goto label_4b6eb8;
        case 0x4b6ebcu: goto label_4b6ebc;
        case 0x4b6ec0u: goto label_4b6ec0;
        case 0x4b6ec4u: goto label_4b6ec4;
        case 0x4b6ec8u: goto label_4b6ec8;
        case 0x4b6eccu: goto label_4b6ecc;
        case 0x4b6ed0u: goto label_4b6ed0;
        case 0x4b6ed4u: goto label_4b6ed4;
        case 0x4b6ed8u: goto label_4b6ed8;
        case 0x4b6edcu: goto label_4b6edc;
        case 0x4b6ee0u: goto label_4b6ee0;
        case 0x4b6ee4u: goto label_4b6ee4;
        case 0x4b6ee8u: goto label_4b6ee8;
        case 0x4b6eecu: goto label_4b6eec;
        case 0x4b6ef0u: goto label_4b6ef0;
        case 0x4b6ef4u: goto label_4b6ef4;
        case 0x4b6ef8u: goto label_4b6ef8;
        case 0x4b6efcu: goto label_4b6efc;
        case 0x4b6f00u: goto label_4b6f00;
        case 0x4b6f04u: goto label_4b6f04;
        case 0x4b6f08u: goto label_4b6f08;
        case 0x4b6f0cu: goto label_4b6f0c;
        case 0x4b6f10u: goto label_4b6f10;
        case 0x4b6f14u: goto label_4b6f14;
        case 0x4b6f18u: goto label_4b6f18;
        case 0x4b6f1cu: goto label_4b6f1c;
        case 0x4b6f20u: goto label_4b6f20;
        case 0x4b6f24u: goto label_4b6f24;
        case 0x4b6f28u: goto label_4b6f28;
        case 0x4b6f2cu: goto label_4b6f2c;
        case 0x4b6f30u: goto label_4b6f30;
        case 0x4b6f34u: goto label_4b6f34;
        case 0x4b6f38u: goto label_4b6f38;
        case 0x4b6f3cu: goto label_4b6f3c;
        case 0x4b6f40u: goto label_4b6f40;
        case 0x4b6f44u: goto label_4b6f44;
        case 0x4b6f48u: goto label_4b6f48;
        case 0x4b6f4cu: goto label_4b6f4c;
        case 0x4b6f50u: goto label_4b6f50;
        case 0x4b6f54u: goto label_4b6f54;
        case 0x4b6f58u: goto label_4b6f58;
        case 0x4b6f5cu: goto label_4b6f5c;
        case 0x4b6f60u: goto label_4b6f60;
        case 0x4b6f64u: goto label_4b6f64;
        case 0x4b6f68u: goto label_4b6f68;
        case 0x4b6f6cu: goto label_4b6f6c;
        case 0x4b6f70u: goto label_4b6f70;
        case 0x4b6f74u: goto label_4b6f74;
        case 0x4b6f78u: goto label_4b6f78;
        case 0x4b6f7cu: goto label_4b6f7c;
        case 0x4b6f80u: goto label_4b6f80;
        case 0x4b6f84u: goto label_4b6f84;
        case 0x4b6f88u: goto label_4b6f88;
        case 0x4b6f8cu: goto label_4b6f8c;
        case 0x4b6f90u: goto label_4b6f90;
        case 0x4b6f94u: goto label_4b6f94;
        case 0x4b6f98u: goto label_4b6f98;
        case 0x4b6f9cu: goto label_4b6f9c;
        case 0x4b6fa0u: goto label_4b6fa0;
        case 0x4b6fa4u: goto label_4b6fa4;
        case 0x4b6fa8u: goto label_4b6fa8;
        case 0x4b6facu: goto label_4b6fac;
        case 0x4b6fb0u: goto label_4b6fb0;
        case 0x4b6fb4u: goto label_4b6fb4;
        case 0x4b6fb8u: goto label_4b6fb8;
        case 0x4b6fbcu: goto label_4b6fbc;
        case 0x4b6fc0u: goto label_4b6fc0;
        case 0x4b6fc4u: goto label_4b6fc4;
        case 0x4b6fc8u: goto label_4b6fc8;
        case 0x4b6fccu: goto label_4b6fcc;
        case 0x4b6fd0u: goto label_4b6fd0;
        case 0x4b6fd4u: goto label_4b6fd4;
        case 0x4b6fd8u: goto label_4b6fd8;
        case 0x4b6fdcu: goto label_4b6fdc;
        default: break;
    }

    ctx->pc = 0x4b6920u;

label_4b6920:
    // 0x4b6920: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4b6920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4b6924:
    // 0x4b6924: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b6924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b6928:
    // 0x4b6928: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4b6928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4b692c:
    // 0x4b692c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4b692cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4b6930:
    // 0x4b6930: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4b6930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4b6934:
    // 0x4b6934: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4b6934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4b6938:
    // 0x4b6938: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x4b6938u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4b693c:
    // 0x4b693c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b693cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4b6940:
    // 0x4b6940: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4b6940u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4b6944:
    // 0x4b6944: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b6944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b6948:
    // 0x4b6948: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4b6948u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b694c:
    // 0x4b694c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b694cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b6950:
    // 0x4b6950: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4b6950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b6954:
    // 0x4b6954: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b6954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b6958:
    // 0x4b6958: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4b6958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4b695c:
    // 0x4b695c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b695cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b6960:
    // 0x4b6960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b6960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b6964:
    // 0x4b6964: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x4b6964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
label_4b6968:
    // 0x4b6968: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x4b6968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_4b696c:
    // 0x4b696c: 0x14830055  bne         $a0, $v1, . + 4 + (0x55 << 2)
label_4b6970:
    if (ctx->pc == 0x4B6970u) {
        ctx->pc = 0x4B6970u;
            // 0x4b6970: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6974u;
        goto label_4b6974;
    }
    ctx->pc = 0x4B696Cu;
    {
        const bool branch_taken_0x4b696c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B6970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B696Cu;
            // 0x4b6970: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b696c) {
            ctx->pc = 0x4B6AC4u;
            goto label_4b6ac4;
        }
    }
    ctx->pc = 0x4B6974u;
label_4b6974:
    // 0x4b6974: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x4b6974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_4b6978:
    // 0x4b6978: 0x8c71006c  lw          $s1, 0x6C($v1)
    ctx->pc = 0x4b6978u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_4b697c:
    // 0x4b697c: 0x52200052  beql        $s1, $zero, . + 4 + (0x52 << 2)
label_4b6980:
    if (ctx->pc == 0x4B6980u) {
        ctx->pc = 0x4B6980u;
            // 0x4b6980: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4B6984u;
        goto label_4b6984;
    }
    ctx->pc = 0x4B697Cu;
    {
        const bool branch_taken_0x4b697c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b697c) {
            ctx->pc = 0x4B6980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B697Cu;
            // 0x4b6980: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6AC8u;
            goto label_4b6ac8;
        }
    }
    ctx->pc = 0x4B6984u;
label_4b6984:
    // 0x4b6984: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x4b6984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_4b6988:
    // 0x4b6988: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b6988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4b698c:
    // 0x4b698c: 0x8c500064  lw          $s0, 0x64($v0)
    ctx->pc = 0x4b698cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4b6990:
    // 0x4b6990: 0x8c628a08  lw          $v0, -0x75F8($v1)
    ctx->pc = 0x4b6990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4b6994:
    // 0x4b6994: 0x8c5e0034  lw          $fp, 0x34($v0)
    ctx->pc = 0x4b6994u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_4b6998:
    // 0x4b6998: 0xc04e738  jal         func_139CE0
label_4b699c:
    if (ctx->pc == 0x4B699Cu) {
        ctx->pc = 0x4B699Cu;
            // 0x4b699c: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x4B69A0u;
        goto label_4b69a0;
    }
    ctx->pc = 0x4B6998u;
    SET_GPR_U32(ctx, 31, 0x4B69A0u);
    ctx->pc = 0x4B699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6998u;
            // 0x4b699c: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B69A0u; }
        if (ctx->pc != 0x4B69A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B69A0u; }
        if (ctx->pc != 0x4B69A0u) { return; }
    }
    ctx->pc = 0x4B69A0u;
label_4b69a0:
    // 0x4b69a0: 0x3d15821  addu        $t3, $fp, $s1
    ctx->pc = 0x4b69a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
label_4b69a4:
    // 0x4b69a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b69a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b69a8:
    // 0x4b69a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4b69a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b69ac:
    // 0x4b69ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4b69acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b69b0:
    // 0x4b69b0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4b69b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4b69b4:
    // 0x4b69b4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4b69b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b69b8:
    // 0x4b69b8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x4b69b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b69bc:
    // 0x4b69bc: 0xc12dbf8  jal         func_4B6FE0
label_4b69c0:
    if (ctx->pc == 0x4B69C0u) {
        ctx->pc = 0x4B69C0u;
            // 0x4b69c0: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B69C4u;
        goto label_4b69c4;
    }
    ctx->pc = 0x4B69BCu;
    SET_GPR_U32(ctx, 31, 0x4B69C4u);
    ctx->pc = 0x4B69C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B69BCu;
            // 0x4b69c0: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B6FE0u;
    if (runtime->hasFunction(0x4B6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x4B6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B69C4u; }
        if (ctx->pc != 0x4B69C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B6FE0_0x4b6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B69C4u; }
        if (ctx->pc != 0x4B69C4u) { return; }
    }
    ctx->pc = 0x4B69C4u;
label_4b69c4:
    // 0x4b69c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4b69c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4b69c8:
    // 0x4b69c8: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_4b69cc:
    if (ctx->pc == 0x4B69CCu) {
        ctx->pc = 0x4B69CCu;
            // 0x4b69cc: 0x26100190  addiu       $s0, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->pc = 0x4B69D0u;
        goto label_4b69d0;
    }
    ctx->pc = 0x4B69C8u;
    {
        const bool branch_taken_0x4b69c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B69CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B69C8u;
            // 0x4b69cc: 0x26100190  addiu       $s0, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b69c8) {
            ctx->pc = 0x4B69A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b69a0;
        }
    }
    ctx->pc = 0x4B69D0u;
label_4b69d0:
    // 0x4b69d0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x4b69d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_4b69d4:
    // 0x4b69d4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x4b69d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4b69d8:
    // 0x4b69d8: 0x8c51006c  lw          $s1, 0x6C($v0)
    ctx->pc = 0x4b69d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_4b69dc:
    // 0x4b69dc: 0x8c500064  lw          $s0, 0x64($v0)
    ctx->pc = 0x4b69dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4b69e0:
    // 0x4b69e0: 0xc0506ac  jal         func_141AB0
label_4b69e4:
    if (ctx->pc == 0x4B69E4u) {
        ctx->pc = 0x4B69E4u;
            // 0x4b69e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B69E8u;
        goto label_4b69e8;
    }
    ctx->pc = 0x4B69E0u;
    SET_GPR_U32(ctx, 31, 0x4B69E8u);
    ctx->pc = 0x4B69E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B69E0u;
            // 0x4b69e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B69E8u; }
        if (ctx->pc != 0x4B69E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B69E8u; }
        if (ctx->pc != 0x4B69E8u) { return; }
    }
    ctx->pc = 0x4B69E8u;
label_4b69e8:
    // 0x4b69e8: 0xc05068c  jal         func_141A30
label_4b69ec:
    if (ctx->pc == 0x4B69ECu) {
        ctx->pc = 0x4B69ECu;
            // 0x4b69ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B69F0u;
        goto label_4b69f0;
    }
    ctx->pc = 0x4B69E8u;
    SET_GPR_U32(ctx, 31, 0x4B69F0u);
    ctx->pc = 0x4B69ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B69E8u;
            // 0x4b69ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B69F0u; }
        if (ctx->pc != 0x4B69F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B69F0u; }
        if (ctx->pc != 0x4B69F0u) { return; }
    }
    ctx->pc = 0x4B69F0u;
label_4b69f0:
    // 0x4b69f0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x4b69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_4b69f4:
    // 0x4b69f4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4b69f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4b69f8:
    // 0x4b69f8: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_4b69fc:
    if (ctx->pc == 0x4B69FCu) {
        ctx->pc = 0x4B6A00u;
        goto label_4b6a00;
    }
    ctx->pc = 0x4B69F8u;
    {
        const bool branch_taken_0x4b69f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b69f8) {
            ctx->pc = 0x4B6AB0u;
            goto label_4b6ab0;
        }
    }
    ctx->pc = 0x4B6A00u;
label_4b6a00:
    // 0x4b6a00: 0x9202017b  lbu         $v0, 0x17B($s0)
    ctx->pc = 0x4b6a00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 379)));
label_4b6a04:
    // 0x4b6a04: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_4b6a08:
    if (ctx->pc == 0x4B6A08u) {
        ctx->pc = 0x4B6A0Cu;
        goto label_4b6a0c;
    }
    ctx->pc = 0x4B6A04u;
    {
        const bool branch_taken_0x4b6a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6a04) {
            ctx->pc = 0x4B6AB0u;
            goto label_4b6ab0;
        }
    }
    ctx->pc = 0x4B6A0Cu;
label_4b6a0c:
    // 0x4b6a0c: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x4b6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_4b6a10:
    // 0x4b6a10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b6a14:
    // 0x4b6a14: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_4b6a18:
    if (ctx->pc == 0x4B6A18u) {
        ctx->pc = 0x4B6A1Cu;
        goto label_4b6a1c;
    }
    ctx->pc = 0x4B6A14u;
    {
        const bool branch_taken_0x4b6a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b6a14) {
            ctx->pc = 0x4B6AB0u;
            goto label_4b6ab0;
        }
    }
    ctx->pc = 0x4B6A1Cu;
label_4b6a1c:
    // 0x4b6a1c: 0x92020090  lbu         $v0, 0x90($s0)
    ctx->pc = 0x4b6a1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
label_4b6a20:
    // 0x4b6a20: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_4b6a24:
    if (ctx->pc == 0x4B6A24u) {
        ctx->pc = 0x4B6A28u;
        goto label_4b6a28;
    }
    ctx->pc = 0x4B6A20u;
    {
        const bool branch_taken_0x4b6a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6a20) {
            ctx->pc = 0x4B6AB0u;
            goto label_4b6ab0;
        }
    }
    ctx->pc = 0x4B6A28u;
label_4b6a28:
    // 0x4b6a28: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4b6a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4b6a2c:
    // 0x4b6a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b6a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b6a30:
    // 0x4b6a30: 0xc04cce8  jal         func_1333A0
label_4b6a34:
    if (ctx->pc == 0x4B6A34u) {
        ctx->pc = 0x4B6A34u;
            // 0x4b6a34: 0x24a564f0  addiu       $a1, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->pc = 0x4B6A38u;
        goto label_4b6a38;
    }
    ctx->pc = 0x4B6A30u;
    SET_GPR_U32(ctx, 31, 0x4B6A38u);
    ctx->pc = 0x4B6A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6A30u;
            // 0x4b6a34: 0x24a564f0  addiu       $a1, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A38u; }
        if (ctx->pc != 0x4B6A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A38u; }
        if (ctx->pc != 0x4B6A38u) { return; }
    }
    ctx->pc = 0x4B6A38u;
label_4b6a38:
    // 0x4b6a38: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x4b6a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_4b6a3c:
    // 0x4b6a3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b6a40:
    // 0x4b6a40: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4b6a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b6a44:
    // 0x4b6a44: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4b6a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4b6a48:
    // 0x4b6a48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b6a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b6a4c:
    // 0x4b6a4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b6a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b6a50:
    // 0x4b6a50: 0xc04ce50  jal         func_133940
label_4b6a54:
    if (ctx->pc == 0x4B6A54u) {
        ctx->pc = 0x4B6A54u;
            // 0x4b6a54: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4B6A58u;
        goto label_4b6a58;
    }
    ctx->pc = 0x4B6A50u;
    SET_GPR_U32(ctx, 31, 0x4B6A58u);
    ctx->pc = 0x4B6A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6A50u;
            // 0x4b6a54: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A58u; }
        if (ctx->pc != 0x4B6A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A58u; }
        if (ctx->pc != 0x4B6A58u) { return; }
    }
    ctx->pc = 0x4B6A58u;
label_4b6a58:
    // 0x4b6a58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4b6a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4b6a5c:
    // 0x4b6a5c: 0xc04ce80  jal         func_133A00
label_4b6a60:
    if (ctx->pc == 0x4B6A60u) {
        ctx->pc = 0x4B6A60u;
            // 0x4b6a60: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x4B6A64u;
        goto label_4b6a64;
    }
    ctx->pc = 0x4B6A5Cu;
    SET_GPR_U32(ctx, 31, 0x4B6A64u);
    ctx->pc = 0x4B6A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6A5Cu;
            // 0x4b6a60: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A64u; }
        if (ctx->pc != 0x4B6A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A64u; }
        if (ctx->pc != 0x4B6A64u) { return; }
    }
    ctx->pc = 0x4B6A64u;
label_4b6a64:
    // 0x4b6a64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b6a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b6a68:
    // 0x4b6a68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4b6a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b6a6c:
    // 0x4b6a6c: 0xc04cd60  jal         func_133580
label_4b6a70:
    if (ctx->pc == 0x4B6A70u) {
        ctx->pc = 0x4B6A70u;
            // 0x4b6a70: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4B6A74u;
        goto label_4b6a74;
    }
    ctx->pc = 0x4B6A6Cu;
    SET_GPR_U32(ctx, 31, 0x4B6A74u);
    ctx->pc = 0x4B6A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6A6Cu;
            // 0x4b6a70: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A74u; }
        if (ctx->pc != 0x4B6A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A74u; }
        if (ctx->pc != 0x4B6A74u) { return; }
    }
    ctx->pc = 0x4B6A74u;
label_4b6a74:
    // 0x4b6a74: 0xc0508b0  jal         func_1422C0
label_4b6a78:
    if (ctx->pc == 0x4B6A78u) {
        ctx->pc = 0x4B6A78u;
            // 0x4b6a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6A7Cu;
        goto label_4b6a7c;
    }
    ctx->pc = 0x4B6A74u;
    SET_GPR_U32(ctx, 31, 0x4B6A7Cu);
    ctx->pc = 0x4B6A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6A74u;
            // 0x4b6a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A7Cu; }
        if (ctx->pc != 0x4B6A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A7Cu; }
        if (ctx->pc != 0x4B6A7Cu) { return; }
    }
    ctx->pc = 0x4B6A7Cu;
label_4b6a7c:
    // 0x4b6a7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4b6a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b6a80:
    // 0x4b6a80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b6a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b6a84:
    // 0x4b6a84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b6a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b6a88:
    // 0x4b6a88: 0xc0508b4  jal         func_1422D0
label_4b6a8c:
    if (ctx->pc == 0x4B6A8Cu) {
        ctx->pc = 0x4B6A8Cu;
            // 0x4b6a8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6A90u;
        goto label_4b6a90;
    }
    ctx->pc = 0x4B6A88u;
    SET_GPR_U32(ctx, 31, 0x4B6A90u);
    ctx->pc = 0x4B6A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6A88u;
            // 0x4b6a8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A90u; }
        if (ctx->pc != 0x4B6A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6A90u; }
        if (ctx->pc != 0x4B6A90u) { return; }
    }
    ctx->pc = 0x4B6A90u;
label_4b6a90:
    // 0x4b6a90: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4b6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4b6a94:
    // 0x4b6a94: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4b6a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4b6a98:
    // 0x4b6a98: 0x8c46c730  lw          $a2, -0x38D0($v0)
    ctx->pc = 0x4b6a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952752)));
label_4b6a9c:
    // 0x4b6a9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b6a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b6aa0:
    // 0x4b6aa0: 0xc050a08  jal         func_142820
label_4b6aa4:
    if (ctx->pc == 0x4B6AA4u) {
        ctx->pc = 0x4B6AA4u;
            // 0x4b6aa4: 0x24a5c6d0  addiu       $a1, $a1, -0x3930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952656));
        ctx->pc = 0x4B6AA8u;
        goto label_4b6aa8;
    }
    ctx->pc = 0x4B6AA0u;
    SET_GPR_U32(ctx, 31, 0x4B6AA8u);
    ctx->pc = 0x4B6AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6AA0u;
            // 0x4b6aa4: 0x24a5c6d0  addiu       $a1, $a1, -0x3930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6AA8u; }
        if (ctx->pc != 0x4B6AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6AA8u; }
        if (ctx->pc != 0x4B6AA8u) { return; }
    }
    ctx->pc = 0x4B6AA8u;
label_4b6aa8:
    // 0x4b6aa8: 0xc050a88  jal         func_142A20
label_4b6aac:
    if (ctx->pc == 0x4B6AACu) {
        ctx->pc = 0x4B6AB0u;
        goto label_4b6ab0;
    }
    ctx->pc = 0x4B6AA8u;
    SET_GPR_U32(ctx, 31, 0x4B6AB0u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6AB0u; }
        if (ctx->pc != 0x4B6AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6AB0u; }
        if (ctx->pc != 0x4B6AB0u) { return; }
    }
    ctx->pc = 0x4B6AB0u;
label_4b6ab0:
    // 0x4b6ab0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4b6ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4b6ab4:
    // 0x4b6ab4: 0x1620ffce  bnez        $s1, . + 4 + (-0x32 << 2)
label_4b6ab8:
    if (ctx->pc == 0x4B6AB8u) {
        ctx->pc = 0x4B6AB8u;
            // 0x4b6ab8: 0x26100190  addiu       $s0, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->pc = 0x4B6ABCu;
        goto label_4b6abc;
    }
    ctx->pc = 0x4B6AB4u;
    {
        const bool branch_taken_0x4b6ab4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6AB4u;
            // 0x4b6ab8: 0x26100190  addiu       $s0, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6ab4) {
            ctx->pc = 0x4B69F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b69f0;
        }
    }
    ctx->pc = 0x4B6ABCu;
label_4b6abc:
    // 0x4b6abc: 0xc05068c  jal         func_141A30
label_4b6ac0:
    if (ctx->pc == 0x4B6AC0u) {
        ctx->pc = 0x4B6AC0u;
            // 0x4b6ac0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B6AC4u;
        goto label_4b6ac4;
    }
    ctx->pc = 0x4B6ABCu;
    SET_GPR_U32(ctx, 31, 0x4B6AC4u);
    ctx->pc = 0x4B6AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6ABCu;
            // 0x4b6ac0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6AC4u; }
        if (ctx->pc != 0x4B6AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6AC4u; }
        if (ctx->pc != 0x4B6AC4u) { return; }
    }
    ctx->pc = 0x4B6AC4u;
label_4b6ac4:
    // 0x4b6ac4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4b6ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4b6ac8:
    // 0x4b6ac8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4b6ac8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4b6acc:
    // 0x4b6acc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4b6accu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4b6ad0:
    // 0x4b6ad0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4b6ad0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4b6ad4:
    // 0x4b6ad4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b6ad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b6ad8:
    // 0x4b6ad8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b6ad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b6adc:
    // 0x4b6adc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b6adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b6ae0:
    // 0x4b6ae0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b6ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b6ae4:
    // 0x4b6ae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b6ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6ae8:
    // 0x4b6ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b6aec:
    // 0x4b6aec: 0x3e00008  jr          $ra
label_4b6af0:
    if (ctx->pc == 0x4B6AF0u) {
        ctx->pc = 0x4B6AF0u;
            // 0x4b6af0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4B6AF4u;
        goto label_4b6af4;
    }
    ctx->pc = 0x4B6AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6AECu;
            // 0x4b6af0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B6AF4u;
label_4b6af4:
    // 0x4b6af4: 0x0  nop
    ctx->pc = 0x4b6af4u;
    // NOP
label_4b6af8:
    // 0x4b6af8: 0x0  nop
    ctx->pc = 0x4b6af8u;
    // NOP
label_4b6afc:
    // 0x4b6afc: 0x0  nop
    ctx->pc = 0x4b6afcu;
    // NOP
label_4b6b00:
    // 0x4b6b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b6b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b6b04:
    // 0x4b6b04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4b6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4b6b08:
    // 0x4b6b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b6b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b6b0c:
    // 0x4b6b0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b6b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b6b10:
    // 0x4b6b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b6b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b6b14:
    // 0x4b6b14: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4b6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4b6b18:
    // 0x4b6b18: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4b6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4b6b1c:
    // 0x4b6b1c: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x4b6b1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_4b6b20:
    // 0x4b6b20: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
label_4b6b24:
    if (ctx->pc == 0x4B6B24u) {
        ctx->pc = 0x4B6B24u;
            // 0x4b6b24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6B28u;
        goto label_4b6b28;
    }
    ctx->pc = 0x4B6B20u;
    {
        const bool branch_taken_0x4b6b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6B20u;
            // 0x4b6b24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6b20) {
            ctx->pc = 0x4B6BA0u;
            goto label_4b6ba0;
        }
    }
    ctx->pc = 0x4B6B28u;
label_4b6b28:
    // 0x4b6b28: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4b6b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4b6b2c:
    // 0x4b6b2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b6b30:
    // 0x4b6b30: 0x5083001c  beql        $a0, $v1, . + 4 + (0x1C << 2)
label_4b6b34:
    if (ctx->pc == 0x4B6B34u) {
        ctx->pc = 0x4B6B34u;
            // 0x4b6b34: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4B6B38u;
        goto label_4b6b38;
    }
    ctx->pc = 0x4B6B30u;
    {
        const bool branch_taken_0x4b6b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b6b30) {
            ctx->pc = 0x4B6B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6B30u;
            // 0x4b6b34: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6BA4u;
            goto label_4b6ba4;
        }
    }
    ctx->pc = 0x4B6B38u;
label_4b6b38:
    // 0x4b6b38: 0x8cc30e34  lw          $v1, 0xE34($a2)
    ctx->pc = 0x4b6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3636)));
label_4b6b3c:
    // 0x4b6b3c: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x4b6b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_4b6b40:
    // 0x4b6b40: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4b6b40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4b6b44:
    // 0x4b6b44: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4b6b48:
    if (ctx->pc == 0x4B6B48u) {
        ctx->pc = 0x4B6B4Cu;
        goto label_4b6b4c;
    }
    ctx->pc = 0x4B6B44u;
    {
        const bool branch_taken_0x4b6b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6b44) {
            ctx->pc = 0x4B6B5Cu;
            goto label_4b6b5c;
        }
    }
    ctx->pc = 0x4B6B4Cu;
label_4b6b4c:
    // 0x4b6b4c: 0xc075eb4  jal         func_1D7AD0
label_4b6b50:
    if (ctx->pc == 0x4B6B50u) {
        ctx->pc = 0x4B6B50u;
            // 0x4b6b50: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6B54u;
        goto label_4b6b54;
    }
    ctx->pc = 0x4B6B4Cu;
    SET_GPR_U32(ctx, 31, 0x4B6B54u);
    ctx->pc = 0x4B6B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6B4Cu;
            // 0x4b6b50: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6B54u; }
        if (ctx->pc != 0x4B6B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6B54u; }
        if (ctx->pc != 0x4B6B54u) { return; }
    }
    ctx->pc = 0x4B6B54u;
label_4b6b54:
    // 0x4b6b54: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x4b6b54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b6b58:
    // 0x4b6b58: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4b6b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4b6b5c:
    // 0x4b6b5c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4b6b60:
    if (ctx->pc == 0x4B6B60u) {
        ctx->pc = 0x4B6B60u;
            // 0x4b6b60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4B6B64u;
        goto label_4b6b64;
    }
    ctx->pc = 0x4B6B5Cu;
    {
        const bool branch_taken_0x4b6b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6b5c) {
            ctx->pc = 0x4B6B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6B5Cu;
            // 0x4b6b60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6B70u;
            goto label_4b6b70;
        }
    }
    ctx->pc = 0x4B6B64u;
label_4b6b64:
    // 0x4b6b64: 0x1000000e  b           . + 4 + (0xE << 2)
label_4b6b68:
    if (ctx->pc == 0x4B6B68u) {
        ctx->pc = 0x4B6B6Cu;
        goto label_4b6b6c;
    }
    ctx->pc = 0x4B6B64u;
    {
        const bool branch_taken_0x4b6b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6b64) {
            ctx->pc = 0x4B6BA0u;
            goto label_4b6ba0;
        }
    }
    ctx->pc = 0x4B6B6Cu;
label_4b6b6c:
    // 0x4b6b6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b6b70:
    // 0x4b6b70: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x4b6b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_4b6b74:
    // 0x4b6b74: 0x8e11006c  lw          $s1, 0x6C($s0)
    ctx->pc = 0x4b6b74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_4b6b78:
    // 0x4b6b78: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_4b6b7c:
    if (ctx->pc == 0x4B6B7Cu) {
        ctx->pc = 0x4B6B80u;
        goto label_4b6b80;
    }
    ctx->pc = 0x4B6B78u;
    {
        const bool branch_taken_0x4b6b78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6b78) {
            ctx->pc = 0x4B6BA0u;
            goto label_4b6ba0;
        }
    }
    ctx->pc = 0x4B6B80u;
label_4b6b80:
    // 0x4b6b80: 0x8e100064  lw          $s0, 0x64($s0)
    ctx->pc = 0x4b6b80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_4b6b84:
    // 0x4b6b84: 0xc12e0e0  jal         func_4B8380
label_4b6b88:
    if (ctx->pc == 0x4B6B88u) {
        ctx->pc = 0x4B6B88u;
            // 0x4b6b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6B8Cu;
        goto label_4b6b8c;
    }
    ctx->pc = 0x4B6B84u;
    SET_GPR_U32(ctx, 31, 0x4B6B8Cu);
    ctx->pc = 0x4B6B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6B84u;
            // 0x4b6b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8380u;
    if (runtime->hasFunction(0x4B8380u)) {
        auto targetFn = runtime->lookupFunction(0x4B8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6B8Cu; }
        if (ctx->pc != 0x4B6B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8380_0x4b8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6B8Cu; }
        if (ctx->pc != 0x4B6B8Cu) { return; }
    }
    ctx->pc = 0x4B6B8Cu;
label_4b6b8c:
    // 0x4b6b8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4b6b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4b6b90:
    // 0x4b6b90: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x4b6b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_4b6b94:
    // 0x4b6b94: 0x0  nop
    ctx->pc = 0x4b6b94u;
    // NOP
label_4b6b98:
    // 0x4b6b98: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_4b6b9c:
    if (ctx->pc == 0x4B6B9Cu) {
        ctx->pc = 0x4B6BA0u;
        goto label_4b6ba0;
    }
    ctx->pc = 0x4B6B98u;
    {
        const bool branch_taken_0x4b6b98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b6b98) {
            ctx->pc = 0x4B6B84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b6b84;
        }
    }
    ctx->pc = 0x4B6BA0u;
label_4b6ba0:
    // 0x4b6ba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b6ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b6ba4:
    // 0x4b6ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b6ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6ba8:
    // 0x4b6ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b6bac:
    // 0x4b6bac: 0x3e00008  jr          $ra
label_4b6bb0:
    if (ctx->pc == 0x4B6BB0u) {
        ctx->pc = 0x4B6BB0u;
            // 0x4b6bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B6BB4u;
        goto label_4b6bb4;
    }
    ctx->pc = 0x4B6BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6BACu;
            // 0x4b6bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B6BB4u;
label_4b6bb4:
    // 0x4b6bb4: 0x0  nop
    ctx->pc = 0x4b6bb4u;
    // NOP
label_4b6bb8:
    // 0x4b6bb8: 0x0  nop
    ctx->pc = 0x4b6bb8u;
    // NOP
label_4b6bbc:
    // 0x4b6bbc: 0x0  nop
    ctx->pc = 0x4b6bbcu;
    // NOP
label_4b6bc0:
    // 0x4b6bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b6bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b6bc4:
    // 0x4b6bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b6bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b6bc8:
    // 0x4b6bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b6bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b6bcc:
    // 0x4b6bcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b6bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b6bd0:
    // 0x4b6bd0: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x4b6bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_4b6bd4:
    // 0x4b6bd4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_4b6bd8:
    if (ctx->pc == 0x4B6BD8u) {
        ctx->pc = 0x4B6BD8u;
            // 0x4b6bd8: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x4B6BDCu;
        goto label_4b6bdc;
    }
    ctx->pc = 0x4B6BD4u;
    {
        const bool branch_taken_0x4b6bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6bd4) {
            ctx->pc = 0x4B6BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6BD4u;
            // 0x4b6bd8: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6BECu;
            goto label_4b6bec;
        }
    }
    ctx->pc = 0x4B6BDCu;
label_4b6bdc:
    // 0x4b6bdc: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4b6bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_4b6be0:
    // 0x4b6be0: 0xc0407c0  jal         func_101F00
label_4b6be4:
    if (ctx->pc == 0x4B6BE4u) {
        ctx->pc = 0x4B6BE4u;
            // 0x4b6be4: 0x24a55b90  addiu       $a1, $a1, 0x5B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23440));
        ctx->pc = 0x4B6BE8u;
        goto label_4b6be8;
    }
    ctx->pc = 0x4B6BE0u;
    SET_GPR_U32(ctx, 31, 0x4B6BE8u);
    ctx->pc = 0x4B6BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6BE0u;
            // 0x4b6be4: 0x24a55b90  addiu       $a1, $a1, 0x5B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6BE8u; }
        if (ctx->pc != 0x4B6BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6BE8u; }
        if (ctx->pc != 0x4B6BE8u) { return; }
    }
    ctx->pc = 0x4B6BE8u;
label_4b6be8:
    // 0x4b6be8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x4b6be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_4b6bec:
    // 0x4b6bec: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4b6becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4b6bf0:
    // 0x4b6bf0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_4b6bf4:
    if (ctx->pc == 0x4B6BF4u) {
        ctx->pc = 0x4B6BF4u;
            // 0x4b6bf4: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x4B6BF8u;
        goto label_4b6bf8;
    }
    ctx->pc = 0x4B6BF0u;
    {
        const bool branch_taken_0x4b6bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6bf0) {
            ctx->pc = 0x4B6BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6BF0u;
            // 0x4b6bf4: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6C04u;
            goto label_4b6c04;
        }
    }
    ctx->pc = 0x4B6BF8u;
label_4b6bf8:
    // 0x4b6bf8: 0xc04008c  jal         func_100230
label_4b6bfc:
    if (ctx->pc == 0x4B6BFCu) {
        ctx->pc = 0x4B6C00u;
        goto label_4b6c00;
    }
    ctx->pc = 0x4B6BF8u;
    SET_GPR_U32(ctx, 31, 0x4B6C00u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6C00u; }
        if (ctx->pc != 0x4B6C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6C00u; }
        if (ctx->pc != 0x4B6C00u) { return; }
    }
    ctx->pc = 0x4B6C00u;
label_4b6c00:
    // 0x4b6c00: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x4b6c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_4b6c04:
    // 0x4b6c04: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4b6c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b6c08:
    // 0x4b6c08: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_4b6c0c:
    if (ctx->pc == 0x4B6C0Cu) {
        ctx->pc = 0x4B6C0Cu;
            // 0x4b6c0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4B6C10u;
        goto label_4b6c10;
    }
    ctx->pc = 0x4B6C08u;
    {
        const bool branch_taken_0x4b6c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6c08) {
            ctx->pc = 0x4B6C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6C08u;
            // 0x4b6c0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6C30u;
            goto label_4b6c30;
        }
    }
    ctx->pc = 0x4B6C10u;
label_4b6c10:
    // 0x4b6c10: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b6c14:
    if (ctx->pc == 0x4B6C14u) {
        ctx->pc = 0x4B6C14u;
            // 0x4b6c14: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4B6C18u;
        goto label_4b6c18;
    }
    ctx->pc = 0x4B6C10u;
    {
        const bool branch_taken_0x4b6c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6c10) {
            ctx->pc = 0x4B6C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6C10u;
            // 0x4b6c14: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6C2Cu;
            goto label_4b6c2c;
        }
    }
    ctx->pc = 0x4B6C18u;
label_4b6c18:
    // 0x4b6c18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b6c18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b6c1c:
    // 0x4b6c1c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b6c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b6c20:
    // 0x4b6c20: 0x320f809  jalr        $t9
label_4b6c24:
    if (ctx->pc == 0x4B6C24u) {
        ctx->pc = 0x4B6C24u;
            // 0x4b6c24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B6C28u;
        goto label_4b6c28;
    }
    ctx->pc = 0x4B6C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B6C28u);
        ctx->pc = 0x4B6C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6C20u;
            // 0x4b6c24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B6C28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B6C28u; }
            if (ctx->pc != 0x4B6C28u) { return; }
        }
        }
    }
    ctx->pc = 0x4B6C28u;
label_4b6c28:
    // 0x4b6c28: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4b6c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4b6c2c:
    // 0x4b6c2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b6c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6c30:
    // 0x4b6c30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b6c34:
    // 0x4b6c34: 0x3e00008  jr          $ra
label_4b6c38:
    if (ctx->pc == 0x4B6C38u) {
        ctx->pc = 0x4B6C38u;
            // 0x4b6c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B6C3Cu;
        goto label_4b6c3c;
    }
    ctx->pc = 0x4B6C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6C34u;
            // 0x4b6c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B6C3Cu;
label_4b6c3c:
    // 0x4b6c3c: 0x0  nop
    ctx->pc = 0x4b6c3cu;
    // NOP
label_4b6c40:
    // 0x4b6c40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4b6c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4b6c44:
    // 0x4b6c44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4b6c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4b6c48:
    // 0x4b6c48: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4b6c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4b6c4c:
    // 0x4b6c4c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4b6c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4b6c50:
    // 0x4b6c50: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4b6c50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b6c54:
    // 0x4b6c54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4b6c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4b6c58:
    // 0x4b6c58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4b6c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4b6c5c:
    // 0x4b6c5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b6c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4b6c60:
    // 0x4b6c60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b6c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4b6c64:
    // 0x4b6c64: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4b6c64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4b6c68:
    // 0x4b6c68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4b6c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4b6c6c:
    // 0x4b6c6c: 0x8c91006c  lw          $s1, 0x6C($a0)
    ctx->pc = 0x4b6c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_4b6c70:
    // 0x4b6c70: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x4b6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4b6c74:
    // 0x4b6c74: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x4b6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4b6c78:
    // 0x4b6c78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4b6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b6c7c:
    // 0x4b6c7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4b6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b6c80:
    // 0x4b6c80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4b6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4b6c84:
    // 0x4b6c84: 0xc040138  jal         func_1004E0
label_4b6c88:
    if (ctx->pc == 0x4B6C88u) {
        ctx->pc = 0x4B6C88u;
            // 0x4b6c88: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4B6C8Cu;
        goto label_4b6c8c;
    }
    ctx->pc = 0x4B6C84u;
    SET_GPR_U32(ctx, 31, 0x4B6C8Cu);
    ctx->pc = 0x4B6C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6C84u;
            // 0x4b6c88: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6C8Cu; }
        if (ctx->pc != 0x4B6C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6C8Cu; }
        if (ctx->pc != 0x4B6C8Cu) { return; }
    }
    ctx->pc = 0x4B6C8Cu;
label_4b6c8c:
    // 0x4b6c8c: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4b6c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_4b6c90:
    // 0x4b6c90: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x4b6c90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
label_4b6c94:
    // 0x4b6c94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b6c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6c98:
    // 0x4b6c98: 0x24a56e50  addiu       $a1, $a1, 0x6E50
    ctx->pc = 0x4b6c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28240));
label_4b6c9c:
    // 0x4b6c9c: 0x24c65b90  addiu       $a2, $a2, 0x5B90
    ctx->pc = 0x4b6c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23440));
label_4b6ca0:
    // 0x4b6ca0: 0x24070190  addiu       $a3, $zero, 0x190
    ctx->pc = 0x4b6ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_4b6ca4:
    // 0x4b6ca4: 0xc040840  jal         func_102100
label_4b6ca8:
    if (ctx->pc == 0x4B6CA8u) {
        ctx->pc = 0x4B6CA8u;
            // 0x4b6ca8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6CACu;
        goto label_4b6cac;
    }
    ctx->pc = 0x4B6CA4u;
    SET_GPR_U32(ctx, 31, 0x4B6CACu);
    ctx->pc = 0x4B6CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6CA4u;
            // 0x4b6ca8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6CACu; }
        if (ctx->pc != 0x4B6CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6CACu; }
        if (ctx->pc != 0x4B6CACu) { return; }
    }
    ctx->pc = 0x4B6CACu;
label_4b6cac:
    // 0x4b6cac: 0xaea20064  sw          $v0, 0x64($s5)
    ctx->pc = 0x4b6cacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
label_4b6cb0:
    // 0x4b6cb0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b6cb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6cb4:
    // 0x4b6cb4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x4b6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_4b6cb8:
    // 0x4b6cb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4b6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4b6cbc:
    // 0x4b6cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b6cc0:
    // 0x4b6cc0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4b6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4b6cc4:
    // 0x4b6cc4: 0xc040138  jal         func_1004E0
label_4b6cc8:
    if (ctx->pc == 0x4B6CC8u) {
        ctx->pc = 0x4B6CC8u;
            // 0x4b6cc8: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x4B6CCCu;
        goto label_4b6ccc;
    }
    ctx->pc = 0x4B6CC4u;
    SET_GPR_U32(ctx, 31, 0x4B6CCCu);
    ctx->pc = 0x4B6CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6CC4u;
            // 0x4b6cc8: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6CCCu; }
        if (ctx->pc != 0x4B6CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6CCCu; }
        if (ctx->pc != 0x4B6CCCu) { return; }
    }
    ctx->pc = 0x4B6CCCu;
label_4b6ccc:
    // 0x4b6ccc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4b6cccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6cd0:
    // 0x4b6cd0: 0xaea20068  sw          $v0, 0x68($s5)
    ctx->pc = 0x4b6cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 2));
label_4b6cd4:
    // 0x4b6cd4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x4b6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_4b6cd8:
    // 0x4b6cd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b6cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b6cdc:
    // 0x4b6cdc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4b6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4b6ce0:
    // 0x4b6ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b6ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b6ce4:
    // 0x4b6ce4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b6ce8:
    // 0x4b6ce8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4b6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4b6cec:
    // 0x4b6cec: 0xc04a576  jal         func_1295D8
label_4b6cf0:
    if (ctx->pc == 0x4B6CF0u) {
        ctx->pc = 0x4B6CF0u;
            // 0x4b6cf0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x4B6CF4u;
        goto label_4b6cf4;
    }
    ctx->pc = 0x4B6CECu;
    SET_GPR_U32(ctx, 31, 0x4B6CF4u);
    ctx->pc = 0x4B6CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6CECu;
            // 0x4b6cf0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6CF4u; }
        if (ctx->pc != 0x4B6CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6CF4u; }
        if (ctx->pc != 0x4B6CF4u) { return; }
    }
    ctx->pc = 0x4B6CF4u;
label_4b6cf4:
    // 0x4b6cf4: 0xc6b50038  lwc1        $f21, 0x38($s5)
    ctx->pc = 0x4b6cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4b6cf8:
    // 0x4b6cf8: 0x8eb00040  lw          $s0, 0x40($s5)
    ctx->pc = 0x4b6cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_4b6cfc:
    // 0x4b6cfc: 0xc6b40034  lwc1        $f20, 0x34($s5)
    ctx->pc = 0x4b6cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b6d00:
    // 0x4b6d00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b6d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b6d04:
    // 0x4b6d04: 0x24036591  addiu       $v1, $zero, 0x6591
    ctx->pc = 0x4b6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26001));
label_4b6d08:
    // 0x4b6d08: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x4b6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4b6d0c:
    // 0x4b6d0c: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x4b6d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_4b6d10:
    // 0x4b6d10: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x4b6d10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_4b6d14:
    // 0x4b6d14: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x4b6d14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
label_4b6d18:
    // 0x4b6d18: 0xe6740024  swc1        $f20, 0x24($s3)
    ctx->pc = 0x4b6d18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_4b6d1c:
    // 0x4b6d1c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_4b6d20:
    if (ctx->pc == 0x4B6D20u) {
        ctx->pc = 0x4B6D20u;
            // 0x4b6d20: 0xe6750028  swc1        $f21, 0x28($s3) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->pc = 0x4B6D24u;
        goto label_4b6d24;
    }
    ctx->pc = 0x4B6D1Cu;
    {
        const bool branch_taken_0x4b6d1c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x4B6D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6D1Cu;
            // 0x4b6d20: 0xe6750028  swc1        $f21, 0x28($s3) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6d1c) {
            ctx->pc = 0x4B6D30u;
            goto label_4b6d30;
        }
    }
    ctx->pc = 0x4B6D24u;
label_4b6d24:
    // 0x4b6d24: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4b6d24u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b6d28:
    // 0x4b6d28: 0x10000008  b           . + 4 + (0x8 << 2)
label_4b6d2c:
    if (ctx->pc == 0x4B6D2Cu) {
        ctx->pc = 0x4B6D2Cu;
            // 0x4b6d2c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B6D30u;
        goto label_4b6d30;
    }
    ctx->pc = 0x4B6D28u;
    {
        const bool branch_taken_0x4b6d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6D28u;
            // 0x4b6d2c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6d28) {
            ctx->pc = 0x4B6D4Cu;
            goto label_4b6d4c;
        }
    }
    ctx->pc = 0x4B6D30u;
label_4b6d30:
    // 0x4b6d30: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x4b6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_4b6d34:
    // 0x4b6d34: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x4b6d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_4b6d38:
    // 0x4b6d38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b6d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b6d3c:
    // 0x4b6d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b6d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b6d40:
    // 0x4b6d40: 0x0  nop
    ctx->pc = 0x4b6d40u;
    // NOP
label_4b6d44:
    // 0x4b6d44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b6d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4b6d48:
    // 0x4b6d48: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4b6d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4b6d4c:
    // 0x4b6d4c: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x4b6d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_4b6d50:
    // 0x4b6d50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b6d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b6d54:
    // 0x4b6d54: 0xc0d879c  jal         func_361E70
label_4b6d58:
    if (ctx->pc == 0x4B6D58u) {
        ctx->pc = 0x4B6D58u;
            // 0x4b6d58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6D5Cu;
        goto label_4b6d5c;
    }
    ctx->pc = 0x4B6D54u;
    SET_GPR_U32(ctx, 31, 0x4B6D5Cu);
    ctx->pc = 0x4B6D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6D54u;
            // 0x4b6d58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6D5Cu; }
        if (ctx->pc != 0x4B6D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6D5Cu; }
        if (ctx->pc != 0x4B6D5Cu) { return; }
    }
    ctx->pc = 0x4B6D5Cu;
label_4b6d5c:
    // 0x4b6d5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4b6d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4b6d60:
    // 0x4b6d60: 0x26940190  addiu       $s4, $s4, 0x190
    ctx->pc = 0x4b6d60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
label_4b6d64:
    // 0x4b6d64: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x4b6d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4b6d68:
    // 0x4b6d68: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_4b6d6c:
    if (ctx->pc == 0x4B6D6Cu) {
        ctx->pc = 0x4B6D6Cu;
            // 0x4b6d6c: 0x26730034  addiu       $s3, $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
        ctx->pc = 0x4B6D70u;
        goto label_4b6d70;
    }
    ctx->pc = 0x4B6D68u;
    {
        const bool branch_taken_0x4b6d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6D68u;
            // 0x4b6d6c: 0x26730034  addiu       $s3, $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6d68) {
            ctx->pc = 0x4B6D04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b6d04;
        }
    }
    ctx->pc = 0x4B6D70u;
label_4b6d70:
    // 0x4b6d70: 0xc6a20018  lwc1        $f2, 0x18($s5)
    ctx->pc = 0x4b6d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b6d74:
    // 0x4b6d74: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4b6d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4b6d78:
    // 0x4b6d78: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x4b6d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b6d7c:
    // 0x4b6d7c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x4b6d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4b6d80:
    // 0x4b6d80: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x4b6d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b6d84:
    // 0x4b6d84: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x4b6d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_4b6d88:
    // 0x4b6d88: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x4b6d88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_4b6d8c:
    // 0x4b6d8c: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x4b6d8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_4b6d90:
    // 0x4b6d90: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x4b6d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_4b6d94:
    // 0x4b6d94: 0xc6a3002c  lwc1        $f3, 0x2C($s5)
    ctx->pc = 0x4b6d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b6d98:
    // 0x4b6d98: 0xc6a20028  lwc1        $f2, 0x28($s5)
    ctx->pc = 0x4b6d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b6d9c:
    // 0x4b6d9c: 0xc6a10024  lwc1        $f1, 0x24($s5)
    ctx->pc = 0x4b6d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b6da0:
    // 0x4b6da0: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x4b6da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b6da4:
    // 0x4b6da4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4b6da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4b6da8:
    // 0x4b6da8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x4b6da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4b6dac:
    // 0x4b6dac: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x4b6dacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4b6db0:
    // 0x4b6db0: 0xc0a3830  jal         func_28E0C0
label_4b6db4:
    if (ctx->pc == 0x4B6DB4u) {
        ctx->pc = 0x4B6DB4u;
            // 0x4b6db4: 0xe7a3008c  swc1        $f3, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x4B6DB8u;
        goto label_4b6db8;
    }
    ctx->pc = 0x4B6DB0u;
    SET_GPR_U32(ctx, 31, 0x4B6DB8u);
    ctx->pc = 0x4B6DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6DB0u;
            // 0x4b6db4: 0xe7a3008c  swc1        $f3, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6DB8u; }
        if (ctx->pc != 0x4B6DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6DB8u; }
        if (ctx->pc != 0x4B6DB8u) { return; }
    }
    ctx->pc = 0x4B6DB8u;
label_4b6db8:
    // 0x4b6db8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b6dbc:
    // 0x4b6dbc: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x4b6dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4b6dc0:
    // 0x4b6dc0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4b6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4b6dc4:
    // 0x4b6dc4: 0xc0a7a88  jal         func_29EA20
label_4b6dc8:
    if (ctx->pc == 0x4B6DC8u) {
        ctx->pc = 0x4B6DC8u;
            // 0x4b6dc8: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4B6DCCu;
        goto label_4b6dcc;
    }
    ctx->pc = 0x4B6DC4u;
    SET_GPR_U32(ctx, 31, 0x4B6DCCu);
    ctx->pc = 0x4B6DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6DC4u;
            // 0x4b6dc8: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6DCCu; }
        if (ctx->pc != 0x4B6DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6DCCu; }
        if (ctx->pc != 0x4B6DCCu) { return; }
    }
    ctx->pc = 0x4B6DCCu;
label_4b6dcc:
    // 0x4b6dcc: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x4b6dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4b6dd0:
    // 0x4b6dd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b6dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6dd4:
    // 0x4b6dd4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4b6dd8:
    if (ctx->pc == 0x4B6DD8u) {
        ctx->pc = 0x4B6DD8u;
            // 0x4b6dd8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4B6DDCu;
        goto label_4b6ddc;
    }
    ctx->pc = 0x4B6DD4u;
    {
        const bool branch_taken_0x4b6dd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6DD4u;
            // 0x4b6dd8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6dd4) {
            ctx->pc = 0x4B6E0Cu;
            goto label_4b6e0c;
        }
    }
    ctx->pc = 0x4B6DDCu;
label_4b6ddc:
    // 0x4b6ddc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4b6de0:
    // 0x4b6de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b6de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b6de4:
    // 0x4b6de4: 0x8c42a9a8  lw          $v0, -0x5658($v0)
    ctx->pc = 0x4b6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945192)));
label_4b6de8:
    // 0x4b6de8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x4b6de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4b6dec:
    // 0x4b6dec: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x4b6decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4b6df0:
    // 0x4b6df0: 0xc08afe0  jal         func_22BF80
label_4b6df4:
    if (ctx->pc == 0x4B6DF4u) {
        ctx->pc = 0x4B6DF4u;
            // 0x4b6df4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x4B6DF8u;
        goto label_4b6df8;
    }
    ctx->pc = 0x4B6DF0u;
    SET_GPR_U32(ctx, 31, 0x4B6DF8u);
    ctx->pc = 0x4B6DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6DF0u;
            // 0x4b6df4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6DF8u; }
        if (ctx->pc != 0x4B6DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6DF8u; }
        if (ctx->pc != 0x4B6DF8u) { return; }
    }
    ctx->pc = 0x4B6DF8u;
label_4b6df8:
    // 0x4b6df8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b6dfc:
    // 0x4b6dfc: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x4b6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_4b6e00:
    // 0x4b6e00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b6e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b6e04:
    // 0x4b6e04: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x4b6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_4b6e08:
    // 0x4b6e08: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x4b6e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
label_4b6e0c:
    // 0x4b6e0c: 0xaeb00050  sw          $s0, 0x50($s5)
    ctx->pc = 0x4b6e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 16));
label_4b6e10:
    // 0x4b6e10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b6e14:
    // 0x4b6e14: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b6e18:
    // 0x4b6e18: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b6e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4b6e1c:
    // 0x4b6e1c: 0xc08c798  jal         func_231E60
label_4b6e20:
    if (ctx->pc == 0x4B6E20u) {
        ctx->pc = 0x4B6E20u;
            // 0x4b6e20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6E24u;
        goto label_4b6e24;
    }
    ctx->pc = 0x4B6E1Cu;
    SET_GPR_U32(ctx, 31, 0x4B6E24u);
    ctx->pc = 0x4B6E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6E1Cu;
            // 0x4b6e20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6E24u; }
        if (ctx->pc != 0x4B6E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6E24u; }
        if (ctx->pc != 0x4B6E24u) { return; }
    }
    ctx->pc = 0x4B6E24u;
label_4b6e24:
    // 0x4b6e24: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4b6e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4b6e28:
    // 0x4b6e28: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4b6e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4b6e2c:
    // 0x4b6e2c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4b6e2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4b6e30:
    // 0x4b6e30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4b6e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b6e34:
    // 0x4b6e34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4b6e34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b6e38:
    // 0x4b6e38: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4b6e38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b6e3c:
    // 0x4b6e3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4b6e3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b6e40:
    // 0x4b6e40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b6e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b6e44:
    // 0x4b6e44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b6e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6e48:
    // 0x4b6e48: 0x3e00008  jr          $ra
label_4b6e4c:
    if (ctx->pc == 0x4B6E4Cu) {
        ctx->pc = 0x4B6E4Cu;
            // 0x4b6e4c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4B6E50u;
        goto label_4b6e50;
    }
    ctx->pc = 0x4B6E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6E48u;
            // 0x4b6e4c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B6E50u;
label_4b6e50:
    // 0x4b6e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b6e54:
    // 0x4b6e54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b6e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b6e58:
    // 0x4b6e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b6e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b6e5c:
    // 0x4b6e5c: 0xc0aeebc  jal         func_2BBAF0
label_4b6e60:
    if (ctx->pc == 0x4B6E60u) {
        ctx->pc = 0x4B6E60u;
            // 0x4b6e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6E64u;
        goto label_4b6e64;
    }
    ctx->pc = 0x4B6E5Cu;
    SET_GPR_U32(ctx, 31, 0x4B6E64u);
    ctx->pc = 0x4B6E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6E5Cu;
            // 0x4b6e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6E64u; }
        if (ctx->pc != 0x4B6E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6E64u; }
        if (ctx->pc != 0x4B6E64u) { return; }
    }
    ctx->pc = 0x4B6E64u;
label_4b6e64:
    // 0x4b6e64: 0xc0aeeb4  jal         func_2BBAD0
label_4b6e68:
    if (ctx->pc == 0x4B6E68u) {
        ctx->pc = 0x4B6E68u;
            // 0x4b6e68: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4B6E6Cu;
        goto label_4b6e6c;
    }
    ctx->pc = 0x4B6E64u;
    SET_GPR_U32(ctx, 31, 0x4B6E6Cu);
    ctx->pc = 0x4B6E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6E64u;
            // 0x4b6e68: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6E6Cu; }
        if (ctx->pc != 0x4B6E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6E6Cu; }
        if (ctx->pc != 0x4B6E6Cu) { return; }
    }
    ctx->pc = 0x4B6E6Cu;
label_4b6e6c:
    // 0x4b6e6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b6e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b6e70:
    // 0x4b6e70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b6e74:
    // 0x4b6e74: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4b6e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4b6e78:
    // 0x4b6e78: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4b6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4b6e7c:
    // 0x4b6e7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b6e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b6e80:
    // 0x4b6e80: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4b6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4b6e84:
    // 0x4b6e84: 0xc0aeea4  jal         func_2BBA90
label_4b6e88:
    if (ctx->pc == 0x4B6E88u) {
        ctx->pc = 0x4B6E88u;
            // 0x4b6e88: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4B6E8Cu;
        goto label_4b6e8c;
    }
    ctx->pc = 0x4B6E84u;
    SET_GPR_U32(ctx, 31, 0x4B6E8Cu);
    ctx->pc = 0x4B6E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6E84u;
            // 0x4b6e88: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6E8Cu; }
        if (ctx->pc != 0x4B6E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6E8Cu; }
        if (ctx->pc != 0x4B6E8Cu) { return; }
    }
    ctx->pc = 0x4B6E8Cu;
label_4b6e8c:
    // 0x4b6e8c: 0xc0aee8c  jal         func_2BBA30
label_4b6e90:
    if (ctx->pc == 0x4B6E90u) {
        ctx->pc = 0x4B6E90u;
            // 0x4b6e90: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4B6E94u;
        goto label_4b6e94;
    }
    ctx->pc = 0x4B6E8Cu;
    SET_GPR_U32(ctx, 31, 0x4B6E94u);
    ctx->pc = 0x4B6E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6E8Cu;
            // 0x4b6e90: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6E94u; }
        if (ctx->pc != 0x4B6E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6E94u; }
        if (ctx->pc != 0x4B6E94u) { return; }
    }
    ctx->pc = 0x4B6E94u;
label_4b6e94:
    // 0x4b6e94: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4b6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4b6e98:
    // 0x4b6e98: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4b6e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_4b6e9c:
    // 0x4b6e9c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4b6e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4b6ea0:
    // 0x4b6ea0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4b6ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4b6ea4:
    // 0x4b6ea4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4b6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4b6ea8:
    // 0x4b6ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b6eac:
    // 0x4b6eac: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4b6eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_4b6eb0:
    // 0x4b6eb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b6eb4:
    // 0x4b6eb4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4b6eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_4b6eb8:
    // 0x4b6eb8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4b6eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_4b6ebc:
    // 0x4b6ebc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4b6ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_4b6ec0:
    // 0x4b6ec0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4b6ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_4b6ec4:
    // 0x4b6ec4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4b6ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_4b6ec8:
    // 0x4b6ec8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4b6ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_4b6ecc:
    // 0x4b6ecc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4b6eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_4b6ed0:
    // 0x4b6ed0: 0xc0775b8  jal         func_1DD6E0
label_4b6ed4:
    if (ctx->pc == 0x4B6ED4u) {
        ctx->pc = 0x4B6ED4u;
            // 0x4b6ed4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4B6ED8u;
        goto label_4b6ed8;
    }
    ctx->pc = 0x4B6ED0u;
    SET_GPR_U32(ctx, 31, 0x4B6ED8u);
    ctx->pc = 0x4B6ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6ED0u;
            // 0x4b6ed4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6ED8u; }
        if (ctx->pc != 0x4B6ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6ED8u; }
        if (ctx->pc != 0x4B6ED8u) { return; }
    }
    ctx->pc = 0x4B6ED8u;
label_4b6ed8:
    // 0x4b6ed8: 0xc077314  jal         func_1DCC50
label_4b6edc:
    if (ctx->pc == 0x4B6EDCu) {
        ctx->pc = 0x4B6EDCu;
            // 0x4b6edc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4B6EE0u;
        goto label_4b6ee0;
    }
    ctx->pc = 0x4B6ED8u;
    SET_GPR_U32(ctx, 31, 0x4B6EE0u);
    ctx->pc = 0x4B6EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6ED8u;
            // 0x4b6edc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6EE0u; }
        if (ctx->pc != 0x4B6EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6EE0u; }
        if (ctx->pc != 0x4B6EE0u) { return; }
    }
    ctx->pc = 0x4B6EE0u;
label_4b6ee0:
    // 0x4b6ee0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4b6ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4b6ee4:
    // 0x4b6ee4: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x4b6ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_4b6ee8:
    // 0x4b6ee8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4b6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_4b6eec:
    // 0x4b6eec: 0x26040114  addiu       $a0, $s0, 0x114
    ctx->pc = 0x4b6eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
label_4b6ef0:
    // 0x4b6ef0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4b6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b6ef4:
    // 0x4b6ef4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4b6ef4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b6ef8:
    // 0x4b6ef8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b6ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b6efc:
    // 0x4b6efc: 0x24630a80  addiu       $v1, $v1, 0xA80
    ctx->pc = 0x4b6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2688));
label_4b6f00:
    // 0x4b6f00: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x4b6f00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4b6f04:
    // 0x4b6f04: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b6f08:
    // 0x4b6f08: 0x24420ac0  addiu       $v0, $v0, 0xAC0
    ctx->pc = 0x4b6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2752));
label_4b6f0c:
    // 0x4b6f0c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x4b6f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_4b6f10:
    // 0x4b6f10: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b6f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b6f14:
    // 0x4b6f14: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4b6f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4b6f18:
    // 0x4b6f18: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4b6f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4b6f1c:
    // 0x4b6f1c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4b6f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_4b6f20:
    // 0x4b6f20: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x4b6f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
label_4b6f24:
    // 0x4b6f24: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x4b6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
label_4b6f28:
    // 0x4b6f28: 0xc04c968  jal         func_1325A0
label_4b6f2c:
    if (ctx->pc == 0x4B6F2Cu) {
        ctx->pc = 0x4B6F2Cu;
            // 0x4b6f2c: 0xa200014c  sb          $zero, 0x14C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 332), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4B6F30u;
        goto label_4b6f30;
    }
    ctx->pc = 0x4B6F28u;
    SET_GPR_U32(ctx, 31, 0x4B6F30u);
    ctx->pc = 0x4B6F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6F28u;
            // 0x4b6f2c: 0xa200014c  sb          $zero, 0x14C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 332), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6F30u; }
        if (ctx->pc != 0x4B6F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6F30u; }
        if (ctx->pc != 0x4B6F30u) { return; }
    }
    ctx->pc = 0x4B6F30u;
label_4b6f30:
    // 0x4b6f30: 0xc04c968  jal         func_1325A0
label_4b6f34:
    if (ctx->pc == 0x4B6F34u) {
        ctx->pc = 0x4B6F34u;
            // 0x4b6f34: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->pc = 0x4B6F38u;
        goto label_4b6f38;
    }
    ctx->pc = 0x4B6F30u;
    SET_GPR_U32(ctx, 31, 0x4B6F38u);
    ctx->pc = 0x4B6F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6F30u;
            // 0x4b6f34: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6F38u; }
        if (ctx->pc != 0x4B6F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6F38u; }
        if (ctx->pc != 0x4B6F38u) { return; }
    }
    ctx->pc = 0x4B6F38u;
label_4b6f38:
    // 0x4b6f38: 0xc04c968  jal         func_1325A0
label_4b6f3c:
    if (ctx->pc == 0x4B6F3Cu) {
        ctx->pc = 0x4B6F3Cu;
            // 0x4b6f3c: 0x26040134  addiu       $a0, $s0, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
        ctx->pc = 0x4B6F40u;
        goto label_4b6f40;
    }
    ctx->pc = 0x4B6F38u;
    SET_GPR_U32(ctx, 31, 0x4B6F40u);
    ctx->pc = 0x4B6F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6F38u;
            // 0x4b6f3c: 0x26040134  addiu       $a0, $s0, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6F40u; }
        if (ctx->pc != 0x4B6F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6F40u; }
        if (ctx->pc != 0x4B6F40u) { return; }
    }
    ctx->pc = 0x4B6F40u;
label_4b6f40:
    // 0x4b6f40: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x4b6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
label_4b6f44:
    // 0x4b6f44: 0x2604017e  addiu       $a0, $s0, 0x17E
    ctx->pc = 0x4b6f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 382));
label_4b6f48:
    // 0x4b6f48: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x4b6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_4b6f4c:
    // 0x4b6f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b6f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b6f50:
    // 0x4b6f50: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x4b6f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
label_4b6f54:
    // 0x4b6f54: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4b6f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4b6f58:
    // 0x4b6f58: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x4b6f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_4b6f5c:
    // 0x4b6f5c: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x4b6f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
label_4b6f60:
    // 0x4b6f60: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x4b6f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
label_4b6f64:
    // 0x4b6f64: 0xa6000178  sh          $zero, 0x178($s0)
    ctx->pc = 0x4b6f64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 0));
label_4b6f68:
    // 0x4b6f68: 0xc04a576  jal         func_1295D8
label_4b6f6c:
    if (ctx->pc == 0x4B6F6Cu) {
        ctx->pc = 0x4B6F6Cu;
            // 0x4b6f6c: 0xa200017a  sb          $zero, 0x17A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 378), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4B6F70u;
        goto label_4b6f70;
    }
    ctx->pc = 0x4B6F68u;
    SET_GPR_U32(ctx, 31, 0x4B6F70u);
    ctx->pc = 0x4B6F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6F68u;
            // 0x4b6f6c: 0xa200017a  sb          $zero, 0x17A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 378), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6F70u; }
        if (ctx->pc != 0x4B6F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6F70u; }
        if (ctx->pc != 0x4B6F70u) { return; }
    }
    ctx->pc = 0x4B6F70u;
label_4b6f70:
    // 0x4b6f70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b6f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b6f74:
    // 0x4b6f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b6f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6f78:
    // 0x4b6f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b6f7c:
    // 0x4b6f7c: 0x3e00008  jr          $ra
label_4b6f80:
    if (ctx->pc == 0x4B6F80u) {
        ctx->pc = 0x4B6F80u;
            // 0x4b6f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B6F84u;
        goto label_4b6f84;
    }
    ctx->pc = 0x4B6F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6F7Cu;
            // 0x4b6f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B6F84u;
label_4b6f84:
    // 0x4b6f84: 0x0  nop
    ctx->pc = 0x4b6f84u;
    // NOP
label_4b6f88:
    // 0x4b6f88: 0x0  nop
    ctx->pc = 0x4b6f88u;
    // NOP
label_4b6f8c:
    // 0x4b6f8c: 0x0  nop
    ctx->pc = 0x4b6f8cu;
    // NOP
label_4b6f90:
    // 0x4b6f90: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4b6f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b6f94:
    // 0x4b6f94: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4b6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4b6f98:
    // 0x4b6f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b6f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b6f9c:
    // 0x4b6f9c: 0x0  nop
    ctx->pc = 0x4b6f9cu;
    // NOP
label_4b6fa0:
    // 0x4b6fa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4b6fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b6fa4:
    // 0x4b6fa4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4b6fa8:
    if (ctx->pc == 0x4B6FA8u) {
        ctx->pc = 0x4B6FA8u;
            // 0x4b6fa8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4B6FACu;
        goto label_4b6fac;
    }
    ctx->pc = 0x4B6FA4u;
    {
        const bool branch_taken_0x4b6fa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b6fa4) {
            ctx->pc = 0x4B6FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6FA4u;
            // 0x4b6fa8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6FBCu;
            goto label_4b6fbc;
        }
    }
    ctx->pc = 0x4B6FACu;
label_4b6fac:
    // 0x4b6fac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b6facu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b6fb0:
    // 0x4b6fb0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4b6fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4b6fb4:
    // 0x4b6fb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b6fb8:
    if (ctx->pc == 0x4B6FB8u) {
        ctx->pc = 0x4B6FB8u;
            // 0x4b6fb8: 0xac85006c  sw          $a1, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
        ctx->pc = 0x4B6FBCu;
        goto label_4b6fbc;
    }
    ctx->pc = 0x4B6FB4u;
    {
        const bool branch_taken_0x4b6fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6FB4u;
            // 0x4b6fb8: 0xac85006c  sw          $a1, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6fb4) {
            ctx->pc = 0x4B6FD4u;
            goto label_4b6fd4;
        }
    }
    ctx->pc = 0x4B6FBCu;
label_4b6fbc:
    // 0x4b6fbc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4b6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4b6fc0:
    // 0x4b6fc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b6fc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b6fc4:
    // 0x4b6fc4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4b6fc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4b6fc8:
    // 0x4b6fc8: 0x0  nop
    ctx->pc = 0x4b6fc8u;
    // NOP
label_4b6fcc:
    // 0x4b6fcc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4b6fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4b6fd0:
    // 0x4b6fd0: 0xac85006c  sw          $a1, 0x6C($a0)
    ctx->pc = 0x4b6fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
label_4b6fd4:
    // 0x4b6fd4: 0x3e00008  jr          $ra
label_4b6fd8:
    if (ctx->pc == 0x4B6FD8u) {
        ctx->pc = 0x4B6FDCu;
        goto label_4b6fdc;
    }
    ctx->pc = 0x4B6FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B6FDCu;
label_4b6fdc:
    // 0x4b6fdc: 0x0  nop
    ctx->pc = 0x4b6fdcu;
    // NOP
}
