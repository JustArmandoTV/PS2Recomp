#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A9930
// Address: 0x2a9930 - 0x2aa790
void sub_002A9930_0x2a9930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9930_0x2a9930");
#endif

    switch (ctx->pc) {
        case 0x2a9930u: goto label_2a9930;
        case 0x2a9934u: goto label_2a9934;
        case 0x2a9938u: goto label_2a9938;
        case 0x2a993cu: goto label_2a993c;
        case 0x2a9940u: goto label_2a9940;
        case 0x2a9944u: goto label_2a9944;
        case 0x2a9948u: goto label_2a9948;
        case 0x2a994cu: goto label_2a994c;
        case 0x2a9950u: goto label_2a9950;
        case 0x2a9954u: goto label_2a9954;
        case 0x2a9958u: goto label_2a9958;
        case 0x2a995cu: goto label_2a995c;
        case 0x2a9960u: goto label_2a9960;
        case 0x2a9964u: goto label_2a9964;
        case 0x2a9968u: goto label_2a9968;
        case 0x2a996cu: goto label_2a996c;
        case 0x2a9970u: goto label_2a9970;
        case 0x2a9974u: goto label_2a9974;
        case 0x2a9978u: goto label_2a9978;
        case 0x2a997cu: goto label_2a997c;
        case 0x2a9980u: goto label_2a9980;
        case 0x2a9984u: goto label_2a9984;
        case 0x2a9988u: goto label_2a9988;
        case 0x2a998cu: goto label_2a998c;
        case 0x2a9990u: goto label_2a9990;
        case 0x2a9994u: goto label_2a9994;
        case 0x2a9998u: goto label_2a9998;
        case 0x2a999cu: goto label_2a999c;
        case 0x2a99a0u: goto label_2a99a0;
        case 0x2a99a4u: goto label_2a99a4;
        case 0x2a99a8u: goto label_2a99a8;
        case 0x2a99acu: goto label_2a99ac;
        case 0x2a99b0u: goto label_2a99b0;
        case 0x2a99b4u: goto label_2a99b4;
        case 0x2a99b8u: goto label_2a99b8;
        case 0x2a99bcu: goto label_2a99bc;
        case 0x2a99c0u: goto label_2a99c0;
        case 0x2a99c4u: goto label_2a99c4;
        case 0x2a99c8u: goto label_2a99c8;
        case 0x2a99ccu: goto label_2a99cc;
        case 0x2a99d0u: goto label_2a99d0;
        case 0x2a99d4u: goto label_2a99d4;
        case 0x2a99d8u: goto label_2a99d8;
        case 0x2a99dcu: goto label_2a99dc;
        case 0x2a99e0u: goto label_2a99e0;
        case 0x2a99e4u: goto label_2a99e4;
        case 0x2a99e8u: goto label_2a99e8;
        case 0x2a99ecu: goto label_2a99ec;
        case 0x2a99f0u: goto label_2a99f0;
        case 0x2a99f4u: goto label_2a99f4;
        case 0x2a99f8u: goto label_2a99f8;
        case 0x2a99fcu: goto label_2a99fc;
        case 0x2a9a00u: goto label_2a9a00;
        case 0x2a9a04u: goto label_2a9a04;
        case 0x2a9a08u: goto label_2a9a08;
        case 0x2a9a0cu: goto label_2a9a0c;
        case 0x2a9a10u: goto label_2a9a10;
        case 0x2a9a14u: goto label_2a9a14;
        case 0x2a9a18u: goto label_2a9a18;
        case 0x2a9a1cu: goto label_2a9a1c;
        case 0x2a9a20u: goto label_2a9a20;
        case 0x2a9a24u: goto label_2a9a24;
        case 0x2a9a28u: goto label_2a9a28;
        case 0x2a9a2cu: goto label_2a9a2c;
        case 0x2a9a30u: goto label_2a9a30;
        case 0x2a9a34u: goto label_2a9a34;
        case 0x2a9a38u: goto label_2a9a38;
        case 0x2a9a3cu: goto label_2a9a3c;
        case 0x2a9a40u: goto label_2a9a40;
        case 0x2a9a44u: goto label_2a9a44;
        case 0x2a9a48u: goto label_2a9a48;
        case 0x2a9a4cu: goto label_2a9a4c;
        case 0x2a9a50u: goto label_2a9a50;
        case 0x2a9a54u: goto label_2a9a54;
        case 0x2a9a58u: goto label_2a9a58;
        case 0x2a9a5cu: goto label_2a9a5c;
        case 0x2a9a60u: goto label_2a9a60;
        case 0x2a9a64u: goto label_2a9a64;
        case 0x2a9a68u: goto label_2a9a68;
        case 0x2a9a6cu: goto label_2a9a6c;
        case 0x2a9a70u: goto label_2a9a70;
        case 0x2a9a74u: goto label_2a9a74;
        case 0x2a9a78u: goto label_2a9a78;
        case 0x2a9a7cu: goto label_2a9a7c;
        case 0x2a9a80u: goto label_2a9a80;
        case 0x2a9a84u: goto label_2a9a84;
        case 0x2a9a88u: goto label_2a9a88;
        case 0x2a9a8cu: goto label_2a9a8c;
        case 0x2a9a90u: goto label_2a9a90;
        case 0x2a9a94u: goto label_2a9a94;
        case 0x2a9a98u: goto label_2a9a98;
        case 0x2a9a9cu: goto label_2a9a9c;
        case 0x2a9aa0u: goto label_2a9aa0;
        case 0x2a9aa4u: goto label_2a9aa4;
        case 0x2a9aa8u: goto label_2a9aa8;
        case 0x2a9aacu: goto label_2a9aac;
        case 0x2a9ab0u: goto label_2a9ab0;
        case 0x2a9ab4u: goto label_2a9ab4;
        case 0x2a9ab8u: goto label_2a9ab8;
        case 0x2a9abcu: goto label_2a9abc;
        case 0x2a9ac0u: goto label_2a9ac0;
        case 0x2a9ac4u: goto label_2a9ac4;
        case 0x2a9ac8u: goto label_2a9ac8;
        case 0x2a9accu: goto label_2a9acc;
        case 0x2a9ad0u: goto label_2a9ad0;
        case 0x2a9ad4u: goto label_2a9ad4;
        case 0x2a9ad8u: goto label_2a9ad8;
        case 0x2a9adcu: goto label_2a9adc;
        case 0x2a9ae0u: goto label_2a9ae0;
        case 0x2a9ae4u: goto label_2a9ae4;
        case 0x2a9ae8u: goto label_2a9ae8;
        case 0x2a9aecu: goto label_2a9aec;
        case 0x2a9af0u: goto label_2a9af0;
        case 0x2a9af4u: goto label_2a9af4;
        case 0x2a9af8u: goto label_2a9af8;
        case 0x2a9afcu: goto label_2a9afc;
        case 0x2a9b00u: goto label_2a9b00;
        case 0x2a9b04u: goto label_2a9b04;
        case 0x2a9b08u: goto label_2a9b08;
        case 0x2a9b0cu: goto label_2a9b0c;
        case 0x2a9b10u: goto label_2a9b10;
        case 0x2a9b14u: goto label_2a9b14;
        case 0x2a9b18u: goto label_2a9b18;
        case 0x2a9b1cu: goto label_2a9b1c;
        case 0x2a9b20u: goto label_2a9b20;
        case 0x2a9b24u: goto label_2a9b24;
        case 0x2a9b28u: goto label_2a9b28;
        case 0x2a9b2cu: goto label_2a9b2c;
        case 0x2a9b30u: goto label_2a9b30;
        case 0x2a9b34u: goto label_2a9b34;
        case 0x2a9b38u: goto label_2a9b38;
        case 0x2a9b3cu: goto label_2a9b3c;
        case 0x2a9b40u: goto label_2a9b40;
        case 0x2a9b44u: goto label_2a9b44;
        case 0x2a9b48u: goto label_2a9b48;
        case 0x2a9b4cu: goto label_2a9b4c;
        case 0x2a9b50u: goto label_2a9b50;
        case 0x2a9b54u: goto label_2a9b54;
        case 0x2a9b58u: goto label_2a9b58;
        case 0x2a9b5cu: goto label_2a9b5c;
        case 0x2a9b60u: goto label_2a9b60;
        case 0x2a9b64u: goto label_2a9b64;
        case 0x2a9b68u: goto label_2a9b68;
        case 0x2a9b6cu: goto label_2a9b6c;
        case 0x2a9b70u: goto label_2a9b70;
        case 0x2a9b74u: goto label_2a9b74;
        case 0x2a9b78u: goto label_2a9b78;
        case 0x2a9b7cu: goto label_2a9b7c;
        case 0x2a9b80u: goto label_2a9b80;
        case 0x2a9b84u: goto label_2a9b84;
        case 0x2a9b88u: goto label_2a9b88;
        case 0x2a9b8cu: goto label_2a9b8c;
        case 0x2a9b90u: goto label_2a9b90;
        case 0x2a9b94u: goto label_2a9b94;
        case 0x2a9b98u: goto label_2a9b98;
        case 0x2a9b9cu: goto label_2a9b9c;
        case 0x2a9ba0u: goto label_2a9ba0;
        case 0x2a9ba4u: goto label_2a9ba4;
        case 0x2a9ba8u: goto label_2a9ba8;
        case 0x2a9bacu: goto label_2a9bac;
        case 0x2a9bb0u: goto label_2a9bb0;
        case 0x2a9bb4u: goto label_2a9bb4;
        case 0x2a9bb8u: goto label_2a9bb8;
        case 0x2a9bbcu: goto label_2a9bbc;
        case 0x2a9bc0u: goto label_2a9bc0;
        case 0x2a9bc4u: goto label_2a9bc4;
        case 0x2a9bc8u: goto label_2a9bc8;
        case 0x2a9bccu: goto label_2a9bcc;
        case 0x2a9bd0u: goto label_2a9bd0;
        case 0x2a9bd4u: goto label_2a9bd4;
        case 0x2a9bd8u: goto label_2a9bd8;
        case 0x2a9bdcu: goto label_2a9bdc;
        case 0x2a9be0u: goto label_2a9be0;
        case 0x2a9be4u: goto label_2a9be4;
        case 0x2a9be8u: goto label_2a9be8;
        case 0x2a9becu: goto label_2a9bec;
        case 0x2a9bf0u: goto label_2a9bf0;
        case 0x2a9bf4u: goto label_2a9bf4;
        case 0x2a9bf8u: goto label_2a9bf8;
        case 0x2a9bfcu: goto label_2a9bfc;
        case 0x2a9c00u: goto label_2a9c00;
        case 0x2a9c04u: goto label_2a9c04;
        case 0x2a9c08u: goto label_2a9c08;
        case 0x2a9c0cu: goto label_2a9c0c;
        case 0x2a9c10u: goto label_2a9c10;
        case 0x2a9c14u: goto label_2a9c14;
        case 0x2a9c18u: goto label_2a9c18;
        case 0x2a9c1cu: goto label_2a9c1c;
        case 0x2a9c20u: goto label_2a9c20;
        case 0x2a9c24u: goto label_2a9c24;
        case 0x2a9c28u: goto label_2a9c28;
        case 0x2a9c2cu: goto label_2a9c2c;
        case 0x2a9c30u: goto label_2a9c30;
        case 0x2a9c34u: goto label_2a9c34;
        case 0x2a9c38u: goto label_2a9c38;
        case 0x2a9c3cu: goto label_2a9c3c;
        case 0x2a9c40u: goto label_2a9c40;
        case 0x2a9c44u: goto label_2a9c44;
        case 0x2a9c48u: goto label_2a9c48;
        case 0x2a9c4cu: goto label_2a9c4c;
        case 0x2a9c50u: goto label_2a9c50;
        case 0x2a9c54u: goto label_2a9c54;
        case 0x2a9c58u: goto label_2a9c58;
        case 0x2a9c5cu: goto label_2a9c5c;
        case 0x2a9c60u: goto label_2a9c60;
        case 0x2a9c64u: goto label_2a9c64;
        case 0x2a9c68u: goto label_2a9c68;
        case 0x2a9c6cu: goto label_2a9c6c;
        case 0x2a9c70u: goto label_2a9c70;
        case 0x2a9c74u: goto label_2a9c74;
        case 0x2a9c78u: goto label_2a9c78;
        case 0x2a9c7cu: goto label_2a9c7c;
        case 0x2a9c80u: goto label_2a9c80;
        case 0x2a9c84u: goto label_2a9c84;
        case 0x2a9c88u: goto label_2a9c88;
        case 0x2a9c8cu: goto label_2a9c8c;
        case 0x2a9c90u: goto label_2a9c90;
        case 0x2a9c94u: goto label_2a9c94;
        case 0x2a9c98u: goto label_2a9c98;
        case 0x2a9c9cu: goto label_2a9c9c;
        case 0x2a9ca0u: goto label_2a9ca0;
        case 0x2a9ca4u: goto label_2a9ca4;
        case 0x2a9ca8u: goto label_2a9ca8;
        case 0x2a9cacu: goto label_2a9cac;
        case 0x2a9cb0u: goto label_2a9cb0;
        case 0x2a9cb4u: goto label_2a9cb4;
        case 0x2a9cb8u: goto label_2a9cb8;
        case 0x2a9cbcu: goto label_2a9cbc;
        case 0x2a9cc0u: goto label_2a9cc0;
        case 0x2a9cc4u: goto label_2a9cc4;
        case 0x2a9cc8u: goto label_2a9cc8;
        case 0x2a9cccu: goto label_2a9ccc;
        case 0x2a9cd0u: goto label_2a9cd0;
        case 0x2a9cd4u: goto label_2a9cd4;
        case 0x2a9cd8u: goto label_2a9cd8;
        case 0x2a9cdcu: goto label_2a9cdc;
        case 0x2a9ce0u: goto label_2a9ce0;
        case 0x2a9ce4u: goto label_2a9ce4;
        case 0x2a9ce8u: goto label_2a9ce8;
        case 0x2a9cecu: goto label_2a9cec;
        case 0x2a9cf0u: goto label_2a9cf0;
        case 0x2a9cf4u: goto label_2a9cf4;
        case 0x2a9cf8u: goto label_2a9cf8;
        case 0x2a9cfcu: goto label_2a9cfc;
        case 0x2a9d00u: goto label_2a9d00;
        case 0x2a9d04u: goto label_2a9d04;
        case 0x2a9d08u: goto label_2a9d08;
        case 0x2a9d0cu: goto label_2a9d0c;
        case 0x2a9d10u: goto label_2a9d10;
        case 0x2a9d14u: goto label_2a9d14;
        case 0x2a9d18u: goto label_2a9d18;
        case 0x2a9d1cu: goto label_2a9d1c;
        case 0x2a9d20u: goto label_2a9d20;
        case 0x2a9d24u: goto label_2a9d24;
        case 0x2a9d28u: goto label_2a9d28;
        case 0x2a9d2cu: goto label_2a9d2c;
        case 0x2a9d30u: goto label_2a9d30;
        case 0x2a9d34u: goto label_2a9d34;
        case 0x2a9d38u: goto label_2a9d38;
        case 0x2a9d3cu: goto label_2a9d3c;
        case 0x2a9d40u: goto label_2a9d40;
        case 0x2a9d44u: goto label_2a9d44;
        case 0x2a9d48u: goto label_2a9d48;
        case 0x2a9d4cu: goto label_2a9d4c;
        case 0x2a9d50u: goto label_2a9d50;
        case 0x2a9d54u: goto label_2a9d54;
        case 0x2a9d58u: goto label_2a9d58;
        case 0x2a9d5cu: goto label_2a9d5c;
        case 0x2a9d60u: goto label_2a9d60;
        case 0x2a9d64u: goto label_2a9d64;
        case 0x2a9d68u: goto label_2a9d68;
        case 0x2a9d6cu: goto label_2a9d6c;
        case 0x2a9d70u: goto label_2a9d70;
        case 0x2a9d74u: goto label_2a9d74;
        case 0x2a9d78u: goto label_2a9d78;
        case 0x2a9d7cu: goto label_2a9d7c;
        case 0x2a9d80u: goto label_2a9d80;
        case 0x2a9d84u: goto label_2a9d84;
        case 0x2a9d88u: goto label_2a9d88;
        case 0x2a9d8cu: goto label_2a9d8c;
        case 0x2a9d90u: goto label_2a9d90;
        case 0x2a9d94u: goto label_2a9d94;
        case 0x2a9d98u: goto label_2a9d98;
        case 0x2a9d9cu: goto label_2a9d9c;
        case 0x2a9da0u: goto label_2a9da0;
        case 0x2a9da4u: goto label_2a9da4;
        case 0x2a9da8u: goto label_2a9da8;
        case 0x2a9dacu: goto label_2a9dac;
        case 0x2a9db0u: goto label_2a9db0;
        case 0x2a9db4u: goto label_2a9db4;
        case 0x2a9db8u: goto label_2a9db8;
        case 0x2a9dbcu: goto label_2a9dbc;
        case 0x2a9dc0u: goto label_2a9dc0;
        case 0x2a9dc4u: goto label_2a9dc4;
        case 0x2a9dc8u: goto label_2a9dc8;
        case 0x2a9dccu: goto label_2a9dcc;
        case 0x2a9dd0u: goto label_2a9dd0;
        case 0x2a9dd4u: goto label_2a9dd4;
        case 0x2a9dd8u: goto label_2a9dd8;
        case 0x2a9ddcu: goto label_2a9ddc;
        case 0x2a9de0u: goto label_2a9de0;
        case 0x2a9de4u: goto label_2a9de4;
        case 0x2a9de8u: goto label_2a9de8;
        case 0x2a9decu: goto label_2a9dec;
        case 0x2a9df0u: goto label_2a9df0;
        case 0x2a9df4u: goto label_2a9df4;
        case 0x2a9df8u: goto label_2a9df8;
        case 0x2a9dfcu: goto label_2a9dfc;
        case 0x2a9e00u: goto label_2a9e00;
        case 0x2a9e04u: goto label_2a9e04;
        case 0x2a9e08u: goto label_2a9e08;
        case 0x2a9e0cu: goto label_2a9e0c;
        case 0x2a9e10u: goto label_2a9e10;
        case 0x2a9e14u: goto label_2a9e14;
        case 0x2a9e18u: goto label_2a9e18;
        case 0x2a9e1cu: goto label_2a9e1c;
        case 0x2a9e20u: goto label_2a9e20;
        case 0x2a9e24u: goto label_2a9e24;
        case 0x2a9e28u: goto label_2a9e28;
        case 0x2a9e2cu: goto label_2a9e2c;
        case 0x2a9e30u: goto label_2a9e30;
        case 0x2a9e34u: goto label_2a9e34;
        case 0x2a9e38u: goto label_2a9e38;
        case 0x2a9e3cu: goto label_2a9e3c;
        case 0x2a9e40u: goto label_2a9e40;
        case 0x2a9e44u: goto label_2a9e44;
        case 0x2a9e48u: goto label_2a9e48;
        case 0x2a9e4cu: goto label_2a9e4c;
        case 0x2a9e50u: goto label_2a9e50;
        case 0x2a9e54u: goto label_2a9e54;
        case 0x2a9e58u: goto label_2a9e58;
        case 0x2a9e5cu: goto label_2a9e5c;
        case 0x2a9e60u: goto label_2a9e60;
        case 0x2a9e64u: goto label_2a9e64;
        case 0x2a9e68u: goto label_2a9e68;
        case 0x2a9e6cu: goto label_2a9e6c;
        case 0x2a9e70u: goto label_2a9e70;
        case 0x2a9e74u: goto label_2a9e74;
        case 0x2a9e78u: goto label_2a9e78;
        case 0x2a9e7cu: goto label_2a9e7c;
        case 0x2a9e80u: goto label_2a9e80;
        case 0x2a9e84u: goto label_2a9e84;
        case 0x2a9e88u: goto label_2a9e88;
        case 0x2a9e8cu: goto label_2a9e8c;
        case 0x2a9e90u: goto label_2a9e90;
        case 0x2a9e94u: goto label_2a9e94;
        case 0x2a9e98u: goto label_2a9e98;
        case 0x2a9e9cu: goto label_2a9e9c;
        case 0x2a9ea0u: goto label_2a9ea0;
        case 0x2a9ea4u: goto label_2a9ea4;
        case 0x2a9ea8u: goto label_2a9ea8;
        case 0x2a9eacu: goto label_2a9eac;
        case 0x2a9eb0u: goto label_2a9eb0;
        case 0x2a9eb4u: goto label_2a9eb4;
        case 0x2a9eb8u: goto label_2a9eb8;
        case 0x2a9ebcu: goto label_2a9ebc;
        case 0x2a9ec0u: goto label_2a9ec0;
        case 0x2a9ec4u: goto label_2a9ec4;
        case 0x2a9ec8u: goto label_2a9ec8;
        case 0x2a9eccu: goto label_2a9ecc;
        case 0x2a9ed0u: goto label_2a9ed0;
        case 0x2a9ed4u: goto label_2a9ed4;
        case 0x2a9ed8u: goto label_2a9ed8;
        case 0x2a9edcu: goto label_2a9edc;
        case 0x2a9ee0u: goto label_2a9ee0;
        case 0x2a9ee4u: goto label_2a9ee4;
        case 0x2a9ee8u: goto label_2a9ee8;
        case 0x2a9eecu: goto label_2a9eec;
        case 0x2a9ef0u: goto label_2a9ef0;
        case 0x2a9ef4u: goto label_2a9ef4;
        case 0x2a9ef8u: goto label_2a9ef8;
        case 0x2a9efcu: goto label_2a9efc;
        case 0x2a9f00u: goto label_2a9f00;
        case 0x2a9f04u: goto label_2a9f04;
        case 0x2a9f08u: goto label_2a9f08;
        case 0x2a9f0cu: goto label_2a9f0c;
        case 0x2a9f10u: goto label_2a9f10;
        case 0x2a9f14u: goto label_2a9f14;
        case 0x2a9f18u: goto label_2a9f18;
        case 0x2a9f1cu: goto label_2a9f1c;
        case 0x2a9f20u: goto label_2a9f20;
        case 0x2a9f24u: goto label_2a9f24;
        case 0x2a9f28u: goto label_2a9f28;
        case 0x2a9f2cu: goto label_2a9f2c;
        case 0x2a9f30u: goto label_2a9f30;
        case 0x2a9f34u: goto label_2a9f34;
        case 0x2a9f38u: goto label_2a9f38;
        case 0x2a9f3cu: goto label_2a9f3c;
        case 0x2a9f40u: goto label_2a9f40;
        case 0x2a9f44u: goto label_2a9f44;
        case 0x2a9f48u: goto label_2a9f48;
        case 0x2a9f4cu: goto label_2a9f4c;
        case 0x2a9f50u: goto label_2a9f50;
        case 0x2a9f54u: goto label_2a9f54;
        case 0x2a9f58u: goto label_2a9f58;
        case 0x2a9f5cu: goto label_2a9f5c;
        case 0x2a9f60u: goto label_2a9f60;
        case 0x2a9f64u: goto label_2a9f64;
        case 0x2a9f68u: goto label_2a9f68;
        case 0x2a9f6cu: goto label_2a9f6c;
        case 0x2a9f70u: goto label_2a9f70;
        case 0x2a9f74u: goto label_2a9f74;
        case 0x2a9f78u: goto label_2a9f78;
        case 0x2a9f7cu: goto label_2a9f7c;
        case 0x2a9f80u: goto label_2a9f80;
        case 0x2a9f84u: goto label_2a9f84;
        case 0x2a9f88u: goto label_2a9f88;
        case 0x2a9f8cu: goto label_2a9f8c;
        case 0x2a9f90u: goto label_2a9f90;
        case 0x2a9f94u: goto label_2a9f94;
        case 0x2a9f98u: goto label_2a9f98;
        case 0x2a9f9cu: goto label_2a9f9c;
        case 0x2a9fa0u: goto label_2a9fa0;
        case 0x2a9fa4u: goto label_2a9fa4;
        case 0x2a9fa8u: goto label_2a9fa8;
        case 0x2a9facu: goto label_2a9fac;
        case 0x2a9fb0u: goto label_2a9fb0;
        case 0x2a9fb4u: goto label_2a9fb4;
        case 0x2a9fb8u: goto label_2a9fb8;
        case 0x2a9fbcu: goto label_2a9fbc;
        case 0x2a9fc0u: goto label_2a9fc0;
        case 0x2a9fc4u: goto label_2a9fc4;
        case 0x2a9fc8u: goto label_2a9fc8;
        case 0x2a9fccu: goto label_2a9fcc;
        case 0x2a9fd0u: goto label_2a9fd0;
        case 0x2a9fd4u: goto label_2a9fd4;
        case 0x2a9fd8u: goto label_2a9fd8;
        case 0x2a9fdcu: goto label_2a9fdc;
        case 0x2a9fe0u: goto label_2a9fe0;
        case 0x2a9fe4u: goto label_2a9fe4;
        case 0x2a9fe8u: goto label_2a9fe8;
        case 0x2a9fecu: goto label_2a9fec;
        case 0x2a9ff0u: goto label_2a9ff0;
        case 0x2a9ff4u: goto label_2a9ff4;
        case 0x2a9ff8u: goto label_2a9ff8;
        case 0x2a9ffcu: goto label_2a9ffc;
        case 0x2aa000u: goto label_2aa000;
        case 0x2aa004u: goto label_2aa004;
        case 0x2aa008u: goto label_2aa008;
        case 0x2aa00cu: goto label_2aa00c;
        case 0x2aa010u: goto label_2aa010;
        case 0x2aa014u: goto label_2aa014;
        case 0x2aa018u: goto label_2aa018;
        case 0x2aa01cu: goto label_2aa01c;
        case 0x2aa020u: goto label_2aa020;
        case 0x2aa024u: goto label_2aa024;
        case 0x2aa028u: goto label_2aa028;
        case 0x2aa02cu: goto label_2aa02c;
        case 0x2aa030u: goto label_2aa030;
        case 0x2aa034u: goto label_2aa034;
        case 0x2aa038u: goto label_2aa038;
        case 0x2aa03cu: goto label_2aa03c;
        case 0x2aa040u: goto label_2aa040;
        case 0x2aa044u: goto label_2aa044;
        case 0x2aa048u: goto label_2aa048;
        case 0x2aa04cu: goto label_2aa04c;
        case 0x2aa050u: goto label_2aa050;
        case 0x2aa054u: goto label_2aa054;
        case 0x2aa058u: goto label_2aa058;
        case 0x2aa05cu: goto label_2aa05c;
        case 0x2aa060u: goto label_2aa060;
        case 0x2aa064u: goto label_2aa064;
        case 0x2aa068u: goto label_2aa068;
        case 0x2aa06cu: goto label_2aa06c;
        case 0x2aa070u: goto label_2aa070;
        case 0x2aa074u: goto label_2aa074;
        case 0x2aa078u: goto label_2aa078;
        case 0x2aa07cu: goto label_2aa07c;
        case 0x2aa080u: goto label_2aa080;
        case 0x2aa084u: goto label_2aa084;
        case 0x2aa088u: goto label_2aa088;
        case 0x2aa08cu: goto label_2aa08c;
        case 0x2aa090u: goto label_2aa090;
        case 0x2aa094u: goto label_2aa094;
        case 0x2aa098u: goto label_2aa098;
        case 0x2aa09cu: goto label_2aa09c;
        case 0x2aa0a0u: goto label_2aa0a0;
        case 0x2aa0a4u: goto label_2aa0a4;
        case 0x2aa0a8u: goto label_2aa0a8;
        case 0x2aa0acu: goto label_2aa0ac;
        case 0x2aa0b0u: goto label_2aa0b0;
        case 0x2aa0b4u: goto label_2aa0b4;
        case 0x2aa0b8u: goto label_2aa0b8;
        case 0x2aa0bcu: goto label_2aa0bc;
        case 0x2aa0c0u: goto label_2aa0c0;
        case 0x2aa0c4u: goto label_2aa0c4;
        case 0x2aa0c8u: goto label_2aa0c8;
        case 0x2aa0ccu: goto label_2aa0cc;
        case 0x2aa0d0u: goto label_2aa0d0;
        case 0x2aa0d4u: goto label_2aa0d4;
        case 0x2aa0d8u: goto label_2aa0d8;
        case 0x2aa0dcu: goto label_2aa0dc;
        case 0x2aa0e0u: goto label_2aa0e0;
        case 0x2aa0e4u: goto label_2aa0e4;
        case 0x2aa0e8u: goto label_2aa0e8;
        case 0x2aa0ecu: goto label_2aa0ec;
        case 0x2aa0f0u: goto label_2aa0f0;
        case 0x2aa0f4u: goto label_2aa0f4;
        case 0x2aa0f8u: goto label_2aa0f8;
        case 0x2aa0fcu: goto label_2aa0fc;
        case 0x2aa100u: goto label_2aa100;
        case 0x2aa104u: goto label_2aa104;
        case 0x2aa108u: goto label_2aa108;
        case 0x2aa10cu: goto label_2aa10c;
        case 0x2aa110u: goto label_2aa110;
        case 0x2aa114u: goto label_2aa114;
        case 0x2aa118u: goto label_2aa118;
        case 0x2aa11cu: goto label_2aa11c;
        case 0x2aa120u: goto label_2aa120;
        case 0x2aa124u: goto label_2aa124;
        case 0x2aa128u: goto label_2aa128;
        case 0x2aa12cu: goto label_2aa12c;
        case 0x2aa130u: goto label_2aa130;
        case 0x2aa134u: goto label_2aa134;
        case 0x2aa138u: goto label_2aa138;
        case 0x2aa13cu: goto label_2aa13c;
        case 0x2aa140u: goto label_2aa140;
        case 0x2aa144u: goto label_2aa144;
        case 0x2aa148u: goto label_2aa148;
        case 0x2aa14cu: goto label_2aa14c;
        case 0x2aa150u: goto label_2aa150;
        case 0x2aa154u: goto label_2aa154;
        case 0x2aa158u: goto label_2aa158;
        case 0x2aa15cu: goto label_2aa15c;
        case 0x2aa160u: goto label_2aa160;
        case 0x2aa164u: goto label_2aa164;
        case 0x2aa168u: goto label_2aa168;
        case 0x2aa16cu: goto label_2aa16c;
        case 0x2aa170u: goto label_2aa170;
        case 0x2aa174u: goto label_2aa174;
        case 0x2aa178u: goto label_2aa178;
        case 0x2aa17cu: goto label_2aa17c;
        case 0x2aa180u: goto label_2aa180;
        case 0x2aa184u: goto label_2aa184;
        case 0x2aa188u: goto label_2aa188;
        case 0x2aa18cu: goto label_2aa18c;
        case 0x2aa190u: goto label_2aa190;
        case 0x2aa194u: goto label_2aa194;
        case 0x2aa198u: goto label_2aa198;
        case 0x2aa19cu: goto label_2aa19c;
        case 0x2aa1a0u: goto label_2aa1a0;
        case 0x2aa1a4u: goto label_2aa1a4;
        case 0x2aa1a8u: goto label_2aa1a8;
        case 0x2aa1acu: goto label_2aa1ac;
        case 0x2aa1b0u: goto label_2aa1b0;
        case 0x2aa1b4u: goto label_2aa1b4;
        case 0x2aa1b8u: goto label_2aa1b8;
        case 0x2aa1bcu: goto label_2aa1bc;
        case 0x2aa1c0u: goto label_2aa1c0;
        case 0x2aa1c4u: goto label_2aa1c4;
        case 0x2aa1c8u: goto label_2aa1c8;
        case 0x2aa1ccu: goto label_2aa1cc;
        case 0x2aa1d0u: goto label_2aa1d0;
        case 0x2aa1d4u: goto label_2aa1d4;
        case 0x2aa1d8u: goto label_2aa1d8;
        case 0x2aa1dcu: goto label_2aa1dc;
        case 0x2aa1e0u: goto label_2aa1e0;
        case 0x2aa1e4u: goto label_2aa1e4;
        case 0x2aa1e8u: goto label_2aa1e8;
        case 0x2aa1ecu: goto label_2aa1ec;
        case 0x2aa1f0u: goto label_2aa1f0;
        case 0x2aa1f4u: goto label_2aa1f4;
        case 0x2aa1f8u: goto label_2aa1f8;
        case 0x2aa1fcu: goto label_2aa1fc;
        case 0x2aa200u: goto label_2aa200;
        case 0x2aa204u: goto label_2aa204;
        case 0x2aa208u: goto label_2aa208;
        case 0x2aa20cu: goto label_2aa20c;
        case 0x2aa210u: goto label_2aa210;
        case 0x2aa214u: goto label_2aa214;
        case 0x2aa218u: goto label_2aa218;
        case 0x2aa21cu: goto label_2aa21c;
        case 0x2aa220u: goto label_2aa220;
        case 0x2aa224u: goto label_2aa224;
        case 0x2aa228u: goto label_2aa228;
        case 0x2aa22cu: goto label_2aa22c;
        case 0x2aa230u: goto label_2aa230;
        case 0x2aa234u: goto label_2aa234;
        case 0x2aa238u: goto label_2aa238;
        case 0x2aa23cu: goto label_2aa23c;
        case 0x2aa240u: goto label_2aa240;
        case 0x2aa244u: goto label_2aa244;
        case 0x2aa248u: goto label_2aa248;
        case 0x2aa24cu: goto label_2aa24c;
        case 0x2aa250u: goto label_2aa250;
        case 0x2aa254u: goto label_2aa254;
        case 0x2aa258u: goto label_2aa258;
        case 0x2aa25cu: goto label_2aa25c;
        case 0x2aa260u: goto label_2aa260;
        case 0x2aa264u: goto label_2aa264;
        case 0x2aa268u: goto label_2aa268;
        case 0x2aa26cu: goto label_2aa26c;
        case 0x2aa270u: goto label_2aa270;
        case 0x2aa274u: goto label_2aa274;
        case 0x2aa278u: goto label_2aa278;
        case 0x2aa27cu: goto label_2aa27c;
        case 0x2aa280u: goto label_2aa280;
        case 0x2aa284u: goto label_2aa284;
        case 0x2aa288u: goto label_2aa288;
        case 0x2aa28cu: goto label_2aa28c;
        case 0x2aa290u: goto label_2aa290;
        case 0x2aa294u: goto label_2aa294;
        case 0x2aa298u: goto label_2aa298;
        case 0x2aa29cu: goto label_2aa29c;
        case 0x2aa2a0u: goto label_2aa2a0;
        case 0x2aa2a4u: goto label_2aa2a4;
        case 0x2aa2a8u: goto label_2aa2a8;
        case 0x2aa2acu: goto label_2aa2ac;
        case 0x2aa2b0u: goto label_2aa2b0;
        case 0x2aa2b4u: goto label_2aa2b4;
        case 0x2aa2b8u: goto label_2aa2b8;
        case 0x2aa2bcu: goto label_2aa2bc;
        case 0x2aa2c0u: goto label_2aa2c0;
        case 0x2aa2c4u: goto label_2aa2c4;
        case 0x2aa2c8u: goto label_2aa2c8;
        case 0x2aa2ccu: goto label_2aa2cc;
        case 0x2aa2d0u: goto label_2aa2d0;
        case 0x2aa2d4u: goto label_2aa2d4;
        case 0x2aa2d8u: goto label_2aa2d8;
        case 0x2aa2dcu: goto label_2aa2dc;
        case 0x2aa2e0u: goto label_2aa2e0;
        case 0x2aa2e4u: goto label_2aa2e4;
        case 0x2aa2e8u: goto label_2aa2e8;
        case 0x2aa2ecu: goto label_2aa2ec;
        case 0x2aa2f0u: goto label_2aa2f0;
        case 0x2aa2f4u: goto label_2aa2f4;
        case 0x2aa2f8u: goto label_2aa2f8;
        case 0x2aa2fcu: goto label_2aa2fc;
        case 0x2aa300u: goto label_2aa300;
        case 0x2aa304u: goto label_2aa304;
        case 0x2aa308u: goto label_2aa308;
        case 0x2aa30cu: goto label_2aa30c;
        case 0x2aa310u: goto label_2aa310;
        case 0x2aa314u: goto label_2aa314;
        case 0x2aa318u: goto label_2aa318;
        case 0x2aa31cu: goto label_2aa31c;
        case 0x2aa320u: goto label_2aa320;
        case 0x2aa324u: goto label_2aa324;
        case 0x2aa328u: goto label_2aa328;
        case 0x2aa32cu: goto label_2aa32c;
        case 0x2aa330u: goto label_2aa330;
        case 0x2aa334u: goto label_2aa334;
        case 0x2aa338u: goto label_2aa338;
        case 0x2aa33cu: goto label_2aa33c;
        case 0x2aa340u: goto label_2aa340;
        case 0x2aa344u: goto label_2aa344;
        case 0x2aa348u: goto label_2aa348;
        case 0x2aa34cu: goto label_2aa34c;
        case 0x2aa350u: goto label_2aa350;
        case 0x2aa354u: goto label_2aa354;
        case 0x2aa358u: goto label_2aa358;
        case 0x2aa35cu: goto label_2aa35c;
        case 0x2aa360u: goto label_2aa360;
        case 0x2aa364u: goto label_2aa364;
        case 0x2aa368u: goto label_2aa368;
        case 0x2aa36cu: goto label_2aa36c;
        case 0x2aa370u: goto label_2aa370;
        case 0x2aa374u: goto label_2aa374;
        case 0x2aa378u: goto label_2aa378;
        case 0x2aa37cu: goto label_2aa37c;
        case 0x2aa380u: goto label_2aa380;
        case 0x2aa384u: goto label_2aa384;
        case 0x2aa388u: goto label_2aa388;
        case 0x2aa38cu: goto label_2aa38c;
        case 0x2aa390u: goto label_2aa390;
        case 0x2aa394u: goto label_2aa394;
        case 0x2aa398u: goto label_2aa398;
        case 0x2aa39cu: goto label_2aa39c;
        case 0x2aa3a0u: goto label_2aa3a0;
        case 0x2aa3a4u: goto label_2aa3a4;
        case 0x2aa3a8u: goto label_2aa3a8;
        case 0x2aa3acu: goto label_2aa3ac;
        case 0x2aa3b0u: goto label_2aa3b0;
        case 0x2aa3b4u: goto label_2aa3b4;
        case 0x2aa3b8u: goto label_2aa3b8;
        case 0x2aa3bcu: goto label_2aa3bc;
        case 0x2aa3c0u: goto label_2aa3c0;
        case 0x2aa3c4u: goto label_2aa3c4;
        case 0x2aa3c8u: goto label_2aa3c8;
        case 0x2aa3ccu: goto label_2aa3cc;
        case 0x2aa3d0u: goto label_2aa3d0;
        case 0x2aa3d4u: goto label_2aa3d4;
        case 0x2aa3d8u: goto label_2aa3d8;
        case 0x2aa3dcu: goto label_2aa3dc;
        case 0x2aa3e0u: goto label_2aa3e0;
        case 0x2aa3e4u: goto label_2aa3e4;
        case 0x2aa3e8u: goto label_2aa3e8;
        case 0x2aa3ecu: goto label_2aa3ec;
        case 0x2aa3f0u: goto label_2aa3f0;
        case 0x2aa3f4u: goto label_2aa3f4;
        case 0x2aa3f8u: goto label_2aa3f8;
        case 0x2aa3fcu: goto label_2aa3fc;
        case 0x2aa400u: goto label_2aa400;
        case 0x2aa404u: goto label_2aa404;
        case 0x2aa408u: goto label_2aa408;
        case 0x2aa40cu: goto label_2aa40c;
        case 0x2aa410u: goto label_2aa410;
        case 0x2aa414u: goto label_2aa414;
        case 0x2aa418u: goto label_2aa418;
        case 0x2aa41cu: goto label_2aa41c;
        case 0x2aa420u: goto label_2aa420;
        case 0x2aa424u: goto label_2aa424;
        case 0x2aa428u: goto label_2aa428;
        case 0x2aa42cu: goto label_2aa42c;
        case 0x2aa430u: goto label_2aa430;
        case 0x2aa434u: goto label_2aa434;
        case 0x2aa438u: goto label_2aa438;
        case 0x2aa43cu: goto label_2aa43c;
        case 0x2aa440u: goto label_2aa440;
        case 0x2aa444u: goto label_2aa444;
        case 0x2aa448u: goto label_2aa448;
        case 0x2aa44cu: goto label_2aa44c;
        case 0x2aa450u: goto label_2aa450;
        case 0x2aa454u: goto label_2aa454;
        case 0x2aa458u: goto label_2aa458;
        case 0x2aa45cu: goto label_2aa45c;
        case 0x2aa460u: goto label_2aa460;
        case 0x2aa464u: goto label_2aa464;
        case 0x2aa468u: goto label_2aa468;
        case 0x2aa46cu: goto label_2aa46c;
        case 0x2aa470u: goto label_2aa470;
        case 0x2aa474u: goto label_2aa474;
        case 0x2aa478u: goto label_2aa478;
        case 0x2aa47cu: goto label_2aa47c;
        case 0x2aa480u: goto label_2aa480;
        case 0x2aa484u: goto label_2aa484;
        case 0x2aa488u: goto label_2aa488;
        case 0x2aa48cu: goto label_2aa48c;
        case 0x2aa490u: goto label_2aa490;
        case 0x2aa494u: goto label_2aa494;
        case 0x2aa498u: goto label_2aa498;
        case 0x2aa49cu: goto label_2aa49c;
        case 0x2aa4a0u: goto label_2aa4a0;
        case 0x2aa4a4u: goto label_2aa4a4;
        case 0x2aa4a8u: goto label_2aa4a8;
        case 0x2aa4acu: goto label_2aa4ac;
        case 0x2aa4b0u: goto label_2aa4b0;
        case 0x2aa4b4u: goto label_2aa4b4;
        case 0x2aa4b8u: goto label_2aa4b8;
        case 0x2aa4bcu: goto label_2aa4bc;
        case 0x2aa4c0u: goto label_2aa4c0;
        case 0x2aa4c4u: goto label_2aa4c4;
        case 0x2aa4c8u: goto label_2aa4c8;
        case 0x2aa4ccu: goto label_2aa4cc;
        case 0x2aa4d0u: goto label_2aa4d0;
        case 0x2aa4d4u: goto label_2aa4d4;
        case 0x2aa4d8u: goto label_2aa4d8;
        case 0x2aa4dcu: goto label_2aa4dc;
        case 0x2aa4e0u: goto label_2aa4e0;
        case 0x2aa4e4u: goto label_2aa4e4;
        case 0x2aa4e8u: goto label_2aa4e8;
        case 0x2aa4ecu: goto label_2aa4ec;
        case 0x2aa4f0u: goto label_2aa4f0;
        case 0x2aa4f4u: goto label_2aa4f4;
        case 0x2aa4f8u: goto label_2aa4f8;
        case 0x2aa4fcu: goto label_2aa4fc;
        case 0x2aa500u: goto label_2aa500;
        case 0x2aa504u: goto label_2aa504;
        case 0x2aa508u: goto label_2aa508;
        case 0x2aa50cu: goto label_2aa50c;
        case 0x2aa510u: goto label_2aa510;
        case 0x2aa514u: goto label_2aa514;
        case 0x2aa518u: goto label_2aa518;
        case 0x2aa51cu: goto label_2aa51c;
        case 0x2aa520u: goto label_2aa520;
        case 0x2aa524u: goto label_2aa524;
        case 0x2aa528u: goto label_2aa528;
        case 0x2aa52cu: goto label_2aa52c;
        case 0x2aa530u: goto label_2aa530;
        case 0x2aa534u: goto label_2aa534;
        case 0x2aa538u: goto label_2aa538;
        case 0x2aa53cu: goto label_2aa53c;
        case 0x2aa540u: goto label_2aa540;
        case 0x2aa544u: goto label_2aa544;
        case 0x2aa548u: goto label_2aa548;
        case 0x2aa54cu: goto label_2aa54c;
        case 0x2aa550u: goto label_2aa550;
        case 0x2aa554u: goto label_2aa554;
        case 0x2aa558u: goto label_2aa558;
        case 0x2aa55cu: goto label_2aa55c;
        case 0x2aa560u: goto label_2aa560;
        case 0x2aa564u: goto label_2aa564;
        case 0x2aa568u: goto label_2aa568;
        case 0x2aa56cu: goto label_2aa56c;
        case 0x2aa570u: goto label_2aa570;
        case 0x2aa574u: goto label_2aa574;
        case 0x2aa578u: goto label_2aa578;
        case 0x2aa57cu: goto label_2aa57c;
        case 0x2aa580u: goto label_2aa580;
        case 0x2aa584u: goto label_2aa584;
        case 0x2aa588u: goto label_2aa588;
        case 0x2aa58cu: goto label_2aa58c;
        case 0x2aa590u: goto label_2aa590;
        case 0x2aa594u: goto label_2aa594;
        case 0x2aa598u: goto label_2aa598;
        case 0x2aa59cu: goto label_2aa59c;
        case 0x2aa5a0u: goto label_2aa5a0;
        case 0x2aa5a4u: goto label_2aa5a4;
        case 0x2aa5a8u: goto label_2aa5a8;
        case 0x2aa5acu: goto label_2aa5ac;
        case 0x2aa5b0u: goto label_2aa5b0;
        case 0x2aa5b4u: goto label_2aa5b4;
        case 0x2aa5b8u: goto label_2aa5b8;
        case 0x2aa5bcu: goto label_2aa5bc;
        case 0x2aa5c0u: goto label_2aa5c0;
        case 0x2aa5c4u: goto label_2aa5c4;
        case 0x2aa5c8u: goto label_2aa5c8;
        case 0x2aa5ccu: goto label_2aa5cc;
        case 0x2aa5d0u: goto label_2aa5d0;
        case 0x2aa5d4u: goto label_2aa5d4;
        case 0x2aa5d8u: goto label_2aa5d8;
        case 0x2aa5dcu: goto label_2aa5dc;
        case 0x2aa5e0u: goto label_2aa5e0;
        case 0x2aa5e4u: goto label_2aa5e4;
        case 0x2aa5e8u: goto label_2aa5e8;
        case 0x2aa5ecu: goto label_2aa5ec;
        case 0x2aa5f0u: goto label_2aa5f0;
        case 0x2aa5f4u: goto label_2aa5f4;
        case 0x2aa5f8u: goto label_2aa5f8;
        case 0x2aa5fcu: goto label_2aa5fc;
        case 0x2aa600u: goto label_2aa600;
        case 0x2aa604u: goto label_2aa604;
        case 0x2aa608u: goto label_2aa608;
        case 0x2aa60cu: goto label_2aa60c;
        case 0x2aa610u: goto label_2aa610;
        case 0x2aa614u: goto label_2aa614;
        case 0x2aa618u: goto label_2aa618;
        case 0x2aa61cu: goto label_2aa61c;
        case 0x2aa620u: goto label_2aa620;
        case 0x2aa624u: goto label_2aa624;
        case 0x2aa628u: goto label_2aa628;
        case 0x2aa62cu: goto label_2aa62c;
        case 0x2aa630u: goto label_2aa630;
        case 0x2aa634u: goto label_2aa634;
        case 0x2aa638u: goto label_2aa638;
        case 0x2aa63cu: goto label_2aa63c;
        case 0x2aa640u: goto label_2aa640;
        case 0x2aa644u: goto label_2aa644;
        case 0x2aa648u: goto label_2aa648;
        case 0x2aa64cu: goto label_2aa64c;
        case 0x2aa650u: goto label_2aa650;
        case 0x2aa654u: goto label_2aa654;
        case 0x2aa658u: goto label_2aa658;
        case 0x2aa65cu: goto label_2aa65c;
        case 0x2aa660u: goto label_2aa660;
        case 0x2aa664u: goto label_2aa664;
        case 0x2aa668u: goto label_2aa668;
        case 0x2aa66cu: goto label_2aa66c;
        case 0x2aa670u: goto label_2aa670;
        case 0x2aa674u: goto label_2aa674;
        case 0x2aa678u: goto label_2aa678;
        case 0x2aa67cu: goto label_2aa67c;
        case 0x2aa680u: goto label_2aa680;
        case 0x2aa684u: goto label_2aa684;
        case 0x2aa688u: goto label_2aa688;
        case 0x2aa68cu: goto label_2aa68c;
        case 0x2aa690u: goto label_2aa690;
        case 0x2aa694u: goto label_2aa694;
        case 0x2aa698u: goto label_2aa698;
        case 0x2aa69cu: goto label_2aa69c;
        case 0x2aa6a0u: goto label_2aa6a0;
        case 0x2aa6a4u: goto label_2aa6a4;
        case 0x2aa6a8u: goto label_2aa6a8;
        case 0x2aa6acu: goto label_2aa6ac;
        case 0x2aa6b0u: goto label_2aa6b0;
        case 0x2aa6b4u: goto label_2aa6b4;
        case 0x2aa6b8u: goto label_2aa6b8;
        case 0x2aa6bcu: goto label_2aa6bc;
        case 0x2aa6c0u: goto label_2aa6c0;
        case 0x2aa6c4u: goto label_2aa6c4;
        case 0x2aa6c8u: goto label_2aa6c8;
        case 0x2aa6ccu: goto label_2aa6cc;
        case 0x2aa6d0u: goto label_2aa6d0;
        case 0x2aa6d4u: goto label_2aa6d4;
        case 0x2aa6d8u: goto label_2aa6d8;
        case 0x2aa6dcu: goto label_2aa6dc;
        case 0x2aa6e0u: goto label_2aa6e0;
        case 0x2aa6e4u: goto label_2aa6e4;
        case 0x2aa6e8u: goto label_2aa6e8;
        case 0x2aa6ecu: goto label_2aa6ec;
        case 0x2aa6f0u: goto label_2aa6f0;
        case 0x2aa6f4u: goto label_2aa6f4;
        case 0x2aa6f8u: goto label_2aa6f8;
        case 0x2aa6fcu: goto label_2aa6fc;
        case 0x2aa700u: goto label_2aa700;
        case 0x2aa704u: goto label_2aa704;
        case 0x2aa708u: goto label_2aa708;
        case 0x2aa70cu: goto label_2aa70c;
        case 0x2aa710u: goto label_2aa710;
        case 0x2aa714u: goto label_2aa714;
        case 0x2aa718u: goto label_2aa718;
        case 0x2aa71cu: goto label_2aa71c;
        case 0x2aa720u: goto label_2aa720;
        case 0x2aa724u: goto label_2aa724;
        case 0x2aa728u: goto label_2aa728;
        case 0x2aa72cu: goto label_2aa72c;
        case 0x2aa730u: goto label_2aa730;
        case 0x2aa734u: goto label_2aa734;
        case 0x2aa738u: goto label_2aa738;
        case 0x2aa73cu: goto label_2aa73c;
        case 0x2aa740u: goto label_2aa740;
        case 0x2aa744u: goto label_2aa744;
        case 0x2aa748u: goto label_2aa748;
        case 0x2aa74cu: goto label_2aa74c;
        case 0x2aa750u: goto label_2aa750;
        case 0x2aa754u: goto label_2aa754;
        case 0x2aa758u: goto label_2aa758;
        case 0x2aa75cu: goto label_2aa75c;
        case 0x2aa760u: goto label_2aa760;
        case 0x2aa764u: goto label_2aa764;
        case 0x2aa768u: goto label_2aa768;
        case 0x2aa76cu: goto label_2aa76c;
        case 0x2aa770u: goto label_2aa770;
        case 0x2aa774u: goto label_2aa774;
        case 0x2aa778u: goto label_2aa778;
        case 0x2aa77cu: goto label_2aa77c;
        case 0x2aa780u: goto label_2aa780;
        case 0x2aa784u: goto label_2aa784;
        case 0x2aa788u: goto label_2aa788;
        case 0x2aa78cu: goto label_2aa78c;
        default: break;
    }

    ctx->pc = 0x2a9930u;

label_2a9930:
    // 0x2a9930: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2a9930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2a9934:
    // 0x2a9934: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a9934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a9938:
    // 0x2a9938: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a993c:
    // 0x2a993c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a9940:
    // 0x2a9940: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a9944:
    // 0x2a9944: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a9944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9948:
    // 0x2a9948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a9948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a994c:
    // 0x2a994c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2a994cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_2a9950:
    // 0x2a9950: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a9950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a9954:
    // 0x2a9954: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a9954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a9958:
    // 0x2a9958: 0xc04afe8  jal         func_12BFA0
label_2a995c:
    if (ctx->pc == 0x2A995Cu) {
        ctx->pc = 0x2A995Cu;
            // 0x2a995c: 0x2484fb78  addiu       $a0, $a0, -0x488 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966136));
        ctx->pc = 0x2A9960u;
        goto label_2a9960;
    }
    ctx->pc = 0x2A9958u;
    SET_GPR_U32(ctx, 31, 0x2A9960u);
    ctx->pc = 0x2A995Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9958u;
            // 0x2a995c: 0x2484fb78  addiu       $a0, $a0, -0x488 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9960u; }
        if (ctx->pc != 0x2A9960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9960u; }
        if (ctx->pc != 0x2A9960u) { return; }
    }
    ctx->pc = 0x2A9960u;
label_2a9960:
    // 0x2a9960: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x2a9960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a9964:
    // 0x2a9964: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2a9964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2a9968:
    // 0x2a9968: 0xc0ab288  jal         func_2ACA20
label_2a996c:
    if (ctx->pc == 0x2A996Cu) {
        ctx->pc = 0x2A996Cu;
            // 0x2a996c: 0x2645001c  addiu       $a1, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->pc = 0x2A9970u;
        goto label_2a9970;
    }
    ctx->pc = 0x2A9968u;
    SET_GPR_U32(ctx, 31, 0x2A9970u);
    ctx->pc = 0x2A996Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9968u;
            // 0x2a996c: 0x2645001c  addiu       $a1, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9970u; }
        if (ctx->pc != 0x2A9970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9970u; }
        if (ctx->pc != 0x2A9970u) { return; }
    }
    ctx->pc = 0x2A9970u;
label_2a9970:
    // 0x2a9970: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2a9970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a9974:
    // 0x2a9974: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x2a9974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_2a9978:
    // 0x2a9978: 0xc0ab288  jal         func_2ACA20
label_2a997c:
    if (ctx->pc == 0x2A997Cu) {
        ctx->pc = 0x2A997Cu;
            // 0x2a997c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9980u;
        goto label_2a9980;
    }
    ctx->pc = 0x2A9978u;
    SET_GPR_U32(ctx, 31, 0x2A9980u);
    ctx->pc = 0x2A997Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9978u;
            // 0x2a997c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9980u; }
        if (ctx->pc != 0x2A9980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9980u; }
        if (ctx->pc != 0x2A9980u) { return; }
    }
    ctx->pc = 0x2A9980u;
label_2a9980:
    // 0x2a9980: 0x10000013  b           . + 4 + (0x13 << 2)
label_2a9984:
    if (ctx->pc == 0x2A9984u) {
        ctx->pc = 0x2A9988u;
        goto label_2a9988;
    }
    ctx->pc = 0x2A9980u;
    {
        const bool branch_taken_0x2a9980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9980) {
            ctx->pc = 0x2A99D0u;
            goto label_2a99d0;
        }
    }
    ctx->pc = 0x2A9988u;
label_2a9988:
    // 0x2a9988: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2a9988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2a998c:
    // 0x2a998c: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x2a998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_2a9990:
    // 0x2a9990: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2a9994:
    if (ctx->pc == 0x2A9994u) {
        ctx->pc = 0x2A9994u;
            // 0x2a9994: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->pc = 0x2A9998u;
        goto label_2a9998;
    }
    ctx->pc = 0x2A9990u;
    {
        const bool branch_taken_0x2a9990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9990u;
            // 0x2a9994: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9990) {
            ctx->pc = 0x2A99D0u;
            goto label_2a99d0;
        }
    }
    ctx->pc = 0x2A9998u;
label_2a9998:
    // 0x2a9998: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2a9998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2a999c:
    // 0x2a999c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x2a999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_2a99a0:
    // 0x2a99a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a99a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2a99a4:
    // 0x2a99a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2a99a8:
    if (ctx->pc == 0x2A99A8u) {
        ctx->pc = 0x2A99A8u;
            // 0x2a99a8: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->pc = 0x2A99ACu;
        goto label_2a99ac;
    }
    ctx->pc = 0x2A99A4u;
    {
        const bool branch_taken_0x2a99a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A99A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99A4u;
            // 0x2a99a8: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99a4) {
            ctx->pc = 0x2A99B8u;
            goto label_2a99b8;
        }
    }
    ctx->pc = 0x2A99ACu;
label_2a99ac:
    // 0x2a99ac: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x2a99acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_2a99b0:
    // 0x2a99b0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2a99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_2a99b4:
    // 0x2a99b4: 0x0  nop
    ctx->pc = 0x2a99b4u;
    // NOP
label_2a99b8:
    // 0x2a99b8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2a99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2a99bc:
    // 0x2a99bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a99c0:
    // 0x2a99c0: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2a99c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_2a99c4:
    // 0x2a99c4: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x2a99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_2a99c8:
    // 0x2a99c8: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x2a99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_2a99cc:
    // 0x2a99cc: 0x0  nop
    ctx->pc = 0x2a99ccu;
    // NOP
label_2a99d0:
    // 0x2a99d0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2a99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2a99d4:
    // 0x2a99d4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2a99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2a99d8:
    // 0x2a99d8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2a99dc:
    if (ctx->pc == 0x2A99DCu) {
        ctx->pc = 0x2A99E0u;
        goto label_2a99e0;
    }
    ctx->pc = 0x2A99D8u;
    {
        const bool branch_taken_0x2a99d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a99d8) {
            ctx->pc = 0x2A9A00u;
            goto label_2a9a00;
        }
    }
    ctx->pc = 0x2A99E0u;
label_2a99e0:
    // 0x2a99e0: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2a99e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_2a99e4:
    // 0x2a99e4: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2a99e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2a99e8:
    // 0x2a99e8: 0xc04af96  jal         func_12BE58
label_2a99ec:
    if (ctx->pc == 0x2A99ECu) {
        ctx->pc = 0x2A99ECu;
            // 0x2a99ec: 0x24a5fb78  addiu       $a1, $a1, -0x488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966136));
        ctx->pc = 0x2A99F0u;
        goto label_2a99f0;
    }
    ctx->pc = 0x2A99E8u;
    SET_GPR_U32(ctx, 31, 0x2A99F0u);
    ctx->pc = 0x2A99ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99E8u;
            // 0x2a99ec: 0x24a5fb78  addiu       $a1, $a1, -0x488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99F0u; }
        if (ctx->pc != 0x2A99F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99F0u; }
        if (ctx->pc != 0x2A99F0u) { return; }
    }
    ctx->pc = 0x2A99F0u;
label_2a99f0:
    // 0x2a99f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a99f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a99f4:
    // 0x2a99f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a99f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a99f8:
    // 0x2a99f8: 0x5040ffe3  beql        $v0, $zero, . + 4 + (-0x1D << 2)
label_2a99fc:
    if (ctx->pc == 0x2A99FCu) {
        ctx->pc = 0x2A99FCu;
            // 0x2a99fc: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->pc = 0x2A9A00u;
        goto label_2a9a00;
    }
    ctx->pc = 0x2A99F8u;
    {
        const bool branch_taken_0x2a99f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a99f8) {
            ctx->pc = 0x2A99FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99F8u;
            // 0x2a99fc: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9988;
        }
    }
    ctx->pc = 0x2A9A00u;
label_2a9a00:
    // 0x2a9a00: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x2a9a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a9a04:
    // 0x2a9a04: 0x8fb30100  lw          $s3, 0x100($sp)
    ctx->pc = 0x2a9a04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2a9a08:
    // 0x2a9a08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a9a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a9a0c:
    // 0x2a9a0c: 0xc0ab288  jal         func_2ACA20
label_2a9a10:
    if (ctx->pc == 0x2A9A10u) {
        ctx->pc = 0x2A9A10u;
            // 0x2a9a10: 0x2645001c  addiu       $a1, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->pc = 0x2A9A14u;
        goto label_2a9a14;
    }
    ctx->pc = 0x2A9A0Cu;
    SET_GPR_U32(ctx, 31, 0x2A9A14u);
    ctx->pc = 0x2A9A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A0Cu;
            // 0x2a9a10: 0x2645001c  addiu       $a1, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9A14u; }
        if (ctx->pc != 0x2A9A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9A14u; }
        if (ctx->pc != 0x2A9A14u) { return; }
    }
    ctx->pc = 0x2A9A14u;
label_2a9a14:
    // 0x2a9a14: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2a9a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2a9a18:
    // 0x2a9a18: 0x52630004  beql        $s3, $v1, . + 4 + (0x4 << 2)
label_2a9a1c:
    if (ctx->pc == 0x2A9A1Cu) {
        ctx->pc = 0x2A9A1Cu;
            // 0x2a9a1c: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x2A9A20u;
        goto label_2a9a20;
    }
    ctx->pc = 0x2A9A18u;
    {
        const bool branch_taken_0x2a9a18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9a18) {
            ctx->pc = 0x2A9A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A18u;
            // 0x2a9a1c: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9A2Cu;
            goto label_2a9a2c;
        }
    }
    ctx->pc = 0x2A9A20u;
label_2a9a20:
    // 0x2a9a20: 0xae71004c  sw          $s1, 0x4C($s3)
    ctx->pc = 0x2a9a20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 17));
label_2a9a24:
    // 0x2a9a24: 0x10000032  b           . + 4 + (0x32 << 2)
label_2a9a28:
    if (ctx->pc == 0x2A9A28u) {
        ctx->pc = 0x2A9A28u;
            // 0x2a9a28: 0xae700058  sw          $s0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
        ctx->pc = 0x2A9A2Cu;
        goto label_2a9a2c;
    }
    ctx->pc = 0x2A9A24u;
    {
        const bool branch_taken_0x2a9a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A24u;
            // 0x2a9a28: 0xae700058  sw          $s0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a24) {
            ctx->pc = 0x2A9AF0u;
            goto label_2a9af0;
        }
    }
    ctx->pc = 0x2A9A2Cu;
label_2a9a2c:
    // 0x2a9a2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a9a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a9a30:
    // 0x2a9a30: 0xc0ab288  jal         func_2ACA20
label_2a9a34:
    if (ctx->pc == 0x2A9A34u) {
        ctx->pc = 0x2A9A34u;
            // 0x2a9a34: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2A9A38u;
        goto label_2a9a38;
    }
    ctx->pc = 0x2A9A30u;
    SET_GPR_U32(ctx, 31, 0x2A9A38u);
    ctx->pc = 0x2A9A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A30u;
            // 0x2a9a34: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9A38u; }
        if (ctx->pc != 0x2A9A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9A38u; }
        if (ctx->pc != 0x2A9A38u) { return; }
    }
    ctx->pc = 0x2A9A38u;
label_2a9a38:
    // 0x2a9a38: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a9a3c:
    // 0x2a9a3c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x2a9a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2a9a40:
    // 0x2a9a40: 0xc0ab288  jal         func_2ACA20
label_2a9a44:
    if (ctx->pc == 0x2A9A44u) {
        ctx->pc = 0x2A9A44u;
            // 0x2a9a44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A48u;
        goto label_2a9a48;
    }
    ctx->pc = 0x2A9A40u;
    SET_GPR_U32(ctx, 31, 0x2A9A48u);
    ctx->pc = 0x2A9A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A40u;
            // 0x2a9a44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9A48u; }
        if (ctx->pc != 0x2A9A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9A48u; }
        if (ctx->pc != 0x2A9A48u) { return; }
    }
    ctx->pc = 0x2A9A48u;
label_2a9a48:
    // 0x2a9a48: 0x10000013  b           . + 4 + (0x13 << 2)
label_2a9a4c:
    if (ctx->pc == 0x2A9A4Cu) {
        ctx->pc = 0x2A9A50u;
        goto label_2a9a50;
    }
    ctx->pc = 0x2A9A48u;
    {
        const bool branch_taken_0x2a9a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9a48) {
            ctx->pc = 0x2A9A98u;
            goto label_2a9a98;
        }
    }
    ctx->pc = 0x2A9A50u;
label_2a9a50:
    // 0x2a9a50: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2a9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2a9a54:
    // 0x2a9a54: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x2a9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_2a9a58:
    // 0x2a9a58: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2a9a5c:
    if (ctx->pc == 0x2A9A5Cu) {
        ctx->pc = 0x2A9A5Cu;
            // 0x2a9a5c: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->pc = 0x2A9A60u;
        goto label_2a9a60;
    }
    ctx->pc = 0x2A9A58u;
    {
        const bool branch_taken_0x2a9a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A58u;
            // 0x2a9a5c: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a58) {
            ctx->pc = 0x2A9A98u;
            goto label_2a9a98;
        }
    }
    ctx->pc = 0x2A9A60u;
label_2a9a60:
    // 0x2a9a60: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2a9a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2a9a64:
    // 0x2a9a64: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x2a9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2a9a68:
    // 0x2a9a68: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2a9a6c:
    // 0x2a9a6c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2a9a70:
    if (ctx->pc == 0x2A9A70u) {
        ctx->pc = 0x2A9A70u;
            // 0x2a9a70: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->pc = 0x2A9A74u;
        goto label_2a9a74;
    }
    ctx->pc = 0x2A9A6Cu;
    {
        const bool branch_taken_0x2a9a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A6Cu;
            // 0x2a9a70: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a6c) {
            ctx->pc = 0x2A9A80u;
            goto label_2a9a80;
        }
    }
    ctx->pc = 0x2A9A74u;
label_2a9a74:
    // 0x2a9a74: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x2a9a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2a9a78:
    // 0x2a9a78: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2a9a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_2a9a7c:
    // 0x2a9a7c: 0x0  nop
    ctx->pc = 0x2a9a7cu;
    // NOP
label_2a9a80:
    // 0x2a9a80: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2a9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2a9a84:
    // 0x2a9a84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a9a88:
    // 0x2a9a88: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2a9a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2a9a8c:
    // 0x2a9a8c: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x2a9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_2a9a90:
    // 0x2a9a90: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x2a9a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_2a9a94:
    // 0x2a9a94: 0x0  nop
    ctx->pc = 0x2a9a94u;
    // NOP
label_2a9a98:
    // 0x2a9a98: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2a9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2a9a9c:
    // 0x2a9a9c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2a9aa0:
    // 0x2a9aa0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2a9aa4:
    if (ctx->pc == 0x2A9AA4u) {
        ctx->pc = 0x2A9AA8u;
        goto label_2a9aa8;
    }
    ctx->pc = 0x2A9AA0u;
    {
        const bool branch_taken_0x2a9aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a9aa0) {
            ctx->pc = 0x2A9AC8u;
            goto label_2a9ac8;
        }
    }
    ctx->pc = 0x2A9AA8u;
label_2a9aa8:
    // 0x2a9aa8: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2a9aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_2a9aac:
    // 0x2a9aac: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2a9aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2a9ab0:
    // 0x2a9ab0: 0xc04af96  jal         func_12BE58
label_2a9ab4:
    if (ctx->pc == 0x2A9AB4u) {
        ctx->pc = 0x2A9AB4u;
            // 0x2a9ab4: 0x24a5fb78  addiu       $a1, $a1, -0x488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966136));
        ctx->pc = 0x2A9AB8u;
        goto label_2a9ab8;
    }
    ctx->pc = 0x2A9AB0u;
    SET_GPR_U32(ctx, 31, 0x2A9AB8u);
    ctx->pc = 0x2A9AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AB0u;
            // 0x2a9ab4: 0x24a5fb78  addiu       $a1, $a1, -0x488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9AB8u; }
        if (ctx->pc != 0x2A9AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9AB8u; }
        if (ctx->pc != 0x2A9AB8u) { return; }
    }
    ctx->pc = 0x2A9AB8u;
label_2a9ab8:
    // 0x2a9ab8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a9ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a9abc:
    // 0x2a9abc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a9abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a9ac0:
    // 0x2a9ac0: 0x5040ffe3  beql        $v0, $zero, . + 4 + (-0x1D << 2)
label_2a9ac4:
    if (ctx->pc == 0x2A9AC4u) {
        ctx->pc = 0x2A9AC4u;
            // 0x2a9ac4: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x2A9AC8u;
        goto label_2a9ac8;
    }
    ctx->pc = 0x2A9AC0u;
    {
        const bool branch_taken_0x2a9ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9ac0) {
            ctx->pc = 0x2A9AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AC0u;
            // 0x2a9ac4: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9A50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9a50;
        }
    }
    ctx->pc = 0x2A9AC8u;
label_2a9ac8:
    // 0x2a9ac8: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x2a9ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2a9acc:
    // 0x2a9acc: 0x8fb300a0  lw          $s3, 0xA0($sp)
    ctx->pc = 0x2a9accu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2a9ad0:
    // 0x2a9ad0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a9ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a9ad4:
    // 0x2a9ad4: 0xc0ab288  jal         func_2ACA20
label_2a9ad8:
    if (ctx->pc == 0x2A9AD8u) {
        ctx->pc = 0x2A9AD8u;
            // 0x2a9ad8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2A9ADCu;
        goto label_2a9adc;
    }
    ctx->pc = 0x2A9AD4u;
    SET_GPR_U32(ctx, 31, 0x2A9ADCu);
    ctx->pc = 0x2A9AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AD4u;
            // 0x2a9ad8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9ADCu; }
        if (ctx->pc != 0x2A9ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9ADCu; }
        if (ctx->pc != 0x2A9ADCu) { return; }
    }
    ctx->pc = 0x2A9ADCu;
label_2a9adc:
    // 0x2a9adc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a9adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2a9ae0:
    // 0x2a9ae0: 0x52630004  beql        $s3, $v1, . + 4 + (0x4 << 2)
label_2a9ae4:
    if (ctx->pc == 0x2A9AE4u) {
        ctx->pc = 0x2A9AE4u;
            // 0x2a9ae4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2A9AE8u;
        goto label_2a9ae8;
    }
    ctx->pc = 0x2A9AE0u;
    {
        const bool branch_taken_0x2a9ae0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9ae0) {
            ctx->pc = 0x2A9AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AE0u;
            // 0x2a9ae4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9AF4u;
            goto label_2a9af4;
        }
    }
    ctx->pc = 0x2A9AE8u;
label_2a9ae8:
    // 0x2a9ae8: 0xae71004c  sw          $s1, 0x4C($s3)
    ctx->pc = 0x2a9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 17));
label_2a9aec:
    // 0x2a9aec: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2a9aecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_2a9af0:
    // 0x2a9af0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a9af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a9af4:
    // 0x2a9af4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a9af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9af8:
    // 0x2a9af8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9afc:
    // 0x2a9afc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9b00:
    // 0x2a9b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9b04:
    // 0x2a9b04: 0x3e00008  jr          $ra
label_2a9b08:
    if (ctx->pc == 0x2A9B08u) {
        ctx->pc = 0x2A9B08u;
            // 0x2a9b08: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2A9B0Cu;
        goto label_2a9b0c;
    }
    ctx->pc = 0x2A9B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B04u;
            // 0x2a9b08: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9B0Cu;
label_2a9b0c:
    // 0x2a9b0c: 0x0  nop
    ctx->pc = 0x2a9b0cu;
    // NOP
label_2a9b10:
    // 0x2a9b10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2a9b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2a9b14:
    // 0x2a9b14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a9b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2a9b18:
    // 0x2a9b18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a9b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a9b1c:
    // 0x2a9b1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a9b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a9b20:
    // 0x2a9b20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a9b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a9b24:
    // 0x2a9b24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a9b28:
    // 0x2a9b28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a9b2c:
    // 0x2a9b2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a9b30:
    // 0x2a9b30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a9b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a9b34:
    // 0x2a9b34: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x2a9b34u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2a9b38:
    // 0x2a9b38: 0xa2a0008c  sb          $zero, 0x8C($s5)
    ctx->pc = 0x2a9b38u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 140), (uint8_t)GPR_U32(ctx, 0));
label_2a9b3c:
    // 0x2a9b3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a9b40:
    // 0x2a9b40: 0xaea00088  sw          $zero, 0x88($s5)
    ctx->pc = 0x2a9b40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 0));
label_2a9b44:
    // 0x2a9b44: 0x8c4267f8  lw          $v0, 0x67F8($v0)
    ctx->pc = 0x2a9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26616)));
label_2a9b48:
    // 0x2a9b48: 0x40f809  jalr        $v0
label_2a9b4c:
    if (ctx->pc == 0x2A9B4Cu) {
        ctx->pc = 0x2A9B50u;
        goto label_2a9b50;
    }
    ctx->pc = 0x2A9B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9B50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9B50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B50u; }
            if (ctx->pc != 0x2A9B50u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9B50u;
label_2a9b50:
    // 0x2a9b50: 0x8ea20088  lw          $v0, 0x88($s5)
    ctx->pc = 0x2a9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_2a9b54:
    // 0x2a9b54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a9b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a9b58:
    // 0x2a9b58: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2a9b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2a9b5c:
    // 0x2a9b5c: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x2a9b5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2a9b60:
    // 0x2a9b60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a9b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a9b64:
    // 0x2a9b64: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x2a9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a9b68:
    // 0x2a9b68: 0x320f809  jalr        $t9
label_2a9b6c:
    if (ctx->pc == 0x2A9B6Cu) {
        ctx->pc = 0x2A9B6Cu;
            // 0x2a9b6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B70u;
        goto label_2a9b70;
    }
    ctx->pc = 0x2A9B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9B70u);
        ctx->pc = 0x2A9B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B68u;
            // 0x2a9b6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B70u; }
            if (ctx->pc != 0x2A9B70u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9B70u;
label_2a9b70:
    // 0x2a9b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9b74:
    // 0x2a9b74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a9b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a9b78:
    // 0x2a9b78: 0x8ea20088  lw          $v0, 0x88($s5)
    ctx->pc = 0x2a9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_2a9b7c:
    // 0x2a9b7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a9b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a9b80:
    // 0x2a9b80: 0xa450005c  sh          $s0, 0x5C($v0)
    ctx->pc = 0x2a9b80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 16));
label_2a9b84:
    // 0x2a9b84: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2a9b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2a9b88:
    // 0x2a9b88: 0x8ea70090  lw          $a3, 0x90($s5)
    ctx->pc = 0x2a9b88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_2a9b8c:
    // 0x2a9b8c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2a9b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2a9b90:
    // 0x2a9b90: 0x320f809  jalr        $t9
label_2a9b94:
    if (ctx->pc == 0x2A9B94u) {
        ctx->pc = 0x2A9B94u;
            // 0x2a9b94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A9B98u;
        goto label_2a9b98;
    }
    ctx->pc = 0x2A9B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9B98u);
        ctx->pc = 0x2A9B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B90u;
            // 0x2a9b94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9B98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B98u; }
            if (ctx->pc != 0x2A9B98u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9B98u;
label_2a9b98:
    // 0x2a9b98: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2a9b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2a9b9c:
    // 0x2a9b9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a9b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ba0:
    // 0x2a9ba0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2a9ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2a9ba4:
    // 0x2a9ba4: 0x320f809  jalr        $t9
label_2a9ba8:
    if (ctx->pc == 0x2A9BA8u) {
        ctx->pc = 0x2A9BA8u;
            // 0x2a9ba8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BACu;
        goto label_2a9bac;
    }
    ctx->pc = 0x2A9BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9BACu);
        ctx->pc = 0x2A9BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BA4u;
            // 0x2a9ba8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9BACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9BACu; }
            if (ctx->pc != 0x2A9BACu) { return; }
        }
        }
    }
    ctx->pc = 0x2A9BACu;
label_2a9bac:
    // 0x2a9bac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a9bb0:
    // 0x2a9bb0: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_2a9bb4:
    if (ctx->pc == 0x2A9BB4u) {
        ctx->pc = 0x2A9BB8u;
        goto label_2a9bb8;
    }
    ctx->pc = 0x2A9BB0u;
    {
        const bool branch_taken_0x2a9bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a9bb0) {
            ctx->pc = 0x2A9BF8u;
            goto label_2a9bf8;
        }
    }
    ctx->pc = 0x2A9BB8u;
label_2a9bb8:
    // 0x2a9bb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a9bbc:
    // 0x2a9bbc: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x2a9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_2a9bc0:
    // 0x2a9bc0: 0x40f809  jalr        $v0
label_2a9bc4:
    if (ctx->pc == 0x2A9BC4u) {
        ctx->pc = 0x2A9BC4u;
            // 0x2a9bc4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2A9BC8u;
        goto label_2a9bc8;
    }
    ctx->pc = 0x2A9BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9BC8u);
        ctx->pc = 0x2A9BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BC0u;
            // 0x2a9bc4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9BC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9BC8u; }
            if (ctx->pc != 0x2A9BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9BC8u;
label_2a9bc8:
    // 0x2a9bc8: 0x92a2008d  lbu         $v0, 0x8D($s5)
    ctx->pc = 0x2a9bc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 141)));
label_2a9bcc:
    // 0x2a9bcc: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_2a9bd0:
    if (ctx->pc == 0x2A9BD0u) {
        ctx->pc = 0x2A9BD0u;
            // 0x2a9bd0: 0xa2a0008c  sb          $zero, 0x8C($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 140), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2A9BD4u;
        goto label_2a9bd4;
    }
    ctx->pc = 0x2A9BCCu;
    {
        const bool branch_taken_0x2a9bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9bcc) {
            ctx->pc = 0x2A9BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BCCu;
            // 0x2a9bd0: 0xa2a0008c  sb          $zero, 0x8C($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9B3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b3c;
        }
    }
    ctx->pc = 0x2A9BD4u;
label_2a9bd4:
    // 0x2a9bd4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2a9bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2a9bd8:
    // 0x2a9bd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a9bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a9bdc:
    // 0x2a9bdc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2a9bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2a9be0:
    // 0x2a9be0: 0x320f809  jalr        $t9
label_2a9be4:
    if (ctx->pc == 0x2A9BE4u) {
        ctx->pc = 0x2A9BE4u;
            // 0x2a9be4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BE8u;
        goto label_2a9be8;
    }
    ctx->pc = 0x2A9BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9BE8u);
        ctx->pc = 0x2A9BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BE0u;
            // 0x2a9be4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9BE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9BE8u; }
            if (ctx->pc != 0x2A9BE8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9BE8u;
label_2a9be8:
    // 0x2a9be8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a9bec:
    // 0x2a9bec: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
label_2a9bf0:
    if (ctx->pc == 0x2A9BF0u) {
        ctx->pc = 0x2A9BF4u;
        goto label_2a9bf4;
    }
    ctx->pc = 0x2A9BECu;
    {
        const bool branch_taken_0x2a9bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9bec) {
            ctx->pc = 0x2A9BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9bb8;
        }
    }
    ctx->pc = 0x2A9BF4u;
label_2a9bf4:
    // 0x2a9bf4: 0x0  nop
    ctx->pc = 0x2a9bf4u;
    // NOP
label_2a9bf8:
    // 0x2a9bf8: 0x92a2008d  lbu         $v0, 0x8D($s5)
    ctx->pc = 0x2a9bf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 141)));
label_2a9bfc:
    // 0x2a9bfc: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2a9c00:
    if (ctx->pc == 0x2A9C00u) {
        ctx->pc = 0x2A9C04u;
        goto label_2a9c04;
    }
    ctx->pc = 0x2A9BFCu;
    {
        const bool branch_taken_0x2a9bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9bfc) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2A9C04u;
label_2a9c04:
    // 0x2a9c04: 0x8eb20090  lw          $s2, 0x90($s5)
    ctx->pc = 0x2a9c04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_2a9c08:
    // 0x2a9c08: 0xc15a978  jal         func_56A5E0
label_2a9c0c:
    if (ctx->pc == 0x2A9C0Cu) {
        ctx->pc = 0x2A9C0Cu;
            // 0x2a9c0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C10u;
        goto label_2a9c10;
    }
    ctx->pc = 0x2A9C08u;
    SET_GPR_U32(ctx, 31, 0x2A9C10u);
    ctx->pc = 0x2A9C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9C08u;
            // 0x2a9c0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x56A5E0u;
    if (runtime->hasFunction(0x56A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x56A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9C10u; }
        if (ctx->pc != 0x2A9C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0056A5E0_0x56a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9C10u; }
        if (ctx->pc != 0x2A9C10u) { return; }
    }
    ctx->pc = 0x2A9C10u;
label_2a9c10:
    // 0x2a9c10: 0x10400235  beqz        $v0, . + 4 + (0x235 << 2)
label_2a9c14:
    if (ctx->pc == 0x2A9C14u) {
        ctx->pc = 0x2A9C18u;
        goto label_2a9c18;
    }
    ctx->pc = 0x2A9C10u;
    {
        const bool branch_taken_0x2a9c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9c10) {
            ctx->pc = 0x2AA4E8u;
            goto label_2aa4e8;
        }
    }
    ctx->pc = 0x2A9C18u;
label_2a9c18:
    // 0x2a9c18: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2a9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2a9c1c:
    // 0x2a9c1c: 0x2613ffff  addiu       $s3, $s0, -0x1
    ctx->pc = 0x2a9c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2a9c20:
    // 0x2a9c20: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2a9c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2a9c24:
    // 0x2a9c24: 0x2402f800  addiu       $v0, $zero, -0x800
    ctx->pc = 0x2a9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
label_2a9c28:
    // 0x2a9c28: 0x8ea50088  lw          $a1, 0x88($s5)
    ctx->pc = 0x2a9c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_2a9c2c:
    // 0x2a9c2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a9c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c30:
    // 0x2a9c30: 0x246307ff  addiu       $v1, $v1, 0x7FF
    ctx->pc = 0x2a9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
label_2a9c34:
    // 0x2a9c34: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x2a9c34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a9c38:
    // 0x2a9c38: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2a9c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2a9c3c:
    // 0x2a9c3c: 0x320f809  jalr        $t9
label_2a9c40:
    if (ctx->pc == 0x2A9C40u) {
        ctx->pc = 0x2A9C40u;
            // 0x2a9c40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C44u;
        goto label_2a9c44;
    }
    ctx->pc = 0x2A9C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9C44u);
        ctx->pc = 0x2A9C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9C3Cu;
            // 0x2a9c40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9C44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9C44u; }
            if (ctx->pc != 0x2A9C44u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9C44u;
label_2a9c44:
    // 0x2a9c44: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2a9c48:
    // 0x2a9c48: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2a9c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a9c4c:
    // 0x2a9c4c: 0x2463fd60  addiu       $v1, $v1, -0x2A0
    ctx->pc = 0x2a9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966624));
label_2a9c50:
    // 0x2a9c50: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x2a9c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_2a9c54:
    // 0x2a9c54: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x2a9c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_2a9c58:
    // 0x2a9c58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a9c5c:
    // 0x2a9c5c: 0xafb000d8  sw          $s0, 0xD8($sp)
    ctx->pc = 0x2a9c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 16));
label_2a9c60:
    // 0x2a9c60: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x2a9c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_2a9c64:
    // 0x2a9c64: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x2a9c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_2a9c68:
    // 0x2a9c68: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x2a9c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
label_2a9c6c:
    // 0x2a9c6c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2a9c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2a9c70:
    // 0x2a9c70: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x2a9c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_2a9c74:
    // 0x2a9c74: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2a9c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_2a9c78:
    // 0x2a9c78: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x2a9c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_2a9c7c:
    // 0x2a9c7c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_2a9c80:
    if (ctx->pc == 0x2A9C80u) {
        ctx->pc = 0x2A9C80u;
            // 0x2a9c80: 0xafa000e8  sw          $zero, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
        ctx->pc = 0x2A9C84u;
        goto label_2a9c84;
    }
    ctx->pc = 0x2A9C7Cu;
    {
        const bool branch_taken_0x2a9c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A9C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9C7Cu;
            // 0x2a9c80: 0xafa000e8  sw          $zero, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c7c) {
            ctx->pc = 0x2A9C90u;
            goto label_2a9c90;
        }
    }
    ctx->pc = 0x2A9C84u;
label_2a9c84:
    // 0x2a9c84: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2a9c88:
    // 0x2a9c88: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2a9c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2a9c8c:
    // 0x2a9c8c: 0x0  nop
    ctx->pc = 0x2a9c8cu;
    // NOP
label_2a9c90:
    // 0x2a9c90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a9c94:
    // 0x2a9c94: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x2a9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
label_2a9c98:
    // 0x2a9c98: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2a9c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2a9c9c:
    // 0x2a9c9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a9ca0:
    // 0x2a9ca0: 0x8c437378  lw          $v1, 0x7378($v0)
    ctx->pc = 0x2a9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_2a9ca4:
    // 0x2a9ca4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x2a9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2a9ca8:
    // 0x2a9ca8: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2a9ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a9cac:
    // 0x2a9cac: 0x28ac0  sll         $s1, $v0, 11
    ctx->pc = 0x2a9cacu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_2a9cb0:
    // 0x2a9cb0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a9cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2a9cb4:
    // 0x2a9cb4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2a9cb8:
    // 0x2a9cb8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2a9cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a9cbc:
    // 0x2a9cbc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2a9cc0:
    if (ctx->pc == 0x2A9CC0u) {
        ctx->pc = 0x2A9CC0u;
            // 0x2a9cc0: 0x3c03fffe  lui         $v1, 0xFFFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
        ctx->pc = 0x2A9CC4u;
        goto label_2a9cc4;
    }
    ctx->pc = 0x2A9CBCu;
    {
        const bool branch_taken_0x2a9cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9cbc) {
            ctx->pc = 0x2A9CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9CBCu;
            // 0x2a9cc0: 0x3c03fffe  lui         $v1, 0xFFFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9CD0u;
            goto label_2a9cd0;
        }
    }
    ctx->pc = 0x2A9CC4u;
label_2a9cc4:
    // 0x2a9cc4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a9cc8:
    if (ctx->pc == 0x2A9CC8u) {
        ctx->pc = 0x2A9CC8u;
            // 0x2a9cc8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->pc = 0x2A9CCCu;
        goto label_2a9ccc;
    }
    ctx->pc = 0x2A9CC4u;
    {
        const bool branch_taken_0x2a9cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9CC4u;
            // 0x2a9cc8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cc4) {
            ctx->pc = 0x2A9CE0u;
            goto label_2a9ce0;
        }
    }
    ctx->pc = 0x2A9CCCu;
label_2a9ccc:
    // 0x2a9ccc: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x2a9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
label_2a9cd0:
    // 0x2a9cd0: 0x2402f800  addiu       $v0, $zero, -0x800
    ctx->pc = 0x2a9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
label_2a9cd4:
    // 0x2a9cd4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a9cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a9cd8:
    // 0x2a9cd8: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x2a9cd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a9cdc:
    // 0x2a9cdc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2a9cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2a9ce0:
    // 0x2a9ce0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2a9ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a9ce4:
    // 0x2a9ce4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2a9ce8:
    if (ctx->pc == 0x2A9CE8u) {
        ctx->pc = 0x2A9CE8u;
            // 0x2a9ce8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CECu;
        goto label_2a9cec;
    }
    ctx->pc = 0x2A9CE4u;
    {
        const bool branch_taken_0x2a9ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9ce4) {
            ctx->pc = 0x2A9CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9CE4u;
            // 0x2a9ce8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9D08u;
            goto label_2a9d08;
        }
    }
    ctx->pc = 0x2A9CECu;
label_2a9cec:
    // 0x2a9cec: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
label_2a9cf0:
    if (ctx->pc == 0x2A9CF0u) {
        ctx->pc = 0x2A9CF0u;
            // 0x2a9cf0: 0x118043  sra         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 1));
        ctx->pc = 0x2A9CF4u;
        goto label_2a9cf4;
    }
    ctx->pc = 0x2A9CECu;
    {
        const bool branch_taken_0x2a9cec = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2A9CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9CECu;
            // 0x2a9cf0: 0x118043  sra         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cec) {
            ctx->pc = 0x2A9D08u;
            goto label_2a9d08;
        }
    }
    ctx->pc = 0x2A9CF4u;
label_2a9cf4:
    // 0x2a9cf4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2a9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a9cf8:
    // 0x2a9cf8: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x2a9cf8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_2a9cfc:
    // 0x2a9cfc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a9d00:
    if (ctx->pc == 0x2A9D00u) {
        ctx->pc = 0x2A9D00u;
            // 0x2a9d00: 0x2e212000  sltiu       $at, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
        ctx->pc = 0x2A9D04u;
        goto label_2a9d04;
    }
    ctx->pc = 0x2A9CFCu;
    {
        const bool branch_taken_0x2a9cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9CFCu;
            // 0x2a9d00: 0x2e212000  sltiu       $at, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cfc) {
            ctx->pc = 0x2A9D0Cu;
            goto label_2a9d0c;
        }
    }
    ctx->pc = 0x2A9D04u;
label_2a9d04:
    // 0x2a9d04: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2a9d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d08:
    // 0x2a9d08: 0x2e212000  sltiu       $at, $s1, 0x2000
    ctx->pc = 0x2a9d08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
label_2a9d0c:
    // 0x2a9d0c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_2a9d10:
    if (ctx->pc == 0x2A9D10u) {
        ctx->pc = 0x2A9D10u;
            // 0x2a9d10: 0x24162000  addiu       $s6, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x2A9D14u;
        goto label_2a9d14;
    }
    ctx->pc = 0x2A9D0Cu;
    {
        const bool branch_taken_0x2a9d0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9d0c) {
            ctx->pc = 0x2A9D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9D0Cu;
            // 0x2a9d10: 0x24162000  addiu       $s6, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9D20u;
            goto label_2a9d20;
        }
    }
    ctx->pc = 0x2A9D14u;
label_2a9d14:
    // 0x2a9d14: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a9d18:
    if (ctx->pc == 0x2A9D18u) {
        ctx->pc = 0x2A9D18u;
            // 0x2a9d18: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D1Cu;
        goto label_2a9d1c;
    }
    ctx->pc = 0x2A9D14u;
    {
        const bool branch_taken_0x2a9d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9D14u;
            // 0x2a9d18: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d14) {
            ctx->pc = 0x2A9D20u;
            goto label_2a9d20;
        }
    }
    ctx->pc = 0x2A9D1Cu;
label_2a9d1c:
    // 0x2a9d1c: 0x24162000  addiu       $s6, $zero, 0x2000
    ctx->pc = 0x2a9d1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2a9d20:
    // 0x2a9d20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a9d24:
    // 0x2a9d24: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2a9d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2a9d28:
    // 0x2a9d28: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2a9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2a9d2c:
    // 0x2a9d2c: 0xafa6009c  sw          $a2, 0x9C($sp)
    ctx->pc = 0x2a9d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
label_2a9d30:
    // 0x2a9d30: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2a9d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_2a9d34:
    // 0x2a9d34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a9d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d38:
    // 0x2a9d38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a9d3c:
    // 0x2a9d3c: 0xafb10098  sw          $s1, 0x98($sp)
    ctx->pc = 0x2a9d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 17));
label_2a9d40:
    // 0x2a9d40: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x2a9d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_2a9d44:
    // 0x2a9d44: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2a9d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_2a9d48:
    // 0x2a9d48: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2a9d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_2a9d4c:
    // 0x2a9d4c: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x2a9d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
label_2a9d50:
    // 0x2a9d50: 0xc0fe54c  jal         func_3F9530
label_2a9d54:
    if (ctx->pc == 0x2A9D54u) {
        ctx->pc = 0x2A9D54u;
            // 0x2a9d54: 0xafa000a8  sw          $zero, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x2A9D58u;
        goto label_2a9d58;
    }
    ctx->pc = 0x2A9D50u;
    SET_GPR_U32(ctx, 31, 0x2A9D58u);
    ctx->pc = 0x2A9D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9D50u;
            // 0x2a9d54: 0xafa000a8  sw          $zero, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9D58u; }
        if (ctx->pc != 0x2A9D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9D58u; }
        if (ctx->pc != 0x2A9D58u) { return; }
    }
    ctx->pc = 0x2A9D58u;
label_2a9d58:
    // 0x2a9d58: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2a9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2a9d5c:
    // 0x2a9d5c: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2a9d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2a9d60:
    // 0x2a9d60: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x2a9d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
label_2a9d64:
    // 0x2a9d64: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a9d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d68:
    // 0x2a9d68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2a9d6c:
    // 0x2a9d6c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2a9d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_2a9d70:
    // 0x2a9d70: 0x2463fd00  addiu       $v1, $v1, -0x300
    ctx->pc = 0x2a9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966528));
label_2a9d74:
    // 0x2a9d74: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2a9d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2a9d78:
    // 0x2a9d78: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x2a9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_2a9d7c:
    // 0x2a9d7c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2a9d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_2a9d80:
    // 0x2a9d80: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x2a9d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_2a9d84:
    // 0x2a9d84: 0xafb600b4  sw          $s6, 0xB4($sp)
    ctx->pc = 0x2a9d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 22));
label_2a9d88:
    // 0x2a9d88: 0xafb000ac  sw          $s0, 0xAC($sp)
    ctx->pc = 0x2a9d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 16));
label_2a9d8c:
    // 0x2a9d8c: 0xc0fe54c  jal         func_3F9530
label_2a9d90:
    if (ctx->pc == 0x2A9D90u) {
        ctx->pc = 0x2A9D90u;
            // 0x2a9d90: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->pc = 0x2A9D94u;
        goto label_2a9d94;
    }
    ctx->pc = 0x2A9D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D94u);
    ctx->pc = 0x2A9D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9D8Cu;
            // 0x2a9d90: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9D94u; }
        if (ctx->pc != 0x2A9D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9D94u; }
        if (ctx->pc != 0x2A9D94u) { return; }
    }
    ctx->pc = 0x2A9D94u;
label_2a9d94:
    // 0x2a9d94: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2a9d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2a9d98:
    // 0x2a9d98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a9d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d9c:
    // 0x2a9d9c: 0xc15a8e4  jal         func_56A390
label_2a9da0:
    if (ctx->pc == 0x2A9DA0u) {
        ctx->pc = 0x2A9DA0u;
            // 0x2a9da0: 0x26a50038  addiu       $a1, $s5, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
        ctx->pc = 0x2A9DA4u;
        goto label_2a9da4;
    }
    ctx->pc = 0x2A9D9Cu;
    SET_GPR_U32(ctx, 31, 0x2A9DA4u);
    ctx->pc = 0x2A9DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9D9Cu;
            // 0x2a9da0: 0x26a50038  addiu       $a1, $s5, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x56A390u;
    if (runtime->hasFunction(0x56A390u)) {
        auto targetFn = runtime->lookupFunction(0x56A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9DA4u; }
        if (ctx->pc != 0x2A9DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0056A390_0x56a390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9DA4u; }
        if (ctx->pc != 0x2A9DA4u) { return; }
    }
    ctx->pc = 0x2A9DA4u;
label_2a9da4:
    // 0x2a9da4: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x2a9da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_2a9da8:
    // 0x2a9da8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a9da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9dac:
    // 0x2a9dac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a9dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a9db0:
    // 0x2a9db0: 0x320f809  jalr        $t9
label_2a9db4:
    if (ctx->pc == 0x2A9DB4u) {
        ctx->pc = 0x2A9DB8u;
        goto label_2a9db8;
    }
    ctx->pc = 0x2A9DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9DB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9DB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9DB8u; }
            if (ctx->pc != 0x2A9DB8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9DB8u;
label_2a9db8:
    // 0x2a9db8: 0x92a20061  lbu         $v0, 0x61($s5)
    ctx->pc = 0x2a9db8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 97)));
label_2a9dbc:
    // 0x2a9dbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a9dc0:
    if (ctx->pc == 0x2A9DC0u) {
        ctx->pc = 0x2A9DC4u;
        goto label_2a9dc4;
    }
    ctx->pc = 0x2A9DBCu;
    {
        const bool branch_taken_0x2a9dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9dbc) {
            ctx->pc = 0x2A9DE0u;
            goto label_2a9de0;
        }
    }
    ctx->pc = 0x2A9DC4u;
label_2a9dc4:
    // 0x2a9dc4: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x2a9dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_2a9dc8:
    // 0x2a9dc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a9dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9dcc:
    // 0x2a9dcc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a9dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a9dd0:
    // 0x2a9dd0: 0x320f809  jalr        $t9
label_2a9dd4:
    if (ctx->pc == 0x2A9DD4u) {
        ctx->pc = 0x2A9DD8u;
        goto label_2a9dd8;
    }
    ctx->pc = 0x2A9DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9DD8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9DD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9DD8u; }
            if (ctx->pc != 0x2A9DD8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9DD8u;
label_2a9dd8:
    // 0x2a9dd8: 0x10000023  b           . + 4 + (0x23 << 2)
label_2a9ddc:
    if (ctx->pc == 0x2A9DDCu) {
        ctx->pc = 0x2A9DE0u;
        goto label_2a9de0;
    }
    ctx->pc = 0x2A9DD8u;
    {
        const bool branch_taken_0x2a9dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9dd8) {
            ctx->pc = 0x2A9E68u;
            goto label_2a9e68;
        }
    }
    ctx->pc = 0x2A9DE0u;
label_2a9de0:
    // 0x2a9de0: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x2a9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_2a9de4:
    // 0x2a9de4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2a9de8:
    if (ctx->pc == 0x2A9DE8u) {
        ctx->pc = 0x2A9DECu;
        goto label_2a9dec;
    }
    ctx->pc = 0x2A9DE4u;
    {
        const bool branch_taken_0x2a9de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9de4) {
            ctx->pc = 0x2A9E08u;
            goto label_2a9e08;
        }
    }
    ctx->pc = 0x2A9DECu;
label_2a9dec:
    // 0x2a9dec: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x2a9decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_2a9df0:
    // 0x2a9df0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a9df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9df4:
    // 0x2a9df4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a9df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a9df8:
    // 0x2a9df8: 0x320f809  jalr        $t9
label_2a9dfc:
    if (ctx->pc == 0x2A9DFCu) {
        ctx->pc = 0x2A9E00u;
        goto label_2a9e00;
    }
    ctx->pc = 0x2A9DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9E00u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9E00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9E00u; }
            if (ctx->pc != 0x2A9E00u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9E00u;
label_2a9e00:
    // 0x2a9e00: 0x10000019  b           . + 4 + (0x19 << 2)
label_2a9e04:
    if (ctx->pc == 0x2A9E04u) {
        ctx->pc = 0x2A9E08u;
        goto label_2a9e08;
    }
    ctx->pc = 0x2A9E00u;
    {
        const bool branch_taken_0x2a9e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9e00) {
            ctx->pc = 0x2A9E68u;
            goto label_2a9e68;
        }
    }
    ctx->pc = 0x2A9E08u;
label_2a9e08:
    // 0x2a9e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9e0c:
    // 0x2a9e0c: 0xa2a20061  sb          $v0, 0x61($s5)
    ctx->pc = 0x2a9e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 97), (uint8_t)GPR_U32(ctx, 2));
label_2a9e10:
    // 0x2a9e10: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x2a9e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_2a9e14:
    // 0x2a9e14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a9e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9e18:
    // 0x2a9e18: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a9e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a9e1c:
    // 0x2a9e1c: 0x320f809  jalr        $t9
label_2a9e20:
    if (ctx->pc == 0x2A9E20u) {
        ctx->pc = 0x2A9E24u;
        goto label_2a9e24;
    }
    ctx->pc = 0x2A9E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9E24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9E24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9E24u; }
            if (ctx->pc != 0x2A9E24u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9E24u;
label_2a9e24:
    // 0x2a9e24: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2a9e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_2a9e28:
    // 0x2a9e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9e2c:
    // 0x2a9e2c: 0xaea3006c  sw          $v1, 0x6C($s5)
    ctx->pc = 0x2a9e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 3));
label_2a9e30:
    // 0x2a9e30: 0xa2a00070  sb          $zero, 0x70($s5)
    ctx->pc = 0x2a9e30u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 112), (uint8_t)GPR_U32(ctx, 0));
label_2a9e34:
    // 0x2a9e34: 0x8ea30048  lw          $v1, 0x48($s5)
    ctx->pc = 0x2a9e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_2a9e38:
    // 0x2a9e38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2a9e3c:
    if (ctx->pc == 0x2A9E3Cu) {
        ctx->pc = 0x2A9E40u;
        goto label_2a9e40;
    }
    ctx->pc = 0x2A9E38u;
    {
        const bool branch_taken_0x2a9e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9e38) {
            ctx->pc = 0x2A9E48u;
            goto label_2a9e48;
        }
    }
    ctx->pc = 0x2A9E40u;
label_2a9e40:
    // 0x2a9e40: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a9e44:
    if (ctx->pc == 0x2A9E44u) {
        ctx->pc = 0x2A9E44u;
            // 0x2a9e44: 0xaea20064  sw          $v0, 0x64($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2A9E48u;
        goto label_2a9e48;
    }
    ctx->pc = 0x2A9E40u;
    {
        const bool branch_taken_0x2a9e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9E40u;
            // 0x2a9e44: 0xaea20064  sw          $v0, 0x64($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e40) {
            ctx->pc = 0x2A9E50u;
            goto label_2a9e50;
        }
    }
    ctx->pc = 0x2A9E48u;
label_2a9e48:
    // 0x2a9e48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a9e4c:
    // 0x2a9e4c: 0xaea20064  sw          $v0, 0x64($s5)
    ctx->pc = 0x2a9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
label_2a9e50:
    // 0x2a9e50: 0x26a40038  addiu       $a0, $s5, 0x38
    ctx->pc = 0x2a9e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
label_2a9e54:
    // 0x2a9e54: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2a9e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a9e58:
    // 0x2a9e58: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a9e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a9e5c:
    // 0x2a9e5c: 0xc0e8810  jal         func_3A2040
label_2a9e60:
    if (ctx->pc == 0x2A9E60u) {
        ctx->pc = 0x2A9E60u;
            // 0x2a9e60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A9E64u;
        goto label_2a9e64;
    }
    ctx->pc = 0x2A9E5Cu;
    SET_GPR_U32(ctx, 31, 0x2A9E64u);
    ctx->pc = 0x2A9E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9E5Cu;
            // 0x2a9e60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A2040u;
    if (runtime->hasFunction(0x3A2040u)) {
        auto targetFn = runtime->lookupFunction(0x3A2040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9E64u; }
        if (ctx->pc != 0x2A9E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A2040_0x3a2040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9E64u; }
        if (ctx->pc != 0x2A9E64u) { return; }
    }
    ctx->pc = 0x2A9E64u;
label_2a9e64:
    // 0x2a9e64: 0x0  nop
    ctx->pc = 0x2a9e64u;
    // NOP
label_2a9e68:
    // 0x2a9e68: 0x96470006  lhu         $a3, 0x6($s2)
    ctx->pc = 0x2a9e68u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_2a9e6c:
    // 0x2a9e6c: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x2a9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2a9e70:
    // 0x2a9e70: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2a9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2a9e74:
    // 0x2a9e74: 0x305107ff  andi        $s1, $v0, 0x7FF
    ctx->pc = 0x2a9e74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_2a9e78:
    // 0x2a9e78: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_2a9e7c:
    if (ctx->pc == 0x2A9E7Cu) {
        ctx->pc = 0x2A9E80u;
        goto label_2a9e80;
    }
    ctx->pc = 0x2A9E78u;
    {
        const bool branch_taken_0x2a9e78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9e78) {
            ctx->pc = 0x2A9F08u;
            goto label_2a9f08;
        }
    }
    ctx->pc = 0x2A9E80u;
label_2a9e80:
    // 0x2a9e80: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x2a9e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2a9e84:
    // 0x2a9e84: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x2a9e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2a9e88:
    // 0x2a9e88: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2a9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2a9e8c:
    // 0x2a9e8c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2a9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2a9e90:
    // 0x2a9e90: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2a9e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2a9e94:
    // 0x2a9e94: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2a9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a9e98:
    // 0x2a9e98: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2a9e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2a9e9c:
    // 0x2a9e9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a9ea0:
    // 0x2a9ea0: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x2a9ea0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2a9ea4:
    // 0x2a9ea4: 0x1012  mflo        $v0
    ctx->pc = 0x2a9ea4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2a9ea8:
    // 0x2a9ea8: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x2a9ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2a9eac:
    // 0x2a9eac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2a9eb0:
    if (ctx->pc == 0x2A9EB0u) {
        ctx->pc = 0x2A9EB4u;
        goto label_2a9eb4;
    }
    ctx->pc = 0x2A9EACu;
    {
        const bool branch_taken_0x2a9eac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a9eac) {
            ctx->pc = 0x2A9EC0u;
            goto label_2a9ec0;
        }
    }
    ctx->pc = 0x2A9EB4u;
label_2a9eb4:
    // 0x2a9eb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a9eb8:
    if (ctx->pc == 0x2A9EB8u) {
        ctx->pc = 0x2A9EB8u;
            // 0x2a9eb8: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->pc = 0x2A9EBCu;
        goto label_2a9ebc;
    }
    ctx->pc = 0x2A9EB4u;
    {
        const bool branch_taken_0x2a9eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9EB4u;
            // 0x2a9eb8: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9eb4) {
            ctx->pc = 0x2A9EC8u;
            goto label_2a9ec8;
        }
    }
    ctx->pc = 0x2A9EBCu;
label_2a9ebc:
    // 0x2a9ebc: 0x0  nop
    ctx->pc = 0x2a9ebcu;
    // NOP
label_2a9ec0:
    // 0x2a9ec0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a9ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ec4:
    // 0x2a9ec4: 0x0  nop
    ctx->pc = 0x2a9ec4u;
    // NOP
label_2a9ec8:
    // 0x2a9ec8: 0x8ea20090  lw          $v0, 0x90($s5)
    ctx->pc = 0x2a9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_2a9ecc:
    // 0x2a9ecc: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x2a9eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_2a9ed0:
    // 0x2a9ed0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a9ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ed4:
    // 0x2a9ed4: 0xc04a508  jal         func_129420
label_2a9ed8:
    if (ctx->pc == 0x2A9ED8u) {
        ctx->pc = 0x2A9ED8u;
            // 0x2a9ed8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2A9EDCu;
        goto label_2a9edc;
    }
    ctx->pc = 0x2A9ED4u;
    SET_GPR_U32(ctx, 31, 0x2A9EDCu);
    ctx->pc = 0x2A9ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9ED4u;
            // 0x2a9ed8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9EDCu; }
        if (ctx->pc != 0x2A9EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9EDCu; }
        if (ctx->pc != 0x2A9EDCu) { return; }
    }
    ctx->pc = 0x2A9EDCu;
label_2a9edc:
    // 0x2a9edc: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x2a9edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2a9ee0:
    // 0x2a9ee0: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2a9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2a9ee4:
    // 0x2a9ee4: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x2a9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2a9ee8:
    // 0x2a9ee8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2a9ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_2a9eec:
    // 0x2a9eec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2a9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2a9ef0:
    // 0x2a9ef0: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x2a9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_2a9ef4:
    // 0x2a9ef4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2a9ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a9ef8:
    // 0x2a9ef8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2a9efc:
    if (ctx->pc == 0x2A9EFCu) {
        ctx->pc = 0x2A9EFCu;
            // 0x2a9efc: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->pc = 0x2A9F00u;
        goto label_2a9f00;
    }
    ctx->pc = 0x2A9EF8u;
    {
        const bool branch_taken_0x2a9ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9EF8u;
            // 0x2a9efc: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ef8) {
            ctx->pc = 0x2A9F08u;
            goto label_2a9f08;
        }
    }
    ctx->pc = 0x2A9F00u;
label_2a9f00:
    // 0x2a9f00: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2a9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2a9f04:
    // 0x2a9f04: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2a9f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_2a9f08:
    // 0x2a9f08: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x2a9f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2a9f0c:
    // 0x2a9f0c: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x2a9f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2a9f10:
    // 0x2a9f10: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2a9f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2a9f14:
    // 0x2a9f14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2a9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2a9f18:
    // 0x2a9f18: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2a9f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2a9f1c:
    // 0x2a9f1c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2a9f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a9f20:
    // 0x2a9f20: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2a9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2a9f24:
    // 0x2a9f24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a9f28:
    // 0x2a9f28: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x2a9f28u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2a9f2c:
    // 0x2a9f2c: 0x1012  mflo        $v0
    ctx->pc = 0x2a9f2cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2a9f30:
    // 0x2a9f30: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x2a9f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2a9f34:
    // 0x2a9f34: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
label_2a9f38:
    if (ctx->pc == 0x2A9F38u) {
        ctx->pc = 0x2A9F38u;
            // 0x2a9f38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F3Cu;
        goto label_2a9f3c;
    }
    ctx->pc = 0x2A9F34u;
    {
        const bool branch_taken_0x2a9f34 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A9F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9F34u;
            // 0x2a9f38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f34) {
            ctx->pc = 0x2A9F68u;
            goto label_2a9f68;
        }
    }
    ctx->pc = 0x2A9F3Cu;
label_2a9f3c:
    // 0x2a9f3c: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x2a9f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2a9f40:
    // 0x2a9f40: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x2a9f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2a9f44:
    // 0x2a9f44: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x2a9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2a9f48:
    // 0x2a9f48: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2a9f48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a9f4c:
    // 0x2a9f4c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2a9f50:
    if (ctx->pc == 0x2A9F50u) {
        ctx->pc = 0x2A9F54u;
        goto label_2a9f54;
    }
    ctx->pc = 0x2A9F4Cu;
    {
        const bool branch_taken_0x2a9f4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9f4c) {
            ctx->pc = 0x2A9F60u;
            goto label_2a9f60;
        }
    }
    ctx->pc = 0x2A9F54u;
label_2a9f54:
    // 0x2a9f54: 0x672023  subu        $a0, $v1, $a3
    ctx->pc = 0x2a9f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2a9f58:
    // 0x2a9f58: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x2a9f58u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2a9f5c:
    // 0x2a9f5c: 0x0  nop
    ctx->pc = 0x2a9f5cu;
    // NOP
label_2a9f60:
    // 0x2a9f60: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a9f64:
    if (ctx->pc == 0x2A9F64u) {
        ctx->pc = 0x2A9F68u;
        goto label_2a9f68;
    }
    ctx->pc = 0x2A9F60u;
    {
        const bool branch_taken_0x2a9f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9f60) {
            ctx->pc = 0x2A9F70u;
            goto label_2a9f70;
        }
    }
    ctx->pc = 0x2A9F68u;
label_2a9f68:
    // 0x2a9f68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a9f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9f6c:
    // 0x2a9f6c: 0x0  nop
    ctx->pc = 0x2a9f6cu;
    // NOP
label_2a9f70:
    // 0x2a9f70: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_2a9f74:
    if (ctx->pc == 0x2A9F74u) {
        ctx->pc = 0x2A9F78u;
        goto label_2a9f78;
    }
    ctx->pc = 0x2A9F70u;
    {
        const bool branch_taken_0x2a9f70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9f70) {
            ctx->pc = 0x2A9FA8u;
            goto label_2a9fa8;
        }
    }
    ctx->pc = 0x2A9F78u;
label_2a9f78:
    // 0x2a9f78: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x2a9f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2a9f7c:
    // 0x2a9f7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2a9f80:
    if (ctx->pc == 0x2A9F80u) {
        ctx->pc = 0x2A9F84u;
        goto label_2a9f84;
    }
    ctx->pc = 0x2A9F7Cu;
    {
        const bool branch_taken_0x2a9f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9f7c) {
            ctx->pc = 0x2A9F90u;
            goto label_2a9f90;
        }
    }
    ctx->pc = 0x2A9F84u;
label_2a9f84:
    // 0x2a9f84: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2a9f88:
    if (ctx->pc == 0x2A9F88u) {
        ctx->pc = 0x2A9F88u;
            // 0x2a9f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F8Cu;
        goto label_2a9f8c;
    }
    ctx->pc = 0x2A9F84u;
    {
        const bool branch_taken_0x2a9f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9F84u;
            // 0x2a9f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f84) {
            ctx->pc = 0x2AA0B8u;
            goto label_2aa0b8;
        }
    }
    ctx->pc = 0x2A9F8Cu;
label_2a9f8c:
    // 0x2a9f8c: 0x0  nop
    ctx->pc = 0x2a9f8cu;
    // NOP
label_2a9f90:
    // 0x2a9f90: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_2a9f94:
    if (ctx->pc == 0x2A9F94u) {
        ctx->pc = 0x2A9F98u;
        goto label_2a9f98;
    }
    ctx->pc = 0x2A9F90u;
    {
        const bool branch_taken_0x2a9f90 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9f90) {
            ctx->pc = 0x2A9FA8u;
            goto label_2a9fa8;
        }
    }
    ctx->pc = 0x2A9F98u;
label_2a9f98:
    // 0x2a9f98: 0x2c810800  sltiu       $at, $a0, 0x800
    ctx->pc = 0x2a9f98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
label_2a9f9c:
    // 0x2a9f9c: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_2a9fa0:
    if (ctx->pc == 0x2A9FA0u) {
        ctx->pc = 0x2A9FA4u;
        goto label_2a9fa4;
    }
    ctx->pc = 0x2A9F9Cu;
    {
        const bool branch_taken_0x2a9f9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9f9c) {
            ctx->pc = 0x2AA0B8u;
            goto label_2aa0b8;
        }
    }
    ctx->pc = 0x2A9FA4u;
label_2a9fa4:
    // 0x2a9fa4: 0x0  nop
    ctx->pc = 0x2a9fa4u;
    // NOP
label_2a9fa8:
    // 0x2a9fa8: 0x92a2008d  lbu         $v0, 0x8D($s5)
    ctx->pc = 0x2a9fa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 141)));
label_2a9fac:
    // 0x2a9fac: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_2a9fb0:
    if (ctx->pc == 0x2A9FB0u) {
        ctx->pc = 0x2A9FB4u;
        goto label_2a9fb4;
    }
    ctx->pc = 0x2A9FACu;
    {
        const bool branch_taken_0x2a9fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9fac) {
            ctx->pc = 0x2AA0A0u;
            goto label_2aa0a0;
        }
    }
    ctx->pc = 0x2A9FB4u;
label_2a9fb4:
    // 0x2a9fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9fb8:
    // 0x2a9fb8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2a9fbc:
    if (ctx->pc == 0x2A9FBCu) {
        ctx->pc = 0x2A9FBCu;
            // 0x2a9fbc: 0xaea2005c  sw          $v0, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x2A9FC0u;
        goto label_2a9fc0;
    }
    ctx->pc = 0x2A9FB8u;
    {
        const bool branch_taken_0x2a9fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9FB8u;
            // 0x2a9fbc: 0xaea2005c  sw          $v0, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fb8) {
            ctx->pc = 0x2A9FD0u;
            goto label_2a9fd0;
        }
    }
    ctx->pc = 0x2A9FC0u;
label_2a9fc0:
    // 0x2a9fc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a9fc4:
    // 0x2a9fc4: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x2a9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_2a9fc8:
    // 0x2a9fc8: 0x40f809  jalr        $v0
label_2a9fcc:
    if (ctx->pc == 0x2A9FCCu) {
        ctx->pc = 0x2A9FCCu;
            // 0x2a9fcc: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2A9FD0u;
        goto label_2a9fd0;
    }
    ctx->pc = 0x2A9FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9FD0u);
        ctx->pc = 0x2A9FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9FC8u;
            // 0x2a9fcc: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9FD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9FD0u; }
            if (ctx->pc != 0x2A9FD0u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9FD0u;
label_2a9fd0:
    // 0x2a9fd0: 0x92a20061  lbu         $v0, 0x61($s5)
    ctx->pc = 0x2a9fd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 97)));
label_2a9fd4:
    // 0x2a9fd4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2a9fd8:
    if (ctx->pc == 0x2A9FD8u) {
        ctx->pc = 0x2A9FDCu;
        goto label_2a9fdc;
    }
    ctx->pc = 0x2A9FD4u;
    {
        const bool branch_taken_0x2a9fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9fd4) {
            ctx->pc = 0x2AA000u;
            goto label_2aa000;
        }
    }
    ctx->pc = 0x2A9FDCu;
label_2a9fdc:
    // 0x2a9fdc: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x2a9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_2a9fe0:
    // 0x2a9fe0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2a9fe4:
    if (ctx->pc == 0x2A9FE4u) {
        ctx->pc = 0x2A9FE4u;
            // 0x2a9fe4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A9FE8u;
        goto label_2a9fe8;
    }
    ctx->pc = 0x2A9FE0u;
    {
        const bool branch_taken_0x2a9fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9fe0) {
            ctx->pc = 0x2A9FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9FE0u;
            // 0x2a9fe4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9FF4u;
            goto label_2a9ff4;
        }
    }
    ctx->pc = 0x2A9FE8u;
label_2a9fe8:
    // 0x2a9fe8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a9fec:
    if (ctx->pc == 0x2A9FECu) {
        ctx->pc = 0x2A9FECu;
            // 0x2a9fec: 0x8ea20058  lw          $v0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x2A9FF0u;
        goto label_2a9ff0;
    }
    ctx->pc = 0x2A9FE8u;
    {
        const bool branch_taken_0x2a9fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9FE8u;
            // 0x2a9fec: 0x8ea20058  lw          $v0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fe8) {
            ctx->pc = 0x2A9FF4u;
            goto label_2a9ff4;
        }
    }
    ctx->pc = 0x2A9FF0u;
label_2a9ff0:
    // 0x2a9ff0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a9ff4:
    // 0x2a9ff4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a9ff8:
    if (ctx->pc == 0x2A9FF8u) {
        ctx->pc = 0x2A9FFCu;
        goto label_2a9ffc;
    }
    ctx->pc = 0x2A9FF4u;
    {
        const bool branch_taken_0x2a9ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9ff4) {
            ctx->pc = 0x2AA008u;
            goto label_2aa008;
        }
    }
    ctx->pc = 0x2A9FFCu;
label_2a9ffc:
    // 0x2a9ffc: 0x0  nop
    ctx->pc = 0x2a9ffcu;
    // NOP
label_2aa000:
    // 0x2aa000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa004:
    // 0x2aa004: 0x0  nop
    ctx->pc = 0x2aa004u;
    // NOP
label_2aa008:
    // 0x2aa008: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_2aa00c:
    if (ctx->pc == 0x2AA00Cu) {
        ctx->pc = 0x2AA010u;
        goto label_2aa010;
    }
    ctx->pc = 0x2AA008u;
    {
        const bool branch_taken_0x2aa008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa008) {
            ctx->pc = 0x2A9FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9fc0;
        }
    }
    ctx->pc = 0x2AA010u;
label_2aa010:
    // 0x2aa010: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2aa010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2aa014:
    // 0x2aa014: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa018:
    // 0x2aa018: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x2aa018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_2aa01c:
    // 0x2aa01c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2aa020:
    if (ctx->pc == 0x2AA020u) {
        ctx->pc = 0x2AA020u;
            // 0x2aa020: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA024u;
        goto label_2aa024;
    }
    ctx->pc = 0x2AA01Cu;
    {
        const bool branch_taken_0x2aa01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA01Cu;
            // 0x2aa020: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa01c) {
            ctx->pc = 0x2AA040u;
            goto label_2aa040;
        }
    }
    ctx->pc = 0x2AA024u;
label_2aa024:
    // 0x2aa024: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2aa024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2aa028:
    // 0x2aa028: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2aa02c:
    if (ctx->pc == 0x2AA02Cu) {
        ctx->pc = 0x2AA030u;
        goto label_2aa030;
    }
    ctx->pc = 0x2AA028u;
    {
        const bool branch_taken_0x2aa028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa028) {
            ctx->pc = 0x2AA040u;
            goto label_2aa040;
        }
    }
    ctx->pc = 0x2AA030u;
label_2aa030:
    // 0x2aa030: 0xc0fe48c  jal         func_3F9230
label_2aa034:
    if (ctx->pc == 0x2AA034u) {
        ctx->pc = 0x2AA038u;
        goto label_2aa038;
    }
    ctx->pc = 0x2AA030u;
    SET_GPR_U32(ctx, 31, 0x2AA038u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA038u; }
        if (ctx->pc != 0x2AA038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA038u; }
        if (ctx->pc != 0x2AA038u) { return; }
    }
    ctx->pc = 0x2AA038u;
label_2aa038:
    // 0x2aa038: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2aa038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_2aa03c:
    // 0x2aa03c: 0x0  nop
    ctx->pc = 0x2aa03cu;
    // NOP
label_2aa040:
    // 0x2aa040: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2aa040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2aa044:
    // 0x2aa044: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa048:
    // 0x2aa048: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2aa048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2aa04c:
    // 0x2aa04c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2aa050:
    if (ctx->pc == 0x2AA050u) {
        ctx->pc = 0x2AA050u;
            // 0x2aa050: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA054u;
        goto label_2aa054;
    }
    ctx->pc = 0x2AA04Cu;
    {
        const bool branch_taken_0x2aa04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA04Cu;
            // 0x2aa050: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa04c) {
            ctx->pc = 0x2AA070u;
            goto label_2aa070;
        }
    }
    ctx->pc = 0x2AA054u;
label_2aa054:
    // 0x2aa054: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2aa054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2aa058:
    // 0x2aa058: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2aa05c:
    if (ctx->pc == 0x2AA05Cu) {
        ctx->pc = 0x2AA060u;
        goto label_2aa060;
    }
    ctx->pc = 0x2AA058u;
    {
        const bool branch_taken_0x2aa058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa058) {
            ctx->pc = 0x2AA070u;
            goto label_2aa070;
        }
    }
    ctx->pc = 0x2AA060u;
label_2aa060:
    // 0x2aa060: 0xc0fe48c  jal         func_3F9230
label_2aa064:
    if (ctx->pc == 0x2AA064u) {
        ctx->pc = 0x2AA068u;
        goto label_2aa068;
    }
    ctx->pc = 0x2AA060u;
    SET_GPR_U32(ctx, 31, 0x2AA068u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA068u; }
        if (ctx->pc != 0x2AA068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA068u; }
        if (ctx->pc != 0x2AA068u) { return; }
    }
    ctx->pc = 0x2AA068u;
label_2aa068:
    // 0x2aa068: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2aa068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_2aa06c:
    // 0x2aa06c: 0x0  nop
    ctx->pc = 0x2aa06cu;
    // NOP
label_2aa070:
    // 0x2aa070: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2aa070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2aa074:
    // 0x2aa074: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa078:
    // 0x2aa078: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2aa078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2aa07c:
    // 0x2aa07c: 0x1080feae  beqz        $a0, . + 4 + (-0x152 << 2)
label_2aa080:
    if (ctx->pc == 0x2AA080u) {
        ctx->pc = 0x2AA080u;
            // 0x2aa080: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA084u;
        goto label_2aa084;
    }
    ctx->pc = 0x2AA07Cu;
    {
        const bool branch_taken_0x2aa07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA07Cu;
            // 0x2aa080: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa07c) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA084u;
label_2aa084:
    // 0x2aa084: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2aa084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2aa088:
    // 0x2aa088: 0x10a0feab  beqz        $a1, . + 4 + (-0x155 << 2)
label_2aa08c:
    if (ctx->pc == 0x2AA08Cu) {
        ctx->pc = 0x2AA090u;
        goto label_2aa090;
    }
    ctx->pc = 0x2AA088u;
    {
        const bool branch_taken_0x2aa088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa088) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA090u;
label_2aa090:
    // 0x2aa090: 0xc0fe48c  jal         func_3F9230
label_2aa094:
    if (ctx->pc == 0x2AA094u) {
        ctx->pc = 0x2AA098u;
        goto label_2aa098;
    }
    ctx->pc = 0x2AA090u;
    SET_GPR_U32(ctx, 31, 0x2AA098u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA098u; }
        if (ctx->pc != 0x2AA098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA098u; }
        if (ctx->pc != 0x2AA098u) { return; }
    }
    ctx->pc = 0x2AA098u;
label_2aa098:
    // 0x2aa098: 0x1000fea7  b           . + 4 + (-0x159 << 2)
label_2aa09c:
    if (ctx->pc == 0x2AA09Cu) {
        ctx->pc = 0x2AA09Cu;
            // 0x2aa09c: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->pc = 0x2AA0A0u;
        goto label_2aa0a0;
    }
    ctx->pc = 0x2AA098u;
    {
        const bool branch_taken_0x2aa098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA098u;
            // 0x2aa09c: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa098) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA0A0u;
label_2aa0a0:
    // 0x2aa0a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aa0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aa0a4:
    // 0x2aa0a4: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x2aa0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_2aa0a8:
    // 0x2aa0a8: 0x40f809  jalr        $v0
label_2aa0ac:
    if (ctx->pc == 0x2AA0ACu) {
        ctx->pc = 0x2AA0ACu;
            // 0x2aa0ac: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2AA0B0u;
        goto label_2aa0b0;
    }
    ctx->pc = 0x2AA0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA0B0u);
        ctx->pc = 0x2AA0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA0A8u;
            // 0x2aa0ac: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA0B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA0B0u; }
            if (ctx->pc != 0x2AA0B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA0B0u;
label_2aa0b0:
    // 0x2aa0b0: 0x1000ff95  b           . + 4 + (-0x6B << 2)
label_2aa0b4:
    if (ctx->pc == 0x2AA0B4u) {
        ctx->pc = 0x2AA0B8u;
        goto label_2aa0b8;
    }
    ctx->pc = 0x2AA0B0u;
    {
        const bool branch_taken_0x2aa0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa0b0) {
            ctx->pc = 0x2A9F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9f08;
        }
    }
    ctx->pc = 0x2AA0B8u;
label_2aa0b8:
    // 0x2aa0b8: 0x48ac2  srl         $s1, $a0, 11
    ctx->pc = 0x2aa0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
label_2aa0bc:
    // 0x2aa0bc: 0x271082a  slt         $at, $s3, $s1
    ctx->pc = 0x2aa0bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2aa0c0:
    // 0x2aa0c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2aa0c4:
    if (ctx->pc == 0x2AA0C4u) {
        ctx->pc = 0x2AA0C8u;
        goto label_2aa0c8;
    }
    ctx->pc = 0x2AA0C0u;
    {
        const bool branch_taken_0x2aa0c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa0c0) {
            ctx->pc = 0x2AA0D0u;
            goto label_2aa0d0;
        }
    }
    ctx->pc = 0x2AA0C8u;
label_2aa0c8:
    // 0x2aa0c8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2aa0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2aa0cc:
    // 0x2aa0cc: 0x0  nop
    ctx->pc = 0x2aa0ccu;
    // NOP
label_2aa0d0:
    // 0x2aa0d0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2aa0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2aa0d4:
    // 0x2aa0d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2aa0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aa0d8:
    // 0x2aa0d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2aa0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2aa0dc:
    // 0x2aa0dc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2aa0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2aa0e0:
    // 0x2aa0e0: 0x320f809  jalr        $t9
label_2aa0e4:
    if (ctx->pc == 0x2AA0E4u) {
        ctx->pc = 0x2AA0E4u;
            // 0x2aa0e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA0E8u;
        goto label_2aa0e8;
    }
    ctx->pc = 0x2AA0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA0E8u);
        ctx->pc = 0x2AA0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA0E0u;
            // 0x2aa0e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA0E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA0E8u; }
            if (ctx->pc != 0x2AA0E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA0E8u;
label_2aa0e8:
    // 0x2aa0e8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2aa0e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2aa0ec:
    // 0x2aa0ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2aa0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aa0f0:
    // 0x2aa0f0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2aa0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2aa0f4:
    // 0x2aa0f4: 0x320f809  jalr        $t9
label_2aa0f8:
    if (ctx->pc == 0x2AA0F8u) {
        ctx->pc = 0x2AA0F8u;
            // 0x2aa0f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA0FCu;
        goto label_2aa0fc;
    }
    ctx->pc = 0x2AA0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA0FCu);
        ctx->pc = 0x2AA0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA0F4u;
            // 0x2aa0f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA0FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA0FCu; }
            if (ctx->pc != 0x2AA0FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2AA0FCu;
label_2aa0fc:
    // 0x2aa0fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2aa0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2aa100:
    // 0x2aa100: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_2aa104:
    if (ctx->pc == 0x2AA104u) {
        ctx->pc = 0x2AA108u;
        goto label_2aa108;
    }
    ctx->pc = 0x2AA100u;
    {
        const bool branch_taken_0x2aa100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2aa100) {
            ctx->pc = 0x2AA168u;
            goto label_2aa168;
        }
    }
    ctx->pc = 0x2AA108u;
label_2aa108:
    // 0x2aa108: 0x92a2008d  lbu         $v0, 0x8D($s5)
    ctx->pc = 0x2aa108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 141)));
label_2aa10c:
    // 0x2aa10c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2aa10cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2aa110:
    // 0x2aa110: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2aa110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2aa114:
    // 0x2aa114: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2aa118:
    if (ctx->pc == 0x2AA118u) {
        ctx->pc = 0x2AA11Cu;
        goto label_2aa11c;
    }
    ctx->pc = 0x2AA114u;
    {
        const bool branch_taken_0x2aa114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa114) {
            ctx->pc = 0x2AA138u;
            goto label_2aa138;
        }
    }
    ctx->pc = 0x2AA11Cu;
label_2aa11c:
    // 0x2aa11c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2aa11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2aa120:
    // 0x2aa120: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2aa120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aa124:
    // 0x2aa124: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2aa124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2aa128:
    // 0x2aa128: 0x320f809  jalr        $t9
label_2aa12c:
    if (ctx->pc == 0x2AA12Cu) {
        ctx->pc = 0x2AA12Cu;
            // 0x2aa12c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA130u;
        goto label_2aa130;
    }
    ctx->pc = 0x2AA128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA130u);
        ctx->pc = 0x2AA12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA128u;
            // 0x2aa12c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA130u; }
            if (ctx->pc != 0x2AA130u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA130u;
label_2aa130:
    // 0x2aa130: 0x1000000f  b           . + 4 + (0xF << 2)
label_2aa134:
    if (ctx->pc == 0x2AA134u) {
        ctx->pc = 0x2AA134u;
            // 0x2aa134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA138u;
        goto label_2aa138;
    }
    ctx->pc = 0x2AA130u;
    {
        const bool branch_taken_0x2aa130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA130u;
            // 0x2aa134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa130) {
            ctx->pc = 0x2AA170u;
            goto label_2aa170;
        }
    }
    ctx->pc = 0x2AA138u;
label_2aa138:
    // 0x2aa138: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aa138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aa13c:
    // 0x2aa13c: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x2aa13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_2aa140:
    // 0x2aa140: 0x40f809  jalr        $v0
label_2aa144:
    if (ctx->pc == 0x2AA144u) {
        ctx->pc = 0x2AA144u;
            // 0x2aa144: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2AA148u;
        goto label_2aa148;
    }
    ctx->pc = 0x2AA140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA148u);
        ctx->pc = 0x2AA144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA140u;
            // 0x2aa144: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA148u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA148u; }
            if (ctx->pc != 0x2AA148u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA148u;
label_2aa148:
    // 0x2aa148: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2aa148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2aa14c:
    // 0x2aa14c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2aa14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aa150:
    // 0x2aa150: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2aa150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2aa154:
    // 0x2aa154: 0x320f809  jalr        $t9
label_2aa158:
    if (ctx->pc == 0x2AA158u) {
        ctx->pc = 0x2AA158u;
            // 0x2aa158: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA15Cu;
        goto label_2aa15c;
    }
    ctx->pc = 0x2AA154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA15Cu);
        ctx->pc = 0x2AA158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA154u;
            // 0x2aa158: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA15Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA15Cu; }
            if (ctx->pc != 0x2AA15Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2AA15Cu;
label_2aa15c:
    // 0x2aa15c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2aa15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2aa160:
    // 0x2aa160: 0x1043ffe9  beq         $v0, $v1, . + 4 + (-0x17 << 2)
label_2aa164:
    if (ctx->pc == 0x2AA164u) {
        ctx->pc = 0x2AA168u;
        goto label_2aa168;
    }
    ctx->pc = 0x2AA160u;
    {
        const bool branch_taken_0x2aa160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa160) {
            ctx->pc = 0x2AA108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa108;
        }
    }
    ctx->pc = 0x2AA168u;
label_2aa168:
    // 0x2aa168: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x2aa168u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2aa16c:
    // 0x2aa16c: 0x0  nop
    ctx->pc = 0x2aa16cu;
    // NOP
label_2aa170:
    // 0x2aa170: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_2aa174:
    if (ctx->pc == 0x2AA174u) {
        ctx->pc = 0x2AA178u;
        goto label_2aa178;
    }
    ctx->pc = 0x2AA170u;
    {
        const bool branch_taken_0x2aa170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa170) {
            ctx->pc = 0x2AA268u;
            goto label_2aa268;
        }
    }
    ctx->pc = 0x2AA178u;
label_2aa178:
    // 0x2aa178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa17c:
    // 0x2aa17c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2aa180:
    if (ctx->pc == 0x2AA180u) {
        ctx->pc = 0x2AA180u;
            // 0x2aa180: 0xaea2005c  sw          $v0, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA184u;
        goto label_2aa184;
    }
    ctx->pc = 0x2AA17Cu;
    {
        const bool branch_taken_0x2aa17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA17Cu;
            // 0x2aa180: 0xaea2005c  sw          $v0, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa17c) {
            ctx->pc = 0x2AA198u;
            goto label_2aa198;
        }
    }
    ctx->pc = 0x2AA184u;
label_2aa184:
    // 0x2aa184: 0x0  nop
    ctx->pc = 0x2aa184u;
    // NOP
label_2aa188:
    // 0x2aa188: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aa188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aa18c:
    // 0x2aa18c: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x2aa18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_2aa190:
    // 0x2aa190: 0x40f809  jalr        $v0
label_2aa194:
    if (ctx->pc == 0x2AA194u) {
        ctx->pc = 0x2AA194u;
            // 0x2aa194: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2AA198u;
        goto label_2aa198;
    }
    ctx->pc = 0x2AA190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA198u);
        ctx->pc = 0x2AA194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA190u;
            // 0x2aa194: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA198u; }
            if (ctx->pc != 0x2AA198u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA198u;
label_2aa198:
    // 0x2aa198: 0x92a20061  lbu         $v0, 0x61($s5)
    ctx->pc = 0x2aa198u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 97)));
label_2aa19c:
    // 0x2aa19c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2aa1a0:
    if (ctx->pc == 0x2AA1A0u) {
        ctx->pc = 0x2AA1A4u;
        goto label_2aa1a4;
    }
    ctx->pc = 0x2AA19Cu;
    {
        const bool branch_taken_0x2aa19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa19c) {
            ctx->pc = 0x2AA1C8u;
            goto label_2aa1c8;
        }
    }
    ctx->pc = 0x2AA1A4u;
label_2aa1a4:
    // 0x2aa1a4: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x2aa1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_2aa1a8:
    // 0x2aa1a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2aa1ac:
    if (ctx->pc == 0x2AA1ACu) {
        ctx->pc = 0x2AA1ACu;
            // 0x2aa1ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AA1B0u;
        goto label_2aa1b0;
    }
    ctx->pc = 0x2AA1A8u;
    {
        const bool branch_taken_0x2aa1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa1a8) {
            ctx->pc = 0x2AA1ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA1A8u;
            // 0x2aa1ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA1BCu;
            goto label_2aa1bc;
        }
    }
    ctx->pc = 0x2AA1B0u;
label_2aa1b0:
    // 0x2aa1b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2aa1b4:
    if (ctx->pc == 0x2AA1B4u) {
        ctx->pc = 0x2AA1B4u;
            // 0x2aa1b4: 0x8ea20058  lw          $v0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x2AA1B8u;
        goto label_2aa1b8;
    }
    ctx->pc = 0x2AA1B0u;
    {
        const bool branch_taken_0x2aa1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA1B0u;
            // 0x2aa1b4: 0x8ea20058  lw          $v0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1b0) {
            ctx->pc = 0x2AA1BCu;
            goto label_2aa1bc;
        }
    }
    ctx->pc = 0x2AA1B8u;
label_2aa1b8:
    // 0x2aa1b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aa1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2aa1bc:
    // 0x2aa1bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2aa1c0:
    if (ctx->pc == 0x2AA1C0u) {
        ctx->pc = 0x2AA1C4u;
        goto label_2aa1c4;
    }
    ctx->pc = 0x2AA1BCu;
    {
        const bool branch_taken_0x2aa1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa1bc) {
            ctx->pc = 0x2AA1D0u;
            goto label_2aa1d0;
        }
    }
    ctx->pc = 0x2AA1C4u;
label_2aa1c4:
    // 0x2aa1c4: 0x0  nop
    ctx->pc = 0x2aa1c4u;
    // NOP
label_2aa1c8:
    // 0x2aa1c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa1cc:
    // 0x2aa1cc: 0x0  nop
    ctx->pc = 0x2aa1ccu;
    // NOP
label_2aa1d0:
    // 0x2aa1d0: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_2aa1d4:
    if (ctx->pc == 0x2AA1D4u) {
        ctx->pc = 0x2AA1D8u;
        goto label_2aa1d8;
    }
    ctx->pc = 0x2AA1D0u;
    {
        const bool branch_taken_0x2aa1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa1d0) {
            ctx->pc = 0x2AA188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa188;
        }
    }
    ctx->pc = 0x2AA1D8u;
label_2aa1d8:
    // 0x2aa1d8: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2aa1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2aa1dc:
    // 0x2aa1dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa1e0:
    // 0x2aa1e0: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x2aa1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_2aa1e4:
    // 0x2aa1e4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2aa1e8:
    if (ctx->pc == 0x2AA1E8u) {
        ctx->pc = 0x2AA1E8u;
            // 0x2aa1e8: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA1ECu;
        goto label_2aa1ec;
    }
    ctx->pc = 0x2AA1E4u;
    {
        const bool branch_taken_0x2aa1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA1E4u;
            // 0x2aa1e8: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1e4) {
            ctx->pc = 0x2AA208u;
            goto label_2aa208;
        }
    }
    ctx->pc = 0x2AA1ECu;
label_2aa1ec:
    // 0x2aa1ec: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2aa1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2aa1f0:
    // 0x2aa1f0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2aa1f4:
    if (ctx->pc == 0x2AA1F4u) {
        ctx->pc = 0x2AA1F8u;
        goto label_2aa1f8;
    }
    ctx->pc = 0x2AA1F0u;
    {
        const bool branch_taken_0x2aa1f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa1f0) {
            ctx->pc = 0x2AA208u;
            goto label_2aa208;
        }
    }
    ctx->pc = 0x2AA1F8u;
label_2aa1f8:
    // 0x2aa1f8: 0xc0fe48c  jal         func_3F9230
label_2aa1fc:
    if (ctx->pc == 0x2AA1FCu) {
        ctx->pc = 0x2AA200u;
        goto label_2aa200;
    }
    ctx->pc = 0x2AA1F8u;
    SET_GPR_U32(ctx, 31, 0x2AA200u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA200u; }
        if (ctx->pc != 0x2AA200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA200u; }
        if (ctx->pc != 0x2AA200u) { return; }
    }
    ctx->pc = 0x2AA200u;
label_2aa200:
    // 0x2aa200: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2aa200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_2aa204:
    // 0x2aa204: 0x0  nop
    ctx->pc = 0x2aa204u;
    // NOP
label_2aa208:
    // 0x2aa208: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2aa208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2aa20c:
    // 0x2aa20c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa210:
    // 0x2aa210: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2aa210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2aa214:
    // 0x2aa214: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2aa218:
    if (ctx->pc == 0x2AA218u) {
        ctx->pc = 0x2AA218u;
            // 0x2aa218: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA21Cu;
        goto label_2aa21c;
    }
    ctx->pc = 0x2AA214u;
    {
        const bool branch_taken_0x2aa214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA214u;
            // 0x2aa218: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa214) {
            ctx->pc = 0x2AA238u;
            goto label_2aa238;
        }
    }
    ctx->pc = 0x2AA21Cu;
label_2aa21c:
    // 0x2aa21c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2aa21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2aa220:
    // 0x2aa220: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2aa224:
    if (ctx->pc == 0x2AA224u) {
        ctx->pc = 0x2AA228u;
        goto label_2aa228;
    }
    ctx->pc = 0x2AA220u;
    {
        const bool branch_taken_0x2aa220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa220) {
            ctx->pc = 0x2AA238u;
            goto label_2aa238;
        }
    }
    ctx->pc = 0x2AA228u;
label_2aa228:
    // 0x2aa228: 0xc0fe48c  jal         func_3F9230
label_2aa22c:
    if (ctx->pc == 0x2AA22Cu) {
        ctx->pc = 0x2AA230u;
        goto label_2aa230;
    }
    ctx->pc = 0x2AA228u;
    SET_GPR_U32(ctx, 31, 0x2AA230u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA230u; }
        if (ctx->pc != 0x2AA230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA230u; }
        if (ctx->pc != 0x2AA230u) { return; }
    }
    ctx->pc = 0x2AA230u;
label_2aa230:
    // 0x2aa230: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2aa230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_2aa234:
    // 0x2aa234: 0x0  nop
    ctx->pc = 0x2aa234u;
    // NOP
label_2aa238:
    // 0x2aa238: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2aa238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2aa23c:
    // 0x2aa23c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa240:
    // 0x2aa240: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2aa240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2aa244:
    // 0x2aa244: 0x1080fe3c  beqz        $a0, . + 4 + (-0x1C4 << 2)
label_2aa248:
    if (ctx->pc == 0x2AA248u) {
        ctx->pc = 0x2AA248u;
            // 0x2aa248: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA24Cu;
        goto label_2aa24c;
    }
    ctx->pc = 0x2AA244u;
    {
        const bool branch_taken_0x2aa244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA244u;
            // 0x2aa248: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa244) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA24Cu;
label_2aa24c:
    // 0x2aa24c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2aa24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2aa250:
    // 0x2aa250: 0x10a0fe39  beqz        $a1, . + 4 + (-0x1C7 << 2)
label_2aa254:
    if (ctx->pc == 0x2AA254u) {
        ctx->pc = 0x2AA258u;
        goto label_2aa258;
    }
    ctx->pc = 0x2AA250u;
    {
        const bool branch_taken_0x2aa250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa250) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA258u;
label_2aa258:
    // 0x2aa258: 0xc0fe48c  jal         func_3F9230
label_2aa25c:
    if (ctx->pc == 0x2AA25Cu) {
        ctx->pc = 0x2AA260u;
        goto label_2aa260;
    }
    ctx->pc = 0x2AA258u;
    SET_GPR_U32(ctx, 31, 0x2AA260u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA260u; }
        if (ctx->pc != 0x2AA260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA260u; }
        if (ctx->pc != 0x2AA260u) { return; }
    }
    ctx->pc = 0x2AA260u;
label_2aa260:
    // 0x2aa260: 0x1000fe35  b           . + 4 + (-0x1CB << 2)
label_2aa264:
    if (ctx->pc == 0x2AA264u) {
        ctx->pc = 0x2AA264u;
            // 0x2aa264: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->pc = 0x2AA268u;
        goto label_2aa268;
    }
    ctx->pc = 0x2AA260u;
    {
        const bool branch_taken_0x2aa260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA260u;
            // 0x2aa264: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa260) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA268u;
label_2aa268:
    // 0x2aa268: 0x233082a  slt         $at, $s1, $s3
    ctx->pc = 0x2aa268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2aa26c:
    // 0x2aa26c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_2aa270:
    if (ctx->pc == 0x2AA270u) {
        ctx->pc = 0x2AA274u;
        goto label_2aa274;
    }
    ctx->pc = 0x2AA26Cu;
    {
        const bool branch_taken_0x2aa26c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa26c) {
            ctx->pc = 0x2AA2B0u;
            goto label_2aa2b0;
        }
    }
    ctx->pc = 0x2AA274u;
label_2aa274:
    // 0x2aa274: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x2aa274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2aa278:
    // 0x2aa278: 0x112ac0  sll         $a1, $s1, 11
    ctx->pc = 0x2aa278u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
label_2aa27c:
    // 0x2aa27c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2aa27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2aa280:
    // 0x2aa280: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x2aa280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2aa284:
    // 0x2aa284: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2aa284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aa288:
    // 0x2aa288: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2aa288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2aa28c:
    // 0x2aa28c: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x2aa28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_2aa290:
    // 0x2aa290: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2aa290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2aa294:
    // 0x2aa294: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2aa298:
    if (ctx->pc == 0x2AA298u) {
        ctx->pc = 0x2AA298u;
            // 0x2aa298: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->pc = 0x2AA29Cu;
        goto label_2aa29c;
    }
    ctx->pc = 0x2AA294u;
    {
        const bool branch_taken_0x2aa294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA294u;
            // 0x2aa298: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa294) {
            ctx->pc = 0x2AA2A8u;
            goto label_2aa2a8;
        }
    }
    ctx->pc = 0x2AA29Cu;
label_2aa29c:
    // 0x2aa29c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2aa29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2aa2a0:
    // 0x2aa2a0: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2aa2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_2aa2a4:
    // 0x2aa2a4: 0x0  nop
    ctx->pc = 0x2aa2a4u;
    // NOP
label_2aa2a8:
    // 0x2aa2a8: 0x10000013  b           . + 4 + (0x13 << 2)
label_2aa2ac:
    if (ctx->pc == 0x2AA2ACu) {
        ctx->pc = 0x2AA2ACu;
            // 0x2aa2ac: 0x2719823  subu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->pc = 0x2AA2B0u;
        goto label_2aa2b0;
    }
    ctx->pc = 0x2AA2A8u;
    {
        const bool branch_taken_0x2aa2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA2A8u;
            // 0x2aa2ac: 0x2719823  subu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2a8) {
            ctx->pc = 0x2AA2F8u;
            goto label_2aa2f8;
        }
    }
    ctx->pc = 0x2AA2B0u;
label_2aa2b0:
    // 0x2aa2b0: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x2aa2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2aa2b4:
    // 0x2aa2b4: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x2aa2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_2aa2b8:
    // 0x2aa2b8: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x2aa2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2aa2bc:
    // 0x2aa2bc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2aa2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2aa2c0:
    // 0x2aa2c0: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2aa2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2aa2c4:
    // 0x2aa2c4: 0x304607ff  andi        $a2, $v0, 0x7FF
    ctx->pc = 0x2aa2c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_2aa2c8:
    // 0x2aa2c8: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x2aa2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2aa2cc:
    // 0x2aa2cc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2aa2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2aa2d0:
    // 0x2aa2d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2aa2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aa2d4:
    // 0x2aa2d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2aa2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2aa2d8:
    // 0x2aa2d8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x2aa2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_2aa2dc:
    // 0x2aa2dc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2aa2dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2aa2e0:
    // 0x2aa2e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2aa2e4:
    if (ctx->pc == 0x2AA2E4u) {
        ctx->pc = 0x2AA2E4u;
            // 0x2aa2e4: 0xafa40094  sw          $a0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
        ctx->pc = 0x2AA2E8u;
        goto label_2aa2e8;
    }
    ctx->pc = 0x2AA2E0u;
    {
        const bool branch_taken_0x2aa2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA2E0u;
            // 0x2aa2e4: 0xafa40094  sw          $a0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2e0) {
            ctx->pc = 0x2AA2F0u;
            goto label_2aa2f0;
        }
    }
    ctx->pc = 0x2AA2E8u;
label_2aa2e8:
    // 0x2aa2e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2aa2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2aa2ec:
    // 0x2aa2ec: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2aa2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_2aa2f0:
    // 0x2aa2f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2aa2f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa2f4:
    // 0x2aa2f4: 0x0  nop
    ctx->pc = 0x2aa2f4u;
    // NOP
label_2aa2f8:
    // 0x2aa2f8: 0x1660ff03  bnez        $s3, . + 4 + (-0xFD << 2)
label_2aa2fc:
    if (ctx->pc == 0x2AA2FCu) {
        ctx->pc = 0x2AA300u;
        goto label_2aa300;
    }
    ctx->pc = 0x2AA2F8u;
    {
        const bool branch_taken_0x2aa2f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa2f8) {
            ctx->pc = 0x2A9F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9f08;
        }
    }
    ctx->pc = 0x2AA300u;
label_2aa300:
    // 0x2aa300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa304:
    // 0x2aa304: 0x10000044  b           . + 4 + (0x44 << 2)
label_2aa308:
    if (ctx->pc == 0x2AA308u) {
        ctx->pc = 0x2AA308u;
            // 0x2aa308: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA30Cu;
        goto label_2aa30c;
    }
    ctx->pc = 0x2AA304u;
    {
        const bool branch_taken_0x2aa304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA304u;
            // 0x2aa308: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa304) {
            ctx->pc = 0x2AA418u;
            goto label_2aa418;
        }
    }
    ctx->pc = 0x2AA30Cu;
label_2aa30c:
    // 0x2aa30c: 0x0  nop
    ctx->pc = 0x2aa30cu;
    // NOP
label_2aa310:
    // 0x2aa310: 0x92a2008d  lbu         $v0, 0x8D($s5)
    ctx->pc = 0x2aa310u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 141)));
label_2aa314:
    // 0x2aa314: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_2aa318:
    if (ctx->pc == 0x2AA318u) {
        ctx->pc = 0x2AA31Cu;
        goto label_2aa31c;
    }
    ctx->pc = 0x2AA314u;
    {
        const bool branch_taken_0x2aa314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa314) {
            ctx->pc = 0x2AA408u;
            goto label_2aa408;
        }
    }
    ctx->pc = 0x2AA31Cu;
label_2aa31c:
    // 0x2aa31c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa320:
    // 0x2aa320: 0x10000005  b           . + 4 + (0x5 << 2)
label_2aa324:
    if (ctx->pc == 0x2AA324u) {
        ctx->pc = 0x2AA324u;
            // 0x2aa324: 0xaea2005c  sw          $v0, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA328u;
        goto label_2aa328;
    }
    ctx->pc = 0x2AA320u;
    {
        const bool branch_taken_0x2aa320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA320u;
            // 0x2aa324: 0xaea2005c  sw          $v0, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa320) {
            ctx->pc = 0x2AA338u;
            goto label_2aa338;
        }
    }
    ctx->pc = 0x2AA328u;
label_2aa328:
    // 0x2aa328: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aa328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aa32c:
    // 0x2aa32c: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x2aa32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_2aa330:
    // 0x2aa330: 0x40f809  jalr        $v0
label_2aa334:
    if (ctx->pc == 0x2AA334u) {
        ctx->pc = 0x2AA334u;
            // 0x2aa334: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2AA338u;
        goto label_2aa338;
    }
    ctx->pc = 0x2AA330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA338u);
        ctx->pc = 0x2AA334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA330u;
            // 0x2aa334: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA338u; }
            if (ctx->pc != 0x2AA338u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA338u;
label_2aa338:
    // 0x2aa338: 0x92a20061  lbu         $v0, 0x61($s5)
    ctx->pc = 0x2aa338u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 97)));
label_2aa33c:
    // 0x2aa33c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2aa340:
    if (ctx->pc == 0x2AA340u) {
        ctx->pc = 0x2AA344u;
        goto label_2aa344;
    }
    ctx->pc = 0x2AA33Cu;
    {
        const bool branch_taken_0x2aa33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa33c) {
            ctx->pc = 0x2AA368u;
            goto label_2aa368;
        }
    }
    ctx->pc = 0x2AA344u;
label_2aa344:
    // 0x2aa344: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x2aa344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_2aa348:
    // 0x2aa348: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2aa34c:
    if (ctx->pc == 0x2AA34Cu) {
        ctx->pc = 0x2AA34Cu;
            // 0x2aa34c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AA350u;
        goto label_2aa350;
    }
    ctx->pc = 0x2AA348u;
    {
        const bool branch_taken_0x2aa348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa348) {
            ctx->pc = 0x2AA34Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA348u;
            // 0x2aa34c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA35Cu;
            goto label_2aa35c;
        }
    }
    ctx->pc = 0x2AA350u;
label_2aa350:
    // 0x2aa350: 0x10000002  b           . + 4 + (0x2 << 2)
label_2aa354:
    if (ctx->pc == 0x2AA354u) {
        ctx->pc = 0x2AA354u;
            // 0x2aa354: 0x8ea20058  lw          $v0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x2AA358u;
        goto label_2aa358;
    }
    ctx->pc = 0x2AA350u;
    {
        const bool branch_taken_0x2aa350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA350u;
            // 0x2aa354: 0x8ea20058  lw          $v0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa350) {
            ctx->pc = 0x2AA35Cu;
            goto label_2aa35c;
        }
    }
    ctx->pc = 0x2AA358u;
label_2aa358:
    // 0x2aa358: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aa358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2aa35c:
    // 0x2aa35c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2aa360:
    if (ctx->pc == 0x2AA360u) {
        ctx->pc = 0x2AA364u;
        goto label_2aa364;
    }
    ctx->pc = 0x2AA35Cu;
    {
        const bool branch_taken_0x2aa35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa35c) {
            ctx->pc = 0x2AA370u;
            goto label_2aa370;
        }
    }
    ctx->pc = 0x2AA364u;
label_2aa364:
    // 0x2aa364: 0x0  nop
    ctx->pc = 0x2aa364u;
    // NOP
label_2aa368:
    // 0x2aa368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa36c:
    // 0x2aa36c: 0x0  nop
    ctx->pc = 0x2aa36cu;
    // NOP
label_2aa370:
    // 0x2aa370: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_2aa374:
    if (ctx->pc == 0x2AA374u) {
        ctx->pc = 0x2AA378u;
        goto label_2aa378;
    }
    ctx->pc = 0x2AA370u;
    {
        const bool branch_taken_0x2aa370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa370) {
            ctx->pc = 0x2AA328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa328;
        }
    }
    ctx->pc = 0x2AA378u;
label_2aa378:
    // 0x2aa378: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2aa378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2aa37c:
    // 0x2aa37c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa380:
    // 0x2aa380: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x2aa380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_2aa384:
    // 0x2aa384: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2aa388:
    if (ctx->pc == 0x2AA388u) {
        ctx->pc = 0x2AA388u;
            // 0x2aa388: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA38Cu;
        goto label_2aa38c;
    }
    ctx->pc = 0x2AA384u;
    {
        const bool branch_taken_0x2aa384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA384u;
            // 0x2aa388: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa384) {
            ctx->pc = 0x2AA3A8u;
            goto label_2aa3a8;
        }
    }
    ctx->pc = 0x2AA38Cu;
label_2aa38c:
    // 0x2aa38c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2aa38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2aa390:
    // 0x2aa390: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2aa394:
    if (ctx->pc == 0x2AA394u) {
        ctx->pc = 0x2AA398u;
        goto label_2aa398;
    }
    ctx->pc = 0x2AA390u;
    {
        const bool branch_taken_0x2aa390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa390) {
            ctx->pc = 0x2AA3A8u;
            goto label_2aa3a8;
        }
    }
    ctx->pc = 0x2AA398u;
label_2aa398:
    // 0x2aa398: 0xc0fe48c  jal         func_3F9230
label_2aa39c:
    if (ctx->pc == 0x2AA39Cu) {
        ctx->pc = 0x2AA3A0u;
        goto label_2aa3a0;
    }
    ctx->pc = 0x2AA398u;
    SET_GPR_U32(ctx, 31, 0x2AA3A0u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3A0u; }
        if (ctx->pc != 0x2AA3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3A0u; }
        if (ctx->pc != 0x2AA3A0u) { return; }
    }
    ctx->pc = 0x2AA3A0u;
label_2aa3a0:
    // 0x2aa3a0: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2aa3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_2aa3a4:
    // 0x2aa3a4: 0x0  nop
    ctx->pc = 0x2aa3a4u;
    // NOP
label_2aa3a8:
    // 0x2aa3a8: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2aa3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2aa3ac:
    // 0x2aa3ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa3b0:
    // 0x2aa3b0: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2aa3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2aa3b4:
    // 0x2aa3b4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2aa3b8:
    if (ctx->pc == 0x2AA3B8u) {
        ctx->pc = 0x2AA3B8u;
            // 0x2aa3b8: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA3BCu;
        goto label_2aa3bc;
    }
    ctx->pc = 0x2AA3B4u;
    {
        const bool branch_taken_0x2aa3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3B4u;
            // 0x2aa3b8: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3b4) {
            ctx->pc = 0x2AA3D8u;
            goto label_2aa3d8;
        }
    }
    ctx->pc = 0x2AA3BCu;
label_2aa3bc:
    // 0x2aa3bc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2aa3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2aa3c0:
    // 0x2aa3c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2aa3c4:
    if (ctx->pc == 0x2AA3C4u) {
        ctx->pc = 0x2AA3C8u;
        goto label_2aa3c8;
    }
    ctx->pc = 0x2AA3C0u;
    {
        const bool branch_taken_0x2aa3c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa3c0) {
            ctx->pc = 0x2AA3D8u;
            goto label_2aa3d8;
        }
    }
    ctx->pc = 0x2AA3C8u;
label_2aa3c8:
    // 0x2aa3c8: 0xc0fe48c  jal         func_3F9230
label_2aa3cc:
    if (ctx->pc == 0x2AA3CCu) {
        ctx->pc = 0x2AA3D0u;
        goto label_2aa3d0;
    }
    ctx->pc = 0x2AA3C8u;
    SET_GPR_U32(ctx, 31, 0x2AA3D0u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3D0u; }
        if (ctx->pc != 0x2AA3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3D0u; }
        if (ctx->pc != 0x2AA3D0u) { return; }
    }
    ctx->pc = 0x2AA3D0u;
label_2aa3d0:
    // 0x2aa3d0: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2aa3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_2aa3d4:
    // 0x2aa3d4: 0x0  nop
    ctx->pc = 0x2aa3d4u;
    // NOP
label_2aa3d8:
    // 0x2aa3d8: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2aa3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2aa3dc:
    // 0x2aa3dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa3e0:
    // 0x2aa3e0: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2aa3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2aa3e4:
    // 0x2aa3e4: 0x1080fdd4  beqz        $a0, . + 4 + (-0x22C << 2)
label_2aa3e8:
    if (ctx->pc == 0x2AA3E8u) {
        ctx->pc = 0x2AA3E8u;
            // 0x2aa3e8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA3ECu;
        goto label_2aa3ec;
    }
    ctx->pc = 0x2AA3E4u;
    {
        const bool branch_taken_0x2aa3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3E4u;
            // 0x2aa3e8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3e4) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA3ECu;
label_2aa3ec:
    // 0x2aa3ec: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2aa3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2aa3f0:
    // 0x2aa3f0: 0x10a0fdd1  beqz        $a1, . + 4 + (-0x22F << 2)
label_2aa3f4:
    if (ctx->pc == 0x2AA3F4u) {
        ctx->pc = 0x2AA3F8u;
        goto label_2aa3f8;
    }
    ctx->pc = 0x2AA3F0u;
    {
        const bool branch_taken_0x2aa3f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa3f0) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA3F8u;
label_2aa3f8:
    // 0x2aa3f8: 0xc0fe48c  jal         func_3F9230
label_2aa3fc:
    if (ctx->pc == 0x2AA3FCu) {
        ctx->pc = 0x2AA400u;
        goto label_2aa400;
    }
    ctx->pc = 0x2AA3F8u;
    SET_GPR_U32(ctx, 31, 0x2AA400u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA400u; }
        if (ctx->pc != 0x2AA400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA400u; }
        if (ctx->pc != 0x2AA400u) { return; }
    }
    ctx->pc = 0x2AA400u;
label_2aa400:
    // 0x2aa400: 0x1000fdcd  b           . + 4 + (-0x233 << 2)
label_2aa404:
    if (ctx->pc == 0x2AA404u) {
        ctx->pc = 0x2AA404u;
            // 0x2aa404: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->pc = 0x2AA408u;
        goto label_2aa408;
    }
    ctx->pc = 0x2AA400u;
    {
        const bool branch_taken_0x2aa400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA400u;
            // 0x2aa404: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa400) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA408u;
label_2aa408:
    // 0x2aa408: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aa408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aa40c:
    // 0x2aa40c: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x2aa40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_2aa410:
    // 0x2aa410: 0x40f809  jalr        $v0
label_2aa414:
    if (ctx->pc == 0x2AA414u) {
        ctx->pc = 0x2AA414u;
            // 0x2aa414: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2AA418u;
        goto label_2aa418;
    }
    ctx->pc = 0x2AA410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA418u);
        ctx->pc = 0x2AA414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA410u;
            // 0x2aa414: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA418u; }
            if (ctx->pc != 0x2AA418u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA418u;
label_2aa418:
    // 0x2aa418: 0x92a20061  lbu         $v0, 0x61($s5)
    ctx->pc = 0x2aa418u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 97)));
label_2aa41c:
    // 0x2aa41c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2aa420:
    if (ctx->pc == 0x2AA420u) {
        ctx->pc = 0x2AA424u;
        goto label_2aa424;
    }
    ctx->pc = 0x2AA41Cu;
    {
        const bool branch_taken_0x2aa41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa41c) {
            ctx->pc = 0x2AA448u;
            goto label_2aa448;
        }
    }
    ctx->pc = 0x2AA424u;
label_2aa424:
    // 0x2aa424: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x2aa424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_2aa428:
    // 0x2aa428: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2aa42c:
    if (ctx->pc == 0x2AA42Cu) {
        ctx->pc = 0x2AA42Cu;
            // 0x2aa42c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AA430u;
        goto label_2aa430;
    }
    ctx->pc = 0x2AA428u;
    {
        const bool branch_taken_0x2aa428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa428) {
            ctx->pc = 0x2AA42Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA428u;
            // 0x2aa42c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA43Cu;
            goto label_2aa43c;
        }
    }
    ctx->pc = 0x2AA430u;
label_2aa430:
    // 0x2aa430: 0x10000002  b           . + 4 + (0x2 << 2)
label_2aa434:
    if (ctx->pc == 0x2AA434u) {
        ctx->pc = 0x2AA434u;
            // 0x2aa434: 0x8ea20058  lw          $v0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x2AA438u;
        goto label_2aa438;
    }
    ctx->pc = 0x2AA430u;
    {
        const bool branch_taken_0x2aa430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA430u;
            // 0x2aa434: 0x8ea20058  lw          $v0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa430) {
            ctx->pc = 0x2AA43Cu;
            goto label_2aa43c;
        }
    }
    ctx->pc = 0x2AA438u;
label_2aa438:
    // 0x2aa438: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aa438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2aa43c:
    // 0x2aa43c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2aa440:
    if (ctx->pc == 0x2AA440u) {
        ctx->pc = 0x2AA444u;
        goto label_2aa444;
    }
    ctx->pc = 0x2AA43Cu;
    {
        const bool branch_taken_0x2aa43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa43c) {
            ctx->pc = 0x2AA450u;
            goto label_2aa450;
        }
    }
    ctx->pc = 0x2AA444u;
label_2aa444:
    // 0x2aa444: 0x0  nop
    ctx->pc = 0x2aa444u;
    // NOP
label_2aa448:
    // 0x2aa448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa44c:
    // 0x2aa44c: 0x0  nop
    ctx->pc = 0x2aa44cu;
    // NOP
label_2aa450:
    // 0x2aa450: 0x1040ffaf  beqz        $v0, . + 4 + (-0x51 << 2)
label_2aa454:
    if (ctx->pc == 0x2AA454u) {
        ctx->pc = 0x2AA458u;
        goto label_2aa458;
    }
    ctx->pc = 0x2AA450u;
    {
        const bool branch_taken_0x2aa450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa450) {
            ctx->pc = 0x2AA310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa310;
        }
    }
    ctx->pc = 0x2AA458u;
label_2aa458:
    // 0x2aa458: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2aa458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2aa45c:
    // 0x2aa45c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa460:
    // 0x2aa460: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x2aa460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_2aa464:
    // 0x2aa464: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2aa468:
    if (ctx->pc == 0x2AA468u) {
        ctx->pc = 0x2AA468u;
            // 0x2aa468: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA46Cu;
        goto label_2aa46c;
    }
    ctx->pc = 0x2AA464u;
    {
        const bool branch_taken_0x2aa464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA464u;
            // 0x2aa468: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa464) {
            ctx->pc = 0x2AA488u;
            goto label_2aa488;
        }
    }
    ctx->pc = 0x2AA46Cu;
label_2aa46c:
    // 0x2aa46c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2aa46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2aa470:
    // 0x2aa470: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2aa474:
    if (ctx->pc == 0x2AA474u) {
        ctx->pc = 0x2AA478u;
        goto label_2aa478;
    }
    ctx->pc = 0x2AA470u;
    {
        const bool branch_taken_0x2aa470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa470) {
            ctx->pc = 0x2AA488u;
            goto label_2aa488;
        }
    }
    ctx->pc = 0x2AA478u;
label_2aa478:
    // 0x2aa478: 0xc0fe48c  jal         func_3F9230
label_2aa47c:
    if (ctx->pc == 0x2AA47Cu) {
        ctx->pc = 0x2AA480u;
        goto label_2aa480;
    }
    ctx->pc = 0x2AA478u;
    SET_GPR_U32(ctx, 31, 0x2AA480u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA480u; }
        if (ctx->pc != 0x2AA480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA480u; }
        if (ctx->pc != 0x2AA480u) { return; }
    }
    ctx->pc = 0x2AA480u;
label_2aa480:
    // 0x2aa480: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2aa480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_2aa484:
    // 0x2aa484: 0x0  nop
    ctx->pc = 0x2aa484u;
    // NOP
label_2aa488:
    // 0x2aa488: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2aa488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2aa48c:
    // 0x2aa48c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa490:
    // 0x2aa490: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2aa490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2aa494:
    // 0x2aa494: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2aa498:
    if (ctx->pc == 0x2AA498u) {
        ctx->pc = 0x2AA498u;
            // 0x2aa498: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA49Cu;
        goto label_2aa49c;
    }
    ctx->pc = 0x2AA494u;
    {
        const bool branch_taken_0x2aa494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA494u;
            // 0x2aa498: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa494) {
            ctx->pc = 0x2AA4B8u;
            goto label_2aa4b8;
        }
    }
    ctx->pc = 0x2AA49Cu;
label_2aa49c:
    // 0x2aa49c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2aa49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2aa4a0:
    // 0x2aa4a0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2aa4a4:
    if (ctx->pc == 0x2AA4A4u) {
        ctx->pc = 0x2AA4A8u;
        goto label_2aa4a8;
    }
    ctx->pc = 0x2AA4A0u;
    {
        const bool branch_taken_0x2aa4a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa4a0) {
            ctx->pc = 0x2AA4B8u;
            goto label_2aa4b8;
        }
    }
    ctx->pc = 0x2AA4A8u;
label_2aa4a8:
    // 0x2aa4a8: 0xc0fe48c  jal         func_3F9230
label_2aa4ac:
    if (ctx->pc == 0x2AA4ACu) {
        ctx->pc = 0x2AA4B0u;
        goto label_2aa4b0;
    }
    ctx->pc = 0x2AA4A8u;
    SET_GPR_U32(ctx, 31, 0x2AA4B0u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4B0u; }
        if (ctx->pc != 0x2AA4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4B0u; }
        if (ctx->pc != 0x2AA4B0u) { return; }
    }
    ctx->pc = 0x2AA4B0u;
label_2aa4b0:
    // 0x2aa4b0: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2aa4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_2aa4b4:
    // 0x2aa4b4: 0x0  nop
    ctx->pc = 0x2aa4b4u;
    // NOP
label_2aa4b8:
    // 0x2aa4b8: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2aa4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2aa4bc:
    // 0x2aa4bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa4c0:
    // 0x2aa4c0: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2aa4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2aa4c4:
    // 0x2aa4c4: 0x1080fd9c  beqz        $a0, . + 4 + (-0x264 << 2)
label_2aa4c8:
    if (ctx->pc == 0x2AA4C8u) {
        ctx->pc = 0x2AA4C8u;
            // 0x2aa4c8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA4CCu;
        goto label_2aa4cc;
    }
    ctx->pc = 0x2AA4C4u;
    {
        const bool branch_taken_0x2aa4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA4C4u;
            // 0x2aa4c8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa4c4) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA4CCu;
label_2aa4cc:
    // 0x2aa4cc: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2aa4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2aa4d0:
    // 0x2aa4d0: 0x10a0fd99  beqz        $a1, . + 4 + (-0x267 << 2)
label_2aa4d4:
    if (ctx->pc == 0x2AA4D4u) {
        ctx->pc = 0x2AA4D8u;
        goto label_2aa4d8;
    }
    ctx->pc = 0x2AA4D0u;
    {
        const bool branch_taken_0x2aa4d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa4d0) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA4D8u;
label_2aa4d8:
    // 0x2aa4d8: 0xc0fe48c  jal         func_3F9230
label_2aa4dc:
    if (ctx->pc == 0x2AA4DCu) {
        ctx->pc = 0x2AA4E0u;
        goto label_2aa4e0;
    }
    ctx->pc = 0x2AA4D8u;
    SET_GPR_U32(ctx, 31, 0x2AA4E0u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4E0u; }
        if (ctx->pc != 0x2AA4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4E0u; }
        if (ctx->pc != 0x2AA4E0u) { return; }
    }
    ctx->pc = 0x2AA4E0u;
label_2aa4e0:
    // 0x2aa4e0: 0x1000fd95  b           . + 4 + (-0x26B << 2)
label_2aa4e4:
    if (ctx->pc == 0x2AA4E4u) {
        ctx->pc = 0x2AA4E4u;
            // 0x2aa4e4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->pc = 0x2AA4E8u;
        goto label_2aa4e8;
    }
    ctx->pc = 0x2AA4E0u;
    {
        const bool branch_taken_0x2aa4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA4E0u;
            // 0x2aa4e4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa4e0) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA4E8u;
label_2aa4e8:
    // 0x2aa4e8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2aa4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2aa4ec:
    // 0x2aa4ec: 0x8ea50088  lw          $a1, 0x88($s5)
    ctx->pc = 0x2aa4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_2aa4f0:
    // 0x2aa4f0: 0x1032c0  sll         $a2, $s0, 11
    ctx->pc = 0x2aa4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
label_2aa4f4:
    // 0x2aa4f4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2aa4f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2aa4f8:
    // 0x2aa4f8: 0x320f809  jalr        $t9
label_2aa4fc:
    if (ctx->pc == 0x2AA4FCu) {
        ctx->pc = 0x2AA4FCu;
            // 0x2aa4fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA500u;
        goto label_2aa500;
    }
    ctx->pc = 0x2AA4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA500u);
        ctx->pc = 0x2AA4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA4F8u;
            // 0x2aa4fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA500u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA500u; }
            if (ctx->pc != 0x2AA500u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA500u;
label_2aa500:
    // 0x2aa500: 0x8ea50090  lw          $a1, 0x90($s5)
    ctx->pc = 0x2aa500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_2aa504:
    // 0x2aa504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aa504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa508:
    // 0x2aa508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa50c:
    // 0x2aa50c: 0xc04a508  jal         func_129420
label_2aa510:
    if (ctx->pc == 0x2AA510u) {
        ctx->pc = 0x2AA510u;
            // 0x2aa510: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2AA514u;
        goto label_2aa514;
    }
    ctx->pc = 0x2AA50Cu;
    SET_GPR_U32(ctx, 31, 0x2AA514u);
    ctx->pc = 0x2AA510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA50Cu;
            // 0x2aa510: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA514u; }
        if (ctx->pc != 0x2AA514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA514u; }
        if (ctx->pc != 0x2AA514u) { return; }
    }
    ctx->pc = 0x2AA514u;
label_2aa514:
    // 0x2aa514: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x2aa514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2aa518:
    // 0x2aa518: 0x18c0fd87  blez        $a2, . + 4 + (-0x279 << 2)
label_2aa51c:
    if (ctx->pc == 0x2AA51Cu) {
        ctx->pc = 0x2AA520u;
        goto label_2aa520;
    }
    ctx->pc = 0x2AA518u;
    {
        const bool branch_taken_0x2aa518 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2aa518) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA520u;
label_2aa520:
    // 0x2aa520: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2aa520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2aa524:
    // 0x2aa524: 0x26270800  addiu       $a3, $s1, 0x800
    ctx->pc = 0x2aa524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 2048));
label_2aa528:
    // 0x2aa528: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2aa528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aa52c:
    // 0x2aa52c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2aa52cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2aa530:
    // 0x2aa530: 0x320f809  jalr        $t9
label_2aa534:
    if (ctx->pc == 0x2AA534u) {
        ctx->pc = 0x2AA534u;
            // 0x2aa534: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA538u;
        goto label_2aa538;
    }
    ctx->pc = 0x2AA530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA538u);
        ctx->pc = 0x2AA534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA530u;
            // 0x2aa534: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA538u; }
            if (ctx->pc != 0x2AA538u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA538u;
label_2aa538:
    // 0x2aa538: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2aa538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2aa53c:
    // 0x2aa53c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2aa53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aa540:
    // 0x2aa540: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2aa540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2aa544:
    // 0x2aa544: 0x320f809  jalr        $t9
label_2aa548:
    if (ctx->pc == 0x2AA548u) {
        ctx->pc = 0x2AA548u;
            // 0x2aa548: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA54Cu;
        goto label_2aa54c;
    }
    ctx->pc = 0x2AA544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA54Cu);
        ctx->pc = 0x2AA548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA544u;
            // 0x2aa548: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA54Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA54Cu; }
            if (ctx->pc != 0x2AA54Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2AA54Cu;
label_2aa54c:
    // 0x2aa54c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2aa54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2aa550:
    // 0x2aa550: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_2aa554:
    if (ctx->pc == 0x2AA554u) {
        ctx->pc = 0x2AA558u;
        goto label_2aa558;
    }
    ctx->pc = 0x2AA550u;
    {
        const bool branch_taken_0x2aa550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2aa550) {
            ctx->pc = 0x2AA5B8u;
            goto label_2aa5b8;
        }
    }
    ctx->pc = 0x2AA558u;
label_2aa558:
    // 0x2aa558: 0x92a2008d  lbu         $v0, 0x8D($s5)
    ctx->pc = 0x2aa558u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 141)));
label_2aa55c:
    // 0x2aa55c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2aa55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2aa560:
    // 0x2aa560: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2aa560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2aa564:
    // 0x2aa564: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2aa568:
    if (ctx->pc == 0x2AA568u) {
        ctx->pc = 0x2AA56Cu;
        goto label_2aa56c;
    }
    ctx->pc = 0x2AA564u;
    {
        const bool branch_taken_0x2aa564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa564) {
            ctx->pc = 0x2AA588u;
            goto label_2aa588;
        }
    }
    ctx->pc = 0x2AA56Cu;
label_2aa56c:
    // 0x2aa56c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2aa56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2aa570:
    // 0x2aa570: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2aa570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2aa574:
    // 0x2aa574: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2aa574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2aa578:
    // 0x2aa578: 0x320f809  jalr        $t9
label_2aa57c:
    if (ctx->pc == 0x2AA57Cu) {
        ctx->pc = 0x2AA57Cu;
            // 0x2aa57c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA580u;
        goto label_2aa580;
    }
    ctx->pc = 0x2AA578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA580u);
        ctx->pc = 0x2AA57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA578u;
            // 0x2aa57c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA580u; }
            if (ctx->pc != 0x2AA580u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA580u;
label_2aa580:
    // 0x2aa580: 0x1000000d  b           . + 4 + (0xD << 2)
label_2aa584:
    if (ctx->pc == 0x2AA584u) {
        ctx->pc = 0x2AA588u;
        goto label_2aa588;
    }
    ctx->pc = 0x2AA580u;
    {
        const bool branch_taken_0x2aa580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa580) {
            ctx->pc = 0x2AA5B8u;
            goto label_2aa5b8;
        }
    }
    ctx->pc = 0x2AA588u;
label_2aa588:
    // 0x2aa588: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aa588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aa58c:
    // 0x2aa58c: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x2aa58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_2aa590:
    // 0x2aa590: 0x40f809  jalr        $v0
label_2aa594:
    if (ctx->pc == 0x2AA594u) {
        ctx->pc = 0x2AA594u;
            // 0x2aa594: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2AA598u;
        goto label_2aa598;
    }
    ctx->pc = 0x2AA590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA598u);
        ctx->pc = 0x2AA594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA590u;
            // 0x2aa594: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA598u; }
            if (ctx->pc != 0x2AA598u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA598u;
label_2aa598:
    // 0x2aa598: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2aa598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2aa59c:
    // 0x2aa59c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2aa59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aa5a0:
    // 0x2aa5a0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2aa5a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2aa5a4:
    // 0x2aa5a4: 0x320f809  jalr        $t9
label_2aa5a8:
    if (ctx->pc == 0x2AA5A8u) {
        ctx->pc = 0x2AA5A8u;
            // 0x2aa5a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5ACu;
        goto label_2aa5ac;
    }
    ctx->pc = 0x2AA5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA5ACu);
        ctx->pc = 0x2AA5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA5A4u;
            // 0x2aa5a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA5ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA5ACu; }
            if (ctx->pc != 0x2AA5ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2AA5ACu;
label_2aa5ac:
    // 0x2aa5ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2aa5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2aa5b0:
    // 0x2aa5b0: 0x1043ffe9  beq         $v0, $v1, . + 4 + (-0x17 << 2)
label_2aa5b4:
    if (ctx->pc == 0x2AA5B4u) {
        ctx->pc = 0x2AA5B8u;
        goto label_2aa5b8;
    }
    ctx->pc = 0x2AA5B0u;
    {
        const bool branch_taken_0x2aa5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa5b0) {
            ctx->pc = 0x2AA558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa558;
        }
    }
    ctx->pc = 0x2AA5B8u;
label_2aa5b8:
    // 0x2aa5b8: 0x1000fd5f  b           . + 4 + (-0x2A1 << 2)
label_2aa5bc:
    if (ctx->pc == 0x2AA5BCu) {
        ctx->pc = 0x2AA5C0u;
        goto label_2aa5c0;
    }
    ctx->pc = 0x2AA5B8u;
    {
        const bool branch_taken_0x2aa5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa5b8) {
            ctx->pc = 0x2A9B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2AA5C0u;
label_2aa5c0:
    // 0x2aa5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2aa5c4:
    // 0x2aa5c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2aa5c8:
    // 0x2aa5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2aa5cc:
    // 0x2aa5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2aa5d0:
    // 0x2aa5d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aa5d4:
    // 0x2aa5d4: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_2aa5d8:
    if (ctx->pc == 0x2AA5D8u) {
        ctx->pc = 0x2AA5D8u;
            // 0x2aa5d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5DCu;
        goto label_2aa5dc;
    }
    ctx->pc = 0x2AA5D4u;
    {
        const bool branch_taken_0x2aa5d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA5D4u;
            // 0x2aa5d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa5d4) {
            ctx->pc = 0x2AA65Cu;
            goto label_2aa65c;
        }
    }
    ctx->pc = 0x2AA5DCu;
label_2aa5dc:
    // 0x2aa5dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa5e0:
    // 0x2aa5e0: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x2aa5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_2aa5e4:
    // 0x2aa5e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2aa5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2aa5e8:
    // 0x2aa5e8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2aa5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2aa5ec:
    // 0x2aa5ec: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2aa5f0:
    if (ctx->pc == 0x2AA5F0u) {
        ctx->pc = 0x2AA5F4u;
        goto label_2aa5f4;
    }
    ctx->pc = 0x2AA5ECu;
    {
        const bool branch_taken_0x2aa5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa5ec) {
            ctx->pc = 0x2AA60Cu;
            goto label_2aa60c;
        }
    }
    ctx->pc = 0x2AA5F4u;
label_2aa5f4:
    // 0x2aa5f4: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2aa5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2aa5f8:
    // 0x2aa5f8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2aa5fc:
    if (ctx->pc == 0x2AA5FCu) {
        ctx->pc = 0x2AA600u;
        goto label_2aa600;
    }
    ctx->pc = 0x2AA5F8u;
    {
        const bool branch_taken_0x2aa5f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa5f8) {
            ctx->pc = 0x2AA60Cu;
            goto label_2aa60c;
        }
    }
    ctx->pc = 0x2AA600u;
label_2aa600:
    // 0x2aa600: 0xc0fe48c  jal         func_3F9230
label_2aa604:
    if (ctx->pc == 0x2AA604u) {
        ctx->pc = 0x2AA608u;
        goto label_2aa608;
    }
    ctx->pc = 0x2AA600u;
    SET_GPR_U32(ctx, 31, 0x2AA608u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA608u; }
        if (ctx->pc != 0x2AA608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA608u; }
        if (ctx->pc != 0x2AA608u) { return; }
    }
    ctx->pc = 0x2AA608u;
label_2aa608:
    // 0x2aa608: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2aa608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2aa60c:
    // 0x2aa60c: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_2aa610:
    if (ctx->pc == 0x2AA610u) {
        ctx->pc = 0x2AA610u;
            // 0x2aa610: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2AA614u;
        goto label_2aa614;
    }
    ctx->pc = 0x2AA60Cu;
    {
        const bool branch_taken_0x2aa60c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa60c) {
            ctx->pc = 0x2AA610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA60Cu;
            // 0x2aa610: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA648u;
            goto label_2aa648;
        }
    }
    ctx->pc = 0x2AA614u;
label_2aa614:
    // 0x2aa614: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa618:
    // 0x2aa618: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2aa618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2aa61c:
    // 0x2aa61c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2aa61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2aa620:
    // 0x2aa620: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2aa620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2aa624:
    // 0x2aa624: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2aa628:
    if (ctx->pc == 0x2AA628u) {
        ctx->pc = 0x2AA62Cu;
        goto label_2aa62c;
    }
    ctx->pc = 0x2AA624u;
    {
        const bool branch_taken_0x2aa624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa624) {
            ctx->pc = 0x2AA644u;
            goto label_2aa644;
        }
    }
    ctx->pc = 0x2AA62Cu;
label_2aa62c:
    // 0x2aa62c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2aa62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2aa630:
    // 0x2aa630: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2aa634:
    if (ctx->pc == 0x2AA634u) {
        ctx->pc = 0x2AA638u;
        goto label_2aa638;
    }
    ctx->pc = 0x2AA630u;
    {
        const bool branch_taken_0x2aa630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa630) {
            ctx->pc = 0x2AA644u;
            goto label_2aa644;
        }
    }
    ctx->pc = 0x2AA638u;
label_2aa638:
    // 0x2aa638: 0xc0fe48c  jal         func_3F9230
label_2aa63c:
    if (ctx->pc == 0x2AA63Cu) {
        ctx->pc = 0x2AA640u;
        goto label_2aa640;
    }
    ctx->pc = 0x2AA638u;
    SET_GPR_U32(ctx, 31, 0x2AA640u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA640u; }
        if (ctx->pc != 0x2AA640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA640u; }
        if (ctx->pc != 0x2AA640u) { return; }
    }
    ctx->pc = 0x2AA640u;
label_2aa640:
    // 0x2aa640: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2aa640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2aa644:
    // 0x2aa644: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2aa644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2aa648:
    // 0x2aa648: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2aa648u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2aa64c:
    // 0x2aa64c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2aa650:
    if (ctx->pc == 0x2AA650u) {
        ctx->pc = 0x2AA650u;
            // 0x2aa650: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA654u;
        goto label_2aa654;
    }
    ctx->pc = 0x2AA64Cu;
    {
        const bool branch_taken_0x2aa64c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2aa64c) {
            ctx->pc = 0x2AA650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA64Cu;
            // 0x2aa650: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA660u;
            goto label_2aa660;
        }
    }
    ctx->pc = 0x2AA654u;
label_2aa654:
    // 0x2aa654: 0xc0400a8  jal         func_1002A0
label_2aa658:
    if (ctx->pc == 0x2AA658u) {
        ctx->pc = 0x2AA658u;
            // 0x2aa658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA65Cu;
        goto label_2aa65c;
    }
    ctx->pc = 0x2AA654u;
    SET_GPR_U32(ctx, 31, 0x2AA65Cu);
    ctx->pc = 0x2AA658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA654u;
            // 0x2aa658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA65Cu; }
        if (ctx->pc != 0x2AA65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA65Cu; }
        if (ctx->pc != 0x2AA65Cu) { return; }
    }
    ctx->pc = 0x2AA65Cu;
label_2aa65c:
    // 0x2aa65c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2aa65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa660:
    // 0x2aa660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa664:
    // 0x2aa664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa668:
    // 0x2aa668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa66c:
    // 0x2aa66c: 0x3e00008  jr          $ra
label_2aa670:
    if (ctx->pc == 0x2AA670u) {
        ctx->pc = 0x2AA670u;
            // 0x2aa670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2AA674u;
        goto label_2aa674;
    }
    ctx->pc = 0x2AA66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA66Cu;
            // 0x2aa670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA674u;
label_2aa674:
    // 0x2aa674: 0x0  nop
    ctx->pc = 0x2aa674u;
    // NOP
label_2aa678:
    // 0x2aa678: 0x0  nop
    ctx->pc = 0x2aa678u;
    // NOP
label_2aa67c:
    // 0x2aa67c: 0x0  nop
    ctx->pc = 0x2aa67cu;
    // NOP
label_2aa680:
    // 0x2aa680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2aa684:
    // 0x2aa684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2aa688:
    // 0x2aa688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2aa68c:
    // 0x2aa68c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2aa690:
    // 0x2aa690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aa694:
    // 0x2aa694: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2aa698:
    if (ctx->pc == 0x2AA698u) {
        ctx->pc = 0x2AA698u;
            // 0x2aa698: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA69Cu;
        goto label_2aa69c;
    }
    ctx->pc = 0x2AA694u;
    {
        const bool branch_taken_0x2aa694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA694u;
            // 0x2aa698: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa694) {
            ctx->pc = 0x2AA6F4u;
            goto label_2aa6f4;
        }
    }
    ctx->pc = 0x2AA69Cu;
label_2aa69c:
    // 0x2aa69c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa6a0:
    // 0x2aa6a0: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x2aa6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
label_2aa6a4:
    // 0x2aa6a4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2aa6a8:
    if (ctx->pc == 0x2AA6A8u) {
        ctx->pc = 0x2AA6A8u;
            // 0x2aa6a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA6ACu;
        goto label_2aa6ac;
    }
    ctx->pc = 0x2AA6A4u;
    {
        const bool branch_taken_0x2aa6a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA6A4u;
            // 0x2aa6a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6a4) {
            ctx->pc = 0x2AA6DCu;
            goto label_2aa6dc;
        }
    }
    ctx->pc = 0x2AA6ACu;
label_2aa6ac:
    // 0x2aa6ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa6b0:
    // 0x2aa6b0: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2aa6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2aa6b4:
    // 0x2aa6b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2aa6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2aa6b8:
    // 0x2aa6b8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2aa6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2aa6bc:
    // 0x2aa6bc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_2aa6c0:
    if (ctx->pc == 0x2AA6C0u) {
        ctx->pc = 0x2AA6C0u;
            // 0x2aa6c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2AA6C4u;
        goto label_2aa6c4;
    }
    ctx->pc = 0x2AA6BCu;
    {
        const bool branch_taken_0x2aa6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa6bc) {
            ctx->pc = 0x2AA6C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA6BCu;
            // 0x2aa6c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA6E0u;
            goto label_2aa6e0;
        }
    }
    ctx->pc = 0x2AA6C4u;
label_2aa6c4:
    // 0x2aa6c4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2aa6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2aa6c8:
    // 0x2aa6c8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2aa6cc:
    if (ctx->pc == 0x2AA6CCu) {
        ctx->pc = 0x2AA6D0u;
        goto label_2aa6d0;
    }
    ctx->pc = 0x2AA6C8u;
    {
        const bool branch_taken_0x2aa6c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa6c8) {
            ctx->pc = 0x2AA6DCu;
            goto label_2aa6dc;
        }
    }
    ctx->pc = 0x2AA6D0u;
label_2aa6d0:
    // 0x2aa6d0: 0xc0fe48c  jal         func_3F9230
label_2aa6d4:
    if (ctx->pc == 0x2AA6D4u) {
        ctx->pc = 0x2AA6D8u;
        goto label_2aa6d8;
    }
    ctx->pc = 0x2AA6D0u;
    SET_GPR_U32(ctx, 31, 0x2AA6D8u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA6D8u; }
        if (ctx->pc != 0x2AA6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA6D8u; }
        if (ctx->pc != 0x2AA6D8u) { return; }
    }
    ctx->pc = 0x2AA6D8u;
label_2aa6d8:
    // 0x2aa6d8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2aa6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2aa6dc:
    // 0x2aa6dc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2aa6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2aa6e0:
    // 0x2aa6e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2aa6e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2aa6e4:
    // 0x2aa6e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2aa6e8:
    if (ctx->pc == 0x2AA6E8u) {
        ctx->pc = 0x2AA6E8u;
            // 0x2aa6e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6ECu;
        goto label_2aa6ec;
    }
    ctx->pc = 0x2AA6E4u;
    {
        const bool branch_taken_0x2aa6e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2aa6e4) {
            ctx->pc = 0x2AA6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA6E4u;
            // 0x2aa6e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA6F8u;
            goto label_2aa6f8;
        }
    }
    ctx->pc = 0x2AA6ECu;
label_2aa6ec:
    // 0x2aa6ec: 0xc0400a8  jal         func_1002A0
label_2aa6f0:
    if (ctx->pc == 0x2AA6F0u) {
        ctx->pc = 0x2AA6F0u;
            // 0x2aa6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6F4u;
        goto label_2aa6f4;
    }
    ctx->pc = 0x2AA6ECu;
    SET_GPR_U32(ctx, 31, 0x2AA6F4u);
    ctx->pc = 0x2AA6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA6ECu;
            // 0x2aa6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA6F4u; }
        if (ctx->pc != 0x2AA6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA6F4u; }
        if (ctx->pc != 0x2AA6F4u) { return; }
    }
    ctx->pc = 0x2AA6F4u;
label_2aa6f4:
    // 0x2aa6f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2aa6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa6f8:
    // 0x2aa6f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa6fc:
    // 0x2aa6fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa700:
    // 0x2aa700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa704:
    // 0x2aa704: 0x3e00008  jr          $ra
label_2aa708:
    if (ctx->pc == 0x2AA708u) {
        ctx->pc = 0x2AA708u;
            // 0x2aa708: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2AA70Cu;
        goto label_2aa70c;
    }
    ctx->pc = 0x2AA704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA704u;
            // 0x2aa708: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA70Cu;
label_2aa70c:
    // 0x2aa70c: 0x0  nop
    ctx->pc = 0x2aa70cu;
    // NOP
label_2aa710:
    // 0x2aa710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2aa714:
    // 0x2aa714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2aa718:
    // 0x2aa718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2aa71c:
    // 0x2aa71c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2aa720:
    // 0x2aa720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aa724:
    // 0x2aa724: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2aa728:
    if (ctx->pc == 0x2AA728u) {
        ctx->pc = 0x2AA728u;
            // 0x2aa728: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA72Cu;
        goto label_2aa72c;
    }
    ctx->pc = 0x2AA724u;
    {
        const bool branch_taken_0x2aa724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA724u;
            // 0x2aa728: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa724) {
            ctx->pc = 0x2AA774u;
            goto label_2aa774;
        }
    }
    ctx->pc = 0x2AA72Cu;
label_2aa72c:
    // 0x2aa72c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa730:
    // 0x2aa730: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2aa730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_2aa734:
    // 0x2aa734: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2aa734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2aa738:
    // 0x2aa738: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2aa738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2aa73c:
    // 0x2aa73c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_2aa740:
    if (ctx->pc == 0x2AA740u) {
        ctx->pc = 0x2AA740u;
            // 0x2aa740: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2AA744u;
        goto label_2aa744;
    }
    ctx->pc = 0x2AA73Cu;
    {
        const bool branch_taken_0x2aa73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa73c) {
            ctx->pc = 0x2AA740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA73Cu;
            // 0x2aa740: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA760u;
            goto label_2aa760;
        }
    }
    ctx->pc = 0x2AA744u;
label_2aa744:
    // 0x2aa744: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2aa744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2aa748:
    // 0x2aa748: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2aa74c:
    if (ctx->pc == 0x2AA74Cu) {
        ctx->pc = 0x2AA750u;
        goto label_2aa750;
    }
    ctx->pc = 0x2AA748u;
    {
        const bool branch_taken_0x2aa748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa748) {
            ctx->pc = 0x2AA75Cu;
            goto label_2aa75c;
        }
    }
    ctx->pc = 0x2AA750u;
label_2aa750:
    // 0x2aa750: 0xc0fe48c  jal         func_3F9230
label_2aa754:
    if (ctx->pc == 0x2AA754u) {
        ctx->pc = 0x2AA758u;
        goto label_2aa758;
    }
    ctx->pc = 0x2AA750u;
    SET_GPR_U32(ctx, 31, 0x2AA758u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA758u; }
        if (ctx->pc != 0x2AA758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA758u; }
        if (ctx->pc != 0x2AA758u) { return; }
    }
    ctx->pc = 0x2AA758u;
label_2aa758:
    // 0x2aa758: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2aa758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2aa75c:
    // 0x2aa75c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2aa75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2aa760:
    // 0x2aa760: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2aa760u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2aa764:
    // 0x2aa764: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2aa768:
    if (ctx->pc == 0x2AA768u) {
        ctx->pc = 0x2AA768u;
            // 0x2aa768: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA76Cu;
        goto label_2aa76c;
    }
    ctx->pc = 0x2AA764u;
    {
        const bool branch_taken_0x2aa764 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2aa764) {
            ctx->pc = 0x2AA768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA764u;
            // 0x2aa768: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA778u;
            goto label_2aa778;
        }
    }
    ctx->pc = 0x2AA76Cu;
label_2aa76c:
    // 0x2aa76c: 0xc0400a8  jal         func_1002A0
label_2aa770:
    if (ctx->pc == 0x2AA770u) {
        ctx->pc = 0x2AA770u;
            // 0x2aa770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA774u;
        goto label_2aa774;
    }
    ctx->pc = 0x2AA76Cu;
    SET_GPR_U32(ctx, 31, 0x2AA774u);
    ctx->pc = 0x2AA770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA76Cu;
            // 0x2aa770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA774u; }
        if (ctx->pc != 0x2AA774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA774u; }
        if (ctx->pc != 0x2AA774u) { return; }
    }
    ctx->pc = 0x2AA774u;
label_2aa774:
    // 0x2aa774: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2aa774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa778:
    // 0x2aa778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa77c:
    // 0x2aa77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa780:
    // 0x2aa780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa784:
    // 0x2aa784: 0x3e00008  jr          $ra
label_2aa788:
    if (ctx->pc == 0x2AA788u) {
        ctx->pc = 0x2AA788u;
            // 0x2aa788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2AA78Cu;
        goto label_2aa78c;
    }
    ctx->pc = 0x2AA784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA784u;
            // 0x2aa788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA78Cu;
label_2aa78c:
    // 0x2aa78c: 0x0  nop
    ctx->pc = 0x2aa78cu;
    // NOP
}
