#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005258C0
// Address: 0x5258c0 - 0x526660
void sub_005258C0_0x5258c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005258C0_0x5258c0");
#endif

    switch (ctx->pc) {
        case 0x5258c0u: goto label_5258c0;
        case 0x5258c4u: goto label_5258c4;
        case 0x5258c8u: goto label_5258c8;
        case 0x5258ccu: goto label_5258cc;
        case 0x5258d0u: goto label_5258d0;
        case 0x5258d4u: goto label_5258d4;
        case 0x5258d8u: goto label_5258d8;
        case 0x5258dcu: goto label_5258dc;
        case 0x5258e0u: goto label_5258e0;
        case 0x5258e4u: goto label_5258e4;
        case 0x5258e8u: goto label_5258e8;
        case 0x5258ecu: goto label_5258ec;
        case 0x5258f0u: goto label_5258f0;
        case 0x5258f4u: goto label_5258f4;
        case 0x5258f8u: goto label_5258f8;
        case 0x5258fcu: goto label_5258fc;
        case 0x525900u: goto label_525900;
        case 0x525904u: goto label_525904;
        case 0x525908u: goto label_525908;
        case 0x52590cu: goto label_52590c;
        case 0x525910u: goto label_525910;
        case 0x525914u: goto label_525914;
        case 0x525918u: goto label_525918;
        case 0x52591cu: goto label_52591c;
        case 0x525920u: goto label_525920;
        case 0x525924u: goto label_525924;
        case 0x525928u: goto label_525928;
        case 0x52592cu: goto label_52592c;
        case 0x525930u: goto label_525930;
        case 0x525934u: goto label_525934;
        case 0x525938u: goto label_525938;
        case 0x52593cu: goto label_52593c;
        case 0x525940u: goto label_525940;
        case 0x525944u: goto label_525944;
        case 0x525948u: goto label_525948;
        case 0x52594cu: goto label_52594c;
        case 0x525950u: goto label_525950;
        case 0x525954u: goto label_525954;
        case 0x525958u: goto label_525958;
        case 0x52595cu: goto label_52595c;
        case 0x525960u: goto label_525960;
        case 0x525964u: goto label_525964;
        case 0x525968u: goto label_525968;
        case 0x52596cu: goto label_52596c;
        case 0x525970u: goto label_525970;
        case 0x525974u: goto label_525974;
        case 0x525978u: goto label_525978;
        case 0x52597cu: goto label_52597c;
        case 0x525980u: goto label_525980;
        case 0x525984u: goto label_525984;
        case 0x525988u: goto label_525988;
        case 0x52598cu: goto label_52598c;
        case 0x525990u: goto label_525990;
        case 0x525994u: goto label_525994;
        case 0x525998u: goto label_525998;
        case 0x52599cu: goto label_52599c;
        case 0x5259a0u: goto label_5259a0;
        case 0x5259a4u: goto label_5259a4;
        case 0x5259a8u: goto label_5259a8;
        case 0x5259acu: goto label_5259ac;
        case 0x5259b0u: goto label_5259b0;
        case 0x5259b4u: goto label_5259b4;
        case 0x5259b8u: goto label_5259b8;
        case 0x5259bcu: goto label_5259bc;
        case 0x5259c0u: goto label_5259c0;
        case 0x5259c4u: goto label_5259c4;
        case 0x5259c8u: goto label_5259c8;
        case 0x5259ccu: goto label_5259cc;
        case 0x5259d0u: goto label_5259d0;
        case 0x5259d4u: goto label_5259d4;
        case 0x5259d8u: goto label_5259d8;
        case 0x5259dcu: goto label_5259dc;
        case 0x5259e0u: goto label_5259e0;
        case 0x5259e4u: goto label_5259e4;
        case 0x5259e8u: goto label_5259e8;
        case 0x5259ecu: goto label_5259ec;
        case 0x5259f0u: goto label_5259f0;
        case 0x5259f4u: goto label_5259f4;
        case 0x5259f8u: goto label_5259f8;
        case 0x5259fcu: goto label_5259fc;
        case 0x525a00u: goto label_525a00;
        case 0x525a04u: goto label_525a04;
        case 0x525a08u: goto label_525a08;
        case 0x525a0cu: goto label_525a0c;
        case 0x525a10u: goto label_525a10;
        case 0x525a14u: goto label_525a14;
        case 0x525a18u: goto label_525a18;
        case 0x525a1cu: goto label_525a1c;
        case 0x525a20u: goto label_525a20;
        case 0x525a24u: goto label_525a24;
        case 0x525a28u: goto label_525a28;
        case 0x525a2cu: goto label_525a2c;
        case 0x525a30u: goto label_525a30;
        case 0x525a34u: goto label_525a34;
        case 0x525a38u: goto label_525a38;
        case 0x525a3cu: goto label_525a3c;
        case 0x525a40u: goto label_525a40;
        case 0x525a44u: goto label_525a44;
        case 0x525a48u: goto label_525a48;
        case 0x525a4cu: goto label_525a4c;
        case 0x525a50u: goto label_525a50;
        case 0x525a54u: goto label_525a54;
        case 0x525a58u: goto label_525a58;
        case 0x525a5cu: goto label_525a5c;
        case 0x525a60u: goto label_525a60;
        case 0x525a64u: goto label_525a64;
        case 0x525a68u: goto label_525a68;
        case 0x525a6cu: goto label_525a6c;
        case 0x525a70u: goto label_525a70;
        case 0x525a74u: goto label_525a74;
        case 0x525a78u: goto label_525a78;
        case 0x525a7cu: goto label_525a7c;
        case 0x525a80u: goto label_525a80;
        case 0x525a84u: goto label_525a84;
        case 0x525a88u: goto label_525a88;
        case 0x525a8cu: goto label_525a8c;
        case 0x525a90u: goto label_525a90;
        case 0x525a94u: goto label_525a94;
        case 0x525a98u: goto label_525a98;
        case 0x525a9cu: goto label_525a9c;
        case 0x525aa0u: goto label_525aa0;
        case 0x525aa4u: goto label_525aa4;
        case 0x525aa8u: goto label_525aa8;
        case 0x525aacu: goto label_525aac;
        case 0x525ab0u: goto label_525ab0;
        case 0x525ab4u: goto label_525ab4;
        case 0x525ab8u: goto label_525ab8;
        case 0x525abcu: goto label_525abc;
        case 0x525ac0u: goto label_525ac0;
        case 0x525ac4u: goto label_525ac4;
        case 0x525ac8u: goto label_525ac8;
        case 0x525accu: goto label_525acc;
        case 0x525ad0u: goto label_525ad0;
        case 0x525ad4u: goto label_525ad4;
        case 0x525ad8u: goto label_525ad8;
        case 0x525adcu: goto label_525adc;
        case 0x525ae0u: goto label_525ae0;
        case 0x525ae4u: goto label_525ae4;
        case 0x525ae8u: goto label_525ae8;
        case 0x525aecu: goto label_525aec;
        case 0x525af0u: goto label_525af0;
        case 0x525af4u: goto label_525af4;
        case 0x525af8u: goto label_525af8;
        case 0x525afcu: goto label_525afc;
        case 0x525b00u: goto label_525b00;
        case 0x525b04u: goto label_525b04;
        case 0x525b08u: goto label_525b08;
        case 0x525b0cu: goto label_525b0c;
        case 0x525b10u: goto label_525b10;
        case 0x525b14u: goto label_525b14;
        case 0x525b18u: goto label_525b18;
        case 0x525b1cu: goto label_525b1c;
        case 0x525b20u: goto label_525b20;
        case 0x525b24u: goto label_525b24;
        case 0x525b28u: goto label_525b28;
        case 0x525b2cu: goto label_525b2c;
        case 0x525b30u: goto label_525b30;
        case 0x525b34u: goto label_525b34;
        case 0x525b38u: goto label_525b38;
        case 0x525b3cu: goto label_525b3c;
        case 0x525b40u: goto label_525b40;
        case 0x525b44u: goto label_525b44;
        case 0x525b48u: goto label_525b48;
        case 0x525b4cu: goto label_525b4c;
        case 0x525b50u: goto label_525b50;
        case 0x525b54u: goto label_525b54;
        case 0x525b58u: goto label_525b58;
        case 0x525b5cu: goto label_525b5c;
        case 0x525b60u: goto label_525b60;
        case 0x525b64u: goto label_525b64;
        case 0x525b68u: goto label_525b68;
        case 0x525b6cu: goto label_525b6c;
        case 0x525b70u: goto label_525b70;
        case 0x525b74u: goto label_525b74;
        case 0x525b78u: goto label_525b78;
        case 0x525b7cu: goto label_525b7c;
        case 0x525b80u: goto label_525b80;
        case 0x525b84u: goto label_525b84;
        case 0x525b88u: goto label_525b88;
        case 0x525b8cu: goto label_525b8c;
        case 0x525b90u: goto label_525b90;
        case 0x525b94u: goto label_525b94;
        case 0x525b98u: goto label_525b98;
        case 0x525b9cu: goto label_525b9c;
        case 0x525ba0u: goto label_525ba0;
        case 0x525ba4u: goto label_525ba4;
        case 0x525ba8u: goto label_525ba8;
        case 0x525bacu: goto label_525bac;
        case 0x525bb0u: goto label_525bb0;
        case 0x525bb4u: goto label_525bb4;
        case 0x525bb8u: goto label_525bb8;
        case 0x525bbcu: goto label_525bbc;
        case 0x525bc0u: goto label_525bc0;
        case 0x525bc4u: goto label_525bc4;
        case 0x525bc8u: goto label_525bc8;
        case 0x525bccu: goto label_525bcc;
        case 0x525bd0u: goto label_525bd0;
        case 0x525bd4u: goto label_525bd4;
        case 0x525bd8u: goto label_525bd8;
        case 0x525bdcu: goto label_525bdc;
        case 0x525be0u: goto label_525be0;
        case 0x525be4u: goto label_525be4;
        case 0x525be8u: goto label_525be8;
        case 0x525becu: goto label_525bec;
        case 0x525bf0u: goto label_525bf0;
        case 0x525bf4u: goto label_525bf4;
        case 0x525bf8u: goto label_525bf8;
        case 0x525bfcu: goto label_525bfc;
        case 0x525c00u: goto label_525c00;
        case 0x525c04u: goto label_525c04;
        case 0x525c08u: goto label_525c08;
        case 0x525c0cu: goto label_525c0c;
        case 0x525c10u: goto label_525c10;
        case 0x525c14u: goto label_525c14;
        case 0x525c18u: goto label_525c18;
        case 0x525c1cu: goto label_525c1c;
        case 0x525c20u: goto label_525c20;
        case 0x525c24u: goto label_525c24;
        case 0x525c28u: goto label_525c28;
        case 0x525c2cu: goto label_525c2c;
        case 0x525c30u: goto label_525c30;
        case 0x525c34u: goto label_525c34;
        case 0x525c38u: goto label_525c38;
        case 0x525c3cu: goto label_525c3c;
        case 0x525c40u: goto label_525c40;
        case 0x525c44u: goto label_525c44;
        case 0x525c48u: goto label_525c48;
        case 0x525c4cu: goto label_525c4c;
        case 0x525c50u: goto label_525c50;
        case 0x525c54u: goto label_525c54;
        case 0x525c58u: goto label_525c58;
        case 0x525c5cu: goto label_525c5c;
        case 0x525c60u: goto label_525c60;
        case 0x525c64u: goto label_525c64;
        case 0x525c68u: goto label_525c68;
        case 0x525c6cu: goto label_525c6c;
        case 0x525c70u: goto label_525c70;
        case 0x525c74u: goto label_525c74;
        case 0x525c78u: goto label_525c78;
        case 0x525c7cu: goto label_525c7c;
        case 0x525c80u: goto label_525c80;
        case 0x525c84u: goto label_525c84;
        case 0x525c88u: goto label_525c88;
        case 0x525c8cu: goto label_525c8c;
        case 0x525c90u: goto label_525c90;
        case 0x525c94u: goto label_525c94;
        case 0x525c98u: goto label_525c98;
        case 0x525c9cu: goto label_525c9c;
        case 0x525ca0u: goto label_525ca0;
        case 0x525ca4u: goto label_525ca4;
        case 0x525ca8u: goto label_525ca8;
        case 0x525cacu: goto label_525cac;
        case 0x525cb0u: goto label_525cb0;
        case 0x525cb4u: goto label_525cb4;
        case 0x525cb8u: goto label_525cb8;
        case 0x525cbcu: goto label_525cbc;
        case 0x525cc0u: goto label_525cc0;
        case 0x525cc4u: goto label_525cc4;
        case 0x525cc8u: goto label_525cc8;
        case 0x525cccu: goto label_525ccc;
        case 0x525cd0u: goto label_525cd0;
        case 0x525cd4u: goto label_525cd4;
        case 0x525cd8u: goto label_525cd8;
        case 0x525cdcu: goto label_525cdc;
        case 0x525ce0u: goto label_525ce0;
        case 0x525ce4u: goto label_525ce4;
        case 0x525ce8u: goto label_525ce8;
        case 0x525cecu: goto label_525cec;
        case 0x525cf0u: goto label_525cf0;
        case 0x525cf4u: goto label_525cf4;
        case 0x525cf8u: goto label_525cf8;
        case 0x525cfcu: goto label_525cfc;
        case 0x525d00u: goto label_525d00;
        case 0x525d04u: goto label_525d04;
        case 0x525d08u: goto label_525d08;
        case 0x525d0cu: goto label_525d0c;
        case 0x525d10u: goto label_525d10;
        case 0x525d14u: goto label_525d14;
        case 0x525d18u: goto label_525d18;
        case 0x525d1cu: goto label_525d1c;
        case 0x525d20u: goto label_525d20;
        case 0x525d24u: goto label_525d24;
        case 0x525d28u: goto label_525d28;
        case 0x525d2cu: goto label_525d2c;
        case 0x525d30u: goto label_525d30;
        case 0x525d34u: goto label_525d34;
        case 0x525d38u: goto label_525d38;
        case 0x525d3cu: goto label_525d3c;
        case 0x525d40u: goto label_525d40;
        case 0x525d44u: goto label_525d44;
        case 0x525d48u: goto label_525d48;
        case 0x525d4cu: goto label_525d4c;
        case 0x525d50u: goto label_525d50;
        case 0x525d54u: goto label_525d54;
        case 0x525d58u: goto label_525d58;
        case 0x525d5cu: goto label_525d5c;
        case 0x525d60u: goto label_525d60;
        case 0x525d64u: goto label_525d64;
        case 0x525d68u: goto label_525d68;
        case 0x525d6cu: goto label_525d6c;
        case 0x525d70u: goto label_525d70;
        case 0x525d74u: goto label_525d74;
        case 0x525d78u: goto label_525d78;
        case 0x525d7cu: goto label_525d7c;
        case 0x525d80u: goto label_525d80;
        case 0x525d84u: goto label_525d84;
        case 0x525d88u: goto label_525d88;
        case 0x525d8cu: goto label_525d8c;
        case 0x525d90u: goto label_525d90;
        case 0x525d94u: goto label_525d94;
        case 0x525d98u: goto label_525d98;
        case 0x525d9cu: goto label_525d9c;
        case 0x525da0u: goto label_525da0;
        case 0x525da4u: goto label_525da4;
        case 0x525da8u: goto label_525da8;
        case 0x525dacu: goto label_525dac;
        case 0x525db0u: goto label_525db0;
        case 0x525db4u: goto label_525db4;
        case 0x525db8u: goto label_525db8;
        case 0x525dbcu: goto label_525dbc;
        case 0x525dc0u: goto label_525dc0;
        case 0x525dc4u: goto label_525dc4;
        case 0x525dc8u: goto label_525dc8;
        case 0x525dccu: goto label_525dcc;
        case 0x525dd0u: goto label_525dd0;
        case 0x525dd4u: goto label_525dd4;
        case 0x525dd8u: goto label_525dd8;
        case 0x525ddcu: goto label_525ddc;
        case 0x525de0u: goto label_525de0;
        case 0x525de4u: goto label_525de4;
        case 0x525de8u: goto label_525de8;
        case 0x525decu: goto label_525dec;
        case 0x525df0u: goto label_525df0;
        case 0x525df4u: goto label_525df4;
        case 0x525df8u: goto label_525df8;
        case 0x525dfcu: goto label_525dfc;
        case 0x525e00u: goto label_525e00;
        case 0x525e04u: goto label_525e04;
        case 0x525e08u: goto label_525e08;
        case 0x525e0cu: goto label_525e0c;
        case 0x525e10u: goto label_525e10;
        case 0x525e14u: goto label_525e14;
        case 0x525e18u: goto label_525e18;
        case 0x525e1cu: goto label_525e1c;
        case 0x525e20u: goto label_525e20;
        case 0x525e24u: goto label_525e24;
        case 0x525e28u: goto label_525e28;
        case 0x525e2cu: goto label_525e2c;
        case 0x525e30u: goto label_525e30;
        case 0x525e34u: goto label_525e34;
        case 0x525e38u: goto label_525e38;
        case 0x525e3cu: goto label_525e3c;
        case 0x525e40u: goto label_525e40;
        case 0x525e44u: goto label_525e44;
        case 0x525e48u: goto label_525e48;
        case 0x525e4cu: goto label_525e4c;
        case 0x525e50u: goto label_525e50;
        case 0x525e54u: goto label_525e54;
        case 0x525e58u: goto label_525e58;
        case 0x525e5cu: goto label_525e5c;
        case 0x525e60u: goto label_525e60;
        case 0x525e64u: goto label_525e64;
        case 0x525e68u: goto label_525e68;
        case 0x525e6cu: goto label_525e6c;
        case 0x525e70u: goto label_525e70;
        case 0x525e74u: goto label_525e74;
        case 0x525e78u: goto label_525e78;
        case 0x525e7cu: goto label_525e7c;
        case 0x525e80u: goto label_525e80;
        case 0x525e84u: goto label_525e84;
        case 0x525e88u: goto label_525e88;
        case 0x525e8cu: goto label_525e8c;
        case 0x525e90u: goto label_525e90;
        case 0x525e94u: goto label_525e94;
        case 0x525e98u: goto label_525e98;
        case 0x525e9cu: goto label_525e9c;
        case 0x525ea0u: goto label_525ea0;
        case 0x525ea4u: goto label_525ea4;
        case 0x525ea8u: goto label_525ea8;
        case 0x525eacu: goto label_525eac;
        case 0x525eb0u: goto label_525eb0;
        case 0x525eb4u: goto label_525eb4;
        case 0x525eb8u: goto label_525eb8;
        case 0x525ebcu: goto label_525ebc;
        case 0x525ec0u: goto label_525ec0;
        case 0x525ec4u: goto label_525ec4;
        case 0x525ec8u: goto label_525ec8;
        case 0x525eccu: goto label_525ecc;
        case 0x525ed0u: goto label_525ed0;
        case 0x525ed4u: goto label_525ed4;
        case 0x525ed8u: goto label_525ed8;
        case 0x525edcu: goto label_525edc;
        case 0x525ee0u: goto label_525ee0;
        case 0x525ee4u: goto label_525ee4;
        case 0x525ee8u: goto label_525ee8;
        case 0x525eecu: goto label_525eec;
        case 0x525ef0u: goto label_525ef0;
        case 0x525ef4u: goto label_525ef4;
        case 0x525ef8u: goto label_525ef8;
        case 0x525efcu: goto label_525efc;
        case 0x525f00u: goto label_525f00;
        case 0x525f04u: goto label_525f04;
        case 0x525f08u: goto label_525f08;
        case 0x525f0cu: goto label_525f0c;
        case 0x525f10u: goto label_525f10;
        case 0x525f14u: goto label_525f14;
        case 0x525f18u: goto label_525f18;
        case 0x525f1cu: goto label_525f1c;
        case 0x525f20u: goto label_525f20;
        case 0x525f24u: goto label_525f24;
        case 0x525f28u: goto label_525f28;
        case 0x525f2cu: goto label_525f2c;
        case 0x525f30u: goto label_525f30;
        case 0x525f34u: goto label_525f34;
        case 0x525f38u: goto label_525f38;
        case 0x525f3cu: goto label_525f3c;
        case 0x525f40u: goto label_525f40;
        case 0x525f44u: goto label_525f44;
        case 0x525f48u: goto label_525f48;
        case 0x525f4cu: goto label_525f4c;
        case 0x525f50u: goto label_525f50;
        case 0x525f54u: goto label_525f54;
        case 0x525f58u: goto label_525f58;
        case 0x525f5cu: goto label_525f5c;
        case 0x525f60u: goto label_525f60;
        case 0x525f64u: goto label_525f64;
        case 0x525f68u: goto label_525f68;
        case 0x525f6cu: goto label_525f6c;
        case 0x525f70u: goto label_525f70;
        case 0x525f74u: goto label_525f74;
        case 0x525f78u: goto label_525f78;
        case 0x525f7cu: goto label_525f7c;
        case 0x525f80u: goto label_525f80;
        case 0x525f84u: goto label_525f84;
        case 0x525f88u: goto label_525f88;
        case 0x525f8cu: goto label_525f8c;
        case 0x525f90u: goto label_525f90;
        case 0x525f94u: goto label_525f94;
        case 0x525f98u: goto label_525f98;
        case 0x525f9cu: goto label_525f9c;
        case 0x525fa0u: goto label_525fa0;
        case 0x525fa4u: goto label_525fa4;
        case 0x525fa8u: goto label_525fa8;
        case 0x525facu: goto label_525fac;
        case 0x525fb0u: goto label_525fb0;
        case 0x525fb4u: goto label_525fb4;
        case 0x525fb8u: goto label_525fb8;
        case 0x525fbcu: goto label_525fbc;
        case 0x525fc0u: goto label_525fc0;
        case 0x525fc4u: goto label_525fc4;
        case 0x525fc8u: goto label_525fc8;
        case 0x525fccu: goto label_525fcc;
        case 0x525fd0u: goto label_525fd0;
        case 0x525fd4u: goto label_525fd4;
        case 0x525fd8u: goto label_525fd8;
        case 0x525fdcu: goto label_525fdc;
        case 0x525fe0u: goto label_525fe0;
        case 0x525fe4u: goto label_525fe4;
        case 0x525fe8u: goto label_525fe8;
        case 0x525fecu: goto label_525fec;
        case 0x525ff0u: goto label_525ff0;
        case 0x525ff4u: goto label_525ff4;
        case 0x525ff8u: goto label_525ff8;
        case 0x525ffcu: goto label_525ffc;
        case 0x526000u: goto label_526000;
        case 0x526004u: goto label_526004;
        case 0x526008u: goto label_526008;
        case 0x52600cu: goto label_52600c;
        case 0x526010u: goto label_526010;
        case 0x526014u: goto label_526014;
        case 0x526018u: goto label_526018;
        case 0x52601cu: goto label_52601c;
        case 0x526020u: goto label_526020;
        case 0x526024u: goto label_526024;
        case 0x526028u: goto label_526028;
        case 0x52602cu: goto label_52602c;
        case 0x526030u: goto label_526030;
        case 0x526034u: goto label_526034;
        case 0x526038u: goto label_526038;
        case 0x52603cu: goto label_52603c;
        case 0x526040u: goto label_526040;
        case 0x526044u: goto label_526044;
        case 0x526048u: goto label_526048;
        case 0x52604cu: goto label_52604c;
        case 0x526050u: goto label_526050;
        case 0x526054u: goto label_526054;
        case 0x526058u: goto label_526058;
        case 0x52605cu: goto label_52605c;
        case 0x526060u: goto label_526060;
        case 0x526064u: goto label_526064;
        case 0x526068u: goto label_526068;
        case 0x52606cu: goto label_52606c;
        case 0x526070u: goto label_526070;
        case 0x526074u: goto label_526074;
        case 0x526078u: goto label_526078;
        case 0x52607cu: goto label_52607c;
        case 0x526080u: goto label_526080;
        case 0x526084u: goto label_526084;
        case 0x526088u: goto label_526088;
        case 0x52608cu: goto label_52608c;
        case 0x526090u: goto label_526090;
        case 0x526094u: goto label_526094;
        case 0x526098u: goto label_526098;
        case 0x52609cu: goto label_52609c;
        case 0x5260a0u: goto label_5260a0;
        case 0x5260a4u: goto label_5260a4;
        case 0x5260a8u: goto label_5260a8;
        case 0x5260acu: goto label_5260ac;
        case 0x5260b0u: goto label_5260b0;
        case 0x5260b4u: goto label_5260b4;
        case 0x5260b8u: goto label_5260b8;
        case 0x5260bcu: goto label_5260bc;
        case 0x5260c0u: goto label_5260c0;
        case 0x5260c4u: goto label_5260c4;
        case 0x5260c8u: goto label_5260c8;
        case 0x5260ccu: goto label_5260cc;
        case 0x5260d0u: goto label_5260d0;
        case 0x5260d4u: goto label_5260d4;
        case 0x5260d8u: goto label_5260d8;
        case 0x5260dcu: goto label_5260dc;
        case 0x5260e0u: goto label_5260e0;
        case 0x5260e4u: goto label_5260e4;
        case 0x5260e8u: goto label_5260e8;
        case 0x5260ecu: goto label_5260ec;
        case 0x5260f0u: goto label_5260f0;
        case 0x5260f4u: goto label_5260f4;
        case 0x5260f8u: goto label_5260f8;
        case 0x5260fcu: goto label_5260fc;
        case 0x526100u: goto label_526100;
        case 0x526104u: goto label_526104;
        case 0x526108u: goto label_526108;
        case 0x52610cu: goto label_52610c;
        case 0x526110u: goto label_526110;
        case 0x526114u: goto label_526114;
        case 0x526118u: goto label_526118;
        case 0x52611cu: goto label_52611c;
        case 0x526120u: goto label_526120;
        case 0x526124u: goto label_526124;
        case 0x526128u: goto label_526128;
        case 0x52612cu: goto label_52612c;
        case 0x526130u: goto label_526130;
        case 0x526134u: goto label_526134;
        case 0x526138u: goto label_526138;
        case 0x52613cu: goto label_52613c;
        case 0x526140u: goto label_526140;
        case 0x526144u: goto label_526144;
        case 0x526148u: goto label_526148;
        case 0x52614cu: goto label_52614c;
        case 0x526150u: goto label_526150;
        case 0x526154u: goto label_526154;
        case 0x526158u: goto label_526158;
        case 0x52615cu: goto label_52615c;
        case 0x526160u: goto label_526160;
        case 0x526164u: goto label_526164;
        case 0x526168u: goto label_526168;
        case 0x52616cu: goto label_52616c;
        case 0x526170u: goto label_526170;
        case 0x526174u: goto label_526174;
        case 0x526178u: goto label_526178;
        case 0x52617cu: goto label_52617c;
        case 0x526180u: goto label_526180;
        case 0x526184u: goto label_526184;
        case 0x526188u: goto label_526188;
        case 0x52618cu: goto label_52618c;
        case 0x526190u: goto label_526190;
        case 0x526194u: goto label_526194;
        case 0x526198u: goto label_526198;
        case 0x52619cu: goto label_52619c;
        case 0x5261a0u: goto label_5261a0;
        case 0x5261a4u: goto label_5261a4;
        case 0x5261a8u: goto label_5261a8;
        case 0x5261acu: goto label_5261ac;
        case 0x5261b0u: goto label_5261b0;
        case 0x5261b4u: goto label_5261b4;
        case 0x5261b8u: goto label_5261b8;
        case 0x5261bcu: goto label_5261bc;
        case 0x5261c0u: goto label_5261c0;
        case 0x5261c4u: goto label_5261c4;
        case 0x5261c8u: goto label_5261c8;
        case 0x5261ccu: goto label_5261cc;
        case 0x5261d0u: goto label_5261d0;
        case 0x5261d4u: goto label_5261d4;
        case 0x5261d8u: goto label_5261d8;
        case 0x5261dcu: goto label_5261dc;
        case 0x5261e0u: goto label_5261e0;
        case 0x5261e4u: goto label_5261e4;
        case 0x5261e8u: goto label_5261e8;
        case 0x5261ecu: goto label_5261ec;
        case 0x5261f0u: goto label_5261f0;
        case 0x5261f4u: goto label_5261f4;
        case 0x5261f8u: goto label_5261f8;
        case 0x5261fcu: goto label_5261fc;
        case 0x526200u: goto label_526200;
        case 0x526204u: goto label_526204;
        case 0x526208u: goto label_526208;
        case 0x52620cu: goto label_52620c;
        case 0x526210u: goto label_526210;
        case 0x526214u: goto label_526214;
        case 0x526218u: goto label_526218;
        case 0x52621cu: goto label_52621c;
        case 0x526220u: goto label_526220;
        case 0x526224u: goto label_526224;
        case 0x526228u: goto label_526228;
        case 0x52622cu: goto label_52622c;
        case 0x526230u: goto label_526230;
        case 0x526234u: goto label_526234;
        case 0x526238u: goto label_526238;
        case 0x52623cu: goto label_52623c;
        case 0x526240u: goto label_526240;
        case 0x526244u: goto label_526244;
        case 0x526248u: goto label_526248;
        case 0x52624cu: goto label_52624c;
        case 0x526250u: goto label_526250;
        case 0x526254u: goto label_526254;
        case 0x526258u: goto label_526258;
        case 0x52625cu: goto label_52625c;
        case 0x526260u: goto label_526260;
        case 0x526264u: goto label_526264;
        case 0x526268u: goto label_526268;
        case 0x52626cu: goto label_52626c;
        case 0x526270u: goto label_526270;
        case 0x526274u: goto label_526274;
        case 0x526278u: goto label_526278;
        case 0x52627cu: goto label_52627c;
        case 0x526280u: goto label_526280;
        case 0x526284u: goto label_526284;
        case 0x526288u: goto label_526288;
        case 0x52628cu: goto label_52628c;
        case 0x526290u: goto label_526290;
        case 0x526294u: goto label_526294;
        case 0x526298u: goto label_526298;
        case 0x52629cu: goto label_52629c;
        case 0x5262a0u: goto label_5262a0;
        case 0x5262a4u: goto label_5262a4;
        case 0x5262a8u: goto label_5262a8;
        case 0x5262acu: goto label_5262ac;
        case 0x5262b0u: goto label_5262b0;
        case 0x5262b4u: goto label_5262b4;
        case 0x5262b8u: goto label_5262b8;
        case 0x5262bcu: goto label_5262bc;
        case 0x5262c0u: goto label_5262c0;
        case 0x5262c4u: goto label_5262c4;
        case 0x5262c8u: goto label_5262c8;
        case 0x5262ccu: goto label_5262cc;
        case 0x5262d0u: goto label_5262d0;
        case 0x5262d4u: goto label_5262d4;
        case 0x5262d8u: goto label_5262d8;
        case 0x5262dcu: goto label_5262dc;
        case 0x5262e0u: goto label_5262e0;
        case 0x5262e4u: goto label_5262e4;
        case 0x5262e8u: goto label_5262e8;
        case 0x5262ecu: goto label_5262ec;
        case 0x5262f0u: goto label_5262f0;
        case 0x5262f4u: goto label_5262f4;
        case 0x5262f8u: goto label_5262f8;
        case 0x5262fcu: goto label_5262fc;
        case 0x526300u: goto label_526300;
        case 0x526304u: goto label_526304;
        case 0x526308u: goto label_526308;
        case 0x52630cu: goto label_52630c;
        case 0x526310u: goto label_526310;
        case 0x526314u: goto label_526314;
        case 0x526318u: goto label_526318;
        case 0x52631cu: goto label_52631c;
        case 0x526320u: goto label_526320;
        case 0x526324u: goto label_526324;
        case 0x526328u: goto label_526328;
        case 0x52632cu: goto label_52632c;
        case 0x526330u: goto label_526330;
        case 0x526334u: goto label_526334;
        case 0x526338u: goto label_526338;
        case 0x52633cu: goto label_52633c;
        case 0x526340u: goto label_526340;
        case 0x526344u: goto label_526344;
        case 0x526348u: goto label_526348;
        case 0x52634cu: goto label_52634c;
        case 0x526350u: goto label_526350;
        case 0x526354u: goto label_526354;
        case 0x526358u: goto label_526358;
        case 0x52635cu: goto label_52635c;
        case 0x526360u: goto label_526360;
        case 0x526364u: goto label_526364;
        case 0x526368u: goto label_526368;
        case 0x52636cu: goto label_52636c;
        case 0x526370u: goto label_526370;
        case 0x526374u: goto label_526374;
        case 0x526378u: goto label_526378;
        case 0x52637cu: goto label_52637c;
        case 0x526380u: goto label_526380;
        case 0x526384u: goto label_526384;
        case 0x526388u: goto label_526388;
        case 0x52638cu: goto label_52638c;
        case 0x526390u: goto label_526390;
        case 0x526394u: goto label_526394;
        case 0x526398u: goto label_526398;
        case 0x52639cu: goto label_52639c;
        case 0x5263a0u: goto label_5263a0;
        case 0x5263a4u: goto label_5263a4;
        case 0x5263a8u: goto label_5263a8;
        case 0x5263acu: goto label_5263ac;
        case 0x5263b0u: goto label_5263b0;
        case 0x5263b4u: goto label_5263b4;
        case 0x5263b8u: goto label_5263b8;
        case 0x5263bcu: goto label_5263bc;
        case 0x5263c0u: goto label_5263c0;
        case 0x5263c4u: goto label_5263c4;
        case 0x5263c8u: goto label_5263c8;
        case 0x5263ccu: goto label_5263cc;
        case 0x5263d0u: goto label_5263d0;
        case 0x5263d4u: goto label_5263d4;
        case 0x5263d8u: goto label_5263d8;
        case 0x5263dcu: goto label_5263dc;
        case 0x5263e0u: goto label_5263e0;
        case 0x5263e4u: goto label_5263e4;
        case 0x5263e8u: goto label_5263e8;
        case 0x5263ecu: goto label_5263ec;
        case 0x5263f0u: goto label_5263f0;
        case 0x5263f4u: goto label_5263f4;
        case 0x5263f8u: goto label_5263f8;
        case 0x5263fcu: goto label_5263fc;
        case 0x526400u: goto label_526400;
        case 0x526404u: goto label_526404;
        case 0x526408u: goto label_526408;
        case 0x52640cu: goto label_52640c;
        case 0x526410u: goto label_526410;
        case 0x526414u: goto label_526414;
        case 0x526418u: goto label_526418;
        case 0x52641cu: goto label_52641c;
        case 0x526420u: goto label_526420;
        case 0x526424u: goto label_526424;
        case 0x526428u: goto label_526428;
        case 0x52642cu: goto label_52642c;
        case 0x526430u: goto label_526430;
        case 0x526434u: goto label_526434;
        case 0x526438u: goto label_526438;
        case 0x52643cu: goto label_52643c;
        case 0x526440u: goto label_526440;
        case 0x526444u: goto label_526444;
        case 0x526448u: goto label_526448;
        case 0x52644cu: goto label_52644c;
        case 0x526450u: goto label_526450;
        case 0x526454u: goto label_526454;
        case 0x526458u: goto label_526458;
        case 0x52645cu: goto label_52645c;
        case 0x526460u: goto label_526460;
        case 0x526464u: goto label_526464;
        case 0x526468u: goto label_526468;
        case 0x52646cu: goto label_52646c;
        case 0x526470u: goto label_526470;
        case 0x526474u: goto label_526474;
        case 0x526478u: goto label_526478;
        case 0x52647cu: goto label_52647c;
        case 0x526480u: goto label_526480;
        case 0x526484u: goto label_526484;
        case 0x526488u: goto label_526488;
        case 0x52648cu: goto label_52648c;
        case 0x526490u: goto label_526490;
        case 0x526494u: goto label_526494;
        case 0x526498u: goto label_526498;
        case 0x52649cu: goto label_52649c;
        case 0x5264a0u: goto label_5264a0;
        case 0x5264a4u: goto label_5264a4;
        case 0x5264a8u: goto label_5264a8;
        case 0x5264acu: goto label_5264ac;
        case 0x5264b0u: goto label_5264b0;
        case 0x5264b4u: goto label_5264b4;
        case 0x5264b8u: goto label_5264b8;
        case 0x5264bcu: goto label_5264bc;
        case 0x5264c0u: goto label_5264c0;
        case 0x5264c4u: goto label_5264c4;
        case 0x5264c8u: goto label_5264c8;
        case 0x5264ccu: goto label_5264cc;
        case 0x5264d0u: goto label_5264d0;
        case 0x5264d4u: goto label_5264d4;
        case 0x5264d8u: goto label_5264d8;
        case 0x5264dcu: goto label_5264dc;
        case 0x5264e0u: goto label_5264e0;
        case 0x5264e4u: goto label_5264e4;
        case 0x5264e8u: goto label_5264e8;
        case 0x5264ecu: goto label_5264ec;
        case 0x5264f0u: goto label_5264f0;
        case 0x5264f4u: goto label_5264f4;
        case 0x5264f8u: goto label_5264f8;
        case 0x5264fcu: goto label_5264fc;
        case 0x526500u: goto label_526500;
        case 0x526504u: goto label_526504;
        case 0x526508u: goto label_526508;
        case 0x52650cu: goto label_52650c;
        case 0x526510u: goto label_526510;
        case 0x526514u: goto label_526514;
        case 0x526518u: goto label_526518;
        case 0x52651cu: goto label_52651c;
        case 0x526520u: goto label_526520;
        case 0x526524u: goto label_526524;
        case 0x526528u: goto label_526528;
        case 0x52652cu: goto label_52652c;
        case 0x526530u: goto label_526530;
        case 0x526534u: goto label_526534;
        case 0x526538u: goto label_526538;
        case 0x52653cu: goto label_52653c;
        case 0x526540u: goto label_526540;
        case 0x526544u: goto label_526544;
        case 0x526548u: goto label_526548;
        case 0x52654cu: goto label_52654c;
        case 0x526550u: goto label_526550;
        case 0x526554u: goto label_526554;
        case 0x526558u: goto label_526558;
        case 0x52655cu: goto label_52655c;
        case 0x526560u: goto label_526560;
        case 0x526564u: goto label_526564;
        case 0x526568u: goto label_526568;
        case 0x52656cu: goto label_52656c;
        case 0x526570u: goto label_526570;
        case 0x526574u: goto label_526574;
        case 0x526578u: goto label_526578;
        case 0x52657cu: goto label_52657c;
        case 0x526580u: goto label_526580;
        case 0x526584u: goto label_526584;
        case 0x526588u: goto label_526588;
        case 0x52658cu: goto label_52658c;
        case 0x526590u: goto label_526590;
        case 0x526594u: goto label_526594;
        case 0x526598u: goto label_526598;
        case 0x52659cu: goto label_52659c;
        case 0x5265a0u: goto label_5265a0;
        case 0x5265a4u: goto label_5265a4;
        case 0x5265a8u: goto label_5265a8;
        case 0x5265acu: goto label_5265ac;
        case 0x5265b0u: goto label_5265b0;
        case 0x5265b4u: goto label_5265b4;
        case 0x5265b8u: goto label_5265b8;
        case 0x5265bcu: goto label_5265bc;
        case 0x5265c0u: goto label_5265c0;
        case 0x5265c4u: goto label_5265c4;
        case 0x5265c8u: goto label_5265c8;
        case 0x5265ccu: goto label_5265cc;
        case 0x5265d0u: goto label_5265d0;
        case 0x5265d4u: goto label_5265d4;
        case 0x5265d8u: goto label_5265d8;
        case 0x5265dcu: goto label_5265dc;
        case 0x5265e0u: goto label_5265e0;
        case 0x5265e4u: goto label_5265e4;
        case 0x5265e8u: goto label_5265e8;
        case 0x5265ecu: goto label_5265ec;
        case 0x5265f0u: goto label_5265f0;
        case 0x5265f4u: goto label_5265f4;
        case 0x5265f8u: goto label_5265f8;
        case 0x5265fcu: goto label_5265fc;
        case 0x526600u: goto label_526600;
        case 0x526604u: goto label_526604;
        case 0x526608u: goto label_526608;
        case 0x52660cu: goto label_52660c;
        case 0x526610u: goto label_526610;
        case 0x526614u: goto label_526614;
        case 0x526618u: goto label_526618;
        case 0x52661cu: goto label_52661c;
        case 0x526620u: goto label_526620;
        case 0x526624u: goto label_526624;
        case 0x526628u: goto label_526628;
        case 0x52662cu: goto label_52662c;
        case 0x526630u: goto label_526630;
        case 0x526634u: goto label_526634;
        case 0x526638u: goto label_526638;
        case 0x52663cu: goto label_52663c;
        case 0x526640u: goto label_526640;
        case 0x526644u: goto label_526644;
        case 0x526648u: goto label_526648;
        case 0x52664cu: goto label_52664c;
        case 0x526650u: goto label_526650;
        case 0x526654u: goto label_526654;
        case 0x526658u: goto label_526658;
        case 0x52665cu: goto label_52665c;
        default: break;
    }

    ctx->pc = 0x5258c0u;

label_5258c0:
    // 0x5258c0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x5258c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_5258c4:
    // 0x5258c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x5258c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_5258c8:
    // 0x5258c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5258c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5258cc:
    // 0x5258cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x5258ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_5258d0:
    // 0x5258d0: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x5258d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_5258d4:
    // 0x5258d4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_5258d8:
    if (ctx->pc == 0x5258D8u) {
        ctx->pc = 0x5258D8u;
            // 0x5258d8: 0x8c850070  lw          $a1, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x5258DCu;
        goto label_5258dc;
    }
    ctx->pc = 0x5258D4u;
    {
        const bool branch_taken_0x5258d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5258d4) {
            ctx->pc = 0x5258D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5258D4u;
            // 0x5258d8: 0x8c850070  lw          $a1, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5258E4u;
            goto label_5258e4;
        }
    }
    ctx->pc = 0x5258DCu;
label_5258dc:
    // 0x5258dc: 0x1000000f  b           . + 4 + (0xF << 2)
label_5258e0:
    if (ctx->pc == 0x5258E0u) {
        ctx->pc = 0x5258E0u;
            // 0x5258e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5258E4u;
        goto label_5258e4;
    }
    ctx->pc = 0x5258DCu;
    {
        const bool branch_taken_0x5258dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5258E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5258DCu;
            // 0x5258e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5258dc) {
            ctx->pc = 0x52591Cu;
            goto label_52591c;
        }
    }
    ctx->pc = 0x5258E4u;
label_5258e4:
    // 0x5258e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5258e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5258e8:
    // 0x5258e8: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x5258e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_5258ec:
    // 0x5258ec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x5258ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_5258f0:
    // 0x5258f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x5258f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5258f4:
    // 0x5258f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5258f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5258f8:
    // 0x5258f8: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x5258f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_5258fc:
    // 0x5258fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_525900:
    if (ctx->pc == 0x525900u) {
        ctx->pc = 0x525900u;
            // 0x525900: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x525904u;
        goto label_525904;
    }
    ctx->pc = 0x5258FCu;
    {
        const bool branch_taken_0x5258fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5258fc) {
            ctx->pc = 0x525900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5258FCu;
            // 0x525900: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52590Cu;
            goto label_52590c;
        }
    }
    ctx->pc = 0x525904u;
label_525904:
    // 0x525904: 0x10000005  b           . + 4 + (0x5 << 2)
label_525908:
    if (ctx->pc == 0x525908u) {
        ctx->pc = 0x525908u;
            // 0x525908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52590Cu;
        goto label_52590c;
    }
    ctx->pc = 0x525904u;
    {
        const bool branch_taken_0x525904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x525908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525904u;
            // 0x525908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525904) {
            ctx->pc = 0x52591Cu;
            goto label_52591c;
        }
    }
    ctx->pc = 0x52590Cu;
label_52590c:
    // 0x52590c: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x52590cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_525910:
    // 0x525910: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_525914:
    if (ctx->pc == 0x525914u) {
        ctx->pc = 0x525914u;
            // 0x525914: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x525918u;
        goto label_525918;
    }
    ctx->pc = 0x525910u;
    {
        const bool branch_taken_0x525910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x525910) {
            ctx->pc = 0x525914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525910u;
            // 0x525914: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5258F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5258f0;
        }
    }
    ctx->pc = 0x525918u;
label_525918:
    // 0x525918: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x525918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52591c:
    // 0x52591c: 0x3e00008  jr          $ra
label_525920:
    if (ctx->pc == 0x525920u) {
        ctx->pc = 0x525924u;
        goto label_525924;
    }
    ctx->pc = 0x52591Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x525924u;
label_525924:
    // 0x525924: 0x0  nop
    ctx->pc = 0x525924u;
    // NOP
label_525928:
    // 0x525928: 0x0  nop
    ctx->pc = 0x525928u;
    // NOP
label_52592c:
    // 0x52592c: 0x0  nop
    ctx->pc = 0x52592cu;
    // NOP
label_525930:
    // 0x525930: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x525930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_525934:
    // 0x525934: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x525934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_525938:
    // 0x525938: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x525938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_52593c:
    // 0x52593c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x52593cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_525940:
    // 0x525940: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x525940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_525944:
    // 0x525944: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x525944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_525948:
    // 0x525948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x525948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52594c:
    // 0x52594c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_525950:
    // 0x525950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x525950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_525954:
    // 0x525954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x525954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_525958:
    // 0x525958: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x525958u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_52595c:
    // 0x52595c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_525960:
    if (ctx->pc == 0x525960u) {
        ctx->pc = 0x525960u;
            // 0x525960: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525964u;
        goto label_525964;
    }
    ctx->pc = 0x52595Cu;
    {
        const bool branch_taken_0x52595c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x525960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52595Cu;
            // 0x525960: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52595c) {
            ctx->pc = 0x5259ACu;
            goto label_5259ac;
        }
    }
    ctx->pc = 0x525964u;
label_525964:
    // 0x525964: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x525964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_525968:
    // 0x525968: 0x50a30042  beql        $a1, $v1, . + 4 + (0x42 << 2)
label_52596c:
    if (ctx->pc == 0x52596Cu) {
        ctx->pc = 0x52596Cu;
            // 0x52596c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x525970u;
        goto label_525970;
    }
    ctx->pc = 0x525968u;
    {
        const bool branch_taken_0x525968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x525968) {
            ctx->pc = 0x52596Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525968u;
            // 0x52596c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525A74u;
            goto label_525a74;
        }
    }
    ctx->pc = 0x525970u;
label_525970:
    // 0x525970: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x525970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_525974:
    // 0x525974: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_525978:
    if (ctx->pc == 0x525978u) {
        ctx->pc = 0x52597Cu;
        goto label_52597c;
    }
    ctx->pc = 0x525974u;
    {
        const bool branch_taken_0x525974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x525974) {
            ctx->pc = 0x525984u;
            goto label_525984;
        }
    }
    ctx->pc = 0x52597Cu;
label_52597c:
    // 0x52597c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_525980:
    if (ctx->pc == 0x525980u) {
        ctx->pc = 0x525984u;
        goto label_525984;
    }
    ctx->pc = 0x52597Cu;
    {
        const bool branch_taken_0x52597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52597c) {
            ctx->pc = 0x525A70u;
            goto label_525a70;
        }
    }
    ctx->pc = 0x525984u;
label_525984:
    // 0x525984: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x525984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_525988:
    // 0x525988: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x525988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52598c:
    // 0x52598c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x52598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_525990:
    // 0x525990: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x525990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_525994:
    // 0x525994: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x525994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_525998:
    // 0x525998: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x525998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_52599c:
    // 0x52599c: 0x320f809  jalr        $t9
label_5259a0:
    if (ctx->pc == 0x5259A0u) {
        ctx->pc = 0x5259A0u;
            // 0x5259a0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x5259A4u;
        goto label_5259a4;
    }
    ctx->pc = 0x52599Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5259A4u);
        ctx->pc = 0x5259A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52599Cu;
            // 0x5259a0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5259A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5259A4u; }
            if (ctx->pc != 0x5259A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5259A4u;
label_5259a4:
    // 0x5259a4: 0x10000032  b           . + 4 + (0x32 << 2)
label_5259a8:
    if (ctx->pc == 0x5259A8u) {
        ctx->pc = 0x5259ACu;
        goto label_5259ac;
    }
    ctx->pc = 0x5259A4u;
    {
        const bool branch_taken_0x5259a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5259a4) {
            ctx->pc = 0x525A70u;
            goto label_525a70;
        }
    }
    ctx->pc = 0x5259ACu;
label_5259ac:
    // 0x5259ac: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x5259acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_5259b0:
    // 0x5259b0: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_5259b4:
    if (ctx->pc == 0x5259B4u) {
        ctx->pc = 0x5259B8u;
        goto label_5259b8;
    }
    ctx->pc = 0x5259B0u;
    {
        const bool branch_taken_0x5259b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5259b0) {
            ctx->pc = 0x525A70u;
            goto label_525a70;
        }
    }
    ctx->pc = 0x5259B8u;
label_5259b8:
    // 0x5259b8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5259b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5259bc:
    // 0x5259bc: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x5259bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_5259c0:
    // 0x5259c0: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x5259c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_5259c4:
    // 0x5259c4: 0x8eb40084  lw          $s4, 0x84($s5)
    ctx->pc = 0x5259c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_5259c8:
    // 0x5259c8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5259c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5259cc:
    // 0x5259cc: 0x8c730130  lw          $s3, 0x130($v1)
    ctx->pc = 0x5259ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_5259d0:
    // 0x5259d0: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x5259d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_5259d4:
    // 0x5259d4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x5259d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_5259d8:
    // 0x5259d8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x5259d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_5259dc:
    // 0x5259dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5259dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5259e0:
    // 0x5259e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5259e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5259e4:
    // 0x5259e4: 0xc04e738  jal         func_139CE0
label_5259e8:
    if (ctx->pc == 0x5259E8u) {
        ctx->pc = 0x5259E8u;
            // 0x5259e8: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x5259ECu;
        goto label_5259ec;
    }
    ctx->pc = 0x5259E4u;
    SET_GPR_U32(ctx, 31, 0x5259ECu);
    ctx->pc = 0x5259E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5259E4u;
            // 0x5259e8: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5259ECu; }
        if (ctx->pc != 0x5259ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5259ECu; }
        if (ctx->pc != 0x5259ECu) { return; }
    }
    ctx->pc = 0x5259ECu;
label_5259ec:
    // 0x5259ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5259ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5259f0:
    // 0x5259f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5259f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5259f4:
    // 0x5259f4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x5259f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_5259f8:
    // 0x5259f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5259f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5259fc:
    // 0x5259fc: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x5259fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_525a00:
    // 0x525a00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x525a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_525a04:
    // 0x525a04: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x525a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_525a08:
    // 0x525a08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x525a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_525a0c:
    // 0x525a0c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x525a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_525a10:
    // 0x525a10: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x525a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_525a14:
    // 0x525a14: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x525a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_525a18:
    // 0x525a18: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x525a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_525a1c:
    // 0x525a1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x525a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_525a20:
    // 0x525a20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x525a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_525a24:
    // 0x525a24: 0xc14941c  jal         func_525070
label_525a28:
    if (ctx->pc == 0x525A28u) {
        ctx->pc = 0x525A28u;
            // 0x525a28: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525A2Cu;
        goto label_525a2c;
    }
    ctx->pc = 0x525A24u;
    SET_GPR_U32(ctx, 31, 0x525A2Cu);
    ctx->pc = 0x525A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525A24u;
            // 0x525a28: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x525070u;
    if (runtime->hasFunction(0x525070u)) {
        auto targetFn = runtime->lookupFunction(0x525070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525A2Cu; }
        if (ctx->pc != 0x525A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00525070_0x525070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525A2Cu; }
        if (ctx->pc != 0x525A2Cu) { return; }
    }
    ctx->pc = 0x525A2Cu;
label_525a2c:
    // 0x525a2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x525a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_525a30:
    // 0x525a30: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x525a30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_525a34:
    // 0x525a34: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_525a38:
    if (ctx->pc == 0x525A38u) {
        ctx->pc = 0x525A38u;
            // 0x525a38: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x525A3Cu;
        goto label_525a3c;
    }
    ctx->pc = 0x525A34u;
    {
        const bool branch_taken_0x525a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x525A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525A34u;
            // 0x525a38: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525a34) {
            ctx->pc = 0x525A04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_525a04;
        }
    }
    ctx->pc = 0x525A3Cu;
label_525a3c:
    // 0x525a3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x525a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_525a40:
    // 0x525a40: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x525a40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_525a44:
    // 0x525a44: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_525a48:
    if (ctx->pc == 0x525A48u) {
        ctx->pc = 0x525A4Cu;
        goto label_525a4c;
    }
    ctx->pc = 0x525A44u;
    {
        const bool branch_taken_0x525a44 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x525a44) {
            ctx->pc = 0x525A70u;
            goto label_525a70;
        }
    }
    ctx->pc = 0x525A4Cu;
label_525a4c:
    // 0x525a4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x525a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_525a50:
    // 0x525a50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x525a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_525a54:
    // 0x525a54: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x525a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_525a58:
    // 0x525a58: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x525a58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_525a5c:
    // 0x525a5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x525a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_525a60:
    // 0x525a60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x525a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_525a64:
    // 0x525a64: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x525a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_525a68:
    // 0x525a68: 0xc055d28  jal         func_1574A0
label_525a6c:
    if (ctx->pc == 0x525A6Cu) {
        ctx->pc = 0x525A6Cu;
            // 0x525a6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525A70u;
        goto label_525a70;
    }
    ctx->pc = 0x525A68u;
    SET_GPR_U32(ctx, 31, 0x525A70u);
    ctx->pc = 0x525A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525A68u;
            // 0x525a6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525A70u; }
        if (ctx->pc != 0x525A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525A70u; }
        if (ctx->pc != 0x525A70u) { return; }
    }
    ctx->pc = 0x525A70u;
label_525a70:
    // 0x525a70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x525a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_525a74:
    // 0x525a74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x525a74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_525a78:
    // 0x525a78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x525a78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_525a7c:
    // 0x525a7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x525a7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_525a80:
    // 0x525a80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x525a80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_525a84:
    // 0x525a84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x525a84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_525a88:
    // 0x525a88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x525a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_525a8c:
    // 0x525a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x525a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_525a90:
    // 0x525a90: 0x3e00008  jr          $ra
label_525a94:
    if (ctx->pc == 0x525A94u) {
        ctx->pc = 0x525A94u;
            // 0x525a94: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x525A98u;
        goto label_525a98;
    }
    ctx->pc = 0x525A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x525A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525A90u;
            // 0x525a94: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x525A98u;
label_525a98:
    // 0x525a98: 0x0  nop
    ctx->pc = 0x525a98u;
    // NOP
label_525a9c:
    // 0x525a9c: 0x0  nop
    ctx->pc = 0x525a9cu;
    // NOP
label_525aa0:
    // 0x525aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x525aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_525aa4:
    // 0x525aa4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x525aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_525aa8:
    // 0x525aa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x525aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_525aac:
    // 0x525aac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x525aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_525ab0:
    // 0x525ab0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x525ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_525ab4:
    // 0x525ab4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x525ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_525ab8:
    // 0x525ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x525ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_525abc:
    // 0x525abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x525abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_525ac0:
    // 0x525ac0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x525ac0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_525ac4:
    // 0x525ac4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_525ac8:
    if (ctx->pc == 0x525AC8u) {
        ctx->pc = 0x525AC8u;
            // 0x525ac8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525ACCu;
        goto label_525acc;
    }
    ctx->pc = 0x525AC4u;
    {
        const bool branch_taken_0x525ac4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x525AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525AC4u;
            // 0x525ac8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525ac4) {
            ctx->pc = 0x525AF8u;
            goto label_525af8;
        }
    }
    ctx->pc = 0x525ACCu;
label_525acc:
    // 0x525acc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x525accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_525ad0:
    // 0x525ad0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_525ad4:
    if (ctx->pc == 0x525AD4u) {
        ctx->pc = 0x525AD4u;
            // 0x525ad4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x525AD8u;
        goto label_525ad8;
    }
    ctx->pc = 0x525AD0u;
    {
        const bool branch_taken_0x525ad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x525ad0) {
            ctx->pc = 0x525AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525AD0u;
            // 0x525ad4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525AECu;
            goto label_525aec;
        }
    }
    ctx->pc = 0x525AD8u;
label_525ad8:
    // 0x525ad8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x525ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_525adc:
    // 0x525adc: 0x10a30046  beq         $a1, $v1, . + 4 + (0x46 << 2)
label_525ae0:
    if (ctx->pc == 0x525AE0u) {
        ctx->pc = 0x525AE4u;
        goto label_525ae4;
    }
    ctx->pc = 0x525ADCu;
    {
        const bool branch_taken_0x525adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x525adc) {
            ctx->pc = 0x525BF8u;
            goto label_525bf8;
        }
    }
    ctx->pc = 0x525AE4u;
label_525ae4:
    // 0x525ae4: 0x10000044  b           . + 4 + (0x44 << 2)
label_525ae8:
    if (ctx->pc == 0x525AE8u) {
        ctx->pc = 0x525AECu;
        goto label_525aec;
    }
    ctx->pc = 0x525AE4u;
    {
        const bool branch_taken_0x525ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x525ae4) {
            ctx->pc = 0x525BF8u;
            goto label_525bf8;
        }
    }
    ctx->pc = 0x525AECu;
label_525aec:
    // 0x525aec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x525aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_525af0:
    // 0x525af0: 0x320f809  jalr        $t9
label_525af4:
    if (ctx->pc == 0x525AF4u) {
        ctx->pc = 0x525AF8u;
        goto label_525af8;
    }
    ctx->pc = 0x525AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x525AF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x525AF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x525AF8u; }
            if (ctx->pc != 0x525AF8u) { return; }
        }
        }
    }
    ctx->pc = 0x525AF8u;
label_525af8:
    // 0x525af8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x525af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_525afc:
    // 0x525afc: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x525afcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_525b00:
    // 0x525b00: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x525b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_525b04:
    // 0x525b04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x525b04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_525b08:
    // 0x525b08: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x525b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_525b0c:
    // 0x525b0c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x525b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_525b10:
    // 0x525b10: 0x8c70077c  lw          $s0, 0x77C($v1)
    ctx->pc = 0x525b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_525b14:
    // 0x525b14: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x525b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_525b18:
    // 0x525b18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x525b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_525b1c:
    // 0x525b1c: 0x8c830a68  lw          $v1, 0xA68($a0)
    ctx->pc = 0x525b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2664)));
label_525b20:
    // 0x525b20: 0x14650023  bne         $v1, $a1, . + 4 + (0x23 << 2)
label_525b24:
    if (ctx->pc == 0x525B24u) {
        ctx->pc = 0x525B28u;
        goto label_525b28;
    }
    ctx->pc = 0x525B20u;
    {
        const bool branch_taken_0x525b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x525b20) {
            ctx->pc = 0x525BB0u;
            goto label_525bb0;
        }
    }
    ctx->pc = 0x525B28u;
label_525b28:
    // 0x525b28: 0x8c840a74  lw          $a0, 0xA74($a0)
    ctx->pc = 0x525b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2676)));
label_525b2c:
    // 0x525b2c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x525b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_525b30:
    // 0x525b30: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_525b34:
    if (ctx->pc == 0x525B34u) {
        ctx->pc = 0x525B38u;
        goto label_525b38;
    }
    ctx->pc = 0x525B30u;
    {
        const bool branch_taken_0x525b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x525b30) {
            ctx->pc = 0x525BB0u;
            goto label_525bb0;
        }
    }
    ctx->pc = 0x525B38u;
label_525b38:
    // 0x525b38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x525b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_525b3c:
    // 0x525b3c: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_525b40:
    if (ctx->pc == 0x525B40u) {
        ctx->pc = 0x525B44u;
        goto label_525b44;
    }
    ctx->pc = 0x525B3Cu;
    {
        const bool branch_taken_0x525b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x525b3c) {
            ctx->pc = 0x525B90u;
            goto label_525b90;
        }
    }
    ctx->pc = 0x525B44u;
label_525b44:
    // 0x525b44: 0x1085001a  beq         $a0, $a1, . + 4 + (0x1A << 2)
label_525b48:
    if (ctx->pc == 0x525B48u) {
        ctx->pc = 0x525B4Cu;
        goto label_525b4c;
    }
    ctx->pc = 0x525B44u;
    {
        const bool branch_taken_0x525b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x525b44) {
            ctx->pc = 0x525BB0u;
            goto label_525bb0;
        }
    }
    ctx->pc = 0x525B4Cu;
label_525b4c:
    // 0x525b4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x525b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_525b50:
    // 0x525b50: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
label_525b54:
    if (ctx->pc == 0x525B54u) {
        ctx->pc = 0x525B58u;
        goto label_525b58;
    }
    ctx->pc = 0x525B50u;
    {
        const bool branch_taken_0x525b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x525b50) {
            ctx->pc = 0x525B68u;
            goto label_525b68;
        }
    }
    ctx->pc = 0x525B58u;
label_525b58:
    // 0x525b58: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_525b5c:
    if (ctx->pc == 0x525B5Cu) {
        ctx->pc = 0x525B60u;
        goto label_525b60;
    }
    ctx->pc = 0x525B58u;
    {
        const bool branch_taken_0x525b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x525b58) {
            ctx->pc = 0x525BB0u;
            goto label_525bb0;
        }
    }
    ctx->pc = 0x525B60u;
label_525b60:
    // 0x525b60: 0x10000013  b           . + 4 + (0x13 << 2)
label_525b64:
    if (ctx->pc == 0x525B64u) {
        ctx->pc = 0x525B68u;
        goto label_525b68;
    }
    ctx->pc = 0x525B60u;
    {
        const bool branch_taken_0x525b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x525b60) {
            ctx->pc = 0x525BB0u;
            goto label_525bb0;
        }
    }
    ctx->pc = 0x525B68u;
label_525b68:
    // 0x525b68: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x525b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_525b6c:
    // 0x525b6c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_525b70:
    if (ctx->pc == 0x525B70u) {
        ctx->pc = 0x525B74u;
        goto label_525b74;
    }
    ctx->pc = 0x525B6Cu;
    {
        const bool branch_taken_0x525b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x525b6c) {
            ctx->pc = 0x525BB0u;
            goto label_525bb0;
        }
    }
    ctx->pc = 0x525B74u;
label_525b74:
    // 0x525b74: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x525b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_525b78:
    // 0x525b78: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
label_525b7c:
    if (ctx->pc == 0x525B7Cu) {
        ctx->pc = 0x525B80u;
        goto label_525b80;
    }
    ctx->pc = 0x525B78u;
    {
        const bool branch_taken_0x525b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x525b78) {
            ctx->pc = 0x525BB0u;
            goto label_525bb0;
        }
    }
    ctx->pc = 0x525B80u;
label_525b80:
    // 0x525b80: 0xc149414  jal         func_525050
label_525b84:
    if (ctx->pc == 0x525B84u) {
        ctx->pc = 0x525B88u;
        goto label_525b88;
    }
    ctx->pc = 0x525B80u;
    SET_GPR_U32(ctx, 31, 0x525B88u);
    ctx->pc = 0x525050u;
    if (runtime->hasFunction(0x525050u)) {
        auto targetFn = runtime->lookupFunction(0x525050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525B88u; }
        if (ctx->pc != 0x525B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00525050_0x525050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525B88u; }
        if (ctx->pc != 0x525B88u) { return; }
    }
    ctx->pc = 0x525B88u;
label_525b88:
    // 0x525b88: 0x10000009  b           . + 4 + (0x9 << 2)
label_525b8c:
    if (ctx->pc == 0x525B8Cu) {
        ctx->pc = 0x525B90u;
        goto label_525b90;
    }
    ctx->pc = 0x525B88u;
    {
        const bool branch_taken_0x525b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x525b88) {
            ctx->pc = 0x525BB0u;
            goto label_525bb0;
        }
    }
    ctx->pc = 0x525B90u;
label_525b90:
    // 0x525b90: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x525b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_525b94:
    // 0x525b94: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_525b98:
    if (ctx->pc == 0x525B98u) {
        ctx->pc = 0x525B9Cu;
        goto label_525b9c;
    }
    ctx->pc = 0x525B94u;
    {
        const bool branch_taken_0x525b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x525b94) {
            ctx->pc = 0x525BB0u;
            goto label_525bb0;
        }
    }
    ctx->pc = 0x525B9Cu;
label_525b9c:
    // 0x525b9c: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x525b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_525ba0:
    // 0x525ba0: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
label_525ba4:
    if (ctx->pc == 0x525BA4u) {
        ctx->pc = 0x525BA8u;
        goto label_525ba8;
    }
    ctx->pc = 0x525BA0u;
    {
        const bool branch_taken_0x525ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x525ba0) {
            ctx->pc = 0x525BB0u;
            goto label_525bb0;
        }
    }
    ctx->pc = 0x525BA8u;
label_525ba8:
    // 0x525ba8: 0xc14936c  jal         func_524DB0
label_525bac:
    if (ctx->pc == 0x525BACu) {
        ctx->pc = 0x525BB0u;
        goto label_525bb0;
    }
    ctx->pc = 0x525BA8u;
    SET_GPR_U32(ctx, 31, 0x525BB0u);
    ctx->pc = 0x524DB0u;
    if (runtime->hasFunction(0x524DB0u)) {
        auto targetFn = runtime->lookupFunction(0x524DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525BB0u; }
        if (ctx->pc != 0x525BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00524DB0_0x524db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525BB0u; }
        if (ctx->pc != 0x525BB0u) { return; }
    }
    ctx->pc = 0x525BB0u;
label_525bb0:
    // 0x525bb0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x525bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_525bb4:
    // 0x525bb4: 0x270182a  slt         $v1, $s3, $s0
    ctx->pc = 0x525bb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_525bb8:
    // 0x525bb8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x525bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_525bbc:
    // 0x525bbc: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
label_525bc0:
    if (ctx->pc == 0x525BC0u) {
        ctx->pc = 0x525BC0u;
            // 0x525bc0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x525BC4u;
        goto label_525bc4;
    }
    ctx->pc = 0x525BBCu;
    {
        const bool branch_taken_0x525bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x525BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525BBCu;
            // 0x525bc0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525bbc) {
            ctx->pc = 0x525B14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_525b14;
        }
    }
    ctx->pc = 0x525BC4u;
label_525bc4:
    // 0x525bc4: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x525bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_525bc8:
    // 0x525bc8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_525bcc:
    if (ctx->pc == 0x525BCCu) {
        ctx->pc = 0x525BD0u;
        goto label_525bd0;
    }
    ctx->pc = 0x525BC8u;
    {
        const bool branch_taken_0x525bc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x525bc8) {
            ctx->pc = 0x525BF8u;
            goto label_525bf8;
        }
    }
    ctx->pc = 0x525BD0u;
label_525bd0:
    // 0x525bd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x525bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_525bd4:
    // 0x525bd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x525bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_525bd8:
    // 0x525bd8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x525bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_525bdc:
    // 0x525bdc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x525bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_525be0:
    // 0x525be0: 0xc0e3658  jal         func_38D960
label_525be4:
    if (ctx->pc == 0x525BE4u) {
        ctx->pc = 0x525BE4u;
            // 0x525be4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x525BE8u;
        goto label_525be8;
    }
    ctx->pc = 0x525BE0u;
    SET_GPR_U32(ctx, 31, 0x525BE8u);
    ctx->pc = 0x525BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525BE0u;
            // 0x525be4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525BE8u; }
        if (ctx->pc != 0x525BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525BE8u; }
        if (ctx->pc != 0x525BE8u) { return; }
    }
    ctx->pc = 0x525BE8u;
label_525be8:
    // 0x525be8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x525be8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_525bec:
    // 0x525bec: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x525becu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_525bf0:
    // 0x525bf0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_525bf4:
    if (ctx->pc == 0x525BF4u) {
        ctx->pc = 0x525BF4u;
            // 0x525bf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x525BF8u;
        goto label_525bf8;
    }
    ctx->pc = 0x525BF0u;
    {
        const bool branch_taken_0x525bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x525BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525BF0u;
            // 0x525bf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525bf0) {
            ctx->pc = 0x525BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_525bd8;
        }
    }
    ctx->pc = 0x525BF8u;
label_525bf8:
    // 0x525bf8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x525bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_525bfc:
    // 0x525bfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x525bfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_525c00:
    // 0x525c00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x525c00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_525c04:
    // 0x525c04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x525c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_525c08:
    // 0x525c08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x525c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_525c0c:
    // 0x525c0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x525c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_525c10:
    // 0x525c10: 0x3e00008  jr          $ra
label_525c14:
    if (ctx->pc == 0x525C14u) {
        ctx->pc = 0x525C14u;
            // 0x525c14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x525C18u;
        goto label_525c18;
    }
    ctx->pc = 0x525C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x525C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525C10u;
            // 0x525c14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x525C18u;
label_525c18:
    // 0x525c18: 0x0  nop
    ctx->pc = 0x525c18u;
    // NOP
label_525c1c:
    // 0x525c1c: 0x0  nop
    ctx->pc = 0x525c1cu;
    // NOP
label_525c20:
    // 0x525c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x525c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_525c24:
    // 0x525c24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x525c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_525c28:
    // 0x525c28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x525c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_525c2c:
    // 0x525c2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x525c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_525c30:
    // 0x525c30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x525c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_525c34:
    // 0x525c34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x525c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_525c38:
    // 0x525c38: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x525c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_525c3c:
    // 0x525c3c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_525c40:
    if (ctx->pc == 0x525C40u) {
        ctx->pc = 0x525C40u;
            // 0x525c40: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525C44u;
        goto label_525c44;
    }
    ctx->pc = 0x525C3Cu;
    {
        const bool branch_taken_0x525c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x525C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525C3Cu;
            // 0x525c40: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525c3c) {
            ctx->pc = 0x525C78u;
            goto label_525c78;
        }
    }
    ctx->pc = 0x525C44u;
label_525c44:
    // 0x525c44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x525c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_525c48:
    // 0x525c48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x525c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_525c4c:
    // 0x525c4c: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x525c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_525c50:
    // 0x525c50: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x525c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_525c54:
    // 0x525c54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x525c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_525c58:
    // 0x525c58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x525c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_525c5c:
    // 0x525c5c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x525c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_525c60:
    // 0x525c60: 0x320f809  jalr        $t9
label_525c64:
    if (ctx->pc == 0x525C64u) {
        ctx->pc = 0x525C68u;
        goto label_525c68;
    }
    ctx->pc = 0x525C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x525C68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x525C68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x525C68u; }
            if (ctx->pc != 0x525C68u) { return; }
        }
        }
    }
    ctx->pc = 0x525C68u;
label_525c68:
    // 0x525c68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x525c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_525c6c:
    // 0x525c6c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x525c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_525c70:
    // 0x525c70: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_525c74:
    if (ctx->pc == 0x525C74u) {
        ctx->pc = 0x525C74u;
            // 0x525c74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x525C78u;
        goto label_525c78;
    }
    ctx->pc = 0x525C70u;
    {
        const bool branch_taken_0x525c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x525C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525C70u;
            // 0x525c74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525c70) {
            ctx->pc = 0x525C4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_525c4c;
        }
    }
    ctx->pc = 0x525C78u;
label_525c78:
    // 0x525c78: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x525c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_525c7c:
    // 0x525c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x525c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_525c80:
    // 0x525c80: 0xc04a576  jal         func_1295D8
label_525c84:
    if (ctx->pc == 0x525C84u) {
        ctx->pc = 0x525C84u;
            // 0x525c84: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x525C88u;
        goto label_525c88;
    }
    ctx->pc = 0x525C80u;
    SET_GPR_U32(ctx, 31, 0x525C88u);
    ctx->pc = 0x525C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525C80u;
            // 0x525c84: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525C88u; }
        if (ctx->pc != 0x525C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525C88u; }
        if (ctx->pc != 0x525C88u) { return; }
    }
    ctx->pc = 0x525C88u;
label_525c88:
    // 0x525c88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x525c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_525c8c:
    // 0x525c8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x525c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_525c90:
    // 0x525c90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x525c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_525c94:
    // 0x525c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x525c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_525c98:
    // 0x525c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x525c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_525c9c:
    // 0x525c9c: 0x3e00008  jr          $ra
label_525ca0:
    if (ctx->pc == 0x525CA0u) {
        ctx->pc = 0x525CA0u;
            // 0x525ca0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x525CA4u;
        goto label_525ca4;
    }
    ctx->pc = 0x525C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x525CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525C9Cu;
            // 0x525ca0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x525CA4u;
label_525ca4:
    // 0x525ca4: 0x0  nop
    ctx->pc = 0x525ca4u;
    // NOP
label_525ca8:
    // 0x525ca8: 0x0  nop
    ctx->pc = 0x525ca8u;
    // NOP
label_525cac:
    // 0x525cac: 0x0  nop
    ctx->pc = 0x525cacu;
    // NOP
label_525cb0:
    // 0x525cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x525cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_525cb4:
    // 0x525cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x525cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_525cb8:
    // 0x525cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x525cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_525cbc:
    // 0x525cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x525cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_525cc0:
    // 0x525cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x525cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_525cc4:
    // 0x525cc4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_525cc8:
    if (ctx->pc == 0x525CC8u) {
        ctx->pc = 0x525CC8u;
            // 0x525cc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525CCCu;
        goto label_525ccc;
    }
    ctx->pc = 0x525CC4u;
    {
        const bool branch_taken_0x525cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x525CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525CC4u;
            // 0x525cc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525cc4) {
            ctx->pc = 0x525D64u;
            goto label_525d64;
        }
    }
    ctx->pc = 0x525CCCu;
label_525ccc:
    // 0x525ccc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x525cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_525cd0:
    // 0x525cd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x525cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_525cd4:
    // 0x525cd4: 0x24636350  addiu       $v1, $v1, 0x6350
    ctx->pc = 0x525cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25424));
label_525cd8:
    // 0x525cd8: 0x24426388  addiu       $v0, $v0, 0x6388
    ctx->pc = 0x525cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25480));
label_525cdc:
    // 0x525cdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x525cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_525ce0:
    // 0x525ce0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_525ce4:
    if (ctx->pc == 0x525CE4u) {
        ctx->pc = 0x525CE4u;
            // 0x525ce4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x525CE8u;
        goto label_525ce8;
    }
    ctx->pc = 0x525CE0u;
    {
        const bool branch_taken_0x525ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x525CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525CE0u;
            // 0x525ce4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525ce0) {
            ctx->pc = 0x525D4Cu;
            goto label_525d4c;
        }
    }
    ctx->pc = 0x525CE8u;
label_525ce8:
    // 0x525ce8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x525ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_525cec:
    // 0x525cec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x525cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_525cf0:
    // 0x525cf0: 0x24631a30  addiu       $v1, $v1, 0x1A30
    ctx->pc = 0x525cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6704));
label_525cf4:
    // 0x525cf4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x525cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_525cf8:
    // 0x525cf8: 0x24421a68  addiu       $v0, $v0, 0x1A68
    ctx->pc = 0x525cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6760));
label_525cfc:
    // 0x525cfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x525cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_525d00:
    // 0x525d00: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x525d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_525d04:
    // 0x525d04: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x525d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_525d08:
    // 0x525d08: 0xc0407c0  jal         func_101F00
label_525d0c:
    if (ctx->pc == 0x525D0Cu) {
        ctx->pc = 0x525D0Cu;
            // 0x525d0c: 0x24a5f930  addiu       $a1, $a1, -0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965552));
        ctx->pc = 0x525D10u;
        goto label_525d10;
    }
    ctx->pc = 0x525D08u;
    SET_GPR_U32(ctx, 31, 0x525D10u);
    ctx->pc = 0x525D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525D08u;
            // 0x525d0c: 0x24a5f930  addiu       $a1, $a1, -0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D10u; }
        if (ctx->pc != 0x525D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D10u; }
        if (ctx->pc != 0x525D10u) { return; }
    }
    ctx->pc = 0x525D10u;
label_525d10:
    // 0x525d10: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x525d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_525d14:
    // 0x525d14: 0xc0ad618  jal         func_2B5860
label_525d18:
    if (ctx->pc == 0x525D18u) {
        ctx->pc = 0x525D18u;
            // 0x525d18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x525D1Cu;
        goto label_525d1c;
    }
    ctx->pc = 0x525D14u;
    SET_GPR_U32(ctx, 31, 0x525D1Cu);
    ctx->pc = 0x525D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525D14u;
            // 0x525d18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5860u;
    if (runtime->hasFunction(0x2B5860u)) {
        auto targetFn = runtime->lookupFunction(0x2B5860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D1Cu; }
        if (ctx->pc != 0x525D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5860_0x2b5860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D1Cu; }
        if (ctx->pc != 0x525D1Cu) { return; }
    }
    ctx->pc = 0x525D1Cu;
label_525d1c:
    // 0x525d1c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x525d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_525d20:
    // 0x525d20: 0xc0afe0c  jal         func_2BF830
label_525d24:
    if (ctx->pc == 0x525D24u) {
        ctx->pc = 0x525D24u;
            // 0x525d24: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x525D28u;
        goto label_525d28;
    }
    ctx->pc = 0x525D20u;
    SET_GPR_U32(ctx, 31, 0x525D28u);
    ctx->pc = 0x525D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525D20u;
            // 0x525d24: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF830u;
    if (runtime->hasFunction(0x2BF830u)) {
        auto targetFn = runtime->lookupFunction(0x2BF830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D28u; }
        if (ctx->pc != 0x525D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF830_0x2bf830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D28u; }
        if (ctx->pc != 0x525D28u) { return; }
    }
    ctx->pc = 0x525D28u;
label_525d28:
    // 0x525d28: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x525d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_525d2c:
    // 0x525d2c: 0xc0afe0c  jal         func_2BF830
label_525d30:
    if (ctx->pc == 0x525D30u) {
        ctx->pc = 0x525D30u;
            // 0x525d30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x525D34u;
        goto label_525d34;
    }
    ctx->pc = 0x525D2Cu;
    SET_GPR_U32(ctx, 31, 0x525D34u);
    ctx->pc = 0x525D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525D2Cu;
            // 0x525d30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF830u;
    if (runtime->hasFunction(0x2BF830u)) {
        auto targetFn = runtime->lookupFunction(0x2BF830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D34u; }
        if (ctx->pc != 0x525D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF830_0x2bf830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D34u; }
        if (ctx->pc != 0x525D34u) { return; }
    }
    ctx->pc = 0x525D34u;
label_525d34:
    // 0x525d34: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x525d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_525d38:
    // 0x525d38: 0xc0afe28  jal         func_2BF8A0
label_525d3c:
    if (ctx->pc == 0x525D3Cu) {
        ctx->pc = 0x525D3Cu;
            // 0x525d3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525D40u;
        goto label_525d40;
    }
    ctx->pc = 0x525D38u;
    SET_GPR_U32(ctx, 31, 0x525D40u);
    ctx->pc = 0x525D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525D38u;
            // 0x525d3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF8A0u;
    if (runtime->hasFunction(0x2BF8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2BF8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D40u; }
        if (ctx->pc != 0x525D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF8A0_0x2bf8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D40u; }
        if (ctx->pc != 0x525D40u) { return; }
    }
    ctx->pc = 0x525D40u;
label_525d40:
    // 0x525d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x525d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_525d44:
    // 0x525d44: 0xc0ae1c0  jal         func_2B8700
label_525d48:
    if (ctx->pc == 0x525D48u) {
        ctx->pc = 0x525D48u;
            // 0x525d48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525D4Cu;
        goto label_525d4c;
    }
    ctx->pc = 0x525D44u;
    SET_GPR_U32(ctx, 31, 0x525D4Cu);
    ctx->pc = 0x525D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525D44u;
            // 0x525d48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D4Cu; }
        if (ctx->pc != 0x525D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D4Cu; }
        if (ctx->pc != 0x525D4Cu) { return; }
    }
    ctx->pc = 0x525D4Cu;
label_525d4c:
    // 0x525d4c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x525d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_525d50:
    // 0x525d50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x525d50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_525d54:
    // 0x525d54: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_525d58:
    if (ctx->pc == 0x525D58u) {
        ctx->pc = 0x525D58u;
            // 0x525d58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525D5Cu;
        goto label_525d5c;
    }
    ctx->pc = 0x525D54u;
    {
        const bool branch_taken_0x525d54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x525d54) {
            ctx->pc = 0x525D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525D54u;
            // 0x525d58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525D68u;
            goto label_525d68;
        }
    }
    ctx->pc = 0x525D5Cu;
label_525d5c:
    // 0x525d5c: 0xc0400a8  jal         func_1002A0
label_525d60:
    if (ctx->pc == 0x525D60u) {
        ctx->pc = 0x525D60u;
            // 0x525d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525D64u;
        goto label_525d64;
    }
    ctx->pc = 0x525D5Cu;
    SET_GPR_U32(ctx, 31, 0x525D64u);
    ctx->pc = 0x525D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525D5Cu;
            // 0x525d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D64u; }
        if (ctx->pc != 0x525D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525D64u; }
        if (ctx->pc != 0x525D64u) { return; }
    }
    ctx->pc = 0x525D64u;
label_525d64:
    // 0x525d64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x525d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_525d68:
    // 0x525d68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x525d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_525d6c:
    // 0x525d6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x525d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_525d70:
    // 0x525d70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x525d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_525d74:
    // 0x525d74: 0x3e00008  jr          $ra
label_525d78:
    if (ctx->pc == 0x525D78u) {
        ctx->pc = 0x525D78u;
            // 0x525d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x525D7Cu;
        goto label_525d7c;
    }
    ctx->pc = 0x525D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x525D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525D74u;
            // 0x525d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x525D7Cu;
label_525d7c:
    // 0x525d7c: 0x0  nop
    ctx->pc = 0x525d7cu;
    // NOP
label_525d80:
    // 0x525d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x525d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_525d84:
    // 0x525d84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x525d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_525d88:
    // 0x525d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x525d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_525d8c:
    // 0x525d8c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x525d8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_525d90:
    // 0x525d90: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_525d94:
    if (ctx->pc == 0x525D94u) {
        ctx->pc = 0x525D94u;
            // 0x525d94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x525D98u;
        goto label_525d98;
    }
    ctx->pc = 0x525D90u;
    {
        const bool branch_taken_0x525d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x525d90) {
            ctx->pc = 0x525D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525D90u;
            // 0x525d94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525DDCu;
            goto label_525ddc;
        }
    }
    ctx->pc = 0x525D98u;
label_525d98:
    // 0x525d98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x525d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_525d9c:
    // 0x525d9c: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
label_525da0:
    if (ctx->pc == 0x525DA0u) {
        ctx->pc = 0x525DA4u;
        goto label_525da4;
    }
    ctx->pc = 0x525D9Cu;
    {
        const bool branch_taken_0x525d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x525d9c) {
            ctx->pc = 0x525DD8u;
            goto label_525dd8;
        }
    }
    ctx->pc = 0x525DA4u;
label_525da4:
    // 0x525da4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x525da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_525da8:
    // 0x525da8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_525dac:
    if (ctx->pc == 0x525DACu) {
        ctx->pc = 0x525DB0u;
        goto label_525db0;
    }
    ctx->pc = 0x525DA8u;
    {
        const bool branch_taken_0x525da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x525da8) {
            ctx->pc = 0x525DB8u;
            goto label_525db8;
        }
    }
    ctx->pc = 0x525DB0u;
label_525db0:
    // 0x525db0: 0x10000009  b           . + 4 + (0x9 << 2)
label_525db4:
    if (ctx->pc == 0x525DB4u) {
        ctx->pc = 0x525DB8u;
        goto label_525db8;
    }
    ctx->pc = 0x525DB0u;
    {
        const bool branch_taken_0x525db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x525db0) {
            ctx->pc = 0x525DD8u;
            goto label_525dd8;
        }
    }
    ctx->pc = 0x525DB8u;
label_525db8:
    // 0x525db8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x525db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_525dbc:
    // 0x525dbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x525dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_525dc0:
    // 0x525dc0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x525dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_525dc4:
    // 0x525dc4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x525dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_525dc8:
    // 0x525dc8: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x525dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_525dcc:
    // 0x525dcc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x525dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_525dd0:
    // 0x525dd0: 0x320f809  jalr        $t9
label_525dd4:
    if (ctx->pc == 0x525DD4u) {
        ctx->pc = 0x525DD4u;
            // 0x525dd4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x525DD8u;
        goto label_525dd8;
    }
    ctx->pc = 0x525DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x525DD8u);
        ctx->pc = 0x525DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525DD0u;
            // 0x525dd4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x525DD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x525DD8u; }
            if (ctx->pc != 0x525DD8u) { return; }
        }
        }
    }
    ctx->pc = 0x525DD8u;
label_525dd8:
    // 0x525dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x525dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_525ddc:
    // 0x525ddc: 0x3e00008  jr          $ra
label_525de0:
    if (ctx->pc == 0x525DE0u) {
        ctx->pc = 0x525DE0u;
            // 0x525de0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x525DE4u;
        goto label_525de4;
    }
    ctx->pc = 0x525DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x525DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525DDCu;
            // 0x525de0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x525DE4u;
label_525de4:
    // 0x525de4: 0x0  nop
    ctx->pc = 0x525de4u;
    // NOP
label_525de8:
    // 0x525de8: 0x0  nop
    ctx->pc = 0x525de8u;
    // NOP
label_525dec:
    // 0x525dec: 0x0  nop
    ctx->pc = 0x525decu;
    // NOP
label_525df0:
    // 0x525df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x525df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_525df4:
    // 0x525df4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x525df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_525df8:
    // 0x525df8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x525df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_525dfc:
    // 0x525dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x525dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_525e00:
    // 0x525e00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x525e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_525e04:
    // 0x525e04: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x525e04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_525e08:
    // 0x525e08: 0x50830016  beql        $a0, $v1, . + 4 + (0x16 << 2)
label_525e0c:
    if (ctx->pc == 0x525E0Cu) {
        ctx->pc = 0x525E0Cu;
            // 0x525e0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x525E10u;
        goto label_525e10;
    }
    ctx->pc = 0x525E08u;
    {
        const bool branch_taken_0x525e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x525e08) {
            ctx->pc = 0x525E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525E08u;
            // 0x525e0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525E64u;
            goto label_525e64;
        }
    }
    ctx->pc = 0x525E10u;
label_525e10:
    // 0x525e10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x525e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_525e14:
    // 0x525e14: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_525e18:
    if (ctx->pc == 0x525E18u) {
        ctx->pc = 0x525E18u;
            // 0x525e18: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->pc = 0x525E1Cu;
        goto label_525e1c;
    }
    ctx->pc = 0x525E14u;
    {
        const bool branch_taken_0x525e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x525e14) {
            ctx->pc = 0x525E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525E14u;
            // 0x525e18: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525E30u;
            goto label_525e30;
        }
    }
    ctx->pc = 0x525E1Cu;
label_525e1c:
    // 0x525e1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x525e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_525e20:
    // 0x525e20: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_525e24:
    if (ctx->pc == 0x525E24u) {
        ctx->pc = 0x525E28u;
        goto label_525e28;
    }
    ctx->pc = 0x525E20u;
    {
        const bool branch_taken_0x525e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x525e20) {
            ctx->pc = 0x525E60u;
            goto label_525e60;
        }
    }
    ctx->pc = 0x525E28u;
label_525e28:
    // 0x525e28: 0x1000000d  b           . + 4 + (0xD << 2)
label_525e2c:
    if (ctx->pc == 0x525E2Cu) {
        ctx->pc = 0x525E30u;
        goto label_525e30;
    }
    ctx->pc = 0x525E28u;
    {
        const bool branch_taken_0x525e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x525e28) {
            ctx->pc = 0x525E60u;
            goto label_525e60;
        }
    }
    ctx->pc = 0x525E30u;
label_525e30:
    // 0x525e30: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_525e34:
    if (ctx->pc == 0x525E34u) {
        ctx->pc = 0x525E34u;
            // 0x525e34: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x525E38u;
        goto label_525e38;
    }
    ctx->pc = 0x525E30u;
    {
        const bool branch_taken_0x525e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x525e30) {
            ctx->pc = 0x525E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525E30u;
            // 0x525e34: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525E54u;
            goto label_525e54;
        }
    }
    ctx->pc = 0x525E38u;
label_525e38:
    // 0x525e38: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x525e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_525e3c:
    // 0x525e3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x525e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_525e40:
    // 0x525e40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x525e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_525e44:
    // 0x525e44: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x525e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_525e48:
    // 0x525e48: 0x320f809  jalr        $t9
label_525e4c:
    if (ctx->pc == 0x525E4Cu) {
        ctx->pc = 0x525E50u;
        goto label_525e50;
    }
    ctx->pc = 0x525E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x525E50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x525E50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x525E50u; }
            if (ctx->pc != 0x525E50u) { return; }
        }
        }
    }
    ctx->pc = 0x525E50u;
label_525e50:
    // 0x525e50: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x525e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_525e54:
    // 0x525e54: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x525e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_525e58:
    // 0x525e58: 0x320f809  jalr        $t9
label_525e5c:
    if (ctx->pc == 0x525E5Cu) {
        ctx->pc = 0x525E5Cu;
            // 0x525e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525E60u;
        goto label_525e60;
    }
    ctx->pc = 0x525E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x525E60u);
        ctx->pc = 0x525E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525E58u;
            // 0x525e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x525E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x525E60u; }
            if (ctx->pc != 0x525E60u) { return; }
        }
        }
    }
    ctx->pc = 0x525E60u;
label_525e60:
    // 0x525e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x525e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_525e64:
    // 0x525e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x525e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_525e68:
    // 0x525e68: 0x3e00008  jr          $ra
label_525e6c:
    if (ctx->pc == 0x525E6Cu) {
        ctx->pc = 0x525E6Cu;
            // 0x525e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x525E70u;
        goto label_525e70;
    }
    ctx->pc = 0x525E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x525E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525E68u;
            // 0x525e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x525E70u;
label_525e70:
    // 0x525e70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x525e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_525e74:
    // 0x525e74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x525e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_525e78:
    // 0x525e78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x525e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_525e7c:
    // 0x525e7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x525e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_525e80:
    // 0x525e80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x525e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_525e84:
    // 0x525e84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x525e84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_525e88:
    // 0x525e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x525e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_525e8c:
    // 0x525e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x525e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_525e90:
    // 0x525e90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x525e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_525e94:
    // 0x525e94: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x525e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_525e98:
    // 0x525e98: 0x8c44e410  lw          $a0, -0x1BF0($v0)
    ctx->pc = 0x525e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_525e9c:
    // 0x525e9c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x525e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_525ea0:
    // 0x525ea0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x525ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_525ea4:
    // 0x525ea4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x525ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_525ea8:
    // 0x525ea8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x525ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_525eac:
    // 0x525eac: 0xc0d18e8  jal         func_3463A0
label_525eb0:
    if (ctx->pc == 0x525EB0u) {
        ctx->pc = 0x525EB0u;
            // 0x525eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525EB4u;
        goto label_525eb4;
    }
    ctx->pc = 0x525EACu;
    SET_GPR_U32(ctx, 31, 0x525EB4u);
    ctx->pc = 0x525EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525EACu;
            // 0x525eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3463A0u;
    if (runtime->hasFunction(0x3463A0u)) {
        auto targetFn = runtime->lookupFunction(0x3463A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525EB4u; }
        if (ctx->pc != 0x525EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003463A0_0x3463a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525EB4u; }
        if (ctx->pc != 0x525EB4u) { return; }
    }
    ctx->pc = 0x525EB4u;
label_525eb4:
    // 0x525eb4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x525eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_525eb8:
    // 0x525eb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x525eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_525ebc:
    // 0x525ebc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x525ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_525ec0:
    // 0x525ec0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x525ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_525ec4:
    // 0x525ec4: 0xae63008c  sw          $v1, 0x8C($s3)
    ctx->pc = 0x525ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 3));
label_525ec8:
    // 0x525ec8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x525ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_525ecc:
    // 0x525ecc: 0xc0a7a88  jal         func_29EA20
label_525ed0:
    if (ctx->pc == 0x525ED0u) {
        ctx->pc = 0x525ED0u;
            // 0x525ed0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x525ED4u;
        goto label_525ed4;
    }
    ctx->pc = 0x525ECCu;
    SET_GPR_U32(ctx, 31, 0x525ED4u);
    ctx->pc = 0x525ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525ECCu;
            // 0x525ed0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525ED4u; }
        if (ctx->pc != 0x525ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525ED4u; }
        if (ctx->pc != 0x525ED4u) { return; }
    }
    ctx->pc = 0x525ED4u;
label_525ed4:
    // 0x525ed4: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x525ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_525ed8:
    // 0x525ed8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x525ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_525edc:
    // 0x525edc: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_525ee0:
    if (ctx->pc == 0x525EE0u) {
        ctx->pc = 0x525EE0u;
            // 0x525ee0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x525EE4u;
        goto label_525ee4;
    }
    ctx->pc = 0x525EDCu;
    {
        const bool branch_taken_0x525edc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x525EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525EDCu;
            // 0x525ee0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525edc) {
            ctx->pc = 0x525F10u;
            goto label_525f10;
        }
    }
    ctx->pc = 0x525EE4u;
label_525ee4:
    // 0x525ee4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x525ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_525ee8:
    // 0x525ee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x525ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_525eec:
    // 0x525eec: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x525eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_525ef0:
    // 0x525ef0: 0xc081fa8  jal         func_207EA0
label_525ef4:
    if (ctx->pc == 0x525EF4u) {
        ctx->pc = 0x525EF4u;
            // 0x525ef4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x525EF8u;
        goto label_525ef8;
    }
    ctx->pc = 0x525EF0u;
    SET_GPR_U32(ctx, 31, 0x525EF8u);
    ctx->pc = 0x525EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525EF0u;
            // 0x525ef4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207EA0u;
    if (runtime->hasFunction(0x207EA0u)) {
        auto targetFn = runtime->lookupFunction(0x207EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525EF8u; }
        if (ctx->pc != 0x525EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207EA0_0x207ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525EF8u; }
        if (ctx->pc != 0x525EF8u) { return; }
    }
    ctx->pc = 0x525EF8u;
label_525ef8:
    // 0x525ef8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x525ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_525efc:
    // 0x525efc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x525efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_525f00:
    // 0x525f00: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x525f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
label_525f04:
    // 0x525f04: 0x2442e328  addiu       $v0, $v0, -0x1CD8
    ctx->pc = 0x525f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959912));
label_525f08:
    // 0x525f08: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x525f08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_525f0c:
    // 0x525f0c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x525f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_525f10:
    // 0x525f10: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x525f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_525f14:
    // 0x525f14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x525f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_525f18:
    // 0x525f18: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x525f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_525f1c:
    // 0x525f1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x525f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_525f20:
    // 0x525f20: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x525f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
label_525f24:
    // 0x525f24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x525f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_525f28:
    // 0x525f28: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x525f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_525f2c:
    // 0x525f2c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x525f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_525f30:
    // 0x525f30: 0xa3a70091  sb          $a3, 0x91($sp)
    ctx->pc = 0x525f30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 145), (uint8_t)GPR_U32(ctx, 7));
label_525f34:
    // 0x525f34: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x525f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_525f38:
    // 0x525f38: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x525f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_525f3c:
    // 0x525f3c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x525f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_525f40:
    // 0x525f40: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x525f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
label_525f44:
    // 0x525f44: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x525f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_525f48:
    // 0x525f48: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x525f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_525f4c:
    // 0x525f4c: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x525f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_525f50:
    // 0x525f50: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x525f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_525f54:
    // 0x525f54: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x525f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
label_525f58:
    // 0x525f58: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x525f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
label_525f5c:
    // 0x525f5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x525f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_525f60:
    // 0x525f60: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x525f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_525f64:
    // 0x525f64: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x525f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_525f68:
    // 0x525f68: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x525f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
label_525f6c:
    // 0x525f6c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x525f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_525f70:
    // 0x525f70: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x525f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_525f74:
    // 0x525f74: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x525f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_525f78:
    // 0x525f78: 0xa3a70090  sb          $a3, 0x90($sp)
    ctx->pc = 0x525f78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 7));
label_525f7c:
    // 0x525f7c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x525f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_525f80:
    // 0x525f80: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x525f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_525f84:
    // 0x525f84: 0x320f809  jalr        $t9
label_525f88:
    if (ctx->pc == 0x525F88u) {
        ctx->pc = 0x525F88u;
            // 0x525f88: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x525F8Cu;
        goto label_525f8c;
    }
    ctx->pc = 0x525F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x525F8Cu);
        ctx->pc = 0x525F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525F84u;
            // 0x525f88: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x525F8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x525F8Cu; }
            if (ctx->pc != 0x525F8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x525F8Cu;
label_525f8c:
    // 0x525f8c: 0xc082544  jal         func_209510
label_525f90:
    if (ctx->pc == 0x525F90u) {
        ctx->pc = 0x525F90u;
            // 0x525f90: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x525F94u;
        goto label_525f94;
    }
    ctx->pc = 0x525F8Cu;
    SET_GPR_U32(ctx, 31, 0x525F94u);
    ctx->pc = 0x525F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525F8Cu;
            // 0x525f90: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209510u;
    if (runtime->hasFunction(0x209510u)) {
        auto targetFn = runtime->lookupFunction(0x209510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525F94u; }
        if (ctx->pc != 0x525F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209510_0x209510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525F94u; }
        if (ctx->pc != 0x525F94u) { return; }
    }
    ctx->pc = 0x525F94u;
label_525f94:
    // 0x525f94: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_525f98:
    if (ctx->pc == 0x525F98u) {
        ctx->pc = 0x525F98u;
            // 0x525f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525F9Cu;
        goto label_525f9c;
    }
    ctx->pc = 0x525F94u;
    {
        const bool branch_taken_0x525f94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x525F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525F94u;
            // 0x525f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525f94) {
            ctx->pc = 0x525FA0u;
            goto label_525fa0;
        }
    }
    ctx->pc = 0x525F9Cu;
label_525f9c:
    // 0x525f9c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x525f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_525fa0:
    // 0x525fa0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x525fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_525fa4:
    // 0x525fa4: 0xc082650  jal         func_209940
label_525fa8:
    if (ctx->pc == 0x525FA8u) {
        ctx->pc = 0x525FA8u;
            // 0x525fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525FACu;
        goto label_525fac;
    }
    ctx->pc = 0x525FA4u;
    SET_GPR_U32(ctx, 31, 0x525FACu);
    ctx->pc = 0x525FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525FA4u;
            // 0x525fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209940u;
    if (runtime->hasFunction(0x209940u)) {
        auto targetFn = runtime->lookupFunction(0x209940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525FACu; }
        if (ctx->pc != 0x525FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209940_0x209940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525FACu; }
        if (ctx->pc != 0x525FACu) { return; }
    }
    ctx->pc = 0x525FACu;
label_525fac:
    // 0x525fac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x525facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_525fb0:
    // 0x525fb0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x525fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_525fb4:
    // 0x525fb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x525fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_525fb8:
    // 0x525fb8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x525fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_525fbc:
    // 0x525fbc: 0xc0a7a88  jal         func_29EA20
label_525fc0:
    if (ctx->pc == 0x525FC0u) {
        ctx->pc = 0x525FC0u;
            // 0x525fc0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x525FC4u;
        goto label_525fc4;
    }
    ctx->pc = 0x525FBCu;
    SET_GPR_U32(ctx, 31, 0x525FC4u);
    ctx->pc = 0x525FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525FBCu;
            // 0x525fc0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525FC4u; }
        if (ctx->pc != 0x525FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525FC4u; }
        if (ctx->pc != 0x525FC4u) { return; }
    }
    ctx->pc = 0x525FC4u;
label_525fc4:
    // 0x525fc4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x525fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_525fc8:
    // 0x525fc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x525fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_525fcc:
    // 0x525fcc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_525fd0:
    if (ctx->pc == 0x525FD0u) {
        ctx->pc = 0x525FD0u;
            // 0x525fd0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x525FD4u;
        goto label_525fd4;
    }
    ctx->pc = 0x525FCCu;
    {
        const bool branch_taken_0x525fcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x525FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525FCCu;
            // 0x525fd0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525fcc) {
            ctx->pc = 0x525FE8u;
            goto label_525fe8;
        }
    }
    ctx->pc = 0x525FD4u;
label_525fd4:
    // 0x525fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x525fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_525fd8:
    // 0x525fd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x525fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_525fdc:
    // 0x525fdc: 0xc0822a8  jal         func_208AA0
label_525fe0:
    if (ctx->pc == 0x525FE0u) {
        ctx->pc = 0x525FE0u;
            // 0x525fe0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525FE4u;
        goto label_525fe4;
    }
    ctx->pc = 0x525FDCu;
    SET_GPR_U32(ctx, 31, 0x525FE4u);
    ctx->pc = 0x525FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525FDCu;
            // 0x525fe0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208AA0u;
    if (runtime->hasFunction(0x208AA0u)) {
        auto targetFn = runtime->lookupFunction(0x208AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525FE4u; }
        if (ctx->pc != 0x525FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208AA0_0x208aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525FE4u; }
        if (ctx->pc != 0x525FE4u) { return; }
    }
    ctx->pc = 0x525FE4u;
label_525fe4:
    // 0x525fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x525fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_525fe8:
    // 0x525fe8: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x525fe8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_525fec:
    // 0x525fec: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_525ff0:
    if (ctx->pc == 0x525FF0u) {
        ctx->pc = 0x525FF0u;
            // 0x525ff0: 0x96430004  lhu         $v1, 0x4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x525FF4u;
        goto label_525ff4;
    }
    ctx->pc = 0x525FECu;
    {
        const bool branch_taken_0x525fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x525fec) {
            ctx->pc = 0x525FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525FECu;
            // 0x525ff0: 0x96430004  lhu         $v1, 0x4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x526030u;
            goto label_526030;
        }
    }
    ctx->pc = 0x525FF4u;
label_525ff4:
    // 0x525ff4: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x525ff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_525ff8:
    // 0x525ff8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x525ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_525ffc:
    // 0x525ffc: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x525ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
label_526000:
    // 0x526000: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x526000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_526004:
    // 0x526004: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x526004u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_526008:
    // 0x526008: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_52600c:
    if (ctx->pc == 0x52600Cu) {
        ctx->pc = 0x526010u;
        goto label_526010;
    }
    ctx->pc = 0x526008u;
    {
        const bool branch_taken_0x526008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x526008) {
            ctx->pc = 0x52602Cu;
            goto label_52602c;
        }
    }
    ctx->pc = 0x526010u;
label_526010:
    // 0x526010: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_526014:
    if (ctx->pc == 0x526014u) {
        ctx->pc = 0x526018u;
        goto label_526018;
    }
    ctx->pc = 0x526010u;
    {
        const bool branch_taken_0x526010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x526010) {
            ctx->pc = 0x52602Cu;
            goto label_52602c;
        }
    }
    ctx->pc = 0x526018u;
label_526018:
    // 0x526018: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x526018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_52601c:
    // 0x52601c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x52601cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_526020:
    // 0x526020: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x526020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_526024:
    // 0x526024: 0x320f809  jalr        $t9
label_526028:
    if (ctx->pc == 0x526028u) {
        ctx->pc = 0x526028u;
            // 0x526028: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52602Cu;
        goto label_52602c;
    }
    ctx->pc = 0x526024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52602Cu);
        ctx->pc = 0x526028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526024u;
            // 0x526028: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52602Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52602Cu; }
            if (ctx->pc != 0x52602Cu) { return; }
        }
        }
    }
    ctx->pc = 0x52602Cu;
label_52602c:
    // 0x52602c: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x52602cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_526030:
    // 0x526030: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_526034:
    if (ctx->pc == 0x526034u) {
        ctx->pc = 0x526034u;
            // 0x526034: 0xae700060  sw          $s0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 16));
        ctx->pc = 0x526038u;
        goto label_526038;
    }
    ctx->pc = 0x526030u;
    {
        const bool branch_taken_0x526030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x526030) {
            ctx->pc = 0x526034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526030u;
            // 0x526034: 0xae700060  sw          $s0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x526074u;
            goto label_526074;
        }
    }
    ctx->pc = 0x526038u;
label_526038:
    // 0x526038: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x526038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_52603c:
    // 0x52603c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x52603cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_526040:
    // 0x526040: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x526040u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
label_526044:
    // 0x526044: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x526044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_526048:
    // 0x526048: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x526048u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_52604c:
    // 0x52604c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_526050:
    if (ctx->pc == 0x526050u) {
        ctx->pc = 0x526054u;
        goto label_526054;
    }
    ctx->pc = 0x52604Cu;
    {
        const bool branch_taken_0x52604c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x52604c) {
            ctx->pc = 0x526070u;
            goto label_526070;
        }
    }
    ctx->pc = 0x526054u;
label_526054:
    // 0x526054: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_526058:
    if (ctx->pc == 0x526058u) {
        ctx->pc = 0x52605Cu;
        goto label_52605c;
    }
    ctx->pc = 0x526054u;
    {
        const bool branch_taken_0x526054 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x526054) {
            ctx->pc = 0x526070u;
            goto label_526070;
        }
    }
    ctx->pc = 0x52605Cu;
label_52605c:
    // 0x52605c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x52605cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_526060:
    // 0x526060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x526060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_526064:
    // 0x526064: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x526064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_526068:
    // 0x526068: 0x320f809  jalr        $t9
label_52606c:
    if (ctx->pc == 0x52606Cu) {
        ctx->pc = 0x52606Cu;
            // 0x52606c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x526070u;
        goto label_526070;
    }
    ctx->pc = 0x526068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x526070u);
        ctx->pc = 0x52606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526068u;
            // 0x52606c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x526070u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x526070u; }
            if (ctx->pc != 0x526070u) { return; }
        }
        }
    }
    ctx->pc = 0x526070u;
label_526070:
    // 0x526070: 0xae700060  sw          $s0, 0x60($s3)
    ctx->pc = 0x526070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 16));
label_526074:
    // 0x526074: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x526074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_526078:
    // 0x526078: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x526078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52607c:
    // 0x52607c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52607cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_526080:
    // 0x526080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x526080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_526084:
    // 0x526084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_526088:
    // 0x526088: 0x3e00008  jr          $ra
label_52608c:
    if (ctx->pc == 0x52608Cu) {
        ctx->pc = 0x52608Cu;
            // 0x52608c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x526090u;
        goto label_526090;
    }
    ctx->pc = 0x526088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52608Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526088u;
            // 0x52608c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526090u;
label_526090:
    // 0x526090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x526090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_526094:
    // 0x526094: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x526094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_526098:
    // 0x526098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x526098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52609c:
    // 0x52609c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5260a0:
    // 0x5260a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5260a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5260a4:
    // 0x5260a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5260a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5260a8:
    // 0x5260a8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x5260a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_5260ac:
    // 0x5260ac: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_5260b0:
    if (ctx->pc == 0x5260B0u) {
        ctx->pc = 0x5260B0u;
            // 0x5260b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5260B4u;
        goto label_5260b4;
    }
    ctx->pc = 0x5260ACu;
    {
        const bool branch_taken_0x5260ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5260B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5260ACu;
            // 0x5260b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5260ac) {
            ctx->pc = 0x5260E8u;
            goto label_5260e8;
        }
    }
    ctx->pc = 0x5260B4u;
label_5260b4:
    // 0x5260b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5260b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5260b8:
    // 0x5260b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5260b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5260bc:
    // 0x5260bc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x5260bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_5260c0:
    // 0x5260c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x5260c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_5260c4:
    // 0x5260c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x5260c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5260c8:
    // 0x5260c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5260c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5260cc:
    // 0x5260cc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x5260ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_5260d0:
    // 0x5260d0: 0x320f809  jalr        $t9
label_5260d4:
    if (ctx->pc == 0x5260D4u) {
        ctx->pc = 0x5260D8u;
        goto label_5260d8;
    }
    ctx->pc = 0x5260D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5260D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5260D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5260D8u; }
            if (ctx->pc != 0x5260D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5260D8u;
label_5260d8:
    // 0x5260d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x5260d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_5260dc:
    // 0x5260dc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x5260dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_5260e0:
    // 0x5260e0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_5260e4:
    if (ctx->pc == 0x5260E4u) {
        ctx->pc = 0x5260E4u;
            // 0x5260e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x5260E8u;
        goto label_5260e8;
    }
    ctx->pc = 0x5260E0u;
    {
        const bool branch_taken_0x5260e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5260E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5260E0u;
            // 0x5260e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5260e0) {
            ctx->pc = 0x5260BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5260bc;
        }
    }
    ctx->pc = 0x5260E8u;
label_5260e8:
    // 0x5260e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5260e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_5260ec:
    // 0x5260ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5260ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5260f0:
    // 0x5260f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5260f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5260f4:
    // 0x5260f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5260f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5260f8:
    // 0x5260f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5260f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5260fc:
    // 0x5260fc: 0x3e00008  jr          $ra
label_526100:
    if (ctx->pc == 0x526100u) {
        ctx->pc = 0x526100u;
            // 0x526100: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x526104u;
        goto label_526104;
    }
    ctx->pc = 0x5260FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x526100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5260FCu;
            // 0x526100: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526104u;
label_526104:
    // 0x526104: 0x0  nop
    ctx->pc = 0x526104u;
    // NOP
label_526108:
    // 0x526108: 0x0  nop
    ctx->pc = 0x526108u;
    // NOP
label_52610c:
    // 0x52610c: 0x0  nop
    ctx->pc = 0x52610cu;
    // NOP
label_526110:
    // 0x526110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x526110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_526114:
    // 0x526114: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x526114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_526118:
    // 0x526118: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x526118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52611c:
    // 0x52611c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_526120:
    // 0x526120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x526120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_526124:
    // 0x526124: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x526124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_526128:
    // 0x526128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x526128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52612c:
    // 0x52612c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x52612cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_526130:
    // 0x526130: 0x8cb00d74  lw          $s0, 0xD74($a1)
    ctx->pc = 0x526130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3444)));
label_526134:
    // 0x526134: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x526134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_526138:
    // 0x526138: 0x262602c0  addiu       $a2, $s1, 0x2C0
    ctx->pc = 0x526138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_52613c:
    // 0x52613c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x52613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_526140:
    // 0x526140: 0x8c53002c  lw          $s3, 0x2C($v0)
    ctx->pc = 0x526140u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_526144:
    // 0x526144: 0xc04cca0  jal         func_133280
label_526148:
    if (ctx->pc == 0x526148u) {
        ctx->pc = 0x526148u;
            // 0x526148: 0x264500e0  addiu       $a1, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x52614Cu;
        goto label_52614c;
    }
    ctx->pc = 0x526144u;
    SET_GPR_U32(ctx, 31, 0x52614Cu);
    ctx->pc = 0x526148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526144u;
            // 0x526148: 0x264500e0  addiu       $a1, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52614Cu; }
        if (ctx->pc != 0x52614Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52614Cu; }
        if (ctx->pc != 0x52614Cu) { return; }
    }
    ctx->pc = 0x52614Cu;
label_52614c:
    // 0x52614c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x52614cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_526150:
    // 0x526150: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x526150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
label_526154:
    // 0x526154: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
label_526158:
    if (ctx->pc == 0x526158u) {
        ctx->pc = 0x526158u;
            // 0x526158: 0x3c033e4c  lui         $v1, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
        ctx->pc = 0x52615Cu;
        goto label_52615c;
    }
    ctx->pc = 0x526154u;
    {
        const bool branch_taken_0x526154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x526154) {
            ctx->pc = 0x526158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526154u;
            // 0x526158: 0x3c033e4c  lui         $v1, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5261C8u;
            goto label_5261c8;
        }
    }
    ctx->pc = 0x52615Cu;
label_52615c:
    // 0x52615c: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x52615cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_526160:
    // 0x526160: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x526160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_526164:
    // 0x526164: 0x54830038  bnel        $a0, $v1, . + 4 + (0x38 << 2)
label_526168:
    if (ctx->pc == 0x526168u) {
        ctx->pc = 0x526168u;
            // 0x526168: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x52616Cu;
        goto label_52616c;
    }
    ctx->pc = 0x526164u;
    {
        const bool branch_taken_0x526164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x526164) {
            ctx->pc = 0x526168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526164u;
            // 0x526168: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x526248u;
            goto label_526248;
        }
    }
    ctx->pc = 0x52616Cu;
label_52616c:
    // 0x52616c: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x52616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_526170:
    // 0x526170: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x526170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_526174:
    // 0x526174: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x526174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_526178:
    // 0x526178: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_52617c:
    if (ctx->pc == 0x52617Cu) {
        ctx->pc = 0x526180u;
        goto label_526180;
    }
    ctx->pc = 0x526178u;
    {
        const bool branch_taken_0x526178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x526178) {
            ctx->pc = 0x526244u;
            goto label_526244;
        }
    }
    ctx->pc = 0x526180u;
label_526180:
    // 0x526180: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x526180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_526184:
    // 0x526184: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x526184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_526188:
    // 0x526188: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x526188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_52618c:
    // 0x52618c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x52618cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_526190:
    // 0x526190: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x526190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_526194:
    // 0x526194: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x526194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_526198:
    // 0x526198: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x526198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_52619c:
    // 0x52619c: 0xc0a545c  jal         func_295170
label_5261a0:
    if (ctx->pc == 0x5261A0u) {
        ctx->pc = 0x5261A0u;
            // 0x5261a0: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x5261A4u;
        goto label_5261a4;
    }
    ctx->pc = 0x52619Cu;
    SET_GPR_U32(ctx, 31, 0x5261A4u);
    ctx->pc = 0x5261A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52619Cu;
            // 0x5261a0: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5261A4u; }
        if (ctx->pc != 0x5261A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5261A4u; }
        if (ctx->pc != 0x5261A4u) { return; }
    }
    ctx->pc = 0x5261A4u;
label_5261a4:
    // 0x5261a4: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x5261a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_5261a8:
    // 0x5261a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5261a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5261ac:
    // 0x5261ac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x5261acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_5261b0:
    // 0x5261b0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x5261b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_5261b4:
    // 0x5261b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x5261b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5261b8:
    // 0x5261b8: 0xc08bf20  jal         func_22FC80
label_5261bc:
    if (ctx->pc == 0x5261BCu) {
        ctx->pc = 0x5261BCu;
            // 0x5261bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5261C0u;
        goto label_5261c0;
    }
    ctx->pc = 0x5261B8u;
    SET_GPR_U32(ctx, 31, 0x5261C0u);
    ctx->pc = 0x5261BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5261B8u;
            // 0x5261bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5261C0u; }
        if (ctx->pc != 0x5261C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5261C0u; }
        if (ctx->pc != 0x5261C0u) { return; }
    }
    ctx->pc = 0x5261C0u;
label_5261c0:
    // 0x5261c0: 0x10000020  b           . + 4 + (0x20 << 2)
label_5261c4:
    if (ctx->pc == 0x5261C4u) {
        ctx->pc = 0x5261C8u;
        goto label_5261c8;
    }
    ctx->pc = 0x5261C0u;
    {
        const bool branch_taken_0x5261c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5261c0) {
            ctx->pc = 0x526244u;
            goto label_526244;
        }
    }
    ctx->pc = 0x5261C8u;
label_5261c8:
    // 0x5261c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x5261c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_5261cc:
    // 0x5261cc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x5261ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5261d0:
    // 0x5261d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5261d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5261d4:
    // 0x5261d4: 0x0  nop
    ctx->pc = 0x5261d4u;
    // NOP
label_5261d8:
    // 0x5261d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x5261d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5261dc:
    // 0x5261dc: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_5261e0:
    if (ctx->pc == 0x5261E0u) {
        ctx->pc = 0x5261E4u;
        goto label_5261e4;
    }
    ctx->pc = 0x5261DCu;
    {
        const bool branch_taken_0x5261dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5261dc) {
            ctx->pc = 0x526244u;
            goto label_526244;
        }
    }
    ctx->pc = 0x5261E4u;
label_5261e4:
    // 0x5261e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5261e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5261e8:
    // 0x5261e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x5261e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5261ec:
    // 0x5261ec: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x5261ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_5261f0:
    // 0x5261f0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x5261f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_5261f4:
    // 0x5261f4: 0x26260890  addiu       $a2, $s1, 0x890
    ctx->pc = 0x5261f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_5261f8:
    // 0x5261f8: 0x262702c0  addiu       $a3, $s1, 0x2C0
    ctx->pc = 0x5261f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_5261fc:
    // 0x5261fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x5261fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_526200:
    // 0x526200: 0xc0bb404  jal         func_2ED010
label_526204:
    if (ctx->pc == 0x526204u) {
        ctx->pc = 0x526204u;
            // 0x526204: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x526208u;
        goto label_526208;
    }
    ctx->pc = 0x526200u;
    SET_GPR_U32(ctx, 31, 0x526208u);
    ctx->pc = 0x526204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526200u;
            // 0x526204: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526208u; }
        if (ctx->pc != 0x526208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526208u; }
        if (ctx->pc != 0x526208u) { return; }
    }
    ctx->pc = 0x526208u;
label_526208:
    // 0x526208: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x526208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_52620c:
    // 0x52620c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x52620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_526210:
    // 0x526210: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x526210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_526214:
    // 0x526214: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x526214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_526218:
    // 0x526218: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x526218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_52621c:
    // 0x52621c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x52621cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_526220:
    // 0x526220: 0xc0a545c  jal         func_295170
label_526224:
    if (ctx->pc == 0x526224u) {
        ctx->pc = 0x526224u;
            // 0x526224: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x526228u;
        goto label_526228;
    }
    ctx->pc = 0x526220u;
    SET_GPR_U32(ctx, 31, 0x526228u);
    ctx->pc = 0x526224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526220u;
            // 0x526224: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526228u; }
        if (ctx->pc != 0x526228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526228u; }
        if (ctx->pc != 0x526228u) { return; }
    }
    ctx->pc = 0x526228u;
label_526228:
    // 0x526228: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x526228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_52622c:
    // 0x52622c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52622cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_526230:
    // 0x526230: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x526230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_526234:
    // 0x526234: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x526234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_526238:
    // 0x526238: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x526238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52623c:
    // 0x52623c: 0xc08bf20  jal         func_22FC80
label_526240:
    if (ctx->pc == 0x526240u) {
        ctx->pc = 0x526240u;
            // 0x526240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526244u;
        goto label_526244;
    }
    ctx->pc = 0x52623Cu;
    SET_GPR_U32(ctx, 31, 0x526244u);
    ctx->pc = 0x526240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52623Cu;
            // 0x526240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526244u; }
        if (ctx->pc != 0x526244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526244u; }
        if (ctx->pc != 0x526244u) { return; }
    }
    ctx->pc = 0x526244u;
label_526244:
    // 0x526244: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x526244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_526248:
    // 0x526248: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x526248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52624c:
    // 0x52624c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52624cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_526250:
    // 0x526250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x526250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_526254:
    // 0x526254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_526258:
    // 0x526258: 0x3e00008  jr          $ra
label_52625c:
    if (ctx->pc == 0x52625Cu) {
        ctx->pc = 0x52625Cu;
            // 0x52625c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x526260u;
        goto label_526260;
    }
    ctx->pc = 0x526258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52625Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526258u;
            // 0x52625c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526260u;
label_526260:
    // 0x526260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x526260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_526264:
    // 0x526264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x526264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_526268:
    // 0x526268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x526268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52626c:
    // 0x52626c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52626cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_526270:
    // 0x526270: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x526270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_526274:
    // 0x526274: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_526278:
    if (ctx->pc == 0x526278u) {
        ctx->pc = 0x526278u;
            // 0x526278: 0x260400d4  addiu       $a0, $s0, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
        ctx->pc = 0x52627Cu;
        goto label_52627c;
    }
    ctx->pc = 0x526274u;
    {
        const bool branch_taken_0x526274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x526274) {
            ctx->pc = 0x526278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526274u;
            // 0x526278: 0x260400d4  addiu       $a0, $s0, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
        ctx->in_delay_slot = false;
            ctx->pc = 0x526290u;
            goto label_526290;
        }
    }
    ctx->pc = 0x52627Cu;
label_52627c:
    // 0x52627c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52627cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_526280:
    // 0x526280: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x526280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_526284:
    // 0x526284: 0x320f809  jalr        $t9
label_526288:
    if (ctx->pc == 0x526288u) {
        ctx->pc = 0x526288u;
            // 0x526288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52628Cu;
        goto label_52628c;
    }
    ctx->pc = 0x526284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52628Cu);
        ctx->pc = 0x526288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526284u;
            // 0x526288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52628Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52628Cu; }
            if (ctx->pc != 0x52628Cu) { return; }
        }
        }
    }
    ctx->pc = 0x52628Cu;
label_52628c:
    // 0x52628c: 0x260400d4  addiu       $a0, $s0, 0xD4
    ctx->pc = 0x52628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
label_526290:
    // 0x526290: 0xc0d37dc  jal         func_34DF70
label_526294:
    if (ctx->pc == 0x526294u) {
        ctx->pc = 0x526294u;
            // 0x526294: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x526298u;
        goto label_526298;
    }
    ctx->pc = 0x526290u;
    SET_GPR_U32(ctx, 31, 0x526298u);
    ctx->pc = 0x526294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526290u;
            // 0x526294: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526298u; }
        if (ctx->pc != 0x526298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526298u; }
        if (ctx->pc != 0x526298u) { return; }
    }
    ctx->pc = 0x526298u;
label_526298:
    // 0x526298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x526298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52629c:
    // 0x52629c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52629cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5262a0:
    // 0x5262a0: 0x3e00008  jr          $ra
label_5262a4:
    if (ctx->pc == 0x5262A4u) {
        ctx->pc = 0x5262A4u;
            // 0x5262a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5262A8u;
        goto label_5262a8;
    }
    ctx->pc = 0x5262A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5262A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5262A0u;
            // 0x5262a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5262A8u;
label_5262a8:
    // 0x5262a8: 0x0  nop
    ctx->pc = 0x5262a8u;
    // NOP
label_5262ac:
    // 0x5262ac: 0x0  nop
    ctx->pc = 0x5262acu;
    // NOP
label_5262b0:
    // 0x5262b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5262b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_5262b4:
    // 0x5262b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5262b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5262b8:
    // 0x5262b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5262b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5262bc:
    // 0x5262bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5262bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5262c0:
    // 0x5262c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5262c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5262c4:
    // 0x5262c4: 0x8c630d58  lw          $v1, 0xD58($v1)
    ctx->pc = 0x5262c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3416)));
label_5262c8:
    // 0x5262c8: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x5262c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_5262cc:
    // 0x5262cc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_5262d0:
    if (ctx->pc == 0x5262D0u) {
        ctx->pc = 0x5262D0u;
            // 0x5262d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5262D4u;
        goto label_5262d4;
    }
    ctx->pc = 0x5262CCu;
    {
        const bool branch_taken_0x5262cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5262D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5262CCu;
            // 0x5262d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5262cc) {
            ctx->pc = 0x526384u;
            goto label_526384;
        }
    }
    ctx->pc = 0x5262D4u;
label_5262d4:
    // 0x5262d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5262d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5262d8:
    // 0x5262d8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x5262d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_5262dc:
    // 0x5262dc: 0xc6220038  lwc1        $f2, 0x38($s1)
    ctx->pc = 0x5262dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5262e0:
    // 0x5262e0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x5262e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_5262e4:
    // 0x5262e4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x5262e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5262e8:
    // 0x5262e8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x5262e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_5262ec:
    // 0x5262ec: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x5262ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5262f0:
    // 0x5262f0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x5262f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_5262f4:
    // 0x5262f4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x5262f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_5262f8:
    // 0x5262f8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x5262f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_5262fc:
    // 0x5262fc: 0xc0a7a88  jal         func_29EA20
label_526300:
    if (ctx->pc == 0x526300u) {
        ctx->pc = 0x526300u;
            // 0x526300: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x526304u;
        goto label_526304;
    }
    ctx->pc = 0x5262FCu;
    SET_GPR_U32(ctx, 31, 0x526304u);
    ctx->pc = 0x526300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5262FCu;
            // 0x526300: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526304u; }
        if (ctx->pc != 0x526304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526304u; }
        if (ctx->pc != 0x526304u) { return; }
    }
    ctx->pc = 0x526304u;
label_526304:
    // 0x526304: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x526304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_526308:
    // 0x526308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x526308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52630c:
    // 0x52630c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_526310:
    if (ctx->pc == 0x526310u) {
        ctx->pc = 0x526310u;
            // 0x526310: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x526314u;
        goto label_526314;
    }
    ctx->pc = 0x52630Cu;
    {
        const bool branch_taken_0x52630c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x526310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52630Cu;
            // 0x526310: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52630c) {
            ctx->pc = 0x52632Cu;
            goto label_52632c;
        }
    }
    ctx->pc = 0x526314u;
label_526314:
    // 0x526314: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x526314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_526318:
    // 0x526318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x526318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52631c:
    // 0x52631c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x52631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_526320:
    // 0x526320: 0xc0804bc  jal         func_2012F0
label_526324:
    if (ctx->pc == 0x526324u) {
        ctx->pc = 0x526324u;
            // 0x526324: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x526328u;
        goto label_526328;
    }
    ctx->pc = 0x526320u;
    SET_GPR_U32(ctx, 31, 0x526328u);
    ctx->pc = 0x526324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526320u;
            // 0x526324: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526328u; }
        if (ctx->pc != 0x526328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526328u; }
        if (ctx->pc != 0x526328u) { return; }
    }
    ctx->pc = 0x526328u;
label_526328:
    // 0x526328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x526328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52632c:
    // 0x52632c: 0x262400d4  addiu       $a0, $s1, 0xD4
    ctx->pc = 0x52632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_526330:
    // 0x526330: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x526330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_526334:
    // 0x526334: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x526334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_526338:
    // 0x526338: 0xc0d37ec  jal         func_34DFB0
label_52633c:
    if (ctx->pc == 0x52633Cu) {
        ctx->pc = 0x52633Cu;
            // 0x52633c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526340u;
        goto label_526340;
    }
    ctx->pc = 0x526338u;
    SET_GPR_U32(ctx, 31, 0x526340u);
    ctx->pc = 0x52633Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526338u;
            // 0x52633c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526340u; }
        if (ctx->pc != 0x526340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526340u; }
        if (ctx->pc != 0x526340u) { return; }
    }
    ctx->pc = 0x526340u;
label_526340:
    // 0x526340: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x526340u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_526344:
    // 0x526344: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_526348:
    if (ctx->pc == 0x526348u) {
        ctx->pc = 0x526348u;
            // 0x526348: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x52634Cu;
        goto label_52634c;
    }
    ctx->pc = 0x526344u;
    {
        const bool branch_taken_0x526344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x526344) {
            ctx->pc = 0x526348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526344u;
            // 0x526348: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x526388u;
            goto label_526388;
        }
    }
    ctx->pc = 0x52634Cu;
label_52634c:
    // 0x52634c: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x52634cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_526350:
    // 0x526350: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x526350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_526354:
    // 0x526354: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x526354u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_526358:
    // 0x526358: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x526358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_52635c:
    // 0x52635c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x52635cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_526360:
    // 0x526360: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_526364:
    if (ctx->pc == 0x526364u) {
        ctx->pc = 0x526368u;
        goto label_526368;
    }
    ctx->pc = 0x526360u;
    {
        const bool branch_taken_0x526360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x526360) {
            ctx->pc = 0x526384u;
            goto label_526384;
        }
    }
    ctx->pc = 0x526368u;
label_526368:
    // 0x526368: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_52636c:
    if (ctx->pc == 0x52636Cu) {
        ctx->pc = 0x526370u;
        goto label_526370;
    }
    ctx->pc = 0x526368u;
    {
        const bool branch_taken_0x526368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x526368) {
            ctx->pc = 0x526384u;
            goto label_526384;
        }
    }
    ctx->pc = 0x526370u;
label_526370:
    // 0x526370: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x526370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_526374:
    // 0x526374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x526374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_526378:
    // 0x526378: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x526378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52637c:
    // 0x52637c: 0x320f809  jalr        $t9
label_526380:
    if (ctx->pc == 0x526380u) {
        ctx->pc = 0x526380u;
            // 0x526380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x526384u;
        goto label_526384;
    }
    ctx->pc = 0x52637Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x526384u);
        ctx->pc = 0x526380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52637Cu;
            // 0x526380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x526384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x526384u; }
            if (ctx->pc != 0x526384u) { return; }
        }
        }
    }
    ctx->pc = 0x526384u;
label_526384:
    // 0x526384: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x526384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_526388:
    // 0x526388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x526388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52638c:
    // 0x52638c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52638cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_526390:
    // 0x526390: 0x3e00008  jr          $ra
label_526394:
    if (ctx->pc == 0x526394u) {
        ctx->pc = 0x526394u;
            // 0x526394: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x526398u;
        goto label_526398;
    }
    ctx->pc = 0x526390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x526394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526390u;
            // 0x526394: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526398u;
label_526398:
    // 0x526398: 0x0  nop
    ctx->pc = 0x526398u;
    // NOP
label_52639c:
    // 0x52639c: 0x0  nop
    ctx->pc = 0x52639cu;
    // NOP
label_5263a0:
    // 0x5263a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x5263a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_5263a4:
    // 0x5263a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5263a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5263a8:
    // 0x5263a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x5263a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5263ac:
    // 0x5263ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5263acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5263b0:
    // 0x5263b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5263b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5263b4:
    // 0x5263b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5263b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5263b8:
    // 0x5263b8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x5263b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5263bc:
    // 0x5263bc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x5263bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5263c0:
    // 0x5263c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_5263c4:
    if (ctx->pc == 0x5263C4u) {
        ctx->pc = 0x5263C4u;
            // 0x5263c4: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x5263C8u;
        goto label_5263c8;
    }
    ctx->pc = 0x5263C0u;
    {
        const bool branch_taken_0x5263c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5263C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5263C0u;
            // 0x5263c4: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5263c0) {
            ctx->pc = 0x5263D0u;
            goto label_5263d0;
        }
    }
    ctx->pc = 0x5263C8u;
label_5263c8:
    // 0x5263c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5263c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5263cc:
    // 0x5263cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5263ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_5263d0:
    // 0x5263d0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x5263d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5263d4:
    // 0x5263d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5263d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5263d8:
    // 0x5263d8: 0x0  nop
    ctx->pc = 0x5263d8u;
    // NOP
label_5263dc:
    // 0x5263dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x5263dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5263e0:
    // 0x5263e0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_5263e4:
    if (ctx->pc == 0x5263E4u) {
        ctx->pc = 0x5263E4u;
            // 0x5263e4: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x5263E8u;
        goto label_5263e8;
    }
    ctx->pc = 0x5263E0u;
    {
        const bool branch_taken_0x5263e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5263e0) {
            ctx->pc = 0x5263E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5263E0u;
            // 0x5263e4: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5263F4u;
            goto label_5263f4;
        }
    }
    ctx->pc = 0x5263E8u;
label_5263e8:
    // 0x5263e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5263e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5263ec:
    // 0x5263ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x5263ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_5263f0:
    // 0x5263f0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x5263f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5263f4:
    // 0x5263f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5263f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5263f8:
    // 0x5263f8: 0x0  nop
    ctx->pc = 0x5263f8u;
    // NOP
label_5263fc:
    // 0x5263fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x5263fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_526400:
    // 0x526400: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_526404:
    if (ctx->pc == 0x526404u) {
        ctx->pc = 0x526404u;
            // 0x526404: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x526408u;
        goto label_526408;
    }
    ctx->pc = 0x526400u;
    {
        const bool branch_taken_0x526400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x526400) {
            ctx->pc = 0x526404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526400u;
            // 0x526404: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x526414u;
            goto label_526414;
        }
    }
    ctx->pc = 0x526408u;
label_526408:
    // 0x526408: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x526408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_52640c:
    // 0x52640c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x52640cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_526410:
    // 0x526410: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x526410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_526414:
    // 0x526414: 0xc049514  jal         func_125450
label_526418:
    if (ctx->pc == 0x526418u) {
        ctx->pc = 0x52641Cu;
        goto label_52641c;
    }
    ctx->pc = 0x526414u;
    SET_GPR_U32(ctx, 31, 0x52641Cu);
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52641Cu; }
        if (ctx->pc != 0x52641Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52641Cu; }
        if (ctx->pc != 0x52641Cu) { return; }
    }
    ctx->pc = 0x52641Cu;
label_52641c:
    // 0x52641c: 0xc0474b6  jal         func_11D2D8
label_526420:
    if (ctx->pc == 0x526420u) {
        ctx->pc = 0x526420u;
            // 0x526420: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526424u;
        goto label_526424;
    }
    ctx->pc = 0x52641Cu;
    SET_GPR_U32(ctx, 31, 0x526424u);
    ctx->pc = 0x526420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52641Cu;
            // 0x526420: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526424u; }
        if (ctx->pc != 0x526424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526424u; }
        if (ctx->pc != 0x526424u) { return; }
    }
    ctx->pc = 0x526424u;
label_526424:
    // 0x526424: 0xc0497dc  jal         func_125F70
label_526428:
    if (ctx->pc == 0x526428u) {
        ctx->pc = 0x526428u;
            // 0x526428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52642Cu;
        goto label_52642c;
    }
    ctx->pc = 0x526424u;
    SET_GPR_U32(ctx, 31, 0x52642Cu);
    ctx->pc = 0x526428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526424u;
            // 0x526428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52642Cu; }
        if (ctx->pc != 0x52642Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52642Cu; }
        if (ctx->pc != 0x52642Cu) { return; }
    }
    ctx->pc = 0x52642Cu;
label_52642c:
    // 0x52642c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x52642cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_526430:
    // 0x526430: 0xc049514  jal         func_125450
label_526434:
    if (ctx->pc == 0x526434u) {
        ctx->pc = 0x526434u;
            // 0x526434: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x526438u;
        goto label_526438;
    }
    ctx->pc = 0x526430u;
    SET_GPR_U32(ctx, 31, 0x526438u);
    ctx->pc = 0x526434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526430u;
            // 0x526434: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526438u; }
        if (ctx->pc != 0x526438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526438u; }
        if (ctx->pc != 0x526438u) { return; }
    }
    ctx->pc = 0x526438u;
label_526438:
    // 0x526438: 0xc0474b6  jal         func_11D2D8
label_52643c:
    if (ctx->pc == 0x52643Cu) {
        ctx->pc = 0x52643Cu;
            // 0x52643c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526440u;
        goto label_526440;
    }
    ctx->pc = 0x526438u;
    SET_GPR_U32(ctx, 31, 0x526440u);
    ctx->pc = 0x52643Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526438u;
            // 0x52643c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526440u; }
        if (ctx->pc != 0x526440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526440u; }
        if (ctx->pc != 0x526440u) { return; }
    }
    ctx->pc = 0x526440u;
label_526440:
    // 0x526440: 0xc0497dc  jal         func_125F70
label_526444:
    if (ctx->pc == 0x526444u) {
        ctx->pc = 0x526444u;
            // 0x526444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526448u;
        goto label_526448;
    }
    ctx->pc = 0x526440u;
    SET_GPR_U32(ctx, 31, 0x526448u);
    ctx->pc = 0x526444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526440u;
            // 0x526444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526448u; }
        if (ctx->pc != 0x526448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526448u; }
        if (ctx->pc != 0x526448u) { return; }
    }
    ctx->pc = 0x526448u;
label_526448:
    // 0x526448: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x526448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_52644c:
    // 0x52644c: 0xc049514  jal         func_125450
label_526450:
    if (ctx->pc == 0x526450u) {
        ctx->pc = 0x526450u;
            // 0x526450: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x526454u;
        goto label_526454;
    }
    ctx->pc = 0x52644Cu;
    SET_GPR_U32(ctx, 31, 0x526454u);
    ctx->pc = 0x526450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52644Cu;
            // 0x526450: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526454u; }
        if (ctx->pc != 0x526454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526454u; }
        if (ctx->pc != 0x526454u) { return; }
    }
    ctx->pc = 0x526454u;
label_526454:
    // 0x526454: 0xc0474b6  jal         func_11D2D8
label_526458:
    if (ctx->pc == 0x526458u) {
        ctx->pc = 0x526458u;
            // 0x526458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52645Cu;
        goto label_52645c;
    }
    ctx->pc = 0x526454u;
    SET_GPR_U32(ctx, 31, 0x52645Cu);
    ctx->pc = 0x526458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526454u;
            // 0x526458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52645Cu; }
        if (ctx->pc != 0x52645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52645Cu; }
        if (ctx->pc != 0x52645Cu) { return; }
    }
    ctx->pc = 0x52645Cu;
label_52645c:
    // 0x52645c: 0xc0497dc  jal         func_125F70
label_526460:
    if (ctx->pc == 0x526460u) {
        ctx->pc = 0x526460u;
            // 0x526460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526464u;
        goto label_526464;
    }
    ctx->pc = 0x52645Cu;
    SET_GPR_U32(ctx, 31, 0x526464u);
    ctx->pc = 0x526460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52645Cu;
            // 0x526460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526464u; }
        if (ctx->pc != 0x526464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526464u; }
        if (ctx->pc != 0x526464u) { return; }
    }
    ctx->pc = 0x526464u;
label_526464:
    // 0x526464: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x526464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_526468:
    // 0x526468: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x526468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_52646c:
    // 0x52646c: 0xc04f278  jal         func_13C9E0
label_526470:
    if (ctx->pc == 0x526470u) {
        ctx->pc = 0x526470u;
            // 0x526470: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x526474u;
        goto label_526474;
    }
    ctx->pc = 0x52646Cu;
    SET_GPR_U32(ctx, 31, 0x526474u);
    ctx->pc = 0x526470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52646Cu;
            // 0x526470: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526474u; }
        if (ctx->pc != 0x526474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526474u; }
        if (ctx->pc != 0x526474u) { return; }
    }
    ctx->pc = 0x526474u;
label_526474:
    // 0x526474: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x526474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_526478:
    // 0x526478: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x526478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_52647c:
    // 0x52647c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x52647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_526480:
    // 0x526480: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x526480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_526484:
    // 0x526484: 0xc04ce50  jal         func_133940
label_526488:
    if (ctx->pc == 0x526488u) {
        ctx->pc = 0x526488u;
            // 0x526488: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52648Cu;
        goto label_52648c;
    }
    ctx->pc = 0x526484u;
    SET_GPR_U32(ctx, 31, 0x52648Cu);
    ctx->pc = 0x526488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526484u;
            // 0x526488: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52648Cu; }
        if (ctx->pc != 0x52648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52648Cu; }
        if (ctx->pc != 0x52648Cu) { return; }
    }
    ctx->pc = 0x52648Cu;
label_52648c:
    // 0x52648c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x52648cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_526490:
    // 0x526490: 0xc04ce80  jal         func_133A00
label_526494:
    if (ctx->pc == 0x526494u) {
        ctx->pc = 0x526494u;
            // 0x526494: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x526498u;
        goto label_526498;
    }
    ctx->pc = 0x526490u;
    SET_GPR_U32(ctx, 31, 0x526498u);
    ctx->pc = 0x526494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526490u;
            // 0x526494: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526498u; }
        if (ctx->pc != 0x526498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526498u; }
        if (ctx->pc != 0x526498u) { return; }
    }
    ctx->pc = 0x526498u;
label_526498:
    // 0x526498: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x526498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_52649c:
    // 0x52649c: 0xc04ccf4  jal         func_1333D0
label_5264a0:
    if (ctx->pc == 0x5264A0u) {
        ctx->pc = 0x5264A0u;
            // 0x5264a0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5264A4u;
        goto label_5264a4;
    }
    ctx->pc = 0x52649Cu;
    SET_GPR_U32(ctx, 31, 0x5264A4u);
    ctx->pc = 0x5264A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52649Cu;
            // 0x5264a0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5264A4u; }
        if (ctx->pc != 0x5264A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5264A4u; }
        if (ctx->pc != 0x5264A4u) { return; }
    }
    ctx->pc = 0x5264A4u;
label_5264a4:
    // 0x5264a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5264a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5264a8:
    // 0x5264a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5264a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5264ac:
    // 0x5264ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5264acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5264b0:
    // 0x5264b0: 0x3e00008  jr          $ra
label_5264b4:
    if (ctx->pc == 0x5264B4u) {
        ctx->pc = 0x5264B4u;
            // 0x5264b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x5264B8u;
        goto label_5264b8;
    }
    ctx->pc = 0x5264B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5264B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5264B0u;
            // 0x5264b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5264B8u;
label_5264b8:
    // 0x5264b8: 0x0  nop
    ctx->pc = 0x5264b8u;
    // NOP
label_5264bc:
    // 0x5264bc: 0x0  nop
    ctx->pc = 0x5264bcu;
    // NOP
label_5264c0:
    // 0x5264c0: 0x3e00008  jr          $ra
label_5264c4:
    if (ctx->pc == 0x5264C4u) {
        ctx->pc = 0x5264C8u;
        goto label_5264c8;
    }
    ctx->pc = 0x5264C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5264C8u;
label_5264c8:
    // 0x5264c8: 0x0  nop
    ctx->pc = 0x5264c8u;
    // NOP
label_5264cc:
    // 0x5264cc: 0x0  nop
    ctx->pc = 0x5264ccu;
    // NOP
label_5264d0:
    // 0x5264d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5264d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5264d4:
    // 0x5264d4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x5264d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_5264d8:
    // 0x5264d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5264d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5264dc:
    // 0x5264dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5264dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5264e0:
    // 0x5264e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5264e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5264e4:
    // 0x5264e4: 0x8cd00d74  lw          $s0, 0xD74($a2)
    ctx->pc = 0x5264e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3444)));
label_5264e8:
    // 0x5264e8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x5264e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_5264ec:
    // 0x5264ec: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x5264ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_5264f0:
    // 0x5264f0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x5264f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_5264f4:
    // 0x5264f4: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_5264f8:
    if (ctx->pc == 0x5264F8u) {
        ctx->pc = 0x5264F8u;
            // 0x5264f8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x5264FCu;
        goto label_5264fc;
    }
    ctx->pc = 0x5264F4u;
    {
        const bool branch_taken_0x5264f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5264f4) {
            ctx->pc = 0x5264F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5264F4u;
            // 0x5264f8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x526530u;
            goto label_526530;
        }
    }
    ctx->pc = 0x5264FCu;
label_5264fc:
    // 0x5264fc: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x5264fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_526500:
    // 0x526500: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x526500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_526504:
    // 0x526504: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x526504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_526508:
    // 0x526508: 0xc0a545c  jal         func_295170
label_52650c:
    if (ctx->pc == 0x52650Cu) {
        ctx->pc = 0x52650Cu;
            // 0x52650c: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x526510u;
        goto label_526510;
    }
    ctx->pc = 0x526508u;
    SET_GPR_U32(ctx, 31, 0x526510u);
    ctx->pc = 0x52650Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526508u;
            // 0x52650c: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526510u; }
        if (ctx->pc != 0x526510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526510u; }
        if (ctx->pc != 0x526510u) { return; }
    }
    ctx->pc = 0x526510u;
label_526510:
    // 0x526510: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x526510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_526514:
    // 0x526514: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x526514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_526518:
    // 0x526518: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x526518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_52651c:
    // 0x52651c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_526520:
    // 0x526520: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x526520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_526524:
    // 0x526524: 0xc08bf20  jal         func_22FC80
label_526528:
    if (ctx->pc == 0x526528u) {
        ctx->pc = 0x526528u;
            // 0x526528: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52652Cu;
        goto label_52652c;
    }
    ctx->pc = 0x526524u;
    SET_GPR_U32(ctx, 31, 0x52652Cu);
    ctx->pc = 0x526528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526524u;
            // 0x526528: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52652Cu; }
        if (ctx->pc != 0x52652Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52652Cu; }
        if (ctx->pc != 0x52652Cu) { return; }
    }
    ctx->pc = 0x52652Cu;
label_52652c:
    // 0x52652c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52652cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_526530:
    // 0x526530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x526530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_526534:
    // 0x526534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_526538:
    // 0x526538: 0x3e00008  jr          $ra
label_52653c:
    if (ctx->pc == 0x52653Cu) {
        ctx->pc = 0x52653Cu;
            // 0x52653c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x526540u;
        goto label_526540;
    }
    ctx->pc = 0x526538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52653Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526538u;
            // 0x52653c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526540u;
label_526540:
    // 0x526540: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x526540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_526544:
    // 0x526544: 0x8149844  j           func_526110
label_526548:
    if (ctx->pc == 0x526548u) {
        ctx->pc = 0x526548u;
            // 0x526548: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52654Cu;
        goto label_52654c;
    }
    ctx->pc = 0x526544u;
    ctx->pc = 0x526548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526544u;
            // 0x526548: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x526110u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_526110;
    ctx->pc = 0x52654Cu;
label_52654c:
    // 0x52654c: 0x0  nop
    ctx->pc = 0x52654cu;
    // NOP
label_526550:
    // 0x526550: 0x814972c  j           func_525CB0
label_526554:
    if (ctx->pc == 0x526554u) {
        ctx->pc = 0x526554u;
            // 0x526554: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x526558u;
        goto label_526558;
    }
    ctx->pc = 0x526550u;
    ctx->pc = 0x526554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526550u;
            // 0x526554: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x525CB0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_525cb0;
    ctx->pc = 0x526558u;
label_526558:
    // 0x526558: 0x0  nop
    ctx->pc = 0x526558u;
    // NOP
label_52655c:
    // 0x52655c: 0x0  nop
    ctx->pc = 0x52655cu;
    // NOP
label_526560:
    // 0x526560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x526560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_526564:
    // 0x526564: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x526564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_526568:
    // 0x526568: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x526568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_52656c:
    // 0x52656c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_526570:
    // 0x526570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x526570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_526574:
    // 0x526574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x526574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_526578:
    // 0x526578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x526578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52657c:
    // 0x52657c: 0x90840008  lbu         $a0, 0x8($a0)
    ctx->pc = 0x52657cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_526580:
    // 0x526580: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x526580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_526584:
    // 0x526584: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x526584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_526588:
    // 0x526588: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
label_52658c:
    if (ctx->pc == 0x52658Cu) {
        ctx->pc = 0x52658Cu;
            // 0x52658c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x526590u;
        goto label_526590;
    }
    ctx->pc = 0x526588u;
    {
        const bool branch_taken_0x526588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x526588) {
            ctx->pc = 0x52658Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526588u;
            // 0x52658c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5265E0u;
            goto label_5265e0;
        }
    }
    ctx->pc = 0x526590u;
label_526590:
    // 0x526590: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x526590u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_526594:
    // 0x526594: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_526598:
    if (ctx->pc == 0x526598u) {
        ctx->pc = 0x52659Cu;
        goto label_52659c;
    }
    ctx->pc = 0x526594u;
    {
        const bool branch_taken_0x526594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x526594) {
            ctx->pc = 0x5265DCu;
            goto label_5265dc;
        }
    }
    ctx->pc = 0x52659Cu;
label_52659c:
    // 0x52659c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52659cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5265a0:
    // 0x5265a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5265a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5265a4:
    // 0x5265a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5265a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5265a8:
    // 0x5265a8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5265a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5265ac:
    // 0x5265ac: 0x320f809  jalr        $t9
label_5265b0:
    if (ctx->pc == 0x5265B0u) {
        ctx->pc = 0x5265B0u;
            // 0x5265b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5265B4u;
        goto label_5265b4;
    }
    ctx->pc = 0x5265ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5265B4u);
        ctx->pc = 0x5265B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5265ACu;
            // 0x5265b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5265B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5265B4u; }
            if (ctx->pc != 0x5265B4u) { return; }
        }
        }
    }
    ctx->pc = 0x5265B4u;
label_5265b4:
    // 0x5265b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5265b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5265b8:
    // 0x5265b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5265b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5265bc:
    // 0x5265bc: 0xc13aa08  jal         func_4EA820
label_5265c0:
    if (ctx->pc == 0x5265C0u) {
        ctx->pc = 0x5265C0u;
            // 0x5265c0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5265C4u;
        goto label_5265c4;
    }
    ctx->pc = 0x5265BCu;
    SET_GPR_U32(ctx, 31, 0x5265C4u);
    ctx->pc = 0x5265C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5265BCu;
            // 0x5265c0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EA820u;
    if (runtime->hasFunction(0x4EA820u)) {
        auto targetFn = runtime->lookupFunction(0x4EA820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5265C4u; }
        if (ctx->pc != 0x5265C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EA820_0x4ea820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5265C4u; }
        if (ctx->pc != 0x5265C4u) { return; }
    }
    ctx->pc = 0x5265C4u;
label_5265c4:
    // 0x5265c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x5265c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_5265c8:
    // 0x5265c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5265c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5265cc:
    // 0x5265cc: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x5265ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_5265d0:
    // 0x5265d0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x5265d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_5265d4:
    // 0x5265d4: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_5265d8:
    if (ctx->pc == 0x5265D8u) {
        ctx->pc = 0x5265D8u;
            // 0x5265d8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x5265DCu;
        goto label_5265dc;
    }
    ctx->pc = 0x5265D4u;
    {
        const bool branch_taken_0x5265d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5265d4) {
            ctx->pc = 0x5265D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5265D4u;
            // 0x5265d8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5265A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5265a4;
        }
    }
    ctx->pc = 0x5265DCu;
label_5265dc:
    // 0x5265dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5265dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5265e0:
    // 0x5265e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5265e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5265e4:
    // 0x5265e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5265e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5265e8:
    // 0x5265e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5265e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5265ec:
    // 0x5265ec: 0x3e00008  jr          $ra
label_5265f0:
    if (ctx->pc == 0x5265F0u) {
        ctx->pc = 0x5265F0u;
            // 0x5265f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x5265F4u;
        goto label_5265f4;
    }
    ctx->pc = 0x5265ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5265F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5265ECu;
            // 0x5265f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5265F4u;
label_5265f4:
    // 0x5265f4: 0x0  nop
    ctx->pc = 0x5265f4u;
    // NOP
label_5265f8:
    // 0x5265f8: 0x0  nop
    ctx->pc = 0x5265f8u;
    // NOP
label_5265fc:
    // 0x5265fc: 0x0  nop
    ctx->pc = 0x5265fcu;
    // NOP
label_526600:
    // 0x526600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x526600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_526604:
    // 0x526604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x526604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_526608:
    // 0x526608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x526608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52660c:
    // 0x52660c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_526610:
    // 0x526610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x526610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_526614:
    // 0x526614: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_526618:
    if (ctx->pc == 0x526618u) {
        ctx->pc = 0x526618u;
            // 0x526618: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52661Cu;
        goto label_52661c;
    }
    ctx->pc = 0x526614u;
    {
        const bool branch_taken_0x526614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x526618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526614u;
            // 0x526618: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x526614) {
            ctx->pc = 0x526648u;
            goto label_526648;
        }
    }
    ctx->pc = 0x52661Cu;
label_52661c:
    // 0x52661c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_526620:
    // 0x526620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x526620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_526624:
    // 0x526624: 0x244263e0  addiu       $v0, $v0, 0x63E0
    ctx->pc = 0x526624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25568));
label_526628:
    // 0x526628: 0xc13ac6c  jal         func_4EB1B0
label_52662c:
    if (ctx->pc == 0x52662Cu) {
        ctx->pc = 0x52662Cu;
            // 0x52662c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x526630u;
        goto label_526630;
    }
    ctx->pc = 0x526628u;
    SET_GPR_U32(ctx, 31, 0x526630u);
    ctx->pc = 0x52662Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526628u;
            // 0x52662c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EB1B0u;
    if (runtime->hasFunction(0x4EB1B0u)) {
        auto targetFn = runtime->lookupFunction(0x4EB1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526630u; }
        if (ctx->pc != 0x526630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EB1B0_0x4eb1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526630u; }
        if (ctx->pc != 0x526630u) { return; }
    }
    ctx->pc = 0x526630u;
label_526630:
    // 0x526630: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x526630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_526634:
    // 0x526634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x526634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_526638:
    // 0x526638: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52663c:
    if (ctx->pc == 0x52663Cu) {
        ctx->pc = 0x52663Cu;
            // 0x52663c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526640u;
        goto label_526640;
    }
    ctx->pc = 0x526638u;
    {
        const bool branch_taken_0x526638 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x526638) {
            ctx->pc = 0x52663Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526638u;
            // 0x52663c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52664Cu;
            goto label_52664c;
        }
    }
    ctx->pc = 0x526640u;
label_526640:
    // 0x526640: 0xc0400a8  jal         func_1002A0
label_526644:
    if (ctx->pc == 0x526644u) {
        ctx->pc = 0x526644u;
            // 0x526644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526648u;
        goto label_526648;
    }
    ctx->pc = 0x526640u;
    SET_GPR_U32(ctx, 31, 0x526648u);
    ctx->pc = 0x526644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526640u;
            // 0x526644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526648u; }
        if (ctx->pc != 0x526648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526648u; }
        if (ctx->pc != 0x526648u) { return; }
    }
    ctx->pc = 0x526648u;
label_526648:
    // 0x526648: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x526648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52664c:
    // 0x52664c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52664cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_526650:
    // 0x526650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x526650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_526654:
    // 0x526654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_526658:
    // 0x526658: 0x3e00008  jr          $ra
label_52665c:
    if (ctx->pc == 0x52665Cu) {
        ctx->pc = 0x52665Cu;
            // 0x52665c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x526660u;
        goto label_fallthrough_0x526658;
    }
    ctx->pc = 0x526658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52665Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526658u;
            // 0x52665c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x526658:
    ctx->pc = 0x526660u;
}
