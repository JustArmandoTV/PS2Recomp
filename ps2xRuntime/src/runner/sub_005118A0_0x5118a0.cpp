#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005118A0
// Address: 0x5118a0 - 0x512030
void sub_005118A0_0x5118a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005118A0_0x5118a0");
#endif

    switch (ctx->pc) {
        case 0x5118a0u: goto label_5118a0;
        case 0x5118a4u: goto label_5118a4;
        case 0x5118a8u: goto label_5118a8;
        case 0x5118acu: goto label_5118ac;
        case 0x5118b0u: goto label_5118b0;
        case 0x5118b4u: goto label_5118b4;
        case 0x5118b8u: goto label_5118b8;
        case 0x5118bcu: goto label_5118bc;
        case 0x5118c0u: goto label_5118c0;
        case 0x5118c4u: goto label_5118c4;
        case 0x5118c8u: goto label_5118c8;
        case 0x5118ccu: goto label_5118cc;
        case 0x5118d0u: goto label_5118d0;
        case 0x5118d4u: goto label_5118d4;
        case 0x5118d8u: goto label_5118d8;
        case 0x5118dcu: goto label_5118dc;
        case 0x5118e0u: goto label_5118e0;
        case 0x5118e4u: goto label_5118e4;
        case 0x5118e8u: goto label_5118e8;
        case 0x5118ecu: goto label_5118ec;
        case 0x5118f0u: goto label_5118f0;
        case 0x5118f4u: goto label_5118f4;
        case 0x5118f8u: goto label_5118f8;
        case 0x5118fcu: goto label_5118fc;
        case 0x511900u: goto label_511900;
        case 0x511904u: goto label_511904;
        case 0x511908u: goto label_511908;
        case 0x51190cu: goto label_51190c;
        case 0x511910u: goto label_511910;
        case 0x511914u: goto label_511914;
        case 0x511918u: goto label_511918;
        case 0x51191cu: goto label_51191c;
        case 0x511920u: goto label_511920;
        case 0x511924u: goto label_511924;
        case 0x511928u: goto label_511928;
        case 0x51192cu: goto label_51192c;
        case 0x511930u: goto label_511930;
        case 0x511934u: goto label_511934;
        case 0x511938u: goto label_511938;
        case 0x51193cu: goto label_51193c;
        case 0x511940u: goto label_511940;
        case 0x511944u: goto label_511944;
        case 0x511948u: goto label_511948;
        case 0x51194cu: goto label_51194c;
        case 0x511950u: goto label_511950;
        case 0x511954u: goto label_511954;
        case 0x511958u: goto label_511958;
        case 0x51195cu: goto label_51195c;
        case 0x511960u: goto label_511960;
        case 0x511964u: goto label_511964;
        case 0x511968u: goto label_511968;
        case 0x51196cu: goto label_51196c;
        case 0x511970u: goto label_511970;
        case 0x511974u: goto label_511974;
        case 0x511978u: goto label_511978;
        case 0x51197cu: goto label_51197c;
        case 0x511980u: goto label_511980;
        case 0x511984u: goto label_511984;
        case 0x511988u: goto label_511988;
        case 0x51198cu: goto label_51198c;
        case 0x511990u: goto label_511990;
        case 0x511994u: goto label_511994;
        case 0x511998u: goto label_511998;
        case 0x51199cu: goto label_51199c;
        case 0x5119a0u: goto label_5119a0;
        case 0x5119a4u: goto label_5119a4;
        case 0x5119a8u: goto label_5119a8;
        case 0x5119acu: goto label_5119ac;
        case 0x5119b0u: goto label_5119b0;
        case 0x5119b4u: goto label_5119b4;
        case 0x5119b8u: goto label_5119b8;
        case 0x5119bcu: goto label_5119bc;
        case 0x5119c0u: goto label_5119c0;
        case 0x5119c4u: goto label_5119c4;
        case 0x5119c8u: goto label_5119c8;
        case 0x5119ccu: goto label_5119cc;
        case 0x5119d0u: goto label_5119d0;
        case 0x5119d4u: goto label_5119d4;
        case 0x5119d8u: goto label_5119d8;
        case 0x5119dcu: goto label_5119dc;
        case 0x5119e0u: goto label_5119e0;
        case 0x5119e4u: goto label_5119e4;
        case 0x5119e8u: goto label_5119e8;
        case 0x5119ecu: goto label_5119ec;
        case 0x5119f0u: goto label_5119f0;
        case 0x5119f4u: goto label_5119f4;
        case 0x5119f8u: goto label_5119f8;
        case 0x5119fcu: goto label_5119fc;
        case 0x511a00u: goto label_511a00;
        case 0x511a04u: goto label_511a04;
        case 0x511a08u: goto label_511a08;
        case 0x511a0cu: goto label_511a0c;
        case 0x511a10u: goto label_511a10;
        case 0x511a14u: goto label_511a14;
        case 0x511a18u: goto label_511a18;
        case 0x511a1cu: goto label_511a1c;
        case 0x511a20u: goto label_511a20;
        case 0x511a24u: goto label_511a24;
        case 0x511a28u: goto label_511a28;
        case 0x511a2cu: goto label_511a2c;
        case 0x511a30u: goto label_511a30;
        case 0x511a34u: goto label_511a34;
        case 0x511a38u: goto label_511a38;
        case 0x511a3cu: goto label_511a3c;
        case 0x511a40u: goto label_511a40;
        case 0x511a44u: goto label_511a44;
        case 0x511a48u: goto label_511a48;
        case 0x511a4cu: goto label_511a4c;
        case 0x511a50u: goto label_511a50;
        case 0x511a54u: goto label_511a54;
        case 0x511a58u: goto label_511a58;
        case 0x511a5cu: goto label_511a5c;
        case 0x511a60u: goto label_511a60;
        case 0x511a64u: goto label_511a64;
        case 0x511a68u: goto label_511a68;
        case 0x511a6cu: goto label_511a6c;
        case 0x511a70u: goto label_511a70;
        case 0x511a74u: goto label_511a74;
        case 0x511a78u: goto label_511a78;
        case 0x511a7cu: goto label_511a7c;
        case 0x511a80u: goto label_511a80;
        case 0x511a84u: goto label_511a84;
        case 0x511a88u: goto label_511a88;
        case 0x511a8cu: goto label_511a8c;
        case 0x511a90u: goto label_511a90;
        case 0x511a94u: goto label_511a94;
        case 0x511a98u: goto label_511a98;
        case 0x511a9cu: goto label_511a9c;
        case 0x511aa0u: goto label_511aa0;
        case 0x511aa4u: goto label_511aa4;
        case 0x511aa8u: goto label_511aa8;
        case 0x511aacu: goto label_511aac;
        case 0x511ab0u: goto label_511ab0;
        case 0x511ab4u: goto label_511ab4;
        case 0x511ab8u: goto label_511ab8;
        case 0x511abcu: goto label_511abc;
        case 0x511ac0u: goto label_511ac0;
        case 0x511ac4u: goto label_511ac4;
        case 0x511ac8u: goto label_511ac8;
        case 0x511accu: goto label_511acc;
        case 0x511ad0u: goto label_511ad0;
        case 0x511ad4u: goto label_511ad4;
        case 0x511ad8u: goto label_511ad8;
        case 0x511adcu: goto label_511adc;
        case 0x511ae0u: goto label_511ae0;
        case 0x511ae4u: goto label_511ae4;
        case 0x511ae8u: goto label_511ae8;
        case 0x511aecu: goto label_511aec;
        case 0x511af0u: goto label_511af0;
        case 0x511af4u: goto label_511af4;
        case 0x511af8u: goto label_511af8;
        case 0x511afcu: goto label_511afc;
        case 0x511b00u: goto label_511b00;
        case 0x511b04u: goto label_511b04;
        case 0x511b08u: goto label_511b08;
        case 0x511b0cu: goto label_511b0c;
        case 0x511b10u: goto label_511b10;
        case 0x511b14u: goto label_511b14;
        case 0x511b18u: goto label_511b18;
        case 0x511b1cu: goto label_511b1c;
        case 0x511b20u: goto label_511b20;
        case 0x511b24u: goto label_511b24;
        case 0x511b28u: goto label_511b28;
        case 0x511b2cu: goto label_511b2c;
        case 0x511b30u: goto label_511b30;
        case 0x511b34u: goto label_511b34;
        case 0x511b38u: goto label_511b38;
        case 0x511b3cu: goto label_511b3c;
        case 0x511b40u: goto label_511b40;
        case 0x511b44u: goto label_511b44;
        case 0x511b48u: goto label_511b48;
        case 0x511b4cu: goto label_511b4c;
        case 0x511b50u: goto label_511b50;
        case 0x511b54u: goto label_511b54;
        case 0x511b58u: goto label_511b58;
        case 0x511b5cu: goto label_511b5c;
        case 0x511b60u: goto label_511b60;
        case 0x511b64u: goto label_511b64;
        case 0x511b68u: goto label_511b68;
        case 0x511b6cu: goto label_511b6c;
        case 0x511b70u: goto label_511b70;
        case 0x511b74u: goto label_511b74;
        case 0x511b78u: goto label_511b78;
        case 0x511b7cu: goto label_511b7c;
        case 0x511b80u: goto label_511b80;
        case 0x511b84u: goto label_511b84;
        case 0x511b88u: goto label_511b88;
        case 0x511b8cu: goto label_511b8c;
        case 0x511b90u: goto label_511b90;
        case 0x511b94u: goto label_511b94;
        case 0x511b98u: goto label_511b98;
        case 0x511b9cu: goto label_511b9c;
        case 0x511ba0u: goto label_511ba0;
        case 0x511ba4u: goto label_511ba4;
        case 0x511ba8u: goto label_511ba8;
        case 0x511bacu: goto label_511bac;
        case 0x511bb0u: goto label_511bb0;
        case 0x511bb4u: goto label_511bb4;
        case 0x511bb8u: goto label_511bb8;
        case 0x511bbcu: goto label_511bbc;
        case 0x511bc0u: goto label_511bc0;
        case 0x511bc4u: goto label_511bc4;
        case 0x511bc8u: goto label_511bc8;
        case 0x511bccu: goto label_511bcc;
        case 0x511bd0u: goto label_511bd0;
        case 0x511bd4u: goto label_511bd4;
        case 0x511bd8u: goto label_511bd8;
        case 0x511bdcu: goto label_511bdc;
        case 0x511be0u: goto label_511be0;
        case 0x511be4u: goto label_511be4;
        case 0x511be8u: goto label_511be8;
        case 0x511becu: goto label_511bec;
        case 0x511bf0u: goto label_511bf0;
        case 0x511bf4u: goto label_511bf4;
        case 0x511bf8u: goto label_511bf8;
        case 0x511bfcu: goto label_511bfc;
        case 0x511c00u: goto label_511c00;
        case 0x511c04u: goto label_511c04;
        case 0x511c08u: goto label_511c08;
        case 0x511c0cu: goto label_511c0c;
        case 0x511c10u: goto label_511c10;
        case 0x511c14u: goto label_511c14;
        case 0x511c18u: goto label_511c18;
        case 0x511c1cu: goto label_511c1c;
        case 0x511c20u: goto label_511c20;
        case 0x511c24u: goto label_511c24;
        case 0x511c28u: goto label_511c28;
        case 0x511c2cu: goto label_511c2c;
        case 0x511c30u: goto label_511c30;
        case 0x511c34u: goto label_511c34;
        case 0x511c38u: goto label_511c38;
        case 0x511c3cu: goto label_511c3c;
        case 0x511c40u: goto label_511c40;
        case 0x511c44u: goto label_511c44;
        case 0x511c48u: goto label_511c48;
        case 0x511c4cu: goto label_511c4c;
        case 0x511c50u: goto label_511c50;
        case 0x511c54u: goto label_511c54;
        case 0x511c58u: goto label_511c58;
        case 0x511c5cu: goto label_511c5c;
        case 0x511c60u: goto label_511c60;
        case 0x511c64u: goto label_511c64;
        case 0x511c68u: goto label_511c68;
        case 0x511c6cu: goto label_511c6c;
        case 0x511c70u: goto label_511c70;
        case 0x511c74u: goto label_511c74;
        case 0x511c78u: goto label_511c78;
        case 0x511c7cu: goto label_511c7c;
        case 0x511c80u: goto label_511c80;
        case 0x511c84u: goto label_511c84;
        case 0x511c88u: goto label_511c88;
        case 0x511c8cu: goto label_511c8c;
        case 0x511c90u: goto label_511c90;
        case 0x511c94u: goto label_511c94;
        case 0x511c98u: goto label_511c98;
        case 0x511c9cu: goto label_511c9c;
        case 0x511ca0u: goto label_511ca0;
        case 0x511ca4u: goto label_511ca4;
        case 0x511ca8u: goto label_511ca8;
        case 0x511cacu: goto label_511cac;
        case 0x511cb0u: goto label_511cb0;
        case 0x511cb4u: goto label_511cb4;
        case 0x511cb8u: goto label_511cb8;
        case 0x511cbcu: goto label_511cbc;
        case 0x511cc0u: goto label_511cc0;
        case 0x511cc4u: goto label_511cc4;
        case 0x511cc8u: goto label_511cc8;
        case 0x511cccu: goto label_511ccc;
        case 0x511cd0u: goto label_511cd0;
        case 0x511cd4u: goto label_511cd4;
        case 0x511cd8u: goto label_511cd8;
        case 0x511cdcu: goto label_511cdc;
        case 0x511ce0u: goto label_511ce0;
        case 0x511ce4u: goto label_511ce4;
        case 0x511ce8u: goto label_511ce8;
        case 0x511cecu: goto label_511cec;
        case 0x511cf0u: goto label_511cf0;
        case 0x511cf4u: goto label_511cf4;
        case 0x511cf8u: goto label_511cf8;
        case 0x511cfcu: goto label_511cfc;
        case 0x511d00u: goto label_511d00;
        case 0x511d04u: goto label_511d04;
        case 0x511d08u: goto label_511d08;
        case 0x511d0cu: goto label_511d0c;
        case 0x511d10u: goto label_511d10;
        case 0x511d14u: goto label_511d14;
        case 0x511d18u: goto label_511d18;
        case 0x511d1cu: goto label_511d1c;
        case 0x511d20u: goto label_511d20;
        case 0x511d24u: goto label_511d24;
        case 0x511d28u: goto label_511d28;
        case 0x511d2cu: goto label_511d2c;
        case 0x511d30u: goto label_511d30;
        case 0x511d34u: goto label_511d34;
        case 0x511d38u: goto label_511d38;
        case 0x511d3cu: goto label_511d3c;
        case 0x511d40u: goto label_511d40;
        case 0x511d44u: goto label_511d44;
        case 0x511d48u: goto label_511d48;
        case 0x511d4cu: goto label_511d4c;
        case 0x511d50u: goto label_511d50;
        case 0x511d54u: goto label_511d54;
        case 0x511d58u: goto label_511d58;
        case 0x511d5cu: goto label_511d5c;
        case 0x511d60u: goto label_511d60;
        case 0x511d64u: goto label_511d64;
        case 0x511d68u: goto label_511d68;
        case 0x511d6cu: goto label_511d6c;
        case 0x511d70u: goto label_511d70;
        case 0x511d74u: goto label_511d74;
        case 0x511d78u: goto label_511d78;
        case 0x511d7cu: goto label_511d7c;
        case 0x511d80u: goto label_511d80;
        case 0x511d84u: goto label_511d84;
        case 0x511d88u: goto label_511d88;
        case 0x511d8cu: goto label_511d8c;
        case 0x511d90u: goto label_511d90;
        case 0x511d94u: goto label_511d94;
        case 0x511d98u: goto label_511d98;
        case 0x511d9cu: goto label_511d9c;
        case 0x511da0u: goto label_511da0;
        case 0x511da4u: goto label_511da4;
        case 0x511da8u: goto label_511da8;
        case 0x511dacu: goto label_511dac;
        case 0x511db0u: goto label_511db0;
        case 0x511db4u: goto label_511db4;
        case 0x511db8u: goto label_511db8;
        case 0x511dbcu: goto label_511dbc;
        case 0x511dc0u: goto label_511dc0;
        case 0x511dc4u: goto label_511dc4;
        case 0x511dc8u: goto label_511dc8;
        case 0x511dccu: goto label_511dcc;
        case 0x511dd0u: goto label_511dd0;
        case 0x511dd4u: goto label_511dd4;
        case 0x511dd8u: goto label_511dd8;
        case 0x511ddcu: goto label_511ddc;
        case 0x511de0u: goto label_511de0;
        case 0x511de4u: goto label_511de4;
        case 0x511de8u: goto label_511de8;
        case 0x511decu: goto label_511dec;
        case 0x511df0u: goto label_511df0;
        case 0x511df4u: goto label_511df4;
        case 0x511df8u: goto label_511df8;
        case 0x511dfcu: goto label_511dfc;
        case 0x511e00u: goto label_511e00;
        case 0x511e04u: goto label_511e04;
        case 0x511e08u: goto label_511e08;
        case 0x511e0cu: goto label_511e0c;
        case 0x511e10u: goto label_511e10;
        case 0x511e14u: goto label_511e14;
        case 0x511e18u: goto label_511e18;
        case 0x511e1cu: goto label_511e1c;
        case 0x511e20u: goto label_511e20;
        case 0x511e24u: goto label_511e24;
        case 0x511e28u: goto label_511e28;
        case 0x511e2cu: goto label_511e2c;
        case 0x511e30u: goto label_511e30;
        case 0x511e34u: goto label_511e34;
        case 0x511e38u: goto label_511e38;
        case 0x511e3cu: goto label_511e3c;
        case 0x511e40u: goto label_511e40;
        case 0x511e44u: goto label_511e44;
        case 0x511e48u: goto label_511e48;
        case 0x511e4cu: goto label_511e4c;
        case 0x511e50u: goto label_511e50;
        case 0x511e54u: goto label_511e54;
        case 0x511e58u: goto label_511e58;
        case 0x511e5cu: goto label_511e5c;
        case 0x511e60u: goto label_511e60;
        case 0x511e64u: goto label_511e64;
        case 0x511e68u: goto label_511e68;
        case 0x511e6cu: goto label_511e6c;
        case 0x511e70u: goto label_511e70;
        case 0x511e74u: goto label_511e74;
        case 0x511e78u: goto label_511e78;
        case 0x511e7cu: goto label_511e7c;
        case 0x511e80u: goto label_511e80;
        case 0x511e84u: goto label_511e84;
        case 0x511e88u: goto label_511e88;
        case 0x511e8cu: goto label_511e8c;
        case 0x511e90u: goto label_511e90;
        case 0x511e94u: goto label_511e94;
        case 0x511e98u: goto label_511e98;
        case 0x511e9cu: goto label_511e9c;
        case 0x511ea0u: goto label_511ea0;
        case 0x511ea4u: goto label_511ea4;
        case 0x511ea8u: goto label_511ea8;
        case 0x511eacu: goto label_511eac;
        case 0x511eb0u: goto label_511eb0;
        case 0x511eb4u: goto label_511eb4;
        case 0x511eb8u: goto label_511eb8;
        case 0x511ebcu: goto label_511ebc;
        case 0x511ec0u: goto label_511ec0;
        case 0x511ec4u: goto label_511ec4;
        case 0x511ec8u: goto label_511ec8;
        case 0x511eccu: goto label_511ecc;
        case 0x511ed0u: goto label_511ed0;
        case 0x511ed4u: goto label_511ed4;
        case 0x511ed8u: goto label_511ed8;
        case 0x511edcu: goto label_511edc;
        case 0x511ee0u: goto label_511ee0;
        case 0x511ee4u: goto label_511ee4;
        case 0x511ee8u: goto label_511ee8;
        case 0x511eecu: goto label_511eec;
        case 0x511ef0u: goto label_511ef0;
        case 0x511ef4u: goto label_511ef4;
        case 0x511ef8u: goto label_511ef8;
        case 0x511efcu: goto label_511efc;
        case 0x511f00u: goto label_511f00;
        case 0x511f04u: goto label_511f04;
        case 0x511f08u: goto label_511f08;
        case 0x511f0cu: goto label_511f0c;
        case 0x511f10u: goto label_511f10;
        case 0x511f14u: goto label_511f14;
        case 0x511f18u: goto label_511f18;
        case 0x511f1cu: goto label_511f1c;
        case 0x511f20u: goto label_511f20;
        case 0x511f24u: goto label_511f24;
        case 0x511f28u: goto label_511f28;
        case 0x511f2cu: goto label_511f2c;
        case 0x511f30u: goto label_511f30;
        case 0x511f34u: goto label_511f34;
        case 0x511f38u: goto label_511f38;
        case 0x511f3cu: goto label_511f3c;
        case 0x511f40u: goto label_511f40;
        case 0x511f44u: goto label_511f44;
        case 0x511f48u: goto label_511f48;
        case 0x511f4cu: goto label_511f4c;
        case 0x511f50u: goto label_511f50;
        case 0x511f54u: goto label_511f54;
        case 0x511f58u: goto label_511f58;
        case 0x511f5cu: goto label_511f5c;
        case 0x511f60u: goto label_511f60;
        case 0x511f64u: goto label_511f64;
        case 0x511f68u: goto label_511f68;
        case 0x511f6cu: goto label_511f6c;
        case 0x511f70u: goto label_511f70;
        case 0x511f74u: goto label_511f74;
        case 0x511f78u: goto label_511f78;
        case 0x511f7cu: goto label_511f7c;
        case 0x511f80u: goto label_511f80;
        case 0x511f84u: goto label_511f84;
        case 0x511f88u: goto label_511f88;
        case 0x511f8cu: goto label_511f8c;
        case 0x511f90u: goto label_511f90;
        case 0x511f94u: goto label_511f94;
        case 0x511f98u: goto label_511f98;
        case 0x511f9cu: goto label_511f9c;
        case 0x511fa0u: goto label_511fa0;
        case 0x511fa4u: goto label_511fa4;
        case 0x511fa8u: goto label_511fa8;
        case 0x511facu: goto label_511fac;
        case 0x511fb0u: goto label_511fb0;
        case 0x511fb4u: goto label_511fb4;
        case 0x511fb8u: goto label_511fb8;
        case 0x511fbcu: goto label_511fbc;
        case 0x511fc0u: goto label_511fc0;
        case 0x511fc4u: goto label_511fc4;
        case 0x511fc8u: goto label_511fc8;
        case 0x511fccu: goto label_511fcc;
        case 0x511fd0u: goto label_511fd0;
        case 0x511fd4u: goto label_511fd4;
        case 0x511fd8u: goto label_511fd8;
        case 0x511fdcu: goto label_511fdc;
        case 0x511fe0u: goto label_511fe0;
        case 0x511fe4u: goto label_511fe4;
        case 0x511fe8u: goto label_511fe8;
        case 0x511fecu: goto label_511fec;
        case 0x511ff0u: goto label_511ff0;
        case 0x511ff4u: goto label_511ff4;
        case 0x511ff8u: goto label_511ff8;
        case 0x511ffcu: goto label_511ffc;
        case 0x512000u: goto label_512000;
        case 0x512004u: goto label_512004;
        case 0x512008u: goto label_512008;
        case 0x51200cu: goto label_51200c;
        case 0x512010u: goto label_512010;
        case 0x512014u: goto label_512014;
        case 0x512018u: goto label_512018;
        case 0x51201cu: goto label_51201c;
        case 0x512020u: goto label_512020;
        case 0x512024u: goto label_512024;
        case 0x512028u: goto label_512028;
        case 0x51202cu: goto label_51202c;
        default: break;
    }

    ctx->pc = 0x5118a0u;

label_5118a0:
    // 0x5118a0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x5118a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_5118a4:
    // 0x5118a4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x5118a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_5118a8:
    // 0x5118a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x5118a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_5118ac:
    // 0x5118ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x5118acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5118b0:
    // 0x5118b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x5118b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5118b4:
    // 0x5118b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x5118b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_5118b8:
    // 0x5118b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x5118b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_5118bc:
    // 0x5118bc: 0x8c6300dc  lw          $v1, 0xDC($v1)
    ctx->pc = 0x5118bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_5118c0:
    // 0x5118c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x5118c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5118c4:
    // 0x5118c4: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
label_5118c8:
    if (ctx->pc == 0x5118C8u) {
        ctx->pc = 0x5118C8u;
            // 0x5118c8: 0xc2082a  slt         $at, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x5118CCu;
        goto label_5118cc;
    }
    ctx->pc = 0x5118C4u;
    {
        const bool branch_taken_0x5118c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x5118c4) {
            ctx->pc = 0x5118C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5118C4u;
            // 0x5118c8: 0xc2082a  slt         $at, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5118D4u;
            goto label_5118d4;
        }
    }
    ctx->pc = 0x5118CCu;
label_5118cc:
    // 0x5118cc: 0x10000017  b           . + 4 + (0x17 << 2)
label_5118d0:
    if (ctx->pc == 0x5118D0u) {
        ctx->pc = 0x5118D0u;
            // 0x5118d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5118D4u;
        goto label_5118d4;
    }
    ctx->pc = 0x5118CCu;
    {
        const bool branch_taken_0x5118cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5118D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5118CCu;
            // 0x5118d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5118cc) {
            ctx->pc = 0x51192Cu;
            goto label_51192c;
        }
    }
    ctx->pc = 0x5118D4u;
label_5118d4:
    // 0x5118d4: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_5118d8:
    if (ctx->pc == 0x5118D8u) {
        ctx->pc = 0x5118D8u;
            // 0x5118d8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5118DCu;
        goto label_5118dc;
    }
    ctx->pc = 0x5118D4u;
    {
        const bool branch_taken_0x5118d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5118d4) {
            ctx->pc = 0x5118D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5118D4u;
            // 0x5118d8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5118DCu;
            goto label_5118dc;
        }
    }
    ctx->pc = 0x5118DCu;
label_5118dc:
    // 0x5118dc: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x5118dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_5118e0:
    // 0x5118e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5118e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5118e4:
    // 0x5118e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5118e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5118e8:
    // 0x5118e8: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x5118e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_5118ec:
    // 0x5118ec: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x5118ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_5118f0:
    // 0x5118f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x5118f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_5118f4:
    // 0x5118f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5118f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5118f8:
    // 0x5118f8: 0x8c630124  lw          $v1, 0x124($v1)
    ctx->pc = 0x5118f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_5118fc:
    // 0x5118fc: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_511900:
    if (ctx->pc == 0x511900u) {
        ctx->pc = 0x511900u;
            // 0x511900: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x511904u;
        goto label_511904;
    }
    ctx->pc = 0x5118FCu;
    {
        const bool branch_taken_0x5118fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5118fc) {
            ctx->pc = 0x511900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5118FCu;
            // 0x511900: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x511920u;
            goto label_511920;
        }
    }
    ctx->pc = 0x511904u;
label_511904:
    // 0x511904: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x511904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_511908:
    // 0x511908: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x511908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_51190c:
    // 0x51190c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_511910:
    if (ctx->pc == 0x511910u) {
        ctx->pc = 0x511914u;
        goto label_511914;
    }
    ctx->pc = 0x51190Cu;
    {
        const bool branch_taken_0x51190c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51190c) {
            ctx->pc = 0x51191Cu;
            goto label_51191c;
        }
    }
    ctx->pc = 0x511914u;
label_511914:
    // 0x511914: 0x10000005  b           . + 4 + (0x5 << 2)
label_511918:
    if (ctx->pc == 0x511918u) {
        ctx->pc = 0x511918u;
            // 0x511918: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51191Cu;
        goto label_51191c;
    }
    ctx->pc = 0x511914u;
    {
        const bool branch_taken_0x511914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511914u;
            // 0x511918: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511914) {
            ctx->pc = 0x51192Cu;
            goto label_51192c;
        }
    }
    ctx->pc = 0x51191Cu;
label_51191c:
    // 0x51191c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x51191cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_511920:
    // 0x511920: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x511920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_511924:
    // 0x511924: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
label_511928:
    if (ctx->pc == 0x511928u) {
        ctx->pc = 0x511928u;
            // 0x511928: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x51192Cu;
        goto label_51192c;
    }
    ctx->pc = 0x511924u;
    {
        const bool branch_taken_0x511924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x511924) {
            ctx->pc = 0x511928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x511924u;
            // 0x511928: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5118F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5118f0;
        }
    }
    ctx->pc = 0x51192Cu;
label_51192c:
    // 0x51192c: 0x3e00008  jr          $ra
label_511930:
    if (ctx->pc == 0x511930u) {
        ctx->pc = 0x511934u;
        goto label_511934;
    }
    ctx->pc = 0x51192Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x511934u;
label_511934:
    // 0x511934: 0x0  nop
    ctx->pc = 0x511934u;
    // NOP
label_511938:
    // 0x511938: 0x0  nop
    ctx->pc = 0x511938u;
    // NOP
label_51193c:
    // 0x51193c: 0x0  nop
    ctx->pc = 0x51193cu;
    // NOP
label_511940:
    // 0x511940: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x511940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_511944:
    // 0x511944: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x511944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_511948:
    // 0x511948: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x511948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_51194c:
    // 0x51194c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x51194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_511950:
    // 0x511950: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x511950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_511954:
    // 0x511954: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x511954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_511958:
    // 0x511958: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x511958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51195c:
    // 0x51195c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_511960:
    // 0x511960: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x511960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_511964:
    // 0x511964: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x511964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_511968:
    // 0x511968: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x511968u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_51196c:
    // 0x51196c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_511970:
    if (ctx->pc == 0x511970u) {
        ctx->pc = 0x511970u;
            // 0x511970: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511974u;
        goto label_511974;
    }
    ctx->pc = 0x51196Cu;
    {
        const bool branch_taken_0x51196c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x511970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51196Cu;
            // 0x511970: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51196c) {
            ctx->pc = 0x5119BCu;
            goto label_5119bc;
        }
    }
    ctx->pc = 0x511974u;
label_511974:
    // 0x511974: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x511974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_511978:
    // 0x511978: 0x50a30042  beql        $a1, $v1, . + 4 + (0x42 << 2)
label_51197c:
    if (ctx->pc == 0x51197Cu) {
        ctx->pc = 0x51197Cu;
            // 0x51197c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x511980u;
        goto label_511980;
    }
    ctx->pc = 0x511978u;
    {
        const bool branch_taken_0x511978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x511978) {
            ctx->pc = 0x51197Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x511978u;
            // 0x51197c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x511A84u;
            goto label_511a84;
        }
    }
    ctx->pc = 0x511980u;
label_511980:
    // 0x511980: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x511980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_511984:
    // 0x511984: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_511988:
    if (ctx->pc == 0x511988u) {
        ctx->pc = 0x51198Cu;
        goto label_51198c;
    }
    ctx->pc = 0x511984u;
    {
        const bool branch_taken_0x511984 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x511984) {
            ctx->pc = 0x511994u;
            goto label_511994;
        }
    }
    ctx->pc = 0x51198Cu;
label_51198c:
    // 0x51198c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_511990:
    if (ctx->pc == 0x511990u) {
        ctx->pc = 0x511994u;
        goto label_511994;
    }
    ctx->pc = 0x51198Cu;
    {
        const bool branch_taken_0x51198c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51198c) {
            ctx->pc = 0x511A80u;
            goto label_511a80;
        }
    }
    ctx->pc = 0x511994u;
label_511994:
    // 0x511994: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x511994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_511998:
    // 0x511998: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x511998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51199c:
    // 0x51199c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x51199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5119a0:
    // 0x5119a0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x5119a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_5119a4:
    // 0x5119a4: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x5119a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_5119a8:
    // 0x5119a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x5119a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_5119ac:
    // 0x5119ac: 0x320f809  jalr        $t9
label_5119b0:
    if (ctx->pc == 0x5119B0u) {
        ctx->pc = 0x5119B0u;
            // 0x5119b0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x5119B4u;
        goto label_5119b4;
    }
    ctx->pc = 0x5119ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5119B4u);
        ctx->pc = 0x5119B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5119ACu;
            // 0x5119b0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5119B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5119B4u; }
            if (ctx->pc != 0x5119B4u) { return; }
        }
        }
    }
    ctx->pc = 0x5119B4u;
label_5119b4:
    // 0x5119b4: 0x10000032  b           . + 4 + (0x32 << 2)
label_5119b8:
    if (ctx->pc == 0x5119B8u) {
        ctx->pc = 0x5119BCu;
        goto label_5119bc;
    }
    ctx->pc = 0x5119B4u;
    {
        const bool branch_taken_0x5119b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5119b4) {
            ctx->pc = 0x511A80u;
            goto label_511a80;
        }
    }
    ctx->pc = 0x5119BCu;
label_5119bc:
    // 0x5119bc: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x5119bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_5119c0:
    // 0x5119c0: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_5119c4:
    if (ctx->pc == 0x5119C4u) {
        ctx->pc = 0x5119C8u;
        goto label_5119c8;
    }
    ctx->pc = 0x5119C0u;
    {
        const bool branch_taken_0x5119c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5119c0) {
            ctx->pc = 0x511A80u;
            goto label_511a80;
        }
    }
    ctx->pc = 0x5119C8u;
label_5119c8:
    // 0x5119c8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5119c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5119cc:
    // 0x5119cc: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x5119ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_5119d0:
    // 0x5119d0: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x5119d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_5119d4:
    // 0x5119d4: 0x8eb40084  lw          $s4, 0x84($s5)
    ctx->pc = 0x5119d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_5119d8:
    // 0x5119d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5119d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5119dc:
    // 0x5119dc: 0x8c730130  lw          $s3, 0x130($v1)
    ctx->pc = 0x5119dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_5119e0:
    // 0x5119e0: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x5119e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_5119e4:
    // 0x5119e4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x5119e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_5119e8:
    // 0x5119e8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x5119e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_5119ec:
    // 0x5119ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5119ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5119f0:
    // 0x5119f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5119f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5119f4:
    // 0x5119f4: 0xc04e738  jal         func_139CE0
label_5119f8:
    if (ctx->pc == 0x5119F8u) {
        ctx->pc = 0x5119F8u;
            // 0x5119f8: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x5119FCu;
        goto label_5119fc;
    }
    ctx->pc = 0x5119F4u;
    SET_GPR_U32(ctx, 31, 0x5119FCu);
    ctx->pc = 0x5119F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5119F4u;
            // 0x5119f8: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5119FCu; }
        if (ctx->pc != 0x5119FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5119FCu; }
        if (ctx->pc != 0x5119FCu) { return; }
    }
    ctx->pc = 0x5119FCu;
label_5119fc:
    // 0x5119fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5119fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_511a00:
    // 0x511a00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x511a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_511a04:
    // 0x511a04: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x511a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_511a08:
    // 0x511a08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x511a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511a0c:
    // 0x511a0c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x511a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_511a10:
    // 0x511a10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x511a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511a14:
    // 0x511a14: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x511a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_511a18:
    // 0x511a18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x511a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_511a1c:
    // 0x511a1c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x511a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_511a20:
    // 0x511a20: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x511a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_511a24:
    // 0x511a24: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x511a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_511a28:
    // 0x511a28: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x511a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_511a2c:
    // 0x511a2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x511a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_511a30:
    // 0x511a30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x511a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_511a34:
    // 0x511a34: 0xc144258  jal         func_510960
label_511a38:
    if (ctx->pc == 0x511A38u) {
        ctx->pc = 0x511A38u;
            // 0x511a38: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511A3Cu;
        goto label_511a3c;
    }
    ctx->pc = 0x511A34u;
    SET_GPR_U32(ctx, 31, 0x511A3Cu);
    ctx->pc = 0x511A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511A34u;
            // 0x511a38: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510960u;
    if (runtime->hasFunction(0x510960u)) {
        auto targetFn = runtime->lookupFunction(0x510960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511A3Cu; }
        if (ctx->pc != 0x511A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510960_0x510960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511A3Cu; }
        if (ctx->pc != 0x511A3Cu) { return; }
    }
    ctx->pc = 0x511A3Cu;
label_511a3c:
    // 0x511a3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x511a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_511a40:
    // 0x511a40: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x511a40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_511a44:
    // 0x511a44: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_511a48:
    if (ctx->pc == 0x511A48u) {
        ctx->pc = 0x511A48u;
            // 0x511a48: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x511A4Cu;
        goto label_511a4c;
    }
    ctx->pc = 0x511A44u;
    {
        const bool branch_taken_0x511a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x511A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511A44u;
            // 0x511a48: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511a44) {
            ctx->pc = 0x511A14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511a14;
        }
    }
    ctx->pc = 0x511A4Cu;
label_511a4c:
    // 0x511a4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x511a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_511a50:
    // 0x511a50: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x511a50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_511a54:
    // 0x511a54: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_511a58:
    if (ctx->pc == 0x511A58u) {
        ctx->pc = 0x511A5Cu;
        goto label_511a5c;
    }
    ctx->pc = 0x511A54u;
    {
        const bool branch_taken_0x511a54 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x511a54) {
            ctx->pc = 0x511A80u;
            goto label_511a80;
        }
    }
    ctx->pc = 0x511A5Cu;
label_511a5c:
    // 0x511a5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x511a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_511a60:
    // 0x511a60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x511a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_511a64:
    // 0x511a64: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x511a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_511a68:
    // 0x511a68: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x511a68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_511a6c:
    // 0x511a6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x511a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511a70:
    // 0x511a70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x511a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_511a74:
    // 0x511a74: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x511a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_511a78:
    // 0x511a78: 0xc055d28  jal         func_1574A0
label_511a7c:
    if (ctx->pc == 0x511A7Cu) {
        ctx->pc = 0x511A7Cu;
            // 0x511a7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511A80u;
        goto label_511a80;
    }
    ctx->pc = 0x511A78u;
    SET_GPR_U32(ctx, 31, 0x511A80u);
    ctx->pc = 0x511A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511A78u;
            // 0x511a7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511A80u; }
        if (ctx->pc != 0x511A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511A80u; }
        if (ctx->pc != 0x511A80u) { return; }
    }
    ctx->pc = 0x511A80u;
label_511a80:
    // 0x511a80: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x511a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_511a84:
    // 0x511a84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x511a84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_511a88:
    // 0x511a88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x511a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_511a8c:
    // 0x511a8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x511a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_511a90:
    // 0x511a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x511a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_511a94:
    // 0x511a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x511a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_511a98:
    // 0x511a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x511a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_511a9c:
    // 0x511a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x511a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_511aa0:
    // 0x511aa0: 0x3e00008  jr          $ra
label_511aa4:
    if (ctx->pc == 0x511AA4u) {
        ctx->pc = 0x511AA4u;
            // 0x511aa4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x511AA8u;
        goto label_511aa8;
    }
    ctx->pc = 0x511AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x511AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511AA0u;
            // 0x511aa4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x511AA8u;
label_511aa8:
    // 0x511aa8: 0x0  nop
    ctx->pc = 0x511aa8u;
    // NOP
label_511aac:
    // 0x511aac: 0x0  nop
    ctx->pc = 0x511aacu;
    // NOP
label_511ab0:
    // 0x511ab0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x511ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_511ab4:
    // 0x511ab4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x511ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_511ab8:
    // 0x511ab8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x511ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_511abc:
    // 0x511abc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x511abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_511ac0:
    // 0x511ac0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x511ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_511ac4:
    // 0x511ac4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x511ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_511ac8:
    // 0x511ac8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x511ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_511acc:
    // 0x511acc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x511accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_511ad0:
    // 0x511ad0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x511ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_511ad4:
    // 0x511ad4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x511ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_511ad8:
    // 0x511ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x511ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_511adc:
    // 0x511adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x511adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_511ae0:
    // 0x511ae0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x511ae0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_511ae4:
    // 0x511ae4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_511ae8:
    if (ctx->pc == 0x511AE8u) {
        ctx->pc = 0x511AE8u;
            // 0x511ae8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511AECu;
        goto label_511aec;
    }
    ctx->pc = 0x511AE4u;
    {
        const bool branch_taken_0x511ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x511AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511AE4u;
            // 0x511ae8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511ae4) {
            ctx->pc = 0x511B18u;
            goto label_511b18;
        }
    }
    ctx->pc = 0x511AECu;
label_511aec:
    // 0x511aec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x511aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_511af0:
    // 0x511af0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_511af4:
    if (ctx->pc == 0x511AF4u) {
        ctx->pc = 0x511AF4u;
            // 0x511af4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x511AF8u;
        goto label_511af8;
    }
    ctx->pc = 0x511AF0u;
    {
        const bool branch_taken_0x511af0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x511af0) {
            ctx->pc = 0x511AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x511AF0u;
            // 0x511af4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x511B0Cu;
            goto label_511b0c;
        }
    }
    ctx->pc = 0x511AF8u;
label_511af8:
    // 0x511af8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x511af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_511afc:
    // 0x511afc: 0x10a30140  beq         $a1, $v1, . + 4 + (0x140 << 2)
label_511b00:
    if (ctx->pc == 0x511B00u) {
        ctx->pc = 0x511B04u;
        goto label_511b04;
    }
    ctx->pc = 0x511AFCu;
    {
        const bool branch_taken_0x511afc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x511afc) {
            ctx->pc = 0x512000u;
            goto label_512000;
        }
    }
    ctx->pc = 0x511B04u;
label_511b04:
    // 0x511b04: 0x1000013e  b           . + 4 + (0x13E << 2)
label_511b08:
    if (ctx->pc == 0x511B08u) {
        ctx->pc = 0x511B0Cu;
        goto label_511b0c;
    }
    ctx->pc = 0x511B04u;
    {
        const bool branch_taken_0x511b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x511b04) {
            ctx->pc = 0x512000u;
            goto label_512000;
        }
    }
    ctx->pc = 0x511B0Cu;
label_511b0c:
    // 0x511b0c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x511b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_511b10:
    // 0x511b10: 0x320f809  jalr        $t9
label_511b14:
    if (ctx->pc == 0x511B14u) {
        ctx->pc = 0x511B18u;
        goto label_511b18;
    }
    ctx->pc = 0x511B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x511B18u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x511B18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x511B18u; }
            if (ctx->pc != 0x511B18u) { return; }
        }
        }
    }
    ctx->pc = 0x511B18u;
label_511b18:
    // 0x511b18: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x511b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
label_511b1c:
    // 0x511b1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x511b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511b20:
    // 0x511b20: 0x3445bc20  ori         $a1, $v0, 0xBC20
    ctx->pc = 0x511b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
label_511b24:
    // 0x511b24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x511b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_511b28:
    // 0x511b28: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x511b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_511b2c:
    // 0x511b2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x511b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_511b30:
    // 0x511b30: 0xacc500bc  sw          $a1, 0xBC($a2)
    ctx->pc = 0x511b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 188), GPR_U32(ctx, 5));
label_511b34:
    // 0x511b34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x511b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_511b38:
    // 0x511b38: 0xa0c400c0  sb          $a0, 0xC0($a2)
    ctx->pc = 0x511b38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 192), (uint8_t)GPR_U32(ctx, 4));
label_511b3c:
    // 0x511b3c: 0xa0c000c1  sb          $zero, 0xC1($a2)
    ctx->pc = 0x511b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 193), (uint8_t)GPR_U32(ctx, 0));
label_511b40:
    // 0x511b40: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x511b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_511b44:
    // 0x511b44: 0x8c7e077c  lw          $fp, 0x77C($v1)
    ctx->pc = 0x511b44u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_511b48:
    // 0x511b48: 0xfe182a  slt         $v1, $a3, $fp
    ctx->pc = 0x511b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_511b4c:
    // 0x511b4c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_511b50:
    if (ctx->pc == 0x511B50u) {
        ctx->pc = 0x511B50u;
            // 0x511b50: 0x24c60058  addiu       $a2, $a2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
        ctx->pc = 0x511B54u;
        goto label_511b54;
    }
    ctx->pc = 0x511B4Cu;
    {
        const bool branch_taken_0x511b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x511B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511B4Cu;
            // 0x511b50: 0x24c60058  addiu       $a2, $a2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511b4c) {
            ctx->pc = 0x511B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511b30;
        }
    }
    ctx->pc = 0x511B54u;
label_511b54:
    // 0x511b54: 0x3c1600af  lui         $s6, 0xAF
    ctx->pc = 0x511b54u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)175 << 16));
label_511b58:
    // 0x511b58: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x511b58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511b5c:
    // 0x511b5c: 0x26d60e80  addiu       $s6, $s6, 0xE80
    ctx->pc = 0x511b5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3712));
label_511b60:
    // 0x511b60: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x511b60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511b64:
    // 0x511b64: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x511b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_511b68:
    // 0x511b68: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x511b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_511b6c:
    // 0x511b6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x511b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_511b70:
    // 0x511b70: 0x8c620a68  lw          $v0, 0xA68($v1)
    ctx->pc = 0x511b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2664)));
label_511b74:
    // 0x511b74: 0x14440038  bne         $v0, $a0, . + 4 + (0x38 << 2)
label_511b78:
    if (ctx->pc == 0x511B78u) {
        ctx->pc = 0x511B7Cu;
        goto label_511b7c;
    }
    ctx->pc = 0x511B74u;
    {
        const bool branch_taken_0x511b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x511b74) {
            ctx->pc = 0x511C58u;
            goto label_511c58;
        }
    }
    ctx->pc = 0x511B7Cu;
label_511b7c:
    // 0x511b7c: 0x8c630a74  lw          $v1, 0xA74($v1)
    ctx->pc = 0x511b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2676)));
label_511b80:
    // 0x511b80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x511b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_511b84:
    // 0x511b84: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
label_511b88:
    if (ctx->pc == 0x511B88u) {
        ctx->pc = 0x511B8Cu;
        goto label_511b8c;
    }
    ctx->pc = 0x511B84u;
    {
        const bool branch_taken_0x511b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x511b84) {
            ctx->pc = 0x511C58u;
            goto label_511c58;
        }
    }
    ctx->pc = 0x511B8Cu;
label_511b8c:
    // 0x511b8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x511b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_511b90:
    // 0x511b90: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
label_511b94:
    if (ctx->pc == 0x511B94u) {
        ctx->pc = 0x511B98u;
        goto label_511b98;
    }
    ctx->pc = 0x511B90u;
    {
        const bool branch_taken_0x511b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x511b90) {
            ctx->pc = 0x511C48u;
            goto label_511c48;
        }
    }
    ctx->pc = 0x511B98u;
label_511b98:
    // 0x511b98: 0x10640025  beq         $v1, $a0, . + 4 + (0x25 << 2)
label_511b9c:
    if (ctx->pc == 0x511B9Cu) {
        ctx->pc = 0x511BA0u;
        goto label_511ba0;
    }
    ctx->pc = 0x511B98u;
    {
        const bool branch_taken_0x511b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x511b98) {
            ctx->pc = 0x511C30u;
            goto label_511c30;
        }
    }
    ctx->pc = 0x511BA0u;
label_511ba0:
    // 0x511ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x511ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_511ba4:
    // 0x511ba4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_511ba8:
    if (ctx->pc == 0x511BA8u) {
        ctx->pc = 0x511BACu;
        goto label_511bac;
    }
    ctx->pc = 0x511BA4u;
    {
        const bool branch_taken_0x511ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x511ba4) {
            ctx->pc = 0x511BC0u;
            goto label_511bc0;
        }
    }
    ctx->pc = 0x511BACu;
label_511bac:
    // 0x511bac: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_511bb0:
    if (ctx->pc == 0x511BB0u) {
        ctx->pc = 0x511BB4u;
        goto label_511bb4;
    }
    ctx->pc = 0x511BACu;
    {
        const bool branch_taken_0x511bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x511bac) {
            ctx->pc = 0x511C58u;
            goto label_511c58;
        }
    }
    ctx->pc = 0x511BB4u;
label_511bb4:
    // 0x511bb4: 0x10000028  b           . + 4 + (0x28 << 2)
label_511bb8:
    if (ctx->pc == 0x511BB8u) {
        ctx->pc = 0x511BBCu;
        goto label_511bbc;
    }
    ctx->pc = 0x511BB4u;
    {
        const bool branch_taken_0x511bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x511bb4) {
            ctx->pc = 0x511C58u;
            goto label_511c58;
        }
    }
    ctx->pc = 0x511BBCu;
label_511bbc:
    // 0x511bbc: 0x0  nop
    ctx->pc = 0x511bbcu;
    // NOP
label_511bc0:
    // 0x511bc0: 0xc1448ec  jal         func_5123B0
label_511bc4:
    if (ctx->pc == 0x511BC4u) {
        ctx->pc = 0x511BC8u;
        goto label_511bc8;
    }
    ctx->pc = 0x511BC0u;
    SET_GPR_U32(ctx, 31, 0x511BC8u);
    ctx->pc = 0x5123B0u;
    if (runtime->hasFunction(0x5123B0u)) {
        auto targetFn = runtime->lookupFunction(0x5123B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511BC8u; }
        if (ctx->pc != 0x511BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005123B0_0x5123b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511BC8u; }
        if (ctx->pc != 0x511BC8u) { return; }
    }
    ctx->pc = 0x511BC8u;
label_511bc8:
    // 0x511bc8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x511bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_511bcc:
    // 0x511bcc: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x511bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_511bd0:
    // 0x511bd0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_511bd4:
    if (ctx->pc == 0x511BD4u) {
        ctx->pc = 0x511BD8u;
        goto label_511bd8;
    }
    ctx->pc = 0x511BD0u;
    {
        const bool branch_taken_0x511bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x511bd0) {
            ctx->pc = 0x511C58u;
            goto label_511c58;
        }
    }
    ctx->pc = 0x511BD8u;
label_511bd8:
    // 0x511bd8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x511bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_511bdc:
    // 0x511bdc: 0x26140090  addiu       $s4, $s0, 0x90
    ctx->pc = 0x511bdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_511be0:
    // 0x511be0: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x511be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_511be4:
    // 0x511be4: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_511be8:
    if (ctx->pc == 0x511BE8u) {
        ctx->pc = 0x511BE8u;
            // 0x511be8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511BECu;
        goto label_511bec;
    }
    ctx->pc = 0x511BE4u;
    {
        const bool branch_taken_0x511be4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x511BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511BE4u;
            // 0x511be8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511be4) {
            ctx->pc = 0x511C58u;
            goto label_511c58;
        }
    }
    ctx->pc = 0x511BECu;
label_511bec:
    // 0x511bec: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x511becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_511bf0:
    // 0x511bf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x511bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_511bf4:
    // 0x511bf4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_511bf8:
    if (ctx->pc == 0x511BF8u) {
        ctx->pc = 0x511BFCu;
        goto label_511bfc;
    }
    ctx->pc = 0x511BF4u;
    {
        const bool branch_taken_0x511bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x511bf4) {
            ctx->pc = 0x511C10u;
            goto label_511c10;
        }
    }
    ctx->pc = 0x511BFCu;
label_511bfc:
    // 0x511bfc: 0xc143a8c  jal         func_50EA30
label_511c00:
    if (ctx->pc == 0x511C00u) {
        ctx->pc = 0x511C04u;
        goto label_511c04;
    }
    ctx->pc = 0x511BFCu;
    SET_GPR_U32(ctx, 31, 0x511C04u);
    ctx->pc = 0x50EA30u;
    if (runtime->hasFunction(0x50EA30u)) {
        auto targetFn = runtime->lookupFunction(0x50EA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511C04u; }
        if (ctx->pc != 0x511C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050EA30_0x50ea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511C04u; }
        if (ctx->pc != 0x511C04u) { return; }
    }
    ctx->pc = 0x511C04u;
label_511c04:
    // 0x511c04: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x511c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_511c08:
    // 0x511c08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x511c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_511c0c:
    // 0x511c0c: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x511c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_511c10:
    // 0x511c10: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x511c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_511c14:
    // 0x511c14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x511c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_511c18:
    // 0x511c18: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x511c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_511c1c:
    // 0x511c1c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_511c20:
    if (ctx->pc == 0x511C20u) {
        ctx->pc = 0x511C20u;
            // 0x511c20: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x511C24u;
        goto label_511c24;
    }
    ctx->pc = 0x511C1Cu;
    {
        const bool branch_taken_0x511c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x511C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511C1Cu;
            // 0x511c20: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511c1c) {
            ctx->pc = 0x511BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511bf0;
        }
    }
    ctx->pc = 0x511C24u;
label_511c24:
    // 0x511c24: 0x1000000c  b           . + 4 + (0xC << 2)
label_511c28:
    if (ctx->pc == 0x511C28u) {
        ctx->pc = 0x511C2Cu;
        goto label_511c2c;
    }
    ctx->pc = 0x511C24u;
    {
        const bool branch_taken_0x511c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x511c24) {
            ctx->pc = 0x511C58u;
            goto label_511c58;
        }
    }
    ctx->pc = 0x511C2Cu;
label_511c2c:
    // 0x511c2c: 0x0  nop
    ctx->pc = 0x511c2cu;
    // NOP
label_511c30:
    // 0x511c30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x511c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_511c34:
    // 0x511c34: 0xc1444b4  jal         func_5112D0
label_511c38:
    if (ctx->pc == 0x511C38u) {
        ctx->pc = 0x511C38u;
            // 0x511c38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511C3Cu;
        goto label_511c3c;
    }
    ctx->pc = 0x511C34u;
    SET_GPR_U32(ctx, 31, 0x511C3Cu);
    ctx->pc = 0x511C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511C34u;
            // 0x511c38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5112D0u;
    if (runtime->hasFunction(0x5112D0u)) {
        auto targetFn = runtime->lookupFunction(0x5112D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511C3Cu; }
        if (ctx->pc != 0x511C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005112D0_0x5112d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511C3Cu; }
        if (ctx->pc != 0x511C3Cu) { return; }
    }
    ctx->pc = 0x511C3Cu;
label_511c3c:
    // 0x511c3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_511c40:
    if (ctx->pc == 0x511C40u) {
        ctx->pc = 0x511C44u;
        goto label_511c44;
    }
    ctx->pc = 0x511C3Cu;
    {
        const bool branch_taken_0x511c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x511c3c) {
            ctx->pc = 0x511C58u;
            goto label_511c58;
        }
    }
    ctx->pc = 0x511C44u;
label_511c44:
    // 0x511c44: 0x0  nop
    ctx->pc = 0x511c44u;
    // NOP
label_511c48:
    // 0x511c48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x511c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_511c4c:
    // 0x511c4c: 0xc144444  jal         func_511110
label_511c50:
    if (ctx->pc == 0x511C50u) {
        ctx->pc = 0x511C50u;
            // 0x511c50: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511C54u;
        goto label_511c54;
    }
    ctx->pc = 0x511C4Cu;
    SET_GPR_U32(ctx, 31, 0x511C54u);
    ctx->pc = 0x511C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511C4Cu;
            // 0x511c50: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x511110u;
    if (runtime->hasFunction(0x511110u)) {
        auto targetFn = runtime->lookupFunction(0x511110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511C54u; }
        if (ctx->pc != 0x511C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00511110_0x511110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511C54u; }
        if (ctx->pc != 0x511C54u) { return; }
    }
    ctx->pc = 0x511C54u;
label_511c54:
    // 0x511c54: 0x0  nop
    ctx->pc = 0x511c54u;
    // NOP
label_511c58:
    // 0x511c58: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x511c58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_511c5c:
    // 0x511c5c: 0x2be102a  slt         $v0, $s5, $fp
    ctx->pc = 0x511c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_511c60:
    // 0x511c60: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x511c60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_511c64:
    // 0x511c64: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x511c64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_511c68:
    // 0x511c68: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_511c6c:
    if (ctx->pc == 0x511C6Cu) {
        ctx->pc = 0x511C6Cu;
            // 0x511c6c: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->pc = 0x511C70u;
        goto label_511c70;
    }
    ctx->pc = 0x511C68u;
    {
        const bool branch_taken_0x511c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x511C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511C68u;
            // 0x511c6c: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511c68) {
            ctx->pc = 0x511B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511b68;
        }
    }
    ctx->pc = 0x511C70u;
label_511c70:
    // 0x511c70: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x511c70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_511c74:
    // 0x511c74: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_511c78:
    if (ctx->pc == 0x511C78u) {
        ctx->pc = 0x511C7Cu;
        goto label_511c7c;
    }
    ctx->pc = 0x511C74u;
    {
        const bool branch_taken_0x511c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x511c74) {
            ctx->pc = 0x511CA8u;
            goto label_511ca8;
        }
    }
    ctx->pc = 0x511C7Cu;
label_511c7c:
    // 0x511c7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x511c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511c80:
    // 0x511c80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x511c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511c84:
    // 0x511c84: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x511c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_511c88:
    // 0x511c88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x511c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_511c8c:
    // 0x511c8c: 0xc0e3658  jal         func_38D960
label_511c90:
    if (ctx->pc == 0x511C90u) {
        ctx->pc = 0x511C90u;
            // 0x511c90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x511C94u;
        goto label_511c94;
    }
    ctx->pc = 0x511C8Cu;
    SET_GPR_U32(ctx, 31, 0x511C94u);
    ctx->pc = 0x511C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511C8Cu;
            // 0x511c90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511C94u; }
        if (ctx->pc != 0x511C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511C94u; }
        if (ctx->pc != 0x511C94u) { return; }
    }
    ctx->pc = 0x511C94u;
label_511c94:
    // 0x511c94: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x511c94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_511c98:
    // 0x511c98: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x511c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_511c9c:
    // 0x511c9c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_511ca0:
    if (ctx->pc == 0x511CA0u) {
        ctx->pc = 0x511CA0u;
            // 0x511ca0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x511CA4u;
        goto label_511ca4;
    }
    ctx->pc = 0x511C9Cu;
    {
        const bool branch_taken_0x511c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x511CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511C9Cu;
            // 0x511ca0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511c9c) {
            ctx->pc = 0x511C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511c84;
        }
    }
    ctx->pc = 0x511CA4u;
label_511ca4:
    // 0x511ca4: 0x0  nop
    ctx->pc = 0x511ca4u;
    // NOP
label_511ca8:
    // 0x511ca8: 0x3c1600af  lui         $s6, 0xAF
    ctx->pc = 0x511ca8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)175 << 16));
label_511cac:
    // 0x511cac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x511cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511cb0:
    // 0x511cb0: 0x26d60e80  addiu       $s6, $s6, 0xE80
    ctx->pc = 0x511cb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3712));
label_511cb4:
    // 0x511cb4: 0x826500c0  lb          $a1, 0xC0($s3)
    ctx->pc = 0x511cb4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 192)));
label_511cb8:
    // 0x511cb8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x511cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_511cbc:
    // 0x511cbc: 0x26740090  addiu       $s4, $s3, 0x90
    ctx->pc = 0x511cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_511cc0:
    // 0x511cc0: 0x24840e80  addiu       $a0, $a0, 0xE80
    ctx->pc = 0x511cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
label_511cc4:
    // 0x511cc4: 0x826300c1  lb          $v1, 0xC1($s3)
    ctx->pc = 0x511cc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 193)));
label_511cc8:
    // 0x511cc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x511cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_511ccc:
    // 0x511ccc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x511cccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_511cd0:
    // 0x511cd0: 0x8ed20004  lw          $s2, 0x4($s6)
    ctx->pc = 0x511cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_511cd4:
    // 0x511cd4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x511cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_511cd8:
    // 0x511cd8: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x511cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_511cdc:
    // 0x511cdc: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
label_511ce0:
    if (ctx->pc == 0x511CE0u) {
        ctx->pc = 0x511CE0u;
            // 0x511ce0: 0x2697002c  addiu       $s7, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->pc = 0x511CE4u;
        goto label_511ce4;
    }
    ctx->pc = 0x511CDCu;
    {
        const bool branch_taken_0x511cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x511CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511CDCu;
            // 0x511ce0: 0x2697002c  addiu       $s7, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511cdc) {
            ctx->pc = 0x511E38u;
            goto label_511e38;
        }
    }
    ctx->pc = 0x511CE4u;
label_511ce4:
    // 0x511ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x511ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_511ce8:
    // 0x511ce8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_511cec:
    if (ctx->pc == 0x511CECu) {
        ctx->pc = 0x511CF0u;
        goto label_511cf0;
    }
    ctx->pc = 0x511CE8u;
    {
        const bool branch_taken_0x511ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x511ce8) {
            ctx->pc = 0x511D68u;
            goto label_511d68;
        }
    }
    ctx->pc = 0x511CF0u;
label_511cf0:
    // 0x511cf0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_511cf4:
    if (ctx->pc == 0x511CF4u) {
        ctx->pc = 0x511CF8u;
        goto label_511cf8;
    }
    ctx->pc = 0x511CF0u;
    {
        const bool branch_taken_0x511cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x511cf0) {
            ctx->pc = 0x511D00u;
            goto label_511d00;
        }
    }
    ctx->pc = 0x511CF8u;
label_511cf8:
    // 0x511cf8: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_511cfc:
    if (ctx->pc == 0x511CFCu) {
        ctx->pc = 0x511D00u;
        goto label_511d00;
    }
    ctx->pc = 0x511CF8u;
    {
        const bool branch_taken_0x511cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x511cf8) {
            ctx->pc = 0x511FD8u;
            goto label_511fd8;
        }
    }
    ctx->pc = 0x511D00u;
label_511d00:
    // 0x511d00: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x511d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_511d04:
    // 0x511d04: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_511d08:
    if (ctx->pc == 0x511D08u) {
        ctx->pc = 0x511D0Cu;
        goto label_511d0c;
    }
    ctx->pc = 0x511D04u;
    {
        const bool branch_taken_0x511d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x511d04) {
            ctx->pc = 0x511D20u;
            goto label_511d20;
        }
    }
    ctx->pc = 0x511D0Cu;
label_511d0c:
    // 0x511d0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x511d0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511d10:
    // 0x511d10: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x511d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_511d14:
    // 0x511d14: 0x320f809  jalr        $t9
label_511d18:
    if (ctx->pc == 0x511D18u) {
        ctx->pc = 0x511D18u;
            // 0x511d18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511D1Cu;
        goto label_511d1c;
    }
    ctx->pc = 0x511D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x511D1Cu);
        ctx->pc = 0x511D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511D14u;
            // 0x511d18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x511D1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x511D1Cu; }
            if (ctx->pc != 0x511D1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x511D1Cu;
label_511d1c:
    // 0x511d1c: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x511d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_511d20:
    // 0x511d20: 0x8e840028  lw          $a0, 0x28($s4)
    ctx->pc = 0x511d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_511d24:
    // 0x511d24: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_511d28:
    if (ctx->pc == 0x511D28u) {
        ctx->pc = 0x511D2Cu;
        goto label_511d2c;
    }
    ctx->pc = 0x511D24u;
    {
        const bool branch_taken_0x511d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x511d24) {
            ctx->pc = 0x511D40u;
            goto label_511d40;
        }
    }
    ctx->pc = 0x511D2Cu;
label_511d2c:
    // 0x511d2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x511d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511d30:
    // 0x511d30: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x511d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_511d34:
    // 0x511d34: 0x320f809  jalr        $t9
label_511d38:
    if (ctx->pc == 0x511D38u) {
        ctx->pc = 0x511D38u;
            // 0x511d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511D3Cu;
        goto label_511d3c;
    }
    ctx->pc = 0x511D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x511D3Cu);
        ctx->pc = 0x511D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511D34u;
            // 0x511d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x511D3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x511D3Cu; }
            if (ctx->pc != 0x511D3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x511D3Cu;
label_511d3c:
    // 0x511d3c: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x511d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_511d40:
    // 0x511d40: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x511d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_511d44:
    // 0x511d44: 0x108000a4  beqz        $a0, . + 4 + (0xA4 << 2)
label_511d48:
    if (ctx->pc == 0x511D48u) {
        ctx->pc = 0x511D4Cu;
        goto label_511d4c;
    }
    ctx->pc = 0x511D44u;
    {
        const bool branch_taken_0x511d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x511d44) {
            ctx->pc = 0x511FD8u;
            goto label_511fd8;
        }
    }
    ctx->pc = 0x511D4Cu;
label_511d4c:
    // 0x511d4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x511d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511d50:
    // 0x511d50: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x511d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_511d54:
    // 0x511d54: 0x320f809  jalr        $t9
label_511d58:
    if (ctx->pc == 0x511D58u) {
        ctx->pc = 0x511D58u;
            // 0x511d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511D5Cu;
        goto label_511d5c;
    }
    ctx->pc = 0x511D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x511D5Cu);
        ctx->pc = 0x511D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511D54u;
            // 0x511d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x511D5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x511D5Cu; }
            if (ctx->pc != 0x511D5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x511D5Cu;
label_511d5c:
    // 0x511d5c: 0x1000009e  b           . + 4 + (0x9E << 2)
label_511d60:
    if (ctx->pc == 0x511D60u) {
        ctx->pc = 0x511D60u;
            // 0x511d60: 0xae800020  sw          $zero, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x511D64u;
        goto label_511d64;
    }
    ctx->pc = 0x511D5Cu;
    {
        const bool branch_taken_0x511d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511D5Cu;
            // 0x511d60: 0xae800020  sw          $zero, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511d5c) {
            ctx->pc = 0x511FD8u;
            goto label_511fd8;
        }
    }
    ctx->pc = 0x511D64u;
label_511d64:
    // 0x511d64: 0x0  nop
    ctx->pc = 0x511d64u;
    // NOP
label_511d68:
    // 0x511d68: 0x8e840028  lw          $a0, 0x28($s4)
    ctx->pc = 0x511d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_511d6c:
    // 0x511d6c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_511d70:
    if (ctx->pc == 0x511D70u) {
        ctx->pc = 0x511D74u;
        goto label_511d74;
    }
    ctx->pc = 0x511D6Cu;
    {
        const bool branch_taken_0x511d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x511d6c) {
            ctx->pc = 0x511D88u;
            goto label_511d88;
        }
    }
    ctx->pc = 0x511D74u;
label_511d74:
    // 0x511d74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x511d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511d78:
    // 0x511d78: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x511d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_511d7c:
    // 0x511d7c: 0x320f809  jalr        $t9
label_511d80:
    if (ctx->pc == 0x511D80u) {
        ctx->pc = 0x511D80u;
            // 0x511d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511D84u;
        goto label_511d84;
    }
    ctx->pc = 0x511D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x511D84u);
        ctx->pc = 0x511D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511D7Cu;
            // 0x511d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x511D84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x511D84u; }
            if (ctx->pc != 0x511D84u) { return; }
        }
        }
    }
    ctx->pc = 0x511D84u;
label_511d84:
    // 0x511d84: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x511d84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_511d88:
    // 0x511d88: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x511d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_511d8c:
    // 0x511d8c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_511d90:
    if (ctx->pc == 0x511D90u) {
        ctx->pc = 0x511D94u;
        goto label_511d94;
    }
    ctx->pc = 0x511D8Cu;
    {
        const bool branch_taken_0x511d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x511d8c) {
            ctx->pc = 0x511DA8u;
            goto label_511da8;
        }
    }
    ctx->pc = 0x511D94u;
label_511d94:
    // 0x511d94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x511d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511d98:
    // 0x511d98: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x511d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_511d9c:
    // 0x511d9c: 0x320f809  jalr        $t9
label_511da0:
    if (ctx->pc == 0x511DA0u) {
        ctx->pc = 0x511DA0u;
            // 0x511da0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511DA4u;
        goto label_511da4;
    }
    ctx->pc = 0x511D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x511DA4u);
        ctx->pc = 0x511DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511D9Cu;
            // 0x511da0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x511DA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x511DA4u; }
            if (ctx->pc != 0x511DA4u) { return; }
        }
        }
    }
    ctx->pc = 0x511DA4u;
label_511da4:
    // 0x511da4: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x511da4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_511da8:
    // 0x511da8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x511da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_511dac:
    // 0x511dac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_511db0:
    if (ctx->pc == 0x511DB0u) {
        ctx->pc = 0x511DB4u;
        goto label_511db4;
    }
    ctx->pc = 0x511DACu;
    {
        const bool branch_taken_0x511dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x511dac) {
            ctx->pc = 0x511DD8u;
            goto label_511dd8;
        }
    }
    ctx->pc = 0x511DB4u;
label_511db4:
    // 0x511db4: 0xc077290  jal         func_1DCA40
label_511db8:
    if (ctx->pc == 0x511DB8u) {
        ctx->pc = 0x511DB8u;
            // 0x511db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511DBCu;
        goto label_511dbc;
    }
    ctx->pc = 0x511DB4u;
    SET_GPR_U32(ctx, 31, 0x511DBCu);
    ctx->pc = 0x511DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511DB4u;
            // 0x511db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511DBCu; }
        if (ctx->pc != 0x511DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511DBCu; }
        if (ctx->pc != 0x511DBCu) { return; }
    }
    ctx->pc = 0x511DBCu;
label_511dbc:
    // 0x511dbc: 0xc077224  jal         func_1DC890
label_511dc0:
    if (ctx->pc == 0x511DC0u) {
        ctx->pc = 0x511DC0u;
            // 0x511dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511DC4u;
        goto label_511dc4;
    }
    ctx->pc = 0x511DBCu;
    SET_GPR_U32(ctx, 31, 0x511DC4u);
    ctx->pc = 0x511DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511DBCu;
            // 0x511dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511DC4u; }
        if (ctx->pc != 0x511DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511DC4u; }
        if (ctx->pc != 0x511DC4u) { return; }
    }
    ctx->pc = 0x511DC4u;
label_511dc4:
    // 0x511dc4: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x511dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_511dc8:
    // 0x511dc8: 0xc144860  jal         func_512180
label_511dcc:
    if (ctx->pc == 0x511DCCu) {
        ctx->pc = 0x511DCCu;
            // 0x511dcc: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x511DD0u;
        goto label_511dd0;
    }
    ctx->pc = 0x511DC8u;
    SET_GPR_U32(ctx, 31, 0x511DD0u);
    ctx->pc = 0x511DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511DC8u;
            // 0x511dcc: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x512180u;
    if (runtime->hasFunction(0x512180u)) {
        auto targetFn = runtime->lookupFunction(0x512180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511DD0u; }
        if (ctx->pc != 0x511DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00512180_0x512180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511DD0u; }
        if (ctx->pc != 0x511DD0u) { return; }
    }
    ctx->pc = 0x511DD0u;
label_511dd0:
    // 0x511dd0: 0x10000081  b           . + 4 + (0x81 << 2)
label_511dd4:
    if (ctx->pc == 0x511DD4u) {
        ctx->pc = 0x511DD8u;
        goto label_511dd8;
    }
    ctx->pc = 0x511DD0u;
    {
        const bool branch_taken_0x511dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x511dd0) {
            ctx->pc = 0x511FD8u;
            goto label_511fd8;
        }
    }
    ctx->pc = 0x511DD8u;
label_511dd8:
    // 0x511dd8: 0xc040180  jal         func_100600
label_511ddc:
    if (ctx->pc == 0x511DDCu) {
        ctx->pc = 0x511DDCu;
            // 0x511ddc: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x511DE0u;
        goto label_511de0;
    }
    ctx->pc = 0x511DD8u;
    SET_GPR_U32(ctx, 31, 0x511DE0u);
    ctx->pc = 0x511DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511DD8u;
            // 0x511ddc: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511DE0u; }
        if (ctx->pc != 0x511DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511DE0u; }
        if (ctx->pc != 0x511DE0u) { return; }
    }
    ctx->pc = 0x511DE0u;
label_511de0:
    // 0x511de0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x511de0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_511de4:
    // 0x511de4: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_511de8:
    if (ctx->pc == 0x511DE8u) {
        ctx->pc = 0x511DECu;
        goto label_511dec;
    }
    ctx->pc = 0x511DE4u;
    {
        const bool branch_taken_0x511de4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x511de4) {
            ctx->pc = 0x511E30u;
            goto label_511e30;
        }
    }
    ctx->pc = 0x511DECu;
label_511dec:
    // 0x511dec: 0xc077324  jal         func_1DCC90
label_511df0:
    if (ctx->pc == 0x511DF0u) {
        ctx->pc = 0x511DF0u;
            // 0x511df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511DF4u;
        goto label_511df4;
    }
    ctx->pc = 0x511DECu;
    SET_GPR_U32(ctx, 31, 0x511DF4u);
    ctx->pc = 0x511DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511DECu;
            // 0x511df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511DF4u; }
        if (ctx->pc != 0x511DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511DF4u; }
        if (ctx->pc != 0x511DF4u) { return; }
    }
    ctx->pc = 0x511DF4u;
label_511df4:
    // 0x511df4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x511df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_511df8:
    // 0x511df8: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x511df8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
label_511dfc:
    // 0x511dfc: 0xc077264  jal         func_1DC990
label_511e00:
    if (ctx->pc == 0x511E00u) {
        ctx->pc = 0x511E00u;
            // 0x511e00: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->pc = 0x511E04u;
        goto label_511e04;
    }
    ctx->pc = 0x511DFCu;
    SET_GPR_U32(ctx, 31, 0x511E04u);
    ctx->pc = 0x511E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511DFCu;
            // 0x511e00: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E04u; }
        if (ctx->pc != 0x511E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E04u; }
        if (ctx->pc != 0x511E04u) { return; }
    }
    ctx->pc = 0x511E04u;
label_511e04:
    // 0x511e04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x511e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_511e08:
    // 0x511e08: 0xc077290  jal         func_1DCA40
label_511e0c:
    if (ctx->pc == 0x511E0Cu) {
        ctx->pc = 0x511E0Cu;
            // 0x511e0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511E10u;
        goto label_511e10;
    }
    ctx->pc = 0x511E08u;
    SET_GPR_U32(ctx, 31, 0x511E10u);
    ctx->pc = 0x511E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511E08u;
            // 0x511e0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E10u; }
        if (ctx->pc != 0x511E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E10u; }
        if (ctx->pc != 0x511E10u) { return; }
    }
    ctx->pc = 0x511E10u;
label_511e10:
    // 0x511e10: 0xc077224  jal         func_1DC890
label_511e14:
    if (ctx->pc == 0x511E14u) {
        ctx->pc = 0x511E14u;
            // 0x511e14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511E18u;
        goto label_511e18;
    }
    ctx->pc = 0x511E10u;
    SET_GPR_U32(ctx, 31, 0x511E18u);
    ctx->pc = 0x511E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511E10u;
            // 0x511e14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E18u; }
        if (ctx->pc != 0x511E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E18u; }
        if (ctx->pc != 0x511E18u) { return; }
    }
    ctx->pc = 0x511E18u;
label_511e18:
    // 0x511e18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x511e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_511e1c:
    // 0x511e1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x511e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_511e20:
    // 0x511e20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x511e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_511e24:
    // 0x511e24: 0xc144838  jal         func_5120E0
label_511e28:
    if (ctx->pc == 0x511E28u) {
        ctx->pc = 0x511E28u;
            // 0x511e28: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x511E2Cu;
        goto label_511e2c;
    }
    ctx->pc = 0x511E24u;
    SET_GPR_U32(ctx, 31, 0x511E2Cu);
    ctx->pc = 0x511E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511E24u;
            // 0x511e28: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x5120E0u;
    if (runtime->hasFunction(0x5120E0u)) {
        auto targetFn = runtime->lookupFunction(0x5120E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E2Cu; }
        if (ctx->pc != 0x511E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005120E0_0x5120e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E2Cu; }
        if (ctx->pc != 0x511E2Cu) { return; }
    }
    ctx->pc = 0x511E2Cu;
label_511e2c:
    // 0x511e2c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x511e2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_511e30:
    // 0x511e30: 0x10000069  b           . + 4 + (0x69 << 2)
label_511e34:
    if (ctx->pc == 0x511E34u) {
        ctx->pc = 0x511E34u;
            // 0x511e34: 0xae950024  sw          $s5, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 21));
        ctx->pc = 0x511E38u;
        goto label_511e38;
    }
    ctx->pc = 0x511E30u;
    {
        const bool branch_taken_0x511e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511E30u;
            // 0x511e34: 0xae950024  sw          $s5, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511e30) {
            ctx->pc = 0x511FD8u;
            goto label_511fd8;
        }
    }
    ctx->pc = 0x511E38u;
label_511e38:
    // 0x511e38: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x511e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_511e3c:
    // 0x511e3c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_511e40:
    if (ctx->pc == 0x511E40u) {
        ctx->pc = 0x511E44u;
        goto label_511e44;
    }
    ctx->pc = 0x511E3Cu;
    {
        const bool branch_taken_0x511e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x511e3c) {
            ctx->pc = 0x511E58u;
            goto label_511e58;
        }
    }
    ctx->pc = 0x511E44u;
label_511e44:
    // 0x511e44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x511e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511e48:
    // 0x511e48: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x511e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_511e4c:
    // 0x511e4c: 0x320f809  jalr        $t9
label_511e50:
    if (ctx->pc == 0x511E50u) {
        ctx->pc = 0x511E50u;
            // 0x511e50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511E54u;
        goto label_511e54;
    }
    ctx->pc = 0x511E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x511E54u);
        ctx->pc = 0x511E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511E4Cu;
            // 0x511e50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x511E54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x511E54u; }
            if (ctx->pc != 0x511E54u) { return; }
        }
        }
    }
    ctx->pc = 0x511E54u;
label_511e54:
    // 0x511e54: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x511e54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_511e58:
    // 0x511e58: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x511e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_511e5c:
    // 0x511e5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_511e60:
    if (ctx->pc == 0x511E60u) {
        ctx->pc = 0x511E64u;
        goto label_511e64;
    }
    ctx->pc = 0x511E5Cu;
    {
        const bool branch_taken_0x511e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x511e5c) {
            ctx->pc = 0x511E88u;
            goto label_511e88;
        }
    }
    ctx->pc = 0x511E64u;
label_511e64:
    // 0x511e64: 0xc077290  jal         func_1DCA40
label_511e68:
    if (ctx->pc == 0x511E68u) {
        ctx->pc = 0x511E68u;
            // 0x511e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511E6Cu;
        goto label_511e6c;
    }
    ctx->pc = 0x511E64u;
    SET_GPR_U32(ctx, 31, 0x511E6Cu);
    ctx->pc = 0x511E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511E64u;
            // 0x511e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E6Cu; }
        if (ctx->pc != 0x511E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E6Cu; }
        if (ctx->pc != 0x511E6Cu) { return; }
    }
    ctx->pc = 0x511E6Cu;
label_511e6c:
    // 0x511e6c: 0xc077224  jal         func_1DC890
label_511e70:
    if (ctx->pc == 0x511E70u) {
        ctx->pc = 0x511E70u;
            // 0x511e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511E74u;
        goto label_511e74;
    }
    ctx->pc = 0x511E6Cu;
    SET_GPR_U32(ctx, 31, 0x511E74u);
    ctx->pc = 0x511E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511E6Cu;
            // 0x511e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E74u; }
        if (ctx->pc != 0x511E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E74u; }
        if (ctx->pc != 0x511E74u) { return; }
    }
    ctx->pc = 0x511E74u;
label_511e74:
    // 0x511e74: 0x8e840028  lw          $a0, 0x28($s4)
    ctx->pc = 0x511e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_511e78:
    // 0x511e78: 0xc144834  jal         func_5120D0
label_511e7c:
    if (ctx->pc == 0x511E7Cu) {
        ctx->pc = 0x511E7Cu;
            // 0x511e7c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x511E80u;
        goto label_511e80;
    }
    ctx->pc = 0x511E78u;
    SET_GPR_U32(ctx, 31, 0x511E80u);
    ctx->pc = 0x511E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511E78u;
            // 0x511e7c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x5120D0u;
    if (runtime->hasFunction(0x5120D0u)) {
        auto targetFn = runtime->lookupFunction(0x5120D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E80u; }
        if (ctx->pc != 0x511E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005120D0_0x5120d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E80u; }
        if (ctx->pc != 0x511E80u) { return; }
    }
    ctx->pc = 0x511E80u;
label_511e80:
    // 0x511e80: 0x10000019  b           . + 4 + (0x19 << 2)
label_511e84:
    if (ctx->pc == 0x511E84u) {
        ctx->pc = 0x511E88u;
        goto label_511e88;
    }
    ctx->pc = 0x511E80u;
    {
        const bool branch_taken_0x511e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x511e80) {
            ctx->pc = 0x511EE8u;
            goto label_511ee8;
        }
    }
    ctx->pc = 0x511E88u;
label_511e88:
    // 0x511e88: 0xc040180  jal         func_100600
label_511e8c:
    if (ctx->pc == 0x511E8Cu) {
        ctx->pc = 0x511E8Cu;
            // 0x511e8c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x511E90u;
        goto label_511e90;
    }
    ctx->pc = 0x511E88u;
    SET_GPR_U32(ctx, 31, 0x511E90u);
    ctx->pc = 0x511E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511E88u;
            // 0x511e8c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E90u; }
        if (ctx->pc != 0x511E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511E90u; }
        if (ctx->pc != 0x511E90u) { return; }
    }
    ctx->pc = 0x511E90u;
label_511e90:
    // 0x511e90: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x511e90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_511e94:
    // 0x511e94: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_511e98:
    if (ctx->pc == 0x511E98u) {
        ctx->pc = 0x511E9Cu;
        goto label_511e9c;
    }
    ctx->pc = 0x511E94u;
    {
        const bool branch_taken_0x511e94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x511e94) {
            ctx->pc = 0x511EE0u;
            goto label_511ee0;
        }
    }
    ctx->pc = 0x511E9Cu;
label_511e9c:
    // 0x511e9c: 0xc077324  jal         func_1DCC90
label_511ea0:
    if (ctx->pc == 0x511EA0u) {
        ctx->pc = 0x511EA0u;
            // 0x511ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511EA4u;
        goto label_511ea4;
    }
    ctx->pc = 0x511E9Cu;
    SET_GPR_U32(ctx, 31, 0x511EA4u);
    ctx->pc = 0x511EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511E9Cu;
            // 0x511ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EA4u; }
        if (ctx->pc != 0x511EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EA4u; }
        if (ctx->pc != 0x511EA4u) { return; }
    }
    ctx->pc = 0x511EA4u;
label_511ea4:
    // 0x511ea4: 0x2f63c  dsll32      $fp, $v0, 24
    ctx->pc = 0x511ea4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 24));
label_511ea8:
    // 0x511ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x511ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_511eac:
    // 0x511eac: 0xc077264  jal         func_1DC990
label_511eb0:
    if (ctx->pc == 0x511EB0u) {
        ctx->pc = 0x511EB0u;
            // 0x511eb0: 0x1ef63f  dsra32      $fp, $fp, 24 (Delay Slot)
        SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 24));
        ctx->pc = 0x511EB4u;
        goto label_511eb4;
    }
    ctx->pc = 0x511EACu;
    SET_GPR_U32(ctx, 31, 0x511EB4u);
    ctx->pc = 0x511EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511EACu;
            // 0x511eb0: 0x1ef63f  dsra32      $fp, $fp, 24 (Delay Slot)
        SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EB4u; }
        if (ctx->pc != 0x511EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EB4u; }
        if (ctx->pc != 0x511EB4u) { return; }
    }
    ctx->pc = 0x511EB4u;
label_511eb4:
    // 0x511eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x511eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_511eb8:
    // 0x511eb8: 0xc077290  jal         func_1DCA40
label_511ebc:
    if (ctx->pc == 0x511EBCu) {
        ctx->pc = 0x511EBCu;
            // 0x511ebc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511EC0u;
        goto label_511ec0;
    }
    ctx->pc = 0x511EB8u;
    SET_GPR_U32(ctx, 31, 0x511EC0u);
    ctx->pc = 0x511EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511EB8u;
            // 0x511ebc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EC0u; }
        if (ctx->pc != 0x511EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EC0u; }
        if (ctx->pc != 0x511EC0u) { return; }
    }
    ctx->pc = 0x511EC0u;
label_511ec0:
    // 0x511ec0: 0xc077224  jal         func_1DC890
label_511ec4:
    if (ctx->pc == 0x511EC4u) {
        ctx->pc = 0x511EC4u;
            // 0x511ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511EC8u;
        goto label_511ec8;
    }
    ctx->pc = 0x511EC0u;
    SET_GPR_U32(ctx, 31, 0x511EC8u);
    ctx->pc = 0x511EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511EC0u;
            // 0x511ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EC8u; }
        if (ctx->pc != 0x511EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EC8u; }
        if (ctx->pc != 0x511EC8u) { return; }
    }
    ctx->pc = 0x511EC8u;
label_511ec8:
    // 0x511ec8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x511ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_511ecc:
    // 0x511ecc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x511eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_511ed0:
    // 0x511ed0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x511ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_511ed4:
    // 0x511ed4: 0xc144810  jal         func_512040
label_511ed8:
    if (ctx->pc == 0x511ED8u) {
        ctx->pc = 0x511ED8u;
            // 0x511ed8: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x511EDCu;
        goto label_511edc;
    }
    ctx->pc = 0x511ED4u;
    SET_GPR_U32(ctx, 31, 0x511EDCu);
    ctx->pc = 0x511ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511ED4u;
            // 0x511ed8: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x512040u;
    if (runtime->hasFunction(0x512040u)) {
        auto targetFn = runtime->lookupFunction(0x512040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EDCu; }
        if (ctx->pc != 0x511EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00512040_0x512040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EDCu; }
        if (ctx->pc != 0x511EDCu) { return; }
    }
    ctx->pc = 0x511EDCu;
label_511edc:
    // 0x511edc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x511edcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_511ee0:
    // 0x511ee0: 0xae950028  sw          $s5, 0x28($s4)
    ctx->pc = 0x511ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 21));
label_511ee4:
    // 0x511ee4: 0x0  nop
    ctx->pc = 0x511ee4u;
    // NOP
label_511ee8:
    // 0x511ee8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x511ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_511eec:
    // 0x511eec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_511ef0:
    if (ctx->pc == 0x511EF0u) {
        ctx->pc = 0x511EF4u;
        goto label_511ef4;
    }
    ctx->pc = 0x511EECu;
    {
        const bool branch_taken_0x511eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x511eec) {
            ctx->pc = 0x511F50u;
            goto label_511f50;
        }
    }
    ctx->pc = 0x511EF4u;
label_511ef4:
    // 0x511ef4: 0xc04c710  jal         func_131C40
label_511ef8:
    if (ctx->pc == 0x511EF8u) {
        ctx->pc = 0x511EF8u;
            // 0x511ef8: 0xc6ec0000  lwc1        $f12, 0x0($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x511EFCu;
        goto label_511efc;
    }
    ctx->pc = 0x511EF4u;
    SET_GPR_U32(ctx, 31, 0x511EFCu);
    ctx->pc = 0x511EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511EF4u;
            // 0x511ef8: 0xc6ec0000  lwc1        $f12, 0x0($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EFCu; }
        if (ctx->pc != 0x511EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511EFCu; }
        if (ctx->pc != 0x511EFCu) { return; }
    }
    ctx->pc = 0x511EFCu;
label_511efc:
    // 0x511efc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x511efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_511f00:
    // 0x511f00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x511f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_511f04:
    // 0x511f04: 0x0  nop
    ctx->pc = 0x511f04u;
    // NOP
label_511f08:
    // 0x511f08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x511f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_511f0c:
    // 0x511f0c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_511f10:
    if (ctx->pc == 0x511F10u) {
        ctx->pc = 0x511F10u;
            // 0x511f10: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x511F14u;
        goto label_511f14;
    }
    ctx->pc = 0x511F0Cu;
    {
        const bool branch_taken_0x511f0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x511f0c) {
            ctx->pc = 0x511F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x511F0Cu;
            // 0x511f10: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x511F24u;
            goto label_511f24;
        }
    }
    ctx->pc = 0x511F14u;
label_511f14:
    // 0x511f14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x511f14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_511f18:
    // 0x511f18: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x511f18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_511f1c:
    // 0x511f1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_511f20:
    if (ctx->pc == 0x511F20u) {
        ctx->pc = 0x511F20u;
            // 0x511f20: 0x8e840020  lw          $a0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->pc = 0x511F24u;
        goto label_511f24;
    }
    ctx->pc = 0x511F1Cu;
    {
        const bool branch_taken_0x511f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511F1Cu;
            // 0x511f20: 0x8e840020  lw          $a0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511f1c) {
            ctx->pc = 0x511F3Cu;
            goto label_511f3c;
        }
    }
    ctx->pc = 0x511F24u;
label_511f24:
    // 0x511f24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x511f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_511f28:
    // 0x511f28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x511f28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_511f2c:
    // 0x511f2c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x511f2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_511f30:
    // 0x511f30: 0x0  nop
    ctx->pc = 0x511f30u;
    // NOP
label_511f34:
    // 0x511f34: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x511f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_511f38:
    // 0x511f38: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x511f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_511f3c:
    // 0x511f3c: 0xc14480c  jal         func_512030
label_511f40:
    if (ctx->pc == 0x511F40u) {
        ctx->pc = 0x511F44u;
        goto label_511f44;
    }
    ctx->pc = 0x511F3Cu;
    SET_GPR_U32(ctx, 31, 0x511F44u);
    ctx->pc = 0x512030u;
    if (runtime->hasFunction(0x512030u)) {
        auto targetFn = runtime->lookupFunction(0x512030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511F44u; }
        if (ctx->pc != 0x511F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00512030_0x512030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511F44u; }
        if (ctx->pc != 0x511F44u) { return; }
    }
    ctx->pc = 0x511F44u;
label_511f44:
    // 0x511f44: 0x10000024  b           . + 4 + (0x24 << 2)
label_511f48:
    if (ctx->pc == 0x511F48u) {
        ctx->pc = 0x511F4Cu;
        goto label_511f4c;
    }
    ctx->pc = 0x511F44u;
    {
        const bool branch_taken_0x511f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x511f44) {
            ctx->pc = 0x511FD8u;
            goto label_511fd8;
        }
    }
    ctx->pc = 0x511F4Cu;
label_511f4c:
    // 0x511f4c: 0x0  nop
    ctx->pc = 0x511f4cu;
    // NOP
label_511f50:
    // 0x511f50: 0xc040180  jal         func_100600
label_511f54:
    if (ctx->pc == 0x511F54u) {
        ctx->pc = 0x511F54u;
            // 0x511f54: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x511F58u;
        goto label_511f58;
    }
    ctx->pc = 0x511F50u;
    SET_GPR_U32(ctx, 31, 0x511F58u);
    ctx->pc = 0x511F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511F50u;
            // 0x511f54: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511F58u; }
        if (ctx->pc != 0x511F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511F58u; }
        if (ctx->pc != 0x511F58u) { return; }
    }
    ctx->pc = 0x511F58u;
label_511f58:
    // 0x511f58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x511f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_511f5c:
    // 0x511f5c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_511f60:
    if (ctx->pc == 0x511F60u) {
        ctx->pc = 0x511F64u;
        goto label_511f64;
    }
    ctx->pc = 0x511F5Cu;
    {
        const bool branch_taken_0x511f5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x511f5c) {
            ctx->pc = 0x511FD0u;
            goto label_511fd0;
        }
    }
    ctx->pc = 0x511F64u;
label_511f64:
    // 0x511f64: 0xc077324  jal         func_1DCC90
label_511f68:
    if (ctx->pc == 0x511F68u) {
        ctx->pc = 0x511F68u;
            // 0x511f68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511F6Cu;
        goto label_511f6c;
    }
    ctx->pc = 0x511F64u;
    SET_GPR_U32(ctx, 31, 0x511F6Cu);
    ctx->pc = 0x511F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511F64u;
            // 0x511f68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511F6Cu; }
        if (ctx->pc != 0x511F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511F6Cu; }
        if (ctx->pc != 0x511F6Cu) { return; }
    }
    ctx->pc = 0x511F6Cu;
label_511f6c:
    // 0x511f6c: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x511f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_511f70:
    // 0x511f70: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x511f70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
label_511f74:
    // 0x511f74: 0xc04c710  jal         func_131C40
label_511f78:
    if (ctx->pc == 0x511F78u) {
        ctx->pc = 0x511F78u;
            // 0x511f78: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->pc = 0x511F7Cu;
        goto label_511f7c;
    }
    ctx->pc = 0x511F74u;
    SET_GPR_U32(ctx, 31, 0x511F7Cu);
    ctx->pc = 0x511F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511F74u;
            // 0x511f78: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511F7Cu; }
        if (ctx->pc != 0x511F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511F7Cu; }
        if (ctx->pc != 0x511F7Cu) { return; }
    }
    ctx->pc = 0x511F7Cu;
label_511f7c:
    // 0x511f7c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x511f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_511f80:
    // 0x511f80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x511f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_511f84:
    // 0x511f84: 0x0  nop
    ctx->pc = 0x511f84u;
    // NOP
label_511f88:
    // 0x511f88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x511f88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_511f8c:
    // 0x511f8c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_511f90:
    if (ctx->pc == 0x511F90u) {
        ctx->pc = 0x511F90u;
            // 0x511f90: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x511F94u;
        goto label_511f94;
    }
    ctx->pc = 0x511F8Cu;
    {
        const bool branch_taken_0x511f8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x511f8c) {
            ctx->pc = 0x511F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x511F8Cu;
            // 0x511f90: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x511FA4u;
            goto label_511fa4;
        }
    }
    ctx->pc = 0x511F94u;
label_511f94:
    // 0x511f94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x511f94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_511f98:
    // 0x511f98: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x511f98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_511f9c:
    // 0x511f9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_511fa0:
    if (ctx->pc == 0x511FA0u) {
        ctx->pc = 0x511FA0u;
            // 0x511fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x511FA4u;
        goto label_511fa4;
    }
    ctx->pc = 0x511F9Cu;
    {
        const bool branch_taken_0x511f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511F9Cu;
            // 0x511fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511f9c) {
            ctx->pc = 0x511FBCu;
            goto label_511fbc;
        }
    }
    ctx->pc = 0x511FA4u;
label_511fa4:
    // 0x511fa4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x511fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_511fa8:
    // 0x511fa8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x511fa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_511fac:
    // 0x511fac: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x511facu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_511fb0:
    // 0x511fb0: 0x0  nop
    ctx->pc = 0x511fb0u;
    // NOP
label_511fb4:
    // 0x511fb4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x511fb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_511fb8:
    // 0x511fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x511fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_511fbc:
    // 0x511fbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x511fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_511fc0:
    // 0x511fc0: 0xc151b50  jal         func_546D40
label_511fc4:
    if (ctx->pc == 0x511FC4u) {
        ctx->pc = 0x511FC4u;
            // 0x511fc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x511FC8u;
        goto label_511fc8;
    }
    ctx->pc = 0x511FC0u;
    SET_GPR_U32(ctx, 31, 0x511FC8u);
    ctx->pc = 0x511FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511FC0u;
            // 0x511fc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x546D40u;
    if (runtime->hasFunction(0x546D40u)) {
        auto targetFn = runtime->lookupFunction(0x546D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511FC8u; }
        if (ctx->pc != 0x511FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00546D40_0x546d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511FC8u; }
        if (ctx->pc != 0x511FC8u) { return; }
    }
    ctx->pc = 0x511FC8u;
label_511fc8:
    // 0x511fc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x511fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_511fcc:
    // 0x511fcc: 0x0  nop
    ctx->pc = 0x511fccu;
    // NOP
label_511fd0:
    // 0x511fd0: 0xae910020  sw          $s1, 0x20($s4)
    ctx->pc = 0x511fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 17));
label_511fd4:
    // 0x511fd4: 0x0  nop
    ctx->pc = 0x511fd4u;
    // NOP
label_511fd8:
    // 0x511fd8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x511fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_511fdc:
    // 0x511fdc: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x511fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_511fe0:
    // 0x511fe0: 0x26730058  addiu       $s3, $s3, 0x58
    ctx->pc = 0x511fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_511fe4:
    // 0x511fe4: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x511fe4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_511fe8:
    // 0x511fe8: 0xc0adc48  jal         func_2B7120
label_511fec:
    if (ctx->pc == 0x511FECu) {
        ctx->pc = 0x511FECu;
            // 0x511fec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x511FF0u;
        goto label_511ff0;
    }
    ctx->pc = 0x511FE8u;
    SET_GPR_U32(ctx, 31, 0x511FF0u);
    ctx->pc = 0x511FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511FE8u;
            // 0x511fec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7120u;
    if (runtime->hasFunction(0x2B7120u)) {
        auto targetFn = runtime->lookupFunction(0x2B7120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511FF0u; }
        if (ctx->pc != 0x511FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7120_0x2b7120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511FF0u; }
        if (ctx->pc != 0x511FF0u) { return; }
    }
    ctx->pc = 0x511FF0u;
label_511ff0:
    // 0x511ff0: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x511ff0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_511ff4:
    // 0x511ff4: 0x5460ff30  bnel        $v1, $zero, . + 4 + (-0xD0 << 2)
label_511ff8:
    if (ctx->pc == 0x511FF8u) {
        ctx->pc = 0x511FF8u;
            // 0x511ff8: 0x826500c0  lb          $a1, 0xC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 192)));
        ctx->pc = 0x511FFCu;
        goto label_511ffc;
    }
    ctx->pc = 0x511FF4u;
    {
        const bool branch_taken_0x511ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x511ff4) {
            ctx->pc = 0x511FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x511FF4u;
            // 0x511ff8: 0x826500c0  lb          $a1, 0xC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x511CB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511cb8;
        }
    }
    ctx->pc = 0x511FFCu;
label_511ffc:
    // 0x511ffc: 0x0  nop
    ctx->pc = 0x511ffcu;
    // NOP
label_512000:
    // 0x512000: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x512000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_512004:
    // 0x512004: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x512004u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_512008:
    // 0x512008: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x512008u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_51200c:
    // 0x51200c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x51200cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_512010:
    // 0x512010: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x512010u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_512014:
    // 0x512014: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x512014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_512018:
    // 0x512018: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x512018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51201c:
    // 0x51201c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51201cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_512020:
    // 0x512020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x512020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_512024:
    // 0x512024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x512024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_512028:
    // 0x512028: 0x3e00008  jr          $ra
label_51202c:
    if (ctx->pc == 0x51202Cu) {
        ctx->pc = 0x51202Cu;
            // 0x51202c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x512030u;
        goto label_fallthrough_0x512028;
    }
    ctx->pc = 0x512028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51202Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x512028u;
            // 0x51202c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x512028:
    ctx->pc = 0x512030u;
}
