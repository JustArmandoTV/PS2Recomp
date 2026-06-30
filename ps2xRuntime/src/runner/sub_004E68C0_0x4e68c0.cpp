#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E68C0
// Address: 0x4e68c0 - 0x4e73a0
void sub_004E68C0_0x4e68c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E68C0_0x4e68c0");
#endif

    switch (ctx->pc) {
        case 0x4e68c0u: goto label_4e68c0;
        case 0x4e68c4u: goto label_4e68c4;
        case 0x4e68c8u: goto label_4e68c8;
        case 0x4e68ccu: goto label_4e68cc;
        case 0x4e68d0u: goto label_4e68d0;
        case 0x4e68d4u: goto label_4e68d4;
        case 0x4e68d8u: goto label_4e68d8;
        case 0x4e68dcu: goto label_4e68dc;
        case 0x4e68e0u: goto label_4e68e0;
        case 0x4e68e4u: goto label_4e68e4;
        case 0x4e68e8u: goto label_4e68e8;
        case 0x4e68ecu: goto label_4e68ec;
        case 0x4e68f0u: goto label_4e68f0;
        case 0x4e68f4u: goto label_4e68f4;
        case 0x4e68f8u: goto label_4e68f8;
        case 0x4e68fcu: goto label_4e68fc;
        case 0x4e6900u: goto label_4e6900;
        case 0x4e6904u: goto label_4e6904;
        case 0x4e6908u: goto label_4e6908;
        case 0x4e690cu: goto label_4e690c;
        case 0x4e6910u: goto label_4e6910;
        case 0x4e6914u: goto label_4e6914;
        case 0x4e6918u: goto label_4e6918;
        case 0x4e691cu: goto label_4e691c;
        case 0x4e6920u: goto label_4e6920;
        case 0x4e6924u: goto label_4e6924;
        case 0x4e6928u: goto label_4e6928;
        case 0x4e692cu: goto label_4e692c;
        case 0x4e6930u: goto label_4e6930;
        case 0x4e6934u: goto label_4e6934;
        case 0x4e6938u: goto label_4e6938;
        case 0x4e693cu: goto label_4e693c;
        case 0x4e6940u: goto label_4e6940;
        case 0x4e6944u: goto label_4e6944;
        case 0x4e6948u: goto label_4e6948;
        case 0x4e694cu: goto label_4e694c;
        case 0x4e6950u: goto label_4e6950;
        case 0x4e6954u: goto label_4e6954;
        case 0x4e6958u: goto label_4e6958;
        case 0x4e695cu: goto label_4e695c;
        case 0x4e6960u: goto label_4e6960;
        case 0x4e6964u: goto label_4e6964;
        case 0x4e6968u: goto label_4e6968;
        case 0x4e696cu: goto label_4e696c;
        case 0x4e6970u: goto label_4e6970;
        case 0x4e6974u: goto label_4e6974;
        case 0x4e6978u: goto label_4e6978;
        case 0x4e697cu: goto label_4e697c;
        case 0x4e6980u: goto label_4e6980;
        case 0x4e6984u: goto label_4e6984;
        case 0x4e6988u: goto label_4e6988;
        case 0x4e698cu: goto label_4e698c;
        case 0x4e6990u: goto label_4e6990;
        case 0x4e6994u: goto label_4e6994;
        case 0x4e6998u: goto label_4e6998;
        case 0x4e699cu: goto label_4e699c;
        case 0x4e69a0u: goto label_4e69a0;
        case 0x4e69a4u: goto label_4e69a4;
        case 0x4e69a8u: goto label_4e69a8;
        case 0x4e69acu: goto label_4e69ac;
        case 0x4e69b0u: goto label_4e69b0;
        case 0x4e69b4u: goto label_4e69b4;
        case 0x4e69b8u: goto label_4e69b8;
        case 0x4e69bcu: goto label_4e69bc;
        case 0x4e69c0u: goto label_4e69c0;
        case 0x4e69c4u: goto label_4e69c4;
        case 0x4e69c8u: goto label_4e69c8;
        case 0x4e69ccu: goto label_4e69cc;
        case 0x4e69d0u: goto label_4e69d0;
        case 0x4e69d4u: goto label_4e69d4;
        case 0x4e69d8u: goto label_4e69d8;
        case 0x4e69dcu: goto label_4e69dc;
        case 0x4e69e0u: goto label_4e69e0;
        case 0x4e69e4u: goto label_4e69e4;
        case 0x4e69e8u: goto label_4e69e8;
        case 0x4e69ecu: goto label_4e69ec;
        case 0x4e69f0u: goto label_4e69f0;
        case 0x4e69f4u: goto label_4e69f4;
        case 0x4e69f8u: goto label_4e69f8;
        case 0x4e69fcu: goto label_4e69fc;
        case 0x4e6a00u: goto label_4e6a00;
        case 0x4e6a04u: goto label_4e6a04;
        case 0x4e6a08u: goto label_4e6a08;
        case 0x4e6a0cu: goto label_4e6a0c;
        case 0x4e6a10u: goto label_4e6a10;
        case 0x4e6a14u: goto label_4e6a14;
        case 0x4e6a18u: goto label_4e6a18;
        case 0x4e6a1cu: goto label_4e6a1c;
        case 0x4e6a20u: goto label_4e6a20;
        case 0x4e6a24u: goto label_4e6a24;
        case 0x4e6a28u: goto label_4e6a28;
        case 0x4e6a2cu: goto label_4e6a2c;
        case 0x4e6a30u: goto label_4e6a30;
        case 0x4e6a34u: goto label_4e6a34;
        case 0x4e6a38u: goto label_4e6a38;
        case 0x4e6a3cu: goto label_4e6a3c;
        case 0x4e6a40u: goto label_4e6a40;
        case 0x4e6a44u: goto label_4e6a44;
        case 0x4e6a48u: goto label_4e6a48;
        case 0x4e6a4cu: goto label_4e6a4c;
        case 0x4e6a50u: goto label_4e6a50;
        case 0x4e6a54u: goto label_4e6a54;
        case 0x4e6a58u: goto label_4e6a58;
        case 0x4e6a5cu: goto label_4e6a5c;
        case 0x4e6a60u: goto label_4e6a60;
        case 0x4e6a64u: goto label_4e6a64;
        case 0x4e6a68u: goto label_4e6a68;
        case 0x4e6a6cu: goto label_4e6a6c;
        case 0x4e6a70u: goto label_4e6a70;
        case 0x4e6a74u: goto label_4e6a74;
        case 0x4e6a78u: goto label_4e6a78;
        case 0x4e6a7cu: goto label_4e6a7c;
        case 0x4e6a80u: goto label_4e6a80;
        case 0x4e6a84u: goto label_4e6a84;
        case 0x4e6a88u: goto label_4e6a88;
        case 0x4e6a8cu: goto label_4e6a8c;
        case 0x4e6a90u: goto label_4e6a90;
        case 0x4e6a94u: goto label_4e6a94;
        case 0x4e6a98u: goto label_4e6a98;
        case 0x4e6a9cu: goto label_4e6a9c;
        case 0x4e6aa0u: goto label_4e6aa0;
        case 0x4e6aa4u: goto label_4e6aa4;
        case 0x4e6aa8u: goto label_4e6aa8;
        case 0x4e6aacu: goto label_4e6aac;
        case 0x4e6ab0u: goto label_4e6ab0;
        case 0x4e6ab4u: goto label_4e6ab4;
        case 0x4e6ab8u: goto label_4e6ab8;
        case 0x4e6abcu: goto label_4e6abc;
        case 0x4e6ac0u: goto label_4e6ac0;
        case 0x4e6ac4u: goto label_4e6ac4;
        case 0x4e6ac8u: goto label_4e6ac8;
        case 0x4e6accu: goto label_4e6acc;
        case 0x4e6ad0u: goto label_4e6ad0;
        case 0x4e6ad4u: goto label_4e6ad4;
        case 0x4e6ad8u: goto label_4e6ad8;
        case 0x4e6adcu: goto label_4e6adc;
        case 0x4e6ae0u: goto label_4e6ae0;
        case 0x4e6ae4u: goto label_4e6ae4;
        case 0x4e6ae8u: goto label_4e6ae8;
        case 0x4e6aecu: goto label_4e6aec;
        case 0x4e6af0u: goto label_4e6af0;
        case 0x4e6af4u: goto label_4e6af4;
        case 0x4e6af8u: goto label_4e6af8;
        case 0x4e6afcu: goto label_4e6afc;
        case 0x4e6b00u: goto label_4e6b00;
        case 0x4e6b04u: goto label_4e6b04;
        case 0x4e6b08u: goto label_4e6b08;
        case 0x4e6b0cu: goto label_4e6b0c;
        case 0x4e6b10u: goto label_4e6b10;
        case 0x4e6b14u: goto label_4e6b14;
        case 0x4e6b18u: goto label_4e6b18;
        case 0x4e6b1cu: goto label_4e6b1c;
        case 0x4e6b20u: goto label_4e6b20;
        case 0x4e6b24u: goto label_4e6b24;
        case 0x4e6b28u: goto label_4e6b28;
        case 0x4e6b2cu: goto label_4e6b2c;
        case 0x4e6b30u: goto label_4e6b30;
        case 0x4e6b34u: goto label_4e6b34;
        case 0x4e6b38u: goto label_4e6b38;
        case 0x4e6b3cu: goto label_4e6b3c;
        case 0x4e6b40u: goto label_4e6b40;
        case 0x4e6b44u: goto label_4e6b44;
        case 0x4e6b48u: goto label_4e6b48;
        case 0x4e6b4cu: goto label_4e6b4c;
        case 0x4e6b50u: goto label_4e6b50;
        case 0x4e6b54u: goto label_4e6b54;
        case 0x4e6b58u: goto label_4e6b58;
        case 0x4e6b5cu: goto label_4e6b5c;
        case 0x4e6b60u: goto label_4e6b60;
        case 0x4e6b64u: goto label_4e6b64;
        case 0x4e6b68u: goto label_4e6b68;
        case 0x4e6b6cu: goto label_4e6b6c;
        case 0x4e6b70u: goto label_4e6b70;
        case 0x4e6b74u: goto label_4e6b74;
        case 0x4e6b78u: goto label_4e6b78;
        case 0x4e6b7cu: goto label_4e6b7c;
        case 0x4e6b80u: goto label_4e6b80;
        case 0x4e6b84u: goto label_4e6b84;
        case 0x4e6b88u: goto label_4e6b88;
        case 0x4e6b8cu: goto label_4e6b8c;
        case 0x4e6b90u: goto label_4e6b90;
        case 0x4e6b94u: goto label_4e6b94;
        case 0x4e6b98u: goto label_4e6b98;
        case 0x4e6b9cu: goto label_4e6b9c;
        case 0x4e6ba0u: goto label_4e6ba0;
        case 0x4e6ba4u: goto label_4e6ba4;
        case 0x4e6ba8u: goto label_4e6ba8;
        case 0x4e6bacu: goto label_4e6bac;
        case 0x4e6bb0u: goto label_4e6bb0;
        case 0x4e6bb4u: goto label_4e6bb4;
        case 0x4e6bb8u: goto label_4e6bb8;
        case 0x4e6bbcu: goto label_4e6bbc;
        case 0x4e6bc0u: goto label_4e6bc0;
        case 0x4e6bc4u: goto label_4e6bc4;
        case 0x4e6bc8u: goto label_4e6bc8;
        case 0x4e6bccu: goto label_4e6bcc;
        case 0x4e6bd0u: goto label_4e6bd0;
        case 0x4e6bd4u: goto label_4e6bd4;
        case 0x4e6bd8u: goto label_4e6bd8;
        case 0x4e6bdcu: goto label_4e6bdc;
        case 0x4e6be0u: goto label_4e6be0;
        case 0x4e6be4u: goto label_4e6be4;
        case 0x4e6be8u: goto label_4e6be8;
        case 0x4e6becu: goto label_4e6bec;
        case 0x4e6bf0u: goto label_4e6bf0;
        case 0x4e6bf4u: goto label_4e6bf4;
        case 0x4e6bf8u: goto label_4e6bf8;
        case 0x4e6bfcu: goto label_4e6bfc;
        case 0x4e6c00u: goto label_4e6c00;
        case 0x4e6c04u: goto label_4e6c04;
        case 0x4e6c08u: goto label_4e6c08;
        case 0x4e6c0cu: goto label_4e6c0c;
        case 0x4e6c10u: goto label_4e6c10;
        case 0x4e6c14u: goto label_4e6c14;
        case 0x4e6c18u: goto label_4e6c18;
        case 0x4e6c1cu: goto label_4e6c1c;
        case 0x4e6c20u: goto label_4e6c20;
        case 0x4e6c24u: goto label_4e6c24;
        case 0x4e6c28u: goto label_4e6c28;
        case 0x4e6c2cu: goto label_4e6c2c;
        case 0x4e6c30u: goto label_4e6c30;
        case 0x4e6c34u: goto label_4e6c34;
        case 0x4e6c38u: goto label_4e6c38;
        case 0x4e6c3cu: goto label_4e6c3c;
        case 0x4e6c40u: goto label_4e6c40;
        case 0x4e6c44u: goto label_4e6c44;
        case 0x4e6c48u: goto label_4e6c48;
        case 0x4e6c4cu: goto label_4e6c4c;
        case 0x4e6c50u: goto label_4e6c50;
        case 0x4e6c54u: goto label_4e6c54;
        case 0x4e6c58u: goto label_4e6c58;
        case 0x4e6c5cu: goto label_4e6c5c;
        case 0x4e6c60u: goto label_4e6c60;
        case 0x4e6c64u: goto label_4e6c64;
        case 0x4e6c68u: goto label_4e6c68;
        case 0x4e6c6cu: goto label_4e6c6c;
        case 0x4e6c70u: goto label_4e6c70;
        case 0x4e6c74u: goto label_4e6c74;
        case 0x4e6c78u: goto label_4e6c78;
        case 0x4e6c7cu: goto label_4e6c7c;
        case 0x4e6c80u: goto label_4e6c80;
        case 0x4e6c84u: goto label_4e6c84;
        case 0x4e6c88u: goto label_4e6c88;
        case 0x4e6c8cu: goto label_4e6c8c;
        case 0x4e6c90u: goto label_4e6c90;
        case 0x4e6c94u: goto label_4e6c94;
        case 0x4e6c98u: goto label_4e6c98;
        case 0x4e6c9cu: goto label_4e6c9c;
        case 0x4e6ca0u: goto label_4e6ca0;
        case 0x4e6ca4u: goto label_4e6ca4;
        case 0x4e6ca8u: goto label_4e6ca8;
        case 0x4e6cacu: goto label_4e6cac;
        case 0x4e6cb0u: goto label_4e6cb0;
        case 0x4e6cb4u: goto label_4e6cb4;
        case 0x4e6cb8u: goto label_4e6cb8;
        case 0x4e6cbcu: goto label_4e6cbc;
        case 0x4e6cc0u: goto label_4e6cc0;
        case 0x4e6cc4u: goto label_4e6cc4;
        case 0x4e6cc8u: goto label_4e6cc8;
        case 0x4e6cccu: goto label_4e6ccc;
        case 0x4e6cd0u: goto label_4e6cd0;
        case 0x4e6cd4u: goto label_4e6cd4;
        case 0x4e6cd8u: goto label_4e6cd8;
        case 0x4e6cdcu: goto label_4e6cdc;
        case 0x4e6ce0u: goto label_4e6ce0;
        case 0x4e6ce4u: goto label_4e6ce4;
        case 0x4e6ce8u: goto label_4e6ce8;
        case 0x4e6cecu: goto label_4e6cec;
        case 0x4e6cf0u: goto label_4e6cf0;
        case 0x4e6cf4u: goto label_4e6cf4;
        case 0x4e6cf8u: goto label_4e6cf8;
        case 0x4e6cfcu: goto label_4e6cfc;
        case 0x4e6d00u: goto label_4e6d00;
        case 0x4e6d04u: goto label_4e6d04;
        case 0x4e6d08u: goto label_4e6d08;
        case 0x4e6d0cu: goto label_4e6d0c;
        case 0x4e6d10u: goto label_4e6d10;
        case 0x4e6d14u: goto label_4e6d14;
        case 0x4e6d18u: goto label_4e6d18;
        case 0x4e6d1cu: goto label_4e6d1c;
        case 0x4e6d20u: goto label_4e6d20;
        case 0x4e6d24u: goto label_4e6d24;
        case 0x4e6d28u: goto label_4e6d28;
        case 0x4e6d2cu: goto label_4e6d2c;
        case 0x4e6d30u: goto label_4e6d30;
        case 0x4e6d34u: goto label_4e6d34;
        case 0x4e6d38u: goto label_4e6d38;
        case 0x4e6d3cu: goto label_4e6d3c;
        case 0x4e6d40u: goto label_4e6d40;
        case 0x4e6d44u: goto label_4e6d44;
        case 0x4e6d48u: goto label_4e6d48;
        case 0x4e6d4cu: goto label_4e6d4c;
        case 0x4e6d50u: goto label_4e6d50;
        case 0x4e6d54u: goto label_4e6d54;
        case 0x4e6d58u: goto label_4e6d58;
        case 0x4e6d5cu: goto label_4e6d5c;
        case 0x4e6d60u: goto label_4e6d60;
        case 0x4e6d64u: goto label_4e6d64;
        case 0x4e6d68u: goto label_4e6d68;
        case 0x4e6d6cu: goto label_4e6d6c;
        case 0x4e6d70u: goto label_4e6d70;
        case 0x4e6d74u: goto label_4e6d74;
        case 0x4e6d78u: goto label_4e6d78;
        case 0x4e6d7cu: goto label_4e6d7c;
        case 0x4e6d80u: goto label_4e6d80;
        case 0x4e6d84u: goto label_4e6d84;
        case 0x4e6d88u: goto label_4e6d88;
        case 0x4e6d8cu: goto label_4e6d8c;
        case 0x4e6d90u: goto label_4e6d90;
        case 0x4e6d94u: goto label_4e6d94;
        case 0x4e6d98u: goto label_4e6d98;
        case 0x4e6d9cu: goto label_4e6d9c;
        case 0x4e6da0u: goto label_4e6da0;
        case 0x4e6da4u: goto label_4e6da4;
        case 0x4e6da8u: goto label_4e6da8;
        case 0x4e6dacu: goto label_4e6dac;
        case 0x4e6db0u: goto label_4e6db0;
        case 0x4e6db4u: goto label_4e6db4;
        case 0x4e6db8u: goto label_4e6db8;
        case 0x4e6dbcu: goto label_4e6dbc;
        case 0x4e6dc0u: goto label_4e6dc0;
        case 0x4e6dc4u: goto label_4e6dc4;
        case 0x4e6dc8u: goto label_4e6dc8;
        case 0x4e6dccu: goto label_4e6dcc;
        case 0x4e6dd0u: goto label_4e6dd0;
        case 0x4e6dd4u: goto label_4e6dd4;
        case 0x4e6dd8u: goto label_4e6dd8;
        case 0x4e6ddcu: goto label_4e6ddc;
        case 0x4e6de0u: goto label_4e6de0;
        case 0x4e6de4u: goto label_4e6de4;
        case 0x4e6de8u: goto label_4e6de8;
        case 0x4e6decu: goto label_4e6dec;
        case 0x4e6df0u: goto label_4e6df0;
        case 0x4e6df4u: goto label_4e6df4;
        case 0x4e6df8u: goto label_4e6df8;
        case 0x4e6dfcu: goto label_4e6dfc;
        case 0x4e6e00u: goto label_4e6e00;
        case 0x4e6e04u: goto label_4e6e04;
        case 0x4e6e08u: goto label_4e6e08;
        case 0x4e6e0cu: goto label_4e6e0c;
        case 0x4e6e10u: goto label_4e6e10;
        case 0x4e6e14u: goto label_4e6e14;
        case 0x4e6e18u: goto label_4e6e18;
        case 0x4e6e1cu: goto label_4e6e1c;
        case 0x4e6e20u: goto label_4e6e20;
        case 0x4e6e24u: goto label_4e6e24;
        case 0x4e6e28u: goto label_4e6e28;
        case 0x4e6e2cu: goto label_4e6e2c;
        case 0x4e6e30u: goto label_4e6e30;
        case 0x4e6e34u: goto label_4e6e34;
        case 0x4e6e38u: goto label_4e6e38;
        case 0x4e6e3cu: goto label_4e6e3c;
        case 0x4e6e40u: goto label_4e6e40;
        case 0x4e6e44u: goto label_4e6e44;
        case 0x4e6e48u: goto label_4e6e48;
        case 0x4e6e4cu: goto label_4e6e4c;
        case 0x4e6e50u: goto label_4e6e50;
        case 0x4e6e54u: goto label_4e6e54;
        case 0x4e6e58u: goto label_4e6e58;
        case 0x4e6e5cu: goto label_4e6e5c;
        case 0x4e6e60u: goto label_4e6e60;
        case 0x4e6e64u: goto label_4e6e64;
        case 0x4e6e68u: goto label_4e6e68;
        case 0x4e6e6cu: goto label_4e6e6c;
        case 0x4e6e70u: goto label_4e6e70;
        case 0x4e6e74u: goto label_4e6e74;
        case 0x4e6e78u: goto label_4e6e78;
        case 0x4e6e7cu: goto label_4e6e7c;
        case 0x4e6e80u: goto label_4e6e80;
        case 0x4e6e84u: goto label_4e6e84;
        case 0x4e6e88u: goto label_4e6e88;
        case 0x4e6e8cu: goto label_4e6e8c;
        case 0x4e6e90u: goto label_4e6e90;
        case 0x4e6e94u: goto label_4e6e94;
        case 0x4e6e98u: goto label_4e6e98;
        case 0x4e6e9cu: goto label_4e6e9c;
        case 0x4e6ea0u: goto label_4e6ea0;
        case 0x4e6ea4u: goto label_4e6ea4;
        case 0x4e6ea8u: goto label_4e6ea8;
        case 0x4e6eacu: goto label_4e6eac;
        case 0x4e6eb0u: goto label_4e6eb0;
        case 0x4e6eb4u: goto label_4e6eb4;
        case 0x4e6eb8u: goto label_4e6eb8;
        case 0x4e6ebcu: goto label_4e6ebc;
        case 0x4e6ec0u: goto label_4e6ec0;
        case 0x4e6ec4u: goto label_4e6ec4;
        case 0x4e6ec8u: goto label_4e6ec8;
        case 0x4e6eccu: goto label_4e6ecc;
        case 0x4e6ed0u: goto label_4e6ed0;
        case 0x4e6ed4u: goto label_4e6ed4;
        case 0x4e6ed8u: goto label_4e6ed8;
        case 0x4e6edcu: goto label_4e6edc;
        case 0x4e6ee0u: goto label_4e6ee0;
        case 0x4e6ee4u: goto label_4e6ee4;
        case 0x4e6ee8u: goto label_4e6ee8;
        case 0x4e6eecu: goto label_4e6eec;
        case 0x4e6ef0u: goto label_4e6ef0;
        case 0x4e6ef4u: goto label_4e6ef4;
        case 0x4e6ef8u: goto label_4e6ef8;
        case 0x4e6efcu: goto label_4e6efc;
        case 0x4e6f00u: goto label_4e6f00;
        case 0x4e6f04u: goto label_4e6f04;
        case 0x4e6f08u: goto label_4e6f08;
        case 0x4e6f0cu: goto label_4e6f0c;
        case 0x4e6f10u: goto label_4e6f10;
        case 0x4e6f14u: goto label_4e6f14;
        case 0x4e6f18u: goto label_4e6f18;
        case 0x4e6f1cu: goto label_4e6f1c;
        case 0x4e6f20u: goto label_4e6f20;
        case 0x4e6f24u: goto label_4e6f24;
        case 0x4e6f28u: goto label_4e6f28;
        case 0x4e6f2cu: goto label_4e6f2c;
        case 0x4e6f30u: goto label_4e6f30;
        case 0x4e6f34u: goto label_4e6f34;
        case 0x4e6f38u: goto label_4e6f38;
        case 0x4e6f3cu: goto label_4e6f3c;
        case 0x4e6f40u: goto label_4e6f40;
        case 0x4e6f44u: goto label_4e6f44;
        case 0x4e6f48u: goto label_4e6f48;
        case 0x4e6f4cu: goto label_4e6f4c;
        case 0x4e6f50u: goto label_4e6f50;
        case 0x4e6f54u: goto label_4e6f54;
        case 0x4e6f58u: goto label_4e6f58;
        case 0x4e6f5cu: goto label_4e6f5c;
        case 0x4e6f60u: goto label_4e6f60;
        case 0x4e6f64u: goto label_4e6f64;
        case 0x4e6f68u: goto label_4e6f68;
        case 0x4e6f6cu: goto label_4e6f6c;
        case 0x4e6f70u: goto label_4e6f70;
        case 0x4e6f74u: goto label_4e6f74;
        case 0x4e6f78u: goto label_4e6f78;
        case 0x4e6f7cu: goto label_4e6f7c;
        case 0x4e6f80u: goto label_4e6f80;
        case 0x4e6f84u: goto label_4e6f84;
        case 0x4e6f88u: goto label_4e6f88;
        case 0x4e6f8cu: goto label_4e6f8c;
        case 0x4e6f90u: goto label_4e6f90;
        case 0x4e6f94u: goto label_4e6f94;
        case 0x4e6f98u: goto label_4e6f98;
        case 0x4e6f9cu: goto label_4e6f9c;
        case 0x4e6fa0u: goto label_4e6fa0;
        case 0x4e6fa4u: goto label_4e6fa4;
        case 0x4e6fa8u: goto label_4e6fa8;
        case 0x4e6facu: goto label_4e6fac;
        case 0x4e6fb0u: goto label_4e6fb0;
        case 0x4e6fb4u: goto label_4e6fb4;
        case 0x4e6fb8u: goto label_4e6fb8;
        case 0x4e6fbcu: goto label_4e6fbc;
        case 0x4e6fc0u: goto label_4e6fc0;
        case 0x4e6fc4u: goto label_4e6fc4;
        case 0x4e6fc8u: goto label_4e6fc8;
        case 0x4e6fccu: goto label_4e6fcc;
        case 0x4e6fd0u: goto label_4e6fd0;
        case 0x4e6fd4u: goto label_4e6fd4;
        case 0x4e6fd8u: goto label_4e6fd8;
        case 0x4e6fdcu: goto label_4e6fdc;
        case 0x4e6fe0u: goto label_4e6fe0;
        case 0x4e6fe4u: goto label_4e6fe4;
        case 0x4e6fe8u: goto label_4e6fe8;
        case 0x4e6fecu: goto label_4e6fec;
        case 0x4e6ff0u: goto label_4e6ff0;
        case 0x4e6ff4u: goto label_4e6ff4;
        case 0x4e6ff8u: goto label_4e6ff8;
        case 0x4e6ffcu: goto label_4e6ffc;
        case 0x4e7000u: goto label_4e7000;
        case 0x4e7004u: goto label_4e7004;
        case 0x4e7008u: goto label_4e7008;
        case 0x4e700cu: goto label_4e700c;
        case 0x4e7010u: goto label_4e7010;
        case 0x4e7014u: goto label_4e7014;
        case 0x4e7018u: goto label_4e7018;
        case 0x4e701cu: goto label_4e701c;
        case 0x4e7020u: goto label_4e7020;
        case 0x4e7024u: goto label_4e7024;
        case 0x4e7028u: goto label_4e7028;
        case 0x4e702cu: goto label_4e702c;
        case 0x4e7030u: goto label_4e7030;
        case 0x4e7034u: goto label_4e7034;
        case 0x4e7038u: goto label_4e7038;
        case 0x4e703cu: goto label_4e703c;
        case 0x4e7040u: goto label_4e7040;
        case 0x4e7044u: goto label_4e7044;
        case 0x4e7048u: goto label_4e7048;
        case 0x4e704cu: goto label_4e704c;
        case 0x4e7050u: goto label_4e7050;
        case 0x4e7054u: goto label_4e7054;
        case 0x4e7058u: goto label_4e7058;
        case 0x4e705cu: goto label_4e705c;
        case 0x4e7060u: goto label_4e7060;
        case 0x4e7064u: goto label_4e7064;
        case 0x4e7068u: goto label_4e7068;
        case 0x4e706cu: goto label_4e706c;
        case 0x4e7070u: goto label_4e7070;
        case 0x4e7074u: goto label_4e7074;
        case 0x4e7078u: goto label_4e7078;
        case 0x4e707cu: goto label_4e707c;
        case 0x4e7080u: goto label_4e7080;
        case 0x4e7084u: goto label_4e7084;
        case 0x4e7088u: goto label_4e7088;
        case 0x4e708cu: goto label_4e708c;
        case 0x4e7090u: goto label_4e7090;
        case 0x4e7094u: goto label_4e7094;
        case 0x4e7098u: goto label_4e7098;
        case 0x4e709cu: goto label_4e709c;
        case 0x4e70a0u: goto label_4e70a0;
        case 0x4e70a4u: goto label_4e70a4;
        case 0x4e70a8u: goto label_4e70a8;
        case 0x4e70acu: goto label_4e70ac;
        case 0x4e70b0u: goto label_4e70b0;
        case 0x4e70b4u: goto label_4e70b4;
        case 0x4e70b8u: goto label_4e70b8;
        case 0x4e70bcu: goto label_4e70bc;
        case 0x4e70c0u: goto label_4e70c0;
        case 0x4e70c4u: goto label_4e70c4;
        case 0x4e70c8u: goto label_4e70c8;
        case 0x4e70ccu: goto label_4e70cc;
        case 0x4e70d0u: goto label_4e70d0;
        case 0x4e70d4u: goto label_4e70d4;
        case 0x4e70d8u: goto label_4e70d8;
        case 0x4e70dcu: goto label_4e70dc;
        case 0x4e70e0u: goto label_4e70e0;
        case 0x4e70e4u: goto label_4e70e4;
        case 0x4e70e8u: goto label_4e70e8;
        case 0x4e70ecu: goto label_4e70ec;
        case 0x4e70f0u: goto label_4e70f0;
        case 0x4e70f4u: goto label_4e70f4;
        case 0x4e70f8u: goto label_4e70f8;
        case 0x4e70fcu: goto label_4e70fc;
        case 0x4e7100u: goto label_4e7100;
        case 0x4e7104u: goto label_4e7104;
        case 0x4e7108u: goto label_4e7108;
        case 0x4e710cu: goto label_4e710c;
        case 0x4e7110u: goto label_4e7110;
        case 0x4e7114u: goto label_4e7114;
        case 0x4e7118u: goto label_4e7118;
        case 0x4e711cu: goto label_4e711c;
        case 0x4e7120u: goto label_4e7120;
        case 0x4e7124u: goto label_4e7124;
        case 0x4e7128u: goto label_4e7128;
        case 0x4e712cu: goto label_4e712c;
        case 0x4e7130u: goto label_4e7130;
        case 0x4e7134u: goto label_4e7134;
        case 0x4e7138u: goto label_4e7138;
        case 0x4e713cu: goto label_4e713c;
        case 0x4e7140u: goto label_4e7140;
        case 0x4e7144u: goto label_4e7144;
        case 0x4e7148u: goto label_4e7148;
        case 0x4e714cu: goto label_4e714c;
        case 0x4e7150u: goto label_4e7150;
        case 0x4e7154u: goto label_4e7154;
        case 0x4e7158u: goto label_4e7158;
        case 0x4e715cu: goto label_4e715c;
        case 0x4e7160u: goto label_4e7160;
        case 0x4e7164u: goto label_4e7164;
        case 0x4e7168u: goto label_4e7168;
        case 0x4e716cu: goto label_4e716c;
        case 0x4e7170u: goto label_4e7170;
        case 0x4e7174u: goto label_4e7174;
        case 0x4e7178u: goto label_4e7178;
        case 0x4e717cu: goto label_4e717c;
        case 0x4e7180u: goto label_4e7180;
        case 0x4e7184u: goto label_4e7184;
        case 0x4e7188u: goto label_4e7188;
        case 0x4e718cu: goto label_4e718c;
        case 0x4e7190u: goto label_4e7190;
        case 0x4e7194u: goto label_4e7194;
        case 0x4e7198u: goto label_4e7198;
        case 0x4e719cu: goto label_4e719c;
        case 0x4e71a0u: goto label_4e71a0;
        case 0x4e71a4u: goto label_4e71a4;
        case 0x4e71a8u: goto label_4e71a8;
        case 0x4e71acu: goto label_4e71ac;
        case 0x4e71b0u: goto label_4e71b0;
        case 0x4e71b4u: goto label_4e71b4;
        case 0x4e71b8u: goto label_4e71b8;
        case 0x4e71bcu: goto label_4e71bc;
        case 0x4e71c0u: goto label_4e71c0;
        case 0x4e71c4u: goto label_4e71c4;
        case 0x4e71c8u: goto label_4e71c8;
        case 0x4e71ccu: goto label_4e71cc;
        case 0x4e71d0u: goto label_4e71d0;
        case 0x4e71d4u: goto label_4e71d4;
        case 0x4e71d8u: goto label_4e71d8;
        case 0x4e71dcu: goto label_4e71dc;
        case 0x4e71e0u: goto label_4e71e0;
        case 0x4e71e4u: goto label_4e71e4;
        case 0x4e71e8u: goto label_4e71e8;
        case 0x4e71ecu: goto label_4e71ec;
        case 0x4e71f0u: goto label_4e71f0;
        case 0x4e71f4u: goto label_4e71f4;
        case 0x4e71f8u: goto label_4e71f8;
        case 0x4e71fcu: goto label_4e71fc;
        case 0x4e7200u: goto label_4e7200;
        case 0x4e7204u: goto label_4e7204;
        case 0x4e7208u: goto label_4e7208;
        case 0x4e720cu: goto label_4e720c;
        case 0x4e7210u: goto label_4e7210;
        case 0x4e7214u: goto label_4e7214;
        case 0x4e7218u: goto label_4e7218;
        case 0x4e721cu: goto label_4e721c;
        case 0x4e7220u: goto label_4e7220;
        case 0x4e7224u: goto label_4e7224;
        case 0x4e7228u: goto label_4e7228;
        case 0x4e722cu: goto label_4e722c;
        case 0x4e7230u: goto label_4e7230;
        case 0x4e7234u: goto label_4e7234;
        case 0x4e7238u: goto label_4e7238;
        case 0x4e723cu: goto label_4e723c;
        case 0x4e7240u: goto label_4e7240;
        case 0x4e7244u: goto label_4e7244;
        case 0x4e7248u: goto label_4e7248;
        case 0x4e724cu: goto label_4e724c;
        case 0x4e7250u: goto label_4e7250;
        case 0x4e7254u: goto label_4e7254;
        case 0x4e7258u: goto label_4e7258;
        case 0x4e725cu: goto label_4e725c;
        case 0x4e7260u: goto label_4e7260;
        case 0x4e7264u: goto label_4e7264;
        case 0x4e7268u: goto label_4e7268;
        case 0x4e726cu: goto label_4e726c;
        case 0x4e7270u: goto label_4e7270;
        case 0x4e7274u: goto label_4e7274;
        case 0x4e7278u: goto label_4e7278;
        case 0x4e727cu: goto label_4e727c;
        case 0x4e7280u: goto label_4e7280;
        case 0x4e7284u: goto label_4e7284;
        case 0x4e7288u: goto label_4e7288;
        case 0x4e728cu: goto label_4e728c;
        case 0x4e7290u: goto label_4e7290;
        case 0x4e7294u: goto label_4e7294;
        case 0x4e7298u: goto label_4e7298;
        case 0x4e729cu: goto label_4e729c;
        case 0x4e72a0u: goto label_4e72a0;
        case 0x4e72a4u: goto label_4e72a4;
        case 0x4e72a8u: goto label_4e72a8;
        case 0x4e72acu: goto label_4e72ac;
        case 0x4e72b0u: goto label_4e72b0;
        case 0x4e72b4u: goto label_4e72b4;
        case 0x4e72b8u: goto label_4e72b8;
        case 0x4e72bcu: goto label_4e72bc;
        case 0x4e72c0u: goto label_4e72c0;
        case 0x4e72c4u: goto label_4e72c4;
        case 0x4e72c8u: goto label_4e72c8;
        case 0x4e72ccu: goto label_4e72cc;
        case 0x4e72d0u: goto label_4e72d0;
        case 0x4e72d4u: goto label_4e72d4;
        case 0x4e72d8u: goto label_4e72d8;
        case 0x4e72dcu: goto label_4e72dc;
        case 0x4e72e0u: goto label_4e72e0;
        case 0x4e72e4u: goto label_4e72e4;
        case 0x4e72e8u: goto label_4e72e8;
        case 0x4e72ecu: goto label_4e72ec;
        case 0x4e72f0u: goto label_4e72f0;
        case 0x4e72f4u: goto label_4e72f4;
        case 0x4e72f8u: goto label_4e72f8;
        case 0x4e72fcu: goto label_4e72fc;
        case 0x4e7300u: goto label_4e7300;
        case 0x4e7304u: goto label_4e7304;
        case 0x4e7308u: goto label_4e7308;
        case 0x4e730cu: goto label_4e730c;
        case 0x4e7310u: goto label_4e7310;
        case 0x4e7314u: goto label_4e7314;
        case 0x4e7318u: goto label_4e7318;
        case 0x4e731cu: goto label_4e731c;
        case 0x4e7320u: goto label_4e7320;
        case 0x4e7324u: goto label_4e7324;
        case 0x4e7328u: goto label_4e7328;
        case 0x4e732cu: goto label_4e732c;
        case 0x4e7330u: goto label_4e7330;
        case 0x4e7334u: goto label_4e7334;
        case 0x4e7338u: goto label_4e7338;
        case 0x4e733cu: goto label_4e733c;
        case 0x4e7340u: goto label_4e7340;
        case 0x4e7344u: goto label_4e7344;
        case 0x4e7348u: goto label_4e7348;
        case 0x4e734cu: goto label_4e734c;
        case 0x4e7350u: goto label_4e7350;
        case 0x4e7354u: goto label_4e7354;
        case 0x4e7358u: goto label_4e7358;
        case 0x4e735cu: goto label_4e735c;
        case 0x4e7360u: goto label_4e7360;
        case 0x4e7364u: goto label_4e7364;
        case 0x4e7368u: goto label_4e7368;
        case 0x4e736cu: goto label_4e736c;
        case 0x4e7370u: goto label_4e7370;
        case 0x4e7374u: goto label_4e7374;
        case 0x4e7378u: goto label_4e7378;
        case 0x4e737cu: goto label_4e737c;
        case 0x4e7380u: goto label_4e7380;
        case 0x4e7384u: goto label_4e7384;
        case 0x4e7388u: goto label_4e7388;
        case 0x4e738cu: goto label_4e738c;
        case 0x4e7390u: goto label_4e7390;
        case 0x4e7394u: goto label_4e7394;
        case 0x4e7398u: goto label_4e7398;
        case 0x4e739cu: goto label_4e739c;
        default: break;
    }

    ctx->pc = 0x4e68c0u;

label_4e68c0:
    // 0x4e68c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e68c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e68c4:
    // 0x4e68c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4e68c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e68c8:
    // 0x4e68c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e68c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e68cc:
    // 0x4e68cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e68ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e68d0:
    // 0x4e68d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e68d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e68d4:
    // 0x4e68d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e68d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e68d8:
    // 0x4e68d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e68d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e68dc:
    // 0x4e68dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e68dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e68e0:
    // 0x4e68e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4e68e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e68e4:
    // 0x4e68e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4e68e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e68e8:
    // 0x4e68e8: 0xc10ca68  jal         func_4329A0
label_4e68ec:
    if (ctx->pc == 0x4E68ECu) {
        ctx->pc = 0x4E68ECu;
            // 0x4e68ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4E68F0u;
        goto label_4e68f0;
    }
    ctx->pc = 0x4E68E8u;
    SET_GPR_U32(ctx, 31, 0x4E68F0u);
    ctx->pc = 0x4E68ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E68E8u;
            // 0x4e68ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E68F0u; }
        if (ctx->pc != 0x4E68F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E68F0u; }
        if (ctx->pc != 0x4E68F0u) { return; }
    }
    ctx->pc = 0x4E68F0u;
label_4e68f0:
    // 0x4e68f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e68f4:
    // 0x4e68f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e68f8:
    // 0x4e68f8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4e68f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4e68fc:
    // 0x4e68fc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4e68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4e6900:
    // 0x4e6900: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e6900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4e6904:
    // 0x4e6904: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4e6904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4e6908:
    // 0x4e6908: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e6908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4e690c:
    // 0x4e690c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4e690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e6910:
    // 0x4e6910: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4e6910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4e6914:
    // 0x4e6914: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e6914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e6918:
    // 0x4e6918: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4e6918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4e691c:
    // 0x4e691c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4e691cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e6920:
    // 0x4e6920: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4e6920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4e6924:
    // 0x4e6924: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4e6924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4e6928:
    // 0x4e6928: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4e6928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4e692c:
    // 0x4e692c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4e692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4e6930:
    // 0x4e6930: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4e6930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4e6934:
    // 0x4e6934: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e6934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e6938:
    // 0x4e6938: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4e6938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4e693c:
    // 0x4e693c: 0xc0582cc  jal         func_160B30
label_4e6940:
    if (ctx->pc == 0x4E6940u) {
        ctx->pc = 0x4E6940u;
            // 0x4e6940: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4E6944u;
        goto label_4e6944;
    }
    ctx->pc = 0x4E693Cu;
    SET_GPR_U32(ctx, 31, 0x4E6944u);
    ctx->pc = 0x4E6940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E693Cu;
            // 0x4e6940: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6944u; }
        if (ctx->pc != 0x4E6944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6944u; }
        if (ctx->pc != 0x4E6944u) { return; }
    }
    ctx->pc = 0x4E6944u;
label_4e6944:
    // 0x4e6944: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e6944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e6948:
    // 0x4e6948: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4e6948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4e694c:
    // 0x4e694c: 0x24633a58  addiu       $v1, $v1, 0x3A58
    ctx->pc = 0x4e694cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14936));
label_4e6950:
    // 0x4e6950: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4e6950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4e6954:
    // 0x4e6954: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4e6954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4e6958:
    // 0x4e6958: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e6958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e695c:
    // 0x4e695c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e695cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e6960:
    // 0x4e6960: 0xac44aaa0  sw          $a0, -0x5560($v0)
    ctx->pc = 0x4e6960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945440), GPR_U32(ctx, 4));
label_4e6964:
    // 0x4e6964: 0x24633a70  addiu       $v1, $v1, 0x3A70
    ctx->pc = 0x4e6964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14960));
label_4e6968:
    // 0x4e6968: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e6968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e696c:
    // 0x4e696c: 0x24423aa8  addiu       $v0, $v0, 0x3AA8
    ctx->pc = 0x4e696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15016));
label_4e6970:
    // 0x4e6970: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e6970u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4e6974:
    // 0x4e6974: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4e6974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4e6978:
    // 0x4e6978: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4e6978u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4e697c:
    // 0x4e697c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4e697cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4e6980:
    // 0x4e6980: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4e6980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4e6984:
    // 0x4e6984: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4e6984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4e6988:
    // 0x4e6988: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4e6988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4e698c:
    // 0x4e698c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4e698cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4e6990:
    // 0x4e6990: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4e6990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4e6994:
    // 0x4e6994: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4e6994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4e6998:
    // 0x4e6998: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4e6998u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4e699c:
    // 0x4e699c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4e699cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4e69a0:
    // 0x4e69a0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4e69a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_4e69a4:
    // 0x4e69a4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4e69a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_4e69a8:
    // 0x4e69a8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4e69a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4e69ac:
    // 0x4e69ac: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4e69b0:
    if (ctx->pc == 0x4E69B0u) {
        ctx->pc = 0x4E69B4u;
        goto label_4e69b4;
    }
    ctx->pc = 0x4E69ACu;
    {
        const bool branch_taken_0x4e69ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e69ac) {
            ctx->pc = 0x4E6A40u;
            goto label_4e6a40;
        }
    }
    ctx->pc = 0x4E69B4u;
label_4e69b4:
    // 0x4e69b4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x4e69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_4e69b8:
    // 0x4e69b8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4e69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4e69bc:
    // 0x4e69bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4e69c0:
    // 0x4e69c0: 0xc040138  jal         func_1004E0
label_4e69c4:
    if (ctx->pc == 0x4E69C4u) {
        ctx->pc = 0x4E69C4u;
            // 0x4e69c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4E69C8u;
        goto label_4e69c8;
    }
    ctx->pc = 0x4E69C0u;
    SET_GPR_U32(ctx, 31, 0x4E69C8u);
    ctx->pc = 0x4E69C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E69C0u;
            // 0x4e69c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E69C8u; }
        if (ctx->pc != 0x4E69C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E69C8u; }
        if (ctx->pc != 0x4E69C8u) { return; }
    }
    ctx->pc = 0x4E69C8u;
label_4e69c8:
    // 0x4e69c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e69c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4e69cc:
    // 0x4e69cc: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x4e69ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_4e69d0:
    // 0x4e69d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e69d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e69d4:
    // 0x4e69d4: 0x24a56a60  addiu       $a1, $a1, 0x6A60
    ctx->pc = 0x4e69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27232));
label_4e69d8:
    // 0x4e69d8: 0x24c65a70  addiu       $a2, $a2, 0x5A70
    ctx->pc = 0x4e69d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23152));
label_4e69dc:
    // 0x4e69dc: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x4e69dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_4e69e0:
    // 0x4e69e0: 0xc040840  jal         func_102100
label_4e69e4:
    if (ctx->pc == 0x4E69E4u) {
        ctx->pc = 0x4E69E4u;
            // 0x4e69e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E69E8u;
        goto label_4e69e8;
    }
    ctx->pc = 0x4E69E0u;
    SET_GPR_U32(ctx, 31, 0x4E69E8u);
    ctx->pc = 0x4E69E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E69E0u;
            // 0x4e69e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E69E8u; }
        if (ctx->pc != 0x4E69E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E69E8u; }
        if (ctx->pc != 0x4E69E8u) { return; }
    }
    ctx->pc = 0x4E69E8u;
label_4e69e8:
    // 0x4e69e8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4e69e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4e69ec:
    // 0x4e69ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e69ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e69f0:
    // 0x4e69f0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4e69f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4e69f4:
    // 0x4e69f4: 0xc0788fc  jal         func_1E23F0
label_4e69f8:
    if (ctx->pc == 0x4E69F8u) {
        ctx->pc = 0x4E69F8u;
            // 0x4e69f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E69FCu;
        goto label_4e69fc;
    }
    ctx->pc = 0x4E69F4u;
    SET_GPR_U32(ctx, 31, 0x4E69FCu);
    ctx->pc = 0x4E69F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E69F4u;
            // 0x4e69f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E69FCu; }
        if (ctx->pc != 0x4E69FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E69FCu; }
        if (ctx->pc != 0x4E69FCu) { return; }
    }
    ctx->pc = 0x4E69FCu;
label_4e69fc:
    // 0x4e69fc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4e69fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4e6a00:
    // 0x4e6a00: 0xc0788fc  jal         func_1E23F0
label_4e6a04:
    if (ctx->pc == 0x4E6A04u) {
        ctx->pc = 0x4E6A04u;
            // 0x4e6a04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6A08u;
        goto label_4e6a08;
    }
    ctx->pc = 0x4E6A00u;
    SET_GPR_U32(ctx, 31, 0x4E6A08u);
    ctx->pc = 0x4E6A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6A00u;
            // 0x4e6a04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6A08u; }
        if (ctx->pc != 0x4E6A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6A08u; }
        if (ctx->pc != 0x4E6A08u) { return; }
    }
    ctx->pc = 0x4E6A08u;
label_4e6a08:
    // 0x4e6a08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e6a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e6a0c:
    // 0x4e6a0c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4e6a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4e6a10:
    // 0x4e6a10: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4e6a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4e6a14:
    // 0x4e6a14: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4e6a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4e6a18:
    // 0x4e6a18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e6a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e6a1c:
    // 0x4e6a1c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4e6a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4e6a20:
    // 0x4e6a20: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4e6a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4e6a24:
    // 0x4e6a24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e6a28:
    // 0x4e6a28: 0xc0a997c  jal         func_2A65F0
label_4e6a2c:
    if (ctx->pc == 0x4E6A2Cu) {
        ctx->pc = 0x4E6A2Cu;
            // 0x4e6a2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4E6A30u;
        goto label_4e6a30;
    }
    ctx->pc = 0x4E6A28u;
    SET_GPR_U32(ctx, 31, 0x4E6A30u);
    ctx->pc = 0x4E6A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6A28u;
            // 0x4e6a2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6A30u; }
        if (ctx->pc != 0x4E6A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6A30u; }
        if (ctx->pc != 0x4E6A30u) { return; }
    }
    ctx->pc = 0x4E6A30u;
label_4e6a30:
    // 0x4e6a30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4e6a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4e6a34:
    // 0x4e6a34: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4e6a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4e6a38:
    // 0x4e6a38: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4e6a3c:
    if (ctx->pc == 0x4E6A3Cu) {
        ctx->pc = 0x4E6A3Cu;
            // 0x4e6a3c: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x4E6A40u;
        goto label_4e6a40;
    }
    ctx->pc = 0x4E6A38u;
    {
        const bool branch_taken_0x4e6a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E6A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6A38u;
            // 0x4e6a3c: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6a38) {
            ctx->pc = 0x4E6A0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e6a0c;
        }
    }
    ctx->pc = 0x4E6A40u;
label_4e6a40:
    // 0x4e6a40: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e6a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e6a44:
    // 0x4e6a44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e6a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e6a48:
    // 0x4e6a48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e6a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e6a4c:
    // 0x4e6a4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e6a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e6a50:
    // 0x4e6a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e6a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6a54:
    // 0x4e6a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e6a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e6a58:
    // 0x4e6a58: 0x3e00008  jr          $ra
label_4e6a5c:
    if (ctx->pc == 0x4E6A5Cu) {
        ctx->pc = 0x4E6A5Cu;
            // 0x4e6a5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E6A60u;
        goto label_4e6a60;
    }
    ctx->pc = 0x4E6A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6A58u;
            // 0x4e6a5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E6A60u;
label_4e6a60:
    // 0x4e6a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e6a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e6a64:
    // 0x4e6a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e6a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e6a68:
    // 0x4e6a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e6a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e6a6c:
    // 0x4e6a6c: 0xc0aeebc  jal         func_2BBAF0
label_4e6a70:
    if (ctx->pc == 0x4E6A70u) {
        ctx->pc = 0x4E6A70u;
            // 0x4e6a70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6A74u;
        goto label_4e6a74;
    }
    ctx->pc = 0x4E6A6Cu;
    SET_GPR_U32(ctx, 31, 0x4E6A74u);
    ctx->pc = 0x4E6A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6A6Cu;
            // 0x4e6a70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6A74u; }
        if (ctx->pc != 0x4E6A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6A74u; }
        if (ctx->pc != 0x4E6A74u) { return; }
    }
    ctx->pc = 0x4E6A74u;
label_4e6a74:
    // 0x4e6a74: 0xc0aeeb4  jal         func_2BBAD0
label_4e6a78:
    if (ctx->pc == 0x4E6A78u) {
        ctx->pc = 0x4E6A78u;
            // 0x4e6a78: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4E6A7Cu;
        goto label_4e6a7c;
    }
    ctx->pc = 0x4E6A74u;
    SET_GPR_U32(ctx, 31, 0x4E6A7Cu);
    ctx->pc = 0x4E6A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6A74u;
            // 0x4e6a78: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6A7Cu; }
        if (ctx->pc != 0x4E6A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6A7Cu; }
        if (ctx->pc != 0x4E6A7Cu) { return; }
    }
    ctx->pc = 0x4E6A7Cu;
label_4e6a7c:
    // 0x4e6a7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e6a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e6a80:
    // 0x4e6a80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e6a84:
    // 0x4e6a84: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4e6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4e6a88:
    // 0x4e6a88: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4e6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4e6a8c:
    // 0x4e6a8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e6a90:
    // 0x4e6a90: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4e6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4e6a94:
    // 0x4e6a94: 0xc0aeea4  jal         func_2BBA90
label_4e6a98:
    if (ctx->pc == 0x4E6A98u) {
        ctx->pc = 0x4E6A98u;
            // 0x4e6a98: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4E6A9Cu;
        goto label_4e6a9c;
    }
    ctx->pc = 0x4E6A94u;
    SET_GPR_U32(ctx, 31, 0x4E6A9Cu);
    ctx->pc = 0x4E6A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6A94u;
            // 0x4e6a98: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6A9Cu; }
        if (ctx->pc != 0x4E6A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6A9Cu; }
        if (ctx->pc != 0x4E6A9Cu) { return; }
    }
    ctx->pc = 0x4E6A9Cu;
label_4e6a9c:
    // 0x4e6a9c: 0xc0aee8c  jal         func_2BBA30
label_4e6aa0:
    if (ctx->pc == 0x4E6AA0u) {
        ctx->pc = 0x4E6AA0u;
            // 0x4e6aa0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4E6AA4u;
        goto label_4e6aa4;
    }
    ctx->pc = 0x4E6A9Cu;
    SET_GPR_U32(ctx, 31, 0x4E6AA4u);
    ctx->pc = 0x4E6AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6A9Cu;
            // 0x4e6aa0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6AA4u; }
        if (ctx->pc != 0x4E6AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6AA4u; }
        if (ctx->pc != 0x4E6AA4u) { return; }
    }
    ctx->pc = 0x4E6AA4u;
label_4e6aa4:
    // 0x4e6aa4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4e6aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4e6aa8:
    // 0x4e6aa8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4e6aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_4e6aac:
    // 0x4e6aac: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4e6aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4e6ab0:
    // 0x4e6ab0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4e6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4e6ab4:
    // 0x4e6ab4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4e6ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4e6ab8:
    // 0x4e6ab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e6abc:
    // 0x4e6abc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4e6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_4e6ac0:
    // 0x4e6ac0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e6ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e6ac4:
    // 0x4e6ac4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4e6ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_4e6ac8:
    // 0x4e6ac8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4e6ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_4e6acc:
    // 0x4e6acc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4e6accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_4e6ad0:
    // 0x4e6ad0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4e6ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_4e6ad4:
    // 0x4e6ad4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4e6ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_4e6ad8:
    // 0x4e6ad8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4e6ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_4e6adc:
    // 0x4e6adc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4e6adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_4e6ae0:
    // 0x4e6ae0: 0xc0775b8  jal         func_1DD6E0
label_4e6ae4:
    if (ctx->pc == 0x4E6AE4u) {
        ctx->pc = 0x4E6AE4u;
            // 0x4e6ae4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4E6AE8u;
        goto label_4e6ae8;
    }
    ctx->pc = 0x4E6AE0u;
    SET_GPR_U32(ctx, 31, 0x4E6AE8u);
    ctx->pc = 0x4E6AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6AE0u;
            // 0x4e6ae4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6AE8u; }
        if (ctx->pc != 0x4E6AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6AE8u; }
        if (ctx->pc != 0x4E6AE8u) { return; }
    }
    ctx->pc = 0x4E6AE8u;
label_4e6ae8:
    // 0x4e6ae8: 0xc077314  jal         func_1DCC50
label_4e6aec:
    if (ctx->pc == 0x4E6AECu) {
        ctx->pc = 0x4E6AECu;
            // 0x4e6aec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4E6AF0u;
        goto label_4e6af0;
    }
    ctx->pc = 0x4E6AE8u;
    SET_GPR_U32(ctx, 31, 0x4E6AF0u);
    ctx->pc = 0x4E6AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6AE8u;
            // 0x4e6aec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6AF0u; }
        if (ctx->pc != 0x4E6AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6AF0u; }
        if (ctx->pc != 0x4E6AF0u) { return; }
    }
    ctx->pc = 0x4E6AF0u;
label_4e6af0:
    // 0x4e6af0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4e6af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4e6af4:
    // 0x4e6af4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x4e6af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_4e6af8:
    // 0x4e6af8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4e6af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_4e6afc:
    // 0x4e6afc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4e6afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_4e6b00:
    // 0x4e6b00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4e6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e6b04:
    // 0x4e6b04: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x4e6b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_4e6b08:
    // 0x4e6b08: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x4e6b08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4e6b0c:
    // 0x4e6b0c: 0x24a53b10  addiu       $a1, $a1, 0x3B10
    ctx->pc = 0x4e6b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15120));
label_4e6b10:
    // 0x4e6b10: 0x24843b50  addiu       $a0, $a0, 0x3B50
    ctx->pc = 0x4e6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15184));
label_4e6b14:
    // 0x4e6b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e6b18:
    // 0x4e6b18: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x4e6b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4e6b1c:
    // 0x4e6b1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e6b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e6b20:
    // 0x4e6b20: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x4e6b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_4e6b24:
    // 0x4e6b24: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4e6b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_4e6b28:
    // 0x4e6b28: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x4e6b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_4e6b2c:
    // 0x4e6b2c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4e6b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4e6b30:
    // 0x4e6b30: 0xa20300e0  sb          $v1, 0xE0($s0)
    ctx->pc = 0x4e6b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 224), (uint8_t)GPR_U32(ctx, 3));
label_4e6b34:
    // 0x4e6b34: 0xa20300e1  sb          $v1, 0xE1($s0)
    ctx->pc = 0x4e6b34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 225), (uint8_t)GPR_U32(ctx, 3));
label_4e6b38:
    // 0x4e6b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e6b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6b3c:
    // 0x4e6b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e6b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e6b40:
    // 0x4e6b40: 0x3e00008  jr          $ra
label_4e6b44:
    if (ctx->pc == 0x4E6B44u) {
        ctx->pc = 0x4E6B44u;
            // 0x4e6b44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E6B48u;
        goto label_4e6b48;
    }
    ctx->pc = 0x4E6B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6B40u;
            // 0x4e6b44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E6B48u;
label_4e6b48:
    // 0x4e6b48: 0x0  nop
    ctx->pc = 0x4e6b48u;
    // NOP
label_4e6b4c:
    // 0x4e6b4c: 0x0  nop
    ctx->pc = 0x4e6b4cu;
    // NOP
label_4e6b50:
    // 0x4e6b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e6b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e6b54:
    // 0x4e6b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e6b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e6b58:
    // 0x4e6b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e6b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e6b5c:
    // 0x4e6b5c: 0x908300e1  lbu         $v1, 0xE1($a0)
    ctx->pc = 0x4e6b5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 225)));
label_4e6b60:
    // 0x4e6b60: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_4e6b64:
    if (ctx->pc == 0x4E6B64u) {
        ctx->pc = 0x4E6B64u;
            // 0x4e6b64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6B68u;
        goto label_4e6b68;
    }
    ctx->pc = 0x4E6B60u;
    {
        const bool branch_taken_0x4e6b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6B60u;
            // 0x4e6b64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6b60) {
            ctx->pc = 0x4E6B90u;
            goto label_4e6b90;
        }
    }
    ctx->pc = 0x4E6B68u;
label_4e6b68:
    // 0x4e6b68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e6b6c:
    // 0x4e6b6c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4e6b70:
    // 0x4e6b70: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4e6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4e6b74:
    // 0x4e6b74: 0x24638358  addiu       $v1, $v1, -0x7CA8
    ctx->pc = 0x4e6b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935384));
label_4e6b78:
    // 0x4e6b78: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x4e6b78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_4e6b7c:
    // 0x4e6b7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e6b80:
    // 0x4e6b80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4e6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e6b84:
    // 0x4e6b84: 0xc073234  jal         func_1CC8D0
label_4e6b88:
    if (ctx->pc == 0x4E6B88u) {
        ctx->pc = 0x4E6B88u;
            // 0x4e6b88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4E6B8Cu;
        goto label_4e6b8c;
    }
    ctx->pc = 0x4E6B84u;
    SET_GPR_U32(ctx, 31, 0x4E6B8Cu);
    ctx->pc = 0x4E6B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6B84u;
            // 0x4e6b88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6B8Cu; }
        if (ctx->pc != 0x4E6B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6B8Cu; }
        if (ctx->pc != 0x4E6B8Cu) { return; }
    }
    ctx->pc = 0x4E6B8Cu;
label_4e6b8c:
    // 0x4e6b8c: 0xa20000e1  sb          $zero, 0xE1($s0)
    ctx->pc = 0x4e6b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 225), (uint8_t)GPR_U32(ctx, 0));
label_4e6b90:
    // 0x4e6b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e6b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6b94:
    // 0x4e6b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e6b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e6b98:
    // 0x4e6b98: 0x3e00008  jr          $ra
label_4e6b9c:
    if (ctx->pc == 0x4E6B9Cu) {
        ctx->pc = 0x4E6B9Cu;
            // 0x4e6b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E6BA0u;
        goto label_4e6ba0;
    }
    ctx->pc = 0x4E6B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6B98u;
            // 0x4e6b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E6BA0u;
label_4e6ba0:
    // 0x4e6ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e6ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e6ba4:
    // 0x4e6ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e6ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e6ba8:
    // 0x4e6ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e6ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e6bac:
    // 0x4e6bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e6bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e6bb0:
    // 0x4e6bb0: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x4e6bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4e6bb4:
    // 0x4e6bb4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4e6bb8:
    if (ctx->pc == 0x4E6BB8u) {
        ctx->pc = 0x4E6BB8u;
            // 0x4e6bb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6BBCu;
        goto label_4e6bbc;
    }
    ctx->pc = 0x4E6BB4u;
    {
        const bool branch_taken_0x4e6bb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6BB4u;
            // 0x4e6bb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6bb4) {
            ctx->pc = 0x4E6BECu;
            goto label_4e6bec;
        }
    }
    ctx->pc = 0x4E6BBCu;
label_4e6bbc:
    // 0x4e6bbc: 0xc04008c  jal         func_100230
label_4e6bc0:
    if (ctx->pc == 0x4E6BC0u) {
        ctx->pc = 0x4E6BC0u;
            // 0x4e6bc0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E6BC4u;
        goto label_4e6bc4;
    }
    ctx->pc = 0x4E6BBCu;
    SET_GPR_U32(ctx, 31, 0x4E6BC4u);
    ctx->pc = 0x4E6BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6BBCu;
            // 0x4e6bc0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6BC4u; }
        if (ctx->pc != 0x4E6BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6BC4u; }
        if (ctx->pc != 0x4E6BC4u) { return; }
    }
    ctx->pc = 0x4E6BC4u;
label_4e6bc4:
    // 0x4e6bc4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4e6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e6bc8:
    // 0x4e6bc8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4e6bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4e6bcc:
    // 0x4e6bcc: 0xc0407c0  jal         func_101F00
label_4e6bd0:
    if (ctx->pc == 0x4E6BD0u) {
        ctx->pc = 0x4E6BD0u;
            // 0x4e6bd0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x4E6BD4u;
        goto label_4e6bd4;
    }
    ctx->pc = 0x4E6BCCu;
    SET_GPR_U32(ctx, 31, 0x4E6BD4u);
    ctx->pc = 0x4E6BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6BCCu;
            // 0x4e6bd0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6BD4u; }
        if (ctx->pc != 0x4E6BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6BD4u; }
        if (ctx->pc != 0x4E6BD4u) { return; }
    }
    ctx->pc = 0x4E6BD4u;
label_4e6bd4:
    // 0x4e6bd4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4e6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4e6bd8:
    // 0x4e6bd8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4e6bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4e6bdc:
    // 0x4e6bdc: 0xc0407c0  jal         func_101F00
label_4e6be0:
    if (ctx->pc == 0x4E6BE0u) {
        ctx->pc = 0x4E6BE0u;
            // 0x4e6be0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x4E6BE4u;
        goto label_4e6be4;
    }
    ctx->pc = 0x4E6BDCu;
    SET_GPR_U32(ctx, 31, 0x4E6BE4u);
    ctx->pc = 0x4E6BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6BDCu;
            // 0x4e6be0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6BE4u; }
        if (ctx->pc != 0x4E6BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6BE4u; }
        if (ctx->pc != 0x4E6BE4u) { return; }
    }
    ctx->pc = 0x4E6BE4u;
label_4e6be4:
    // 0x4e6be4: 0xc0400a8  jal         func_1002A0
label_4e6be8:
    if (ctx->pc == 0x4E6BE8u) {
        ctx->pc = 0x4E6BE8u;
            // 0x4e6be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6BECu;
        goto label_4e6bec;
    }
    ctx->pc = 0x4E6BE4u;
    SET_GPR_U32(ctx, 31, 0x4E6BECu);
    ctx->pc = 0x4E6BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6BE4u;
            // 0x4e6be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6BECu; }
        if (ctx->pc != 0x4E6BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6BECu; }
        if (ctx->pc != 0x4E6BECu) { return; }
    }
    ctx->pc = 0x4E6BECu;
label_4e6bec:
    // 0x4e6bec: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x4e6becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4e6bf0:
    // 0x4e6bf0: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x4e6bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4e6bf4:
    // 0x4e6bf4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e6bf8:
    if (ctx->pc == 0x4E6BF8u) {
        ctx->pc = 0x4E6BF8u;
            // 0x4e6bf8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4E6BFCu;
        goto label_4e6bfc;
    }
    ctx->pc = 0x4E6BF4u;
    {
        const bool branch_taken_0x4e6bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6bf4) {
            ctx->pc = 0x4E6BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6BF4u;
            // 0x4e6bf8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E6C10u;
            goto label_4e6c10;
        }
    }
    ctx->pc = 0x4E6BFCu;
label_4e6bfc:
    // 0x4e6bfc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4e6bfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4e6c00:
    // 0x4e6c00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e6c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e6c04:
    // 0x4e6c04: 0x320f809  jalr        $t9
label_4e6c08:
    if (ctx->pc == 0x4E6C08u) {
        ctx->pc = 0x4E6C08u;
            // 0x4e6c08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E6C0Cu;
        goto label_4e6c0c;
    }
    ctx->pc = 0x4E6C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E6C0Cu);
        ctx->pc = 0x4E6C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6C04u;
            // 0x4e6c08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E6C0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E6C0Cu; }
            if (ctx->pc != 0x4E6C0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E6C0Cu;
label_4e6c0c:
    // 0x4e6c0c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x4e6c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_4e6c10:
    // 0x4e6c10: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4e6c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4e6c14:
    // 0x4e6c14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e6c18:
    if (ctx->pc == 0x4E6C18u) {
        ctx->pc = 0x4E6C18u;
            // 0x4e6c18: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4E6C1Cu;
        goto label_4e6c1c;
    }
    ctx->pc = 0x4E6C14u;
    {
        const bool branch_taken_0x4e6c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6c14) {
            ctx->pc = 0x4E6C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6C14u;
            // 0x4e6c18: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E6C30u;
            goto label_4e6c30;
        }
    }
    ctx->pc = 0x4E6C1Cu;
label_4e6c1c:
    // 0x4e6c1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e6c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e6c20:
    // 0x4e6c20: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e6c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e6c24:
    // 0x4e6c24: 0x320f809  jalr        $t9
label_4e6c28:
    if (ctx->pc == 0x4E6C28u) {
        ctx->pc = 0x4E6C28u;
            // 0x4e6c28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E6C2Cu;
        goto label_4e6c2c;
    }
    ctx->pc = 0x4E6C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E6C2Cu);
        ctx->pc = 0x4E6C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6C24u;
            // 0x4e6c28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E6C2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E6C2Cu; }
            if (ctx->pc != 0x4E6C2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E6C2Cu;
label_4e6c2c:
    // 0x4e6c2c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4e6c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4e6c30:
    // 0x4e6c30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e6c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e6c34:
    // 0x4e6c34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e6c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6c38:
    // 0x4e6c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e6c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e6c3c:
    // 0x4e6c3c: 0x3e00008  jr          $ra
label_4e6c40:
    if (ctx->pc == 0x4E6C40u) {
        ctx->pc = 0x4E6C40u;
            // 0x4e6c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E6C44u;
        goto label_4e6c44;
    }
    ctx->pc = 0x4E6C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6C3Cu;
            // 0x4e6c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E6C44u;
label_4e6c44:
    // 0x4e6c44: 0x0  nop
    ctx->pc = 0x4e6c44u;
    // NOP
label_4e6c48:
    // 0x4e6c48: 0x0  nop
    ctx->pc = 0x4e6c48u;
    // NOP
label_4e6c4c:
    // 0x4e6c4c: 0x0  nop
    ctx->pc = 0x4e6c4cu;
    // NOP
label_4e6c50:
    // 0x4e6c50: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4e6c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4e6c54:
    // 0x4e6c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e6c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4e6c58:
    // 0x4e6c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e6c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e6c5c:
    // 0x4e6c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e6c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e6c60:
    // 0x4e6c60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e6c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e6c64:
    // 0x4e6c64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e6c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e6c68:
    // 0x4e6c68: 0xc0892d0  jal         func_224B40
label_4e6c6c:
    if (ctx->pc == 0x4E6C6Cu) {
        ctx->pc = 0x4E6C6Cu;
            // 0x4e6c6c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4E6C70u;
        goto label_4e6c70;
    }
    ctx->pc = 0x4E6C68u;
    SET_GPR_U32(ctx, 31, 0x4E6C70u);
    ctx->pc = 0x4E6C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6C68u;
            // 0x4e6c6c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6C70u; }
        if (ctx->pc != 0x4E6C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6C70u; }
        if (ctx->pc != 0x4E6C70u) { return; }
    }
    ctx->pc = 0x4E6C70u;
label_4e6c70:
    // 0x4e6c70: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e6c74:
    // 0x4e6c74: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4e6c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4e6c78:
    // 0x4e6c78: 0x8c42aaa0  lw          $v0, -0x5560($v0)
    ctx->pc = 0x4e6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945440)));
label_4e6c7c:
    // 0x4e6c7c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x4e6c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4e6c80:
    // 0x4e6c80: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4e6c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4e6c84:
    // 0x4e6c84: 0xc0b6e68  jal         func_2DB9A0
label_4e6c88:
    if (ctx->pc == 0x4E6C88u) {
        ctx->pc = 0x4E6C88u;
            // 0x4e6c88: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4E6C8Cu;
        goto label_4e6c8c;
    }
    ctx->pc = 0x4E6C84u;
    SET_GPR_U32(ctx, 31, 0x4E6C8Cu);
    ctx->pc = 0x4E6C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6C84u;
            // 0x4e6c88: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6C8Cu; }
        if (ctx->pc != 0x4E6C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6C8Cu; }
        if (ctx->pc != 0x4E6C8Cu) { return; }
    }
    ctx->pc = 0x4E6C8Cu;
label_4e6c8c:
    // 0x4e6c8c: 0xc0b6dac  jal         func_2DB6B0
label_4e6c90:
    if (ctx->pc == 0x4E6C90u) {
        ctx->pc = 0x4E6C90u;
            // 0x4e6c90: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4E6C94u;
        goto label_4e6c94;
    }
    ctx->pc = 0x4E6C8Cu;
    SET_GPR_U32(ctx, 31, 0x4E6C94u);
    ctx->pc = 0x4E6C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6C8Cu;
            // 0x4e6c90: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6C94u; }
        if (ctx->pc != 0x4E6C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6C94u; }
        if (ctx->pc != 0x4E6C94u) { return; }
    }
    ctx->pc = 0x4E6C94u;
label_4e6c94:
    // 0x4e6c94: 0xc0cac94  jal         func_32B250
label_4e6c98:
    if (ctx->pc == 0x4E6C98u) {
        ctx->pc = 0x4E6C98u;
            // 0x4e6c98: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4E6C9Cu;
        goto label_4e6c9c;
    }
    ctx->pc = 0x4E6C94u;
    SET_GPR_U32(ctx, 31, 0x4E6C9Cu);
    ctx->pc = 0x4E6C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6C94u;
            // 0x4e6c98: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6C9Cu; }
        if (ctx->pc != 0x4E6C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6C9Cu; }
        if (ctx->pc != 0x4E6C9Cu) { return; }
    }
    ctx->pc = 0x4E6C9Cu;
label_4e6c9c:
    // 0x4e6c9c: 0xc0cac84  jal         func_32B210
label_4e6ca0:
    if (ctx->pc == 0x4E6CA0u) {
        ctx->pc = 0x4E6CA0u;
            // 0x4e6ca0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4E6CA4u;
        goto label_4e6ca4;
    }
    ctx->pc = 0x4E6C9Cu;
    SET_GPR_U32(ctx, 31, 0x4E6CA4u);
    ctx->pc = 0x4E6CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6C9Cu;
            // 0x4e6ca0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6CA4u; }
        if (ctx->pc != 0x4E6CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6CA4u; }
        if (ctx->pc != 0x4E6CA4u) { return; }
    }
    ctx->pc = 0x4E6CA4u;
label_4e6ca4:
    // 0x4e6ca4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4e6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4e6ca8:
    // 0x4e6ca8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4e6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4e6cac:
    // 0x4e6cac: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x4e6cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e6cb0:
    // 0x4e6cb0: 0xc0a5a68  jal         func_2969A0
label_4e6cb4:
    if (ctx->pc == 0x4E6CB4u) {
        ctx->pc = 0x4E6CB4u;
            // 0x4e6cb4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4E6CB8u;
        goto label_4e6cb8;
    }
    ctx->pc = 0x4E6CB0u;
    SET_GPR_U32(ctx, 31, 0x4E6CB8u);
    ctx->pc = 0x4E6CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6CB0u;
            // 0x4e6cb4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6CB8u; }
        if (ctx->pc != 0x4E6CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6CB8u; }
        if (ctx->pc != 0x4E6CB8u) { return; }
    }
    ctx->pc = 0x4E6CB8u;
label_4e6cb8:
    // 0x4e6cb8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e6cbc:
    // 0x4e6cbc: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x4e6cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_4e6cc0:
    // 0x4e6cc0: 0x8c43aaa0  lw          $v1, -0x5560($v0)
    ctx->pc = 0x4e6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945440)));
label_4e6cc4:
    // 0x4e6cc4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x4e6cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e6cc8:
    // 0x4e6cc8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x4e6cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e6ccc:
    // 0x4e6ccc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4e6cccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e6cd0:
    // 0x4e6cd0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x4e6cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e6cd4:
    // 0x4e6cd4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4e6cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e6cd8:
    // 0x4e6cd8: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x4e6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_4e6cdc:
    // 0x4e6cdc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x4e6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_4e6ce0:
    // 0x4e6ce0: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x4e6ce0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_4e6ce4:
    // 0x4e6ce4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4e6ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4e6ce8:
    // 0x4e6ce8: 0x3c020121  lui         $v0, 0x121
    ctx->pc = 0x4e6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)289 << 16));
label_4e6cec:
    // 0x4e6cec: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4e6cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4e6cf0:
    // 0x4e6cf0: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x4e6cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_4e6cf4:
    // 0x4e6cf4: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4e6cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4e6cf8:
    // 0x4e6cf8: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x4e6cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_4e6cfc:
    // 0x4e6cfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e6d00:
    // 0x4e6d00: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x4e6d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_4e6d04:
    // 0x4e6d04: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e6d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e6d08:
    // 0x4e6d08: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x4e6d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4e6d0c:
    // 0x4e6d0c: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x4e6d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4e6d10:
    // 0x4e6d10: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x4e6d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4e6d14:
    // 0x4e6d14: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x4e6d14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4e6d18:
    // 0x4e6d18: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x4e6d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_4e6d1c:
    // 0x4e6d1c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x4e6d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4e6d20:
    // 0x4e6d20: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x4e6d20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_4e6d24:
    // 0x4e6d24: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x4e6d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4e6d28:
    // 0x4e6d28: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x4e6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_4e6d2c:
    // 0x4e6d2c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x4e6d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e6d30:
    // 0x4e6d30: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x4e6d30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_4e6d34:
    // 0x4e6d34: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x4e6d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e6d38:
    // 0x4e6d38: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4e6d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4e6d3c:
    // 0x4e6d3c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x4e6d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e6d40:
    // 0x4e6d40: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4e6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4e6d44:
    // 0x4e6d44: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x4e6d44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4e6d48:
    // 0x4e6d48: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x4e6d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4e6d4c:
    // 0x4e6d4c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x4e6d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4e6d50:
    // 0x4e6d50: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x4e6d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e6d54:
    // 0x4e6d54: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x4e6d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e6d58:
    // 0x4e6d58: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x4e6d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e6d5c:
    // 0x4e6d5c: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x4e6d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4e6d60:
    // 0x4e6d60: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x4e6d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4e6d64:
    // 0x4e6d64: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x4e6d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4e6d68:
    // 0x4e6d68: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x4e6d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4e6d6c:
    // 0x4e6d6c: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x4e6d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4e6d70:
    // 0x4e6d70: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x4e6d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4e6d74:
    // 0x4e6d74: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x4e6d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e6d78:
    // 0x4e6d78: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x4e6d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e6d7c:
    // 0x4e6d7c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4e6d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e6d80:
    // 0x4e6d80: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x4e6d80u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4e6d84:
    // 0x4e6d84: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x4e6d84u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4e6d88:
    // 0x4e6d88: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x4e6d88u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4e6d8c:
    // 0x4e6d8c: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x4e6d8cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4e6d90:
    // 0x4e6d90: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x4e6d90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4e6d94:
    // 0x4e6d94: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x4e6d94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4e6d98:
    // 0x4e6d98: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x4e6d98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4e6d9c:
    // 0x4e6d9c: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x4e6d9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4e6da0:
    // 0x4e6da0: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x4e6da0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4e6da4:
    // 0x4e6da4: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x4e6da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4e6da8:
    // 0x4e6da8: 0xc0a7a88  jal         func_29EA20
label_4e6dac:
    if (ctx->pc == 0x4E6DACu) {
        ctx->pc = 0x4E6DACu;
            // 0x4e6dac: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4E6DB0u;
        goto label_4e6db0;
    }
    ctx->pc = 0x4E6DA8u;
    SET_GPR_U32(ctx, 31, 0x4E6DB0u);
    ctx->pc = 0x4E6DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6DA8u;
            // 0x4e6dac: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6DB0u; }
        if (ctx->pc != 0x4E6DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6DB0u; }
        if (ctx->pc != 0x4E6DB0u) { return; }
    }
    ctx->pc = 0x4E6DB0u;
label_4e6db0:
    // 0x4e6db0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4e6db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4e6db4:
    // 0x4e6db4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e6db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e6db8:
    // 0x4e6db8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4e6dbc:
    if (ctx->pc == 0x4E6DBCu) {
        ctx->pc = 0x4E6DBCu;
            // 0x4e6dbc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E6DC0u;
        goto label_4e6dc0;
    }
    ctx->pc = 0x4E6DB8u;
    {
        const bool branch_taken_0x4e6db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6DB8u;
            // 0x4e6dbc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6db8) {
            ctx->pc = 0x4E6E08u;
            goto label_4e6e08;
        }
    }
    ctx->pc = 0x4E6DC0u;
label_4e6dc0:
    // 0x4e6dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e6dc4:
    // 0x4e6dc4: 0xc088ef4  jal         func_223BD0
label_4e6dc8:
    if (ctx->pc == 0x4E6DC8u) {
        ctx->pc = 0x4E6DC8u;
            // 0x4e6dc8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4E6DCCu;
        goto label_4e6dcc;
    }
    ctx->pc = 0x4E6DC4u;
    SET_GPR_U32(ctx, 31, 0x4E6DCCu);
    ctx->pc = 0x4E6DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6DC4u;
            // 0x4e6dc8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6DCCu; }
        if (ctx->pc != 0x4E6DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6DCCu; }
        if (ctx->pc != 0x4E6DCCu) { return; }
    }
    ctx->pc = 0x4E6DCCu;
label_4e6dcc:
    // 0x4e6dcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e6dd0:
    // 0x4e6dd0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e6dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e6dd4:
    // 0x4e6dd4: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4e6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4e6dd8:
    // 0x4e6dd8: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4e6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4e6ddc:
    // 0x4e6ddc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e6ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e6de0:
    // 0x4e6de0: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4e6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_4e6de4:
    // 0x4e6de4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e6de8:
    // 0x4e6de8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e6dec:
    // 0x4e6dec: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4e6decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4e6df0:
    // 0x4e6df0: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4e6df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4e6df4:
    // 0x4e6df4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4e6df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4e6df8:
    // 0x4e6df8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e6dfc:
    // 0x4e6dfc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4e6dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e6e00:
    // 0x4e6e00: 0xc088b38  jal         func_222CE0
label_4e6e04:
    if (ctx->pc == 0x4E6E04u) {
        ctx->pc = 0x4E6E04u;
            // 0x4e6e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6E08u;
        goto label_4e6e08;
    }
    ctx->pc = 0x4E6E00u;
    SET_GPR_U32(ctx, 31, 0x4E6E08u);
    ctx->pc = 0x4E6E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6E00u;
            // 0x4e6e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6E08u; }
        if (ctx->pc != 0x4E6E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6E08u; }
        if (ctx->pc != 0x4E6E08u) { return; }
    }
    ctx->pc = 0x4E6E08u;
label_4e6e08:
    // 0x4e6e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e6e0c:
    // 0x4e6e0c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4e6e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e6e10:
    // 0x4e6e10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e6e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e6e14:
    // 0x4e6e14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e6e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e6e18:
    // 0x4e6e18: 0xc08914c  jal         func_224530
label_4e6e1c:
    if (ctx->pc == 0x4E6E1Cu) {
        ctx->pc = 0x4E6E1Cu;
            // 0x4e6e1c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x4E6E20u;
        goto label_4e6e20;
    }
    ctx->pc = 0x4E6E18u;
    SET_GPR_U32(ctx, 31, 0x4E6E20u);
    ctx->pc = 0x4E6E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6E18u;
            // 0x4e6e1c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6E20u; }
        if (ctx->pc != 0x4E6E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6E20u; }
        if (ctx->pc != 0x4E6E20u) { return; }
    }
    ctx->pc = 0x4E6E20u;
label_4e6e20:
    // 0x4e6e20: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4e6e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e6e24:
    // 0x4e6e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e6e28:
    // 0x4e6e28: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4e6e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e6e2c:
    // 0x4e6e2c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4e6e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e6e30:
    // 0x4e6e30: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4e6e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e6e34:
    // 0x4e6e34: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4e6e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4e6e38:
    // 0x4e6e38: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4e6e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4e6e3c:
    // 0x4e6e3c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4e6e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4e6e40:
    // 0x4e6e40: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4e6e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4e6e44:
    // 0x4e6e44: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4e6e44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4e6e48:
    // 0x4e6e48: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4e6e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4e6e4c:
    // 0x4e6e4c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4e6e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e6e50:
    // 0x4e6e50: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4e6e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e6e54:
    // 0x4e6e54: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4e6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e6e58:
    // 0x4e6e58: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4e6e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4e6e5c:
    // 0x4e6e5c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4e6e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4e6e60:
    // 0x4e6e60: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4e6e60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4e6e64:
    // 0x4e6e64: 0xc0892b0  jal         func_224AC0
label_4e6e68:
    if (ctx->pc == 0x4E6E68u) {
        ctx->pc = 0x4E6E68u;
            // 0x4e6e68: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4E6E6Cu;
        goto label_4e6e6c;
    }
    ctx->pc = 0x4E6E64u;
    SET_GPR_U32(ctx, 31, 0x4E6E6Cu);
    ctx->pc = 0x4E6E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6E64u;
            // 0x4e6e68: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6E6Cu; }
        if (ctx->pc != 0x4E6E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6E6Cu; }
        if (ctx->pc != 0x4E6E6Cu) { return; }
    }
    ctx->pc = 0x4E6E6Cu;
label_4e6e6c:
    // 0x4e6e6c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x4e6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_4e6e70:
    // 0x4e6e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e6e74:
    // 0x4e6e74: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4e6e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4e6e78:
    // 0x4e6e78: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4e6e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4e6e7c:
    // 0x4e6e7c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4e6e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4e6e80:
    // 0x4e6e80: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4e6e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4e6e84:
    // 0x4e6e84: 0xc0891d8  jal         func_224760
label_4e6e88:
    if (ctx->pc == 0x4E6E88u) {
        ctx->pc = 0x4E6E88u;
            // 0x4e6e88: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4E6E8Cu;
        goto label_4e6e8c;
    }
    ctx->pc = 0x4E6E84u;
    SET_GPR_U32(ctx, 31, 0x4E6E8Cu);
    ctx->pc = 0x4E6E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6E84u;
            // 0x4e6e88: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6E8Cu; }
        if (ctx->pc != 0x4E6E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6E8Cu; }
        if (ctx->pc != 0x4E6E8Cu) { return; }
    }
    ctx->pc = 0x4E6E8Cu;
label_4e6e8c:
    // 0x4e6e8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e6e90:
    // 0x4e6e90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e6e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e6e94:
    // 0x4e6e94: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e6e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e6e98:
    // 0x4e6e98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e6e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e6e9c:
    // 0x4e6e9c: 0xc08c164  jal         func_230590
label_4e6ea0:
    if (ctx->pc == 0x4E6EA0u) {
        ctx->pc = 0x4E6EA0u;
            // 0x4e6ea0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E6EA4u;
        goto label_4e6ea4;
    }
    ctx->pc = 0x4E6E9Cu;
    SET_GPR_U32(ctx, 31, 0x4E6EA4u);
    ctx->pc = 0x4E6EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6E9Cu;
            // 0x4e6ea0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6EA4u; }
        if (ctx->pc != 0x4E6EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6EA4u; }
        if (ctx->pc != 0x4E6EA4u) { return; }
    }
    ctx->pc = 0x4E6EA4u;
label_4e6ea4:
    // 0x4e6ea4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4e6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_4e6ea8:
    // 0x4e6ea8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e6ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e6eac:
    // 0x4e6eac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e6eb0:
    // 0x4e6eb0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4e6eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4e6eb4:
    // 0x4e6eb4: 0xc0a7a88  jal         func_29EA20
label_4e6eb8:
    if (ctx->pc == 0x4E6EB8u) {
        ctx->pc = 0x4E6EB8u;
            // 0x4e6eb8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4E6EBCu;
        goto label_4e6ebc;
    }
    ctx->pc = 0x4E6EB4u;
    SET_GPR_U32(ctx, 31, 0x4E6EBCu);
    ctx->pc = 0x4E6EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6EB4u;
            // 0x4e6eb8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6EBCu; }
        if (ctx->pc != 0x4E6EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6EBCu; }
        if (ctx->pc != 0x4E6EBCu) { return; }
    }
    ctx->pc = 0x4E6EBCu;
label_4e6ebc:
    // 0x4e6ebc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4e6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4e6ec0:
    // 0x4e6ec0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e6ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e6ec4:
    // 0x4e6ec4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4e6ec8:
    if (ctx->pc == 0x4E6EC8u) {
        ctx->pc = 0x4E6EC8u;
            // 0x4e6ec8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E6ECCu;
        goto label_4e6ecc;
    }
    ctx->pc = 0x4E6EC4u;
    {
        const bool branch_taken_0x4e6ec4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6EC4u;
            // 0x4e6ec8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6ec4) {
            ctx->pc = 0x4E6EE8u;
            goto label_4e6ee8;
        }
    }
    ctx->pc = 0x4E6ECCu;
label_4e6ecc:
    // 0x4e6ecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e6eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e6ed0:
    // 0x4e6ed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e6ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e6ed4:
    // 0x4e6ed4: 0xc0869d0  jal         func_21A740
label_4e6ed8:
    if (ctx->pc == 0x4E6ED8u) {
        ctx->pc = 0x4E6ED8u;
            // 0x4e6ed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6EDCu;
        goto label_4e6edc;
    }
    ctx->pc = 0x4E6ED4u;
    SET_GPR_U32(ctx, 31, 0x4E6EDCu);
    ctx->pc = 0x4E6ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6ED4u;
            // 0x4e6ed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6EDCu; }
        if (ctx->pc != 0x4E6EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6EDCu; }
        if (ctx->pc != 0x4E6EDCu) { return; }
    }
    ctx->pc = 0x4E6EDCu;
label_4e6edc:
    // 0x4e6edc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e6ee0:
    // 0x4e6ee0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4e6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4e6ee4:
    // 0x4e6ee4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e6ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4e6ee8:
    // 0x4e6ee8: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4e6ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4e6eec:
    // 0x4e6eec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e6ef0:
    // 0x4e6ef0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e6ef4:
    // 0x4e6ef4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e6ef8:
    // 0x4e6ef8: 0xc08c650  jal         func_231940
label_4e6efc:
    if (ctx->pc == 0x4E6EFCu) {
        ctx->pc = 0x4E6EFCu;
            // 0x4e6efc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6F00u;
        goto label_4e6f00;
    }
    ctx->pc = 0x4E6EF8u;
    SET_GPR_U32(ctx, 31, 0x4E6F00u);
    ctx->pc = 0x4E6EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6EF8u;
            // 0x4e6efc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6F00u; }
        if (ctx->pc != 0x4E6F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6F00u; }
        if (ctx->pc != 0x4E6F00u) { return; }
    }
    ctx->pc = 0x4E6F00u;
label_4e6f00:
    // 0x4e6f00: 0xc040180  jal         func_100600
label_4e6f04:
    if (ctx->pc == 0x4E6F04u) {
        ctx->pc = 0x4E6F04u;
            // 0x4e6f04: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x4E6F08u;
        goto label_4e6f08;
    }
    ctx->pc = 0x4E6F00u;
    SET_GPR_U32(ctx, 31, 0x4E6F08u);
    ctx->pc = 0x4E6F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6F00u;
            // 0x4e6f04: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6F08u; }
        if (ctx->pc != 0x4E6F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6F08u; }
        if (ctx->pc != 0x4E6F08u) { return; }
    }
    ctx->pc = 0x4E6F08u;
label_4e6f08:
    // 0x4e6f08: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_4e6f0c:
    if (ctx->pc == 0x4E6F0Cu) {
        ctx->pc = 0x4E6F0Cu;
            // 0x4e6f0c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x4E6F10u;
        goto label_4e6f10;
    }
    ctx->pc = 0x4E6F08u;
    {
        const bool branch_taken_0x4e6f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6f08) {
            ctx->pc = 0x4E6F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6F08u;
            // 0x4e6f0c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E6F58u;
            goto label_4e6f58;
        }
    }
    ctx->pc = 0x4E6F10u;
label_4e6f10:
    // 0x4e6f10: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x4e6f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4e6f14:
    // 0x4e6f14: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4e6f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_4e6f18:
    // 0x4e6f18: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x4e6f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_4e6f1c:
    // 0x4e6f1c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4e6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4e6f20:
    // 0x4e6f20: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4e6f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4e6f24:
    // 0x4e6f24: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x4e6f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_4e6f28:
    // 0x4e6f28: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x4e6f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_4e6f2c:
    // 0x4e6f2c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4e6f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_4e6f30:
    // 0x4e6f30: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x4e6f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_4e6f34:
    // 0x4e6f34: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4e6f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_4e6f38:
    // 0x4e6f38: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x4e6f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_4e6f3c:
    // 0x4e6f3c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x4e6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_4e6f40:
    // 0x4e6f40: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x4e6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_4e6f44:
    // 0x4e6f44: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x4e6f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_4e6f48:
    // 0x4e6f48: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x4e6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_4e6f4c:
    // 0x4e6f4c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x4e6f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_4e6f50:
    // 0x4e6f50: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x4e6f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_4e6f54:
    // 0x4e6f54: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x4e6f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_4e6f58:
    // 0x4e6f58: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4e6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4e6f5c:
    // 0x4e6f5c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x4e6f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4e6f60:
    // 0x4e6f60: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x4e6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4e6f64:
    // 0x4e6f64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4e6f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e6f68:
    // 0x4e6f68: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4e6f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4e6f6c:
    // 0x4e6f6c: 0xc040180  jal         func_100600
label_4e6f70:
    if (ctx->pc == 0x4E6F70u) {
        ctx->pc = 0x4E6F70u;
            // 0x4e6f70: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x4E6F74u;
        goto label_4e6f74;
    }
    ctx->pc = 0x4E6F6Cu;
    SET_GPR_U32(ctx, 31, 0x4E6F74u);
    ctx->pc = 0x4E6F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6F6Cu;
            // 0x4e6f70: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6F74u; }
        if (ctx->pc != 0x4E6F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6F74u; }
        if (ctx->pc != 0x4E6F74u) { return; }
    }
    ctx->pc = 0x4E6F74u;
label_4e6f74:
    // 0x4e6f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e6f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e6f78:
    // 0x4e6f78: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_4e6f7c:
    if (ctx->pc == 0x4E6F7Cu) {
        ctx->pc = 0x4E6F80u;
        goto label_4e6f80;
    }
    ctx->pc = 0x4E6F78u;
    {
        const bool branch_taken_0x4e6f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6f78) {
            ctx->pc = 0x4E6FF8u;
            goto label_4e6ff8;
        }
    }
    ctx->pc = 0x4E6F80u;
label_4e6f80:
    // 0x4e6f80: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4e6f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4e6f84:
    // 0x4e6f84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4e6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e6f88:
    // 0x4e6f88: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e6f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e6f8c:
    // 0x4e6f8c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4e6f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4e6f90:
    // 0x4e6f90: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4e6f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4e6f94:
    // 0x4e6f94: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4e6f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4e6f98:
    // 0x4e6f98: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4e6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4e6f9c:
    // 0x4e6f9c: 0xc040138  jal         func_1004E0
label_4e6fa0:
    if (ctx->pc == 0x4E6FA0u) {
        ctx->pc = 0x4E6FA0u;
            // 0x4e6fa0: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E6FA4u;
        goto label_4e6fa4;
    }
    ctx->pc = 0x4E6F9Cu;
    SET_GPR_U32(ctx, 31, 0x4E6FA4u);
    ctx->pc = 0x4E6FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6F9Cu;
            // 0x4e6fa0: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6FA4u; }
        if (ctx->pc != 0x4E6FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6FA4u; }
        if (ctx->pc != 0x4E6FA4u) { return; }
    }
    ctx->pc = 0x4E6FA4u;
label_4e6fa4:
    // 0x4e6fa4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e6fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e6fa8:
    // 0x4e6fa8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e6fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e6fac:
    // 0x4e6fac: 0xc040138  jal         func_1004E0
label_4e6fb0:
    if (ctx->pc == 0x4E6FB0u) {
        ctx->pc = 0x4E6FB0u;
            // 0x4e6fb0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x4E6FB4u;
        goto label_4e6fb4;
    }
    ctx->pc = 0x4E6FACu;
    SET_GPR_U32(ctx, 31, 0x4E6FB4u);
    ctx->pc = 0x4E6FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6FACu;
            // 0x4e6fb0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6FB4u; }
        if (ctx->pc != 0x4E6FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6FB4u; }
        if (ctx->pc != 0x4E6FB4u) { return; }
    }
    ctx->pc = 0x4E6FB4u;
label_4e6fb4:
    // 0x4e6fb4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x4e6fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_4e6fb8:
    // 0x4e6fb8: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x4e6fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_4e6fbc:
    // 0x4e6fbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e6fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e6fc0:
    // 0x4e6fc0: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x4e6fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_4e6fc4:
    // 0x4e6fc4: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x4e6fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_4e6fc8:
    // 0x4e6fc8: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x4e6fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4e6fcc:
    // 0x4e6fcc: 0xc040840  jal         func_102100
label_4e6fd0:
    if (ctx->pc == 0x4E6FD0u) {
        ctx->pc = 0x4E6FD0u;
            // 0x4e6fd0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4E6FD4u;
        goto label_4e6fd4;
    }
    ctx->pc = 0x4E6FCCu;
    SET_GPR_U32(ctx, 31, 0x4E6FD4u);
    ctx->pc = 0x4E6FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6FCCu;
            // 0x4e6fd0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6FD4u; }
        if (ctx->pc != 0x4E6FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6FD4u; }
        if (ctx->pc != 0x4E6FD4u) { return; }
    }
    ctx->pc = 0x4E6FD4u;
label_4e6fd4:
    // 0x4e6fd4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e6fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4e6fd8:
    // 0x4e6fd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4e6fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e6fdc:
    // 0x4e6fdc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e6fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4e6fe0:
    // 0x4e6fe0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e6fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4e6fe4:
    // 0x4e6fe4: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x4e6fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_4e6fe8:
    // 0x4e6fe8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x4e6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_4e6fec:
    // 0x4e6fec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4e6fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4e6ff0:
    // 0x4e6ff0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4e6ff4:
    if (ctx->pc == 0x4E6FF4u) {
        ctx->pc = 0x4E6FF8u;
        goto label_4e6ff8;
    }
    ctx->pc = 0x4E6FF0u;
    {
        const bool branch_taken_0x4e6ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6ff0) {
            ctx->pc = 0x4E6FDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e6fdc;
        }
    }
    ctx->pc = 0x4E6FF8u;
label_4e6ff8:
    // 0x4e6ff8: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x4e6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_4e6ffc:
    // 0x4e6ffc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e7000:
    // 0x4e7000: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x4e7000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_4e7004:
    // 0x4e7004: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4e7004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e7008:
    // 0x4e7008: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4e7008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e700c:
    // 0x4e700c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4e700cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e7010:
    // 0x4e7010: 0xc0e7d2c  jal         func_39F4B0
label_4e7014:
    if (ctx->pc == 0x4E7014u) {
        ctx->pc = 0x4E7014u;
            // 0x4e7014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7018u;
        goto label_4e7018;
    }
    ctx->pc = 0x4E7010u;
    SET_GPR_U32(ctx, 31, 0x4E7018u);
    ctx->pc = 0x4E7014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7010u;
            // 0x4e7014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7018u; }
        if (ctx->pc != 0x4E7018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7018u; }
        if (ctx->pc != 0x4E7018u) { return; }
    }
    ctx->pc = 0x4E7018u;
label_4e7018:
    // 0x4e7018: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x4e7018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4e701c:
    // 0x4e701c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x4e701cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_4e7020:
    // 0x4e7020: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4e7020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e7024:
    // 0x4e7024: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4e7024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4e7028:
    // 0x4e7028: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e7028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e702c:
    // 0x4e702c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e702cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e7030:
    // 0x4e7030: 0xc0e7d2c  jal         func_39F4B0
label_4e7034:
    if (ctx->pc == 0x4E7034u) {
        ctx->pc = 0x4E7034u;
            // 0x4e7034: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7038u;
        goto label_4e7038;
    }
    ctx->pc = 0x4E7030u;
    SET_GPR_U32(ctx, 31, 0x4E7038u);
    ctx->pc = 0x4E7034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7030u;
            // 0x4e7034: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7038u; }
        if (ctx->pc != 0x4E7038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7038u; }
        if (ctx->pc != 0x4E7038u) { return; }
    }
    ctx->pc = 0x4E7038u;
label_4e7038:
    // 0x4e7038: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x4e7038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4e703c:
    // 0x4e703c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x4e703cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_4e7040:
    // 0x4e7040: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4e7040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e7044:
    // 0x4e7044: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4e7044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e7048:
    // 0x4e7048: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e7048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e704c:
    // 0x4e704c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4e704cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e7050:
    // 0x4e7050: 0xc0e7d2c  jal         func_39F4B0
label_4e7054:
    if (ctx->pc == 0x4E7054u) {
        ctx->pc = 0x4E7054u;
            // 0x4e7054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7058u;
        goto label_4e7058;
    }
    ctx->pc = 0x4E7050u;
    SET_GPR_U32(ctx, 31, 0x4E7058u);
    ctx->pc = 0x4E7054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7050u;
            // 0x4e7054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7058u; }
        if (ctx->pc != 0x4E7058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7058u; }
        if (ctx->pc != 0x4E7058u) { return; }
    }
    ctx->pc = 0x4E7058u;
label_4e7058:
    // 0x4e7058: 0x8e2800b0  lw          $t0, 0xB0($s1)
    ctx->pc = 0x4e7058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4e705c:
    // 0x4e705c: 0x2407fff7  addiu       $a3, $zero, -0x9
    ctx->pc = 0x4e705cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_4e7060:
    // 0x4e7060: 0x2406f9ff  addiu       $a2, $zero, -0x601
    ctx->pc = 0x4e7060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_4e7064:
    // 0x4e7064: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4e7064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4e7068:
    // 0x4e7068: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x4e7068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_4e706c:
    // 0x4e706c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x4e706cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_4e7070:
    // 0x4e7070: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x4e7070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_4e7074:
    // 0x4e7074: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x4e7074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_4e7078:
    // 0x4e7078: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x4e7078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_4e707c:
    // 0x4e707c: 0xae2700b0  sw          $a3, 0xB0($s1)
    ctx->pc = 0x4e707cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 7));
label_4e7080:
    // 0x4e7080: 0x34c60600  ori         $a2, $a2, 0x600
    ctx->pc = 0x4e7080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1536);
label_4e7084:
    // 0x4e7084: 0xae2600b0  sw          $a2, 0xB0($s1)
    ctx->pc = 0x4e7084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 6));
label_4e7088:
    // 0x4e7088: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x4e7088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
label_4e708c:
    // 0x4e708c: 0xae240070  sw          $a0, 0x70($s1)
    ctx->pc = 0x4e708cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 4));
label_4e7090:
    // 0x4e7090: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x4e7090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_4e7094:
    // 0x4e7094: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x4e7094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_4e7098:
    // 0x4e7098: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x4e7098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_4e709c:
    // 0x4e709c: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x4e709cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4e70a0:
    // 0x4e70a0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_4e70a4:
    if (ctx->pc == 0x4E70A4u) {
        ctx->pc = 0x4E70A4u;
            // 0x4e70a4: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x4E70A8u;
        goto label_4e70a8;
    }
    ctx->pc = 0x4E70A0u;
    {
        const bool branch_taken_0x4e70a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E70A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E70A0u;
            // 0x4e70a4: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e70a0) {
            ctx->pc = 0x4E70ACu;
            goto label_4e70ac;
        }
    }
    ctx->pc = 0x4E70A8u;
label_4e70a8:
    // 0x4e70a8: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x4e70a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_4e70ac:
    // 0x4e70ac: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x4e70acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4e70b0:
    // 0x4e70b0: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x4e70b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_4e70b4:
    // 0x4e70b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e70b8:
    // 0x4e70b8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4e70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4e70bc:
    // 0x4e70bc: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4e70bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4e70c0:
    // 0x4e70c0: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x4e70c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_4e70c4:
    // 0x4e70c4: 0xa2240064  sb          $a0, 0x64($s1)
    ctx->pc = 0x4e70c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 4));
label_4e70c8:
    // 0x4e70c8: 0xa2240065  sb          $a0, 0x65($s1)
    ctx->pc = 0x4e70c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 4));
label_4e70cc:
    // 0x4e70cc: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x4e70ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_4e70d0:
    // 0x4e70d0: 0xa2230069  sb          $v1, 0x69($s1)
    ctx->pc = 0x4e70d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 3));
label_4e70d4:
    // 0x4e70d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e70d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e70d8:
    // 0x4e70d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e70d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e70dc:
    // 0x4e70dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e70dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e70e0:
    // 0x4e70e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e70e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e70e4:
    // 0x4e70e4: 0x3e00008  jr          $ra
label_4e70e8:
    if (ctx->pc == 0x4E70E8u) {
        ctx->pc = 0x4E70E8u;
            // 0x4e70e8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4E70ECu;
        goto label_4e70ec;
    }
    ctx->pc = 0x4E70E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E70E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E70E4u;
            // 0x4e70e8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E70ECu;
label_4e70ec:
    // 0x4e70ec: 0x0  nop
    ctx->pc = 0x4e70ecu;
    // NOP
label_4e70f0:
    // 0x4e70f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e70f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e70f4:
    // 0x4e70f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e70f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e70f8:
    // 0x4e70f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e70f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e70fc:
    // 0x4e70fc: 0xc0e3580  jal         func_38D600
label_4e7100:
    if (ctx->pc == 0x4E7100u) {
        ctx->pc = 0x4E7100u;
            // 0x4e7100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7104u;
        goto label_4e7104;
    }
    ctx->pc = 0x4E70FCu;
    SET_GPR_U32(ctx, 31, 0x4E7104u);
    ctx->pc = 0x4E7100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E70FCu;
            // 0x4e7100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7104u; }
        if (ctx->pc != 0x4E7104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7104u; }
        if (ctx->pc != 0x4E7104u) { return; }
    }
    ctx->pc = 0x4E7104u;
label_4e7104:
    // 0x4e7104: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x4e7104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4e7108:
    // 0x4e7108: 0x2405f9ff  addiu       $a1, $zero, -0x601
    ctx->pc = 0x4e7108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_4e710c:
    // 0x4e710c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e7110:
    // 0x4e7110: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4e7110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4e7114:
    // 0x4e7114: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4e7114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4e7118:
    // 0x4e7118: 0x34a50600  ori         $a1, $a1, 0x600
    ctx->pc = 0x4e7118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1536);
label_4e711c:
    // 0x4e711c: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4e711cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_4e7120:
    // 0x4e7120: 0xa2040064  sb          $a0, 0x64($s0)
    ctx->pc = 0x4e7120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 4));
label_4e7124:
    // 0x4e7124: 0xa2040065  sb          $a0, 0x65($s0)
    ctx->pc = 0x4e7124u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 4));
label_4e7128:
    // 0x4e7128: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x4e7128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_4e712c:
    // 0x4e712c: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x4e712cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_4e7130:
    // 0x4e7130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e7130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7134:
    // 0x4e7134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e7134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7138:
    // 0x4e7138: 0x3e00008  jr          $ra
label_4e713c:
    if (ctx->pc == 0x4E713Cu) {
        ctx->pc = 0x4E713Cu;
            // 0x4e713c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E7140u;
        goto label_4e7140;
    }
    ctx->pc = 0x4E7138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E713Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7138u;
            // 0x4e713c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E7140u;
label_4e7140:
    // 0x4e7140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e7140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e7144:
    // 0x4e7144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e7144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e7148:
    // 0x4e7148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e7148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e714c:
    // 0x4e714c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e714cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e7150:
    // 0x4e7150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e7150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e7154:
    // 0x4e7154: 0xc0baaa0  jal         func_2EAA80
label_4e7158:
    if (ctx->pc == 0x4E7158u) {
        ctx->pc = 0x4E7158u;
            // 0x4e7158: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4E715Cu;
        goto label_4e715c;
    }
    ctx->pc = 0x4E7154u;
    SET_GPR_U32(ctx, 31, 0x4E715Cu);
    ctx->pc = 0x4E7158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7154u;
            // 0x4e7158: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E715Cu; }
        if (ctx->pc != 0x4E715Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E715Cu; }
        if (ctx->pc != 0x4E715Cu) { return; }
    }
    ctx->pc = 0x4E715Cu;
label_4e715c:
    // 0x4e715c: 0x920300e0  lbu         $v1, 0xE0($s0)
    ctx->pc = 0x4e715cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 224)));
label_4e7160:
    // 0x4e7160: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_4e7164:
    if (ctx->pc == 0x4E7164u) {
        ctx->pc = 0x4E7164u;
            // 0x4e7164: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4E7168u;
        goto label_4e7168;
    }
    ctx->pc = 0x4E7160u;
    {
        const bool branch_taken_0x4e7160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7160) {
            ctx->pc = 0x4E7164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7160u;
            // 0x4e7164: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E7194u;
            goto label_4e7194;
        }
    }
    ctx->pc = 0x4E7168u;
label_4e7168:
    // 0x4e7168: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e7168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e716c:
    // 0x4e716c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e716cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4e7170:
    // 0x4e7170: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4e7170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4e7174:
    // 0x4e7174: 0x24638360  addiu       $v1, $v1, -0x7CA0
    ctx->pc = 0x4e7174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935392));
label_4e7178:
    // 0x4e7178: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x4e7178u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_4e717c:
    // 0x4e717c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e717cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e7180:
    // 0x4e7180: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4e7180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e7184:
    // 0x4e7184: 0xc073234  jal         func_1CC8D0
label_4e7188:
    if (ctx->pc == 0x4E7188u) {
        ctx->pc = 0x4E7188u;
            // 0x4e7188: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4E718Cu;
        goto label_4e718c;
    }
    ctx->pc = 0x4E7184u;
    SET_GPR_U32(ctx, 31, 0x4E718Cu);
    ctx->pc = 0x4E7188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7184u;
            // 0x4e7188: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E718Cu; }
        if (ctx->pc != 0x4E718Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E718Cu; }
        if (ctx->pc != 0x4E718Cu) { return; }
    }
    ctx->pc = 0x4E718Cu;
label_4e718c:
    // 0x4e718c: 0xa20000e0  sb          $zero, 0xE0($s0)
    ctx->pc = 0x4e718cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 224), (uint8_t)GPR_U32(ctx, 0));
label_4e7190:
    // 0x4e7190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e7190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7194:
    // 0x4e7194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e7194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7198:
    // 0x4e7198: 0x3e00008  jr          $ra
label_4e719c:
    if (ctx->pc == 0x4E719Cu) {
        ctx->pc = 0x4E719Cu;
            // 0x4e719c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E71A0u;
        goto label_4e71a0;
    }
    ctx->pc = 0x4E7198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E719Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7198u;
            // 0x4e719c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E71A0u;
label_4e71a0:
    // 0x4e71a0: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x4e71a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4e71a4:
    // 0x4e71a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e71a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e71a8:
    // 0x4e71a8: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_4e71ac:
    if (ctx->pc == 0x4E71ACu) {
        ctx->pc = 0x4E71B0u;
        goto label_4e71b0;
    }
    ctx->pc = 0x4E71A8u;
    {
        const bool branch_taken_0x4e71a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e71a8) {
            ctx->pc = 0x4E7224u;
            goto label_4e7224;
        }
    }
    ctx->pc = 0x4E71B0u;
label_4e71b0:
    // 0x4e71b0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4e71b4:
    if (ctx->pc == 0x4E71B4u) {
        ctx->pc = 0x4E71B8u;
        goto label_4e71b8;
    }
    ctx->pc = 0x4E71B0u;
    {
        const bool branch_taken_0x4e71b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e71b0) {
            ctx->pc = 0x4E71C0u;
            goto label_4e71c0;
        }
    }
    ctx->pc = 0x4E71B8u;
label_4e71b8:
    // 0x4e71b8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4e71bc:
    if (ctx->pc == 0x4E71BCu) {
        ctx->pc = 0x4E71C0u;
        goto label_4e71c0;
    }
    ctx->pc = 0x4E71B8u;
    {
        const bool branch_taken_0x4e71b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e71b8) {
            ctx->pc = 0x4E7224u;
            goto label_4e7224;
        }
    }
    ctx->pc = 0x4E71C0u;
label_4e71c0:
    // 0x4e71c0: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4e71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4e71c4:
    // 0x4e71c4: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x4e71c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4e71c8:
    // 0x4e71c8: 0x8c63aaa0  lw          $v1, -0x5560($v1)
    ctx->pc = 0x4e71c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945440)));
label_4e71cc:
    // 0x4e71cc: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x4e71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4e71d0:
    // 0x4e71d0: 0x8c690030  lw          $t1, 0x30($v1)
    ctx->pc = 0x4e71d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_4e71d4:
    // 0x4e71d4: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x4e71d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_4e71d8:
    // 0x4e71d8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4e71d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4e71dc:
    // 0x4e71dc: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x4e71dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e71e0:
    // 0x4e71e0: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x4e71e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4e71e4:
    // 0x4e71e4: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4e71e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e71e8:
    // 0x4e71e8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4e71e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_4e71ec:
    // 0x4e71ec: 0x8c65ca10  lw          $a1, -0x35F0($v1)
    ctx->pc = 0x4e71ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953488)));
label_4e71f0:
    // 0x4e71f0: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x4e71f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_4e71f4:
    // 0x4e71f4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4e71f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_4e71f8:
    // 0x4e71f8: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4e71f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4e71fc:
    // 0x4e71fc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4e71fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4e7200:
    // 0x4e7200: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4e7200u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4e7204:
    // 0x4e7204: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x4e7204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_4e7208:
    // 0x4e7208: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e7208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4e720c:
    // 0x4e720c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4e720cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4e7210:
    // 0x4e7210: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x4e7210u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4e7214:
    // 0x4e7214: 0x1d40fff3  bgtz        $t2, . + 4 + (-0xD << 2)
label_4e7218:
    if (ctx->pc == 0x4E7218u) {
        ctx->pc = 0x4E7218u;
            // 0x4e7218: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x4E721Cu;
        goto label_4e721c;
    }
    ctx->pc = 0x4E7214u;
    {
        const bool branch_taken_0x4e7214 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x4E7218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7214u;
            // 0x4e7218: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7214) {
            ctx->pc = 0x4E71E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e71e4;
        }
    }
    ctx->pc = 0x4E721Cu;
label_4e721c:
    // 0x4e721c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e721cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e7220:
    // 0x4e7220: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x4e7220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
label_4e7224:
    // 0x4e7224: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e7224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e7228:
    // 0x4e7228: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e7228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e722c:
    // 0x4e722c: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x4e722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e7230:
    // 0x4e7230: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4e7230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e7234:
    // 0x4e7234: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x4e7234u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4e7238:
    // 0x4e7238: 0xe48100d8  swc1        $f1, 0xD8($a0)
    ctx->pc = 0x4e7238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
label_4e723c:
    // 0x4e723c: 0xc48000dc  lwc1        $f0, 0xDC($a0)
    ctx->pc = 0x4e723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e7240:
    // 0x4e7240: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4e7240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e7244:
    // 0x4e7244: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4e7248:
    if (ctx->pc == 0x4E7248u) {
        ctx->pc = 0x4E724Cu;
        goto label_4e724c;
    }
    ctx->pc = 0x4E7244u;
    {
        const bool branch_taken_0x4e7244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e7244) {
            ctx->pc = 0x4E7250u;
            goto label_4e7250;
        }
    }
    ctx->pc = 0x4E724Cu;
label_4e724c:
    // 0x4e724c: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x4e724cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
label_4e7250:
    // 0x4e7250: 0x3e00008  jr          $ra
label_4e7254:
    if (ctx->pc == 0x4E7254u) {
        ctx->pc = 0x4E7258u;
        goto label_4e7258;
    }
    ctx->pc = 0x4E7250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E7258u;
label_4e7258:
    // 0x4e7258: 0x0  nop
    ctx->pc = 0x4e7258u;
    // NOP
label_4e725c:
    // 0x4e725c: 0x0  nop
    ctx->pc = 0x4e725cu;
    // NOP
label_4e7260:
    // 0x4e7260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e7260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e7264:
    // 0x4e7264: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4e7264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4e7268:
    // 0x4e7268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e7268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e726c:
    // 0x4e726c: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4e726cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4e7270:
    // 0x4e7270: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e7270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e7274:
    // 0x4e7274: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e7274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e7278:
    // 0x4e7278: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x4e7278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4e727c:
    // 0x4e727c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e727cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e7280:
    // 0x4e7280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e7280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7284:
    // 0x4e7284: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4e7284u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4e7288:
    // 0x4e7288: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e7288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e728c:
    // 0x4e728c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e728cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e7290:
    // 0x4e7290: 0xc08bff0  jal         func_22FFC0
label_4e7294:
    if (ctx->pc == 0x4E7294u) {
        ctx->pc = 0x4E7294u;
            // 0x4e7294: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7298u;
        goto label_4e7298;
    }
    ctx->pc = 0x4E7290u;
    SET_GPR_U32(ctx, 31, 0x4E7298u);
    ctx->pc = 0x4E7294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7290u;
            // 0x4e7294: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7298u; }
        if (ctx->pc != 0x4E7298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7298u; }
        if (ctx->pc != 0x4E7298u) { return; }
    }
    ctx->pc = 0x4E7298u;
label_4e7298:
    // 0x4e7298: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4e7298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4e729c:
    // 0x4e729c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4e729cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e72a0:
    // 0x4e72a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e72a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e72a4:
    // 0x4e72a4: 0xc08914c  jal         func_224530
label_4e72a8:
    if (ctx->pc == 0x4E72A8u) {
        ctx->pc = 0x4E72A8u;
            // 0x4e72a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E72ACu;
        goto label_4e72ac;
    }
    ctx->pc = 0x4E72A4u;
    SET_GPR_U32(ctx, 31, 0x4E72ACu);
    ctx->pc = 0x4E72A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E72A4u;
            // 0x4e72a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E72ACu; }
        if (ctx->pc != 0x4E72ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E72ACu; }
        if (ctx->pc != 0x4E72ACu) { return; }
    }
    ctx->pc = 0x4E72ACu;
label_4e72ac:
    // 0x4e72ac: 0xc0e393c  jal         func_38E4F0
label_4e72b0:
    if (ctx->pc == 0x4E72B0u) {
        ctx->pc = 0x4E72B0u;
            // 0x4e72b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E72B4u;
        goto label_4e72b4;
    }
    ctx->pc = 0x4E72ACu;
    SET_GPR_U32(ctx, 31, 0x4E72B4u);
    ctx->pc = 0x4E72B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E72ACu;
            // 0x4e72b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E72B4u; }
        if (ctx->pc != 0x4E72B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E72B4u; }
        if (ctx->pc != 0x4E72B4u) { return; }
    }
    ctx->pc = 0x4E72B4u;
label_4e72b4:
    // 0x4e72b4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4e72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4e72b8:
    // 0x4e72b8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x4e72b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4e72bc:
    // 0x4e72bc: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x4e72bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4e72c0:
    // 0x4e72c0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_4e72c4:
    if (ctx->pc == 0x4E72C4u) {
        ctx->pc = 0x4E72C4u;
            // 0x4e72c4: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x4E72C8u;
        goto label_4e72c8;
    }
    ctx->pc = 0x4E72C0u;
    {
        const bool branch_taken_0x4e72c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E72C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E72C0u;
            // 0x4e72c4: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e72c0) {
            ctx->pc = 0x4E72CCu;
            goto label_4e72cc;
        }
    }
    ctx->pc = 0x4E72C8u;
label_4e72c8:
    // 0x4e72c8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4e72c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_4e72cc:
    // 0x4e72cc: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x4e72ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_4e72d0:
    // 0x4e72d0: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4e72d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4e72d4:
    // 0x4e72d4: 0x8c64aaa0  lw          $a0, -0x5560($v1)
    ctx->pc = 0x4e72d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945440)));
label_4e72d8:
    // 0x4e72d8: 0x8c84008c  lw          $a0, 0x8C($a0)
    ctx->pc = 0x4e72d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_4e72dc:
    // 0x4e72dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e72dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e72e0:
    // 0x4e72e0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x4e72e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e72e4:
    // 0x4e72e4: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x4e72e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_4e72e8:
    // 0x4e72e8: 0xa20300e0  sb          $v1, 0xE0($s0)
    ctx->pc = 0x4e72e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 224), (uint8_t)GPR_U32(ctx, 3));
label_4e72ec:
    // 0x4e72ec: 0xa20300e1  sb          $v1, 0xE1($s0)
    ctx->pc = 0x4e72ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 225), (uint8_t)GPR_U32(ctx, 3));
label_4e72f0:
    // 0x4e72f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e72f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e72f4:
    // 0x4e72f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e72f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e72f8:
    // 0x4e72f8: 0x3e00008  jr          $ra
label_4e72fc:
    if (ctx->pc == 0x4E72FCu) {
        ctx->pc = 0x4E72FCu;
            // 0x4e72fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E7300u;
        goto label_4e7300;
    }
    ctx->pc = 0x4E72F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E72FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E72F8u;
            // 0x4e72fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E7300u;
label_4e7300:
    // 0x4e7300: 0x3e00008  jr          $ra
label_4e7304:
    if (ctx->pc == 0x4E7304u) {
        ctx->pc = 0x4E7304u;
            // 0x4e7304: 0x24025604  addiu       $v0, $zero, 0x5604 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22020));
        ctx->pc = 0x4E7308u;
        goto label_4e7308;
    }
    ctx->pc = 0x4E7300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7300u;
            // 0x4e7304: 0x24025604  addiu       $v0, $zero, 0x5604 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E7308u;
label_4e7308:
    // 0x4e7308: 0x0  nop
    ctx->pc = 0x4e7308u;
    // NOP
label_4e730c:
    // 0x4e730c: 0x0  nop
    ctx->pc = 0x4e730cu;
    // NOP
label_4e7310:
    // 0x4e7310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e7310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e7314:
    // 0x4e7314: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4e7314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4e7318:
    // 0x4e7318: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e7318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e731c:
    // 0x4e731c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e7320:
    // 0x4e7320: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e7320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e7324:
    // 0x4e7324: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e7324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e7328:
    // 0x4e7328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e7328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e732c:
    // 0x4e732c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e7330:
    // 0x4e7330: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4e7330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e7334:
    // 0x4e7334: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4e7338:
    if (ctx->pc == 0x4E7338u) {
        ctx->pc = 0x4E7338u;
            // 0x4e7338: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E733Cu;
        goto label_4e733c;
    }
    ctx->pc = 0x4E7334u;
    {
        const bool branch_taken_0x4e7334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7334u;
            // 0x4e7338: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7334) {
            ctx->pc = 0x4E7378u;
            goto label_4e7378;
        }
    }
    ctx->pc = 0x4E733Cu;
label_4e733c:
    // 0x4e733c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e733cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7340:
    // 0x4e7340: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e7340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7344:
    // 0x4e7344: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e7344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7348:
    // 0x4e7348: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4e7348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4e734c:
    // 0x4e734c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4e734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4e7350:
    // 0x4e7350: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4e7350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e7354:
    // 0x4e7354: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e7354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e7358:
    // 0x4e7358: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4e7358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4e735c:
    // 0x4e735c: 0x320f809  jalr        $t9
label_4e7360:
    if (ctx->pc == 0x4E7360u) {
        ctx->pc = 0x4E7364u;
        goto label_4e7364;
    }
    ctx->pc = 0x4E735Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E7364u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E7364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E7364u; }
            if (ctx->pc != 0x4E7364u) { return; }
        }
        }
    }
    ctx->pc = 0x4E7364u;
label_4e7364:
    // 0x4e7364: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4e7364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4e7368:
    // 0x4e7368: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4e7368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4e736c:
    // 0x4e736c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4e736cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4e7370:
    // 0x4e7370: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4e7374:
    if (ctx->pc == 0x4E7374u) {
        ctx->pc = 0x4E7374u;
            // 0x4e7374: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4E7378u;
        goto label_4e7378;
    }
    ctx->pc = 0x4E7370u;
    {
        const bool branch_taken_0x4e7370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E7374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7370u;
            // 0x4e7374: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7370) {
            ctx->pc = 0x4E7348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e7348;
        }
    }
    ctx->pc = 0x4E7378u;
label_4e7378:
    // 0x4e7378: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e7378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e737c:
    // 0x4e737c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4e737cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4e7380:
    // 0x4e7380: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e7380u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e7384:
    // 0x4e7384: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e7384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e7388:
    // 0x4e7388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e7388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e738c:
    // 0x4e738c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e738cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7390:
    // 0x4e7390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e7390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7394:
    // 0x4e7394: 0x3e00008  jr          $ra
label_4e7398:
    if (ctx->pc == 0x4E7398u) {
        ctx->pc = 0x4E7398u;
            // 0x4e7398: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E739Cu;
        goto label_4e739c;
    }
    ctx->pc = 0x4E7394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7394u;
            // 0x4e7398: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E739Cu;
label_4e739c:
    // 0x4e739c: 0x0  nop
    ctx->pc = 0x4e739cu;
    // NOP
}
