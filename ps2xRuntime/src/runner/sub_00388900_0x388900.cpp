#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00388900
// Address: 0x388900 - 0x389410
void sub_00388900_0x388900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388900_0x388900");
#endif

    switch (ctx->pc) {
        case 0x388900u: goto label_388900;
        case 0x388904u: goto label_388904;
        case 0x388908u: goto label_388908;
        case 0x38890cu: goto label_38890c;
        case 0x388910u: goto label_388910;
        case 0x388914u: goto label_388914;
        case 0x388918u: goto label_388918;
        case 0x38891cu: goto label_38891c;
        case 0x388920u: goto label_388920;
        case 0x388924u: goto label_388924;
        case 0x388928u: goto label_388928;
        case 0x38892cu: goto label_38892c;
        case 0x388930u: goto label_388930;
        case 0x388934u: goto label_388934;
        case 0x388938u: goto label_388938;
        case 0x38893cu: goto label_38893c;
        case 0x388940u: goto label_388940;
        case 0x388944u: goto label_388944;
        case 0x388948u: goto label_388948;
        case 0x38894cu: goto label_38894c;
        case 0x388950u: goto label_388950;
        case 0x388954u: goto label_388954;
        case 0x388958u: goto label_388958;
        case 0x38895cu: goto label_38895c;
        case 0x388960u: goto label_388960;
        case 0x388964u: goto label_388964;
        case 0x388968u: goto label_388968;
        case 0x38896cu: goto label_38896c;
        case 0x388970u: goto label_388970;
        case 0x388974u: goto label_388974;
        case 0x388978u: goto label_388978;
        case 0x38897cu: goto label_38897c;
        case 0x388980u: goto label_388980;
        case 0x388984u: goto label_388984;
        case 0x388988u: goto label_388988;
        case 0x38898cu: goto label_38898c;
        case 0x388990u: goto label_388990;
        case 0x388994u: goto label_388994;
        case 0x388998u: goto label_388998;
        case 0x38899cu: goto label_38899c;
        case 0x3889a0u: goto label_3889a0;
        case 0x3889a4u: goto label_3889a4;
        case 0x3889a8u: goto label_3889a8;
        case 0x3889acu: goto label_3889ac;
        case 0x3889b0u: goto label_3889b0;
        case 0x3889b4u: goto label_3889b4;
        case 0x3889b8u: goto label_3889b8;
        case 0x3889bcu: goto label_3889bc;
        case 0x3889c0u: goto label_3889c0;
        case 0x3889c4u: goto label_3889c4;
        case 0x3889c8u: goto label_3889c8;
        case 0x3889ccu: goto label_3889cc;
        case 0x3889d0u: goto label_3889d0;
        case 0x3889d4u: goto label_3889d4;
        case 0x3889d8u: goto label_3889d8;
        case 0x3889dcu: goto label_3889dc;
        case 0x3889e0u: goto label_3889e0;
        case 0x3889e4u: goto label_3889e4;
        case 0x3889e8u: goto label_3889e8;
        case 0x3889ecu: goto label_3889ec;
        case 0x3889f0u: goto label_3889f0;
        case 0x3889f4u: goto label_3889f4;
        case 0x3889f8u: goto label_3889f8;
        case 0x3889fcu: goto label_3889fc;
        case 0x388a00u: goto label_388a00;
        case 0x388a04u: goto label_388a04;
        case 0x388a08u: goto label_388a08;
        case 0x388a0cu: goto label_388a0c;
        case 0x388a10u: goto label_388a10;
        case 0x388a14u: goto label_388a14;
        case 0x388a18u: goto label_388a18;
        case 0x388a1cu: goto label_388a1c;
        case 0x388a20u: goto label_388a20;
        case 0x388a24u: goto label_388a24;
        case 0x388a28u: goto label_388a28;
        case 0x388a2cu: goto label_388a2c;
        case 0x388a30u: goto label_388a30;
        case 0x388a34u: goto label_388a34;
        case 0x388a38u: goto label_388a38;
        case 0x388a3cu: goto label_388a3c;
        case 0x388a40u: goto label_388a40;
        case 0x388a44u: goto label_388a44;
        case 0x388a48u: goto label_388a48;
        case 0x388a4cu: goto label_388a4c;
        case 0x388a50u: goto label_388a50;
        case 0x388a54u: goto label_388a54;
        case 0x388a58u: goto label_388a58;
        case 0x388a5cu: goto label_388a5c;
        case 0x388a60u: goto label_388a60;
        case 0x388a64u: goto label_388a64;
        case 0x388a68u: goto label_388a68;
        case 0x388a6cu: goto label_388a6c;
        case 0x388a70u: goto label_388a70;
        case 0x388a74u: goto label_388a74;
        case 0x388a78u: goto label_388a78;
        case 0x388a7cu: goto label_388a7c;
        case 0x388a80u: goto label_388a80;
        case 0x388a84u: goto label_388a84;
        case 0x388a88u: goto label_388a88;
        case 0x388a8cu: goto label_388a8c;
        case 0x388a90u: goto label_388a90;
        case 0x388a94u: goto label_388a94;
        case 0x388a98u: goto label_388a98;
        case 0x388a9cu: goto label_388a9c;
        case 0x388aa0u: goto label_388aa0;
        case 0x388aa4u: goto label_388aa4;
        case 0x388aa8u: goto label_388aa8;
        case 0x388aacu: goto label_388aac;
        case 0x388ab0u: goto label_388ab0;
        case 0x388ab4u: goto label_388ab4;
        case 0x388ab8u: goto label_388ab8;
        case 0x388abcu: goto label_388abc;
        case 0x388ac0u: goto label_388ac0;
        case 0x388ac4u: goto label_388ac4;
        case 0x388ac8u: goto label_388ac8;
        case 0x388accu: goto label_388acc;
        case 0x388ad0u: goto label_388ad0;
        case 0x388ad4u: goto label_388ad4;
        case 0x388ad8u: goto label_388ad8;
        case 0x388adcu: goto label_388adc;
        case 0x388ae0u: goto label_388ae0;
        case 0x388ae4u: goto label_388ae4;
        case 0x388ae8u: goto label_388ae8;
        case 0x388aecu: goto label_388aec;
        case 0x388af0u: goto label_388af0;
        case 0x388af4u: goto label_388af4;
        case 0x388af8u: goto label_388af8;
        case 0x388afcu: goto label_388afc;
        case 0x388b00u: goto label_388b00;
        case 0x388b04u: goto label_388b04;
        case 0x388b08u: goto label_388b08;
        case 0x388b0cu: goto label_388b0c;
        case 0x388b10u: goto label_388b10;
        case 0x388b14u: goto label_388b14;
        case 0x388b18u: goto label_388b18;
        case 0x388b1cu: goto label_388b1c;
        case 0x388b20u: goto label_388b20;
        case 0x388b24u: goto label_388b24;
        case 0x388b28u: goto label_388b28;
        case 0x388b2cu: goto label_388b2c;
        case 0x388b30u: goto label_388b30;
        case 0x388b34u: goto label_388b34;
        case 0x388b38u: goto label_388b38;
        case 0x388b3cu: goto label_388b3c;
        case 0x388b40u: goto label_388b40;
        case 0x388b44u: goto label_388b44;
        case 0x388b48u: goto label_388b48;
        case 0x388b4cu: goto label_388b4c;
        case 0x388b50u: goto label_388b50;
        case 0x388b54u: goto label_388b54;
        case 0x388b58u: goto label_388b58;
        case 0x388b5cu: goto label_388b5c;
        case 0x388b60u: goto label_388b60;
        case 0x388b64u: goto label_388b64;
        case 0x388b68u: goto label_388b68;
        case 0x388b6cu: goto label_388b6c;
        case 0x388b70u: goto label_388b70;
        case 0x388b74u: goto label_388b74;
        case 0x388b78u: goto label_388b78;
        case 0x388b7cu: goto label_388b7c;
        case 0x388b80u: goto label_388b80;
        case 0x388b84u: goto label_388b84;
        case 0x388b88u: goto label_388b88;
        case 0x388b8cu: goto label_388b8c;
        case 0x388b90u: goto label_388b90;
        case 0x388b94u: goto label_388b94;
        case 0x388b98u: goto label_388b98;
        case 0x388b9cu: goto label_388b9c;
        case 0x388ba0u: goto label_388ba0;
        case 0x388ba4u: goto label_388ba4;
        case 0x388ba8u: goto label_388ba8;
        case 0x388bacu: goto label_388bac;
        case 0x388bb0u: goto label_388bb0;
        case 0x388bb4u: goto label_388bb4;
        case 0x388bb8u: goto label_388bb8;
        case 0x388bbcu: goto label_388bbc;
        case 0x388bc0u: goto label_388bc0;
        case 0x388bc4u: goto label_388bc4;
        case 0x388bc8u: goto label_388bc8;
        case 0x388bccu: goto label_388bcc;
        case 0x388bd0u: goto label_388bd0;
        case 0x388bd4u: goto label_388bd4;
        case 0x388bd8u: goto label_388bd8;
        case 0x388bdcu: goto label_388bdc;
        case 0x388be0u: goto label_388be0;
        case 0x388be4u: goto label_388be4;
        case 0x388be8u: goto label_388be8;
        case 0x388becu: goto label_388bec;
        case 0x388bf0u: goto label_388bf0;
        case 0x388bf4u: goto label_388bf4;
        case 0x388bf8u: goto label_388bf8;
        case 0x388bfcu: goto label_388bfc;
        case 0x388c00u: goto label_388c00;
        case 0x388c04u: goto label_388c04;
        case 0x388c08u: goto label_388c08;
        case 0x388c0cu: goto label_388c0c;
        case 0x388c10u: goto label_388c10;
        case 0x388c14u: goto label_388c14;
        case 0x388c18u: goto label_388c18;
        case 0x388c1cu: goto label_388c1c;
        case 0x388c20u: goto label_388c20;
        case 0x388c24u: goto label_388c24;
        case 0x388c28u: goto label_388c28;
        case 0x388c2cu: goto label_388c2c;
        case 0x388c30u: goto label_388c30;
        case 0x388c34u: goto label_388c34;
        case 0x388c38u: goto label_388c38;
        case 0x388c3cu: goto label_388c3c;
        case 0x388c40u: goto label_388c40;
        case 0x388c44u: goto label_388c44;
        case 0x388c48u: goto label_388c48;
        case 0x388c4cu: goto label_388c4c;
        case 0x388c50u: goto label_388c50;
        case 0x388c54u: goto label_388c54;
        case 0x388c58u: goto label_388c58;
        case 0x388c5cu: goto label_388c5c;
        case 0x388c60u: goto label_388c60;
        case 0x388c64u: goto label_388c64;
        case 0x388c68u: goto label_388c68;
        case 0x388c6cu: goto label_388c6c;
        case 0x388c70u: goto label_388c70;
        case 0x388c74u: goto label_388c74;
        case 0x388c78u: goto label_388c78;
        case 0x388c7cu: goto label_388c7c;
        case 0x388c80u: goto label_388c80;
        case 0x388c84u: goto label_388c84;
        case 0x388c88u: goto label_388c88;
        case 0x388c8cu: goto label_388c8c;
        case 0x388c90u: goto label_388c90;
        case 0x388c94u: goto label_388c94;
        case 0x388c98u: goto label_388c98;
        case 0x388c9cu: goto label_388c9c;
        case 0x388ca0u: goto label_388ca0;
        case 0x388ca4u: goto label_388ca4;
        case 0x388ca8u: goto label_388ca8;
        case 0x388cacu: goto label_388cac;
        case 0x388cb0u: goto label_388cb0;
        case 0x388cb4u: goto label_388cb4;
        case 0x388cb8u: goto label_388cb8;
        case 0x388cbcu: goto label_388cbc;
        case 0x388cc0u: goto label_388cc0;
        case 0x388cc4u: goto label_388cc4;
        case 0x388cc8u: goto label_388cc8;
        case 0x388cccu: goto label_388ccc;
        case 0x388cd0u: goto label_388cd0;
        case 0x388cd4u: goto label_388cd4;
        case 0x388cd8u: goto label_388cd8;
        case 0x388cdcu: goto label_388cdc;
        case 0x388ce0u: goto label_388ce0;
        case 0x388ce4u: goto label_388ce4;
        case 0x388ce8u: goto label_388ce8;
        case 0x388cecu: goto label_388cec;
        case 0x388cf0u: goto label_388cf0;
        case 0x388cf4u: goto label_388cf4;
        case 0x388cf8u: goto label_388cf8;
        case 0x388cfcu: goto label_388cfc;
        case 0x388d00u: goto label_388d00;
        case 0x388d04u: goto label_388d04;
        case 0x388d08u: goto label_388d08;
        case 0x388d0cu: goto label_388d0c;
        case 0x388d10u: goto label_388d10;
        case 0x388d14u: goto label_388d14;
        case 0x388d18u: goto label_388d18;
        case 0x388d1cu: goto label_388d1c;
        case 0x388d20u: goto label_388d20;
        case 0x388d24u: goto label_388d24;
        case 0x388d28u: goto label_388d28;
        case 0x388d2cu: goto label_388d2c;
        case 0x388d30u: goto label_388d30;
        case 0x388d34u: goto label_388d34;
        case 0x388d38u: goto label_388d38;
        case 0x388d3cu: goto label_388d3c;
        case 0x388d40u: goto label_388d40;
        case 0x388d44u: goto label_388d44;
        case 0x388d48u: goto label_388d48;
        case 0x388d4cu: goto label_388d4c;
        case 0x388d50u: goto label_388d50;
        case 0x388d54u: goto label_388d54;
        case 0x388d58u: goto label_388d58;
        case 0x388d5cu: goto label_388d5c;
        case 0x388d60u: goto label_388d60;
        case 0x388d64u: goto label_388d64;
        case 0x388d68u: goto label_388d68;
        case 0x388d6cu: goto label_388d6c;
        case 0x388d70u: goto label_388d70;
        case 0x388d74u: goto label_388d74;
        case 0x388d78u: goto label_388d78;
        case 0x388d7cu: goto label_388d7c;
        case 0x388d80u: goto label_388d80;
        case 0x388d84u: goto label_388d84;
        case 0x388d88u: goto label_388d88;
        case 0x388d8cu: goto label_388d8c;
        case 0x388d90u: goto label_388d90;
        case 0x388d94u: goto label_388d94;
        case 0x388d98u: goto label_388d98;
        case 0x388d9cu: goto label_388d9c;
        case 0x388da0u: goto label_388da0;
        case 0x388da4u: goto label_388da4;
        case 0x388da8u: goto label_388da8;
        case 0x388dacu: goto label_388dac;
        case 0x388db0u: goto label_388db0;
        case 0x388db4u: goto label_388db4;
        case 0x388db8u: goto label_388db8;
        case 0x388dbcu: goto label_388dbc;
        case 0x388dc0u: goto label_388dc0;
        case 0x388dc4u: goto label_388dc4;
        case 0x388dc8u: goto label_388dc8;
        case 0x388dccu: goto label_388dcc;
        case 0x388dd0u: goto label_388dd0;
        case 0x388dd4u: goto label_388dd4;
        case 0x388dd8u: goto label_388dd8;
        case 0x388ddcu: goto label_388ddc;
        case 0x388de0u: goto label_388de0;
        case 0x388de4u: goto label_388de4;
        case 0x388de8u: goto label_388de8;
        case 0x388decu: goto label_388dec;
        case 0x388df0u: goto label_388df0;
        case 0x388df4u: goto label_388df4;
        case 0x388df8u: goto label_388df8;
        case 0x388dfcu: goto label_388dfc;
        case 0x388e00u: goto label_388e00;
        case 0x388e04u: goto label_388e04;
        case 0x388e08u: goto label_388e08;
        case 0x388e0cu: goto label_388e0c;
        case 0x388e10u: goto label_388e10;
        case 0x388e14u: goto label_388e14;
        case 0x388e18u: goto label_388e18;
        case 0x388e1cu: goto label_388e1c;
        case 0x388e20u: goto label_388e20;
        case 0x388e24u: goto label_388e24;
        case 0x388e28u: goto label_388e28;
        case 0x388e2cu: goto label_388e2c;
        case 0x388e30u: goto label_388e30;
        case 0x388e34u: goto label_388e34;
        case 0x388e38u: goto label_388e38;
        case 0x388e3cu: goto label_388e3c;
        case 0x388e40u: goto label_388e40;
        case 0x388e44u: goto label_388e44;
        case 0x388e48u: goto label_388e48;
        case 0x388e4cu: goto label_388e4c;
        case 0x388e50u: goto label_388e50;
        case 0x388e54u: goto label_388e54;
        case 0x388e58u: goto label_388e58;
        case 0x388e5cu: goto label_388e5c;
        case 0x388e60u: goto label_388e60;
        case 0x388e64u: goto label_388e64;
        case 0x388e68u: goto label_388e68;
        case 0x388e6cu: goto label_388e6c;
        case 0x388e70u: goto label_388e70;
        case 0x388e74u: goto label_388e74;
        case 0x388e78u: goto label_388e78;
        case 0x388e7cu: goto label_388e7c;
        case 0x388e80u: goto label_388e80;
        case 0x388e84u: goto label_388e84;
        case 0x388e88u: goto label_388e88;
        case 0x388e8cu: goto label_388e8c;
        case 0x388e90u: goto label_388e90;
        case 0x388e94u: goto label_388e94;
        case 0x388e98u: goto label_388e98;
        case 0x388e9cu: goto label_388e9c;
        case 0x388ea0u: goto label_388ea0;
        case 0x388ea4u: goto label_388ea4;
        case 0x388ea8u: goto label_388ea8;
        case 0x388eacu: goto label_388eac;
        case 0x388eb0u: goto label_388eb0;
        case 0x388eb4u: goto label_388eb4;
        case 0x388eb8u: goto label_388eb8;
        case 0x388ebcu: goto label_388ebc;
        case 0x388ec0u: goto label_388ec0;
        case 0x388ec4u: goto label_388ec4;
        case 0x388ec8u: goto label_388ec8;
        case 0x388eccu: goto label_388ecc;
        case 0x388ed0u: goto label_388ed0;
        case 0x388ed4u: goto label_388ed4;
        case 0x388ed8u: goto label_388ed8;
        case 0x388edcu: goto label_388edc;
        case 0x388ee0u: goto label_388ee0;
        case 0x388ee4u: goto label_388ee4;
        case 0x388ee8u: goto label_388ee8;
        case 0x388eecu: goto label_388eec;
        case 0x388ef0u: goto label_388ef0;
        case 0x388ef4u: goto label_388ef4;
        case 0x388ef8u: goto label_388ef8;
        case 0x388efcu: goto label_388efc;
        case 0x388f00u: goto label_388f00;
        case 0x388f04u: goto label_388f04;
        case 0x388f08u: goto label_388f08;
        case 0x388f0cu: goto label_388f0c;
        case 0x388f10u: goto label_388f10;
        case 0x388f14u: goto label_388f14;
        case 0x388f18u: goto label_388f18;
        case 0x388f1cu: goto label_388f1c;
        case 0x388f20u: goto label_388f20;
        case 0x388f24u: goto label_388f24;
        case 0x388f28u: goto label_388f28;
        case 0x388f2cu: goto label_388f2c;
        case 0x388f30u: goto label_388f30;
        case 0x388f34u: goto label_388f34;
        case 0x388f38u: goto label_388f38;
        case 0x388f3cu: goto label_388f3c;
        case 0x388f40u: goto label_388f40;
        case 0x388f44u: goto label_388f44;
        case 0x388f48u: goto label_388f48;
        case 0x388f4cu: goto label_388f4c;
        case 0x388f50u: goto label_388f50;
        case 0x388f54u: goto label_388f54;
        case 0x388f58u: goto label_388f58;
        case 0x388f5cu: goto label_388f5c;
        case 0x388f60u: goto label_388f60;
        case 0x388f64u: goto label_388f64;
        case 0x388f68u: goto label_388f68;
        case 0x388f6cu: goto label_388f6c;
        case 0x388f70u: goto label_388f70;
        case 0x388f74u: goto label_388f74;
        case 0x388f78u: goto label_388f78;
        case 0x388f7cu: goto label_388f7c;
        case 0x388f80u: goto label_388f80;
        case 0x388f84u: goto label_388f84;
        case 0x388f88u: goto label_388f88;
        case 0x388f8cu: goto label_388f8c;
        case 0x388f90u: goto label_388f90;
        case 0x388f94u: goto label_388f94;
        case 0x388f98u: goto label_388f98;
        case 0x388f9cu: goto label_388f9c;
        case 0x388fa0u: goto label_388fa0;
        case 0x388fa4u: goto label_388fa4;
        case 0x388fa8u: goto label_388fa8;
        case 0x388facu: goto label_388fac;
        case 0x388fb0u: goto label_388fb0;
        case 0x388fb4u: goto label_388fb4;
        case 0x388fb8u: goto label_388fb8;
        case 0x388fbcu: goto label_388fbc;
        case 0x388fc0u: goto label_388fc0;
        case 0x388fc4u: goto label_388fc4;
        case 0x388fc8u: goto label_388fc8;
        case 0x388fccu: goto label_388fcc;
        case 0x388fd0u: goto label_388fd0;
        case 0x388fd4u: goto label_388fd4;
        case 0x388fd8u: goto label_388fd8;
        case 0x388fdcu: goto label_388fdc;
        case 0x388fe0u: goto label_388fe0;
        case 0x388fe4u: goto label_388fe4;
        case 0x388fe8u: goto label_388fe8;
        case 0x388fecu: goto label_388fec;
        case 0x388ff0u: goto label_388ff0;
        case 0x388ff4u: goto label_388ff4;
        case 0x388ff8u: goto label_388ff8;
        case 0x388ffcu: goto label_388ffc;
        case 0x389000u: goto label_389000;
        case 0x389004u: goto label_389004;
        case 0x389008u: goto label_389008;
        case 0x38900cu: goto label_38900c;
        case 0x389010u: goto label_389010;
        case 0x389014u: goto label_389014;
        case 0x389018u: goto label_389018;
        case 0x38901cu: goto label_38901c;
        case 0x389020u: goto label_389020;
        case 0x389024u: goto label_389024;
        case 0x389028u: goto label_389028;
        case 0x38902cu: goto label_38902c;
        case 0x389030u: goto label_389030;
        case 0x389034u: goto label_389034;
        case 0x389038u: goto label_389038;
        case 0x38903cu: goto label_38903c;
        case 0x389040u: goto label_389040;
        case 0x389044u: goto label_389044;
        case 0x389048u: goto label_389048;
        case 0x38904cu: goto label_38904c;
        case 0x389050u: goto label_389050;
        case 0x389054u: goto label_389054;
        case 0x389058u: goto label_389058;
        case 0x38905cu: goto label_38905c;
        case 0x389060u: goto label_389060;
        case 0x389064u: goto label_389064;
        case 0x389068u: goto label_389068;
        case 0x38906cu: goto label_38906c;
        case 0x389070u: goto label_389070;
        case 0x389074u: goto label_389074;
        case 0x389078u: goto label_389078;
        case 0x38907cu: goto label_38907c;
        case 0x389080u: goto label_389080;
        case 0x389084u: goto label_389084;
        case 0x389088u: goto label_389088;
        case 0x38908cu: goto label_38908c;
        case 0x389090u: goto label_389090;
        case 0x389094u: goto label_389094;
        case 0x389098u: goto label_389098;
        case 0x38909cu: goto label_38909c;
        case 0x3890a0u: goto label_3890a0;
        case 0x3890a4u: goto label_3890a4;
        case 0x3890a8u: goto label_3890a8;
        case 0x3890acu: goto label_3890ac;
        case 0x3890b0u: goto label_3890b0;
        case 0x3890b4u: goto label_3890b4;
        case 0x3890b8u: goto label_3890b8;
        case 0x3890bcu: goto label_3890bc;
        case 0x3890c0u: goto label_3890c0;
        case 0x3890c4u: goto label_3890c4;
        case 0x3890c8u: goto label_3890c8;
        case 0x3890ccu: goto label_3890cc;
        case 0x3890d0u: goto label_3890d0;
        case 0x3890d4u: goto label_3890d4;
        case 0x3890d8u: goto label_3890d8;
        case 0x3890dcu: goto label_3890dc;
        case 0x3890e0u: goto label_3890e0;
        case 0x3890e4u: goto label_3890e4;
        case 0x3890e8u: goto label_3890e8;
        case 0x3890ecu: goto label_3890ec;
        case 0x3890f0u: goto label_3890f0;
        case 0x3890f4u: goto label_3890f4;
        case 0x3890f8u: goto label_3890f8;
        case 0x3890fcu: goto label_3890fc;
        case 0x389100u: goto label_389100;
        case 0x389104u: goto label_389104;
        case 0x389108u: goto label_389108;
        case 0x38910cu: goto label_38910c;
        case 0x389110u: goto label_389110;
        case 0x389114u: goto label_389114;
        case 0x389118u: goto label_389118;
        case 0x38911cu: goto label_38911c;
        case 0x389120u: goto label_389120;
        case 0x389124u: goto label_389124;
        case 0x389128u: goto label_389128;
        case 0x38912cu: goto label_38912c;
        case 0x389130u: goto label_389130;
        case 0x389134u: goto label_389134;
        case 0x389138u: goto label_389138;
        case 0x38913cu: goto label_38913c;
        case 0x389140u: goto label_389140;
        case 0x389144u: goto label_389144;
        case 0x389148u: goto label_389148;
        case 0x38914cu: goto label_38914c;
        case 0x389150u: goto label_389150;
        case 0x389154u: goto label_389154;
        case 0x389158u: goto label_389158;
        case 0x38915cu: goto label_38915c;
        case 0x389160u: goto label_389160;
        case 0x389164u: goto label_389164;
        case 0x389168u: goto label_389168;
        case 0x38916cu: goto label_38916c;
        case 0x389170u: goto label_389170;
        case 0x389174u: goto label_389174;
        case 0x389178u: goto label_389178;
        case 0x38917cu: goto label_38917c;
        case 0x389180u: goto label_389180;
        case 0x389184u: goto label_389184;
        case 0x389188u: goto label_389188;
        case 0x38918cu: goto label_38918c;
        case 0x389190u: goto label_389190;
        case 0x389194u: goto label_389194;
        case 0x389198u: goto label_389198;
        case 0x38919cu: goto label_38919c;
        case 0x3891a0u: goto label_3891a0;
        case 0x3891a4u: goto label_3891a4;
        case 0x3891a8u: goto label_3891a8;
        case 0x3891acu: goto label_3891ac;
        case 0x3891b0u: goto label_3891b0;
        case 0x3891b4u: goto label_3891b4;
        case 0x3891b8u: goto label_3891b8;
        case 0x3891bcu: goto label_3891bc;
        case 0x3891c0u: goto label_3891c0;
        case 0x3891c4u: goto label_3891c4;
        case 0x3891c8u: goto label_3891c8;
        case 0x3891ccu: goto label_3891cc;
        case 0x3891d0u: goto label_3891d0;
        case 0x3891d4u: goto label_3891d4;
        case 0x3891d8u: goto label_3891d8;
        case 0x3891dcu: goto label_3891dc;
        case 0x3891e0u: goto label_3891e0;
        case 0x3891e4u: goto label_3891e4;
        case 0x3891e8u: goto label_3891e8;
        case 0x3891ecu: goto label_3891ec;
        case 0x3891f0u: goto label_3891f0;
        case 0x3891f4u: goto label_3891f4;
        case 0x3891f8u: goto label_3891f8;
        case 0x3891fcu: goto label_3891fc;
        case 0x389200u: goto label_389200;
        case 0x389204u: goto label_389204;
        case 0x389208u: goto label_389208;
        case 0x38920cu: goto label_38920c;
        case 0x389210u: goto label_389210;
        case 0x389214u: goto label_389214;
        case 0x389218u: goto label_389218;
        case 0x38921cu: goto label_38921c;
        case 0x389220u: goto label_389220;
        case 0x389224u: goto label_389224;
        case 0x389228u: goto label_389228;
        case 0x38922cu: goto label_38922c;
        case 0x389230u: goto label_389230;
        case 0x389234u: goto label_389234;
        case 0x389238u: goto label_389238;
        case 0x38923cu: goto label_38923c;
        case 0x389240u: goto label_389240;
        case 0x389244u: goto label_389244;
        case 0x389248u: goto label_389248;
        case 0x38924cu: goto label_38924c;
        case 0x389250u: goto label_389250;
        case 0x389254u: goto label_389254;
        case 0x389258u: goto label_389258;
        case 0x38925cu: goto label_38925c;
        case 0x389260u: goto label_389260;
        case 0x389264u: goto label_389264;
        case 0x389268u: goto label_389268;
        case 0x38926cu: goto label_38926c;
        case 0x389270u: goto label_389270;
        case 0x389274u: goto label_389274;
        case 0x389278u: goto label_389278;
        case 0x38927cu: goto label_38927c;
        case 0x389280u: goto label_389280;
        case 0x389284u: goto label_389284;
        case 0x389288u: goto label_389288;
        case 0x38928cu: goto label_38928c;
        case 0x389290u: goto label_389290;
        case 0x389294u: goto label_389294;
        case 0x389298u: goto label_389298;
        case 0x38929cu: goto label_38929c;
        case 0x3892a0u: goto label_3892a0;
        case 0x3892a4u: goto label_3892a4;
        case 0x3892a8u: goto label_3892a8;
        case 0x3892acu: goto label_3892ac;
        case 0x3892b0u: goto label_3892b0;
        case 0x3892b4u: goto label_3892b4;
        case 0x3892b8u: goto label_3892b8;
        case 0x3892bcu: goto label_3892bc;
        case 0x3892c0u: goto label_3892c0;
        case 0x3892c4u: goto label_3892c4;
        case 0x3892c8u: goto label_3892c8;
        case 0x3892ccu: goto label_3892cc;
        case 0x3892d0u: goto label_3892d0;
        case 0x3892d4u: goto label_3892d4;
        case 0x3892d8u: goto label_3892d8;
        case 0x3892dcu: goto label_3892dc;
        case 0x3892e0u: goto label_3892e0;
        case 0x3892e4u: goto label_3892e4;
        case 0x3892e8u: goto label_3892e8;
        case 0x3892ecu: goto label_3892ec;
        case 0x3892f0u: goto label_3892f0;
        case 0x3892f4u: goto label_3892f4;
        case 0x3892f8u: goto label_3892f8;
        case 0x3892fcu: goto label_3892fc;
        case 0x389300u: goto label_389300;
        case 0x389304u: goto label_389304;
        case 0x389308u: goto label_389308;
        case 0x38930cu: goto label_38930c;
        case 0x389310u: goto label_389310;
        case 0x389314u: goto label_389314;
        case 0x389318u: goto label_389318;
        case 0x38931cu: goto label_38931c;
        case 0x389320u: goto label_389320;
        case 0x389324u: goto label_389324;
        case 0x389328u: goto label_389328;
        case 0x38932cu: goto label_38932c;
        case 0x389330u: goto label_389330;
        case 0x389334u: goto label_389334;
        case 0x389338u: goto label_389338;
        case 0x38933cu: goto label_38933c;
        case 0x389340u: goto label_389340;
        case 0x389344u: goto label_389344;
        case 0x389348u: goto label_389348;
        case 0x38934cu: goto label_38934c;
        case 0x389350u: goto label_389350;
        case 0x389354u: goto label_389354;
        case 0x389358u: goto label_389358;
        case 0x38935cu: goto label_38935c;
        case 0x389360u: goto label_389360;
        case 0x389364u: goto label_389364;
        case 0x389368u: goto label_389368;
        case 0x38936cu: goto label_38936c;
        case 0x389370u: goto label_389370;
        case 0x389374u: goto label_389374;
        case 0x389378u: goto label_389378;
        case 0x38937cu: goto label_38937c;
        case 0x389380u: goto label_389380;
        case 0x389384u: goto label_389384;
        case 0x389388u: goto label_389388;
        case 0x38938cu: goto label_38938c;
        case 0x389390u: goto label_389390;
        case 0x389394u: goto label_389394;
        case 0x389398u: goto label_389398;
        case 0x38939cu: goto label_38939c;
        case 0x3893a0u: goto label_3893a0;
        case 0x3893a4u: goto label_3893a4;
        case 0x3893a8u: goto label_3893a8;
        case 0x3893acu: goto label_3893ac;
        case 0x3893b0u: goto label_3893b0;
        case 0x3893b4u: goto label_3893b4;
        case 0x3893b8u: goto label_3893b8;
        case 0x3893bcu: goto label_3893bc;
        case 0x3893c0u: goto label_3893c0;
        case 0x3893c4u: goto label_3893c4;
        case 0x3893c8u: goto label_3893c8;
        case 0x3893ccu: goto label_3893cc;
        case 0x3893d0u: goto label_3893d0;
        case 0x3893d4u: goto label_3893d4;
        case 0x3893d8u: goto label_3893d8;
        case 0x3893dcu: goto label_3893dc;
        case 0x3893e0u: goto label_3893e0;
        case 0x3893e4u: goto label_3893e4;
        case 0x3893e8u: goto label_3893e8;
        case 0x3893ecu: goto label_3893ec;
        case 0x3893f0u: goto label_3893f0;
        case 0x3893f4u: goto label_3893f4;
        case 0x3893f8u: goto label_3893f8;
        case 0x3893fcu: goto label_3893fc;
        case 0x389400u: goto label_389400;
        case 0x389404u: goto label_389404;
        case 0x389408u: goto label_389408;
        case 0x38940cu: goto label_38940c;
        default: break;
    }

    ctx->pc = 0x388900u;

label_388900:
    // 0x388900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x388900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_388904:
    // 0x388904: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x388904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_388908:
    // 0x388908: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38890c:
    // 0x38890c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x38890cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_388910:
    // 0x388910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x388910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_388914:
    // 0x388914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x388914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_388918:
    // 0x388918: 0xc4840118  lwc1        $f4, 0x118($a0)
    ctx->pc = 0x388918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_38891c:
    // 0x38891c: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x38891cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_388920:
    // 0x388920: 0xc4820114  lwc1        $f2, 0x114($a0)
    ctx->pc = 0x388920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388924:
    // 0x388924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x388924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_388928:
    // 0x388928: 0xc4800110  lwc1        $f0, 0x110($a0)
    ctx->pc = 0x388928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38892c:
    // 0x38892c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x38892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_388930:
    // 0x388930: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x388930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_388934:
    // 0x388934: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x388934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_388938:
    // 0x388938: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x388938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_38893c:
    // 0x38893c: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x38893cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_388940:
    // 0x388940: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x388940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388944:
    // 0x388944: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x388944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_388948:
    // 0x388948: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x388948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_38894c:
    // 0x38894c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x38894cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_388950:
    // 0x388950: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x388950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_388954:
    // 0x388954: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x388954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_388958:
    // 0x388958: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x388958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_38895c:
    // 0x38895c: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x38895cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_388960:
    // 0x388960: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x388960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_388964:
    // 0x388964: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x388964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
label_388968:
    // 0x388968: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x388968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_38896c:
    // 0x38896c: 0x50830037  beql        $a0, $v1, . + 4 + (0x37 << 2)
label_388970:
    if (ctx->pc == 0x388970u) {
        ctx->pc = 0x388970u;
            // 0x388970: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x388974u;
        goto label_388974;
    }
    ctx->pc = 0x38896Cu;
    {
        const bool branch_taken_0x38896c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38896c) {
            ctx->pc = 0x388970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38896Cu;
            // 0x388970: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x388A4Cu;
            goto label_388a4c;
        }
    }
    ctx->pc = 0x388974u;
label_388974:
    // 0x388974: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x388974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_388978:
    // 0x388978: 0x50830025  beql        $a0, $v1, . + 4 + (0x25 << 2)
label_38897c:
    if (ctx->pc == 0x38897Cu) {
        ctx->pc = 0x38897Cu;
            // 0x38897c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x388980u;
        goto label_388980;
    }
    ctx->pc = 0x388978u;
    {
        const bool branch_taken_0x388978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x388978) {
            ctx->pc = 0x38897Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x388978u;
            // 0x38897c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x388A10u;
            goto label_388a10;
        }
    }
    ctx->pc = 0x388980u;
label_388980:
    // 0x388980: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x388980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_388984:
    // 0x388984: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_388988:
    if (ctx->pc == 0x388988u) {
        ctx->pc = 0x38898Cu;
        goto label_38898c;
    }
    ctx->pc = 0x388984u;
    {
        const bool branch_taken_0x388984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x388984) {
            ctx->pc = 0x388A0Cu;
            goto label_388a0c;
        }
    }
    ctx->pc = 0x38898Cu;
label_38898c:
    // 0x38898c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x38898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_388990:
    // 0x388990: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_388994:
    if (ctx->pc == 0x388994u) {
        ctx->pc = 0x388994u;
            // 0x388994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x388998u;
        goto label_388998;
    }
    ctx->pc = 0x388990u;
    {
        const bool branch_taken_0x388990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x388990) {
            ctx->pc = 0x388994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x388990u;
            // 0x388994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3889A0u;
            goto label_3889a0;
        }
    }
    ctx->pc = 0x388998u;
label_388998:
    // 0x388998: 0x1000002e  b           . + 4 + (0x2E << 2)
label_38899c:
    if (ctx->pc == 0x38899Cu) {
        ctx->pc = 0x38899Cu;
            // 0x38899c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3889A0u;
        goto label_3889a0;
    }
    ctx->pc = 0x388998u;
    {
        const bool branch_taken_0x388998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38899Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388998u;
            // 0x38899c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388998) {
            ctx->pc = 0x388A54u;
            goto label_388a54;
        }
    }
    ctx->pc = 0x3889A0u;
label_3889a0:
    // 0x3889a0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3889a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3889a4:
    // 0x3889a4: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x3889a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_3889a8:
    // 0x3889a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3889a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3889ac:
    // 0x3889ac: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3889acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3889b0:
    // 0x3889b0: 0xc6020108  lwc1        $f2, 0x108($s0)
    ctx->pc = 0x3889b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3889b4:
    // 0x3889b4: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x3889b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3889b8:
    // 0x3889b8: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x3889b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3889bc:
    // 0x3889bc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3889bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3889c0:
    // 0x3889c0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3889c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3889c4:
    // 0x3889c4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3889c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3889c8:
    // 0x3889c8: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x3889c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3889cc:
    // 0x3889cc: 0xc60300fc  lwc1        $f3, 0xFC($s0)
    ctx->pc = 0x3889ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3889d0:
    // 0x3889d0: 0xc60200f8  lwc1        $f2, 0xF8($s0)
    ctx->pc = 0x3889d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3889d4:
    // 0x3889d4: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x3889d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3889d8:
    // 0x3889d8: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x3889d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3889dc:
    // 0x3889dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3889dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3889e0:
    // 0x3889e0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3889e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3889e4:
    // 0x3889e4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3889e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3889e8:
    // 0x3889e8: 0xc0892b0  jal         func_224AC0
label_3889ec:
    if (ctx->pc == 0x3889ECu) {
        ctx->pc = 0x3889ECu;
            // 0x3889ec: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x3889F0u;
        goto label_3889f0;
    }
    ctx->pc = 0x3889E8u;
    SET_GPR_U32(ctx, 31, 0x3889F0u);
    ctx->pc = 0x3889ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3889E8u;
            // 0x3889ec: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3889F0u; }
        if (ctx->pc != 0x3889F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3889F0u; }
        if (ctx->pc != 0x3889F0u) { return; }
    }
    ctx->pc = 0x3889F0u;
label_3889f0:
    // 0x3889f0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3889f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3889f4:
    // 0x3889f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3889f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3889f8:
    // 0x3889f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3889f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3889fc:
    // 0x3889fc: 0xc08914c  jal         func_224530
label_388a00:
    if (ctx->pc == 0x388A00u) {
        ctx->pc = 0x388A00u;
            // 0x388a00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388A04u;
        goto label_388a04;
    }
    ctx->pc = 0x3889FCu;
    SET_GPR_U32(ctx, 31, 0x388A04u);
    ctx->pc = 0x388A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3889FCu;
            // 0x388a00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388A04u; }
        if (ctx->pc != 0x388A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388A04u; }
        if (ctx->pc != 0x388A04u) { return; }
    }
    ctx->pc = 0x388A04u;
label_388a04:
    // 0x388a04: 0x10000012  b           . + 4 + (0x12 << 2)
label_388a08:
    if (ctx->pc == 0x388A08u) {
        ctx->pc = 0x388A0Cu;
        goto label_388a0c;
    }
    ctx->pc = 0x388A04u;
    {
        const bool branch_taken_0x388a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x388a04) {
            ctx->pc = 0x388A50u;
            goto label_388a50;
        }
    }
    ctx->pc = 0x388A0Cu;
label_388a0c:
    // 0x388a0c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x388a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388a10:
    // 0x388a10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x388a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_388a14:
    // 0x388a14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x388a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388a18:
    // 0x388a18: 0xc08914c  jal         func_224530
label_388a1c:
    if (ctx->pc == 0x388A1Cu) {
        ctx->pc = 0x388A1Cu;
            // 0x388a1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388A20u;
        goto label_388a20;
    }
    ctx->pc = 0x388A18u;
    SET_GPR_U32(ctx, 31, 0x388A20u);
    ctx->pc = 0x388A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388A18u;
            // 0x388a1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388A20u; }
        if (ctx->pc != 0x388A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388A20u; }
        if (ctx->pc != 0x388A20u) { return; }
    }
    ctx->pc = 0x388A20u;
label_388a20:
    // 0x388a20: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x388a20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_388a24:
    // 0x388a24: 0xc088b74  jal         func_222DD0
label_388a28:
    if (ctx->pc == 0x388A28u) {
        ctx->pc = 0x388A28u;
            // 0x388a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388A2Cu;
        goto label_388a2c;
    }
    ctx->pc = 0x388A24u;
    SET_GPR_U32(ctx, 31, 0x388A2Cu);
    ctx->pc = 0x388A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388A24u;
            // 0x388a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388A2Cu; }
        if (ctx->pc != 0x388A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388A2Cu; }
        if (ctx->pc != 0x388A2Cu) { return; }
    }
    ctx->pc = 0x388A2Cu;
label_388a2c:
    // 0x388a2c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x388a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_388a30:
    // 0x388a30: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x388a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_388a34:
    // 0x388a34: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x388a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_388a38:
    // 0x388a38: 0x320f809  jalr        $t9
label_388a3c:
    if (ctx->pc == 0x388A3Cu) {
        ctx->pc = 0x388A3Cu;
            // 0x388a3c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x388A40u;
        goto label_388a40;
    }
    ctx->pc = 0x388A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x388A40u);
        ctx->pc = 0x388A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388A38u;
            // 0x388a3c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x388A40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x388A40u; }
            if (ctx->pc != 0x388A40u) { return; }
        }
        }
    }
    ctx->pc = 0x388A40u;
label_388a40:
    // 0x388a40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x388a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_388a44:
    // 0x388a44: 0x10000002  b           . + 4 + (0x2 << 2)
label_388a48:
    if (ctx->pc == 0x388A48u) {
        ctx->pc = 0x388A48u;
            // 0x388a48: 0xae0300d8  sw          $v1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
        ctx->pc = 0x388A4Cu;
        goto label_388a4c;
    }
    ctx->pc = 0x388A44u;
    {
        const bool branch_taken_0x388a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388A44u;
            // 0x388a48: 0xae0300d8  sw          $v1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a44) {
            ctx->pc = 0x388A50u;
            goto label_388a50;
        }
    }
    ctx->pc = 0x388A4Cu;
label_388a4c:
    // 0x388a4c: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x388a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_388a50:
    // 0x388a50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_388a54:
    // 0x388a54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x388a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_388a58:
    // 0x388a58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x388a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_388a5c:
    // 0x388a5c: 0x3e00008  jr          $ra
label_388a60:
    if (ctx->pc == 0x388A60u) {
        ctx->pc = 0x388A60u;
            // 0x388a60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x388A64u;
        goto label_388a64;
    }
    ctx->pc = 0x388A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388A5Cu;
            // 0x388a60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x388A64u;
label_388a64:
    // 0x388a64: 0x0  nop
    ctx->pc = 0x388a64u;
    // NOP
label_388a68:
    // 0x388a68: 0x0  nop
    ctx->pc = 0x388a68u;
    // NOP
label_388a6c:
    // 0x388a6c: 0x0  nop
    ctx->pc = 0x388a6cu;
    // NOP
label_388a70:
    // 0x388a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_388a74:
    // 0x388a74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_388a78:
    // 0x388a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x388a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_388a7c:
    // 0x388a7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x388a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_388a80:
    // 0x388a80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x388a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_388a84:
    // 0x388a84: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x388a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_388a88:
    // 0x388a88: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_388a8c:
    if (ctx->pc == 0x388A8Cu) {
        ctx->pc = 0x388A8Cu;
            // 0x388a8c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x388A90u;
        goto label_388a90;
    }
    ctx->pc = 0x388A88u;
    {
        const bool branch_taken_0x388a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x388a88) {
            ctx->pc = 0x388A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x388A88u;
            // 0x388a8c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x388AA4u;
            goto label_388aa4;
        }
    }
    ctx->pc = 0x388A90u;
label_388a90:
    // 0x388a90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x388a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_388a94:
    // 0x388a94: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x388a94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_388a98:
    // 0x388a98: 0x320f809  jalr        $t9
label_388a9c:
    if (ctx->pc == 0x388A9Cu) {
        ctx->pc = 0x388A9Cu;
            // 0x388a9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x388AA0u;
        goto label_388aa0;
    }
    ctx->pc = 0x388A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x388AA0u);
        ctx->pc = 0x388A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388A98u;
            // 0x388a9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x388AA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x388AA0u; }
            if (ctx->pc != 0x388AA0u) { return; }
        }
        }
    }
    ctx->pc = 0x388AA0u;
label_388aa0:
    // 0x388aa0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x388aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_388aa4:
    // 0x388aa4: 0x8e30009c  lw          $s0, 0x9C($s1)
    ctx->pc = 0x388aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_388aa8:
    // 0x388aa8: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_388aac:
    if (ctx->pc == 0x388AACu) {
        ctx->pc = 0x388AACu;
            // 0x388aac: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x388AB0u;
        goto label_388ab0;
    }
    ctx->pc = 0x388AA8u;
    {
        const bool branch_taken_0x388aa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x388aa8) {
            ctx->pc = 0x388AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x388AA8u;
            // 0x388aac: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x388AE4u;
            goto label_388ae4;
        }
    }
    ctx->pc = 0x388AB0u;
label_388ab0:
    // 0x388ab0: 0xc04008c  jal         func_100230
label_388ab4:
    if (ctx->pc == 0x388AB4u) {
        ctx->pc = 0x388AB4u;
            // 0x388ab4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x388AB8u;
        goto label_388ab8;
    }
    ctx->pc = 0x388AB0u;
    SET_GPR_U32(ctx, 31, 0x388AB8u);
    ctx->pc = 0x388AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388AB0u;
            // 0x388ab4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388AB8u; }
        if (ctx->pc != 0x388AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388AB8u; }
        if (ctx->pc != 0x388AB8u) { return; }
    }
    ctx->pc = 0x388AB8u;
label_388ab8:
    // 0x388ab8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x388ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_388abc:
    // 0x388abc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x388abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_388ac0:
    // 0x388ac0: 0xc0407c0  jal         func_101F00
label_388ac4:
    if (ctx->pc == 0x388AC4u) {
        ctx->pc = 0x388AC4u;
            // 0x388ac4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x388AC8u;
        goto label_388ac8;
    }
    ctx->pc = 0x388AC0u;
    SET_GPR_U32(ctx, 31, 0x388AC8u);
    ctx->pc = 0x388AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388AC0u;
            // 0x388ac4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388AC8u; }
        if (ctx->pc != 0x388AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388AC8u; }
        if (ctx->pc != 0x388AC8u) { return; }
    }
    ctx->pc = 0x388AC8u;
label_388ac8:
    // 0x388ac8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x388ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_388acc:
    // 0x388acc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x388accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_388ad0:
    // 0x388ad0: 0xc0407c0  jal         func_101F00
label_388ad4:
    if (ctx->pc == 0x388AD4u) {
        ctx->pc = 0x388AD4u;
            // 0x388ad4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x388AD8u;
        goto label_388ad8;
    }
    ctx->pc = 0x388AD0u;
    SET_GPR_U32(ctx, 31, 0x388AD8u);
    ctx->pc = 0x388AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388AD0u;
            // 0x388ad4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388AD8u; }
        if (ctx->pc != 0x388AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388AD8u; }
        if (ctx->pc != 0x388AD8u) { return; }
    }
    ctx->pc = 0x388AD8u;
label_388ad8:
    // 0x388ad8: 0xc0400a8  jal         func_1002A0
label_388adc:
    if (ctx->pc == 0x388ADCu) {
        ctx->pc = 0x388ADCu;
            // 0x388adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388AE0u;
        goto label_388ae0;
    }
    ctx->pc = 0x388AD8u;
    SET_GPR_U32(ctx, 31, 0x388AE0u);
    ctx->pc = 0x388ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388AD8u;
            // 0x388adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388AE0u; }
        if (ctx->pc != 0x388AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388AE0u; }
        if (ctx->pc != 0x388AE0u) { return; }
    }
    ctx->pc = 0x388AE0u;
label_388ae0:
    // 0x388ae0: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x388ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_388ae4:
    // 0x388ae4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_388ae8:
    // 0x388ae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x388ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_388aec:
    // 0x388aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x388aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_388af0:
    // 0x388af0: 0x3e00008  jr          $ra
label_388af4:
    if (ctx->pc == 0x388AF4u) {
        ctx->pc = 0x388AF4u;
            // 0x388af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x388AF8u;
        goto label_388af8;
    }
    ctx->pc = 0x388AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388AF0u;
            // 0x388af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x388AF8u;
label_388af8:
    // 0x388af8: 0x0  nop
    ctx->pc = 0x388af8u;
    // NOP
label_388afc:
    // 0x388afc: 0x0  nop
    ctx->pc = 0x388afcu;
    // NOP
label_388b00:
    // 0x388b00: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x388b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_388b04:
    // 0x388b04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x388b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_388b08:
    // 0x388b08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x388b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_388b0c:
    // 0x388b0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x388b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_388b10:
    // 0x388b10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x388b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_388b14:
    // 0x388b14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x388b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_388b18:
    // 0x388b18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x388b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_388b1c:
    // 0x388b1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x388b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_388b20:
    // 0x388b20: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x388b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_388b24:
    // 0x388b24: 0xc0892d0  jal         func_224B40
label_388b28:
    if (ctx->pc == 0x388B28u) {
        ctx->pc = 0x388B28u;
            // 0x388b28: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x388B2Cu;
        goto label_388b2c;
    }
    ctx->pc = 0x388B24u;
    SET_GPR_U32(ctx, 31, 0x388B2Cu);
    ctx->pc = 0x388B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388B24u;
            // 0x388b28: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B2Cu; }
        if (ctx->pc != 0x388B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B2Cu; }
        if (ctx->pc != 0x388B2Cu) { return; }
    }
    ctx->pc = 0x388B2Cu;
label_388b2c:
    // 0x388b2c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x388b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_388b30:
    // 0x388b30: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x388b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_388b34:
    // 0x388b34: 0xc0b6e68  jal         func_2DB9A0
label_388b38:
    if (ctx->pc == 0x388B38u) {
        ctx->pc = 0x388B38u;
            // 0x388b38: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
        ctx->pc = 0x388B3Cu;
        goto label_388b3c;
    }
    ctx->pc = 0x388B34u;
    SET_GPR_U32(ctx, 31, 0x388B3Cu);
    ctx->pc = 0x388B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388B34u;
            // 0x388b38: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B3Cu; }
        if (ctx->pc != 0x388B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B3Cu; }
        if (ctx->pc != 0x388B3Cu) { return; }
    }
    ctx->pc = 0x388B3Cu;
label_388b3c:
    // 0x388b3c: 0xc0b6dac  jal         func_2DB6B0
label_388b40:
    if (ctx->pc == 0x388B40u) {
        ctx->pc = 0x388B40u;
            // 0x388b40: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x388B44u;
        goto label_388b44;
    }
    ctx->pc = 0x388B3Cu;
    SET_GPR_U32(ctx, 31, 0x388B44u);
    ctx->pc = 0x388B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388B3Cu;
            // 0x388b40: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B44u; }
        if (ctx->pc != 0x388B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B44u; }
        if (ctx->pc != 0x388B44u) { return; }
    }
    ctx->pc = 0x388B44u;
label_388b44:
    // 0x388b44: 0xc0cac94  jal         func_32B250
label_388b48:
    if (ctx->pc == 0x388B48u) {
        ctx->pc = 0x388B48u;
            // 0x388b48: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x388B4Cu;
        goto label_388b4c;
    }
    ctx->pc = 0x388B44u;
    SET_GPR_U32(ctx, 31, 0x388B4Cu);
    ctx->pc = 0x388B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388B44u;
            // 0x388b48: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B4Cu; }
        if (ctx->pc != 0x388B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B4Cu; }
        if (ctx->pc != 0x388B4Cu) { return; }
    }
    ctx->pc = 0x388B4Cu;
label_388b4c:
    // 0x388b4c: 0xc0cac84  jal         func_32B210
label_388b50:
    if (ctx->pc == 0x388B50u) {
        ctx->pc = 0x388B50u;
            // 0x388b50: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x388B54u;
        goto label_388b54;
    }
    ctx->pc = 0x388B4Cu;
    SET_GPR_U32(ctx, 31, 0x388B54u);
    ctx->pc = 0x388B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388B4Cu;
            // 0x388b50: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B54u; }
        if (ctx->pc != 0x388B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B54u; }
        if (ctx->pc != 0x388B54u) { return; }
    }
    ctx->pc = 0x388B54u;
label_388b54:
    // 0x388b54: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x388b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_388b58:
    // 0x388b58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x388b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_388b5c:
    // 0x388b5c: 0xc454c930  lwc1        $f20, -0x36D0($v0)
    ctx->pc = 0x388b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_388b60:
    // 0x388b60: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x388b60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_388b64:
    // 0x388b64: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x388b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_388b68:
    // 0x388b68: 0xc44dc930  lwc1        $f13, -0x36D0($v0)
    ctx->pc = 0x388b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_388b6c:
    // 0x388b6c: 0xc0a562c  jal         func_2958B0
label_388b70:
    if (ctx->pc == 0x388B70u) {
        ctx->pc = 0x388B70u;
            // 0x388b70: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x388B74u;
        goto label_388b74;
    }
    ctx->pc = 0x388B6Cu;
    SET_GPR_U32(ctx, 31, 0x388B74u);
    ctx->pc = 0x388B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388B6Cu;
            // 0x388b70: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B74u; }
        if (ctx->pc != 0x388B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388B74u; }
        if (ctx->pc != 0x388B74u) { return; }
    }
    ctx->pc = 0x388B74u;
label_388b74:
    // 0x388b74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x388b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_388b78:
    // 0x388b78: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x388b78u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_388b7c:
    // 0x388b7c: 0x8c436118  lw          $v1, 0x6118($v0)
    ctx->pc = 0x388b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24856)));
label_388b80:
    // 0x388b80: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x388b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388b84:
    // 0x388b84: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x388b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388b88:
    // 0x388b88: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x388b88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388b8c:
    // 0x388b8c: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x388b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388b90:
    // 0x388b90: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x388b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_388b94:
    // 0x388b94: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x388b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_388b98:
    // 0x388b98: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x388b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_388b9c:
    // 0x388b9c: 0x3448cccd  ori         $t0, $v0, 0xCCCD
    ctx->pc = 0x388b9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_388ba0:
    // 0x388ba0: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x388ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_388ba4:
    // 0x388ba4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x388ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_388ba8:
    // 0x388ba8: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x388ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_388bac:
    // 0x388bac: 0xafa40144  sw          $a0, 0x144($sp)
    ctx->pc = 0x388bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 4));
label_388bb0:
    // 0x388bb0: 0x34430060  ori         $v1, $v0, 0x60
    ctx->pc = 0x388bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_388bb4:
    // 0x388bb4: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x388bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_388bb8:
    // 0x388bb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x388bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_388bbc:
    // 0x388bbc: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x388bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_388bc0:
    // 0x388bc0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x388bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_388bc4:
    // 0x388bc4: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x388bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_388bc8:
    // 0x388bc8: 0xc7a70110  lwc1        $f7, 0x110($sp)
    ctx->pc = 0x388bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_388bcc:
    // 0x388bcc: 0xc7a60114  lwc1        $f6, 0x114($sp)
    ctx->pc = 0x388bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_388bd0:
    // 0x388bd0: 0xe7a201a4  swc1        $f2, 0x1A4($sp)
    ctx->pc = 0x388bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_388bd4:
    // 0x388bd4: 0xafaa01e8  sw          $t2, 0x1E8($sp)
    ctx->pc = 0x388bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 10));
label_388bd8:
    // 0x388bd8: 0xe7a101a8  swc1        $f1, 0x1A8($sp)
    ctx->pc = 0x388bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_388bdc:
    // 0x388bdc: 0xa3a901f0  sb          $t1, 0x1F0($sp)
    ctx->pc = 0x388bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 9));
label_388be0:
    // 0x388be0: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x388be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_388be4:
    // 0x388be4: 0xafa801ec  sw          $t0, 0x1EC($sp)
    ctx->pc = 0x388be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 8));
label_388be8:
    // 0x388be8: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x388be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388bec:
    // 0x388bec: 0xa3a701f2  sb          $a3, 0x1F2($sp)
    ctx->pc = 0x388becu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 498), (uint8_t)GPR_U32(ctx, 7));
label_388bf0:
    // 0x388bf0: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x388bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388bf4:
    // 0x388bf4: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x388bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_388bf8:
    // 0x388bf8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x388bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388bfc:
    // 0x388bfc: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x388bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_388c00:
    // 0x388c00: 0xe7a201b0  swc1        $f2, 0x1B0($sp)
    ctx->pc = 0x388c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_388c04:
    // 0x388c04: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x388c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_388c08:
    // 0x388c08: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x388c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_388c0c:
    // 0x388c0c: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x388c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388c10:
    // 0x388c10: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x388c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388c14:
    // 0x388c14: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x388c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388c18:
    // 0x388c18: 0xe7a201bc  swc1        $f2, 0x1BC($sp)
    ctx->pc = 0x388c18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_388c1c:
    // 0x388c1c: 0xe7a101c0  swc1        $f1, 0x1C0($sp)
    ctx->pc = 0x388c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_388c20:
    // 0x388c20: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x388c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_388c24:
    // 0x388c24: 0xc7a50118  lwc1        $f5, 0x118($sp)
    ctx->pc = 0x388c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_388c28:
    // 0x388c28: 0xc7a4011c  lwc1        $f4, 0x11C($sp)
    ctx->pc = 0x388c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_388c2c:
    // 0x388c2c: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x388c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_388c30:
    // 0x388c30: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x388c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388c34:
    // 0x388c34: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x388c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388c38:
    // 0x388c38: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x388c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388c3c:
    // 0x388c3c: 0xe7a80150  swc1        $f8, 0x150($sp)
    ctx->pc = 0x388c3cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_388c40:
    // 0x388c40: 0xe7a90154  swc1        $f9, 0x154($sp)
    ctx->pc = 0x388c40u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_388c44:
    // 0x388c44: 0xe7aa0158  swc1        $f10, 0x158($sp)
    ctx->pc = 0x388c44u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_388c48:
    // 0x388c48: 0xe7a70190  swc1        $f7, 0x190($sp)
    ctx->pc = 0x388c48u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_388c4c:
    // 0x388c4c: 0xe7a60194  swc1        $f6, 0x194($sp)
    ctx->pc = 0x388c4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_388c50:
    // 0x388c50: 0xe7a50198  swc1        $f5, 0x198($sp)
    ctx->pc = 0x388c50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_388c54:
    // 0x388c54: 0xe7a4019c  swc1        $f4, 0x19C($sp)
    ctx->pc = 0x388c54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_388c58:
    // 0x388c58: 0xe7a301a0  swc1        $f3, 0x1A0($sp)
    ctx->pc = 0x388c58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_388c5c:
    // 0x388c5c: 0xe7a201c8  swc1        $f2, 0x1C8($sp)
    ctx->pc = 0x388c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_388c60:
    // 0x388c60: 0xe7a101cc  swc1        $f1, 0x1CC($sp)
    ctx->pc = 0x388c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_388c64:
    // 0x388c64: 0xc0a7a88  jal         func_29EA20
label_388c68:
    if (ctx->pc == 0x388C68u) {
        ctx->pc = 0x388C68u;
            // 0x388c68: 0xe7a001d0  swc1        $f0, 0x1D0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
        ctx->pc = 0x388C6Cu;
        goto label_388c6c;
    }
    ctx->pc = 0x388C64u;
    SET_GPR_U32(ctx, 31, 0x388C6Cu);
    ctx->pc = 0x388C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388C64u;
            // 0x388c68: 0xe7a001d0  swc1        $f0, 0x1D0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388C6Cu; }
        if (ctx->pc != 0x388C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388C6Cu; }
        if (ctx->pc != 0x388C6Cu) { return; }
    }
    ctx->pc = 0x388C6Cu;
label_388c6c:
    // 0x388c6c: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x388c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_388c70:
    // 0x388c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x388c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388c74:
    // 0x388c74: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_388c78:
    if (ctx->pc == 0x388C78u) {
        ctx->pc = 0x388C78u;
            // 0x388c78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x388C7Cu;
        goto label_388c7c;
    }
    ctx->pc = 0x388C74u;
    {
        const bool branch_taken_0x388c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x388C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388C74u;
            // 0x388c78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c74) {
            ctx->pc = 0x388CC4u;
            goto label_388cc4;
        }
    }
    ctx->pc = 0x388C7Cu;
label_388c7c:
    // 0x388c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388c80:
    // 0x388c80: 0xc088ef4  jal         func_223BD0
label_388c84:
    if (ctx->pc == 0x388C84u) {
        ctx->pc = 0x388C84u;
            // 0x388c84: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x388C88u;
        goto label_388c88;
    }
    ctx->pc = 0x388C80u;
    SET_GPR_U32(ctx, 31, 0x388C88u);
    ctx->pc = 0x388C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388C80u;
            // 0x388c84: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388C88u; }
        if (ctx->pc != 0x388C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388C88u; }
        if (ctx->pc != 0x388C88u) { return; }
    }
    ctx->pc = 0x388C88u;
label_388c88:
    // 0x388c88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x388c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_388c8c:
    // 0x388c8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x388c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_388c90:
    // 0x388c90: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x388c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_388c94:
    // 0x388c94: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x388c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_388c98:
    // 0x388c98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x388c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_388c9c:
    // 0x388c9c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x388c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_388ca0:
    // 0x388ca0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x388ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_388ca4:
    // 0x388ca4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x388ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_388ca8:
    // 0x388ca8: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x388ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_388cac:
    // 0x388cac: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x388cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_388cb0:
    // 0x388cb0: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x388cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_388cb4:
    // 0x388cb4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x388cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_388cb8:
    // 0x388cb8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x388cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_388cbc:
    // 0x388cbc: 0xc088b38  jal         func_222CE0
label_388cc0:
    if (ctx->pc == 0x388CC0u) {
        ctx->pc = 0x388CC0u;
            // 0x388cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388CC4u;
        goto label_388cc4;
    }
    ctx->pc = 0x388CBCu;
    SET_GPR_U32(ctx, 31, 0x388CC4u);
    ctx->pc = 0x388CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388CBCu;
            // 0x388cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388CC4u; }
        if (ctx->pc != 0x388CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388CC4u; }
        if (ctx->pc != 0x388CC4u) { return; }
    }
    ctx->pc = 0x388CC4u;
label_388cc4:
    // 0x388cc4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x388cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_388cc8:
    // 0x388cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388ccc:
    // 0x388ccc: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x388cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_388cd0:
    // 0x388cd0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x388cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_388cd4:
    // 0x388cd4: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x388cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_388cd8:
    // 0x388cd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x388cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388cdc:
    // 0x388cdc: 0xc08914c  jal         func_224530
label_388ce0:
    if (ctx->pc == 0x388CE0u) {
        ctx->pc = 0x388CE0u;
            // 0x388ce0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388CE4u;
        goto label_388ce4;
    }
    ctx->pc = 0x388CDCu;
    SET_GPR_U32(ctx, 31, 0x388CE4u);
    ctx->pc = 0x388CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388CDCu;
            // 0x388ce0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388CE4u; }
        if (ctx->pc != 0x388CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388CE4u; }
        if (ctx->pc != 0x388CE4u) { return; }
    }
    ctx->pc = 0x388CE4u;
label_388ce4:
    // 0x388ce4: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x388ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388ce8:
    // 0x388ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388cec:
    // 0x388cec: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x388cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388cf0:
    // 0x388cf0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x388cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_388cf4:
    // 0x388cf4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x388cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388cf8:
    // 0x388cf8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x388cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_388cfc:
    // 0x388cfc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x388cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_388d00:
    // 0x388d00: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x388d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_388d04:
    // 0x388d04: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x388d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_388d08:
    // 0x388d08: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x388d08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_388d0c:
    // 0x388d0c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x388d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_388d10:
    // 0x388d10: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x388d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388d14:
    // 0x388d14: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x388d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388d18:
    // 0x388d18: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x388d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388d1c:
    // 0x388d1c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x388d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_388d20:
    // 0x388d20: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x388d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_388d24:
    // 0x388d24: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x388d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_388d28:
    // 0x388d28: 0xc0892b0  jal         func_224AC0
label_388d2c:
    if (ctx->pc == 0x388D2Cu) {
        ctx->pc = 0x388D2Cu;
            // 0x388d2c: 0xe7a3007c  swc1        $f3, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->pc = 0x388D30u;
        goto label_388d30;
    }
    ctx->pc = 0x388D28u;
    SET_GPR_U32(ctx, 31, 0x388D30u);
    ctx->pc = 0x388D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388D28u;
            // 0x388d2c: 0xe7a3007c  swc1        $f3, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388D30u; }
        if (ctx->pc != 0x388D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388D30u; }
        if (ctx->pc != 0x388D30u) { return; }
    }
    ctx->pc = 0x388D30u;
label_388d30:
    // 0x388d30: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x388d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_388d34:
    // 0x388d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388d38:
    // 0x388d38: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x388d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_388d3c:
    // 0x388d3c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x388d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_388d40:
    // 0x388d40: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x388d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_388d44:
    // 0x388d44: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x388d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_388d48:
    // 0x388d48: 0xc0891d8  jal         func_224760
label_388d4c:
    if (ctx->pc == 0x388D4Cu) {
        ctx->pc = 0x388D4Cu;
            // 0x388d4c: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->pc = 0x388D50u;
        goto label_388d50;
    }
    ctx->pc = 0x388D48u;
    SET_GPR_U32(ctx, 31, 0x388D50u);
    ctx->pc = 0x388D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388D48u;
            // 0x388d4c: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388D50u; }
        if (ctx->pc != 0x388D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388D50u; }
        if (ctx->pc != 0x388D50u) { return; }
    }
    ctx->pc = 0x388D50u;
label_388d50:
    // 0x388d50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x388d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_388d54:
    // 0x388d54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x388d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388d58:
    // 0x388d58: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x388d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_388d5c:
    // 0x388d5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x388d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_388d60:
    // 0x388d60: 0xc08c164  jal         func_230590
label_388d64:
    if (ctx->pc == 0x388D64u) {
        ctx->pc = 0x388D64u;
            // 0x388d64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x388D68u;
        goto label_388d68;
    }
    ctx->pc = 0x388D60u;
    SET_GPR_U32(ctx, 31, 0x388D68u);
    ctx->pc = 0x388D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388D60u;
            // 0x388d64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388D68u; }
        if (ctx->pc != 0x388D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388D68u; }
        if (ctx->pc != 0x388D68u) { return; }
    }
    ctx->pc = 0x388D68u;
label_388d68:
    // 0x388d68: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x388d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_388d6c:
    // 0x388d6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x388d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_388d70:
    // 0x388d70: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x388d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_388d74:
    // 0x388d74: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x388d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_388d78:
    // 0x388d78: 0xc0a7a88  jal         func_29EA20
label_388d7c:
    if (ctx->pc == 0x388D7Cu) {
        ctx->pc = 0x388D7Cu;
            // 0x388d7c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x388D80u;
        goto label_388d80;
    }
    ctx->pc = 0x388D78u;
    SET_GPR_U32(ctx, 31, 0x388D80u);
    ctx->pc = 0x388D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388D78u;
            // 0x388d7c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388D80u; }
        if (ctx->pc != 0x388D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388D80u; }
        if (ctx->pc != 0x388D80u) { return; }
    }
    ctx->pc = 0x388D80u;
label_388d80:
    // 0x388d80: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x388d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_388d84:
    // 0x388d84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x388d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388d88:
    // 0x388d88: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_388d8c:
    if (ctx->pc == 0x388D8Cu) {
        ctx->pc = 0x388D8Cu;
            // 0x388d8c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x388D90u;
        goto label_388d90;
    }
    ctx->pc = 0x388D88u;
    {
        const bool branch_taken_0x388d88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388D88u;
            // 0x388d8c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d88) {
            ctx->pc = 0x388DACu;
            goto label_388dac;
        }
    }
    ctx->pc = 0x388D90u;
label_388d90:
    // 0x388d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x388d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388d94:
    // 0x388d94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x388d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388d98:
    // 0x388d98: 0xc0869d0  jal         func_21A740
label_388d9c:
    if (ctx->pc == 0x388D9Cu) {
        ctx->pc = 0x388D9Cu;
            // 0x388d9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388DA0u;
        goto label_388da0;
    }
    ctx->pc = 0x388D98u;
    SET_GPR_U32(ctx, 31, 0x388DA0u);
    ctx->pc = 0x388D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388D98u;
            // 0x388d9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DA0u; }
        if (ctx->pc != 0x388DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DA0u; }
        if (ctx->pc != 0x388DA0u) { return; }
    }
    ctx->pc = 0x388DA0u;
label_388da0:
    // 0x388da0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x388da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_388da4:
    // 0x388da4: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x388da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_388da8:
    // 0x388da8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x388da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_388dac:
    // 0x388dac: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x388dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_388db0:
    // 0x388db0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x388db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_388db4:
    // 0x388db4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x388db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_388db8:
    // 0x388db8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x388db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_388dbc:
    // 0x388dbc: 0xc08c650  jal         func_231940
label_388dc0:
    if (ctx->pc == 0x388DC0u) {
        ctx->pc = 0x388DC0u;
            // 0x388dc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388DC4u;
        goto label_388dc4;
    }
    ctx->pc = 0x388DBCu;
    SET_GPR_U32(ctx, 31, 0x388DC4u);
    ctx->pc = 0x388DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388DBCu;
            // 0x388dc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DC4u; }
        if (ctx->pc != 0x388DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DC4u; }
        if (ctx->pc != 0x388DC4u) { return; }
    }
    ctx->pc = 0x388DC4u;
label_388dc4:
    // 0x388dc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x388dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_388dc8:
    // 0x388dc8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x388dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_388dcc:
    // 0x388dcc: 0x8c426118  lw          $v0, 0x6118($v0)
    ctx->pc = 0x388dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24856)));
label_388dd0:
    // 0x388dd0: 0x8c50009c  lw          $s0, 0x9C($v0)
    ctx->pc = 0x388dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_388dd4:
    // 0x388dd4: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x388dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_388dd8:
    // 0x388dd8: 0xc0b6e68  jal         func_2DB9A0
label_388ddc:
    if (ctx->pc == 0x388DDCu) {
        ctx->pc = 0x388DDCu;
            // 0x388ddc: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x388DE0u;
        goto label_388de0;
    }
    ctx->pc = 0x388DD8u;
    SET_GPR_U32(ctx, 31, 0x388DE0u);
    ctx->pc = 0x388DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388DD8u;
            // 0x388ddc: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DE0u; }
        if (ctx->pc != 0x388DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DE0u; }
        if (ctx->pc != 0x388DE0u) { return; }
    }
    ctx->pc = 0x388DE0u;
label_388de0:
    // 0x388de0: 0xc0b6dac  jal         func_2DB6B0
label_388de4:
    if (ctx->pc == 0x388DE4u) {
        ctx->pc = 0x388DE4u;
            // 0x388de4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x388DE8u;
        goto label_388de8;
    }
    ctx->pc = 0x388DE0u;
    SET_GPR_U32(ctx, 31, 0x388DE8u);
    ctx->pc = 0x388DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388DE0u;
            // 0x388de4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DE8u; }
        if (ctx->pc != 0x388DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DE8u; }
        if (ctx->pc != 0x388DE8u) { return; }
    }
    ctx->pc = 0x388DE8u;
label_388de8:
    // 0x388de8: 0xc0cac94  jal         func_32B250
label_388dec:
    if (ctx->pc == 0x388DECu) {
        ctx->pc = 0x388DECu;
            // 0x388dec: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x388DF0u;
        goto label_388df0;
    }
    ctx->pc = 0x388DE8u;
    SET_GPR_U32(ctx, 31, 0x388DF0u);
    ctx->pc = 0x388DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388DE8u;
            // 0x388dec: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DF0u; }
        if (ctx->pc != 0x388DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DF0u; }
        if (ctx->pc != 0x388DF0u) { return; }
    }
    ctx->pc = 0x388DF0u;
label_388df0:
    // 0x388df0: 0xc0cac84  jal         func_32B210
label_388df4:
    if (ctx->pc == 0x388DF4u) {
        ctx->pc = 0x388DF4u;
            // 0x388df4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x388DF8u;
        goto label_388df8;
    }
    ctx->pc = 0x388DF0u;
    SET_GPR_U32(ctx, 31, 0x388DF8u);
    ctx->pc = 0x388DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388DF0u;
            // 0x388df4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DF8u; }
        if (ctx->pc != 0x388DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388DF8u; }
        if (ctx->pc != 0x388DF8u) { return; }
    }
    ctx->pc = 0x388DF8u;
label_388df8:
    // 0x388df8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x388df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_388dfc:
    // 0x388dfc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x388dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_388e00:
    // 0x388e00: 0xc0a5a68  jal         func_2969A0
label_388e04:
    if (ctx->pc == 0x388E04u) {
        ctx->pc = 0x388E04u;
            // 0x388e04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x388E08u;
        goto label_388e08;
    }
    ctx->pc = 0x388E00u;
    SET_GPR_U32(ctx, 31, 0x388E08u);
    ctx->pc = 0x388E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388E00u;
            // 0x388e04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388E08u; }
        if (ctx->pc != 0x388E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388E08u; }
        if (ctx->pc != 0x388E08u) { return; }
    }
    ctx->pc = 0x388E08u;
label_388e08:
    // 0x388e08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x388e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_388e0c:
    // 0x388e0c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x388e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_388e10:
    // 0x388e10: 0x8c436118  lw          $v1, 0x6118($v0)
    ctx->pc = 0x388e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24856)));
label_388e14:
    // 0x388e14: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x388e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388e18:
    // 0x388e18: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x388e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388e1c:
    // 0x388e1c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x388e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388e20:
    // 0x388e20: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x388e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_388e24:
    // 0x388e24: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x388e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_388e28:
    // 0x388e28: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x388e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_388e2c:
    // 0x388e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388e30:
    // 0x388e30: 0xe7a20198  swc1        $f2, 0x198($sp)
    ctx->pc = 0x388e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_388e34:
    // 0x388e34: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x388e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
label_388e38:
    // 0x388e38: 0xe7a1019c  swc1        $f1, 0x19C($sp)
    ctx->pc = 0x388e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_388e3c:
    // 0x388e3c: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x388e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_388e40:
    // 0x388e40: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x388e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_388e44:
    // 0x388e44: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x388e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388e48:
    // 0x388e48: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x388e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388e4c:
    // 0x388e4c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x388e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388e50:
    // 0x388e50: 0xe7a201a4  swc1        $f2, 0x1A4($sp)
    ctx->pc = 0x388e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_388e54:
    // 0x388e54: 0xe7a101a8  swc1        $f1, 0x1A8($sp)
    ctx->pc = 0x388e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_388e58:
    // 0x388e58: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x388e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_388e5c:
    // 0x388e5c: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x388e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388e60:
    // 0x388e60: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x388e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388e64:
    // 0x388e64: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x388e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388e68:
    // 0x388e68: 0xe7a201b0  swc1        $f2, 0x1B0($sp)
    ctx->pc = 0x388e68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_388e6c:
    // 0x388e6c: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x388e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_388e70:
    // 0x388e70: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x388e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_388e74:
    // 0x388e74: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x388e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388e78:
    // 0x388e78: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x388e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388e7c:
    // 0x388e7c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x388e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388e80:
    // 0x388e80: 0xe7a201bc  swc1        $f2, 0x1BC($sp)
    ctx->pc = 0x388e80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_388e84:
    // 0x388e84: 0xe7a101c0  swc1        $f1, 0x1C0($sp)
    ctx->pc = 0x388e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_388e88:
    // 0x388e88: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x388e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_388e8c:
    // 0x388e8c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x388e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_388e90:
    // 0x388e90: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x388e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_388e94:
    // 0x388e94: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x388e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388e98:
    // 0x388e98: 0xe7a40190  swc1        $f4, 0x190($sp)
    ctx->pc = 0x388e98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_388e9c:
    // 0x388e9c: 0xe7a30194  swc1        $f3, 0x194($sp)
    ctx->pc = 0x388e9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_388ea0:
    // 0x388ea0: 0xe7a201c8  swc1        $f2, 0x1C8($sp)
    ctx->pc = 0x388ea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_388ea4:
    // 0x388ea4: 0xe7a101cc  swc1        $f1, 0x1CC($sp)
    ctx->pc = 0x388ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_388ea8:
    // 0x388ea8: 0xc040180  jal         func_100600
label_388eac:
    if (ctx->pc == 0x388EACu) {
        ctx->pc = 0x388EACu;
            // 0x388eac: 0xe7a001d0  swc1        $f0, 0x1D0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
        ctx->pc = 0x388EB0u;
        goto label_388eb0;
    }
    ctx->pc = 0x388EA8u;
    SET_GPR_U32(ctx, 31, 0x388EB0u);
    ctx->pc = 0x388EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388EA8u;
            // 0x388eac: 0xe7a001d0  swc1        $f0, 0x1D0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388EB0u; }
        if (ctx->pc != 0x388EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388EB0u; }
        if (ctx->pc != 0x388EB0u) { return; }
    }
    ctx->pc = 0x388EB0u;
label_388eb0:
    // 0x388eb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x388eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388eb4:
    // 0x388eb4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_388eb8:
    if (ctx->pc == 0x388EB8u) {
        ctx->pc = 0x388EBCu;
        goto label_388ebc;
    }
    ctx->pc = 0x388EB4u;
    {
        const bool branch_taken_0x388eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x388eb4) {
            ctx->pc = 0x388F48u;
            goto label_388f48;
        }
    }
    ctx->pc = 0x388EBCu;
label_388ebc:
    // 0x388ebc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x388ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_388ec0:
    // 0x388ec0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x388ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_388ec4:
    // 0x388ec4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x388ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_388ec8:
    // 0x388ec8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x388ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_388ecc:
    // 0x388ecc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x388eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_388ed0:
    // 0x388ed0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x388ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_388ed4:
    // 0x388ed4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x388ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_388ed8:
    // 0x388ed8: 0xc040138  jal         func_1004E0
label_388edc:
    if (ctx->pc == 0x388EDCu) {
        ctx->pc = 0x388EDCu;
            // 0x388edc: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x388EE0u;
        goto label_388ee0;
    }
    ctx->pc = 0x388ED8u;
    SET_GPR_U32(ctx, 31, 0x388EE0u);
    ctx->pc = 0x388EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388ED8u;
            // 0x388edc: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388EE0u; }
        if (ctx->pc != 0x388EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388EE0u; }
        if (ctx->pc != 0x388EE0u) { return; }
    }
    ctx->pc = 0x388EE0u;
label_388ee0:
    // 0x388ee0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x388ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_388ee4:
    // 0x388ee4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x388ee4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388ee8:
    // 0x388ee8: 0xc040138  jal         func_1004E0
label_388eec:
    if (ctx->pc == 0x388EECu) {
        ctx->pc = 0x388EECu;
            // 0x388eec: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->pc = 0x388EF0u;
        goto label_388ef0;
    }
    ctx->pc = 0x388EE8u;
    SET_GPR_U32(ctx, 31, 0x388EF0u);
    ctx->pc = 0x388EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388EE8u;
            // 0x388eec: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388EF0u; }
        if (ctx->pc != 0x388EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388EF0u; }
        if (ctx->pc != 0x388EF0u) { return; }
    }
    ctx->pc = 0x388EF0u;
label_388ef0:
    // 0x388ef0: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x388ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_388ef4:
    // 0x388ef4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x388ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_388ef8:
    // 0x388ef8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x388ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388efc:
    // 0x388efc: 0x24a58ff0  addiu       $a1, $a1, -0x7010
    ctx->pc = 0x388efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938608));
label_388f00:
    // 0x388f00: 0x24c6b390  addiu       $a2, $a2, -0x4C70
    ctx->pc = 0x388f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947728));
label_388f04:
    // 0x388f04: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x388f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_388f08:
    // 0x388f08: 0xc040840  jal         func_102100
label_388f0c:
    if (ctx->pc == 0x388F0Cu) {
        ctx->pc = 0x388F0Cu;
            // 0x388f0c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x388F10u;
        goto label_388f10;
    }
    ctx->pc = 0x388F08u;
    SET_GPR_U32(ctx, 31, 0x388F10u);
    ctx->pc = 0x388F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388F08u;
            // 0x388f0c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388F10u; }
        if (ctx->pc != 0x388F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388F10u; }
        if (ctx->pc != 0x388F10u) { return; }
    }
    ctx->pc = 0x388F10u;
label_388f10:
    // 0x388f10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x388f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_388f14:
    // 0x388f14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x388f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388f18:
    // 0x388f18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x388f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388f1c:
    // 0x388f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x388f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_388f20:
    // 0x388f20: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x388f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_388f24:
    // 0x388f24: 0xc0e7f1c  jal         func_39FC70
label_388f28:
    if (ctx->pc == 0x388F28u) {
        ctx->pc = 0x388F28u;
            // 0x388f28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x388F2Cu;
        goto label_388f2c;
    }
    ctx->pc = 0x388F24u;
    SET_GPR_U32(ctx, 31, 0x388F2Cu);
    ctx->pc = 0x388F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388F24u;
            // 0x388f28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39FC70u;
    if (runtime->hasFunction(0x39FC70u)) {
        auto targetFn = runtime->lookupFunction(0x39FC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388F2Cu; }
        if (ctx->pc != 0x388F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039FC70_0x39fc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388F2Cu; }
        if (ctx->pc != 0x388F2Cu) { return; }
    }
    ctx->pc = 0x388F2Cu;
label_388f2c:
    // 0x388f2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x388f2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_388f30:
    // 0x388f30: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x388f30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
label_388f34:
    // 0x388f34: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x388f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_388f38:
    // 0x388f38: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x388f38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_388f3c:
    // 0x388f3c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_388f40:
    if (ctx->pc == 0x388F40u) {
        ctx->pc = 0x388F40u;
            // 0x388f40: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x388F44u;
        goto label_388f44;
    }
    ctx->pc = 0x388F3Cu;
    {
        const bool branch_taken_0x388f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388F3Cu;
            // 0x388f40: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f3c) {
            ctx->pc = 0x388F1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_388f1c;
        }
    }
    ctx->pc = 0x388F44u;
label_388f44:
    // 0x388f44: 0x0  nop
    ctx->pc = 0x388f44u;
    // NOP
label_388f48:
    // 0x388f48: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x388f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_388f4c:
    // 0x388f4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x388f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_388f50:
    // 0x388f50: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x388f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_388f54:
    // 0x388f54: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x388f54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_388f58:
    // 0x388f58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x388f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_388f5c:
    // 0x388f5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x388f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_388f60:
    // 0x388f60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x388f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388f64:
    // 0x388f64: 0xc0e7d2c  jal         func_39F4B0
label_388f68:
    if (ctx->pc == 0x388F68u) {
        ctx->pc = 0x388F68u;
            // 0x388f68: 0x24c67f30  addiu       $a2, $a2, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32560));
        ctx->pc = 0x388F6Cu;
        goto label_388f6c;
    }
    ctx->pc = 0x388F64u;
    SET_GPR_U32(ctx, 31, 0x388F6Cu);
    ctx->pc = 0x388F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388F64u;
            // 0x388f68: 0x24c67f30  addiu       $a2, $a2, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388F6Cu; }
        if (ctx->pc != 0x388F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388F6Cu; }
        if (ctx->pc != 0x388F6Cu) { return; }
    }
    ctx->pc = 0x388F6Cu;
label_388f6c:
    // 0x388f6c: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x388f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_388f70:
    // 0x388f70: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x388f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_388f74:
    // 0x388f74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x388f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_388f78:
    // 0x388f78: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x388f78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_388f7c:
    // 0x388f7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x388f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_388f80:
    // 0x388f80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x388f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388f84:
    // 0x388f84: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x388f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_388f88:
    // 0x388f88: 0xc0e7d2c  jal         func_39F4B0
label_388f8c:
    if (ctx->pc == 0x388F8Cu) {
        ctx->pc = 0x388F8Cu;
            // 0x388f8c: 0x24c67f30  addiu       $a2, $a2, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32560));
        ctx->pc = 0x388F90u;
        goto label_388f90;
    }
    ctx->pc = 0x388F88u;
    SET_GPR_U32(ctx, 31, 0x388F90u);
    ctx->pc = 0x388F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x388F88u;
            // 0x388f8c: 0x24c67f30  addiu       $a2, $a2, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388F90u; }
        if (ctx->pc != 0x388F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x388F90u; }
        if (ctx->pc != 0x388F90u) { return; }
    }
    ctx->pc = 0x388F90u;
label_388f90:
    // 0x388f90: 0x8e2700b0  lw          $a3, 0xB0($s1)
    ctx->pc = 0x388f90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_388f94:
    // 0x388f94: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x388f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_388f98:
    // 0x388f98: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x388f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_388f9c:
    // 0x388f9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x388f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388fa0:
    // 0x388fa0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x388fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_388fa4:
    // 0x388fa4: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x388fa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_388fa8:
    // 0x388fa8: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x388fa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
label_388fac:
    // 0x388fac: 0xae2600b0  sw          $a2, 0xB0($s1)
    ctx->pc = 0x388facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 6));
label_388fb0:
    // 0x388fb0: 0xa2250068  sb          $a1, 0x68($s1)
    ctx->pc = 0x388fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 5));
label_388fb4:
    // 0x388fb4: 0xa2250069  sb          $a1, 0x69($s1)
    ctx->pc = 0x388fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 5));
label_388fb8:
    // 0x388fb8: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x388fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
label_388fbc:
    // 0x388fbc: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x388fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_388fc0:
    // 0x388fc0: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x388fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_388fc4:
    // 0x388fc4: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x388fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_388fc8:
    // 0x388fc8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x388fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_388fcc:
    // 0x388fcc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x388fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_388fd0:
    // 0x388fd0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x388fd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_388fd4:
    // 0x388fd4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x388fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_388fd8:
    // 0x388fd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x388fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_388fdc:
    // 0x388fdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x388fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_388fe0:
    // 0x388fe0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x388fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_388fe4:
    // 0x388fe4: 0x3e00008  jr          $ra
label_388fe8:
    if (ctx->pc == 0x388FE8u) {
        ctx->pc = 0x388FE8u;
            // 0x388fe8: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x388FECu;
        goto label_388fec;
    }
    ctx->pc = 0x388FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x388FE4u;
            // 0x388fe8: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x388FECu;
label_388fec:
    // 0x388fec: 0x0  nop
    ctx->pc = 0x388fecu;
    // NOP
label_388ff0:
    // 0x388ff0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x388ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_388ff4:
    // 0x388ff4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x388ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_388ff8:
    // 0x388ff8: 0x24428630  addiu       $v0, $v0, -0x79D0
    ctx->pc = 0x388ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936112));
label_388ffc:
    // 0x388ffc: 0x24638660  addiu       $v1, $v1, -0x79A0
    ctx->pc = 0x388ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936160));
label_389000:
    // 0x389000: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x389000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
label_389004:
    // 0x389004: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x389004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_389008:
    // 0x389008: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x389008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_38900c:
    // 0x38900c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x38900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_389010:
    // 0x389010: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x389010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_389014:
    // 0x389014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x389014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389018:
    // 0x389018: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x389018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_38901c:
    // 0x38901c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x38901cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_389020:
    // 0x389020: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x389020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389024:
    // 0x389024: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x389024u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
label_389028:
    // 0x389028: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x389028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_38902c:
    // 0x38902c: 0x3e00008  jr          $ra
label_389030:
    if (ctx->pc == 0x389030u) {
        ctx->pc = 0x389030u;
            // 0x389030: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x389034u;
        goto label_389034;
    }
    ctx->pc = 0x38902Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38902Cu;
            // 0x389030: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x389034u;
label_389034:
    // 0x389034: 0x0  nop
    ctx->pc = 0x389034u;
    // NOP
label_389038:
    // 0x389038: 0x0  nop
    ctx->pc = 0x389038u;
    // NOP
label_38903c:
    // 0x38903c: 0x0  nop
    ctx->pc = 0x38903cu;
    // NOP
label_389040:
    // 0x389040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x389040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_389044:
    // 0x389044: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x389044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_389048:
    // 0x389048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x389048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38904c:
    // 0x38904c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38904cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_389050:
    // 0x389050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x389050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_389054:
    // 0x389054: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x389054u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_389058:
    // 0x389058: 0x8ca40d98  lw          $a0, 0xD98($a1)
    ctx->pc = 0x389058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_38905c:
    // 0x38905c: 0x8e2302e0  lw          $v1, 0x2E0($s1)
    ctx->pc = 0x38905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
label_389060:
    // 0x389060: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x389060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389064:
    // 0x389064: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x389064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_389068:
    // 0x389068: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x389068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_38906c:
    // 0x38906c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_389070:
    if (ctx->pc == 0x389070u) {
        ctx->pc = 0x389074u;
        goto label_389074;
    }
    ctx->pc = 0x38906Cu;
    {
        const bool branch_taken_0x38906c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38906c) {
            ctx->pc = 0x3890F8u;
            goto label_3890f8;
        }
    }
    ctx->pc = 0x389074u;
label_389074:
    // 0x389074: 0x8e2302e0  lw          $v1, 0x2E0($s1)
    ctx->pc = 0x389074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
label_389078:
    // 0x389078: 0x802027  not         $a0, $a0
    ctx->pc = 0x389078u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_38907c:
    // 0x38907c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x38907cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_389080:
    // 0x389080: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_389084:
    if (ctx->pc == 0x389084u) {
        ctx->pc = 0x389084u;
            // 0x389084: 0xae2302e0  sw          $v1, 0x2E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 3));
        ctx->pc = 0x389088u;
        goto label_389088;
    }
    ctx->pc = 0x389080u;
    {
        const bool branch_taken_0x389080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389080u;
            // 0x389084: 0xae2302e0  sw          $v1, 0x2E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389080) {
            ctx->pc = 0x3890F8u;
            goto label_3890f8;
        }
    }
    ctx->pc = 0x389088u;
label_389088:
    // 0x389088: 0x922302e4  lbu         $v1, 0x2E4($s1)
    ctx->pc = 0x389088u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 740)));
label_38908c:
    // 0x38908c: 0x1465001a  bne         $v1, $a1, . + 4 + (0x1A << 2)
label_389090:
    if (ctx->pc == 0x389090u) {
        ctx->pc = 0x389094u;
        goto label_389094;
    }
    ctx->pc = 0x38908Cu;
    {
        const bool branch_taken_0x38908c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x38908c) {
            ctx->pc = 0x3890F8u;
            goto label_3890f8;
        }
    }
    ctx->pc = 0x389094u;
label_389094:
    // 0x389094: 0xa22002e4  sb          $zero, 0x2E4($s1)
    ctx->pc = 0x389094u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 740), (uint8_t)GPR_U32(ctx, 0));
label_389098:
    // 0x389098: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x389098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38909c:
    // 0x38909c: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x38909cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3890a0:
    // 0x3890a0: 0x3c03ffda  lui         $v1, 0xFFDA
    ctx->pc = 0x3890a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65498 << 16));
label_3890a4:
    // 0x3890a4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x3890a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_3890a8:
    // 0x3890a8: 0x3464ff9f  ori         $a0, $v1, 0xFF9F
    ctx->pc = 0x3890a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65439);
label_3890ac:
    // 0x3890ac: 0x34430060  ori         $v1, $v0, 0x60
    ctx->pc = 0x3890acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_3890b0:
    // 0x3890b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3890b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3890b4:
    // 0x3890b4: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x3890b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3890b8:
    // 0x3890b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3890b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3890bc:
    // 0x3890bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3890bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3890c0:
    // 0x3890c0: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x3890c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_3890c4:
    // 0x3890c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3890c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3890c8:
    // 0x3890c8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3890c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_3890cc:
    // 0x3890cc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3890ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3890d0:
    // 0x3890d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3890d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3890d4:
    // 0x3890d4: 0xc08bff0  jal         func_22FFC0
label_3890d8:
    if (ctx->pc == 0x3890D8u) {
        ctx->pc = 0x3890D8u;
            // 0x3890d8: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x3890DCu;
        goto label_3890dc;
    }
    ctx->pc = 0x3890D4u;
    SET_GPR_U32(ctx, 31, 0x3890DCu);
    ctx->pc = 0x3890D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3890D4u;
            // 0x3890d8: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3890DCu; }
        if (ctx->pc != 0x3890DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3890DCu; }
        if (ctx->pc != 0x3890DCu) { return; }
    }
    ctx->pc = 0x3890DCu;
label_3890dc:
    // 0x3890dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3890dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3890e0:
    // 0x3890e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3890e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3890e4:
    // 0x3890e4: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x3890e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_3890e8:
    // 0x3890e8: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x3890e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3890ec:
    // 0x3890ec: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_3890f0:
    if (ctx->pc == 0x3890F0u) {
        ctx->pc = 0x3890F0u;
            // 0x3890f0: 0x26310140  addiu       $s1, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->pc = 0x3890F4u;
        goto label_3890f4;
    }
    ctx->pc = 0x3890ECu;
    {
        const bool branch_taken_0x3890ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3890F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3890ECu;
            // 0x3890f0: 0x26310140  addiu       $s1, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3890ec) {
            ctx->pc = 0x38909Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38909c;
        }
    }
    ctx->pc = 0x3890F4u;
label_3890f4:
    // 0x3890f4: 0x0  nop
    ctx->pc = 0x3890f4u;
    // NOP
label_3890f8:
    // 0x3890f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3890f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3890fc:
    // 0x3890fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3890fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_389100:
    // 0x389100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x389100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_389104:
    // 0x389104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x389104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_389108:
    // 0x389108: 0x3e00008  jr          $ra
label_38910c:
    if (ctx->pc == 0x38910Cu) {
        ctx->pc = 0x38910Cu;
            // 0x38910c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x389110u;
        goto label_389110;
    }
    ctx->pc = 0x389108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389108u;
            // 0x38910c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x389110u;
label_389110:
    // 0x389110: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x389110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_389114:
    // 0x389114: 0x80e1f38  j           func_387CE0
label_389118:
    if (ctx->pc == 0x389118u) {
        ctx->pc = 0x389118u;
            // 0x389118: 0x8ca50d98  lw          $a1, 0xD98($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
        ctx->pc = 0x38911Cu;
        goto label_38911c;
    }
    ctx->pc = 0x389114u;
    ctx->pc = 0x389118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389114u;
            // 0x389118: 0x8ca50d98  lw          $a1, 0xD98($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x387CE0u;
    {
        auto targetFn = runtime->lookupFunction(0x387CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x38911Cu;
label_38911c:
    // 0x38911c: 0x0  nop
    ctx->pc = 0x38911cu;
    // NOP
label_389120:
    // 0x389120: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x389120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_389124:
    // 0x389124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x389124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_389128:
    // 0x389128: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x389128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38912c:
    // 0x38912c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38912cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389130:
    // 0x389130: 0xc0e39b4  jal         func_38E6D0
label_389134:
    if (ctx->pc == 0x389134u) {
        ctx->pc = 0x389134u;
            // 0x389134: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x389138u;
        goto label_389138;
    }
    ctx->pc = 0x389130u;
    SET_GPR_U32(ctx, 31, 0x389138u);
    ctx->pc = 0x389134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389130u;
            // 0x389134: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389138u; }
        if (ctx->pc != 0x389138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389138u; }
        if (ctx->pc != 0x389138u) { return; }
    }
    ctx->pc = 0x389138u;
label_389138:
    // 0x389138: 0xc60c0100  lwc1        $f12, 0x100($s0)
    ctx->pc = 0x389138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38913c:
    // 0x38913c: 0xc60d0104  lwc1        $f13, 0x104($s0)
    ctx->pc = 0x38913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_389140:
    // 0x389140: 0xc60e0108  lwc1        $f14, 0x108($s0)
    ctx->pc = 0x389140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_389144:
    // 0x389144: 0xc0d3f08  jal         func_34FC20
label_389148:
    if (ctx->pc == 0x389148u) {
        ctx->pc = 0x389148u;
            // 0x389148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38914Cu;
        goto label_38914c;
    }
    ctx->pc = 0x389144u;
    SET_GPR_U32(ctx, 31, 0x38914Cu);
    ctx->pc = 0x389148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389144u;
            // 0x389148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38914Cu; }
        if (ctx->pc != 0x38914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38914Cu; }
        if (ctx->pc != 0x38914Cu) { return; }
    }
    ctx->pc = 0x38914Cu;
label_38914c:
    // 0x38914c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389150:
    // 0x389150: 0xc0e1b28  jal         func_386CA0
label_389154:
    if (ctx->pc == 0x389154u) {
        ctx->pc = 0x389154u;
            // 0x389154: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x389158u;
        goto label_389158;
    }
    ctx->pc = 0x389150u;
    SET_GPR_U32(ctx, 31, 0x389158u);
    ctx->pc = 0x389154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389150u;
            // 0x389154: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389158u; }
        if (ctx->pc != 0x389158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389158u; }
        if (ctx->pc != 0x389158u) { return; }
    }
    ctx->pc = 0x389158u;
label_389158:
    // 0x389158: 0xc0e1b24  jal         func_386C90
label_38915c:
    if (ctx->pc == 0x38915Cu) {
        ctx->pc = 0x389160u;
        goto label_389160;
    }
    ctx->pc = 0x389158u;
    SET_GPR_U32(ctx, 31, 0x389160u);
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389160u; }
        if (ctx->pc != 0x389160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389160u; }
        if (ctx->pc != 0x389160u) { return; }
    }
    ctx->pc = 0x389160u;
label_389160:
    // 0x389160: 0xc0e1b20  jal         func_386C80
label_389164:
    if (ctx->pc == 0x389164u) {
        ctx->pc = 0x389164u;
            // 0x389164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x389168u;
        goto label_389168;
    }
    ctx->pc = 0x389160u;
    SET_GPR_U32(ctx, 31, 0x389168u);
    ctx->pc = 0x389164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389160u;
            // 0x389164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C80u;
    if (runtime->hasFunction(0x386C80u)) {
        auto targetFn = runtime->lookupFunction(0x386C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389168u; }
        if (ctx->pc != 0x389168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C80_0x386c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389168u; }
        if (ctx->pc != 0x389168u) { return; }
    }
    ctx->pc = 0x389168u;
label_389168:
    // 0x389168: 0xc0e1b24  jal         func_386C90
label_38916c:
    if (ctx->pc == 0x38916Cu) {
        ctx->pc = 0x38916Cu;
            // 0x38916c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x389170u;
        goto label_389170;
    }
    ctx->pc = 0x389168u;
    SET_GPR_U32(ctx, 31, 0x389170u);
    ctx->pc = 0x38916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389168u;
            // 0x38916c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389170u; }
        if (ctx->pc != 0x389170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389170u; }
        if (ctx->pc != 0x389170u) { return; }
    }
    ctx->pc = 0x389170u;
label_389170:
    // 0x389170: 0xc0e1b1c  jal         func_386C70
label_389174:
    if (ctx->pc == 0x389174u) {
        ctx->pc = 0x389174u;
            // 0x389174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x389178u;
        goto label_389178;
    }
    ctx->pc = 0x389170u;
    SET_GPR_U32(ctx, 31, 0x389178u);
    ctx->pc = 0x389174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389170u;
            // 0x389174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C70u;
    if (runtime->hasFunction(0x386C70u)) {
        auto targetFn = runtime->lookupFunction(0x386C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389178u; }
        if (ctx->pc != 0x389178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C70_0x386c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389178u; }
        if (ctx->pc != 0x389178u) { return; }
    }
    ctx->pc = 0x389178u;
label_389178:
    // 0x389178: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x389178u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_38917c:
    // 0x38917c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x38917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_389180:
    // 0x389180: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x389180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_389184:
    // 0x389184: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x389184u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_389188:
    // 0x389188: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x389188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_38918c:
    // 0x38918c: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x38918cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_389190:
    // 0x389190: 0xc0e1b24  jal         func_386C90
label_389194:
    if (ctx->pc == 0x389194u) {
        ctx->pc = 0x389194u;
            // 0x389194: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x389198u;
        goto label_389198;
    }
    ctx->pc = 0x389190u;
    SET_GPR_U32(ctx, 31, 0x389198u);
    ctx->pc = 0x389194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389190u;
            // 0x389194: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389198u; }
        if (ctx->pc != 0x389198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389198u; }
        if (ctx->pc != 0x389198u) { return; }
    }
    ctx->pc = 0x389198u;
label_389198:
    // 0x389198: 0xc0e1b1c  jal         func_386C70
label_38919c:
    if (ctx->pc == 0x38919Cu) {
        ctx->pc = 0x38919Cu;
            // 0x38919c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3891A0u;
        goto label_3891a0;
    }
    ctx->pc = 0x389198u;
    SET_GPR_U32(ctx, 31, 0x3891A0u);
    ctx->pc = 0x38919Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389198u;
            // 0x38919c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C70u;
    if (runtime->hasFunction(0x386C70u)) {
        auto targetFn = runtime->lookupFunction(0x386C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3891A0u; }
        if (ctx->pc != 0x3891A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C70_0x386c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3891A0u; }
        if (ctx->pc != 0x3891A0u) { return; }
    }
    ctx->pc = 0x3891A0u;
label_3891a0:
    // 0x3891a0: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x3891a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_3891a4:
    // 0x3891a4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x3891a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_3891a8:
    // 0x3891a8: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x3891a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
label_3891ac:
    // 0x3891ac: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x3891acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_3891b0:
    // 0x3891b0: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x3891b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_3891b4:
    // 0x3891b4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3891b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3891b8:
    // 0x3891b8: 0xc0e1b0c  jal         func_386C30
label_3891bc:
    if (ctx->pc == 0x3891BCu) {
        ctx->pc = 0x3891BCu;
            // 0x3891bc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3891C0u;
        goto label_3891c0;
    }
    ctx->pc = 0x3891B8u;
    SET_GPR_U32(ctx, 31, 0x3891C0u);
    ctx->pc = 0x3891BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3891B8u;
            // 0x3891bc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C30u;
    if (runtime->hasFunction(0x386C30u)) {
        auto targetFn = runtime->lookupFunction(0x386C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3891C0u; }
        if (ctx->pc != 0x3891C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C30_0x386c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3891C0u; }
        if (ctx->pc != 0x3891C0u) { return; }
    }
    ctx->pc = 0x3891C0u;
label_3891c0:
    // 0x3891c0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3891c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3891c4:
    // 0x3891c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3891c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3891c8:
    // 0x3891c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3891c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3891cc:
    // 0x3891cc: 0xc08914c  jal         func_224530
label_3891d0:
    if (ctx->pc == 0x3891D0u) {
        ctx->pc = 0x3891D0u;
            // 0x3891d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3891D4u;
        goto label_3891d4;
    }
    ctx->pc = 0x3891CCu;
    SET_GPR_U32(ctx, 31, 0x3891D4u);
    ctx->pc = 0x3891D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3891CCu;
            // 0x3891d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3891D4u; }
        if (ctx->pc != 0x3891D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3891D4u; }
        if (ctx->pc != 0x3891D4u) { return; }
    }
    ctx->pc = 0x3891D4u;
label_3891d4:
    // 0x3891d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3891d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3891d8:
    // 0x3891d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3891d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3891dc:
    // 0x3891dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3891dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3891e0:
    // 0x3891e0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3891e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3891e4:
    // 0x3891e4: 0xc0b6df0  jal         func_2DB7C0
label_3891e8:
    if (ctx->pc == 0x3891E8u) {
        ctx->pc = 0x3891E8u;
            // 0x3891e8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3891ECu;
        goto label_3891ec;
    }
    ctx->pc = 0x3891E4u;
    SET_GPR_U32(ctx, 31, 0x3891ECu);
    ctx->pc = 0x3891E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3891E4u;
            // 0x3891e8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3891ECu; }
        if (ctx->pc != 0x3891ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3891ECu; }
        if (ctx->pc != 0x3891ECu) { return; }
    }
    ctx->pc = 0x3891ECu;
label_3891ec:
    // 0x3891ec: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3891ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3891f0:
    // 0x3891f0: 0xc0e07f8  jal         func_381FE0
label_3891f4:
    if (ctx->pc == 0x3891F4u) {
        ctx->pc = 0x3891F4u;
            // 0x3891f4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3891F8u;
        goto label_3891f8;
    }
    ctx->pc = 0x3891F0u;
    SET_GPR_U32(ctx, 31, 0x3891F8u);
    ctx->pc = 0x3891F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3891F0u;
            // 0x3891f4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3891F8u; }
        if (ctx->pc != 0x3891F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3891F8u; }
        if (ctx->pc != 0x3891F8u) { return; }
    }
    ctx->pc = 0x3891F8u;
label_3891f8:
    // 0x3891f8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3891f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3891fc:
    // 0x3891fc: 0xc0dc3f4  jal         func_370FD0
label_389200:
    if (ctx->pc == 0x389200u) {
        ctx->pc = 0x389200u;
            // 0x389200: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x389204u;
        goto label_389204;
    }
    ctx->pc = 0x3891FCu;
    SET_GPR_U32(ctx, 31, 0x389204u);
    ctx->pc = 0x389200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3891FCu;
            // 0x389200: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389204u; }
        if (ctx->pc != 0x389204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389204u; }
        if (ctx->pc != 0x389204u) { return; }
    }
    ctx->pc = 0x389204u;
label_389204:
    // 0x389204: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x389204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_389208:
    // 0x389208: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x389208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38920c:
    // 0x38920c: 0xc0e1b08  jal         func_386C20
label_389210:
    if (ctx->pc == 0x389210u) {
        ctx->pc = 0x389210u;
            // 0x389210: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x389214u;
        goto label_389214;
    }
    ctx->pc = 0x38920Cu;
    SET_GPR_U32(ctx, 31, 0x389214u);
    ctx->pc = 0x389210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38920Cu;
            // 0x389210: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C20u;
    if (runtime->hasFunction(0x386C20u)) {
        auto targetFn = runtime->lookupFunction(0x386C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389214u; }
        if (ctx->pc != 0x389214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C20_0x386c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389214u; }
        if (ctx->pc != 0x389214u) { return; }
    }
    ctx->pc = 0x389214u;
label_389214:
    // 0x389214: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x389214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_389218:
    // 0x389218: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x389218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38921c:
    // 0x38921c: 0xc0e1b04  jal         func_386C10
label_389220:
    if (ctx->pc == 0x389220u) {
        ctx->pc = 0x389220u;
            // 0x389220: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x389224u;
        goto label_389224;
    }
    ctx->pc = 0x38921Cu;
    SET_GPR_U32(ctx, 31, 0x389224u);
    ctx->pc = 0x389220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38921Cu;
            // 0x389220: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C10u;
    if (runtime->hasFunction(0x386C10u)) {
        auto targetFn = runtime->lookupFunction(0x386C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389224u; }
        if (ctx->pc != 0x389224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C10_0x386c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389224u; }
        if (ctx->pc != 0x389224u) { return; }
    }
    ctx->pc = 0x389224u;
label_389224:
    // 0x389224: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x389224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_389228:
    // 0x389228: 0xc0e1b00  jal         func_386C00
label_38922c:
    if (ctx->pc == 0x38922Cu) {
        ctx->pc = 0x38922Cu;
            // 0x38922c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x389230u;
        goto label_389230;
    }
    ctx->pc = 0x389228u;
    SET_GPR_U32(ctx, 31, 0x389230u);
    ctx->pc = 0x38922Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389228u;
            // 0x38922c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C00u;
    if (runtime->hasFunction(0x386C00u)) {
        auto targetFn = runtime->lookupFunction(0x386C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389230u; }
        if (ctx->pc != 0x389230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C00_0x386c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389230u; }
        if (ctx->pc != 0x389230u) { return; }
    }
    ctx->pc = 0x389230u;
label_389230:
    // 0x389230: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x389230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_389234:
    // 0x389234: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x389234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_389238:
    // 0x389238: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x389238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38923c:
    // 0x38923c: 0xc0e1afc  jal         func_386BF0
label_389240:
    if (ctx->pc == 0x389240u) {
        ctx->pc = 0x389240u;
            // 0x389240: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x389244u;
        goto label_389244;
    }
    ctx->pc = 0x38923Cu;
    SET_GPR_U32(ctx, 31, 0x389244u);
    ctx->pc = 0x389240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38923Cu;
            // 0x389240: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BF0u;
    if (runtime->hasFunction(0x386BF0u)) {
        auto targetFn = runtime->lookupFunction(0x386BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389244u; }
        if (ctx->pc != 0x389244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BF0_0x386bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389244u; }
        if (ctx->pc != 0x389244u) { return; }
    }
    ctx->pc = 0x389244u;
label_389244:
    // 0x389244: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x389244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_389248:
    // 0x389248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x389248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38924c:
    // 0x38924c: 0xc0e1af4  jal         func_386BD0
label_389250:
    if (ctx->pc == 0x389250u) {
        ctx->pc = 0x389250u;
            // 0x389250: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x389254u;
        goto label_389254;
    }
    ctx->pc = 0x38924Cu;
    SET_GPR_U32(ctx, 31, 0x389254u);
    ctx->pc = 0x389250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38924Cu;
            // 0x389250: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BD0u;
    if (runtime->hasFunction(0x386BD0u)) {
        auto targetFn = runtime->lookupFunction(0x386BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389254u; }
        if (ctx->pc != 0x389254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BD0_0x386bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389254u; }
        if (ctx->pc != 0x389254u) { return; }
    }
    ctx->pc = 0x389254u;
label_389254:
    // 0x389254: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x389254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_389258:
    // 0x389258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38925c:
    // 0x38925c: 0xc0e1aec  jal         func_386BB0
label_389260:
    if (ctx->pc == 0x389260u) {
        ctx->pc = 0x389260u;
            // 0x389260: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x389264u;
        goto label_389264;
    }
    ctx->pc = 0x38925Cu;
    SET_GPR_U32(ctx, 31, 0x389264u);
    ctx->pc = 0x389260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38925Cu;
            // 0x389260: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BB0u;
    if (runtime->hasFunction(0x386BB0u)) {
        auto targetFn = runtime->lookupFunction(0x386BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389264u; }
        if (ctx->pc != 0x389264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BB0_0x386bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389264u; }
        if (ctx->pc != 0x389264u) { return; }
    }
    ctx->pc = 0x389264u;
label_389264:
    // 0x389264: 0xc0dc408  jal         func_371020
label_389268:
    if (ctx->pc == 0x389268u) {
        ctx->pc = 0x389268u;
            // 0x389268: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x38926Cu;
        goto label_38926c;
    }
    ctx->pc = 0x389264u;
    SET_GPR_U32(ctx, 31, 0x38926Cu);
    ctx->pc = 0x389268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389264u;
            // 0x389268: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38926Cu; }
        if (ctx->pc != 0x38926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38926Cu; }
        if (ctx->pc != 0x38926Cu) { return; }
    }
    ctx->pc = 0x38926Cu;
label_38926c:
    // 0x38926c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_389270:
    // 0x389270: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x389270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_389274:
    // 0x389274: 0xc0e1ad4  jal         func_386B50
label_389278:
    if (ctx->pc == 0x389278u) {
        ctx->pc = 0x389278u;
            // 0x389278: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x38927Cu;
        goto label_38927c;
    }
    ctx->pc = 0x389274u;
    SET_GPR_U32(ctx, 31, 0x38927Cu);
    ctx->pc = 0x389278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389274u;
            // 0x389278: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386B50u;
    if (runtime->hasFunction(0x386B50u)) {
        auto targetFn = runtime->lookupFunction(0x386B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38927Cu; }
        if (ctx->pc != 0x38927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386B50_0x386b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38927Cu; }
        if (ctx->pc != 0x38927Cu) { return; }
    }
    ctx->pc = 0x38927Cu;
label_38927c:
    // 0x38927c: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x38927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_389280:
    // 0x389280: 0x8c6302e0  lw          $v1, 0x2E0($v1)
    ctx->pc = 0x389280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 736)));
label_389284:
    // 0x389284: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
label_389288:
    if (ctx->pc == 0x389288u) {
        ctx->pc = 0x389288u;
            // 0x389288: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x38928Cu;
        goto label_38928c;
    }
    ctx->pc = 0x389284u;
    {
        const bool branch_taken_0x389284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x389284) {
            ctx->pc = 0x389288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389284u;
            // 0x389288: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389324u;
            goto label_389324;
        }
    }
    ctx->pc = 0x38928Cu;
label_38928c:
    // 0x38928c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x38928cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_389290:
    // 0x389290: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x389290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_389294:
    // 0x389294: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x389294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_389298:
    // 0x389298: 0xc04cc70  jal         func_1331C0
label_38929c:
    if (ctx->pc == 0x38929Cu) {
        ctx->pc = 0x38929Cu;
            // 0x38929c: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->pc = 0x3892A0u;
        goto label_3892a0;
    }
    ctx->pc = 0x389298u;
    SET_GPR_U32(ctx, 31, 0x3892A0u);
    ctx->pc = 0x38929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389298u;
            // 0x38929c: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3892A0u; }
        if (ctx->pc != 0x3892A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3892A0u; }
        if (ctx->pc != 0x3892A0u) { return; }
    }
    ctx->pc = 0x3892A0u;
label_3892a0:
    // 0x3892a0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3892a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3892a4:
    // 0x3892a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3892a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3892a8:
    // 0x3892a8: 0xc04cbe0  jal         func_132F80
label_3892ac:
    if (ctx->pc == 0x3892ACu) {
        ctx->pc = 0x3892ACu;
            // 0x3892ac: 0x26060100  addiu       $a2, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->pc = 0x3892B0u;
        goto label_3892b0;
    }
    ctx->pc = 0x3892A8u;
    SET_GPR_U32(ctx, 31, 0x3892B0u);
    ctx->pc = 0x3892ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3892A8u;
            // 0x3892ac: 0x26060100  addiu       $a2, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3892B0u; }
        if (ctx->pc != 0x3892B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3892B0u; }
        if (ctx->pc != 0x3892B0u) { return; }
    }
    ctx->pc = 0x3892B0u;
label_3892b0:
    // 0x3892b0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3892b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3892b4:
    // 0x3892b4: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x3892b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3892b8:
    // 0x3892b8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3892b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3892bc:
    // 0x3892bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3892bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3892c0:
    // 0x3892c0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3892c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3892c4:
    // 0x3892c4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3892c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3892c8:
    // 0x3892c8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3892c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3892cc:
    // 0x3892cc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3892ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3892d0:
    // 0x3892d0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3892d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3892d4:
    // 0x3892d4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3892d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3892d8:
    // 0x3892d8: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x3892d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3892dc:
    // 0x3892dc: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x3892dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3892e0:
    // 0x3892e0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3892e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3892e4:
    // 0x3892e4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3892e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3892e8:
    // 0x3892e8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3892e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3892ec:
    // 0x3892ec: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3892ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3892f0:
    // 0x3892f0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3892f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3892f4:
    // 0x3892f4: 0xc0892b0  jal         func_224AC0
label_3892f8:
    if (ctx->pc == 0x3892F8u) {
        ctx->pc = 0x3892F8u;
            // 0x3892f8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3892FCu;
        goto label_3892fc;
    }
    ctx->pc = 0x3892F4u;
    SET_GPR_U32(ctx, 31, 0x3892FCu);
    ctx->pc = 0x3892F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3892F4u;
            // 0x3892f8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3892FCu; }
        if (ctx->pc != 0x3892FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3892FCu; }
        if (ctx->pc != 0x3892FCu) { return; }
    }
    ctx->pc = 0x3892FCu;
label_3892fc:
    // 0x3892fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3892fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_389300:
    // 0x389300: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x389300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_389304:
    // 0x389304: 0x8c656118  lw          $a1, 0x6118($v1)
    ctx->pc = 0x389304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24856)));
label_389308:
    // 0x389308: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x389308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_38930c:
    // 0x38930c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38930cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_389310:
    // 0x389310: 0x8ca3008c  lw          $v1, 0x8C($a1)
    ctx->pc = 0x389310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_389314:
    // 0x389314: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x389314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_389318:
    // 0x389318: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x389318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38931c:
    // 0x38931c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x38931cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_389320:
    // 0x389320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x389320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_389324:
    // 0x389324: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x389324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_389328:
    // 0x389328: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x389328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38932c:
    // 0x38932c: 0x3e00008  jr          $ra
label_389330:
    if (ctx->pc == 0x389330u) {
        ctx->pc = 0x389330u;
            // 0x389330: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x389334u;
        goto label_389334;
    }
    ctx->pc = 0x38932Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38932Cu;
            // 0x389330: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x389334u;
label_389334:
    // 0x389334: 0x0  nop
    ctx->pc = 0x389334u;
    // NOP
label_389338:
    // 0x389338: 0x0  nop
    ctx->pc = 0x389338u;
    // NOP
label_38933c:
    // 0x38933c: 0x0  nop
    ctx->pc = 0x38933cu;
    // NOP
label_389340:
    // 0x389340: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x389340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_389344:
    // 0x389344: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x389344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_389348:
    // 0x389348: 0x3e00008  jr          $ra
label_38934c:
    if (ctx->pc == 0x38934Cu) {
        ctx->pc = 0x38934Cu;
            // 0x38934c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x389350u;
        goto label_389350;
    }
    ctx->pc = 0x389348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38934Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389348u;
            // 0x38934c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x389350u;
label_389350:
    // 0x389350: 0x3e00008  jr          $ra
label_389354:
    if (ctx->pc == 0x389354u) {
        ctx->pc = 0x389354u;
            // 0x389354: 0x240232fa  addiu       $v0, $zero, 0x32FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13050));
        ctx->pc = 0x389358u;
        goto label_389358;
    }
    ctx->pc = 0x389350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389350u;
            // 0x389354: 0x240232fa  addiu       $v0, $zero, 0x32FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x389358u;
label_389358:
    // 0x389358: 0x0  nop
    ctx->pc = 0x389358u;
    // NOP
label_38935c:
    // 0x38935c: 0x0  nop
    ctx->pc = 0x38935cu;
    // NOP
label_389360:
    // 0x389360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x389360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_389364:
    // 0x389364: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x389364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389368:
    // 0x389368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38936c:
    // 0x38936c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x38936cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_389370:
    // 0x389370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x389370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_389374:
    // 0x389374: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x389374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_389378:
    // 0x389378: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x389378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38937c:
    // 0x38937c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x38937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_389380:
    // 0x389380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x389380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_389384:
    // 0x389384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x389384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_389388:
    // 0x389388: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x389388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_38938c:
    // 0x38938c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x38938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_389390:
    // 0x389390: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x389390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_389394:
    // 0x389394: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x389394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_389398:
    // 0x389398: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x389398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_38939c:
    // 0x38939c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x38939cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3893a0:
    // 0x3893a0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3893a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3893a4:
    // 0x3893a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3893a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3893a8:
    // 0x3893a8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3893a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3893ac:
    // 0x3893ac: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3893acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3893b0:
    // 0x3893b0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3893b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3893b4:
    // 0x3893b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3893b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3893b8:
    // 0x3893b8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3893b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3893bc:
    // 0x3893bc: 0xc0a997c  jal         func_2A65F0
label_3893c0:
    if (ctx->pc == 0x3893C0u) {
        ctx->pc = 0x3893C0u;
            // 0x3893c0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3893C4u;
        goto label_3893c4;
    }
    ctx->pc = 0x3893BCu;
    SET_GPR_U32(ctx, 31, 0x3893C4u);
    ctx->pc = 0x3893C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3893BCu;
            // 0x3893c0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3893C4u; }
        if (ctx->pc != 0x3893C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3893C4u; }
        if (ctx->pc != 0x3893C4u) { return; }
    }
    ctx->pc = 0x3893C4u;
label_3893c4:
    // 0x3893c4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3893c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3893c8:
    // 0x3893c8: 0xc0d879c  jal         func_361E70
label_3893cc:
    if (ctx->pc == 0x3893CCu) {
        ctx->pc = 0x3893CCu;
            // 0x3893cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3893D0u;
        goto label_3893d0;
    }
    ctx->pc = 0x3893C8u;
    SET_GPR_U32(ctx, 31, 0x3893D0u);
    ctx->pc = 0x3893CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3893C8u;
            // 0x3893cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3893D0u; }
        if (ctx->pc != 0x3893D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3893D0u; }
        if (ctx->pc != 0x3893D0u) { return; }
    }
    ctx->pc = 0x3893D0u;
label_3893d0:
    // 0x3893d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3893d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3893d4:
    // 0x3893d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3893d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3893d8:
    // 0x3893d8: 0x3e00008  jr          $ra
label_3893dc:
    if (ctx->pc == 0x3893DCu) {
        ctx->pc = 0x3893DCu;
            // 0x3893dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3893E0u;
        goto label_3893e0;
    }
    ctx->pc = 0x3893D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3893DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3893D8u;
            // 0x3893dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3893E0u;
label_3893e0:
    // 0x3893e0: 0x80e1cec  j           func_3873B0
label_3893e4:
    if (ctx->pc == 0x3893E4u) {
        ctx->pc = 0x3893E4u;
            // 0x3893e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3893E8u;
        goto label_3893e8;
    }
    ctx->pc = 0x3893E0u;
    ctx->pc = 0x3893E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3893E0u;
            // 0x3893e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3873B0u;
    {
        auto targetFn = runtime->lookupFunction(0x3873B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3893E8u;
label_3893e8:
    // 0x3893e8: 0x0  nop
    ctx->pc = 0x3893e8u;
    // NOP
label_3893ec:
    // 0x3893ec: 0x0  nop
    ctx->pc = 0x3893ecu;
    // NOP
label_3893f0:
    // 0x3893f0: 0x80e18d0  j           func_386340
label_3893f4:
    if (ctx->pc == 0x3893F4u) {
        ctx->pc = 0x3893F4u;
            // 0x3893f4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3893F8u;
        goto label_3893f8;
    }
    ctx->pc = 0x3893F0u;
    ctx->pc = 0x3893F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3893F0u;
            // 0x3893f4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386340u;
    {
        auto targetFn = runtime->lookupFunction(0x386340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3893F8u;
label_3893f8:
    // 0x3893f8: 0x0  nop
    ctx->pc = 0x3893f8u;
    // NOP
label_3893fc:
    // 0x3893fc: 0x0  nop
    ctx->pc = 0x3893fcu;
    // NOP
label_389400:
    // 0x389400: 0x80e17fc  j           func_385FF0
label_389404:
    if (ctx->pc == 0x389404u) {
        ctx->pc = 0x389404u;
            // 0x389404: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x389408u;
        goto label_389408;
    }
    ctx->pc = 0x389400u;
    ctx->pc = 0x389404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389400u;
            // 0x389404: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385FF0u;
    {
        auto targetFn = runtime->lookupFunction(0x385FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x389408u;
label_389408:
    // 0x389408: 0x0  nop
    ctx->pc = 0x389408u;
    // NOP
label_38940c:
    // 0x38940c: 0x0  nop
    ctx->pc = 0x38940cu;
    // NOP
}
