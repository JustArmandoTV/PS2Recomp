#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E5860
// Address: 0x3e5860 - 0x3e6110
void sub_003E5860_0x3e5860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5860_0x3e5860");
#endif

    switch (ctx->pc) {
        case 0x3e5860u: goto label_3e5860;
        case 0x3e5864u: goto label_3e5864;
        case 0x3e5868u: goto label_3e5868;
        case 0x3e586cu: goto label_3e586c;
        case 0x3e5870u: goto label_3e5870;
        case 0x3e5874u: goto label_3e5874;
        case 0x3e5878u: goto label_3e5878;
        case 0x3e587cu: goto label_3e587c;
        case 0x3e5880u: goto label_3e5880;
        case 0x3e5884u: goto label_3e5884;
        case 0x3e5888u: goto label_3e5888;
        case 0x3e588cu: goto label_3e588c;
        case 0x3e5890u: goto label_3e5890;
        case 0x3e5894u: goto label_3e5894;
        case 0x3e5898u: goto label_3e5898;
        case 0x3e589cu: goto label_3e589c;
        case 0x3e58a0u: goto label_3e58a0;
        case 0x3e58a4u: goto label_3e58a4;
        case 0x3e58a8u: goto label_3e58a8;
        case 0x3e58acu: goto label_3e58ac;
        case 0x3e58b0u: goto label_3e58b0;
        case 0x3e58b4u: goto label_3e58b4;
        case 0x3e58b8u: goto label_3e58b8;
        case 0x3e58bcu: goto label_3e58bc;
        case 0x3e58c0u: goto label_3e58c0;
        case 0x3e58c4u: goto label_3e58c4;
        case 0x3e58c8u: goto label_3e58c8;
        case 0x3e58ccu: goto label_3e58cc;
        case 0x3e58d0u: goto label_3e58d0;
        case 0x3e58d4u: goto label_3e58d4;
        case 0x3e58d8u: goto label_3e58d8;
        case 0x3e58dcu: goto label_3e58dc;
        case 0x3e58e0u: goto label_3e58e0;
        case 0x3e58e4u: goto label_3e58e4;
        case 0x3e58e8u: goto label_3e58e8;
        case 0x3e58ecu: goto label_3e58ec;
        case 0x3e58f0u: goto label_3e58f0;
        case 0x3e58f4u: goto label_3e58f4;
        case 0x3e58f8u: goto label_3e58f8;
        case 0x3e58fcu: goto label_3e58fc;
        case 0x3e5900u: goto label_3e5900;
        case 0x3e5904u: goto label_3e5904;
        case 0x3e5908u: goto label_3e5908;
        case 0x3e590cu: goto label_3e590c;
        case 0x3e5910u: goto label_3e5910;
        case 0x3e5914u: goto label_3e5914;
        case 0x3e5918u: goto label_3e5918;
        case 0x3e591cu: goto label_3e591c;
        case 0x3e5920u: goto label_3e5920;
        case 0x3e5924u: goto label_3e5924;
        case 0x3e5928u: goto label_3e5928;
        case 0x3e592cu: goto label_3e592c;
        case 0x3e5930u: goto label_3e5930;
        case 0x3e5934u: goto label_3e5934;
        case 0x3e5938u: goto label_3e5938;
        case 0x3e593cu: goto label_3e593c;
        case 0x3e5940u: goto label_3e5940;
        case 0x3e5944u: goto label_3e5944;
        case 0x3e5948u: goto label_3e5948;
        case 0x3e594cu: goto label_3e594c;
        case 0x3e5950u: goto label_3e5950;
        case 0x3e5954u: goto label_3e5954;
        case 0x3e5958u: goto label_3e5958;
        case 0x3e595cu: goto label_3e595c;
        case 0x3e5960u: goto label_3e5960;
        case 0x3e5964u: goto label_3e5964;
        case 0x3e5968u: goto label_3e5968;
        case 0x3e596cu: goto label_3e596c;
        case 0x3e5970u: goto label_3e5970;
        case 0x3e5974u: goto label_3e5974;
        case 0x3e5978u: goto label_3e5978;
        case 0x3e597cu: goto label_3e597c;
        case 0x3e5980u: goto label_3e5980;
        case 0x3e5984u: goto label_3e5984;
        case 0x3e5988u: goto label_3e5988;
        case 0x3e598cu: goto label_3e598c;
        case 0x3e5990u: goto label_3e5990;
        case 0x3e5994u: goto label_3e5994;
        case 0x3e5998u: goto label_3e5998;
        case 0x3e599cu: goto label_3e599c;
        case 0x3e59a0u: goto label_3e59a0;
        case 0x3e59a4u: goto label_3e59a4;
        case 0x3e59a8u: goto label_3e59a8;
        case 0x3e59acu: goto label_3e59ac;
        case 0x3e59b0u: goto label_3e59b0;
        case 0x3e59b4u: goto label_3e59b4;
        case 0x3e59b8u: goto label_3e59b8;
        case 0x3e59bcu: goto label_3e59bc;
        case 0x3e59c0u: goto label_3e59c0;
        case 0x3e59c4u: goto label_3e59c4;
        case 0x3e59c8u: goto label_3e59c8;
        case 0x3e59ccu: goto label_3e59cc;
        case 0x3e59d0u: goto label_3e59d0;
        case 0x3e59d4u: goto label_3e59d4;
        case 0x3e59d8u: goto label_3e59d8;
        case 0x3e59dcu: goto label_3e59dc;
        case 0x3e59e0u: goto label_3e59e0;
        case 0x3e59e4u: goto label_3e59e4;
        case 0x3e59e8u: goto label_3e59e8;
        case 0x3e59ecu: goto label_3e59ec;
        case 0x3e59f0u: goto label_3e59f0;
        case 0x3e59f4u: goto label_3e59f4;
        case 0x3e59f8u: goto label_3e59f8;
        case 0x3e59fcu: goto label_3e59fc;
        case 0x3e5a00u: goto label_3e5a00;
        case 0x3e5a04u: goto label_3e5a04;
        case 0x3e5a08u: goto label_3e5a08;
        case 0x3e5a0cu: goto label_3e5a0c;
        case 0x3e5a10u: goto label_3e5a10;
        case 0x3e5a14u: goto label_3e5a14;
        case 0x3e5a18u: goto label_3e5a18;
        case 0x3e5a1cu: goto label_3e5a1c;
        case 0x3e5a20u: goto label_3e5a20;
        case 0x3e5a24u: goto label_3e5a24;
        case 0x3e5a28u: goto label_3e5a28;
        case 0x3e5a2cu: goto label_3e5a2c;
        case 0x3e5a30u: goto label_3e5a30;
        case 0x3e5a34u: goto label_3e5a34;
        case 0x3e5a38u: goto label_3e5a38;
        case 0x3e5a3cu: goto label_3e5a3c;
        case 0x3e5a40u: goto label_3e5a40;
        case 0x3e5a44u: goto label_3e5a44;
        case 0x3e5a48u: goto label_3e5a48;
        case 0x3e5a4cu: goto label_3e5a4c;
        case 0x3e5a50u: goto label_3e5a50;
        case 0x3e5a54u: goto label_3e5a54;
        case 0x3e5a58u: goto label_3e5a58;
        case 0x3e5a5cu: goto label_3e5a5c;
        case 0x3e5a60u: goto label_3e5a60;
        case 0x3e5a64u: goto label_3e5a64;
        case 0x3e5a68u: goto label_3e5a68;
        case 0x3e5a6cu: goto label_3e5a6c;
        case 0x3e5a70u: goto label_3e5a70;
        case 0x3e5a74u: goto label_3e5a74;
        case 0x3e5a78u: goto label_3e5a78;
        case 0x3e5a7cu: goto label_3e5a7c;
        case 0x3e5a80u: goto label_3e5a80;
        case 0x3e5a84u: goto label_3e5a84;
        case 0x3e5a88u: goto label_3e5a88;
        case 0x3e5a8cu: goto label_3e5a8c;
        case 0x3e5a90u: goto label_3e5a90;
        case 0x3e5a94u: goto label_3e5a94;
        case 0x3e5a98u: goto label_3e5a98;
        case 0x3e5a9cu: goto label_3e5a9c;
        case 0x3e5aa0u: goto label_3e5aa0;
        case 0x3e5aa4u: goto label_3e5aa4;
        case 0x3e5aa8u: goto label_3e5aa8;
        case 0x3e5aacu: goto label_3e5aac;
        case 0x3e5ab0u: goto label_3e5ab0;
        case 0x3e5ab4u: goto label_3e5ab4;
        case 0x3e5ab8u: goto label_3e5ab8;
        case 0x3e5abcu: goto label_3e5abc;
        case 0x3e5ac0u: goto label_3e5ac0;
        case 0x3e5ac4u: goto label_3e5ac4;
        case 0x3e5ac8u: goto label_3e5ac8;
        case 0x3e5accu: goto label_3e5acc;
        case 0x3e5ad0u: goto label_3e5ad0;
        case 0x3e5ad4u: goto label_3e5ad4;
        case 0x3e5ad8u: goto label_3e5ad8;
        case 0x3e5adcu: goto label_3e5adc;
        case 0x3e5ae0u: goto label_3e5ae0;
        case 0x3e5ae4u: goto label_3e5ae4;
        case 0x3e5ae8u: goto label_3e5ae8;
        case 0x3e5aecu: goto label_3e5aec;
        case 0x3e5af0u: goto label_3e5af0;
        case 0x3e5af4u: goto label_3e5af4;
        case 0x3e5af8u: goto label_3e5af8;
        case 0x3e5afcu: goto label_3e5afc;
        case 0x3e5b00u: goto label_3e5b00;
        case 0x3e5b04u: goto label_3e5b04;
        case 0x3e5b08u: goto label_3e5b08;
        case 0x3e5b0cu: goto label_3e5b0c;
        case 0x3e5b10u: goto label_3e5b10;
        case 0x3e5b14u: goto label_3e5b14;
        case 0x3e5b18u: goto label_3e5b18;
        case 0x3e5b1cu: goto label_3e5b1c;
        case 0x3e5b20u: goto label_3e5b20;
        case 0x3e5b24u: goto label_3e5b24;
        case 0x3e5b28u: goto label_3e5b28;
        case 0x3e5b2cu: goto label_3e5b2c;
        case 0x3e5b30u: goto label_3e5b30;
        case 0x3e5b34u: goto label_3e5b34;
        case 0x3e5b38u: goto label_3e5b38;
        case 0x3e5b3cu: goto label_3e5b3c;
        case 0x3e5b40u: goto label_3e5b40;
        case 0x3e5b44u: goto label_3e5b44;
        case 0x3e5b48u: goto label_3e5b48;
        case 0x3e5b4cu: goto label_3e5b4c;
        case 0x3e5b50u: goto label_3e5b50;
        case 0x3e5b54u: goto label_3e5b54;
        case 0x3e5b58u: goto label_3e5b58;
        case 0x3e5b5cu: goto label_3e5b5c;
        case 0x3e5b60u: goto label_3e5b60;
        case 0x3e5b64u: goto label_3e5b64;
        case 0x3e5b68u: goto label_3e5b68;
        case 0x3e5b6cu: goto label_3e5b6c;
        case 0x3e5b70u: goto label_3e5b70;
        case 0x3e5b74u: goto label_3e5b74;
        case 0x3e5b78u: goto label_3e5b78;
        case 0x3e5b7cu: goto label_3e5b7c;
        case 0x3e5b80u: goto label_3e5b80;
        case 0x3e5b84u: goto label_3e5b84;
        case 0x3e5b88u: goto label_3e5b88;
        case 0x3e5b8cu: goto label_3e5b8c;
        case 0x3e5b90u: goto label_3e5b90;
        case 0x3e5b94u: goto label_3e5b94;
        case 0x3e5b98u: goto label_3e5b98;
        case 0x3e5b9cu: goto label_3e5b9c;
        case 0x3e5ba0u: goto label_3e5ba0;
        case 0x3e5ba4u: goto label_3e5ba4;
        case 0x3e5ba8u: goto label_3e5ba8;
        case 0x3e5bacu: goto label_3e5bac;
        case 0x3e5bb0u: goto label_3e5bb0;
        case 0x3e5bb4u: goto label_3e5bb4;
        case 0x3e5bb8u: goto label_3e5bb8;
        case 0x3e5bbcu: goto label_3e5bbc;
        case 0x3e5bc0u: goto label_3e5bc0;
        case 0x3e5bc4u: goto label_3e5bc4;
        case 0x3e5bc8u: goto label_3e5bc8;
        case 0x3e5bccu: goto label_3e5bcc;
        case 0x3e5bd0u: goto label_3e5bd0;
        case 0x3e5bd4u: goto label_3e5bd4;
        case 0x3e5bd8u: goto label_3e5bd8;
        case 0x3e5bdcu: goto label_3e5bdc;
        case 0x3e5be0u: goto label_3e5be0;
        case 0x3e5be4u: goto label_3e5be4;
        case 0x3e5be8u: goto label_3e5be8;
        case 0x3e5becu: goto label_3e5bec;
        case 0x3e5bf0u: goto label_3e5bf0;
        case 0x3e5bf4u: goto label_3e5bf4;
        case 0x3e5bf8u: goto label_3e5bf8;
        case 0x3e5bfcu: goto label_3e5bfc;
        case 0x3e5c00u: goto label_3e5c00;
        case 0x3e5c04u: goto label_3e5c04;
        case 0x3e5c08u: goto label_3e5c08;
        case 0x3e5c0cu: goto label_3e5c0c;
        case 0x3e5c10u: goto label_3e5c10;
        case 0x3e5c14u: goto label_3e5c14;
        case 0x3e5c18u: goto label_3e5c18;
        case 0x3e5c1cu: goto label_3e5c1c;
        case 0x3e5c20u: goto label_3e5c20;
        case 0x3e5c24u: goto label_3e5c24;
        case 0x3e5c28u: goto label_3e5c28;
        case 0x3e5c2cu: goto label_3e5c2c;
        case 0x3e5c30u: goto label_3e5c30;
        case 0x3e5c34u: goto label_3e5c34;
        case 0x3e5c38u: goto label_3e5c38;
        case 0x3e5c3cu: goto label_3e5c3c;
        case 0x3e5c40u: goto label_3e5c40;
        case 0x3e5c44u: goto label_3e5c44;
        case 0x3e5c48u: goto label_3e5c48;
        case 0x3e5c4cu: goto label_3e5c4c;
        case 0x3e5c50u: goto label_3e5c50;
        case 0x3e5c54u: goto label_3e5c54;
        case 0x3e5c58u: goto label_3e5c58;
        case 0x3e5c5cu: goto label_3e5c5c;
        case 0x3e5c60u: goto label_3e5c60;
        case 0x3e5c64u: goto label_3e5c64;
        case 0x3e5c68u: goto label_3e5c68;
        case 0x3e5c6cu: goto label_3e5c6c;
        case 0x3e5c70u: goto label_3e5c70;
        case 0x3e5c74u: goto label_3e5c74;
        case 0x3e5c78u: goto label_3e5c78;
        case 0x3e5c7cu: goto label_3e5c7c;
        case 0x3e5c80u: goto label_3e5c80;
        case 0x3e5c84u: goto label_3e5c84;
        case 0x3e5c88u: goto label_3e5c88;
        case 0x3e5c8cu: goto label_3e5c8c;
        case 0x3e5c90u: goto label_3e5c90;
        case 0x3e5c94u: goto label_3e5c94;
        case 0x3e5c98u: goto label_3e5c98;
        case 0x3e5c9cu: goto label_3e5c9c;
        case 0x3e5ca0u: goto label_3e5ca0;
        case 0x3e5ca4u: goto label_3e5ca4;
        case 0x3e5ca8u: goto label_3e5ca8;
        case 0x3e5cacu: goto label_3e5cac;
        case 0x3e5cb0u: goto label_3e5cb0;
        case 0x3e5cb4u: goto label_3e5cb4;
        case 0x3e5cb8u: goto label_3e5cb8;
        case 0x3e5cbcu: goto label_3e5cbc;
        case 0x3e5cc0u: goto label_3e5cc0;
        case 0x3e5cc4u: goto label_3e5cc4;
        case 0x3e5cc8u: goto label_3e5cc8;
        case 0x3e5cccu: goto label_3e5ccc;
        case 0x3e5cd0u: goto label_3e5cd0;
        case 0x3e5cd4u: goto label_3e5cd4;
        case 0x3e5cd8u: goto label_3e5cd8;
        case 0x3e5cdcu: goto label_3e5cdc;
        case 0x3e5ce0u: goto label_3e5ce0;
        case 0x3e5ce4u: goto label_3e5ce4;
        case 0x3e5ce8u: goto label_3e5ce8;
        case 0x3e5cecu: goto label_3e5cec;
        case 0x3e5cf0u: goto label_3e5cf0;
        case 0x3e5cf4u: goto label_3e5cf4;
        case 0x3e5cf8u: goto label_3e5cf8;
        case 0x3e5cfcu: goto label_3e5cfc;
        case 0x3e5d00u: goto label_3e5d00;
        case 0x3e5d04u: goto label_3e5d04;
        case 0x3e5d08u: goto label_3e5d08;
        case 0x3e5d0cu: goto label_3e5d0c;
        case 0x3e5d10u: goto label_3e5d10;
        case 0x3e5d14u: goto label_3e5d14;
        case 0x3e5d18u: goto label_3e5d18;
        case 0x3e5d1cu: goto label_3e5d1c;
        case 0x3e5d20u: goto label_3e5d20;
        case 0x3e5d24u: goto label_3e5d24;
        case 0x3e5d28u: goto label_3e5d28;
        case 0x3e5d2cu: goto label_3e5d2c;
        case 0x3e5d30u: goto label_3e5d30;
        case 0x3e5d34u: goto label_3e5d34;
        case 0x3e5d38u: goto label_3e5d38;
        case 0x3e5d3cu: goto label_3e5d3c;
        case 0x3e5d40u: goto label_3e5d40;
        case 0x3e5d44u: goto label_3e5d44;
        case 0x3e5d48u: goto label_3e5d48;
        case 0x3e5d4cu: goto label_3e5d4c;
        case 0x3e5d50u: goto label_3e5d50;
        case 0x3e5d54u: goto label_3e5d54;
        case 0x3e5d58u: goto label_3e5d58;
        case 0x3e5d5cu: goto label_3e5d5c;
        case 0x3e5d60u: goto label_3e5d60;
        case 0x3e5d64u: goto label_3e5d64;
        case 0x3e5d68u: goto label_3e5d68;
        case 0x3e5d6cu: goto label_3e5d6c;
        case 0x3e5d70u: goto label_3e5d70;
        case 0x3e5d74u: goto label_3e5d74;
        case 0x3e5d78u: goto label_3e5d78;
        case 0x3e5d7cu: goto label_3e5d7c;
        case 0x3e5d80u: goto label_3e5d80;
        case 0x3e5d84u: goto label_3e5d84;
        case 0x3e5d88u: goto label_3e5d88;
        case 0x3e5d8cu: goto label_3e5d8c;
        case 0x3e5d90u: goto label_3e5d90;
        case 0x3e5d94u: goto label_3e5d94;
        case 0x3e5d98u: goto label_3e5d98;
        case 0x3e5d9cu: goto label_3e5d9c;
        case 0x3e5da0u: goto label_3e5da0;
        case 0x3e5da4u: goto label_3e5da4;
        case 0x3e5da8u: goto label_3e5da8;
        case 0x3e5dacu: goto label_3e5dac;
        case 0x3e5db0u: goto label_3e5db0;
        case 0x3e5db4u: goto label_3e5db4;
        case 0x3e5db8u: goto label_3e5db8;
        case 0x3e5dbcu: goto label_3e5dbc;
        case 0x3e5dc0u: goto label_3e5dc0;
        case 0x3e5dc4u: goto label_3e5dc4;
        case 0x3e5dc8u: goto label_3e5dc8;
        case 0x3e5dccu: goto label_3e5dcc;
        case 0x3e5dd0u: goto label_3e5dd0;
        case 0x3e5dd4u: goto label_3e5dd4;
        case 0x3e5dd8u: goto label_3e5dd8;
        case 0x3e5ddcu: goto label_3e5ddc;
        case 0x3e5de0u: goto label_3e5de0;
        case 0x3e5de4u: goto label_3e5de4;
        case 0x3e5de8u: goto label_3e5de8;
        case 0x3e5decu: goto label_3e5dec;
        case 0x3e5df0u: goto label_3e5df0;
        case 0x3e5df4u: goto label_3e5df4;
        case 0x3e5df8u: goto label_3e5df8;
        case 0x3e5dfcu: goto label_3e5dfc;
        case 0x3e5e00u: goto label_3e5e00;
        case 0x3e5e04u: goto label_3e5e04;
        case 0x3e5e08u: goto label_3e5e08;
        case 0x3e5e0cu: goto label_3e5e0c;
        case 0x3e5e10u: goto label_3e5e10;
        case 0x3e5e14u: goto label_3e5e14;
        case 0x3e5e18u: goto label_3e5e18;
        case 0x3e5e1cu: goto label_3e5e1c;
        case 0x3e5e20u: goto label_3e5e20;
        case 0x3e5e24u: goto label_3e5e24;
        case 0x3e5e28u: goto label_3e5e28;
        case 0x3e5e2cu: goto label_3e5e2c;
        case 0x3e5e30u: goto label_3e5e30;
        case 0x3e5e34u: goto label_3e5e34;
        case 0x3e5e38u: goto label_3e5e38;
        case 0x3e5e3cu: goto label_3e5e3c;
        case 0x3e5e40u: goto label_3e5e40;
        case 0x3e5e44u: goto label_3e5e44;
        case 0x3e5e48u: goto label_3e5e48;
        case 0x3e5e4cu: goto label_3e5e4c;
        case 0x3e5e50u: goto label_3e5e50;
        case 0x3e5e54u: goto label_3e5e54;
        case 0x3e5e58u: goto label_3e5e58;
        case 0x3e5e5cu: goto label_3e5e5c;
        case 0x3e5e60u: goto label_3e5e60;
        case 0x3e5e64u: goto label_3e5e64;
        case 0x3e5e68u: goto label_3e5e68;
        case 0x3e5e6cu: goto label_3e5e6c;
        case 0x3e5e70u: goto label_3e5e70;
        case 0x3e5e74u: goto label_3e5e74;
        case 0x3e5e78u: goto label_3e5e78;
        case 0x3e5e7cu: goto label_3e5e7c;
        case 0x3e5e80u: goto label_3e5e80;
        case 0x3e5e84u: goto label_3e5e84;
        case 0x3e5e88u: goto label_3e5e88;
        case 0x3e5e8cu: goto label_3e5e8c;
        case 0x3e5e90u: goto label_3e5e90;
        case 0x3e5e94u: goto label_3e5e94;
        case 0x3e5e98u: goto label_3e5e98;
        case 0x3e5e9cu: goto label_3e5e9c;
        case 0x3e5ea0u: goto label_3e5ea0;
        case 0x3e5ea4u: goto label_3e5ea4;
        case 0x3e5ea8u: goto label_3e5ea8;
        case 0x3e5eacu: goto label_3e5eac;
        case 0x3e5eb0u: goto label_3e5eb0;
        case 0x3e5eb4u: goto label_3e5eb4;
        case 0x3e5eb8u: goto label_3e5eb8;
        case 0x3e5ebcu: goto label_3e5ebc;
        case 0x3e5ec0u: goto label_3e5ec0;
        case 0x3e5ec4u: goto label_3e5ec4;
        case 0x3e5ec8u: goto label_3e5ec8;
        case 0x3e5eccu: goto label_3e5ecc;
        case 0x3e5ed0u: goto label_3e5ed0;
        case 0x3e5ed4u: goto label_3e5ed4;
        case 0x3e5ed8u: goto label_3e5ed8;
        case 0x3e5edcu: goto label_3e5edc;
        case 0x3e5ee0u: goto label_3e5ee0;
        case 0x3e5ee4u: goto label_3e5ee4;
        case 0x3e5ee8u: goto label_3e5ee8;
        case 0x3e5eecu: goto label_3e5eec;
        case 0x3e5ef0u: goto label_3e5ef0;
        case 0x3e5ef4u: goto label_3e5ef4;
        case 0x3e5ef8u: goto label_3e5ef8;
        case 0x3e5efcu: goto label_3e5efc;
        case 0x3e5f00u: goto label_3e5f00;
        case 0x3e5f04u: goto label_3e5f04;
        case 0x3e5f08u: goto label_3e5f08;
        case 0x3e5f0cu: goto label_3e5f0c;
        case 0x3e5f10u: goto label_3e5f10;
        case 0x3e5f14u: goto label_3e5f14;
        case 0x3e5f18u: goto label_3e5f18;
        case 0x3e5f1cu: goto label_3e5f1c;
        case 0x3e5f20u: goto label_3e5f20;
        case 0x3e5f24u: goto label_3e5f24;
        case 0x3e5f28u: goto label_3e5f28;
        case 0x3e5f2cu: goto label_3e5f2c;
        case 0x3e5f30u: goto label_3e5f30;
        case 0x3e5f34u: goto label_3e5f34;
        case 0x3e5f38u: goto label_3e5f38;
        case 0x3e5f3cu: goto label_3e5f3c;
        case 0x3e5f40u: goto label_3e5f40;
        case 0x3e5f44u: goto label_3e5f44;
        case 0x3e5f48u: goto label_3e5f48;
        case 0x3e5f4cu: goto label_3e5f4c;
        case 0x3e5f50u: goto label_3e5f50;
        case 0x3e5f54u: goto label_3e5f54;
        case 0x3e5f58u: goto label_3e5f58;
        case 0x3e5f5cu: goto label_3e5f5c;
        case 0x3e5f60u: goto label_3e5f60;
        case 0x3e5f64u: goto label_3e5f64;
        case 0x3e5f68u: goto label_3e5f68;
        case 0x3e5f6cu: goto label_3e5f6c;
        case 0x3e5f70u: goto label_3e5f70;
        case 0x3e5f74u: goto label_3e5f74;
        case 0x3e5f78u: goto label_3e5f78;
        case 0x3e5f7cu: goto label_3e5f7c;
        case 0x3e5f80u: goto label_3e5f80;
        case 0x3e5f84u: goto label_3e5f84;
        case 0x3e5f88u: goto label_3e5f88;
        case 0x3e5f8cu: goto label_3e5f8c;
        case 0x3e5f90u: goto label_3e5f90;
        case 0x3e5f94u: goto label_3e5f94;
        case 0x3e5f98u: goto label_3e5f98;
        case 0x3e5f9cu: goto label_3e5f9c;
        case 0x3e5fa0u: goto label_3e5fa0;
        case 0x3e5fa4u: goto label_3e5fa4;
        case 0x3e5fa8u: goto label_3e5fa8;
        case 0x3e5facu: goto label_3e5fac;
        case 0x3e5fb0u: goto label_3e5fb0;
        case 0x3e5fb4u: goto label_3e5fb4;
        case 0x3e5fb8u: goto label_3e5fb8;
        case 0x3e5fbcu: goto label_3e5fbc;
        case 0x3e5fc0u: goto label_3e5fc0;
        case 0x3e5fc4u: goto label_3e5fc4;
        case 0x3e5fc8u: goto label_3e5fc8;
        case 0x3e5fccu: goto label_3e5fcc;
        case 0x3e5fd0u: goto label_3e5fd0;
        case 0x3e5fd4u: goto label_3e5fd4;
        case 0x3e5fd8u: goto label_3e5fd8;
        case 0x3e5fdcu: goto label_3e5fdc;
        case 0x3e5fe0u: goto label_3e5fe0;
        case 0x3e5fe4u: goto label_3e5fe4;
        case 0x3e5fe8u: goto label_3e5fe8;
        case 0x3e5fecu: goto label_3e5fec;
        case 0x3e5ff0u: goto label_3e5ff0;
        case 0x3e5ff4u: goto label_3e5ff4;
        case 0x3e5ff8u: goto label_3e5ff8;
        case 0x3e5ffcu: goto label_3e5ffc;
        case 0x3e6000u: goto label_3e6000;
        case 0x3e6004u: goto label_3e6004;
        case 0x3e6008u: goto label_3e6008;
        case 0x3e600cu: goto label_3e600c;
        case 0x3e6010u: goto label_3e6010;
        case 0x3e6014u: goto label_3e6014;
        case 0x3e6018u: goto label_3e6018;
        case 0x3e601cu: goto label_3e601c;
        case 0x3e6020u: goto label_3e6020;
        case 0x3e6024u: goto label_3e6024;
        case 0x3e6028u: goto label_3e6028;
        case 0x3e602cu: goto label_3e602c;
        case 0x3e6030u: goto label_3e6030;
        case 0x3e6034u: goto label_3e6034;
        case 0x3e6038u: goto label_3e6038;
        case 0x3e603cu: goto label_3e603c;
        case 0x3e6040u: goto label_3e6040;
        case 0x3e6044u: goto label_3e6044;
        case 0x3e6048u: goto label_3e6048;
        case 0x3e604cu: goto label_3e604c;
        case 0x3e6050u: goto label_3e6050;
        case 0x3e6054u: goto label_3e6054;
        case 0x3e6058u: goto label_3e6058;
        case 0x3e605cu: goto label_3e605c;
        case 0x3e6060u: goto label_3e6060;
        case 0x3e6064u: goto label_3e6064;
        case 0x3e6068u: goto label_3e6068;
        case 0x3e606cu: goto label_3e606c;
        case 0x3e6070u: goto label_3e6070;
        case 0x3e6074u: goto label_3e6074;
        case 0x3e6078u: goto label_3e6078;
        case 0x3e607cu: goto label_3e607c;
        case 0x3e6080u: goto label_3e6080;
        case 0x3e6084u: goto label_3e6084;
        case 0x3e6088u: goto label_3e6088;
        case 0x3e608cu: goto label_3e608c;
        case 0x3e6090u: goto label_3e6090;
        case 0x3e6094u: goto label_3e6094;
        case 0x3e6098u: goto label_3e6098;
        case 0x3e609cu: goto label_3e609c;
        case 0x3e60a0u: goto label_3e60a0;
        case 0x3e60a4u: goto label_3e60a4;
        case 0x3e60a8u: goto label_3e60a8;
        case 0x3e60acu: goto label_3e60ac;
        case 0x3e60b0u: goto label_3e60b0;
        case 0x3e60b4u: goto label_3e60b4;
        case 0x3e60b8u: goto label_3e60b8;
        case 0x3e60bcu: goto label_3e60bc;
        case 0x3e60c0u: goto label_3e60c0;
        case 0x3e60c4u: goto label_3e60c4;
        case 0x3e60c8u: goto label_3e60c8;
        case 0x3e60ccu: goto label_3e60cc;
        case 0x3e60d0u: goto label_3e60d0;
        case 0x3e60d4u: goto label_3e60d4;
        case 0x3e60d8u: goto label_3e60d8;
        case 0x3e60dcu: goto label_3e60dc;
        case 0x3e60e0u: goto label_3e60e0;
        case 0x3e60e4u: goto label_3e60e4;
        case 0x3e60e8u: goto label_3e60e8;
        case 0x3e60ecu: goto label_3e60ec;
        case 0x3e60f0u: goto label_3e60f0;
        case 0x3e60f4u: goto label_3e60f4;
        case 0x3e60f8u: goto label_3e60f8;
        case 0x3e60fcu: goto label_3e60fc;
        case 0x3e6100u: goto label_3e6100;
        case 0x3e6104u: goto label_3e6104;
        case 0x3e6108u: goto label_3e6108;
        case 0x3e610cu: goto label_3e610c;
        default: break;
    }

    ctx->pc = 0x3e5860u;

label_3e5860:
    // 0x3e5860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e5860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3e5864:
    // 0x3e5864: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e5868:
    // 0x3e5868: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e5868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3e586c:
    // 0x3e586c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e586cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e5870:
    // 0x3e5870: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e5870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e5874:
    // 0x3e5874: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3e5874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5878:
    // 0x3e5878: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e5878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e587c:
    // 0x3e587c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e587cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5880:
    // 0x3e5880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e5880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e5884:
    // 0x3e5884: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x3e5884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e5888:
    // 0x3e5888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e5888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e588c:
    // 0x3e588c: 0x8c8302d4  lw          $v1, 0x2D4($a0)
    ctx->pc = 0x3e588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
label_3e5890:
    // 0x3e5890: 0x8c443da0  lw          $a0, 0x3DA0($v0)
    ctx->pc = 0x3e5890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e5894:
    // 0x3e5894: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3e5894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e5898:
    // 0x3e5898: 0x24910084  addiu       $s1, $a0, 0x84
    ctx->pc = 0x3e5898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_3e589c:
    // 0x3e589c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3e58a0:
    // 0x3e58a0: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e58a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e58a4:
    // 0x3e58a4: 0x8e4603a0  lw          $a2, 0x3A0($s2)
    ctx->pc = 0x3e58a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 928)));
label_3e58a8:
    // 0x3e58a8: 0x26840360  addiu       $a0, $s4, 0x360
    ctx->pc = 0x3e58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 864));
label_3e58ac:
    // 0x3e58ac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3e58acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e58b0:
    // 0x3e58b0: 0x26830284  addiu       $v1, $s4, 0x284
    ctx->pc = 0x3e58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 644));
label_3e58b4:
    // 0x3e58b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e58b8:
    // 0x3e58b8: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e58b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e58bc:
    // 0x3e58bc: 0xacd00084  sw          $s0, 0x84($a2)
    ctx->pc = 0x3e58bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 16));
label_3e58c0:
    // 0x3e58c0: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e58c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e58c4:
    // 0x3e58c4: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e58c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e58c8:
    // 0x3e58c8: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e58cc:
    // 0x3e58cc: 0x8e4303a0  lw          $v1, 0x3A0($s2)
    ctx->pc = 0x3e58ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 928)));
label_3e58d0:
    // 0x3e58d0: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e58d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e58d4:
    // 0x3e58d4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e58d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e58d8:
    // 0x3e58d8: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e58d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e58dc:
    // 0x3e58dc: 0x8e4403a0  lw          $a0, 0x3A0($s2)
    ctx->pc = 0x3e58dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 928)));
label_3e58e0:
    // 0x3e58e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e58e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e58e4:
    // 0x3e58e4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e58e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e58e8:
    // 0x3e58e8: 0x320f809  jalr        $t9
label_3e58ec:
    if (ctx->pc == 0x3E58ECu) {
        ctx->pc = 0x3E58F0u;
        goto label_3e58f0;
    }
    ctx->pc = 0x3E58E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E58F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E58F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E58F0u; }
            if (ctx->pc != 0x3E58F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3E58F0u;
label_3e58f0:
    // 0x3e58f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e58f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e58f4:
    // 0x3e58f4: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x3e58f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e58f8:
    // 0x3e58f8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3e58fc:
    if (ctx->pc == 0x3E58FCu) {
        ctx->pc = 0x3E58FCu;
            // 0x3e58fc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3E5900u;
        goto label_3e5900;
    }
    ctx->pc = 0x3E58F8u;
    {
        const bool branch_taken_0x3e58f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E58FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E58F8u;
            // 0x3e58fc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e58f8) {
            ctx->pc = 0x3E58A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e58a4;
        }
    }
    ctx->pc = 0x3E5900u;
label_3e5900:
    // 0x3e5900: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e5900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e5904:
    // 0x3e5904: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e5904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e5908:
    // 0x3e5908: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e5908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e590c:
    // 0x3e590c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e590cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e5910:
    // 0x3e5910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e5910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5914:
    // 0x3e5914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e5914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e5918:
    // 0x3e5918: 0x3e00008  jr          $ra
label_3e591c:
    if (ctx->pc == 0x3E591Cu) {
        ctx->pc = 0x3E591Cu;
            // 0x3e591c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3E5920u;
        goto label_3e5920;
    }
    ctx->pc = 0x3E5918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5918u;
            // 0x3e591c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E5920u;
label_3e5920:
    // 0x3e5920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e5920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3e5924:
    // 0x3e5924: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3e5924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3e5928:
    // 0x3e5928: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e5928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3e592c:
    // 0x3e592c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e592cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e5930:
    // 0x3e5930: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e5930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e5934:
    // 0x3e5934: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3e5934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3e5938:
    // 0x3e5938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e5938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e593c:
    // 0x3e593c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3e593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3e5940:
    // 0x3e5940: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e5940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e5944:
    // 0x3e5944: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x3e5944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_3e5948:
    // 0x3e5948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e5948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e594c:
    // 0x3e594c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e594cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5950:
    // 0x3e5950: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3e5950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3e5954:
    // 0x3e5954: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e5954u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e5958:
    // 0x3e5958: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3e5958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3e595c:
    // 0x3e595c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5960:
    // 0x3e5960: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3e5960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_3e5964:
    // 0x3e5964: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3e5964u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3e5968:
    // 0x3e5968: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x3e5968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_3e596c:
    // 0x3e596c: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x3e596cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_3e5970:
    // 0x3e5970: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x3e5970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_3e5974:
    // 0x3e5974: 0xc04cbd8  jal         func_132F60
label_3e5978:
    if (ctx->pc == 0x3E5978u) {
        ctx->pc = 0x3E5978u;
            // 0x3e5978: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x3E597Cu;
        goto label_3e597c;
    }
    ctx->pc = 0x3E5974u;
    SET_GPR_U32(ctx, 31, 0x3E597Cu);
    ctx->pc = 0x3E5978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5974u;
            // 0x3e5978: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E597Cu; }
        if (ctx->pc != 0x3E597Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E597Cu; }
        if (ctx->pc != 0x3E597Cu) { return; }
    }
    ctx->pc = 0x3E597Cu;
label_3e597c:
    // 0x3e597c: 0xc04c968  jal         func_1325A0
label_3e5980:
    if (ctx->pc == 0x3E5980u) {
        ctx->pc = 0x3E5980u;
            // 0x3e5980: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x3E5984u;
        goto label_3e5984;
    }
    ctx->pc = 0x3E597Cu;
    SET_GPR_U32(ctx, 31, 0x3E5984u);
    ctx->pc = 0x3E5980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E597Cu;
            // 0x3e5980: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5984u; }
        if (ctx->pc != 0x3E5984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5984u; }
        if (ctx->pc != 0x3E5984u) { return; }
    }
    ctx->pc = 0x3E5984u;
label_3e5984:
    // 0x3e5984: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e5988:
    // 0x3e5988: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x3e5988u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
label_3e598c:
    // 0x3e598c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3e598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e5990:
    // 0x3e5990: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x3e5990u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_3e5994:
    // 0x3e5994: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x3e5994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_3e5998:
    // 0x3e5998: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x3e5998u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_3e599c:
    // 0x3e599c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3e599cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_3e59a0:
    // 0x3e59a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e59a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e59a4:
    // 0x3e59a4: 0x8c4a0788  lw          $t2, 0x788($v0)
    ctx->pc = 0x3e59a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_3e59a8:
    // 0x3e59a8: 0x2529c560  addiu       $t1, $t1, -0x3AA0
    ctx->pc = 0x3e59a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952288));
label_3e59ac:
    // 0x3e59ac: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x3e59acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_3e59b0:
    // 0x3e59b0: 0x25082660  addiu       $t0, $t0, 0x2660
    ctx->pc = 0x3e59b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9824));
label_3e59b4:
    // 0x3e59b4: 0x24e72670  addiu       $a3, $a3, 0x2670
    ctx->pc = 0x3e59b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9840));
label_3e59b8:
    // 0x3e59b8: 0x24c626b0  addiu       $a2, $a2, 0x26B0
    ctx->pc = 0x3e59b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9904));
label_3e59bc:
    // 0x3e59bc: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x3e59bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_3e59c0:
    // 0x3e59c0: 0x24a59b80  addiu       $a1, $a1, -0x6480
    ctx->pc = 0x3e59c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941568));
label_3e59c4:
    // 0x3e59c4: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x3e59c4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3e59c8:
    // 0x3e59c8: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x3e59c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
label_3e59cc:
    // 0x3e59cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e59ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e59d0:
    // 0x3e59d0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3e59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_3e59d4:
    // 0x3e59d4: 0xa269004d  sb          $t1, 0x4D($s3)
    ctx->pc = 0x3e59d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 77), (uint8_t)GPR_U32(ctx, 9));
label_3e59d8:
    // 0x3e59d8: 0xae680054  sw          $t0, 0x54($s3)
    ctx->pc = 0x3e59d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 8));
label_3e59dc:
    // 0x3e59dc: 0xae600050  sw          $zero, 0x50($s3)
    ctx->pc = 0x3e59dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
label_3e59e0:
    // 0x3e59e0: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x3e59e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_3e59e4:
    // 0x3e59e4: 0xae660054  sw          $a2, 0x54($s3)
    ctx->pc = 0x3e59e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 6));
label_3e59e8:
    // 0x3e59e8: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x3e59e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
label_3e59ec:
    // 0x3e59ec: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3e59ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3e59f0:
    // 0x3e59f0: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3e59f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_3e59f4:
    // 0x3e59f4: 0x8c427378  lw          $v0, 0x7378($v0)
    ctx->pc = 0x3e59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_3e59f8:
    // 0x3e59f8: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x3e59f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_3e59fc:
    // 0x3e59fc: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x3e59fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_3e5a00:
    // 0x3e5a00: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3e5a00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_3e5a04:
    // 0x3e5a04: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3e5a04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_3e5a08:
    // 0x3e5a08: 0xae600120  sw          $zero, 0x120($s3)
    ctx->pc = 0x3e5a08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 0));
label_3e5a0c:
    // 0x3e5a0c: 0xae600124  sw          $zero, 0x124($s3)
    ctx->pc = 0x3e5a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 0));
label_3e5a10:
    // 0x3e5a10: 0xc04c968  jal         func_1325A0
label_3e5a14:
    if (ctx->pc == 0x3E5A14u) {
        ctx->pc = 0x3E5A14u;
            // 0x3e5a14: 0xa2600128  sb          $zero, 0x128($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 296), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E5A18u;
        goto label_3e5a18;
    }
    ctx->pc = 0x3E5A10u;
    SET_GPR_U32(ctx, 31, 0x3E5A18u);
    ctx->pc = 0x3E5A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5A10u;
            // 0x3e5a14: 0xa2600128  sb          $zero, 0x128($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 296), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A18u; }
        if (ctx->pc != 0x3E5A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A18u; }
        if (ctx->pc != 0x3E5A18u) { return; }
    }
    ctx->pc = 0x3E5A18u;
label_3e5a18:
    // 0x3e5a18: 0xc04c968  jal         func_1325A0
label_3e5a1c:
    if (ctx->pc == 0x3E5A1Cu) {
        ctx->pc = 0x3E5A1Cu;
            // 0x3e5a1c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x3E5A20u;
        goto label_3e5a20;
    }
    ctx->pc = 0x3E5A18u;
    SET_GPR_U32(ctx, 31, 0x3E5A20u);
    ctx->pc = 0x3E5A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5A18u;
            // 0x3e5a1c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A20u; }
        if (ctx->pc != 0x3E5A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A20u; }
        if (ctx->pc != 0x3E5A20u) { return; }
    }
    ctx->pc = 0x3E5A20u;
label_3e5a20:
    // 0x3e5a20: 0xc04c968  jal         func_1325A0
label_3e5a24:
    if (ctx->pc == 0x3E5A24u) {
        ctx->pc = 0x3E5A24u;
            // 0x3e5a24: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x3E5A28u;
        goto label_3e5a28;
    }
    ctx->pc = 0x3E5A20u;
    SET_GPR_U32(ctx, 31, 0x3E5A28u);
    ctx->pc = 0x3E5A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5A20u;
            // 0x3e5a24: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A28u; }
        if (ctx->pc != 0x3E5A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A28u; }
        if (ctx->pc != 0x3E5A28u) { return; }
    }
    ctx->pc = 0x3E5A28u;
label_3e5a28:
    // 0x3e5a28: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3e5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_3e5a2c:
    // 0x3e5a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e5a30:
    // 0x3e5a30: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3e5a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_3e5a34:
    // 0x3e5a34: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3e5a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_3e5a38:
    // 0x3e5a38: 0xc04f26c  jal         func_13C9B0
label_3e5a3c:
    if (ctx->pc == 0x3E5A3Cu) {
        ctx->pc = 0x3E5A3Cu;
            // 0x3e5a3c: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x3E5A40u;
        goto label_3e5a40;
    }
    ctx->pc = 0x3E5A38u;
    SET_GPR_U32(ctx, 31, 0x3E5A40u);
    ctx->pc = 0x3E5A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5A38u;
            // 0x3e5a3c: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A40u; }
        if (ctx->pc != 0x3E5A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A40u; }
        if (ctx->pc != 0x3E5A40u) { return; }
    }
    ctx->pc = 0x3E5A40u;
label_3e5a40:
    // 0x3e5a40: 0xc04c968  jal         func_1325A0
label_3e5a44:
    if (ctx->pc == 0x3E5A44u) {
        ctx->pc = 0x3E5A44u;
            // 0x3e5a44: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x3E5A48u;
        goto label_3e5a48;
    }
    ctx->pc = 0x3E5A40u;
    SET_GPR_U32(ctx, 31, 0x3E5A48u);
    ctx->pc = 0x3E5A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5A40u;
            // 0x3e5a44: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A48u; }
        if (ctx->pc != 0x3E5A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A48u; }
        if (ctx->pc != 0x3E5A48u) { return; }
    }
    ctx->pc = 0x3E5A48u;
label_3e5a48:
    // 0x3e5a48: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e5a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3e5a4c:
    // 0x3e5a4c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x3e5a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_3e5a50:
    // 0x3e5a50: 0xc04cc04  jal         func_133010
label_3e5a54:
    if (ctx->pc == 0x3E5A54u) {
        ctx->pc = 0x3E5A54u;
            // 0x3e5a54: 0x24a5a060  addiu       $a1, $a1, -0x5FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942816));
        ctx->pc = 0x3E5A58u;
        goto label_3e5a58;
    }
    ctx->pc = 0x3E5A50u;
    SET_GPR_U32(ctx, 31, 0x3E5A58u);
    ctx->pc = 0x3E5A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5A50u;
            // 0x3e5a54: 0x24a5a060  addiu       $a1, $a1, -0x5FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A58u; }
        if (ctx->pc != 0x3E5A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A58u; }
        if (ctx->pc != 0x3E5A58u) { return; }
    }
    ctx->pc = 0x3E5A58u;
label_3e5a58:
    // 0x3e5a58: 0xae600180  sw          $zero, 0x180($s3)
    ctx->pc = 0x3e5a58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 384), GPR_U32(ctx, 0));
label_3e5a5c:
    // 0x3e5a5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e5a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e5a60:
    // 0x3e5a60: 0xae600184  sw          $zero, 0x184($s3)
    ctx->pc = 0x3e5a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 388), GPR_U32(ctx, 0));
label_3e5a64:
    // 0x3e5a64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e5a68:
    // 0x3e5a68: 0xae600188  sw          $zero, 0x188($s3)
    ctx->pc = 0x3e5a68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 392), GPR_U32(ctx, 0));
label_3e5a6c:
    // 0x3e5a6c: 0x26640140  addiu       $a0, $s3, 0x140
    ctx->pc = 0x3e5a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
label_3e5a70:
    // 0x3e5a70: 0xa6600190  sh          $zero, 0x190($s3)
    ctx->pc = 0x3e5a70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 400), (uint16_t)GPR_U32(ctx, 0));
label_3e5a74:
    // 0x3e5a74: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e5a74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e5a78:
    // 0x3e5a78: 0xa6600192  sh          $zero, 0x192($s3)
    ctx->pc = 0x3e5a78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 402), (uint16_t)GPR_U32(ctx, 0));
label_3e5a7c:
    // 0x3e5a7c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3e5a7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3e5a80:
    // 0x3e5a80: 0xa6620194  sh          $v0, 0x194($s3)
    ctx->pc = 0x3e5a80u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 404), (uint16_t)GPR_U32(ctx, 2));
label_3e5a84:
    // 0x3e5a84: 0xc04cbd8  jal         func_132F60
label_3e5a88:
    if (ctx->pc == 0x3E5A88u) {
        ctx->pc = 0x3E5A88u;
            // 0x3e5a88: 0xa6600196  sh          $zero, 0x196($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 406), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E5A8Cu;
        goto label_3e5a8c;
    }
    ctx->pc = 0x3E5A84u;
    SET_GPR_U32(ctx, 31, 0x3E5A8Cu);
    ctx->pc = 0x3E5A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5A84u;
            // 0x3e5a88: 0xa6600196  sh          $zero, 0x196($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 406), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A8Cu; }
        if (ctx->pc != 0x3E5A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5A8Cu; }
        if (ctx->pc != 0x3E5A8Cu) { return; }
    }
    ctx->pc = 0x3E5A8Cu;
label_3e5a8c:
    // 0x3e5a8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e5a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e5a90:
    // 0x3e5a90: 0x26640150  addiu       $a0, $s3, 0x150
    ctx->pc = 0x3e5a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_3e5a94:
    // 0x3e5a94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e5a94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e5a98:
    // 0x3e5a98: 0xc04cbd8  jal         func_132F60
label_3e5a9c:
    if (ctx->pc == 0x3E5A9Cu) {
        ctx->pc = 0x3E5A9Cu;
            // 0x3e5a9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3E5AA0u;
        goto label_3e5aa0;
    }
    ctx->pc = 0x3E5A98u;
    SET_GPR_U32(ctx, 31, 0x3E5AA0u);
    ctx->pc = 0x3E5A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5A98u;
            // 0x3e5a9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5AA0u; }
        if (ctx->pc != 0x3E5AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5AA0u; }
        if (ctx->pc != 0x3E5AA0u) { return; }
    }
    ctx->pc = 0x3E5AA0u;
label_3e5aa0:
    // 0x3e5aa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e5aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e5aa4:
    // 0x3e5aa4: 0x26640160  addiu       $a0, $s3, 0x160
    ctx->pc = 0x3e5aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
label_3e5aa8:
    // 0x3e5aa8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e5aa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e5aac:
    // 0x3e5aac: 0xc04cbd8  jal         func_132F60
label_3e5ab0:
    if (ctx->pc == 0x3E5AB0u) {
        ctx->pc = 0x3E5AB0u;
            // 0x3e5ab0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3E5AB4u;
        goto label_3e5ab4;
    }
    ctx->pc = 0x3E5AACu;
    SET_GPR_U32(ctx, 31, 0x3E5AB4u);
    ctx->pc = 0x3E5AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5AACu;
            // 0x3e5ab0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5AB4u; }
        if (ctx->pc != 0x3E5AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5AB4u; }
        if (ctx->pc != 0x3E5AB4u) { return; }
    }
    ctx->pc = 0x3E5AB4u;
label_3e5ab4:
    // 0x3e5ab4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e5ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e5ab8:
    // 0x3e5ab8: 0x26640170  addiu       $a0, $s3, 0x170
    ctx->pc = 0x3e5ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
label_3e5abc:
    // 0x3e5abc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e5abcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e5ac0:
    // 0x3e5ac0: 0xc04cbd8  jal         func_132F60
label_3e5ac4:
    if (ctx->pc == 0x3E5AC4u) {
        ctx->pc = 0x3E5AC4u;
            // 0x3e5ac4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3E5AC8u;
        goto label_3e5ac8;
    }
    ctx->pc = 0x3E5AC0u;
    SET_GPR_U32(ctx, 31, 0x3E5AC8u);
    ctx->pc = 0x3E5AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5AC0u;
            // 0x3e5ac4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5AC8u; }
        if (ctx->pc != 0x3E5AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5AC8u; }
        if (ctx->pc != 0x3E5AC8u) { return; }
    }
    ctx->pc = 0x3E5AC8u;
label_3e5ac8:
    // 0x3e5ac8: 0xae6001e0  sw          $zero, 0x1E0($s3)
    ctx->pc = 0x3e5ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 480), GPR_U32(ctx, 0));
label_3e5acc:
    // 0x3e5acc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3e5accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e5ad0:
    // 0x3e5ad0: 0xae6001e4  sw          $zero, 0x1E4($s3)
    ctx->pc = 0x3e5ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 484), GPR_U32(ctx, 0));
label_3e5ad4:
    // 0x3e5ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5ad8:
    // 0x3e5ad8: 0xae600270  sw          $zero, 0x270($s3)
    ctx->pc = 0x3e5ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 624), GPR_U32(ctx, 0));
label_3e5adc:
    // 0x3e5adc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e5ae0:
    // 0x3e5ae0: 0xae600274  sw          $zero, 0x274($s3)
    ctx->pc = 0x3e5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 628), GPR_U32(ctx, 0));
label_3e5ae4:
    // 0x3e5ae4: 0x26640074  addiu       $a0, $s3, 0x74
    ctx->pc = 0x3e5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
label_3e5ae8:
    // 0x3e5ae8: 0xae600278  sw          $zero, 0x278($s3)
    ctx->pc = 0x3e5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 632), GPR_U32(ctx, 0));
label_3e5aec:
    // 0x3e5aec: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x3e5aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_3e5af0:
    // 0x3e5af0: 0xae60027c  sw          $zero, 0x27C($s3)
    ctx->pc = 0x3e5af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 636), GPR_U32(ctx, 0));
label_3e5af4:
    // 0x3e5af4: 0xae600280  sw          $zero, 0x280($s3)
    ctx->pc = 0x3e5af4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 0));
label_3e5af8:
    // 0x3e5af8: 0xae600284  sw          $zero, 0x284($s3)
    ctx->pc = 0x3e5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 644), GPR_U32(ctx, 0));
label_3e5afc:
    // 0x3e5afc: 0xae600288  sw          $zero, 0x288($s3)
    ctx->pc = 0x3e5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 648), GPR_U32(ctx, 0));
label_3e5b00:
    // 0x3e5b00: 0xae60028c  sw          $zero, 0x28C($s3)
    ctx->pc = 0x3e5b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 652), GPR_U32(ctx, 0));
label_3e5b04:
    // 0x3e5b04: 0xae600290  sw          $zero, 0x290($s3)
    ctx->pc = 0x3e5b04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 656), GPR_U32(ctx, 0));
label_3e5b08:
    // 0x3e5b08: 0xae600294  sw          $zero, 0x294($s3)
    ctx->pc = 0x3e5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 660), GPR_U32(ctx, 0));
label_3e5b0c:
    // 0x3e5b0c: 0xae6002bc  sw          $zero, 0x2BC($s3)
    ctx->pc = 0x3e5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 700), GPR_U32(ctx, 0));
label_3e5b10:
    // 0x3e5b10: 0xae6002c0  sw          $zero, 0x2C0($s3)
    ctx->pc = 0x3e5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 704), GPR_U32(ctx, 0));
label_3e5b14:
    // 0x3e5b14: 0xae6602c4  sw          $a2, 0x2C4($s3)
    ctx->pc = 0x3e5b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 708), GPR_U32(ctx, 6));
label_3e5b18:
    // 0x3e5b18: 0xae6002c8  sw          $zero, 0x2C8($s3)
    ctx->pc = 0x3e5b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 712), GPR_U32(ctx, 0));
label_3e5b1c:
    // 0x3e5b1c: 0xae6002cc  sw          $zero, 0x2CC($s3)
    ctx->pc = 0x3e5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 716), GPR_U32(ctx, 0));
label_3e5b20:
    // 0x3e5b20: 0xae6002d0  sw          $zero, 0x2D0($s3)
    ctx->pc = 0x3e5b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 720), GPR_U32(ctx, 0));
label_3e5b24:
    // 0x3e5b24: 0xae6002d4  sw          $zero, 0x2D4($s3)
    ctx->pc = 0x3e5b24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 724), GPR_U32(ctx, 0));
label_3e5b28:
    // 0x3e5b28: 0xa26002d8  sb          $zero, 0x2D8($s3)
    ctx->pc = 0x3e5b28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 728), (uint8_t)GPR_U32(ctx, 0));
label_3e5b2c:
    // 0x3e5b2c: 0xa26302d9  sb          $v1, 0x2D9($s3)
    ctx->pc = 0x3e5b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 729), (uint8_t)GPR_U32(ctx, 3));
label_3e5b30:
    // 0x3e5b30: 0xa26002da  sb          $zero, 0x2DA($s3)
    ctx->pc = 0x3e5b30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 730), (uint8_t)GPR_U32(ctx, 0));
label_3e5b34:
    // 0x3e5b34: 0xa26002db  sb          $zero, 0x2DB($s3)
    ctx->pc = 0x3e5b34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 731), (uint8_t)GPR_U32(ctx, 0));
label_3e5b38:
    // 0x3e5b38: 0xae6002dc  sw          $zero, 0x2DC($s3)
    ctx->pc = 0x3e5b38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 732), GPR_U32(ctx, 0));
label_3e5b3c:
    // 0x3e5b3c: 0xae6002e0  sw          $zero, 0x2E0($s3)
    ctx->pc = 0x3e5b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 736), GPR_U32(ctx, 0));
label_3e5b40:
    // 0x3e5b40: 0xae6202e4  sw          $v0, 0x2E4($s3)
    ctx->pc = 0x3e5b40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 740), GPR_U32(ctx, 2));
label_3e5b44:
    // 0x3e5b44: 0xa26002e8  sb          $zero, 0x2E8($s3)
    ctx->pc = 0x3e5b44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 744), (uint8_t)GPR_U32(ctx, 0));
label_3e5b48:
    // 0x3e5b48: 0xa26202e9  sb          $v0, 0x2E9($s3)
    ctx->pc = 0x3e5b48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 745), (uint8_t)GPR_U32(ctx, 2));
label_3e5b4c:
    // 0x3e5b4c: 0xa26302ea  sb          $v1, 0x2EA($s3)
    ctx->pc = 0x3e5b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 746), (uint8_t)GPR_U32(ctx, 3));
label_3e5b50:
    // 0x3e5b50: 0xc0b4a18  jal         func_2D2860
label_3e5b54:
    if (ctx->pc == 0x3E5B54u) {
        ctx->pc = 0x3E5B54u;
            // 0x3e5b54: 0xa26002eb  sb          $zero, 0x2EB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 747), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E5B58u;
        goto label_3e5b58;
    }
    ctx->pc = 0x3E5B50u;
    SET_GPR_U32(ctx, 31, 0x3E5B58u);
    ctx->pc = 0x3E5B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5B50u;
            // 0x3e5b54: 0xa26002eb  sb          $zero, 0x2EB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 747), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5B58u; }
        if (ctx->pc != 0x3E5B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5B58u; }
        if (ctx->pc != 0x3E5B58u) { return; }
    }
    ctx->pc = 0x3E5B58u;
label_3e5b58:
    // 0x3e5b58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e5b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e5b5c:
    // 0x3e5b5c: 0x266401f0  addiu       $a0, $s3, 0x1F0
    ctx->pc = 0x3e5b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 496));
label_3e5b60:
    // 0x3e5b60: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e5b60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e5b64:
    // 0x3e5b64: 0xc04cbd8  jal         func_132F60
label_3e5b68:
    if (ctx->pc == 0x3E5B68u) {
        ctx->pc = 0x3E5B68u;
            // 0x3e5b68: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3E5B6Cu;
        goto label_3e5b6c;
    }
    ctx->pc = 0x3E5B64u;
    SET_GPR_U32(ctx, 31, 0x3E5B6Cu);
    ctx->pc = 0x3E5B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5B64u;
            // 0x3e5b68: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5B6Cu; }
        if (ctx->pc != 0x3E5B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5B6Cu; }
        if (ctx->pc != 0x3E5B6Cu) { return; }
    }
    ctx->pc = 0x3E5B6Cu;
label_3e5b6c:
    // 0x3e5b6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e5b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e5b70:
    // 0x3e5b70: 0x26640200  addiu       $a0, $s3, 0x200
    ctx->pc = 0x3e5b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_3e5b74:
    // 0x3e5b74: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e5b74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e5b78:
    // 0x3e5b78: 0xc04cbd8  jal         func_132F60
label_3e5b7c:
    if (ctx->pc == 0x3E5B7Cu) {
        ctx->pc = 0x3E5B7Cu;
            // 0x3e5b7c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3E5B80u;
        goto label_3e5b80;
    }
    ctx->pc = 0x3E5B78u;
    SET_GPR_U32(ctx, 31, 0x3E5B80u);
    ctx->pc = 0x3E5B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5B78u;
            // 0x3e5b7c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5B80u; }
        if (ctx->pc != 0x3E5B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5B80u; }
        if (ctx->pc != 0x3E5B80u) { return; }
    }
    ctx->pc = 0x3E5B80u;
label_3e5b80:
    // 0x3e5b80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e5b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e5b84:
    // 0x3e5b84: 0x266402f0  addiu       $a0, $s3, 0x2F0
    ctx->pc = 0x3e5b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 752));
label_3e5b88:
    // 0x3e5b88: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e5b88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e5b8c:
    // 0x3e5b8c: 0xc04cbd8  jal         func_132F60
label_3e5b90:
    if (ctx->pc == 0x3E5B90u) {
        ctx->pc = 0x3E5B90u;
            // 0x3e5b90: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3E5B94u;
        goto label_3e5b94;
    }
    ctx->pc = 0x3E5B8Cu;
    SET_GPR_U32(ctx, 31, 0x3E5B94u);
    ctx->pc = 0x3E5B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5B8Cu;
            // 0x3e5b90: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5B94u; }
        if (ctx->pc != 0x3E5B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5B94u; }
        if (ctx->pc != 0x3E5B94u) { return; }
    }
    ctx->pc = 0x3E5B94u;
label_3e5b94:
    // 0x3e5b94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e5b94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e5b98:
    // 0x3e5b98: 0x26640300  addiu       $a0, $s3, 0x300
    ctx->pc = 0x3e5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_3e5b9c:
    // 0x3e5b9c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e5b9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e5ba0:
    // 0x3e5ba0: 0xc04cbd8  jal         func_132F60
label_3e5ba4:
    if (ctx->pc == 0x3E5BA4u) {
        ctx->pc = 0x3E5BA4u;
            // 0x3e5ba4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3E5BA8u;
        goto label_3e5ba8;
    }
    ctx->pc = 0x3E5BA0u;
    SET_GPR_U32(ctx, 31, 0x3E5BA8u);
    ctx->pc = 0x3E5BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5BA0u;
            // 0x3e5ba4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5BA8u; }
        if (ctx->pc != 0x3E5BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5BA8u; }
        if (ctx->pc != 0x3E5BA8u) { return; }
    }
    ctx->pc = 0x3E5BA8u;
label_3e5ba8:
    // 0x3e5ba8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e5bac:
    // 0x3e5bac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3e5bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3e5bb0:
    // 0x3e5bb0: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x3e5bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3e5bb4:
    // 0x3e5bb4: 0x346518a9  ori         $a1, $v1, 0x18A9
    ctx->pc = 0x3e5bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6313);
label_3e5bb8:
    // 0x3e5bb8: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x3e5bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e5bbc:
    // 0x3e5bbc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3e5bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3e5bc0:
    // 0x3e5bc0: 0x320f809  jalr        $t9
label_3e5bc4:
    if (ctx->pc == 0x3E5BC4u) {
        ctx->pc = 0x3E5BC4u;
            // 0x3e5bc4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3E5BC8u;
        goto label_3e5bc8;
    }
    ctx->pc = 0x3E5BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E5BC8u);
        ctx->pc = 0x3E5BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5BC0u;
            // 0x3e5bc4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E5BC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E5BC8u; }
            if (ctx->pc != 0x3E5BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x3E5BC8u;
label_3e5bc8:
    // 0x3e5bc8: 0xae6202bc  sw          $v0, 0x2BC($s3)
    ctx->pc = 0x3e5bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 700), GPR_U32(ctx, 2));
label_3e5bcc:
    // 0x3e5bcc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3e5bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3e5bd0:
    // 0x3e5bd0: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x3e5bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e5bd4:
    // 0x3e5bd4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3e5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3e5bd8:
    // 0x3e5bd8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3e5bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3e5bdc:
    // 0x3e5bdc: 0x320f809  jalr        $t9
label_3e5be0:
    if (ctx->pc == 0x3E5BE0u) {
        ctx->pc = 0x3E5BE0u;
            // 0x3e5be0: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x3E5BE4u;
        goto label_3e5be4;
    }
    ctx->pc = 0x3E5BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E5BE4u);
        ctx->pc = 0x3E5BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5BDCu;
            // 0x3e5be0: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E5BE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E5BE4u; }
            if (ctx->pc != 0x3E5BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x3E5BE4u;
label_3e5be4:
    // 0x3e5be4: 0xae6202c0  sw          $v0, 0x2C0($s3)
    ctx->pc = 0x3e5be4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 704), GPR_U32(ctx, 2));
label_3e5be8:
    // 0x3e5be8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e5bec:
    // 0x3e5bec: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3e5becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3e5bf0:
    // 0x3e5bf0: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x3e5bf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_3e5bf4:
    // 0x3e5bf4: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x3e5bf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e5bf8:
    // 0x3e5bf8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_3e5bfc:
    if (ctx->pc == 0x3E5BFCu) {
        ctx->pc = 0x3E5C00u;
        goto label_3e5c00;
    }
    ctx->pc = 0x3E5BF8u;
    {
        const bool branch_taken_0x3e5bf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5bf8) {
            ctx->pc = 0x3E5C10u;
            goto label_3e5c10;
        }
    }
    ctx->pc = 0x3E5C00u;
label_3e5c00:
    // 0x3e5c00: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e5c04:
    // 0x3e5c04: 0xc4409d38  lwc1        $f0, -0x62C8($v0)
    ctx->pc = 0x3e5c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e5c08:
    // 0x3e5c08: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e5c0c:
    if (ctx->pc == 0x3E5C0Cu) {
        ctx->pc = 0x3E5C0Cu;
            // 0x3e5c0c: 0xe66002b8  swc1        $f0, 0x2B8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 696), bits); }
        ctx->pc = 0x3E5C10u;
        goto label_3e5c10;
    }
    ctx->pc = 0x3E5C08u;
    {
        const bool branch_taken_0x3e5c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5C08u;
            // 0x3e5c0c: 0xe66002b8  swc1        $f0, 0x2B8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5c08) {
            ctx->pc = 0x3E5C1Cu;
            goto label_3e5c1c;
        }
    }
    ctx->pc = 0x3E5C10u;
label_3e5c10:
    // 0x3e5c10: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e5c14:
    // 0x3e5c14: 0xc4409d30  lwc1        $f0, -0x62D0($v0)
    ctx->pc = 0x3e5c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e5c18:
    // 0x3e5c18: 0xe66002b8  swc1        $f0, 0x2B8($s3)
    ctx->pc = 0x3e5c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 696), bits); }
label_3e5c1c:
    // 0x3e5c1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e5c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c20:
    // 0x3e5c20: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3e5c20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c24:
    // 0x3e5c24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3e5c28:
    // 0x3e5c28: 0xac600350  sw          $zero, 0x350($v1)
    ctx->pc = 0x3e5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 848), GPR_U32(ctx, 0));
label_3e5c2c:
    // 0x3e5c2c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3e5c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e5c30:
    // 0x3e5c30: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3e5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3e5c34:
    // 0x3e5c34: 0x0  nop
    ctx->pc = 0x3e5c34u;
    // NOP
label_3e5c38:
    // 0x3e5c38: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3e5c3c:
    if (ctx->pc == 0x3E5C3Cu) {
        ctx->pc = 0x3E5C40u;
        goto label_3e5c40;
    }
    ctx->pc = 0x3E5C38u;
    {
        const bool branch_taken_0x3e5c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5c38) {
            ctx->pc = 0x3E5C24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e5c24;
        }
    }
    ctx->pc = 0x3E5C40u;
label_3e5c40:
    // 0x3e5c40: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e5c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3e5c44:
    // 0x3e5c44: 0x26640360  addiu       $a0, $s3, 0x360
    ctx->pc = 0x3e5c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
label_3e5c48:
    // 0x3e5c48: 0xc04cce8  jal         func_1333A0
label_3e5c4c:
    if (ctx->pc == 0x3E5C4Cu) {
        ctx->pc = 0x3E5C4Cu;
            // 0x3e5c4c: 0x24a5a020  addiu       $a1, $a1, -0x5FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942752));
        ctx->pc = 0x3E5C50u;
        goto label_3e5c50;
    }
    ctx->pc = 0x3E5C48u;
    SET_GPR_U32(ctx, 31, 0x3E5C50u);
    ctx->pc = 0x3E5C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5C48u;
            // 0x3e5c4c: 0x24a5a020  addiu       $a1, $a1, -0x5FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5C50u; }
        if (ctx->pc != 0x3E5C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5C50u; }
        if (ctx->pc != 0x3E5C50u) { return; }
    }
    ctx->pc = 0x3E5C50u;
label_3e5c50:
    // 0x3e5c50: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x3e5c50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
label_3e5c54:
    // 0x3e5c54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e5c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c58:
    // 0x3e5c58: 0x26529e50  addiu       $s2, $s2, -0x61B0
    ctx->pc = 0x3e5c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942288));
label_3e5c5c:
    // 0x3e5c5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e5c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c60:
    // 0x3e5c60: 0xc040180  jal         func_100600
label_3e5c64:
    if (ctx->pc == 0x3E5C64u) {
        ctx->pc = 0x3E5C64u;
            // 0x3e5c64: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x3E5C68u;
        goto label_3e5c68;
    }
    ctx->pc = 0x3E5C60u;
    SET_GPR_U32(ctx, 31, 0x3E5C68u);
    ctx->pc = 0x3E5C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5C60u;
            // 0x3e5c64: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5C68u; }
        if (ctx->pc != 0x3E5C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5C68u; }
        if (ctx->pc != 0x3E5C68u) { return; }
    }
    ctx->pc = 0x3E5C68u;
label_3e5c68:
    // 0x3e5c68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3e5c6c:
    if (ctx->pc == 0x3E5C6Cu) {
        ctx->pc = 0x3E5C70u;
        goto label_3e5c70;
    }
    ctx->pc = 0x3E5C68u;
    {
        const bool branch_taken_0x3e5c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5c68) {
            ctx->pc = 0x3E5C88u;
            goto label_3e5c88;
        }
    }
    ctx->pc = 0x3E5C70u;
label_3e5c70:
    // 0x3e5c70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e5c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c74:
    // 0x3e5c74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3e5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e5c78:
    // 0x3e5c78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3e5c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c7c:
    // 0x3e5c7c: 0xc0c3f60  jal         func_30FD80
label_3e5c80:
    if (ctx->pc == 0x3E5C80u) {
        ctx->pc = 0x3E5C80u;
            // 0x3e5c80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5C84u;
        goto label_3e5c84;
    }
    ctx->pc = 0x3E5C7Cu;
    SET_GPR_U32(ctx, 31, 0x3E5C84u);
    ctx->pc = 0x3E5C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5C7Cu;
            // 0x3e5c80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5C84u; }
        if (ctx->pc != 0x3E5C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5C84u; }
        if (ctx->pc != 0x3E5C84u) { return; }
    }
    ctx->pc = 0x3E5C84u;
label_3e5c84:
    // 0x3e5c84: 0x0  nop
    ctx->pc = 0x3e5c84u;
    // NOP
label_3e5c88:
    // 0x3e5c88: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x3e5c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3e5c8c:
    // 0x3e5c8c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3e5c90:
    // 0x3e5c90: 0xac8203a0  sw          $v0, 0x3A0($a0)
    ctx->pc = 0x3e5c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 928), GPR_U32(ctx, 2));
label_3e5c94:
    // 0x3e5c94: 0x24639ed0  addiu       $v1, $v1, -0x6130
    ctx->pc = 0x3e5c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942416));
label_3e5c98:
    // 0x3e5c98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e5c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e5c9c:
    // 0x3e5c9c: 0xac4300d4  sw          $v1, 0xD4($v0)
    ctx->pc = 0x3e5c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 3));
label_3e5ca0:
    // 0x3e5ca0: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x3e5ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_3e5ca4:
    // 0x3e5ca4: 0x8c8403a0  lw          $a0, 0x3A0($a0)
    ctx->pc = 0x3e5ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 928)));
label_3e5ca8:
    // 0x3e5ca8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3e5ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e5cac:
    // 0x3e5cac: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3e5cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3e5cb0:
    // 0x3e5cb0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3e5cb0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3e5cb4:
    // 0x3e5cb4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3e5cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_3e5cb8:
    // 0x3e5cb8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_3e5cbc:
    if (ctx->pc == 0x3E5CBCu) {
        ctx->pc = 0x3E5CBCu;
            // 0x3e5cbc: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3E5CC0u;
        goto label_3e5cc0;
    }
    ctx->pc = 0x3E5CB8u;
    {
        const bool branch_taken_0x3e5cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5CB8u;
            // 0x3e5cbc: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5cb8) {
            ctx->pc = 0x3E5C60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e5c60;
        }
    }
    ctx->pc = 0x3E5CC0u;
label_3e5cc0:
    // 0x3e5cc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3e5cc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5cc4:
    // 0x3e5cc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e5cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e5cc8:
    // 0x3e5cc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e5cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e5ccc:
    // 0x3e5ccc: 0xac800298  sw          $zero, 0x298($a0)
    ctx->pc = 0x3e5cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 664), GPR_U32(ctx, 0));
label_3e5cd0:
    // 0x3e5cd0: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x3e5cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3e5cd4:
    // 0x3e5cd4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3e5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3e5cd8:
    // 0x3e5cd8: 0x0  nop
    ctx->pc = 0x3e5cd8u;
    // NOP
label_3e5cdc:
    // 0x3e5cdc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3e5ce0:
    if (ctx->pc == 0x3E5CE0u) {
        ctx->pc = 0x3E5CE4u;
        goto label_3e5ce4;
    }
    ctx->pc = 0x3E5CDCu;
    {
        const bool branch_taken_0x3e5cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5cdc) {
            ctx->pc = 0x3E5CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e5cc8;
        }
    }
    ctx->pc = 0x3E5CE4u;
label_3e5ce4:
    // 0x3e5ce4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3e5ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e5ce8:
    // 0x3e5ce8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e5ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3e5cec:
    // 0x3e5cec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e5cecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e5cf0:
    // 0x3e5cf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e5cf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e5cf4:
    // 0x3e5cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e5cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5cf8:
    // 0x3e5cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e5cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e5cfc:
    // 0x3e5cfc: 0x3e00008  jr          $ra
label_3e5d00:
    if (ctx->pc == 0x3E5D00u) {
        ctx->pc = 0x3E5D00u;
            // 0x3e5d00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3E5D04u;
        goto label_3e5d04;
    }
    ctx->pc = 0x3E5CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5CFCu;
            // 0x3e5d00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E5D04u;
label_3e5d04:
    // 0x3e5d04: 0x0  nop
    ctx->pc = 0x3e5d04u;
    // NOP
label_3e5d08:
    // 0x3e5d08: 0x0  nop
    ctx->pc = 0x3e5d08u;
    // NOP
label_3e5d0c:
    // 0x3e5d0c: 0x0  nop
    ctx->pc = 0x3e5d0cu;
    // NOP
label_3e5d10:
    // 0x3e5d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e5d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e5d14:
    // 0x3e5d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e5d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e5d18:
    // 0x3e5d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e5d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e5d1c:
    // 0x3e5d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e5d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5d20:
    // 0x3e5d20: 0x8c8401e4  lw          $a0, 0x1E4($a0)
    ctx->pc = 0x3e5d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
label_3e5d24:
    // 0x3e5d24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3e5d28:
    if (ctx->pc == 0x3E5D28u) {
        ctx->pc = 0x3E5D28u;
            // 0x3e5d28: 0xae0001e4  sw          $zero, 0x1E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
        ctx->pc = 0x3E5D2Cu;
        goto label_3e5d2c;
    }
    ctx->pc = 0x3E5D24u;
    {
        const bool branch_taken_0x3e5d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5d24) {
            ctx->pc = 0x3E5D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5D24u;
            // 0x3e5d28: 0xae0001e4  sw          $zero, 0x1E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E5D40u;
            goto label_3e5d40;
        }
    }
    ctx->pc = 0x3E5D2Cu;
label_3e5d2c:
    // 0x3e5d2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e5d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e5d30:
    // 0x3e5d30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e5d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e5d34:
    // 0x3e5d34: 0x320f809  jalr        $t9
label_3e5d38:
    if (ctx->pc == 0x3E5D38u) {
        ctx->pc = 0x3E5D38u;
            // 0x3e5d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E5D3Cu;
        goto label_3e5d3c;
    }
    ctx->pc = 0x3E5D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E5D3Cu);
        ctx->pc = 0x3E5D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5D34u;
            // 0x3e5d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E5D3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E5D3Cu; }
            if (ctx->pc != 0x3E5D3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3E5D3Cu;
label_3e5d3c:
    // 0x3e5d3c: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x3e5d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
label_3e5d40:
    // 0x3e5d40: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3e5d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3e5d44:
    // 0x3e5d44: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_3e5d48:
    if (ctx->pc == 0x3E5D48u) {
        ctx->pc = 0x3E5D48u;
            // 0x3e5d48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3E5D4Cu;
        goto label_3e5d4c;
    }
    ctx->pc = 0x3E5D44u;
    {
        const bool branch_taken_0x3e5d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5d44) {
            ctx->pc = 0x3E5D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5D44u;
            // 0x3e5d48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E5D6Cu;
            goto label_3e5d6c;
        }
    }
    ctx->pc = 0x3E5D4Cu;
label_3e5d4c:
    // 0x3e5d4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3e5d50:
    if (ctx->pc == 0x3E5D50u) {
        ctx->pc = 0x3E5D50u;
            // 0x3e5d50: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3E5D54u;
        goto label_3e5d54;
    }
    ctx->pc = 0x3E5D4Cu;
    {
        const bool branch_taken_0x3e5d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5d4c) {
            ctx->pc = 0x3E5D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5D4Cu;
            // 0x3e5d50: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E5D68u;
            goto label_3e5d68;
        }
    }
    ctx->pc = 0x3E5D54u;
label_3e5d54:
    // 0x3e5d54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e5d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e5d58:
    // 0x3e5d58: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e5d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e5d5c:
    // 0x3e5d5c: 0x320f809  jalr        $t9
label_3e5d60:
    if (ctx->pc == 0x3E5D60u) {
        ctx->pc = 0x3E5D60u;
            // 0x3e5d60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E5D64u;
        goto label_3e5d64;
    }
    ctx->pc = 0x3E5D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E5D64u);
        ctx->pc = 0x3E5D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5D5Cu;
            // 0x3e5d60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E5D64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E5D64u; }
            if (ctx->pc != 0x3E5D64u) { return; }
        }
        }
    }
    ctx->pc = 0x3E5D64u;
label_3e5d64:
    // 0x3e5d64: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3e5d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3e5d68:
    // 0x3e5d68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e5d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5d6c:
    // 0x3e5d6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e5d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e5d70:
    // 0x3e5d70: 0x3e00008  jr          $ra
label_3e5d74:
    if (ctx->pc == 0x3E5D74u) {
        ctx->pc = 0x3E5D74u;
            // 0x3e5d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3E5D78u;
        goto label_3e5d78;
    }
    ctx->pc = 0x3E5D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5D70u;
            // 0x3e5d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E5D78u;
label_3e5d78:
    // 0x3e5d78: 0x0  nop
    ctx->pc = 0x3e5d78u;
    // NOP
label_3e5d7c:
    // 0x3e5d7c: 0x0  nop
    ctx->pc = 0x3e5d7cu;
    // NOP
label_3e5d80:
    // 0x3e5d80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e5d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3e5d84:
    // 0x3e5d84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e5d88:
    // 0x3e5d88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e5d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e5d8c:
    // 0x3e5d8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e5d90:
    // 0x3e5d90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e5d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e5d94:
    // 0x3e5d94: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x3e5d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_3e5d98:
    // 0x3e5d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e5d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e5d9c:
    // 0x3e5d9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e5d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5da0:
    // 0x3e5da0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e5da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e5da4:
    // 0x3e5da4: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x3e5da4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_3e5da8:
    // 0x3e5da8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3e5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3e5dac:
    // 0x3e5dac: 0xc0a7a88  jal         func_29EA20
label_3e5db0:
    if (ctx->pc == 0x3E5DB0u) {
        ctx->pc = 0x3E5DB0u;
            // 0x3e5db0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x3E5DB4u;
        goto label_3e5db4;
    }
    ctx->pc = 0x3E5DACu;
    SET_GPR_U32(ctx, 31, 0x3E5DB4u);
    ctx->pc = 0x3E5DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5DACu;
            // 0x3e5db0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5DB4u; }
        if (ctx->pc != 0x3E5DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5DB4u; }
        if (ctx->pc != 0x3E5DB4u) { return; }
    }
    ctx->pc = 0x3E5DB4u;
label_3e5db4:
    // 0x3e5db4: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x3e5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_3e5db8:
    // 0x3e5db8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e5db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5dbc:
    // 0x3e5dbc: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_3e5dc0:
    if (ctx->pc == 0x3E5DC0u) {
        ctx->pc = 0x3E5DC0u;
            // 0x3e5dc0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3E5DC4u;
        goto label_3e5dc4;
    }
    ctx->pc = 0x3E5DBCu;
    {
        const bool branch_taken_0x3e5dbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5DBCu;
            // 0x3e5dc0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5dbc) {
            ctx->pc = 0x3E5DFCu;
            goto label_3e5dfc;
        }
    }
    ctx->pc = 0x3E5DC4u;
label_3e5dc4:
    // 0x3e5dc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e5dc8:
    // 0x3e5dc8: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3e5dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3e5dcc:
    // 0x3e5dcc: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e5dd0:
    // 0x3e5dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e5dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e5dd4:
    // 0x3e5dd4: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x3e5dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_3e5dd8:
    // 0x3e5dd8: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x3e5dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_3e5ddc:
    // 0x3e5ddc: 0x3c0200e5  lui         $v0, 0xE5
    ctx->pc = 0x3e5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)229 << 16));
label_3e5de0:
    // 0x3e5de0: 0xc08afe0  jal         func_22BF80
label_3e5de4:
    if (ctx->pc == 0x3E5DE4u) {
        ctx->pc = 0x3E5DE4u;
            // 0x3e5de4: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x3E5DE8u;
        goto label_3e5de8;
    }
    ctx->pc = 0x3E5DE0u;
    SET_GPR_U32(ctx, 31, 0x3E5DE8u);
    ctx->pc = 0x3E5DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5DE0u;
            // 0x3e5de4: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5DE8u; }
        if (ctx->pc != 0x3E5DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5DE8u; }
        if (ctx->pc != 0x3E5DE8u) { return; }
    }
    ctx->pc = 0x3E5DE8u;
label_3e5de8:
    // 0x3e5de8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3e5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3e5dec:
    // 0x3e5dec: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x3e5decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_3e5df0:
    // 0x3e5df0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3e5df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3e5df4:
    // 0x3e5df4: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x3e5df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_3e5df8:
    // 0x3e5df8: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x3e5df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_3e5dfc:
    // 0x3e5dfc: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x3e5dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_3e5e00:
    // 0x3e5e00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3e5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e5e04:
    // 0x3e5e04: 0xc08c798  jal         func_231E60
label_3e5e08:
    if (ctx->pc == 0x3E5E08u) {
        ctx->pc = 0x3E5E08u;
            // 0x3e5e08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E0Cu;
        goto label_3e5e0c;
    }
    ctx->pc = 0x3E5E04u;
    SET_GPR_U32(ctx, 31, 0x3E5E0Cu);
    ctx->pc = 0x3E5E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5E04u;
            // 0x3e5e08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5E0Cu; }
        if (ctx->pc != 0x3E5E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5E0Cu; }
        if (ctx->pc != 0x3E5E0Cu) { return; }
    }
    ctx->pc = 0x3E5E0Cu;
label_3e5e0c:
    // 0x3e5e0c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x3e5e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3e5e10:
    // 0x3e5e10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3e5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e5e14:
    // 0x3e5e14: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x3e5e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e5e18:
    // 0x3e5e18: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3e5e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3e5e1c:
    // 0x3e5e1c: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x3e5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e5e20:
    // 0x3e5e20: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3e5e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e5e24:
    // 0x3e5e24: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3e5e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3e5e28:
    // 0x3e5e28: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3e5e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3e5e2c:
    // 0x3e5e2c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x3e5e2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3e5e30:
    // 0x3e5e30: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x3e5e30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_3e5e34:
    // 0x3e5e34: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3e5e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e5e38:
    // 0x3e5e38: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3e5e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e5e3c:
    // 0x3e5e3c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3e5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e5e40:
    // 0x3e5e40: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3e5e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3e5e44:
    // 0x3e5e44: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3e5e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3e5e48:
    // 0x3e5e48: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x3e5e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3e5e4c:
    // 0x3e5e4c: 0xc0a3830  jal         func_28E0C0
label_3e5e50:
    if (ctx->pc == 0x3E5E50u) {
        ctx->pc = 0x3E5E50u;
            // 0x3e5e50: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x3E5E54u;
        goto label_3e5e54;
    }
    ctx->pc = 0x3E5E4Cu;
    SET_GPR_U32(ctx, 31, 0x3E5E54u);
    ctx->pc = 0x3E5E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5E4Cu;
            // 0x3e5e50: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5E54u; }
        if (ctx->pc != 0x3E5E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5E54u; }
        if (ctx->pc != 0x3E5E54u) { return; }
    }
    ctx->pc = 0x3E5E54u;
label_3e5e54:
    // 0x3e5e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e5e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e5e58:
    // 0x3e5e58: 0xc08af10  jal         func_22BC40
label_3e5e5c:
    if (ctx->pc == 0x3E5E5Cu) {
        ctx->pc = 0x3E5E5Cu;
            // 0x3e5e5c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3E5E60u;
        goto label_3e5e60;
    }
    ctx->pc = 0x3E5E58u;
    SET_GPR_U32(ctx, 31, 0x3E5E60u);
    ctx->pc = 0x3E5E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5E58u;
            // 0x3e5e5c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5E60u; }
        if (ctx->pc != 0x3E5E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5E60u; }
        if (ctx->pc != 0x3E5E60u) { return; }
    }
    ctx->pc = 0x3E5E60u;
label_3e5e60:
    // 0x3e5e60: 0xc040180  jal         func_100600
label_3e5e64:
    if (ctx->pc == 0x3E5E64u) {
        ctx->pc = 0x3E5E64u;
            // 0x3e5e64: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x3E5E68u;
        goto label_3e5e68;
    }
    ctx->pc = 0x3E5E60u;
    SET_GPR_U32(ctx, 31, 0x3E5E68u);
    ctx->pc = 0x3E5E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5E60u;
            // 0x3e5e64: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5E68u; }
        if (ctx->pc != 0x3E5E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5E68u; }
        if (ctx->pc != 0x3E5E68u) { return; }
    }
    ctx->pc = 0x3E5E68u;
label_3e5e68:
    // 0x3e5e68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3e5e6c:
    if (ctx->pc == 0x3E5E6Cu) {
        ctx->pc = 0x3E5E6Cu;
            // 0x3e5e6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E70u;
        goto label_3e5e70;
    }
    ctx->pc = 0x3E5E68u;
    {
        const bool branch_taken_0x3e5e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5E68u;
            // 0x3e5e6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e68) {
            ctx->pc = 0x3E5E94u;
            goto label_3e5e94;
        }
    }
    ctx->pc = 0x3E5E70u;
label_3e5e70:
    // 0x3e5e70: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3e5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_3e5e74:
    // 0x3e5e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e5e78:
    // 0x3e5e78: 0x3445282e  ori         $a1, $v0, 0x282E
    ctx->pc = 0x3e5e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10286);
label_3e5e7c:
    // 0x3e5e7c: 0xc0d1570  jal         func_3455C0
label_3e5e80:
    if (ctx->pc == 0x3E5E80u) {
        ctx->pc = 0x3E5E80u;
            // 0x3e5e80: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3E5E84u;
        goto label_3e5e84;
    }
    ctx->pc = 0x3E5E7Cu;
    SET_GPR_U32(ctx, 31, 0x3E5E84u);
    ctx->pc = 0x3E5E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5E7Cu;
            // 0x3e5e80: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3455C0u;
    if (runtime->hasFunction(0x3455C0u)) {
        auto targetFn = runtime->lookupFunction(0x3455C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5E84u; }
        if (ctx->pc != 0x3E5E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003455C0_0x3455c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5E84u; }
        if (ctx->pc != 0x3E5E84u) { return; }
    }
    ctx->pc = 0x3E5E84u;
label_3e5e84:
    // 0x3e5e84: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e5e88:
    // 0x3e5e88: 0x246382b0  addiu       $v1, $v1, -0x7D50
    ctx->pc = 0x3e5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935216));
label_3e5e8c:
    // 0x3e5e8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3e5e90:
    // 0x3e5e90: 0xa20000d0  sb          $zero, 0xD0($s0)
    ctx->pc = 0x3e5e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 208), (uint8_t)GPR_U32(ctx, 0));
label_3e5e94:
    // 0x3e5e94: 0xae5001e0  sw          $s0, 0x1E0($s2)
    ctx->pc = 0x3e5e94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 16));
label_3e5e98:
    // 0x3e5e98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e5e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e5e9c:
    // 0x3e5e9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e5e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e5ea0:
    // 0x3e5ea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e5ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5ea4:
    // 0x3e5ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e5ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e5ea8:
    // 0x3e5ea8: 0x3e00008  jr          $ra
label_3e5eac:
    if (ctx->pc == 0x3E5EACu) {
        ctx->pc = 0x3E5EACu;
            // 0x3e5eac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3E5EB0u;
        goto label_3e5eb0;
    }
    ctx->pc = 0x3E5EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5EA8u;
            // 0x3e5eac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E5EB0u;
label_3e5eb0:
    // 0x3e5eb0: 0x3e00008  jr          $ra
label_3e5eb4:
    if (ctx->pc == 0x3E5EB4u) {
        ctx->pc = 0x3E5EB4u;
            // 0x3e5eb4: 0x240261b2  addiu       $v0, $zero, 0x61B2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25010));
        ctx->pc = 0x3E5EB8u;
        goto label_3e5eb8;
    }
    ctx->pc = 0x3E5EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5EB0u;
            // 0x3e5eb4: 0x240261b2  addiu       $v0, $zero, 0x61B2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E5EB8u;
label_3e5eb8:
    // 0x3e5eb8: 0x0  nop
    ctx->pc = 0x3e5eb8u;
    // NOP
label_3e5ebc:
    // 0x3e5ebc: 0x0  nop
    ctx->pc = 0x3e5ebcu;
    // NOP
label_3e5ec0:
    // 0x3e5ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e5ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e5ec4:
    // 0x3e5ec4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e5ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5ec8:
    // 0x3e5ec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e5ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e5ecc:
    // 0x3e5ecc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3e5eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3e5ed0:
    // 0x3e5ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e5ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e5ed4:
    // 0x3e5ed4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3e5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3e5ed8:
    // 0x3e5ed8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e5ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e5edc:
    // 0x3e5edc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3e5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3e5ee0:
    // 0x3e5ee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e5ee4:
    // 0x3e5ee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e5ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e5ee8:
    // 0x3e5ee8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3e5ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3e5eec:
    // 0x3e5eec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3e5eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e5ef0:
    // 0x3e5ef0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3e5ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3e5ef4:
    // 0x3e5ef4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3e5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3e5ef8:
    // 0x3e5ef8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3e5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3e5efc:
    // 0x3e5efc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3e5efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3e5f00:
    // 0x3e5f00: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3e5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3e5f04:
    // 0x3e5f04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e5f08:
    // 0x3e5f08: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3e5f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3e5f0c:
    // 0x3e5f0c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3e5f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3e5f10:
    // 0x3e5f10: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3e5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3e5f14:
    // 0x3e5f14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e5f18:
    // 0x3e5f18: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3e5f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e5f1c:
    // 0x3e5f1c: 0xc0a997c  jal         func_2A65F0
label_3e5f20:
    if (ctx->pc == 0x3E5F20u) {
        ctx->pc = 0x3E5F20u;
            // 0x3e5f20: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3E5F24u;
        goto label_3e5f24;
    }
    ctx->pc = 0x3E5F1Cu;
    SET_GPR_U32(ctx, 31, 0x3E5F24u);
    ctx->pc = 0x3E5F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5F1Cu;
            // 0x3e5f20: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5F24u; }
        if (ctx->pc != 0x3E5F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5F24u; }
        if (ctx->pc != 0x3E5F24u) { return; }
    }
    ctx->pc = 0x3E5F24u;
label_3e5f24:
    // 0x3e5f24: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3e5f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3e5f28:
    // 0x3e5f28: 0xc0d879c  jal         func_361E70
label_3e5f2c:
    if (ctx->pc == 0x3E5F2Cu) {
        ctx->pc = 0x3E5F2Cu;
            // 0x3e5f2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F30u;
        goto label_3e5f30;
    }
    ctx->pc = 0x3E5F28u;
    SET_GPR_U32(ctx, 31, 0x3E5F30u);
    ctx->pc = 0x3E5F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5F28u;
            // 0x3e5f2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5F30u; }
        if (ctx->pc != 0x3E5F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5F30u; }
        if (ctx->pc != 0x3E5F30u) { return; }
    }
    ctx->pc = 0x3E5F30u;
label_3e5f30:
    // 0x3e5f30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e5f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5f34:
    // 0x3e5f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e5f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e5f38:
    // 0x3e5f38: 0x3e00008  jr          $ra
label_3e5f3c:
    if (ctx->pc == 0x3E5F3Cu) {
        ctx->pc = 0x3E5F3Cu;
            // 0x3e5f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3E5F40u;
        goto label_3e5f40;
    }
    ctx->pc = 0x3E5F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5F38u;
            // 0x3e5f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E5F40u;
label_3e5f40:
    // 0x3e5f40: 0x80f7f94  j           func_3DFE50
label_3e5f44:
    if (ctx->pc == 0x3E5F44u) {
        ctx->pc = 0x3E5F44u;
            // 0x3e5f44: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3E5F48u;
        goto label_3e5f48;
    }
    ctx->pc = 0x3E5F40u;
    ctx->pc = 0x3E5F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5F40u;
            // 0x3e5f44: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DFE50u;
    {
        auto targetFn = runtime->lookupFunction(0x3DFE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3E5F48u;
label_3e5f48:
    // 0x3e5f48: 0x0  nop
    ctx->pc = 0x3e5f48u;
    // NOP
label_3e5f4c:
    // 0x3e5f4c: 0x0  nop
    ctx->pc = 0x3e5f4cu;
    // NOP
label_3e5f50:
    // 0x3e5f50: 0x80f917c  j           func_3E45F0
label_3e5f54:
    if (ctx->pc == 0x3E5F54u) {
        ctx->pc = 0x3E5F54u;
            // 0x3e5f54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3E5F58u;
        goto label_3e5f58;
    }
    ctx->pc = 0x3E5F50u;
    ctx->pc = 0x3E5F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5F50u;
            // 0x3e5f54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E45F0u;
    {
        auto targetFn = runtime->lookupFunction(0x3E45F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3E5F58u;
label_3e5f58:
    // 0x3e5f58: 0x0  nop
    ctx->pc = 0x3e5f58u;
    // NOP
label_3e5f5c:
    // 0x3e5f5c: 0x0  nop
    ctx->pc = 0x3e5f5cu;
    // NOP
label_3e5f60:
    // 0x3e5f60: 0x80f7f14  j           func_3DFC50
label_3e5f64:
    if (ctx->pc == 0x3E5F64u) {
        ctx->pc = 0x3E5F64u;
            // 0x3e5f64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3E5F68u;
        goto label_3e5f68;
    }
    ctx->pc = 0x3E5F60u;
    ctx->pc = 0x3E5F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5F60u;
            // 0x3e5f64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DFC50u;
    {
        auto targetFn = runtime->lookupFunction(0x3DFC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3E5F68u;
label_3e5f68:
    // 0x3e5f68: 0x0  nop
    ctx->pc = 0x3e5f68u;
    // NOP
label_3e5f6c:
    // 0x3e5f6c: 0x0  nop
    ctx->pc = 0x3e5f6cu;
    // NOP
label_3e5f70:
    // 0x3e5f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e5f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3e5f74:
    // 0x3e5f74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e5f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3e5f78:
    // 0x3e5f78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e5f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e5f7c:
    // 0x3e5f7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e5f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e5f80:
    // 0x3e5f80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e5f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e5f84:
    // 0x3e5f84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e5f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e5f88:
    // 0x3e5f88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e5f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5f8c:
    // 0x3e5f8c: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_3e5f90:
    if (ctx->pc == 0x3E5F90u) {
        ctx->pc = 0x3E5F90u;
            // 0x3e5f90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F94u;
        goto label_3e5f94;
    }
    ctx->pc = 0x3E5F8Cu;
    {
        const bool branch_taken_0x3e5f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5F8Cu;
            // 0x3e5f90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5f8c) {
            ctx->pc = 0x3E6020u;
            goto label_3e6020;
        }
    }
    ctx->pc = 0x3E5F94u;
label_3e5f94:
    // 0x3e5f94: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e5f98:
    // 0x3e5f98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e5f98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5f9c:
    // 0x3e5f9c: 0x24429bd0  addiu       $v0, $v0, -0x6430
    ctx->pc = 0x3e5f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941648));
label_3e5fa0:
    // 0x3e5fa0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3e5fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e5fa4:
    // 0x3e5fa4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3e5fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3e5fa8:
    // 0x3e5fa8: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3e5fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e5fac:
    // 0x3e5fac: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_3e5fb0:
    if (ctx->pc == 0x3E5FB0u) {
        ctx->pc = 0x3E5FB4u;
        goto label_3e5fb4;
    }
    ctx->pc = 0x3E5FACu;
    {
        const bool branch_taken_0x3e5fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5fac) {
            ctx->pc = 0x3E5FD8u;
            goto label_3e5fd8;
        }
    }
    ctx->pc = 0x3E5FB4u;
label_3e5fb4:
    // 0x3e5fb4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3e5fb8:
    if (ctx->pc == 0x3E5FB8u) {
        ctx->pc = 0x3E5FBCu;
        goto label_3e5fbc;
    }
    ctx->pc = 0x3E5FB4u;
    {
        const bool branch_taken_0x3e5fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5fb4) {
            ctx->pc = 0x3E5FD0u;
            goto label_3e5fd0;
        }
    }
    ctx->pc = 0x3E5FBCu;
label_3e5fbc:
    // 0x3e5fbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e5fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e5fc0:
    // 0x3e5fc0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e5fc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e5fc4:
    // 0x3e5fc4: 0x320f809  jalr        $t9
label_3e5fc8:
    if (ctx->pc == 0x3E5FC8u) {
        ctx->pc = 0x3E5FC8u;
            // 0x3e5fc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E5FCCu;
        goto label_3e5fcc;
    }
    ctx->pc = 0x3E5FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E5FCCu);
        ctx->pc = 0x3E5FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5FC4u;
            // 0x3e5fc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E5FCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E5FCCu; }
            if (ctx->pc != 0x3E5FCCu) { return; }
        }
        }
    }
    ctx->pc = 0x3E5FCCu;
label_3e5fcc:
    // 0x3e5fcc: 0x0  nop
    ctx->pc = 0x3e5fccu;
    // NOP
label_3e5fd0:
    // 0x3e5fd0: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x3e5fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_3e5fd4:
    // 0x3e5fd4: 0x0  nop
    ctx->pc = 0x3e5fd4u;
    // NOP
label_3e5fd8:
    // 0x3e5fd8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e5fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e5fdc:
    // 0x3e5fdc: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x3e5fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
label_3e5fe0:
    // 0x3e5fe0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3e5fe4:
    if (ctx->pc == 0x3E5FE4u) {
        ctx->pc = 0x3E5FE4u;
            // 0x3e5fe4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3E5FE8u;
        goto label_3e5fe8;
    }
    ctx->pc = 0x3E5FE0u;
    {
        const bool branch_taken_0x3e5fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5FE0u;
            // 0x3e5fe4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5fe0) {
            ctx->pc = 0x3E5FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e5fa8;
        }
    }
    ctx->pc = 0x3E5FE8u;
label_3e5fe8:
    // 0x3e5fe8: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_3e5fec:
    if (ctx->pc == 0x3E5FECu) {
        ctx->pc = 0x3E5FECu;
            // 0x3e5fec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3E5FF0u;
        goto label_3e5ff0;
    }
    ctx->pc = 0x3E5FE8u;
    {
        const bool branch_taken_0x3e5fe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5fe8) {
            ctx->pc = 0x3E5FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5FE8u;
            // 0x3e5fec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E600Cu;
            goto label_3e600c;
        }
    }
    ctx->pc = 0x3E5FF0u;
label_3e5ff0:
    // 0x3e5ff0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3e5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3e5ff4:
    // 0x3e5ff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e5ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e5ff8:
    // 0x3e5ff8: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3e5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3e5ffc:
    // 0x3e5ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e5ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e6000:
    // 0x3e6000: 0xc057a68  jal         func_15E9A0
label_3e6004:
    if (ctx->pc == 0x3E6004u) {
        ctx->pc = 0x3E6004u;
            // 0x3e6004: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3E6008u;
        goto label_3e6008;
    }
    ctx->pc = 0x3E6000u;
    SET_GPR_U32(ctx, 31, 0x3E6008u);
    ctx->pc = 0x3E6004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6000u;
            // 0x3e6004: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6008u; }
        if (ctx->pc != 0x3E6008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6008u; }
        if (ctx->pc != 0x3E6008u) { return; }
    }
    ctx->pc = 0x3E6008u;
label_3e6008:
    // 0x3e6008: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3e6008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3e600c:
    // 0x3e600c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e600cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3e6010:
    // 0x3e6010: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3e6014:
    if (ctx->pc == 0x3E6014u) {
        ctx->pc = 0x3E6014u;
            // 0x3e6014: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6018u;
        goto label_3e6018;
    }
    ctx->pc = 0x3E6010u;
    {
        const bool branch_taken_0x3e6010 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e6010) {
            ctx->pc = 0x3E6014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6010u;
            // 0x3e6014: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6024u;
            goto label_3e6024;
        }
    }
    ctx->pc = 0x3E6018u;
label_3e6018:
    // 0x3e6018: 0xc0400a8  jal         func_1002A0
label_3e601c:
    if (ctx->pc == 0x3E601Cu) {
        ctx->pc = 0x3E601Cu;
            // 0x3e601c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6020u;
        goto label_3e6020;
    }
    ctx->pc = 0x3E6018u;
    SET_GPR_U32(ctx, 31, 0x3E6020u);
    ctx->pc = 0x3E601Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6018u;
            // 0x3e601c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6020u; }
        if (ctx->pc != 0x3E6020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6020u; }
        if (ctx->pc != 0x3E6020u) { return; }
    }
    ctx->pc = 0x3E6020u;
label_3e6020:
    // 0x3e6020: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3e6020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6024:
    // 0x3e6024: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e6024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3e6028:
    // 0x3e6028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e6028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e602c:
    // 0x3e602c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e602cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e6030:
    // 0x3e6030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e6030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6034:
    // 0x3e6034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e6034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e6038:
    // 0x3e6038: 0x3e00008  jr          $ra
label_3e603c:
    if (ctx->pc == 0x3E603Cu) {
        ctx->pc = 0x3E603Cu;
            // 0x3e603c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3E6040u;
        goto label_3e6040;
    }
    ctx->pc = 0x3E6038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E603Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6038u;
            // 0x3e603c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6040u;
label_3e6040:
    // 0x3e6040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e6040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e6044:
    // 0x3e6044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e6044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e6048:
    // 0x3e6048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e6048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e604c:
    // 0x3e604c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e604cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e6050:
    // 0x3e6050: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_3e6054:
    if (ctx->pc == 0x3E6054u) {
        ctx->pc = 0x3E6054u;
            // 0x3e6054: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6058u;
        goto label_3e6058;
    }
    ctx->pc = 0x3E6050u;
    {
        const bool branch_taken_0x3e6050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6050) {
            ctx->pc = 0x3E6054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6050u;
            // 0x3e6054: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E607Cu;
            goto label_3e607c;
        }
    }
    ctx->pc = 0x3E6058u;
label_3e6058:
    // 0x3e6058: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3e6058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_3e605c:
    // 0x3e605c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e605cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e6060:
    // 0x3e6060: 0x24639c00  addiu       $v1, $v1, -0x6400
    ctx->pc = 0x3e6060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941696));
label_3e6064:
    // 0x3e6064: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e6064u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3e6068:
    // 0x3e6068: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_3e606c:
    if (ctx->pc == 0x3E606Cu) {
        ctx->pc = 0x3E606Cu;
            // 0x3e606c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3E6070u;
        goto label_3e6070;
    }
    ctx->pc = 0x3E6068u;
    {
        const bool branch_taken_0x3e6068 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3E606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6068u;
            // 0x3e606c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6068) {
            ctx->pc = 0x3E6078u;
            goto label_3e6078;
        }
    }
    ctx->pc = 0x3E6070u;
label_3e6070:
    // 0x3e6070: 0xc0400a8  jal         func_1002A0
label_3e6074:
    if (ctx->pc == 0x3E6074u) {
        ctx->pc = 0x3E6078u;
        goto label_3e6078;
    }
    ctx->pc = 0x3E6070u;
    SET_GPR_U32(ctx, 31, 0x3E6078u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6078u; }
        if (ctx->pc != 0x3E6078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6078u; }
        if (ctx->pc != 0x3E6078u) { return; }
    }
    ctx->pc = 0x3E6078u;
label_3e6078:
    // 0x3e6078: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e6078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e607c:
    // 0x3e607c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e607cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6080:
    // 0x3e6080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e6080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e6084:
    // 0x3e6084: 0x3e00008  jr          $ra
label_3e6088:
    if (ctx->pc == 0x3E6088u) {
        ctx->pc = 0x3E6088u;
            // 0x3e6088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3E608Cu;
        goto label_3e608c;
    }
    ctx->pc = 0x3E6084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6084u;
            // 0x3e6088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E608Cu;
label_3e608c:
    // 0x3e608c: 0x0  nop
    ctx->pc = 0x3e608cu;
    // NOP
label_3e6090:
    // 0x3e6090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e6090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e6094:
    // 0x3e6094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e6094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e6098:
    // 0x3e6098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e6098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e609c:
    // 0x3e609c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e60a0:
    // 0x3e60a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e60a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e60a4:
    // 0x3e60a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e60a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e60a8:
    // 0x3e60a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e60a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e60ac:
    // 0x3e60ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e60acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e60b0:
    // 0x3e60b0: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x3e60b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_3e60b4:
    // 0x3e60b4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3e60b8:
    if (ctx->pc == 0x3E60B8u) {
        ctx->pc = 0x3E60BCu;
        goto label_3e60bc;
    }
    ctx->pc = 0x3E60B4u;
    {
        const bool branch_taken_0x3e60b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e60b4) {
            ctx->pc = 0x3E60D8u;
            goto label_3e60d8;
        }
    }
    ctx->pc = 0x3E60BCu;
label_3e60bc:
    // 0x3e60bc: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x3e60bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_3e60c0:
    // 0x3e60c0: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
label_3e60c4:
    if (ctx->pc == 0x3E60C4u) {
        ctx->pc = 0x3E60C8u;
        goto label_3e60c8;
    }
    ctx->pc = 0x3E60C0u;
    {
        const bool branch_taken_0x3e60c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e60c0) {
            ctx->pc = 0x3E60D8u;
            goto label_3e60d8;
        }
    }
    ctx->pc = 0x3E60C8u;
label_3e60c8:
    // 0x3e60c8: 0xc0f986c  jal         func_3E61B0
label_3e60cc:
    if (ctx->pc == 0x3E60CCu) {
        ctx->pc = 0x3E60D0u;
        goto label_3e60d0;
    }
    ctx->pc = 0x3E60C8u;
    SET_GPR_U32(ctx, 31, 0x3E60D0u);
    ctx->pc = 0x3E61B0u;
    if (runtime->hasFunction(0x3E61B0u)) {
        auto targetFn = runtime->lookupFunction(0x3E61B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E60D0u; }
        if (ctx->pc != 0x3E60D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E61B0_0x3e61b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E60D0u; }
        if (ctx->pc != 0x3E60D0u) { return; }
    }
    ctx->pc = 0x3E60D0u;
label_3e60d0:
    // 0x3e60d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e60d4:
    if (ctx->pc == 0x3E60D4u) {
        ctx->pc = 0x3E60D8u;
        goto label_3e60d8;
    }
    ctx->pc = 0x3E60D0u;
    {
        const bool branch_taken_0x3e60d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e60d0) {
            ctx->pc = 0x3E60E8u;
            goto label_3e60e8;
        }
    }
    ctx->pc = 0x3E60D8u;
label_3e60d8:
    // 0x3e60d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e60d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e60dc:
    // 0x3e60dc: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x3e60dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_3e60e0:
    // 0x3e60e0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_3e60e4:
    if (ctx->pc == 0x3E60E4u) {
        ctx->pc = 0x3E60E4u;
            // 0x3e60e4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3E60E8u;
        goto label_3e60e8;
    }
    ctx->pc = 0x3E60E0u;
    {
        const bool branch_taken_0x3e60e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E60E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E60E0u;
            // 0x3e60e4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e60e0) {
            ctx->pc = 0x3E60B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e60b0;
        }
    }
    ctx->pc = 0x3E60E8u;
label_3e60e8:
    // 0x3e60e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e60e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e60ec:
    // 0x3e60ec: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x3e60ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_3e60f0:
    // 0x3e60f0: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
label_3e60f4:
    if (ctx->pc == 0x3E60F4u) {
        ctx->pc = 0x3E60F4u;
            // 0x3e60f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E60F8u;
        goto label_3e60f8;
    }
    ctx->pc = 0x3E60F0u;
    {
        const bool branch_taken_0x3e60f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e60f0) {
            ctx->pc = 0x3E60F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E60F0u;
            // 0x3e60f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E60ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e60ac;
        }
    }
    ctx->pc = 0x3E60F8u;
label_3e60f8:
    // 0x3e60f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e60f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e60fc:
    // 0x3e60fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e60fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6100:
    // 0x3e6100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e6100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e6104:
    // 0x3e6104: 0x3e00008  jr          $ra
label_3e6108:
    if (ctx->pc == 0x3E6108u) {
        ctx->pc = 0x3E6108u;
            // 0x3e6108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3E610Cu;
        goto label_3e610c;
    }
    ctx->pc = 0x3E6104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6104u;
            // 0x3e6108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E610Cu;
label_3e610c:
    // 0x3e610c: 0x0  nop
    ctx->pc = 0x3e610cu;
    // NOP
}
