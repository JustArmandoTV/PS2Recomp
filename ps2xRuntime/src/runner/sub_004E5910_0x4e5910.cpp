#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E5910
// Address: 0x4e5910 - 0x4e6370
void sub_004E5910_0x4e5910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5910_0x4e5910");
#endif

    switch (ctx->pc) {
        case 0x4e5910u: goto label_4e5910;
        case 0x4e5914u: goto label_4e5914;
        case 0x4e5918u: goto label_4e5918;
        case 0x4e591cu: goto label_4e591c;
        case 0x4e5920u: goto label_4e5920;
        case 0x4e5924u: goto label_4e5924;
        case 0x4e5928u: goto label_4e5928;
        case 0x4e592cu: goto label_4e592c;
        case 0x4e5930u: goto label_4e5930;
        case 0x4e5934u: goto label_4e5934;
        case 0x4e5938u: goto label_4e5938;
        case 0x4e593cu: goto label_4e593c;
        case 0x4e5940u: goto label_4e5940;
        case 0x4e5944u: goto label_4e5944;
        case 0x4e5948u: goto label_4e5948;
        case 0x4e594cu: goto label_4e594c;
        case 0x4e5950u: goto label_4e5950;
        case 0x4e5954u: goto label_4e5954;
        case 0x4e5958u: goto label_4e5958;
        case 0x4e595cu: goto label_4e595c;
        case 0x4e5960u: goto label_4e5960;
        case 0x4e5964u: goto label_4e5964;
        case 0x4e5968u: goto label_4e5968;
        case 0x4e596cu: goto label_4e596c;
        case 0x4e5970u: goto label_4e5970;
        case 0x4e5974u: goto label_4e5974;
        case 0x4e5978u: goto label_4e5978;
        case 0x4e597cu: goto label_4e597c;
        case 0x4e5980u: goto label_4e5980;
        case 0x4e5984u: goto label_4e5984;
        case 0x4e5988u: goto label_4e5988;
        case 0x4e598cu: goto label_4e598c;
        case 0x4e5990u: goto label_4e5990;
        case 0x4e5994u: goto label_4e5994;
        case 0x4e5998u: goto label_4e5998;
        case 0x4e599cu: goto label_4e599c;
        case 0x4e59a0u: goto label_4e59a0;
        case 0x4e59a4u: goto label_4e59a4;
        case 0x4e59a8u: goto label_4e59a8;
        case 0x4e59acu: goto label_4e59ac;
        case 0x4e59b0u: goto label_4e59b0;
        case 0x4e59b4u: goto label_4e59b4;
        case 0x4e59b8u: goto label_4e59b8;
        case 0x4e59bcu: goto label_4e59bc;
        case 0x4e59c0u: goto label_4e59c0;
        case 0x4e59c4u: goto label_4e59c4;
        case 0x4e59c8u: goto label_4e59c8;
        case 0x4e59ccu: goto label_4e59cc;
        case 0x4e59d0u: goto label_4e59d0;
        case 0x4e59d4u: goto label_4e59d4;
        case 0x4e59d8u: goto label_4e59d8;
        case 0x4e59dcu: goto label_4e59dc;
        case 0x4e59e0u: goto label_4e59e0;
        case 0x4e59e4u: goto label_4e59e4;
        case 0x4e59e8u: goto label_4e59e8;
        case 0x4e59ecu: goto label_4e59ec;
        case 0x4e59f0u: goto label_4e59f0;
        case 0x4e59f4u: goto label_4e59f4;
        case 0x4e59f8u: goto label_4e59f8;
        case 0x4e59fcu: goto label_4e59fc;
        case 0x4e5a00u: goto label_4e5a00;
        case 0x4e5a04u: goto label_4e5a04;
        case 0x4e5a08u: goto label_4e5a08;
        case 0x4e5a0cu: goto label_4e5a0c;
        case 0x4e5a10u: goto label_4e5a10;
        case 0x4e5a14u: goto label_4e5a14;
        case 0x4e5a18u: goto label_4e5a18;
        case 0x4e5a1cu: goto label_4e5a1c;
        case 0x4e5a20u: goto label_4e5a20;
        case 0x4e5a24u: goto label_4e5a24;
        case 0x4e5a28u: goto label_4e5a28;
        case 0x4e5a2cu: goto label_4e5a2c;
        case 0x4e5a30u: goto label_4e5a30;
        case 0x4e5a34u: goto label_4e5a34;
        case 0x4e5a38u: goto label_4e5a38;
        case 0x4e5a3cu: goto label_4e5a3c;
        case 0x4e5a40u: goto label_4e5a40;
        case 0x4e5a44u: goto label_4e5a44;
        case 0x4e5a48u: goto label_4e5a48;
        case 0x4e5a4cu: goto label_4e5a4c;
        case 0x4e5a50u: goto label_4e5a50;
        case 0x4e5a54u: goto label_4e5a54;
        case 0x4e5a58u: goto label_4e5a58;
        case 0x4e5a5cu: goto label_4e5a5c;
        case 0x4e5a60u: goto label_4e5a60;
        case 0x4e5a64u: goto label_4e5a64;
        case 0x4e5a68u: goto label_4e5a68;
        case 0x4e5a6cu: goto label_4e5a6c;
        case 0x4e5a70u: goto label_4e5a70;
        case 0x4e5a74u: goto label_4e5a74;
        case 0x4e5a78u: goto label_4e5a78;
        case 0x4e5a7cu: goto label_4e5a7c;
        case 0x4e5a80u: goto label_4e5a80;
        case 0x4e5a84u: goto label_4e5a84;
        case 0x4e5a88u: goto label_4e5a88;
        case 0x4e5a8cu: goto label_4e5a8c;
        case 0x4e5a90u: goto label_4e5a90;
        case 0x4e5a94u: goto label_4e5a94;
        case 0x4e5a98u: goto label_4e5a98;
        case 0x4e5a9cu: goto label_4e5a9c;
        case 0x4e5aa0u: goto label_4e5aa0;
        case 0x4e5aa4u: goto label_4e5aa4;
        case 0x4e5aa8u: goto label_4e5aa8;
        case 0x4e5aacu: goto label_4e5aac;
        case 0x4e5ab0u: goto label_4e5ab0;
        case 0x4e5ab4u: goto label_4e5ab4;
        case 0x4e5ab8u: goto label_4e5ab8;
        case 0x4e5abcu: goto label_4e5abc;
        case 0x4e5ac0u: goto label_4e5ac0;
        case 0x4e5ac4u: goto label_4e5ac4;
        case 0x4e5ac8u: goto label_4e5ac8;
        case 0x4e5accu: goto label_4e5acc;
        case 0x4e5ad0u: goto label_4e5ad0;
        case 0x4e5ad4u: goto label_4e5ad4;
        case 0x4e5ad8u: goto label_4e5ad8;
        case 0x4e5adcu: goto label_4e5adc;
        case 0x4e5ae0u: goto label_4e5ae0;
        case 0x4e5ae4u: goto label_4e5ae4;
        case 0x4e5ae8u: goto label_4e5ae8;
        case 0x4e5aecu: goto label_4e5aec;
        case 0x4e5af0u: goto label_4e5af0;
        case 0x4e5af4u: goto label_4e5af4;
        case 0x4e5af8u: goto label_4e5af8;
        case 0x4e5afcu: goto label_4e5afc;
        case 0x4e5b00u: goto label_4e5b00;
        case 0x4e5b04u: goto label_4e5b04;
        case 0x4e5b08u: goto label_4e5b08;
        case 0x4e5b0cu: goto label_4e5b0c;
        case 0x4e5b10u: goto label_4e5b10;
        case 0x4e5b14u: goto label_4e5b14;
        case 0x4e5b18u: goto label_4e5b18;
        case 0x4e5b1cu: goto label_4e5b1c;
        case 0x4e5b20u: goto label_4e5b20;
        case 0x4e5b24u: goto label_4e5b24;
        case 0x4e5b28u: goto label_4e5b28;
        case 0x4e5b2cu: goto label_4e5b2c;
        case 0x4e5b30u: goto label_4e5b30;
        case 0x4e5b34u: goto label_4e5b34;
        case 0x4e5b38u: goto label_4e5b38;
        case 0x4e5b3cu: goto label_4e5b3c;
        case 0x4e5b40u: goto label_4e5b40;
        case 0x4e5b44u: goto label_4e5b44;
        case 0x4e5b48u: goto label_4e5b48;
        case 0x4e5b4cu: goto label_4e5b4c;
        case 0x4e5b50u: goto label_4e5b50;
        case 0x4e5b54u: goto label_4e5b54;
        case 0x4e5b58u: goto label_4e5b58;
        case 0x4e5b5cu: goto label_4e5b5c;
        case 0x4e5b60u: goto label_4e5b60;
        case 0x4e5b64u: goto label_4e5b64;
        case 0x4e5b68u: goto label_4e5b68;
        case 0x4e5b6cu: goto label_4e5b6c;
        case 0x4e5b70u: goto label_4e5b70;
        case 0x4e5b74u: goto label_4e5b74;
        case 0x4e5b78u: goto label_4e5b78;
        case 0x4e5b7cu: goto label_4e5b7c;
        case 0x4e5b80u: goto label_4e5b80;
        case 0x4e5b84u: goto label_4e5b84;
        case 0x4e5b88u: goto label_4e5b88;
        case 0x4e5b8cu: goto label_4e5b8c;
        case 0x4e5b90u: goto label_4e5b90;
        case 0x4e5b94u: goto label_4e5b94;
        case 0x4e5b98u: goto label_4e5b98;
        case 0x4e5b9cu: goto label_4e5b9c;
        case 0x4e5ba0u: goto label_4e5ba0;
        case 0x4e5ba4u: goto label_4e5ba4;
        case 0x4e5ba8u: goto label_4e5ba8;
        case 0x4e5bacu: goto label_4e5bac;
        case 0x4e5bb0u: goto label_4e5bb0;
        case 0x4e5bb4u: goto label_4e5bb4;
        case 0x4e5bb8u: goto label_4e5bb8;
        case 0x4e5bbcu: goto label_4e5bbc;
        case 0x4e5bc0u: goto label_4e5bc0;
        case 0x4e5bc4u: goto label_4e5bc4;
        case 0x4e5bc8u: goto label_4e5bc8;
        case 0x4e5bccu: goto label_4e5bcc;
        case 0x4e5bd0u: goto label_4e5bd0;
        case 0x4e5bd4u: goto label_4e5bd4;
        case 0x4e5bd8u: goto label_4e5bd8;
        case 0x4e5bdcu: goto label_4e5bdc;
        case 0x4e5be0u: goto label_4e5be0;
        case 0x4e5be4u: goto label_4e5be4;
        case 0x4e5be8u: goto label_4e5be8;
        case 0x4e5becu: goto label_4e5bec;
        case 0x4e5bf0u: goto label_4e5bf0;
        case 0x4e5bf4u: goto label_4e5bf4;
        case 0x4e5bf8u: goto label_4e5bf8;
        case 0x4e5bfcu: goto label_4e5bfc;
        case 0x4e5c00u: goto label_4e5c00;
        case 0x4e5c04u: goto label_4e5c04;
        case 0x4e5c08u: goto label_4e5c08;
        case 0x4e5c0cu: goto label_4e5c0c;
        case 0x4e5c10u: goto label_4e5c10;
        case 0x4e5c14u: goto label_4e5c14;
        case 0x4e5c18u: goto label_4e5c18;
        case 0x4e5c1cu: goto label_4e5c1c;
        case 0x4e5c20u: goto label_4e5c20;
        case 0x4e5c24u: goto label_4e5c24;
        case 0x4e5c28u: goto label_4e5c28;
        case 0x4e5c2cu: goto label_4e5c2c;
        case 0x4e5c30u: goto label_4e5c30;
        case 0x4e5c34u: goto label_4e5c34;
        case 0x4e5c38u: goto label_4e5c38;
        case 0x4e5c3cu: goto label_4e5c3c;
        case 0x4e5c40u: goto label_4e5c40;
        case 0x4e5c44u: goto label_4e5c44;
        case 0x4e5c48u: goto label_4e5c48;
        case 0x4e5c4cu: goto label_4e5c4c;
        case 0x4e5c50u: goto label_4e5c50;
        case 0x4e5c54u: goto label_4e5c54;
        case 0x4e5c58u: goto label_4e5c58;
        case 0x4e5c5cu: goto label_4e5c5c;
        case 0x4e5c60u: goto label_4e5c60;
        case 0x4e5c64u: goto label_4e5c64;
        case 0x4e5c68u: goto label_4e5c68;
        case 0x4e5c6cu: goto label_4e5c6c;
        case 0x4e5c70u: goto label_4e5c70;
        case 0x4e5c74u: goto label_4e5c74;
        case 0x4e5c78u: goto label_4e5c78;
        case 0x4e5c7cu: goto label_4e5c7c;
        case 0x4e5c80u: goto label_4e5c80;
        case 0x4e5c84u: goto label_4e5c84;
        case 0x4e5c88u: goto label_4e5c88;
        case 0x4e5c8cu: goto label_4e5c8c;
        case 0x4e5c90u: goto label_4e5c90;
        case 0x4e5c94u: goto label_4e5c94;
        case 0x4e5c98u: goto label_4e5c98;
        case 0x4e5c9cu: goto label_4e5c9c;
        case 0x4e5ca0u: goto label_4e5ca0;
        case 0x4e5ca4u: goto label_4e5ca4;
        case 0x4e5ca8u: goto label_4e5ca8;
        case 0x4e5cacu: goto label_4e5cac;
        case 0x4e5cb0u: goto label_4e5cb0;
        case 0x4e5cb4u: goto label_4e5cb4;
        case 0x4e5cb8u: goto label_4e5cb8;
        case 0x4e5cbcu: goto label_4e5cbc;
        case 0x4e5cc0u: goto label_4e5cc0;
        case 0x4e5cc4u: goto label_4e5cc4;
        case 0x4e5cc8u: goto label_4e5cc8;
        case 0x4e5cccu: goto label_4e5ccc;
        case 0x4e5cd0u: goto label_4e5cd0;
        case 0x4e5cd4u: goto label_4e5cd4;
        case 0x4e5cd8u: goto label_4e5cd8;
        case 0x4e5cdcu: goto label_4e5cdc;
        case 0x4e5ce0u: goto label_4e5ce0;
        case 0x4e5ce4u: goto label_4e5ce4;
        case 0x4e5ce8u: goto label_4e5ce8;
        case 0x4e5cecu: goto label_4e5cec;
        case 0x4e5cf0u: goto label_4e5cf0;
        case 0x4e5cf4u: goto label_4e5cf4;
        case 0x4e5cf8u: goto label_4e5cf8;
        case 0x4e5cfcu: goto label_4e5cfc;
        case 0x4e5d00u: goto label_4e5d00;
        case 0x4e5d04u: goto label_4e5d04;
        case 0x4e5d08u: goto label_4e5d08;
        case 0x4e5d0cu: goto label_4e5d0c;
        case 0x4e5d10u: goto label_4e5d10;
        case 0x4e5d14u: goto label_4e5d14;
        case 0x4e5d18u: goto label_4e5d18;
        case 0x4e5d1cu: goto label_4e5d1c;
        case 0x4e5d20u: goto label_4e5d20;
        case 0x4e5d24u: goto label_4e5d24;
        case 0x4e5d28u: goto label_4e5d28;
        case 0x4e5d2cu: goto label_4e5d2c;
        case 0x4e5d30u: goto label_4e5d30;
        case 0x4e5d34u: goto label_4e5d34;
        case 0x4e5d38u: goto label_4e5d38;
        case 0x4e5d3cu: goto label_4e5d3c;
        case 0x4e5d40u: goto label_4e5d40;
        case 0x4e5d44u: goto label_4e5d44;
        case 0x4e5d48u: goto label_4e5d48;
        case 0x4e5d4cu: goto label_4e5d4c;
        case 0x4e5d50u: goto label_4e5d50;
        case 0x4e5d54u: goto label_4e5d54;
        case 0x4e5d58u: goto label_4e5d58;
        case 0x4e5d5cu: goto label_4e5d5c;
        case 0x4e5d60u: goto label_4e5d60;
        case 0x4e5d64u: goto label_4e5d64;
        case 0x4e5d68u: goto label_4e5d68;
        case 0x4e5d6cu: goto label_4e5d6c;
        case 0x4e5d70u: goto label_4e5d70;
        case 0x4e5d74u: goto label_4e5d74;
        case 0x4e5d78u: goto label_4e5d78;
        case 0x4e5d7cu: goto label_4e5d7c;
        case 0x4e5d80u: goto label_4e5d80;
        case 0x4e5d84u: goto label_4e5d84;
        case 0x4e5d88u: goto label_4e5d88;
        case 0x4e5d8cu: goto label_4e5d8c;
        case 0x4e5d90u: goto label_4e5d90;
        case 0x4e5d94u: goto label_4e5d94;
        case 0x4e5d98u: goto label_4e5d98;
        case 0x4e5d9cu: goto label_4e5d9c;
        case 0x4e5da0u: goto label_4e5da0;
        case 0x4e5da4u: goto label_4e5da4;
        case 0x4e5da8u: goto label_4e5da8;
        case 0x4e5dacu: goto label_4e5dac;
        case 0x4e5db0u: goto label_4e5db0;
        case 0x4e5db4u: goto label_4e5db4;
        case 0x4e5db8u: goto label_4e5db8;
        case 0x4e5dbcu: goto label_4e5dbc;
        case 0x4e5dc0u: goto label_4e5dc0;
        case 0x4e5dc4u: goto label_4e5dc4;
        case 0x4e5dc8u: goto label_4e5dc8;
        case 0x4e5dccu: goto label_4e5dcc;
        case 0x4e5dd0u: goto label_4e5dd0;
        case 0x4e5dd4u: goto label_4e5dd4;
        case 0x4e5dd8u: goto label_4e5dd8;
        case 0x4e5ddcu: goto label_4e5ddc;
        case 0x4e5de0u: goto label_4e5de0;
        case 0x4e5de4u: goto label_4e5de4;
        case 0x4e5de8u: goto label_4e5de8;
        case 0x4e5decu: goto label_4e5dec;
        case 0x4e5df0u: goto label_4e5df0;
        case 0x4e5df4u: goto label_4e5df4;
        case 0x4e5df8u: goto label_4e5df8;
        case 0x4e5dfcu: goto label_4e5dfc;
        case 0x4e5e00u: goto label_4e5e00;
        case 0x4e5e04u: goto label_4e5e04;
        case 0x4e5e08u: goto label_4e5e08;
        case 0x4e5e0cu: goto label_4e5e0c;
        case 0x4e5e10u: goto label_4e5e10;
        case 0x4e5e14u: goto label_4e5e14;
        case 0x4e5e18u: goto label_4e5e18;
        case 0x4e5e1cu: goto label_4e5e1c;
        case 0x4e5e20u: goto label_4e5e20;
        case 0x4e5e24u: goto label_4e5e24;
        case 0x4e5e28u: goto label_4e5e28;
        case 0x4e5e2cu: goto label_4e5e2c;
        case 0x4e5e30u: goto label_4e5e30;
        case 0x4e5e34u: goto label_4e5e34;
        case 0x4e5e38u: goto label_4e5e38;
        case 0x4e5e3cu: goto label_4e5e3c;
        case 0x4e5e40u: goto label_4e5e40;
        case 0x4e5e44u: goto label_4e5e44;
        case 0x4e5e48u: goto label_4e5e48;
        case 0x4e5e4cu: goto label_4e5e4c;
        case 0x4e5e50u: goto label_4e5e50;
        case 0x4e5e54u: goto label_4e5e54;
        case 0x4e5e58u: goto label_4e5e58;
        case 0x4e5e5cu: goto label_4e5e5c;
        case 0x4e5e60u: goto label_4e5e60;
        case 0x4e5e64u: goto label_4e5e64;
        case 0x4e5e68u: goto label_4e5e68;
        case 0x4e5e6cu: goto label_4e5e6c;
        case 0x4e5e70u: goto label_4e5e70;
        case 0x4e5e74u: goto label_4e5e74;
        case 0x4e5e78u: goto label_4e5e78;
        case 0x4e5e7cu: goto label_4e5e7c;
        case 0x4e5e80u: goto label_4e5e80;
        case 0x4e5e84u: goto label_4e5e84;
        case 0x4e5e88u: goto label_4e5e88;
        case 0x4e5e8cu: goto label_4e5e8c;
        case 0x4e5e90u: goto label_4e5e90;
        case 0x4e5e94u: goto label_4e5e94;
        case 0x4e5e98u: goto label_4e5e98;
        case 0x4e5e9cu: goto label_4e5e9c;
        case 0x4e5ea0u: goto label_4e5ea0;
        case 0x4e5ea4u: goto label_4e5ea4;
        case 0x4e5ea8u: goto label_4e5ea8;
        case 0x4e5eacu: goto label_4e5eac;
        case 0x4e5eb0u: goto label_4e5eb0;
        case 0x4e5eb4u: goto label_4e5eb4;
        case 0x4e5eb8u: goto label_4e5eb8;
        case 0x4e5ebcu: goto label_4e5ebc;
        case 0x4e5ec0u: goto label_4e5ec0;
        case 0x4e5ec4u: goto label_4e5ec4;
        case 0x4e5ec8u: goto label_4e5ec8;
        case 0x4e5eccu: goto label_4e5ecc;
        case 0x4e5ed0u: goto label_4e5ed0;
        case 0x4e5ed4u: goto label_4e5ed4;
        case 0x4e5ed8u: goto label_4e5ed8;
        case 0x4e5edcu: goto label_4e5edc;
        case 0x4e5ee0u: goto label_4e5ee0;
        case 0x4e5ee4u: goto label_4e5ee4;
        case 0x4e5ee8u: goto label_4e5ee8;
        case 0x4e5eecu: goto label_4e5eec;
        case 0x4e5ef0u: goto label_4e5ef0;
        case 0x4e5ef4u: goto label_4e5ef4;
        case 0x4e5ef8u: goto label_4e5ef8;
        case 0x4e5efcu: goto label_4e5efc;
        case 0x4e5f00u: goto label_4e5f00;
        case 0x4e5f04u: goto label_4e5f04;
        case 0x4e5f08u: goto label_4e5f08;
        case 0x4e5f0cu: goto label_4e5f0c;
        case 0x4e5f10u: goto label_4e5f10;
        case 0x4e5f14u: goto label_4e5f14;
        case 0x4e5f18u: goto label_4e5f18;
        case 0x4e5f1cu: goto label_4e5f1c;
        case 0x4e5f20u: goto label_4e5f20;
        case 0x4e5f24u: goto label_4e5f24;
        case 0x4e5f28u: goto label_4e5f28;
        case 0x4e5f2cu: goto label_4e5f2c;
        case 0x4e5f30u: goto label_4e5f30;
        case 0x4e5f34u: goto label_4e5f34;
        case 0x4e5f38u: goto label_4e5f38;
        case 0x4e5f3cu: goto label_4e5f3c;
        case 0x4e5f40u: goto label_4e5f40;
        case 0x4e5f44u: goto label_4e5f44;
        case 0x4e5f48u: goto label_4e5f48;
        case 0x4e5f4cu: goto label_4e5f4c;
        case 0x4e5f50u: goto label_4e5f50;
        case 0x4e5f54u: goto label_4e5f54;
        case 0x4e5f58u: goto label_4e5f58;
        case 0x4e5f5cu: goto label_4e5f5c;
        case 0x4e5f60u: goto label_4e5f60;
        case 0x4e5f64u: goto label_4e5f64;
        case 0x4e5f68u: goto label_4e5f68;
        case 0x4e5f6cu: goto label_4e5f6c;
        case 0x4e5f70u: goto label_4e5f70;
        case 0x4e5f74u: goto label_4e5f74;
        case 0x4e5f78u: goto label_4e5f78;
        case 0x4e5f7cu: goto label_4e5f7c;
        case 0x4e5f80u: goto label_4e5f80;
        case 0x4e5f84u: goto label_4e5f84;
        case 0x4e5f88u: goto label_4e5f88;
        case 0x4e5f8cu: goto label_4e5f8c;
        case 0x4e5f90u: goto label_4e5f90;
        case 0x4e5f94u: goto label_4e5f94;
        case 0x4e5f98u: goto label_4e5f98;
        case 0x4e5f9cu: goto label_4e5f9c;
        case 0x4e5fa0u: goto label_4e5fa0;
        case 0x4e5fa4u: goto label_4e5fa4;
        case 0x4e5fa8u: goto label_4e5fa8;
        case 0x4e5facu: goto label_4e5fac;
        case 0x4e5fb0u: goto label_4e5fb0;
        case 0x4e5fb4u: goto label_4e5fb4;
        case 0x4e5fb8u: goto label_4e5fb8;
        case 0x4e5fbcu: goto label_4e5fbc;
        case 0x4e5fc0u: goto label_4e5fc0;
        case 0x4e5fc4u: goto label_4e5fc4;
        case 0x4e5fc8u: goto label_4e5fc8;
        case 0x4e5fccu: goto label_4e5fcc;
        case 0x4e5fd0u: goto label_4e5fd0;
        case 0x4e5fd4u: goto label_4e5fd4;
        case 0x4e5fd8u: goto label_4e5fd8;
        case 0x4e5fdcu: goto label_4e5fdc;
        case 0x4e5fe0u: goto label_4e5fe0;
        case 0x4e5fe4u: goto label_4e5fe4;
        case 0x4e5fe8u: goto label_4e5fe8;
        case 0x4e5fecu: goto label_4e5fec;
        case 0x4e5ff0u: goto label_4e5ff0;
        case 0x4e5ff4u: goto label_4e5ff4;
        case 0x4e5ff8u: goto label_4e5ff8;
        case 0x4e5ffcu: goto label_4e5ffc;
        case 0x4e6000u: goto label_4e6000;
        case 0x4e6004u: goto label_4e6004;
        case 0x4e6008u: goto label_4e6008;
        case 0x4e600cu: goto label_4e600c;
        case 0x4e6010u: goto label_4e6010;
        case 0x4e6014u: goto label_4e6014;
        case 0x4e6018u: goto label_4e6018;
        case 0x4e601cu: goto label_4e601c;
        case 0x4e6020u: goto label_4e6020;
        case 0x4e6024u: goto label_4e6024;
        case 0x4e6028u: goto label_4e6028;
        case 0x4e602cu: goto label_4e602c;
        case 0x4e6030u: goto label_4e6030;
        case 0x4e6034u: goto label_4e6034;
        case 0x4e6038u: goto label_4e6038;
        case 0x4e603cu: goto label_4e603c;
        case 0x4e6040u: goto label_4e6040;
        case 0x4e6044u: goto label_4e6044;
        case 0x4e6048u: goto label_4e6048;
        case 0x4e604cu: goto label_4e604c;
        case 0x4e6050u: goto label_4e6050;
        case 0x4e6054u: goto label_4e6054;
        case 0x4e6058u: goto label_4e6058;
        case 0x4e605cu: goto label_4e605c;
        case 0x4e6060u: goto label_4e6060;
        case 0x4e6064u: goto label_4e6064;
        case 0x4e6068u: goto label_4e6068;
        case 0x4e606cu: goto label_4e606c;
        case 0x4e6070u: goto label_4e6070;
        case 0x4e6074u: goto label_4e6074;
        case 0x4e6078u: goto label_4e6078;
        case 0x4e607cu: goto label_4e607c;
        case 0x4e6080u: goto label_4e6080;
        case 0x4e6084u: goto label_4e6084;
        case 0x4e6088u: goto label_4e6088;
        case 0x4e608cu: goto label_4e608c;
        case 0x4e6090u: goto label_4e6090;
        case 0x4e6094u: goto label_4e6094;
        case 0x4e6098u: goto label_4e6098;
        case 0x4e609cu: goto label_4e609c;
        case 0x4e60a0u: goto label_4e60a0;
        case 0x4e60a4u: goto label_4e60a4;
        case 0x4e60a8u: goto label_4e60a8;
        case 0x4e60acu: goto label_4e60ac;
        case 0x4e60b0u: goto label_4e60b0;
        case 0x4e60b4u: goto label_4e60b4;
        case 0x4e60b8u: goto label_4e60b8;
        case 0x4e60bcu: goto label_4e60bc;
        case 0x4e60c0u: goto label_4e60c0;
        case 0x4e60c4u: goto label_4e60c4;
        case 0x4e60c8u: goto label_4e60c8;
        case 0x4e60ccu: goto label_4e60cc;
        case 0x4e60d0u: goto label_4e60d0;
        case 0x4e60d4u: goto label_4e60d4;
        case 0x4e60d8u: goto label_4e60d8;
        case 0x4e60dcu: goto label_4e60dc;
        case 0x4e60e0u: goto label_4e60e0;
        case 0x4e60e4u: goto label_4e60e4;
        case 0x4e60e8u: goto label_4e60e8;
        case 0x4e60ecu: goto label_4e60ec;
        case 0x4e60f0u: goto label_4e60f0;
        case 0x4e60f4u: goto label_4e60f4;
        case 0x4e60f8u: goto label_4e60f8;
        case 0x4e60fcu: goto label_4e60fc;
        case 0x4e6100u: goto label_4e6100;
        case 0x4e6104u: goto label_4e6104;
        case 0x4e6108u: goto label_4e6108;
        case 0x4e610cu: goto label_4e610c;
        case 0x4e6110u: goto label_4e6110;
        case 0x4e6114u: goto label_4e6114;
        case 0x4e6118u: goto label_4e6118;
        case 0x4e611cu: goto label_4e611c;
        case 0x4e6120u: goto label_4e6120;
        case 0x4e6124u: goto label_4e6124;
        case 0x4e6128u: goto label_4e6128;
        case 0x4e612cu: goto label_4e612c;
        case 0x4e6130u: goto label_4e6130;
        case 0x4e6134u: goto label_4e6134;
        case 0x4e6138u: goto label_4e6138;
        case 0x4e613cu: goto label_4e613c;
        case 0x4e6140u: goto label_4e6140;
        case 0x4e6144u: goto label_4e6144;
        case 0x4e6148u: goto label_4e6148;
        case 0x4e614cu: goto label_4e614c;
        case 0x4e6150u: goto label_4e6150;
        case 0x4e6154u: goto label_4e6154;
        case 0x4e6158u: goto label_4e6158;
        case 0x4e615cu: goto label_4e615c;
        case 0x4e6160u: goto label_4e6160;
        case 0x4e6164u: goto label_4e6164;
        case 0x4e6168u: goto label_4e6168;
        case 0x4e616cu: goto label_4e616c;
        case 0x4e6170u: goto label_4e6170;
        case 0x4e6174u: goto label_4e6174;
        case 0x4e6178u: goto label_4e6178;
        case 0x4e617cu: goto label_4e617c;
        case 0x4e6180u: goto label_4e6180;
        case 0x4e6184u: goto label_4e6184;
        case 0x4e6188u: goto label_4e6188;
        case 0x4e618cu: goto label_4e618c;
        case 0x4e6190u: goto label_4e6190;
        case 0x4e6194u: goto label_4e6194;
        case 0x4e6198u: goto label_4e6198;
        case 0x4e619cu: goto label_4e619c;
        case 0x4e61a0u: goto label_4e61a0;
        case 0x4e61a4u: goto label_4e61a4;
        case 0x4e61a8u: goto label_4e61a8;
        case 0x4e61acu: goto label_4e61ac;
        case 0x4e61b0u: goto label_4e61b0;
        case 0x4e61b4u: goto label_4e61b4;
        case 0x4e61b8u: goto label_4e61b8;
        case 0x4e61bcu: goto label_4e61bc;
        case 0x4e61c0u: goto label_4e61c0;
        case 0x4e61c4u: goto label_4e61c4;
        case 0x4e61c8u: goto label_4e61c8;
        case 0x4e61ccu: goto label_4e61cc;
        case 0x4e61d0u: goto label_4e61d0;
        case 0x4e61d4u: goto label_4e61d4;
        case 0x4e61d8u: goto label_4e61d8;
        case 0x4e61dcu: goto label_4e61dc;
        case 0x4e61e0u: goto label_4e61e0;
        case 0x4e61e4u: goto label_4e61e4;
        case 0x4e61e8u: goto label_4e61e8;
        case 0x4e61ecu: goto label_4e61ec;
        case 0x4e61f0u: goto label_4e61f0;
        case 0x4e61f4u: goto label_4e61f4;
        case 0x4e61f8u: goto label_4e61f8;
        case 0x4e61fcu: goto label_4e61fc;
        case 0x4e6200u: goto label_4e6200;
        case 0x4e6204u: goto label_4e6204;
        case 0x4e6208u: goto label_4e6208;
        case 0x4e620cu: goto label_4e620c;
        case 0x4e6210u: goto label_4e6210;
        case 0x4e6214u: goto label_4e6214;
        case 0x4e6218u: goto label_4e6218;
        case 0x4e621cu: goto label_4e621c;
        case 0x4e6220u: goto label_4e6220;
        case 0x4e6224u: goto label_4e6224;
        case 0x4e6228u: goto label_4e6228;
        case 0x4e622cu: goto label_4e622c;
        case 0x4e6230u: goto label_4e6230;
        case 0x4e6234u: goto label_4e6234;
        case 0x4e6238u: goto label_4e6238;
        case 0x4e623cu: goto label_4e623c;
        case 0x4e6240u: goto label_4e6240;
        case 0x4e6244u: goto label_4e6244;
        case 0x4e6248u: goto label_4e6248;
        case 0x4e624cu: goto label_4e624c;
        case 0x4e6250u: goto label_4e6250;
        case 0x4e6254u: goto label_4e6254;
        case 0x4e6258u: goto label_4e6258;
        case 0x4e625cu: goto label_4e625c;
        case 0x4e6260u: goto label_4e6260;
        case 0x4e6264u: goto label_4e6264;
        case 0x4e6268u: goto label_4e6268;
        case 0x4e626cu: goto label_4e626c;
        case 0x4e6270u: goto label_4e6270;
        case 0x4e6274u: goto label_4e6274;
        case 0x4e6278u: goto label_4e6278;
        case 0x4e627cu: goto label_4e627c;
        case 0x4e6280u: goto label_4e6280;
        case 0x4e6284u: goto label_4e6284;
        case 0x4e6288u: goto label_4e6288;
        case 0x4e628cu: goto label_4e628c;
        case 0x4e6290u: goto label_4e6290;
        case 0x4e6294u: goto label_4e6294;
        case 0x4e6298u: goto label_4e6298;
        case 0x4e629cu: goto label_4e629c;
        case 0x4e62a0u: goto label_4e62a0;
        case 0x4e62a4u: goto label_4e62a4;
        case 0x4e62a8u: goto label_4e62a8;
        case 0x4e62acu: goto label_4e62ac;
        case 0x4e62b0u: goto label_4e62b0;
        case 0x4e62b4u: goto label_4e62b4;
        case 0x4e62b8u: goto label_4e62b8;
        case 0x4e62bcu: goto label_4e62bc;
        case 0x4e62c0u: goto label_4e62c0;
        case 0x4e62c4u: goto label_4e62c4;
        case 0x4e62c8u: goto label_4e62c8;
        case 0x4e62ccu: goto label_4e62cc;
        case 0x4e62d0u: goto label_4e62d0;
        case 0x4e62d4u: goto label_4e62d4;
        case 0x4e62d8u: goto label_4e62d8;
        case 0x4e62dcu: goto label_4e62dc;
        case 0x4e62e0u: goto label_4e62e0;
        case 0x4e62e4u: goto label_4e62e4;
        case 0x4e62e8u: goto label_4e62e8;
        case 0x4e62ecu: goto label_4e62ec;
        case 0x4e62f0u: goto label_4e62f0;
        case 0x4e62f4u: goto label_4e62f4;
        case 0x4e62f8u: goto label_4e62f8;
        case 0x4e62fcu: goto label_4e62fc;
        case 0x4e6300u: goto label_4e6300;
        case 0x4e6304u: goto label_4e6304;
        case 0x4e6308u: goto label_4e6308;
        case 0x4e630cu: goto label_4e630c;
        case 0x4e6310u: goto label_4e6310;
        case 0x4e6314u: goto label_4e6314;
        case 0x4e6318u: goto label_4e6318;
        case 0x4e631cu: goto label_4e631c;
        case 0x4e6320u: goto label_4e6320;
        case 0x4e6324u: goto label_4e6324;
        case 0x4e6328u: goto label_4e6328;
        case 0x4e632cu: goto label_4e632c;
        case 0x4e6330u: goto label_4e6330;
        case 0x4e6334u: goto label_4e6334;
        case 0x4e6338u: goto label_4e6338;
        case 0x4e633cu: goto label_4e633c;
        case 0x4e6340u: goto label_4e6340;
        case 0x4e6344u: goto label_4e6344;
        case 0x4e6348u: goto label_4e6348;
        case 0x4e634cu: goto label_4e634c;
        case 0x4e6350u: goto label_4e6350;
        case 0x4e6354u: goto label_4e6354;
        case 0x4e6358u: goto label_4e6358;
        case 0x4e635cu: goto label_4e635c;
        case 0x4e6360u: goto label_4e6360;
        case 0x4e6364u: goto label_4e6364;
        case 0x4e6368u: goto label_4e6368;
        case 0x4e636cu: goto label_4e636c;
        default: break;
    }

    ctx->pc = 0x4e5910u;

label_4e5910:
    // 0x4e5910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e5910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e5914:
    // 0x4e5914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e5914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e5918:
    // 0x4e5918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e5918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e591c:
    // 0x4e591c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e5920:
    // 0x4e5920: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e5920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e5924:
    // 0x4e5924: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4e5928:
    if (ctx->pc == 0x4E5928u) {
        ctx->pc = 0x4E5928u;
            // 0x4e5928: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E592Cu;
        goto label_4e592c;
    }
    ctx->pc = 0x4E5924u;
    {
        const bool branch_taken_0x4e5924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5924u;
            // 0x4e5928: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5924) {
            ctx->pc = 0x4E5A58u;
            goto label_4e5a58;
        }
    }
    ctx->pc = 0x4E592Cu;
label_4e592c:
    // 0x4e592c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e592cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e5930:
    // 0x4e5930: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e5930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e5934:
    // 0x4e5934: 0x24633a70  addiu       $v1, $v1, 0x3A70
    ctx->pc = 0x4e5934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14960));
label_4e5938:
    // 0x4e5938: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e5938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4e593c:
    // 0x4e593c: 0x24423aa8  addiu       $v0, $v0, 0x3AA8
    ctx->pc = 0x4e593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15016));
label_4e5940:
    // 0x4e5940: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e5940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e5944:
    // 0x4e5944: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4e5944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4e5948:
    // 0x4e5948: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4e5948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4e594c:
    // 0x4e594c: 0xc0407c0  jal         func_101F00
label_4e5950:
    if (ctx->pc == 0x4E5950u) {
        ctx->pc = 0x4E5950u;
            // 0x4e5950: 0x24a55a70  addiu       $a1, $a1, 0x5A70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23152));
        ctx->pc = 0x4E5954u;
        goto label_4e5954;
    }
    ctx->pc = 0x4E594Cu;
    SET_GPR_U32(ctx, 31, 0x4E5954u);
    ctx->pc = 0x4E5950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E594Cu;
            // 0x4e5950: 0x24a55a70  addiu       $a1, $a1, 0x5A70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5954u; }
        if (ctx->pc != 0x4E5954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5954u; }
        if (ctx->pc != 0x4E5954u) { return; }
    }
    ctx->pc = 0x4E5954u;
label_4e5954:
    // 0x4e5954: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4e5954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4e5958:
    // 0x4e5958: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4e595c:
    if (ctx->pc == 0x4E595Cu) {
        ctx->pc = 0x4E595Cu;
            // 0x4e595c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4E5960u;
        goto label_4e5960;
    }
    ctx->pc = 0x4E5958u;
    {
        const bool branch_taken_0x4e5958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5958) {
            ctx->pc = 0x4E595Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5958u;
            // 0x4e595c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E596Cu;
            goto label_4e596c;
        }
    }
    ctx->pc = 0x4E5960u;
label_4e5960:
    // 0x4e5960: 0xc07507c  jal         func_1D41F0
label_4e5964:
    if (ctx->pc == 0x4E5964u) {
        ctx->pc = 0x4E5964u;
            // 0x4e5964: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4E5968u;
        goto label_4e5968;
    }
    ctx->pc = 0x4E5960u;
    SET_GPR_U32(ctx, 31, 0x4E5968u);
    ctx->pc = 0x4E5964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5960u;
            // 0x4e5964: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5968u; }
        if (ctx->pc != 0x4E5968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5968u; }
        if (ctx->pc != 0x4E5968u) { return; }
    }
    ctx->pc = 0x4E5968u;
label_4e5968:
    // 0x4e5968: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4e5968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4e596c:
    // 0x4e596c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4e5970:
    if (ctx->pc == 0x4E5970u) {
        ctx->pc = 0x4E5970u;
            // 0x4e5970: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4E5974u;
        goto label_4e5974;
    }
    ctx->pc = 0x4E596Cu;
    {
        const bool branch_taken_0x4e596c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e596c) {
            ctx->pc = 0x4E5970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E596Cu;
            // 0x4e5970: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E599Cu;
            goto label_4e599c;
        }
    }
    ctx->pc = 0x4E5974u;
label_4e5974:
    // 0x4e5974: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4e5978:
    if (ctx->pc == 0x4E5978u) {
        ctx->pc = 0x4E597Cu;
        goto label_4e597c;
    }
    ctx->pc = 0x4E5974u;
    {
        const bool branch_taken_0x4e5974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5974) {
            ctx->pc = 0x4E5998u;
            goto label_4e5998;
        }
    }
    ctx->pc = 0x4E597Cu;
label_4e597c:
    // 0x4e597c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e5980:
    if (ctx->pc == 0x4E5980u) {
        ctx->pc = 0x4E5984u;
        goto label_4e5984;
    }
    ctx->pc = 0x4E597Cu;
    {
        const bool branch_taken_0x4e597c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e597c) {
            ctx->pc = 0x4E5998u;
            goto label_4e5998;
        }
    }
    ctx->pc = 0x4E5984u;
label_4e5984:
    // 0x4e5984: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4e5984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4e5988:
    // 0x4e5988: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4e598c:
    if (ctx->pc == 0x4E598Cu) {
        ctx->pc = 0x4E5990u;
        goto label_4e5990;
    }
    ctx->pc = 0x4E5988u;
    {
        const bool branch_taken_0x4e5988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5988) {
            ctx->pc = 0x4E5998u;
            goto label_4e5998;
        }
    }
    ctx->pc = 0x4E5990u;
label_4e5990:
    // 0x4e5990: 0xc0400a8  jal         func_1002A0
label_4e5994:
    if (ctx->pc == 0x4E5994u) {
        ctx->pc = 0x4E5998u;
        goto label_4e5998;
    }
    ctx->pc = 0x4E5990u;
    SET_GPR_U32(ctx, 31, 0x4E5998u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5998u; }
        if (ctx->pc != 0x4E5998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5998u; }
        if (ctx->pc != 0x4E5998u) { return; }
    }
    ctx->pc = 0x4E5998u;
label_4e5998:
    // 0x4e5998: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4e5998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4e599c:
    // 0x4e599c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4e59a0:
    if (ctx->pc == 0x4E59A0u) {
        ctx->pc = 0x4E59A0u;
            // 0x4e59a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4E59A4u;
        goto label_4e59a4;
    }
    ctx->pc = 0x4E599Cu;
    {
        const bool branch_taken_0x4e599c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e599c) {
            ctx->pc = 0x4E59A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E599Cu;
            // 0x4e59a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E59CCu;
            goto label_4e59cc;
        }
    }
    ctx->pc = 0x4E59A4u;
label_4e59a4:
    // 0x4e59a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4e59a8:
    if (ctx->pc == 0x4E59A8u) {
        ctx->pc = 0x4E59ACu;
        goto label_4e59ac;
    }
    ctx->pc = 0x4E59A4u;
    {
        const bool branch_taken_0x4e59a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e59a4) {
            ctx->pc = 0x4E59C8u;
            goto label_4e59c8;
        }
    }
    ctx->pc = 0x4E59ACu;
label_4e59ac:
    // 0x4e59ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e59b0:
    if (ctx->pc == 0x4E59B0u) {
        ctx->pc = 0x4E59B4u;
        goto label_4e59b4;
    }
    ctx->pc = 0x4E59ACu;
    {
        const bool branch_taken_0x4e59ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e59ac) {
            ctx->pc = 0x4E59C8u;
            goto label_4e59c8;
        }
    }
    ctx->pc = 0x4E59B4u;
label_4e59b4:
    // 0x4e59b4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4e59b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4e59b8:
    // 0x4e59b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4e59bc:
    if (ctx->pc == 0x4E59BCu) {
        ctx->pc = 0x4E59C0u;
        goto label_4e59c0;
    }
    ctx->pc = 0x4E59B8u;
    {
        const bool branch_taken_0x4e59b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e59b8) {
            ctx->pc = 0x4E59C8u;
            goto label_4e59c8;
        }
    }
    ctx->pc = 0x4E59C0u;
label_4e59c0:
    // 0x4e59c0: 0xc0400a8  jal         func_1002A0
label_4e59c4:
    if (ctx->pc == 0x4E59C4u) {
        ctx->pc = 0x4E59C8u;
        goto label_4e59c8;
    }
    ctx->pc = 0x4E59C0u;
    SET_GPR_U32(ctx, 31, 0x4E59C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E59C8u; }
        if (ctx->pc != 0x4E59C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E59C8u; }
        if (ctx->pc != 0x4E59C8u) { return; }
    }
    ctx->pc = 0x4E59C8u;
label_4e59c8:
    // 0x4e59c8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4e59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4e59cc:
    // 0x4e59cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e59d0:
    if (ctx->pc == 0x4E59D0u) {
        ctx->pc = 0x4E59D4u;
        goto label_4e59d4;
    }
    ctx->pc = 0x4E59CCu;
    {
        const bool branch_taken_0x4e59cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e59cc) {
            ctx->pc = 0x4E59E8u;
            goto label_4e59e8;
        }
    }
    ctx->pc = 0x4E59D4u;
label_4e59d4:
    // 0x4e59d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e59d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e59d8:
    // 0x4e59d8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e59dc:
    // 0x4e59dc: 0x24633a58  addiu       $v1, $v1, 0x3A58
    ctx->pc = 0x4e59dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14936));
label_4e59e0:
    // 0x4e59e0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4e59e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4e59e4:
    // 0x4e59e4: 0xac40aaa0  sw          $zero, -0x5560($v0)
    ctx->pc = 0x4e59e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945440), GPR_U32(ctx, 0));
label_4e59e8:
    // 0x4e59e8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4e59ec:
    if (ctx->pc == 0x4E59ECu) {
        ctx->pc = 0x4E59ECu;
            // 0x4e59ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4E59F0u;
        goto label_4e59f0;
    }
    ctx->pc = 0x4E59E8u;
    {
        const bool branch_taken_0x4e59e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e59e8) {
            ctx->pc = 0x4E59ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E59E8u;
            // 0x4e59ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E5A44u;
            goto label_4e5a44;
        }
    }
    ctx->pc = 0x4E59F0u;
label_4e59f0:
    // 0x4e59f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e59f4:
    // 0x4e59f4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4e59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4e59f8:
    // 0x4e59f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e59f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4e59fc:
    // 0x4e59fc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4e59fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4e5a00:
    // 0x4e5a00: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e5a04:
    if (ctx->pc == 0x4E5A04u) {
        ctx->pc = 0x4E5A04u;
            // 0x4e5a04: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4E5A08u;
        goto label_4e5a08;
    }
    ctx->pc = 0x4E5A00u;
    {
        const bool branch_taken_0x4e5a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5a00) {
            ctx->pc = 0x4E5A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5A00u;
            // 0x4e5a04: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E5A1Cu;
            goto label_4e5a1c;
        }
    }
    ctx->pc = 0x4E5A08u;
label_4e5a08:
    // 0x4e5a08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e5a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e5a0c:
    // 0x4e5a0c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e5a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e5a10:
    // 0x4e5a10: 0x320f809  jalr        $t9
label_4e5a14:
    if (ctx->pc == 0x4E5A14u) {
        ctx->pc = 0x4E5A14u;
            // 0x4e5a14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E5A18u;
        goto label_4e5a18;
    }
    ctx->pc = 0x4E5A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5A18u);
        ctx->pc = 0x4E5A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5A10u;
            // 0x4e5a14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5A18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5A18u; }
            if (ctx->pc != 0x4E5A18u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5A18u;
label_4e5a18:
    // 0x4e5a18: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4e5a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4e5a1c:
    // 0x4e5a1c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e5a20:
    if (ctx->pc == 0x4E5A20u) {
        ctx->pc = 0x4E5A20u;
            // 0x4e5a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5A24u;
        goto label_4e5a24;
    }
    ctx->pc = 0x4E5A1Cu;
    {
        const bool branch_taken_0x4e5a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5a1c) {
            ctx->pc = 0x4E5A20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5A1Cu;
            // 0x4e5a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E5A38u;
            goto label_4e5a38;
        }
    }
    ctx->pc = 0x4E5A24u;
label_4e5a24:
    // 0x4e5a24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e5a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e5a28:
    // 0x4e5a28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e5a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e5a2c:
    // 0x4e5a2c: 0x320f809  jalr        $t9
label_4e5a30:
    if (ctx->pc == 0x4E5A30u) {
        ctx->pc = 0x4E5A30u;
            // 0x4e5a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E5A34u;
        goto label_4e5a34;
    }
    ctx->pc = 0x4E5A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5A34u);
        ctx->pc = 0x4E5A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5A2Cu;
            // 0x4e5a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5A34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5A34u; }
            if (ctx->pc != 0x4E5A34u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5A34u;
label_4e5a34:
    // 0x4e5a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e5a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e5a38:
    // 0x4e5a38: 0xc075bf8  jal         func_1D6FE0
label_4e5a3c:
    if (ctx->pc == 0x4E5A3Cu) {
        ctx->pc = 0x4E5A3Cu;
            // 0x4e5a3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5A40u;
        goto label_4e5a40;
    }
    ctx->pc = 0x4E5A38u;
    SET_GPR_U32(ctx, 31, 0x4E5A40u);
    ctx->pc = 0x4E5A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5A38u;
            // 0x4e5a3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5A40u; }
        if (ctx->pc != 0x4E5A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5A40u; }
        if (ctx->pc != 0x4E5A40u) { return; }
    }
    ctx->pc = 0x4E5A40u;
label_4e5a40:
    // 0x4e5a40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4e5a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4e5a44:
    // 0x4e5a44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e5a44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e5a48:
    // 0x4e5a48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e5a4c:
    if (ctx->pc == 0x4E5A4Cu) {
        ctx->pc = 0x4E5A4Cu;
            // 0x4e5a4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5A50u;
        goto label_4e5a50;
    }
    ctx->pc = 0x4E5A48u;
    {
        const bool branch_taken_0x4e5a48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e5a48) {
            ctx->pc = 0x4E5A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5A48u;
            // 0x4e5a4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E5A5Cu;
            goto label_4e5a5c;
        }
    }
    ctx->pc = 0x4E5A50u;
label_4e5a50:
    // 0x4e5a50: 0xc0400a8  jal         func_1002A0
label_4e5a54:
    if (ctx->pc == 0x4E5A54u) {
        ctx->pc = 0x4E5A54u;
            // 0x4e5a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5A58u;
        goto label_4e5a58;
    }
    ctx->pc = 0x4E5A50u;
    SET_GPR_U32(ctx, 31, 0x4E5A58u);
    ctx->pc = 0x4E5A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5A50u;
            // 0x4e5a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5A58u; }
        if (ctx->pc != 0x4E5A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5A58u; }
        if (ctx->pc != 0x4E5A58u) { return; }
    }
    ctx->pc = 0x4E5A58u;
label_4e5a58:
    // 0x4e5a58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e5a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e5a5c:
    // 0x4e5a5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e5a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e5a60:
    // 0x4e5a60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e5a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e5a64:
    // 0x4e5a64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e5a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e5a68:
    // 0x4e5a68: 0x3e00008  jr          $ra
label_4e5a6c:
    if (ctx->pc == 0x4E5A6Cu) {
        ctx->pc = 0x4E5A6Cu;
            // 0x4e5a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E5A70u;
        goto label_4e5a70;
    }
    ctx->pc = 0x4E5A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5A68u;
            // 0x4e5a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E5A70u;
label_4e5a70:
    // 0x4e5a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e5a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e5a74:
    // 0x4e5a74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e5a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e5a78:
    // 0x4e5a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e5a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e5a7c:
    // 0x4e5a7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e5a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e5a80:
    // 0x4e5a80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e5a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e5a84:
    // 0x4e5a84: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4e5a88:
    if (ctx->pc == 0x4E5A88u) {
        ctx->pc = 0x4E5A88u;
            // 0x4e5a88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5A8Cu;
        goto label_4e5a8c;
    }
    ctx->pc = 0x4E5A84u;
    {
        const bool branch_taken_0x4e5a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5A84u;
            // 0x4e5a88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5a84) {
            ctx->pc = 0x4E5B4Cu;
            goto label_4e5b4c;
        }
    }
    ctx->pc = 0x4E5A8Cu;
label_4e5a8c:
    // 0x4e5a8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e5a90:
    // 0x4e5a90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e5a94:
    // 0x4e5a94: 0x24633b10  addiu       $v1, $v1, 0x3B10
    ctx->pc = 0x4e5a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15120));
label_4e5a98:
    // 0x4e5a98: 0x24423b50  addiu       $v0, $v0, 0x3B50
    ctx->pc = 0x4e5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15184));
label_4e5a9c:
    // 0x4e5a9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e5a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e5aa0:
    // 0x4e5aa0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4e5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4e5aa4:
    // 0x4e5aa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e5aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e5aa8:
    // 0x4e5aa8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4e5aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4e5aac:
    // 0x4e5aac: 0x320f809  jalr        $t9
label_4e5ab0:
    if (ctx->pc == 0x4E5AB0u) {
        ctx->pc = 0x4E5AB4u;
        goto label_4e5ab4;
    }
    ctx->pc = 0x4E5AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5AB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5AB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5AB4u; }
            if (ctx->pc != 0x4E5AB4u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5AB4u;
label_4e5ab4:
    // 0x4e5ab4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4e5ab8:
    if (ctx->pc == 0x4E5AB8u) {
        ctx->pc = 0x4E5AB8u;
            // 0x4e5ab8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4E5ABCu;
        goto label_4e5abc;
    }
    ctx->pc = 0x4E5AB4u;
    {
        const bool branch_taken_0x4e5ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5ab4) {
            ctx->pc = 0x4E5AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5AB4u;
            // 0x4e5ab8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E5B38u;
            goto label_4e5b38;
        }
    }
    ctx->pc = 0x4E5ABCu;
label_4e5abc:
    // 0x4e5abc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e5ac0:
    // 0x4e5ac0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e5ac4:
    // 0x4e5ac4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4e5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4e5ac8:
    // 0x4e5ac8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4e5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4e5acc:
    // 0x4e5acc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e5accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e5ad0:
    // 0x4e5ad0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4e5ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4e5ad4:
    // 0x4e5ad4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4e5ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4e5ad8:
    // 0x4e5ad8: 0xc0aecc4  jal         func_2BB310
label_4e5adc:
    if (ctx->pc == 0x4E5ADCu) {
        ctx->pc = 0x4E5ADCu;
            // 0x4e5adc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E5AE0u;
        goto label_4e5ae0;
    }
    ctx->pc = 0x4E5AD8u;
    SET_GPR_U32(ctx, 31, 0x4E5AE0u);
    ctx->pc = 0x4E5ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5AD8u;
            // 0x4e5adc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5AE0u; }
        if (ctx->pc != 0x4E5AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5AE0u; }
        if (ctx->pc != 0x4E5AE0u) { return; }
    }
    ctx->pc = 0x4E5AE0u;
label_4e5ae0:
    // 0x4e5ae0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4e5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4e5ae4:
    // 0x4e5ae4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4e5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4e5ae8:
    // 0x4e5ae8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e5aec:
    if (ctx->pc == 0x4E5AECu) {
        ctx->pc = 0x4E5AECu;
            // 0x4e5aec: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4E5AF0u;
        goto label_4e5af0;
    }
    ctx->pc = 0x4E5AE8u;
    {
        const bool branch_taken_0x4e5ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5ae8) {
            ctx->pc = 0x4E5AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5AE8u;
            // 0x4e5aec: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E5B04u;
            goto label_4e5b04;
        }
    }
    ctx->pc = 0x4E5AF0u;
label_4e5af0:
    // 0x4e5af0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4e5af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4e5af4:
    // 0x4e5af4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e5af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e5af8:
    // 0x4e5af8: 0x320f809  jalr        $t9
label_4e5afc:
    if (ctx->pc == 0x4E5AFCu) {
        ctx->pc = 0x4E5AFCu;
            // 0x4e5afc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E5B00u;
        goto label_4e5b00;
    }
    ctx->pc = 0x4E5AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5B00u);
        ctx->pc = 0x4E5AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5AF8u;
            // 0x4e5afc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5B00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5B00u; }
            if (ctx->pc != 0x4E5B00u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5B00u;
label_4e5b00:
    // 0x4e5b00: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4e5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4e5b04:
    // 0x4e5b04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4e5b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e5b08:
    // 0x4e5b08: 0xc0aec9c  jal         func_2BB270
label_4e5b0c:
    if (ctx->pc == 0x4E5B0Cu) {
        ctx->pc = 0x4E5B0Cu;
            // 0x4e5b0c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4E5B10u;
        goto label_4e5b10;
    }
    ctx->pc = 0x4E5B08u;
    SET_GPR_U32(ctx, 31, 0x4E5B10u);
    ctx->pc = 0x4E5B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5B08u;
            // 0x4e5b0c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5B10u; }
        if (ctx->pc != 0x4E5B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5B10u; }
        if (ctx->pc != 0x4E5B10u) { return; }
    }
    ctx->pc = 0x4E5B10u;
label_4e5b10:
    // 0x4e5b10: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4e5b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4e5b14:
    // 0x4e5b14: 0xc0aec88  jal         func_2BB220
label_4e5b18:
    if (ctx->pc == 0x4E5B18u) {
        ctx->pc = 0x4E5B18u;
            // 0x4e5b18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4E5B1Cu;
        goto label_4e5b1c;
    }
    ctx->pc = 0x4E5B14u;
    SET_GPR_U32(ctx, 31, 0x4E5B1Cu);
    ctx->pc = 0x4E5B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5B14u;
            // 0x4e5b18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5B1Cu; }
        if (ctx->pc != 0x4E5B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5B1Cu; }
        if (ctx->pc != 0x4E5B1Cu) { return; }
    }
    ctx->pc = 0x4E5B1Cu;
label_4e5b1c:
    // 0x4e5b1c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4e5b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4e5b20:
    // 0x4e5b20: 0xc0aec0c  jal         func_2BB030
label_4e5b24:
    if (ctx->pc == 0x4E5B24u) {
        ctx->pc = 0x4E5B24u;
            // 0x4e5b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5B28u;
        goto label_4e5b28;
    }
    ctx->pc = 0x4E5B20u;
    SET_GPR_U32(ctx, 31, 0x4E5B28u);
    ctx->pc = 0x4E5B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5B20u;
            // 0x4e5b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5B28u; }
        if (ctx->pc != 0x4E5B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5B28u; }
        if (ctx->pc != 0x4E5B28u) { return; }
    }
    ctx->pc = 0x4E5B28u;
label_4e5b28:
    // 0x4e5b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e5b2c:
    // 0x4e5b2c: 0xc0aeaa8  jal         func_2BAAA0
label_4e5b30:
    if (ctx->pc == 0x4E5B30u) {
        ctx->pc = 0x4E5B30u;
            // 0x4e5b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5B34u;
        goto label_4e5b34;
    }
    ctx->pc = 0x4E5B2Cu;
    SET_GPR_U32(ctx, 31, 0x4E5B34u);
    ctx->pc = 0x4E5B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5B2Cu;
            // 0x4e5b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5B34u; }
        if (ctx->pc != 0x4E5B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5B34u; }
        if (ctx->pc != 0x4E5B34u) { return; }
    }
    ctx->pc = 0x4E5B34u;
label_4e5b34:
    // 0x4e5b34: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4e5b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4e5b38:
    // 0x4e5b38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e5b38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e5b3c:
    // 0x4e5b3c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e5b40:
    if (ctx->pc == 0x4E5B40u) {
        ctx->pc = 0x4E5B40u;
            // 0x4e5b40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5B44u;
        goto label_4e5b44;
    }
    ctx->pc = 0x4E5B3Cu;
    {
        const bool branch_taken_0x4e5b3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e5b3c) {
            ctx->pc = 0x4E5B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5B3Cu;
            // 0x4e5b40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E5B50u;
            goto label_4e5b50;
        }
    }
    ctx->pc = 0x4E5B44u;
label_4e5b44:
    // 0x4e5b44: 0xc0400a8  jal         func_1002A0
label_4e5b48:
    if (ctx->pc == 0x4E5B48u) {
        ctx->pc = 0x4E5B48u;
            // 0x4e5b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5B4Cu;
        goto label_4e5b4c;
    }
    ctx->pc = 0x4E5B44u;
    SET_GPR_U32(ctx, 31, 0x4E5B4Cu);
    ctx->pc = 0x4E5B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5B44u;
            // 0x4e5b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5B4Cu; }
        if (ctx->pc != 0x4E5B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5B4Cu; }
        if (ctx->pc != 0x4E5B4Cu) { return; }
    }
    ctx->pc = 0x4E5B4Cu;
label_4e5b4c:
    // 0x4e5b4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e5b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e5b50:
    // 0x4e5b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e5b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e5b54:
    // 0x4e5b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e5b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e5b58:
    // 0x4e5b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e5b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e5b5c:
    // 0x4e5b5c: 0x3e00008  jr          $ra
label_4e5b60:
    if (ctx->pc == 0x4E5B60u) {
        ctx->pc = 0x4E5B60u;
            // 0x4e5b60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E5B64u;
        goto label_4e5b64;
    }
    ctx->pc = 0x4E5B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5B5Cu;
            // 0x4e5b60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E5B64u;
label_4e5b64:
    // 0x4e5b64: 0x0  nop
    ctx->pc = 0x4e5b64u;
    // NOP
label_4e5b68:
    // 0x4e5b68: 0x0  nop
    ctx->pc = 0x4e5b68u;
    // NOP
label_4e5b6c:
    // 0x4e5b6c: 0x0  nop
    ctx->pc = 0x4e5b6cu;
    // NOP
label_4e5b70:
    // 0x4e5b70: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x4e5b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
label_4e5b74:
    // 0x4e5b74: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4e5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4e5b78:
    // 0x4e5b78: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4e5b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4e5b7c:
    // 0x4e5b7c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4e5b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4e5b80:
    // 0x4e5b80: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4e5b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4e5b84:
    // 0x4e5b84: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4e5b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4e5b88:
    // 0x4e5b88: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4e5b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4e5b8c:
    // 0x4e5b8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e5b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4e5b90:
    // 0x4e5b90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4e5b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4e5b94:
    // 0x4e5b94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e5b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e5b98:
    // 0x4e5b98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e5b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e5b9c:
    // 0x4e5b9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e5b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4e5ba0:
    // 0x4e5ba0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4e5ba0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4e5ba4:
    // 0x4e5ba4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4e5ba4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4e5ba8:
    // 0x4e5ba8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e5ba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4e5bac:
    // 0x4e5bac: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4e5bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4e5bb0:
    // 0x4e5bb0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4e5bb0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e5bb4:
    // 0x4e5bb4: 0x8c9200a0  lw          $s2, 0xA0($a0)
    ctx->pc = 0x4e5bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_4e5bb8:
    // 0x4e5bb8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4e5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e5bbc:
    // 0x4e5bbc: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4e5bc0:
    if (ctx->pc == 0x4E5BC0u) {
        ctx->pc = 0x4E5BC0u;
            // 0x4e5bc0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5BC4u;
        goto label_4e5bc4;
    }
    ctx->pc = 0x4E5BBCu;
    {
        const bool branch_taken_0x4e5bbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E5BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5BBCu;
            // 0x4e5bc0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5bbc) {
            ctx->pc = 0x4E5C00u;
            goto label_4e5c00;
        }
    }
    ctx->pc = 0x4E5BC4u;
label_4e5bc4:
    // 0x4e5bc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e5bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e5bc8:
    // 0x4e5bc8: 0x50a301da  beql        $a1, $v1, . + 4 + (0x1DA << 2)
label_4e5bcc:
    if (ctx->pc == 0x4E5BCCu) {
        ctx->pc = 0x4E5BCCu;
            // 0x4e5bcc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4E5BD0u;
        goto label_4e5bd0;
    }
    ctx->pc = 0x4E5BC8u;
    {
        const bool branch_taken_0x4e5bc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e5bc8) {
            ctx->pc = 0x4E5BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5BC8u;
            // 0x4e5bcc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E6334u;
            goto label_4e6334;
        }
    }
    ctx->pc = 0x4E5BD0u;
label_4e5bd0:
    // 0x4e5bd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e5bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e5bd4:
    // 0x4e5bd4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4e5bd8:
    if (ctx->pc == 0x4E5BD8u) {
        ctx->pc = 0x4E5BD8u;
            // 0x4e5bd8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E5BDCu;
        goto label_4e5bdc;
    }
    ctx->pc = 0x4E5BD4u;
    {
        const bool branch_taken_0x4e5bd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e5bd4) {
            ctx->pc = 0x4E5BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5BD4u;
            // 0x4e5bd8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E5BE4u;
            goto label_4e5be4;
        }
    }
    ctx->pc = 0x4E5BDCu;
label_4e5bdc:
    // 0x4e5bdc: 0x100001d4  b           . + 4 + (0x1D4 << 2)
label_4e5be0:
    if (ctx->pc == 0x4E5BE0u) {
        ctx->pc = 0x4E5BE4u;
        goto label_4e5be4;
    }
    ctx->pc = 0x4E5BDCu;
    {
        const bool branch_taken_0x4e5bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5bdc) {
            ctx->pc = 0x4E6330u;
            goto label_4e6330;
        }
    }
    ctx->pc = 0x4E5BE4u;
label_4e5be4:
    // 0x4e5be4: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4e5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4e5be8:
    // 0x4e5be8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4e5be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4e5bec:
    // 0x4e5bec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4e5becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4e5bf0:
    // 0x4e5bf0: 0x320f809  jalr        $t9
label_4e5bf4:
    if (ctx->pc == 0x4E5BF4u) {
        ctx->pc = 0x4E5BF4u;
            // 0x4e5bf4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4E5BF8u;
        goto label_4e5bf8;
    }
    ctx->pc = 0x4E5BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5BF8u);
        ctx->pc = 0x4E5BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5BF0u;
            // 0x4e5bf4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5BF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5BF8u; }
            if (ctx->pc != 0x4E5BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5BF8u;
label_4e5bf8:
    // 0x4e5bf8: 0x100001cd  b           . + 4 + (0x1CD << 2)
label_4e5bfc:
    if (ctx->pc == 0x4E5BFCu) {
        ctx->pc = 0x4E5C00u;
        goto label_4e5c00;
    }
    ctx->pc = 0x4E5BF8u;
    {
        const bool branch_taken_0x4e5bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5bf8) {
            ctx->pc = 0x4E6330u;
            goto label_4e6330;
        }
    }
    ctx->pc = 0x4E5C00u;
label_4e5c00:
    // 0x4e5c00: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x4e5c00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4e5c04:
    // 0x4e5c04: 0x122001ca  beqz        $s1, . + 4 + (0x1CA << 2)
label_4e5c08:
    if (ctx->pc == 0x4E5C08u) {
        ctx->pc = 0x4E5C0Cu;
        goto label_4e5c0c;
    }
    ctx->pc = 0x4E5C04u;
    {
        const bool branch_taken_0x4e5c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5c04) {
            ctx->pc = 0x4E6330u;
            goto label_4e6330;
        }
    }
    ctx->pc = 0x4E5C0Cu;
label_4e5c0c:
    // 0x4e5c0c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4e5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4e5c10:
    // 0x4e5c10: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4e5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4e5c14:
    // 0x4e5c14: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4e5c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4e5c18:
    // 0x4e5c18: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x4e5c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4e5c1c:
    // 0x4e5c1c: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4e5c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4e5c20:
    // 0x4e5c20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e5c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e5c24:
    // 0x4e5c24: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4e5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4e5c28:
    // 0x4e5c28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e5c2c:
    // 0x4e5c2c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4e5c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e5c30:
    // 0x4e5c30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e5c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4e5c34:
    // 0x4e5c34: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4e5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e5c38:
    // 0x4e5c38: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4e5c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4e5c3c:
    // 0x4e5c3c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x4e5c3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4e5c40:
    // 0x4e5c40: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4e5c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4e5c44:
    // 0x4e5c44: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x4e5c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_4e5c48:
    // 0x4e5c48: 0xc04e738  jal         func_139CE0
label_4e5c4c:
    if (ctx->pc == 0x4E5C4Cu) {
        ctx->pc = 0x4E5C4Cu;
            // 0x4e5c4c: 0x26b00084  addiu       $s0, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->pc = 0x4E5C50u;
        goto label_4e5c50;
    }
    ctx->pc = 0x4E5C48u;
    SET_GPR_U32(ctx, 31, 0x4E5C50u);
    ctx->pc = 0x4E5C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5C48u;
            // 0x4e5c4c: 0x26b00084  addiu       $s0, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5C50u; }
        if (ctx->pc != 0x4E5C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5C50u; }
        if (ctx->pc != 0x4E5C50u) { return; }
    }
    ctx->pc = 0x4E5C50u;
label_4e5c50:
    // 0x4e5c50: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x4e5c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_4e5c54:
    // 0x4e5c54: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e5c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4e5c58:
    // 0x4e5c58: 0xc4958350  lwc1        $f21, -0x7CB0($a0)
    ctx->pc = 0x4e5c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294935376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4e5c5c:
    // 0x4e5c5c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4e5c5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5c60:
    // 0x4e5c60: 0xc4748350  lwc1        $f20, -0x7CB0($v1)
    ctx->pc = 0x4e5c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294935376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e5c64:
    // 0x4e5c64: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4e5c64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5c68:
    // 0x4e5c68: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x4e5c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4e5c6c:
    // 0x4e5c6c: 0x27a4025c  addiu       $a0, $sp, 0x25C
    ctx->pc = 0x4e5c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_4e5c70:
    // 0x4e5c70: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x4e5c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_4e5c74:
    // 0x4e5c74: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x4e5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_4e5c78:
    // 0x4e5c78: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x4e5c78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e5c7c:
    // 0x4e5c7c: 0xafa40258  sw          $a0, 0x258($sp)
    ctx->pc = 0x4e5c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 4));
label_4e5c80:
    // 0x4e5c80: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x4e5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
label_4e5c84:
    // 0x4e5c84: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x4e5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_4e5c88:
    // 0x4e5c88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4e5c8c:
    if (ctx->pc == 0x4E5C8Cu) {
        ctx->pc = 0x4E5C90u;
        goto label_4e5c90;
    }
    ctx->pc = 0x4E5C88u;
    {
        const bool branch_taken_0x4e5c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5c88) {
            ctx->pc = 0x4E5C98u;
            goto label_4e5c98;
        }
    }
    ctx->pc = 0x4E5C90u;
label_4e5c90:
    // 0x4e5c90: 0x10000053  b           . + 4 + (0x53 << 2)
label_4e5c94:
    if (ctx->pc == 0x4E5C94u) {
        ctx->pc = 0x4E5C94u;
            // 0x4e5c94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5C98u;
        goto label_4e5c98;
    }
    ctx->pc = 0x4E5C90u;
    {
        const bool branch_taken_0x4e5c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5C90u;
            // 0x4e5c94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5c90) {
            ctx->pc = 0x4E5DE0u;
            goto label_4e5de0;
        }
    }
    ctx->pc = 0x4E5C98u;
label_4e5c98:
    // 0x4e5c98: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4e5c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4e5c9c:
    // 0x4e5c9c: 0xc0d639c  jal         func_358E70
label_4e5ca0:
    if (ctx->pc == 0x4E5CA0u) {
        ctx->pc = 0x4E5CA0u;
            // 0x4e5ca0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5CA4u;
        goto label_4e5ca4;
    }
    ctx->pc = 0x4E5C9Cu;
    SET_GPR_U32(ctx, 31, 0x4E5CA4u);
    ctx->pc = 0x4E5CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5C9Cu;
            // 0x4e5ca0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CA4u; }
        if (ctx->pc != 0x4E5CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CA4u; }
        if (ctx->pc != 0x4E5CA4u) { return; }
    }
    ctx->pc = 0x4E5CA4u;
label_4e5ca4:
    // 0x4e5ca4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_4e5ca8:
    if (ctx->pc == 0x4E5CA8u) {
        ctx->pc = 0x4E5CACu;
        goto label_4e5cac;
    }
    ctx->pc = 0x4E5CA4u;
    {
        const bool branch_taken_0x4e5ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5ca4) {
            ctx->pc = 0x4E5DC8u;
            goto label_4e5dc8;
        }
    }
    ctx->pc = 0x4E5CACu;
label_4e5cac:
    // 0x4e5cac: 0xc0d1c14  jal         func_347050
label_4e5cb0:
    if (ctx->pc == 0x4E5CB0u) {
        ctx->pc = 0x4E5CB0u;
            // 0x4e5cb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5CB4u;
        goto label_4e5cb4;
    }
    ctx->pc = 0x4E5CACu;
    SET_GPR_U32(ctx, 31, 0x4E5CB4u);
    ctx->pc = 0x4E5CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5CACu;
            // 0x4e5cb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CB4u; }
        if (ctx->pc != 0x4E5CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CB4u; }
        if (ctx->pc != 0x4E5CB4u) { return; }
    }
    ctx->pc = 0x4E5CB4u;
label_4e5cb4:
    // 0x4e5cb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e5cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e5cb8:
    // 0x4e5cb8: 0xc04f278  jal         func_13C9E0
label_4e5cbc:
    if (ctx->pc == 0x4E5CBCu) {
        ctx->pc = 0x4E5CBCu;
            // 0x4e5cbc: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4E5CC0u;
        goto label_4e5cc0;
    }
    ctx->pc = 0x4E5CB8u;
    SET_GPR_U32(ctx, 31, 0x4E5CC0u);
    ctx->pc = 0x4E5CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5CB8u;
            // 0x4e5cbc: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CC0u; }
        if (ctx->pc != 0x4E5CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CC0u; }
        if (ctx->pc != 0x4E5CC0u) { return; }
    }
    ctx->pc = 0x4E5CC0u;
label_4e5cc0:
    // 0x4e5cc0: 0xc0d1c10  jal         func_347040
label_4e5cc4:
    if (ctx->pc == 0x4E5CC4u) {
        ctx->pc = 0x4E5CC4u;
            // 0x4e5cc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5CC8u;
        goto label_4e5cc8;
    }
    ctx->pc = 0x4E5CC0u;
    SET_GPR_U32(ctx, 31, 0x4E5CC8u);
    ctx->pc = 0x4E5CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5CC0u;
            // 0x4e5cc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CC8u; }
        if (ctx->pc != 0x4E5CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CC8u; }
        if (ctx->pc != 0x4E5CC8u) { return; }
    }
    ctx->pc = 0x4E5CC8u;
label_4e5cc8:
    // 0x4e5cc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e5cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e5ccc:
    // 0x4e5ccc: 0xc04ce80  jal         func_133A00
label_4e5cd0:
    if (ctx->pc == 0x4E5CD0u) {
        ctx->pc = 0x4E5CD0u;
            // 0x4e5cd0: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4E5CD4u;
        goto label_4e5cd4;
    }
    ctx->pc = 0x4E5CCCu;
    SET_GPR_U32(ctx, 31, 0x4E5CD4u);
    ctx->pc = 0x4E5CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5CCCu;
            // 0x4e5cd0: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CD4u; }
        if (ctx->pc != 0x4E5CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CD4u; }
        if (ctx->pc != 0x4E5CD4u) { return; }
    }
    ctx->pc = 0x4E5CD4u;
label_4e5cd4:
    // 0x4e5cd4: 0xc0d4108  jal         func_350420
label_4e5cd8:
    if (ctx->pc == 0x4E5CD8u) {
        ctx->pc = 0x4E5CDCu;
        goto label_4e5cdc;
    }
    ctx->pc = 0x4E5CD4u;
    SET_GPR_U32(ctx, 31, 0x4E5CDCu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CDCu; }
        if (ctx->pc != 0x4E5CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CDCu; }
        if (ctx->pc != 0x4E5CDCu) { return; }
    }
    ctx->pc = 0x4E5CDCu;
label_4e5cdc:
    // 0x4e5cdc: 0xc0b36b4  jal         func_2CDAD0
label_4e5ce0:
    if (ctx->pc == 0x4E5CE0u) {
        ctx->pc = 0x4E5CE0u;
            // 0x4e5ce0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5CE4u;
        goto label_4e5ce4;
    }
    ctx->pc = 0x4E5CDCu;
    SET_GPR_U32(ctx, 31, 0x4E5CE4u);
    ctx->pc = 0x4E5CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5CDCu;
            // 0x4e5ce0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CE4u; }
        if (ctx->pc != 0x4E5CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CE4u; }
        if (ctx->pc != 0x4E5CE4u) { return; }
    }
    ctx->pc = 0x4E5CE4u;
label_4e5ce4:
    // 0x4e5ce4: 0xc0b9c64  jal         func_2E7190
label_4e5ce8:
    if (ctx->pc == 0x4E5CE8u) {
        ctx->pc = 0x4E5CE8u;
            // 0x4e5ce8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5CECu;
        goto label_4e5cec;
    }
    ctx->pc = 0x4E5CE4u;
    SET_GPR_U32(ctx, 31, 0x4E5CECu);
    ctx->pc = 0x4E5CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5CE4u;
            // 0x4e5ce8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CECu; }
        if (ctx->pc != 0x4E5CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CECu; }
        if (ctx->pc != 0x4E5CECu) { return; }
    }
    ctx->pc = 0x4E5CECu;
label_4e5cec:
    // 0x4e5cec: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x4e5cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_4e5cf0:
    // 0x4e5cf0: 0xc0d4104  jal         func_350410
label_4e5cf4:
    if (ctx->pc == 0x4E5CF4u) {
        ctx->pc = 0x4E5CF4u;
            // 0x4e5cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5CF8u;
        goto label_4e5cf8;
    }
    ctx->pc = 0x4E5CF0u;
    SET_GPR_U32(ctx, 31, 0x4E5CF8u);
    ctx->pc = 0x4E5CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5CF0u;
            // 0x4e5cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CF8u; }
        if (ctx->pc != 0x4E5CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5CF8u; }
        if (ctx->pc != 0x4E5CF8u) { return; }
    }
    ctx->pc = 0x4E5CF8u;
label_4e5cf8:
    // 0x4e5cf8: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x4e5cf8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4e5cfc:
    // 0x4e5cfc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4e5cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4e5d00:
    // 0x4e5d00: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4e5d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e5d04:
    // 0x4e5d04: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x4e5d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4e5d08:
    // 0x4e5d08: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4e5d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e5d0c:
    // 0x4e5d0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4e5d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5d10:
    // 0x4e5d10: 0xc0d40ac  jal         func_3502B0
label_4e5d14:
    if (ctx->pc == 0x4E5D14u) {
        ctx->pc = 0x4E5D14u;
            // 0x4e5d14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4E5D18u;
        goto label_4e5d18;
    }
    ctx->pc = 0x4E5D10u;
    SET_GPR_U32(ctx, 31, 0x4E5D18u);
    ctx->pc = 0x4E5D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5D10u;
            // 0x4e5d14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5D18u; }
        if (ctx->pc != 0x4E5D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5D18u; }
        if (ctx->pc != 0x4E5D18u) { return; }
    }
    ctx->pc = 0x4E5D18u;
label_4e5d18:
    // 0x4e5d18: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4e5d18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4e5d1c:
    // 0x4e5d1c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_4e5d20:
    if (ctx->pc == 0x4E5D20u) {
        ctx->pc = 0x4E5D20u;
            // 0x4e5d20: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4E5D24u;
        goto label_4e5d24;
    }
    ctx->pc = 0x4E5D1Cu;
    {
        const bool branch_taken_0x4e5d1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5D1Cu;
            // 0x4e5d20: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5d1c) {
            ctx->pc = 0x4E5D30u;
            goto label_4e5d30;
        }
    }
    ctx->pc = 0x4E5D24u;
label_4e5d24:
    // 0x4e5d24: 0x1000002e  b           . + 4 + (0x2E << 2)
label_4e5d28:
    if (ctx->pc == 0x4E5D28u) {
        ctx->pc = 0x4E5D28u;
            // 0x4e5d28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5D2Cu;
        goto label_4e5d2c;
    }
    ctx->pc = 0x4E5D24u;
    {
        const bool branch_taken_0x4e5d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5D24u;
            // 0x4e5d28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5d24) {
            ctx->pc = 0x4E5DE0u;
            goto label_4e5de0;
        }
    }
    ctx->pc = 0x4E5D2Cu;
label_4e5d2c:
    // 0x4e5d2c: 0x0  nop
    ctx->pc = 0x4e5d2cu;
    // NOP
label_4e5d30:
    // 0x4e5d30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e5d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e5d34:
    // 0x4e5d34: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x4e5d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4e5d38:
    // 0x4e5d38: 0xc1398dc  jal         func_4E6370
label_4e5d3c:
    if (ctx->pc == 0x4E5D3Cu) {
        ctx->pc = 0x4E5D3Cu;
            // 0x4e5d3c: 0x27a60258  addiu       $a2, $sp, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
        ctx->pc = 0x4E5D40u;
        goto label_4e5d40;
    }
    ctx->pc = 0x4E5D38u;
    SET_GPR_U32(ctx, 31, 0x4E5D40u);
    ctx->pc = 0x4E5D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5D38u;
            // 0x4e5d3c: 0x27a60258  addiu       $a2, $sp, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E6370u;
    if (runtime->hasFunction(0x4E6370u)) {
        auto targetFn = runtime->lookupFunction(0x4E6370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5D40u; }
        if (ctx->pc != 0x4E5D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E6370_0x4e6370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5D40u; }
        if (ctx->pc != 0x4E5D40u) { return; }
    }
    ctx->pc = 0x4E5D40u;
label_4e5d40:
    // 0x4e5d40: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4e5d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4e5d44:
    // 0x4e5d44: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4e5d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4e5d48:
    // 0x4e5d48: 0xc04cd60  jal         func_133580
label_4e5d4c:
    if (ctx->pc == 0x4E5D4Cu) {
        ctx->pc = 0x4E5D4Cu;
            // 0x4e5d4c: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4E5D50u;
        goto label_4e5d50;
    }
    ctx->pc = 0x4E5D48u;
    SET_GPR_U32(ctx, 31, 0x4E5D50u);
    ctx->pc = 0x4E5D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5D48u;
            // 0x4e5d4c: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5D50u; }
        if (ctx->pc != 0x4E5D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5D50u; }
        if (ctx->pc != 0x4E5D50u) { return; }
    }
    ctx->pc = 0x4E5D50u;
label_4e5d50:
    // 0x4e5d50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e5d54:
    // 0x4e5d54: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x4e5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_4e5d58:
    // 0x4e5d58: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4e5d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4e5d5c:
    // 0x4e5d5c: 0xc04e4a4  jal         func_139290
label_4e5d60:
    if (ctx->pc == 0x4E5D60u) {
        ctx->pc = 0x4E5D60u;
            // 0x4e5d60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E5D64u;
        goto label_4e5d64;
    }
    ctx->pc = 0x4E5D5Cu;
    SET_GPR_U32(ctx, 31, 0x4E5D64u);
    ctx->pc = 0x4E5D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5D5Cu;
            // 0x4e5d60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5D64u; }
        if (ctx->pc != 0x4E5D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5D64u; }
        if (ctx->pc != 0x4E5D64u) { return; }
    }
    ctx->pc = 0x4E5D64u;
label_4e5d64:
    // 0x4e5d64: 0xc0d5d80  jal         func_357600
label_4e5d68:
    if (ctx->pc == 0x4E5D68u) {
        ctx->pc = 0x4E5D68u;
            // 0x4e5d68: 0x8e64009c  lw          $a0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->pc = 0x4E5D6Cu;
        goto label_4e5d6c;
    }
    ctx->pc = 0x4E5D64u;
    SET_GPR_U32(ctx, 31, 0x4E5D6Cu);
    ctx->pc = 0x4E5D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5D64u;
            // 0x4e5d68: 0x8e64009c  lw          $a0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357600u;
    if (runtime->hasFunction(0x357600u)) {
        auto targetFn = runtime->lookupFunction(0x357600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5D6Cu; }
        if (ctx->pc != 0x4E5D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357600_0x357600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5D6Cu; }
        if (ctx->pc != 0x4E5D6Cu) { return; }
    }
    ctx->pc = 0x4E5D6Cu;
label_4e5d6c:
    // 0x4e5d6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4e5d70:
    if (ctx->pc == 0x4E5D70u) {
        ctx->pc = 0x4E5D74u;
        goto label_4e5d74;
    }
    ctx->pc = 0x4E5D6Cu;
    {
        const bool branch_taken_0x4e5d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5d6c) {
            ctx->pc = 0x4E5D80u;
            goto label_4e5d80;
        }
    }
    ctx->pc = 0x4E5D74u;
label_4e5d74:
    // 0x4e5d74: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x4e5d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_4e5d78:
    // 0x4e5d78: 0x10000003  b           . + 4 + (0x3 << 2)
label_4e5d7c:
    if (ctx->pc == 0x4E5D7Cu) {
        ctx->pc = 0x4E5D7Cu;
            // 0x4e5d7c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x4E5D80u;
        goto label_4e5d80;
    }
    ctx->pc = 0x4E5D78u;
    {
        const bool branch_taken_0x4e5d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5D78u;
            // 0x4e5d7c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5d78) {
            ctx->pc = 0x4E5D88u;
            goto label_4e5d88;
        }
    }
    ctx->pc = 0x4E5D80u;
label_4e5d80:
    // 0x4e5d80: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x4e5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_4e5d84:
    // 0x4e5d84: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4e5d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4e5d88:
    // 0x4e5d88: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4e5d88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4e5d8c:
    // 0x4e5d8c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4e5d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4e5d90:
    // 0x4e5d90: 0x320f809  jalr        $t9
label_4e5d94:
    if (ctx->pc == 0x4E5D94u) {
        ctx->pc = 0x4E5D94u;
            // 0x4e5d94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5D98u;
        goto label_4e5d98;
    }
    ctx->pc = 0x4E5D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5D98u);
        ctx->pc = 0x4E5D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5D90u;
            // 0x4e5d94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5D98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5D98u; }
            if (ctx->pc != 0x4E5D98u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5D98u;
label_4e5d98:
    // 0x4e5d98: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x4e5d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_4e5d9c:
    // 0x4e5d9c: 0xc66c00d8  lwc1        $f12, 0xD8($s3)
    ctx->pc = 0x4e5d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e5da0:
    // 0x4e5da0: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4e5da0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4e5da4:
    // 0x4e5da4: 0x8fa50258  lw          $a1, 0x258($sp)
    ctx->pc = 0x4e5da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_4e5da8:
    // 0x4e5da8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4e5da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e5dac:
    // 0x4e5dac: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4e5dacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e5db0:
    // 0x4e5db0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x4e5db0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4e5db4:
    // 0x4e5db4: 0x27a80180  addiu       $t0, $sp, 0x180
    ctx->pc = 0x4e5db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4e5db8:
    // 0x4e5db8: 0xc04cff4  jal         func_133FD0
label_4e5dbc:
    if (ctx->pc == 0x4E5DBCu) {
        ctx->pc = 0x4E5DBCu;
            // 0x4e5dbc: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x4E5DC0u;
        goto label_4e5dc0;
    }
    ctx->pc = 0x4E5DB8u;
    SET_GPR_U32(ctx, 31, 0x4E5DC0u);
    ctx->pc = 0x4E5DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5DB8u;
            // 0x4e5dbc: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5DC0u; }
        if (ctx->pc != 0x4E5DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5DC0u; }
        if (ctx->pc != 0x4E5DC0u) { return; }
    }
    ctx->pc = 0x4E5DC0u;
label_4e5dc0:
    // 0x4e5dc0: 0xc67600d8  lwc1        $f22, 0xD8($s3)
    ctx->pc = 0x4e5dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4e5dc4:
    // 0x4e5dc4: 0x641e0001  daddiu      $fp, $zero, 0x1
    ctx->pc = 0x4e5dc4u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4e5dc8:
    // 0x4e5dc8: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x4e5dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_4e5dcc:
    // 0x4e5dcc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4e5dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e5dd0:
    // 0x4e5dd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4e5dd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4e5dd4:
    // 0x4e5dd4: 0xc0e325c  jal         func_38C970
label_4e5dd8:
    if (ctx->pc == 0x4E5DD8u) {
        ctx->pc = 0x4E5DD8u;
            // 0x4e5dd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5DDCu;
        goto label_4e5ddc;
    }
    ctx->pc = 0x4E5DD4u;
    SET_GPR_U32(ctx, 31, 0x4E5DDCu);
    ctx->pc = 0x4E5DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5DD4u;
            // 0x4e5dd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5DDCu; }
        if (ctx->pc != 0x4E5DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5DDCu; }
        if (ctx->pc != 0x4E5DDCu) { return; }
    }
    ctx->pc = 0x4E5DDCu;
label_4e5ddc:
    // 0x4e5ddc: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x4e5ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_4e5de0:
    // 0x4e5de0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_4e5de4:
    if (ctx->pc == 0x4E5DE4u) {
        ctx->pc = 0x4E5DE8u;
        goto label_4e5de8;
    }
    ctx->pc = 0x4E5DE0u;
    {
        const bool branch_taken_0x4e5de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5de0) {
            ctx->pc = 0x4E5E48u;
            goto label_4e5e48;
        }
    }
    ctx->pc = 0x4E5DE8u;
label_4e5de8:
    // 0x4e5de8: 0x86430066  lh          $v1, 0x66($s2)
    ctx->pc = 0x4e5de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4e5dec:
    // 0x4e5dec: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x4e5decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4e5df0:
    // 0x4e5df0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4e5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4e5df4:
    // 0x4e5df4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4e5df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4e5df8:
    // 0x4e5df8: 0xc04cce8  jal         func_1333A0
label_4e5dfc:
    if (ctx->pc == 0x4E5DFCu) {
        ctx->pc = 0x4E5DFCu;
            // 0x4e5dfc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4E5E00u;
        goto label_4e5e00;
    }
    ctx->pc = 0x4E5DF8u;
    SET_GPR_U32(ctx, 31, 0x4E5E00u);
    ctx->pc = 0x4E5DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5DF8u;
            // 0x4e5dfc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5E00u; }
        if (ctx->pc != 0x4E5E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5E00u; }
        if (ctx->pc != 0x4E5E00u) { return; }
    }
    ctx->pc = 0x4E5E00u;
label_4e5e00:
    // 0x4e5e00: 0x86450066  lh          $a1, 0x66($s2)
    ctx->pc = 0x4e5e00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4e5e04:
    // 0x4e5e04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e5e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e5e08:
    // 0x4e5e08: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x4e5e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4e5e0c:
    // 0x4e5e0c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4e5e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e5e10:
    // 0x4e5e10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4e5e14:
    // 0x4e5e14: 0xe4960000  swc1        $f22, 0x0($a0)
    ctx->pc = 0x4e5e14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_4e5e18:
    // 0x4e5e18: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e5e1c:
    // 0x4e5e1c: 0x86450066  lh          $a1, 0x66($s2)
    ctx->pc = 0x4e5e1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4e5e20:
    // 0x4e5e20: 0x86440064  lh          $a0, 0x64($s2)
    ctx->pc = 0x4e5e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
label_4e5e24:
    // 0x4e5e24: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x4e5e24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_4e5e28:
    // 0x4e5e28: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x4e5e28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4e5e2c:
    // 0x4e5e2c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x4e5e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4e5e30:
    // 0x4e5e30: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4e5e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4e5e34:
    // 0x4e5e34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4e5e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_4e5e38:
    // 0x4e5e38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4e5e38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_4e5e3c:
    // 0x4e5e3c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4e5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4e5e40:
    // 0x4e5e40: 0xa6430066  sh          $v1, 0x66($s2)
    ctx->pc = 0x4e5e40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 3));
label_4e5e44:
    // 0x4e5e44: 0x0  nop
    ctx->pc = 0x4e5e44u;
    // NOP
label_4e5e48:
    // 0x4e5e48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4e5e48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4e5e4c:
    // 0x4e5e4c: 0x291182b  sltu        $v1, $s4, $s1
    ctx->pc = 0x4e5e4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e5e50:
    // 0x4e5e50: 0x1460ff85  bnez        $v1, . + 4 + (-0x7B << 2)
label_4e5e54:
    if (ctx->pc == 0x4E5E54u) {
        ctx->pc = 0x4E5E54u;
            // 0x4e5e54: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x4E5E58u;
        goto label_4e5e58;
    }
    ctx->pc = 0x4E5E50u;
    {
        const bool branch_taken_0x4e5e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5E50u;
            // 0x4e5e54: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5e50) {
            ctx->pc = 0x4E5C68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e5c68;
        }
    }
    ctx->pc = 0x4E5E58u;
label_4e5e58:
    // 0x4e5e58: 0x8ea40098  lw          $a0, 0x98($s5)
    ctx->pc = 0x4e5e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
label_4e5e5c:
    // 0x4e5e5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e5e60:
    // 0x4e5e60: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x4e5e60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_4e5e64:
    // 0x4e5e64: 0x8ea4009c  lw          $a0, 0x9C($s5)
    ctx->pc = 0x4e5e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_4e5e68:
    // 0x4e5e68: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x4e5e68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_4e5e6c:
    // 0x4e5e6c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4e5e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4e5e70:
    // 0x4e5e70: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_4e5e74:
    if (ctx->pc == 0x4E5E74u) {
        ctx->pc = 0x4E5E74u;
            // 0x4e5e74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E5E78u;
        goto label_4e5e78;
    }
    ctx->pc = 0x4E5E70u;
    {
        const bool branch_taken_0x4e5e70 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4E5E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5E70u;
            // 0x4e5e74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5e70) {
            ctx->pc = 0x4E5E94u;
            goto label_4e5e94;
        }
    }
    ctx->pc = 0x4E5E78u;
label_4e5e78:
    // 0x4e5e78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e5e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e5e7c:
    // 0x4e5e7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e5e80:
    // 0x4e5e80: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4e5e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4e5e84:
    // 0x4e5e84: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e5e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e5e88:
    // 0x4e5e88: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4e5e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4e5e8c:
    // 0x4e5e8c: 0xc055990  jal         func_156640
label_4e5e90:
    if (ctx->pc == 0x4E5E90u) {
        ctx->pc = 0x4E5E90u;
            // 0x4e5e90: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5E94u;
        goto label_4e5e94;
    }
    ctx->pc = 0x4E5E8Cu;
    SET_GPR_U32(ctx, 31, 0x4E5E94u);
    ctx->pc = 0x4E5E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5E8Cu;
            // 0x4e5e90: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5E94u; }
        if (ctx->pc != 0x4E5E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5E94u; }
        if (ctx->pc != 0x4E5E94u) { return; }
    }
    ctx->pc = 0x4E5E94u;
label_4e5e94:
    // 0x4e5e94: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4e5e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4e5e98:
    // 0x4e5e98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e5e9c:
    // 0x4e5e9c: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4e5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_4e5ea0:
    // 0x4e5ea0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4e5ea0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5ea4:
    // 0x4e5ea4: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4e5ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4e5ea8:
    // 0x4e5ea8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e5ea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5eac:
    // 0x4e5eac: 0x8ea60074  lw          $a2, 0x74($s5)
    ctx->pc = 0x4e5eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4e5eb0:
    // 0x4e5eb0: 0x27a5025c  addiu       $a1, $sp, 0x25C
    ctx->pc = 0x4e5eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_4e5eb4:
    // 0x4e5eb4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x4e5eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_4e5eb8:
    // 0x4e5eb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e5ebc:
    // 0x4e5ebc: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x4e5ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e5ec0:
    // 0x4e5ec0: 0x8cd40000  lw          $s4, 0x0($a2)
    ctx->pc = 0x4e5ec0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4e5ec4:
    // 0x4e5ec4: 0xafa50254  sw          $a1, 0x254($sp)
    ctx->pc = 0x4e5ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
label_4e5ec8:
    // 0x4e5ec8: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x4e5ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_4e5ecc:
    // 0x4e5ecc: 0x8e8400d4  lw          $a0, 0xD4($s4)
    ctx->pc = 0x4e5eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_4e5ed0:
    // 0x4e5ed0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4e5ed4:
    if (ctx->pc == 0x4E5ED4u) {
        ctx->pc = 0x4E5ED8u;
        goto label_4e5ed8;
    }
    ctx->pc = 0x4E5ED0u;
    {
        const bool branch_taken_0x4e5ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e5ed0) {
            ctx->pc = 0x4E5EE0u;
            goto label_4e5ee0;
        }
    }
    ctx->pc = 0x4E5ED8u;
label_4e5ed8:
    // 0x4e5ed8: 0x10000053  b           . + 4 + (0x53 << 2)
label_4e5edc:
    if (ctx->pc == 0x4E5EDCu) {
        ctx->pc = 0x4E5EDCu;
            // 0x4e5edc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5EE0u;
        goto label_4e5ee0;
    }
    ctx->pc = 0x4E5ED8u;
    {
        const bool branch_taken_0x4e5ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5ED8u;
            // 0x4e5edc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5ed8) {
            ctx->pc = 0x4E6028u;
            goto label_4e6028;
        }
    }
    ctx->pc = 0x4E5EE0u;
label_4e5ee0:
    // 0x4e5ee0: 0x2684006c  addiu       $a0, $s4, 0x6C
    ctx->pc = 0x4e5ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
label_4e5ee4:
    // 0x4e5ee4: 0xc0d639c  jal         func_358E70
label_4e5ee8:
    if (ctx->pc == 0x4E5EE8u) {
        ctx->pc = 0x4E5EE8u;
            // 0x4e5ee8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5EECu;
        goto label_4e5eec;
    }
    ctx->pc = 0x4E5EE4u;
    SET_GPR_U32(ctx, 31, 0x4E5EECu);
    ctx->pc = 0x4E5EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5EE4u;
            // 0x4e5ee8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5EECu; }
        if (ctx->pc != 0x4E5EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5EECu; }
        if (ctx->pc != 0x4E5EECu) { return; }
    }
    ctx->pc = 0x4E5EECu;
label_4e5eec:
    // 0x4e5eec: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_4e5ef0:
    if (ctx->pc == 0x4E5EF0u) {
        ctx->pc = 0x4E5EF4u;
        goto label_4e5ef4;
    }
    ctx->pc = 0x4E5EECu;
    {
        const bool branch_taken_0x4e5eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5eec) {
            ctx->pc = 0x4E6010u;
            goto label_4e6010;
        }
    }
    ctx->pc = 0x4E5EF4u;
label_4e5ef4:
    // 0x4e5ef4: 0xc0d1c14  jal         func_347050
label_4e5ef8:
    if (ctx->pc == 0x4E5EF8u) {
        ctx->pc = 0x4E5EF8u;
            // 0x4e5ef8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5EFCu;
        goto label_4e5efc;
    }
    ctx->pc = 0x4E5EF4u;
    SET_GPR_U32(ctx, 31, 0x4E5EFCu);
    ctx->pc = 0x4E5EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5EF4u;
            // 0x4e5ef8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5EFCu; }
        if (ctx->pc != 0x4E5EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5EFCu; }
        if (ctx->pc != 0x4E5EFCu) { return; }
    }
    ctx->pc = 0x4E5EFCu;
label_4e5efc:
    // 0x4e5efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e5efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e5f00:
    // 0x4e5f00: 0xc04f278  jal         func_13C9E0
label_4e5f04:
    if (ctx->pc == 0x4E5F04u) {
        ctx->pc = 0x4E5F04u;
            // 0x4e5f04: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4E5F08u;
        goto label_4e5f08;
    }
    ctx->pc = 0x4E5F00u;
    SET_GPR_U32(ctx, 31, 0x4E5F08u);
    ctx->pc = 0x4E5F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5F00u;
            // 0x4e5f04: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F08u; }
        if (ctx->pc != 0x4E5F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F08u; }
        if (ctx->pc != 0x4E5F08u) { return; }
    }
    ctx->pc = 0x4E5F08u;
label_4e5f08:
    // 0x4e5f08: 0xc0d1c10  jal         func_347040
label_4e5f0c:
    if (ctx->pc == 0x4E5F0Cu) {
        ctx->pc = 0x4E5F0Cu;
            // 0x4e5f0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5F10u;
        goto label_4e5f10;
    }
    ctx->pc = 0x4E5F08u;
    SET_GPR_U32(ctx, 31, 0x4E5F10u);
    ctx->pc = 0x4E5F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5F08u;
            // 0x4e5f0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F10u; }
        if (ctx->pc != 0x4E5F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F10u; }
        if (ctx->pc != 0x4E5F10u) { return; }
    }
    ctx->pc = 0x4E5F10u;
label_4e5f10:
    // 0x4e5f10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e5f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e5f14:
    // 0x4e5f14: 0xc04ce80  jal         func_133A00
label_4e5f18:
    if (ctx->pc == 0x4E5F18u) {
        ctx->pc = 0x4E5F18u;
            // 0x4e5f18: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4E5F1Cu;
        goto label_4e5f1c;
    }
    ctx->pc = 0x4E5F14u;
    SET_GPR_U32(ctx, 31, 0x4E5F1Cu);
    ctx->pc = 0x4E5F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5F14u;
            // 0x4e5f18: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F1Cu; }
        if (ctx->pc != 0x4E5F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F1Cu; }
        if (ctx->pc != 0x4E5F1Cu) { return; }
    }
    ctx->pc = 0x4E5F1Cu;
label_4e5f1c:
    // 0x4e5f1c: 0xc0d4108  jal         func_350420
label_4e5f20:
    if (ctx->pc == 0x4E5F20u) {
        ctx->pc = 0x4E5F24u;
        goto label_4e5f24;
    }
    ctx->pc = 0x4E5F1Cu;
    SET_GPR_U32(ctx, 31, 0x4E5F24u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F24u; }
        if (ctx->pc != 0x4E5F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F24u; }
        if (ctx->pc != 0x4E5F24u) { return; }
    }
    ctx->pc = 0x4E5F24u;
label_4e5f24:
    // 0x4e5f24: 0xc0b36b4  jal         func_2CDAD0
label_4e5f28:
    if (ctx->pc == 0x4E5F28u) {
        ctx->pc = 0x4E5F28u;
            // 0x4e5f28: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5F2Cu;
        goto label_4e5f2c;
    }
    ctx->pc = 0x4E5F24u;
    SET_GPR_U32(ctx, 31, 0x4E5F2Cu);
    ctx->pc = 0x4E5F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5F24u;
            // 0x4e5f28: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F2Cu; }
        if (ctx->pc != 0x4E5F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F2Cu; }
        if (ctx->pc != 0x4E5F2Cu) { return; }
    }
    ctx->pc = 0x4E5F2Cu;
label_4e5f2c:
    // 0x4e5f2c: 0xc0b9c64  jal         func_2E7190
label_4e5f30:
    if (ctx->pc == 0x4E5F30u) {
        ctx->pc = 0x4E5F30u;
            // 0x4e5f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5F34u;
        goto label_4e5f34;
    }
    ctx->pc = 0x4E5F2Cu;
    SET_GPR_U32(ctx, 31, 0x4E5F34u);
    ctx->pc = 0x4E5F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5F2Cu;
            // 0x4e5f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F34u; }
        if (ctx->pc != 0x4E5F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F34u; }
        if (ctx->pc != 0x4E5F34u) { return; }
    }
    ctx->pc = 0x4E5F34u;
label_4e5f34:
    // 0x4e5f34: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x4e5f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_4e5f38:
    // 0x4e5f38: 0xc0d4104  jal         func_350410
label_4e5f3c:
    if (ctx->pc == 0x4E5F3Cu) {
        ctx->pc = 0x4E5F3Cu;
            // 0x4e5f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5F40u;
        goto label_4e5f40;
    }
    ctx->pc = 0x4E5F38u;
    SET_GPR_U32(ctx, 31, 0x4E5F40u);
    ctx->pc = 0x4E5F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5F38u;
            // 0x4e5f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F40u; }
        if (ctx->pc != 0x4E5F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F40u; }
        if (ctx->pc != 0x4E5F40u) { return; }
    }
    ctx->pc = 0x4E5F40u;
label_4e5f40:
    // 0x4e5f40: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x4e5f40u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4e5f44:
    // 0x4e5f44: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4e5f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4e5f48:
    // 0x4e5f48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4e5f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e5f4c:
    // 0x4e5f4c: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x4e5f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4e5f50:
    // 0x4e5f50: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4e5f50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e5f54:
    // 0x4e5f54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4e5f54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5f58:
    // 0x4e5f58: 0xc0d40ac  jal         func_3502B0
label_4e5f5c:
    if (ctx->pc == 0x4E5F5Cu) {
        ctx->pc = 0x4E5F5Cu;
            // 0x4e5f5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4E5F60u;
        goto label_4e5f60;
    }
    ctx->pc = 0x4E5F58u;
    SET_GPR_U32(ctx, 31, 0x4E5F60u);
    ctx->pc = 0x4E5F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5F58u;
            // 0x4e5f5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F60u; }
        if (ctx->pc != 0x4E5F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F60u; }
        if (ctx->pc != 0x4E5F60u) { return; }
    }
    ctx->pc = 0x4E5F60u;
label_4e5f60:
    // 0x4e5f60: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4e5f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4e5f64:
    // 0x4e5f64: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_4e5f68:
    if (ctx->pc == 0x4E5F68u) {
        ctx->pc = 0x4E5F68u;
            // 0x4e5f68: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4E5F6Cu;
        goto label_4e5f6c;
    }
    ctx->pc = 0x4E5F64u;
    {
        const bool branch_taken_0x4e5f64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5F64u;
            // 0x4e5f68: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5f64) {
            ctx->pc = 0x4E5F78u;
            goto label_4e5f78;
        }
    }
    ctx->pc = 0x4E5F6Cu;
label_4e5f6c:
    // 0x4e5f6c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_4e5f70:
    if (ctx->pc == 0x4E5F70u) {
        ctx->pc = 0x4E5F70u;
            // 0x4e5f70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5F74u;
        goto label_4e5f74;
    }
    ctx->pc = 0x4E5F6Cu;
    {
        const bool branch_taken_0x4e5f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5F6Cu;
            // 0x4e5f70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5f6c) {
            ctx->pc = 0x4E6028u;
            goto label_4e6028;
        }
    }
    ctx->pc = 0x4E5F74u;
label_4e5f74:
    // 0x4e5f74: 0x0  nop
    ctx->pc = 0x4e5f74u;
    // NOP
label_4e5f78:
    // 0x4e5f78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e5f7c:
    // 0x4e5f7c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x4e5f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4e5f80:
    // 0x4e5f80: 0xc1398dc  jal         func_4E6370
label_4e5f84:
    if (ctx->pc == 0x4E5F84u) {
        ctx->pc = 0x4E5F84u;
            // 0x4e5f84: 0x27a60254  addiu       $a2, $sp, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
        ctx->pc = 0x4E5F88u;
        goto label_4e5f88;
    }
    ctx->pc = 0x4E5F80u;
    SET_GPR_U32(ctx, 31, 0x4E5F88u);
    ctx->pc = 0x4E5F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5F80u;
            // 0x4e5f84: 0x27a60254  addiu       $a2, $sp, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E6370u;
    if (runtime->hasFunction(0x4E6370u)) {
        auto targetFn = runtime->lookupFunction(0x4E6370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F88u; }
        if (ctx->pc != 0x4E5F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E6370_0x4e6370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F88u; }
        if (ctx->pc != 0x4E5F88u) { return; }
    }
    ctx->pc = 0x4E5F88u;
label_4e5f88:
    // 0x4e5f88: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4e5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4e5f8c:
    // 0x4e5f8c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4e5f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4e5f90:
    // 0x4e5f90: 0xc04cd60  jal         func_133580
label_4e5f94:
    if (ctx->pc == 0x4E5F94u) {
        ctx->pc = 0x4E5F94u;
            // 0x4e5f94: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4E5F98u;
        goto label_4e5f98;
    }
    ctx->pc = 0x4E5F90u;
    SET_GPR_U32(ctx, 31, 0x4E5F98u);
    ctx->pc = 0x4E5F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5F90u;
            // 0x4e5f94: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F98u; }
        if (ctx->pc != 0x4E5F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5F98u; }
        if (ctx->pc != 0x4E5F98u) { return; }
    }
    ctx->pc = 0x4E5F98u;
label_4e5f98:
    // 0x4e5f98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e5f9c:
    // 0x4e5f9c: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x4e5f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_4e5fa0:
    // 0x4e5fa0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4e5fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4e5fa4:
    // 0x4e5fa4: 0xc04e4a4  jal         func_139290
label_4e5fa8:
    if (ctx->pc == 0x4E5FA8u) {
        ctx->pc = 0x4E5FA8u;
            // 0x4e5fa8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E5FACu;
        goto label_4e5fac;
    }
    ctx->pc = 0x4E5FA4u;
    SET_GPR_U32(ctx, 31, 0x4E5FACu);
    ctx->pc = 0x4E5FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5FA4u;
            // 0x4e5fa8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5FACu; }
        if (ctx->pc != 0x4E5FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5FACu; }
        if (ctx->pc != 0x4E5FACu) { return; }
    }
    ctx->pc = 0x4E5FACu;
label_4e5fac:
    // 0x4e5fac: 0xc0d5d80  jal         func_357600
label_4e5fb0:
    if (ctx->pc == 0x4E5FB0u) {
        ctx->pc = 0x4E5FB0u;
            // 0x4e5fb0: 0x8e84009c  lw          $a0, 0x9C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
        ctx->pc = 0x4E5FB4u;
        goto label_4e5fb4;
    }
    ctx->pc = 0x4E5FACu;
    SET_GPR_U32(ctx, 31, 0x4E5FB4u);
    ctx->pc = 0x4E5FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5FACu;
            // 0x4e5fb0: 0x8e84009c  lw          $a0, 0x9C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357600u;
    if (runtime->hasFunction(0x357600u)) {
        auto targetFn = runtime->lookupFunction(0x357600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5FB4u; }
        if (ctx->pc != 0x4E5FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357600_0x357600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5FB4u; }
        if (ctx->pc != 0x4E5FB4u) { return; }
    }
    ctx->pc = 0x4E5FB4u;
label_4e5fb4:
    // 0x4e5fb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4e5fb8:
    if (ctx->pc == 0x4E5FB8u) {
        ctx->pc = 0x4E5FBCu;
        goto label_4e5fbc;
    }
    ctx->pc = 0x4E5FB4u;
    {
        const bool branch_taken_0x4e5fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5fb4) {
            ctx->pc = 0x4E5FC8u;
            goto label_4e5fc8;
        }
    }
    ctx->pc = 0x4E5FBCu;
label_4e5fbc:
    // 0x4e5fbc: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x4e5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_4e5fc0:
    // 0x4e5fc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4e5fc4:
    if (ctx->pc == 0x4E5FC4u) {
        ctx->pc = 0x4E5FC4u;
            // 0x4e5fc4: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x4E5FC8u;
        goto label_4e5fc8;
    }
    ctx->pc = 0x4E5FC0u;
    {
        const bool branch_taken_0x4e5fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5FC0u;
            // 0x4e5fc4: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5fc0) {
            ctx->pc = 0x4E5FD0u;
            goto label_4e5fd0;
        }
    }
    ctx->pc = 0x4E5FC8u;
label_4e5fc8:
    // 0x4e5fc8: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x4e5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_4e5fcc:
    // 0x4e5fcc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4e5fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4e5fd0:
    // 0x4e5fd0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4e5fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e5fd4:
    // 0x4e5fd4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4e5fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4e5fd8:
    // 0x4e5fd8: 0x320f809  jalr        $t9
label_4e5fdc:
    if (ctx->pc == 0x4E5FDCu) {
        ctx->pc = 0x4E5FDCu;
            // 0x4e5fdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5FE0u;
        goto label_4e5fe0;
    }
    ctx->pc = 0x4E5FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5FE0u);
        ctx->pc = 0x4E5FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5FD8u;
            // 0x4e5fdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5FE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5FE0u; }
            if (ctx->pc != 0x4E5FE0u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5FE0u;
label_4e5fe0:
    // 0x4e5fe0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x4e5fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4e5fe4:
    // 0x4e5fe4: 0xc68c00d8  lwc1        $f12, 0xD8($s4)
    ctx->pc = 0x4e5fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e5fe8:
    // 0x4e5fe8: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4e5fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4e5fec:
    // 0x4e5fec: 0x8fa50254  lw          $a1, 0x254($sp)
    ctx->pc = 0x4e5fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_4e5ff0:
    // 0x4e5ff0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4e5ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e5ff4:
    // 0x4e5ff4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4e5ff4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e5ff8:
    // 0x4e5ff8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x4e5ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4e5ffc:
    // 0x4e5ffc: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x4e5ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4e6000:
    // 0x4e6000: 0xc04cff4  jal         func_133FD0
label_4e6004:
    if (ctx->pc == 0x4E6004u) {
        ctx->pc = 0x4E6004u;
            // 0x4e6004: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x4E6008u;
        goto label_4e6008;
    }
    ctx->pc = 0x4E6000u;
    SET_GPR_U32(ctx, 31, 0x4E6008u);
    ctx->pc = 0x4E6004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6000u;
            // 0x4e6004: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6008u; }
        if (ctx->pc != 0x4E6008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6008u; }
        if (ctx->pc != 0x4E6008u) { return; }
    }
    ctx->pc = 0x4E6008u;
label_4e6008:
    // 0x4e6008: 0xc69600d8  lwc1        $f22, 0xD8($s4)
    ctx->pc = 0x4e6008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4e600c:
    // 0x4e600c: 0x641e0001  daddiu      $fp, $zero, 0x1
    ctx->pc = 0x4e600cu;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4e6010:
    // 0x4e6010: 0x8e84009c  lw          $a0, 0x9C($s4)
    ctx->pc = 0x4e6010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_4e6014:
    // 0x4e6014: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4e6014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e6018:
    // 0x4e6018: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4e6018u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4e601c:
    // 0x4e601c: 0xc0e325c  jal         func_38C970
label_4e6020:
    if (ctx->pc == 0x4E6020u) {
        ctx->pc = 0x4E6020u;
            // 0x4e6020: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6024u;
        goto label_4e6024;
    }
    ctx->pc = 0x4E601Cu;
    SET_GPR_U32(ctx, 31, 0x4E6024u);
    ctx->pc = 0x4E6020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E601Cu;
            // 0x4e6020: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6024u; }
        if (ctx->pc != 0x4E6024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6024u; }
        if (ctx->pc != 0x4E6024u) { return; }
    }
    ctx->pc = 0x4E6024u;
label_4e6024:
    // 0x4e6024: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x4e6024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_4e6028:
    // 0x4e6028: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_4e602c:
    if (ctx->pc == 0x4E602Cu) {
        ctx->pc = 0x4E6030u;
        goto label_4e6030;
    }
    ctx->pc = 0x4E6028u;
    {
        const bool branch_taken_0x4e6028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6028) {
            ctx->pc = 0x4E6090u;
            goto label_4e6090;
        }
    }
    ctx->pc = 0x4E6030u;
label_4e6030:
    // 0x4e6030: 0x86430066  lh          $v1, 0x66($s2)
    ctx->pc = 0x4e6030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4e6034:
    // 0x4e6034: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x4e6034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4e6038:
    // 0x4e6038: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4e6038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4e603c:
    // 0x4e603c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4e603cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4e6040:
    // 0x4e6040: 0xc04cce8  jal         func_1333A0
label_4e6044:
    if (ctx->pc == 0x4E6044u) {
        ctx->pc = 0x4E6044u;
            // 0x4e6044: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4E6048u;
        goto label_4e6048;
    }
    ctx->pc = 0x4E6040u;
    SET_GPR_U32(ctx, 31, 0x4E6048u);
    ctx->pc = 0x4E6044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6040u;
            // 0x4e6044: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6048u; }
        if (ctx->pc != 0x4E6048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6048u; }
        if (ctx->pc != 0x4E6048u) { return; }
    }
    ctx->pc = 0x4E6048u;
label_4e6048:
    // 0x4e6048: 0x86450066  lh          $a1, 0x66($s2)
    ctx->pc = 0x4e6048u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4e604c:
    // 0x4e604c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e604cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e6050:
    // 0x4e6050: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x4e6050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4e6054:
    // 0x4e6054: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4e6054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e6058:
    // 0x4e6058: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e6058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4e605c:
    // 0x4e605c: 0xe4960000  swc1        $f22, 0x0($a0)
    ctx->pc = 0x4e605cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_4e6060:
    // 0x4e6060: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e6060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e6064:
    // 0x4e6064: 0x86450066  lh          $a1, 0x66($s2)
    ctx->pc = 0x4e6064u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4e6068:
    // 0x4e6068: 0x86440064  lh          $a0, 0x64($s2)
    ctx->pc = 0x4e6068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
label_4e606c:
    // 0x4e606c: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x4e606cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_4e6070:
    // 0x4e6070: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x4e6070u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4e6074:
    // 0x4e6074: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x4e6074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4e6078:
    // 0x4e6078: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4e6078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4e607c:
    // 0x4e607c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4e607cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_4e6080:
    // 0x4e6080: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4e6080u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_4e6084:
    // 0x4e6084: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4e6084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4e6088:
    // 0x4e6088: 0xa6430066  sh          $v1, 0x66($s2)
    ctx->pc = 0x4e6088u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 3));
label_4e608c:
    // 0x4e608c: 0x0  nop
    ctx->pc = 0x4e608cu;
    // NOP
label_4e6090:
    // 0x4e6090: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4e6090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4e6094:
    // 0x4e6094: 0x2d1182b  sltu        $v1, $s6, $s1
    ctx->pc = 0x4e6094u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e6098:
    // 0x4e6098: 0x1460ff84  bnez        $v1, . + 4 + (-0x7C << 2)
label_4e609c:
    if (ctx->pc == 0x4E609Cu) {
        ctx->pc = 0x4E609Cu;
            // 0x4e609c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4E60A0u;
        goto label_4e60a0;
    }
    ctx->pc = 0x4E6098u;
    {
        const bool branch_taken_0x4e6098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E609Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6098u;
            // 0x4e609c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6098) {
            ctx->pc = 0x4E5EACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e5eac;
        }
    }
    ctx->pc = 0x4E60A0u;
label_4e60a0:
    // 0x4e60a0: 0x8ea40098  lw          $a0, 0x98($s5)
    ctx->pc = 0x4e60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
label_4e60a4:
    // 0x4e60a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e60a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e60a8:
    // 0x4e60a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e60ac:
    // 0x4e60ac: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x4e60acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_4e60b0:
    // 0x4e60b0: 0x8ea4009c  lw          $a0, 0x9C($s5)
    ctx->pc = 0x4e60b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_4e60b4:
    // 0x4e60b4: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x4e60b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_4e60b8:
    // 0x4e60b8: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4e60b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4e60bc:
    // 0x4e60bc: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_4e60c0:
    if (ctx->pc == 0x4E60C0u) {
        ctx->pc = 0x4E60C0u;
            // 0x4e60c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E60C4u;
        goto label_4e60c4;
    }
    ctx->pc = 0x4E60BCu;
    {
        const bool branch_taken_0x4e60bc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4E60C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E60BCu;
            // 0x4e60c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e60bc) {
            ctx->pc = 0x4E60E0u;
            goto label_4e60e0;
        }
    }
    ctx->pc = 0x4E60C4u;
label_4e60c4:
    // 0x4e60c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e60c8:
    // 0x4e60c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e60cc:
    // 0x4e60cc: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4e60ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4e60d0:
    // 0x4e60d0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e60d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e60d4:
    // 0x4e60d4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4e60d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4e60d8:
    // 0x4e60d8: 0xc055990  jal         func_156640
label_4e60dc:
    if (ctx->pc == 0x4E60DCu) {
        ctx->pc = 0x4E60DCu;
            // 0x4e60dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E60E0u;
        goto label_4e60e0;
    }
    ctx->pc = 0x4E60D8u;
    SET_GPR_U32(ctx, 31, 0x4E60E0u);
    ctx->pc = 0x4E60DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E60D8u;
            // 0x4e60dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E60E0u; }
        if (ctx->pc != 0x4E60E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E60E0u; }
        if (ctx->pc != 0x4E60E0u) { return; }
    }
    ctx->pc = 0x4E60E0u;
label_4e60e0:
    // 0x4e60e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4e60e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4e60e4:
    // 0x4e60e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e60e8:
    // 0x4e60e8: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4e60e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_4e60ec:
    // 0x4e60ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4e60ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e60f0:
    // 0x4e60f0: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4e60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4e60f4:
    // 0x4e60f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e60f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e60f8:
    // 0x4e60f8: 0x8ea60074  lw          $a2, 0x74($s5)
    ctx->pc = 0x4e60f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4e60fc:
    // 0x4e60fc: 0x27a5025c  addiu       $a1, $sp, 0x25C
    ctx->pc = 0x4e60fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_4e6100:
    // 0x4e6100: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x4e6100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_4e6104:
    // 0x4e6104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e6104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e6108:
    // 0x4e6108: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x4e6108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e610c:
    // 0x4e610c: 0x8cd40000  lw          $s4, 0x0($a2)
    ctx->pc = 0x4e610cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4e6110:
    // 0x4e6110: 0xafa50250  sw          $a1, 0x250($sp)
    ctx->pc = 0x4e6110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 5));
label_4e6114:
    // 0x4e6114: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x4e6114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_4e6118:
    // 0x4e6118: 0x8e8400d4  lw          $a0, 0xD4($s4)
    ctx->pc = 0x4e6118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_4e611c:
    // 0x4e611c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_4e6120:
    if (ctx->pc == 0x4E6120u) {
        ctx->pc = 0x4E6124u;
        goto label_4e6124;
    }
    ctx->pc = 0x4E611Cu;
    {
        const bool branch_taken_0x4e611c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e611c) {
            ctx->pc = 0x4E6130u;
            goto label_4e6130;
        }
    }
    ctx->pc = 0x4E6124u;
label_4e6124:
    // 0x4e6124: 0x10000054  b           . + 4 + (0x54 << 2)
label_4e6128:
    if (ctx->pc == 0x4E6128u) {
        ctx->pc = 0x4E6128u;
            // 0x4e6128: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E612Cu;
        goto label_4e612c;
    }
    ctx->pc = 0x4E6124u;
    {
        const bool branch_taken_0x4e6124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6124u;
            // 0x4e6128: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6124) {
            ctx->pc = 0x4E6278u;
            goto label_4e6278;
        }
    }
    ctx->pc = 0x4E612Cu;
label_4e612c:
    // 0x4e612c: 0x0  nop
    ctx->pc = 0x4e612cu;
    // NOP
label_4e6130:
    // 0x4e6130: 0x2684006c  addiu       $a0, $s4, 0x6C
    ctx->pc = 0x4e6130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
label_4e6134:
    // 0x4e6134: 0xc0d639c  jal         func_358E70
label_4e6138:
    if (ctx->pc == 0x4E6138u) {
        ctx->pc = 0x4E6138u;
            // 0x4e6138: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E613Cu;
        goto label_4e613c;
    }
    ctx->pc = 0x4E6134u;
    SET_GPR_U32(ctx, 31, 0x4E613Cu);
    ctx->pc = 0x4E6138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6134u;
            // 0x4e6138: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E613Cu; }
        if (ctx->pc != 0x4E613Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E613Cu; }
        if (ctx->pc != 0x4E613Cu) { return; }
    }
    ctx->pc = 0x4E613Cu;
label_4e613c:
    // 0x4e613c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_4e6140:
    if (ctx->pc == 0x4E6140u) {
        ctx->pc = 0x4E6144u;
        goto label_4e6144;
    }
    ctx->pc = 0x4E613Cu;
    {
        const bool branch_taken_0x4e613c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e613c) {
            ctx->pc = 0x4E6260u;
            goto label_4e6260;
        }
    }
    ctx->pc = 0x4E6144u;
label_4e6144:
    // 0x4e6144: 0xc0d1c14  jal         func_347050
label_4e6148:
    if (ctx->pc == 0x4E6148u) {
        ctx->pc = 0x4E6148u;
            // 0x4e6148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E614Cu;
        goto label_4e614c;
    }
    ctx->pc = 0x4E6144u;
    SET_GPR_U32(ctx, 31, 0x4E614Cu);
    ctx->pc = 0x4E6148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6144u;
            // 0x4e6148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E614Cu; }
        if (ctx->pc != 0x4E614Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E614Cu; }
        if (ctx->pc != 0x4E614Cu) { return; }
    }
    ctx->pc = 0x4E614Cu;
label_4e614c:
    // 0x4e614c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e614cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e6150:
    // 0x4e6150: 0xc04f278  jal         func_13C9E0
label_4e6154:
    if (ctx->pc == 0x4E6154u) {
        ctx->pc = 0x4E6154u;
            // 0x4e6154: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4E6158u;
        goto label_4e6158;
    }
    ctx->pc = 0x4E6150u;
    SET_GPR_U32(ctx, 31, 0x4E6158u);
    ctx->pc = 0x4E6154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6150u;
            // 0x4e6154: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6158u; }
        if (ctx->pc != 0x4E6158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6158u; }
        if (ctx->pc != 0x4E6158u) { return; }
    }
    ctx->pc = 0x4E6158u;
label_4e6158:
    // 0x4e6158: 0xc0d1c10  jal         func_347040
label_4e615c:
    if (ctx->pc == 0x4E615Cu) {
        ctx->pc = 0x4E615Cu;
            // 0x4e615c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6160u;
        goto label_4e6160;
    }
    ctx->pc = 0x4E6158u;
    SET_GPR_U32(ctx, 31, 0x4E6160u);
    ctx->pc = 0x4E615Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6158u;
            // 0x4e615c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6160u; }
        if (ctx->pc != 0x4E6160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6160u; }
        if (ctx->pc != 0x4E6160u) { return; }
    }
    ctx->pc = 0x4E6160u;
label_4e6160:
    // 0x4e6160: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e6160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e6164:
    // 0x4e6164: 0xc04ce80  jal         func_133A00
label_4e6168:
    if (ctx->pc == 0x4E6168u) {
        ctx->pc = 0x4E6168u;
            // 0x4e6168: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4E616Cu;
        goto label_4e616c;
    }
    ctx->pc = 0x4E6164u;
    SET_GPR_U32(ctx, 31, 0x4E616Cu);
    ctx->pc = 0x4E6168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6164u;
            // 0x4e6168: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E616Cu; }
        if (ctx->pc != 0x4E616Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E616Cu; }
        if (ctx->pc != 0x4E616Cu) { return; }
    }
    ctx->pc = 0x4E616Cu;
label_4e616c:
    // 0x4e616c: 0xc0d4108  jal         func_350420
label_4e6170:
    if (ctx->pc == 0x4E6170u) {
        ctx->pc = 0x4E6174u;
        goto label_4e6174;
    }
    ctx->pc = 0x4E616Cu;
    SET_GPR_U32(ctx, 31, 0x4E6174u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6174u; }
        if (ctx->pc != 0x4E6174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6174u; }
        if (ctx->pc != 0x4E6174u) { return; }
    }
    ctx->pc = 0x4E6174u;
label_4e6174:
    // 0x4e6174: 0xc0b36b4  jal         func_2CDAD0
label_4e6178:
    if (ctx->pc == 0x4E6178u) {
        ctx->pc = 0x4E6178u;
            // 0x4e6178: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E617Cu;
        goto label_4e617c;
    }
    ctx->pc = 0x4E6174u;
    SET_GPR_U32(ctx, 31, 0x4E617Cu);
    ctx->pc = 0x4E6178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6174u;
            // 0x4e6178: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E617Cu; }
        if (ctx->pc != 0x4E617Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E617Cu; }
        if (ctx->pc != 0x4E617Cu) { return; }
    }
    ctx->pc = 0x4E617Cu;
label_4e617c:
    // 0x4e617c: 0xc0b9c64  jal         func_2E7190
label_4e6180:
    if (ctx->pc == 0x4E6180u) {
        ctx->pc = 0x4E6180u;
            // 0x4e6180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6184u;
        goto label_4e6184;
    }
    ctx->pc = 0x4E617Cu;
    SET_GPR_U32(ctx, 31, 0x4E6184u);
    ctx->pc = 0x4E6180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E617Cu;
            // 0x4e6180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6184u; }
        if (ctx->pc != 0x4E6184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6184u; }
        if (ctx->pc != 0x4E6184u) { return; }
    }
    ctx->pc = 0x4E6184u;
label_4e6184:
    // 0x4e6184: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4e6184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_4e6188:
    // 0x4e6188: 0xc0d4104  jal         func_350410
label_4e618c:
    if (ctx->pc == 0x4E618Cu) {
        ctx->pc = 0x4E618Cu;
            // 0x4e618c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6190u;
        goto label_4e6190;
    }
    ctx->pc = 0x4E6188u;
    SET_GPR_U32(ctx, 31, 0x4E6190u);
    ctx->pc = 0x4E618Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6188u;
            // 0x4e618c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6190u; }
        if (ctx->pc != 0x4E6190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6190u; }
        if (ctx->pc != 0x4E6190u) { return; }
    }
    ctx->pc = 0x4E6190u;
label_4e6190:
    // 0x4e6190: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x4e6190u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4e6194:
    // 0x4e6194: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4e6194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4e6198:
    // 0x4e6198: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4e6198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e619c:
    // 0x4e619c: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x4e619cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4e61a0:
    // 0x4e61a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4e61a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e61a4:
    // 0x4e61a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4e61a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e61a8:
    // 0x4e61a8: 0xc0d40ac  jal         func_3502B0
label_4e61ac:
    if (ctx->pc == 0x4E61ACu) {
        ctx->pc = 0x4E61ACu;
            // 0x4e61ac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4E61B0u;
        goto label_4e61b0;
    }
    ctx->pc = 0x4E61A8u;
    SET_GPR_U32(ctx, 31, 0x4E61B0u);
    ctx->pc = 0x4E61ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E61A8u;
            // 0x4e61ac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E61B0u; }
        if (ctx->pc != 0x4E61B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E61B0u; }
        if (ctx->pc != 0x4E61B0u) { return; }
    }
    ctx->pc = 0x4E61B0u;
label_4e61b0:
    // 0x4e61b0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4e61b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4e61b4:
    // 0x4e61b4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_4e61b8:
    if (ctx->pc == 0x4E61B8u) {
        ctx->pc = 0x4E61B8u;
            // 0x4e61b8: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4E61BCu;
        goto label_4e61bc;
    }
    ctx->pc = 0x4E61B4u;
    {
        const bool branch_taken_0x4e61b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E61B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E61B4u;
            // 0x4e61b8: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e61b4) {
            ctx->pc = 0x4E61C8u;
            goto label_4e61c8;
        }
    }
    ctx->pc = 0x4E61BCu;
label_4e61bc:
    // 0x4e61bc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_4e61c0:
    if (ctx->pc == 0x4E61C0u) {
        ctx->pc = 0x4E61C0u;
            // 0x4e61c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E61C4u;
        goto label_4e61c4;
    }
    ctx->pc = 0x4E61BCu;
    {
        const bool branch_taken_0x4e61bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E61C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E61BCu;
            // 0x4e61c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e61bc) {
            ctx->pc = 0x4E6278u;
            goto label_4e6278;
        }
    }
    ctx->pc = 0x4E61C4u;
label_4e61c4:
    // 0x4e61c4: 0x0  nop
    ctx->pc = 0x4e61c4u;
    // NOP
label_4e61c8:
    // 0x4e61c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e61c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e61cc:
    // 0x4e61cc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x4e61ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4e61d0:
    // 0x4e61d0: 0xc1398dc  jal         func_4E6370
label_4e61d4:
    if (ctx->pc == 0x4E61D4u) {
        ctx->pc = 0x4E61D4u;
            // 0x4e61d4: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x4E61D8u;
        goto label_4e61d8;
    }
    ctx->pc = 0x4E61D0u;
    SET_GPR_U32(ctx, 31, 0x4E61D8u);
    ctx->pc = 0x4E61D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E61D0u;
            // 0x4e61d4: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E6370u;
    if (runtime->hasFunction(0x4E6370u)) {
        auto targetFn = runtime->lookupFunction(0x4E6370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E61D8u; }
        if (ctx->pc != 0x4E61D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E6370_0x4e6370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E61D8u; }
        if (ctx->pc != 0x4E61D8u) { return; }
    }
    ctx->pc = 0x4E61D8u;
label_4e61d8:
    // 0x4e61d8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4e61d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4e61dc:
    // 0x4e61dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4e61dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4e61e0:
    // 0x4e61e0: 0xc04cd60  jal         func_133580
label_4e61e4:
    if (ctx->pc == 0x4E61E4u) {
        ctx->pc = 0x4E61E4u;
            // 0x4e61e4: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4E61E8u;
        goto label_4e61e8;
    }
    ctx->pc = 0x4E61E0u;
    SET_GPR_U32(ctx, 31, 0x4E61E8u);
    ctx->pc = 0x4E61E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E61E0u;
            // 0x4e61e4: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E61E8u; }
        if (ctx->pc != 0x4E61E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E61E8u; }
        if (ctx->pc != 0x4E61E8u) { return; }
    }
    ctx->pc = 0x4E61E8u;
label_4e61e8:
    // 0x4e61e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e61ec:
    // 0x4e61ec: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x4e61ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_4e61f0:
    // 0x4e61f0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4e61f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4e61f4:
    // 0x4e61f4: 0xc04e4a4  jal         func_139290
label_4e61f8:
    if (ctx->pc == 0x4E61F8u) {
        ctx->pc = 0x4E61F8u;
            // 0x4e61f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E61FCu;
        goto label_4e61fc;
    }
    ctx->pc = 0x4E61F4u;
    SET_GPR_U32(ctx, 31, 0x4E61FCu);
    ctx->pc = 0x4E61F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E61F4u;
            // 0x4e61f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E61FCu; }
        if (ctx->pc != 0x4E61FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E61FCu; }
        if (ctx->pc != 0x4E61FCu) { return; }
    }
    ctx->pc = 0x4E61FCu;
label_4e61fc:
    // 0x4e61fc: 0xc0d5d80  jal         func_357600
label_4e6200:
    if (ctx->pc == 0x4E6200u) {
        ctx->pc = 0x4E6200u;
            // 0x4e6200: 0x8e84009c  lw          $a0, 0x9C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
        ctx->pc = 0x4E6204u;
        goto label_4e6204;
    }
    ctx->pc = 0x4E61FCu;
    SET_GPR_U32(ctx, 31, 0x4E6204u);
    ctx->pc = 0x4E6200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E61FCu;
            // 0x4e6200: 0x8e84009c  lw          $a0, 0x9C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357600u;
    if (runtime->hasFunction(0x357600u)) {
        auto targetFn = runtime->lookupFunction(0x357600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6204u; }
        if (ctx->pc != 0x4E6204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357600_0x357600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6204u; }
        if (ctx->pc != 0x4E6204u) { return; }
    }
    ctx->pc = 0x4E6204u;
label_4e6204:
    // 0x4e6204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4e6208:
    if (ctx->pc == 0x4E6208u) {
        ctx->pc = 0x4E620Cu;
        goto label_4e620c;
    }
    ctx->pc = 0x4E6204u;
    {
        const bool branch_taken_0x4e6204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6204) {
            ctx->pc = 0x4E6218u;
            goto label_4e6218;
        }
    }
    ctx->pc = 0x4E620Cu;
label_4e620c:
    // 0x4e620c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x4e620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_4e6210:
    // 0x4e6210: 0x10000003  b           . + 4 + (0x3 << 2)
label_4e6214:
    if (ctx->pc == 0x4E6214u) {
        ctx->pc = 0x4E6214u;
            // 0x4e6214: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x4E6218u;
        goto label_4e6218;
    }
    ctx->pc = 0x4E6210u;
    {
        const bool branch_taken_0x4e6210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6210u;
            // 0x4e6214: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6210) {
            ctx->pc = 0x4E6220u;
            goto label_4e6220;
        }
    }
    ctx->pc = 0x4E6218u;
label_4e6218:
    // 0x4e6218: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x4e6218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_4e621c:
    // 0x4e621c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4e621cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4e6220:
    // 0x4e6220: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4e6220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e6224:
    // 0x4e6224: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4e6224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4e6228:
    // 0x4e6228: 0x320f809  jalr        $t9
label_4e622c:
    if (ctx->pc == 0x4E622Cu) {
        ctx->pc = 0x4E622Cu;
            // 0x4e622c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6230u;
        goto label_4e6230;
    }
    ctx->pc = 0x4E6228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E6230u);
        ctx->pc = 0x4E622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6228u;
            // 0x4e622c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E6230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E6230u; }
            if (ctx->pc != 0x4E6230u) { return; }
        }
        }
    }
    ctx->pc = 0x4E6230u;
label_4e6230:
    // 0x4e6230: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x4e6230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_4e6234:
    // 0x4e6234: 0xc68c00d8  lwc1        $f12, 0xD8($s4)
    ctx->pc = 0x4e6234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e6238:
    // 0x4e6238: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4e6238u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4e623c:
    // 0x4e623c: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x4e623cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_4e6240:
    // 0x4e6240: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4e6240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e6244:
    // 0x4e6244: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4e6244u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e6248:
    // 0x4e6248: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x4e6248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4e624c:
    // 0x4e624c: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x4e624cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4e6250:
    // 0x4e6250: 0xc04cff4  jal         func_133FD0
label_4e6254:
    if (ctx->pc == 0x4E6254u) {
        ctx->pc = 0x4E6254u;
            // 0x4e6254: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x4E6258u;
        goto label_4e6258;
    }
    ctx->pc = 0x4E6250u;
    SET_GPR_U32(ctx, 31, 0x4E6258u);
    ctx->pc = 0x4E6254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6250u;
            // 0x4e6254: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6258u; }
        if (ctx->pc != 0x4E6258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6258u; }
        if (ctx->pc != 0x4E6258u) { return; }
    }
    ctx->pc = 0x4E6258u;
label_4e6258:
    // 0x4e6258: 0xc69600d8  lwc1        $f22, 0xD8($s4)
    ctx->pc = 0x4e6258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4e625c:
    // 0x4e625c: 0x641e0001  daddiu      $fp, $zero, 0x1
    ctx->pc = 0x4e625cu;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4e6260:
    // 0x4e6260: 0x8e84009c  lw          $a0, 0x9C($s4)
    ctx->pc = 0x4e6260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_4e6264:
    // 0x4e6264: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4e6264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e6268:
    // 0x4e6268: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4e6268u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4e626c:
    // 0x4e626c: 0xc0e325c  jal         func_38C970
label_4e6270:
    if (ctx->pc == 0x4E6270u) {
        ctx->pc = 0x4E6270u;
            // 0x4e6270: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6274u;
        goto label_4e6274;
    }
    ctx->pc = 0x4E626Cu;
    SET_GPR_U32(ctx, 31, 0x4E6274u);
    ctx->pc = 0x4E6270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E626Cu;
            // 0x4e6270: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6274u; }
        if (ctx->pc != 0x4E6274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6274u; }
        if (ctx->pc != 0x4E6274u) { return; }
    }
    ctx->pc = 0x4E6274u;
label_4e6274:
    // 0x4e6274: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x4e6274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_4e6278:
    // 0x4e6278: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_4e627c:
    if (ctx->pc == 0x4E627Cu) {
        ctx->pc = 0x4E6280u;
        goto label_4e6280;
    }
    ctx->pc = 0x4E6278u;
    {
        const bool branch_taken_0x4e6278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6278) {
            ctx->pc = 0x4E62E0u;
            goto label_4e62e0;
        }
    }
    ctx->pc = 0x4E6280u;
label_4e6280:
    // 0x4e6280: 0x86430066  lh          $v1, 0x66($s2)
    ctx->pc = 0x4e6280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4e6284:
    // 0x4e6284: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x4e6284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_4e6288:
    // 0x4e6288: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4e6288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4e628c:
    // 0x4e628c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4e628cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4e6290:
    // 0x4e6290: 0xc04cce8  jal         func_1333A0
label_4e6294:
    if (ctx->pc == 0x4E6294u) {
        ctx->pc = 0x4E6294u;
            // 0x4e6294: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4E6298u;
        goto label_4e6298;
    }
    ctx->pc = 0x4E6290u;
    SET_GPR_U32(ctx, 31, 0x4E6298u);
    ctx->pc = 0x4E6294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6290u;
            // 0x4e6294: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6298u; }
        if (ctx->pc != 0x4E6298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6298u; }
        if (ctx->pc != 0x4E6298u) { return; }
    }
    ctx->pc = 0x4E6298u;
label_4e6298:
    // 0x4e6298: 0x86450066  lh          $a1, 0x66($s2)
    ctx->pc = 0x4e6298u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4e629c:
    // 0x4e629c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e629cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e62a0:
    // 0x4e62a0: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x4e62a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4e62a4:
    // 0x4e62a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4e62a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e62a8:
    // 0x4e62a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e62a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4e62ac:
    // 0x4e62ac: 0xe4960000  swc1        $f22, 0x0($a0)
    ctx->pc = 0x4e62acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_4e62b0:
    // 0x4e62b0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e62b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e62b4:
    // 0x4e62b4: 0x86450066  lh          $a1, 0x66($s2)
    ctx->pc = 0x4e62b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_4e62b8:
    // 0x4e62b8: 0x86440064  lh          $a0, 0x64($s2)
    ctx->pc = 0x4e62b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
label_4e62bc:
    // 0x4e62bc: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x4e62bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_4e62c0:
    // 0x4e62c0: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x4e62c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4e62c4:
    // 0x4e62c4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x4e62c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4e62c8:
    // 0x4e62c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4e62c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4e62cc:
    // 0x4e62cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4e62ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_4e62d0:
    // 0x4e62d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4e62d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_4e62d4:
    // 0x4e62d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4e62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4e62d8:
    // 0x4e62d8: 0xa6430066  sh          $v1, 0x66($s2)
    ctx->pc = 0x4e62d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 102), (uint16_t)GPR_U32(ctx, 3));
label_4e62dc:
    // 0x4e62dc: 0x0  nop
    ctx->pc = 0x4e62dcu;
    // NOP
label_4e62e0:
    // 0x4e62e0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4e62e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4e62e4:
    // 0x4e62e4: 0x2d1182b  sltu        $v1, $s6, $s1
    ctx->pc = 0x4e62e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e62e8:
    // 0x4e62e8: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
label_4e62ec:
    if (ctx->pc == 0x4E62ECu) {
        ctx->pc = 0x4E62ECu;
            // 0x4e62ec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4E62F0u;
        goto label_4e62f0;
    }
    ctx->pc = 0x4E62E8u;
    {
        const bool branch_taken_0x4e62e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E62ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E62E8u;
            // 0x4e62ec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e62e8) {
            ctx->pc = 0x4E60F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e60f8;
        }
    }
    ctx->pc = 0x4E62F0u;
label_4e62f0:
    // 0x4e62f0: 0x8ea40098  lw          $a0, 0x98($s5)
    ctx->pc = 0x4e62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
label_4e62f4:
    // 0x4e62f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e62f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e62f8:
    // 0x4e62f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e62fc:
    // 0x4e62fc: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x4e62fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_4e6300:
    // 0x4e6300: 0x8ea4009c  lw          $a0, 0x9C($s5)
    ctx->pc = 0x4e6300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_4e6304:
    // 0x4e6304: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x4e6304u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_4e6308:
    // 0x4e6308: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4e6308u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4e630c:
    // 0x4e630c: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_4e6310:
    if (ctx->pc == 0x4E6310u) {
        ctx->pc = 0x4E6310u;
            // 0x4e6310: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E6314u;
        goto label_4e6314;
    }
    ctx->pc = 0x4E630Cu;
    {
        const bool branch_taken_0x4e630c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4E6310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E630Cu;
            // 0x4e6310: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e630c) {
            ctx->pc = 0x4E6330u;
            goto label_4e6330;
        }
    }
    ctx->pc = 0x4E6314u;
label_4e6314:
    // 0x4e6314: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e6314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e6318:
    // 0x4e6318: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e6318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e631c:
    // 0x4e631c: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4e631cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4e6320:
    // 0x4e6320: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e6320u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e6324:
    // 0x4e6324: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4e6324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4e6328:
    // 0x4e6328: 0xc055990  jal         func_156640
label_4e632c:
    if (ctx->pc == 0x4E632Cu) {
        ctx->pc = 0x4E632Cu;
            // 0x4e632c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E6330u;
        goto label_4e6330;
    }
    ctx->pc = 0x4E6328u;
    SET_GPR_U32(ctx, 31, 0x4E6330u);
    ctx->pc = 0x4E632Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6328u;
            // 0x4e632c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6330u; }
        if (ctx->pc != 0x4E6330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E6330u; }
        if (ctx->pc != 0x4E6330u) { return; }
    }
    ctx->pc = 0x4E6330u;
label_4e6330:
    // 0x4e6330: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4e6330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4e6334:
    // 0x4e6334: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4e6334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4e6338:
    // 0x4e6338: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4e6338u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4e633c:
    // 0x4e633c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4e633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4e6340:
    // 0x4e6340: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4e6340u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e6344:
    // 0x4e6344: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e6348:
    // 0x4e6348: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4e6348u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e634c:
    // 0x4e634c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4e634cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e6350:
    // 0x4e6350: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e6350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e6354:
    // 0x4e6354: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4e6354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e6358:
    // 0x4e6358: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e6358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e635c:
    // 0x4e635c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e635cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e6360:
    // 0x4e6360: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e6360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6364:
    // 0x4e6364: 0x3e00008  jr          $ra
label_4e6368:
    if (ctx->pc == 0x4E6368u) {
        ctx->pc = 0x4E6368u;
            // 0x4e6368: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x4E636Cu;
        goto label_4e636c;
    }
    ctx->pc = 0x4E6364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E6364u;
            // 0x4e6368: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E636Cu;
label_4e636c:
    // 0x4e636c: 0x0  nop
    ctx->pc = 0x4e636cu;
    // NOP
}
