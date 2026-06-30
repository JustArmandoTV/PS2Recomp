#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F0970
// Address: 0x4f0970 - 0x4f1260
void sub_004F0970_0x4f0970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0970_0x4f0970");
#endif

    switch (ctx->pc) {
        case 0x4f0970u: goto label_4f0970;
        case 0x4f0974u: goto label_4f0974;
        case 0x4f0978u: goto label_4f0978;
        case 0x4f097cu: goto label_4f097c;
        case 0x4f0980u: goto label_4f0980;
        case 0x4f0984u: goto label_4f0984;
        case 0x4f0988u: goto label_4f0988;
        case 0x4f098cu: goto label_4f098c;
        case 0x4f0990u: goto label_4f0990;
        case 0x4f0994u: goto label_4f0994;
        case 0x4f0998u: goto label_4f0998;
        case 0x4f099cu: goto label_4f099c;
        case 0x4f09a0u: goto label_4f09a0;
        case 0x4f09a4u: goto label_4f09a4;
        case 0x4f09a8u: goto label_4f09a8;
        case 0x4f09acu: goto label_4f09ac;
        case 0x4f09b0u: goto label_4f09b0;
        case 0x4f09b4u: goto label_4f09b4;
        case 0x4f09b8u: goto label_4f09b8;
        case 0x4f09bcu: goto label_4f09bc;
        case 0x4f09c0u: goto label_4f09c0;
        case 0x4f09c4u: goto label_4f09c4;
        case 0x4f09c8u: goto label_4f09c8;
        case 0x4f09ccu: goto label_4f09cc;
        case 0x4f09d0u: goto label_4f09d0;
        case 0x4f09d4u: goto label_4f09d4;
        case 0x4f09d8u: goto label_4f09d8;
        case 0x4f09dcu: goto label_4f09dc;
        case 0x4f09e0u: goto label_4f09e0;
        case 0x4f09e4u: goto label_4f09e4;
        case 0x4f09e8u: goto label_4f09e8;
        case 0x4f09ecu: goto label_4f09ec;
        case 0x4f09f0u: goto label_4f09f0;
        case 0x4f09f4u: goto label_4f09f4;
        case 0x4f09f8u: goto label_4f09f8;
        case 0x4f09fcu: goto label_4f09fc;
        case 0x4f0a00u: goto label_4f0a00;
        case 0x4f0a04u: goto label_4f0a04;
        case 0x4f0a08u: goto label_4f0a08;
        case 0x4f0a0cu: goto label_4f0a0c;
        case 0x4f0a10u: goto label_4f0a10;
        case 0x4f0a14u: goto label_4f0a14;
        case 0x4f0a18u: goto label_4f0a18;
        case 0x4f0a1cu: goto label_4f0a1c;
        case 0x4f0a20u: goto label_4f0a20;
        case 0x4f0a24u: goto label_4f0a24;
        case 0x4f0a28u: goto label_4f0a28;
        case 0x4f0a2cu: goto label_4f0a2c;
        case 0x4f0a30u: goto label_4f0a30;
        case 0x4f0a34u: goto label_4f0a34;
        case 0x4f0a38u: goto label_4f0a38;
        case 0x4f0a3cu: goto label_4f0a3c;
        case 0x4f0a40u: goto label_4f0a40;
        case 0x4f0a44u: goto label_4f0a44;
        case 0x4f0a48u: goto label_4f0a48;
        case 0x4f0a4cu: goto label_4f0a4c;
        case 0x4f0a50u: goto label_4f0a50;
        case 0x4f0a54u: goto label_4f0a54;
        case 0x4f0a58u: goto label_4f0a58;
        case 0x4f0a5cu: goto label_4f0a5c;
        case 0x4f0a60u: goto label_4f0a60;
        case 0x4f0a64u: goto label_4f0a64;
        case 0x4f0a68u: goto label_4f0a68;
        case 0x4f0a6cu: goto label_4f0a6c;
        case 0x4f0a70u: goto label_4f0a70;
        case 0x4f0a74u: goto label_4f0a74;
        case 0x4f0a78u: goto label_4f0a78;
        case 0x4f0a7cu: goto label_4f0a7c;
        case 0x4f0a80u: goto label_4f0a80;
        case 0x4f0a84u: goto label_4f0a84;
        case 0x4f0a88u: goto label_4f0a88;
        case 0x4f0a8cu: goto label_4f0a8c;
        case 0x4f0a90u: goto label_4f0a90;
        case 0x4f0a94u: goto label_4f0a94;
        case 0x4f0a98u: goto label_4f0a98;
        case 0x4f0a9cu: goto label_4f0a9c;
        case 0x4f0aa0u: goto label_4f0aa0;
        case 0x4f0aa4u: goto label_4f0aa4;
        case 0x4f0aa8u: goto label_4f0aa8;
        case 0x4f0aacu: goto label_4f0aac;
        case 0x4f0ab0u: goto label_4f0ab0;
        case 0x4f0ab4u: goto label_4f0ab4;
        case 0x4f0ab8u: goto label_4f0ab8;
        case 0x4f0abcu: goto label_4f0abc;
        case 0x4f0ac0u: goto label_4f0ac0;
        case 0x4f0ac4u: goto label_4f0ac4;
        case 0x4f0ac8u: goto label_4f0ac8;
        case 0x4f0accu: goto label_4f0acc;
        case 0x4f0ad0u: goto label_4f0ad0;
        case 0x4f0ad4u: goto label_4f0ad4;
        case 0x4f0ad8u: goto label_4f0ad8;
        case 0x4f0adcu: goto label_4f0adc;
        case 0x4f0ae0u: goto label_4f0ae0;
        case 0x4f0ae4u: goto label_4f0ae4;
        case 0x4f0ae8u: goto label_4f0ae8;
        case 0x4f0aecu: goto label_4f0aec;
        case 0x4f0af0u: goto label_4f0af0;
        case 0x4f0af4u: goto label_4f0af4;
        case 0x4f0af8u: goto label_4f0af8;
        case 0x4f0afcu: goto label_4f0afc;
        case 0x4f0b00u: goto label_4f0b00;
        case 0x4f0b04u: goto label_4f0b04;
        case 0x4f0b08u: goto label_4f0b08;
        case 0x4f0b0cu: goto label_4f0b0c;
        case 0x4f0b10u: goto label_4f0b10;
        case 0x4f0b14u: goto label_4f0b14;
        case 0x4f0b18u: goto label_4f0b18;
        case 0x4f0b1cu: goto label_4f0b1c;
        case 0x4f0b20u: goto label_4f0b20;
        case 0x4f0b24u: goto label_4f0b24;
        case 0x4f0b28u: goto label_4f0b28;
        case 0x4f0b2cu: goto label_4f0b2c;
        case 0x4f0b30u: goto label_4f0b30;
        case 0x4f0b34u: goto label_4f0b34;
        case 0x4f0b38u: goto label_4f0b38;
        case 0x4f0b3cu: goto label_4f0b3c;
        case 0x4f0b40u: goto label_4f0b40;
        case 0x4f0b44u: goto label_4f0b44;
        case 0x4f0b48u: goto label_4f0b48;
        case 0x4f0b4cu: goto label_4f0b4c;
        case 0x4f0b50u: goto label_4f0b50;
        case 0x4f0b54u: goto label_4f0b54;
        case 0x4f0b58u: goto label_4f0b58;
        case 0x4f0b5cu: goto label_4f0b5c;
        case 0x4f0b60u: goto label_4f0b60;
        case 0x4f0b64u: goto label_4f0b64;
        case 0x4f0b68u: goto label_4f0b68;
        case 0x4f0b6cu: goto label_4f0b6c;
        case 0x4f0b70u: goto label_4f0b70;
        case 0x4f0b74u: goto label_4f0b74;
        case 0x4f0b78u: goto label_4f0b78;
        case 0x4f0b7cu: goto label_4f0b7c;
        case 0x4f0b80u: goto label_4f0b80;
        case 0x4f0b84u: goto label_4f0b84;
        case 0x4f0b88u: goto label_4f0b88;
        case 0x4f0b8cu: goto label_4f0b8c;
        case 0x4f0b90u: goto label_4f0b90;
        case 0x4f0b94u: goto label_4f0b94;
        case 0x4f0b98u: goto label_4f0b98;
        case 0x4f0b9cu: goto label_4f0b9c;
        case 0x4f0ba0u: goto label_4f0ba0;
        case 0x4f0ba4u: goto label_4f0ba4;
        case 0x4f0ba8u: goto label_4f0ba8;
        case 0x4f0bacu: goto label_4f0bac;
        case 0x4f0bb0u: goto label_4f0bb0;
        case 0x4f0bb4u: goto label_4f0bb4;
        case 0x4f0bb8u: goto label_4f0bb8;
        case 0x4f0bbcu: goto label_4f0bbc;
        case 0x4f0bc0u: goto label_4f0bc0;
        case 0x4f0bc4u: goto label_4f0bc4;
        case 0x4f0bc8u: goto label_4f0bc8;
        case 0x4f0bccu: goto label_4f0bcc;
        case 0x4f0bd0u: goto label_4f0bd0;
        case 0x4f0bd4u: goto label_4f0bd4;
        case 0x4f0bd8u: goto label_4f0bd8;
        case 0x4f0bdcu: goto label_4f0bdc;
        case 0x4f0be0u: goto label_4f0be0;
        case 0x4f0be4u: goto label_4f0be4;
        case 0x4f0be8u: goto label_4f0be8;
        case 0x4f0becu: goto label_4f0bec;
        case 0x4f0bf0u: goto label_4f0bf0;
        case 0x4f0bf4u: goto label_4f0bf4;
        case 0x4f0bf8u: goto label_4f0bf8;
        case 0x4f0bfcu: goto label_4f0bfc;
        case 0x4f0c00u: goto label_4f0c00;
        case 0x4f0c04u: goto label_4f0c04;
        case 0x4f0c08u: goto label_4f0c08;
        case 0x4f0c0cu: goto label_4f0c0c;
        case 0x4f0c10u: goto label_4f0c10;
        case 0x4f0c14u: goto label_4f0c14;
        case 0x4f0c18u: goto label_4f0c18;
        case 0x4f0c1cu: goto label_4f0c1c;
        case 0x4f0c20u: goto label_4f0c20;
        case 0x4f0c24u: goto label_4f0c24;
        case 0x4f0c28u: goto label_4f0c28;
        case 0x4f0c2cu: goto label_4f0c2c;
        case 0x4f0c30u: goto label_4f0c30;
        case 0x4f0c34u: goto label_4f0c34;
        case 0x4f0c38u: goto label_4f0c38;
        case 0x4f0c3cu: goto label_4f0c3c;
        case 0x4f0c40u: goto label_4f0c40;
        case 0x4f0c44u: goto label_4f0c44;
        case 0x4f0c48u: goto label_4f0c48;
        case 0x4f0c4cu: goto label_4f0c4c;
        case 0x4f0c50u: goto label_4f0c50;
        case 0x4f0c54u: goto label_4f0c54;
        case 0x4f0c58u: goto label_4f0c58;
        case 0x4f0c5cu: goto label_4f0c5c;
        case 0x4f0c60u: goto label_4f0c60;
        case 0x4f0c64u: goto label_4f0c64;
        case 0x4f0c68u: goto label_4f0c68;
        case 0x4f0c6cu: goto label_4f0c6c;
        case 0x4f0c70u: goto label_4f0c70;
        case 0x4f0c74u: goto label_4f0c74;
        case 0x4f0c78u: goto label_4f0c78;
        case 0x4f0c7cu: goto label_4f0c7c;
        case 0x4f0c80u: goto label_4f0c80;
        case 0x4f0c84u: goto label_4f0c84;
        case 0x4f0c88u: goto label_4f0c88;
        case 0x4f0c8cu: goto label_4f0c8c;
        case 0x4f0c90u: goto label_4f0c90;
        case 0x4f0c94u: goto label_4f0c94;
        case 0x4f0c98u: goto label_4f0c98;
        case 0x4f0c9cu: goto label_4f0c9c;
        case 0x4f0ca0u: goto label_4f0ca0;
        case 0x4f0ca4u: goto label_4f0ca4;
        case 0x4f0ca8u: goto label_4f0ca8;
        case 0x4f0cacu: goto label_4f0cac;
        case 0x4f0cb0u: goto label_4f0cb0;
        case 0x4f0cb4u: goto label_4f0cb4;
        case 0x4f0cb8u: goto label_4f0cb8;
        case 0x4f0cbcu: goto label_4f0cbc;
        case 0x4f0cc0u: goto label_4f0cc0;
        case 0x4f0cc4u: goto label_4f0cc4;
        case 0x4f0cc8u: goto label_4f0cc8;
        case 0x4f0cccu: goto label_4f0ccc;
        case 0x4f0cd0u: goto label_4f0cd0;
        case 0x4f0cd4u: goto label_4f0cd4;
        case 0x4f0cd8u: goto label_4f0cd8;
        case 0x4f0cdcu: goto label_4f0cdc;
        case 0x4f0ce0u: goto label_4f0ce0;
        case 0x4f0ce4u: goto label_4f0ce4;
        case 0x4f0ce8u: goto label_4f0ce8;
        case 0x4f0cecu: goto label_4f0cec;
        case 0x4f0cf0u: goto label_4f0cf0;
        case 0x4f0cf4u: goto label_4f0cf4;
        case 0x4f0cf8u: goto label_4f0cf8;
        case 0x4f0cfcu: goto label_4f0cfc;
        case 0x4f0d00u: goto label_4f0d00;
        case 0x4f0d04u: goto label_4f0d04;
        case 0x4f0d08u: goto label_4f0d08;
        case 0x4f0d0cu: goto label_4f0d0c;
        case 0x4f0d10u: goto label_4f0d10;
        case 0x4f0d14u: goto label_4f0d14;
        case 0x4f0d18u: goto label_4f0d18;
        case 0x4f0d1cu: goto label_4f0d1c;
        case 0x4f0d20u: goto label_4f0d20;
        case 0x4f0d24u: goto label_4f0d24;
        case 0x4f0d28u: goto label_4f0d28;
        case 0x4f0d2cu: goto label_4f0d2c;
        case 0x4f0d30u: goto label_4f0d30;
        case 0x4f0d34u: goto label_4f0d34;
        case 0x4f0d38u: goto label_4f0d38;
        case 0x4f0d3cu: goto label_4f0d3c;
        case 0x4f0d40u: goto label_4f0d40;
        case 0x4f0d44u: goto label_4f0d44;
        case 0x4f0d48u: goto label_4f0d48;
        case 0x4f0d4cu: goto label_4f0d4c;
        case 0x4f0d50u: goto label_4f0d50;
        case 0x4f0d54u: goto label_4f0d54;
        case 0x4f0d58u: goto label_4f0d58;
        case 0x4f0d5cu: goto label_4f0d5c;
        case 0x4f0d60u: goto label_4f0d60;
        case 0x4f0d64u: goto label_4f0d64;
        case 0x4f0d68u: goto label_4f0d68;
        case 0x4f0d6cu: goto label_4f0d6c;
        case 0x4f0d70u: goto label_4f0d70;
        case 0x4f0d74u: goto label_4f0d74;
        case 0x4f0d78u: goto label_4f0d78;
        case 0x4f0d7cu: goto label_4f0d7c;
        case 0x4f0d80u: goto label_4f0d80;
        case 0x4f0d84u: goto label_4f0d84;
        case 0x4f0d88u: goto label_4f0d88;
        case 0x4f0d8cu: goto label_4f0d8c;
        case 0x4f0d90u: goto label_4f0d90;
        case 0x4f0d94u: goto label_4f0d94;
        case 0x4f0d98u: goto label_4f0d98;
        case 0x4f0d9cu: goto label_4f0d9c;
        case 0x4f0da0u: goto label_4f0da0;
        case 0x4f0da4u: goto label_4f0da4;
        case 0x4f0da8u: goto label_4f0da8;
        case 0x4f0dacu: goto label_4f0dac;
        case 0x4f0db0u: goto label_4f0db0;
        case 0x4f0db4u: goto label_4f0db4;
        case 0x4f0db8u: goto label_4f0db8;
        case 0x4f0dbcu: goto label_4f0dbc;
        case 0x4f0dc0u: goto label_4f0dc0;
        case 0x4f0dc4u: goto label_4f0dc4;
        case 0x4f0dc8u: goto label_4f0dc8;
        case 0x4f0dccu: goto label_4f0dcc;
        case 0x4f0dd0u: goto label_4f0dd0;
        case 0x4f0dd4u: goto label_4f0dd4;
        case 0x4f0dd8u: goto label_4f0dd8;
        case 0x4f0ddcu: goto label_4f0ddc;
        case 0x4f0de0u: goto label_4f0de0;
        case 0x4f0de4u: goto label_4f0de4;
        case 0x4f0de8u: goto label_4f0de8;
        case 0x4f0decu: goto label_4f0dec;
        case 0x4f0df0u: goto label_4f0df0;
        case 0x4f0df4u: goto label_4f0df4;
        case 0x4f0df8u: goto label_4f0df8;
        case 0x4f0dfcu: goto label_4f0dfc;
        case 0x4f0e00u: goto label_4f0e00;
        case 0x4f0e04u: goto label_4f0e04;
        case 0x4f0e08u: goto label_4f0e08;
        case 0x4f0e0cu: goto label_4f0e0c;
        case 0x4f0e10u: goto label_4f0e10;
        case 0x4f0e14u: goto label_4f0e14;
        case 0x4f0e18u: goto label_4f0e18;
        case 0x4f0e1cu: goto label_4f0e1c;
        case 0x4f0e20u: goto label_4f0e20;
        case 0x4f0e24u: goto label_4f0e24;
        case 0x4f0e28u: goto label_4f0e28;
        case 0x4f0e2cu: goto label_4f0e2c;
        case 0x4f0e30u: goto label_4f0e30;
        case 0x4f0e34u: goto label_4f0e34;
        case 0x4f0e38u: goto label_4f0e38;
        case 0x4f0e3cu: goto label_4f0e3c;
        case 0x4f0e40u: goto label_4f0e40;
        case 0x4f0e44u: goto label_4f0e44;
        case 0x4f0e48u: goto label_4f0e48;
        case 0x4f0e4cu: goto label_4f0e4c;
        case 0x4f0e50u: goto label_4f0e50;
        case 0x4f0e54u: goto label_4f0e54;
        case 0x4f0e58u: goto label_4f0e58;
        case 0x4f0e5cu: goto label_4f0e5c;
        case 0x4f0e60u: goto label_4f0e60;
        case 0x4f0e64u: goto label_4f0e64;
        case 0x4f0e68u: goto label_4f0e68;
        case 0x4f0e6cu: goto label_4f0e6c;
        case 0x4f0e70u: goto label_4f0e70;
        case 0x4f0e74u: goto label_4f0e74;
        case 0x4f0e78u: goto label_4f0e78;
        case 0x4f0e7cu: goto label_4f0e7c;
        case 0x4f0e80u: goto label_4f0e80;
        case 0x4f0e84u: goto label_4f0e84;
        case 0x4f0e88u: goto label_4f0e88;
        case 0x4f0e8cu: goto label_4f0e8c;
        case 0x4f0e90u: goto label_4f0e90;
        case 0x4f0e94u: goto label_4f0e94;
        case 0x4f0e98u: goto label_4f0e98;
        case 0x4f0e9cu: goto label_4f0e9c;
        case 0x4f0ea0u: goto label_4f0ea0;
        case 0x4f0ea4u: goto label_4f0ea4;
        case 0x4f0ea8u: goto label_4f0ea8;
        case 0x4f0eacu: goto label_4f0eac;
        case 0x4f0eb0u: goto label_4f0eb0;
        case 0x4f0eb4u: goto label_4f0eb4;
        case 0x4f0eb8u: goto label_4f0eb8;
        case 0x4f0ebcu: goto label_4f0ebc;
        case 0x4f0ec0u: goto label_4f0ec0;
        case 0x4f0ec4u: goto label_4f0ec4;
        case 0x4f0ec8u: goto label_4f0ec8;
        case 0x4f0eccu: goto label_4f0ecc;
        case 0x4f0ed0u: goto label_4f0ed0;
        case 0x4f0ed4u: goto label_4f0ed4;
        case 0x4f0ed8u: goto label_4f0ed8;
        case 0x4f0edcu: goto label_4f0edc;
        case 0x4f0ee0u: goto label_4f0ee0;
        case 0x4f0ee4u: goto label_4f0ee4;
        case 0x4f0ee8u: goto label_4f0ee8;
        case 0x4f0eecu: goto label_4f0eec;
        case 0x4f0ef0u: goto label_4f0ef0;
        case 0x4f0ef4u: goto label_4f0ef4;
        case 0x4f0ef8u: goto label_4f0ef8;
        case 0x4f0efcu: goto label_4f0efc;
        case 0x4f0f00u: goto label_4f0f00;
        case 0x4f0f04u: goto label_4f0f04;
        case 0x4f0f08u: goto label_4f0f08;
        case 0x4f0f0cu: goto label_4f0f0c;
        case 0x4f0f10u: goto label_4f0f10;
        case 0x4f0f14u: goto label_4f0f14;
        case 0x4f0f18u: goto label_4f0f18;
        case 0x4f0f1cu: goto label_4f0f1c;
        case 0x4f0f20u: goto label_4f0f20;
        case 0x4f0f24u: goto label_4f0f24;
        case 0x4f0f28u: goto label_4f0f28;
        case 0x4f0f2cu: goto label_4f0f2c;
        case 0x4f0f30u: goto label_4f0f30;
        case 0x4f0f34u: goto label_4f0f34;
        case 0x4f0f38u: goto label_4f0f38;
        case 0x4f0f3cu: goto label_4f0f3c;
        case 0x4f0f40u: goto label_4f0f40;
        case 0x4f0f44u: goto label_4f0f44;
        case 0x4f0f48u: goto label_4f0f48;
        case 0x4f0f4cu: goto label_4f0f4c;
        case 0x4f0f50u: goto label_4f0f50;
        case 0x4f0f54u: goto label_4f0f54;
        case 0x4f0f58u: goto label_4f0f58;
        case 0x4f0f5cu: goto label_4f0f5c;
        case 0x4f0f60u: goto label_4f0f60;
        case 0x4f0f64u: goto label_4f0f64;
        case 0x4f0f68u: goto label_4f0f68;
        case 0x4f0f6cu: goto label_4f0f6c;
        case 0x4f0f70u: goto label_4f0f70;
        case 0x4f0f74u: goto label_4f0f74;
        case 0x4f0f78u: goto label_4f0f78;
        case 0x4f0f7cu: goto label_4f0f7c;
        case 0x4f0f80u: goto label_4f0f80;
        case 0x4f0f84u: goto label_4f0f84;
        case 0x4f0f88u: goto label_4f0f88;
        case 0x4f0f8cu: goto label_4f0f8c;
        case 0x4f0f90u: goto label_4f0f90;
        case 0x4f0f94u: goto label_4f0f94;
        case 0x4f0f98u: goto label_4f0f98;
        case 0x4f0f9cu: goto label_4f0f9c;
        case 0x4f0fa0u: goto label_4f0fa0;
        case 0x4f0fa4u: goto label_4f0fa4;
        case 0x4f0fa8u: goto label_4f0fa8;
        case 0x4f0facu: goto label_4f0fac;
        case 0x4f0fb0u: goto label_4f0fb0;
        case 0x4f0fb4u: goto label_4f0fb4;
        case 0x4f0fb8u: goto label_4f0fb8;
        case 0x4f0fbcu: goto label_4f0fbc;
        case 0x4f0fc0u: goto label_4f0fc0;
        case 0x4f0fc4u: goto label_4f0fc4;
        case 0x4f0fc8u: goto label_4f0fc8;
        case 0x4f0fccu: goto label_4f0fcc;
        case 0x4f0fd0u: goto label_4f0fd0;
        case 0x4f0fd4u: goto label_4f0fd4;
        case 0x4f0fd8u: goto label_4f0fd8;
        case 0x4f0fdcu: goto label_4f0fdc;
        case 0x4f0fe0u: goto label_4f0fe0;
        case 0x4f0fe4u: goto label_4f0fe4;
        case 0x4f0fe8u: goto label_4f0fe8;
        case 0x4f0fecu: goto label_4f0fec;
        case 0x4f0ff0u: goto label_4f0ff0;
        case 0x4f0ff4u: goto label_4f0ff4;
        case 0x4f0ff8u: goto label_4f0ff8;
        case 0x4f0ffcu: goto label_4f0ffc;
        case 0x4f1000u: goto label_4f1000;
        case 0x4f1004u: goto label_4f1004;
        case 0x4f1008u: goto label_4f1008;
        case 0x4f100cu: goto label_4f100c;
        case 0x4f1010u: goto label_4f1010;
        case 0x4f1014u: goto label_4f1014;
        case 0x4f1018u: goto label_4f1018;
        case 0x4f101cu: goto label_4f101c;
        case 0x4f1020u: goto label_4f1020;
        case 0x4f1024u: goto label_4f1024;
        case 0x4f1028u: goto label_4f1028;
        case 0x4f102cu: goto label_4f102c;
        case 0x4f1030u: goto label_4f1030;
        case 0x4f1034u: goto label_4f1034;
        case 0x4f1038u: goto label_4f1038;
        case 0x4f103cu: goto label_4f103c;
        case 0x4f1040u: goto label_4f1040;
        case 0x4f1044u: goto label_4f1044;
        case 0x4f1048u: goto label_4f1048;
        case 0x4f104cu: goto label_4f104c;
        case 0x4f1050u: goto label_4f1050;
        case 0x4f1054u: goto label_4f1054;
        case 0x4f1058u: goto label_4f1058;
        case 0x4f105cu: goto label_4f105c;
        case 0x4f1060u: goto label_4f1060;
        case 0x4f1064u: goto label_4f1064;
        case 0x4f1068u: goto label_4f1068;
        case 0x4f106cu: goto label_4f106c;
        case 0x4f1070u: goto label_4f1070;
        case 0x4f1074u: goto label_4f1074;
        case 0x4f1078u: goto label_4f1078;
        case 0x4f107cu: goto label_4f107c;
        case 0x4f1080u: goto label_4f1080;
        case 0x4f1084u: goto label_4f1084;
        case 0x4f1088u: goto label_4f1088;
        case 0x4f108cu: goto label_4f108c;
        case 0x4f1090u: goto label_4f1090;
        case 0x4f1094u: goto label_4f1094;
        case 0x4f1098u: goto label_4f1098;
        case 0x4f109cu: goto label_4f109c;
        case 0x4f10a0u: goto label_4f10a0;
        case 0x4f10a4u: goto label_4f10a4;
        case 0x4f10a8u: goto label_4f10a8;
        case 0x4f10acu: goto label_4f10ac;
        case 0x4f10b0u: goto label_4f10b0;
        case 0x4f10b4u: goto label_4f10b4;
        case 0x4f10b8u: goto label_4f10b8;
        case 0x4f10bcu: goto label_4f10bc;
        case 0x4f10c0u: goto label_4f10c0;
        case 0x4f10c4u: goto label_4f10c4;
        case 0x4f10c8u: goto label_4f10c8;
        case 0x4f10ccu: goto label_4f10cc;
        case 0x4f10d0u: goto label_4f10d0;
        case 0x4f10d4u: goto label_4f10d4;
        case 0x4f10d8u: goto label_4f10d8;
        case 0x4f10dcu: goto label_4f10dc;
        case 0x4f10e0u: goto label_4f10e0;
        case 0x4f10e4u: goto label_4f10e4;
        case 0x4f10e8u: goto label_4f10e8;
        case 0x4f10ecu: goto label_4f10ec;
        case 0x4f10f0u: goto label_4f10f0;
        case 0x4f10f4u: goto label_4f10f4;
        case 0x4f10f8u: goto label_4f10f8;
        case 0x4f10fcu: goto label_4f10fc;
        case 0x4f1100u: goto label_4f1100;
        case 0x4f1104u: goto label_4f1104;
        case 0x4f1108u: goto label_4f1108;
        case 0x4f110cu: goto label_4f110c;
        case 0x4f1110u: goto label_4f1110;
        case 0x4f1114u: goto label_4f1114;
        case 0x4f1118u: goto label_4f1118;
        case 0x4f111cu: goto label_4f111c;
        case 0x4f1120u: goto label_4f1120;
        case 0x4f1124u: goto label_4f1124;
        case 0x4f1128u: goto label_4f1128;
        case 0x4f112cu: goto label_4f112c;
        case 0x4f1130u: goto label_4f1130;
        case 0x4f1134u: goto label_4f1134;
        case 0x4f1138u: goto label_4f1138;
        case 0x4f113cu: goto label_4f113c;
        case 0x4f1140u: goto label_4f1140;
        case 0x4f1144u: goto label_4f1144;
        case 0x4f1148u: goto label_4f1148;
        case 0x4f114cu: goto label_4f114c;
        case 0x4f1150u: goto label_4f1150;
        case 0x4f1154u: goto label_4f1154;
        case 0x4f1158u: goto label_4f1158;
        case 0x4f115cu: goto label_4f115c;
        case 0x4f1160u: goto label_4f1160;
        case 0x4f1164u: goto label_4f1164;
        case 0x4f1168u: goto label_4f1168;
        case 0x4f116cu: goto label_4f116c;
        case 0x4f1170u: goto label_4f1170;
        case 0x4f1174u: goto label_4f1174;
        case 0x4f1178u: goto label_4f1178;
        case 0x4f117cu: goto label_4f117c;
        case 0x4f1180u: goto label_4f1180;
        case 0x4f1184u: goto label_4f1184;
        case 0x4f1188u: goto label_4f1188;
        case 0x4f118cu: goto label_4f118c;
        case 0x4f1190u: goto label_4f1190;
        case 0x4f1194u: goto label_4f1194;
        case 0x4f1198u: goto label_4f1198;
        case 0x4f119cu: goto label_4f119c;
        case 0x4f11a0u: goto label_4f11a0;
        case 0x4f11a4u: goto label_4f11a4;
        case 0x4f11a8u: goto label_4f11a8;
        case 0x4f11acu: goto label_4f11ac;
        case 0x4f11b0u: goto label_4f11b0;
        case 0x4f11b4u: goto label_4f11b4;
        case 0x4f11b8u: goto label_4f11b8;
        case 0x4f11bcu: goto label_4f11bc;
        case 0x4f11c0u: goto label_4f11c0;
        case 0x4f11c4u: goto label_4f11c4;
        case 0x4f11c8u: goto label_4f11c8;
        case 0x4f11ccu: goto label_4f11cc;
        case 0x4f11d0u: goto label_4f11d0;
        case 0x4f11d4u: goto label_4f11d4;
        case 0x4f11d8u: goto label_4f11d8;
        case 0x4f11dcu: goto label_4f11dc;
        case 0x4f11e0u: goto label_4f11e0;
        case 0x4f11e4u: goto label_4f11e4;
        case 0x4f11e8u: goto label_4f11e8;
        case 0x4f11ecu: goto label_4f11ec;
        case 0x4f11f0u: goto label_4f11f0;
        case 0x4f11f4u: goto label_4f11f4;
        case 0x4f11f8u: goto label_4f11f8;
        case 0x4f11fcu: goto label_4f11fc;
        case 0x4f1200u: goto label_4f1200;
        case 0x4f1204u: goto label_4f1204;
        case 0x4f1208u: goto label_4f1208;
        case 0x4f120cu: goto label_4f120c;
        case 0x4f1210u: goto label_4f1210;
        case 0x4f1214u: goto label_4f1214;
        case 0x4f1218u: goto label_4f1218;
        case 0x4f121cu: goto label_4f121c;
        case 0x4f1220u: goto label_4f1220;
        case 0x4f1224u: goto label_4f1224;
        case 0x4f1228u: goto label_4f1228;
        case 0x4f122cu: goto label_4f122c;
        case 0x4f1230u: goto label_4f1230;
        case 0x4f1234u: goto label_4f1234;
        case 0x4f1238u: goto label_4f1238;
        case 0x4f123cu: goto label_4f123c;
        case 0x4f1240u: goto label_4f1240;
        case 0x4f1244u: goto label_4f1244;
        case 0x4f1248u: goto label_4f1248;
        case 0x4f124cu: goto label_4f124c;
        case 0x4f1250u: goto label_4f1250;
        case 0x4f1254u: goto label_4f1254;
        case 0x4f1258u: goto label_4f1258;
        case 0x4f125cu: goto label_4f125c;
        default: break;
    }

    ctx->pc = 0x4f0970u;

label_4f0970:
    // 0x4f0970: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4f0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4f0974:
    // 0x4f0974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f0974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f0978:
    // 0x4f0978: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4f0978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4f097c:
    // 0x4f097c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4f097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4f0980:
    // 0x4f0980: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4f0980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4f0984:
    // 0x4f0984: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4f0984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4f0988:
    // 0x4f0988: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4f0988u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f098c:
    // 0x4f098c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f0990:
    // 0x4f0990: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f0990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f0994:
    // 0x4f0994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f0994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f0998:
    // 0x4f0998: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f0998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f099c:
    // 0x4f099c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f09a0:
    // 0x4f09a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4f09a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f09a4:
    // 0x4f09a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f09a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f09a8:
    // 0x4f09a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4f09a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f09ac:
    // 0x4f09ac: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
label_4f09b0:
    if (ctx->pc == 0x4F09B0u) {
        ctx->pc = 0x4F09B0u;
            // 0x4f09b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F09B4u;
        goto label_4f09b4;
    }
    ctx->pc = 0x4F09ACu;
    {
        const bool branch_taken_0x4f09ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4F09B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F09ACu;
            // 0x4f09b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f09ac) {
            ctx->pc = 0x4F0A14u;
            goto label_4f0a14;
        }
    }
    ctx->pc = 0x4F09B4u;
label_4f09b4:
    // 0x4f09b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f09b8:
    // 0x4f09b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4f09b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f09bc:
    // 0x4f09bc: 0x8c4264b0  lw          $v0, 0x64B0($v0)
    ctx->pc = 0x4f09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25776)));
label_4f09c0:
    // 0x4f09c0: 0x8c540070  lw          $s4, 0x70($v0)
    ctx->pc = 0x4f09c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_4f09c4:
    // 0x4f09c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f09c8:
    // 0x4f09c8: 0x8e6500a8  lw          $a1, 0xA8($s3)
    ctx->pc = 0x4f09c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_4f09cc:
    // 0x4f09cc: 0x8c4264b0  lw          $v0, 0x64B0($v0)
    ctx->pc = 0x4f09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25776)));
label_4f09d0:
    // 0x4f09d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4f09d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f09d4:
    // 0x4f09d4: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4f09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4f09d8:
    // 0x4f09d8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4f09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4f09dc:
    // 0x4f09dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f09e0:
    // 0x4f09e0: 0xc1373f0  jal         func_4DCFC0
label_4f09e4:
    if (ctx->pc == 0x4F09E4u) {
        ctx->pc = 0x4F09E4u;
            // 0x4f09e4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F09E8u;
        goto label_4f09e8;
    }
    ctx->pc = 0x4F09E0u;
    SET_GPR_U32(ctx, 31, 0x4F09E8u);
    ctx->pc = 0x4F09E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F09E0u;
            // 0x4f09e4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DCFC0u;
    if (runtime->hasFunction(0x4DCFC0u)) {
        auto targetFn = runtime->lookupFunction(0x4DCFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F09E8u; }
        if (ctx->pc != 0x4F09E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DCFC0_0x4dcfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F09E8u; }
        if (ctx->pc != 0x4F09E8u) { return; }
    }
    ctx->pc = 0x4F09E8u;
label_4f09e8:
    // 0x4f09e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4f09e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f09ec:
    // 0x4f09ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4f09ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4f09f0:
    // 0x4f09f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4f09f4:
    if (ctx->pc == 0x4F09F4u) {
        ctx->pc = 0x4F09F4u;
            // 0x4f09f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x4F09F8u;
        goto label_4f09f8;
    }
    ctx->pc = 0x4F09F0u;
    {
        const bool branch_taken_0x4f09f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f09f0) {
            ctx->pc = 0x4F09F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F09F0u;
            // 0x4f09f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0A00u;
            goto label_4f0a00;
        }
    }
    ctx->pc = 0x4F09F8u;
label_4f09f8:
    // 0x4f09f8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4f09fc:
    if (ctx->pc == 0x4F09FCu) {
        ctx->pc = 0x4F09FCu;
            // 0x4f09fc: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4F0A00u;
        goto label_4f0a00;
    }
    ctx->pc = 0x4F09F8u;
    {
        const bool branch_taken_0x4f09f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F09FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F09F8u;
            // 0x4f09fc: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f09f8) {
            ctx->pc = 0x4F0A70u;
            goto label_4f0a70;
        }
    }
    ctx->pc = 0x4F0A00u;
label_4f0a00:
    // 0x4f0a00: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x4f0a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4f0a04:
    // 0x4f0a04: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_4f0a08:
    if (ctx->pc == 0x4F0A08u) {
        ctx->pc = 0x4F0A08u;
            // 0x4f0a08: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x4F0A0Cu;
        goto label_4f0a0c;
    }
    ctx->pc = 0x4F0A04u;
    {
        const bool branch_taken_0x4f0a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0A04u;
            // 0x4f0a08: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0a04) {
            ctx->pc = 0x4F09C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f09c4;
        }
    }
    ctx->pc = 0x4F0A0Cu;
label_4f0a0c:
    // 0x4f0a0c: 0x10000018  b           . + 4 + (0x18 << 2)
label_4f0a10:
    if (ctx->pc == 0x4F0A10u) {
        ctx->pc = 0x4F0A14u;
        goto label_4f0a14;
    }
    ctx->pc = 0x4F0A0Cu;
    {
        const bool branch_taken_0x4f0a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0a0c) {
            ctx->pc = 0x4F0A70u;
            goto label_4f0a70;
        }
    }
    ctx->pc = 0x4F0A14u;
label_4f0a14:
    // 0x4f0a14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f0a18:
    // 0x4f0a18: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4f0a18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0a1c:
    // 0x4f0a1c: 0x8c4264b8  lw          $v0, 0x64B8($v0)
    ctx->pc = 0x4f0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25784)));
label_4f0a20:
    // 0x4f0a20: 0x8c540070  lw          $s4, 0x70($v0)
    ctx->pc = 0x4f0a20u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_4f0a24:
    // 0x4f0a24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f0a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f0a28:
    // 0x4f0a28: 0x8e6500a8  lw          $a1, 0xA8($s3)
    ctx->pc = 0x4f0a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_4f0a2c:
    // 0x4f0a2c: 0x8c4264b8  lw          $v0, 0x64B8($v0)
    ctx->pc = 0x4f0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25784)));
label_4f0a30:
    // 0x4f0a30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4f0a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f0a34:
    // 0x4f0a34: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4f0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4f0a38:
    // 0x4f0a38: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4f0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4f0a3c:
    // 0x4f0a3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f0a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f0a40:
    // 0x4f0a40: 0xc136d60  jal         func_4DB580
label_4f0a44:
    if (ctx->pc == 0x4F0A44u) {
        ctx->pc = 0x4F0A44u;
            // 0x4f0a44: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0A48u;
        goto label_4f0a48;
    }
    ctx->pc = 0x4F0A40u;
    SET_GPR_U32(ctx, 31, 0x4F0A48u);
    ctx->pc = 0x4F0A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0A40u;
            // 0x4f0a44: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DB580u;
    if (runtime->hasFunction(0x4DB580u)) {
        auto targetFn = runtime->lookupFunction(0x4DB580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0A48u; }
        if (ctx->pc != 0x4F0A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DB580_0x4db580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0A48u; }
        if (ctx->pc != 0x4F0A48u) { return; }
    }
    ctx->pc = 0x4F0A48u;
label_4f0a48:
    // 0x4f0a48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4f0a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f0a4c:
    // 0x4f0a4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4f0a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4f0a50:
    // 0x4f0a50: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4f0a54:
    if (ctx->pc == 0x4F0A54u) {
        ctx->pc = 0x4F0A54u;
            // 0x4f0a54: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x4F0A58u;
        goto label_4f0a58;
    }
    ctx->pc = 0x4F0A50u;
    {
        const bool branch_taken_0x4f0a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0a50) {
            ctx->pc = 0x4F0A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0A50u;
            // 0x4f0a54: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0A60u;
            goto label_4f0a60;
        }
    }
    ctx->pc = 0x4F0A58u;
label_4f0a58:
    // 0x4f0a58: 0x10000005  b           . + 4 + (0x5 << 2)
label_4f0a5c:
    if (ctx->pc == 0x4F0A5Cu) {
        ctx->pc = 0x4F0A5Cu;
            // 0x4f0a5c: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4F0A60u;
        goto label_4f0a60;
    }
    ctx->pc = 0x4F0A58u;
    {
        const bool branch_taken_0x4f0a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0A58u;
            // 0x4f0a5c: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0a58) {
            ctx->pc = 0x4F0A70u;
            goto label_4f0a70;
        }
    }
    ctx->pc = 0x4F0A60u;
label_4f0a60:
    // 0x4f0a60: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x4f0a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4f0a64:
    // 0x4f0a64: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_4f0a68:
    if (ctx->pc == 0x4F0A68u) {
        ctx->pc = 0x4F0A68u;
            // 0x4f0a68: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x4F0A6Cu;
        goto label_4f0a6c;
    }
    ctx->pc = 0x4F0A64u;
    {
        const bool branch_taken_0x4f0a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0A64u;
            // 0x4f0a68: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0a64) {
            ctx->pc = 0x4F0A24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f0a24;
        }
    }
    ctx->pc = 0x4F0A6Cu;
label_4f0a6c:
    // 0x4f0a6c: 0x0  nop
    ctx->pc = 0x4f0a6cu;
    // NOP
label_4f0a70:
    // 0x4f0a70: 0x2e410002  sltiu       $at, $s2, 0x2
    ctx->pc = 0x4f0a70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4f0a74:
    // 0x4f0a74: 0x5420002a  bnel        $at, $zero, . + 4 + (0x2A << 2)
label_4f0a78:
    if (ctx->pc == 0x4F0A78u) {
        ctx->pc = 0x4F0A78u;
            // 0x4f0a78: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0A7Cu;
        goto label_4f0a7c;
    }
    ctx->pc = 0x4F0A74u;
    {
        const bool branch_taken_0x4f0a74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0a74) {
            ctx->pc = 0x4F0A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0A74u;
            // 0x4f0a78: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0B20u;
            goto label_4f0b20;
        }
    }
    ctx->pc = 0x4F0A7Cu;
label_4f0a7c:
    // 0x4f0a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f0a80:
    // 0x4f0a80: 0x16220026  bne         $s1, $v0, . + 4 + (0x26 << 2)
label_4f0a84:
    if (ctx->pc == 0x4F0A84u) {
        ctx->pc = 0x4F0A88u;
        goto label_4f0a88;
    }
    ctx->pc = 0x4F0A80u;
    {
        const bool branch_taken_0x4f0a80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f0a80) {
            ctx->pc = 0x4F0B1Cu;
            goto label_4f0b1c;
        }
    }
    ctx->pc = 0x4F0A88u;
label_4f0a88:
    // 0x4f0a88: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4f0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4f0a8c:
    // 0x4f0a8c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4f0a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4f0a90:
    // 0x4f0a90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f0a94:
    // 0x4f0a94: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4f0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4f0a98:
    // 0x4f0a98: 0x2457003c  addiu       $s7, $v0, 0x3C
    ctx->pc = 0x4f0a98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_4f0a9c:
    // 0x4f0a9c: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x4f0a9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
label_4f0aa0:
    // 0x4f0aa0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4f0aa4:
    if (ctx->pc == 0x4F0AA4u) {
        ctx->pc = 0x4F0AA8u;
        goto label_4f0aa8;
    }
    ctx->pc = 0x4F0AA0u;
    {
        const bool branch_taken_0x4f0aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0aa0) {
            ctx->pc = 0x4F0B1Cu;
            goto label_4f0b1c;
        }
    }
    ctx->pc = 0x4F0AA8u;
label_4f0aa8:
    // 0x4f0aa8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f0aac:
    // 0x4f0aac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4f0aacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0ab0:
    // 0x4f0ab0: 0x8c4264b8  lw          $v0, 0x64B8($v0)
    ctx->pc = 0x4f0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25784)));
label_4f0ab4:
    // 0x4f0ab4: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x4f0ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_4f0ab8:
    // 0x4f0ab8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4f0abc:
    if (ctx->pc == 0x4F0ABCu) {
        ctx->pc = 0x4F0ABCu;
            // 0x4f0abc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0AC0u;
        goto label_4f0ac0;
    }
    ctx->pc = 0x4F0AB8u;
    {
        const bool branch_taken_0x4f0ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0AB8u;
            // 0x4f0abc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0ab8) {
            ctx->pc = 0x4F0B08u;
            goto label_4f0b08;
        }
    }
    ctx->pc = 0x4F0AC0u;
label_4f0ac0:
    // 0x4f0ac0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4f0ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0ac4:
    // 0x4f0ac4: 0x0  nop
    ctx->pc = 0x4f0ac4u;
    // NOP
label_4f0ac8:
    // 0x4f0ac8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f0acc:
    // 0x4f0acc: 0x8c4264b8  lw          $v0, 0x64B8($v0)
    ctx->pc = 0x4f0accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25784)));
label_4f0ad0:
    // 0x4f0ad0: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x4f0ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4f0ad4:
    // 0x4f0ad4: 0x8e6500a8  lw          $a1, 0xA8($s3)
    ctx->pc = 0x4f0ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_4f0ad8:
    // 0x4f0ad8: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4f0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4f0adc:
    // 0x4f0adc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4f0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4f0ae0:
    // 0x4f0ae0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f0ae4:
    // 0x4f0ae4: 0xc136d60  jal         func_4DB580
label_4f0ae8:
    if (ctx->pc == 0x4F0AE8u) {
        ctx->pc = 0x4F0AE8u;
            // 0x4f0ae8: 0x26a70002  addiu       $a3, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x4F0AECu;
        goto label_4f0aec;
    }
    ctx->pc = 0x4F0AE4u;
    SET_GPR_U32(ctx, 31, 0x4F0AECu);
    ctx->pc = 0x4F0AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0AE4u;
            // 0x4f0ae8: 0x26a70002  addiu       $a3, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DB580u;
    if (runtime->hasFunction(0x4DB580u)) {
        auto targetFn = runtime->lookupFunction(0x4DB580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0AECu; }
        if (ctx->pc != 0x4F0AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DB580_0x4db580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0AECu; }
        if (ctx->pc != 0x4F0AECu) { return; }
    }
    ctx->pc = 0x4F0AECu;
label_4f0aec:
    // 0x4f0aec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4f0af0:
    if (ctx->pc == 0x4F0AF0u) {
        ctx->pc = 0x4F0AF4u;
        goto label_4f0af4;
    }
    ctx->pc = 0x4F0AECu;
    {
        const bool branch_taken_0x4f0aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0aec) {
            ctx->pc = 0x4F0B08u;
            goto label_4f0b08;
        }
    }
    ctx->pc = 0x4F0AF4u;
label_4f0af4:
    // 0x4f0af4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4f0af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4f0af8:
    // 0x4f0af8: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4f0af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4f0afc:
    // 0x4f0afc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_4f0b00:
    if (ctx->pc == 0x4F0B00u) {
        ctx->pc = 0x4F0B00u;
            // 0x4f0b00: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x4F0B04u;
        goto label_4f0b04;
    }
    ctx->pc = 0x4F0AFCu;
    {
        const bool branch_taken_0x4f0afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0AFCu;
            // 0x4f0b00: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0afc) {
            ctx->pc = 0x4F0AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f0ac8;
        }
    }
    ctx->pc = 0x4F0B04u;
label_4f0b04:
    // 0x4f0b04: 0x0  nop
    ctx->pc = 0x4f0b04u;
    // NOP
label_4f0b08:
    // 0x4f0b08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4f0b08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4f0b0c:
    // 0x4f0b0c: 0x2ea20005  sltiu       $v0, $s5, 0x5
    ctx->pc = 0x4f0b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4f0b10:
    // 0x4f0b10: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_4f0b14:
    if (ctx->pc == 0x4F0B14u) {
        ctx->pc = 0x4F0B18u;
        goto label_4f0b18;
    }
    ctx->pc = 0x4F0B10u;
    {
        const bool branch_taken_0x4f0b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0b10) {
            ctx->pc = 0x4F0AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f0ab8;
        }
    }
    ctx->pc = 0x4F0B18u;
label_4f0b18:
    // 0x4f0b18: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x4f0b18u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
label_4f0b1c:
    // 0x4f0b1c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x4f0b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f0b20:
    // 0x4f0b20: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4f0b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4f0b24:
    // 0x4f0b24: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4f0b24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f0b28:
    // 0x4f0b28: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4f0b28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f0b2c:
    // 0x4f0b2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4f0b2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f0b30:
    // 0x4f0b30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f0b30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f0b34:
    // 0x4f0b34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f0b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f0b38:
    // 0x4f0b38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f0b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0b3c:
    // 0x4f0b3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f0b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0b40:
    // 0x4f0b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0b44:
    // 0x4f0b44: 0x3e00008  jr          $ra
label_4f0b48:
    if (ctx->pc == 0x4F0B48u) {
        ctx->pc = 0x4F0B48u;
            // 0x4f0b48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4F0B4Cu;
        goto label_4f0b4c;
    }
    ctx->pc = 0x4F0B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0B44u;
            // 0x4f0b48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0B4Cu;
label_4f0b4c:
    // 0x4f0b4c: 0x0  nop
    ctx->pc = 0x4f0b4cu;
    // NOP
label_4f0b50:
    // 0x4f0b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f0b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f0b54:
    // 0x4f0b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f0b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f0b58:
    // 0x4f0b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f0b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f0b5c:
    // 0x4f0b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f0b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f0b60:
    // 0x4f0b60: 0xc0d37dc  jal         func_34DF70
label_4f0b64:
    if (ctx->pc == 0x4F0B64u) {
        ctx->pc = 0x4F0B64u;
            // 0x4f0b64: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->pc = 0x4F0B68u;
        goto label_4f0b68;
    }
    ctx->pc = 0x4F0B60u;
    SET_GPR_U32(ctx, 31, 0x4F0B68u);
    ctx->pc = 0x4F0B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0B60u;
            // 0x4f0b64: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0B68u; }
        if (ctx->pc != 0x4F0B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0B68u; }
        if (ctx->pc != 0x4F0B68u) { return; }
    }
    ctx->pc = 0x4F0B68u;
label_4f0b68:
    // 0x4f0b68: 0xc0d37dc  jal         func_34DF70
label_4f0b6c:
    if (ctx->pc == 0x4F0B6Cu) {
        ctx->pc = 0x4F0B6Cu;
            // 0x4f0b6c: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->pc = 0x4F0B70u;
        goto label_4f0b70;
    }
    ctx->pc = 0x4F0B68u;
    SET_GPR_U32(ctx, 31, 0x4F0B70u);
    ctx->pc = 0x4F0B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0B68u;
            // 0x4f0b6c: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0B70u; }
        if (ctx->pc != 0x4F0B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0B70u; }
        if (ctx->pc != 0x4F0B70u) { return; }
    }
    ctx->pc = 0x4F0B70u;
label_4f0b70:
    // 0x4f0b70: 0xc0d37dc  jal         func_34DF70
label_4f0b74:
    if (ctx->pc == 0x4F0B74u) {
        ctx->pc = 0x4F0B74u;
            // 0x4f0b74: 0x2604007c  addiu       $a0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->pc = 0x4F0B78u;
        goto label_4f0b78;
    }
    ctx->pc = 0x4F0B70u;
    SET_GPR_U32(ctx, 31, 0x4F0B78u);
    ctx->pc = 0x4F0B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0B70u;
            // 0x4f0b74: 0x2604007c  addiu       $a0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0B78u; }
        if (ctx->pc != 0x4F0B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0B78u; }
        if (ctx->pc != 0x4F0B78u) { return; }
    }
    ctx->pc = 0x4F0B78u;
label_4f0b78:
    // 0x4f0b78: 0xc0d37dc  jal         func_34DF70
label_4f0b7c:
    if (ctx->pc == 0x4F0B7Cu) {
        ctx->pc = 0x4F0B7Cu;
            // 0x4f0b7c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x4F0B80u;
        goto label_4f0b80;
    }
    ctx->pc = 0x4F0B78u;
    SET_GPR_U32(ctx, 31, 0x4F0B80u);
    ctx->pc = 0x4F0B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0B78u;
            // 0x4f0b7c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0B80u; }
        if (ctx->pc != 0x4F0B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0B80u; }
        if (ctx->pc != 0x4F0B80u) { return; }
    }
    ctx->pc = 0x4F0B80u;
label_4f0b80:
    // 0x4f0b80: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x4f0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_4f0b84:
    // 0x4f0b84: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f0b88:
    if (ctx->pc == 0x4F0B88u) {
        ctx->pc = 0x4F0B88u;
            // 0x4f0b88: 0xae0000a4  sw          $zero, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
        ctx->pc = 0x4F0B8Cu;
        goto label_4f0b8c;
    }
    ctx->pc = 0x4F0B84u;
    {
        const bool branch_taken_0x4f0b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0b84) {
            ctx->pc = 0x4F0B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0B84u;
            // 0x4f0b88: 0xae0000a4  sw          $zero, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0BA0u;
            goto label_4f0ba0;
        }
    }
    ctx->pc = 0x4F0B8Cu;
label_4f0b8c:
    // 0x4f0b8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f0b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f0b90:
    // 0x4f0b90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f0b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f0b94:
    // 0x4f0b94: 0x320f809  jalr        $t9
label_4f0b98:
    if (ctx->pc == 0x4F0B98u) {
        ctx->pc = 0x4F0B98u;
            // 0x4f0b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F0B9Cu;
        goto label_4f0b9c;
    }
    ctx->pc = 0x4F0B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F0B9Cu);
        ctx->pc = 0x4F0B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0B94u;
            // 0x4f0b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F0B9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F0B9Cu; }
            if (ctx->pc != 0x4F0B9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4F0B9Cu;
label_4f0b9c:
    // 0x4f0b9c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4f0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4f0ba0:
    // 0x4f0ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f0ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0ba4:
    // 0x4f0ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0ba8:
    // 0x4f0ba8: 0x3e00008  jr          $ra
label_4f0bac:
    if (ctx->pc == 0x4F0BACu) {
        ctx->pc = 0x4F0BACu;
            // 0x4f0bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F0BB0u;
        goto label_4f0bb0;
    }
    ctx->pc = 0x4F0BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0BA8u;
            // 0x4f0bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0BB0u;
label_4f0bb0:
    // 0x4f0bb0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x4f0bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_4f0bb4:
    // 0x4f0bb4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x4f0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_4f0bb8:
    // 0x4f0bb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f0bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4f0bbc:
    // 0x4f0bbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4f0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4f0bc0:
    // 0x4f0bc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f0bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f0bc4:
    // 0x4f0bc4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4f0bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4f0bc8:
    // 0x4f0bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f0bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f0bcc:
    // 0x4f0bcc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4f0bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4f0bd0:
    // 0x4f0bd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f0bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f0bd4:
    // 0x4f0bd4: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x4f0bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_4f0bd8:
    // 0x4f0bd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f0bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f0bdc:
    // 0x4f0bdc: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x4f0bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
label_4f0be0:
    // 0x4f0be0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f0be4:
    // 0x4f0be4: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4f0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4f0be8:
    // 0x4f0be8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4f0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4f0bec:
    // 0x4f0bec: 0xc0a7a88  jal         func_29EA20
label_4f0bf0:
    if (ctx->pc == 0x4F0BF0u) {
        ctx->pc = 0x4F0BF0u;
            // 0x4f0bf0: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->pc = 0x4F0BF4u;
        goto label_4f0bf4;
    }
    ctx->pc = 0x4F0BECu;
    SET_GPR_U32(ctx, 31, 0x4F0BF4u);
    ctx->pc = 0x4F0BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0BECu;
            // 0x4f0bf0: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0BF4u; }
        if (ctx->pc != 0x4F0BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0BF4u; }
        if (ctx->pc != 0x4F0BF4u) { return; }
    }
    ctx->pc = 0x4F0BF4u;
label_4f0bf4:
    // 0x4f0bf4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4f0bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4f0bf8:
    // 0x4f0bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f0bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f0bfc:
    // 0x4f0bfc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4f0c00:
    if (ctx->pc == 0x4F0C00u) {
        ctx->pc = 0x4F0C00u;
            // 0x4f0c00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4F0C04u;
        goto label_4f0c04;
    }
    ctx->pc = 0x4F0BFCu;
    {
        const bool branch_taken_0x4f0bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0BFCu;
            // 0x4f0c00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0bfc) {
            ctx->pc = 0x4F0C18u;
            goto label_4f0c18;
        }
    }
    ctx->pc = 0x4F0C04u;
label_4f0c04:
    // 0x4f0c04: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4f0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4f0c08:
    // 0x4f0c08: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4f0c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4f0c0c:
    // 0x4f0c0c: 0xc0804bc  jal         func_2012F0
label_4f0c10:
    if (ctx->pc == 0x4F0C10u) {
        ctx->pc = 0x4F0C10u;
            // 0x4f0c10: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4F0C14u;
        goto label_4f0c14;
    }
    ctx->pc = 0x4F0C0Cu;
    SET_GPR_U32(ctx, 31, 0x4F0C14u);
    ctx->pc = 0x4F0C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0C0Cu;
            // 0x4f0c10: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C14u; }
        if (ctx->pc != 0x4F0C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C14u; }
        if (ctx->pc != 0x4F0C14u) { return; }
    }
    ctx->pc = 0x4F0C14u;
label_4f0c14:
    // 0x4f0c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f0c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f0c18:
    // 0x4f0c18: 0xae0400a4  sw          $a0, 0xA4($s0)
    ctx->pc = 0x4f0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 4));
label_4f0c1c:
    // 0x4f0c1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4f0c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f0c20:
    // 0x4f0c20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4f0c24:
    // 0x4f0c24: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4f0c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4f0c28:
    // 0x4f0c28: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4f0c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4f0c2c:
    // 0x4f0c2c: 0x26120054  addiu       $s2, $s0, 0x54
    ctx->pc = 0x4f0c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_4f0c30:
    // 0x4f0c30: 0xc04cbd8  jal         func_132F60
label_4f0c34:
    if (ctx->pc == 0x4F0C34u) {
        ctx->pc = 0x4F0C34u;
            // 0x4f0c34: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4F0C38u;
        goto label_4f0c38;
    }
    ctx->pc = 0x4F0C30u;
    SET_GPR_U32(ctx, 31, 0x4F0C38u);
    ctx->pc = 0x4F0C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0C30u;
            // 0x4f0c34: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C38u; }
        if (ctx->pc != 0x4F0C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C38u; }
        if (ctx->pc != 0x4F0C38u) { return; }
    }
    ctx->pc = 0x4F0C38u;
label_4f0c38:
    // 0x4f0c38: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4f0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4f0c3c:
    // 0x4f0c3c: 0xc04f278  jal         func_13C9E0
label_4f0c40:
    if (ctx->pc == 0x4F0C40u) {
        ctx->pc = 0x4F0C40u;
            // 0x4f0c40: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4F0C44u;
        goto label_4f0c44;
    }
    ctx->pc = 0x4F0C3Cu;
    SET_GPR_U32(ctx, 31, 0x4F0C44u);
    ctx->pc = 0x4F0C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0C3Cu;
            // 0x4f0c40: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C44u; }
        if (ctx->pc != 0x4F0C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C44u; }
        if (ctx->pc != 0x4F0C44u) { return; }
    }
    ctx->pc = 0x4F0C44u;
label_4f0c44:
    // 0x4f0c44: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4f0c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4f0c48:
    // 0x4f0c48: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x4f0c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4f0c4c:
    // 0x4f0c4c: 0xc04cca0  jal         func_133280
label_4f0c50:
    if (ctx->pc == 0x4F0C50u) {
        ctx->pc = 0x4F0C50u;
            // 0x4f0c50: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0C54u;
        goto label_4f0c54;
    }
    ctx->pc = 0x4F0C4Cu;
    SET_GPR_U32(ctx, 31, 0x4F0C54u);
    ctx->pc = 0x4F0C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0C4Cu;
            // 0x4f0c50: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C54u; }
        if (ctx->pc != 0x4F0C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C54u; }
        if (ctx->pc != 0x4F0C54u) { return; }
    }
    ctx->pc = 0x4F0C54u;
label_4f0c54:
    // 0x4f0c54: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4f0c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4f0c58:
    // 0x4f0c58: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4f0c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4f0c5c:
    // 0x4f0c5c: 0xc04cbe0  jal         func_132F80
label_4f0c60:
    if (ctx->pc == 0x4F0C60u) {
        ctx->pc = 0x4F0C60u;
            // 0x4f0c60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0C64u;
        goto label_4f0c64;
    }
    ctx->pc = 0x4F0C5Cu;
    SET_GPR_U32(ctx, 31, 0x4F0C64u);
    ctx->pc = 0x4F0C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0C5Cu;
            // 0x4f0c60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C64u; }
        if (ctx->pc != 0x4F0C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C64u; }
        if (ctx->pc != 0x4F0C64u) { return; }
    }
    ctx->pc = 0x4F0C64u;
label_4f0c64:
    // 0x4f0c64: 0xc7a20170  lwc1        $f2, 0x170($sp)
    ctx->pc = 0x4f0c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f0c68:
    // 0x4f0c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f0c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f0c6c:
    // 0x4f0c6c: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x4f0c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f0c70:
    // 0x4f0c70: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x4f0c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4f0c74:
    // 0x4f0c74: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x4f0c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f0c78:
    // 0x4f0c78: 0xe7a201c0  swc1        $f2, 0x1C0($sp)
    ctx->pc = 0x4f0c78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_4f0c7c:
    // 0x4f0c7c: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x4f0c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_4f0c80:
    // 0x4f0c80: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x4f0c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_4f0c84:
    // 0x4f0c84: 0x8e0700a4  lw          $a3, 0xA4($s0)
    ctx->pc = 0x4f0c84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_4f0c88:
    // 0x4f0c88: 0xc0d37ec  jal         func_34DFB0
label_4f0c8c:
    if (ctx->pc == 0x4F0C8Cu) {
        ctx->pc = 0x4F0C8Cu;
            // 0x4f0c8c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4F0C90u;
        goto label_4f0c90;
    }
    ctx->pc = 0x4F0C88u;
    SET_GPR_U32(ctx, 31, 0x4F0C90u);
    ctx->pc = 0x4F0C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0C88u;
            // 0x4f0c8c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C90u; }
        if (ctx->pc != 0x4F0C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0C90u; }
        if (ctx->pc != 0x4F0C90u) { return; }
    }
    ctx->pc = 0x4F0C90u;
label_4f0c90:
    // 0x4f0c90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4f0c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f0c94:
    // 0x4f0c94: 0x3c02c29c  lui         $v0, 0xC29C
    ctx->pc = 0x4f0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49820 << 16));
label_4f0c98:
    // 0x4f0c98: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x4f0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_4f0c9c:
    // 0x4f0c9c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4f0c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4f0ca0:
    // 0x4f0ca0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4f0ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4f0ca4:
    // 0x4f0ca4: 0x26110068  addiu       $s1, $s0, 0x68
    ctx->pc = 0x4f0ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_4f0ca8:
    // 0x4f0ca8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4f0ca8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4f0cac:
    // 0x4f0cac: 0xc04cbd8  jal         func_132F60
label_4f0cb0:
    if (ctx->pc == 0x4F0CB0u) {
        ctx->pc = 0x4F0CB0u;
            // 0x4f0cb0: 0xae500008  sw          $s0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x4F0CB4u;
        goto label_4f0cb4;
    }
    ctx->pc = 0x4F0CACu;
    SET_GPR_U32(ctx, 31, 0x4F0CB4u);
    ctx->pc = 0x4F0CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0CACu;
            // 0x4f0cb0: 0xae500008  sw          $s0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0CB4u; }
        if (ctx->pc != 0x4F0CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0CB4u; }
        if (ctx->pc != 0x4F0CB4u) { return; }
    }
    ctx->pc = 0x4F0CB4u;
label_4f0cb4:
    // 0x4f0cb4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4f0cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4f0cb8:
    // 0x4f0cb8: 0xc04f278  jal         func_13C9E0
label_4f0cbc:
    if (ctx->pc == 0x4F0CBCu) {
        ctx->pc = 0x4F0CBCu;
            // 0x4f0cbc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4F0CC0u;
        goto label_4f0cc0;
    }
    ctx->pc = 0x4F0CB8u;
    SET_GPR_U32(ctx, 31, 0x4F0CC0u);
    ctx->pc = 0x4F0CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0CB8u;
            // 0x4f0cbc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0CC0u; }
        if (ctx->pc != 0x4F0CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0CC0u; }
        if (ctx->pc != 0x4F0CC0u) { return; }
    }
    ctx->pc = 0x4F0CC0u;
label_4f0cc0:
    // 0x4f0cc0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4f0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4f0cc4:
    // 0x4f0cc4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x4f0cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4f0cc8:
    // 0x4f0cc8: 0xc04cca0  jal         func_133280
label_4f0ccc:
    if (ctx->pc == 0x4F0CCCu) {
        ctx->pc = 0x4F0CCCu;
            // 0x4f0ccc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0CD0u;
        goto label_4f0cd0;
    }
    ctx->pc = 0x4F0CC8u;
    SET_GPR_U32(ctx, 31, 0x4F0CD0u);
    ctx->pc = 0x4F0CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0CC8u;
            // 0x4f0ccc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0CD0u; }
        if (ctx->pc != 0x4F0CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0CD0u; }
        if (ctx->pc != 0x4F0CD0u) { return; }
    }
    ctx->pc = 0x4F0CD0u;
label_4f0cd0:
    // 0x4f0cd0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4f0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4f0cd4:
    // 0x4f0cd4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4f0cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4f0cd8:
    // 0x4f0cd8: 0xc04cbe0  jal         func_132F80
label_4f0cdc:
    if (ctx->pc == 0x4F0CDCu) {
        ctx->pc = 0x4F0CDCu;
            // 0x4f0cdc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0CE0u;
        goto label_4f0ce0;
    }
    ctx->pc = 0x4F0CD8u;
    SET_GPR_U32(ctx, 31, 0x4F0CE0u);
    ctx->pc = 0x4F0CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0CD8u;
            // 0x4f0cdc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0CE0u; }
        if (ctx->pc != 0x4F0CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0CE0u; }
        if (ctx->pc != 0x4F0CE0u) { return; }
    }
    ctx->pc = 0x4F0CE0u;
label_4f0ce0:
    // 0x4f0ce0: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x4f0ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f0ce4:
    // 0x4f0ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f0ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f0ce8:
    // 0x4f0ce8: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x4f0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f0cec:
    // 0x4f0cec: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x4f0cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_4f0cf0:
    // 0x4f0cf0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x4f0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f0cf4:
    // 0x4f0cf4: 0xe7a201b0  swc1        $f2, 0x1B0($sp)
    ctx->pc = 0x4f0cf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_4f0cf8:
    // 0x4f0cf8: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x4f0cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_4f0cfc:
    // 0x4f0cfc: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x4f0cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_4f0d00:
    // 0x4f0d00: 0x8e0700a4  lw          $a3, 0xA4($s0)
    ctx->pc = 0x4f0d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_4f0d04:
    // 0x4f0d04: 0xc0d37ec  jal         func_34DFB0
label_4f0d08:
    if (ctx->pc == 0x4F0D08u) {
        ctx->pc = 0x4F0D08u;
            // 0x4f0d08: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4F0D0Cu;
        goto label_4f0d0c;
    }
    ctx->pc = 0x4F0D04u;
    SET_GPR_U32(ctx, 31, 0x4F0D0Cu);
    ctx->pc = 0x4F0D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0D04u;
            // 0x4f0d08: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D0Cu; }
        if (ctx->pc != 0x4F0D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D0Cu; }
        if (ctx->pc != 0x4F0D0Cu) { return; }
    }
    ctx->pc = 0x4F0D0Cu;
label_4f0d0c:
    // 0x4f0d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f0d10:
    // 0x4f0d10: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4f0d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4f0d14:
    // 0x4f0d14: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4f0d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4f0d18:
    // 0x4f0d18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4f0d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f0d1c:
    // 0x4f0d1c: 0x3c02c31c  lui         $v0, 0xC31C
    ctx->pc = 0x4f0d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49948 << 16));
label_4f0d20:
    // 0x4f0d20: 0x2612007c  addiu       $s2, $s0, 0x7C
    ctx->pc = 0x4f0d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_4f0d24:
    // 0x4f0d24: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4f0d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4f0d28:
    // 0x4f0d28: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4f0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4f0d2c:
    // 0x4f0d2c: 0xc04cbd8  jal         func_132F60
label_4f0d30:
    if (ctx->pc == 0x4F0D30u) {
        ctx->pc = 0x4F0D30u;
            // 0x4f0d30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4F0D34u;
        goto label_4f0d34;
    }
    ctx->pc = 0x4F0D2Cu;
    SET_GPR_U32(ctx, 31, 0x4F0D34u);
    ctx->pc = 0x4F0D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0D2Cu;
            // 0x4f0d30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D34u; }
        if (ctx->pc != 0x4F0D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D34u; }
        if (ctx->pc != 0x4F0D34u) { return; }
    }
    ctx->pc = 0x4F0D34u;
label_4f0d34:
    // 0x4f0d34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4f0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4f0d38:
    // 0x4f0d38: 0xc04f278  jal         func_13C9E0
label_4f0d3c:
    if (ctx->pc == 0x4F0D3Cu) {
        ctx->pc = 0x4F0D3Cu;
            // 0x4f0d3c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4F0D40u;
        goto label_4f0d40;
    }
    ctx->pc = 0x4F0D38u;
    SET_GPR_U32(ctx, 31, 0x4F0D40u);
    ctx->pc = 0x4F0D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0D38u;
            // 0x4f0d3c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D40u; }
        if (ctx->pc != 0x4F0D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D40u; }
        if (ctx->pc != 0x4F0D40u) { return; }
    }
    ctx->pc = 0x4F0D40u;
label_4f0d40:
    // 0x4f0d40: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4f0d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4f0d44:
    // 0x4f0d44: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4f0d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4f0d48:
    // 0x4f0d48: 0xc04cca0  jal         func_133280
label_4f0d4c:
    if (ctx->pc == 0x4F0D4Cu) {
        ctx->pc = 0x4F0D4Cu;
            // 0x4f0d4c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0D50u;
        goto label_4f0d50;
    }
    ctx->pc = 0x4F0D48u;
    SET_GPR_U32(ctx, 31, 0x4F0D50u);
    ctx->pc = 0x4F0D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0D48u;
            // 0x4f0d4c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D50u; }
        if (ctx->pc != 0x4F0D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D50u; }
        if (ctx->pc != 0x4F0D50u) { return; }
    }
    ctx->pc = 0x4F0D50u;
label_4f0d50:
    // 0x4f0d50: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4f0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4f0d54:
    // 0x4f0d54: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4f0d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4f0d58:
    // 0x4f0d58: 0xc04cbe0  jal         func_132F80
label_4f0d5c:
    if (ctx->pc == 0x4F0D5Cu) {
        ctx->pc = 0x4F0D5Cu;
            // 0x4f0d5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0D60u;
        goto label_4f0d60;
    }
    ctx->pc = 0x4F0D58u;
    SET_GPR_U32(ctx, 31, 0x4F0D60u);
    ctx->pc = 0x4F0D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0D58u;
            // 0x4f0d5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D60u; }
        if (ctx->pc != 0x4F0D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D60u; }
        if (ctx->pc != 0x4F0D60u) { return; }
    }
    ctx->pc = 0x4F0D60u;
label_4f0d60:
    // 0x4f0d60: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x4f0d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f0d64:
    // 0x4f0d64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f0d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f0d68:
    // 0x4f0d68: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x4f0d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f0d6c:
    // 0x4f0d6c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x4f0d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_4f0d70:
    // 0x4f0d70: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x4f0d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f0d74:
    // 0x4f0d74: 0xe7a201a0  swc1        $f2, 0x1A0($sp)
    ctx->pc = 0x4f0d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_4f0d78:
    // 0x4f0d78: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x4f0d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_4f0d7c:
    // 0x4f0d7c: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x4f0d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_4f0d80:
    // 0x4f0d80: 0x8e0700a4  lw          $a3, 0xA4($s0)
    ctx->pc = 0x4f0d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_4f0d84:
    // 0x4f0d84: 0xc0d37ec  jal         func_34DFB0
label_4f0d88:
    if (ctx->pc == 0x4F0D88u) {
        ctx->pc = 0x4F0D88u;
            // 0x4f0d88: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4F0D8Cu;
        goto label_4f0d8c;
    }
    ctx->pc = 0x4F0D84u;
    SET_GPR_U32(ctx, 31, 0x4F0D8Cu);
    ctx->pc = 0x4F0D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0D84u;
            // 0x4f0d88: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D8Cu; }
        if (ctx->pc != 0x4F0D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0D8Cu; }
        if (ctx->pc != 0x4F0D8Cu) { return; }
    }
    ctx->pc = 0x4F0D8Cu;
label_4f0d8c:
    // 0x4f0d8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f0d90:
    // 0x4f0d90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4f0d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4f0d94:
    // 0x4f0d94: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x4f0d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_4f0d98:
    // 0x4f0d98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4f0d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f0d9c:
    // 0x4f0d9c: 0x3c02c36a  lui         $v0, 0xC36A
    ctx->pc = 0x4f0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50026 << 16));
label_4f0da0:
    // 0x4f0da0: 0x26110090  addiu       $s1, $s0, 0x90
    ctx->pc = 0x4f0da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_4f0da4:
    // 0x4f0da4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4f0da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4f0da8:
    // 0x4f0da8: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x4f0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_4f0dac:
    // 0x4f0dac: 0xc04cbd8  jal         func_132F60
label_4f0db0:
    if (ctx->pc == 0x4F0DB0u) {
        ctx->pc = 0x4F0DB0u;
            // 0x4f0db0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4F0DB4u;
        goto label_4f0db4;
    }
    ctx->pc = 0x4F0DACu;
    SET_GPR_U32(ctx, 31, 0x4F0DB4u);
    ctx->pc = 0x4F0DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0DACu;
            // 0x4f0db0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0DB4u; }
        if (ctx->pc != 0x4F0DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0DB4u; }
        if (ctx->pc != 0x4F0DB4u) { return; }
    }
    ctx->pc = 0x4F0DB4u;
label_4f0db4:
    // 0x4f0db4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4f0db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4f0db8:
    // 0x4f0db8: 0xc04f278  jal         func_13C9E0
label_4f0dbc:
    if (ctx->pc == 0x4F0DBCu) {
        ctx->pc = 0x4F0DBCu;
            // 0x4f0dbc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4F0DC0u;
        goto label_4f0dc0;
    }
    ctx->pc = 0x4F0DB8u;
    SET_GPR_U32(ctx, 31, 0x4F0DC0u);
    ctx->pc = 0x4F0DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0DB8u;
            // 0x4f0dbc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0DC0u; }
        if (ctx->pc != 0x4F0DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0DC0u; }
        if (ctx->pc != 0x4F0DC0u) { return; }
    }
    ctx->pc = 0x4F0DC0u;
label_4f0dc0:
    // 0x4f0dc0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4f0dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4f0dc4:
    // 0x4f0dc4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4f0dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4f0dc8:
    // 0x4f0dc8: 0xc04cca0  jal         func_133280
label_4f0dcc:
    if (ctx->pc == 0x4F0DCCu) {
        ctx->pc = 0x4F0DCCu;
            // 0x4f0dcc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0DD0u;
        goto label_4f0dd0;
    }
    ctx->pc = 0x4F0DC8u;
    SET_GPR_U32(ctx, 31, 0x4F0DD0u);
    ctx->pc = 0x4F0DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0DC8u;
            // 0x4f0dcc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0DD0u; }
        if (ctx->pc != 0x4F0DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0DD0u; }
        if (ctx->pc != 0x4F0DD0u) { return; }
    }
    ctx->pc = 0x4F0DD0u;
label_4f0dd0:
    // 0x4f0dd0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4f0dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4f0dd4:
    // 0x4f0dd4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4f0dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4f0dd8:
    // 0x4f0dd8: 0xc04cbe0  jal         func_132F80
label_4f0ddc:
    if (ctx->pc == 0x4F0DDCu) {
        ctx->pc = 0x4F0DDCu;
            // 0x4f0ddc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0DE0u;
        goto label_4f0de0;
    }
    ctx->pc = 0x4F0DD8u;
    SET_GPR_U32(ctx, 31, 0x4F0DE0u);
    ctx->pc = 0x4F0DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0DD8u;
            // 0x4f0ddc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0DE0u; }
        if (ctx->pc != 0x4F0DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0DE0u; }
        if (ctx->pc != 0x4F0DE0u) { return; }
    }
    ctx->pc = 0x4F0DE0u;
label_4f0de0:
    // 0x4f0de0: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x4f0de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f0de4:
    // 0x4f0de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f0de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f0de8:
    // 0x4f0de8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x4f0de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f0dec:
    // 0x4f0dec: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x4f0decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_4f0df0:
    // 0x4f0df0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x4f0df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f0df4:
    // 0x4f0df4: 0xe7a20190  swc1        $f2, 0x190($sp)
    ctx->pc = 0x4f0df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_4f0df8:
    // 0x4f0df8: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x4f0df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_4f0dfc:
    // 0x4f0dfc: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x4f0dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_4f0e00:
    // 0x4f0e00: 0x8e0700a4  lw          $a3, 0xA4($s0)
    ctx->pc = 0x4f0e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_4f0e04:
    // 0x4f0e04: 0xc0d37ec  jal         func_34DFB0
label_4f0e08:
    if (ctx->pc == 0x4F0E08u) {
        ctx->pc = 0x4F0E08u;
            // 0x4f0e08: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4F0E0Cu;
        goto label_4f0e0c;
    }
    ctx->pc = 0x4F0E04u;
    SET_GPR_U32(ctx, 31, 0x4F0E0Cu);
    ctx->pc = 0x4F0E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0E04u;
            // 0x4f0e08: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0E0Cu; }
        if (ctx->pc != 0x4F0E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0E0Cu; }
        if (ctx->pc != 0x4F0E0Cu) { return; }
    }
    ctx->pc = 0x4F0E0Cu;
label_4f0e0c:
    // 0x4f0e0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4f0e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f0e10:
    // 0x4f0e10: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4f0e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4f0e14:
    // 0x4f0e14: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x4f0e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
label_4f0e18:
    // 0x4f0e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f0e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f0e1c:
    // 0x4f0e1c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4f0e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4f0e20:
    // 0x4f0e20: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x4f0e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f0e24:
    // 0x4f0e24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f0e24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f0e28:
    // 0x4f0e28: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4f0e2c:
    if (ctx->pc == 0x4F0E2Cu) {
        ctx->pc = 0x4F0E2Cu;
            // 0x4f0e2c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4F0E30u;
        goto label_4f0e30;
    }
    ctx->pc = 0x4F0E28u;
    {
        const bool branch_taken_0x4f0e28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f0e28) {
            ctx->pc = 0x4F0E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0E28u;
            // 0x4f0e2c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0E40u;
            goto label_4f0e40;
        }
    }
    ctx->pc = 0x4F0E30u;
label_4f0e30:
    // 0x4f0e30: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f0e30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4f0e34:
    // 0x4f0e34: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4f0e34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4f0e38:
    // 0x4f0e38: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f0e3c:
    if (ctx->pc == 0x4F0E3Cu) {
        ctx->pc = 0x4F0E3Cu;
            // 0x4f0e3c: 0xae0400a8  sw          $a0, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 4));
        ctx->pc = 0x4F0E40u;
        goto label_4f0e40;
    }
    ctx->pc = 0x4F0E38u;
    {
        const bool branch_taken_0x4f0e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0E38u;
            // 0x4f0e3c: 0xae0400a8  sw          $a0, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0e38) {
            ctx->pc = 0x4F0E58u;
            goto label_4f0e58;
        }
    }
    ctx->pc = 0x4F0E40u;
label_4f0e40:
    // 0x4f0e40: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4f0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4f0e44:
    // 0x4f0e44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f0e44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4f0e48:
    // 0x4f0e48: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4f0e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4f0e4c:
    // 0x4f0e4c: 0x0  nop
    ctx->pc = 0x4f0e4cu;
    // NOP
label_4f0e50:
    // 0x4f0e50: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4f0e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4f0e54:
    // 0x4f0e54: 0xae0400a8  sw          $a0, 0xA8($s0)
    ctx->pc = 0x4f0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 4));
label_4f0e58:
    // 0x4f0e58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f0e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4f0e5c:
    // 0x4f0e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f0e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0e60:
    // 0x4f0e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f0e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0e64:
    // 0x4f0e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0e68:
    // 0x4f0e68: 0x3e00008  jr          $ra
label_4f0e6c:
    if (ctx->pc == 0x4F0E6Cu) {
        ctx->pc = 0x4F0E6Cu;
            // 0x4f0e6c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4F0E70u;
        goto label_4f0e70;
    }
    ctx->pc = 0x4F0E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0E68u;
            // 0x4f0e6c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0E70u;
label_4f0e70:
    // 0x4f0e70: 0x3e00008  jr          $ra
label_4f0e74:
    if (ctx->pc == 0x4F0E74u) {
        ctx->pc = 0x4F0E78u;
        goto label_4f0e78;
    }
    ctx->pc = 0x4F0E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0E78u;
label_4f0e78:
    // 0x4f0e78: 0x0  nop
    ctx->pc = 0x4f0e78u;
    // NOP
label_4f0e7c:
    // 0x4f0e7c: 0x0  nop
    ctx->pc = 0x4f0e7cu;
    // NOP
label_4f0e80:
    // 0x4f0e80: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x4f0e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_4f0e84:
    // 0x4f0e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f0e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f0e88:
    // 0x4f0e88: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x4f0e88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
label_4f0e8c:
    // 0x4f0e8c: 0xa0830078  sb          $v1, 0x78($a0)
    ctx->pc = 0x4f0e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 3));
label_4f0e90:
    // 0x4f0e90: 0xa083008c  sb          $v1, 0x8C($a0)
    ctx->pc = 0x4f0e90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 3));
label_4f0e94:
    // 0x4f0e94: 0x3e00008  jr          $ra
label_4f0e98:
    if (ctx->pc == 0x4F0E98u) {
        ctx->pc = 0x4F0E98u;
            // 0x4f0e98: 0xa08300a0  sb          $v1, 0xA0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4F0E9Cu;
        goto label_4f0e9c;
    }
    ctx->pc = 0x4F0E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0E94u;
            // 0x4f0e98: 0xa08300a0  sb          $v1, 0xA0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0E9Cu;
label_4f0e9c:
    // 0x4f0e9c: 0x0  nop
    ctx->pc = 0x4f0e9cu;
    // NOP
label_4f0ea0:
    // 0x4f0ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f0ea4:
    // 0x4f0ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f0ea8:
    // 0x4f0ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f0eac:
    // 0x4f0eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f0eb0:
    // 0x4f0eb0: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x4f0eb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4f0eb4:
    // 0x4f0eb4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_4f0eb8:
    if (ctx->pc == 0x4F0EB8u) {
        ctx->pc = 0x4F0EB8u;
            // 0x4f0eb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0EBCu;
        goto label_4f0ebc;
    }
    ctx->pc = 0x4F0EB4u;
    {
        const bool branch_taken_0x4f0eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0EB4u;
            // 0x4f0eb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0eb4) {
            ctx->pc = 0x4F0F20u;
            goto label_4f0f20;
        }
    }
    ctx->pc = 0x4F0EBCu;
label_4f0ebc:
    // 0x4f0ebc: 0x80a40e3f  lb          $a0, 0xE3F($a1)
    ctx->pc = 0x4f0ebcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3647)));
label_4f0ec0:
    // 0x4f0ec0: 0x8ca60d78  lw          $a2, 0xD78($a1)
    ctx->pc = 0x4f0ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3448)));
label_4f0ec4:
    // 0x4f0ec4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4f0ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4f0ec8:
    // 0x4f0ec8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4f0ecc:
    // 0x4f0ecc: 0x84c50020  lh          $a1, 0x20($a2)
    ctx->pc = 0x4f0eccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
label_4f0ed0:
    // 0x4f0ed0: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x4f0ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_4f0ed4:
    // 0x4f0ed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4f0ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4f0ed8:
    // 0x4f0ed8: 0x14a30011  bne         $a1, $v1, . + 4 + (0x11 << 2)
label_4f0edc:
    if (ctx->pc == 0x4F0EDCu) {
        ctx->pc = 0x4F0EDCu;
            // 0x4f0edc: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x4F0EE0u;
        goto label_4f0ee0;
    }
    ctx->pc = 0x4F0ED8u;
    {
        const bool branch_taken_0x4f0ed8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x4F0EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0ED8u;
            // 0x4f0edc: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0ed8) {
            ctx->pc = 0x4F0F20u;
            goto label_4f0f20;
        }
    }
    ctx->pc = 0x4F0EE0u;
label_4f0ee0:
    // 0x4f0ee0: 0x48e3c  dsll32      $s1, $a0, 24
    ctx->pc = 0x4f0ee0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 24));
label_4f0ee4:
    // 0x4f0ee4: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x4f0ee4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
label_4f0ee8:
    // 0x4f0ee8: 0x2a210007  slti        $at, $s1, 0x7
    ctx->pc = 0x4f0ee8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_4f0eec:
    // 0x4f0eec: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_4f0ef0:
    if (ctx->pc == 0x4F0EF0u) {
        ctx->pc = 0x4F0EF0u;
            // 0x4f0ef0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x4F0EF4u;
        goto label_4f0ef4;
    }
    ctx->pc = 0x4F0EECu;
    {
        const bool branch_taken_0x4f0eec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0eec) {
            ctx->pc = 0x4F0EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0EECu;
            // 0x4f0ef0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0F00u;
            goto label_4f0f00;
        }
    }
    ctx->pc = 0x4F0EF4u;
label_4f0ef4:
    // 0x4f0ef4: 0x1000000b  b           . + 4 + (0xB << 2)
label_4f0ef8:
    if (ctx->pc == 0x4F0EF8u) {
        ctx->pc = 0x4F0EF8u;
            // 0x4f0ef8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4F0EFCu;
        goto label_4f0efc;
    }
    ctx->pc = 0x4F0EF4u;
    {
        const bool branch_taken_0x4f0ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0EF4u;
            // 0x4f0ef8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0ef4) {
            ctx->pc = 0x4F0F24u;
            goto label_4f0f24;
        }
    }
    ctx->pc = 0x4F0EFCu;
label_4f0efc:
    // 0x4f0efc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4f0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f0f00:
    // 0x4f0f00: 0xc13c25c  jal         func_4F0970
label_4f0f04:
    if (ctx->pc == 0x4F0F04u) {
        ctx->pc = 0x4F0F04u;
            // 0x4f0f04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0F08u;
        goto label_4f0f08;
    }
    ctx->pc = 0x4F0F00u;
    SET_GPR_U32(ctx, 31, 0x4F0F08u);
    ctx->pc = 0x4F0F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0F00u;
            // 0x4f0f04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F0970u;
    goto label_4f0970;
    ctx->pc = 0x4F0F08u;
label_4f0f08:
    // 0x4f0f08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4f0f0c:
    if (ctx->pc == 0x4F0F0Cu) {
        ctx->pc = 0x4F0F10u;
        goto label_4f0f10;
    }
    ctx->pc = 0x4F0F08u;
    {
        const bool branch_taken_0x4f0f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0f08) {
            ctx->pc = 0x4F0F20u;
            goto label_4f0f20;
        }
    }
    ctx->pc = 0x4F0F10u;
label_4f0f10:
    // 0x4f0f10: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4f0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4f0f14:
    // 0x4f0f14: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
label_4f0f18:
    if (ctx->pc == 0x4F0F18u) {
        ctx->pc = 0x4F0F1Cu;
        goto label_4f0f1c;
    }
    ctx->pc = 0x4F0F14u;
    {
        const bool branch_taken_0x4f0f14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f0f14) {
            ctx->pc = 0x4F0F20u;
            goto label_4f0f20;
        }
    }
    ctx->pc = 0x4F0F1Cu;
label_4f0f1c:
    // 0x4f0f1c: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x4f0f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
label_4f0f20:
    // 0x4f0f20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f0f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0f24:
    // 0x4f0f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f0f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0f28:
    // 0x4f0f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0f2c:
    // 0x4f0f2c: 0x3e00008  jr          $ra
label_4f0f30:
    if (ctx->pc == 0x4F0F30u) {
        ctx->pc = 0x4F0F30u;
            // 0x4f0f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F0F34u;
        goto label_4f0f34;
    }
    ctx->pc = 0x4F0F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0F2Cu;
            // 0x4f0f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0F34u;
label_4f0f34:
    // 0x4f0f34: 0x0  nop
    ctx->pc = 0x4f0f34u;
    // NOP
label_4f0f38:
    // 0x4f0f38: 0x0  nop
    ctx->pc = 0x4f0f38u;
    // NOP
label_4f0f3c:
    // 0x4f0f3c: 0x0  nop
    ctx->pc = 0x4f0f3cu;
    // NOP
label_4f0f40:
    // 0x4f0f40: 0x3e00008  jr          $ra
label_4f0f44:
    if (ctx->pc == 0x4F0F44u) {
        ctx->pc = 0x4F0F44u;
            // 0x4f0f44: 0x240242a4  addiu       $v0, $zero, 0x42A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17060));
        ctx->pc = 0x4F0F48u;
        goto label_4f0f48;
    }
    ctx->pc = 0x4F0F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0F40u;
            // 0x4f0f44: 0x240242a4  addiu       $v0, $zero, 0x42A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17060));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0F48u;
label_4f0f48:
    // 0x4f0f48: 0x0  nop
    ctx->pc = 0x4f0f48u;
    // NOP
label_4f0f4c:
    // 0x4f0f4c: 0x0  nop
    ctx->pc = 0x4f0f4cu;
    // NOP
label_4f0f50:
    // 0x4f0f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f0f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f0f54:
    // 0x4f0f54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4f0f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4f0f58:
    // 0x4f0f58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f0f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f0f5c:
    // 0x4f0f5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f0f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f0f60:
    // 0x4f0f60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4f0f60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f0f64:
    // 0x4f0f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f0f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f0f68:
    // 0x4f0f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f0f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f0f6c:
    // 0x4f0f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f0f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f0f70:
    // 0x4f0f70: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4f0f70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f0f74:
    // 0x4f0f74: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4f0f78:
    if (ctx->pc == 0x4F0F78u) {
        ctx->pc = 0x4F0F78u;
            // 0x4f0f78: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F0F7Cu;
        goto label_4f0f7c;
    }
    ctx->pc = 0x4F0F74u;
    {
        const bool branch_taken_0x4f0f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0F74u;
            // 0x4f0f78: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0f74) {
            ctx->pc = 0x4F0FB8u;
            goto label_4f0fb8;
        }
    }
    ctx->pc = 0x4F0F7Cu;
label_4f0f7c:
    // 0x4f0f7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f0f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0f80:
    // 0x4f0f80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f0f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0f84:
    // 0x4f0f84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f0f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0f88:
    // 0x4f0f88: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4f0f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4f0f8c:
    // 0x4f0f8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4f0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4f0f90:
    // 0x4f0f90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f0f94:
    // 0x4f0f94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f0f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f0f98:
    // 0x4f0f98: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4f0f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4f0f9c:
    // 0x4f0f9c: 0x320f809  jalr        $t9
label_4f0fa0:
    if (ctx->pc == 0x4F0FA0u) {
        ctx->pc = 0x4F0FA4u;
        goto label_4f0fa4;
    }
    ctx->pc = 0x4F0F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F0FA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F0FA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F0FA4u; }
            if (ctx->pc != 0x4F0FA4u) { return; }
        }
        }
    }
    ctx->pc = 0x4F0FA4u;
label_4f0fa4:
    // 0x4f0fa4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4f0fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4f0fa8:
    // 0x4f0fa8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4f0fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4f0fac:
    // 0x4f0fac: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4f0facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4f0fb0:
    // 0x4f0fb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4f0fb4:
    if (ctx->pc == 0x4F0FB4u) {
        ctx->pc = 0x4F0FB4u;
            // 0x4f0fb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4F0FB8u;
        goto label_4f0fb8;
    }
    ctx->pc = 0x4F0FB0u;
    {
        const bool branch_taken_0x4f0fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0FB0u;
            // 0x4f0fb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0fb0) {
            ctx->pc = 0x4F0F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f0f88;
        }
    }
    ctx->pc = 0x4F0FB8u;
label_4f0fb8:
    // 0x4f0fb8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4f0fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f0fbc:
    // 0x4f0fbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4f0fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4f0fc0:
    // 0x4f0fc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f0fc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f0fc4:
    // 0x4f0fc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f0fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f0fc8:
    // 0x4f0fc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f0fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0fcc:
    // 0x4f0fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f0fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0fd0:
    // 0x4f0fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0fd4:
    // 0x4f0fd4: 0x3e00008  jr          $ra
label_4f0fd8:
    if (ctx->pc == 0x4F0FD8u) {
        ctx->pc = 0x4F0FD8u;
            // 0x4f0fd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4F0FDCu;
        goto label_4f0fdc;
    }
    ctx->pc = 0x4F0FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0FD4u;
            // 0x4f0fd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0FDCu;
label_4f0fdc:
    // 0x4f0fdc: 0x0  nop
    ctx->pc = 0x4f0fdcu;
    // NOP
label_4f0fe0:
    // 0x4f0fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f0fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f0fe4:
    // 0x4f0fe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f0fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f0fe8:
    // 0x4f0fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f0fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f0fec:
    // 0x4f0fec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4f0fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4f0ff0:
    // 0x4f0ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f0ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f0ff4:
    // 0x4f0ff4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4f0ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4f0ff8:
    // 0x4f0ff8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f0ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f0ffc:
    // 0x4f0ffc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4f0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4f1000:
    // 0x4f1000: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f1000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f1004:
    // 0x4f1004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f1004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f1008:
    // 0x4f1008: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4f1008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4f100c:
    // 0x4f100c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4f100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f1010:
    // 0x4f1010: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4f1010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4f1014:
    // 0x4f1014: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4f1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4f1018:
    // 0x4f1018: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4f1018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4f101c:
    // 0x4f101c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4f101cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4f1020:
    // 0x4f1020: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4f1020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4f1024:
    // 0x4f1024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f1024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4f1028:
    // 0x4f1028: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4f1028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4f102c:
    // 0x4f102c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4f102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f1030:
    // 0x4f1030: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4f1030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4f1034:
    // 0x4f1034: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f1034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f1038:
    // 0x4f1038: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4f1038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f103c:
    // 0x4f103c: 0xc0a997c  jal         func_2A65F0
label_4f1040:
    if (ctx->pc == 0x4F1040u) {
        ctx->pc = 0x4F1040u;
            // 0x4f1040: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4F1044u;
        goto label_4f1044;
    }
    ctx->pc = 0x4F103Cu;
    SET_GPR_U32(ctx, 31, 0x4F1044u);
    ctx->pc = 0x4F1040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F103Cu;
            // 0x4f1040: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1044u; }
        if (ctx->pc != 0x4F1044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1044u; }
        if (ctx->pc != 0x4F1044u) { return; }
    }
    ctx->pc = 0x4F1044u;
label_4f1044:
    // 0x4f1044: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4f1044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4f1048:
    // 0x4f1048: 0xc0d879c  jal         func_361E70
label_4f104c:
    if (ctx->pc == 0x4F104Cu) {
        ctx->pc = 0x4F104Cu;
            // 0x4f104c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1050u;
        goto label_4f1050;
    }
    ctx->pc = 0x4F1048u;
    SET_GPR_U32(ctx, 31, 0x4F1050u);
    ctx->pc = 0x4F104Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1048u;
            // 0x4f104c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1050u; }
        if (ctx->pc != 0x4F1050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1050u; }
        if (ctx->pc != 0x4F1050u) { return; }
    }
    ctx->pc = 0x4F1050u;
label_4f1050:
    // 0x4f1050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f1050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f1054:
    // 0x4f1054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f1054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f1058:
    // 0x4f1058: 0x3e00008  jr          $ra
label_4f105c:
    if (ctx->pc == 0x4F105Cu) {
        ctx->pc = 0x4F105Cu;
            // 0x4f105c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F1060u;
        goto label_4f1060;
    }
    ctx->pc = 0x4F1058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1058u;
            // 0x4f105c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F1060u;
label_4f1060:
    // 0x4f1060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f1060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f1064:
    // 0x4f1064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f1064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f1068:
    // 0x4f1068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f1068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f106c:
    // 0x4f106c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4f106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4f1070:
    // 0x4f1070: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4f1074:
    if (ctx->pc == 0x4F1074u) {
        ctx->pc = 0x4F1074u;
            // 0x4f1074: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1078u;
        goto label_4f1078;
    }
    ctx->pc = 0x4F1070u;
    {
        const bool branch_taken_0x4f1070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1070u;
            // 0x4f1074: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1070) {
            ctx->pc = 0x4F1190u;
            goto label_4f1190;
        }
    }
    ctx->pc = 0x4F1078u;
label_4f1078:
    // 0x4f1078: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f1078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f107c:
    // 0x4f107c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4f107cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4f1080:
    // 0x4f1080: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f1080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f1084:
    // 0x4f1084: 0xc075128  jal         func_1D44A0
label_4f1088:
    if (ctx->pc == 0x4F1088u) {
        ctx->pc = 0x4F1088u;
            // 0x4f1088: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4F108Cu;
        goto label_4f108c;
    }
    ctx->pc = 0x4F1084u;
    SET_GPR_U32(ctx, 31, 0x4F108Cu);
    ctx->pc = 0x4F1088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1084u;
            // 0x4f1088: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F108Cu; }
        if (ctx->pc != 0x4F108Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F108Cu; }
        if (ctx->pc != 0x4F108Cu) { return; }
    }
    ctx->pc = 0x4F108Cu;
label_4f108c:
    // 0x4f108c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4f108cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f1090:
    // 0x4f1090: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f1090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f1094:
    // 0x4f1094: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4f1094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4f1098:
    // 0x4f1098: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4f1098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f109c:
    // 0x4f109c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f109cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f10a0:
    // 0x4f10a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f10a4:
    if (ctx->pc == 0x4F10A4u) {
        ctx->pc = 0x4F10A4u;
            // 0x4f10a4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4F10A8u;
        goto label_4f10a8;
    }
    ctx->pc = 0x4F10A0u;
    {
        const bool branch_taken_0x4f10a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F10A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F10A0u;
            // 0x4f10a4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f10a0) {
            ctx->pc = 0x4F10B0u;
            goto label_4f10b0;
        }
    }
    ctx->pc = 0x4F10A8u;
label_4f10a8:
    // 0x4f10a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f10ac:
    // 0x4f10ac: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4f10acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4f10b0:
    // 0x4f10b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f10b4:
    // 0x4f10b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f10b8:
    // 0x4f10b8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4f10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4f10bc:
    // 0x4f10bc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4f10bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4f10c0:
    // 0x4f10c0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f10c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f10c4:
    // 0x4f10c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f10c8:
    if (ctx->pc == 0x4F10C8u) {
        ctx->pc = 0x4F10C8u;
            // 0x4f10c8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4F10CCu;
        goto label_4f10cc;
    }
    ctx->pc = 0x4F10C4u;
    {
        const bool branch_taken_0x4f10c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f10c4) {
            ctx->pc = 0x4F10C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F10C4u;
            // 0x4f10c8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F10D8u;
            goto label_4f10d8;
        }
    }
    ctx->pc = 0x4F10CCu;
label_4f10cc:
    // 0x4f10cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f10d0:
    // 0x4f10d0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4f10d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4f10d4:
    // 0x4f10d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f10d8:
    // 0x4f10d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f10dc:
    // 0x4f10dc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4f10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4f10e0:
    // 0x4f10e0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4f10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4f10e4:
    // 0x4f10e4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f10e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f10e8:
    // 0x4f10e8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f10ec:
    if (ctx->pc == 0x4F10ECu) {
        ctx->pc = 0x4F10ECu;
            // 0x4f10ec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4F10F0u;
        goto label_4f10f0;
    }
    ctx->pc = 0x4F10E8u;
    {
        const bool branch_taken_0x4f10e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f10e8) {
            ctx->pc = 0x4F10ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F10E8u;
            // 0x4f10ec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F10FCu;
            goto label_4f10fc;
        }
    }
    ctx->pc = 0x4F10F0u;
label_4f10f0:
    // 0x4f10f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f10f4:
    // 0x4f10f4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4f10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4f10f8:
    // 0x4f10f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4f10f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f10fc:
    // 0x4f10fc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4f10fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4f1100:
    // 0x4f1100: 0x320f809  jalr        $t9
label_4f1104:
    if (ctx->pc == 0x4F1104u) {
        ctx->pc = 0x4F1104u;
            // 0x4f1104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1108u;
        goto label_4f1108;
    }
    ctx->pc = 0x4F1100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F1108u);
        ctx->pc = 0x4F1104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1100u;
            // 0x4f1104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F1108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F1108u; }
            if (ctx->pc != 0x4F1108u) { return; }
        }
        }
    }
    ctx->pc = 0x4F1108u;
label_4f1108:
    // 0x4f1108: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4f1108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f110c:
    // 0x4f110c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f110cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f1110:
    // 0x4f1110: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4f1110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4f1114:
    // 0x4f1114: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4f1114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4f1118:
    // 0x4f1118: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4f1118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4f111c:
    // 0x4f111c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4f111cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f1120:
    // 0x4f1120: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f1124:
    if (ctx->pc == 0x4F1124u) {
        ctx->pc = 0x4F1124u;
            // 0x4f1124: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4F1128u;
        goto label_4f1128;
    }
    ctx->pc = 0x4F1120u;
    {
        const bool branch_taken_0x4f1120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1120) {
            ctx->pc = 0x4F1124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1120u;
            // 0x4f1124: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1134u;
            goto label_4f1134;
        }
    }
    ctx->pc = 0x4F1128u;
label_4f1128:
    // 0x4f1128: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f1128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f112c:
    // 0x4f112c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4f112cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4f1130:
    // 0x4f1130: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4f1130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f1134:
    // 0x4f1134: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f1134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f1138:
    // 0x4f1138: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4f1138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4f113c:
    // 0x4f113c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4f113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4f1140:
    // 0x4f1140: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4f1140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4f1144:
    // 0x4f1144: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4f1144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f1148:
    // 0x4f1148: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f114c:
    if (ctx->pc == 0x4F114Cu) {
        ctx->pc = 0x4F1150u;
        goto label_4f1150;
    }
    ctx->pc = 0x4F1148u;
    {
        const bool branch_taken_0x4f1148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1148) {
            ctx->pc = 0x4F1158u;
            goto label_4f1158;
        }
    }
    ctx->pc = 0x4F1150u;
label_4f1150:
    // 0x4f1150: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f1150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f1154:
    // 0x4f1154: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4f1154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4f1158:
    // 0x4f1158: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f1158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f115c:
    // 0x4f115c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4f115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4f1160:
    // 0x4f1160: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4f1160u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f1164:
    // 0x4f1164: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f1168:
    if (ctx->pc == 0x4F1168u) {
        ctx->pc = 0x4F116Cu;
        goto label_4f116c;
    }
    ctx->pc = 0x4F1164u;
    {
        const bool branch_taken_0x4f1164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1164) {
            ctx->pc = 0x4F1174u;
            goto label_4f1174;
        }
    }
    ctx->pc = 0x4F116Cu;
label_4f116c:
    // 0x4f116c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f116cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f1170:
    // 0x4f1170: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4f1170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4f1174:
    // 0x4f1174: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f1174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f1178:
    // 0x4f1178: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4f1178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4f117c:
    // 0x4f117c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4f117cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f1180:
    // 0x4f1180: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f1184:
    if (ctx->pc == 0x4F1184u) {
        ctx->pc = 0x4F1184u;
            // 0x4f1184: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4F1188u;
        goto label_4f1188;
    }
    ctx->pc = 0x4F1180u;
    {
        const bool branch_taken_0x4f1180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1180) {
            ctx->pc = 0x4F1184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1180u;
            // 0x4f1184: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1194u;
            goto label_4f1194;
        }
    }
    ctx->pc = 0x4F1188u;
label_4f1188:
    // 0x4f1188: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f1188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f118c:
    // 0x4f118c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4f118cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4f1190:
    // 0x4f1190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f1190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f1194:
    // 0x4f1194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f1194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f1198:
    // 0x4f1198: 0x3e00008  jr          $ra
label_4f119c:
    if (ctx->pc == 0x4F119Cu) {
        ctx->pc = 0x4F119Cu;
            // 0x4f119c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F11A0u;
        goto label_4f11a0;
    }
    ctx->pc = 0x4F1198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F119Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1198u;
            // 0x4f119c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F11A0u;
label_4f11a0:
    // 0x4f11a0: 0x813c140  j           func_4F0500
label_4f11a4:
    if (ctx->pc == 0x4F11A4u) {
        ctx->pc = 0x4F11A4u;
            // 0x4f11a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F11A8u;
        goto label_4f11a8;
    }
    ctx->pc = 0x4F11A0u;
    ctx->pc = 0x4F11A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F11A0u;
            // 0x4f11a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F0500u;
    {
        auto targetFn = runtime->lookupFunction(0x4F0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4F11A8u;
label_4f11a8:
    // 0x4f11a8: 0x0  nop
    ctx->pc = 0x4f11a8u;
    // NOP
label_4f11ac:
    // 0x4f11ac: 0x0  nop
    ctx->pc = 0x4f11acu;
    // NOP
label_4f11b0:
    // 0x4f11b0: 0x813c004  j           func_4F0010
label_4f11b4:
    if (ctx->pc == 0x4F11B4u) {
        ctx->pc = 0x4F11B4u;
            // 0x4f11b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F11B8u;
        goto label_4f11b8;
    }
    ctx->pc = 0x4F11B0u;
    ctx->pc = 0x4F11B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F11B0u;
            // 0x4f11b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F0010u;
    if (runtime->hasFunction(0x4F0010u)) {
        auto targetFn = runtime->lookupFunction(0x4F0010u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004F0010_0x4f0010(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4F11B8u;
label_4f11b8:
    // 0x4f11b8: 0x0  nop
    ctx->pc = 0x4f11b8u;
    // NOP
label_4f11bc:
    // 0x4f11bc: 0x0  nop
    ctx->pc = 0x4f11bcu;
    // NOP
label_4f11c0:
    // 0x4f11c0: 0x813bfe0  j           func_4EFF80
label_4f11c4:
    if (ctx->pc == 0x4F11C4u) {
        ctx->pc = 0x4F11C4u;
            // 0x4f11c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F11C8u;
        goto label_4f11c8;
    }
    ctx->pc = 0x4F11C0u;
    ctx->pc = 0x4F11C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F11C0u;
            // 0x4f11c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EFF80u;
    {
        auto targetFn = runtime->lookupFunction(0x4EFF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4F11C8u;
label_4f11c8:
    // 0x4f11c8: 0x0  nop
    ctx->pc = 0x4f11c8u;
    // NOP
label_4f11cc:
    // 0x4f11cc: 0x0  nop
    ctx->pc = 0x4f11ccu;
    // NOP
label_4f11d0:
    // 0x4f11d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f11d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f11d4:
    // 0x4f11d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f11d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f11d8:
    // 0x4f11d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f11d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f11dc:
    // 0x4f11dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f11dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f11e0:
    // 0x4f11e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f11e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f11e4:
    // 0x4f11e4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4f11e8:
    if (ctx->pc == 0x4F11E8u) {
        ctx->pc = 0x4F11E8u;
            // 0x4f11e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F11ECu;
        goto label_4f11ec;
    }
    ctx->pc = 0x4F11E4u;
    {
        const bool branch_taken_0x4f11e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F11E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F11E4u;
            // 0x4f11e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f11e4) {
            ctx->pc = 0x4F1240u;
            goto label_4f1240;
        }
    }
    ctx->pc = 0x4F11ECu;
label_4f11ec:
    // 0x4f11ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f11f0:
    // 0x4f11f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f11f4:
    // 0x4f11f4: 0x24634040  addiu       $v1, $v1, 0x4040
    ctx->pc = 0x4f11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16448));
label_4f11f8:
    // 0x4f11f8: 0x24424078  addiu       $v0, $v0, 0x4078
    ctx->pc = 0x4f11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16504));
label_4f11fc:
    // 0x4f11fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f11fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f1200:
    // 0x4f1200: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4f1204:
    if (ctx->pc == 0x4F1204u) {
        ctx->pc = 0x4F1204u;
            // 0x4f1204: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4F1208u;
        goto label_4f1208;
    }
    ctx->pc = 0x4F1200u;
    {
        const bool branch_taken_0x4f1200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1200u;
            // 0x4f1204: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1200) {
            ctx->pc = 0x4F1228u;
            goto label_4f1228;
        }
    }
    ctx->pc = 0x4F1208u;
label_4f1208:
    // 0x4f1208: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f1208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f120c:
    // 0x4f120c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f120cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f1210:
    // 0x4f1210: 0x246340f0  addiu       $v1, $v1, 0x40F0
    ctx->pc = 0x4f1210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16624));
label_4f1214:
    // 0x4f1214: 0x24424128  addiu       $v0, $v0, 0x4128
    ctx->pc = 0x4f1214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16680));
label_4f1218:
    // 0x4f1218: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f1218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f121c:
    // 0x4f121c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f121cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f1220:
    // 0x4f1220: 0xc13c498  jal         func_4F1260
label_4f1224:
    if (ctx->pc == 0x4F1224u) {
        ctx->pc = 0x4F1224u;
            // 0x4f1224: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4F1228u;
        goto label_4f1228;
    }
    ctx->pc = 0x4F1220u;
    SET_GPR_U32(ctx, 31, 0x4F1228u);
    ctx->pc = 0x4F1224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1220u;
            // 0x4f1224: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F1260u;
    if (runtime->hasFunction(0x4F1260u)) {
        auto targetFn = runtime->lookupFunction(0x4F1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1228u; }
        if (ctx->pc != 0x4F1228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F1260_0x4f1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1228u; }
        if (ctx->pc != 0x4F1228u) { return; }
    }
    ctx->pc = 0x4F1228u;
label_4f1228:
    // 0x4f1228: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4f1228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4f122c:
    // 0x4f122c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f122cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f1230:
    // 0x4f1230: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f1234:
    if (ctx->pc == 0x4F1234u) {
        ctx->pc = 0x4F1234u;
            // 0x4f1234: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1238u;
        goto label_4f1238;
    }
    ctx->pc = 0x4F1230u;
    {
        const bool branch_taken_0x4f1230 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f1230) {
            ctx->pc = 0x4F1234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1230u;
            // 0x4f1234: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1244u;
            goto label_4f1244;
        }
    }
    ctx->pc = 0x4F1238u;
label_4f1238:
    // 0x4f1238: 0xc0400a8  jal         func_1002A0
label_4f123c:
    if (ctx->pc == 0x4F123Cu) {
        ctx->pc = 0x4F123Cu;
            // 0x4f123c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1240u;
        goto label_4f1240;
    }
    ctx->pc = 0x4F1238u;
    SET_GPR_U32(ctx, 31, 0x4F1240u);
    ctx->pc = 0x4F123Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1238u;
            // 0x4f123c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1240u; }
        if (ctx->pc != 0x4F1240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1240u; }
        if (ctx->pc != 0x4F1240u) { return; }
    }
    ctx->pc = 0x4F1240u;
label_4f1240:
    // 0x4f1240: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f1240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f1244:
    // 0x4f1244: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f1244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f1248:
    // 0x4f1248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f1248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f124c:
    // 0x4f124c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f124cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f1250:
    // 0x4f1250: 0x3e00008  jr          $ra
label_4f1254:
    if (ctx->pc == 0x4F1254u) {
        ctx->pc = 0x4F1254u;
            // 0x4f1254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F1258u;
        goto label_4f1258;
    }
    ctx->pc = 0x4F1250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1250u;
            // 0x4f1254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F1258u;
label_4f1258:
    // 0x4f1258: 0x0  nop
    ctx->pc = 0x4f1258u;
    // NOP
label_4f125c:
    // 0x4f125c: 0x0  nop
    ctx->pc = 0x4f125cu;
    // NOP
}
