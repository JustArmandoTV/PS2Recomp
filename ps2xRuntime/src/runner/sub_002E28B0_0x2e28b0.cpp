#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E28B0
// Address: 0x2e28b0 - 0x2e2f70
void sub_002E28B0_0x2e28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E28B0_0x2e28b0");
#endif

    switch (ctx->pc) {
        case 0x2e28b0u: goto label_2e28b0;
        case 0x2e28b4u: goto label_2e28b4;
        case 0x2e28b8u: goto label_2e28b8;
        case 0x2e28bcu: goto label_2e28bc;
        case 0x2e28c0u: goto label_2e28c0;
        case 0x2e28c4u: goto label_2e28c4;
        case 0x2e28c8u: goto label_2e28c8;
        case 0x2e28ccu: goto label_2e28cc;
        case 0x2e28d0u: goto label_2e28d0;
        case 0x2e28d4u: goto label_2e28d4;
        case 0x2e28d8u: goto label_2e28d8;
        case 0x2e28dcu: goto label_2e28dc;
        case 0x2e28e0u: goto label_2e28e0;
        case 0x2e28e4u: goto label_2e28e4;
        case 0x2e28e8u: goto label_2e28e8;
        case 0x2e28ecu: goto label_2e28ec;
        case 0x2e28f0u: goto label_2e28f0;
        case 0x2e28f4u: goto label_2e28f4;
        case 0x2e28f8u: goto label_2e28f8;
        case 0x2e28fcu: goto label_2e28fc;
        case 0x2e2900u: goto label_2e2900;
        case 0x2e2904u: goto label_2e2904;
        case 0x2e2908u: goto label_2e2908;
        case 0x2e290cu: goto label_2e290c;
        case 0x2e2910u: goto label_2e2910;
        case 0x2e2914u: goto label_2e2914;
        case 0x2e2918u: goto label_2e2918;
        case 0x2e291cu: goto label_2e291c;
        case 0x2e2920u: goto label_2e2920;
        case 0x2e2924u: goto label_2e2924;
        case 0x2e2928u: goto label_2e2928;
        case 0x2e292cu: goto label_2e292c;
        case 0x2e2930u: goto label_2e2930;
        case 0x2e2934u: goto label_2e2934;
        case 0x2e2938u: goto label_2e2938;
        case 0x2e293cu: goto label_2e293c;
        case 0x2e2940u: goto label_2e2940;
        case 0x2e2944u: goto label_2e2944;
        case 0x2e2948u: goto label_2e2948;
        case 0x2e294cu: goto label_2e294c;
        case 0x2e2950u: goto label_2e2950;
        case 0x2e2954u: goto label_2e2954;
        case 0x2e2958u: goto label_2e2958;
        case 0x2e295cu: goto label_2e295c;
        case 0x2e2960u: goto label_2e2960;
        case 0x2e2964u: goto label_2e2964;
        case 0x2e2968u: goto label_2e2968;
        case 0x2e296cu: goto label_2e296c;
        case 0x2e2970u: goto label_2e2970;
        case 0x2e2974u: goto label_2e2974;
        case 0x2e2978u: goto label_2e2978;
        case 0x2e297cu: goto label_2e297c;
        case 0x2e2980u: goto label_2e2980;
        case 0x2e2984u: goto label_2e2984;
        case 0x2e2988u: goto label_2e2988;
        case 0x2e298cu: goto label_2e298c;
        case 0x2e2990u: goto label_2e2990;
        case 0x2e2994u: goto label_2e2994;
        case 0x2e2998u: goto label_2e2998;
        case 0x2e299cu: goto label_2e299c;
        case 0x2e29a0u: goto label_2e29a0;
        case 0x2e29a4u: goto label_2e29a4;
        case 0x2e29a8u: goto label_2e29a8;
        case 0x2e29acu: goto label_2e29ac;
        case 0x2e29b0u: goto label_2e29b0;
        case 0x2e29b4u: goto label_2e29b4;
        case 0x2e29b8u: goto label_2e29b8;
        case 0x2e29bcu: goto label_2e29bc;
        case 0x2e29c0u: goto label_2e29c0;
        case 0x2e29c4u: goto label_2e29c4;
        case 0x2e29c8u: goto label_2e29c8;
        case 0x2e29ccu: goto label_2e29cc;
        case 0x2e29d0u: goto label_2e29d0;
        case 0x2e29d4u: goto label_2e29d4;
        case 0x2e29d8u: goto label_2e29d8;
        case 0x2e29dcu: goto label_2e29dc;
        case 0x2e29e0u: goto label_2e29e0;
        case 0x2e29e4u: goto label_2e29e4;
        case 0x2e29e8u: goto label_2e29e8;
        case 0x2e29ecu: goto label_2e29ec;
        case 0x2e29f0u: goto label_2e29f0;
        case 0x2e29f4u: goto label_2e29f4;
        case 0x2e29f8u: goto label_2e29f8;
        case 0x2e29fcu: goto label_2e29fc;
        case 0x2e2a00u: goto label_2e2a00;
        case 0x2e2a04u: goto label_2e2a04;
        case 0x2e2a08u: goto label_2e2a08;
        case 0x2e2a0cu: goto label_2e2a0c;
        case 0x2e2a10u: goto label_2e2a10;
        case 0x2e2a14u: goto label_2e2a14;
        case 0x2e2a18u: goto label_2e2a18;
        case 0x2e2a1cu: goto label_2e2a1c;
        case 0x2e2a20u: goto label_2e2a20;
        case 0x2e2a24u: goto label_2e2a24;
        case 0x2e2a28u: goto label_2e2a28;
        case 0x2e2a2cu: goto label_2e2a2c;
        case 0x2e2a30u: goto label_2e2a30;
        case 0x2e2a34u: goto label_2e2a34;
        case 0x2e2a38u: goto label_2e2a38;
        case 0x2e2a3cu: goto label_2e2a3c;
        case 0x2e2a40u: goto label_2e2a40;
        case 0x2e2a44u: goto label_2e2a44;
        case 0x2e2a48u: goto label_2e2a48;
        case 0x2e2a4cu: goto label_2e2a4c;
        case 0x2e2a50u: goto label_2e2a50;
        case 0x2e2a54u: goto label_2e2a54;
        case 0x2e2a58u: goto label_2e2a58;
        case 0x2e2a5cu: goto label_2e2a5c;
        case 0x2e2a60u: goto label_2e2a60;
        case 0x2e2a64u: goto label_2e2a64;
        case 0x2e2a68u: goto label_2e2a68;
        case 0x2e2a6cu: goto label_2e2a6c;
        case 0x2e2a70u: goto label_2e2a70;
        case 0x2e2a74u: goto label_2e2a74;
        case 0x2e2a78u: goto label_2e2a78;
        case 0x2e2a7cu: goto label_2e2a7c;
        case 0x2e2a80u: goto label_2e2a80;
        case 0x2e2a84u: goto label_2e2a84;
        case 0x2e2a88u: goto label_2e2a88;
        case 0x2e2a8cu: goto label_2e2a8c;
        case 0x2e2a90u: goto label_2e2a90;
        case 0x2e2a94u: goto label_2e2a94;
        case 0x2e2a98u: goto label_2e2a98;
        case 0x2e2a9cu: goto label_2e2a9c;
        case 0x2e2aa0u: goto label_2e2aa0;
        case 0x2e2aa4u: goto label_2e2aa4;
        case 0x2e2aa8u: goto label_2e2aa8;
        case 0x2e2aacu: goto label_2e2aac;
        case 0x2e2ab0u: goto label_2e2ab0;
        case 0x2e2ab4u: goto label_2e2ab4;
        case 0x2e2ab8u: goto label_2e2ab8;
        case 0x2e2abcu: goto label_2e2abc;
        case 0x2e2ac0u: goto label_2e2ac0;
        case 0x2e2ac4u: goto label_2e2ac4;
        case 0x2e2ac8u: goto label_2e2ac8;
        case 0x2e2accu: goto label_2e2acc;
        case 0x2e2ad0u: goto label_2e2ad0;
        case 0x2e2ad4u: goto label_2e2ad4;
        case 0x2e2ad8u: goto label_2e2ad8;
        case 0x2e2adcu: goto label_2e2adc;
        case 0x2e2ae0u: goto label_2e2ae0;
        case 0x2e2ae4u: goto label_2e2ae4;
        case 0x2e2ae8u: goto label_2e2ae8;
        case 0x2e2aecu: goto label_2e2aec;
        case 0x2e2af0u: goto label_2e2af0;
        case 0x2e2af4u: goto label_2e2af4;
        case 0x2e2af8u: goto label_2e2af8;
        case 0x2e2afcu: goto label_2e2afc;
        case 0x2e2b00u: goto label_2e2b00;
        case 0x2e2b04u: goto label_2e2b04;
        case 0x2e2b08u: goto label_2e2b08;
        case 0x2e2b0cu: goto label_2e2b0c;
        case 0x2e2b10u: goto label_2e2b10;
        case 0x2e2b14u: goto label_2e2b14;
        case 0x2e2b18u: goto label_2e2b18;
        case 0x2e2b1cu: goto label_2e2b1c;
        case 0x2e2b20u: goto label_2e2b20;
        case 0x2e2b24u: goto label_2e2b24;
        case 0x2e2b28u: goto label_2e2b28;
        case 0x2e2b2cu: goto label_2e2b2c;
        case 0x2e2b30u: goto label_2e2b30;
        case 0x2e2b34u: goto label_2e2b34;
        case 0x2e2b38u: goto label_2e2b38;
        case 0x2e2b3cu: goto label_2e2b3c;
        case 0x2e2b40u: goto label_2e2b40;
        case 0x2e2b44u: goto label_2e2b44;
        case 0x2e2b48u: goto label_2e2b48;
        case 0x2e2b4cu: goto label_2e2b4c;
        case 0x2e2b50u: goto label_2e2b50;
        case 0x2e2b54u: goto label_2e2b54;
        case 0x2e2b58u: goto label_2e2b58;
        case 0x2e2b5cu: goto label_2e2b5c;
        case 0x2e2b60u: goto label_2e2b60;
        case 0x2e2b64u: goto label_2e2b64;
        case 0x2e2b68u: goto label_2e2b68;
        case 0x2e2b6cu: goto label_2e2b6c;
        case 0x2e2b70u: goto label_2e2b70;
        case 0x2e2b74u: goto label_2e2b74;
        case 0x2e2b78u: goto label_2e2b78;
        case 0x2e2b7cu: goto label_2e2b7c;
        case 0x2e2b80u: goto label_2e2b80;
        case 0x2e2b84u: goto label_2e2b84;
        case 0x2e2b88u: goto label_2e2b88;
        case 0x2e2b8cu: goto label_2e2b8c;
        case 0x2e2b90u: goto label_2e2b90;
        case 0x2e2b94u: goto label_2e2b94;
        case 0x2e2b98u: goto label_2e2b98;
        case 0x2e2b9cu: goto label_2e2b9c;
        case 0x2e2ba0u: goto label_2e2ba0;
        case 0x2e2ba4u: goto label_2e2ba4;
        case 0x2e2ba8u: goto label_2e2ba8;
        case 0x2e2bacu: goto label_2e2bac;
        case 0x2e2bb0u: goto label_2e2bb0;
        case 0x2e2bb4u: goto label_2e2bb4;
        case 0x2e2bb8u: goto label_2e2bb8;
        case 0x2e2bbcu: goto label_2e2bbc;
        case 0x2e2bc0u: goto label_2e2bc0;
        case 0x2e2bc4u: goto label_2e2bc4;
        case 0x2e2bc8u: goto label_2e2bc8;
        case 0x2e2bccu: goto label_2e2bcc;
        case 0x2e2bd0u: goto label_2e2bd0;
        case 0x2e2bd4u: goto label_2e2bd4;
        case 0x2e2bd8u: goto label_2e2bd8;
        case 0x2e2bdcu: goto label_2e2bdc;
        case 0x2e2be0u: goto label_2e2be0;
        case 0x2e2be4u: goto label_2e2be4;
        case 0x2e2be8u: goto label_2e2be8;
        case 0x2e2becu: goto label_2e2bec;
        case 0x2e2bf0u: goto label_2e2bf0;
        case 0x2e2bf4u: goto label_2e2bf4;
        case 0x2e2bf8u: goto label_2e2bf8;
        case 0x2e2bfcu: goto label_2e2bfc;
        case 0x2e2c00u: goto label_2e2c00;
        case 0x2e2c04u: goto label_2e2c04;
        case 0x2e2c08u: goto label_2e2c08;
        case 0x2e2c0cu: goto label_2e2c0c;
        case 0x2e2c10u: goto label_2e2c10;
        case 0x2e2c14u: goto label_2e2c14;
        case 0x2e2c18u: goto label_2e2c18;
        case 0x2e2c1cu: goto label_2e2c1c;
        case 0x2e2c20u: goto label_2e2c20;
        case 0x2e2c24u: goto label_2e2c24;
        case 0x2e2c28u: goto label_2e2c28;
        case 0x2e2c2cu: goto label_2e2c2c;
        case 0x2e2c30u: goto label_2e2c30;
        case 0x2e2c34u: goto label_2e2c34;
        case 0x2e2c38u: goto label_2e2c38;
        case 0x2e2c3cu: goto label_2e2c3c;
        case 0x2e2c40u: goto label_2e2c40;
        case 0x2e2c44u: goto label_2e2c44;
        case 0x2e2c48u: goto label_2e2c48;
        case 0x2e2c4cu: goto label_2e2c4c;
        case 0x2e2c50u: goto label_2e2c50;
        case 0x2e2c54u: goto label_2e2c54;
        case 0x2e2c58u: goto label_2e2c58;
        case 0x2e2c5cu: goto label_2e2c5c;
        case 0x2e2c60u: goto label_2e2c60;
        case 0x2e2c64u: goto label_2e2c64;
        case 0x2e2c68u: goto label_2e2c68;
        case 0x2e2c6cu: goto label_2e2c6c;
        case 0x2e2c70u: goto label_2e2c70;
        case 0x2e2c74u: goto label_2e2c74;
        case 0x2e2c78u: goto label_2e2c78;
        case 0x2e2c7cu: goto label_2e2c7c;
        case 0x2e2c80u: goto label_2e2c80;
        case 0x2e2c84u: goto label_2e2c84;
        case 0x2e2c88u: goto label_2e2c88;
        case 0x2e2c8cu: goto label_2e2c8c;
        case 0x2e2c90u: goto label_2e2c90;
        case 0x2e2c94u: goto label_2e2c94;
        case 0x2e2c98u: goto label_2e2c98;
        case 0x2e2c9cu: goto label_2e2c9c;
        case 0x2e2ca0u: goto label_2e2ca0;
        case 0x2e2ca4u: goto label_2e2ca4;
        case 0x2e2ca8u: goto label_2e2ca8;
        case 0x2e2cacu: goto label_2e2cac;
        case 0x2e2cb0u: goto label_2e2cb0;
        case 0x2e2cb4u: goto label_2e2cb4;
        case 0x2e2cb8u: goto label_2e2cb8;
        case 0x2e2cbcu: goto label_2e2cbc;
        case 0x2e2cc0u: goto label_2e2cc0;
        case 0x2e2cc4u: goto label_2e2cc4;
        case 0x2e2cc8u: goto label_2e2cc8;
        case 0x2e2cccu: goto label_2e2ccc;
        case 0x2e2cd0u: goto label_2e2cd0;
        case 0x2e2cd4u: goto label_2e2cd4;
        case 0x2e2cd8u: goto label_2e2cd8;
        case 0x2e2cdcu: goto label_2e2cdc;
        case 0x2e2ce0u: goto label_2e2ce0;
        case 0x2e2ce4u: goto label_2e2ce4;
        case 0x2e2ce8u: goto label_2e2ce8;
        case 0x2e2cecu: goto label_2e2cec;
        case 0x2e2cf0u: goto label_2e2cf0;
        case 0x2e2cf4u: goto label_2e2cf4;
        case 0x2e2cf8u: goto label_2e2cf8;
        case 0x2e2cfcu: goto label_2e2cfc;
        case 0x2e2d00u: goto label_2e2d00;
        case 0x2e2d04u: goto label_2e2d04;
        case 0x2e2d08u: goto label_2e2d08;
        case 0x2e2d0cu: goto label_2e2d0c;
        case 0x2e2d10u: goto label_2e2d10;
        case 0x2e2d14u: goto label_2e2d14;
        case 0x2e2d18u: goto label_2e2d18;
        case 0x2e2d1cu: goto label_2e2d1c;
        case 0x2e2d20u: goto label_2e2d20;
        case 0x2e2d24u: goto label_2e2d24;
        case 0x2e2d28u: goto label_2e2d28;
        case 0x2e2d2cu: goto label_2e2d2c;
        case 0x2e2d30u: goto label_2e2d30;
        case 0x2e2d34u: goto label_2e2d34;
        case 0x2e2d38u: goto label_2e2d38;
        case 0x2e2d3cu: goto label_2e2d3c;
        case 0x2e2d40u: goto label_2e2d40;
        case 0x2e2d44u: goto label_2e2d44;
        case 0x2e2d48u: goto label_2e2d48;
        case 0x2e2d4cu: goto label_2e2d4c;
        case 0x2e2d50u: goto label_2e2d50;
        case 0x2e2d54u: goto label_2e2d54;
        case 0x2e2d58u: goto label_2e2d58;
        case 0x2e2d5cu: goto label_2e2d5c;
        case 0x2e2d60u: goto label_2e2d60;
        case 0x2e2d64u: goto label_2e2d64;
        case 0x2e2d68u: goto label_2e2d68;
        case 0x2e2d6cu: goto label_2e2d6c;
        case 0x2e2d70u: goto label_2e2d70;
        case 0x2e2d74u: goto label_2e2d74;
        case 0x2e2d78u: goto label_2e2d78;
        case 0x2e2d7cu: goto label_2e2d7c;
        case 0x2e2d80u: goto label_2e2d80;
        case 0x2e2d84u: goto label_2e2d84;
        case 0x2e2d88u: goto label_2e2d88;
        case 0x2e2d8cu: goto label_2e2d8c;
        case 0x2e2d90u: goto label_2e2d90;
        case 0x2e2d94u: goto label_2e2d94;
        case 0x2e2d98u: goto label_2e2d98;
        case 0x2e2d9cu: goto label_2e2d9c;
        case 0x2e2da0u: goto label_2e2da0;
        case 0x2e2da4u: goto label_2e2da4;
        case 0x2e2da8u: goto label_2e2da8;
        case 0x2e2dacu: goto label_2e2dac;
        case 0x2e2db0u: goto label_2e2db0;
        case 0x2e2db4u: goto label_2e2db4;
        case 0x2e2db8u: goto label_2e2db8;
        case 0x2e2dbcu: goto label_2e2dbc;
        case 0x2e2dc0u: goto label_2e2dc0;
        case 0x2e2dc4u: goto label_2e2dc4;
        case 0x2e2dc8u: goto label_2e2dc8;
        case 0x2e2dccu: goto label_2e2dcc;
        case 0x2e2dd0u: goto label_2e2dd0;
        case 0x2e2dd4u: goto label_2e2dd4;
        case 0x2e2dd8u: goto label_2e2dd8;
        case 0x2e2ddcu: goto label_2e2ddc;
        case 0x2e2de0u: goto label_2e2de0;
        case 0x2e2de4u: goto label_2e2de4;
        case 0x2e2de8u: goto label_2e2de8;
        case 0x2e2decu: goto label_2e2dec;
        case 0x2e2df0u: goto label_2e2df0;
        case 0x2e2df4u: goto label_2e2df4;
        case 0x2e2df8u: goto label_2e2df8;
        case 0x2e2dfcu: goto label_2e2dfc;
        case 0x2e2e00u: goto label_2e2e00;
        case 0x2e2e04u: goto label_2e2e04;
        case 0x2e2e08u: goto label_2e2e08;
        case 0x2e2e0cu: goto label_2e2e0c;
        case 0x2e2e10u: goto label_2e2e10;
        case 0x2e2e14u: goto label_2e2e14;
        case 0x2e2e18u: goto label_2e2e18;
        case 0x2e2e1cu: goto label_2e2e1c;
        case 0x2e2e20u: goto label_2e2e20;
        case 0x2e2e24u: goto label_2e2e24;
        case 0x2e2e28u: goto label_2e2e28;
        case 0x2e2e2cu: goto label_2e2e2c;
        case 0x2e2e30u: goto label_2e2e30;
        case 0x2e2e34u: goto label_2e2e34;
        case 0x2e2e38u: goto label_2e2e38;
        case 0x2e2e3cu: goto label_2e2e3c;
        case 0x2e2e40u: goto label_2e2e40;
        case 0x2e2e44u: goto label_2e2e44;
        case 0x2e2e48u: goto label_2e2e48;
        case 0x2e2e4cu: goto label_2e2e4c;
        case 0x2e2e50u: goto label_2e2e50;
        case 0x2e2e54u: goto label_2e2e54;
        case 0x2e2e58u: goto label_2e2e58;
        case 0x2e2e5cu: goto label_2e2e5c;
        case 0x2e2e60u: goto label_2e2e60;
        case 0x2e2e64u: goto label_2e2e64;
        case 0x2e2e68u: goto label_2e2e68;
        case 0x2e2e6cu: goto label_2e2e6c;
        case 0x2e2e70u: goto label_2e2e70;
        case 0x2e2e74u: goto label_2e2e74;
        case 0x2e2e78u: goto label_2e2e78;
        case 0x2e2e7cu: goto label_2e2e7c;
        case 0x2e2e80u: goto label_2e2e80;
        case 0x2e2e84u: goto label_2e2e84;
        case 0x2e2e88u: goto label_2e2e88;
        case 0x2e2e8cu: goto label_2e2e8c;
        case 0x2e2e90u: goto label_2e2e90;
        case 0x2e2e94u: goto label_2e2e94;
        case 0x2e2e98u: goto label_2e2e98;
        case 0x2e2e9cu: goto label_2e2e9c;
        case 0x2e2ea0u: goto label_2e2ea0;
        case 0x2e2ea4u: goto label_2e2ea4;
        case 0x2e2ea8u: goto label_2e2ea8;
        case 0x2e2eacu: goto label_2e2eac;
        case 0x2e2eb0u: goto label_2e2eb0;
        case 0x2e2eb4u: goto label_2e2eb4;
        case 0x2e2eb8u: goto label_2e2eb8;
        case 0x2e2ebcu: goto label_2e2ebc;
        case 0x2e2ec0u: goto label_2e2ec0;
        case 0x2e2ec4u: goto label_2e2ec4;
        case 0x2e2ec8u: goto label_2e2ec8;
        case 0x2e2eccu: goto label_2e2ecc;
        case 0x2e2ed0u: goto label_2e2ed0;
        case 0x2e2ed4u: goto label_2e2ed4;
        case 0x2e2ed8u: goto label_2e2ed8;
        case 0x2e2edcu: goto label_2e2edc;
        case 0x2e2ee0u: goto label_2e2ee0;
        case 0x2e2ee4u: goto label_2e2ee4;
        case 0x2e2ee8u: goto label_2e2ee8;
        case 0x2e2eecu: goto label_2e2eec;
        case 0x2e2ef0u: goto label_2e2ef0;
        case 0x2e2ef4u: goto label_2e2ef4;
        case 0x2e2ef8u: goto label_2e2ef8;
        case 0x2e2efcu: goto label_2e2efc;
        case 0x2e2f00u: goto label_2e2f00;
        case 0x2e2f04u: goto label_2e2f04;
        case 0x2e2f08u: goto label_2e2f08;
        case 0x2e2f0cu: goto label_2e2f0c;
        case 0x2e2f10u: goto label_2e2f10;
        case 0x2e2f14u: goto label_2e2f14;
        case 0x2e2f18u: goto label_2e2f18;
        case 0x2e2f1cu: goto label_2e2f1c;
        case 0x2e2f20u: goto label_2e2f20;
        case 0x2e2f24u: goto label_2e2f24;
        case 0x2e2f28u: goto label_2e2f28;
        case 0x2e2f2cu: goto label_2e2f2c;
        case 0x2e2f30u: goto label_2e2f30;
        case 0x2e2f34u: goto label_2e2f34;
        case 0x2e2f38u: goto label_2e2f38;
        case 0x2e2f3cu: goto label_2e2f3c;
        case 0x2e2f40u: goto label_2e2f40;
        case 0x2e2f44u: goto label_2e2f44;
        case 0x2e2f48u: goto label_2e2f48;
        case 0x2e2f4cu: goto label_2e2f4c;
        case 0x2e2f50u: goto label_2e2f50;
        case 0x2e2f54u: goto label_2e2f54;
        case 0x2e2f58u: goto label_2e2f58;
        case 0x2e2f5cu: goto label_2e2f5c;
        case 0x2e2f60u: goto label_2e2f60;
        case 0x2e2f64u: goto label_2e2f64;
        case 0x2e2f68u: goto label_2e2f68;
        case 0x2e2f6cu: goto label_2e2f6c;
        default: break;
    }

    ctx->pc = 0x2e28b0u;

label_2e28b0:
    // 0x2e28b0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2e28b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2e28b4:
    // 0x2e28b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e28b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e28b8:
    // 0x2e28b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e28bc:
    // 0x2e28bc: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x2e28bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_2e28c0:
    // 0x2e28c0: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2e28c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2e28c4:
    // 0x2e28c4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2e28c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e28c8:
    // 0x2e28c8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_2e28cc:
    if (ctx->pc == 0x2E28CCu) {
        ctx->pc = 0x2E28CCu;
            // 0x2e28cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E28D0u;
        goto label_2e28d0;
    }
    ctx->pc = 0x2E28C8u;
    {
        const bool branch_taken_0x2e28c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E28CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E28C8u;
            // 0x2e28cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28c8) {
            ctx->pc = 0x2E2920u;
            goto label_2e2920;
        }
    }
    ctx->pc = 0x2E28D0u;
label_2e28d0:
    // 0x2e28d0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2e28d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e28d4:
    // 0x2e28d4: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2e28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_2e28d8:
    // 0x2e28d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e28d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e28dc:
    // 0x2e28dc: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2e28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e28e0:
    // 0x2e28e0: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x2e28e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
label_2e28e4:
    // 0x2e28e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e28e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e28e8:
    // 0x2e28e8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2e28e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e28ec:
    // 0x2e28ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2e28ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2e28f0:
    // 0x2e28f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2e28f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2e28f4:
    // 0x2e28f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2e28f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e28f8:
    // 0x2e28f8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2e28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2e28fc:
    // 0x2e28fc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2e2900:
    // 0x2e2900: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2e2900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e2904:
    // 0x2e2904: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e2904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2e2908:
    // 0x2e2908: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2e2908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e290c:
    // 0x2e290c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2e290cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2e2910:
    // 0x2e2910: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x2e2910u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2e2914:
    // 0x2e2914: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_2e2918:
    if (ctx->pc == 0x2E2918u) {
        ctx->pc = 0x2E2918u;
            // 0x2e2918: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x2E291Cu;
        goto label_2e291c;
    }
    ctx->pc = 0x2E2914u;
    {
        const bool branch_taken_0x2e2914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2914u;
            // 0x2e2918: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2914) {
            ctx->pc = 0x2E28D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e28d4;
        }
    }
    ctx->pc = 0x2E291Cu;
label_2e291c:
    // 0x2e291c: 0x0  nop
    ctx->pc = 0x2e291cu;
    // NOP
label_2e2920:
    // 0x2e2920: 0x3e00008  jr          $ra
label_2e2924:
    if (ctx->pc == 0x2E2924u) {
        ctx->pc = 0x2E2928u;
        goto label_2e2928;
    }
    ctx->pc = 0x2E2920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2928u;
label_2e2928:
    // 0x2e2928: 0x0  nop
    ctx->pc = 0x2e2928u;
    // NOP
label_2e292c:
    // 0x2e292c: 0x0  nop
    ctx->pc = 0x2e292cu;
    // NOP
label_2e2930:
    // 0x2e2930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e2934:
    // 0x2e2934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e2934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e2938:
    // 0x2e2938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e293c:
    // 0x2e293c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e293cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e2940:
    // 0x2e2940: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_2e2944:
    if (ctx->pc == 0x2E2944u) {
        ctx->pc = 0x2E2944u;
            // 0x2e2944: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2948u;
        goto label_2e2948;
    }
    ctx->pc = 0x2E2940u;
    {
        const bool branch_taken_0x2e2940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2940) {
            ctx->pc = 0x2E2944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2940u;
            // 0x2e2944: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E2980u;
            goto label_2e2980;
        }
    }
    ctx->pc = 0x2E2948u;
label_2e2948:
    // 0x2e2948: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e2948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2e294c:
    // 0x2e294c: 0x24422f70  addiu       $v0, $v0, 0x2F70
    ctx->pc = 0x2e294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12144));
label_2e2950:
    // 0x2e2950: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2e2954:
    if (ctx->pc == 0x2E2954u) {
        ctx->pc = 0x2E2954u;
            // 0x2e2954: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2E2958u;
        goto label_2e2958;
    }
    ctx->pc = 0x2E2950u;
    {
        const bool branch_taken_0x2e2950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2950u;
            // 0x2e2954: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2950) {
            ctx->pc = 0x2E2964u;
            goto label_2e2964;
        }
    }
    ctx->pc = 0x2E2958u;
label_2e2958:
    // 0x2e2958: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e2958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2e295c:
    // 0x2e295c: 0x2442fb70  addiu       $v0, $v0, -0x490
    ctx->pc = 0x2e295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966128));
label_2e2960:
    // 0x2e2960: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e2960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2e2964:
    // 0x2e2964: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2e2964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2e2968:
    // 0x2e2968: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e2968u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2e296c:
    // 0x2e296c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2e2970:
    if (ctx->pc == 0x2E2970u) {
        ctx->pc = 0x2E2974u;
        goto label_2e2974;
    }
    ctx->pc = 0x2E296Cu;
    {
        const bool branch_taken_0x2e296c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e296c) {
            ctx->pc = 0x2E297Cu;
            goto label_2e297c;
        }
    }
    ctx->pc = 0x2E2974u;
label_2e2974:
    // 0x2e2974: 0xc0400a8  jal         func_1002A0
label_2e2978:
    if (ctx->pc == 0x2E2978u) {
        ctx->pc = 0x2E2978u;
            // 0x2e2978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E297Cu;
        goto label_2e297c;
    }
    ctx->pc = 0x2E2974u;
    SET_GPR_U32(ctx, 31, 0x2E297Cu);
    ctx->pc = 0x2E2978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2974u;
            // 0x2e2978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E297Cu; }
        if (ctx->pc != 0x2E297Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E297Cu; }
        if (ctx->pc != 0x2E297Cu) { return; }
    }
    ctx->pc = 0x2E297Cu;
label_2e297c:
    // 0x2e297c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e297cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e2980:
    // 0x2e2980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e2980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2984:
    // 0x2e2984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e2988:
    // 0x2e2988: 0x3e00008  jr          $ra
label_2e298c:
    if (ctx->pc == 0x2E298Cu) {
        ctx->pc = 0x2E298Cu;
            // 0x2e298c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E2990u;
        goto label_2e2990;
    }
    ctx->pc = 0x2E2988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E298Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2988u;
            // 0x2e298c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2990u;
label_2e2990:
    // 0x2e2990: 0x3e00008  jr          $ra
label_2e2994:
    if (ctx->pc == 0x2E2994u) {
        ctx->pc = 0x2E2994u;
            // 0x2e2994: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2E2998u;
        goto label_2e2998;
    }
    ctx->pc = 0x2E2990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2990u;
            // 0x2e2994: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2998u;
label_2e2998:
    // 0x2e2998: 0x0  nop
    ctx->pc = 0x2e2998u;
    // NOP
label_2e299c:
    // 0x2e299c: 0x0  nop
    ctx->pc = 0x2e299cu;
    // NOP
label_2e29a0:
    // 0x2e29a0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2e29a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_2e29a4:
    // 0x2e29a4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2e29a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_2e29a8:
    // 0x2e29a8: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2e29a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2e29ac:
    // 0x2e29ac: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x2e29acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
label_2e29b0:
    // 0x2e29b0: 0xa4800066  sh          $zero, 0x66($a0)
    ctx->pc = 0x2e29b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 0));
label_2e29b4:
    // 0x2e29b4: 0xa4800064  sh          $zero, 0x64($a0)
    ctx->pc = 0x2e29b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 0));
label_2e29b8:
    // 0x2e29b8: 0x3e00008  jr          $ra
label_2e29bc:
    if (ctx->pc == 0x2E29BCu) {
        ctx->pc = 0x2E29BCu;
            // 0x2e29bc: 0xa0800070  sb          $zero, 0x70($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2E29C0u;
        goto label_2e29c0;
    }
    ctx->pc = 0x2E29B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E29BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E29B8u;
            // 0x2e29bc: 0xa0800070  sb          $zero, 0x70($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E29C0u;
label_2e29c0:
    // 0x2e29c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e29c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e29c4:
    // 0x2e29c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e29c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e29c8:
    // 0x2e29c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e29c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e29cc:
    // 0x2e29cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e29ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e29d0:
    // 0x2e29d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e29d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e29d4:
    // 0x2e29d4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2e29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2e29d8:
    // 0x2e29d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e29d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e29dc:
    // 0x2e29dc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2e29dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_2e29e0:
    // 0x2e29e0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2e29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2e29e4:
    // 0x2e29e4: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x2e29e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_2e29e8:
    // 0x2e29e8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2e29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2e29ec:
    // 0x2e29ec: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2e29ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_2e29f0:
    // 0x2e29f0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2e29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2e29f4:
    // 0x2e29f4: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x2e29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_2e29f8:
    // 0x2e29f8: 0xc4ac0018  lwc1        $f12, 0x18($a1)
    ctx->pc = 0x2e29f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e29fc:
    // 0x2e29fc: 0xc4ad001c  lwc1        $f13, 0x1C($a1)
    ctx->pc = 0x2e29fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2e2a00:
    // 0x2e2a00: 0xc4ae0020  lwc1        $f14, 0x20($a1)
    ctx->pc = 0x2e2a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2e2a04:
    // 0x2e2a04: 0xc04cbd8  jal         func_132F60
label_2e2a08:
    if (ctx->pc == 0x2E2A08u) {
        ctx->pc = 0x2E2A08u;
            // 0x2e2a08: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x2E2A0Cu;
        goto label_2e2a0c;
    }
    ctx->pc = 0x2E2A04u;
    SET_GPR_U32(ctx, 31, 0x2E2A0Cu);
    ctx->pc = 0x2E2A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2A04u;
            // 0x2e2a08: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2A0Cu; }
        if (ctx->pc != 0x2E2A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2A0Cu; }
        if (ctx->pc != 0x2E2A0Cu) { return; }
    }
    ctx->pc = 0x2E2A0Cu;
label_2e2a0c:
    // 0x2e2a0c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2e2a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2a10:
    // 0x2e2a10: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2e2a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_2e2a14:
    // 0x2e2a14: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2e2a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2a18:
    // 0x2e2a18: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x2e2a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_2e2a1c:
    // 0x2e2a1c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x2e2a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2a20:
    // 0x2e2a20: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x2e2a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_2e2a24:
    // 0x2e2a24: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2e2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2e2a28:
    // 0x2e2a28: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x2e2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_2e2a2c:
    // 0x2e2a2c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2e2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2e2a30:
    // 0x2e2a30: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2e2a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2e2a34:
    // 0x2e2a34: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2e2a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2a38:
    // 0x2e2a38: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x2e2a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_2e2a3c:
    // 0x2e2a3c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2e2a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2a40:
    // 0x2e2a40: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x2e2a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_2e2a44:
    // 0x2e2a44: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2e2a44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2e2a48:
    // 0x2e2a48: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x2e2a48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
label_2e2a4c:
    // 0x2e2a4c: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2e2a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2a50:
    // 0x2e2a50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e2a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e2a54:
    // 0x2e2a54: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2e2a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2e2a58:
    // 0x2e2a58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e2a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2a5c:
    // 0x2e2a5c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2e2a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2e2a60:
    // 0x2e2a60: 0x320f809  jalr        $t9
label_2e2a64:
    if (ctx->pc == 0x2E2A64u) {
        ctx->pc = 0x2E2A64u;
            // 0x2e2a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A68u;
        goto label_2e2a68;
    }
    ctx->pc = 0x2E2A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2A68u);
        ctx->pc = 0x2E2A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2A60u;
            // 0x2e2a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E2A68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E2A68u; }
            if (ctx->pc != 0x2E2A68u) { return; }
        }
        }
    }
    ctx->pc = 0x2E2A68u;
label_2e2a68:
    // 0x2e2a68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e2a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e2a6c:
    // 0x2e2a6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2a70:
    // 0x2e2a70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e2a74:
    // 0x2e2a74: 0x3e00008  jr          $ra
label_2e2a78:
    if (ctx->pc == 0x2E2A78u) {
        ctx->pc = 0x2E2A78u;
            // 0x2e2a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E2A7Cu;
        goto label_2e2a7c;
    }
    ctx->pc = 0x2E2A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2A74u;
            // 0x2e2a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2A7Cu;
label_2e2a7c:
    // 0x2e2a7c: 0x0  nop
    ctx->pc = 0x2e2a7cu;
    // NOP
label_2e2a80:
    // 0x2e2a80: 0x3e00008  jr          $ra
label_2e2a84:
    if (ctx->pc == 0x2E2A84u) {
        ctx->pc = 0x2E2A88u;
        goto label_2e2a88;
    }
    ctx->pc = 0x2E2A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2A88u;
label_2e2a88:
    // 0x2e2a88: 0x0  nop
    ctx->pc = 0x2e2a88u;
    // NOP
label_2e2a8c:
    // 0x2e2a8c: 0x0  nop
    ctx->pc = 0x2e2a8cu;
    // NOP
label_2e2a90:
    // 0x2e2a90: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e2a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2e2a94:
    // 0x2e2a94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2e2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2e2a98:
    // 0x2e2a98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e2a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e2a9c:
    // 0x2e2a9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e2a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e2aa0:
    // 0x2e2aa0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e2aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2e2aa4:
    // 0x2e2aa4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e2aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e2aa8:
    // 0x2e2aa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e2aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e2aac:
    // 0x2e2aac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e2aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e2ab0:
    // 0x2e2ab0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e2ab0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2e2ab4:
    // 0x2e2ab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e2ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e2ab8:
    // 0x2e2ab8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e2ab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2e2abc:
    // 0x2e2abc: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x2e2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2e2ac0:
    // 0x2e2ac0: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x2e2ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2ac4:
    // 0x2e2ac4: 0xc48d0054  lwc1        $f13, 0x54($a0)
    ctx->pc = 0x2e2ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2e2ac8:
    // 0x2e2ac8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2e2acc:
    // 0x2e2acc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e2ad0:
    // 0x2e2ad0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e2ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2e2ad4:
    // 0x2e2ad4: 0xc4740018  lwc1        $f20, 0x18($v1)
    ctx->pc = 0x2e2ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e2ad8:
    // 0x2e2ad8: 0xc04cbd8  jal         func_132F60
label_2e2adc:
    if (ctx->pc == 0x2E2ADCu) {
        ctx->pc = 0x2E2ADCu;
            // 0x2e2adc: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2E2AE0u;
        goto label_2e2ae0;
    }
    ctx->pc = 0x2E2AD8u;
    SET_GPR_U32(ctx, 31, 0x2E2AE0u);
    ctx->pc = 0x2E2ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2AD8u;
            // 0x2e2adc: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2AE0u; }
        if (ctx->pc != 0x2E2AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2AE0u; }
        if (ctx->pc != 0x2E2AE0u) { return; }
    }
    ctx->pc = 0x2E2AE0u;
label_2e2ae0:
    // 0x2e2ae0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e2ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e2ae4:
    // 0x2e2ae4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e2ae8:
    // 0x2e2ae8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e2ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2e2aec:
    // 0x2e2aec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e2aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2e2af0:
    // 0x2e2af0: 0xc04cbd8  jal         func_132F60
label_2e2af4:
    if (ctx->pc == 0x2E2AF4u) {
        ctx->pc = 0x2E2AF4u;
            // 0x2e2af4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2E2AF8u;
        goto label_2e2af8;
    }
    ctx->pc = 0x2E2AF0u;
    SET_GPR_U32(ctx, 31, 0x2E2AF8u);
    ctx->pc = 0x2E2AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2AF0u;
            // 0x2e2af4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2AF8u; }
        if (ctx->pc != 0x2E2AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2AF8u; }
        if (ctx->pc != 0x2E2AF8u) { return; }
    }
    ctx->pc = 0x2E2AF8u;
label_2e2af8:
    // 0x2e2af8: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2e2af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2e2afc:
    // 0x2e2afc: 0xc04cc04  jal         func_133010
label_2e2b00:
    if (ctx->pc == 0x2E2B00u) {
        ctx->pc = 0x2E2B00u;
            // 0x2e2b00: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2E2B04u;
        goto label_2e2b04;
    }
    ctx->pc = 0x2E2AFCu;
    SET_GPR_U32(ctx, 31, 0x2E2B04u);
    ctx->pc = 0x2E2B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2AFCu;
            // 0x2e2b00: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B04u; }
        if (ctx->pc != 0x2E2B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B04u; }
        if (ctx->pc != 0x2E2B04u) { return; }
    }
    ctx->pc = 0x2E2B04u;
label_2e2b04:
    // 0x2e2b04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e2b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e2b08:
    // 0x2e2b08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e2b0c:
    // 0x2e2b0c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e2b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2e2b10:
    // 0x2e2b10: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2e2b14:
    // 0x2e2b14: 0xc04cbd8  jal         func_132F60
label_2e2b18:
    if (ctx->pc == 0x2E2B18u) {
        ctx->pc = 0x2E2B18u;
            // 0x2e2b18: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2E2B1Cu;
        goto label_2e2b1c;
    }
    ctx->pc = 0x2E2B14u;
    SET_GPR_U32(ctx, 31, 0x2E2B1Cu);
    ctx->pc = 0x2E2B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B14u;
            // 0x2e2b18: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B1Cu; }
        if (ctx->pc != 0x2E2B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B1Cu; }
        if (ctx->pc != 0x2E2B1Cu) { return; }
    }
    ctx->pc = 0x2E2B1Cu;
label_2e2b1c:
    // 0x2e2b1c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2e2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2e2b20:
    // 0x2e2b20: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2e2b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e2b24:
    // 0x2e2b24: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2e2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2e2b28:
    // 0x2e2b28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2b2c:
    // 0x2e2b2c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2e2b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e2b30:
    // 0x2e2b30: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2e2b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e2b34:
    // 0x2e2b34: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e2b34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2b38:
    // 0x2e2b38: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2e2b3c:
    if (ctx->pc == 0x2E2B3Cu) {
        ctx->pc = 0x2E2B3Cu;
            // 0x2e2b3c: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x2E2B40u;
        goto label_2e2b40;
    }
    ctx->pc = 0x2E2B38u;
    {
        const bool branch_taken_0x2e2b38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B38u;
            // 0x2e2b3c: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b38) {
            ctx->pc = 0x2E2B50u;
            goto label_2e2b50;
        }
    }
    ctx->pc = 0x2E2B40u;
label_2e2b40:
    // 0x2e2b40: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x2e2b40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2b44:
    // 0x2e2b44: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2e2b48:
    if (ctx->pc == 0x2E2B48u) {
        ctx->pc = 0x2E2B48u;
            // 0x2e2b48: 0xc6210038  lwc1        $f1, 0x38($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2E2B4Cu;
        goto label_2e2b4c;
    }
    ctx->pc = 0x2E2B44u;
    {
        const bool branch_taken_0x2e2b44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2b44) {
            ctx->pc = 0x2E2B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B44u;
            // 0x2e2b48: 0xc6210038  lwc1        $f1, 0x38($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E2B54u;
            goto label_2e2b54;
        }
    }
    ctx->pc = 0x2E2B4Cu;
label_2e2b4c:
    // 0x2e2b4c: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x2e2b4cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
label_2e2b50:
    // 0x2e2b50: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2e2b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e2b54:
    // 0x2e2b54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2b58:
    // 0x2e2b58: 0x0  nop
    ctx->pc = 0x2e2b58u;
    // NOP
label_2e2b5c:
    // 0x2e2b5c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e2b5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2b60:
    // 0x2e2b60: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_2e2b64:
    if (ctx->pc == 0x2E2B64u) {
        ctx->pc = 0x2E2B64u;
            // 0x2e2b64: 0x96220064  lhu         $v0, 0x64($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->pc = 0x2E2B68u;
        goto label_2e2b68;
    }
    ctx->pc = 0x2E2B60u;
    {
        const bool branch_taken_0x2e2b60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2b60) {
            ctx->pc = 0x2E2B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B60u;
            // 0x2e2b64: 0x96220064  lhu         $v0, 0x64($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E2B7Cu;
            goto label_2e2b7c;
        }
    }
    ctx->pc = 0x2E2B68u;
label_2e2b68:
    // 0x2e2b68: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2e2b68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2b6c:
    // 0x2e2b6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2e2b70:
    if (ctx->pc == 0x2E2B70u) {
        ctx->pc = 0x2E2B74u;
        goto label_2e2b74;
    }
    ctx->pc = 0x2E2B6Cu;
    {
        const bool branch_taken_0x2e2b6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2b6c) {
            ctx->pc = 0x2E2B78u;
            goto label_2e2b78;
        }
    }
    ctx->pc = 0x2E2B74u;
label_2e2b74:
    // 0x2e2b74: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x2e2b74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_2e2b78:
    // 0x2e2b78: 0x96220064  lhu         $v0, 0x64($s1)
    ctx->pc = 0x2e2b78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_2e2b7c:
    // 0x2e2b7c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x2e2b7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2e2b80:
    // 0x2e2b80: 0x5020007d  beql        $at, $zero, . + 4 + (0x7D << 2)
label_2e2b84:
    if (ctx->pc == 0x2E2B84u) {
        ctx->pc = 0x2E2B84u;
            // 0x2e2b84: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x2E2B88u;
        goto label_2e2b88;
    }
    ctx->pc = 0x2E2B80u;
    {
        const bool branch_taken_0x2e2b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2b80) {
            ctx->pc = 0x2E2B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B80u;
            // 0x2e2b84: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E2D78u;
            goto label_2e2d78;
        }
    }
    ctx->pc = 0x2E2B88u;
label_2e2b88:
    // 0x2e2b88: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2e2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2e2b8c:
    // 0x2e2b8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e2b90:
    // 0x2e2b90: 0x24631a60  addiu       $v1, $v1, 0x1A60
    ctx->pc = 0x2e2b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6752));
label_2e2b94:
    // 0x2e2b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e2b98:
    // 0x2e2b98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e2b9c:
    // 0x2e2b9c: 0x400008  jr          $v0
label_2e2ba0:
    if (ctx->pc == 0x2E2BA0u) {
        ctx->pc = 0x2E2BA4u;
        goto label_2e2ba4;
    }
    ctx->pc = 0x2E2B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E2BA4u: goto label_2e2ba4;
            case 0x2E2BD0u: goto label_2e2bd0;
            case 0x2E2CA8u: goto label_2e2ca8;
            case 0x2E2D00u: goto label_2e2d00;
            case 0x2E2D4Cu: goto label_2e2d4c;
            case 0x2E2D74u: goto label_2e2d74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E2BA4u;
label_2e2ba4:
    // 0x2e2ba4: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x2e2ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e2ba8:
    // 0x2e2ba8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2ba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2bac:
    // 0x2e2bac: 0x0  nop
    ctx->pc = 0x2e2bacu;
    // NOP
label_2e2bb0:
    // 0x2e2bb0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e2bb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2bb4:
    // 0x2e2bb4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2e2bb8:
    if (ctx->pc == 0x2E2BB8u) {
        ctx->pc = 0x2E2BB8u;
            // 0x2e2bb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E2BBCu;
        goto label_2e2bbc;
    }
    ctx->pc = 0x2E2BB4u;
    {
        const bool branch_taken_0x2e2bb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2bb4) {
            ctx->pc = 0x2E2BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2BB4u;
            // 0x2e2bb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E2BC8u;
            goto label_2e2bc8;
        }
    }
    ctx->pc = 0x2E2BBCu;
label_2e2bbc:
    // 0x2e2bbc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e2bc0:
    // 0x2e2bc0: 0x1000006c  b           . + 4 + (0x6C << 2)
label_2e2bc4:
    if (ctx->pc == 0x2E2BC4u) {
        ctx->pc = 0x2E2BC4u;
            // 0x2e2bc4: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2E2BC8u;
        goto label_2e2bc8;
    }
    ctx->pc = 0x2E2BC0u;
    {
        const bool branch_taken_0x2e2bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2BC0u;
            // 0x2e2bc4: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2bc0) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2BC8u;
label_2e2bc8:
    // 0x2e2bc8: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2e2bcc:
    if (ctx->pc == 0x2E2BCCu) {
        ctx->pc = 0x2E2BCCu;
            // 0x2e2bcc: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2E2BD0u;
        goto label_2e2bd0;
    }
    ctx->pc = 0x2E2BC8u;
    {
        const bool branch_taken_0x2e2bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2BC8u;
            // 0x2e2bcc: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2bc8) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2BD0u;
label_2e2bd0:
    // 0x2e2bd0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2e2bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e2bd4:
    // 0x2e2bd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e2bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e2bd8:
    // 0x2e2bd8: 0x92220070  lbu         $v0, 0x70($s1)
    ctx->pc = 0x2e2bd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_2e2bdc:
    // 0x2e2bdc: 0x24639780  addiu       $v1, $v1, -0x6880
    ctx->pc = 0x2e2bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940544));
label_2e2be0:
    // 0x2e2be0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e2be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2e2be4:
    // 0x2e2be4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e2be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2e2be8:
    // 0x2e2be8: 0x70421018  mult1       $v0, $v0, $v0
    ctx->pc = 0x2e2be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2e2bec:
    // 0x2e2bec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e2becu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2e2bf0:
    // 0x2e2bf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e2bf4:
    // 0x2e2bf4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2e2bf4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2e2bf8:
    // 0x2e2bf8: 0x841818  mult        $v1, $a0, $a0
    ctx->pc = 0x2e2bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2e2bfc:
    // 0x2e2bfc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2e2bfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2e2c00:
    // 0x2e2c00: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2e2c04:
    if (ctx->pc == 0x2E2C04u) {
        ctx->pc = 0x2E2C08u;
        goto label_2e2c08;
    }
    ctx->pc = 0x2E2C00u;
    {
        const bool branch_taken_0x2e2c00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c00) {
            ctx->pc = 0x2E2C14u;
            goto label_2e2c14;
        }
    }
    ctx->pc = 0x2E2C08u;
label_2e2c08:
    // 0x2e2c08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e2c0c:
    // 0x2e2c0c: 0x10000059  b           . + 4 + (0x59 << 2)
label_2e2c10:
    if (ctx->pc == 0x2E2C10u) {
        ctx->pc = 0x2E2C10u;
            // 0x2e2c10: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2E2C14u;
        goto label_2e2c14;
    }
    ctx->pc = 0x2E2C0Cu;
    {
        const bool branch_taken_0x2e2c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C0Cu;
            // 0x2e2c10: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c0c) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2C14u;
label_2e2c14:
    // 0x2e2c14: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
label_2e2c18:
    if (ctx->pc == 0x2E2C18u) {
        ctx->pc = 0x2E2C18u;
            // 0x2e2c18: 0xc6210068  lwc1        $f1, 0x68($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2E2C1Cu;
        goto label_2e2c1c;
    }
    ctx->pc = 0x2E2C14u;
    {
        const bool branch_taken_0x2e2c14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c14) {
            ctx->pc = 0x2E2C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C14u;
            // 0x2e2c18: 0xc6210068  lwc1        $f1, 0x68($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E2C28u;
            goto label_2e2c28;
        }
    }
    ctx->pc = 0x2E2C1Cu;
label_2e2c1c:
    // 0x2e2c1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e2c20:
    // 0x2e2c20: 0xa6220064  sh          $v0, 0x64($s1)
    ctx->pc = 0x2e2c20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
label_2e2c24:
    // 0x2e2c24: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x2e2c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e2c28:
    // 0x2e2c28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2c2c:
    // 0x2e2c2c: 0x0  nop
    ctx->pc = 0x2e2c2cu;
    // NOP
label_2e2c30:
    // 0x2e2c30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e2c30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2c34:
    // 0x2e2c34: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_2e2c38:
    if (ctx->pc == 0x2E2C38u) {
        ctx->pc = 0x2E2C38u;
            // 0x2e2c38: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->pc = 0x2E2C3Cu;
        goto label_2e2c3c;
    }
    ctx->pc = 0x2E2C34u;
    {
        const bool branch_taken_0x2e2c34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2c34) {
            ctx->pc = 0x2E2C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C34u;
            // 0x2e2c38: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E2C74u;
            goto label_2e2c74;
        }
    }
    ctx->pc = 0x2E2C3Cu;
label_2e2c3c:
    // 0x2e2c3c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x2e2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_2e2c40:
    // 0x2e2c40: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x2e2c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2e2c44:
    // 0x2e2c44: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2e2c44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e2c48:
    // 0x2e2c48: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2e2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_2e2c4c:
    // 0x2e2c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2c50:
    // 0x2e2c50: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e2c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2e2c54:
    // 0x2e2c54: 0x4614005c  madd.s      $f1, $f0, $f20
    ctx->pc = 0x2e2c54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_2e2c58:
    // 0x2e2c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2c5c:
    // 0x2e2c5c: 0x0  nop
    ctx->pc = 0x2e2c5cu;
    // NOP
label_2e2c60:
    // 0x2e2c60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e2c60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2c64:
    // 0x2e2c64: 0x45010043  bc1t        . + 4 + (0x43 << 2)
label_2e2c68:
    if (ctx->pc == 0x2E2C68u) {
        ctx->pc = 0x2E2C68u;
            // 0x2e2c68: 0xe6210068  swc1        $f1, 0x68($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->pc = 0x2E2C6Cu;
        goto label_2e2c6c;
    }
    ctx->pc = 0x2E2C64u;
    {
        const bool branch_taken_0x2e2c64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C64u;
            // 0x2e2c68: 0xe6210068  swc1        $f1, 0x68($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c64) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2C6Cu;
label_2e2c6c:
    // 0x2e2c6c: 0x10000041  b           . + 4 + (0x41 << 2)
label_2e2c70:
    if (ctx->pc == 0x2E2C70u) {
        ctx->pc = 0x2E2C70u;
            // 0x2e2c70: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->pc = 0x2E2C74u;
        goto label_2e2c74;
    }
    ctx->pc = 0x2E2C6Cu;
    {
        const bool branch_taken_0x2e2c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C6Cu;
            // 0x2e2c70: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c6c) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2C74u;
label_2e2c74:
    // 0x2e2c74: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x2e2c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2e2c78:
    // 0x2e2c78: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2e2c78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e2c7c:
    // 0x2e2c7c: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x2e2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_2e2c80:
    // 0x2e2c80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2c80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2c84:
    // 0x2e2c84: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e2c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2e2c88:
    // 0x2e2c88: 0x4614005d  msub.s      $f1, $f0, $f20
    ctx->pc = 0x2e2c88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
label_2e2c8c:
    // 0x2e2c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2c90:
    // 0x2e2c90: 0x0  nop
    ctx->pc = 0x2e2c90u;
    // NOP
label_2e2c94:
    // 0x2e2c94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e2c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2c98:
    // 0x2e2c98: 0x45000036  bc1f        . + 4 + (0x36 << 2)
label_2e2c9c:
    if (ctx->pc == 0x2E2C9Cu) {
        ctx->pc = 0x2E2C9Cu;
            // 0x2e2c9c: 0xe6210068  swc1        $f1, 0x68($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->pc = 0x2E2CA0u;
        goto label_2e2ca0;
    }
    ctx->pc = 0x2E2C98u;
    {
        const bool branch_taken_0x2e2c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C98u;
            // 0x2e2c9c: 0xe6210068  swc1        $f1, 0x68($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c98) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2CA0u;
label_2e2ca0:
    // 0x2e2ca0: 0x10000034  b           . + 4 + (0x34 << 2)
label_2e2ca4:
    if (ctx->pc == 0x2E2CA4u) {
        ctx->pc = 0x2E2CA4u;
            // 0x2e2ca4: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->pc = 0x2E2CA8u;
        goto label_2e2ca8;
    }
    ctx->pc = 0x2E2CA0u;
    {
        const bool branch_taken_0x2e2ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2CA0u;
            // 0x2e2ca4: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ca0) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2CA8u;
label_2e2ca8:
    // 0x2e2ca8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2e2ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e2cac:
    // 0x2e2cac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e2cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e2cb0:
    // 0x2e2cb0: 0x92220070  lbu         $v0, 0x70($s1)
    ctx->pc = 0x2e2cb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_2e2cb4:
    // 0x2e2cb4: 0x24639780  addiu       $v1, $v1, -0x6880
    ctx->pc = 0x2e2cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940544));
label_2e2cb8:
    // 0x2e2cb8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e2cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2e2cbc:
    // 0x2e2cbc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e2cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2e2cc0:
    // 0x2e2cc0: 0x70421018  mult1       $v0, $v0, $v0
    ctx->pc = 0x2e2cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2e2cc4:
    // 0x2e2cc4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e2cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2e2cc8:
    // 0x2e2cc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e2ccc:
    // 0x2e2ccc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2e2cccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2e2cd0:
    // 0x2e2cd0: 0x841818  mult        $v1, $a0, $a0
    ctx->pc = 0x2e2cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2e2cd4:
    // 0x2e2cd4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2e2cd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2e2cd8:
    // 0x2e2cd8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2e2cdc:
    if (ctx->pc == 0x2E2CDCu) {
        ctx->pc = 0x2E2CE0u;
        goto label_2e2ce0;
    }
    ctx->pc = 0x2E2CD8u;
    {
        const bool branch_taken_0x2e2cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2cd8) {
            ctx->pc = 0x2E2CECu;
            goto label_2e2cec;
        }
    }
    ctx->pc = 0x2E2CE0u;
label_2e2ce0:
    // 0x2e2ce0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e2ce4:
    // 0x2e2ce4: 0x10000023  b           . + 4 + (0x23 << 2)
label_2e2ce8:
    if (ctx->pc == 0x2E2CE8u) {
        ctx->pc = 0x2E2CE8u;
            // 0x2e2ce8: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2E2CECu;
        goto label_2e2cec;
    }
    ctx->pc = 0x2E2CE4u;
    {
        const bool branch_taken_0x2e2ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2CE4u;
            // 0x2e2ce8: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ce4) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2CECu;
label_2e2cec:
    // 0x2e2cec: 0x14800021  bnez        $a0, . + 4 + (0x21 << 2)
label_2e2cf0:
    if (ctx->pc == 0x2E2CF0u) {
        ctx->pc = 0x2E2CF4u;
        goto label_2e2cf4;
    }
    ctx->pc = 0x2E2CECu;
    {
        const bool branch_taken_0x2e2cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2cec) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2CF4u;
label_2e2cf4:
    // 0x2e2cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e2cf8:
    // 0x2e2cf8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2e2cfc:
    if (ctx->pc == 0x2E2CFCu) {
        ctx->pc = 0x2E2CFCu;
            // 0x2e2cfc: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2E2D00u;
        goto label_2e2d00;
    }
    ctx->pc = 0x2E2CF8u;
    {
        const bool branch_taken_0x2e2cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2CF8u;
            // 0x2e2cfc: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2cf8) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2D00u;
label_2e2d00:
    // 0x2e2d00: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2e2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_2e2d04:
    // 0x2e2d04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e2d08:
    // 0x2e2d08: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2e2d0c:
    // 0x2e2d0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2d10:
    // 0x2e2d10: 0x0  nop
    ctx->pc = 0x2e2d10u;
    // NOP
label_2e2d14:
    // 0x2e2d14: 0x461400c2  mul.s       $f3, $f0, $f20
    ctx->pc = 0x2e2d14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2e2d18:
    // 0x2e2d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2d1c:
    // 0x2e2d1c: 0x0  nop
    ctx->pc = 0x2e2d1cu;
    // NOP
label_2e2d20:
    // 0x2e2d20: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2e2d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2e2d24:
    // 0x2e2d24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e2d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e2d28:
    // 0x2e2d28: 0xc6220068  lwc1        $f2, 0x68($s1)
    ctx->pc = 0x2e2d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e2d2c:
    // 0x2e2d2c: 0x4603081a  mula.s      $f1, $f3
    ctx->pc = 0x2e2d2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2e2d30:
    // 0x2e2d30: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x2e2d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2e2d34:
    // 0x2e2d34: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e2d34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2d38:
    // 0x2e2d38: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2e2d3c:
    if (ctx->pc == 0x2E2D3Cu) {
        ctx->pc = 0x2E2D3Cu;
            // 0x2e2d3c: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->pc = 0x2E2D40u;
        goto label_2e2d40;
    }
    ctx->pc = 0x2E2D38u;
    {
        const bool branch_taken_0x2e2d38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2D38u;
            // 0x2e2d3c: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d38) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2D40u;
label_2e2d40:
    // 0x2e2d40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e2d44:
    // 0x2e2d44: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e2d48:
    if (ctx->pc == 0x2E2D48u) {
        ctx->pc = 0x2E2D48u;
            // 0x2e2d48: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2E2D4Cu;
        goto label_2e2d4c;
    }
    ctx->pc = 0x2E2D44u;
    {
        const bool branch_taken_0x2e2d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2D44u;
            // 0x2e2d48: 0xa6220064  sh          $v0, 0x64($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d44) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2D4Cu;
label_2e2d4c:
    // 0x2e2d4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2d4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2d50:
    // 0x2e2d50: 0x0  nop
    ctx->pc = 0x2e2d50u;
    // NOP
label_2e2d54:
    // 0x2e2d54: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e2d54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2d58:
    // 0x2e2d58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2e2d5c:
    if (ctx->pc == 0x2E2D5Cu) {
        ctx->pc = 0x2E2D60u;
        goto label_2e2d60;
    }
    ctx->pc = 0x2E2D58u;
    {
        const bool branch_taken_0x2e2d58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2d58) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2D60u;
label_2e2d60:
    // 0x2e2d60: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2e2d60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2d64:
    // 0x2e2d64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2e2d68:
    if (ctx->pc == 0x2E2D68u) {
        ctx->pc = 0x2E2D6Cu;
        goto label_2e2d6c;
    }
    ctx->pc = 0x2E2D64u;
    {
        const bool branch_taken_0x2e2d64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2d64) {
            ctx->pc = 0x2E2D74u;
            goto label_2e2d74;
        }
    }
    ctx->pc = 0x2E2D6Cu;
label_2e2d6c:
    // 0x2e2d6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e2d70:
    // 0x2e2d70: 0xa6220064  sh          $v0, 0x64($s1)
    ctx->pc = 0x2e2d70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
label_2e2d74:
    // 0x2e2d74: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2e2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2e2d78:
    // 0x2e2d78: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2e2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2e2d7c:
    // 0x2e2d7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2d80:
    // 0x2e2d80: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2e2d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2e2d84:
    // 0x2e2d84: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2e2d84u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_2e2d88:
    // 0x2e2d88: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e2d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2e2d8c:
    // 0x2e2d8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e2d90:
    // 0x2e2d90: 0x0  nop
    ctx->pc = 0x2e2d90u;
    // NOP
label_2e2d94:
    // 0x2e2d94: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x2e2d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_2e2d98:
    // 0x2e2d98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2d98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e2d9c:
    // 0x2e2d9c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x2e2d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_2e2da0:
    // 0x2e2da0: 0x46150802  mul.s       $f0, $f1, $f21
    ctx->pc = 0x2e2da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_2e2da4:
    // 0x2e2da4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2da4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e2da8:
    // 0x2e2da8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2e2da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_2e2dac:
    // 0x2e2dac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2db0:
    // 0x2e2db0: 0x0  nop
    ctx->pc = 0x2e2db0u;
    // NOP
label_2e2db4:
    // 0x2e2db4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e2db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e2db8:
    // 0x2e2db8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2db8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e2dbc:
    // 0x2e2dbc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2e2dbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_2e2dc0:
    // 0x2e2dc0: 0xc04cab0  jal         func_132AC0
label_2e2dc4:
    if (ctx->pc == 0x2E2DC4u) {
        ctx->pc = 0x2E2DC4u;
            // 0x2e2dc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DC8u;
        goto label_2e2dc8;
    }
    ctx->pc = 0x2E2DC0u;
    SET_GPR_U32(ctx, 31, 0x2E2DC8u);
    ctx->pc = 0x2E2DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2DC0u;
            // 0x2e2dc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DC8u; }
        if (ctx->pc != 0x2E2DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DC8u; }
        if (ctx->pc != 0x2E2DC8u) { return; }
    }
    ctx->pc = 0x2E2DC8u;
label_2e2dc8:
    // 0x2e2dc8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2e2dcc:
    // 0x2e2dcc: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2e2dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2e2dd0:
    // 0x2e2dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2dd4:
    // 0x2e2dd4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e2dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e2dd8:
    // 0x2e2dd8: 0xc04f278  jal         func_13C9E0
label_2e2ddc:
    if (ctx->pc == 0x2E2DDCu) {
        ctx->pc = 0x2E2DDCu;
            // 0x2e2ddc: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x2E2DE0u;
        goto label_2e2de0;
    }
    ctx->pc = 0x2E2DD8u;
    SET_GPR_U32(ctx, 31, 0x2E2DE0u);
    ctx->pc = 0x2E2DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2DD8u;
            // 0x2e2ddc: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DE0u; }
        if (ctx->pc != 0x2E2DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DE0u; }
        if (ctx->pc != 0x2E2DE0u) { return; }
    }
    ctx->pc = 0x2E2DE0u;
label_2e2de0:
    // 0x2e2de0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e2de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e2de4:
    // 0x2e2de4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2e2de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2e2de8:
    // 0x2e2de8: 0xc04cd80  jal         func_133600
label_2e2dec:
    if (ctx->pc == 0x2E2DECu) {
        ctx->pc = 0x2E2DECu;
            // 0x2e2dec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DF0u;
        goto label_2e2df0;
    }
    ctx->pc = 0x2E2DE8u;
    SET_GPR_U32(ctx, 31, 0x2E2DF0u);
    ctx->pc = 0x2E2DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2DE8u;
            // 0x2e2dec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DF0u; }
        if (ctx->pc != 0x2E2DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DF0u; }
        if (ctx->pc != 0x2E2DF0u) { return; }
    }
    ctx->pc = 0x2E2DF0u;
label_2e2df0:
    // 0x2e2df0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e2df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2e2df4:
    // 0x2e2df4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e2df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e2df8:
    // 0x2e2df8: 0xc04cca0  jal         func_133280
label_2e2dfc:
    if (ctx->pc == 0x2E2DFCu) {
        ctx->pc = 0x2E2DFCu;
            // 0x2e2dfc: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x2E2E00u;
        goto label_2e2e00;
    }
    ctx->pc = 0x2E2DF8u;
    SET_GPR_U32(ctx, 31, 0x2E2E00u);
    ctx->pc = 0x2E2DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2DF8u;
            // 0x2e2dfc: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E00u; }
        if (ctx->pc != 0x2E2E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E00u; }
        if (ctx->pc != 0x2E2E00u) { return; }
    }
    ctx->pc = 0x2E2E00u;
label_2e2e00:
    // 0x2e2e00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2e2e04:
    // 0x2e2e04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e2e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e2e08:
    // 0x2e2e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2e0c:
    // 0x2e2e0c: 0x0  nop
    ctx->pc = 0x2e2e0cu;
    // NOP
label_2e2e10:
    // 0x2e2e10: 0x4600a8c2  mul.s       $f3, $f21, $f0
    ctx->pc = 0x2e2e10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_2e2e14:
    // 0x2e2e14: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2e2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2e2e18:
    // 0x2e2e18: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2e2e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2e2e1c:
    // 0x2e2e1c: 0xc6220068  lwc1        $f2, 0x68($s1)
    ctx->pc = 0x2e2e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e2e20:
    // 0x2e2e20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e2e24:
    // 0x2e2e24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2e28:
    // 0x2e2e28: 0x0  nop
    ctx->pc = 0x2e2e28u;
    // NOP
label_2e2e2c:
    // 0x2e2e2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e2e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e2e30:
    // 0x2e2e30: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2e2e30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2e2e34:
    // 0x2e2e34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e2e34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2e2e38:
    // 0x2e2e38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2e38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2e2e3c:
    // 0x2e2e3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2e3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e2e40:
    // 0x2e2e40: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2e2e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_2e2e44:
    // 0x2e2e44: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2e2e44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_2e2e48:
    // 0x2e2e48: 0xc04cab0  jal         func_132AC0
label_2e2e4c:
    if (ctx->pc == 0x2E2E4Cu) {
        ctx->pc = 0x2E2E4Cu;
            // 0x2e2e4c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2E2E50u;
        goto label_2e2e50;
    }
    ctx->pc = 0x2E2E48u;
    SET_GPR_U32(ctx, 31, 0x2E2E50u);
    ctx->pc = 0x2E2E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E48u;
            // 0x2e2e4c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E50u; }
        if (ctx->pc != 0x2E2E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E50u; }
        if (ctx->pc != 0x2E2E50u) { return; }
    }
    ctx->pc = 0x2E2E50u;
label_2e2e50:
    // 0x2e2e50: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2e2e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2e2e54:
    // 0x2e2e54: 0xc04f278  jal         func_13C9E0
label_2e2e58:
    if (ctx->pc == 0x2E2E58u) {
        ctx->pc = 0x2E2E58u;
            // 0x2e2e58: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2E2E5Cu;
        goto label_2e2e5c;
    }
    ctx->pc = 0x2E2E54u;
    SET_GPR_U32(ctx, 31, 0x2E2E5Cu);
    ctx->pc = 0x2E2E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E54u;
            // 0x2e2e58: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E5Cu; }
        if (ctx->pc != 0x2E2E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E5Cu; }
        if (ctx->pc != 0x2E2E5Cu) { return; }
    }
    ctx->pc = 0x2E2E5Cu;
label_2e2e5c:
    // 0x2e2e5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e2e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e2e60:
    // 0x2e2e60: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2e2e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2e2e64:
    // 0x2e2e64: 0xc04cd80  jal         func_133600
label_2e2e68:
    if (ctx->pc == 0x2E2E68u) {
        ctx->pc = 0x2E2E68u;
            // 0x2e2e68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E6Cu;
        goto label_2e2e6c;
    }
    ctx->pc = 0x2E2E64u;
    SET_GPR_U32(ctx, 31, 0x2E2E6Cu);
    ctx->pc = 0x2E2E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E64u;
            // 0x2e2e68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E6Cu; }
        if (ctx->pc != 0x2E2E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E6Cu; }
        if (ctx->pc != 0x2E2E6Cu) { return; }
    }
    ctx->pc = 0x2E2E6Cu;
label_2e2e6c:
    // 0x2e2e6c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e2e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2e2e70:
    // 0x2e2e70: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e2e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e2e74:
    // 0x2e2e74: 0xc04cca0  jal         func_133280
label_2e2e78:
    if (ctx->pc == 0x2E2E78u) {
        ctx->pc = 0x2E2E78u;
            // 0x2e2e78: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E7Cu;
        goto label_2e2e7c;
    }
    ctx->pc = 0x2E2E74u;
    SET_GPR_U32(ctx, 31, 0x2E2E7Cu);
    ctx->pc = 0x2E2E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E74u;
            // 0x2e2e78: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E7Cu; }
        if (ctx->pc != 0x2E2E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E7Cu; }
        if (ctx->pc != 0x2E2E7Cu) { return; }
    }
    ctx->pc = 0x2E2E7Cu;
label_2e2e7c:
    // 0x2e2e7c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2e2e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2e2e80:
    // 0x2e2e80: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e2e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2e2e84:
    // 0x2e2e84: 0xc04cbe0  jal         func_132F80
label_2e2e88:
    if (ctx->pc == 0x2E2E88u) {
        ctx->pc = 0x2E2E88u;
            // 0x2e2e88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E8Cu;
        goto label_2e2e8c;
    }
    ctx->pc = 0x2E2E84u;
    SET_GPR_U32(ctx, 31, 0x2E2E8Cu);
    ctx->pc = 0x2E2E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E84u;
            // 0x2e2e88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E8Cu; }
        if (ctx->pc != 0x2E2E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E8Cu; }
        if (ctx->pc != 0x2E2E8Cu) { return; }
    }
    ctx->pc = 0x2E2E8Cu;
label_2e2e8c:
    // 0x2e2e8c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2e2e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2e2e90:
    // 0x2e2e90: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e2e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2e2e94:
    // 0x2e2e94: 0xc04cbe0  jal         func_132F80
label_2e2e98:
    if (ctx->pc == 0x2E2E98u) {
        ctx->pc = 0x2E2E98u;
            // 0x2e2e98: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E9Cu;
        goto label_2e2e9c;
    }
    ctx->pc = 0x2E2E94u;
    SET_GPR_U32(ctx, 31, 0x2E2E9Cu);
    ctx->pc = 0x2E2E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E94u;
            // 0x2e2e98: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E9Cu; }
        if (ctx->pc != 0x2E2E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E9Cu; }
        if (ctx->pc != 0x2E2E9Cu) { return; }
    }
    ctx->pc = 0x2E2E9Cu;
label_2e2e9c:
    // 0x2e2e9c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2e2e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2ea0:
    // 0x2e2ea0: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x2e2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_2e2ea4:
    // 0x2e2ea4: 0x34430b60  ori         $v1, $v0, 0xB60
    ctx->pc = 0x2e2ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_2e2ea8:
    // 0x2e2ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e2ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e2eac:
    // 0x2e2eac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e2eb0:
    // 0x2e2eb0: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2e2eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_2e2eb4:
    // 0x2e2eb4: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x2e2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
label_2e2eb8:
    // 0x2e2eb8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2e2eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2ebc:
    // 0x2e2ebc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e2ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e2ec0:
    // 0x2e2ec0: 0x0  nop
    ctx->pc = 0x2e2ec0u;
    // NOP
label_2e2ec4:
    // 0x2e2ec4: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x2e2ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_2e2ec8:
    // 0x2e2ec8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e2ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2ecc:
    // 0x2e2ecc: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x2e2eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
label_2e2ed0:
    // 0x2e2ed0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e2ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2ed4:
    // 0x2e2ed4: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x2e2ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_2e2ed8:
    // 0x2e2ed8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2e2ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2edc:
    // 0x2e2edc: 0xe60001b4  swc1        $f0, 0x1B4($s0)
    ctx->pc = 0x2e2edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
label_2e2ee0:
    // 0x2e2ee0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e2ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2ee4:
    // 0x2e2ee4: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x2e2ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_2e2ee8:
    // 0x2e2ee8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e2ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2eec:
    // 0x2e2eec: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x2e2eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
label_2e2ef0:
    // 0x2e2ef0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2e2ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2ef4:
    // 0x2e2ef4: 0xe60001c0  swc1        $f0, 0x1C0($s0)
    ctx->pc = 0x2e2ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 448), bits); }
label_2e2ef8:
    // 0x2e2ef8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e2ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2efc:
    // 0x2e2efc: 0xe60001c4  swc1        $f0, 0x1C4($s0)
    ctx->pc = 0x2e2efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
label_2e2f00:
    // 0x2e2f00: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x2e2f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2f04:
    // 0x2e2f04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e2f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e2f08:
    // 0x2e2f08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2f08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e2f0c:
    // 0x2e2f0c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e2f0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e2f10:
    // 0x2e2f10: 0x0  nop
    ctx->pc = 0x2e2f10u;
    // NOP
label_2e2f14:
    // 0x2e2f14: 0xae030194  sw          $v1, 0x194($s0)
    ctx->pc = 0x2e2f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
label_2e2f18:
    // 0x2e2f18: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2e2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2e2f1c:
    // 0x2e2f1c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2e2f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2f20:
    // 0x2e2f20: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2e2f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_2e2f24:
    // 0x2e2f24: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2e2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2e2f28:
    // 0x2e2f28: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2e2f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2f2c:
    // 0x2e2f2c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2e2f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2e2f30:
    // 0x2e2f30: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2e2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e2f34:
    // 0x2e2f34: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2e2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2e2f38:
    // 0x2e2f38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2e2f3c:
    // 0x2e2f3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2e2f40:
    // 0x2e2f40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e2f44:
    // 0x2e2f44: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2e2f44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e2f48:
    // 0x2e2f48: 0xc0a9388  jal         func_2A4E20
label_2e2f4c:
    if (ctx->pc == 0x2E2F4Cu) {
        ctx->pc = 0x2E2F4Cu;
            // 0x2e2f4c: 0xa2220070  sb          $v0, 0x70($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2E2F50u;
        goto label_2e2f50;
    }
    ctx->pc = 0x2E2F48u;
    SET_GPR_U32(ctx, 31, 0x2E2F50u);
    ctx->pc = 0x2E2F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2F48u;
            // 0x2e2f4c: 0xa2220070  sb          $v0, 0x70($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4E20u;
    if (runtime->hasFunction(0x2A4E20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F50u; }
        if (ctx->pc != 0x2E2F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4E20_0x2a4e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F50u; }
        if (ctx->pc != 0x2E2F50u) { return; }
    }
    ctx->pc = 0x2E2F50u;
label_2e2f50:
    // 0x2e2f50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e2f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e2f54:
    // 0x2e2f54: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e2f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e2f58:
    // 0x2e2f58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e2f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e2f5c:
    // 0x2e2f5c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e2f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e2f60:
    // 0x2e2f60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e2f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e2f64:
    // 0x2e2f64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e2f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2f68:
    // 0x2e2f68: 0x3e00008  jr          $ra
label_2e2f6c:
    if (ctx->pc == 0x2E2F6Cu) {
        ctx->pc = 0x2E2F6Cu;
            // 0x2e2f6c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2E2F70u;
        goto label_fallthrough_0x2e2f68;
    }
    ctx->pc = 0x2E2F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2F68u;
            // 0x2e2f6c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e2f68:
    ctx->pc = 0x2E2F70u;
}
