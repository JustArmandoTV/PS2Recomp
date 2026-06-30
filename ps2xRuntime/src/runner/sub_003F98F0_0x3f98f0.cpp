#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F98F0
// Address: 0x3f98f0 - 0x3fad50
void sub_003F98F0_0x3f98f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F98F0_0x3f98f0");
#endif

    switch (ctx->pc) {
        case 0x3f98f0u: goto label_3f98f0;
        case 0x3f98f4u: goto label_3f98f4;
        case 0x3f98f8u: goto label_3f98f8;
        case 0x3f98fcu: goto label_3f98fc;
        case 0x3f9900u: goto label_3f9900;
        case 0x3f9904u: goto label_3f9904;
        case 0x3f9908u: goto label_3f9908;
        case 0x3f990cu: goto label_3f990c;
        case 0x3f9910u: goto label_3f9910;
        case 0x3f9914u: goto label_3f9914;
        case 0x3f9918u: goto label_3f9918;
        case 0x3f991cu: goto label_3f991c;
        case 0x3f9920u: goto label_3f9920;
        case 0x3f9924u: goto label_3f9924;
        case 0x3f9928u: goto label_3f9928;
        case 0x3f992cu: goto label_3f992c;
        case 0x3f9930u: goto label_3f9930;
        case 0x3f9934u: goto label_3f9934;
        case 0x3f9938u: goto label_3f9938;
        case 0x3f993cu: goto label_3f993c;
        case 0x3f9940u: goto label_3f9940;
        case 0x3f9944u: goto label_3f9944;
        case 0x3f9948u: goto label_3f9948;
        case 0x3f994cu: goto label_3f994c;
        case 0x3f9950u: goto label_3f9950;
        case 0x3f9954u: goto label_3f9954;
        case 0x3f9958u: goto label_3f9958;
        case 0x3f995cu: goto label_3f995c;
        case 0x3f9960u: goto label_3f9960;
        case 0x3f9964u: goto label_3f9964;
        case 0x3f9968u: goto label_3f9968;
        case 0x3f996cu: goto label_3f996c;
        case 0x3f9970u: goto label_3f9970;
        case 0x3f9974u: goto label_3f9974;
        case 0x3f9978u: goto label_3f9978;
        case 0x3f997cu: goto label_3f997c;
        case 0x3f9980u: goto label_3f9980;
        case 0x3f9984u: goto label_3f9984;
        case 0x3f9988u: goto label_3f9988;
        case 0x3f998cu: goto label_3f998c;
        case 0x3f9990u: goto label_3f9990;
        case 0x3f9994u: goto label_3f9994;
        case 0x3f9998u: goto label_3f9998;
        case 0x3f999cu: goto label_3f999c;
        case 0x3f99a0u: goto label_3f99a0;
        case 0x3f99a4u: goto label_3f99a4;
        case 0x3f99a8u: goto label_3f99a8;
        case 0x3f99acu: goto label_3f99ac;
        case 0x3f99b0u: goto label_3f99b0;
        case 0x3f99b4u: goto label_3f99b4;
        case 0x3f99b8u: goto label_3f99b8;
        case 0x3f99bcu: goto label_3f99bc;
        case 0x3f99c0u: goto label_3f99c0;
        case 0x3f99c4u: goto label_3f99c4;
        case 0x3f99c8u: goto label_3f99c8;
        case 0x3f99ccu: goto label_3f99cc;
        case 0x3f99d0u: goto label_3f99d0;
        case 0x3f99d4u: goto label_3f99d4;
        case 0x3f99d8u: goto label_3f99d8;
        case 0x3f99dcu: goto label_3f99dc;
        case 0x3f99e0u: goto label_3f99e0;
        case 0x3f99e4u: goto label_3f99e4;
        case 0x3f99e8u: goto label_3f99e8;
        case 0x3f99ecu: goto label_3f99ec;
        case 0x3f99f0u: goto label_3f99f0;
        case 0x3f99f4u: goto label_3f99f4;
        case 0x3f99f8u: goto label_3f99f8;
        case 0x3f99fcu: goto label_3f99fc;
        case 0x3f9a00u: goto label_3f9a00;
        case 0x3f9a04u: goto label_3f9a04;
        case 0x3f9a08u: goto label_3f9a08;
        case 0x3f9a0cu: goto label_3f9a0c;
        case 0x3f9a10u: goto label_3f9a10;
        case 0x3f9a14u: goto label_3f9a14;
        case 0x3f9a18u: goto label_3f9a18;
        case 0x3f9a1cu: goto label_3f9a1c;
        case 0x3f9a20u: goto label_3f9a20;
        case 0x3f9a24u: goto label_3f9a24;
        case 0x3f9a28u: goto label_3f9a28;
        case 0x3f9a2cu: goto label_3f9a2c;
        case 0x3f9a30u: goto label_3f9a30;
        case 0x3f9a34u: goto label_3f9a34;
        case 0x3f9a38u: goto label_3f9a38;
        case 0x3f9a3cu: goto label_3f9a3c;
        case 0x3f9a40u: goto label_3f9a40;
        case 0x3f9a44u: goto label_3f9a44;
        case 0x3f9a48u: goto label_3f9a48;
        case 0x3f9a4cu: goto label_3f9a4c;
        case 0x3f9a50u: goto label_3f9a50;
        case 0x3f9a54u: goto label_3f9a54;
        case 0x3f9a58u: goto label_3f9a58;
        case 0x3f9a5cu: goto label_3f9a5c;
        case 0x3f9a60u: goto label_3f9a60;
        case 0x3f9a64u: goto label_3f9a64;
        case 0x3f9a68u: goto label_3f9a68;
        case 0x3f9a6cu: goto label_3f9a6c;
        case 0x3f9a70u: goto label_3f9a70;
        case 0x3f9a74u: goto label_3f9a74;
        case 0x3f9a78u: goto label_3f9a78;
        case 0x3f9a7cu: goto label_3f9a7c;
        case 0x3f9a80u: goto label_3f9a80;
        case 0x3f9a84u: goto label_3f9a84;
        case 0x3f9a88u: goto label_3f9a88;
        case 0x3f9a8cu: goto label_3f9a8c;
        case 0x3f9a90u: goto label_3f9a90;
        case 0x3f9a94u: goto label_3f9a94;
        case 0x3f9a98u: goto label_3f9a98;
        case 0x3f9a9cu: goto label_3f9a9c;
        case 0x3f9aa0u: goto label_3f9aa0;
        case 0x3f9aa4u: goto label_3f9aa4;
        case 0x3f9aa8u: goto label_3f9aa8;
        case 0x3f9aacu: goto label_3f9aac;
        case 0x3f9ab0u: goto label_3f9ab0;
        case 0x3f9ab4u: goto label_3f9ab4;
        case 0x3f9ab8u: goto label_3f9ab8;
        case 0x3f9abcu: goto label_3f9abc;
        case 0x3f9ac0u: goto label_3f9ac0;
        case 0x3f9ac4u: goto label_3f9ac4;
        case 0x3f9ac8u: goto label_3f9ac8;
        case 0x3f9accu: goto label_3f9acc;
        case 0x3f9ad0u: goto label_3f9ad0;
        case 0x3f9ad4u: goto label_3f9ad4;
        case 0x3f9ad8u: goto label_3f9ad8;
        case 0x3f9adcu: goto label_3f9adc;
        case 0x3f9ae0u: goto label_3f9ae0;
        case 0x3f9ae4u: goto label_3f9ae4;
        case 0x3f9ae8u: goto label_3f9ae8;
        case 0x3f9aecu: goto label_3f9aec;
        case 0x3f9af0u: goto label_3f9af0;
        case 0x3f9af4u: goto label_3f9af4;
        case 0x3f9af8u: goto label_3f9af8;
        case 0x3f9afcu: goto label_3f9afc;
        case 0x3f9b00u: goto label_3f9b00;
        case 0x3f9b04u: goto label_3f9b04;
        case 0x3f9b08u: goto label_3f9b08;
        case 0x3f9b0cu: goto label_3f9b0c;
        case 0x3f9b10u: goto label_3f9b10;
        case 0x3f9b14u: goto label_3f9b14;
        case 0x3f9b18u: goto label_3f9b18;
        case 0x3f9b1cu: goto label_3f9b1c;
        case 0x3f9b20u: goto label_3f9b20;
        case 0x3f9b24u: goto label_3f9b24;
        case 0x3f9b28u: goto label_3f9b28;
        case 0x3f9b2cu: goto label_3f9b2c;
        case 0x3f9b30u: goto label_3f9b30;
        case 0x3f9b34u: goto label_3f9b34;
        case 0x3f9b38u: goto label_3f9b38;
        case 0x3f9b3cu: goto label_3f9b3c;
        case 0x3f9b40u: goto label_3f9b40;
        case 0x3f9b44u: goto label_3f9b44;
        case 0x3f9b48u: goto label_3f9b48;
        case 0x3f9b4cu: goto label_3f9b4c;
        case 0x3f9b50u: goto label_3f9b50;
        case 0x3f9b54u: goto label_3f9b54;
        case 0x3f9b58u: goto label_3f9b58;
        case 0x3f9b5cu: goto label_3f9b5c;
        case 0x3f9b60u: goto label_3f9b60;
        case 0x3f9b64u: goto label_3f9b64;
        case 0x3f9b68u: goto label_3f9b68;
        case 0x3f9b6cu: goto label_3f9b6c;
        case 0x3f9b70u: goto label_3f9b70;
        case 0x3f9b74u: goto label_3f9b74;
        case 0x3f9b78u: goto label_3f9b78;
        case 0x3f9b7cu: goto label_3f9b7c;
        case 0x3f9b80u: goto label_3f9b80;
        case 0x3f9b84u: goto label_3f9b84;
        case 0x3f9b88u: goto label_3f9b88;
        case 0x3f9b8cu: goto label_3f9b8c;
        case 0x3f9b90u: goto label_3f9b90;
        case 0x3f9b94u: goto label_3f9b94;
        case 0x3f9b98u: goto label_3f9b98;
        case 0x3f9b9cu: goto label_3f9b9c;
        case 0x3f9ba0u: goto label_3f9ba0;
        case 0x3f9ba4u: goto label_3f9ba4;
        case 0x3f9ba8u: goto label_3f9ba8;
        case 0x3f9bacu: goto label_3f9bac;
        case 0x3f9bb0u: goto label_3f9bb0;
        case 0x3f9bb4u: goto label_3f9bb4;
        case 0x3f9bb8u: goto label_3f9bb8;
        case 0x3f9bbcu: goto label_3f9bbc;
        case 0x3f9bc0u: goto label_3f9bc0;
        case 0x3f9bc4u: goto label_3f9bc4;
        case 0x3f9bc8u: goto label_3f9bc8;
        case 0x3f9bccu: goto label_3f9bcc;
        case 0x3f9bd0u: goto label_3f9bd0;
        case 0x3f9bd4u: goto label_3f9bd4;
        case 0x3f9bd8u: goto label_3f9bd8;
        case 0x3f9bdcu: goto label_3f9bdc;
        case 0x3f9be0u: goto label_3f9be0;
        case 0x3f9be4u: goto label_3f9be4;
        case 0x3f9be8u: goto label_3f9be8;
        case 0x3f9becu: goto label_3f9bec;
        case 0x3f9bf0u: goto label_3f9bf0;
        case 0x3f9bf4u: goto label_3f9bf4;
        case 0x3f9bf8u: goto label_3f9bf8;
        case 0x3f9bfcu: goto label_3f9bfc;
        case 0x3f9c00u: goto label_3f9c00;
        case 0x3f9c04u: goto label_3f9c04;
        case 0x3f9c08u: goto label_3f9c08;
        case 0x3f9c0cu: goto label_3f9c0c;
        case 0x3f9c10u: goto label_3f9c10;
        case 0x3f9c14u: goto label_3f9c14;
        case 0x3f9c18u: goto label_3f9c18;
        case 0x3f9c1cu: goto label_3f9c1c;
        case 0x3f9c20u: goto label_3f9c20;
        case 0x3f9c24u: goto label_3f9c24;
        case 0x3f9c28u: goto label_3f9c28;
        case 0x3f9c2cu: goto label_3f9c2c;
        case 0x3f9c30u: goto label_3f9c30;
        case 0x3f9c34u: goto label_3f9c34;
        case 0x3f9c38u: goto label_3f9c38;
        case 0x3f9c3cu: goto label_3f9c3c;
        case 0x3f9c40u: goto label_3f9c40;
        case 0x3f9c44u: goto label_3f9c44;
        case 0x3f9c48u: goto label_3f9c48;
        case 0x3f9c4cu: goto label_3f9c4c;
        case 0x3f9c50u: goto label_3f9c50;
        case 0x3f9c54u: goto label_3f9c54;
        case 0x3f9c58u: goto label_3f9c58;
        case 0x3f9c5cu: goto label_3f9c5c;
        case 0x3f9c60u: goto label_3f9c60;
        case 0x3f9c64u: goto label_3f9c64;
        case 0x3f9c68u: goto label_3f9c68;
        case 0x3f9c6cu: goto label_3f9c6c;
        case 0x3f9c70u: goto label_3f9c70;
        case 0x3f9c74u: goto label_3f9c74;
        case 0x3f9c78u: goto label_3f9c78;
        case 0x3f9c7cu: goto label_3f9c7c;
        case 0x3f9c80u: goto label_3f9c80;
        case 0x3f9c84u: goto label_3f9c84;
        case 0x3f9c88u: goto label_3f9c88;
        case 0x3f9c8cu: goto label_3f9c8c;
        case 0x3f9c90u: goto label_3f9c90;
        case 0x3f9c94u: goto label_3f9c94;
        case 0x3f9c98u: goto label_3f9c98;
        case 0x3f9c9cu: goto label_3f9c9c;
        case 0x3f9ca0u: goto label_3f9ca0;
        case 0x3f9ca4u: goto label_3f9ca4;
        case 0x3f9ca8u: goto label_3f9ca8;
        case 0x3f9cacu: goto label_3f9cac;
        case 0x3f9cb0u: goto label_3f9cb0;
        case 0x3f9cb4u: goto label_3f9cb4;
        case 0x3f9cb8u: goto label_3f9cb8;
        case 0x3f9cbcu: goto label_3f9cbc;
        case 0x3f9cc0u: goto label_3f9cc0;
        case 0x3f9cc4u: goto label_3f9cc4;
        case 0x3f9cc8u: goto label_3f9cc8;
        case 0x3f9cccu: goto label_3f9ccc;
        case 0x3f9cd0u: goto label_3f9cd0;
        case 0x3f9cd4u: goto label_3f9cd4;
        case 0x3f9cd8u: goto label_3f9cd8;
        case 0x3f9cdcu: goto label_3f9cdc;
        case 0x3f9ce0u: goto label_3f9ce0;
        case 0x3f9ce4u: goto label_3f9ce4;
        case 0x3f9ce8u: goto label_3f9ce8;
        case 0x3f9cecu: goto label_3f9cec;
        case 0x3f9cf0u: goto label_3f9cf0;
        case 0x3f9cf4u: goto label_3f9cf4;
        case 0x3f9cf8u: goto label_3f9cf8;
        case 0x3f9cfcu: goto label_3f9cfc;
        case 0x3f9d00u: goto label_3f9d00;
        case 0x3f9d04u: goto label_3f9d04;
        case 0x3f9d08u: goto label_3f9d08;
        case 0x3f9d0cu: goto label_3f9d0c;
        case 0x3f9d10u: goto label_3f9d10;
        case 0x3f9d14u: goto label_3f9d14;
        case 0x3f9d18u: goto label_3f9d18;
        case 0x3f9d1cu: goto label_3f9d1c;
        case 0x3f9d20u: goto label_3f9d20;
        case 0x3f9d24u: goto label_3f9d24;
        case 0x3f9d28u: goto label_3f9d28;
        case 0x3f9d2cu: goto label_3f9d2c;
        case 0x3f9d30u: goto label_3f9d30;
        case 0x3f9d34u: goto label_3f9d34;
        case 0x3f9d38u: goto label_3f9d38;
        case 0x3f9d3cu: goto label_3f9d3c;
        case 0x3f9d40u: goto label_3f9d40;
        case 0x3f9d44u: goto label_3f9d44;
        case 0x3f9d48u: goto label_3f9d48;
        case 0x3f9d4cu: goto label_3f9d4c;
        case 0x3f9d50u: goto label_3f9d50;
        case 0x3f9d54u: goto label_3f9d54;
        case 0x3f9d58u: goto label_3f9d58;
        case 0x3f9d5cu: goto label_3f9d5c;
        case 0x3f9d60u: goto label_3f9d60;
        case 0x3f9d64u: goto label_3f9d64;
        case 0x3f9d68u: goto label_3f9d68;
        case 0x3f9d6cu: goto label_3f9d6c;
        case 0x3f9d70u: goto label_3f9d70;
        case 0x3f9d74u: goto label_3f9d74;
        case 0x3f9d78u: goto label_3f9d78;
        case 0x3f9d7cu: goto label_3f9d7c;
        case 0x3f9d80u: goto label_3f9d80;
        case 0x3f9d84u: goto label_3f9d84;
        case 0x3f9d88u: goto label_3f9d88;
        case 0x3f9d8cu: goto label_3f9d8c;
        case 0x3f9d90u: goto label_3f9d90;
        case 0x3f9d94u: goto label_3f9d94;
        case 0x3f9d98u: goto label_3f9d98;
        case 0x3f9d9cu: goto label_3f9d9c;
        case 0x3f9da0u: goto label_3f9da0;
        case 0x3f9da4u: goto label_3f9da4;
        case 0x3f9da8u: goto label_3f9da8;
        case 0x3f9dacu: goto label_3f9dac;
        case 0x3f9db0u: goto label_3f9db0;
        case 0x3f9db4u: goto label_3f9db4;
        case 0x3f9db8u: goto label_3f9db8;
        case 0x3f9dbcu: goto label_3f9dbc;
        case 0x3f9dc0u: goto label_3f9dc0;
        case 0x3f9dc4u: goto label_3f9dc4;
        case 0x3f9dc8u: goto label_3f9dc8;
        case 0x3f9dccu: goto label_3f9dcc;
        case 0x3f9dd0u: goto label_3f9dd0;
        case 0x3f9dd4u: goto label_3f9dd4;
        case 0x3f9dd8u: goto label_3f9dd8;
        case 0x3f9ddcu: goto label_3f9ddc;
        case 0x3f9de0u: goto label_3f9de0;
        case 0x3f9de4u: goto label_3f9de4;
        case 0x3f9de8u: goto label_3f9de8;
        case 0x3f9decu: goto label_3f9dec;
        case 0x3f9df0u: goto label_3f9df0;
        case 0x3f9df4u: goto label_3f9df4;
        case 0x3f9df8u: goto label_3f9df8;
        case 0x3f9dfcu: goto label_3f9dfc;
        case 0x3f9e00u: goto label_3f9e00;
        case 0x3f9e04u: goto label_3f9e04;
        case 0x3f9e08u: goto label_3f9e08;
        case 0x3f9e0cu: goto label_3f9e0c;
        case 0x3f9e10u: goto label_3f9e10;
        case 0x3f9e14u: goto label_3f9e14;
        case 0x3f9e18u: goto label_3f9e18;
        case 0x3f9e1cu: goto label_3f9e1c;
        case 0x3f9e20u: goto label_3f9e20;
        case 0x3f9e24u: goto label_3f9e24;
        case 0x3f9e28u: goto label_3f9e28;
        case 0x3f9e2cu: goto label_3f9e2c;
        case 0x3f9e30u: goto label_3f9e30;
        case 0x3f9e34u: goto label_3f9e34;
        case 0x3f9e38u: goto label_3f9e38;
        case 0x3f9e3cu: goto label_3f9e3c;
        case 0x3f9e40u: goto label_3f9e40;
        case 0x3f9e44u: goto label_3f9e44;
        case 0x3f9e48u: goto label_3f9e48;
        case 0x3f9e4cu: goto label_3f9e4c;
        case 0x3f9e50u: goto label_3f9e50;
        case 0x3f9e54u: goto label_3f9e54;
        case 0x3f9e58u: goto label_3f9e58;
        case 0x3f9e5cu: goto label_3f9e5c;
        case 0x3f9e60u: goto label_3f9e60;
        case 0x3f9e64u: goto label_3f9e64;
        case 0x3f9e68u: goto label_3f9e68;
        case 0x3f9e6cu: goto label_3f9e6c;
        case 0x3f9e70u: goto label_3f9e70;
        case 0x3f9e74u: goto label_3f9e74;
        case 0x3f9e78u: goto label_3f9e78;
        case 0x3f9e7cu: goto label_3f9e7c;
        case 0x3f9e80u: goto label_3f9e80;
        case 0x3f9e84u: goto label_3f9e84;
        case 0x3f9e88u: goto label_3f9e88;
        case 0x3f9e8cu: goto label_3f9e8c;
        case 0x3f9e90u: goto label_3f9e90;
        case 0x3f9e94u: goto label_3f9e94;
        case 0x3f9e98u: goto label_3f9e98;
        case 0x3f9e9cu: goto label_3f9e9c;
        case 0x3f9ea0u: goto label_3f9ea0;
        case 0x3f9ea4u: goto label_3f9ea4;
        case 0x3f9ea8u: goto label_3f9ea8;
        case 0x3f9eacu: goto label_3f9eac;
        case 0x3f9eb0u: goto label_3f9eb0;
        case 0x3f9eb4u: goto label_3f9eb4;
        case 0x3f9eb8u: goto label_3f9eb8;
        case 0x3f9ebcu: goto label_3f9ebc;
        case 0x3f9ec0u: goto label_3f9ec0;
        case 0x3f9ec4u: goto label_3f9ec4;
        case 0x3f9ec8u: goto label_3f9ec8;
        case 0x3f9eccu: goto label_3f9ecc;
        case 0x3f9ed0u: goto label_3f9ed0;
        case 0x3f9ed4u: goto label_3f9ed4;
        case 0x3f9ed8u: goto label_3f9ed8;
        case 0x3f9edcu: goto label_3f9edc;
        case 0x3f9ee0u: goto label_3f9ee0;
        case 0x3f9ee4u: goto label_3f9ee4;
        case 0x3f9ee8u: goto label_3f9ee8;
        case 0x3f9eecu: goto label_3f9eec;
        case 0x3f9ef0u: goto label_3f9ef0;
        case 0x3f9ef4u: goto label_3f9ef4;
        case 0x3f9ef8u: goto label_3f9ef8;
        case 0x3f9efcu: goto label_3f9efc;
        case 0x3f9f00u: goto label_3f9f00;
        case 0x3f9f04u: goto label_3f9f04;
        case 0x3f9f08u: goto label_3f9f08;
        case 0x3f9f0cu: goto label_3f9f0c;
        case 0x3f9f10u: goto label_3f9f10;
        case 0x3f9f14u: goto label_3f9f14;
        case 0x3f9f18u: goto label_3f9f18;
        case 0x3f9f1cu: goto label_3f9f1c;
        case 0x3f9f20u: goto label_3f9f20;
        case 0x3f9f24u: goto label_3f9f24;
        case 0x3f9f28u: goto label_3f9f28;
        case 0x3f9f2cu: goto label_3f9f2c;
        case 0x3f9f30u: goto label_3f9f30;
        case 0x3f9f34u: goto label_3f9f34;
        case 0x3f9f38u: goto label_3f9f38;
        case 0x3f9f3cu: goto label_3f9f3c;
        case 0x3f9f40u: goto label_3f9f40;
        case 0x3f9f44u: goto label_3f9f44;
        case 0x3f9f48u: goto label_3f9f48;
        case 0x3f9f4cu: goto label_3f9f4c;
        case 0x3f9f50u: goto label_3f9f50;
        case 0x3f9f54u: goto label_3f9f54;
        case 0x3f9f58u: goto label_3f9f58;
        case 0x3f9f5cu: goto label_3f9f5c;
        case 0x3f9f60u: goto label_3f9f60;
        case 0x3f9f64u: goto label_3f9f64;
        case 0x3f9f68u: goto label_3f9f68;
        case 0x3f9f6cu: goto label_3f9f6c;
        case 0x3f9f70u: goto label_3f9f70;
        case 0x3f9f74u: goto label_3f9f74;
        case 0x3f9f78u: goto label_3f9f78;
        case 0x3f9f7cu: goto label_3f9f7c;
        case 0x3f9f80u: goto label_3f9f80;
        case 0x3f9f84u: goto label_3f9f84;
        case 0x3f9f88u: goto label_3f9f88;
        case 0x3f9f8cu: goto label_3f9f8c;
        case 0x3f9f90u: goto label_3f9f90;
        case 0x3f9f94u: goto label_3f9f94;
        case 0x3f9f98u: goto label_3f9f98;
        case 0x3f9f9cu: goto label_3f9f9c;
        case 0x3f9fa0u: goto label_3f9fa0;
        case 0x3f9fa4u: goto label_3f9fa4;
        case 0x3f9fa8u: goto label_3f9fa8;
        case 0x3f9facu: goto label_3f9fac;
        case 0x3f9fb0u: goto label_3f9fb0;
        case 0x3f9fb4u: goto label_3f9fb4;
        case 0x3f9fb8u: goto label_3f9fb8;
        case 0x3f9fbcu: goto label_3f9fbc;
        case 0x3f9fc0u: goto label_3f9fc0;
        case 0x3f9fc4u: goto label_3f9fc4;
        case 0x3f9fc8u: goto label_3f9fc8;
        case 0x3f9fccu: goto label_3f9fcc;
        case 0x3f9fd0u: goto label_3f9fd0;
        case 0x3f9fd4u: goto label_3f9fd4;
        case 0x3f9fd8u: goto label_3f9fd8;
        case 0x3f9fdcu: goto label_3f9fdc;
        case 0x3f9fe0u: goto label_3f9fe0;
        case 0x3f9fe4u: goto label_3f9fe4;
        case 0x3f9fe8u: goto label_3f9fe8;
        case 0x3f9fecu: goto label_3f9fec;
        case 0x3f9ff0u: goto label_3f9ff0;
        case 0x3f9ff4u: goto label_3f9ff4;
        case 0x3f9ff8u: goto label_3f9ff8;
        case 0x3f9ffcu: goto label_3f9ffc;
        case 0x3fa000u: goto label_3fa000;
        case 0x3fa004u: goto label_3fa004;
        case 0x3fa008u: goto label_3fa008;
        case 0x3fa00cu: goto label_3fa00c;
        case 0x3fa010u: goto label_3fa010;
        case 0x3fa014u: goto label_3fa014;
        case 0x3fa018u: goto label_3fa018;
        case 0x3fa01cu: goto label_3fa01c;
        case 0x3fa020u: goto label_3fa020;
        case 0x3fa024u: goto label_3fa024;
        case 0x3fa028u: goto label_3fa028;
        case 0x3fa02cu: goto label_3fa02c;
        case 0x3fa030u: goto label_3fa030;
        case 0x3fa034u: goto label_3fa034;
        case 0x3fa038u: goto label_3fa038;
        case 0x3fa03cu: goto label_3fa03c;
        case 0x3fa040u: goto label_3fa040;
        case 0x3fa044u: goto label_3fa044;
        case 0x3fa048u: goto label_3fa048;
        case 0x3fa04cu: goto label_3fa04c;
        case 0x3fa050u: goto label_3fa050;
        case 0x3fa054u: goto label_3fa054;
        case 0x3fa058u: goto label_3fa058;
        case 0x3fa05cu: goto label_3fa05c;
        case 0x3fa060u: goto label_3fa060;
        case 0x3fa064u: goto label_3fa064;
        case 0x3fa068u: goto label_3fa068;
        case 0x3fa06cu: goto label_3fa06c;
        case 0x3fa070u: goto label_3fa070;
        case 0x3fa074u: goto label_3fa074;
        case 0x3fa078u: goto label_3fa078;
        case 0x3fa07cu: goto label_3fa07c;
        case 0x3fa080u: goto label_3fa080;
        case 0x3fa084u: goto label_3fa084;
        case 0x3fa088u: goto label_3fa088;
        case 0x3fa08cu: goto label_3fa08c;
        case 0x3fa090u: goto label_3fa090;
        case 0x3fa094u: goto label_3fa094;
        case 0x3fa098u: goto label_3fa098;
        case 0x3fa09cu: goto label_3fa09c;
        case 0x3fa0a0u: goto label_3fa0a0;
        case 0x3fa0a4u: goto label_3fa0a4;
        case 0x3fa0a8u: goto label_3fa0a8;
        case 0x3fa0acu: goto label_3fa0ac;
        case 0x3fa0b0u: goto label_3fa0b0;
        case 0x3fa0b4u: goto label_3fa0b4;
        case 0x3fa0b8u: goto label_3fa0b8;
        case 0x3fa0bcu: goto label_3fa0bc;
        case 0x3fa0c0u: goto label_3fa0c0;
        case 0x3fa0c4u: goto label_3fa0c4;
        case 0x3fa0c8u: goto label_3fa0c8;
        case 0x3fa0ccu: goto label_3fa0cc;
        case 0x3fa0d0u: goto label_3fa0d0;
        case 0x3fa0d4u: goto label_3fa0d4;
        case 0x3fa0d8u: goto label_3fa0d8;
        case 0x3fa0dcu: goto label_3fa0dc;
        case 0x3fa0e0u: goto label_3fa0e0;
        case 0x3fa0e4u: goto label_3fa0e4;
        case 0x3fa0e8u: goto label_3fa0e8;
        case 0x3fa0ecu: goto label_3fa0ec;
        case 0x3fa0f0u: goto label_3fa0f0;
        case 0x3fa0f4u: goto label_3fa0f4;
        case 0x3fa0f8u: goto label_3fa0f8;
        case 0x3fa0fcu: goto label_3fa0fc;
        case 0x3fa100u: goto label_3fa100;
        case 0x3fa104u: goto label_3fa104;
        case 0x3fa108u: goto label_3fa108;
        case 0x3fa10cu: goto label_3fa10c;
        case 0x3fa110u: goto label_3fa110;
        case 0x3fa114u: goto label_3fa114;
        case 0x3fa118u: goto label_3fa118;
        case 0x3fa11cu: goto label_3fa11c;
        case 0x3fa120u: goto label_3fa120;
        case 0x3fa124u: goto label_3fa124;
        case 0x3fa128u: goto label_3fa128;
        case 0x3fa12cu: goto label_3fa12c;
        case 0x3fa130u: goto label_3fa130;
        case 0x3fa134u: goto label_3fa134;
        case 0x3fa138u: goto label_3fa138;
        case 0x3fa13cu: goto label_3fa13c;
        case 0x3fa140u: goto label_3fa140;
        case 0x3fa144u: goto label_3fa144;
        case 0x3fa148u: goto label_3fa148;
        case 0x3fa14cu: goto label_3fa14c;
        case 0x3fa150u: goto label_3fa150;
        case 0x3fa154u: goto label_3fa154;
        case 0x3fa158u: goto label_3fa158;
        case 0x3fa15cu: goto label_3fa15c;
        case 0x3fa160u: goto label_3fa160;
        case 0x3fa164u: goto label_3fa164;
        case 0x3fa168u: goto label_3fa168;
        case 0x3fa16cu: goto label_3fa16c;
        case 0x3fa170u: goto label_3fa170;
        case 0x3fa174u: goto label_3fa174;
        case 0x3fa178u: goto label_3fa178;
        case 0x3fa17cu: goto label_3fa17c;
        case 0x3fa180u: goto label_3fa180;
        case 0x3fa184u: goto label_3fa184;
        case 0x3fa188u: goto label_3fa188;
        case 0x3fa18cu: goto label_3fa18c;
        case 0x3fa190u: goto label_3fa190;
        case 0x3fa194u: goto label_3fa194;
        case 0x3fa198u: goto label_3fa198;
        case 0x3fa19cu: goto label_3fa19c;
        case 0x3fa1a0u: goto label_3fa1a0;
        case 0x3fa1a4u: goto label_3fa1a4;
        case 0x3fa1a8u: goto label_3fa1a8;
        case 0x3fa1acu: goto label_3fa1ac;
        case 0x3fa1b0u: goto label_3fa1b0;
        case 0x3fa1b4u: goto label_3fa1b4;
        case 0x3fa1b8u: goto label_3fa1b8;
        case 0x3fa1bcu: goto label_3fa1bc;
        case 0x3fa1c0u: goto label_3fa1c0;
        case 0x3fa1c4u: goto label_3fa1c4;
        case 0x3fa1c8u: goto label_3fa1c8;
        case 0x3fa1ccu: goto label_3fa1cc;
        case 0x3fa1d0u: goto label_3fa1d0;
        case 0x3fa1d4u: goto label_3fa1d4;
        case 0x3fa1d8u: goto label_3fa1d8;
        case 0x3fa1dcu: goto label_3fa1dc;
        case 0x3fa1e0u: goto label_3fa1e0;
        case 0x3fa1e4u: goto label_3fa1e4;
        case 0x3fa1e8u: goto label_3fa1e8;
        case 0x3fa1ecu: goto label_3fa1ec;
        case 0x3fa1f0u: goto label_3fa1f0;
        case 0x3fa1f4u: goto label_3fa1f4;
        case 0x3fa1f8u: goto label_3fa1f8;
        case 0x3fa1fcu: goto label_3fa1fc;
        case 0x3fa200u: goto label_3fa200;
        case 0x3fa204u: goto label_3fa204;
        case 0x3fa208u: goto label_3fa208;
        case 0x3fa20cu: goto label_3fa20c;
        case 0x3fa210u: goto label_3fa210;
        case 0x3fa214u: goto label_3fa214;
        case 0x3fa218u: goto label_3fa218;
        case 0x3fa21cu: goto label_3fa21c;
        case 0x3fa220u: goto label_3fa220;
        case 0x3fa224u: goto label_3fa224;
        case 0x3fa228u: goto label_3fa228;
        case 0x3fa22cu: goto label_3fa22c;
        case 0x3fa230u: goto label_3fa230;
        case 0x3fa234u: goto label_3fa234;
        case 0x3fa238u: goto label_3fa238;
        case 0x3fa23cu: goto label_3fa23c;
        case 0x3fa240u: goto label_3fa240;
        case 0x3fa244u: goto label_3fa244;
        case 0x3fa248u: goto label_3fa248;
        case 0x3fa24cu: goto label_3fa24c;
        case 0x3fa250u: goto label_3fa250;
        case 0x3fa254u: goto label_3fa254;
        case 0x3fa258u: goto label_3fa258;
        case 0x3fa25cu: goto label_3fa25c;
        case 0x3fa260u: goto label_3fa260;
        case 0x3fa264u: goto label_3fa264;
        case 0x3fa268u: goto label_3fa268;
        case 0x3fa26cu: goto label_3fa26c;
        case 0x3fa270u: goto label_3fa270;
        case 0x3fa274u: goto label_3fa274;
        case 0x3fa278u: goto label_3fa278;
        case 0x3fa27cu: goto label_3fa27c;
        case 0x3fa280u: goto label_3fa280;
        case 0x3fa284u: goto label_3fa284;
        case 0x3fa288u: goto label_3fa288;
        case 0x3fa28cu: goto label_3fa28c;
        case 0x3fa290u: goto label_3fa290;
        case 0x3fa294u: goto label_3fa294;
        case 0x3fa298u: goto label_3fa298;
        case 0x3fa29cu: goto label_3fa29c;
        case 0x3fa2a0u: goto label_3fa2a0;
        case 0x3fa2a4u: goto label_3fa2a4;
        case 0x3fa2a8u: goto label_3fa2a8;
        case 0x3fa2acu: goto label_3fa2ac;
        case 0x3fa2b0u: goto label_3fa2b0;
        case 0x3fa2b4u: goto label_3fa2b4;
        case 0x3fa2b8u: goto label_3fa2b8;
        case 0x3fa2bcu: goto label_3fa2bc;
        case 0x3fa2c0u: goto label_3fa2c0;
        case 0x3fa2c4u: goto label_3fa2c4;
        case 0x3fa2c8u: goto label_3fa2c8;
        case 0x3fa2ccu: goto label_3fa2cc;
        case 0x3fa2d0u: goto label_3fa2d0;
        case 0x3fa2d4u: goto label_3fa2d4;
        case 0x3fa2d8u: goto label_3fa2d8;
        case 0x3fa2dcu: goto label_3fa2dc;
        case 0x3fa2e0u: goto label_3fa2e0;
        case 0x3fa2e4u: goto label_3fa2e4;
        case 0x3fa2e8u: goto label_3fa2e8;
        case 0x3fa2ecu: goto label_3fa2ec;
        case 0x3fa2f0u: goto label_3fa2f0;
        case 0x3fa2f4u: goto label_3fa2f4;
        case 0x3fa2f8u: goto label_3fa2f8;
        case 0x3fa2fcu: goto label_3fa2fc;
        case 0x3fa300u: goto label_3fa300;
        case 0x3fa304u: goto label_3fa304;
        case 0x3fa308u: goto label_3fa308;
        case 0x3fa30cu: goto label_3fa30c;
        case 0x3fa310u: goto label_3fa310;
        case 0x3fa314u: goto label_3fa314;
        case 0x3fa318u: goto label_3fa318;
        case 0x3fa31cu: goto label_3fa31c;
        case 0x3fa320u: goto label_3fa320;
        case 0x3fa324u: goto label_3fa324;
        case 0x3fa328u: goto label_3fa328;
        case 0x3fa32cu: goto label_3fa32c;
        case 0x3fa330u: goto label_3fa330;
        case 0x3fa334u: goto label_3fa334;
        case 0x3fa338u: goto label_3fa338;
        case 0x3fa33cu: goto label_3fa33c;
        case 0x3fa340u: goto label_3fa340;
        case 0x3fa344u: goto label_3fa344;
        case 0x3fa348u: goto label_3fa348;
        case 0x3fa34cu: goto label_3fa34c;
        case 0x3fa350u: goto label_3fa350;
        case 0x3fa354u: goto label_3fa354;
        case 0x3fa358u: goto label_3fa358;
        case 0x3fa35cu: goto label_3fa35c;
        case 0x3fa360u: goto label_3fa360;
        case 0x3fa364u: goto label_3fa364;
        case 0x3fa368u: goto label_3fa368;
        case 0x3fa36cu: goto label_3fa36c;
        case 0x3fa370u: goto label_3fa370;
        case 0x3fa374u: goto label_3fa374;
        case 0x3fa378u: goto label_3fa378;
        case 0x3fa37cu: goto label_3fa37c;
        case 0x3fa380u: goto label_3fa380;
        case 0x3fa384u: goto label_3fa384;
        case 0x3fa388u: goto label_3fa388;
        case 0x3fa38cu: goto label_3fa38c;
        case 0x3fa390u: goto label_3fa390;
        case 0x3fa394u: goto label_3fa394;
        case 0x3fa398u: goto label_3fa398;
        case 0x3fa39cu: goto label_3fa39c;
        case 0x3fa3a0u: goto label_3fa3a0;
        case 0x3fa3a4u: goto label_3fa3a4;
        case 0x3fa3a8u: goto label_3fa3a8;
        case 0x3fa3acu: goto label_3fa3ac;
        case 0x3fa3b0u: goto label_3fa3b0;
        case 0x3fa3b4u: goto label_3fa3b4;
        case 0x3fa3b8u: goto label_3fa3b8;
        case 0x3fa3bcu: goto label_3fa3bc;
        case 0x3fa3c0u: goto label_3fa3c0;
        case 0x3fa3c4u: goto label_3fa3c4;
        case 0x3fa3c8u: goto label_3fa3c8;
        case 0x3fa3ccu: goto label_3fa3cc;
        case 0x3fa3d0u: goto label_3fa3d0;
        case 0x3fa3d4u: goto label_3fa3d4;
        case 0x3fa3d8u: goto label_3fa3d8;
        case 0x3fa3dcu: goto label_3fa3dc;
        case 0x3fa3e0u: goto label_3fa3e0;
        case 0x3fa3e4u: goto label_3fa3e4;
        case 0x3fa3e8u: goto label_3fa3e8;
        case 0x3fa3ecu: goto label_3fa3ec;
        case 0x3fa3f0u: goto label_3fa3f0;
        case 0x3fa3f4u: goto label_3fa3f4;
        case 0x3fa3f8u: goto label_3fa3f8;
        case 0x3fa3fcu: goto label_3fa3fc;
        case 0x3fa400u: goto label_3fa400;
        case 0x3fa404u: goto label_3fa404;
        case 0x3fa408u: goto label_3fa408;
        case 0x3fa40cu: goto label_3fa40c;
        case 0x3fa410u: goto label_3fa410;
        case 0x3fa414u: goto label_3fa414;
        case 0x3fa418u: goto label_3fa418;
        case 0x3fa41cu: goto label_3fa41c;
        case 0x3fa420u: goto label_3fa420;
        case 0x3fa424u: goto label_3fa424;
        case 0x3fa428u: goto label_3fa428;
        case 0x3fa42cu: goto label_3fa42c;
        case 0x3fa430u: goto label_3fa430;
        case 0x3fa434u: goto label_3fa434;
        case 0x3fa438u: goto label_3fa438;
        case 0x3fa43cu: goto label_3fa43c;
        case 0x3fa440u: goto label_3fa440;
        case 0x3fa444u: goto label_3fa444;
        case 0x3fa448u: goto label_3fa448;
        case 0x3fa44cu: goto label_3fa44c;
        case 0x3fa450u: goto label_3fa450;
        case 0x3fa454u: goto label_3fa454;
        case 0x3fa458u: goto label_3fa458;
        case 0x3fa45cu: goto label_3fa45c;
        case 0x3fa460u: goto label_3fa460;
        case 0x3fa464u: goto label_3fa464;
        case 0x3fa468u: goto label_3fa468;
        case 0x3fa46cu: goto label_3fa46c;
        case 0x3fa470u: goto label_3fa470;
        case 0x3fa474u: goto label_3fa474;
        case 0x3fa478u: goto label_3fa478;
        case 0x3fa47cu: goto label_3fa47c;
        case 0x3fa480u: goto label_3fa480;
        case 0x3fa484u: goto label_3fa484;
        case 0x3fa488u: goto label_3fa488;
        case 0x3fa48cu: goto label_3fa48c;
        case 0x3fa490u: goto label_3fa490;
        case 0x3fa494u: goto label_3fa494;
        case 0x3fa498u: goto label_3fa498;
        case 0x3fa49cu: goto label_3fa49c;
        case 0x3fa4a0u: goto label_3fa4a0;
        case 0x3fa4a4u: goto label_3fa4a4;
        case 0x3fa4a8u: goto label_3fa4a8;
        case 0x3fa4acu: goto label_3fa4ac;
        case 0x3fa4b0u: goto label_3fa4b0;
        case 0x3fa4b4u: goto label_3fa4b4;
        case 0x3fa4b8u: goto label_3fa4b8;
        case 0x3fa4bcu: goto label_3fa4bc;
        case 0x3fa4c0u: goto label_3fa4c0;
        case 0x3fa4c4u: goto label_3fa4c4;
        case 0x3fa4c8u: goto label_3fa4c8;
        case 0x3fa4ccu: goto label_3fa4cc;
        case 0x3fa4d0u: goto label_3fa4d0;
        case 0x3fa4d4u: goto label_3fa4d4;
        case 0x3fa4d8u: goto label_3fa4d8;
        case 0x3fa4dcu: goto label_3fa4dc;
        case 0x3fa4e0u: goto label_3fa4e0;
        case 0x3fa4e4u: goto label_3fa4e4;
        case 0x3fa4e8u: goto label_3fa4e8;
        case 0x3fa4ecu: goto label_3fa4ec;
        case 0x3fa4f0u: goto label_3fa4f0;
        case 0x3fa4f4u: goto label_3fa4f4;
        case 0x3fa4f8u: goto label_3fa4f8;
        case 0x3fa4fcu: goto label_3fa4fc;
        case 0x3fa500u: goto label_3fa500;
        case 0x3fa504u: goto label_3fa504;
        case 0x3fa508u: goto label_3fa508;
        case 0x3fa50cu: goto label_3fa50c;
        case 0x3fa510u: goto label_3fa510;
        case 0x3fa514u: goto label_3fa514;
        case 0x3fa518u: goto label_3fa518;
        case 0x3fa51cu: goto label_3fa51c;
        case 0x3fa520u: goto label_3fa520;
        case 0x3fa524u: goto label_3fa524;
        case 0x3fa528u: goto label_3fa528;
        case 0x3fa52cu: goto label_3fa52c;
        case 0x3fa530u: goto label_3fa530;
        case 0x3fa534u: goto label_3fa534;
        case 0x3fa538u: goto label_3fa538;
        case 0x3fa53cu: goto label_3fa53c;
        case 0x3fa540u: goto label_3fa540;
        case 0x3fa544u: goto label_3fa544;
        case 0x3fa548u: goto label_3fa548;
        case 0x3fa54cu: goto label_3fa54c;
        case 0x3fa550u: goto label_3fa550;
        case 0x3fa554u: goto label_3fa554;
        case 0x3fa558u: goto label_3fa558;
        case 0x3fa55cu: goto label_3fa55c;
        case 0x3fa560u: goto label_3fa560;
        case 0x3fa564u: goto label_3fa564;
        case 0x3fa568u: goto label_3fa568;
        case 0x3fa56cu: goto label_3fa56c;
        case 0x3fa570u: goto label_3fa570;
        case 0x3fa574u: goto label_3fa574;
        case 0x3fa578u: goto label_3fa578;
        case 0x3fa57cu: goto label_3fa57c;
        case 0x3fa580u: goto label_3fa580;
        case 0x3fa584u: goto label_3fa584;
        case 0x3fa588u: goto label_3fa588;
        case 0x3fa58cu: goto label_3fa58c;
        case 0x3fa590u: goto label_3fa590;
        case 0x3fa594u: goto label_3fa594;
        case 0x3fa598u: goto label_3fa598;
        case 0x3fa59cu: goto label_3fa59c;
        case 0x3fa5a0u: goto label_3fa5a0;
        case 0x3fa5a4u: goto label_3fa5a4;
        case 0x3fa5a8u: goto label_3fa5a8;
        case 0x3fa5acu: goto label_3fa5ac;
        case 0x3fa5b0u: goto label_3fa5b0;
        case 0x3fa5b4u: goto label_3fa5b4;
        case 0x3fa5b8u: goto label_3fa5b8;
        case 0x3fa5bcu: goto label_3fa5bc;
        case 0x3fa5c0u: goto label_3fa5c0;
        case 0x3fa5c4u: goto label_3fa5c4;
        case 0x3fa5c8u: goto label_3fa5c8;
        case 0x3fa5ccu: goto label_3fa5cc;
        case 0x3fa5d0u: goto label_3fa5d0;
        case 0x3fa5d4u: goto label_3fa5d4;
        case 0x3fa5d8u: goto label_3fa5d8;
        case 0x3fa5dcu: goto label_3fa5dc;
        case 0x3fa5e0u: goto label_3fa5e0;
        case 0x3fa5e4u: goto label_3fa5e4;
        case 0x3fa5e8u: goto label_3fa5e8;
        case 0x3fa5ecu: goto label_3fa5ec;
        case 0x3fa5f0u: goto label_3fa5f0;
        case 0x3fa5f4u: goto label_3fa5f4;
        case 0x3fa5f8u: goto label_3fa5f8;
        case 0x3fa5fcu: goto label_3fa5fc;
        case 0x3fa600u: goto label_3fa600;
        case 0x3fa604u: goto label_3fa604;
        case 0x3fa608u: goto label_3fa608;
        case 0x3fa60cu: goto label_3fa60c;
        case 0x3fa610u: goto label_3fa610;
        case 0x3fa614u: goto label_3fa614;
        case 0x3fa618u: goto label_3fa618;
        case 0x3fa61cu: goto label_3fa61c;
        case 0x3fa620u: goto label_3fa620;
        case 0x3fa624u: goto label_3fa624;
        case 0x3fa628u: goto label_3fa628;
        case 0x3fa62cu: goto label_3fa62c;
        case 0x3fa630u: goto label_3fa630;
        case 0x3fa634u: goto label_3fa634;
        case 0x3fa638u: goto label_3fa638;
        case 0x3fa63cu: goto label_3fa63c;
        case 0x3fa640u: goto label_3fa640;
        case 0x3fa644u: goto label_3fa644;
        case 0x3fa648u: goto label_3fa648;
        case 0x3fa64cu: goto label_3fa64c;
        case 0x3fa650u: goto label_3fa650;
        case 0x3fa654u: goto label_3fa654;
        case 0x3fa658u: goto label_3fa658;
        case 0x3fa65cu: goto label_3fa65c;
        case 0x3fa660u: goto label_3fa660;
        case 0x3fa664u: goto label_3fa664;
        case 0x3fa668u: goto label_3fa668;
        case 0x3fa66cu: goto label_3fa66c;
        case 0x3fa670u: goto label_3fa670;
        case 0x3fa674u: goto label_3fa674;
        case 0x3fa678u: goto label_3fa678;
        case 0x3fa67cu: goto label_3fa67c;
        case 0x3fa680u: goto label_3fa680;
        case 0x3fa684u: goto label_3fa684;
        case 0x3fa688u: goto label_3fa688;
        case 0x3fa68cu: goto label_3fa68c;
        case 0x3fa690u: goto label_3fa690;
        case 0x3fa694u: goto label_3fa694;
        case 0x3fa698u: goto label_3fa698;
        case 0x3fa69cu: goto label_3fa69c;
        case 0x3fa6a0u: goto label_3fa6a0;
        case 0x3fa6a4u: goto label_3fa6a4;
        case 0x3fa6a8u: goto label_3fa6a8;
        case 0x3fa6acu: goto label_3fa6ac;
        case 0x3fa6b0u: goto label_3fa6b0;
        case 0x3fa6b4u: goto label_3fa6b4;
        case 0x3fa6b8u: goto label_3fa6b8;
        case 0x3fa6bcu: goto label_3fa6bc;
        case 0x3fa6c0u: goto label_3fa6c0;
        case 0x3fa6c4u: goto label_3fa6c4;
        case 0x3fa6c8u: goto label_3fa6c8;
        case 0x3fa6ccu: goto label_3fa6cc;
        case 0x3fa6d0u: goto label_3fa6d0;
        case 0x3fa6d4u: goto label_3fa6d4;
        case 0x3fa6d8u: goto label_3fa6d8;
        case 0x3fa6dcu: goto label_3fa6dc;
        case 0x3fa6e0u: goto label_3fa6e0;
        case 0x3fa6e4u: goto label_3fa6e4;
        case 0x3fa6e8u: goto label_3fa6e8;
        case 0x3fa6ecu: goto label_3fa6ec;
        case 0x3fa6f0u: goto label_3fa6f0;
        case 0x3fa6f4u: goto label_3fa6f4;
        case 0x3fa6f8u: goto label_3fa6f8;
        case 0x3fa6fcu: goto label_3fa6fc;
        case 0x3fa700u: goto label_3fa700;
        case 0x3fa704u: goto label_3fa704;
        case 0x3fa708u: goto label_3fa708;
        case 0x3fa70cu: goto label_3fa70c;
        case 0x3fa710u: goto label_3fa710;
        case 0x3fa714u: goto label_3fa714;
        case 0x3fa718u: goto label_3fa718;
        case 0x3fa71cu: goto label_3fa71c;
        case 0x3fa720u: goto label_3fa720;
        case 0x3fa724u: goto label_3fa724;
        case 0x3fa728u: goto label_3fa728;
        case 0x3fa72cu: goto label_3fa72c;
        case 0x3fa730u: goto label_3fa730;
        case 0x3fa734u: goto label_3fa734;
        case 0x3fa738u: goto label_3fa738;
        case 0x3fa73cu: goto label_3fa73c;
        case 0x3fa740u: goto label_3fa740;
        case 0x3fa744u: goto label_3fa744;
        case 0x3fa748u: goto label_3fa748;
        case 0x3fa74cu: goto label_3fa74c;
        case 0x3fa750u: goto label_3fa750;
        case 0x3fa754u: goto label_3fa754;
        case 0x3fa758u: goto label_3fa758;
        case 0x3fa75cu: goto label_3fa75c;
        case 0x3fa760u: goto label_3fa760;
        case 0x3fa764u: goto label_3fa764;
        case 0x3fa768u: goto label_3fa768;
        case 0x3fa76cu: goto label_3fa76c;
        case 0x3fa770u: goto label_3fa770;
        case 0x3fa774u: goto label_3fa774;
        case 0x3fa778u: goto label_3fa778;
        case 0x3fa77cu: goto label_3fa77c;
        case 0x3fa780u: goto label_3fa780;
        case 0x3fa784u: goto label_3fa784;
        case 0x3fa788u: goto label_3fa788;
        case 0x3fa78cu: goto label_3fa78c;
        case 0x3fa790u: goto label_3fa790;
        case 0x3fa794u: goto label_3fa794;
        case 0x3fa798u: goto label_3fa798;
        case 0x3fa79cu: goto label_3fa79c;
        case 0x3fa7a0u: goto label_3fa7a0;
        case 0x3fa7a4u: goto label_3fa7a4;
        case 0x3fa7a8u: goto label_3fa7a8;
        case 0x3fa7acu: goto label_3fa7ac;
        case 0x3fa7b0u: goto label_3fa7b0;
        case 0x3fa7b4u: goto label_3fa7b4;
        case 0x3fa7b8u: goto label_3fa7b8;
        case 0x3fa7bcu: goto label_3fa7bc;
        case 0x3fa7c0u: goto label_3fa7c0;
        case 0x3fa7c4u: goto label_3fa7c4;
        case 0x3fa7c8u: goto label_3fa7c8;
        case 0x3fa7ccu: goto label_3fa7cc;
        case 0x3fa7d0u: goto label_3fa7d0;
        case 0x3fa7d4u: goto label_3fa7d4;
        case 0x3fa7d8u: goto label_3fa7d8;
        case 0x3fa7dcu: goto label_3fa7dc;
        case 0x3fa7e0u: goto label_3fa7e0;
        case 0x3fa7e4u: goto label_3fa7e4;
        case 0x3fa7e8u: goto label_3fa7e8;
        case 0x3fa7ecu: goto label_3fa7ec;
        case 0x3fa7f0u: goto label_3fa7f0;
        case 0x3fa7f4u: goto label_3fa7f4;
        case 0x3fa7f8u: goto label_3fa7f8;
        case 0x3fa7fcu: goto label_3fa7fc;
        case 0x3fa800u: goto label_3fa800;
        case 0x3fa804u: goto label_3fa804;
        case 0x3fa808u: goto label_3fa808;
        case 0x3fa80cu: goto label_3fa80c;
        case 0x3fa810u: goto label_3fa810;
        case 0x3fa814u: goto label_3fa814;
        case 0x3fa818u: goto label_3fa818;
        case 0x3fa81cu: goto label_3fa81c;
        case 0x3fa820u: goto label_3fa820;
        case 0x3fa824u: goto label_3fa824;
        case 0x3fa828u: goto label_3fa828;
        case 0x3fa82cu: goto label_3fa82c;
        case 0x3fa830u: goto label_3fa830;
        case 0x3fa834u: goto label_3fa834;
        case 0x3fa838u: goto label_3fa838;
        case 0x3fa83cu: goto label_3fa83c;
        case 0x3fa840u: goto label_3fa840;
        case 0x3fa844u: goto label_3fa844;
        case 0x3fa848u: goto label_3fa848;
        case 0x3fa84cu: goto label_3fa84c;
        case 0x3fa850u: goto label_3fa850;
        case 0x3fa854u: goto label_3fa854;
        case 0x3fa858u: goto label_3fa858;
        case 0x3fa85cu: goto label_3fa85c;
        case 0x3fa860u: goto label_3fa860;
        case 0x3fa864u: goto label_3fa864;
        case 0x3fa868u: goto label_3fa868;
        case 0x3fa86cu: goto label_3fa86c;
        case 0x3fa870u: goto label_3fa870;
        case 0x3fa874u: goto label_3fa874;
        case 0x3fa878u: goto label_3fa878;
        case 0x3fa87cu: goto label_3fa87c;
        case 0x3fa880u: goto label_3fa880;
        case 0x3fa884u: goto label_3fa884;
        case 0x3fa888u: goto label_3fa888;
        case 0x3fa88cu: goto label_3fa88c;
        case 0x3fa890u: goto label_3fa890;
        case 0x3fa894u: goto label_3fa894;
        case 0x3fa898u: goto label_3fa898;
        case 0x3fa89cu: goto label_3fa89c;
        case 0x3fa8a0u: goto label_3fa8a0;
        case 0x3fa8a4u: goto label_3fa8a4;
        case 0x3fa8a8u: goto label_3fa8a8;
        case 0x3fa8acu: goto label_3fa8ac;
        case 0x3fa8b0u: goto label_3fa8b0;
        case 0x3fa8b4u: goto label_3fa8b4;
        case 0x3fa8b8u: goto label_3fa8b8;
        case 0x3fa8bcu: goto label_3fa8bc;
        case 0x3fa8c0u: goto label_3fa8c0;
        case 0x3fa8c4u: goto label_3fa8c4;
        case 0x3fa8c8u: goto label_3fa8c8;
        case 0x3fa8ccu: goto label_3fa8cc;
        case 0x3fa8d0u: goto label_3fa8d0;
        case 0x3fa8d4u: goto label_3fa8d4;
        case 0x3fa8d8u: goto label_3fa8d8;
        case 0x3fa8dcu: goto label_3fa8dc;
        case 0x3fa8e0u: goto label_3fa8e0;
        case 0x3fa8e4u: goto label_3fa8e4;
        case 0x3fa8e8u: goto label_3fa8e8;
        case 0x3fa8ecu: goto label_3fa8ec;
        case 0x3fa8f0u: goto label_3fa8f0;
        case 0x3fa8f4u: goto label_3fa8f4;
        case 0x3fa8f8u: goto label_3fa8f8;
        case 0x3fa8fcu: goto label_3fa8fc;
        case 0x3fa900u: goto label_3fa900;
        case 0x3fa904u: goto label_3fa904;
        case 0x3fa908u: goto label_3fa908;
        case 0x3fa90cu: goto label_3fa90c;
        case 0x3fa910u: goto label_3fa910;
        case 0x3fa914u: goto label_3fa914;
        case 0x3fa918u: goto label_3fa918;
        case 0x3fa91cu: goto label_3fa91c;
        case 0x3fa920u: goto label_3fa920;
        case 0x3fa924u: goto label_3fa924;
        case 0x3fa928u: goto label_3fa928;
        case 0x3fa92cu: goto label_3fa92c;
        case 0x3fa930u: goto label_3fa930;
        case 0x3fa934u: goto label_3fa934;
        case 0x3fa938u: goto label_3fa938;
        case 0x3fa93cu: goto label_3fa93c;
        case 0x3fa940u: goto label_3fa940;
        case 0x3fa944u: goto label_3fa944;
        case 0x3fa948u: goto label_3fa948;
        case 0x3fa94cu: goto label_3fa94c;
        case 0x3fa950u: goto label_3fa950;
        case 0x3fa954u: goto label_3fa954;
        case 0x3fa958u: goto label_3fa958;
        case 0x3fa95cu: goto label_3fa95c;
        case 0x3fa960u: goto label_3fa960;
        case 0x3fa964u: goto label_3fa964;
        case 0x3fa968u: goto label_3fa968;
        case 0x3fa96cu: goto label_3fa96c;
        case 0x3fa970u: goto label_3fa970;
        case 0x3fa974u: goto label_3fa974;
        case 0x3fa978u: goto label_3fa978;
        case 0x3fa97cu: goto label_3fa97c;
        case 0x3fa980u: goto label_3fa980;
        case 0x3fa984u: goto label_3fa984;
        case 0x3fa988u: goto label_3fa988;
        case 0x3fa98cu: goto label_3fa98c;
        case 0x3fa990u: goto label_3fa990;
        case 0x3fa994u: goto label_3fa994;
        case 0x3fa998u: goto label_3fa998;
        case 0x3fa99cu: goto label_3fa99c;
        case 0x3fa9a0u: goto label_3fa9a0;
        case 0x3fa9a4u: goto label_3fa9a4;
        case 0x3fa9a8u: goto label_3fa9a8;
        case 0x3fa9acu: goto label_3fa9ac;
        case 0x3fa9b0u: goto label_3fa9b0;
        case 0x3fa9b4u: goto label_3fa9b4;
        case 0x3fa9b8u: goto label_3fa9b8;
        case 0x3fa9bcu: goto label_3fa9bc;
        case 0x3fa9c0u: goto label_3fa9c0;
        case 0x3fa9c4u: goto label_3fa9c4;
        case 0x3fa9c8u: goto label_3fa9c8;
        case 0x3fa9ccu: goto label_3fa9cc;
        case 0x3fa9d0u: goto label_3fa9d0;
        case 0x3fa9d4u: goto label_3fa9d4;
        case 0x3fa9d8u: goto label_3fa9d8;
        case 0x3fa9dcu: goto label_3fa9dc;
        case 0x3fa9e0u: goto label_3fa9e0;
        case 0x3fa9e4u: goto label_3fa9e4;
        case 0x3fa9e8u: goto label_3fa9e8;
        case 0x3fa9ecu: goto label_3fa9ec;
        case 0x3fa9f0u: goto label_3fa9f0;
        case 0x3fa9f4u: goto label_3fa9f4;
        case 0x3fa9f8u: goto label_3fa9f8;
        case 0x3fa9fcu: goto label_3fa9fc;
        case 0x3faa00u: goto label_3faa00;
        case 0x3faa04u: goto label_3faa04;
        case 0x3faa08u: goto label_3faa08;
        case 0x3faa0cu: goto label_3faa0c;
        case 0x3faa10u: goto label_3faa10;
        case 0x3faa14u: goto label_3faa14;
        case 0x3faa18u: goto label_3faa18;
        case 0x3faa1cu: goto label_3faa1c;
        case 0x3faa20u: goto label_3faa20;
        case 0x3faa24u: goto label_3faa24;
        case 0x3faa28u: goto label_3faa28;
        case 0x3faa2cu: goto label_3faa2c;
        case 0x3faa30u: goto label_3faa30;
        case 0x3faa34u: goto label_3faa34;
        case 0x3faa38u: goto label_3faa38;
        case 0x3faa3cu: goto label_3faa3c;
        case 0x3faa40u: goto label_3faa40;
        case 0x3faa44u: goto label_3faa44;
        case 0x3faa48u: goto label_3faa48;
        case 0x3faa4cu: goto label_3faa4c;
        case 0x3faa50u: goto label_3faa50;
        case 0x3faa54u: goto label_3faa54;
        case 0x3faa58u: goto label_3faa58;
        case 0x3faa5cu: goto label_3faa5c;
        case 0x3faa60u: goto label_3faa60;
        case 0x3faa64u: goto label_3faa64;
        case 0x3faa68u: goto label_3faa68;
        case 0x3faa6cu: goto label_3faa6c;
        case 0x3faa70u: goto label_3faa70;
        case 0x3faa74u: goto label_3faa74;
        case 0x3faa78u: goto label_3faa78;
        case 0x3faa7cu: goto label_3faa7c;
        case 0x3faa80u: goto label_3faa80;
        case 0x3faa84u: goto label_3faa84;
        case 0x3faa88u: goto label_3faa88;
        case 0x3faa8cu: goto label_3faa8c;
        case 0x3faa90u: goto label_3faa90;
        case 0x3faa94u: goto label_3faa94;
        case 0x3faa98u: goto label_3faa98;
        case 0x3faa9cu: goto label_3faa9c;
        case 0x3faaa0u: goto label_3faaa0;
        case 0x3faaa4u: goto label_3faaa4;
        case 0x3faaa8u: goto label_3faaa8;
        case 0x3faaacu: goto label_3faaac;
        case 0x3faab0u: goto label_3faab0;
        case 0x3faab4u: goto label_3faab4;
        case 0x3faab8u: goto label_3faab8;
        case 0x3faabcu: goto label_3faabc;
        case 0x3faac0u: goto label_3faac0;
        case 0x3faac4u: goto label_3faac4;
        case 0x3faac8u: goto label_3faac8;
        case 0x3faaccu: goto label_3faacc;
        case 0x3faad0u: goto label_3faad0;
        case 0x3faad4u: goto label_3faad4;
        case 0x3faad8u: goto label_3faad8;
        case 0x3faadcu: goto label_3faadc;
        case 0x3faae0u: goto label_3faae0;
        case 0x3faae4u: goto label_3faae4;
        case 0x3faae8u: goto label_3faae8;
        case 0x3faaecu: goto label_3faaec;
        case 0x3faaf0u: goto label_3faaf0;
        case 0x3faaf4u: goto label_3faaf4;
        case 0x3faaf8u: goto label_3faaf8;
        case 0x3faafcu: goto label_3faafc;
        case 0x3fab00u: goto label_3fab00;
        case 0x3fab04u: goto label_3fab04;
        case 0x3fab08u: goto label_3fab08;
        case 0x3fab0cu: goto label_3fab0c;
        case 0x3fab10u: goto label_3fab10;
        case 0x3fab14u: goto label_3fab14;
        case 0x3fab18u: goto label_3fab18;
        case 0x3fab1cu: goto label_3fab1c;
        case 0x3fab20u: goto label_3fab20;
        case 0x3fab24u: goto label_3fab24;
        case 0x3fab28u: goto label_3fab28;
        case 0x3fab2cu: goto label_3fab2c;
        case 0x3fab30u: goto label_3fab30;
        case 0x3fab34u: goto label_3fab34;
        case 0x3fab38u: goto label_3fab38;
        case 0x3fab3cu: goto label_3fab3c;
        case 0x3fab40u: goto label_3fab40;
        case 0x3fab44u: goto label_3fab44;
        case 0x3fab48u: goto label_3fab48;
        case 0x3fab4cu: goto label_3fab4c;
        case 0x3fab50u: goto label_3fab50;
        case 0x3fab54u: goto label_3fab54;
        case 0x3fab58u: goto label_3fab58;
        case 0x3fab5cu: goto label_3fab5c;
        case 0x3fab60u: goto label_3fab60;
        case 0x3fab64u: goto label_3fab64;
        case 0x3fab68u: goto label_3fab68;
        case 0x3fab6cu: goto label_3fab6c;
        case 0x3fab70u: goto label_3fab70;
        case 0x3fab74u: goto label_3fab74;
        case 0x3fab78u: goto label_3fab78;
        case 0x3fab7cu: goto label_3fab7c;
        case 0x3fab80u: goto label_3fab80;
        case 0x3fab84u: goto label_3fab84;
        case 0x3fab88u: goto label_3fab88;
        case 0x3fab8cu: goto label_3fab8c;
        case 0x3fab90u: goto label_3fab90;
        case 0x3fab94u: goto label_3fab94;
        case 0x3fab98u: goto label_3fab98;
        case 0x3fab9cu: goto label_3fab9c;
        case 0x3faba0u: goto label_3faba0;
        case 0x3faba4u: goto label_3faba4;
        case 0x3faba8u: goto label_3faba8;
        case 0x3fabacu: goto label_3fabac;
        case 0x3fabb0u: goto label_3fabb0;
        case 0x3fabb4u: goto label_3fabb4;
        case 0x3fabb8u: goto label_3fabb8;
        case 0x3fabbcu: goto label_3fabbc;
        case 0x3fabc0u: goto label_3fabc0;
        case 0x3fabc4u: goto label_3fabc4;
        case 0x3fabc8u: goto label_3fabc8;
        case 0x3fabccu: goto label_3fabcc;
        case 0x3fabd0u: goto label_3fabd0;
        case 0x3fabd4u: goto label_3fabd4;
        case 0x3fabd8u: goto label_3fabd8;
        case 0x3fabdcu: goto label_3fabdc;
        case 0x3fabe0u: goto label_3fabe0;
        case 0x3fabe4u: goto label_3fabe4;
        case 0x3fabe8u: goto label_3fabe8;
        case 0x3fabecu: goto label_3fabec;
        case 0x3fabf0u: goto label_3fabf0;
        case 0x3fabf4u: goto label_3fabf4;
        case 0x3fabf8u: goto label_3fabf8;
        case 0x3fabfcu: goto label_3fabfc;
        case 0x3fac00u: goto label_3fac00;
        case 0x3fac04u: goto label_3fac04;
        case 0x3fac08u: goto label_3fac08;
        case 0x3fac0cu: goto label_3fac0c;
        case 0x3fac10u: goto label_3fac10;
        case 0x3fac14u: goto label_3fac14;
        case 0x3fac18u: goto label_3fac18;
        case 0x3fac1cu: goto label_3fac1c;
        case 0x3fac20u: goto label_3fac20;
        case 0x3fac24u: goto label_3fac24;
        case 0x3fac28u: goto label_3fac28;
        case 0x3fac2cu: goto label_3fac2c;
        case 0x3fac30u: goto label_3fac30;
        case 0x3fac34u: goto label_3fac34;
        case 0x3fac38u: goto label_3fac38;
        case 0x3fac3cu: goto label_3fac3c;
        case 0x3fac40u: goto label_3fac40;
        case 0x3fac44u: goto label_3fac44;
        case 0x3fac48u: goto label_3fac48;
        case 0x3fac4cu: goto label_3fac4c;
        case 0x3fac50u: goto label_3fac50;
        case 0x3fac54u: goto label_3fac54;
        case 0x3fac58u: goto label_3fac58;
        case 0x3fac5cu: goto label_3fac5c;
        case 0x3fac60u: goto label_3fac60;
        case 0x3fac64u: goto label_3fac64;
        case 0x3fac68u: goto label_3fac68;
        case 0x3fac6cu: goto label_3fac6c;
        case 0x3fac70u: goto label_3fac70;
        case 0x3fac74u: goto label_3fac74;
        case 0x3fac78u: goto label_3fac78;
        case 0x3fac7cu: goto label_3fac7c;
        case 0x3fac80u: goto label_3fac80;
        case 0x3fac84u: goto label_3fac84;
        case 0x3fac88u: goto label_3fac88;
        case 0x3fac8cu: goto label_3fac8c;
        case 0x3fac90u: goto label_3fac90;
        case 0x3fac94u: goto label_3fac94;
        case 0x3fac98u: goto label_3fac98;
        case 0x3fac9cu: goto label_3fac9c;
        case 0x3faca0u: goto label_3faca0;
        case 0x3faca4u: goto label_3faca4;
        case 0x3faca8u: goto label_3faca8;
        case 0x3facacu: goto label_3facac;
        case 0x3facb0u: goto label_3facb0;
        case 0x3facb4u: goto label_3facb4;
        case 0x3facb8u: goto label_3facb8;
        case 0x3facbcu: goto label_3facbc;
        case 0x3facc0u: goto label_3facc0;
        case 0x3facc4u: goto label_3facc4;
        case 0x3facc8u: goto label_3facc8;
        case 0x3facccu: goto label_3faccc;
        case 0x3facd0u: goto label_3facd0;
        case 0x3facd4u: goto label_3facd4;
        case 0x3facd8u: goto label_3facd8;
        case 0x3facdcu: goto label_3facdc;
        case 0x3face0u: goto label_3face0;
        case 0x3face4u: goto label_3face4;
        case 0x3face8u: goto label_3face8;
        case 0x3facecu: goto label_3facec;
        case 0x3facf0u: goto label_3facf0;
        case 0x3facf4u: goto label_3facf4;
        case 0x3facf8u: goto label_3facf8;
        case 0x3facfcu: goto label_3facfc;
        case 0x3fad00u: goto label_3fad00;
        case 0x3fad04u: goto label_3fad04;
        case 0x3fad08u: goto label_3fad08;
        case 0x3fad0cu: goto label_3fad0c;
        case 0x3fad10u: goto label_3fad10;
        case 0x3fad14u: goto label_3fad14;
        case 0x3fad18u: goto label_3fad18;
        case 0x3fad1cu: goto label_3fad1c;
        case 0x3fad20u: goto label_3fad20;
        case 0x3fad24u: goto label_3fad24;
        case 0x3fad28u: goto label_3fad28;
        case 0x3fad2cu: goto label_3fad2c;
        case 0x3fad30u: goto label_3fad30;
        case 0x3fad34u: goto label_3fad34;
        case 0x3fad38u: goto label_3fad38;
        case 0x3fad3cu: goto label_3fad3c;
        case 0x3fad40u: goto label_3fad40;
        case 0x3fad44u: goto label_3fad44;
        case 0x3fad48u: goto label_3fad48;
        case 0x3fad4cu: goto label_3fad4c;
        default: break;
    }

    ctx->pc = 0x3f98f0u;

label_3f98f0:
    // 0x3f98f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f98f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f98f4:
    // 0x3f98f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f98f8:
    // 0x3f98f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f98f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f98fc:
    // 0x3f98fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f98fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f9900:
    // 0x3f9900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f9900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f9904:
    // 0x3f9904: 0x2442a3b8  addiu       $v0, $v0, -0x5C48
    ctx->pc = 0x3f9904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943672));
label_3f9908:
    // 0x3f9908: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3f9908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3f990c:
    // 0x3f990c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f990cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9910:
    // 0x3f9910: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3f9910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_3f9914:
    // 0x3f9914: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3f9914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f9918:
    // 0x3f9918: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3f9918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_3f991c:
    // 0x3f991c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3f991cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_3f9920:
    // 0x3f9920: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3f9920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_3f9924:
    // 0x3f9924: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3f9924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_3f9928:
    // 0x3f9928: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3f9928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_3f992c:
    // 0x3f992c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3f992cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_3f9930:
    // 0x3f9930: 0xc0ab5a8  jal         func_2AD6A0
label_3f9934:
    if (ctx->pc == 0x3F9934u) {
        ctx->pc = 0x3F9934u;
            // 0x3f9934: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x3F9938u;
        goto label_3f9938;
    }
    ctx->pc = 0x3F9930u;
    SET_GPR_U32(ctx, 31, 0x3F9938u);
    ctx->pc = 0x3F9934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9930u;
            // 0x3f9934: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD6A0u;
    if (runtime->hasFunction(0x2AD6A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9938u; }
        if (ctx->pc != 0x3F9938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD6A0_0x2ad6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9938u; }
        if (ctx->pc != 0x3F9938u) { return; }
    }
    ctx->pc = 0x3F9938u;
label_3f9938:
    // 0x3f9938: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f9938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f993c:
    // 0x3f993c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3f993cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_3f9940:
    // 0x3f9940: 0xc0ab5a8  jal         func_2AD6A0
label_3f9944:
    if (ctx->pc == 0x3F9944u) {
        ctx->pc = 0x3F9944u;
            // 0x3f9944: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F9948u;
        goto label_3f9948;
    }
    ctx->pc = 0x3F9940u;
    SET_GPR_U32(ctx, 31, 0x3F9948u);
    ctx->pc = 0x3F9944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9940u;
            // 0x3f9944: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD6A0u;
    if (runtime->hasFunction(0x2AD6A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9948u; }
        if (ctx->pc != 0x3F9948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD6A0_0x2ad6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9948u; }
        if (ctx->pc != 0x3F9948u) { return; }
    }
    ctx->pc = 0x3F9948u;
label_3f9948:
    // 0x3f9948: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f9948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f994c:
    // 0x3f994c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f994cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f9950:
    // 0x3f9950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f9950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f9954:
    // 0x3f9954: 0x3e00008  jr          $ra
label_3f9958:
    if (ctx->pc == 0x3F9958u) {
        ctx->pc = 0x3F9958u;
            // 0x3f9958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F995Cu;
        goto label_3f995c;
    }
    ctx->pc = 0x3F9954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9954u;
            // 0x3f9958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F995Cu;
label_3f995c:
    // 0x3f995c: 0x0  nop
    ctx->pc = 0x3f995cu;
    // NOP
label_3f9960:
    // 0x3f9960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f9960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f9964:
    // 0x3f9964: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3f9964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3f9968:
    // 0x3f9968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f9968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f996c:
    // 0x3f996c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f9970:
    // 0x3f9970: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x3f9970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9974:
    // 0x3f9974: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f9974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9978:
    // 0x3f9978: 0x8cc50d74  lw          $a1, 0xD74($a2)
    ctx->pc = 0x3f9978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3444)));
label_3f997c:
    // 0x3f997c: 0x90a402c5  lbu         $a0, 0x2C5($a1)
    ctx->pc = 0x3f997cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
label_3f9980:
    // 0x3f9980: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3f9980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3f9984:
    // 0x3f9984: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3f9984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3f9988:
    // 0x3f9988: 0x24850280  addiu       $a1, $a0, 0x280
    ctx->pc = 0x3f9988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
label_3f998c:
    // 0x3f998c: 0x90840281  lbu         $a0, 0x281($a0)
    ctx->pc = 0x3f998cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 641)));
label_3f9990:
    // 0x3f9990: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_3f9994:
    if (ctx->pc == 0x3F9994u) {
        ctx->pc = 0x3F9994u;
            // 0x3f9994: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3F9998u;
        goto label_3f9998;
    }
    ctx->pc = 0x3F9990u;
    {
        const bool branch_taken_0x3f9990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f9990) {
            ctx->pc = 0x3F9994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9990u;
            // 0x3f9994: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F99ACu;
            goto label_3f99ac;
        }
    }
    ctx->pc = 0x3F9998u;
label_3f9998:
    // 0x3f9998: 0x24c40580  addiu       $a0, $a2, 0x580
    ctx->pc = 0x3f9998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1408));
label_3f999c:
    // 0x3f999c: 0xc0ab808  jal         func_2AE020
label_3f99a0:
    if (ctx->pc == 0x3F99A0u) {
        ctx->pc = 0x3F99A0u;
            // 0x3f99a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3F99A4u;
        goto label_3f99a4;
    }
    ctx->pc = 0x3F999Cu;
    SET_GPR_U32(ctx, 31, 0x3F99A4u);
    ctx->pc = 0x3F99A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F999Cu;
            // 0x3f99a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F99A4u; }
        if (ctx->pc != 0x3F99A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F99A4u; }
        if (ctx->pc != 0x3F99A4u) { return; }
    }
    ctx->pc = 0x3F99A4u;
label_3f99a4:
    // 0x3f99a4: 0x10000025  b           . + 4 + (0x25 << 2)
label_3f99a8:
    if (ctx->pc == 0x3F99A8u) {
        ctx->pc = 0x3F99A8u;
            // 0x3f99a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F99ACu;
        goto label_3f99ac;
    }
    ctx->pc = 0x3F99A4u;
    {
        const bool branch_taken_0x3f99a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F99A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F99A4u;
            // 0x3f99a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f99a4) {
            ctx->pc = 0x3F9A3Cu;
            goto label_3f9a3c;
        }
    }
    ctx->pc = 0x3F99ACu;
label_3f99ac:
    // 0x3f99ac: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_3f99b0:
    if (ctx->pc == 0x3F99B0u) {
        ctx->pc = 0x3F99B0u;
            // 0x3f99b0: 0x90a30004  lbu         $v1, 0x4($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->pc = 0x3F99B4u;
        goto label_3f99b4;
    }
    ctx->pc = 0x3F99ACu;
    {
        const bool branch_taken_0x3f99ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f99ac) {
            ctx->pc = 0x3F99B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F99ACu;
            // 0x3f99b0: 0x90a30004  lbu         $v1, 0x4($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F99C4u;
            goto label_3f99c4;
        }
    }
    ctx->pc = 0x3F99B4u;
label_3f99b4:
    // 0x3f99b4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3f99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3f99b8:
    // 0x3f99b8: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_3f99bc:
    if (ctx->pc == 0x3F99BCu) {
        ctx->pc = 0x3F99C0u;
        goto label_3f99c0;
    }
    ctx->pc = 0x3F99B8u;
    {
        const bool branch_taken_0x3f99b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f99b8) {
            ctx->pc = 0x3F9A38u;
            goto label_3f9a38;
        }
    }
    ctx->pc = 0x3F99C0u;
label_3f99c0:
    // 0x3f99c0: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x3f99c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_3f99c4:
    // 0x3f99c4: 0xa3a3002f  sb          $v1, 0x2F($sp)
    ctx->pc = 0x3f99c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 47), (uint8_t)GPR_U32(ctx, 3));
label_3f99c8:
    // 0x3f99c8: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x3f99c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f99cc:
    // 0x3f99cc: 0x84e40644  lh          $a0, 0x644($a3)
    ctx->pc = 0x3f99ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 1604)));
label_3f99d0:
    // 0x3f99d0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_3f99d4:
    if (ctx->pc == 0x3F99D4u) {
        ctx->pc = 0x3F99D4u;
            // 0x3f99d4: 0x24e50580  addiu       $a1, $a3, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1408));
        ctx->pc = 0x3F99D8u;
        goto label_3f99d8;
    }
    ctx->pc = 0x3F99D0u;
    {
        const bool branch_taken_0x3f99d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3F99D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F99D0u;
            // 0x3f99d4: 0x24e50580  addiu       $a1, $a3, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f99d0) {
            ctx->pc = 0x3F99E8u;
            goto label_3f99e8;
        }
    }
    ctx->pc = 0x3F99D8u;
label_3f99d8:
    // 0x3f99d8: 0x8ca4011c  lw          $a0, 0x11C($a1)
    ctx->pc = 0x3f99d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 284)));
label_3f99dc:
    // 0x3f99dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f99e0:
    // 0x3f99e0: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_3f99e4:
    if (ctx->pc == 0x3F99E4u) {
        ctx->pc = 0x3F99E8u;
        goto label_3f99e8;
    }
    ctx->pc = 0x3F99E0u;
    {
        const bool branch_taken_0x3f99e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f99e0) {
            ctx->pc = 0x3F9A38u;
            goto label_3f9a38;
        }
    }
    ctx->pc = 0x3F99E8u;
label_3f99e8:
    // 0x3f99e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f99ec:
    // 0x3f99ec: 0x24e602c0  addiu       $a2, $a3, 0x2C0
    ctx->pc = 0x3f99ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
label_3f99f0:
    // 0x3f99f0: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x3f99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3f99f4:
    // 0x3f99f4: 0x24a40070  addiu       $a0, $a1, 0x70
    ctx->pc = 0x3f99f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_3f99f8:
    // 0x3f99f8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3f99f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f99fc:
    // 0x3f99fc: 0x24e70820  addiu       $a3, $a3, 0x820
    ctx->pc = 0x3f99fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2080));
label_3f9a00:
    // 0x3f9a00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f9a00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f9a04:
    // 0x3f9a04: 0x27a9002f  addiu       $t1, $sp, 0x2F
    ctx->pc = 0x3f9a04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 47));
label_3f9a08:
    // 0x3f9a08: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x3f9a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3f9a0c:
    // 0x3f9a0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3f9a10:
    // 0x3f9a10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f9a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9a14:
    // 0x3f9a14: 0xc0b8704  jal         func_2E1C10
label_3f9a18:
    if (ctx->pc == 0x3F9A18u) {
        ctx->pc = 0x3F9A18u;
            // 0x3f9a18: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F9A1Cu;
        goto label_3f9a1c;
    }
    ctx->pc = 0x3F9A14u;
    SET_GPR_U32(ctx, 31, 0x3F9A1Cu);
    ctx->pc = 0x3F9A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9A14u;
            // 0x3f9a18: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9A1Cu; }
        if (ctx->pc != 0x3F9A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9A1Cu; }
        if (ctx->pc != 0x3F9A1Cu) { return; }
    }
    ctx->pc = 0x3F9A1Cu;
label_3f9a1c:
    // 0x3f9a1c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3f9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9a20:
    // 0x3f9a20: 0x24640580  addiu       $a0, $v1, 0x580
    ctx->pc = 0x3f9a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
label_3f9a24:
    // 0x3f9a24: 0x94630646  lhu         $v1, 0x646($v1)
    ctx->pc = 0x3f9a24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1606)));
label_3f9a28:
    // 0x3f9a28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3f9a2c:
    if (ctx->pc == 0x3F9A2Cu) {
        ctx->pc = 0x3F9A30u;
        goto label_3f9a30;
    }
    ctx->pc = 0x3F9A28u;
    {
        const bool branch_taken_0x3f9a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9a28) {
            ctx->pc = 0x3F9A38u;
            goto label_3f9a38;
        }
    }
    ctx->pc = 0x3F9A30u;
label_3f9a30:
    // 0x3f9a30: 0xc0ab808  jal         func_2AE020
label_3f9a34:
    if (ctx->pc == 0x3F9A34u) {
        ctx->pc = 0x3F9A34u;
            // 0x3f9a34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3F9A38u;
        goto label_3f9a38;
    }
    ctx->pc = 0x3F9A30u;
    SET_GPR_U32(ctx, 31, 0x3F9A38u);
    ctx->pc = 0x3F9A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9A30u;
            // 0x3f9a34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9A38u; }
        if (ctx->pc != 0x3F9A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9A38u; }
        if (ctx->pc != 0x3F9A38u) { return; }
    }
    ctx->pc = 0x3F9A38u;
label_3f9a38:
    // 0x3f9a38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f9a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f9a3c:
    // 0x3f9a3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f9a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f9a40:
    // 0x3f9a40: 0x3e00008  jr          $ra
label_3f9a44:
    if (ctx->pc == 0x3F9A44u) {
        ctx->pc = 0x3F9A44u;
            // 0x3f9a44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F9A48u;
        goto label_3f9a48;
    }
    ctx->pc = 0x3F9A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9A40u;
            // 0x3f9a44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F9A48u;
label_3f9a48:
    // 0x3f9a48: 0x0  nop
    ctx->pc = 0x3f9a48u;
    // NOP
label_3f9a4c:
    // 0x3f9a4c: 0x0  nop
    ctx->pc = 0x3f9a4cu;
    // NOP
label_3f9a50:
    // 0x3f9a50: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3f9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9a54:
    // 0x3f9a54: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3f9a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_3f9a58:
    // 0x3f9a58: 0xac650df0  sw          $a1, 0xDF0($v1)
    ctx->pc = 0x3f9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3568), GPR_U32(ctx, 5));
label_3f9a5c:
    // 0x3f9a5c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3f9a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9a60:
    // 0x3f9a60: 0xac600df4  sw          $zero, 0xDF4($v1)
    ctx->pc = 0x3f9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3572), GPR_U32(ctx, 0));
label_3f9a64:
    // 0x3f9a64: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x3f9a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9a68:
    // 0x3f9a68: 0x8c830d9c  lw          $v1, 0xD9C($a0)
    ctx->pc = 0x3f9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
label_3f9a6c:
    // 0x3f9a6c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3f9a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3f9a70:
    // 0x3f9a70: 0x3e00008  jr          $ra
label_3f9a74:
    if (ctx->pc == 0x3F9A74u) {
        ctx->pc = 0x3F9A74u;
            // 0x3f9a74: 0xac830d9c  sw          $v1, 0xD9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3484), GPR_U32(ctx, 3));
        ctx->pc = 0x3F9A78u;
        goto label_3f9a78;
    }
    ctx->pc = 0x3F9A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9A70u;
            // 0x3f9a74: 0xac830d9c  sw          $v1, 0xD9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F9A78u;
label_3f9a78:
    // 0x3f9a78: 0x0  nop
    ctx->pc = 0x3f9a78u;
    // NOP
label_3f9a7c:
    // 0x3f9a7c: 0x0  nop
    ctx->pc = 0x3f9a7cu;
    // NOP
label_3f9a80:
    // 0x3f9a80: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x3f9a80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9a84:
    // 0x3f9a84: 0x8d050d74  lw          $a1, 0xD74($t0)
    ctx->pc = 0x3f9a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3444)));
label_3f9a88:
    // 0x3f9a88: 0x90a302c5  lbu         $v1, 0x2C5($a1)
    ctx->pc = 0x3f9a88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
label_3f9a8c:
    // 0x3f9a8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3f9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3f9a90:
    // 0x3f9a90: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3f9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3f9a94:
    // 0x3f9a94: 0x24670280  addiu       $a3, $v1, 0x280
    ctx->pc = 0x3f9a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
label_3f9a98:
    // 0x3f9a98: 0x90630284  lbu         $v1, 0x284($v1)
    ctx->pc = 0x3f9a98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 644)));
label_3f9a9c:
    // 0x3f9a9c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3f9aa0:
    if (ctx->pc == 0x3F9AA0u) {
        ctx->pc = 0x3F9AA0u;
            // 0x3f9aa0: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3F9AA4u;
        goto label_3f9aa4;
    }
    ctx->pc = 0x3F9A9Cu;
    {
        const bool branch_taken_0x3f9a9c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3f9a9c) {
            ctx->pc = 0x3F9AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9A9Cu;
            // 0x3f9aa0: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9AB0u;
            goto label_3f9ab0;
        }
    }
    ctx->pc = 0x3F9AA4u;
label_3f9aa4:
    // 0x3f9aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f9aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f9aa8:
    // 0x3f9aa8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f9aac:
    if (ctx->pc == 0x3F9AACu) {
        ctx->pc = 0x3F9AACu;
            // 0x3f9aac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3F9AB0u;
        goto label_3f9ab0;
    }
    ctx->pc = 0x3F9AA8u;
    {
        const bool branch_taken_0x3f9aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9AA8u;
            // 0x3f9aac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9aa8) {
            ctx->pc = 0x3F9AC8u;
            goto label_3f9ac8;
        }
    }
    ctx->pc = 0x3F9AB0u;
label_3f9ab0:
    // 0x3f9ab0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3f9ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3f9ab4:
    // 0x3f9ab4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3f9ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3f9ab8:
    // 0x3f9ab8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3f9ab8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f9abc:
    // 0x3f9abc: 0x0  nop
    ctx->pc = 0x3f9abcu;
    // NOP
label_3f9ac0:
    // 0x3f9ac0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3f9ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3f9ac4:
    // 0x3f9ac4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3f9ac4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3f9ac8:
    // 0x3f9ac8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3f9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3f9acc:
    // 0x3f9acc: 0x3c06447a  lui         $a2, 0x447A
    ctx->pc = 0x3f9accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17530 << 16));
label_3f9ad0:
    // 0x3f9ad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f9ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f9ad4:
    // 0x3f9ad4: 0x8d050d9c  lw          $a1, 0xD9C($t0)
    ctx->pc = 0x3f9ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3484)));
label_3f9ad8:
    // 0x3f9ad8: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x3f9ad8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
label_3f9adc:
    // 0x3f9adc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3f9adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_3f9ae0:
    // 0x3f9ae0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3f9ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3f9ae4:
    // 0x3f9ae4: 0xad050d9c  sw          $a1, 0xD9C($t0)
    ctx->pc = 0x3f9ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 3484), GPR_U32(ctx, 5));
label_3f9ae8:
    // 0x3f9ae8: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x3f9ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_3f9aec:
    // 0x3f9aec: 0x3465f000  ori         $a1, $v1, 0xF000
    ctx->pc = 0x3f9aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_3f9af0:
    // 0x3f9af0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3f9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9af4:
    // 0x3f9af4: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3f9af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f9af8:
    // 0x3f9af8: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x3f9af8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f9afc:
    // 0x3f9afc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3f9afcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f9b00:
    // 0x3f9b00: 0x0  nop
    ctx->pc = 0x3f9b00u;
    // NOP
label_3f9b04:
    // 0x3f9b04: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f9b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3f9b08:
    // 0x3f9b08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3f9b08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3f9b0c:
    // 0x3f9b0c: 0x0  nop
    ctx->pc = 0x3f9b0cu;
    // NOP
label_3f9b10:
    // 0x3f9b10: 0xe4600df4  swc1        $f0, 0xDF4($v1)
    ctx->pc = 0x3f9b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3572), bits); }
label_3f9b14:
    // 0x3f9b14: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x3f9b14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_3f9b18:
    // 0x3f9b18: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_3f9b1c:
    if (ctx->pc == 0x3F9B1Cu) {
        ctx->pc = 0x3F9B1Cu;
            // 0x3f9b1c: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x3F9B20u;
        goto label_3f9b20;
    }
    ctx->pc = 0x3F9B18u;
    {
        const bool branch_taken_0x3f9b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9b18) {
            ctx->pc = 0x3F9B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9B18u;
            // 0x3f9b1c: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9B2Cu;
            goto label_3f9b2c;
        }
    }
    ctx->pc = 0x3F9B20u;
label_3f9b20:
    // 0x3f9b20: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3f9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9b24:
    // 0x3f9b24: 0x10000016  b           . + 4 + (0x16 << 2)
label_3f9b28:
    if (ctx->pc == 0x3F9B28u) {
        ctx->pc = 0x3F9B28u;
            // 0x3f9b28: 0xe4640df0  swc1        $f4, 0xDF0($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3568), bits); }
        ctx->pc = 0x3F9B2Cu;
        goto label_3f9b2c;
    }
    ctx->pc = 0x3F9B24u;
    {
        const bool branch_taken_0x3f9b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9B24u;
            // 0x3f9b28: 0xe4640df0  swc1        $f4, 0xDF0($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9b24) {
            ctx->pc = 0x3F9B80u;
            goto label_3f9b80;
        }
    }
    ctx->pc = 0x3F9B2Cu;
label_3f9b2c:
    // 0x3f9b2c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3f9b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f9b30:
    // 0x3f9b30: 0xc4a30c84  lwc1        $f3, 0xC84($a1)
    ctx->pc = 0x3f9b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f9b34:
    // 0x3f9b34: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x3f9b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f9b38:
    // 0x3f9b38: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_3f9b3c:
    if (ctx->pc == 0x3F9B3Cu) {
        ctx->pc = 0x3F9B3Cu;
            // 0x3f9b3c: 0x3c043f66  lui         $a0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
        ctx->pc = 0x3F9B40u;
        goto label_3f9b40;
    }
    ctx->pc = 0x3F9B38u;
    {
        const bool branch_taken_0x3f9b38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f9b38) {
            ctx->pc = 0x3F9B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9B38u;
            // 0x3f9b3c: 0x3c043f66  lui         $a0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9B60u;
            goto label_3f9b60;
        }
    }
    ctx->pc = 0x3F9B40u;
label_3f9b40:
    // 0x3f9b40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3f9b44:
    // 0x3f9b44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f9b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f9b48:
    // 0x3f9b48: 0x0  nop
    ctx->pc = 0x3f9b48u;
    // NOP
label_3f9b4c:
    // 0x3f9b4c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3f9b4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3f9b50:
    // 0x3f9b50: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3f9b50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3f9b54:
    // 0x3f9b54: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x3f9b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_3f9b58:
    // 0x3f9b58: 0x10000009  b           . + 4 + (0x9 << 2)
label_3f9b5c:
    if (ctx->pc == 0x3F9B5Cu) {
        ctx->pc = 0x3F9B5Cu;
            // 0x3f9b5c: 0xe4a00df0  swc1        $f0, 0xDF0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 3568), bits); }
        ctx->pc = 0x3F9B60u;
        goto label_3f9b60;
    }
    ctx->pc = 0x3F9B58u;
    {
        const bool branch_taken_0x3f9b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9B58u;
            // 0x3f9b5c: 0xe4a00df0  swc1        $f0, 0xDF0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 3568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9b58) {
            ctx->pc = 0x3F9B80u;
            goto label_3f9b80;
        }
    }
    ctx->pc = 0x3F9B60u;
label_3f9b60:
    // 0x3f9b60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3f9b64:
    // 0x3f9b64: 0x34846666  ori         $a0, $a0, 0x6666
    ctx->pc = 0x3f9b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
label_3f9b68:
    // 0x3f9b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f9b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f9b6c:
    // 0x3f9b6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3f9b6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f9b70:
    // 0x3f9b70: 0x0  nop
    ctx->pc = 0x3f9b70u;
    // NOP
label_3f9b74:
    // 0x3f9b74: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3f9b74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3f9b78:
    // 0x3f9b78: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x3f9b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_3f9b7c:
    // 0x3f9b7c: 0xe4a00df0  swc1        $f0, 0xDF0($a1)
    ctx->pc = 0x3f9b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 3568), bits); }
label_3f9b80:
    // 0x3f9b80: 0x3e00008  jr          $ra
label_3f9b84:
    if (ctx->pc == 0x3F9B84u) {
        ctx->pc = 0x3F9B88u;
        goto label_3f9b88;
    }
    ctx->pc = 0x3F9B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F9B88u;
label_3f9b88:
    // 0x3f9b88: 0x0  nop
    ctx->pc = 0x3f9b88u;
    // NOP
label_3f9b8c:
    // 0x3f9b8c: 0x0  nop
    ctx->pc = 0x3f9b8cu;
    // NOP
label_3f9b90:
    // 0x3f9b90: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3f9b94:
    // 0x3f9b94: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x3f9b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3f9b98:
    // 0x3f9b98: 0x8ca50968  lw          $a1, 0x968($a1)
    ctx->pc = 0x3f9b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2408)));
label_3f9b9c:
    // 0x3f9b9c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3f9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3f9ba0:
    // 0x3f9ba0: 0x14a3000c  bne         $a1, $v1, . + 4 + (0xC << 2)
label_3f9ba4:
    if (ctx->pc == 0x3F9BA4u) {
        ctx->pc = 0x3F9BA8u;
        goto label_3f9ba8;
    }
    ctx->pc = 0x3F9BA0u;
    {
        const bool branch_taken_0x3f9ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f9ba0) {
            ctx->pc = 0x3F9BD4u;
            goto label_3f9bd4;
        }
    }
    ctx->pc = 0x3F9BA8u;
label_3f9ba8:
    // 0x3f9ba8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x3f9ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9bac:
    // 0x3f9bac: 0x8ca40d74  lw          $a0, 0xD74($a1)
    ctx->pc = 0x3f9bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3444)));
label_3f9bb0:
    // 0x3f9bb0: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x3f9bb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_3f9bb4:
    // 0x3f9bb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3f9bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3f9bb8:
    // 0x3f9bb8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3f9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3f9bbc:
    // 0x3f9bbc: 0x90630285  lbu         $v1, 0x285($v1)
    ctx->pc = 0x3f9bbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 645)));
label_3f9bc0:
    // 0x3f9bc0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3f9bc4:
    if (ctx->pc == 0x3F9BC4u) {
        ctx->pc = 0x3F9BC8u;
        goto label_3f9bc8;
    }
    ctx->pc = 0x3F9BC0u;
    {
        const bool branch_taken_0x3f9bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9bc0) {
            ctx->pc = 0x3F9BD4u;
            goto label_3f9bd4;
        }
    }
    ctx->pc = 0x3F9BC8u;
label_3f9bc8:
    // 0x3f9bc8: 0x8ca30d9c  lw          $v1, 0xD9C($a1)
    ctx->pc = 0x3f9bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3484)));
label_3f9bcc:
    // 0x3f9bcc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3f9bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3f9bd0:
    // 0x3f9bd0: 0xaca30d9c  sw          $v1, 0xD9C($a1)
    ctx->pc = 0x3f9bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3484), GPR_U32(ctx, 3));
label_3f9bd4:
    // 0x3f9bd4: 0x3e00008  jr          $ra
label_3f9bd8:
    if (ctx->pc == 0x3F9BD8u) {
        ctx->pc = 0x3F9BDCu;
        goto label_3f9bdc;
    }
    ctx->pc = 0x3F9BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F9BDCu;
label_3f9bdc:
    // 0x3f9bdc: 0x0  nop
    ctx->pc = 0x3f9bdcu;
    // NOP
label_3f9be0:
    // 0x3f9be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f9be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f9be4:
    // 0x3f9be4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f9be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f9be8:
    // 0x3f9be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f9be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f9bec:
    // 0x3f9bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f9becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f9bf0:
    // 0x3f9bf0: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x3f9bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9bf4:
    // 0x3f9bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f9bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9bf8:
    // 0x3f9bf8: 0x8cc40d70  lw          $a0, 0xD70($a2)
    ctx->pc = 0x3f9bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3440)));
label_3f9bfc:
    // 0x3f9bfc: 0x8c8300cc  lw          $v1, 0xCC($a0)
    ctx->pc = 0x3f9bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_3f9c00:
    // 0x3f9c00: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3f9c00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f9c04:
    // 0x3f9c04: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
label_3f9c08:
    if (ctx->pc == 0x3F9C08u) {
        ctx->pc = 0x3F9C0Cu;
        goto label_3f9c0c;
    }
    ctx->pc = 0x3F9C04u;
    {
        const bool branch_taken_0x3f9c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3f9c04) {
            ctx->pc = 0x3F9C4Cu;
            goto label_3f9c4c;
        }
    }
    ctx->pc = 0x3F9C0Cu;
label_3f9c0c:
    // 0x3f9c0c: 0x8cc20d74  lw          $v0, 0xD74($a2)
    ctx->pc = 0x3f9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3444)));
label_3f9c10:
    // 0x3f9c10: 0x904202c4  lbu         $v0, 0x2C4($v0)
    ctx->pc = 0x3f9c10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 708)));
label_3f9c14:
    // 0x3f9c14: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3f9c18:
    if (ctx->pc == 0x3F9C18u) {
        ctx->pc = 0x3F9C18u;
            // 0x3f9c18: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x3F9C1Cu;
        goto label_3f9c1c;
    }
    ctx->pc = 0x3F9C14u;
    {
        const bool branch_taken_0x3f9c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9c14) {
            ctx->pc = 0x3F9C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9C14u;
            // 0x3f9c18: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9C40u;
            goto label_3f9c40;
        }
    }
    ctx->pc = 0x3F9C1Cu;
label_3f9c1c:
    // 0x3f9c1c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3f9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3f9c20:
    // 0x3f9c20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f9c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9c24:
    // 0x3f9c24: 0xc0bdf94  jal         func_2F7E50
label_3f9c28:
    if (ctx->pc == 0x3F9C28u) {
        ctx->pc = 0x3F9C28u;
            // 0x3f9c28: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3F9C2Cu;
        goto label_3f9c2c;
    }
    ctx->pc = 0x3F9C24u;
    SET_GPR_U32(ctx, 31, 0x3F9C2Cu);
    ctx->pc = 0x3F9C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9C24u;
            // 0x3f9c28: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9C2Cu; }
        if (ctx->pc != 0x3F9C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9C2Cu; }
        if (ctx->pc != 0x3F9C2Cu) { return; }
    }
    ctx->pc = 0x3F9C2Cu;
label_3f9c2c:
    // 0x3f9c2c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f9c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9c30:
    // 0x3f9c30: 0xc0b6764  jal         func_2D9D90
label_3f9c34:
    if (ctx->pc == 0x3F9C34u) {
        ctx->pc = 0x3F9C34u;
            // 0x3f9c34: 0x8c440d74  lw          $a0, 0xD74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3444)));
        ctx->pc = 0x3F9C38u;
        goto label_3f9c38;
    }
    ctx->pc = 0x3F9C30u;
    SET_GPR_U32(ctx, 31, 0x3F9C38u);
    ctx->pc = 0x3F9C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9C30u;
            // 0x3f9c34: 0x8c440d74  lw          $a0, 0xD74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9C38u; }
        if (ctx->pc != 0x3F9C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9C38u; }
        if (ctx->pc != 0x3F9C38u) { return; }
    }
    ctx->pc = 0x3F9C38u;
label_3f9c38:
    // 0x3f9c38: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f9c3c:
    if (ctx->pc == 0x3F9C3Cu) {
        ctx->pc = 0x3F9C40u;
        goto label_3f9c40;
    }
    ctx->pc = 0x3F9C38u;
    {
        const bool branch_taken_0x3f9c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9c38) {
            ctx->pc = 0x3F9C4Cu;
            goto label_3f9c4c;
        }
    }
    ctx->pc = 0x3F9C40u;
label_3f9c40:
    // 0x3f9c40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f9c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9c44:
    // 0x3f9c44: 0xc0bdf9c  jal         func_2F7E70
label_3f9c48:
    if (ctx->pc == 0x3F9C48u) {
        ctx->pc = 0x3F9C48u;
            // 0x3f9c48: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3F9C4Cu;
        goto label_3f9c4c;
    }
    ctx->pc = 0x3F9C44u;
    SET_GPR_U32(ctx, 31, 0x3F9C4Cu);
    ctx->pc = 0x3F9C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9C44u;
            // 0x3f9c48: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9C4Cu; }
        if (ctx->pc != 0x3F9C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9C4Cu; }
        if (ctx->pc != 0x3F9C4Cu) { return; }
    }
    ctx->pc = 0x3F9C4Cu;
label_3f9c4c:
    // 0x3f9c4c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3f9c50:
    // 0x3f9c50: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3f9c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3f9c54:
    // 0x3f9c54: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3f9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3f9c58:
    // 0x3f9c58: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x3f9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_3f9c5c:
    // 0x3f9c5c: 0x5464000e  bnel        $v1, $a0, . + 4 + (0xE << 2)
label_3f9c60:
    if (ctx->pc == 0x3F9C60u) {
        ctx->pc = 0x3F9C60u;
            // 0x3f9c60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F9C64u;
        goto label_3f9c64;
    }
    ctx->pc = 0x3F9C5Cu;
    {
        const bool branch_taken_0x3f9c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3f9c5c) {
            ctx->pc = 0x3F9C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9C5Cu;
            // 0x3f9c60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9C98u;
            goto label_3f9c98;
        }
    }
    ctx->pc = 0x3F9C64u;
label_3f9c64:
    // 0x3f9c64: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3f9c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9c68:
    // 0x3f9c68: 0x8ca40d74  lw          $a0, 0xD74($a1)
    ctx->pc = 0x3f9c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3444)));
label_3f9c6c:
    // 0x3f9c6c: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x3f9c6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_3f9c70:
    // 0x3f9c70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3f9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3f9c74:
    // 0x3f9c74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3f9c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3f9c78:
    // 0x3f9c78: 0x90630285  lbu         $v1, 0x285($v1)
    ctx->pc = 0x3f9c78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 645)));
label_3f9c7c:
    // 0x3f9c7c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_3f9c80:
    if (ctx->pc == 0x3F9C80u) {
        ctx->pc = 0x3F9C84u;
        goto label_3f9c84;
    }
    ctx->pc = 0x3F9C7Cu;
    {
        const bool branch_taken_0x3f9c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9c7c) {
            ctx->pc = 0x3F9C94u;
            goto label_3f9c94;
        }
    }
    ctx->pc = 0x3F9C84u;
label_3f9c84:
    // 0x3f9c84: 0x8ca40d9c  lw          $a0, 0xD9C($a1)
    ctx->pc = 0x3f9c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3484)));
label_3f9c88:
    // 0x3f9c88: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3f9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_3f9c8c:
    // 0x3f9c8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f9c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3f9c90:
    // 0x3f9c90: 0xaca30d9c  sw          $v1, 0xD9C($a1)
    ctx->pc = 0x3f9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3484), GPR_U32(ctx, 3));
label_3f9c94:
    // 0x3f9c94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f9c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f9c98:
    // 0x3f9c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f9c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f9c9c:
    // 0x3f9c9c: 0x3e00008  jr          $ra
label_3f9ca0:
    if (ctx->pc == 0x3F9CA0u) {
        ctx->pc = 0x3F9CA0u;
            // 0x3f9ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F9CA4u;
        goto label_3f9ca4;
    }
    ctx->pc = 0x3F9C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9C9Cu;
            // 0x3f9ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F9CA4u;
label_3f9ca4:
    // 0x3f9ca4: 0x0  nop
    ctx->pc = 0x3f9ca4u;
    // NOP
label_3f9ca8:
    // 0x3f9ca8: 0x0  nop
    ctx->pc = 0x3f9ca8u;
    // NOP
label_3f9cac:
    // 0x3f9cac: 0x0  nop
    ctx->pc = 0x3f9cacu;
    // NOP
label_3f9cb0:
    // 0x3f9cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f9cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f9cb4:
    // 0x3f9cb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f9cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f9cb8:
    // 0x3f9cb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f9cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f9cbc:
    // 0x3f9cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f9cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f9cc0:
    // 0x3f9cc0: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x3f9cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9cc4:
    // 0x3f9cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f9cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9cc8:
    // 0x3f9cc8: 0x8cc40d70  lw          $a0, 0xD70($a2)
    ctx->pc = 0x3f9cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3440)));
label_3f9ccc:
    // 0x3f9ccc: 0x8c8300cc  lw          $v1, 0xCC($a0)
    ctx->pc = 0x3f9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_3f9cd0:
    // 0x3f9cd0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3f9cd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f9cd4:
    // 0x3f9cd4: 0x50650012  beql        $v1, $a1, . + 4 + (0x12 << 2)
label_3f9cd8:
    if (ctx->pc == 0x3F9CD8u) {
        ctx->pc = 0x3F9CD8u;
            // 0x3f9cd8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F9CDCu;
        goto label_3f9cdc;
    }
    ctx->pc = 0x3F9CD4u;
    {
        const bool branch_taken_0x3f9cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3f9cd4) {
            ctx->pc = 0x3F9CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9CD4u;
            // 0x3f9cd8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9D20u;
            goto label_3f9d20;
        }
    }
    ctx->pc = 0x3F9CDCu;
label_3f9cdc:
    // 0x3f9cdc: 0x8cc20d74  lw          $v0, 0xD74($a2)
    ctx->pc = 0x3f9cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3444)));
label_3f9ce0:
    // 0x3f9ce0: 0x904202c4  lbu         $v0, 0x2C4($v0)
    ctx->pc = 0x3f9ce0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 708)));
label_3f9ce4:
    // 0x3f9ce4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3f9ce8:
    if (ctx->pc == 0x3F9CE8u) {
        ctx->pc = 0x3F9CE8u;
            // 0x3f9ce8: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x3F9CECu;
        goto label_3f9cec;
    }
    ctx->pc = 0x3F9CE4u;
    {
        const bool branch_taken_0x3f9ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9ce4) {
            ctx->pc = 0x3F9CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9CE4u;
            // 0x3f9ce8: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9D10u;
            goto label_3f9d10;
        }
    }
    ctx->pc = 0x3F9CECu;
label_3f9cec:
    // 0x3f9cec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3f9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3f9cf0:
    // 0x3f9cf0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f9cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9cf4:
    // 0x3f9cf4: 0xc0bdf94  jal         func_2F7E50
label_3f9cf8:
    if (ctx->pc == 0x3F9CF8u) {
        ctx->pc = 0x3F9CF8u;
            // 0x3f9cf8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3F9CFCu;
        goto label_3f9cfc;
    }
    ctx->pc = 0x3F9CF4u;
    SET_GPR_U32(ctx, 31, 0x3F9CFCu);
    ctx->pc = 0x3F9CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9CF4u;
            // 0x3f9cf8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9CFCu; }
        if (ctx->pc != 0x3F9CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9CFCu; }
        if (ctx->pc != 0x3F9CFCu) { return; }
    }
    ctx->pc = 0x3F9CFCu;
label_3f9cfc:
    // 0x3f9cfc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9d00:
    // 0x3f9d00: 0xc0b6764  jal         func_2D9D90
label_3f9d04:
    if (ctx->pc == 0x3F9D04u) {
        ctx->pc = 0x3F9D04u;
            // 0x3f9d04: 0x8c440d74  lw          $a0, 0xD74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3444)));
        ctx->pc = 0x3F9D08u;
        goto label_3f9d08;
    }
    ctx->pc = 0x3F9D00u;
    SET_GPR_U32(ctx, 31, 0x3F9D08u);
    ctx->pc = 0x3F9D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9D00u;
            // 0x3f9d04: 0x8c440d74  lw          $a0, 0xD74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9D08u; }
        if (ctx->pc != 0x3F9D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9D08u; }
        if (ctx->pc != 0x3F9D08u) { return; }
    }
    ctx->pc = 0x3F9D08u;
label_3f9d08:
    // 0x3f9d08: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f9d0c:
    if (ctx->pc == 0x3F9D0Cu) {
        ctx->pc = 0x3F9D10u;
        goto label_3f9d10;
    }
    ctx->pc = 0x3F9D08u;
    {
        const bool branch_taken_0x3f9d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9d08) {
            ctx->pc = 0x3F9D1Cu;
            goto label_3f9d1c;
        }
    }
    ctx->pc = 0x3F9D10u;
label_3f9d10:
    // 0x3f9d10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f9d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9d14:
    // 0x3f9d14: 0xc0bdf9c  jal         func_2F7E70
label_3f9d18:
    if (ctx->pc == 0x3F9D18u) {
        ctx->pc = 0x3F9D18u;
            // 0x3f9d18: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3F9D1Cu;
        goto label_3f9d1c;
    }
    ctx->pc = 0x3F9D14u;
    SET_GPR_U32(ctx, 31, 0x3F9D1Cu);
    ctx->pc = 0x3F9D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9D14u;
            // 0x3f9d18: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9D1Cu; }
        if (ctx->pc != 0x3F9D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9D1Cu; }
        if (ctx->pc != 0x3F9D1Cu) { return; }
    }
    ctx->pc = 0x3F9D1Cu;
label_3f9d1c:
    // 0x3f9d1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f9d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f9d20:
    // 0x3f9d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f9d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f9d24:
    // 0x3f9d24: 0x3e00008  jr          $ra
label_3f9d28:
    if (ctx->pc == 0x3F9D28u) {
        ctx->pc = 0x3F9D28u;
            // 0x3f9d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F9D2Cu;
        goto label_3f9d2c;
    }
    ctx->pc = 0x3F9D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9D24u;
            // 0x3f9d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F9D2Cu;
label_3f9d2c:
    // 0x3f9d2c: 0x0  nop
    ctx->pc = 0x3f9d2cu;
    // NOP
label_3f9d30:
    // 0x3f9d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f9d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f9d34:
    // 0x3f9d34: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3f9d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3f9d38:
    // 0x3f9d38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f9d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f9d3c:
    // 0x3f9d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f9d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f9d40:
    // 0x3f9d40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f9d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9d44:
    // 0x3f9d44: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x3f9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9d48:
    // 0x3f9d48: 0x8c830db0  lw          $v1, 0xDB0($a0)
    ctx->pc = 0x3f9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_3f9d4c:
    // 0x3f9d4c: 0x5065000d  beql        $v1, $a1, . + 4 + (0xD << 2)
label_3f9d50:
    if (ctx->pc == 0x3F9D50u) {
        ctx->pc = 0x3F9D50u;
            // 0x3f9d50: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F9D54u;
        goto label_3f9d54;
    }
    ctx->pc = 0x3F9D4Cu;
    {
        const bool branch_taken_0x3f9d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3f9d4c) {
            ctx->pc = 0x3F9D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9D4Cu;
            // 0x3f9d50: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9D84u;
            goto label_3f9d84;
        }
    }
    ctx->pc = 0x3F9D54u;
label_3f9d54:
    // 0x3f9d54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f9d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f9d58:
    // 0x3f9d58: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3f9d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3f9d5c:
    // 0x3f9d5c: 0x320f809  jalr        $t9
label_3f9d60:
    if (ctx->pc == 0x3F9D60u) {
        ctx->pc = 0x3F9D64u;
        goto label_3f9d64;
    }
    ctx->pc = 0x3F9D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F9D64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F9D64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F9D64u; }
            if (ctx->pc != 0x3F9D64u) { return; }
        }
        }
    }
    ctx->pc = 0x3F9D64u;
label_3f9d64:
    // 0x3f9d64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9d68:
    // 0x3f9d68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f9d6c:
    // 0x3f9d6c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3f9d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3f9d70:
    // 0x3f9d70: 0xa04311c0  sb          $v1, 0x11C0($v0)
    ctx->pc = 0x3f9d70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4544), (uint8_t)GPR_U32(ctx, 3));
label_3f9d74:
    // 0x3f9d74: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9d78:
    // 0x3f9d78: 0xc12ca3c  jal         func_4B28F0
label_3f9d7c:
    if (ctx->pc == 0x3F9D7Cu) {
        ctx->pc = 0x3F9D7Cu;
            // 0x3f9d7c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x3F9D80u;
        goto label_3f9d80;
    }
    ctx->pc = 0x3F9D78u;
    SET_GPR_U32(ctx, 31, 0x3F9D80u);
    ctx->pc = 0x3F9D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9D78u;
            // 0x3f9d7c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9D80u; }
        if (ctx->pc != 0x3F9D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9D80u; }
        if (ctx->pc != 0x3F9D80u) { return; }
    }
    ctx->pc = 0x3F9D80u;
label_3f9d80:
    // 0x3f9d80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f9d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f9d84:
    // 0x3f9d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f9d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f9d88:
    // 0x3f9d88: 0x3e00008  jr          $ra
label_3f9d8c:
    if (ctx->pc == 0x3F9D8Cu) {
        ctx->pc = 0x3F9D8Cu;
            // 0x3f9d8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F9D90u;
        goto label_3f9d90;
    }
    ctx->pc = 0x3F9D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9D88u;
            // 0x3f9d8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F9D90u;
label_3f9d90:
    // 0x3f9d90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f9d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3f9d94:
    // 0x3f9d94: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3f9d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f9d98:
    // 0x3f9d98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f9d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f9d9c:
    // 0x3f9d9c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3f9d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3f9da0:
    // 0x3f9da0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f9da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f9da4:
    // 0x3f9da4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f9da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f9da8:
    // 0x3f9da8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f9da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f9dac:
    // 0x3f9dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f9dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f9db0:
    // 0x3f9db0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f9db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f9db4:
    // 0x3f9db4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3f9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9db8:
    // 0x3f9db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f9db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9dbc:
    // 0x3f9dbc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3f9dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3f9dc0:
    // 0x3f9dc0: 0x8c6a0d74  lw          $t2, 0xD74($v1)
    ctx->pc = 0x3f9dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3444)));
label_3f9dc4:
    // 0x3f9dc4: 0x8c840c78  lw          $a0, 0xC78($a0)
    ctx->pc = 0x3f9dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3192)));
label_3f9dc8:
    // 0x3f9dc8: 0x24720bf0  addiu       $s2, $v1, 0xBF0
    ctx->pc = 0x3f9dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3056));
label_3f9dcc:
    // 0x3f9dcc: 0x8c670db0  lw          $a3, 0xDB0($v1)
    ctx->pc = 0x3f9dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
label_3f9dd0:
    // 0x3f9dd0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3f9dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3f9dd4:
    // 0x3f9dd4: 0x914402c5  lbu         $a0, 0x2C5($t2)
    ctx->pc = 0x3f9dd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 709)));
label_3f9dd8:
    // 0x3f9dd8: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x3f9dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3f9ddc:
    // 0x3f9ddc: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x3f9ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_3f9de0:
    // 0x3f9de0: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x3f9de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_3f9de4:
    // 0x3f9de4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3f9de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3f9de8:
    // 0x3f9de8: 0x25340280  addiu       $s4, $t1, 0x280
    ctx->pc = 0x3f9de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 640));
label_3f9dec:
    // 0x3f9dec: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x3f9decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_3f9df0:
    // 0x3f9df0: 0x10e60076  beq         $a3, $a2, . + 4 + (0x76 << 2)
label_3f9df4:
    if (ctx->pc == 0x3F9DF4u) {
        ctx->pc = 0x3F9DF4u;
            // 0x3f9df4: 0x24930280  addiu       $s3, $a0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
        ctx->pc = 0x3F9DF8u;
        goto label_3f9df8;
    }
    ctx->pc = 0x3F9DF0u;
    {
        const bool branch_taken_0x3f9df0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x3F9DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9DF0u;
            // 0x3f9df4: 0x24930280  addiu       $s3, $a0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9df0) {
            ctx->pc = 0x3F9FCCu;
            goto label_3f9fcc;
        }
    }
    ctx->pc = 0x3F9DF8u;
label_3f9df8:
    // 0x3f9df8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x3f9df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_3f9dfc:
    // 0x3f9dfc: 0x50e40074  beql        $a3, $a0, . + 4 + (0x74 << 2)
label_3f9e00:
    if (ctx->pc == 0x3F9E00u) {
        ctx->pc = 0x3F9E00u;
            // 0x3f9e00: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3F9E04u;
        goto label_3f9e04;
    }
    ctx->pc = 0x3F9DFCu;
    {
        const bool branch_taken_0x3f9dfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x3f9dfc) {
            ctx->pc = 0x3F9E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9DFCu;
            // 0x3f9e00: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9FD0u;
            goto label_3f9fd0;
        }
    }
    ctx->pc = 0x3F9E04u;
label_3f9e04:
    // 0x3f9e04: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x3f9e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_3f9e08:
    // 0x3f9e08: 0x10e40070  beq         $a3, $a0, . + 4 + (0x70 << 2)
label_3f9e0c:
    if (ctx->pc == 0x3F9E0Cu) {
        ctx->pc = 0x3F9E10u;
        goto label_3f9e10;
    }
    ctx->pc = 0x3F9E08u;
    {
        const bool branch_taken_0x3f9e08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x3f9e08) {
            ctx->pc = 0x3F9FCCu;
            goto label_3f9fcc;
        }
    }
    ctx->pc = 0x3F9E10u;
label_3f9e10:
    // 0x3f9e10: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x3f9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_3f9e14:
    // 0x3f9e14: 0x86510054  lh          $s1, 0x54($s2)
    ctx->pc = 0x3f9e14u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 84)));
label_3f9e18:
    // 0x3f9e18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f9e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9e1c:
    // 0x3f9e1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9e20:
    // 0x3f9e20: 0x246602c0  addiu       $a2, $v1, 0x2C0
    ctx->pc = 0x3f9e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
label_3f9e24:
    // 0x3f9e24: 0x24670820  addiu       $a3, $v1, 0x820
    ctx->pc = 0x3f9e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
label_3f9e28:
    // 0x3f9e28: 0x26890004  addiu       $t1, $s4, 0x4
    ctx->pc = 0x3f9e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_3f9e2c:
    // 0x3f9e2c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3f9e2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f9e30:
    // 0x3f9e30: 0xc0b8704  jal         func_2E1C10
label_3f9e34:
    if (ctx->pc == 0x3F9E34u) {
        ctx->pc = 0x3F9E34u;
            // 0x3f9e34: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F9E38u;
        goto label_3f9e38;
    }
    ctx->pc = 0x3F9E30u;
    SET_GPR_U32(ctx, 31, 0x3F9E38u);
    ctx->pc = 0x3F9E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9E30u;
            // 0x3f9e34: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9E38u; }
        if (ctx->pc != 0x3F9E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9E38u; }
        if (ctx->pc != 0x3F9E38u) { return; }
    }
    ctx->pc = 0x3F9E38u;
label_3f9e38:
    // 0x3f9e38: 0x96430056  lhu         $v1, 0x56($s2)
    ctx->pc = 0x3f9e38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 86)));
label_3f9e3c:
    // 0x3f9e3c: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_3f9e40:
    if (ctx->pc == 0x3F9E40u) {
        ctx->pc = 0x3F9E44u;
        goto label_3f9e44;
    }
    ctx->pc = 0x3F9E3Cu;
    {
        const bool branch_taken_0x3f9e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9e3c) {
            ctx->pc = 0x3F9FCCu;
            goto label_3f9fcc;
        }
    }
    ctx->pc = 0x3F9E44u;
label_3f9e44:
    // 0x3f9e44: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x3f9e44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_3f9e48:
    // 0x3f9e48: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3f9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f9e4c:
    // 0x3f9e4c: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_3f9e50:
    if (ctx->pc == 0x3F9E50u) {
        ctx->pc = 0x3F9E50u;
            // 0x3f9e50: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x3F9E54u;
        goto label_3f9e54;
    }
    ctx->pc = 0x3F9E4Cu;
    {
        const bool branch_taken_0x3f9e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f9e4c) {
            ctx->pc = 0x3F9E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9E4Cu;
            // 0x3f9e50: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9E70u;
            goto label_3f9e70;
        }
    }
    ctx->pc = 0x3F9E54u;
label_3f9e54:
    // 0x3f9e54: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3f9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3f9e58:
    // 0x3f9e58: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_3f9e5c:
    if (ctx->pc == 0x3F9E5Cu) {
        ctx->pc = 0x3F9E60u;
        goto label_3f9e60;
    }
    ctx->pc = 0x3F9E58u;
    {
        const bool branch_taken_0x3f9e58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f9e58) {
            ctx->pc = 0x3F9E6Cu;
            goto label_3f9e6c;
        }
    }
    ctx->pc = 0x3F9E60u;
label_3f9e60:
    // 0x3f9e60: 0x86430054  lh          $v1, 0x54($s2)
    ctx->pc = 0x3f9e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 84)));
label_3f9e64:
    // 0x3f9e64: 0x12230059  beq         $s1, $v1, . + 4 + (0x59 << 2)
label_3f9e68:
    if (ctx->pc == 0x3F9E68u) {
        ctx->pc = 0x3F9E6Cu;
        goto label_3f9e6c;
    }
    ctx->pc = 0x3F9E64u;
    {
        const bool branch_taken_0x3f9e64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f9e64) {
            ctx->pc = 0x3F9FCCu;
            goto label_3f9fcc;
        }
    }
    ctx->pc = 0x3F9E6Cu;
label_3f9e6c:
    // 0x3f9e6c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3f9e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9e70:
    // 0x3f9e70: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3f9e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3f9e74:
    // 0x3f9e74: 0x8c850db0  lw          $a1, 0xDB0($a0)
    ctx->pc = 0x3f9e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_3f9e78:
    // 0x3f9e78: 0x54a30004  bnel        $a1, $v1, . + 4 + (0x4 << 2)
label_3f9e7c:
    if (ctx->pc == 0x3F9E7Cu) {
        ctx->pc = 0x3F9E7Cu;
            // 0x3f9e7c: 0x8e430040  lw          $v1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->pc = 0x3F9E80u;
        goto label_3f9e80;
    }
    ctx->pc = 0x3F9E78u;
    {
        const bool branch_taken_0x3f9e78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f9e78) {
            ctx->pc = 0x3F9E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9E78u;
            // 0x3f9e7c: 0x8e430040  lw          $v1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9E8Cu;
            goto label_3f9e8c;
        }
    }
    ctx->pc = 0x3F9E80u;
label_3f9e80:
    // 0x3f9e80: 0xc0c1c38  jal         func_3070E0
label_3f9e84:
    if (ctx->pc == 0x3F9E84u) {
        ctx->pc = 0x3F9E88u;
        goto label_3f9e88;
    }
    ctx->pc = 0x3F9E80u;
    SET_GPR_U32(ctx, 31, 0x3F9E88u);
    ctx->pc = 0x3070E0u;
    if (runtime->hasFunction(0x3070E0u)) {
        auto targetFn = runtime->lookupFunction(0x3070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9E88u; }
        if (ctx->pc != 0x3F9E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003070E0_0x3070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9E88u; }
        if (ctx->pc != 0x3F9E88u) { return; }
    }
    ctx->pc = 0x3F9E88u;
label_3f9e88:
    // 0x3f9e88: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x3f9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3f9e8c:
    // 0x3f9e8c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3f9e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9e90:
    // 0x3f9e90: 0x84630024  lh          $v1, 0x24($v1)
    ctx->pc = 0x3f9e90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
label_3f9e94:
    // 0x3f9e94: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3f9e94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3f9e98:
    // 0x3f9e98: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_3f9e9c:
    if (ctx->pc == 0x3F9E9Cu) {
        ctx->pc = 0x3F9E9Cu;
            // 0x3f9e9c: 0x8c930d70  lw          $s3, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x3F9EA0u;
        goto label_3f9ea0;
    }
    ctx->pc = 0x3F9E98u;
    {
        const bool branch_taken_0x3f9e98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9E98u;
            // 0x3f9e9c: 0x8c930d70  lw          $s3, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9e98) {
            ctx->pc = 0x3F9FCCu;
            goto label_3f9fcc;
        }
    }
    ctx->pc = 0x3F9EA0u;
label_3f9ea0:
    // 0x3f9ea0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3f9ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3f9ea4:
    // 0x3f9ea4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3f9ea8:
    // 0x3f9ea8: 0x2484b760  addiu       $a0, $a0, -0x48A0
    ctx->pc = 0x3f9ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948704));
label_3f9eac:
    // 0x3f9eac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f9eb0:
    // 0x3f9eb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3f9eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f9eb4:
    // 0x3f9eb4: 0x600008  jr          $v1
label_3f9eb8:
    if (ctx->pc == 0x3F9EB8u) {
        ctx->pc = 0x3F9EBCu;
        goto label_3f9ebc;
    }
    ctx->pc = 0x3F9EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F9EBCu: goto label_3f9ebc;
            case 0x3F9EDCu: goto label_3f9edc;
            case 0x3F9EFCu: goto label_3f9efc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3F9EBCu;
label_3f9ebc:
    // 0x3f9ebc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3f9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3f9ec0:
    // 0x3f9ec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f9ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f9ec4:
    // 0x3f9ec4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3f9ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3f9ec8:
    // 0x3f9ec8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f9ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9ecc:
    // 0x3f9ecc: 0xc0bdf9c  jal         func_2F7E70
label_3f9ed0:
    if (ctx->pc == 0x3F9ED0u) {
        ctx->pc = 0x3F9ED0u;
            // 0x3f9ed0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F9ED4u;
        goto label_3f9ed4;
    }
    ctx->pc = 0x3F9ECCu;
    SET_GPR_U32(ctx, 31, 0x3F9ED4u);
    ctx->pc = 0x3F9ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9ECCu;
            // 0x3f9ed0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9ED4u; }
        if (ctx->pc != 0x3F9ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9ED4u; }
        if (ctx->pc != 0x3F9ED4u) { return; }
    }
    ctx->pc = 0x3F9ED4u;
label_3f9ed4:
    // 0x3f9ed4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3f9ed8:
    if (ctx->pc == 0x3F9ED8u) {
        ctx->pc = 0x3F9EDCu;
        goto label_3f9edc;
    }
    ctx->pc = 0x3F9ED4u;
    {
        const bool branch_taken_0x3f9ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9ed4) {
            ctx->pc = 0x3F9FCCu;
            goto label_3f9fcc;
        }
    }
    ctx->pc = 0x3F9EDCu;
label_3f9edc:
    // 0x3f9edc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3f9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3f9ee0:
    // 0x3f9ee0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f9ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f9ee4:
    // 0x3f9ee4: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x3f9ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_3f9ee8:
    // 0x3f9ee8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f9ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9eec:
    // 0x3f9eec: 0xc0bdf9c  jal         func_2F7E70
label_3f9ef0:
    if (ctx->pc == 0x3F9EF0u) {
        ctx->pc = 0x3F9EF0u;
            // 0x3f9ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F9EF4u;
        goto label_3f9ef4;
    }
    ctx->pc = 0x3F9EECu;
    SET_GPR_U32(ctx, 31, 0x3F9EF4u);
    ctx->pc = 0x3F9EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9EECu;
            // 0x3f9ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9EF4u; }
        if (ctx->pc != 0x3F9EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9EF4u; }
        if (ctx->pc != 0x3F9EF4u) { return; }
    }
    ctx->pc = 0x3F9EF4u;
label_3f9ef4:
    // 0x3f9ef4: 0x10000035  b           . + 4 + (0x35 << 2)
label_3f9ef8:
    if (ctx->pc == 0x3F9EF8u) {
        ctx->pc = 0x3F9EFCu;
        goto label_3f9efc;
    }
    ctx->pc = 0x3F9EF4u;
    {
        const bool branch_taken_0x3f9ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9ef4) {
            ctx->pc = 0x3F9FCCu;
            goto label_3f9fcc;
        }
    }
    ctx->pc = 0x3F9EFCu;
label_3f9efc:
    // 0x3f9efc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3f9efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3f9f00:
    // 0x3f9f00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f9f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f9f04:
    // 0x3f9f04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f9f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f9f08:
    // 0x3f9f08: 0x320f809  jalr        $t9
label_3f9f0c:
    if (ctx->pc == 0x3F9F0Cu) {
        ctx->pc = 0x3F9F0Cu;
            // 0x3f9f0c: 0x2411001b  addiu       $s1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x3F9F10u;
        goto label_3f9f10;
    }
    ctx->pc = 0x3F9F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F9F10u);
        ctx->pc = 0x3F9F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9F08u;
            // 0x3f9f0c: 0x2411001b  addiu       $s1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F9F10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F9F10u; }
            if (ctx->pc != 0x3F9F10u) { return; }
        }
        }
    }
    ctx->pc = 0x3F9F10u;
label_3f9f10:
    // 0x3f9f10: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3f9f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3f9f14:
    // 0x3f9f14: 0x50430013  beql        $v0, $v1, . + 4 + (0x13 << 2)
label_3f9f18:
    if (ctx->pc == 0x3F9F18u) {
        ctx->pc = 0x3F9F18u;
            // 0x3f9f18: 0x3c0241a0  lui         $v0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
        ctx->pc = 0x3F9F1Cu;
        goto label_3f9f1c;
    }
    ctx->pc = 0x3F9F14u;
    {
        const bool branch_taken_0x3f9f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f9f14) {
            ctx->pc = 0x3F9F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9F14u;
            // 0x3f9f18: 0x3c0241a0  lui         $v0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9F64u;
            goto label_3f9f64;
        }
    }
    ctx->pc = 0x3F9F1Cu;
label_3f9f1c:
    // 0x3f9f1c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x3f9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3f9f20:
    // 0x3f9f20: 0x8442002e  lh          $v0, 0x2E($v0)
    ctx->pc = 0x3f9f20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
label_3f9f24:
    // 0x3f9f24: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3f9f28:
    if (ctx->pc == 0x3F9F28u) {
        ctx->pc = 0x3F9F28u;
            // 0x3f9f28: 0x3c0241a0  lui         $v0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
        ctx->pc = 0x3F9F2Cu;
        goto label_3f9f2c;
    }
    ctx->pc = 0x3F9F24u;
    {
        const bool branch_taken_0x3f9f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9f24) {
            ctx->pc = 0x3F9F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9F24u;
            // 0x3f9f28: 0x3c0241a0  lui         $v0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9F48u;
            goto label_3f9f48;
        }
    }
    ctx->pc = 0x3F9F2Cu;
label_3f9f2c:
    // 0x3f9f2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f9f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f9f30:
    // 0x3f9f30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f9f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f9f34:
    // 0x3f9f34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3f9f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9f38:
    // 0x3f9f38: 0xc0bdf30  jal         func_2F7CC0
label_3f9f3c:
    if (ctx->pc == 0x3F9F3Cu) {
        ctx->pc = 0x3F9F3Cu;
            // 0x3f9f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F9F40u;
        goto label_3f9f40;
    }
    ctx->pc = 0x3F9F38u;
    SET_GPR_U32(ctx, 31, 0x3F9F40u);
    ctx->pc = 0x3F9F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9F38u;
            // 0x3f9f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7CC0u;
    if (runtime->hasFunction(0x2F7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9F40u; }
        if (ctx->pc != 0x3F9F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7CC0_0x2f7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9F40u; }
        if (ctx->pc != 0x3F9F40u) { return; }
    }
    ctx->pc = 0x3F9F40u;
label_3f9f40:
    // 0x3f9f40: 0x1000000e  b           . + 4 + (0xE << 2)
label_3f9f44:
    if (ctx->pc == 0x3F9F44u) {
        ctx->pc = 0x3F9F44u;
            // 0x3f9f44: 0x92830005  lbu         $v1, 0x5($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
        ctx->pc = 0x3F9F48u;
        goto label_3f9f48;
    }
    ctx->pc = 0x3F9F40u;
    {
        const bool branch_taken_0x3f9f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9F40u;
            // 0x3f9f44: 0x92830005  lbu         $v1, 0x5($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9f40) {
            ctx->pc = 0x3F9F7Cu;
            goto label_3f9f7c;
        }
    }
    ctx->pc = 0x3F9F48u;
label_3f9f48:
    // 0x3f9f48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f9f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f9f4c:
    // 0x3f9f4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f9f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f9f50:
    // 0x3f9f50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f9f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9f54:
    // 0x3f9f54: 0xc0bdf9c  jal         func_2F7E70
label_3f9f58:
    if (ctx->pc == 0x3F9F58u) {
        ctx->pc = 0x3F9F58u;
            // 0x3f9f58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F9F5Cu;
        goto label_3f9f5c;
    }
    ctx->pc = 0x3F9F54u;
    SET_GPR_U32(ctx, 31, 0x3F9F5Cu);
    ctx->pc = 0x3F9F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9F54u;
            // 0x3f9f58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9F5Cu; }
        if (ctx->pc != 0x3F9F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9F5Cu; }
        if (ctx->pc != 0x3F9F5Cu) { return; }
    }
    ctx->pc = 0x3F9F5Cu;
label_3f9f5c:
    // 0x3f9f5c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3f9f60:
    if (ctx->pc == 0x3F9F60u) {
        ctx->pc = 0x3F9F64u;
        goto label_3f9f64;
    }
    ctx->pc = 0x3F9F5Cu;
    {
        const bool branch_taken_0x3f9f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9f5c) {
            ctx->pc = 0x3F9F78u;
            goto label_3f9f78;
        }
    }
    ctx->pc = 0x3F9F64u;
label_3f9f64:
    // 0x3f9f64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f9f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f9f68:
    // 0x3f9f68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f9f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f9f6c:
    // 0x3f9f6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f9f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9f70:
    // 0x3f9f70: 0xc0bdf9c  jal         func_2F7E70
label_3f9f74:
    if (ctx->pc == 0x3F9F74u) {
        ctx->pc = 0x3F9F74u;
            // 0x3f9f74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F9F78u;
        goto label_3f9f78;
    }
    ctx->pc = 0x3F9F70u;
    SET_GPR_U32(ctx, 31, 0x3F9F78u);
    ctx->pc = 0x3F9F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9F70u;
            // 0x3f9f74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9F78u; }
        if (ctx->pc != 0x3F9F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9F78u; }
        if (ctx->pc != 0x3F9F78u) { return; }
    }
    ctx->pc = 0x3F9F78u;
label_3f9f78:
    // 0x3f9f78: 0x92830005  lbu         $v1, 0x5($s4)
    ctx->pc = 0x3f9f78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
label_3f9f7c:
    // 0x3f9f7c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_3f9f80:
    if (ctx->pc == 0x3F9F80u) {
        ctx->pc = 0x3F9F84u;
        goto label_3f9f84;
    }
    ctx->pc = 0x3F9F7Cu;
    {
        const bool branch_taken_0x3f9f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9f7c) {
            ctx->pc = 0x3F9FCCu;
            goto label_3f9fcc;
        }
    }
    ctx->pc = 0x3F9F84u;
label_3f9f84:
    // 0x3f9f84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f9f88:
    // 0x3f9f88: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x3f9f88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9f8c:
    // 0x3f9f8c: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x3f9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3f9f90:
    // 0x3f9f90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f9f90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f9f94:
    // 0x3f9f94: 0x24e405f0  addiu       $a0, $a3, 0x5F0
    ctx->pc = 0x3f9f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1520));
label_3f9f98:
    // 0x3f9f98: 0x24e602c0  addiu       $a2, $a3, 0x2C0
    ctx->pc = 0x3f9f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
label_3f9f9c:
    // 0x3f9f9c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x3f9f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3f9fa0:
    // 0x3f9fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3f9fa4:
    // 0x3f9fa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f9fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f9fa8:
    // 0x3f9fa8: 0xc0b884c  jal         func_2E2130
label_3f9fac:
    if (ctx->pc == 0x3F9FACu) {
        ctx->pc = 0x3F9FACu;
            // 0x3f9fac: 0x24e70820  addiu       $a3, $a3, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2080));
        ctx->pc = 0x3F9FB0u;
        goto label_3f9fb0;
    }
    ctx->pc = 0x3F9FA8u;
    SET_GPR_U32(ctx, 31, 0x3F9FB0u);
    ctx->pc = 0x3F9FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9FA8u;
            // 0x3f9fac: 0x24e70820  addiu       $a3, $a3, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9FB0u; }
        if (ctx->pc != 0x3F9FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9FB0u; }
        if (ctx->pc != 0x3F9FB0u) { return; }
    }
    ctx->pc = 0x3F9FB0u;
label_3f9fb0:
    // 0x3f9fb0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3f9fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9fb4:
    // 0x3f9fb4: 0x24640580  addiu       $a0, $v1, 0x580
    ctx->pc = 0x3f9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
label_3f9fb8:
    // 0x3f9fb8: 0x94630646  lhu         $v1, 0x646($v1)
    ctx->pc = 0x3f9fb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1606)));
label_3f9fbc:
    // 0x3f9fbc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3f9fc0:
    if (ctx->pc == 0x3F9FC0u) {
        ctx->pc = 0x3F9FC4u;
        goto label_3f9fc4;
    }
    ctx->pc = 0x3F9FBCu;
    {
        const bool branch_taken_0x3f9fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9fbc) {
            ctx->pc = 0x3F9FCCu;
            goto label_3f9fcc;
        }
    }
    ctx->pc = 0x3F9FC4u;
label_3f9fc4:
    // 0x3f9fc4: 0xc0ab808  jal         func_2AE020
label_3f9fc8:
    if (ctx->pc == 0x3F9FC8u) {
        ctx->pc = 0x3F9FC8u;
            // 0x3f9fc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3F9FCCu;
        goto label_3f9fcc;
    }
    ctx->pc = 0x3F9FC4u;
    SET_GPR_U32(ctx, 31, 0x3F9FCCu);
    ctx->pc = 0x3F9FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9FC4u;
            // 0x3f9fc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9FCCu; }
        if (ctx->pc != 0x3F9FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F9FCCu; }
        if (ctx->pc != 0x3F9FCCu) { return; }
    }
    ctx->pc = 0x3F9FCCu;
label_3f9fcc:
    // 0x3f9fcc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f9fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f9fd0:
    // 0x3f9fd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f9fd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f9fd4:
    // 0x3f9fd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f9fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f9fd8:
    // 0x3f9fd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f9fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f9fdc:
    // 0x3f9fdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f9fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f9fe0:
    // 0x3f9fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f9fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f9fe4:
    // 0x3f9fe4: 0x3e00008  jr          $ra
label_3f9fe8:
    if (ctx->pc == 0x3F9FE8u) {
        ctx->pc = 0x3F9FE8u;
            // 0x3f9fe8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F9FECu;
        goto label_3f9fec;
    }
    ctx->pc = 0x3F9FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9FE4u;
            // 0x3f9fe8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F9FECu;
label_3f9fec:
    // 0x3f9fec: 0x0  nop
    ctx->pc = 0x3f9fecu;
    // NOP
label_3f9ff0:
    // 0x3f9ff0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x3f9ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f9ff4:
    // 0x3f9ff4: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3f9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_3f9ff8:
    // 0x3f9ff8: 0x8ca40d9c  lw          $a0, 0xD9C($a1)
    ctx->pc = 0x3f9ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3484)));
label_3f9ffc:
    // 0x3f9ffc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f9ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3fa000:
    // 0x3fa000: 0x3e00008  jr          $ra
label_3fa004:
    if (ctx->pc == 0x3FA004u) {
        ctx->pc = 0x3FA004u;
            // 0x3fa004: 0xaca30d9c  sw          $v1, 0xD9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3484), GPR_U32(ctx, 3));
        ctx->pc = 0x3FA008u;
        goto label_3fa008;
    }
    ctx->pc = 0x3FA000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FA004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA000u;
            // 0x3fa004: 0xaca30d9c  sw          $v1, 0xD9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FA008u;
label_3fa008:
    // 0x3fa008: 0x0  nop
    ctx->pc = 0x3fa008u;
    // NOP
label_3fa00c:
    // 0x3fa00c: 0x0  nop
    ctx->pc = 0x3fa00cu;
    // NOP
label_3fa010:
    // 0x3fa010: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3fa010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3fa014:
    // 0x3fa014: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3fa014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3fa018:
    // 0x3fa018: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3fa018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3fa01c:
    // 0x3fa01c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3fa01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3fa020:
    // 0x3fa020: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fa020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3fa024:
    // 0x3fa024: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3fa024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3fa028:
    // 0x3fa028: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3fa028u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3fa02c:
    // 0x3fa02c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fa02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fa030:
    // 0x3fa030: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3fa030u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3fa034:
    // 0x3fa034: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3fa034u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3fa038:
    // 0x3fa038: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3fa038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3fa03c:
    // 0x3fa03c: 0x8c840d70  lw          $a0, 0xD70($a0)
    ctx->pc = 0x3fa03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_3fa040:
    // 0x3fa040: 0xc0be258  jal         func_2F8960
label_3fa044:
    if (ctx->pc == 0x3FA044u) {
        ctx->pc = 0x3FA044u;
            // 0x3fa044: 0x26130bf0  addiu       $s3, $s0, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 3056));
        ctx->pc = 0x3FA048u;
        goto label_3fa048;
    }
    ctx->pc = 0x3FA040u;
    SET_GPR_U32(ctx, 31, 0x3FA048u);
    ctx->pc = 0x3FA044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA040u;
            // 0x3fa044: 0x26130bf0  addiu       $s3, $s0, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 3056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA048u; }
        if (ctx->pc != 0x3FA048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA048u; }
        if (ctx->pc != 0x3FA048u) { return; }
    }
    ctx->pc = 0x3FA048u;
label_3fa048:
    // 0x3fa048: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3fa048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fa04c:
    // 0x3fa04c: 0x92630054  lbu         $v1, 0x54($s3)
    ctx->pc = 0x3fa04cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 84)));
label_3fa050:
    // 0x3fa050: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fa050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3fa054:
    // 0x3fa054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa058:
    // 0x3fa058: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x3fa058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3fa05c:
    // 0x3fa05c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fa05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3fa060:
    // 0x3fa060: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3fa060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fa064:
    // 0x3fa064: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fa064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fa068:
    // 0x3fa068: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x3fa068u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3fa06c:
    // 0x3fa06c: 0xc0c117c  jal         func_3045F0
label_3fa070:
    if (ctx->pc == 0x3FA070u) {
        ctx->pc = 0x3FA070u;
            // 0x3fa070: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA074u;
        goto label_3fa074;
    }
    ctx->pc = 0x3FA06Cu;
    SET_GPR_U32(ctx, 31, 0x3FA074u);
    ctx->pc = 0x3FA070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA06Cu;
            // 0x3fa070: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3045F0u;
    if (runtime->hasFunction(0x3045F0u)) {
        auto targetFn = runtime->lookupFunction(0x3045F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA074u; }
        if (ctx->pc != 0x3FA074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003045F0_0x3045f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA074u; }
        if (ctx->pc != 0x3FA074u) { return; }
    }
    ctx->pc = 0x3FA074u;
label_3fa074:
    // 0x3fa074: 0x96630050  lhu         $v1, 0x50($s3)
    ctx->pc = 0x3fa074u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
label_3fa078:
    // 0x3fa078: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3fa078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fa07c:
    // 0x3fa07c: 0x54620069  bnel        $v1, $v0, . + 4 + (0x69 << 2)
label_3fa080:
    if (ctx->pc == 0x3FA080u) {
        ctx->pc = 0x3FA080u;
            // 0x3fa080: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3FA084u;
        goto label_3fa084;
    }
    ctx->pc = 0x3FA07Cu;
    {
        const bool branch_taken_0x3fa07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fa07c) {
            ctx->pc = 0x3FA080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA07Cu;
            // 0x3fa080: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FA224u;
            goto label_3fa224;
        }
    }
    ctx->pc = 0x3FA084u;
label_3fa084:
    // 0x3fa084: 0xc0c10c4  jal         func_304310
label_3fa088:
    if (ctx->pc == 0x3FA088u) {
        ctx->pc = 0x3FA088u;
            // 0x3fa088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA08Cu;
        goto label_3fa08c;
    }
    ctx->pc = 0x3FA084u;
    SET_GPR_U32(ctx, 31, 0x3FA08Cu);
    ctx->pc = 0x3FA088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA084u;
            // 0x3fa088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304310u;
    if (runtime->hasFunction(0x304310u)) {
        auto targetFn = runtime->lookupFunction(0x304310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA08Cu; }
        if (ctx->pc != 0x3FA08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304310_0x304310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA08Cu; }
        if (ctx->pc != 0x3FA08Cu) { return; }
    }
    ctx->pc = 0x3FA08Cu;
label_3fa08c:
    // 0x3fa08c: 0x8e030d9c  lw          $v1, 0xD9C($s0)
    ctx->pc = 0x3fa08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_3fa090:
    // 0x3fa090: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3fa090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3fa094:
    // 0x3fa094: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3fa094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_3fa098:
    // 0x3fa098: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x3fa098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_3fa09c:
    // 0x3fa09c: 0x24a5b7e0  addiu       $a1, $a1, -0x4820
    ctx->pc = 0x3fa09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948832));
label_3fa0a0:
    // 0x3fa0a0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3fa0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3fa0a4:
    // 0x3fa0a4: 0xae030d9c  sw          $v1, 0xD9C($s0)
    ctx->pc = 0x3fa0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 3));
label_3fa0a8:
    // 0x3fa0a8: 0xc04cc04  jal         func_133010
label_3fa0ac:
    if (ctx->pc == 0x3FA0ACu) {
        ctx->pc = 0x3FA0ACu;
            // 0x3fa0ac: 0xae020db8  sw          $v0, 0xDB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
        ctx->pc = 0x3FA0B0u;
        goto label_3fa0b0;
    }
    ctx->pc = 0x3FA0A8u;
    SET_GPR_U32(ctx, 31, 0x3FA0B0u);
    ctx->pc = 0x3FA0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA0A8u;
            // 0x3fa0ac: 0xae020db8  sw          $v0, 0xDB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA0B0u; }
        if (ctx->pc != 0x3FA0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA0B0u; }
        if (ctx->pc != 0x3FA0B0u) { return; }
    }
    ctx->pc = 0x3FA0B0u;
label_3fa0b0:
    // 0x3fa0b0: 0x8e110d74  lw          $s1, 0xD74($s0)
    ctx->pc = 0x3fa0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_3fa0b4:
    // 0x3fa0b4: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x3fa0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_3fa0b8:
    // 0x3fa0b8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3fa0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3fa0bc:
    // 0x3fa0bc: 0x8e2302c8  lw          $v1, 0x2C8($s1)
    ctx->pc = 0x3fa0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_3fa0c0:
    // 0x3fa0c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3fa0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3fa0c4:
    // 0x3fa0c4: 0xc0a545c  jal         func_295170
label_3fa0c8:
    if (ctx->pc == 0x3FA0C8u) {
        ctx->pc = 0x3FA0C8u;
            // 0x3fa0c8: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x3FA0CCu;
        goto label_3fa0cc;
    }
    ctx->pc = 0x3FA0C4u;
    SET_GPR_U32(ctx, 31, 0x3FA0CCu);
    ctx->pc = 0x3FA0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA0C4u;
            // 0x3fa0c8: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA0CCu; }
        if (ctx->pc != 0x3FA0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA0CCu; }
        if (ctx->pc != 0x3FA0CCu) { return; }
    }
    ctx->pc = 0x3FA0CCu;
label_3fa0cc:
    // 0x3fa0cc: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x3fa0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_3fa0d0:
    // 0x3fa0d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fa0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fa0d4:
    // 0x3fa0d4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3fa0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3fa0d8:
    // 0x3fa0d8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fa0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fa0dc:
    // 0x3fa0dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fa0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fa0e0:
    // 0x3fa0e0: 0xc08bf20  jal         func_22FC80
label_3fa0e4:
    if (ctx->pc == 0x3FA0E4u) {
        ctx->pc = 0x3FA0E4u;
            // 0x3fa0e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA0E8u;
        goto label_3fa0e8;
    }
    ctx->pc = 0x3FA0E0u;
    SET_GPR_U32(ctx, 31, 0x3FA0E8u);
    ctx->pc = 0x3FA0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA0E0u;
            // 0x3fa0e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA0E8u; }
        if (ctx->pc != 0x3FA0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA0E8u; }
        if (ctx->pc != 0x3FA0E8u) { return; }
    }
    ctx->pc = 0x3FA0E8u;
label_3fa0e8:
    // 0x3fa0e8: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3fa0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3fa0ec:
    // 0x3fa0ec: 0xc075318  jal         func_1D4C60
label_3fa0f0:
    if (ctx->pc == 0x3FA0F0u) {
        ctx->pc = 0x3FA0F0u;
            // 0x3fa0f0: 0x260505d0  addiu       $a1, $s0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
        ctx->pc = 0x3FA0F4u;
        goto label_3fa0f4;
    }
    ctx->pc = 0x3FA0ECu;
    SET_GPR_U32(ctx, 31, 0x3FA0F4u);
    ctx->pc = 0x3FA0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA0ECu;
            // 0x3fa0f0: 0x260505d0  addiu       $a1, $s0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA0F4u; }
        if (ctx->pc != 0x3FA0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA0F4u; }
        if (ctx->pc != 0x3FA0F4u) { return; }
    }
    ctx->pc = 0x3FA0F4u;
label_3fa0f4:
    // 0x3fa0f4: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x3fa0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3fa0f8:
    // 0x3fa0f8: 0x26040840  addiu       $a0, $s0, 0x840
    ctx->pc = 0x3fa0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_3fa0fc:
    // 0x3fa0fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3fa0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa100:
    // 0x3fa100: 0xc0c6250  jal         func_318940
label_3fa104:
    if (ctx->pc == 0x3FA104u) {
        ctx->pc = 0x3FA104u;
            // 0x3fa104: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA108u;
        goto label_3fa108;
    }
    ctx->pc = 0x3FA100u;
    SET_GPR_U32(ctx, 31, 0x3FA108u);
    ctx->pc = 0x3FA104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA100u;
            // 0x3fa104: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA108u; }
        if (ctx->pc != 0x3FA108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA108u; }
        if (ctx->pc != 0x3FA108u) { return; }
    }
    ctx->pc = 0x3FA108u;
label_3fa108:
    // 0x3fa108: 0xae000e1c  sw          $zero, 0xE1C($s0)
    ctx->pc = 0x3fa108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3612), GPR_U32(ctx, 0));
label_3fa10c:
    // 0x3fa10c: 0xae000e20  sw          $zero, 0xE20($s0)
    ctx->pc = 0x3fa10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3616), GPR_U32(ctx, 0));
label_3fa110:
    // 0x3fa110: 0xae000e24  sw          $zero, 0xE24($s0)
    ctx->pc = 0x3fa110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 0));
label_3fa114:
    // 0x3fa114: 0x8e020d70  lw          $v0, 0xD70($s0)
    ctx->pc = 0x3fa114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_3fa118:
    // 0x3fa118: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fa118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fa11c:
    // 0x3fa11c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3fa11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fa120:
    // 0x3fa120: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3fa120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3fa124:
    // 0x3fa124: 0x320f809  jalr        $t9
label_3fa128:
    if (ctx->pc == 0x3FA128u) {
        ctx->pc = 0x3FA128u;
            // 0x3fa128: 0x8e710040  lw          $s1, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->pc = 0x3FA12Cu;
        goto label_3fa12c;
    }
    ctx->pc = 0x3FA124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FA12Cu);
        ctx->pc = 0x3FA128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA124u;
            // 0x3fa128: 0x8e710040  lw          $s1, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FA12Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FA12Cu; }
            if (ctx->pc != 0x3FA12Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3FA12Cu;
label_3fa12c:
    // 0x3fa12c: 0x38430006  xori        $v1, $v0, 0x6
    ctx->pc = 0x3fa12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_3fa130:
    // 0x3fa130: 0x8622002e  lh          $v0, 0x2E($s1)
    ctx->pc = 0x3fa130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_3fa134:
    // 0x3fa134: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3fa134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fa138:
    // 0x3fa138: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x3fa138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_3fa13c:
    // 0x3fa13c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3fa13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3fa140:
    // 0x3fa140: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fa140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3fa144:
    // 0x3fa144: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3fa148:
    if (ctx->pc == 0x3FA148u) {
        ctx->pc = 0x3FA148u;
            // 0x3fa148: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3FA14Cu;
        goto label_3fa14c;
    }
    ctx->pc = 0x3FA144u;
    {
        const bool branch_taken_0x3fa144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa144) {
            ctx->pc = 0x3FA148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA144u;
            // 0x3fa148: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FA170u;
            goto label_3fa170;
        }
    }
    ctx->pc = 0x3FA14Cu;
label_3fa14c:
    // 0x3fa14c: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x3fa14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_3fa150:
    // 0x3fa150: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3fa150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3fa154:
    // 0x3fa154: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3fa154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa158:
    // 0x3fa158: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3fa158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fa15c:
    // 0x3fa15c: 0xc0bdf30  jal         func_2F7CC0
label_3fa160:
    if (ctx->pc == 0x3FA160u) {
        ctx->pc = 0x3FA160u;
            // 0x3fa160: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3FA164u;
        goto label_3fa164;
    }
    ctx->pc = 0x3FA15Cu;
    SET_GPR_U32(ctx, 31, 0x3FA164u);
    ctx->pc = 0x3FA160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA15Cu;
            // 0x3fa160: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7CC0u;
    if (runtime->hasFunction(0x2F7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA164u; }
        if (ctx->pc != 0x3FA164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7CC0_0x2f7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA164u; }
        if (ctx->pc != 0x3FA164u) { return; }
    }
    ctx->pc = 0x3FA164u;
label_3fa164:
    // 0x3fa164: 0x10000007  b           . + 4 + (0x7 << 2)
label_3fa168:
    if (ctx->pc == 0x3FA168u) {
        ctx->pc = 0x3FA168u;
            // 0x3fa168: 0xc6010af8  lwc1        $f1, 0xAF8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3FA16Cu;
        goto label_3fa16c;
    }
    ctx->pc = 0x3FA164u;
    {
        const bool branch_taken_0x3fa164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA164u;
            // 0x3fa168: 0xc6010af8  lwc1        $f1, 0xAF8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa164) {
            ctx->pc = 0x3FA184u;
            goto label_3fa184;
        }
    }
    ctx->pc = 0x3FA16Cu;
label_3fa16c:
    // 0x3fa16c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3fa16cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fa170:
    // 0x3fa170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa174:
    // 0x3fa174: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3fa174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3fa178:
    // 0x3fa178: 0x320f809  jalr        $t9
label_3fa17c:
    if (ctx->pc == 0x3FA17Cu) {
        ctx->pc = 0x3FA17Cu;
            // 0x3fa17c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3FA180u;
        goto label_3fa180;
    }
    ctx->pc = 0x3FA178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FA180u);
        ctx->pc = 0x3FA17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA178u;
            // 0x3fa17c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FA180u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FA180u; }
            if (ctx->pc != 0x3FA180u) { return; }
        }
        }
    }
    ctx->pc = 0x3FA180u;
label_3fa180:
    // 0x3fa180: 0xc6010af8  lwc1        $f1, 0xAF8($s0)
    ctx->pc = 0x3fa180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fa184:
    // 0x3fa184: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3fa184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_3fa188:
    // 0x3fa188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fa188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa18c:
    // 0x3fa18c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3fa18cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3fa190:
    // 0x3fa190: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3fa190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3fa194:
    // 0x3fa194: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3fa194u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3fa198:
    // 0x3fa198: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3fa198u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3fa19c:
    // 0x3fa19c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa19cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3fa1a0:
    // 0x3fa1a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3fa1a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3fa1a4:
    // 0x3fa1a4: 0x0  nop
    ctx->pc = 0x3fa1a4u;
    // NOP
label_3fa1a8:
    // 0x3fa1a8: 0xae030b04  sw          $v1, 0xB04($s0)
    ctx->pc = 0x3fa1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2820), GPR_U32(ctx, 3));
label_3fa1ac:
    // 0x3fa1ac: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x3fa1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3fa1b0:
    // 0x3fa1b0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3fa1b4:
    if (ctx->pc == 0x3FA1B4u) {
        ctx->pc = 0x3FA1B4u;
            // 0x3fa1b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA1B8u;
        goto label_3fa1b8;
    }
    ctx->pc = 0x3FA1B0u;
    {
        const bool branch_taken_0x3fa1b0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3FA1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA1B0u;
            // 0x3fa1b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa1b0) {
            ctx->pc = 0x3FA1C8u;
            goto label_3fa1c8;
        }
    }
    ctx->pc = 0x3FA1B8u;
label_3fa1b8:
    // 0x3fa1b8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3fa1b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3fa1bc:
    // 0x3fa1bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3fa1c0:
    if (ctx->pc == 0x3FA1C0u) {
        ctx->pc = 0x3FA1C4u;
        goto label_3fa1c4;
    }
    ctx->pc = 0x3FA1BCu;
    {
        const bool branch_taken_0x3fa1bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa1bc) {
            ctx->pc = 0x3FA1C8u;
            goto label_3fa1c8;
        }
    }
    ctx->pc = 0x3FA1C4u;
label_3fa1c4:
    // 0x3fa1c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fa1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fa1c8:
    // 0x3fa1c8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3fa1cc:
    if (ctx->pc == 0x3FA1CCu) {
        ctx->pc = 0x3FA1D0u;
        goto label_3fa1d0;
    }
    ctx->pc = 0x3FA1C8u;
    {
        const bool branch_taken_0x3fa1c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa1c8) {
            ctx->pc = 0x3FA1E4u;
            goto label_3fa1e4;
        }
    }
    ctx->pc = 0x3FA1D0u;
label_3fa1d0:
    // 0x3fa1d0: 0xc075eb4  jal         func_1D7AD0
label_3fa1d4:
    if (ctx->pc == 0x3FA1D4u) {
        ctx->pc = 0x3FA1D4u;
            // 0x3fa1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA1D8u;
        goto label_3fa1d8;
    }
    ctx->pc = 0x3FA1D0u;
    SET_GPR_U32(ctx, 31, 0x3FA1D8u);
    ctx->pc = 0x3FA1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA1D0u;
            // 0x3fa1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA1D8u; }
        if (ctx->pc != 0x3FA1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA1D8u; }
        if (ctx->pc != 0x3FA1D8u) { return; }
    }
    ctx->pc = 0x3FA1D8u;
label_3fa1d8:
    // 0x3fa1d8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3fa1dc:
    if (ctx->pc == 0x3FA1DCu) {
        ctx->pc = 0x3FA1E0u;
        goto label_3fa1e0;
    }
    ctx->pc = 0x3FA1D8u;
    {
        const bool branch_taken_0x3fa1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa1d8) {
            ctx->pc = 0x3FA1E4u;
            goto label_3fa1e4;
        }
    }
    ctx->pc = 0x3FA1E0u;
label_3fa1e0:
    // 0x3fa1e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3fa1e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa1e4:
    // 0x3fa1e4: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_3fa1e8:
    if (ctx->pc == 0x3FA1E8u) {
        ctx->pc = 0x3FA1E8u;
            // 0x3fa1e8: 0x9204007c  lbu         $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x3FA1ECu;
        goto label_3fa1ec;
    }
    ctx->pc = 0x3FA1E4u;
    {
        const bool branch_taken_0x3fa1e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa1e4) {
            ctx->pc = 0x3FA1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA1E4u;
            // 0x3fa1e8: 0x9204007c  lbu         $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FA200u;
            goto label_3fa200;
        }
    }
    ctx->pc = 0x3FA1ECu;
label_3fa1ec:
    // 0x3fa1ec: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x3fa1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3fa1f0:
    // 0x3fa1f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3fa1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fa1f4:
    // 0x3fa1f4: 0x548301ae  bnel        $a0, $v1, . + 4 + (0x1AE << 2)
label_3fa1f8:
    if (ctx->pc == 0x3FA1F8u) {
        ctx->pc = 0x3FA1F8u;
            // 0x3fa1f8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3FA1FCu;
        goto label_3fa1fc;
    }
    ctx->pc = 0x3FA1F4u;
    {
        const bool branch_taken_0x3fa1f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fa1f4) {
            ctx->pc = 0x3FA1F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA1F4u;
            // 0x3fa1f8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FA8B0u;
            goto label_3fa8b0;
        }
    }
    ctx->pc = 0x3FA1FCu;
label_3fa1fc:
    // 0x3fa1fc: 0x9204007c  lbu         $a0, 0x7C($s0)
    ctx->pc = 0x3fa1fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
label_3fa200:
    // 0x3fa200: 0xc072b78  jal         func_1CADE0
label_3fa204:
    if (ctx->pc == 0x3FA204u) {
        ctx->pc = 0x3FA208u;
        goto label_3fa208;
    }
    ctx->pc = 0x3FA200u;
    SET_GPR_U32(ctx, 31, 0x3FA208u);
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA208u; }
        if (ctx->pc != 0x3FA208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA208u; }
        if (ctx->pc != 0x3FA208u) { return; }
    }
    ctx->pc = 0x3FA208u;
label_3fa208:
    // 0x3fa208: 0x104001a8  beqz        $v0, . + 4 + (0x1A8 << 2)
label_3fa20c:
    if (ctx->pc == 0x3FA20Cu) {
        ctx->pc = 0x3FA210u;
        goto label_3fa210;
    }
    ctx->pc = 0x3FA208u;
    {
        const bool branch_taken_0x3fa208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa208) {
            ctx->pc = 0x3FA8ACu;
            goto label_3fa8ac;
        }
    }
    ctx->pc = 0x3FA210u;
label_3fa210:
    // 0x3fa210: 0xc072aaa  jal         func_1CAAA8
label_3fa214:
    if (ctx->pc == 0x3FA214u) {
        ctx->pc = 0x3FA214u;
            // 0x3fa214: 0x9204007c  lbu         $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x3FA218u;
        goto label_3fa218;
    }
    ctx->pc = 0x3FA210u;
    SET_GPR_U32(ctx, 31, 0x3FA218u);
    ctx->pc = 0x3FA214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA210u;
            // 0x3fa214: 0x9204007c  lbu         $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA218u; }
        if (ctx->pc != 0x3FA218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA218u; }
        if (ctx->pc != 0x3FA218u) { return; }
    }
    ctx->pc = 0x3FA218u;
label_3fa218:
    // 0x3fa218: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_3fa21c:
    if (ctx->pc == 0x3FA21Cu) {
        ctx->pc = 0x3FA220u;
        goto label_3fa220;
    }
    ctx->pc = 0x3FA218u;
    {
        const bool branch_taken_0x3fa218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa218) {
            ctx->pc = 0x3FA8ACu;
            goto label_3fa8ac;
        }
    }
    ctx->pc = 0x3FA220u;
label_3fa220:
    // 0x3fa220: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3fa220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fa224:
    // 0x3fa224: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3fa224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3fa228:
    // 0x3fa228: 0xc6140de8  lwc1        $f20, 0xDE8($s0)
    ctx->pc = 0x3fa228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fa22c:
    // 0x3fa22c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3fa22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa230:
    // 0x3fa230: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x3fa230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_3fa234:
    // 0x3fa234: 0x320f809  jalr        $t9
label_3fa238:
    if (ctx->pc == 0x3FA238u) {
        ctx->pc = 0x3FA238u;
            // 0x3fa238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA23Cu;
        goto label_3fa23c;
    }
    ctx->pc = 0x3FA234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FA23Cu);
        ctx->pc = 0x3FA238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA234u;
            // 0x3fa238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FA23Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FA23Cu; }
            if (ctx->pc != 0x3FA23Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3FA23Cu;
label_3fa23c:
    // 0x3fa23c: 0xe6140de8  swc1        $f20, 0xDE8($s0)
    ctx->pc = 0x3fa23cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
label_3fa240:
    // 0x3fa240: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3fa240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_3fa244:
    // 0x3fa244: 0x8e030d60  lw          $v1, 0xD60($s0)
    ctx->pc = 0x3fa244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_3fa248:
    // 0x3fa248: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3fa248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_3fa24c:
    // 0x3fa24c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3fa24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3fa250:
    // 0x3fa250: 0x8624002c  lh          $a0, 0x2C($s1)
    ctx->pc = 0x3fa250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_3fa254:
    // 0x3fa254: 0x8622002a  lh          $v0, 0x2A($s1)
    ctx->pc = 0x3fa254u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
label_3fa258:
    // 0x3fa258: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3fa258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_3fa25c:
    // 0x3fa25c: 0x80650004  lb          $a1, 0x4($v1)
    ctx->pc = 0x3fa25cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_3fa260:
    // 0x3fa260: 0xc6160e1c  lwc1        $f22, 0xE1C($s0)
    ctx->pc = 0x3fa260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3fa264:
    // 0x3fa264: 0xc6010e20  lwc1        $f1, 0xE20($s0)
    ctx->pc = 0x3fa264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fa268:
    // 0x3fa268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fa268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa26c:
    // 0x3fa26c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3fa26cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa270:
    // 0x3fa270: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3fa270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3fa274:
    // 0x3fa274: 0x468015e0  cvt.s.w     $f23, $f2
    ctx->pc = 0x3fa274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_3fa278:
    // 0x3fa278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fa278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fa27c:
    // 0x3fa27c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3fa27cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa280:
    // 0x3fa280: 0x0  nop
    ctx->pc = 0x3fa280u;
    // NOP
label_3fa284:
    // 0x3fa284: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x3fa284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3fa288:
    // 0x3fa288: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3fa288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa28c:
    // 0x3fa28c: 0x0  nop
    ctx->pc = 0x3fa28cu;
    // NOP
label_3fa290:
    // 0x3fa290: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x3fa290u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_3fa294:
    // 0x3fa294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3fa294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3fa298:
    // 0x3fa298: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3fa298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3fa29c:
    // 0x3fa29c: 0x46002832  c.eq.s      $f5, $f0
    ctx->pc = 0x3fa29cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa2a0:
    // 0x3fa2a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3fa2a4:
    if (ctx->pc == 0x3FA2A4u) {
        ctx->pc = 0x3FA2A4u;
            // 0x3fa2a4: 0x46022542  mul.s       $f21, $f4, $f2 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->pc = 0x3FA2A8u;
        goto label_3fa2a8;
    }
    ctx->pc = 0x3FA2A0u;
    {
        const bool branch_taken_0x3fa2a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FA2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA2A0u;
            // 0x3fa2a4: 0x46022542  mul.s       $f21, $f4, $f2 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa2a0) {
            ctx->pc = 0x3FA2ACu;
            goto label_3fa2ac;
        }
    }
    ctx->pc = 0x3FA2A8u;
label_3fa2a8:
    // 0x3fa2a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3fa2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa2ac:
    // 0x3fa2ac: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
label_3fa2b0:
    if (ctx->pc == 0x3FA2B0u) {
        ctx->pc = 0x3FA2B0u;
            // 0x3fa2b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3FA2B4u;
        goto label_3fa2b4;
    }
    ctx->pc = 0x3FA2ACu;
    {
        const bool branch_taken_0x3fa2ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3fa2ac) {
            ctx->pc = 0x3FA2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA2ACu;
            // 0x3fa2b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FA2C4u;
            goto label_3fa2c4;
        }
    }
    ctx->pc = 0x3FA2B4u;
label_3fa2b4:
    // 0x3fa2b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3fa2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa2b8:
    // 0x3fa2b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3fa2bc:
    if (ctx->pc == 0x3FA2BCu) {
        ctx->pc = 0x3FA2BCu;
            // 0x3fa2bc: 0x46801120  cvt.s.w     $f4, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3FA2C0u;
        goto label_3fa2c0;
    }
    ctx->pc = 0x3FA2B8u;
    {
        const bool branch_taken_0x3fa2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA2B8u;
            // 0x3fa2bc: 0x46801120  cvt.s.w     $f4, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa2b8) {
            ctx->pc = 0x3FA2DCu;
            goto label_3fa2dc;
        }
    }
    ctx->pc = 0x3FA2C0u;
label_3fa2c0:
    // 0x3fa2c0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3fa2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3fa2c4:
    // 0x3fa2c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3fa2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3fa2c8:
    // 0x3fa2c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3fa2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3fa2cc:
    // 0x3fa2cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3fa2ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa2d0:
    // 0x3fa2d0: 0x0  nop
    ctx->pc = 0x3fa2d0u;
    // NOP
label_3fa2d4:
    // 0x3fa2d4: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x3fa2d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3fa2d8:
    // 0x3fa2d8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x3fa2d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_3fa2dc:
    // 0x3fa2dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3fa2dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa2e0:
    // 0x3fa2e0: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x3fa2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
label_3fa2e4:
    // 0x3fa2e4: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3fa2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_3fa2e8:
    // 0x3fa2e8: 0x46171032  c.eq.s      $f2, $f23
    ctx->pc = 0x3fa2e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa2ec:
    // 0x3fa2ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3fa2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3fa2f0:
    // 0x3fa2f0: 0x0  nop
    ctx->pc = 0x3fa2f0u;
    // NOP
label_3fa2f4:
    // 0x3fa2f4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3fa2f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3fa2f8:
    // 0x3fa2f8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_3fa2fc:
    if (ctx->pc == 0x3FA2FCu) {
        ctx->pc = 0x3FA2FCu;
            // 0x3fa2fc: 0x4604181c  madd.s      $f0, $f3, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
        ctx->pc = 0x3FA300u;
        goto label_3fa300;
    }
    ctx->pc = 0x3FA2F8u;
    {
        const bool branch_taken_0x3fa2f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FA2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA2F8u;
            // 0x3fa2fc: 0x4604181c  madd.s      $f0, $f3, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa2f8) {
            ctx->pc = 0x3FA324u;
            goto label_3fa324;
        }
    }
    ctx->pc = 0x3FA300u;
label_3fa300:
    // 0x3fa300: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3fa300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_3fa304:
    // 0x3fa304: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3fa304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_3fa308:
    // 0x3fa308: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3fa308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa30c:
    // 0x3fa30c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3fa30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_3fa310:
    // 0x3fa310: 0x4602b8c3  div.s       $f3, $f23, $f2
    ctx->pc = 0x3fa310u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[3] = ctx->f[23] / ctx->f[2];
label_3fa314:
    // 0x3fa314: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3fa314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa318:
    // 0x3fa318: 0x0  nop
    ctx->pc = 0x3fa318u;
    // NOP
label_3fa31c:
    // 0x3fa31c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3fa31cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3fa320:
    // 0x3fa320: 0x46001147  neg.s       $f5, $f2
    ctx->pc = 0x3fa320u;
    ctx->f[5] = FPU_NEG_S(ctx->f[2]);
label_3fa324:
    // 0x3fa324: 0x4616b0c2  mul.s       $f3, $f22, $f22
    ctx->pc = 0x3fa324u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
label_3fa328:
    // 0x3fa328: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x3fa328u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3fa32c:
    // 0x3fa32c: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x3fa32cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa330:
    // 0x3fa330: 0x45030020  bc1tl       . + 4 + (0x20 << 2)
label_3fa334:
    if (ctx->pc == 0x3FA334u) {
        ctx->pc = 0x3FA334u;
            // 0x3fa334: 0x46050840  add.s       $f1, $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->pc = 0x3FA338u;
        goto label_3fa338;
    }
    ctx->pc = 0x3FA330u;
    {
        const bool branch_taken_0x3fa330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fa330) {
            ctx->pc = 0x3FA334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA330u;
            // 0x3fa334: 0x46050840  add.s       $f1, $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FA3B4u;
            goto label_3fa3b4;
        }
    }
    ctx->pc = 0x3FA338u;
label_3fa338:
    // 0x3fa338: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3fa338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa33c:
    // 0x3fa33c: 0x0  nop
    ctx->pc = 0x3fa33cu;
    // NOP
label_3fa340:
    // 0x3fa340: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3fa340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa344:
    // 0x3fa344: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3fa348:
    if (ctx->pc == 0x3FA348u) {
        ctx->pc = 0x3FA348u;
            // 0x3fa348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FA34Cu;
        goto label_3fa34c;
    }
    ctx->pc = 0x3FA344u;
    {
        const bool branch_taken_0x3fa344 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FA348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA344u;
            // 0x3fa348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa344) {
            ctx->pc = 0x3FA350u;
            goto label_3fa350;
        }
    }
    ctx->pc = 0x3FA34Cu;
label_3fa34c:
    // 0x3fa34c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3fa34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa350:
    // 0x3fa350: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
label_3fa354:
    if (ctx->pc == 0x3FA354u) {
        ctx->pc = 0x3FA354u;
            // 0x3fa354: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3FA358u;
        goto label_3fa358;
    }
    ctx->pc = 0x3FA350u;
    {
        const bool branch_taken_0x3fa350 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3fa350) {
            ctx->pc = 0x3FA354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA350u;
            // 0x3fa354: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FA368u;
            goto label_3fa368;
        }
    }
    ctx->pc = 0x3FA358u;
label_3fa358:
    // 0x3fa358: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3fa358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa35c:
    // 0x3fa35c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3fa360:
    if (ctx->pc == 0x3FA360u) {
        ctx->pc = 0x3FA360u;
            // 0x3fa360: 0x468011a0  cvt.s.w     $f6, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3FA364u;
        goto label_3fa364;
    }
    ctx->pc = 0x3FA35Cu;
    {
        const bool branch_taken_0x3fa35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA35Cu;
            // 0x3fa360: 0x468011a0  cvt.s.w     $f6, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa35c) {
            ctx->pc = 0x3FA380u;
            goto label_3fa380;
        }
    }
    ctx->pc = 0x3FA364u;
label_3fa364:
    // 0x3fa364: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3fa364u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3fa368:
    // 0x3fa368: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3fa368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3fa36c:
    // 0x3fa36c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3fa36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3fa370:
    // 0x3fa370: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3fa370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa374:
    // 0x3fa374: 0x0  nop
    ctx->pc = 0x3fa374u;
    // NOP
label_3fa378:
    // 0x3fa378: 0x468011a0  cvt.s.w     $f6, $f2
    ctx->pc = 0x3fa378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_3fa37c:
    // 0x3fa37c: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x3fa37cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_3fa380:
    // 0x3fa380: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3fa380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3fa384:
    // 0x3fa384: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3fa384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3fa388:
    // 0x3fa388: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x3fa388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_3fa38c:
    // 0x3fa38c: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x3fa38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
label_3fa390:
    // 0x3fa390: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x3fa390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
label_3fa394:
    // 0x3fa394: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3fa394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3fa398:
    // 0x3fa398: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3fa398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3fa39c:
    // 0x3fa39c: 0x0  nop
    ctx->pc = 0x3fa39cu;
    // NOP
label_3fa3a0:
    // 0x3fa3a0: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x3fa3a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_3fa3a4:
    // 0x3fa3a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3fa3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa3a8:
    // 0x3fa3a8: 0x460628dc  madd.s      $f3, $f5, $f6
    ctx->pc = 0x3fa3a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
label_3fa3ac:
    // 0x3fa3ac: 0x46031142  mul.s       $f5, $f2, $f3
    ctx->pc = 0x3fa3acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3fa3b0:
    // 0x3fa3b0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3fa3b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_3fa3b4:
    // 0x3fa3b4: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x3fa3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
label_3fa3b8:
    // 0x3fa3b8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3fa3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_3fa3bc:
    // 0x3fa3bc: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x3fa3bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3fa3c0:
    // 0x3fa3c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3fa3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa3c4:
    // 0x3fa3c4: 0x0  nop
    ctx->pc = 0x3fa3c4u;
    // NOP
label_3fa3c8:
    // 0x3fa3c8: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3fa3c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa3cc:
    // 0x3fa3cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3fa3d0:
    if (ctx->pc == 0x3FA3D0u) {
        ctx->pc = 0x3FA3D0u;
            // 0x3fa3d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FA3D4u;
        goto label_3fa3d4;
    }
    ctx->pc = 0x3FA3CCu;
    {
        const bool branch_taken_0x3fa3cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FA3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA3CCu;
            // 0x3fa3d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa3cc) {
            ctx->pc = 0x3FA3D8u;
            goto label_3fa3d8;
        }
    }
    ctx->pc = 0x3FA3D4u;
label_3fa3d4:
    // 0x3fa3d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fa3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa3d8:
    // 0x3fa3d8: 0x4820005  bltzl       $a0, . + 4 + (0x5 << 2)
label_3fa3dc:
    if (ctx->pc == 0x3FA3DCu) {
        ctx->pc = 0x3FA3DCu;
            // 0x3fa3dc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x3FA3E0u;
        goto label_3fa3e0;
    }
    ctx->pc = 0x3FA3D8u;
    {
        const bool branch_taken_0x3fa3d8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3fa3d8) {
            ctx->pc = 0x3FA3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA3D8u;
            // 0x3fa3dc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FA3F0u;
            goto label_3fa3f0;
        }
    }
    ctx->pc = 0x3FA3E0u;
label_3fa3e0:
    // 0x3fa3e0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3fa3e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa3e4:
    // 0x3fa3e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3fa3e8:
    if (ctx->pc == 0x3FA3E8u) {
        ctx->pc = 0x3FA3E8u;
            // 0x3fa3e8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3FA3ECu;
        goto label_3fa3ec;
    }
    ctx->pc = 0x3FA3E4u;
    {
        const bool branch_taken_0x3fa3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA3E4u;
            // 0x3fa3e8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa3e4) {
            ctx->pc = 0x3FA408u;
            goto label_3fa408;
        }
    }
    ctx->pc = 0x3FA3ECu;
label_3fa3ec:
    // 0x3fa3ec: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3fa3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3fa3f0:
    // 0x3fa3f0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3fa3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3fa3f4:
    // 0x3fa3f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3fa3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3fa3f8:
    // 0x3fa3f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3fa3f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa3fc:
    // 0x3fa3fc: 0x0  nop
    ctx->pc = 0x3fa3fcu;
    // NOP
label_3fa400:
    // 0x3fa400: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3fa400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3fa404:
    // 0x3fa404: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3fa404u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3fa408:
    // 0x3fa408: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x3fa408u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3fa40c:
    // 0x3fa40c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3fa40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3fa410:
    // 0x3fa410: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3fa410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fa414:
    // 0x3fa414: 0xe6020e20  swc1        $f2, 0xE20($s0)
    ctx->pc = 0x3fa414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3616), bits); }
label_3fa418:
    // 0x3fa418: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3fa418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa41c:
    // 0x3fa41c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3fa41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3fa420:
    // 0x3fa420: 0x46150832  c.eq.s      $f1, $f21
    ctx->pc = 0x3fa420u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa424:
    // 0x3fa424: 0x46160818  adda.s      $f1, $f22
    ctx->pc = 0x3fa424u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_3fa428:
    // 0x3fa428: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3fa428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fa42c:
    // 0x3fa42c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3fa430:
    if (ctx->pc == 0x3FA430u) {
        ctx->pc = 0x3FA430u;
            // 0x3fa430: 0x4601159c  madd.s      $f22, $f2, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->pc = 0x3FA434u;
        goto label_3fa434;
    }
    ctx->pc = 0x3FA42Cu;
    {
        const bool branch_taken_0x3fa42c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FA430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA42Cu;
            // 0x3fa430: 0x4601159c  madd.s      $f22, $f2, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa42c) {
            ctx->pc = 0x3FA438u;
            goto label_3fa438;
        }
    }
    ctx->pc = 0x3FA434u;
label_3fa434:
    // 0x3fa434: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fa434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa438:
    // 0x3fa438: 0x4820005  bltzl       $a0, . + 4 + (0x5 << 2)
label_3fa43c:
    if (ctx->pc == 0x3FA43Cu) {
        ctx->pc = 0x3FA43Cu;
            // 0x3fa43c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x3FA440u;
        goto label_3fa440;
    }
    ctx->pc = 0x3FA438u;
    {
        const bool branch_taken_0x3fa438 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3fa438) {
            ctx->pc = 0x3FA43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA438u;
            // 0x3fa43c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FA450u;
            goto label_3fa450;
        }
    }
    ctx->pc = 0x3FA440u;
label_3fa440:
    // 0x3fa440: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3fa440u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa444:
    // 0x3fa444: 0x10000008  b           . + 4 + (0x8 << 2)
label_3fa448:
    if (ctx->pc == 0x3FA448u) {
        ctx->pc = 0x3FA448u;
            // 0x3fa448: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3FA44Cu;
        goto label_3fa44c;
    }
    ctx->pc = 0x3FA444u;
    {
        const bool branch_taken_0x3fa444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA444u;
            // 0x3fa448: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa444) {
            ctx->pc = 0x3FA468u;
            goto label_3fa468;
        }
    }
    ctx->pc = 0x3FA44Cu;
label_3fa44c:
    // 0x3fa44c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3fa44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3fa450:
    // 0x3fa450: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3fa450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3fa454:
    // 0x3fa454: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3fa454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3fa458:
    // 0x3fa458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3fa458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa45c:
    // 0x3fa45c: 0x0  nop
    ctx->pc = 0x3fa45cu;
    // NOP
label_3fa460:
    // 0x3fa460: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3fa460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3fa464:
    // 0x3fa464: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3fa464u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3fa468:
    // 0x3fa468: 0x0  nop
    ctx->pc = 0x3fa468u;
    // NOP
label_3fa46c:
    // 0x3fa46c: 0x0  nop
    ctx->pc = 0x3fa46cu;
    // NOP
label_3fa470:
    // 0x3fa470: 0x4600b503  div.s       $f20, $f22, $f0
    ctx->pc = 0x3fa470u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[20] = ctx->f[22] / ctx->f[0];
label_3fa474:
    // 0x3fa474: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x3fa474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
label_3fa478:
    // 0x3fa478: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x3fa478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_3fa47c:
    // 0x3fa47c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3fa47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3fa480:
    // 0x3fa480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fa480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa484:
    // 0x3fa484: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3fa484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa488:
    // 0x3fa488: 0x0  nop
    ctx->pc = 0x3fa488u;
    // NOP
label_3fa48c:
    // 0x3fa48c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3fa48cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3fa490:
    // 0x3fa490: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3fa490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3fa494:
    // 0x3fa494: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3fa494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fa498:
    // 0x3fa498: 0xc04781c  jal         func_11E070
label_3fa49c:
    if (ctx->pc == 0x3FA49Cu) {
        ctx->pc = 0x3FA49Cu;
            // 0x3fa49c: 0x46020d5c  madd.s      $f21, $f1, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x3FA4A0u;
        goto label_3fa4a0;
    }
    ctx->pc = 0x3FA498u;
    SET_GPR_U32(ctx, 31, 0x3FA4A0u);
    ctx->pc = 0x3FA49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA498u;
            // 0x3fa49c: 0x46020d5c  madd.s      $f21, $f1, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA4A0u; }
        if (ctx->pc != 0x3FA4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA4A0u; }
        if (ctx->pc != 0x3FA4A0u) { return; }
    }
    ctx->pc = 0x3FA4A0u;
label_3fa4a0:
    // 0x3fa4a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3fa4a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3fa4a4:
    // 0x3fa4a4: 0x4600a902  mul.s       $f4, $f21, $f0
    ctx->pc = 0x3fa4a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_3fa4a8:
    // 0x3fa4a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fa4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa4ac:
    // 0x3fa4ac: 0x0  nop
    ctx->pc = 0x3fa4acu;
    // NOP
label_3fa4b0:
    // 0x3fa4b0: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x3fa4b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa4b4:
    // 0x3fa4b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3fa4b8:
    if (ctx->pc == 0x3FA4B8u) {
        ctx->pc = 0x3FA4B8u;
            // 0x3fa4b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FA4BCu;
        goto label_3fa4bc;
    }
    ctx->pc = 0x3FA4B4u;
    {
        const bool branch_taken_0x3fa4b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FA4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA4B4u;
            // 0x3fa4b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa4b4) {
            ctx->pc = 0x3FA4C0u;
            goto label_3fa4c0;
        }
    }
    ctx->pc = 0x3FA4BCu;
label_3fa4bc:
    // 0x3fa4bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3fa4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa4c0:
    // 0x3fa4c0: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
label_3fa4c4:
    if (ctx->pc == 0x3FA4C4u) {
        ctx->pc = 0x3FA4C4u;
            // 0x3fa4c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3FA4C8u;
        goto label_3fa4c8;
    }
    ctx->pc = 0x3FA4C0u;
    {
        const bool branch_taken_0x3fa4c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3fa4c0) {
            ctx->pc = 0x3FA4C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA4C0u;
            // 0x3fa4c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FA4D8u;
            goto label_3fa4d8;
        }
    }
    ctx->pc = 0x3FA4C8u;
label_3fa4c8:
    // 0x3fa4c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fa4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa4cc:
    // 0x3fa4cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3fa4d0:
    if (ctx->pc == 0x3FA4D0u) {
        ctx->pc = 0x3FA4D0u;
            // 0x3fa4d0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3FA4D4u;
        goto label_3fa4d4;
    }
    ctx->pc = 0x3FA4CCu;
    {
        const bool branch_taken_0x3fa4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA4CCu;
            // 0x3fa4d0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa4cc) {
            ctx->pc = 0x3FA4F0u;
            goto label_3fa4f0;
        }
    }
    ctx->pc = 0x3FA4D4u;
label_3fa4d4:
    // 0x3fa4d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3fa4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3fa4d8:
    // 0x3fa4d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3fa4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3fa4dc:
    // 0x3fa4dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3fa4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3fa4e0:
    // 0x3fa4e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fa4e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa4e4:
    // 0x3fa4e4: 0x0  nop
    ctx->pc = 0x3fa4e4u;
    // NOP
label_3fa4e8:
    // 0x3fa4e8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3fa4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3fa4ec:
    // 0x3fa4ec: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3fa4ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3fa4f0:
    // 0x3fa4f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3fa4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3fa4f4:
    // 0x3fa4f4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3fa4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3fa4f8:
    // 0x3fa4f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fa4f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa4fc:
    // 0x3fa4fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3fa4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa500:
    // 0x3fa500: 0x0  nop
    ctx->pc = 0x3fa500u;
    // NOP
label_3fa504:
    // 0x3fa504: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x3fa504u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa508:
    // 0x3fa508: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3fa508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa50c:
    // 0x3fa50c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3fa50cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3fa510:
    // 0x3fa510: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x3fa510u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3fa514:
    // 0x3fa514: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3fa518:
    if (ctx->pc == 0x3FA518u) {
        ctx->pc = 0x3FA518u;
            // 0x3fa518: 0x46040002  mul.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->pc = 0x3FA51Cu;
        goto label_3fa51c;
    }
    ctx->pc = 0x3FA514u;
    {
        const bool branch_taken_0x3fa514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FA518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA514u;
            // 0x3fa518: 0x46040002  mul.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa514) {
            ctx->pc = 0x3FA524u;
            goto label_3fa524;
        }
    }
    ctx->pc = 0x3FA51Cu;
label_3fa51c:
    // 0x3fa51c: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x3fa51cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_3fa520:
    // 0x3fa520: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x3fa520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_3fa524:
    // 0x3fa524: 0x4600b040  add.s       $f1, $f22, $f0
    ctx->pc = 0x3fa524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_3fa528:
    // 0x3fa528: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3fa528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_3fa52c:
    // 0x3fa52c: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x3fa52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_3fa530:
    // 0x3fa530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fa534:
    // 0x3fa534: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fa534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3fa538:
    // 0x3fa538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fa538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa53c:
    // 0x3fa53c: 0x0  nop
    ctx->pc = 0x3fa53cu;
    // NOP
label_3fa540:
    // 0x3fa540: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3fa540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3fa544:
    // 0x3fa544: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3fa548:
    // 0x3fa548: 0xe6010e1c  swc1        $f1, 0xE1C($s0)
    ctx->pc = 0x3fa548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3612), bits); }
label_3fa54c:
    // 0x3fa54c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3fa54cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3fa550:
    // 0x3fa550: 0x0  nop
    ctx->pc = 0x3fa550u;
    // NOP
label_3fa554:
    // 0x3fa554: 0xae030af8  sw          $v1, 0xAF8($s0)
    ctx->pc = 0x3fa554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2808), GPR_U32(ctx, 3));
label_3fa558:
    // 0x3fa558: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x3fa558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3fa55c:
    // 0x3fa55c: 0x92630054  lbu         $v1, 0x54($s3)
    ctx->pc = 0x3fa55cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 84)));
label_3fa560:
    // 0x3fa560: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3fa560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fa564:
    // 0x3fa564: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fa564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3fa568:
    // 0x3fa568: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fa568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fa56c:
    // 0x3fa56c: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x3fa56cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3fa570:
    // 0x3fa570: 0xc0c117c  jal         func_3045F0
label_3fa574:
    if (ctx->pc == 0x3FA574u) {
        ctx->pc = 0x3FA574u;
            // 0x3fa574: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA578u;
        goto label_3fa578;
    }
    ctx->pc = 0x3FA570u;
    SET_GPR_U32(ctx, 31, 0x3FA578u);
    ctx->pc = 0x3FA574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA570u;
            // 0x3fa574: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3045F0u;
    if (runtime->hasFunction(0x3045F0u)) {
        auto targetFn = runtime->lookupFunction(0x3045F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA578u; }
        if (ctx->pc != 0x3FA578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003045F0_0x3045f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA578u; }
        if (ctx->pc != 0x3FA578u) { return; }
    }
    ctx->pc = 0x3FA578u;
label_3fa578:
    // 0x3fa578: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fa578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3fa57c:
    // 0x3fa57c: 0xc04cc04  jal         func_133010
label_3fa580:
    if (ctx->pc == 0x3FA580u) {
        ctx->pc = 0x3FA580u;
            // 0x3fa580: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x3FA584u;
        goto label_3fa584;
    }
    ctx->pc = 0x3FA57Cu;
    SET_GPR_U32(ctx, 31, 0x3FA584u);
    ctx->pc = 0x3FA580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA57Cu;
            // 0x3fa580: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA584u; }
        if (ctx->pc != 0x3FA584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA584u; }
        if (ctx->pc != 0x3FA584u) { return; }
    }
    ctx->pc = 0x3FA584u;
label_3fa584:
    // 0x3fa584: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3fa584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3fa588:
    // 0x3fa588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fa588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fa58c:
    // 0x3fa58c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3fa58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3fa590:
    // 0x3fa590: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x3fa590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fa594:
    // 0x3fa594: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3fa594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fa598:
    // 0x3fa598: 0xc0b8024  jal         func_2E0090
label_3fa59c:
    if (ctx->pc == 0x3FA59Cu) {
        ctx->pc = 0x3FA59Cu;
            // 0x3fa59c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3FA5A0u;
        goto label_3fa5a0;
    }
    ctx->pc = 0x3FA598u;
    SET_GPR_U32(ctx, 31, 0x3FA5A0u);
    ctx->pc = 0x3FA59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA598u;
            // 0x3fa59c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0090u;
    if (runtime->hasFunction(0x2E0090u)) {
        auto targetFn = runtime->lookupFunction(0x2E0090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA5A0u; }
        if (ctx->pc != 0x3FA5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0090_0x2e0090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA5A0u; }
        if (ctx->pc != 0x3FA5A0u) { return; }
    }
    ctx->pc = 0x3FA5A0u;
label_3fa5a0:
    // 0x3fa5a0: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x3fa5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_3fa5a4:
    // 0x3fa5a4: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x3fa5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_3fa5a8:
    // 0x3fa5a8: 0xc04cc90  jal         func_133240
label_3fa5ac:
    if (ctx->pc == 0x3FA5ACu) {
        ctx->pc = 0x3FA5ACu;
            // 0x3fa5ac: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3FA5B0u;
        goto label_3fa5b0;
    }
    ctx->pc = 0x3FA5A8u;
    SET_GPR_U32(ctx, 31, 0x3FA5B0u);
    ctx->pc = 0x3FA5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA5A8u;
            // 0x3fa5ac: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA5B0u; }
        if (ctx->pc != 0x3FA5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA5B0u; }
        if (ctx->pc != 0x3FA5B0u) { return; }
    }
    ctx->pc = 0x3FA5B0u;
label_3fa5b0:
    // 0x3fa5b0: 0x86430028  lh          $v1, 0x28($s2)
    ctx->pc = 0x3fa5b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
label_3fa5b4:
    // 0x3fa5b4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3fa5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_3fa5b8:
    // 0x3fa5b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3fa5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa5bc:
    // 0x3fa5bc: 0x8e040c30  lw          $a0, 0xC30($s0)
    ctx->pc = 0x3fa5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3120)));
label_3fa5c0:
    // 0x3fa5c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fa5c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa5c4:
    // 0x3fa5c4: 0x96050c42  lhu         $a1, 0xC42($s0)
    ctx->pc = 0x3fa5c4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 3138)));
label_3fa5c8:
    // 0x3fa5c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3fa5c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa5cc:
    // 0x3fa5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fa5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fa5d0:
    // 0x3fa5d0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3fa5d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3fa5d4:
    // 0x3fa5d4: 0x9484001c  lhu         $a0, 0x1C($a0)
    ctx->pc = 0x3fa5d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_3fa5d8:
    // 0x3fa5d8: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x3fa5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_3fa5dc:
    // 0x3fa5dc: 0x46011143  div.s       $f5, $f2, $f1
    ctx->pc = 0x3fa5dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[5] = ctx->f[2] / ctx->f[1];
label_3fa5e0:
    // 0x3fa5e0: 0x0  nop
    ctx->pc = 0x3fa5e0u;
    // NOP
label_3fa5e4:
    // 0x3fa5e4: 0x0  nop
    ctx->pc = 0x3fa5e4u;
    // NOP
label_3fa5e8:
    // 0x3fa5e8: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x3fa5e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa5ec:
    // 0x3fa5ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3fa5f0:
    if (ctx->pc == 0x3FA5F0u) {
        ctx->pc = 0x3FA5F4u;
        goto label_3fa5f4;
    }
    ctx->pc = 0x3FA5ECu;
    {
        const bool branch_taken_0x3fa5ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fa5ec) {
            ctx->pc = 0x3FA5F8u;
            goto label_3fa5f8;
        }
    }
    ctx->pc = 0x3FA5F4u;
label_3fa5f4:
    // 0x3fa5f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3fa5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa5f8:
    // 0x3fa5f8: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
label_3fa5fc:
    if (ctx->pc == 0x3FA5FCu) {
        ctx->pc = 0x3FA5FCu;
            // 0x3fa5fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3FA600u;
        goto label_3fa600;
    }
    ctx->pc = 0x3FA5F8u;
    {
        const bool branch_taken_0x3fa5f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3fa5f8) {
            ctx->pc = 0x3FA5FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA5F8u;
            // 0x3fa5fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FA610u;
            goto label_3fa610;
        }
    }
    ctx->pc = 0x3FA600u;
label_3fa600:
    // 0x3fa600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fa600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa604:
    // 0x3fa604: 0x10000008  b           . + 4 + (0x8 << 2)
label_3fa608:
    if (ctx->pc == 0x3FA608u) {
        ctx->pc = 0x3FA608u;
            // 0x3fa608: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3FA60Cu;
        goto label_3fa60c;
    }
    ctx->pc = 0x3FA604u;
    {
        const bool branch_taken_0x3fa604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA604u;
            // 0x3fa608: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa604) {
            ctx->pc = 0x3FA628u;
            goto label_3fa628;
        }
    }
    ctx->pc = 0x3FA60Cu;
label_3fa60c:
    // 0x3fa60c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3fa60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3fa610:
    // 0x3fa610: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3fa610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3fa614:
    // 0x3fa614: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3fa614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3fa618:
    // 0x3fa618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fa618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa61c:
    // 0x3fa61c: 0x0  nop
    ctx->pc = 0x3fa61cu;
    // NOP
label_3fa620:
    // 0x3fa620: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3fa620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3fa624:
    // 0x3fa624: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x3fa624u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_3fa628:
    // 0x3fa628: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x3fa628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3fa62c:
    // 0x3fa62c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x3fa62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
label_3fa630:
    // 0x3fa630: 0x828818  mult        $s1, $a0, $v0
    ctx->pc = 0x3fa630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_3fa634:
    // 0x3fa634: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3fa634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fa638:
    // 0x3fa638: 0x0  nop
    ctx->pc = 0x3fa638u;
    // NOP
label_3fa63c:
    // 0x3fa63c: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x3fa63cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_3fa640:
    // 0x3fa640: 0xc6020e1c  lwc1        $f2, 0xE1C($s0)
    ctx->pc = 0x3fa640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fa644:
    // 0x3fa644: 0x34623333  ori         $v0, $v1, 0x3333
    ctx->pc = 0x3fa644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_3fa648:
    // 0x3fa648: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3fa648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3fa64c:
    // 0x3fa64c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3fa64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3fa650:
    // 0x3fa650: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3fa650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_3fa654:
    // 0x3fa654: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3fa654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_3fa658:
    // 0x3fa658: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3fa658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa65c:
    // 0x3fa65c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3fa65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_3fa660:
    // 0x3fa660: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3fa660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3fa664:
    // 0x3fa664: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3fa664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_3fa668:
    // 0x3fa668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fa668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa66c:
    // 0x3fa66c: 0x0  nop
    ctx->pc = 0x3fa66cu;
    // NOP
label_3fa670:
    // 0x3fa670: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3fa670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3fa674:
    // 0x3fa674: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa674u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3fa678:
    // 0x3fa678: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x3fa678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3fa67c:
    // 0x3fa67c: 0xc66d0014  lwc1        $f13, 0x14($s3)
    ctx->pc = 0x3fa67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3fa680:
    // 0x3fa680: 0xc66e0018  lwc1        $f14, 0x18($s3)
    ctx->pc = 0x3fa680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3fa684:
    // 0x3fa684: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3fa684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3fa688:
    // 0x3fa688: 0xc04c970  jal         func_1325C0
label_3fa68c:
    if (ctx->pc == 0x3FA68Cu) {
        ctx->pc = 0x3FA68Cu;
            // 0x3fa68c: 0x46041d1c  madd.s      $f20, $f3, $f4 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
        ctx->pc = 0x3FA690u;
        goto label_3fa690;
    }
    ctx->pc = 0x3FA688u;
    SET_GPR_U32(ctx, 31, 0x3FA690u);
    ctx->pc = 0x3FA68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA688u;
            // 0x3fa68c: 0x46041d1c  madd.s      $f20, $f3, $f4 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA690u; }
        if (ctx->pc != 0x3FA690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA690u; }
        if (ctx->pc != 0x3FA690u) { return; }
    }
    ctx->pc = 0x3FA690u;
label_3fa690:
    // 0x3fa690: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3fa690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fa694:
    // 0x3fa694: 0xc04f278  jal         func_13C9E0
label_3fa698:
    if (ctx->pc == 0x3FA698u) {
        ctx->pc = 0x3FA698u;
            // 0x3fa698: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3FA69Cu;
        goto label_3fa69c;
    }
    ctx->pc = 0x3FA694u;
    SET_GPR_U32(ctx, 31, 0x3FA69Cu);
    ctx->pc = 0x3FA698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA694u;
            // 0x3fa698: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA69Cu; }
        if (ctx->pc != 0x3FA69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA69Cu; }
        if (ctx->pc != 0x3FA69Cu) { return; }
    }
    ctx->pc = 0x3FA69Cu;
label_3fa69c:
    // 0x3fa69c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fa69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3fa6a0:
    // 0x3fa6a0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3fa6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fa6a4:
    // 0x3fa6a4: 0xc04cca0  jal         func_133280
label_3fa6a8:
    if (ctx->pc == 0x3FA6A8u) {
        ctx->pc = 0x3FA6A8u;
            // 0x3fa6a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA6ACu;
        goto label_3fa6ac;
    }
    ctx->pc = 0x3FA6A4u;
    SET_GPR_U32(ctx, 31, 0x3FA6ACu);
    ctx->pc = 0x3FA6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA6A4u;
            // 0x3fa6a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA6ACu; }
        if (ctx->pc != 0x3FA6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA6ACu; }
        if (ctx->pc != 0x3FA6ACu) { return; }
    }
    ctx->pc = 0x3FA6ACu;
label_3fa6ac:
    // 0x3fa6ac: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x3fa6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_3fa6b0:
    // 0x3fa6b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fa6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fa6b4:
    // 0x3fa6b4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3fa6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3fa6b8:
    // 0x3fa6b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fa6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3fa6bc:
    // 0x3fa6bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3fa6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3fa6c0:
    // 0x3fa6c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fa6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fa6c4:
    // 0x3fa6c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fa6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fa6c8:
    // 0x3fa6c8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3fa6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fa6cc:
    // 0x3fa6cc: 0xc04cc70  jal         func_1331C0
label_3fa6d0:
    if (ctx->pc == 0x3FA6D0u) {
        ctx->pc = 0x3FA6D0u;
            // 0x3fa6d0: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x3FA6D4u;
        goto label_3fa6d4;
    }
    ctx->pc = 0x3FA6CCu;
    SET_GPR_U32(ctx, 31, 0x3FA6D4u);
    ctx->pc = 0x3FA6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA6CCu;
            // 0x3fa6d0: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA6D4u; }
        if (ctx->pc != 0x3FA6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA6D4u; }
        if (ctx->pc != 0x3FA6D4u) { return; }
    }
    ctx->pc = 0x3FA6D4u;
label_3fa6d4:
    // 0x3fa6d4: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x3fa6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_3fa6d8:
    // 0x3fa6d8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3fa6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3fa6dc:
    // 0x3fa6dc: 0xc04cbe0  jal         func_132F80
label_3fa6e0:
    if (ctx->pc == 0x3FA6E0u) {
        ctx->pc = 0x3FA6E0u;
            // 0x3fa6e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA6E4u;
        goto label_3fa6e4;
    }
    ctx->pc = 0x3FA6DCu;
    SET_GPR_U32(ctx, 31, 0x3FA6E4u);
    ctx->pc = 0x3FA6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA6DCu;
            // 0x3fa6e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA6E4u; }
        if (ctx->pc != 0x3FA6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA6E4u; }
        if (ctx->pc != 0x3FA6E4u) { return; }
    }
    ctx->pc = 0x3FA6E4u;
label_3fa6e4:
    // 0x3fa6e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3fa6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3fa6e8:
    // 0x3fa6e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fa6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3fa6ec:
    // 0x3fa6ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3fa6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa6f0:
    // 0x3fa6f0: 0xc04cc70  jal         func_1331C0
label_3fa6f4:
    if (ctx->pc == 0x3FA6F4u) {
        ctx->pc = 0x3FA6F4u;
            // 0x3fa6f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA6F8u;
        goto label_3fa6f8;
    }
    ctx->pc = 0x3FA6F0u;
    SET_GPR_U32(ctx, 31, 0x3FA6F8u);
    ctx->pc = 0x3FA6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA6F0u;
            // 0x3fa6f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA6F8u; }
        if (ctx->pc != 0x3FA6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA6F8u; }
        if (ctx->pc != 0x3FA6F8u) { return; }
    }
    ctx->pc = 0x3FA6F8u;
label_3fa6f8:
    // 0x3fa6f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fa6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3fa6fc:
    // 0x3fa6fc: 0xc04cc44  jal         func_133110
label_3fa700:
    if (ctx->pc == 0x3FA700u) {
        ctx->pc = 0x3FA700u;
            // 0x3fa700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA704u;
        goto label_3fa704;
    }
    ctx->pc = 0x3FA6FCu;
    SET_GPR_U32(ctx, 31, 0x3FA704u);
    ctx->pc = 0x3FA700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA6FCu;
            // 0x3fa700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA704u; }
        if (ctx->pc != 0x3FA704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA704u; }
        if (ctx->pc != 0x3FA704u) { return; }
    }
    ctx->pc = 0x3FA704u;
label_3fa704:
    // 0x3fa704: 0x260402e0  addiu       $a0, $s0, 0x2E0
    ctx->pc = 0x3fa704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
label_3fa708:
    // 0x3fa708: 0xc04cc04  jal         func_133010
label_3fa70c:
    if (ctx->pc == 0x3FA70Cu) {
        ctx->pc = 0x3FA70Cu;
            // 0x3fa70c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3FA710u;
        goto label_3fa710;
    }
    ctx->pc = 0x3FA708u;
    SET_GPR_U32(ctx, 31, 0x3FA710u);
    ctx->pc = 0x3FA70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA708u;
            // 0x3fa70c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA710u; }
        if (ctx->pc != 0x3FA710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA710u; }
        if (ctx->pc != 0x3FA710u) { return; }
    }
    ctx->pc = 0x3FA710u;
label_3fa710:
    // 0x3fa710: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3fa710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3fa714:
    // 0x3fa714: 0xc075318  jal         func_1D4C60
label_3fa718:
    if (ctx->pc == 0x3FA718u) {
        ctx->pc = 0x3FA718u;
            // 0x3fa718: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->pc = 0x3FA71Cu;
        goto label_3fa71c;
    }
    ctx->pc = 0x3FA714u;
    SET_GPR_U32(ctx, 31, 0x3FA71Cu);
    ctx->pc = 0x3FA718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA714u;
            // 0x3fa718: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA71Cu; }
        if (ctx->pc != 0x3FA71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA71Cu; }
        if (ctx->pc != 0x3FA71Cu) { return; }
    }
    ctx->pc = 0x3FA71Cu;
label_3fa71c:
    // 0x3fa71c: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x3fa71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3fa720:
    // 0x3fa720: 0x26040840  addiu       $a0, $s0, 0x840
    ctx->pc = 0x3fa720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_3fa724:
    // 0x3fa724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3fa724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa728:
    // 0x3fa728: 0xc0c6250  jal         func_318940
label_3fa72c:
    if (ctx->pc == 0x3FA72Cu) {
        ctx->pc = 0x3FA72Cu;
            // 0x3fa72c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA730u;
        goto label_3fa730;
    }
    ctx->pc = 0x3FA728u;
    SET_GPR_U32(ctx, 31, 0x3FA730u);
    ctx->pc = 0x3FA72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA728u;
            // 0x3fa72c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA730u; }
        if (ctx->pc != 0x3FA730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA730u; }
        if (ctx->pc != 0x3FA730u) { return; }
    }
    ctx->pc = 0x3FA730u;
label_3fa730:
    // 0x3fa730: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x3fa730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3fa734:
    // 0x3fa734: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3fa734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3fa738:
    // 0x3fa738: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3fa738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa73c:
    // 0x3fa73c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3fa73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_3fa740:
    // 0x3fa740: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3fa740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3fa744:
    // 0x3fa744: 0xc0c6250  jal         func_318940
label_3fa748:
    if (ctx->pc == 0x3FA748u) {
        ctx->pc = 0x3FA748u;
            // 0x3fa748: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->pc = 0x3FA74Cu;
        goto label_3fa74c;
    }
    ctx->pc = 0x3FA744u;
    SET_GPR_U32(ctx, 31, 0x3FA74Cu);
    ctx->pc = 0x3FA748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA744u;
            // 0x3fa748: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA74Cu; }
        if (ctx->pc != 0x3FA74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA74Cu; }
        if (ctx->pc != 0x3FA74Cu) { return; }
    }
    ctx->pc = 0x3FA74Cu;
label_3fa74c:
    // 0x3fa74c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x3fa74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3fa750:
    // 0x3fa750: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3fa750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3fa754:
    // 0x3fa754: 0xc075378  jal         func_1D4DE0
label_3fa758:
    if (ctx->pc == 0x3FA758u) {
        ctx->pc = 0x3FA758u;
            // 0x3fa758: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->pc = 0x3FA75Cu;
        goto label_3fa75c;
    }
    ctx->pc = 0x3FA754u;
    SET_GPR_U32(ctx, 31, 0x3FA75Cu);
    ctx->pc = 0x3FA758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA754u;
            // 0x3fa758: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA75Cu; }
        if (ctx->pc != 0x3FA75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA75Cu; }
        if (ctx->pc != 0x3FA75Cu) { return; }
    }
    ctx->pc = 0x3FA75Cu;
label_3fa75c:
    // 0x3fa75c: 0xc6010880  lwc1        $f1, 0x880($s0)
    ctx->pc = 0x3fa75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fa760:
    // 0x3fa760: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x3fa760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_3fa764:
    // 0x3fa764: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3fa764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3fa768:
    // 0x3fa768: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3fa768u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3fa76c:
    // 0x3fa76c: 0xc0c753c  jal         func_31D4F0
label_3fa770:
    if (ctx->pc == 0x3FA770u) {
        ctx->pc = 0x3FA770u;
            // 0x3fa770: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3FA774u;
        goto label_3fa774;
    }
    ctx->pc = 0x3FA76Cu;
    SET_GPR_U32(ctx, 31, 0x3FA774u);
    ctx->pc = 0x3FA770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA76Cu;
            // 0x3fa770: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA774u; }
        if (ctx->pc != 0x3FA774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA774u; }
        if (ctx->pc != 0x3FA774u) { return; }
    }
    ctx->pc = 0x3FA774u;
label_3fa774:
    // 0x3fa774: 0xc60c0880  lwc1        $f12, 0x880($s0)
    ctx->pc = 0x3fa774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3fa778:
    // 0x3fa778: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x3fa778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
label_3fa77c:
    // 0x3fa77c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3fa77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3fa780:
    // 0x3fa780: 0xc0c753c  jal         func_31D4F0
label_3fa784:
    if (ctx->pc == 0x3FA784u) {
        ctx->pc = 0x3FA784u;
            // 0x3fa784: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3FA788u;
        goto label_3fa788;
    }
    ctx->pc = 0x3FA780u;
    SET_GPR_U32(ctx, 31, 0x3FA788u);
    ctx->pc = 0x3FA784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA780u;
            // 0x3fa784: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA788u; }
        if (ctx->pc != 0x3FA788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA788u; }
        if (ctx->pc != 0x3FA788u) { return; }
    }
    ctx->pc = 0x3FA788u;
label_3fa788:
    // 0x3fa788: 0xc0b9210  jal         func_2E4840
label_3fa78c:
    if (ctx->pc == 0x3FA78Cu) {
        ctx->pc = 0x3FA78Cu;
            // 0x3fa78c: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->pc = 0x3FA790u;
        goto label_3fa790;
    }
    ctx->pc = 0x3FA788u;
    SET_GPR_U32(ctx, 31, 0x3FA790u);
    ctx->pc = 0x3FA78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA788u;
            // 0x3fa78c: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA790u; }
        if (ctx->pc != 0x3FA790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA790u; }
        if (ctx->pc != 0x3FA790u) { return; }
    }
    ctx->pc = 0x3FA790u;
label_3fa790:
    // 0x3fa790: 0x9643001e  lhu         $v1, 0x1E($s2)
    ctx->pc = 0x3fa790u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_3fa794:
    // 0x3fa794: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3fa794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_3fa798:
    // 0x3fa798: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_3fa79c:
    if (ctx->pc == 0x3FA79Cu) {
        ctx->pc = 0x3FA7A0u;
        goto label_3fa7a0;
    }
    ctx->pc = 0x3FA798u;
    {
        const bool branch_taken_0x3fa798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa798) {
            ctx->pc = 0x3FA8ACu;
            goto label_3fa8ac;
        }
    }
    ctx->pc = 0x3FA7A0u;
label_3fa7a0:
    // 0x3fa7a0: 0x8e050da0  lw          $a1, 0xDA0($s0)
    ctx->pc = 0x3fa7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_3fa7a4:
    // 0x3fa7a4: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x3fa7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_3fa7a8:
    // 0x3fa7a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3fa7a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fa7ac:
    // 0x3fa7ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3fa7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3fa7b0:
    // 0x3fa7b0: 0x34a40020  ori         $a0, $a1, 0x20
    ctx->pc = 0x3fa7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
label_3fa7b4:
    // 0x3fa7b4: 0xae040da0  sw          $a0, 0xDA0($s0)
    ctx->pc = 0x3fa7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 4));
label_3fa7b8:
    // 0x3fa7b8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3fa7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3fa7bc:
    // 0x3fa7bc: 0xc6020e24  lwc1        $f2, 0xE24($s0)
    ctx->pc = 0x3fa7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fa7c0:
    // 0x3fa7c0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3fa7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fa7c4:
    // 0x3fa7c4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3fa7c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3fa7c8:
    // 0x3fa7c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3fa7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fa7cc:
    // 0x3fa7cc: 0x45010037  bc1t        . + 4 + (0x37 << 2)
label_3fa7d0:
    if (ctx->pc == 0x3FA7D0u) {
        ctx->pc = 0x3FA7D0u;
            // 0x3fa7d0: 0xe6010e24  swc1        $f1, 0xE24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3620), bits); }
        ctx->pc = 0x3FA7D4u;
        goto label_3fa7d4;
    }
    ctx->pc = 0x3FA7CCu;
    {
        const bool branch_taken_0x3fa7cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FA7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA7CCu;
            // 0x3fa7d0: 0xe6010e24  swc1        $f1, 0xE24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa7cc) {
            ctx->pc = 0x3FA8ACu;
            goto label_3fa8ac;
        }
    }
    ctx->pc = 0x3FA7D4u;
label_3fa7d4:
    // 0x3fa7d4: 0xae000e24  sw          $zero, 0xE24($s0)
    ctx->pc = 0x3fa7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 0));
label_3fa7d8:
    // 0x3fa7d8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3fa7d8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3fa7dc:
    // 0x3fa7dc: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x3fa7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3fa7e0:
    // 0x3fa7e0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3fa7e4:
    if (ctx->pc == 0x3FA7E4u) {
        ctx->pc = 0x3FA7E4u;
            // 0x3fa7e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA7E8u;
        goto label_3fa7e8;
    }
    ctx->pc = 0x3FA7E0u;
    {
        const bool branch_taken_0x3fa7e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3FA7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA7E0u;
            // 0x3fa7e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa7e0) {
            ctx->pc = 0x3FA7F8u;
            goto label_3fa7f8;
        }
    }
    ctx->pc = 0x3FA7E8u;
label_3fa7e8:
    // 0x3fa7e8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3fa7e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3fa7ec:
    // 0x3fa7ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3fa7f0:
    if (ctx->pc == 0x3FA7F0u) {
        ctx->pc = 0x3FA7F4u;
        goto label_3fa7f4;
    }
    ctx->pc = 0x3FA7ECu;
    {
        const bool branch_taken_0x3fa7ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa7ec) {
            ctx->pc = 0x3FA7F8u;
            goto label_3fa7f8;
        }
    }
    ctx->pc = 0x3FA7F4u;
label_3fa7f4:
    // 0x3fa7f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fa7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fa7f8:
    // 0x3fa7f8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3fa7fc:
    if (ctx->pc == 0x3FA7FCu) {
        ctx->pc = 0x3FA800u;
        goto label_3fa800;
    }
    ctx->pc = 0x3FA7F8u;
    {
        const bool branch_taken_0x3fa7f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa7f8) {
            ctx->pc = 0x3FA814u;
            goto label_3fa814;
        }
    }
    ctx->pc = 0x3FA800u;
label_3fa800:
    // 0x3fa800: 0xc075eb4  jal         func_1D7AD0
label_3fa804:
    if (ctx->pc == 0x3FA804u) {
        ctx->pc = 0x3FA804u;
            // 0x3fa804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA808u;
        goto label_3fa808;
    }
    ctx->pc = 0x3FA800u;
    SET_GPR_U32(ctx, 31, 0x3FA808u);
    ctx->pc = 0x3FA804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA800u;
            // 0x3fa804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA808u; }
        if (ctx->pc != 0x3FA808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA808u; }
        if (ctx->pc != 0x3FA808u) { return; }
    }
    ctx->pc = 0x3FA808u;
label_3fa808:
    // 0x3fa808: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3fa80c:
    if (ctx->pc == 0x3FA80Cu) {
        ctx->pc = 0x3FA810u;
        goto label_3fa810;
    }
    ctx->pc = 0x3FA808u;
    {
        const bool branch_taken_0x3fa808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa808) {
            ctx->pc = 0x3FA814u;
            goto label_3fa814;
        }
    }
    ctx->pc = 0x3FA810u;
label_3fa810:
    // 0x3fa810: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3fa810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa814:
    // 0x3fa814: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_3fa818:
    if (ctx->pc == 0x3FA818u) {
        ctx->pc = 0x3FA81Cu;
        goto label_3fa81c;
    }
    ctx->pc = 0x3FA814u;
    {
        const bool branch_taken_0x3fa814 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa814) {
            ctx->pc = 0x3FA82Cu;
            goto label_3fa82c;
        }
    }
    ctx->pc = 0x3FA81Cu;
label_3fa81c:
    // 0x3fa81c: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x3fa81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3fa820:
    // 0x3fa820: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3fa820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fa824:
    // 0x3fa824: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_3fa828:
    if (ctx->pc == 0x3FA828u) {
        ctx->pc = 0x3FA82Cu;
        goto label_3fa82c;
    }
    ctx->pc = 0x3FA824u;
    {
        const bool branch_taken_0x3fa824 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fa824) {
            ctx->pc = 0x3FA8ACu;
            goto label_3fa8ac;
        }
    }
    ctx->pc = 0x3FA82Cu;
label_3fa82c:
    // 0x3fa82c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fa82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3fa830:
    // 0x3fa830: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3fa830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3fa834:
    // 0x3fa834: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x3fa834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3fa838:
    // 0x3fa838: 0x2463b7b8  addiu       $v1, $v1, -0x4848
    ctx->pc = 0x3fa838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948792));
label_3fa83c:
    // 0x3fa83c: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x3fa83cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_3fa840:
    // 0x3fa840: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x3fa840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3fa844:
    // 0x3fa844: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x3fa844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_3fa848:
    // 0x3fa848: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3fa848u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa84c:
    // 0x3fa84c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fa84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3fa850:
    // 0x3fa850: 0x90a50c6a  lbu         $a1, 0xC6A($a1)
    ctx->pc = 0x3fa850u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3178)));
label_3fa854:
    // 0x3fa854: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3fa854u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3fa858:
    // 0x3fa858: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3fa858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3fa85c:
    // 0x3fa85c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fa85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fa860:
    // 0x3fa860: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3fa860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fa864:
    // 0x3fa864: 0xc0bb404  jal         func_2ED010
label_3fa868:
    if (ctx->pc == 0x3FA868u) {
        ctx->pc = 0x3FA868u;
            // 0x3fa868: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3FA86Cu;
        goto label_3fa86c;
    }
    ctx->pc = 0x3FA864u;
    SET_GPR_U32(ctx, 31, 0x3FA86Cu);
    ctx->pc = 0x3FA868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA864u;
            // 0x3fa868: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA86Cu; }
        if (ctx->pc != 0x3FA86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA86Cu; }
        if (ctx->pc != 0x3FA86Cu) { return; }
    }
    ctx->pc = 0x3FA86Cu;
label_3fa86c:
    // 0x3fa86c: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x3fa86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3fa870:
    // 0x3fa870: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3fa870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fa874:
    // 0x3fa874: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_3fa878:
    if (ctx->pc == 0x3FA878u) {
        ctx->pc = 0x3FA87Cu;
        goto label_3fa87c;
    }
    ctx->pc = 0x3FA874u;
    {
        const bool branch_taken_0x3fa874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fa874) {
            ctx->pc = 0x3FA8ACu;
            goto label_3fa8ac;
        }
    }
    ctx->pc = 0x3FA87Cu;
label_3fa87c:
    // 0x3fa87c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fa87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3fa880:
    // 0x3fa880: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x3fa880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3fa884:
    // 0x3fa884: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x3fa884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3fa888:
    // 0x3fa888: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3fa888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fa88c:
    // 0x3fa88c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3fa88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa890:
    // 0x3fa890: 0x8c640144  lw          $a0, 0x144($v1)
    ctx->pc = 0x3fa890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_3fa894:
    // 0x3fa894: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3fa894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3fa898:
    // 0x3fa898: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3fa898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fa89c:
    // 0x3fa89c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3fa89cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fa8a0:
    // 0x3fa8a0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3fa8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3fa8a4:
    // 0x3fa8a4: 0x320f809  jalr        $t9
label_3fa8a8:
    if (ctx->pc == 0x3FA8A8u) {
        ctx->pc = 0x3FA8A8u;
            // 0x3fa8a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA8ACu;
        goto label_3fa8ac;
    }
    ctx->pc = 0x3FA8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FA8ACu);
        ctx->pc = 0x3FA8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA8A4u;
            // 0x3fa8a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FA8ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FA8ACu; }
            if (ctx->pc != 0x3FA8ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3FA8ACu;
label_3fa8ac:
    // 0x3fa8ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3fa8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3fa8b0:
    // 0x3fa8b0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3fa8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3fa8b4:
    // 0x3fa8b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3fa8b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fa8b8:
    // 0x3fa8b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3fa8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3fa8bc:
    // 0x3fa8bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3fa8bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fa8c0:
    // 0x3fa8c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3fa8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3fa8c4:
    // 0x3fa8c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fa8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fa8c8:
    // 0x3fa8c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3fa8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fa8cc:
    // 0x3fa8cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3fa8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fa8d0:
    // 0x3fa8d0: 0x3e00008  jr          $ra
label_3fa8d4:
    if (ctx->pc == 0x3FA8D4u) {
        ctx->pc = 0x3FA8D4u;
            // 0x3fa8d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3FA8D8u;
        goto label_3fa8d8;
    }
    ctx->pc = 0x3FA8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FA8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA8D0u;
            // 0x3fa8d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FA8D8u;
label_3fa8d8:
    // 0x3fa8d8: 0x0  nop
    ctx->pc = 0x3fa8d8u;
    // NOP
label_3fa8dc:
    // 0x3fa8dc: 0x0  nop
    ctx->pc = 0x3fa8dcu;
    // NOP
label_3fa8e0:
    // 0x3fa8e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fa8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3fa8e4:
    // 0x3fa8e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fa8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3fa8e8:
    // 0x3fa8e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3fa8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3fa8ec:
    // 0x3fa8ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fa8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3fa8f0:
    // 0x3fa8f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fa8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3fa8f4:
    // 0x3fa8f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fa8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fa8f8:
    // 0x3fa8f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3fa8f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fa8fc:
    // 0x3fa8fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fa8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fa900:
    // 0x3fa900: 0x26720bf0  addiu       $s2, $s3, 0xBF0
    ctx->pc = 0x3fa900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3056));
label_3fa904:
    // 0x3fa904: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fa904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fa908:
    // 0x3fa908: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x3fa908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3fa90c:
    // 0x3fa90c: 0x90830c44  lbu         $v1, 0xC44($a0)
    ctx->pc = 0x3fa90cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3140)));
label_3fa910:
    // 0x3fa910: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x3fa910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_3fa914:
    // 0x3fa914: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3fa914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fa918:
    // 0x3fa918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fa918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3fa91c:
    // 0x3fa91c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fa920:
    // 0x3fa920: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x3fa920u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3fa924:
    // 0x3fa924: 0xc0c1258  jal         func_304960
label_3fa928:
    if (ctx->pc == 0x3FA928u) {
        ctx->pc = 0x3FA928u;
            // 0x3fa928: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA92Cu;
        goto label_3fa92c;
    }
    ctx->pc = 0x3FA924u;
    SET_GPR_U32(ctx, 31, 0x3FA92Cu);
    ctx->pc = 0x3FA928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA924u;
            // 0x3fa928: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304960u;
    if (runtime->hasFunction(0x304960u)) {
        auto targetFn = runtime->lookupFunction(0x304960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA92Cu; }
        if (ctx->pc != 0x3FA92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304960_0x304960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA92Cu; }
        if (ctx->pc != 0x3FA92Cu) { return; }
    }
    ctx->pc = 0x3FA92Cu;
label_3fa92c:
    // 0x3fa92c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3fa92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fa930:
    // 0x3fa930: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3fa930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3fa934:
    // 0x3fa934: 0xc04cc90  jal         func_133240
label_3fa938:
    if (ctx->pc == 0x3FA938u) {
        ctx->pc = 0x3FA938u;
            // 0x3fa938: 0x266602c0  addiu       $a2, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x3FA93Cu;
        goto label_3fa93c;
    }
    ctx->pc = 0x3FA934u;
    SET_GPR_U32(ctx, 31, 0x3FA93Cu);
    ctx->pc = 0x3FA938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA934u;
            // 0x3fa938: 0x266602c0  addiu       $a2, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA93Cu; }
        if (ctx->pc != 0x3FA93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA93Cu; }
        if (ctx->pc != 0x3FA93Cu) { return; }
    }
    ctx->pc = 0x3FA93Cu;
label_3fa93c:
    // 0x3fa93c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3fa93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3fa940:
    // 0x3fa940: 0xc04cc44  jal         func_133110
label_3fa944:
    if (ctx->pc == 0x3FA944u) {
        ctx->pc = 0x3FA944u;
            // 0x3fa944: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA948u;
        goto label_3fa948;
    }
    ctx->pc = 0x3FA940u;
    SET_GPR_U32(ctx, 31, 0x3FA948u);
    ctx->pc = 0x3FA944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA940u;
            // 0x3fa944: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA948u; }
        if (ctx->pc != 0x3FA948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA948u; }
        if (ctx->pc != 0x3FA948u) { return; }
    }
    ctx->pc = 0x3FA948u;
label_3fa948:
    // 0x3fa948: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3fa948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fa94c:
    // 0x3fa94c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fa94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fa950:
    // 0x3fa950: 0xc04cbf0  jal         func_132FC0
label_3fa954:
    if (ctx->pc == 0x3FA954u) {
        ctx->pc = 0x3FA954u;
            // 0x3fa954: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x3FA958u;
        goto label_3fa958;
    }
    ctx->pc = 0x3FA950u;
    SET_GPR_U32(ctx, 31, 0x3FA958u);
    ctx->pc = 0x3FA954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA950u;
            // 0x3fa954: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA958u; }
        if (ctx->pc != 0x3FA958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA958u; }
        if (ctx->pc != 0x3FA958u) { return; }
    }
    ctx->pc = 0x3FA958u;
label_3fa958:
    // 0x3fa958: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3fa958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fa95c:
    // 0x3fa95c: 0xc04cc44  jal         func_133110
label_3fa960:
    if (ctx->pc == 0x3FA960u) {
        ctx->pc = 0x3FA960u;
            // 0x3fa960: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FA964u;
        goto label_3fa964;
    }
    ctx->pc = 0x3FA95Cu;
    SET_GPR_U32(ctx, 31, 0x3FA964u);
    ctx->pc = 0x3FA960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA95Cu;
            // 0x3fa960: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA964u; }
        if (ctx->pc != 0x3FA964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA964u; }
        if (ctx->pc != 0x3FA964u) { return; }
    }
    ctx->pc = 0x3FA964u;
label_3fa964:
    // 0x3fa964: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3fa964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3fa968:
    // 0x3fa968: 0xc04cc08  jal         func_133020
label_3fa96c:
    if (ctx->pc == 0x3FA96Cu) {
        ctx->pc = 0x3FA96Cu;
            // 0x3fa96c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3FA970u;
        goto label_3fa970;
    }
    ctx->pc = 0x3FA968u;
    SET_GPR_U32(ctx, 31, 0x3FA970u);
    ctx->pc = 0x3FA96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA968u;
            // 0x3fa96c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA970u; }
        if (ctx->pc != 0x3FA970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA970u; }
        if (ctx->pc != 0x3FA970u) { return; }
    }
    ctx->pc = 0x3FA970u;
label_3fa970:
    // 0x3fa970: 0xc0477fe  jal         func_11DFF8
label_3fa974:
    if (ctx->pc == 0x3FA974u) {
        ctx->pc = 0x3FA974u;
            // 0x3fa974: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3FA978u;
        goto label_3fa978;
    }
    ctx->pc = 0x3FA970u;
    SET_GPR_U32(ctx, 31, 0x3FA978u);
    ctx->pc = 0x3FA974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA970u;
            // 0x3fa974: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA978u; }
        if (ctx->pc != 0x3FA978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA978u; }
        if (ctx->pc != 0x3FA978u) { return; }
    }
    ctx->pc = 0x3FA978u;
label_3fa978:
    // 0x3fa978: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3fa978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_3fa97c:
    // 0x3fa97c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fa97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fa980:
    // 0x3fa980: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3fa980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_3fa984:
    // 0x3fa984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fa984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fa988:
    // 0x3fa988: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3fa988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fa98c:
    // 0x3fa98c: 0x0  nop
    ctx->pc = 0x3fa98cu;
    // NOP
label_3fa990:
    // 0x3fa990: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3fa990u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3fa994:
    // 0x3fa994: 0xe6600e1c  swc1        $f0, 0xE1C($s3)
    ctx->pc = 0x3fa994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3612), bits); }
label_3fa998:
    // 0x3fa998: 0xc07649c  jal         func_1D9270
label_3fa99c:
    if (ctx->pc == 0x3FA99Cu) {
        ctx->pc = 0x3FA99Cu;
            // 0x3fa99c: 0xae600e20  sw          $zero, 0xE20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3616), GPR_U32(ctx, 0));
        ctx->pc = 0x3FA9A0u;
        goto label_3fa9a0;
    }
    ctx->pc = 0x3FA998u;
    SET_GPR_U32(ctx, 31, 0x3FA9A0u);
    ctx->pc = 0x3FA99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA998u;
            // 0x3fa99c: 0xae600e20  sw          $zero, 0xE20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA9A0u; }
        if (ctx->pc != 0x3FA9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FA9A0u; }
        if (ctx->pc != 0x3FA9A0u) { return; }
    }
    ctx->pc = 0x3FA9A0u;
label_3fa9a0:
    // 0x3fa9a0: 0x8e620d70  lw          $v0, 0xD70($s3)
    ctx->pc = 0x3fa9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
label_3fa9a4:
    // 0x3fa9a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fa9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fa9a8:
    // 0x3fa9a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3fa9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fa9ac:
    // 0x3fa9ac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3fa9acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3fa9b0:
    // 0x3fa9b0: 0x320f809  jalr        $t9
label_3fa9b4:
    if (ctx->pc == 0x3FA9B4u) {
        ctx->pc = 0x3FA9B8u;
        goto label_3fa9b8;
    }
    ctx->pc = 0x3FA9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FA9B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FA9B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FA9B8u; }
            if (ctx->pc != 0x3FA9B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3FA9B8u;
label_3fa9b8:
    // 0x3fa9b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3fa9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fa9bc:
    // 0x3fa9bc: 0x50430033  beql        $v0, $v1, . + 4 + (0x33 << 2)
label_3fa9c0:
    if (ctx->pc == 0x3FA9C0u) {
        ctx->pc = 0x3FA9C0u;
            // 0x3fa9c0: 0x8e650d9c  lw          $a1, 0xD9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3484)));
        ctx->pc = 0x3FA9C4u;
        goto label_3fa9c4;
    }
    ctx->pc = 0x3FA9BCu;
    {
        const bool branch_taken_0x3fa9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fa9bc) {
            ctx->pc = 0x3FA9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA9BCu;
            // 0x3fa9c0: 0x8e650d9c  lw          $a1, 0xD9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FAA8Cu;
            goto label_3faa8c;
        }
    }
    ctx->pc = 0x3FA9C4u;
label_3fa9c4:
    // 0x3fa9c4: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x3fa9c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3fa9c8:
    // 0x3fa9c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fa9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fa9cc:
    // 0x3fa9cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3fa9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fa9d0:
    // 0x3fa9d0: 0xc21823  subu        $v1, $a2, $v0
    ctx->pc = 0x3fa9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3fa9d4:
    // 0x3fa9d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3fa9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3fa9d8:
    // 0x3fa9d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fa9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fa9dc:
    // 0x3fa9dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3fa9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3fa9e0:
    // 0x3fa9e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3fa9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3fa9e4:
    // 0x3fa9e4: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x3fa9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
label_3fa9e8:
    // 0x3fa9e8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x3fa9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3fa9ec:
    // 0x3fa9ec: 0x8442002e  lh          $v0, 0x2E($v0)
    ctx->pc = 0x3fa9ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
label_3fa9f0:
    // 0x3fa9f0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_3fa9f4:
    if (ctx->pc == 0x3FA9F4u) {
        ctx->pc = 0x3FA9F4u;
            // 0x3fa9f4: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x3FA9F8u;
        goto label_3fa9f8;
    }
    ctx->pc = 0x3FA9F0u;
    {
        const bool branch_taken_0x3fa9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa9f0) {
            ctx->pc = 0x3FA9F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FA9F0u;
            // 0x3fa9f4: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FAA50u;
            goto label_3faa50;
        }
    }
    ctx->pc = 0x3FA9F8u;
label_3fa9f8:
    // 0x3fa9f8: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3fa9f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3fa9fc:
    // 0x3fa9fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3fa9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3faa00:
    // 0x3faa00: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3faa00u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3faa04:
    // 0x3faa04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3faa04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3faa08:
    // 0x3faa08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3faa08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3faa0c:
    // 0x3faa0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3faa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3faa10:
    // 0x3faa10: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3faa10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3faa14:
    // 0x3faa14: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3faa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3faa18:
    // 0x3faa18: 0x320f809  jalr        $t9
label_3faa1c:
    if (ctx->pc == 0x3FAA1Cu) {
        ctx->pc = 0x3FAA1Cu;
            // 0x3faa1c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3FAA20u;
        goto label_3faa20;
    }
    ctx->pc = 0x3FAA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FAA20u);
        ctx->pc = 0x3FAA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAA18u;
            // 0x3faa1c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FAA20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FAA20u; }
            if (ctx->pc != 0x3FAA20u) { return; }
        }
        }
    }
    ctx->pc = 0x3FAA20u;
label_3faa20:
    // 0x3faa20: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3faa20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3faa24:
    // 0x3faa24: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3faa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3faa28:
    // 0x3faa28: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3faa28u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3faa2c:
    // 0x3faa2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3faa2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3faa30:
    // 0x3faa30: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3faa30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3faa34:
    // 0x3faa34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3faa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3faa38:
    // 0x3faa38: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3faa38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3faa3c:
    // 0x3faa3c: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x3faa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3faa40:
    // 0x3faa40: 0x320f809  jalr        $t9
label_3faa44:
    if (ctx->pc == 0x3FAA44u) {
        ctx->pc = 0x3FAA44u;
            // 0x3faa44: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3FAA48u;
        goto label_3faa48;
    }
    ctx->pc = 0x3FAA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FAA48u);
        ctx->pc = 0x3FAA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAA40u;
            // 0x3faa44: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FAA48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FAA48u; }
            if (ctx->pc != 0x3FAA48u) { return; }
        }
        }
    }
    ctx->pc = 0x3FAA48u;
label_3faa48:
    // 0x3faa48: 0x1000000a  b           . + 4 + (0xA << 2)
label_3faa4c:
    if (ctx->pc == 0x3FAA4Cu) {
        ctx->pc = 0x3FAA4Cu;
            // 0x3faa4c: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x3FAA50u;
        goto label_3faa50;
    }
    ctx->pc = 0x3FAA48u;
    {
        const bool branch_taken_0x3faa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FAA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAA48u;
            // 0x3faa4c: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3faa48) {
            ctx->pc = 0x3FAA74u;
            goto label_3faa74;
        }
    }
    ctx->pc = 0x3FAA50u;
label_3faa50:
    // 0x3faa50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3faa50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3faa54:
    // 0x3faa54: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3faa54u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3faa58:
    // 0x3faa58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3faa58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3faa5c:
    // 0x3faa5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3faa5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3faa60:
    // 0x3faa60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3faa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3faa64:
    // 0x3faa64: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3faa64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3faa68:
    // 0x3faa68: 0x320f809  jalr        $t9
label_3faa6c:
    if (ctx->pc == 0x3FAA6Cu) {
        ctx->pc = 0x3FAA6Cu;
            // 0x3faa6c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3FAA70u;
        goto label_3faa70;
    }
    ctx->pc = 0x3FAA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FAA70u);
        ctx->pc = 0x3FAA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAA68u;
            // 0x3faa6c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FAA70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FAA70u; }
            if (ctx->pc != 0x3FAA70u) { return; }
        }
        }
    }
    ctx->pc = 0x3FAA70u;
label_3faa70:
    // 0x3faa70: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3faa70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3faa74:
    // 0x3faa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3faa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3faa78:
    // 0x3faa78: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3faa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3faa7c:
    // 0x3faa7c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3faa7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3faa80:
    // 0x3faa80: 0x320f809  jalr        $t9
label_3faa84:
    if (ctx->pc == 0x3FAA84u) {
        ctx->pc = 0x3FAA84u;
            // 0x3faa84: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3FAA88u;
        goto label_3faa88;
    }
    ctx->pc = 0x3FAA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FAA88u);
        ctx->pc = 0x3FAA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAA80u;
            // 0x3faa84: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FAA88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FAA88u; }
            if (ctx->pc != 0x3FAA88u) { return; }
        }
        }
    }
    ctx->pc = 0x3FAA88u;
label_3faa88:
    // 0x3faa88: 0x8e650d9c  lw          $a1, 0xD9C($s3)
    ctx->pc = 0x3faa88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3484)));
label_3faa8c:
    // 0x3faa8c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3faa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_3faa90:
    // 0x3faa90: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x3faa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3faa94:
    // 0x3faa94: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3faa94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3faa98:
    // 0x3faa98: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x3faa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_3faa9c:
    // 0x3faa9c: 0xae620d9c  sw          $v0, 0xD9C($s3)
    ctx->pc = 0x3faa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3484), GPR_U32(ctx, 2));
label_3faaa0:
    // 0x3faaa0: 0x8e700d74  lw          $s0, 0xD74($s3)
    ctx->pc = 0x3faaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_3faaa4:
    // 0x3faaa4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3faaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3faaa8:
    // 0x3faaa8: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x3faaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_3faaac:
    // 0x3faaac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3faaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3faab0:
    // 0x3faab0: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x3faab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3faab4:
    // 0x3faab4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3faab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3faab8:
    // 0x3faab8: 0xc0a545c  jal         func_295170
label_3faabc:
    if (ctx->pc == 0x3FAABCu) {
        ctx->pc = 0x3FAABCu;
            // 0x3faabc: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x3FAAC0u;
        goto label_3faac0;
    }
    ctx->pc = 0x3FAAB8u;
    SET_GPR_U32(ctx, 31, 0x3FAAC0u);
    ctx->pc = 0x3FAABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAAB8u;
            // 0x3faabc: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAAC0u; }
        if (ctx->pc != 0x3FAAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAAC0u; }
        if (ctx->pc != 0x3FAAC0u) { return; }
    }
    ctx->pc = 0x3FAAC0u;
label_3faac0:
    // 0x3faac0: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x3faac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_3faac4:
    // 0x3faac4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3faac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3faac8:
    // 0x3faac8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3faac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3faacc:
    // 0x3faacc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3faaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3faad0:
    // 0x3faad0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3faad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3faad4:
    // 0x3faad4: 0xc08bf20  jal         func_22FC80
label_3faad8:
    if (ctx->pc == 0x3FAAD8u) {
        ctx->pc = 0x3FAAD8u;
            // 0x3faad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FAADCu;
        goto label_3faadc;
    }
    ctx->pc = 0x3FAAD4u;
    SET_GPR_U32(ctx, 31, 0x3FAADCu);
    ctx->pc = 0x3FAAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAAD4u;
            // 0x3faad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAADCu; }
        if (ctx->pc != 0x3FAADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAADCu; }
        if (ctx->pc != 0x3FAADCu) { return; }
    }
    ctx->pc = 0x3FAADCu;
label_3faadc:
    // 0x3faadc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3faadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3faae0:
    // 0x3faae0: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x3faae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_3faae4:
    // 0x3faae4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3faae4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3faae8:
    // 0x3faae8: 0xc04cbd8  jal         func_132F60
label_3faaec:
    if (ctx->pc == 0x3FAAECu) {
        ctx->pc = 0x3FAAECu;
            // 0x3faaec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3FAAF0u;
        goto label_3faaf0;
    }
    ctx->pc = 0x3FAAE8u;
    SET_GPR_U32(ctx, 31, 0x3FAAF0u);
    ctx->pc = 0x3FAAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAAE8u;
            // 0x3faaec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAAF0u; }
        if (ctx->pc != 0x3FAAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAAF0u; }
        if (ctx->pc != 0x3FAAF0u) { return; }
    }
    ctx->pc = 0x3FAAF0u;
label_3faaf0:
    // 0x3faaf0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3faaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3faaf4:
    // 0x3faaf4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3faaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3faaf8:
    // 0x3faaf8: 0xae620db8  sw          $v0, 0xDB8($s3)
    ctx->pc = 0x3faaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3512), GPR_U32(ctx, 2));
label_3faafc:
    // 0x3faafc: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x3faafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_3fab00:
    // 0x3fab00: 0xc075378  jal         func_1D4DE0
label_3fab04:
    if (ctx->pc == 0x3FAB04u) {
        ctx->pc = 0x3FAB04u;
            // 0x3fab04: 0x26660830  addiu       $a2, $s3, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2096));
        ctx->pc = 0x3FAB08u;
        goto label_3fab08;
    }
    ctx->pc = 0x3FAB00u;
    SET_GPR_U32(ctx, 31, 0x3FAB08u);
    ctx->pc = 0x3FAB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAB00u;
            // 0x3fab04: 0x26660830  addiu       $a2, $s3, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB08u; }
        if (ctx->pc != 0x3FAB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB08u; }
        if (ctx->pc != 0x3FAB08u) { return; }
    }
    ctx->pc = 0x3FAB08u;
label_3fab08:
    // 0x3fab08: 0xc6610880  lwc1        $f1, 0x880($s3)
    ctx->pc = 0x3fab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fab0c:
    // 0x3fab0c: 0x2664087c  addiu       $a0, $s3, 0x87C
    ctx->pc = 0x3fab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2172));
label_3fab10:
    // 0x3fab10: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3fab10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3fab14:
    // 0x3fab14: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3fab14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3fab18:
    // 0x3fab18: 0xc0c753c  jal         func_31D4F0
label_3fab1c:
    if (ctx->pc == 0x3FAB1Cu) {
        ctx->pc = 0x3FAB1Cu;
            // 0x3fab1c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3FAB20u;
        goto label_3fab20;
    }
    ctx->pc = 0x3FAB18u;
    SET_GPR_U32(ctx, 31, 0x3FAB20u);
    ctx->pc = 0x3FAB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAB18u;
            // 0x3fab1c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB20u; }
        if (ctx->pc != 0x3FAB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB20u; }
        if (ctx->pc != 0x3FAB20u) { return; }
    }
    ctx->pc = 0x3FAB20u;
label_3fab20:
    // 0x3fab20: 0xc66c0880  lwc1        $f12, 0x880($s3)
    ctx->pc = 0x3fab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3fab24:
    // 0x3fab24: 0x2664092c  addiu       $a0, $s3, 0x92C
    ctx->pc = 0x3fab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2348));
label_3fab28:
    // 0x3fab28: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3fab28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3fab2c:
    // 0x3fab2c: 0xc0c753c  jal         func_31D4F0
label_3fab30:
    if (ctx->pc == 0x3FAB30u) {
        ctx->pc = 0x3FAB30u;
            // 0x3fab30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3FAB34u;
        goto label_3fab34;
    }
    ctx->pc = 0x3FAB2Cu;
    SET_GPR_U32(ctx, 31, 0x3FAB34u);
    ctx->pc = 0x3FAB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAB2Cu;
            // 0x3fab30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB34u; }
        if (ctx->pc != 0x3FAB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB34u; }
        if (ctx->pc != 0x3FAB34u) { return; }
    }
    ctx->pc = 0x3FAB34u;
label_3fab34:
    // 0x3fab34: 0xc0b9210  jal         func_2E4840
label_3fab38:
    if (ctx->pc == 0x3FAB38u) {
        ctx->pc = 0x3FAB38u;
            // 0x3fab38: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
        ctx->pc = 0x3FAB3Cu;
        goto label_3fab3c;
    }
    ctx->pc = 0x3FAB34u;
    SET_GPR_U32(ctx, 31, 0x3FAB3Cu);
    ctx->pc = 0x3FAB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAB34u;
            // 0x3fab38: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB3Cu; }
        if (ctx->pc != 0x3FAB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB3Cu; }
        if (ctx->pc != 0x3FAB3Cu) { return; }
    }
    ctx->pc = 0x3FAB3Cu;
label_3fab3c:
    // 0x3fab3c: 0x266402e0  addiu       $a0, $s3, 0x2E0
    ctx->pc = 0x3fab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
label_3fab40:
    // 0x3fab40: 0xc04cc04  jal         func_133010
label_3fab44:
    if (ctx->pc == 0x3FAB44u) {
        ctx->pc = 0x3FAB44u;
            // 0x3fab44: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3FAB48u;
        goto label_3fab48;
    }
    ctx->pc = 0x3FAB40u;
    SET_GPR_U32(ctx, 31, 0x3FAB48u);
    ctx->pc = 0x3FAB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAB40u;
            // 0x3fab44: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB48u; }
        if (ctx->pc != 0x3FAB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB48u; }
        if (ctx->pc != 0x3FAB48u) { return; }
    }
    ctx->pc = 0x3FAB48u;
label_3fab48:
    // 0x3fab48: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x3fab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_3fab4c:
    // 0x3fab4c: 0xc075318  jal         func_1D4C60
label_3fab50:
    if (ctx->pc == 0x3FAB50u) {
        ctx->pc = 0x3FAB50u;
            // 0x3fab50: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3FAB54u;
        goto label_3fab54;
    }
    ctx->pc = 0x3FAB4Cu;
    SET_GPR_U32(ctx, 31, 0x3FAB54u);
    ctx->pc = 0x3FAB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAB4Cu;
            // 0x3fab50: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB54u; }
        if (ctx->pc != 0x3FAB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB54u; }
        if (ctx->pc != 0x3FAB54u) { return; }
    }
    ctx->pc = 0x3FAB54u;
label_3fab54:
    // 0x3fab54: 0x26650560  addiu       $a1, $s3, 0x560
    ctx->pc = 0x3fab54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_3fab58:
    // 0x3fab58: 0x26640840  addiu       $a0, $s3, 0x840
    ctx->pc = 0x3fab58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
label_3fab5c:
    // 0x3fab5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3fab5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fab60:
    // 0x3fab60: 0xc0c6250  jal         func_318940
label_3fab64:
    if (ctx->pc == 0x3FAB64u) {
        ctx->pc = 0x3FAB64u;
            // 0x3fab64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FAB68u;
        goto label_3fab68;
    }
    ctx->pc = 0x3FAB60u;
    SET_GPR_U32(ctx, 31, 0x3FAB68u);
    ctx->pc = 0x3FAB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAB60u;
            // 0x3fab64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB68u; }
        if (ctx->pc != 0x3FAB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB68u; }
        if (ctx->pc != 0x3FAB68u) { return; }
    }
    ctx->pc = 0x3FAB68u;
label_3fab68:
    // 0x3fab68: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x3fab68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_3fab6c:
    // 0x3fab6c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3fab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3fab70:
    // 0x3fab70: 0x5040006b  beql        $v0, $zero, . + 4 + (0x6B << 2)
label_3fab74:
    if (ctx->pc == 0x3FAB74u) {
        ctx->pc = 0x3FAB74u;
            // 0x3fab74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FAB78u;
        goto label_3fab78;
    }
    ctx->pc = 0x3FAB70u;
    {
        const bool branch_taken_0x3fab70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fab70) {
            ctx->pc = 0x3FAB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAB70u;
            // 0x3fab74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FAD20u;
            goto label_3fad20;
        }
    }
    ctx->pc = 0x3FAB78u;
label_3fab78:
    // 0x3fab78: 0x8e620da0  lw          $v0, 0xDA0($s3)
    ctx->pc = 0x3fab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
label_3fab7c:
    // 0x3fab7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fab7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fab80:
    // 0x3fab80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3fab80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fab84:
    // 0x3fab84: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3fab84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_3fab88:
    // 0x3fab88: 0xc076218  jal         func_1D8860
label_3fab8c:
    if (ctx->pc == 0x3FAB8Cu) {
        ctx->pc = 0x3FAB8Cu;
            // 0x3fab8c: 0xae620da0  sw          $v0, 0xDA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3488), GPR_U32(ctx, 2));
        ctx->pc = 0x3FAB90u;
        goto label_3fab90;
    }
    ctx->pc = 0x3FAB88u;
    SET_GPR_U32(ctx, 31, 0x3FAB90u);
    ctx->pc = 0x3FAB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAB88u;
            // 0x3fab8c: 0xae620da0  sw          $v0, 0xDA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8860u;
    if (runtime->hasFunction(0x1D8860u)) {
        auto targetFn = runtime->lookupFunction(0x1D8860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB90u; }
        if (ctx->pc != 0x3FAB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8860_0x1d8860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAB90u; }
        if (ctx->pc != 0x3FAB90u) { return; }
    }
    ctx->pc = 0x3FAB90u;
label_3fab90:
    // 0x3fab90: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_3fab94:
    if (ctx->pc == 0x3FAB94u) {
        ctx->pc = 0x3FAB94u;
            // 0x3fab94: 0xae600e24  sw          $zero, 0xE24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3620), GPR_U32(ctx, 0));
        ctx->pc = 0x3FAB98u;
        goto label_3fab98;
    }
    ctx->pc = 0x3FAB90u;
    {
        const bool branch_taken_0x3fab90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fab90) {
            ctx->pc = 0x3FAB94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAB90u;
            // 0x3fab94: 0xae600e24  sw          $zero, 0xE24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FABE8u;
            goto label_3fabe8;
        }
    }
    ctx->pc = 0x3FAB98u;
label_3fab98:
    // 0x3fab98: 0xc040180  jal         func_100600
label_3fab9c:
    if (ctx->pc == 0x3FAB9Cu) {
        ctx->pc = 0x3FAB9Cu;
            // 0x3fab9c: 0x24040d00  addiu       $a0, $zero, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
        ctx->pc = 0x3FABA0u;
        goto label_3faba0;
    }
    ctx->pc = 0x3FAB98u;
    SET_GPR_U32(ctx, 31, 0x3FABA0u);
    ctx->pc = 0x3FAB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAB98u;
            // 0x3fab9c: 0x24040d00  addiu       $a0, $zero, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FABA0u; }
        if (ctx->pc != 0x3FABA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FABA0u; }
        if (ctx->pc != 0x3FABA0u) { return; }
    }
    ctx->pc = 0x3FABA0u;
label_3faba0:
    // 0x3faba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3faba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3faba4:
    // 0x3faba4: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_3faba8:
    if (ctx->pc == 0x3FABA8u) {
        ctx->pc = 0x3FABA8u;
            // 0x3faba8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FABACu;
        goto label_3fabac;
    }
    ctx->pc = 0x3FABA4u;
    {
        const bool branch_taken_0x3faba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3faba4) {
            ctx->pc = 0x3FABA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FABA4u;
            // 0x3faba8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FABCCu;
            goto label_3fabcc;
        }
    }
    ctx->pc = 0x3FABACu;
label_3fabac:
    // 0x3fabac: 0x92650d98  lbu         $a1, 0xD98($s3)
    ctx->pc = 0x3fabacu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3480)));
label_3fabb0:
    // 0x3fabb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fabb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fabb4:
    // 0x3fabb4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3fabb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fabb8:
    // 0x3fabb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3fabb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fabbc:
    // 0x3fabbc: 0xc0ed8f8  jal         func_3B63E0
label_3fabc0:
    if (ctx->pc == 0x3FABC0u) {
        ctx->pc = 0x3FABC0u;
            // 0x3fabc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FABC4u;
        goto label_3fabc4;
    }
    ctx->pc = 0x3FABBCu;
    SET_GPR_U32(ctx, 31, 0x3FABC4u);
    ctx->pc = 0x3FABC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FABBCu;
            // 0x3fabc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B63E0u;
    if (runtime->hasFunction(0x3B63E0u)) {
        auto targetFn = runtime->lookupFunction(0x3B63E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FABC4u; }
        if (ctx->pc != 0x3FABC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B63E0_0x3b63e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FABC4u; }
        if (ctx->pc != 0x3FABC4u) { return; }
    }
    ctx->pc = 0x3FABC4u;
label_3fabc4:
    // 0x3fabc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fabc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fabc8:
    // 0x3fabc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fabc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fabcc:
    // 0x3fabcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3fabccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fabd0:
    // 0x3fabd0: 0xc076234  jal         func_1D88D0
label_3fabd4:
    if (ctx->pc == 0x3FABD4u) {
        ctx->pc = 0x3FABD4u;
            // 0x3fabd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FABD8u;
        goto label_3fabd8;
    }
    ctx->pc = 0x3FABD0u;
    SET_GPR_U32(ctx, 31, 0x3FABD8u);
    ctx->pc = 0x3FABD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FABD0u;
            // 0x3fabd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D88D0u;
    if (runtime->hasFunction(0x1D88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FABD8u; }
        if (ctx->pc != 0x3FABD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D88D0_0x1d88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FABD8u; }
        if (ctx->pc != 0x3FABD8u) { return; }
    }
    ctx->pc = 0x3FABD8u;
label_3fabd8:
    // 0x3fabd8: 0x92020cb4  lbu         $v0, 0xCB4($s0)
    ctx->pc = 0x3fabd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3252)));
label_3fabdc:
    // 0x3fabdc: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x3fabdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_3fabe0:
    // 0x3fabe0: 0xa2020cb4  sb          $v0, 0xCB4($s0)
    ctx->pc = 0x3fabe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3252), (uint8_t)GPR_U32(ctx, 2));
label_3fabe4:
    // 0x3fabe4: 0xae600e24  sw          $zero, 0xE24($s3)
    ctx->pc = 0x3fabe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3620), GPR_U32(ctx, 0));
label_3fabe8:
    // 0x3fabe8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3fabe8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3fabec:
    // 0x3fabec: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x3fabecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3fabf0:
    // 0x3fabf0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3fabf4:
    if (ctx->pc == 0x3FABF4u) {
        ctx->pc = 0x3FABF4u;
            // 0x3fabf4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FABF8u;
        goto label_3fabf8;
    }
    ctx->pc = 0x3FABF0u;
    {
        const bool branch_taken_0x3fabf0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3FABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FABF0u;
            // 0x3fabf4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fabf0) {
            ctx->pc = 0x3FAC08u;
            goto label_3fac08;
        }
    }
    ctx->pc = 0x3FABF8u;
label_3fabf8:
    // 0x3fabf8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3fabf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3fabfc:
    // 0x3fabfc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3fac00:
    if (ctx->pc == 0x3FAC00u) {
        ctx->pc = 0x3FAC04u;
        goto label_3fac04;
    }
    ctx->pc = 0x3FABFCu;
    {
        const bool branch_taken_0x3fabfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fabfc) {
            ctx->pc = 0x3FAC08u;
            goto label_3fac08;
        }
    }
    ctx->pc = 0x3FAC04u;
label_3fac04:
    // 0x3fac04: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3fac04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fac08:
    // 0x3fac08: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3fac0c:
    if (ctx->pc == 0x3FAC0Cu) {
        ctx->pc = 0x3FAC10u;
        goto label_3fac10;
    }
    ctx->pc = 0x3FAC08u;
    {
        const bool branch_taken_0x3fac08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fac08) {
            ctx->pc = 0x3FAC24u;
            goto label_3fac24;
        }
    }
    ctx->pc = 0x3FAC10u;
label_3fac10:
    // 0x3fac10: 0xc075eb4  jal         func_1D7AD0
label_3fac14:
    if (ctx->pc == 0x3FAC14u) {
        ctx->pc = 0x3FAC14u;
            // 0x3fac14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FAC18u;
        goto label_3fac18;
    }
    ctx->pc = 0x3FAC10u;
    SET_GPR_U32(ctx, 31, 0x3FAC18u);
    ctx->pc = 0x3FAC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAC10u;
            // 0x3fac14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAC18u; }
        if (ctx->pc != 0x3FAC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAC18u; }
        if (ctx->pc != 0x3FAC18u) { return; }
    }
    ctx->pc = 0x3FAC18u;
label_3fac18:
    // 0x3fac18: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3fac1c:
    if (ctx->pc == 0x3FAC1Cu) {
        ctx->pc = 0x3FAC20u;
        goto label_3fac20;
    }
    ctx->pc = 0x3FAC18u;
    {
        const bool branch_taken_0x3fac18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fac18) {
            ctx->pc = 0x3FAC24u;
            goto label_3fac24;
        }
    }
    ctx->pc = 0x3FAC20u;
label_3fac20:
    // 0x3fac20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3fac20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fac24:
    // 0x3fac24: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_3fac28:
    if (ctx->pc == 0x3FAC28u) {
        ctx->pc = 0x3FAC2Cu;
        goto label_3fac2c;
    }
    ctx->pc = 0x3FAC24u;
    {
        const bool branch_taken_0x3fac24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fac24) {
            ctx->pc = 0x3FAC3Cu;
            goto label_3fac3c;
        }
    }
    ctx->pc = 0x3FAC2Cu;
label_3fac2c:
    // 0x3fac2c: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x3fac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3fac30:
    // 0x3fac30: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3fac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fac34:
    // 0x3fac34: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
label_3fac38:
    if (ctx->pc == 0x3FAC38u) {
        ctx->pc = 0x3FAC3Cu;
        goto label_3fac3c;
    }
    ctx->pc = 0x3FAC34u;
    {
        const bool branch_taken_0x3fac34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fac34) {
            ctx->pc = 0x3FAD1Cu;
            goto label_3fad1c;
        }
    }
    ctx->pc = 0x3FAC3Cu;
label_3fac3c:
    // 0x3fac3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3fac40:
    // 0x3fac40: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3fac40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3fac44:
    // 0x3fac44: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x3fac44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3fac48:
    // 0x3fac48: 0x2463b7b8  addiu       $v1, $v1, -0x4848
    ctx->pc = 0x3fac48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948792));
label_3fac4c:
    // 0x3fac4c: 0x926411aa  lbu         $a0, 0x11AA($s3)
    ctx->pc = 0x3fac4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_3fac50:
    // 0x3fac50: 0x26660890  addiu       $a2, $s3, 0x890
    ctx->pc = 0x3fac50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_3fac54:
    // 0x3fac54: 0x266702c0  addiu       $a3, $s3, 0x2C0
    ctx->pc = 0x3fac54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_3fac58:
    // 0x3fac58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3fac58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fac5c:
    // 0x3fac5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3fac60:
    // 0x3fac60: 0x90a50c6a  lbu         $a1, 0xC6A($a1)
    ctx->pc = 0x3fac60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3178)));
label_3fac64:
    // 0x3fac64: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3fac64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3fac68:
    // 0x3fac68: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3fac68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3fac6c:
    // 0x3fac6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fac70:
    // 0x3fac70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3fac70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fac74:
    // 0x3fac74: 0xc0bb404  jal         func_2ED010
label_3fac78:
    if (ctx->pc == 0x3FAC78u) {
        ctx->pc = 0x3FAC78u;
            // 0x3fac78: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3FAC7Cu;
        goto label_3fac7c;
    }
    ctx->pc = 0x3FAC74u;
    SET_GPR_U32(ctx, 31, 0x3FAC7Cu);
    ctx->pc = 0x3FAC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAC74u;
            // 0x3fac78: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAC7Cu; }
        if (ctx->pc != 0x3FAC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAC7Cu; }
        if (ctx->pc != 0x3FAC7Cu) { return; }
    }
    ctx->pc = 0x3FAC7Cu;
label_3fac7c:
    // 0x3fac7c: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x3fac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3fac80:
    // 0x3fac80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3fac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fac84:
    // 0x3fac84: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_3fac88:
    if (ctx->pc == 0x3FAC88u) {
        ctx->pc = 0x3FAC88u;
            // 0x3fac88: 0x8e620e34  lw          $v0, 0xE34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
        ctx->pc = 0x3FAC8Cu;
        goto label_3fac8c;
    }
    ctx->pc = 0x3FAC84u;
    {
        const bool branch_taken_0x3fac84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3fac84) {
            ctx->pc = 0x3FAC88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAC84u;
            // 0x3fac88: 0x8e620e34  lw          $v0, 0xE34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FACC0u;
            goto label_3facc0;
        }
    }
    ctx->pc = 0x3FAC8Cu;
label_3fac8c:
    // 0x3fac8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3fac90:
    // 0x3fac90: 0x8e650d98  lw          $a1, 0xD98($s3)
    ctx->pc = 0x3fac90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_3fac94:
    // 0x3fac94: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x3fac94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3fac98:
    // 0x3fac98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3fac98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fac9c:
    // 0x3fac9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3fac9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3faca0:
    // 0x3faca0: 0x8c640144  lw          $a0, 0x144($v1)
    ctx->pc = 0x3faca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_3faca4:
    // 0x3faca4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3faca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3faca8:
    // 0x3faca8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3faca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3facac:
    // 0x3facac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3facacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3facb0:
    // 0x3facb0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3facb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3facb4:
    // 0x3facb4: 0x320f809  jalr        $t9
label_3facb8:
    if (ctx->pc == 0x3FACB8u) {
        ctx->pc = 0x3FACB8u;
            // 0x3facb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FACBCu;
        goto label_3facbc;
    }
    ctx->pc = 0x3FACB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FACBCu);
        ctx->pc = 0x3FACB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FACB4u;
            // 0x3facb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FACBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FACBCu; }
            if (ctx->pc != 0x3FACBCu) { return; }
        }
        }
    }
    ctx->pc = 0x3FACBCu;
label_3facbc:
    // 0x3facbc: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x3facbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3facc0:
    // 0x3facc0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3facc0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3facc4:
    // 0x3facc4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3facc8:
    if (ctx->pc == 0x3FACC8u) {
        ctx->pc = 0x3FACC8u;
            // 0x3facc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FACCCu;
        goto label_3faccc;
    }
    ctx->pc = 0x3FACC4u;
    {
        const bool branch_taken_0x3facc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3FACC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FACC4u;
            // 0x3facc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3facc4) {
            ctx->pc = 0x3FACDCu;
            goto label_3facdc;
        }
    }
    ctx->pc = 0x3FACCCu;
label_3faccc:
    // 0x3faccc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3facccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3facd0:
    // 0x3facd0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3facd4:
    if (ctx->pc == 0x3FACD4u) {
        ctx->pc = 0x3FACD8u;
        goto label_3facd8;
    }
    ctx->pc = 0x3FACD0u;
    {
        const bool branch_taken_0x3facd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3facd0) {
            ctx->pc = 0x3FACDCu;
            goto label_3facdc;
        }
    }
    ctx->pc = 0x3FACD8u;
label_3facd8:
    // 0x3facd8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3facd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3facdc:
    // 0x3facdc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3face0:
    if (ctx->pc == 0x3FACE0u) {
        ctx->pc = 0x3FACE4u;
        goto label_3face4;
    }
    ctx->pc = 0x3FACDCu;
    {
        const bool branch_taken_0x3facdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3facdc) {
            ctx->pc = 0x3FACF8u;
            goto label_3facf8;
        }
    }
    ctx->pc = 0x3FACE4u;
label_3face4:
    // 0x3face4: 0xc075eb4  jal         func_1D7AD0
label_3face8:
    if (ctx->pc == 0x3FACE8u) {
        ctx->pc = 0x3FACE8u;
            // 0x3face8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FACECu;
        goto label_3facec;
    }
    ctx->pc = 0x3FACE4u;
    SET_GPR_U32(ctx, 31, 0x3FACECu);
    ctx->pc = 0x3FACE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FACE4u;
            // 0x3face8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FACECu; }
        if (ctx->pc != 0x3FACECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FACECu; }
        if (ctx->pc != 0x3FACECu) { return; }
    }
    ctx->pc = 0x3FACECu;
label_3facec:
    // 0x3facec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3facf0:
    if (ctx->pc == 0x3FACF0u) {
        ctx->pc = 0x3FACF4u;
        goto label_3facf4;
    }
    ctx->pc = 0x3FACECu;
    {
        const bool branch_taken_0x3facec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3facec) {
            ctx->pc = 0x3FACF8u;
            goto label_3facf8;
        }
    }
    ctx->pc = 0x3FACF4u;
label_3facf4:
    // 0x3facf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3facf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3facf8:
    // 0x3facf8: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_3facfc:
    if (ctx->pc == 0x3FACFCu) {
        ctx->pc = 0x3FACFCu;
            // 0x3facfc: 0x9264007c  lbu         $a0, 0x7C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 124)));
        ctx->pc = 0x3FAD00u;
        goto label_3fad00;
    }
    ctx->pc = 0x3FACF8u;
    {
        const bool branch_taken_0x3facf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3facf8) {
            ctx->pc = 0x3FACFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FACF8u;
            // 0x3facfc: 0x9264007c  lbu         $a0, 0x7C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FAD14u;
            goto label_3fad14;
        }
    }
    ctx->pc = 0x3FAD00u;
label_3fad00:
    // 0x3fad00: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x3fad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3fad04:
    // 0x3fad04: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3fad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fad08:
    // 0x3fad08: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3fad0c:
    if (ctx->pc == 0x3FAD0Cu) {
        ctx->pc = 0x3FAD10u;
        goto label_3fad10;
    }
    ctx->pc = 0x3FAD08u;
    {
        const bool branch_taken_0x3fad08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fad08) {
            ctx->pc = 0x3FAD1Cu;
            goto label_3fad1c;
        }
    }
    ctx->pc = 0x3FAD10u;
label_3fad10:
    // 0x3fad10: 0x9264007c  lbu         $a0, 0x7C($s3)
    ctx->pc = 0x3fad10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 124)));
label_3fad14:
    // 0x3fad14: 0xc072a56  jal         func_1CA958
label_3fad18:
    if (ctx->pc == 0x3FAD18u) {
        ctx->pc = 0x3FAD1Cu;
        goto label_3fad1c;
    }
    ctx->pc = 0x3FAD14u;
    SET_GPR_U32(ctx, 31, 0x3FAD1Cu);
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAD1Cu; }
        if (ctx->pc != 0x3FAD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAD1Cu; }
        if (ctx->pc != 0x3FAD1Cu) { return; }
    }
    ctx->pc = 0x3FAD1Cu;
label_3fad1c:
    // 0x3fad1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fad20:
    // 0x3fad20: 0xc0c0f84  jal         func_303E10
label_3fad24:
    if (ctx->pc == 0x3FAD24u) {
        ctx->pc = 0x3FAD28u;
        goto label_3fad28;
    }
    ctx->pc = 0x3FAD20u;
    SET_GPR_U32(ctx, 31, 0x3FAD28u);
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAD28u; }
        if (ctx->pc != 0x3FAD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAD28u; }
        if (ctx->pc != 0x3FAD28u) { return; }
    }
    ctx->pc = 0x3FAD28u;
label_3fad28:
    // 0x3fad28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3fad28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3fad2c:
    // 0x3fad2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3fad2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fad30:
    // 0x3fad30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3fad30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fad34:
    // 0x3fad34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fad34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fad38:
    // 0x3fad38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fad38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fad3c:
    // 0x3fad3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fad3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fad40:
    // 0x3fad40: 0x3e00008  jr          $ra
label_3fad44:
    if (ctx->pc == 0x3FAD44u) {
        ctx->pc = 0x3FAD44u;
            // 0x3fad44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3FAD48u;
        goto label_3fad48;
    }
    ctx->pc = 0x3FAD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FAD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAD40u;
            // 0x3fad44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FAD48u;
label_3fad48:
    // 0x3fad48: 0x0  nop
    ctx->pc = 0x3fad48u;
    // NOP
label_3fad4c:
    // 0x3fad4c: 0x0  nop
    ctx->pc = 0x3fad4cu;
    // NOP
}
