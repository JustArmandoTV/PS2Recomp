#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002547B0
// Address: 0x2547b0 - 0x257110
void sub_002547B0_0x2547b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002547B0_0x2547b0");
#endif

    switch (ctx->pc) {
        case 0x2547b0u: goto label_2547b0;
        case 0x2547b4u: goto label_2547b4;
        case 0x2547b8u: goto label_2547b8;
        case 0x2547bcu: goto label_2547bc;
        case 0x2547c0u: goto label_2547c0;
        case 0x2547c4u: goto label_2547c4;
        case 0x2547c8u: goto label_2547c8;
        case 0x2547ccu: goto label_2547cc;
        case 0x2547d0u: goto label_2547d0;
        case 0x2547d4u: goto label_2547d4;
        case 0x2547d8u: goto label_2547d8;
        case 0x2547dcu: goto label_2547dc;
        case 0x2547e0u: goto label_2547e0;
        case 0x2547e4u: goto label_2547e4;
        case 0x2547e8u: goto label_2547e8;
        case 0x2547ecu: goto label_2547ec;
        case 0x2547f0u: goto label_2547f0;
        case 0x2547f4u: goto label_2547f4;
        case 0x2547f8u: goto label_2547f8;
        case 0x2547fcu: goto label_2547fc;
        case 0x254800u: goto label_254800;
        case 0x254804u: goto label_254804;
        case 0x254808u: goto label_254808;
        case 0x25480cu: goto label_25480c;
        case 0x254810u: goto label_254810;
        case 0x254814u: goto label_254814;
        case 0x254818u: goto label_254818;
        case 0x25481cu: goto label_25481c;
        case 0x254820u: goto label_254820;
        case 0x254824u: goto label_254824;
        case 0x254828u: goto label_254828;
        case 0x25482cu: goto label_25482c;
        case 0x254830u: goto label_254830;
        case 0x254834u: goto label_254834;
        case 0x254838u: goto label_254838;
        case 0x25483cu: goto label_25483c;
        case 0x254840u: goto label_254840;
        case 0x254844u: goto label_254844;
        case 0x254848u: goto label_254848;
        case 0x25484cu: goto label_25484c;
        case 0x254850u: goto label_254850;
        case 0x254854u: goto label_254854;
        case 0x254858u: goto label_254858;
        case 0x25485cu: goto label_25485c;
        case 0x254860u: goto label_254860;
        case 0x254864u: goto label_254864;
        case 0x254868u: goto label_254868;
        case 0x25486cu: goto label_25486c;
        case 0x254870u: goto label_254870;
        case 0x254874u: goto label_254874;
        case 0x254878u: goto label_254878;
        case 0x25487cu: goto label_25487c;
        case 0x254880u: goto label_254880;
        case 0x254884u: goto label_254884;
        case 0x254888u: goto label_254888;
        case 0x25488cu: goto label_25488c;
        case 0x254890u: goto label_254890;
        case 0x254894u: goto label_254894;
        case 0x254898u: goto label_254898;
        case 0x25489cu: goto label_25489c;
        case 0x2548a0u: goto label_2548a0;
        case 0x2548a4u: goto label_2548a4;
        case 0x2548a8u: goto label_2548a8;
        case 0x2548acu: goto label_2548ac;
        case 0x2548b0u: goto label_2548b0;
        case 0x2548b4u: goto label_2548b4;
        case 0x2548b8u: goto label_2548b8;
        case 0x2548bcu: goto label_2548bc;
        case 0x2548c0u: goto label_2548c0;
        case 0x2548c4u: goto label_2548c4;
        case 0x2548c8u: goto label_2548c8;
        case 0x2548ccu: goto label_2548cc;
        case 0x2548d0u: goto label_2548d0;
        case 0x2548d4u: goto label_2548d4;
        case 0x2548d8u: goto label_2548d8;
        case 0x2548dcu: goto label_2548dc;
        case 0x2548e0u: goto label_2548e0;
        case 0x2548e4u: goto label_2548e4;
        case 0x2548e8u: goto label_2548e8;
        case 0x2548ecu: goto label_2548ec;
        case 0x2548f0u: goto label_2548f0;
        case 0x2548f4u: goto label_2548f4;
        case 0x2548f8u: goto label_2548f8;
        case 0x2548fcu: goto label_2548fc;
        case 0x254900u: goto label_254900;
        case 0x254904u: goto label_254904;
        case 0x254908u: goto label_254908;
        case 0x25490cu: goto label_25490c;
        case 0x254910u: goto label_254910;
        case 0x254914u: goto label_254914;
        case 0x254918u: goto label_254918;
        case 0x25491cu: goto label_25491c;
        case 0x254920u: goto label_254920;
        case 0x254924u: goto label_254924;
        case 0x254928u: goto label_254928;
        case 0x25492cu: goto label_25492c;
        case 0x254930u: goto label_254930;
        case 0x254934u: goto label_254934;
        case 0x254938u: goto label_254938;
        case 0x25493cu: goto label_25493c;
        case 0x254940u: goto label_254940;
        case 0x254944u: goto label_254944;
        case 0x254948u: goto label_254948;
        case 0x25494cu: goto label_25494c;
        case 0x254950u: goto label_254950;
        case 0x254954u: goto label_254954;
        case 0x254958u: goto label_254958;
        case 0x25495cu: goto label_25495c;
        case 0x254960u: goto label_254960;
        case 0x254964u: goto label_254964;
        case 0x254968u: goto label_254968;
        case 0x25496cu: goto label_25496c;
        case 0x254970u: goto label_254970;
        case 0x254974u: goto label_254974;
        case 0x254978u: goto label_254978;
        case 0x25497cu: goto label_25497c;
        case 0x254980u: goto label_254980;
        case 0x254984u: goto label_254984;
        case 0x254988u: goto label_254988;
        case 0x25498cu: goto label_25498c;
        case 0x254990u: goto label_254990;
        case 0x254994u: goto label_254994;
        case 0x254998u: goto label_254998;
        case 0x25499cu: goto label_25499c;
        case 0x2549a0u: goto label_2549a0;
        case 0x2549a4u: goto label_2549a4;
        case 0x2549a8u: goto label_2549a8;
        case 0x2549acu: goto label_2549ac;
        case 0x2549b0u: goto label_2549b0;
        case 0x2549b4u: goto label_2549b4;
        case 0x2549b8u: goto label_2549b8;
        case 0x2549bcu: goto label_2549bc;
        case 0x2549c0u: goto label_2549c0;
        case 0x2549c4u: goto label_2549c4;
        case 0x2549c8u: goto label_2549c8;
        case 0x2549ccu: goto label_2549cc;
        case 0x2549d0u: goto label_2549d0;
        case 0x2549d4u: goto label_2549d4;
        case 0x2549d8u: goto label_2549d8;
        case 0x2549dcu: goto label_2549dc;
        case 0x2549e0u: goto label_2549e0;
        case 0x2549e4u: goto label_2549e4;
        case 0x2549e8u: goto label_2549e8;
        case 0x2549ecu: goto label_2549ec;
        case 0x2549f0u: goto label_2549f0;
        case 0x2549f4u: goto label_2549f4;
        case 0x2549f8u: goto label_2549f8;
        case 0x2549fcu: goto label_2549fc;
        case 0x254a00u: goto label_254a00;
        case 0x254a04u: goto label_254a04;
        case 0x254a08u: goto label_254a08;
        case 0x254a0cu: goto label_254a0c;
        case 0x254a10u: goto label_254a10;
        case 0x254a14u: goto label_254a14;
        case 0x254a18u: goto label_254a18;
        case 0x254a1cu: goto label_254a1c;
        case 0x254a20u: goto label_254a20;
        case 0x254a24u: goto label_254a24;
        case 0x254a28u: goto label_254a28;
        case 0x254a2cu: goto label_254a2c;
        case 0x254a30u: goto label_254a30;
        case 0x254a34u: goto label_254a34;
        case 0x254a38u: goto label_254a38;
        case 0x254a3cu: goto label_254a3c;
        case 0x254a40u: goto label_254a40;
        case 0x254a44u: goto label_254a44;
        case 0x254a48u: goto label_254a48;
        case 0x254a4cu: goto label_254a4c;
        case 0x254a50u: goto label_254a50;
        case 0x254a54u: goto label_254a54;
        case 0x254a58u: goto label_254a58;
        case 0x254a5cu: goto label_254a5c;
        case 0x254a60u: goto label_254a60;
        case 0x254a64u: goto label_254a64;
        case 0x254a68u: goto label_254a68;
        case 0x254a6cu: goto label_254a6c;
        case 0x254a70u: goto label_254a70;
        case 0x254a74u: goto label_254a74;
        case 0x254a78u: goto label_254a78;
        case 0x254a7cu: goto label_254a7c;
        case 0x254a80u: goto label_254a80;
        case 0x254a84u: goto label_254a84;
        case 0x254a88u: goto label_254a88;
        case 0x254a8cu: goto label_254a8c;
        case 0x254a90u: goto label_254a90;
        case 0x254a94u: goto label_254a94;
        case 0x254a98u: goto label_254a98;
        case 0x254a9cu: goto label_254a9c;
        case 0x254aa0u: goto label_254aa0;
        case 0x254aa4u: goto label_254aa4;
        case 0x254aa8u: goto label_254aa8;
        case 0x254aacu: goto label_254aac;
        case 0x254ab0u: goto label_254ab0;
        case 0x254ab4u: goto label_254ab4;
        case 0x254ab8u: goto label_254ab8;
        case 0x254abcu: goto label_254abc;
        case 0x254ac0u: goto label_254ac0;
        case 0x254ac4u: goto label_254ac4;
        case 0x254ac8u: goto label_254ac8;
        case 0x254accu: goto label_254acc;
        case 0x254ad0u: goto label_254ad0;
        case 0x254ad4u: goto label_254ad4;
        case 0x254ad8u: goto label_254ad8;
        case 0x254adcu: goto label_254adc;
        case 0x254ae0u: goto label_254ae0;
        case 0x254ae4u: goto label_254ae4;
        case 0x254ae8u: goto label_254ae8;
        case 0x254aecu: goto label_254aec;
        case 0x254af0u: goto label_254af0;
        case 0x254af4u: goto label_254af4;
        case 0x254af8u: goto label_254af8;
        case 0x254afcu: goto label_254afc;
        case 0x254b00u: goto label_254b00;
        case 0x254b04u: goto label_254b04;
        case 0x254b08u: goto label_254b08;
        case 0x254b0cu: goto label_254b0c;
        case 0x254b10u: goto label_254b10;
        case 0x254b14u: goto label_254b14;
        case 0x254b18u: goto label_254b18;
        case 0x254b1cu: goto label_254b1c;
        case 0x254b20u: goto label_254b20;
        case 0x254b24u: goto label_254b24;
        case 0x254b28u: goto label_254b28;
        case 0x254b2cu: goto label_254b2c;
        case 0x254b30u: goto label_254b30;
        case 0x254b34u: goto label_254b34;
        case 0x254b38u: goto label_254b38;
        case 0x254b3cu: goto label_254b3c;
        case 0x254b40u: goto label_254b40;
        case 0x254b44u: goto label_254b44;
        case 0x254b48u: goto label_254b48;
        case 0x254b4cu: goto label_254b4c;
        case 0x254b50u: goto label_254b50;
        case 0x254b54u: goto label_254b54;
        case 0x254b58u: goto label_254b58;
        case 0x254b5cu: goto label_254b5c;
        case 0x254b60u: goto label_254b60;
        case 0x254b64u: goto label_254b64;
        case 0x254b68u: goto label_254b68;
        case 0x254b6cu: goto label_254b6c;
        case 0x254b70u: goto label_254b70;
        case 0x254b74u: goto label_254b74;
        case 0x254b78u: goto label_254b78;
        case 0x254b7cu: goto label_254b7c;
        case 0x254b80u: goto label_254b80;
        case 0x254b84u: goto label_254b84;
        case 0x254b88u: goto label_254b88;
        case 0x254b8cu: goto label_254b8c;
        case 0x254b90u: goto label_254b90;
        case 0x254b94u: goto label_254b94;
        case 0x254b98u: goto label_254b98;
        case 0x254b9cu: goto label_254b9c;
        case 0x254ba0u: goto label_254ba0;
        case 0x254ba4u: goto label_254ba4;
        case 0x254ba8u: goto label_254ba8;
        case 0x254bacu: goto label_254bac;
        case 0x254bb0u: goto label_254bb0;
        case 0x254bb4u: goto label_254bb4;
        case 0x254bb8u: goto label_254bb8;
        case 0x254bbcu: goto label_254bbc;
        case 0x254bc0u: goto label_254bc0;
        case 0x254bc4u: goto label_254bc4;
        case 0x254bc8u: goto label_254bc8;
        case 0x254bccu: goto label_254bcc;
        case 0x254bd0u: goto label_254bd0;
        case 0x254bd4u: goto label_254bd4;
        case 0x254bd8u: goto label_254bd8;
        case 0x254bdcu: goto label_254bdc;
        case 0x254be0u: goto label_254be0;
        case 0x254be4u: goto label_254be4;
        case 0x254be8u: goto label_254be8;
        case 0x254becu: goto label_254bec;
        case 0x254bf0u: goto label_254bf0;
        case 0x254bf4u: goto label_254bf4;
        case 0x254bf8u: goto label_254bf8;
        case 0x254bfcu: goto label_254bfc;
        case 0x254c00u: goto label_254c00;
        case 0x254c04u: goto label_254c04;
        case 0x254c08u: goto label_254c08;
        case 0x254c0cu: goto label_254c0c;
        case 0x254c10u: goto label_254c10;
        case 0x254c14u: goto label_254c14;
        case 0x254c18u: goto label_254c18;
        case 0x254c1cu: goto label_254c1c;
        case 0x254c20u: goto label_254c20;
        case 0x254c24u: goto label_254c24;
        case 0x254c28u: goto label_254c28;
        case 0x254c2cu: goto label_254c2c;
        case 0x254c30u: goto label_254c30;
        case 0x254c34u: goto label_254c34;
        case 0x254c38u: goto label_254c38;
        case 0x254c3cu: goto label_254c3c;
        case 0x254c40u: goto label_254c40;
        case 0x254c44u: goto label_254c44;
        case 0x254c48u: goto label_254c48;
        case 0x254c4cu: goto label_254c4c;
        case 0x254c50u: goto label_254c50;
        case 0x254c54u: goto label_254c54;
        case 0x254c58u: goto label_254c58;
        case 0x254c5cu: goto label_254c5c;
        case 0x254c60u: goto label_254c60;
        case 0x254c64u: goto label_254c64;
        case 0x254c68u: goto label_254c68;
        case 0x254c6cu: goto label_254c6c;
        case 0x254c70u: goto label_254c70;
        case 0x254c74u: goto label_254c74;
        case 0x254c78u: goto label_254c78;
        case 0x254c7cu: goto label_254c7c;
        case 0x254c80u: goto label_254c80;
        case 0x254c84u: goto label_254c84;
        case 0x254c88u: goto label_254c88;
        case 0x254c8cu: goto label_254c8c;
        case 0x254c90u: goto label_254c90;
        case 0x254c94u: goto label_254c94;
        case 0x254c98u: goto label_254c98;
        case 0x254c9cu: goto label_254c9c;
        case 0x254ca0u: goto label_254ca0;
        case 0x254ca4u: goto label_254ca4;
        case 0x254ca8u: goto label_254ca8;
        case 0x254cacu: goto label_254cac;
        case 0x254cb0u: goto label_254cb0;
        case 0x254cb4u: goto label_254cb4;
        case 0x254cb8u: goto label_254cb8;
        case 0x254cbcu: goto label_254cbc;
        case 0x254cc0u: goto label_254cc0;
        case 0x254cc4u: goto label_254cc4;
        case 0x254cc8u: goto label_254cc8;
        case 0x254cccu: goto label_254ccc;
        case 0x254cd0u: goto label_254cd0;
        case 0x254cd4u: goto label_254cd4;
        case 0x254cd8u: goto label_254cd8;
        case 0x254cdcu: goto label_254cdc;
        case 0x254ce0u: goto label_254ce0;
        case 0x254ce4u: goto label_254ce4;
        case 0x254ce8u: goto label_254ce8;
        case 0x254cecu: goto label_254cec;
        case 0x254cf0u: goto label_254cf0;
        case 0x254cf4u: goto label_254cf4;
        case 0x254cf8u: goto label_254cf8;
        case 0x254cfcu: goto label_254cfc;
        case 0x254d00u: goto label_254d00;
        case 0x254d04u: goto label_254d04;
        case 0x254d08u: goto label_254d08;
        case 0x254d0cu: goto label_254d0c;
        case 0x254d10u: goto label_254d10;
        case 0x254d14u: goto label_254d14;
        case 0x254d18u: goto label_254d18;
        case 0x254d1cu: goto label_254d1c;
        case 0x254d20u: goto label_254d20;
        case 0x254d24u: goto label_254d24;
        case 0x254d28u: goto label_254d28;
        case 0x254d2cu: goto label_254d2c;
        case 0x254d30u: goto label_254d30;
        case 0x254d34u: goto label_254d34;
        case 0x254d38u: goto label_254d38;
        case 0x254d3cu: goto label_254d3c;
        case 0x254d40u: goto label_254d40;
        case 0x254d44u: goto label_254d44;
        case 0x254d48u: goto label_254d48;
        case 0x254d4cu: goto label_254d4c;
        case 0x254d50u: goto label_254d50;
        case 0x254d54u: goto label_254d54;
        case 0x254d58u: goto label_254d58;
        case 0x254d5cu: goto label_254d5c;
        case 0x254d60u: goto label_254d60;
        case 0x254d64u: goto label_254d64;
        case 0x254d68u: goto label_254d68;
        case 0x254d6cu: goto label_254d6c;
        case 0x254d70u: goto label_254d70;
        case 0x254d74u: goto label_254d74;
        case 0x254d78u: goto label_254d78;
        case 0x254d7cu: goto label_254d7c;
        case 0x254d80u: goto label_254d80;
        case 0x254d84u: goto label_254d84;
        case 0x254d88u: goto label_254d88;
        case 0x254d8cu: goto label_254d8c;
        case 0x254d90u: goto label_254d90;
        case 0x254d94u: goto label_254d94;
        case 0x254d98u: goto label_254d98;
        case 0x254d9cu: goto label_254d9c;
        case 0x254da0u: goto label_254da0;
        case 0x254da4u: goto label_254da4;
        case 0x254da8u: goto label_254da8;
        case 0x254dacu: goto label_254dac;
        case 0x254db0u: goto label_254db0;
        case 0x254db4u: goto label_254db4;
        case 0x254db8u: goto label_254db8;
        case 0x254dbcu: goto label_254dbc;
        case 0x254dc0u: goto label_254dc0;
        case 0x254dc4u: goto label_254dc4;
        case 0x254dc8u: goto label_254dc8;
        case 0x254dccu: goto label_254dcc;
        case 0x254dd0u: goto label_254dd0;
        case 0x254dd4u: goto label_254dd4;
        case 0x254dd8u: goto label_254dd8;
        case 0x254ddcu: goto label_254ddc;
        case 0x254de0u: goto label_254de0;
        case 0x254de4u: goto label_254de4;
        case 0x254de8u: goto label_254de8;
        case 0x254decu: goto label_254dec;
        case 0x254df0u: goto label_254df0;
        case 0x254df4u: goto label_254df4;
        case 0x254df8u: goto label_254df8;
        case 0x254dfcu: goto label_254dfc;
        case 0x254e00u: goto label_254e00;
        case 0x254e04u: goto label_254e04;
        case 0x254e08u: goto label_254e08;
        case 0x254e0cu: goto label_254e0c;
        case 0x254e10u: goto label_254e10;
        case 0x254e14u: goto label_254e14;
        case 0x254e18u: goto label_254e18;
        case 0x254e1cu: goto label_254e1c;
        case 0x254e20u: goto label_254e20;
        case 0x254e24u: goto label_254e24;
        case 0x254e28u: goto label_254e28;
        case 0x254e2cu: goto label_254e2c;
        case 0x254e30u: goto label_254e30;
        case 0x254e34u: goto label_254e34;
        case 0x254e38u: goto label_254e38;
        case 0x254e3cu: goto label_254e3c;
        case 0x254e40u: goto label_254e40;
        case 0x254e44u: goto label_254e44;
        case 0x254e48u: goto label_254e48;
        case 0x254e4cu: goto label_254e4c;
        case 0x254e50u: goto label_254e50;
        case 0x254e54u: goto label_254e54;
        case 0x254e58u: goto label_254e58;
        case 0x254e5cu: goto label_254e5c;
        case 0x254e60u: goto label_254e60;
        case 0x254e64u: goto label_254e64;
        case 0x254e68u: goto label_254e68;
        case 0x254e6cu: goto label_254e6c;
        case 0x254e70u: goto label_254e70;
        case 0x254e74u: goto label_254e74;
        case 0x254e78u: goto label_254e78;
        case 0x254e7cu: goto label_254e7c;
        case 0x254e80u: goto label_254e80;
        case 0x254e84u: goto label_254e84;
        case 0x254e88u: goto label_254e88;
        case 0x254e8cu: goto label_254e8c;
        case 0x254e90u: goto label_254e90;
        case 0x254e94u: goto label_254e94;
        case 0x254e98u: goto label_254e98;
        case 0x254e9cu: goto label_254e9c;
        case 0x254ea0u: goto label_254ea0;
        case 0x254ea4u: goto label_254ea4;
        case 0x254ea8u: goto label_254ea8;
        case 0x254eacu: goto label_254eac;
        case 0x254eb0u: goto label_254eb0;
        case 0x254eb4u: goto label_254eb4;
        case 0x254eb8u: goto label_254eb8;
        case 0x254ebcu: goto label_254ebc;
        case 0x254ec0u: goto label_254ec0;
        case 0x254ec4u: goto label_254ec4;
        case 0x254ec8u: goto label_254ec8;
        case 0x254eccu: goto label_254ecc;
        case 0x254ed0u: goto label_254ed0;
        case 0x254ed4u: goto label_254ed4;
        case 0x254ed8u: goto label_254ed8;
        case 0x254edcu: goto label_254edc;
        case 0x254ee0u: goto label_254ee0;
        case 0x254ee4u: goto label_254ee4;
        case 0x254ee8u: goto label_254ee8;
        case 0x254eecu: goto label_254eec;
        case 0x254ef0u: goto label_254ef0;
        case 0x254ef4u: goto label_254ef4;
        case 0x254ef8u: goto label_254ef8;
        case 0x254efcu: goto label_254efc;
        case 0x254f00u: goto label_254f00;
        case 0x254f04u: goto label_254f04;
        case 0x254f08u: goto label_254f08;
        case 0x254f0cu: goto label_254f0c;
        case 0x254f10u: goto label_254f10;
        case 0x254f14u: goto label_254f14;
        case 0x254f18u: goto label_254f18;
        case 0x254f1cu: goto label_254f1c;
        case 0x254f20u: goto label_254f20;
        case 0x254f24u: goto label_254f24;
        case 0x254f28u: goto label_254f28;
        case 0x254f2cu: goto label_254f2c;
        case 0x254f30u: goto label_254f30;
        case 0x254f34u: goto label_254f34;
        case 0x254f38u: goto label_254f38;
        case 0x254f3cu: goto label_254f3c;
        case 0x254f40u: goto label_254f40;
        case 0x254f44u: goto label_254f44;
        case 0x254f48u: goto label_254f48;
        case 0x254f4cu: goto label_254f4c;
        case 0x254f50u: goto label_254f50;
        case 0x254f54u: goto label_254f54;
        case 0x254f58u: goto label_254f58;
        case 0x254f5cu: goto label_254f5c;
        case 0x254f60u: goto label_254f60;
        case 0x254f64u: goto label_254f64;
        case 0x254f68u: goto label_254f68;
        case 0x254f6cu: goto label_254f6c;
        case 0x254f70u: goto label_254f70;
        case 0x254f74u: goto label_254f74;
        case 0x254f78u: goto label_254f78;
        case 0x254f7cu: goto label_254f7c;
        case 0x254f80u: goto label_254f80;
        case 0x254f84u: goto label_254f84;
        case 0x254f88u: goto label_254f88;
        case 0x254f8cu: goto label_254f8c;
        case 0x254f90u: goto label_254f90;
        case 0x254f94u: goto label_254f94;
        case 0x254f98u: goto label_254f98;
        case 0x254f9cu: goto label_254f9c;
        case 0x254fa0u: goto label_254fa0;
        case 0x254fa4u: goto label_254fa4;
        case 0x254fa8u: goto label_254fa8;
        case 0x254facu: goto label_254fac;
        case 0x254fb0u: goto label_254fb0;
        case 0x254fb4u: goto label_254fb4;
        case 0x254fb8u: goto label_254fb8;
        case 0x254fbcu: goto label_254fbc;
        case 0x254fc0u: goto label_254fc0;
        case 0x254fc4u: goto label_254fc4;
        case 0x254fc8u: goto label_254fc8;
        case 0x254fccu: goto label_254fcc;
        case 0x254fd0u: goto label_254fd0;
        case 0x254fd4u: goto label_254fd4;
        case 0x254fd8u: goto label_254fd8;
        case 0x254fdcu: goto label_254fdc;
        case 0x254fe0u: goto label_254fe0;
        case 0x254fe4u: goto label_254fe4;
        case 0x254fe8u: goto label_254fe8;
        case 0x254fecu: goto label_254fec;
        case 0x254ff0u: goto label_254ff0;
        case 0x254ff4u: goto label_254ff4;
        case 0x254ff8u: goto label_254ff8;
        case 0x254ffcu: goto label_254ffc;
        case 0x255000u: goto label_255000;
        case 0x255004u: goto label_255004;
        case 0x255008u: goto label_255008;
        case 0x25500cu: goto label_25500c;
        case 0x255010u: goto label_255010;
        case 0x255014u: goto label_255014;
        case 0x255018u: goto label_255018;
        case 0x25501cu: goto label_25501c;
        case 0x255020u: goto label_255020;
        case 0x255024u: goto label_255024;
        case 0x255028u: goto label_255028;
        case 0x25502cu: goto label_25502c;
        case 0x255030u: goto label_255030;
        case 0x255034u: goto label_255034;
        case 0x255038u: goto label_255038;
        case 0x25503cu: goto label_25503c;
        case 0x255040u: goto label_255040;
        case 0x255044u: goto label_255044;
        case 0x255048u: goto label_255048;
        case 0x25504cu: goto label_25504c;
        case 0x255050u: goto label_255050;
        case 0x255054u: goto label_255054;
        case 0x255058u: goto label_255058;
        case 0x25505cu: goto label_25505c;
        case 0x255060u: goto label_255060;
        case 0x255064u: goto label_255064;
        case 0x255068u: goto label_255068;
        case 0x25506cu: goto label_25506c;
        case 0x255070u: goto label_255070;
        case 0x255074u: goto label_255074;
        case 0x255078u: goto label_255078;
        case 0x25507cu: goto label_25507c;
        case 0x255080u: goto label_255080;
        case 0x255084u: goto label_255084;
        case 0x255088u: goto label_255088;
        case 0x25508cu: goto label_25508c;
        case 0x255090u: goto label_255090;
        case 0x255094u: goto label_255094;
        case 0x255098u: goto label_255098;
        case 0x25509cu: goto label_25509c;
        case 0x2550a0u: goto label_2550a0;
        case 0x2550a4u: goto label_2550a4;
        case 0x2550a8u: goto label_2550a8;
        case 0x2550acu: goto label_2550ac;
        case 0x2550b0u: goto label_2550b0;
        case 0x2550b4u: goto label_2550b4;
        case 0x2550b8u: goto label_2550b8;
        case 0x2550bcu: goto label_2550bc;
        case 0x2550c0u: goto label_2550c0;
        case 0x2550c4u: goto label_2550c4;
        case 0x2550c8u: goto label_2550c8;
        case 0x2550ccu: goto label_2550cc;
        case 0x2550d0u: goto label_2550d0;
        case 0x2550d4u: goto label_2550d4;
        case 0x2550d8u: goto label_2550d8;
        case 0x2550dcu: goto label_2550dc;
        case 0x2550e0u: goto label_2550e0;
        case 0x2550e4u: goto label_2550e4;
        case 0x2550e8u: goto label_2550e8;
        case 0x2550ecu: goto label_2550ec;
        case 0x2550f0u: goto label_2550f0;
        case 0x2550f4u: goto label_2550f4;
        case 0x2550f8u: goto label_2550f8;
        case 0x2550fcu: goto label_2550fc;
        case 0x255100u: goto label_255100;
        case 0x255104u: goto label_255104;
        case 0x255108u: goto label_255108;
        case 0x25510cu: goto label_25510c;
        case 0x255110u: goto label_255110;
        case 0x255114u: goto label_255114;
        case 0x255118u: goto label_255118;
        case 0x25511cu: goto label_25511c;
        case 0x255120u: goto label_255120;
        case 0x255124u: goto label_255124;
        case 0x255128u: goto label_255128;
        case 0x25512cu: goto label_25512c;
        case 0x255130u: goto label_255130;
        case 0x255134u: goto label_255134;
        case 0x255138u: goto label_255138;
        case 0x25513cu: goto label_25513c;
        case 0x255140u: goto label_255140;
        case 0x255144u: goto label_255144;
        case 0x255148u: goto label_255148;
        case 0x25514cu: goto label_25514c;
        case 0x255150u: goto label_255150;
        case 0x255154u: goto label_255154;
        case 0x255158u: goto label_255158;
        case 0x25515cu: goto label_25515c;
        case 0x255160u: goto label_255160;
        case 0x255164u: goto label_255164;
        case 0x255168u: goto label_255168;
        case 0x25516cu: goto label_25516c;
        case 0x255170u: goto label_255170;
        case 0x255174u: goto label_255174;
        case 0x255178u: goto label_255178;
        case 0x25517cu: goto label_25517c;
        case 0x255180u: goto label_255180;
        case 0x255184u: goto label_255184;
        case 0x255188u: goto label_255188;
        case 0x25518cu: goto label_25518c;
        case 0x255190u: goto label_255190;
        case 0x255194u: goto label_255194;
        case 0x255198u: goto label_255198;
        case 0x25519cu: goto label_25519c;
        case 0x2551a0u: goto label_2551a0;
        case 0x2551a4u: goto label_2551a4;
        case 0x2551a8u: goto label_2551a8;
        case 0x2551acu: goto label_2551ac;
        case 0x2551b0u: goto label_2551b0;
        case 0x2551b4u: goto label_2551b4;
        case 0x2551b8u: goto label_2551b8;
        case 0x2551bcu: goto label_2551bc;
        case 0x2551c0u: goto label_2551c0;
        case 0x2551c4u: goto label_2551c4;
        case 0x2551c8u: goto label_2551c8;
        case 0x2551ccu: goto label_2551cc;
        case 0x2551d0u: goto label_2551d0;
        case 0x2551d4u: goto label_2551d4;
        case 0x2551d8u: goto label_2551d8;
        case 0x2551dcu: goto label_2551dc;
        case 0x2551e0u: goto label_2551e0;
        case 0x2551e4u: goto label_2551e4;
        case 0x2551e8u: goto label_2551e8;
        case 0x2551ecu: goto label_2551ec;
        case 0x2551f0u: goto label_2551f0;
        case 0x2551f4u: goto label_2551f4;
        case 0x2551f8u: goto label_2551f8;
        case 0x2551fcu: goto label_2551fc;
        case 0x255200u: goto label_255200;
        case 0x255204u: goto label_255204;
        case 0x255208u: goto label_255208;
        case 0x25520cu: goto label_25520c;
        case 0x255210u: goto label_255210;
        case 0x255214u: goto label_255214;
        case 0x255218u: goto label_255218;
        case 0x25521cu: goto label_25521c;
        case 0x255220u: goto label_255220;
        case 0x255224u: goto label_255224;
        case 0x255228u: goto label_255228;
        case 0x25522cu: goto label_25522c;
        case 0x255230u: goto label_255230;
        case 0x255234u: goto label_255234;
        case 0x255238u: goto label_255238;
        case 0x25523cu: goto label_25523c;
        case 0x255240u: goto label_255240;
        case 0x255244u: goto label_255244;
        case 0x255248u: goto label_255248;
        case 0x25524cu: goto label_25524c;
        case 0x255250u: goto label_255250;
        case 0x255254u: goto label_255254;
        case 0x255258u: goto label_255258;
        case 0x25525cu: goto label_25525c;
        case 0x255260u: goto label_255260;
        case 0x255264u: goto label_255264;
        case 0x255268u: goto label_255268;
        case 0x25526cu: goto label_25526c;
        case 0x255270u: goto label_255270;
        case 0x255274u: goto label_255274;
        case 0x255278u: goto label_255278;
        case 0x25527cu: goto label_25527c;
        case 0x255280u: goto label_255280;
        case 0x255284u: goto label_255284;
        case 0x255288u: goto label_255288;
        case 0x25528cu: goto label_25528c;
        case 0x255290u: goto label_255290;
        case 0x255294u: goto label_255294;
        case 0x255298u: goto label_255298;
        case 0x25529cu: goto label_25529c;
        case 0x2552a0u: goto label_2552a0;
        case 0x2552a4u: goto label_2552a4;
        case 0x2552a8u: goto label_2552a8;
        case 0x2552acu: goto label_2552ac;
        case 0x2552b0u: goto label_2552b0;
        case 0x2552b4u: goto label_2552b4;
        case 0x2552b8u: goto label_2552b8;
        case 0x2552bcu: goto label_2552bc;
        case 0x2552c0u: goto label_2552c0;
        case 0x2552c4u: goto label_2552c4;
        case 0x2552c8u: goto label_2552c8;
        case 0x2552ccu: goto label_2552cc;
        case 0x2552d0u: goto label_2552d0;
        case 0x2552d4u: goto label_2552d4;
        case 0x2552d8u: goto label_2552d8;
        case 0x2552dcu: goto label_2552dc;
        case 0x2552e0u: goto label_2552e0;
        case 0x2552e4u: goto label_2552e4;
        case 0x2552e8u: goto label_2552e8;
        case 0x2552ecu: goto label_2552ec;
        case 0x2552f0u: goto label_2552f0;
        case 0x2552f4u: goto label_2552f4;
        case 0x2552f8u: goto label_2552f8;
        case 0x2552fcu: goto label_2552fc;
        case 0x255300u: goto label_255300;
        case 0x255304u: goto label_255304;
        case 0x255308u: goto label_255308;
        case 0x25530cu: goto label_25530c;
        case 0x255310u: goto label_255310;
        case 0x255314u: goto label_255314;
        case 0x255318u: goto label_255318;
        case 0x25531cu: goto label_25531c;
        case 0x255320u: goto label_255320;
        case 0x255324u: goto label_255324;
        case 0x255328u: goto label_255328;
        case 0x25532cu: goto label_25532c;
        case 0x255330u: goto label_255330;
        case 0x255334u: goto label_255334;
        case 0x255338u: goto label_255338;
        case 0x25533cu: goto label_25533c;
        case 0x255340u: goto label_255340;
        case 0x255344u: goto label_255344;
        case 0x255348u: goto label_255348;
        case 0x25534cu: goto label_25534c;
        case 0x255350u: goto label_255350;
        case 0x255354u: goto label_255354;
        case 0x255358u: goto label_255358;
        case 0x25535cu: goto label_25535c;
        case 0x255360u: goto label_255360;
        case 0x255364u: goto label_255364;
        case 0x255368u: goto label_255368;
        case 0x25536cu: goto label_25536c;
        case 0x255370u: goto label_255370;
        case 0x255374u: goto label_255374;
        case 0x255378u: goto label_255378;
        case 0x25537cu: goto label_25537c;
        case 0x255380u: goto label_255380;
        case 0x255384u: goto label_255384;
        case 0x255388u: goto label_255388;
        case 0x25538cu: goto label_25538c;
        case 0x255390u: goto label_255390;
        case 0x255394u: goto label_255394;
        case 0x255398u: goto label_255398;
        case 0x25539cu: goto label_25539c;
        case 0x2553a0u: goto label_2553a0;
        case 0x2553a4u: goto label_2553a4;
        case 0x2553a8u: goto label_2553a8;
        case 0x2553acu: goto label_2553ac;
        case 0x2553b0u: goto label_2553b0;
        case 0x2553b4u: goto label_2553b4;
        case 0x2553b8u: goto label_2553b8;
        case 0x2553bcu: goto label_2553bc;
        case 0x2553c0u: goto label_2553c0;
        case 0x2553c4u: goto label_2553c4;
        case 0x2553c8u: goto label_2553c8;
        case 0x2553ccu: goto label_2553cc;
        case 0x2553d0u: goto label_2553d0;
        case 0x2553d4u: goto label_2553d4;
        case 0x2553d8u: goto label_2553d8;
        case 0x2553dcu: goto label_2553dc;
        case 0x2553e0u: goto label_2553e0;
        case 0x2553e4u: goto label_2553e4;
        case 0x2553e8u: goto label_2553e8;
        case 0x2553ecu: goto label_2553ec;
        case 0x2553f0u: goto label_2553f0;
        case 0x2553f4u: goto label_2553f4;
        case 0x2553f8u: goto label_2553f8;
        case 0x2553fcu: goto label_2553fc;
        case 0x255400u: goto label_255400;
        case 0x255404u: goto label_255404;
        case 0x255408u: goto label_255408;
        case 0x25540cu: goto label_25540c;
        case 0x255410u: goto label_255410;
        case 0x255414u: goto label_255414;
        case 0x255418u: goto label_255418;
        case 0x25541cu: goto label_25541c;
        case 0x255420u: goto label_255420;
        case 0x255424u: goto label_255424;
        case 0x255428u: goto label_255428;
        case 0x25542cu: goto label_25542c;
        case 0x255430u: goto label_255430;
        case 0x255434u: goto label_255434;
        case 0x255438u: goto label_255438;
        case 0x25543cu: goto label_25543c;
        case 0x255440u: goto label_255440;
        case 0x255444u: goto label_255444;
        case 0x255448u: goto label_255448;
        case 0x25544cu: goto label_25544c;
        case 0x255450u: goto label_255450;
        case 0x255454u: goto label_255454;
        case 0x255458u: goto label_255458;
        case 0x25545cu: goto label_25545c;
        case 0x255460u: goto label_255460;
        case 0x255464u: goto label_255464;
        case 0x255468u: goto label_255468;
        case 0x25546cu: goto label_25546c;
        case 0x255470u: goto label_255470;
        case 0x255474u: goto label_255474;
        case 0x255478u: goto label_255478;
        case 0x25547cu: goto label_25547c;
        case 0x255480u: goto label_255480;
        case 0x255484u: goto label_255484;
        case 0x255488u: goto label_255488;
        case 0x25548cu: goto label_25548c;
        case 0x255490u: goto label_255490;
        case 0x255494u: goto label_255494;
        case 0x255498u: goto label_255498;
        case 0x25549cu: goto label_25549c;
        case 0x2554a0u: goto label_2554a0;
        case 0x2554a4u: goto label_2554a4;
        case 0x2554a8u: goto label_2554a8;
        case 0x2554acu: goto label_2554ac;
        case 0x2554b0u: goto label_2554b0;
        case 0x2554b4u: goto label_2554b4;
        case 0x2554b8u: goto label_2554b8;
        case 0x2554bcu: goto label_2554bc;
        case 0x2554c0u: goto label_2554c0;
        case 0x2554c4u: goto label_2554c4;
        case 0x2554c8u: goto label_2554c8;
        case 0x2554ccu: goto label_2554cc;
        case 0x2554d0u: goto label_2554d0;
        case 0x2554d4u: goto label_2554d4;
        case 0x2554d8u: goto label_2554d8;
        case 0x2554dcu: goto label_2554dc;
        case 0x2554e0u: goto label_2554e0;
        case 0x2554e4u: goto label_2554e4;
        case 0x2554e8u: goto label_2554e8;
        case 0x2554ecu: goto label_2554ec;
        case 0x2554f0u: goto label_2554f0;
        case 0x2554f4u: goto label_2554f4;
        case 0x2554f8u: goto label_2554f8;
        case 0x2554fcu: goto label_2554fc;
        case 0x255500u: goto label_255500;
        case 0x255504u: goto label_255504;
        case 0x255508u: goto label_255508;
        case 0x25550cu: goto label_25550c;
        case 0x255510u: goto label_255510;
        case 0x255514u: goto label_255514;
        case 0x255518u: goto label_255518;
        case 0x25551cu: goto label_25551c;
        case 0x255520u: goto label_255520;
        case 0x255524u: goto label_255524;
        case 0x255528u: goto label_255528;
        case 0x25552cu: goto label_25552c;
        case 0x255530u: goto label_255530;
        case 0x255534u: goto label_255534;
        case 0x255538u: goto label_255538;
        case 0x25553cu: goto label_25553c;
        case 0x255540u: goto label_255540;
        case 0x255544u: goto label_255544;
        case 0x255548u: goto label_255548;
        case 0x25554cu: goto label_25554c;
        case 0x255550u: goto label_255550;
        case 0x255554u: goto label_255554;
        case 0x255558u: goto label_255558;
        case 0x25555cu: goto label_25555c;
        case 0x255560u: goto label_255560;
        case 0x255564u: goto label_255564;
        case 0x255568u: goto label_255568;
        case 0x25556cu: goto label_25556c;
        case 0x255570u: goto label_255570;
        case 0x255574u: goto label_255574;
        case 0x255578u: goto label_255578;
        case 0x25557cu: goto label_25557c;
        case 0x255580u: goto label_255580;
        case 0x255584u: goto label_255584;
        case 0x255588u: goto label_255588;
        case 0x25558cu: goto label_25558c;
        case 0x255590u: goto label_255590;
        case 0x255594u: goto label_255594;
        case 0x255598u: goto label_255598;
        case 0x25559cu: goto label_25559c;
        case 0x2555a0u: goto label_2555a0;
        case 0x2555a4u: goto label_2555a4;
        case 0x2555a8u: goto label_2555a8;
        case 0x2555acu: goto label_2555ac;
        case 0x2555b0u: goto label_2555b0;
        case 0x2555b4u: goto label_2555b4;
        case 0x2555b8u: goto label_2555b8;
        case 0x2555bcu: goto label_2555bc;
        case 0x2555c0u: goto label_2555c0;
        case 0x2555c4u: goto label_2555c4;
        case 0x2555c8u: goto label_2555c8;
        case 0x2555ccu: goto label_2555cc;
        case 0x2555d0u: goto label_2555d0;
        case 0x2555d4u: goto label_2555d4;
        case 0x2555d8u: goto label_2555d8;
        case 0x2555dcu: goto label_2555dc;
        case 0x2555e0u: goto label_2555e0;
        case 0x2555e4u: goto label_2555e4;
        case 0x2555e8u: goto label_2555e8;
        case 0x2555ecu: goto label_2555ec;
        case 0x2555f0u: goto label_2555f0;
        case 0x2555f4u: goto label_2555f4;
        case 0x2555f8u: goto label_2555f8;
        case 0x2555fcu: goto label_2555fc;
        case 0x255600u: goto label_255600;
        case 0x255604u: goto label_255604;
        case 0x255608u: goto label_255608;
        case 0x25560cu: goto label_25560c;
        case 0x255610u: goto label_255610;
        case 0x255614u: goto label_255614;
        case 0x255618u: goto label_255618;
        case 0x25561cu: goto label_25561c;
        case 0x255620u: goto label_255620;
        case 0x255624u: goto label_255624;
        case 0x255628u: goto label_255628;
        case 0x25562cu: goto label_25562c;
        case 0x255630u: goto label_255630;
        case 0x255634u: goto label_255634;
        case 0x255638u: goto label_255638;
        case 0x25563cu: goto label_25563c;
        case 0x255640u: goto label_255640;
        case 0x255644u: goto label_255644;
        case 0x255648u: goto label_255648;
        case 0x25564cu: goto label_25564c;
        case 0x255650u: goto label_255650;
        case 0x255654u: goto label_255654;
        case 0x255658u: goto label_255658;
        case 0x25565cu: goto label_25565c;
        case 0x255660u: goto label_255660;
        case 0x255664u: goto label_255664;
        case 0x255668u: goto label_255668;
        case 0x25566cu: goto label_25566c;
        case 0x255670u: goto label_255670;
        case 0x255674u: goto label_255674;
        case 0x255678u: goto label_255678;
        case 0x25567cu: goto label_25567c;
        case 0x255680u: goto label_255680;
        case 0x255684u: goto label_255684;
        case 0x255688u: goto label_255688;
        case 0x25568cu: goto label_25568c;
        case 0x255690u: goto label_255690;
        case 0x255694u: goto label_255694;
        case 0x255698u: goto label_255698;
        case 0x25569cu: goto label_25569c;
        case 0x2556a0u: goto label_2556a0;
        case 0x2556a4u: goto label_2556a4;
        case 0x2556a8u: goto label_2556a8;
        case 0x2556acu: goto label_2556ac;
        case 0x2556b0u: goto label_2556b0;
        case 0x2556b4u: goto label_2556b4;
        case 0x2556b8u: goto label_2556b8;
        case 0x2556bcu: goto label_2556bc;
        case 0x2556c0u: goto label_2556c0;
        case 0x2556c4u: goto label_2556c4;
        case 0x2556c8u: goto label_2556c8;
        case 0x2556ccu: goto label_2556cc;
        case 0x2556d0u: goto label_2556d0;
        case 0x2556d4u: goto label_2556d4;
        case 0x2556d8u: goto label_2556d8;
        case 0x2556dcu: goto label_2556dc;
        case 0x2556e0u: goto label_2556e0;
        case 0x2556e4u: goto label_2556e4;
        case 0x2556e8u: goto label_2556e8;
        case 0x2556ecu: goto label_2556ec;
        case 0x2556f0u: goto label_2556f0;
        case 0x2556f4u: goto label_2556f4;
        case 0x2556f8u: goto label_2556f8;
        case 0x2556fcu: goto label_2556fc;
        case 0x255700u: goto label_255700;
        case 0x255704u: goto label_255704;
        case 0x255708u: goto label_255708;
        case 0x25570cu: goto label_25570c;
        case 0x255710u: goto label_255710;
        case 0x255714u: goto label_255714;
        case 0x255718u: goto label_255718;
        case 0x25571cu: goto label_25571c;
        case 0x255720u: goto label_255720;
        case 0x255724u: goto label_255724;
        case 0x255728u: goto label_255728;
        case 0x25572cu: goto label_25572c;
        case 0x255730u: goto label_255730;
        case 0x255734u: goto label_255734;
        case 0x255738u: goto label_255738;
        case 0x25573cu: goto label_25573c;
        case 0x255740u: goto label_255740;
        case 0x255744u: goto label_255744;
        case 0x255748u: goto label_255748;
        case 0x25574cu: goto label_25574c;
        case 0x255750u: goto label_255750;
        case 0x255754u: goto label_255754;
        case 0x255758u: goto label_255758;
        case 0x25575cu: goto label_25575c;
        case 0x255760u: goto label_255760;
        case 0x255764u: goto label_255764;
        case 0x255768u: goto label_255768;
        case 0x25576cu: goto label_25576c;
        case 0x255770u: goto label_255770;
        case 0x255774u: goto label_255774;
        case 0x255778u: goto label_255778;
        case 0x25577cu: goto label_25577c;
        case 0x255780u: goto label_255780;
        case 0x255784u: goto label_255784;
        case 0x255788u: goto label_255788;
        case 0x25578cu: goto label_25578c;
        case 0x255790u: goto label_255790;
        case 0x255794u: goto label_255794;
        case 0x255798u: goto label_255798;
        case 0x25579cu: goto label_25579c;
        case 0x2557a0u: goto label_2557a0;
        case 0x2557a4u: goto label_2557a4;
        case 0x2557a8u: goto label_2557a8;
        case 0x2557acu: goto label_2557ac;
        case 0x2557b0u: goto label_2557b0;
        case 0x2557b4u: goto label_2557b4;
        case 0x2557b8u: goto label_2557b8;
        case 0x2557bcu: goto label_2557bc;
        case 0x2557c0u: goto label_2557c0;
        case 0x2557c4u: goto label_2557c4;
        case 0x2557c8u: goto label_2557c8;
        case 0x2557ccu: goto label_2557cc;
        case 0x2557d0u: goto label_2557d0;
        case 0x2557d4u: goto label_2557d4;
        case 0x2557d8u: goto label_2557d8;
        case 0x2557dcu: goto label_2557dc;
        case 0x2557e0u: goto label_2557e0;
        case 0x2557e4u: goto label_2557e4;
        case 0x2557e8u: goto label_2557e8;
        case 0x2557ecu: goto label_2557ec;
        case 0x2557f0u: goto label_2557f0;
        case 0x2557f4u: goto label_2557f4;
        case 0x2557f8u: goto label_2557f8;
        case 0x2557fcu: goto label_2557fc;
        case 0x255800u: goto label_255800;
        case 0x255804u: goto label_255804;
        case 0x255808u: goto label_255808;
        case 0x25580cu: goto label_25580c;
        case 0x255810u: goto label_255810;
        case 0x255814u: goto label_255814;
        case 0x255818u: goto label_255818;
        case 0x25581cu: goto label_25581c;
        case 0x255820u: goto label_255820;
        case 0x255824u: goto label_255824;
        case 0x255828u: goto label_255828;
        case 0x25582cu: goto label_25582c;
        case 0x255830u: goto label_255830;
        case 0x255834u: goto label_255834;
        case 0x255838u: goto label_255838;
        case 0x25583cu: goto label_25583c;
        case 0x255840u: goto label_255840;
        case 0x255844u: goto label_255844;
        case 0x255848u: goto label_255848;
        case 0x25584cu: goto label_25584c;
        case 0x255850u: goto label_255850;
        case 0x255854u: goto label_255854;
        case 0x255858u: goto label_255858;
        case 0x25585cu: goto label_25585c;
        case 0x255860u: goto label_255860;
        case 0x255864u: goto label_255864;
        case 0x255868u: goto label_255868;
        case 0x25586cu: goto label_25586c;
        case 0x255870u: goto label_255870;
        case 0x255874u: goto label_255874;
        case 0x255878u: goto label_255878;
        case 0x25587cu: goto label_25587c;
        case 0x255880u: goto label_255880;
        case 0x255884u: goto label_255884;
        case 0x255888u: goto label_255888;
        case 0x25588cu: goto label_25588c;
        case 0x255890u: goto label_255890;
        case 0x255894u: goto label_255894;
        case 0x255898u: goto label_255898;
        case 0x25589cu: goto label_25589c;
        case 0x2558a0u: goto label_2558a0;
        case 0x2558a4u: goto label_2558a4;
        case 0x2558a8u: goto label_2558a8;
        case 0x2558acu: goto label_2558ac;
        case 0x2558b0u: goto label_2558b0;
        case 0x2558b4u: goto label_2558b4;
        case 0x2558b8u: goto label_2558b8;
        case 0x2558bcu: goto label_2558bc;
        case 0x2558c0u: goto label_2558c0;
        case 0x2558c4u: goto label_2558c4;
        case 0x2558c8u: goto label_2558c8;
        case 0x2558ccu: goto label_2558cc;
        case 0x2558d0u: goto label_2558d0;
        case 0x2558d4u: goto label_2558d4;
        case 0x2558d8u: goto label_2558d8;
        case 0x2558dcu: goto label_2558dc;
        case 0x2558e0u: goto label_2558e0;
        case 0x2558e4u: goto label_2558e4;
        case 0x2558e8u: goto label_2558e8;
        case 0x2558ecu: goto label_2558ec;
        case 0x2558f0u: goto label_2558f0;
        case 0x2558f4u: goto label_2558f4;
        case 0x2558f8u: goto label_2558f8;
        case 0x2558fcu: goto label_2558fc;
        case 0x255900u: goto label_255900;
        case 0x255904u: goto label_255904;
        case 0x255908u: goto label_255908;
        case 0x25590cu: goto label_25590c;
        case 0x255910u: goto label_255910;
        case 0x255914u: goto label_255914;
        case 0x255918u: goto label_255918;
        case 0x25591cu: goto label_25591c;
        case 0x255920u: goto label_255920;
        case 0x255924u: goto label_255924;
        case 0x255928u: goto label_255928;
        case 0x25592cu: goto label_25592c;
        case 0x255930u: goto label_255930;
        case 0x255934u: goto label_255934;
        case 0x255938u: goto label_255938;
        case 0x25593cu: goto label_25593c;
        case 0x255940u: goto label_255940;
        case 0x255944u: goto label_255944;
        case 0x255948u: goto label_255948;
        case 0x25594cu: goto label_25594c;
        case 0x255950u: goto label_255950;
        case 0x255954u: goto label_255954;
        case 0x255958u: goto label_255958;
        case 0x25595cu: goto label_25595c;
        case 0x255960u: goto label_255960;
        case 0x255964u: goto label_255964;
        case 0x255968u: goto label_255968;
        case 0x25596cu: goto label_25596c;
        case 0x255970u: goto label_255970;
        case 0x255974u: goto label_255974;
        case 0x255978u: goto label_255978;
        case 0x25597cu: goto label_25597c;
        case 0x255980u: goto label_255980;
        case 0x255984u: goto label_255984;
        case 0x255988u: goto label_255988;
        case 0x25598cu: goto label_25598c;
        case 0x255990u: goto label_255990;
        case 0x255994u: goto label_255994;
        case 0x255998u: goto label_255998;
        case 0x25599cu: goto label_25599c;
        case 0x2559a0u: goto label_2559a0;
        case 0x2559a4u: goto label_2559a4;
        case 0x2559a8u: goto label_2559a8;
        case 0x2559acu: goto label_2559ac;
        case 0x2559b0u: goto label_2559b0;
        case 0x2559b4u: goto label_2559b4;
        case 0x2559b8u: goto label_2559b8;
        case 0x2559bcu: goto label_2559bc;
        case 0x2559c0u: goto label_2559c0;
        case 0x2559c4u: goto label_2559c4;
        case 0x2559c8u: goto label_2559c8;
        case 0x2559ccu: goto label_2559cc;
        case 0x2559d0u: goto label_2559d0;
        case 0x2559d4u: goto label_2559d4;
        case 0x2559d8u: goto label_2559d8;
        case 0x2559dcu: goto label_2559dc;
        case 0x2559e0u: goto label_2559e0;
        case 0x2559e4u: goto label_2559e4;
        case 0x2559e8u: goto label_2559e8;
        case 0x2559ecu: goto label_2559ec;
        case 0x2559f0u: goto label_2559f0;
        case 0x2559f4u: goto label_2559f4;
        case 0x2559f8u: goto label_2559f8;
        case 0x2559fcu: goto label_2559fc;
        case 0x255a00u: goto label_255a00;
        case 0x255a04u: goto label_255a04;
        case 0x255a08u: goto label_255a08;
        case 0x255a0cu: goto label_255a0c;
        case 0x255a10u: goto label_255a10;
        case 0x255a14u: goto label_255a14;
        case 0x255a18u: goto label_255a18;
        case 0x255a1cu: goto label_255a1c;
        case 0x255a20u: goto label_255a20;
        case 0x255a24u: goto label_255a24;
        case 0x255a28u: goto label_255a28;
        case 0x255a2cu: goto label_255a2c;
        case 0x255a30u: goto label_255a30;
        case 0x255a34u: goto label_255a34;
        case 0x255a38u: goto label_255a38;
        case 0x255a3cu: goto label_255a3c;
        case 0x255a40u: goto label_255a40;
        case 0x255a44u: goto label_255a44;
        case 0x255a48u: goto label_255a48;
        case 0x255a4cu: goto label_255a4c;
        case 0x255a50u: goto label_255a50;
        case 0x255a54u: goto label_255a54;
        case 0x255a58u: goto label_255a58;
        case 0x255a5cu: goto label_255a5c;
        case 0x255a60u: goto label_255a60;
        case 0x255a64u: goto label_255a64;
        case 0x255a68u: goto label_255a68;
        case 0x255a6cu: goto label_255a6c;
        case 0x255a70u: goto label_255a70;
        case 0x255a74u: goto label_255a74;
        case 0x255a78u: goto label_255a78;
        case 0x255a7cu: goto label_255a7c;
        case 0x255a80u: goto label_255a80;
        case 0x255a84u: goto label_255a84;
        case 0x255a88u: goto label_255a88;
        case 0x255a8cu: goto label_255a8c;
        case 0x255a90u: goto label_255a90;
        case 0x255a94u: goto label_255a94;
        case 0x255a98u: goto label_255a98;
        case 0x255a9cu: goto label_255a9c;
        case 0x255aa0u: goto label_255aa0;
        case 0x255aa4u: goto label_255aa4;
        case 0x255aa8u: goto label_255aa8;
        case 0x255aacu: goto label_255aac;
        case 0x255ab0u: goto label_255ab0;
        case 0x255ab4u: goto label_255ab4;
        case 0x255ab8u: goto label_255ab8;
        case 0x255abcu: goto label_255abc;
        case 0x255ac0u: goto label_255ac0;
        case 0x255ac4u: goto label_255ac4;
        case 0x255ac8u: goto label_255ac8;
        case 0x255accu: goto label_255acc;
        case 0x255ad0u: goto label_255ad0;
        case 0x255ad4u: goto label_255ad4;
        case 0x255ad8u: goto label_255ad8;
        case 0x255adcu: goto label_255adc;
        case 0x255ae0u: goto label_255ae0;
        case 0x255ae4u: goto label_255ae4;
        case 0x255ae8u: goto label_255ae8;
        case 0x255aecu: goto label_255aec;
        case 0x255af0u: goto label_255af0;
        case 0x255af4u: goto label_255af4;
        case 0x255af8u: goto label_255af8;
        case 0x255afcu: goto label_255afc;
        case 0x255b00u: goto label_255b00;
        case 0x255b04u: goto label_255b04;
        case 0x255b08u: goto label_255b08;
        case 0x255b0cu: goto label_255b0c;
        case 0x255b10u: goto label_255b10;
        case 0x255b14u: goto label_255b14;
        case 0x255b18u: goto label_255b18;
        case 0x255b1cu: goto label_255b1c;
        case 0x255b20u: goto label_255b20;
        case 0x255b24u: goto label_255b24;
        case 0x255b28u: goto label_255b28;
        case 0x255b2cu: goto label_255b2c;
        case 0x255b30u: goto label_255b30;
        case 0x255b34u: goto label_255b34;
        case 0x255b38u: goto label_255b38;
        case 0x255b3cu: goto label_255b3c;
        case 0x255b40u: goto label_255b40;
        case 0x255b44u: goto label_255b44;
        case 0x255b48u: goto label_255b48;
        case 0x255b4cu: goto label_255b4c;
        case 0x255b50u: goto label_255b50;
        case 0x255b54u: goto label_255b54;
        case 0x255b58u: goto label_255b58;
        case 0x255b5cu: goto label_255b5c;
        case 0x255b60u: goto label_255b60;
        case 0x255b64u: goto label_255b64;
        case 0x255b68u: goto label_255b68;
        case 0x255b6cu: goto label_255b6c;
        case 0x255b70u: goto label_255b70;
        case 0x255b74u: goto label_255b74;
        case 0x255b78u: goto label_255b78;
        case 0x255b7cu: goto label_255b7c;
        case 0x255b80u: goto label_255b80;
        case 0x255b84u: goto label_255b84;
        case 0x255b88u: goto label_255b88;
        case 0x255b8cu: goto label_255b8c;
        case 0x255b90u: goto label_255b90;
        case 0x255b94u: goto label_255b94;
        case 0x255b98u: goto label_255b98;
        case 0x255b9cu: goto label_255b9c;
        case 0x255ba0u: goto label_255ba0;
        case 0x255ba4u: goto label_255ba4;
        case 0x255ba8u: goto label_255ba8;
        case 0x255bacu: goto label_255bac;
        case 0x255bb0u: goto label_255bb0;
        case 0x255bb4u: goto label_255bb4;
        case 0x255bb8u: goto label_255bb8;
        case 0x255bbcu: goto label_255bbc;
        case 0x255bc0u: goto label_255bc0;
        case 0x255bc4u: goto label_255bc4;
        case 0x255bc8u: goto label_255bc8;
        case 0x255bccu: goto label_255bcc;
        case 0x255bd0u: goto label_255bd0;
        case 0x255bd4u: goto label_255bd4;
        case 0x255bd8u: goto label_255bd8;
        case 0x255bdcu: goto label_255bdc;
        case 0x255be0u: goto label_255be0;
        case 0x255be4u: goto label_255be4;
        case 0x255be8u: goto label_255be8;
        case 0x255becu: goto label_255bec;
        case 0x255bf0u: goto label_255bf0;
        case 0x255bf4u: goto label_255bf4;
        case 0x255bf8u: goto label_255bf8;
        case 0x255bfcu: goto label_255bfc;
        case 0x255c00u: goto label_255c00;
        case 0x255c04u: goto label_255c04;
        case 0x255c08u: goto label_255c08;
        case 0x255c0cu: goto label_255c0c;
        case 0x255c10u: goto label_255c10;
        case 0x255c14u: goto label_255c14;
        case 0x255c18u: goto label_255c18;
        case 0x255c1cu: goto label_255c1c;
        case 0x255c20u: goto label_255c20;
        case 0x255c24u: goto label_255c24;
        case 0x255c28u: goto label_255c28;
        case 0x255c2cu: goto label_255c2c;
        case 0x255c30u: goto label_255c30;
        case 0x255c34u: goto label_255c34;
        case 0x255c38u: goto label_255c38;
        case 0x255c3cu: goto label_255c3c;
        case 0x255c40u: goto label_255c40;
        case 0x255c44u: goto label_255c44;
        case 0x255c48u: goto label_255c48;
        case 0x255c4cu: goto label_255c4c;
        case 0x255c50u: goto label_255c50;
        case 0x255c54u: goto label_255c54;
        case 0x255c58u: goto label_255c58;
        case 0x255c5cu: goto label_255c5c;
        case 0x255c60u: goto label_255c60;
        case 0x255c64u: goto label_255c64;
        case 0x255c68u: goto label_255c68;
        case 0x255c6cu: goto label_255c6c;
        case 0x255c70u: goto label_255c70;
        case 0x255c74u: goto label_255c74;
        case 0x255c78u: goto label_255c78;
        case 0x255c7cu: goto label_255c7c;
        case 0x255c80u: goto label_255c80;
        case 0x255c84u: goto label_255c84;
        case 0x255c88u: goto label_255c88;
        case 0x255c8cu: goto label_255c8c;
        case 0x255c90u: goto label_255c90;
        case 0x255c94u: goto label_255c94;
        case 0x255c98u: goto label_255c98;
        case 0x255c9cu: goto label_255c9c;
        case 0x255ca0u: goto label_255ca0;
        case 0x255ca4u: goto label_255ca4;
        case 0x255ca8u: goto label_255ca8;
        case 0x255cacu: goto label_255cac;
        case 0x255cb0u: goto label_255cb0;
        case 0x255cb4u: goto label_255cb4;
        case 0x255cb8u: goto label_255cb8;
        case 0x255cbcu: goto label_255cbc;
        case 0x255cc0u: goto label_255cc0;
        case 0x255cc4u: goto label_255cc4;
        case 0x255cc8u: goto label_255cc8;
        case 0x255cccu: goto label_255ccc;
        case 0x255cd0u: goto label_255cd0;
        case 0x255cd4u: goto label_255cd4;
        case 0x255cd8u: goto label_255cd8;
        case 0x255cdcu: goto label_255cdc;
        case 0x255ce0u: goto label_255ce0;
        case 0x255ce4u: goto label_255ce4;
        case 0x255ce8u: goto label_255ce8;
        case 0x255cecu: goto label_255cec;
        case 0x255cf0u: goto label_255cf0;
        case 0x255cf4u: goto label_255cf4;
        case 0x255cf8u: goto label_255cf8;
        case 0x255cfcu: goto label_255cfc;
        case 0x255d00u: goto label_255d00;
        case 0x255d04u: goto label_255d04;
        case 0x255d08u: goto label_255d08;
        case 0x255d0cu: goto label_255d0c;
        case 0x255d10u: goto label_255d10;
        case 0x255d14u: goto label_255d14;
        case 0x255d18u: goto label_255d18;
        case 0x255d1cu: goto label_255d1c;
        case 0x255d20u: goto label_255d20;
        case 0x255d24u: goto label_255d24;
        case 0x255d28u: goto label_255d28;
        case 0x255d2cu: goto label_255d2c;
        case 0x255d30u: goto label_255d30;
        case 0x255d34u: goto label_255d34;
        case 0x255d38u: goto label_255d38;
        case 0x255d3cu: goto label_255d3c;
        case 0x255d40u: goto label_255d40;
        case 0x255d44u: goto label_255d44;
        case 0x255d48u: goto label_255d48;
        case 0x255d4cu: goto label_255d4c;
        case 0x255d50u: goto label_255d50;
        case 0x255d54u: goto label_255d54;
        case 0x255d58u: goto label_255d58;
        case 0x255d5cu: goto label_255d5c;
        case 0x255d60u: goto label_255d60;
        case 0x255d64u: goto label_255d64;
        case 0x255d68u: goto label_255d68;
        case 0x255d6cu: goto label_255d6c;
        case 0x255d70u: goto label_255d70;
        case 0x255d74u: goto label_255d74;
        case 0x255d78u: goto label_255d78;
        case 0x255d7cu: goto label_255d7c;
        case 0x255d80u: goto label_255d80;
        case 0x255d84u: goto label_255d84;
        case 0x255d88u: goto label_255d88;
        case 0x255d8cu: goto label_255d8c;
        case 0x255d90u: goto label_255d90;
        case 0x255d94u: goto label_255d94;
        case 0x255d98u: goto label_255d98;
        case 0x255d9cu: goto label_255d9c;
        case 0x255da0u: goto label_255da0;
        case 0x255da4u: goto label_255da4;
        case 0x255da8u: goto label_255da8;
        case 0x255dacu: goto label_255dac;
        case 0x255db0u: goto label_255db0;
        case 0x255db4u: goto label_255db4;
        case 0x255db8u: goto label_255db8;
        case 0x255dbcu: goto label_255dbc;
        case 0x255dc0u: goto label_255dc0;
        case 0x255dc4u: goto label_255dc4;
        case 0x255dc8u: goto label_255dc8;
        case 0x255dccu: goto label_255dcc;
        case 0x255dd0u: goto label_255dd0;
        case 0x255dd4u: goto label_255dd4;
        case 0x255dd8u: goto label_255dd8;
        case 0x255ddcu: goto label_255ddc;
        case 0x255de0u: goto label_255de0;
        case 0x255de4u: goto label_255de4;
        case 0x255de8u: goto label_255de8;
        case 0x255decu: goto label_255dec;
        case 0x255df0u: goto label_255df0;
        case 0x255df4u: goto label_255df4;
        case 0x255df8u: goto label_255df8;
        case 0x255dfcu: goto label_255dfc;
        case 0x255e00u: goto label_255e00;
        case 0x255e04u: goto label_255e04;
        case 0x255e08u: goto label_255e08;
        case 0x255e0cu: goto label_255e0c;
        case 0x255e10u: goto label_255e10;
        case 0x255e14u: goto label_255e14;
        case 0x255e18u: goto label_255e18;
        case 0x255e1cu: goto label_255e1c;
        case 0x255e20u: goto label_255e20;
        case 0x255e24u: goto label_255e24;
        case 0x255e28u: goto label_255e28;
        case 0x255e2cu: goto label_255e2c;
        case 0x255e30u: goto label_255e30;
        case 0x255e34u: goto label_255e34;
        case 0x255e38u: goto label_255e38;
        case 0x255e3cu: goto label_255e3c;
        case 0x255e40u: goto label_255e40;
        case 0x255e44u: goto label_255e44;
        case 0x255e48u: goto label_255e48;
        case 0x255e4cu: goto label_255e4c;
        case 0x255e50u: goto label_255e50;
        case 0x255e54u: goto label_255e54;
        case 0x255e58u: goto label_255e58;
        case 0x255e5cu: goto label_255e5c;
        case 0x255e60u: goto label_255e60;
        case 0x255e64u: goto label_255e64;
        case 0x255e68u: goto label_255e68;
        case 0x255e6cu: goto label_255e6c;
        case 0x255e70u: goto label_255e70;
        case 0x255e74u: goto label_255e74;
        case 0x255e78u: goto label_255e78;
        case 0x255e7cu: goto label_255e7c;
        case 0x255e80u: goto label_255e80;
        case 0x255e84u: goto label_255e84;
        case 0x255e88u: goto label_255e88;
        case 0x255e8cu: goto label_255e8c;
        case 0x255e90u: goto label_255e90;
        case 0x255e94u: goto label_255e94;
        case 0x255e98u: goto label_255e98;
        case 0x255e9cu: goto label_255e9c;
        case 0x255ea0u: goto label_255ea0;
        case 0x255ea4u: goto label_255ea4;
        case 0x255ea8u: goto label_255ea8;
        case 0x255eacu: goto label_255eac;
        case 0x255eb0u: goto label_255eb0;
        case 0x255eb4u: goto label_255eb4;
        case 0x255eb8u: goto label_255eb8;
        case 0x255ebcu: goto label_255ebc;
        case 0x255ec0u: goto label_255ec0;
        case 0x255ec4u: goto label_255ec4;
        case 0x255ec8u: goto label_255ec8;
        case 0x255eccu: goto label_255ecc;
        case 0x255ed0u: goto label_255ed0;
        case 0x255ed4u: goto label_255ed4;
        case 0x255ed8u: goto label_255ed8;
        case 0x255edcu: goto label_255edc;
        case 0x255ee0u: goto label_255ee0;
        case 0x255ee4u: goto label_255ee4;
        case 0x255ee8u: goto label_255ee8;
        case 0x255eecu: goto label_255eec;
        case 0x255ef0u: goto label_255ef0;
        case 0x255ef4u: goto label_255ef4;
        case 0x255ef8u: goto label_255ef8;
        case 0x255efcu: goto label_255efc;
        case 0x255f00u: goto label_255f00;
        case 0x255f04u: goto label_255f04;
        case 0x255f08u: goto label_255f08;
        case 0x255f0cu: goto label_255f0c;
        case 0x255f10u: goto label_255f10;
        case 0x255f14u: goto label_255f14;
        case 0x255f18u: goto label_255f18;
        case 0x255f1cu: goto label_255f1c;
        case 0x255f20u: goto label_255f20;
        case 0x255f24u: goto label_255f24;
        case 0x255f28u: goto label_255f28;
        case 0x255f2cu: goto label_255f2c;
        case 0x255f30u: goto label_255f30;
        case 0x255f34u: goto label_255f34;
        case 0x255f38u: goto label_255f38;
        case 0x255f3cu: goto label_255f3c;
        case 0x255f40u: goto label_255f40;
        case 0x255f44u: goto label_255f44;
        case 0x255f48u: goto label_255f48;
        case 0x255f4cu: goto label_255f4c;
        case 0x255f50u: goto label_255f50;
        case 0x255f54u: goto label_255f54;
        case 0x255f58u: goto label_255f58;
        case 0x255f5cu: goto label_255f5c;
        case 0x255f60u: goto label_255f60;
        case 0x255f64u: goto label_255f64;
        case 0x255f68u: goto label_255f68;
        case 0x255f6cu: goto label_255f6c;
        case 0x255f70u: goto label_255f70;
        case 0x255f74u: goto label_255f74;
        case 0x255f78u: goto label_255f78;
        case 0x255f7cu: goto label_255f7c;
        case 0x255f80u: goto label_255f80;
        case 0x255f84u: goto label_255f84;
        case 0x255f88u: goto label_255f88;
        case 0x255f8cu: goto label_255f8c;
        case 0x255f90u: goto label_255f90;
        case 0x255f94u: goto label_255f94;
        case 0x255f98u: goto label_255f98;
        case 0x255f9cu: goto label_255f9c;
        case 0x255fa0u: goto label_255fa0;
        case 0x255fa4u: goto label_255fa4;
        case 0x255fa8u: goto label_255fa8;
        case 0x255facu: goto label_255fac;
        case 0x255fb0u: goto label_255fb0;
        case 0x255fb4u: goto label_255fb4;
        case 0x255fb8u: goto label_255fb8;
        case 0x255fbcu: goto label_255fbc;
        case 0x255fc0u: goto label_255fc0;
        case 0x255fc4u: goto label_255fc4;
        case 0x255fc8u: goto label_255fc8;
        case 0x255fccu: goto label_255fcc;
        case 0x255fd0u: goto label_255fd0;
        case 0x255fd4u: goto label_255fd4;
        case 0x255fd8u: goto label_255fd8;
        case 0x255fdcu: goto label_255fdc;
        case 0x255fe0u: goto label_255fe0;
        case 0x255fe4u: goto label_255fe4;
        case 0x255fe8u: goto label_255fe8;
        case 0x255fecu: goto label_255fec;
        case 0x255ff0u: goto label_255ff0;
        case 0x255ff4u: goto label_255ff4;
        case 0x255ff8u: goto label_255ff8;
        case 0x255ffcu: goto label_255ffc;
        case 0x256000u: goto label_256000;
        case 0x256004u: goto label_256004;
        case 0x256008u: goto label_256008;
        case 0x25600cu: goto label_25600c;
        case 0x256010u: goto label_256010;
        case 0x256014u: goto label_256014;
        case 0x256018u: goto label_256018;
        case 0x25601cu: goto label_25601c;
        case 0x256020u: goto label_256020;
        case 0x256024u: goto label_256024;
        case 0x256028u: goto label_256028;
        case 0x25602cu: goto label_25602c;
        case 0x256030u: goto label_256030;
        case 0x256034u: goto label_256034;
        case 0x256038u: goto label_256038;
        case 0x25603cu: goto label_25603c;
        case 0x256040u: goto label_256040;
        case 0x256044u: goto label_256044;
        case 0x256048u: goto label_256048;
        case 0x25604cu: goto label_25604c;
        case 0x256050u: goto label_256050;
        case 0x256054u: goto label_256054;
        case 0x256058u: goto label_256058;
        case 0x25605cu: goto label_25605c;
        case 0x256060u: goto label_256060;
        case 0x256064u: goto label_256064;
        case 0x256068u: goto label_256068;
        case 0x25606cu: goto label_25606c;
        case 0x256070u: goto label_256070;
        case 0x256074u: goto label_256074;
        case 0x256078u: goto label_256078;
        case 0x25607cu: goto label_25607c;
        case 0x256080u: goto label_256080;
        case 0x256084u: goto label_256084;
        case 0x256088u: goto label_256088;
        case 0x25608cu: goto label_25608c;
        case 0x256090u: goto label_256090;
        case 0x256094u: goto label_256094;
        case 0x256098u: goto label_256098;
        case 0x25609cu: goto label_25609c;
        case 0x2560a0u: goto label_2560a0;
        case 0x2560a4u: goto label_2560a4;
        case 0x2560a8u: goto label_2560a8;
        case 0x2560acu: goto label_2560ac;
        case 0x2560b0u: goto label_2560b0;
        case 0x2560b4u: goto label_2560b4;
        case 0x2560b8u: goto label_2560b8;
        case 0x2560bcu: goto label_2560bc;
        case 0x2560c0u: goto label_2560c0;
        case 0x2560c4u: goto label_2560c4;
        case 0x2560c8u: goto label_2560c8;
        case 0x2560ccu: goto label_2560cc;
        case 0x2560d0u: goto label_2560d0;
        case 0x2560d4u: goto label_2560d4;
        case 0x2560d8u: goto label_2560d8;
        case 0x2560dcu: goto label_2560dc;
        case 0x2560e0u: goto label_2560e0;
        case 0x2560e4u: goto label_2560e4;
        case 0x2560e8u: goto label_2560e8;
        case 0x2560ecu: goto label_2560ec;
        case 0x2560f0u: goto label_2560f0;
        case 0x2560f4u: goto label_2560f4;
        case 0x2560f8u: goto label_2560f8;
        case 0x2560fcu: goto label_2560fc;
        case 0x256100u: goto label_256100;
        case 0x256104u: goto label_256104;
        case 0x256108u: goto label_256108;
        case 0x25610cu: goto label_25610c;
        case 0x256110u: goto label_256110;
        case 0x256114u: goto label_256114;
        case 0x256118u: goto label_256118;
        case 0x25611cu: goto label_25611c;
        case 0x256120u: goto label_256120;
        case 0x256124u: goto label_256124;
        case 0x256128u: goto label_256128;
        case 0x25612cu: goto label_25612c;
        case 0x256130u: goto label_256130;
        case 0x256134u: goto label_256134;
        case 0x256138u: goto label_256138;
        case 0x25613cu: goto label_25613c;
        case 0x256140u: goto label_256140;
        case 0x256144u: goto label_256144;
        case 0x256148u: goto label_256148;
        case 0x25614cu: goto label_25614c;
        case 0x256150u: goto label_256150;
        case 0x256154u: goto label_256154;
        case 0x256158u: goto label_256158;
        case 0x25615cu: goto label_25615c;
        case 0x256160u: goto label_256160;
        case 0x256164u: goto label_256164;
        case 0x256168u: goto label_256168;
        case 0x25616cu: goto label_25616c;
        case 0x256170u: goto label_256170;
        case 0x256174u: goto label_256174;
        case 0x256178u: goto label_256178;
        case 0x25617cu: goto label_25617c;
        case 0x256180u: goto label_256180;
        case 0x256184u: goto label_256184;
        case 0x256188u: goto label_256188;
        case 0x25618cu: goto label_25618c;
        case 0x256190u: goto label_256190;
        case 0x256194u: goto label_256194;
        case 0x256198u: goto label_256198;
        case 0x25619cu: goto label_25619c;
        case 0x2561a0u: goto label_2561a0;
        case 0x2561a4u: goto label_2561a4;
        case 0x2561a8u: goto label_2561a8;
        case 0x2561acu: goto label_2561ac;
        case 0x2561b0u: goto label_2561b0;
        case 0x2561b4u: goto label_2561b4;
        case 0x2561b8u: goto label_2561b8;
        case 0x2561bcu: goto label_2561bc;
        case 0x2561c0u: goto label_2561c0;
        case 0x2561c4u: goto label_2561c4;
        case 0x2561c8u: goto label_2561c8;
        case 0x2561ccu: goto label_2561cc;
        case 0x2561d0u: goto label_2561d0;
        case 0x2561d4u: goto label_2561d4;
        case 0x2561d8u: goto label_2561d8;
        case 0x2561dcu: goto label_2561dc;
        case 0x2561e0u: goto label_2561e0;
        case 0x2561e4u: goto label_2561e4;
        case 0x2561e8u: goto label_2561e8;
        case 0x2561ecu: goto label_2561ec;
        case 0x2561f0u: goto label_2561f0;
        case 0x2561f4u: goto label_2561f4;
        case 0x2561f8u: goto label_2561f8;
        case 0x2561fcu: goto label_2561fc;
        case 0x256200u: goto label_256200;
        case 0x256204u: goto label_256204;
        case 0x256208u: goto label_256208;
        case 0x25620cu: goto label_25620c;
        case 0x256210u: goto label_256210;
        case 0x256214u: goto label_256214;
        case 0x256218u: goto label_256218;
        case 0x25621cu: goto label_25621c;
        case 0x256220u: goto label_256220;
        case 0x256224u: goto label_256224;
        case 0x256228u: goto label_256228;
        case 0x25622cu: goto label_25622c;
        case 0x256230u: goto label_256230;
        case 0x256234u: goto label_256234;
        case 0x256238u: goto label_256238;
        case 0x25623cu: goto label_25623c;
        case 0x256240u: goto label_256240;
        case 0x256244u: goto label_256244;
        case 0x256248u: goto label_256248;
        case 0x25624cu: goto label_25624c;
        case 0x256250u: goto label_256250;
        case 0x256254u: goto label_256254;
        case 0x256258u: goto label_256258;
        case 0x25625cu: goto label_25625c;
        case 0x256260u: goto label_256260;
        case 0x256264u: goto label_256264;
        case 0x256268u: goto label_256268;
        case 0x25626cu: goto label_25626c;
        case 0x256270u: goto label_256270;
        case 0x256274u: goto label_256274;
        case 0x256278u: goto label_256278;
        case 0x25627cu: goto label_25627c;
        case 0x256280u: goto label_256280;
        case 0x256284u: goto label_256284;
        case 0x256288u: goto label_256288;
        case 0x25628cu: goto label_25628c;
        case 0x256290u: goto label_256290;
        case 0x256294u: goto label_256294;
        case 0x256298u: goto label_256298;
        case 0x25629cu: goto label_25629c;
        case 0x2562a0u: goto label_2562a0;
        case 0x2562a4u: goto label_2562a4;
        case 0x2562a8u: goto label_2562a8;
        case 0x2562acu: goto label_2562ac;
        case 0x2562b0u: goto label_2562b0;
        case 0x2562b4u: goto label_2562b4;
        case 0x2562b8u: goto label_2562b8;
        case 0x2562bcu: goto label_2562bc;
        case 0x2562c0u: goto label_2562c0;
        case 0x2562c4u: goto label_2562c4;
        case 0x2562c8u: goto label_2562c8;
        case 0x2562ccu: goto label_2562cc;
        case 0x2562d0u: goto label_2562d0;
        case 0x2562d4u: goto label_2562d4;
        case 0x2562d8u: goto label_2562d8;
        case 0x2562dcu: goto label_2562dc;
        case 0x2562e0u: goto label_2562e0;
        case 0x2562e4u: goto label_2562e4;
        case 0x2562e8u: goto label_2562e8;
        case 0x2562ecu: goto label_2562ec;
        case 0x2562f0u: goto label_2562f0;
        case 0x2562f4u: goto label_2562f4;
        case 0x2562f8u: goto label_2562f8;
        case 0x2562fcu: goto label_2562fc;
        case 0x256300u: goto label_256300;
        case 0x256304u: goto label_256304;
        case 0x256308u: goto label_256308;
        case 0x25630cu: goto label_25630c;
        case 0x256310u: goto label_256310;
        case 0x256314u: goto label_256314;
        case 0x256318u: goto label_256318;
        case 0x25631cu: goto label_25631c;
        case 0x256320u: goto label_256320;
        case 0x256324u: goto label_256324;
        case 0x256328u: goto label_256328;
        case 0x25632cu: goto label_25632c;
        case 0x256330u: goto label_256330;
        case 0x256334u: goto label_256334;
        case 0x256338u: goto label_256338;
        case 0x25633cu: goto label_25633c;
        case 0x256340u: goto label_256340;
        case 0x256344u: goto label_256344;
        case 0x256348u: goto label_256348;
        case 0x25634cu: goto label_25634c;
        case 0x256350u: goto label_256350;
        case 0x256354u: goto label_256354;
        case 0x256358u: goto label_256358;
        case 0x25635cu: goto label_25635c;
        case 0x256360u: goto label_256360;
        case 0x256364u: goto label_256364;
        case 0x256368u: goto label_256368;
        case 0x25636cu: goto label_25636c;
        case 0x256370u: goto label_256370;
        case 0x256374u: goto label_256374;
        case 0x256378u: goto label_256378;
        case 0x25637cu: goto label_25637c;
        case 0x256380u: goto label_256380;
        case 0x256384u: goto label_256384;
        case 0x256388u: goto label_256388;
        case 0x25638cu: goto label_25638c;
        case 0x256390u: goto label_256390;
        case 0x256394u: goto label_256394;
        case 0x256398u: goto label_256398;
        case 0x25639cu: goto label_25639c;
        case 0x2563a0u: goto label_2563a0;
        case 0x2563a4u: goto label_2563a4;
        case 0x2563a8u: goto label_2563a8;
        case 0x2563acu: goto label_2563ac;
        case 0x2563b0u: goto label_2563b0;
        case 0x2563b4u: goto label_2563b4;
        case 0x2563b8u: goto label_2563b8;
        case 0x2563bcu: goto label_2563bc;
        case 0x2563c0u: goto label_2563c0;
        case 0x2563c4u: goto label_2563c4;
        case 0x2563c8u: goto label_2563c8;
        case 0x2563ccu: goto label_2563cc;
        case 0x2563d0u: goto label_2563d0;
        case 0x2563d4u: goto label_2563d4;
        case 0x2563d8u: goto label_2563d8;
        case 0x2563dcu: goto label_2563dc;
        case 0x2563e0u: goto label_2563e0;
        case 0x2563e4u: goto label_2563e4;
        case 0x2563e8u: goto label_2563e8;
        case 0x2563ecu: goto label_2563ec;
        case 0x2563f0u: goto label_2563f0;
        case 0x2563f4u: goto label_2563f4;
        case 0x2563f8u: goto label_2563f8;
        case 0x2563fcu: goto label_2563fc;
        case 0x256400u: goto label_256400;
        case 0x256404u: goto label_256404;
        case 0x256408u: goto label_256408;
        case 0x25640cu: goto label_25640c;
        case 0x256410u: goto label_256410;
        case 0x256414u: goto label_256414;
        case 0x256418u: goto label_256418;
        case 0x25641cu: goto label_25641c;
        case 0x256420u: goto label_256420;
        case 0x256424u: goto label_256424;
        case 0x256428u: goto label_256428;
        case 0x25642cu: goto label_25642c;
        case 0x256430u: goto label_256430;
        case 0x256434u: goto label_256434;
        case 0x256438u: goto label_256438;
        case 0x25643cu: goto label_25643c;
        case 0x256440u: goto label_256440;
        case 0x256444u: goto label_256444;
        case 0x256448u: goto label_256448;
        case 0x25644cu: goto label_25644c;
        case 0x256450u: goto label_256450;
        case 0x256454u: goto label_256454;
        case 0x256458u: goto label_256458;
        case 0x25645cu: goto label_25645c;
        case 0x256460u: goto label_256460;
        case 0x256464u: goto label_256464;
        case 0x256468u: goto label_256468;
        case 0x25646cu: goto label_25646c;
        case 0x256470u: goto label_256470;
        case 0x256474u: goto label_256474;
        case 0x256478u: goto label_256478;
        case 0x25647cu: goto label_25647c;
        case 0x256480u: goto label_256480;
        case 0x256484u: goto label_256484;
        case 0x256488u: goto label_256488;
        case 0x25648cu: goto label_25648c;
        case 0x256490u: goto label_256490;
        case 0x256494u: goto label_256494;
        case 0x256498u: goto label_256498;
        case 0x25649cu: goto label_25649c;
        case 0x2564a0u: goto label_2564a0;
        case 0x2564a4u: goto label_2564a4;
        case 0x2564a8u: goto label_2564a8;
        case 0x2564acu: goto label_2564ac;
        case 0x2564b0u: goto label_2564b0;
        case 0x2564b4u: goto label_2564b4;
        case 0x2564b8u: goto label_2564b8;
        case 0x2564bcu: goto label_2564bc;
        case 0x2564c0u: goto label_2564c0;
        case 0x2564c4u: goto label_2564c4;
        case 0x2564c8u: goto label_2564c8;
        case 0x2564ccu: goto label_2564cc;
        case 0x2564d0u: goto label_2564d0;
        case 0x2564d4u: goto label_2564d4;
        case 0x2564d8u: goto label_2564d8;
        case 0x2564dcu: goto label_2564dc;
        case 0x2564e0u: goto label_2564e0;
        case 0x2564e4u: goto label_2564e4;
        case 0x2564e8u: goto label_2564e8;
        case 0x2564ecu: goto label_2564ec;
        case 0x2564f0u: goto label_2564f0;
        case 0x2564f4u: goto label_2564f4;
        case 0x2564f8u: goto label_2564f8;
        case 0x2564fcu: goto label_2564fc;
        case 0x256500u: goto label_256500;
        case 0x256504u: goto label_256504;
        case 0x256508u: goto label_256508;
        case 0x25650cu: goto label_25650c;
        case 0x256510u: goto label_256510;
        case 0x256514u: goto label_256514;
        case 0x256518u: goto label_256518;
        case 0x25651cu: goto label_25651c;
        case 0x256520u: goto label_256520;
        case 0x256524u: goto label_256524;
        case 0x256528u: goto label_256528;
        case 0x25652cu: goto label_25652c;
        case 0x256530u: goto label_256530;
        case 0x256534u: goto label_256534;
        case 0x256538u: goto label_256538;
        case 0x25653cu: goto label_25653c;
        case 0x256540u: goto label_256540;
        case 0x256544u: goto label_256544;
        case 0x256548u: goto label_256548;
        case 0x25654cu: goto label_25654c;
        case 0x256550u: goto label_256550;
        case 0x256554u: goto label_256554;
        case 0x256558u: goto label_256558;
        case 0x25655cu: goto label_25655c;
        case 0x256560u: goto label_256560;
        case 0x256564u: goto label_256564;
        case 0x256568u: goto label_256568;
        case 0x25656cu: goto label_25656c;
        case 0x256570u: goto label_256570;
        case 0x256574u: goto label_256574;
        case 0x256578u: goto label_256578;
        case 0x25657cu: goto label_25657c;
        case 0x256580u: goto label_256580;
        case 0x256584u: goto label_256584;
        case 0x256588u: goto label_256588;
        case 0x25658cu: goto label_25658c;
        case 0x256590u: goto label_256590;
        case 0x256594u: goto label_256594;
        case 0x256598u: goto label_256598;
        case 0x25659cu: goto label_25659c;
        case 0x2565a0u: goto label_2565a0;
        case 0x2565a4u: goto label_2565a4;
        case 0x2565a8u: goto label_2565a8;
        case 0x2565acu: goto label_2565ac;
        case 0x2565b0u: goto label_2565b0;
        case 0x2565b4u: goto label_2565b4;
        case 0x2565b8u: goto label_2565b8;
        case 0x2565bcu: goto label_2565bc;
        case 0x2565c0u: goto label_2565c0;
        case 0x2565c4u: goto label_2565c4;
        case 0x2565c8u: goto label_2565c8;
        case 0x2565ccu: goto label_2565cc;
        case 0x2565d0u: goto label_2565d0;
        case 0x2565d4u: goto label_2565d4;
        case 0x2565d8u: goto label_2565d8;
        case 0x2565dcu: goto label_2565dc;
        case 0x2565e0u: goto label_2565e0;
        case 0x2565e4u: goto label_2565e4;
        case 0x2565e8u: goto label_2565e8;
        case 0x2565ecu: goto label_2565ec;
        case 0x2565f0u: goto label_2565f0;
        case 0x2565f4u: goto label_2565f4;
        case 0x2565f8u: goto label_2565f8;
        case 0x2565fcu: goto label_2565fc;
        case 0x256600u: goto label_256600;
        case 0x256604u: goto label_256604;
        case 0x256608u: goto label_256608;
        case 0x25660cu: goto label_25660c;
        case 0x256610u: goto label_256610;
        case 0x256614u: goto label_256614;
        case 0x256618u: goto label_256618;
        case 0x25661cu: goto label_25661c;
        case 0x256620u: goto label_256620;
        case 0x256624u: goto label_256624;
        case 0x256628u: goto label_256628;
        case 0x25662cu: goto label_25662c;
        case 0x256630u: goto label_256630;
        case 0x256634u: goto label_256634;
        case 0x256638u: goto label_256638;
        case 0x25663cu: goto label_25663c;
        case 0x256640u: goto label_256640;
        case 0x256644u: goto label_256644;
        case 0x256648u: goto label_256648;
        case 0x25664cu: goto label_25664c;
        case 0x256650u: goto label_256650;
        case 0x256654u: goto label_256654;
        case 0x256658u: goto label_256658;
        case 0x25665cu: goto label_25665c;
        case 0x256660u: goto label_256660;
        case 0x256664u: goto label_256664;
        case 0x256668u: goto label_256668;
        case 0x25666cu: goto label_25666c;
        case 0x256670u: goto label_256670;
        case 0x256674u: goto label_256674;
        case 0x256678u: goto label_256678;
        case 0x25667cu: goto label_25667c;
        case 0x256680u: goto label_256680;
        case 0x256684u: goto label_256684;
        case 0x256688u: goto label_256688;
        case 0x25668cu: goto label_25668c;
        case 0x256690u: goto label_256690;
        case 0x256694u: goto label_256694;
        case 0x256698u: goto label_256698;
        case 0x25669cu: goto label_25669c;
        case 0x2566a0u: goto label_2566a0;
        case 0x2566a4u: goto label_2566a4;
        case 0x2566a8u: goto label_2566a8;
        case 0x2566acu: goto label_2566ac;
        case 0x2566b0u: goto label_2566b0;
        case 0x2566b4u: goto label_2566b4;
        case 0x2566b8u: goto label_2566b8;
        case 0x2566bcu: goto label_2566bc;
        case 0x2566c0u: goto label_2566c0;
        case 0x2566c4u: goto label_2566c4;
        case 0x2566c8u: goto label_2566c8;
        case 0x2566ccu: goto label_2566cc;
        case 0x2566d0u: goto label_2566d0;
        case 0x2566d4u: goto label_2566d4;
        case 0x2566d8u: goto label_2566d8;
        case 0x2566dcu: goto label_2566dc;
        case 0x2566e0u: goto label_2566e0;
        case 0x2566e4u: goto label_2566e4;
        case 0x2566e8u: goto label_2566e8;
        case 0x2566ecu: goto label_2566ec;
        case 0x2566f0u: goto label_2566f0;
        case 0x2566f4u: goto label_2566f4;
        case 0x2566f8u: goto label_2566f8;
        case 0x2566fcu: goto label_2566fc;
        case 0x256700u: goto label_256700;
        case 0x256704u: goto label_256704;
        case 0x256708u: goto label_256708;
        case 0x25670cu: goto label_25670c;
        case 0x256710u: goto label_256710;
        case 0x256714u: goto label_256714;
        case 0x256718u: goto label_256718;
        case 0x25671cu: goto label_25671c;
        case 0x256720u: goto label_256720;
        case 0x256724u: goto label_256724;
        case 0x256728u: goto label_256728;
        case 0x25672cu: goto label_25672c;
        case 0x256730u: goto label_256730;
        case 0x256734u: goto label_256734;
        case 0x256738u: goto label_256738;
        case 0x25673cu: goto label_25673c;
        case 0x256740u: goto label_256740;
        case 0x256744u: goto label_256744;
        case 0x256748u: goto label_256748;
        case 0x25674cu: goto label_25674c;
        case 0x256750u: goto label_256750;
        case 0x256754u: goto label_256754;
        case 0x256758u: goto label_256758;
        case 0x25675cu: goto label_25675c;
        case 0x256760u: goto label_256760;
        case 0x256764u: goto label_256764;
        case 0x256768u: goto label_256768;
        case 0x25676cu: goto label_25676c;
        case 0x256770u: goto label_256770;
        case 0x256774u: goto label_256774;
        case 0x256778u: goto label_256778;
        case 0x25677cu: goto label_25677c;
        case 0x256780u: goto label_256780;
        case 0x256784u: goto label_256784;
        case 0x256788u: goto label_256788;
        case 0x25678cu: goto label_25678c;
        case 0x256790u: goto label_256790;
        case 0x256794u: goto label_256794;
        case 0x256798u: goto label_256798;
        case 0x25679cu: goto label_25679c;
        case 0x2567a0u: goto label_2567a0;
        case 0x2567a4u: goto label_2567a4;
        case 0x2567a8u: goto label_2567a8;
        case 0x2567acu: goto label_2567ac;
        case 0x2567b0u: goto label_2567b0;
        case 0x2567b4u: goto label_2567b4;
        case 0x2567b8u: goto label_2567b8;
        case 0x2567bcu: goto label_2567bc;
        case 0x2567c0u: goto label_2567c0;
        case 0x2567c4u: goto label_2567c4;
        case 0x2567c8u: goto label_2567c8;
        case 0x2567ccu: goto label_2567cc;
        case 0x2567d0u: goto label_2567d0;
        case 0x2567d4u: goto label_2567d4;
        case 0x2567d8u: goto label_2567d8;
        case 0x2567dcu: goto label_2567dc;
        case 0x2567e0u: goto label_2567e0;
        case 0x2567e4u: goto label_2567e4;
        case 0x2567e8u: goto label_2567e8;
        case 0x2567ecu: goto label_2567ec;
        case 0x2567f0u: goto label_2567f0;
        case 0x2567f4u: goto label_2567f4;
        case 0x2567f8u: goto label_2567f8;
        case 0x2567fcu: goto label_2567fc;
        case 0x256800u: goto label_256800;
        case 0x256804u: goto label_256804;
        case 0x256808u: goto label_256808;
        case 0x25680cu: goto label_25680c;
        case 0x256810u: goto label_256810;
        case 0x256814u: goto label_256814;
        case 0x256818u: goto label_256818;
        case 0x25681cu: goto label_25681c;
        case 0x256820u: goto label_256820;
        case 0x256824u: goto label_256824;
        case 0x256828u: goto label_256828;
        case 0x25682cu: goto label_25682c;
        case 0x256830u: goto label_256830;
        case 0x256834u: goto label_256834;
        case 0x256838u: goto label_256838;
        case 0x25683cu: goto label_25683c;
        case 0x256840u: goto label_256840;
        case 0x256844u: goto label_256844;
        case 0x256848u: goto label_256848;
        case 0x25684cu: goto label_25684c;
        case 0x256850u: goto label_256850;
        case 0x256854u: goto label_256854;
        case 0x256858u: goto label_256858;
        case 0x25685cu: goto label_25685c;
        case 0x256860u: goto label_256860;
        case 0x256864u: goto label_256864;
        case 0x256868u: goto label_256868;
        case 0x25686cu: goto label_25686c;
        case 0x256870u: goto label_256870;
        case 0x256874u: goto label_256874;
        case 0x256878u: goto label_256878;
        case 0x25687cu: goto label_25687c;
        case 0x256880u: goto label_256880;
        case 0x256884u: goto label_256884;
        case 0x256888u: goto label_256888;
        case 0x25688cu: goto label_25688c;
        case 0x256890u: goto label_256890;
        case 0x256894u: goto label_256894;
        case 0x256898u: goto label_256898;
        case 0x25689cu: goto label_25689c;
        case 0x2568a0u: goto label_2568a0;
        case 0x2568a4u: goto label_2568a4;
        case 0x2568a8u: goto label_2568a8;
        case 0x2568acu: goto label_2568ac;
        case 0x2568b0u: goto label_2568b0;
        case 0x2568b4u: goto label_2568b4;
        case 0x2568b8u: goto label_2568b8;
        case 0x2568bcu: goto label_2568bc;
        case 0x2568c0u: goto label_2568c0;
        case 0x2568c4u: goto label_2568c4;
        case 0x2568c8u: goto label_2568c8;
        case 0x2568ccu: goto label_2568cc;
        case 0x2568d0u: goto label_2568d0;
        case 0x2568d4u: goto label_2568d4;
        case 0x2568d8u: goto label_2568d8;
        case 0x2568dcu: goto label_2568dc;
        case 0x2568e0u: goto label_2568e0;
        case 0x2568e4u: goto label_2568e4;
        case 0x2568e8u: goto label_2568e8;
        case 0x2568ecu: goto label_2568ec;
        case 0x2568f0u: goto label_2568f0;
        case 0x2568f4u: goto label_2568f4;
        case 0x2568f8u: goto label_2568f8;
        case 0x2568fcu: goto label_2568fc;
        case 0x256900u: goto label_256900;
        case 0x256904u: goto label_256904;
        case 0x256908u: goto label_256908;
        case 0x25690cu: goto label_25690c;
        case 0x256910u: goto label_256910;
        case 0x256914u: goto label_256914;
        case 0x256918u: goto label_256918;
        case 0x25691cu: goto label_25691c;
        case 0x256920u: goto label_256920;
        case 0x256924u: goto label_256924;
        case 0x256928u: goto label_256928;
        case 0x25692cu: goto label_25692c;
        case 0x256930u: goto label_256930;
        case 0x256934u: goto label_256934;
        case 0x256938u: goto label_256938;
        case 0x25693cu: goto label_25693c;
        case 0x256940u: goto label_256940;
        case 0x256944u: goto label_256944;
        case 0x256948u: goto label_256948;
        case 0x25694cu: goto label_25694c;
        case 0x256950u: goto label_256950;
        case 0x256954u: goto label_256954;
        case 0x256958u: goto label_256958;
        case 0x25695cu: goto label_25695c;
        case 0x256960u: goto label_256960;
        case 0x256964u: goto label_256964;
        case 0x256968u: goto label_256968;
        case 0x25696cu: goto label_25696c;
        case 0x256970u: goto label_256970;
        case 0x256974u: goto label_256974;
        case 0x256978u: goto label_256978;
        case 0x25697cu: goto label_25697c;
        case 0x256980u: goto label_256980;
        case 0x256984u: goto label_256984;
        case 0x256988u: goto label_256988;
        case 0x25698cu: goto label_25698c;
        case 0x256990u: goto label_256990;
        case 0x256994u: goto label_256994;
        case 0x256998u: goto label_256998;
        case 0x25699cu: goto label_25699c;
        case 0x2569a0u: goto label_2569a0;
        case 0x2569a4u: goto label_2569a4;
        case 0x2569a8u: goto label_2569a8;
        case 0x2569acu: goto label_2569ac;
        case 0x2569b0u: goto label_2569b0;
        case 0x2569b4u: goto label_2569b4;
        case 0x2569b8u: goto label_2569b8;
        case 0x2569bcu: goto label_2569bc;
        case 0x2569c0u: goto label_2569c0;
        case 0x2569c4u: goto label_2569c4;
        case 0x2569c8u: goto label_2569c8;
        case 0x2569ccu: goto label_2569cc;
        case 0x2569d0u: goto label_2569d0;
        case 0x2569d4u: goto label_2569d4;
        case 0x2569d8u: goto label_2569d8;
        case 0x2569dcu: goto label_2569dc;
        case 0x2569e0u: goto label_2569e0;
        case 0x2569e4u: goto label_2569e4;
        case 0x2569e8u: goto label_2569e8;
        case 0x2569ecu: goto label_2569ec;
        case 0x2569f0u: goto label_2569f0;
        case 0x2569f4u: goto label_2569f4;
        case 0x2569f8u: goto label_2569f8;
        case 0x2569fcu: goto label_2569fc;
        case 0x256a00u: goto label_256a00;
        case 0x256a04u: goto label_256a04;
        case 0x256a08u: goto label_256a08;
        case 0x256a0cu: goto label_256a0c;
        case 0x256a10u: goto label_256a10;
        case 0x256a14u: goto label_256a14;
        case 0x256a18u: goto label_256a18;
        case 0x256a1cu: goto label_256a1c;
        case 0x256a20u: goto label_256a20;
        case 0x256a24u: goto label_256a24;
        case 0x256a28u: goto label_256a28;
        case 0x256a2cu: goto label_256a2c;
        case 0x256a30u: goto label_256a30;
        case 0x256a34u: goto label_256a34;
        case 0x256a38u: goto label_256a38;
        case 0x256a3cu: goto label_256a3c;
        case 0x256a40u: goto label_256a40;
        case 0x256a44u: goto label_256a44;
        case 0x256a48u: goto label_256a48;
        case 0x256a4cu: goto label_256a4c;
        case 0x256a50u: goto label_256a50;
        case 0x256a54u: goto label_256a54;
        case 0x256a58u: goto label_256a58;
        case 0x256a5cu: goto label_256a5c;
        case 0x256a60u: goto label_256a60;
        case 0x256a64u: goto label_256a64;
        case 0x256a68u: goto label_256a68;
        case 0x256a6cu: goto label_256a6c;
        case 0x256a70u: goto label_256a70;
        case 0x256a74u: goto label_256a74;
        case 0x256a78u: goto label_256a78;
        case 0x256a7cu: goto label_256a7c;
        case 0x256a80u: goto label_256a80;
        case 0x256a84u: goto label_256a84;
        case 0x256a88u: goto label_256a88;
        case 0x256a8cu: goto label_256a8c;
        case 0x256a90u: goto label_256a90;
        case 0x256a94u: goto label_256a94;
        case 0x256a98u: goto label_256a98;
        case 0x256a9cu: goto label_256a9c;
        case 0x256aa0u: goto label_256aa0;
        case 0x256aa4u: goto label_256aa4;
        case 0x256aa8u: goto label_256aa8;
        case 0x256aacu: goto label_256aac;
        case 0x256ab0u: goto label_256ab0;
        case 0x256ab4u: goto label_256ab4;
        case 0x256ab8u: goto label_256ab8;
        case 0x256abcu: goto label_256abc;
        case 0x256ac0u: goto label_256ac0;
        case 0x256ac4u: goto label_256ac4;
        case 0x256ac8u: goto label_256ac8;
        case 0x256accu: goto label_256acc;
        case 0x256ad0u: goto label_256ad0;
        case 0x256ad4u: goto label_256ad4;
        case 0x256ad8u: goto label_256ad8;
        case 0x256adcu: goto label_256adc;
        case 0x256ae0u: goto label_256ae0;
        case 0x256ae4u: goto label_256ae4;
        case 0x256ae8u: goto label_256ae8;
        case 0x256aecu: goto label_256aec;
        case 0x256af0u: goto label_256af0;
        case 0x256af4u: goto label_256af4;
        case 0x256af8u: goto label_256af8;
        case 0x256afcu: goto label_256afc;
        case 0x256b00u: goto label_256b00;
        case 0x256b04u: goto label_256b04;
        case 0x256b08u: goto label_256b08;
        case 0x256b0cu: goto label_256b0c;
        case 0x256b10u: goto label_256b10;
        case 0x256b14u: goto label_256b14;
        case 0x256b18u: goto label_256b18;
        case 0x256b1cu: goto label_256b1c;
        case 0x256b20u: goto label_256b20;
        case 0x256b24u: goto label_256b24;
        case 0x256b28u: goto label_256b28;
        case 0x256b2cu: goto label_256b2c;
        case 0x256b30u: goto label_256b30;
        case 0x256b34u: goto label_256b34;
        case 0x256b38u: goto label_256b38;
        case 0x256b3cu: goto label_256b3c;
        case 0x256b40u: goto label_256b40;
        case 0x256b44u: goto label_256b44;
        case 0x256b48u: goto label_256b48;
        case 0x256b4cu: goto label_256b4c;
        case 0x256b50u: goto label_256b50;
        case 0x256b54u: goto label_256b54;
        case 0x256b58u: goto label_256b58;
        case 0x256b5cu: goto label_256b5c;
        case 0x256b60u: goto label_256b60;
        case 0x256b64u: goto label_256b64;
        case 0x256b68u: goto label_256b68;
        case 0x256b6cu: goto label_256b6c;
        case 0x256b70u: goto label_256b70;
        case 0x256b74u: goto label_256b74;
        case 0x256b78u: goto label_256b78;
        case 0x256b7cu: goto label_256b7c;
        case 0x256b80u: goto label_256b80;
        case 0x256b84u: goto label_256b84;
        case 0x256b88u: goto label_256b88;
        case 0x256b8cu: goto label_256b8c;
        case 0x256b90u: goto label_256b90;
        case 0x256b94u: goto label_256b94;
        case 0x256b98u: goto label_256b98;
        case 0x256b9cu: goto label_256b9c;
        case 0x256ba0u: goto label_256ba0;
        case 0x256ba4u: goto label_256ba4;
        case 0x256ba8u: goto label_256ba8;
        case 0x256bacu: goto label_256bac;
        case 0x256bb0u: goto label_256bb0;
        case 0x256bb4u: goto label_256bb4;
        case 0x256bb8u: goto label_256bb8;
        case 0x256bbcu: goto label_256bbc;
        case 0x256bc0u: goto label_256bc0;
        case 0x256bc4u: goto label_256bc4;
        case 0x256bc8u: goto label_256bc8;
        case 0x256bccu: goto label_256bcc;
        case 0x256bd0u: goto label_256bd0;
        case 0x256bd4u: goto label_256bd4;
        case 0x256bd8u: goto label_256bd8;
        case 0x256bdcu: goto label_256bdc;
        case 0x256be0u: goto label_256be0;
        case 0x256be4u: goto label_256be4;
        case 0x256be8u: goto label_256be8;
        case 0x256becu: goto label_256bec;
        case 0x256bf0u: goto label_256bf0;
        case 0x256bf4u: goto label_256bf4;
        case 0x256bf8u: goto label_256bf8;
        case 0x256bfcu: goto label_256bfc;
        case 0x256c00u: goto label_256c00;
        case 0x256c04u: goto label_256c04;
        case 0x256c08u: goto label_256c08;
        case 0x256c0cu: goto label_256c0c;
        case 0x256c10u: goto label_256c10;
        case 0x256c14u: goto label_256c14;
        case 0x256c18u: goto label_256c18;
        case 0x256c1cu: goto label_256c1c;
        case 0x256c20u: goto label_256c20;
        case 0x256c24u: goto label_256c24;
        case 0x256c28u: goto label_256c28;
        case 0x256c2cu: goto label_256c2c;
        case 0x256c30u: goto label_256c30;
        case 0x256c34u: goto label_256c34;
        case 0x256c38u: goto label_256c38;
        case 0x256c3cu: goto label_256c3c;
        case 0x256c40u: goto label_256c40;
        case 0x256c44u: goto label_256c44;
        case 0x256c48u: goto label_256c48;
        case 0x256c4cu: goto label_256c4c;
        case 0x256c50u: goto label_256c50;
        case 0x256c54u: goto label_256c54;
        case 0x256c58u: goto label_256c58;
        case 0x256c5cu: goto label_256c5c;
        case 0x256c60u: goto label_256c60;
        case 0x256c64u: goto label_256c64;
        case 0x256c68u: goto label_256c68;
        case 0x256c6cu: goto label_256c6c;
        case 0x256c70u: goto label_256c70;
        case 0x256c74u: goto label_256c74;
        case 0x256c78u: goto label_256c78;
        case 0x256c7cu: goto label_256c7c;
        case 0x256c80u: goto label_256c80;
        case 0x256c84u: goto label_256c84;
        case 0x256c88u: goto label_256c88;
        case 0x256c8cu: goto label_256c8c;
        case 0x256c90u: goto label_256c90;
        case 0x256c94u: goto label_256c94;
        case 0x256c98u: goto label_256c98;
        case 0x256c9cu: goto label_256c9c;
        case 0x256ca0u: goto label_256ca0;
        case 0x256ca4u: goto label_256ca4;
        case 0x256ca8u: goto label_256ca8;
        case 0x256cacu: goto label_256cac;
        case 0x256cb0u: goto label_256cb0;
        case 0x256cb4u: goto label_256cb4;
        case 0x256cb8u: goto label_256cb8;
        case 0x256cbcu: goto label_256cbc;
        case 0x256cc0u: goto label_256cc0;
        case 0x256cc4u: goto label_256cc4;
        case 0x256cc8u: goto label_256cc8;
        case 0x256cccu: goto label_256ccc;
        case 0x256cd0u: goto label_256cd0;
        case 0x256cd4u: goto label_256cd4;
        case 0x256cd8u: goto label_256cd8;
        case 0x256cdcu: goto label_256cdc;
        case 0x256ce0u: goto label_256ce0;
        case 0x256ce4u: goto label_256ce4;
        case 0x256ce8u: goto label_256ce8;
        case 0x256cecu: goto label_256cec;
        case 0x256cf0u: goto label_256cf0;
        case 0x256cf4u: goto label_256cf4;
        case 0x256cf8u: goto label_256cf8;
        case 0x256cfcu: goto label_256cfc;
        case 0x256d00u: goto label_256d00;
        case 0x256d04u: goto label_256d04;
        case 0x256d08u: goto label_256d08;
        case 0x256d0cu: goto label_256d0c;
        case 0x256d10u: goto label_256d10;
        case 0x256d14u: goto label_256d14;
        case 0x256d18u: goto label_256d18;
        case 0x256d1cu: goto label_256d1c;
        case 0x256d20u: goto label_256d20;
        case 0x256d24u: goto label_256d24;
        case 0x256d28u: goto label_256d28;
        case 0x256d2cu: goto label_256d2c;
        case 0x256d30u: goto label_256d30;
        case 0x256d34u: goto label_256d34;
        case 0x256d38u: goto label_256d38;
        case 0x256d3cu: goto label_256d3c;
        case 0x256d40u: goto label_256d40;
        case 0x256d44u: goto label_256d44;
        case 0x256d48u: goto label_256d48;
        case 0x256d4cu: goto label_256d4c;
        case 0x256d50u: goto label_256d50;
        case 0x256d54u: goto label_256d54;
        case 0x256d58u: goto label_256d58;
        case 0x256d5cu: goto label_256d5c;
        case 0x256d60u: goto label_256d60;
        case 0x256d64u: goto label_256d64;
        case 0x256d68u: goto label_256d68;
        case 0x256d6cu: goto label_256d6c;
        case 0x256d70u: goto label_256d70;
        case 0x256d74u: goto label_256d74;
        case 0x256d78u: goto label_256d78;
        case 0x256d7cu: goto label_256d7c;
        case 0x256d80u: goto label_256d80;
        case 0x256d84u: goto label_256d84;
        case 0x256d88u: goto label_256d88;
        case 0x256d8cu: goto label_256d8c;
        case 0x256d90u: goto label_256d90;
        case 0x256d94u: goto label_256d94;
        case 0x256d98u: goto label_256d98;
        case 0x256d9cu: goto label_256d9c;
        case 0x256da0u: goto label_256da0;
        case 0x256da4u: goto label_256da4;
        case 0x256da8u: goto label_256da8;
        case 0x256dacu: goto label_256dac;
        case 0x256db0u: goto label_256db0;
        case 0x256db4u: goto label_256db4;
        case 0x256db8u: goto label_256db8;
        case 0x256dbcu: goto label_256dbc;
        case 0x256dc0u: goto label_256dc0;
        case 0x256dc4u: goto label_256dc4;
        case 0x256dc8u: goto label_256dc8;
        case 0x256dccu: goto label_256dcc;
        case 0x256dd0u: goto label_256dd0;
        case 0x256dd4u: goto label_256dd4;
        case 0x256dd8u: goto label_256dd8;
        case 0x256ddcu: goto label_256ddc;
        case 0x256de0u: goto label_256de0;
        case 0x256de4u: goto label_256de4;
        case 0x256de8u: goto label_256de8;
        case 0x256decu: goto label_256dec;
        case 0x256df0u: goto label_256df0;
        case 0x256df4u: goto label_256df4;
        case 0x256df8u: goto label_256df8;
        case 0x256dfcu: goto label_256dfc;
        case 0x256e00u: goto label_256e00;
        case 0x256e04u: goto label_256e04;
        case 0x256e08u: goto label_256e08;
        case 0x256e0cu: goto label_256e0c;
        case 0x256e10u: goto label_256e10;
        case 0x256e14u: goto label_256e14;
        case 0x256e18u: goto label_256e18;
        case 0x256e1cu: goto label_256e1c;
        case 0x256e20u: goto label_256e20;
        case 0x256e24u: goto label_256e24;
        case 0x256e28u: goto label_256e28;
        case 0x256e2cu: goto label_256e2c;
        case 0x256e30u: goto label_256e30;
        case 0x256e34u: goto label_256e34;
        case 0x256e38u: goto label_256e38;
        case 0x256e3cu: goto label_256e3c;
        case 0x256e40u: goto label_256e40;
        case 0x256e44u: goto label_256e44;
        case 0x256e48u: goto label_256e48;
        case 0x256e4cu: goto label_256e4c;
        case 0x256e50u: goto label_256e50;
        case 0x256e54u: goto label_256e54;
        case 0x256e58u: goto label_256e58;
        case 0x256e5cu: goto label_256e5c;
        case 0x256e60u: goto label_256e60;
        case 0x256e64u: goto label_256e64;
        case 0x256e68u: goto label_256e68;
        case 0x256e6cu: goto label_256e6c;
        case 0x256e70u: goto label_256e70;
        case 0x256e74u: goto label_256e74;
        case 0x256e78u: goto label_256e78;
        case 0x256e7cu: goto label_256e7c;
        case 0x256e80u: goto label_256e80;
        case 0x256e84u: goto label_256e84;
        case 0x256e88u: goto label_256e88;
        case 0x256e8cu: goto label_256e8c;
        case 0x256e90u: goto label_256e90;
        case 0x256e94u: goto label_256e94;
        case 0x256e98u: goto label_256e98;
        case 0x256e9cu: goto label_256e9c;
        case 0x256ea0u: goto label_256ea0;
        case 0x256ea4u: goto label_256ea4;
        case 0x256ea8u: goto label_256ea8;
        case 0x256eacu: goto label_256eac;
        case 0x256eb0u: goto label_256eb0;
        case 0x256eb4u: goto label_256eb4;
        case 0x256eb8u: goto label_256eb8;
        case 0x256ebcu: goto label_256ebc;
        case 0x256ec0u: goto label_256ec0;
        case 0x256ec4u: goto label_256ec4;
        case 0x256ec8u: goto label_256ec8;
        case 0x256eccu: goto label_256ecc;
        case 0x256ed0u: goto label_256ed0;
        case 0x256ed4u: goto label_256ed4;
        case 0x256ed8u: goto label_256ed8;
        case 0x256edcu: goto label_256edc;
        case 0x256ee0u: goto label_256ee0;
        case 0x256ee4u: goto label_256ee4;
        case 0x256ee8u: goto label_256ee8;
        case 0x256eecu: goto label_256eec;
        case 0x256ef0u: goto label_256ef0;
        case 0x256ef4u: goto label_256ef4;
        case 0x256ef8u: goto label_256ef8;
        case 0x256efcu: goto label_256efc;
        case 0x256f00u: goto label_256f00;
        case 0x256f04u: goto label_256f04;
        case 0x256f08u: goto label_256f08;
        case 0x256f0cu: goto label_256f0c;
        case 0x256f10u: goto label_256f10;
        case 0x256f14u: goto label_256f14;
        case 0x256f18u: goto label_256f18;
        case 0x256f1cu: goto label_256f1c;
        case 0x256f20u: goto label_256f20;
        case 0x256f24u: goto label_256f24;
        case 0x256f28u: goto label_256f28;
        case 0x256f2cu: goto label_256f2c;
        case 0x256f30u: goto label_256f30;
        case 0x256f34u: goto label_256f34;
        case 0x256f38u: goto label_256f38;
        case 0x256f3cu: goto label_256f3c;
        case 0x256f40u: goto label_256f40;
        case 0x256f44u: goto label_256f44;
        case 0x256f48u: goto label_256f48;
        case 0x256f4cu: goto label_256f4c;
        case 0x256f50u: goto label_256f50;
        case 0x256f54u: goto label_256f54;
        case 0x256f58u: goto label_256f58;
        case 0x256f5cu: goto label_256f5c;
        case 0x256f60u: goto label_256f60;
        case 0x256f64u: goto label_256f64;
        case 0x256f68u: goto label_256f68;
        case 0x256f6cu: goto label_256f6c;
        case 0x256f70u: goto label_256f70;
        case 0x256f74u: goto label_256f74;
        case 0x256f78u: goto label_256f78;
        case 0x256f7cu: goto label_256f7c;
        case 0x256f80u: goto label_256f80;
        case 0x256f84u: goto label_256f84;
        case 0x256f88u: goto label_256f88;
        case 0x256f8cu: goto label_256f8c;
        case 0x256f90u: goto label_256f90;
        case 0x256f94u: goto label_256f94;
        case 0x256f98u: goto label_256f98;
        case 0x256f9cu: goto label_256f9c;
        case 0x256fa0u: goto label_256fa0;
        case 0x256fa4u: goto label_256fa4;
        case 0x256fa8u: goto label_256fa8;
        case 0x256facu: goto label_256fac;
        case 0x256fb0u: goto label_256fb0;
        case 0x256fb4u: goto label_256fb4;
        case 0x256fb8u: goto label_256fb8;
        case 0x256fbcu: goto label_256fbc;
        case 0x256fc0u: goto label_256fc0;
        case 0x256fc4u: goto label_256fc4;
        case 0x256fc8u: goto label_256fc8;
        case 0x256fccu: goto label_256fcc;
        case 0x256fd0u: goto label_256fd0;
        case 0x256fd4u: goto label_256fd4;
        case 0x256fd8u: goto label_256fd8;
        case 0x256fdcu: goto label_256fdc;
        case 0x256fe0u: goto label_256fe0;
        case 0x256fe4u: goto label_256fe4;
        case 0x256fe8u: goto label_256fe8;
        case 0x256fecu: goto label_256fec;
        case 0x256ff0u: goto label_256ff0;
        case 0x256ff4u: goto label_256ff4;
        case 0x256ff8u: goto label_256ff8;
        case 0x256ffcu: goto label_256ffc;
        case 0x257000u: goto label_257000;
        case 0x257004u: goto label_257004;
        case 0x257008u: goto label_257008;
        case 0x25700cu: goto label_25700c;
        case 0x257010u: goto label_257010;
        case 0x257014u: goto label_257014;
        case 0x257018u: goto label_257018;
        case 0x25701cu: goto label_25701c;
        case 0x257020u: goto label_257020;
        case 0x257024u: goto label_257024;
        case 0x257028u: goto label_257028;
        case 0x25702cu: goto label_25702c;
        case 0x257030u: goto label_257030;
        case 0x257034u: goto label_257034;
        case 0x257038u: goto label_257038;
        case 0x25703cu: goto label_25703c;
        case 0x257040u: goto label_257040;
        case 0x257044u: goto label_257044;
        case 0x257048u: goto label_257048;
        case 0x25704cu: goto label_25704c;
        case 0x257050u: goto label_257050;
        case 0x257054u: goto label_257054;
        case 0x257058u: goto label_257058;
        case 0x25705cu: goto label_25705c;
        case 0x257060u: goto label_257060;
        case 0x257064u: goto label_257064;
        case 0x257068u: goto label_257068;
        case 0x25706cu: goto label_25706c;
        case 0x257070u: goto label_257070;
        case 0x257074u: goto label_257074;
        case 0x257078u: goto label_257078;
        case 0x25707cu: goto label_25707c;
        case 0x257080u: goto label_257080;
        case 0x257084u: goto label_257084;
        case 0x257088u: goto label_257088;
        case 0x25708cu: goto label_25708c;
        case 0x257090u: goto label_257090;
        case 0x257094u: goto label_257094;
        case 0x257098u: goto label_257098;
        case 0x25709cu: goto label_25709c;
        case 0x2570a0u: goto label_2570a0;
        case 0x2570a4u: goto label_2570a4;
        case 0x2570a8u: goto label_2570a8;
        case 0x2570acu: goto label_2570ac;
        case 0x2570b0u: goto label_2570b0;
        case 0x2570b4u: goto label_2570b4;
        case 0x2570b8u: goto label_2570b8;
        case 0x2570bcu: goto label_2570bc;
        case 0x2570c0u: goto label_2570c0;
        case 0x2570c4u: goto label_2570c4;
        case 0x2570c8u: goto label_2570c8;
        case 0x2570ccu: goto label_2570cc;
        case 0x2570d0u: goto label_2570d0;
        case 0x2570d4u: goto label_2570d4;
        case 0x2570d8u: goto label_2570d8;
        case 0x2570dcu: goto label_2570dc;
        case 0x2570e0u: goto label_2570e0;
        case 0x2570e4u: goto label_2570e4;
        case 0x2570e8u: goto label_2570e8;
        case 0x2570ecu: goto label_2570ec;
        case 0x2570f0u: goto label_2570f0;
        case 0x2570f4u: goto label_2570f4;
        case 0x2570f8u: goto label_2570f8;
        case 0x2570fcu: goto label_2570fc;
        case 0x257100u: goto label_257100;
        case 0x257104u: goto label_257104;
        case 0x257108u: goto label_257108;
        case 0x25710cu: goto label_25710c;
        default: break;
    }

    ctx->pc = 0x2547b0u;

label_2547b0:
    // 0x2547b0: 0x560c3  sra         $t4, $a1, 3
    ctx->pc = 0x2547b0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 3));
label_2547b4:
    // 0x2547b4: 0x94ea0008  lhu         $t2, 0x8($a3)
    ctx->pc = 0x2547b4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_2547b8:
    // 0x2547b8: 0x94e5000a  lhu         $a1, 0xA($a3)
    ctx->pc = 0x2547b8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_2547bc:
    // 0x2547bc: 0xc6103  sra         $t4, $t4, 4
    ctx->pc = 0x2547bcu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 4));
label_2547c0:
    // 0x2547c0: 0x5800009  bltz        $t4, . + 4 + (0x9 << 2)
label_2547c4:
    if (ctx->pc == 0x2547C4u) {
        ctx->pc = 0x2547C4u;
            // 0x2547c4: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2547C8u;
        goto label_2547c8;
    }
    ctx->pc = 0x2547C0u;
    {
        const bool branch_taken_0x2547c0 = (GPR_S32(ctx, 12) < 0);
        ctx->pc = 0x2547C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2547C0u;
            // 0x2547c4: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547c0) {
            ctx->pc = 0x2547E8u;
            goto label_2547e8;
        }
    }
    ctx->pc = 0x2547C8u;
label_2547c8:
    // 0x2547c8: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x2547c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2547cc:
    // 0x2547cc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2547ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2547d0:
    // 0x2547d0: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2547d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_2547d4:
    // 0x2547d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2547d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2547d8:
    // 0x2547d8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x2547d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_2547dc:
    // 0x2547dc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2547dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_2547e0:
    // 0x2547e0: 0x581fff9  bgez        $t4, . + 4 + (-0x7 << 2)
label_2547e4:
    if (ctx->pc == 0x2547E4u) {
        ctx->pc = 0x2547E4u;
            // 0x2547e4: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2547E8u;
        goto label_2547e8;
    }
    ctx->pc = 0x2547E0u;
    {
        const bool branch_taken_0x2547e0 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x2547E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2547E0u;
            // 0x2547e4: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547e0) {
            ctx->pc = 0x2547C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2547c8;
        }
    }
    ctx->pc = 0x2547E8u;
label_2547e8:
    // 0x2547e8: 0x8c8c007c  lw          $t4, 0x7C($a0)
    ctx->pc = 0x2547e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_2547ec:
    // 0x2547ec: 0x8c8700a0  lw          $a3, 0xA0($a0)
    ctx->pc = 0x2547ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2547f0:
    // 0x2547f0: 0x10e00051  beqz        $a3, . + 4 + (0x51 << 2)
label_2547f4:
    if (ctx->pc == 0x2547F4u) {
        ctx->pc = 0x2547F4u;
            // 0x2547f4: 0x25830004  addiu       $v1, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->pc = 0x2547F8u;
        goto label_2547f8;
    }
    ctx->pc = 0x2547F0u;
    {
        const bool branch_taken_0x2547f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2547F0u;
            // 0x2547f4: 0x25830004  addiu       $v1, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547f0) {
            ctx->pc = 0x254938u;
            goto label_254938;
        }
    }
    ctx->pc = 0x2547F8u;
label_2547f8:
    // 0x2547f8: 0x8c8b00a4  lw          $t3, 0xA4($a0)
    ctx->pc = 0x2547f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_2547fc:
    // 0x2547fc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2547fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_254800:
    // 0x254800: 0xeb3823  subu        $a3, $a3, $t3
    ctx->pc = 0x254800u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_254804:
    // 0x254804: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x254804u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_254808:
    // 0x254808: 0x18c0004b  blez        $a2, . + 4 + (0x4B << 2)
label_25480c:
    if (ctx->pc == 0x25480Cu) {
        ctx->pc = 0x254810u;
        goto label_254810;
    }
    ctx->pc = 0x254808u;
    {
        const bool branch_taken_0x254808 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x254808) {
            ctx->pc = 0x254938u;
            goto label_254938;
        }
    }
    ctx->pc = 0x254810u;
label_254810:
    // 0x254810: 0x8c8300a8  lw          $v1, 0xA8($a0)
    ctx->pc = 0x254810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
label_254814:
    // 0x254814: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x254814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_254818:
    // 0x254818: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x254818u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_25481c:
    // 0x25481c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x25481cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254820:
    // 0x254820: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x254820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_254824:
    // 0x254824: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x254824u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_254828:
    // 0x254828: 0x30c7001f  andi        $a3, $a2, 0x1F
    ctx->pc = 0x254828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_25482c:
    // 0x25482c: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x25482cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_254830:
    // 0x254830: 0xec5804  sllv        $t3, $t4, $a3
    ctx->pc = 0x254830u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
label_254834:
    // 0x254834: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x254834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_254838:
    // 0x254838: 0x1263821  addu        $a3, $t1, $a2
    ctx->pc = 0x254838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_25483c:
    // 0x25483c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x25483cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_254840:
    // 0x254840: 0xcb3026  xor         $a2, $a2, $t3
    ctx->pc = 0x254840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 11));
label_254844:
    // 0x254844: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x254844u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_254848:
    // 0x254848: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x254848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25484c:
    // 0x25484c: 0x24cdffff  addiu       $t5, $a2, -0x1
    ctx->pc = 0x25484cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_254850:
    // 0x254850: 0x5a00011  bltz        $t5, . + 4 + (0x11 << 2)
label_254854:
    if (ctx->pc == 0x254854u) {
        ctx->pc = 0x254854u;
            // 0x254854: 0x8c6e0004  lw          $t6, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x254858u;
        goto label_254858;
    }
    ctx->pc = 0x254850u;
    {
        const bool branch_taken_0x254850 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x254854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254850u;
            // 0x254854: 0x8c6e0004  lw          $t6, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254850) {
            ctx->pc = 0x254898u;
            goto label_254898;
        }
    }
    ctx->pc = 0x254858u;
label_254858:
    // 0x254858: 0x310bffff  andi        $t3, $t0, 0xFFFF
    ctx->pc = 0x254858u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_25485c:
    // 0x25485c: 0x0  nop
    ctx->pc = 0x25485cu;
    // NOP
label_254860:
    // 0x254860: 0x95c60000  lhu         $a2, 0x0($t6)
    ctx->pc = 0x254860u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
label_254864:
    // 0x254864: 0x10cb0008  beq         $a2, $t3, . + 4 + (0x8 << 2)
label_254868:
    if (ctx->pc == 0x254868u) {
        ctx->pc = 0x254868u;
            // 0x254868: 0x30c7001f  andi        $a3, $a2, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
        ctx->pc = 0x25486Cu;
        goto label_25486c;
    }
    ctx->pc = 0x254864u;
    {
        const bool branch_taken_0x254864 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        ctx->pc = 0x254868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254864u;
            // 0x254868: 0x30c7001f  andi        $a3, $a2, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254864) {
            ctx->pc = 0x254888u;
            goto label_254888;
        }
    }
    ctx->pc = 0x25486Cu;
label_25486c:
    // 0x25486c: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x25486cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_254870:
    // 0x254870: 0xec4004  sllv        $t0, $t4, $a3
    ctx->pc = 0x254870u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
label_254874:
    // 0x254874: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x254874u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_254878:
    // 0x254878: 0x1263821  addu        $a3, $t1, $a2
    ctx->pc = 0x254878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_25487c:
    // 0x25487c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x25487cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_254880:
    // 0x254880: 0xc83026  xor         $a2, $a2, $t0
    ctx->pc = 0x254880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
label_254884:
    // 0x254884: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x254884u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_254888:
    // 0x254888: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x254888u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_25488c:
    // 0x25488c: 0x5a1fff4  bgez        $t5, . + 4 + (-0xC << 2)
label_254890:
    if (ctx->pc == 0x254890u) {
        ctx->pc = 0x254890u;
            // 0x254890: 0x25ce0002  addiu       $t6, $t6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
        ctx->pc = 0x254894u;
        goto label_254894;
    }
    ctx->pc = 0x25488Cu;
    {
        const bool branch_taken_0x25488c = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x254890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25488Cu;
            // 0x254890: 0x25ce0002  addiu       $t6, $t6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25488c) {
            ctx->pc = 0x254860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_254860;
        }
    }
    ctx->pc = 0x254894u;
label_254894:
    // 0x254894: 0x0  nop
    ctx->pc = 0x254894u;
    // NOP
label_254898:
    // 0x254898: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x254898u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25489c:
    // 0x25489c: 0x8c88007c  lw          $t0, 0x7C($a0)
    ctx->pc = 0x25489cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_2548a0:
    // 0x2548a0: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2548a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2548a4:
    // 0x2548a4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2548a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_2548a8:
    // 0x2548a8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2548a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2548ac:
    // 0x2548ac: 0x94670008  lhu         $a3, 0x8($v1)
    ctx->pc = 0x2548acu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2548b0:
    // 0x2548b0: 0x9466000a  lhu         $a2, 0xA($v1)
    ctx->pc = 0x2548b0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2548b4:
    // 0x2548b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2548b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2548b8:
    // 0x2548b8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2548b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2548bc:
    // 0x2548bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2548bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2548c0:
    // 0x2548c0: 0x1076821  addu        $t5, $t0, $a3
    ctx->pc = 0x2548c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2548c4:
    // 0x2548c4: 0x1066021  addu        $t4, $t0, $a2
    ctx->pc = 0x2548c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2548c8:
    // 0x2548c8: 0x1ac082b  sltu        $at, $t5, $t4
    ctx->pc = 0x2548c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_2548cc:
    // 0x2548cc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_2548d0:
    if (ctx->pc == 0x2548D0u) {
        ctx->pc = 0x2548D0u;
            // 0x2548d0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2548D4u;
        goto label_2548d4;
    }
    ctx->pc = 0x2548CCu;
    {
        const bool branch_taken_0x2548cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2548CCu;
            // 0x2548d0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548cc) {
            ctx->pc = 0x254920u;
            goto label_254920;
        }
    }
    ctx->pc = 0x2548D4u;
label_2548d4:
    // 0x2548d4: 0x0  nop
    ctx->pc = 0x2548d4u;
    // NOP
label_2548d8:
    // 0x2548d8: 0x95a60000  lhu         $a2, 0x0($t5)
    ctx->pc = 0x2548d8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_2548dc:
    // 0x2548dc: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x2548dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_2548e0:
    // 0x2548e0: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
label_2548e4:
    if (ctx->pc == 0x2548E4u) {
        ctx->pc = 0x2548E8u;
        goto label_2548e8;
    }
    ctx->pc = 0x2548E0u;
    {
        const bool branch_taken_0x2548e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2548e0) {
            ctx->pc = 0x254910u;
            goto label_254910;
        }
    }
    ctx->pc = 0x2548E8u;
label_2548e8:
    // 0x2548e8: 0x95a60002  lhu         $a2, 0x2($t5)
    ctx->pc = 0x2548e8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
label_2548ec:
    // 0x2548ec: 0x30c7001f  andi        $a3, $a2, 0x1F
    ctx->pc = 0x2548ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_2548f0:
    // 0x2548f0: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x2548f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_2548f4:
    // 0x2548f4: 0xeb3804  sllv        $a3, $t3, $a3
    ctx->pc = 0x2548f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
label_2548f8:
    // 0x2548f8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2548f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2548fc:
    // 0x2548fc: 0xe04027  not         $t0, $a3
    ctx->pc = 0x2548fcu;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
label_254900:
    // 0x254900: 0x1263821  addu        $a3, $t1, $a2
    ctx->pc = 0x254900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_254904:
    // 0x254904: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x254904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_254908:
    // 0x254908: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x254908u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_25490c:
    // 0x25490c: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x25490cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_254910:
    // 0x254910: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x254910u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_254914:
    // 0x254914: 0x1ac302b  sltu        $a2, $t5, $t4
    ctx->pc = 0x254914u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_254918:
    // 0x254918: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
label_25491c:
    if (ctx->pc == 0x25491Cu) {
        ctx->pc = 0x254920u;
        goto label_254920;
    }
    ctx->pc = 0x254918u;
    {
        const bool branch_taken_0x254918 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x254918) {
            ctx->pc = 0x2548D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2548d8;
        }
    }
    ctx->pc = 0x254920u;
label_254920:
    // 0x254920: 0x94630008  lhu         $v1, 0x8($v1)
    ctx->pc = 0x254920u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_254924:
    // 0x254924: 0x8c8c007c  lw          $t4, 0x7C($a0)
    ctx->pc = 0x254924u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_254928:
    // 0x254928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x254928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_25492c:
    // 0x25492c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25492cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_254930:
    // 0x254930: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x254930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_254934:
    // 0x254934: 0x0  nop
    ctx->pc = 0x254934u;
    // NOP
label_254938:
    // 0x254938: 0xa3080  sll         $a2, $t2, 2
    ctx->pc = 0x254938u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_25493c:
    // 0x25493c: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x25493cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
label_254940:
    // 0x254940: 0x6c082b  sltu        $at, $v1, $t4
    ctx->pc = 0x254940u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_254944:
    // 0x254944: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_254948:
    if (ctx->pc == 0x254948u) {
        ctx->pc = 0x254948u;
            // 0x254948: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25494Cu;
        goto label_25494c;
    }
    ctx->pc = 0x254944u;
    {
        const bool branch_taken_0x254944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x254948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254944u;
            // 0x254948: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254944) {
            ctx->pc = 0x254980u;
            goto label_254980;
        }
    }
    ctx->pc = 0x25494Cu;
label_25494c:
    // 0x25494c: 0x0  nop
    ctx->pc = 0x25494cu;
    // NOP
label_254950:
    // 0x254950: 0x94660002  lhu         $a2, 0x2($v1)
    ctx->pc = 0x254950u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_254954:
    // 0x254954: 0x30c7001f  andi        $a3, $a2, 0x1F
    ctx->pc = 0x254954u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_254958:
    // 0x254958: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x254958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_25495c:
    // 0x25495c: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x25495cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_254960:
    // 0x254960: 0xeb5004  sllv        $t2, $t3, $a3
    ctx->pc = 0x254960u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
label_254964:
    // 0x254964: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x254964u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_254968:
    // 0x254968: 0x1264021  addu        $t0, $t1, $a2
    ctx->pc = 0x254968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_25496c:
    // 0x25496c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x25496cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_254970:
    // 0x254970: 0x6c302b  sltu        $a2, $v1, $t4
    ctx->pc = 0x254970u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_254974:
    // 0x254974: 0xea3826  xor         $a3, $a3, $t2
    ctx->pc = 0x254974u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 10));
label_254978:
    // 0x254978: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
label_25497c:
    if (ctx->pc == 0x25497Cu) {
        ctx->pc = 0x25497Cu;
            // 0x25497c: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->pc = 0x254980u;
        goto label_254980;
    }
    ctx->pc = 0x254978u;
    {
        const bool branch_taken_0x254978 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25497Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254978u;
            // 0x25497c: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254978) {
            ctx->pc = 0x254950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_254950;
        }
    }
    ctx->pc = 0x254980u;
label_254980:
    // 0x254980: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x254980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_254984:
    // 0x254984: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x254984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_254988:
    // 0x254988: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x254988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_25498c:
    // 0x25498c: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x25498cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_254990:
    // 0x254990: 0x68082b  sltu        $at, $v1, $t0
    ctx->pc = 0x254990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_254994:
    // 0x254994: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_254998:
    if (ctx->pc == 0x254998u) {
        ctx->pc = 0x254998u;
            // 0x254998: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25499Cu;
        goto label_25499c;
    }
    ctx->pc = 0x254994u;
    {
        const bool branch_taken_0x254994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x254998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254994u;
            // 0x254998: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254994) {
            ctx->pc = 0x2549E8u;
            goto label_2549e8;
        }
    }
    ctx->pc = 0x25499Cu;
label_25499c:
    // 0x25499c: 0x0  nop
    ctx->pc = 0x25499cu;
    // NOP
label_2549a0:
    // 0x2549a0: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2549a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2549a4:
    // 0x2549a4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2549a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2549a8:
    // 0x2549a8: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_2549ac:
    if (ctx->pc == 0x2549ACu) {
        ctx->pc = 0x2549B0u;
        goto label_2549b0;
    }
    ctx->pc = 0x2549A8u;
    {
        const bool branch_taken_0x2549a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2549a8) {
            ctx->pc = 0x2549D8u;
            goto label_2549d8;
        }
    }
    ctx->pc = 0x2549B0u;
label_2549b0:
    // 0x2549b0: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2549b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2549b4:
    // 0x2549b4: 0x3085001f  andi        $a1, $a0, 0x1F
    ctx->pc = 0x2549b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_2549b8:
    // 0x2549b8: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x2549b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_2549bc:
    // 0x2549bc: 0xa73004  sllv        $a2, $a3, $a1
    ctx->pc = 0x2549bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_2549c0:
    // 0x2549c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2549c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2549c4:
    // 0x2549c4: 0x1242821  addu        $a1, $t1, $a0
    ctx->pc = 0x2549c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_2549c8:
    // 0x2549c8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2549c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2549cc:
    // 0x2549cc: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x2549ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
label_2549d0:
    // 0x2549d0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2549d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_2549d4:
    // 0x2549d4: 0x0  nop
    ctx->pc = 0x2549d4u;
    // NOP
label_2549d8:
    // 0x2549d8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2549d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2549dc:
    // 0x2549dc: 0x68202b  sltu        $a0, $v1, $t0
    ctx->pc = 0x2549dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2549e0:
    // 0x2549e0: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
label_2549e4:
    if (ctx->pc == 0x2549E4u) {
        ctx->pc = 0x2549E8u;
        goto label_2549e8;
    }
    ctx->pc = 0x2549E0u;
    {
        const bool branch_taken_0x2549e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2549e0) {
            ctx->pc = 0x2549A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2549a0;
        }
    }
    ctx->pc = 0x2549E8u;
label_2549e8:
    // 0x2549e8: 0x3e00008  jr          $ra
label_2549ec:
    if (ctx->pc == 0x2549ECu) {
        ctx->pc = 0x2549F0u;
        goto label_2549f0;
    }
    ctx->pc = 0x2549E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2549F0u;
label_2549f0:
    // 0x2549f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2549f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2549f4:
    // 0x2549f4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2549f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2549f8:
    // 0x2549f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2549f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2549fc:
    // 0x2549fc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2549fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_254a00:
    // 0x254a00: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x254a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_254a04:
    // 0x254a04: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x254a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_254a08:
    // 0x254a08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x254a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_254a0c:
    // 0x254a0c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x254a0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_254a10:
    // 0x254a10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x254a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_254a14:
    // 0x254a14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x254a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_254a18:
    // 0x254a18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x254a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_254a1c:
    // 0x254a1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x254a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_254a20:
    // 0x254a20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_254a24:
    // 0x254a24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_254a28:
    // 0x254a28: 0x8c910074  lw          $s1, 0x74($a0)
    ctx->pc = 0x254a28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_254a2c:
    // 0x254a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_254a30:
    // 0x254a30: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x254a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_254a34:
    // 0x254a34: 0x111943  sra         $v1, $s1, 5
    ctx->pc = 0x254a34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 5));
label_254a38:
    // 0x254a38: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x254a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_254a3c:
    // 0x254a3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x254a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_254a40:
    // 0x254a40: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x254a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_254a44:
    // 0x254a44: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x254a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_254a48:
    // 0x254a48: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x254a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_254a4c:
    // 0x254a4c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x254a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_254a50:
    // 0x254a50: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x254a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_254a54:
    // 0x254a54: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x254a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_254a58:
    // 0x254a58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x254a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_254a5c:
    // 0x254a5c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x254a5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_254a60:
    // 0x254a60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_254a64:
    if (ctx->pc == 0x254A64u) {
        ctx->pc = 0x254A64u;
            // 0x254a64: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x254A68u;
        goto label_254a68;
    }
    ctx->pc = 0x254A60u;
    {
        const bool branch_taken_0x254a60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x254A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254A60u;
            // 0x254a64: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a60) {
            ctx->pc = 0x254A70u;
            goto label_254a70;
        }
    }
    ctx->pc = 0x254A68u;
label_254a68:
    // 0x254a68: 0x10000007  b           . + 4 + (0x7 << 2)
label_254a6c:
    if (ctx->pc == 0x254A6Cu) {
        ctx->pc = 0x254A6Cu;
            // 0x254a6c: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x254A70u;
        goto label_254a70;
    }
    ctx->pc = 0x254A68u;
    {
        const bool branch_taken_0x254a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254A68u;
            // 0x254a6c: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a68) {
            ctx->pc = 0x254A88u;
            goto label_254a88;
        }
    }
    ctx->pc = 0x254A70u;
label_254a70:
    // 0x254a70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x254a70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_254a74:
    // 0x254a74: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x254a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_254a78:
    // 0x254a78: 0x320f809  jalr        $t9
label_254a7c:
    if (ctx->pc == 0x254A7Cu) {
        ctx->pc = 0x254A80u;
        goto label_254a80;
    }
    ctx->pc = 0x254A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x254A80u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x254A80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x254A80u; }
            if (ctx->pc != 0x254A80u) { return; }
        }
        }
    }
    ctx->pc = 0x254A80u;
label_254a80:
    // 0x254a80: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x254a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_254a84:
    // 0x254a84: 0x0  nop
    ctx->pc = 0x254a84u;
    // NOP
label_254a88:
    // 0x254a88: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x254a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_254a8c:
    // 0x254a8c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x254a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_254a90:
    // 0x254a90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_254a94:
    // 0x254a94: 0x8fb400a0  lw          $s4, 0xA0($sp)
    ctx->pc = 0x254a94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_254a98:
    // 0x254a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_254a9c:
    // 0x254a9c: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x254a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_254aa0:
    // 0x254aa0: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x254aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_254aa4:
    // 0x254aa4: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x254aa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_254aa8:
    // 0x254aa8: 0x669821  addu        $s3, $v1, $a2
    ctx->pc = 0x254aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_254aac:
    // 0x254aac: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x254aacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_254ab0:
    // 0x254ab0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x254ab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_254ab4:
    // 0x254ab4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x254ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_254ab8:
    // 0x254ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_254abc:
    // 0x254abc: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x254abcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_254ac0:
    // 0x254ac0: 0xc0951ec  jal         func_2547B0
label_254ac4:
    if (ctx->pc == 0x254AC4u) {
        ctx->pc = 0x254AC4u;
            // 0x254ac4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x254AC8u;
        goto label_254ac8;
    }
    ctx->pc = 0x254AC0u;
    SET_GPR_U32(ctx, 31, 0x254AC8u);
    ctx->pc = 0x254AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254AC0u;
            // 0x254ac4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2547B0u;
    goto label_2547b0;
    ctx->pc = 0x254AC8u;
label_254ac8:
    // 0x254ac8: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x254ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_254acc:
    // 0x254acc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x254accu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_254ad0:
    // 0x254ad0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x254ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_254ad4:
    // 0x254ad4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x254ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_254ad8:
    // 0x254ad8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_254adc:
    // 0x254adc: 0x247e0004  addiu       $fp, $v1, 0x4
    ctx->pc = 0x254adcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_254ae0:
    // 0x254ae0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x254ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_254ae4:
    // 0x254ae4: 0x7e082b  sltu        $at, $v1, $fp
    ctx->pc = 0x254ae4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_254ae8:
    // 0x254ae8: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_254aec:
    if (ctx->pc == 0x254AECu) {
        ctx->pc = 0x254AECu;
            // 0x254aec: 0x8e160070  lw          $s6, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->pc = 0x254AF0u;
        goto label_254af0;
    }
    ctx->pc = 0x254AE8u;
    {
        const bool branch_taken_0x254ae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x254AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254AE8u;
            // 0x254aec: 0x8e160070  lw          $s6, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ae8) {
            ctx->pc = 0x254BC8u;
            goto label_254bc8;
        }
    }
    ctx->pc = 0x254AF0u;
label_254af0:
    // 0x254af0: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x254af0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_254af4:
    // 0x254af4: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
label_254af8:
    if (ctx->pc == 0x254AF8u) {
        ctx->pc = 0x254AF8u;
            // 0x254af8: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x254AFCu;
        goto label_254afc;
    }
    ctx->pc = 0x254AF4u;
    {
        const bool branch_taken_0x254af4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x254AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254AF4u;
            // 0x254af8: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254af4) {
            ctx->pc = 0x254BB8u;
            goto label_254bb8;
        }
    }
    ctx->pc = 0x254AFCu;
label_254afc:
    // 0x254afc: 0x0  nop
    ctx->pc = 0x254afcu;
    // NOP
label_254b00:
    // 0x254b00: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x254b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_254b04:
    // 0x254b04: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_254b08:
    if (ctx->pc == 0x254B08u) {
        ctx->pc = 0x254B0Cu;
        goto label_254b0c;
    }
    ctx->pc = 0x254B04u;
    {
        const bool branch_taken_0x254b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254b04) {
            ctx->pc = 0x254B18u;
            goto label_254b18;
        }
    }
    ctx->pc = 0x254B0Cu;
label_254b0c:
    // 0x254b0c: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x254b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_254b10:
    // 0x254b10: 0x10000027  b           . + 4 + (0x27 << 2)
label_254b14:
    if (ctx->pc == 0x254B14u) {
        ctx->pc = 0x254B14u;
            // 0x254b14: 0x118a02  srl         $s1, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x254B18u;
        goto label_254b18;
    }
    ctx->pc = 0x254B10u;
    {
        const bool branch_taken_0x254b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254B10u;
            // 0x254b14: 0x118a02  srl         $s1, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b10) {
            ctx->pc = 0x254BB0u;
            goto label_254bb0;
        }
    }
    ctx->pc = 0x254B18u;
label_254b18:
    // 0x254b18: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x254b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_254b1c:
    // 0x254b1c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_254b20:
    if (ctx->pc == 0x254B20u) {
        ctx->pc = 0x254B24u;
        goto label_254b24;
    }
    ctx->pc = 0x254B1Cu;
    {
        const bool branch_taken_0x254b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x254b1c) {
            ctx->pc = 0x254BA8u;
            goto label_254ba8;
        }
    }
    ctx->pc = 0x254B24u;
label_254b24:
    // 0x254b24: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x254b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_254b28:
    // 0x254b28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x254b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_254b2c:
    // 0x254b2c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x254b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_254b30:
    // 0x254b30: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x254b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_254b34:
    // 0x254b34: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x254b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_254b38:
    // 0x254b38: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x254b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_254b3c:
    // 0x254b3c: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x254b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_254b40:
    // 0x254b40: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x254b40u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_254b44:
    // 0x254b44: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x254b44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_254b48:
    // 0x254b48: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x254b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_254b4c:
    // 0x254b4c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_254b50:
    if (ctx->pc == 0x254B50u) {
        ctx->pc = 0x254B54u;
        goto label_254b54;
    }
    ctx->pc = 0x254B4Cu;
    {
        const bool branch_taken_0x254b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254b4c) {
            ctx->pc = 0x254BA8u;
            goto label_254ba8;
        }
    }
    ctx->pc = 0x254B54u;
label_254b54:
    // 0x254b54: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x254b54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_254b58:
    // 0x254b58: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x254b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_254b5c:
    // 0x254b5c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_254b60:
    if (ctx->pc == 0x254B60u) {
        ctx->pc = 0x254B64u;
        goto label_254b64;
    }
    ctx->pc = 0x254B5Cu;
    {
        const bool branch_taken_0x254b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254b5c) {
            ctx->pc = 0x254BA8u;
            goto label_254ba8;
        }
    }
    ctx->pc = 0x254B64u;
label_254b64:
    // 0x254b64: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x254b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_254b68:
    // 0x254b68: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x254b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_254b6c:
    // 0x254b6c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x254b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_254b70:
    // 0x254b70: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x254b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_254b74:
    // 0x254b74: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_254b78:
    if (ctx->pc == 0x254B78u) {
        ctx->pc = 0x254B78u;
            // 0x254b78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x254B7Cu;
        goto label_254b7c;
    }
    ctx->pc = 0x254B74u;
    {
        const bool branch_taken_0x254b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x254B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254B74u;
            // 0x254b78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b74) {
            ctx->pc = 0x254B88u;
            goto label_254b88;
        }
    }
    ctx->pc = 0x254B7Cu;
label_254b7c:
    // 0x254b7c: 0xc0a728c  jal         func_29CA30
label_254b80:
    if (ctx->pc == 0x254B80u) {
        ctx->pc = 0x254B80u;
            // 0x254b80: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x254B84u;
        goto label_254b84;
    }
    ctx->pc = 0x254B7Cu;
    SET_GPR_U32(ctx, 31, 0x254B84u);
    ctx->pc = 0x254B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254B7Cu;
            // 0x254b80: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B84u; }
        if (ctx->pc != 0x254B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B84u; }
        if (ctx->pc != 0x254B84u) { return; }
    }
    ctx->pc = 0x254B84u;
label_254b84:
    // 0x254b84: 0x0  nop
    ctx->pc = 0x254b84u;
    // NOP
label_254b88:
    // 0x254b88: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x254b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_254b8c:
    // 0x254b8c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x254b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_254b90:
    // 0x254b90: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x254b90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_254b94:
    // 0x254b94: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x254b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_254b98:
    // 0x254b98: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x254b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_254b9c:
    // 0x254b9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_254ba0:
    // 0x254ba0: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x254ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
label_254ba4:
    // 0x254ba4: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x254ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_254ba8:
    // 0x254ba8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x254ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_254bac:
    // 0x254bac: 0x118842  srl         $s1, $s1, 1
    ctx->pc = 0x254bacu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_254bb0:
    // 0x254bb0: 0x1620ffd3  bnez        $s1, . + 4 + (-0x2D << 2)
label_254bb4:
    if (ctx->pc == 0x254BB4u) {
        ctx->pc = 0x254BB8u;
        goto label_254bb8;
    }
    ctx->pc = 0x254BB0u;
    {
        const bool branch_taken_0x254bb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x254bb0) {
            ctx->pc = 0x254B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_254b00;
        }
    }
    ctx->pc = 0x254BB8u;
label_254bb8:
    // 0x254bb8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x254bb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_254bbc:
    // 0x254bbc: 0x29e182b  sltu        $v1, $s4, $fp
    ctx->pc = 0x254bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_254bc0:
    // 0x254bc0: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_254bc4:
    if (ctx->pc == 0x254BC4u) {
        ctx->pc = 0x254BC4u;
            // 0x254bc4: 0x26d60200  addiu       $s6, $s6, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 512));
        ctx->pc = 0x254BC8u;
        goto label_254bc8;
    }
    ctx->pc = 0x254BC0u;
    {
        const bool branch_taken_0x254bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x254BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254BC0u;
            // 0x254bc4: 0x26d60200  addiu       $s6, $s6, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bc0) {
            ctx->pc = 0x254AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_254af0;
        }
    }
    ctx->pc = 0x254BC8u;
label_254bc8:
    // 0x254bc8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x254bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_254bcc:
    // 0x254bcc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x254bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_254bd0:
    // 0x254bd0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x254bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_254bd4:
    // 0x254bd4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x254bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_254bd8:
    // 0x254bd8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x254bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_254bdc:
    // 0x254bdc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x254bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_254be0:
    // 0x254be0: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_254be4:
    if (ctx->pc == 0x254BE4u) {
        ctx->pc = 0x254BE8u;
        goto label_254be8;
    }
    ctx->pc = 0x254BE0u;
    {
        const bool branch_taken_0x254be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x254be0) {
            ctx->pc = 0x254BF8u;
            goto label_254bf8;
        }
    }
    ctx->pc = 0x254BE8u;
label_254be8:
    // 0x254be8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x254be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_254bec:
    // 0x254bec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x254becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_254bf0:
    // 0x254bf0: 0x320f809  jalr        $t9
label_254bf4:
    if (ctx->pc == 0x254BF4u) {
        ctx->pc = 0x254BF4u;
            // 0x254bf4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x254BF8u;
        goto label_254bf8;
    }
    ctx->pc = 0x254BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x254BF8u);
        ctx->pc = 0x254BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254BF0u;
            // 0x254bf4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x254BF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x254BF8u; }
            if (ctx->pc != 0x254BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x254BF8u;
label_254bf8:
    // 0x254bf8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x254bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_254bfc:
    // 0x254bfc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x254bfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_254c00:
    // 0x254c00: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x254c00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_254c04:
    // 0x254c04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x254c04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_254c08:
    // 0x254c08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x254c08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_254c0c:
    // 0x254c0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x254c0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_254c10:
    // 0x254c10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x254c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_254c14:
    // 0x254c14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x254c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_254c18:
    // 0x254c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_254c1c:
    // 0x254c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_254c20:
    // 0x254c20: 0x3e00008  jr          $ra
label_254c24:
    if (ctx->pc == 0x254C24u) {
        ctx->pc = 0x254C24u;
            // 0x254c24: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x254C28u;
        goto label_254c28;
    }
    ctx->pc = 0x254C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254C20u;
            // 0x254c24: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254C28u;
label_254c28:
    // 0x254c28: 0x0  nop
    ctx->pc = 0x254c28u;
    // NOP
label_254c2c:
    // 0x254c2c: 0x0  nop
    ctx->pc = 0x254c2cu;
    // NOP
label_254c30:
    // 0x254c30: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x254c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_254c34:
    // 0x254c34: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x254c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_254c38:
    // 0x254c38: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x254c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_254c3c:
    // 0x254c3c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x254c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_254c40:
    // 0x254c40: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x254c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_254c44:
    // 0x254c44: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x254c44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_254c48:
    // 0x254c48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x254c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_254c4c:
    // 0x254c4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x254c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_254c50:
    // 0x254c50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x254c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_254c54:
    // 0x254c54: 0x27b5010c  addiu       $s5, $sp, 0x10C
    ctx->pc = 0x254c54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_254c58:
    // 0x254c58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x254c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_254c5c:
    // 0x254c5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x254c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_254c60:
    // 0x254c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_254c64:
    // 0x254c64: 0x27b20104  addiu       $s2, $sp, 0x104
    ctx->pc = 0x254c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_254c68:
    // 0x254c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_254c6c:
    // 0x254c6c: 0x27b10108  addiu       $s1, $sp, 0x108
    ctx->pc = 0x254c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_254c70:
    // 0x254c70: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x254c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_254c74:
    // 0x254c74: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x254c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254c78:
    // 0x254c78: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x254c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254c7c:
    // 0x254c7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254c80:
    // 0x254c80: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x254c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_254c84:
    // 0x254c84: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x254c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254c88:
    // 0x254c88: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x254c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254c8c:
    // 0x254c8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254c90:
    // 0x254c90: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x254c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_254c94:
    // 0x254c94: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x254c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254c98:
    // 0x254c98: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x254c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254c9c:
    // 0x254c9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254ca0:
    // 0x254ca0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x254ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_254ca4:
    // 0x254ca4: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x254ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254ca8:
    // 0x254ca8: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x254ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254cac:
    // 0x254cac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254cb0:
    // 0x254cb0: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x254cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_254cb4:
    // 0x254cb4: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x254cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254cb8:
    // 0x254cb8: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x254cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254cbc:
    // 0x254cbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_254cc0:
    // 0x254cc0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x254cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_254cc4:
    // 0x254cc4: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x254cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254cc8:
    // 0x254cc8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x254cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254ccc:
    // 0x254ccc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_254cd0:
    // 0x254cd0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x254cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_254cd4:
    // 0x254cd4: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x254cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254cd8:
    // 0x254cd8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x254cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254cdc:
    // 0x254cdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_254ce0:
    // 0x254ce0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x254ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_254ce4:
    // 0x254ce4: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x254ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254ce8:
    // 0x254ce8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x254ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254cec:
    // 0x254cec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_254cf0:
    // 0x254cf0: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x254cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_254cf4:
    // 0x254cf4: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x254cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254cf8:
    // 0x254cf8: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x254cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254cfc:
    // 0x254cfc: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x254cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_254d00:
    // 0x254d00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x254d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254d04:
    // 0x254d04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_254d08:
    if (ctx->pc == 0x254D08u) {
        ctx->pc = 0x254D08u;
            // 0x254d08: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x254D0Cu;
        goto label_254d0c;
    }
    ctx->pc = 0x254D04u;
    {
        const bool branch_taken_0x254d04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254D04u;
            // 0x254d08: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d04) {
            ctx->pc = 0x254D14u;
            goto label_254d14;
        }
    }
    ctx->pc = 0x254D0Cu;
label_254d0c:
    // 0x254d0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_254d10:
    if (ctx->pc == 0x254D10u) {
        ctx->pc = 0x254D14u;
        goto label_254d14;
    }
    ctx->pc = 0x254D0Cu;
    {
        const bool branch_taken_0x254d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254d0c) {
            ctx->pc = 0x254D18u;
            goto label_254d18;
        }
    }
    ctx->pc = 0x254D14u;
label_254d14:
    // 0x254d14: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x254d14u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_254d18:
    // 0x254d18: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x254d18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_254d1c:
    // 0x254d1c: 0x27a40104  addiu       $a0, $sp, 0x104
    ctx->pc = 0x254d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_254d20:
    // 0x254d20: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x254d20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_254d24:
    // 0x254d24: 0x2610cf94  addiu       $s0, $s0, -0x306C
    ctx->pc = 0x254d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954900));
label_254d28:
    // 0x254d28: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x254d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254d2c:
    // 0x254d2c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x254d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254d30:
    // 0x254d30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x254d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254d34:
    // 0x254d34: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_254d38:
    if (ctx->pc == 0x254D38u) {
        ctx->pc = 0x254D3Cu;
        goto label_254d3c;
    }
    ctx->pc = 0x254D34u;
    {
        const bool branch_taken_0x254d34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x254d34) {
            ctx->pc = 0x254D44u;
            goto label_254d44;
        }
    }
    ctx->pc = 0x254D3Cu;
label_254d3c:
    // 0x254d3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_254d40:
    if (ctx->pc == 0x254D40u) {
        ctx->pc = 0x254D44u;
        goto label_254d44;
    }
    ctx->pc = 0x254D3Cu;
    {
        const bool branch_taken_0x254d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254d3c) {
            ctx->pc = 0x254D48u;
            goto label_254d48;
        }
    }
    ctx->pc = 0x254D44u;
label_254d44:
    // 0x254d44: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x254d44u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_254d48:
    // 0x254d48: 0x3c0f0060  lui         $t7, 0x60
    ctx->pc = 0x254d48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)96 << 16));
label_254d4c:
    // 0x254d4c: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x254d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_254d50:
    // 0x254d50: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x254d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_254d54:
    // 0x254d54: 0x25efcf98  addiu       $t7, $t7, -0x3068
    ctx->pc = 0x254d54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954904));
label_254d58:
    // 0x254d58: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x254d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254d5c:
    // 0x254d5c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x254d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254d60:
    // 0x254d60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x254d60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254d64:
    // 0x254d64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_254d68:
    if (ctx->pc == 0x254D68u) {
        ctx->pc = 0x254D6Cu;
        goto label_254d6c;
    }
    ctx->pc = 0x254D64u;
    {
        const bool branch_taken_0x254d64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x254d64) {
            ctx->pc = 0x254D74u;
            goto label_254d74;
        }
    }
    ctx->pc = 0x254D6Cu;
label_254d6c:
    // 0x254d6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_254d70:
    if (ctx->pc == 0x254D70u) {
        ctx->pc = 0x254D74u;
        goto label_254d74;
    }
    ctx->pc = 0x254D6Cu;
    {
        const bool branch_taken_0x254d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254d6c) {
            ctx->pc = 0x254D78u;
            goto label_254d78;
        }
    }
    ctx->pc = 0x254D74u;
label_254d74:
    // 0x254d74: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x254d74u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_254d78:
    // 0x254d78: 0x3c0e0060  lui         $t6, 0x60
    ctx->pc = 0x254d78u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)96 << 16));
label_254d7c:
    // 0x254d7c: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x254d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_254d80:
    // 0x254d80: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x254d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_254d84:
    // 0x254d84: 0x25cecf9c  addiu       $t6, $t6, -0x3064
    ctx->pc = 0x254d84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294954908));
label_254d88:
    // 0x254d88: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x254d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254d8c:
    // 0x254d8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x254d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254d90:
    // 0x254d90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x254d90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254d94:
    // 0x254d94: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_254d98:
    if (ctx->pc == 0x254D98u) {
        ctx->pc = 0x254D9Cu;
        goto label_254d9c;
    }
    ctx->pc = 0x254D94u;
    {
        const bool branch_taken_0x254d94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x254d94) {
            ctx->pc = 0x254DA4u;
            goto label_254da4;
        }
    }
    ctx->pc = 0x254D9Cu;
label_254d9c:
    // 0x254d9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_254da0:
    if (ctx->pc == 0x254DA0u) {
        ctx->pc = 0x254DA0u;
            // 0x254da0: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->pc = 0x254DA4u;
        goto label_254da4;
    }
    ctx->pc = 0x254D9Cu;
    {
        const bool branch_taken_0x254d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254D9Cu;
            // 0x254da0: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d9c) {
            ctx->pc = 0x254DACu;
            goto label_254dac;
        }
    }
    ctx->pc = 0x254DA4u;
label_254da4:
    // 0x254da4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x254da4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_254da8:
    // 0x254da8: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x254da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_254dac:
    // 0x254dac: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x254dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_254db0:
    // 0x254db0: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x254db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254db4:
    // 0x254db4: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x254db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254db8:
    // 0x254db8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x254db8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254dbc:
    // 0x254dbc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_254dc0:
    if (ctx->pc == 0x254DC0u) {
        ctx->pc = 0x254DC0u;
            // 0x254dc0: 0xc7a20100  lwc1        $f2, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x254DC4u;
        goto label_254dc4;
    }
    ctx->pc = 0x254DBCu;
    {
        const bool branch_taken_0x254dbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x254DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254DBCu;
            // 0x254dc0: 0xc7a20100  lwc1        $f2, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dbc) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254DC4u;
label_254dc4:
    // 0x254dc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_254dc8:
    if (ctx->pc == 0x254DC8u) {
        ctx->pc = 0x254DCCu;
        goto label_254dcc;
    }
    ctx->pc = 0x254DC4u;
    {
        const bool branch_taken_0x254dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254dc4) {
            ctx->pc = 0x254DD0u;
            goto label_254dd0;
        }
    }
    ctx->pc = 0x254DCCu;
label_254dcc:
    // 0x254dcc: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x254dccu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_254dd0:
    // 0x254dd0: 0x3c0d0064  lui         $t5, 0x64
    ctx->pc = 0x254dd0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)100 << 16));
label_254dd4:
    // 0x254dd4: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x254dd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_254dd8:
    // 0x254dd8: 0x25adf934  addiu       $t5, $t5, -0x6CC
    ctx->pc = 0x254dd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965556));
label_254ddc:
    // 0x254ddc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x254ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254de0:
    // 0x254de0: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x254de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254de4:
    // 0x254de4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x254de4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254de8:
    // 0x254de8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_254dec:
    if (ctx->pc == 0x254DECu) {
        ctx->pc = 0x254DF0u;
        goto label_254df0;
    }
    ctx->pc = 0x254DE8u;
    {
        const bool branch_taken_0x254de8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254de8) {
            ctx->pc = 0x254DF8u;
            goto label_254df8;
        }
    }
    ctx->pc = 0x254DF0u;
label_254df0:
    // 0x254df0: 0x10000002  b           . + 4 + (0x2 << 2)
label_254df4:
    if (ctx->pc == 0x254DF4u) {
        ctx->pc = 0x254DF8u;
        goto label_254df8;
    }
    ctx->pc = 0x254DF0u;
    {
        const bool branch_taken_0x254df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254df0) {
            ctx->pc = 0x254DFCu;
            goto label_254dfc;
        }
    }
    ctx->pc = 0x254DF8u;
label_254df8:
    // 0x254df8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x254df8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_254dfc:
    // 0x254dfc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x254dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_254e00:
    // 0x254e00: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x254e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_254e04:
    // 0x254e04: 0x2484f938  addiu       $a0, $a0, -0x6C8
    ctx->pc = 0x254e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965560));
label_254e08:
    // 0x254e08: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x254e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254e0c:
    // 0x254e0c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x254e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254e10:
    // 0x254e10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x254e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254e14:
    // 0x254e14: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_254e18:
    if (ctx->pc == 0x254E18u) {
        ctx->pc = 0x254E1Cu;
        goto label_254e1c;
    }
    ctx->pc = 0x254E14u;
    {
        const bool branch_taken_0x254e14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254e14) {
            ctx->pc = 0x254E24u;
            goto label_254e24;
        }
    }
    ctx->pc = 0x254E1Cu;
label_254e1c:
    // 0x254e1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_254e20:
    if (ctx->pc == 0x254E20u) {
        ctx->pc = 0x254E24u;
        goto label_254e24;
    }
    ctx->pc = 0x254E1Cu;
    {
        const bool branch_taken_0x254e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254e1c) {
            ctx->pc = 0x254E28u;
            goto label_254e28;
        }
    }
    ctx->pc = 0x254E24u;
label_254e24:
    // 0x254e24: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x254e24u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_254e28:
    // 0x254e28: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x254e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_254e2c:
    // 0x254e2c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x254e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_254e30:
    // 0x254e30: 0x2463f93c  addiu       $v1, $v1, -0x6C4
    ctx->pc = 0x254e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965564));
label_254e34:
    // 0x254e34: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x254e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254e38:
    // 0x254e38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x254e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254e3c:
    // 0x254e3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x254e3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254e40:
    // 0x254e40: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_254e44:
    if (ctx->pc == 0x254E44u) {
        ctx->pc = 0x254E48u;
        goto label_254e48;
    }
    ctx->pc = 0x254E40u;
    {
        const bool branch_taken_0x254e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254e40) {
            ctx->pc = 0x254E50u;
            goto label_254e50;
        }
    }
    ctx->pc = 0x254E48u;
label_254e48:
    // 0x254e48: 0x10000003  b           . + 4 + (0x3 << 2)
label_254e4c:
    if (ctx->pc == 0x254E4Cu) {
        ctx->pc = 0x254E4Cu;
            // 0x254e4c: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->pc = 0x254E50u;
        goto label_254e50;
    }
    ctx->pc = 0x254E48u;
    {
        const bool branch_taken_0x254e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254E48u;
            // 0x254e4c: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e48) {
            ctx->pc = 0x254E58u;
            goto label_254e58;
        }
    }
    ctx->pc = 0x254E50u;
label_254e50:
    // 0x254e50: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x254e50u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_254e54:
    // 0x254e54: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x254e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_254e58:
    // 0x254e58: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x254e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_254e5c:
    // 0x254e5c: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x254e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254e60:
    // 0x254e60: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x254e60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
label_254e64:
    // 0x254e64: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x254e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254e68:
    // 0x254e68: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x254e68u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
label_254e6c:
    // 0x254e6c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x254e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_254e70:
    // 0x254e70: 0x254af904  addiu       $t2, $t2, -0x6FC
    ctx->pc = 0x254e70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965508));
label_254e74:
    // 0x254e74: 0x2529f908  addiu       $t1, $t1, -0x6F8
    ctx->pc = 0x254e74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965512));
label_254e78:
    // 0x254e78: 0x2508f90c  addiu       $t0, $t0, -0x6F4
    ctx->pc = 0x254e78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965516));
label_254e7c:
    // 0x254e7c: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x254e7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_254e80:
    // 0x254e80: 0x27a70122  addiu       $a3, $sp, 0x122
    ctx->pc = 0x254e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 290));
label_254e84:
    // 0x254e84: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x254e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_254e88:
    // 0x254e88: 0x27ac00e4  addiu       $t4, $sp, 0xE4
    ctx->pc = 0x254e88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_254e8c:
    // 0x254e8c: 0x27ab00e8  addiu       $t3, $sp, 0xE8
    ctx->pc = 0x254e8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_254e90:
    // 0x254e90: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x254e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_254e94:
    // 0x254e94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254e98:
    // 0x254e98: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x254e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_254e9c:
    // 0x254e9c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x254e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_254ea0:
    // 0x254ea0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x254ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254ea4:
    // 0x254ea4: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x254ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254ea8:
    // 0x254ea8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254ea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254eac:
    // 0x254eac: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x254eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_254eb0:
    // 0x254eb0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x254eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254eb4:
    // 0x254eb4: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x254eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254eb8:
    // 0x254eb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254ebc:
    // 0x254ebc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x254ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_254ec0:
    // 0x254ec0: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x254ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254ec4:
    // 0x254ec4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x254ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254ec8:
    // 0x254ec8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254ecc:
    // 0x254ecc: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x254eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_254ed0:
    // 0x254ed0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x254ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254ed4:
    // 0x254ed4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x254ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_254ed8:
    // 0x254ed8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x254ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254edc:
    // 0x254edc: 0x8fb100f0  lw          $s1, 0xF0($sp)
    ctx->pc = 0x254edcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_254ee0:
    // 0x254ee0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x254ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_254ee4:
    // 0x254ee4: 0x1191c2  srl         $s2, $s1, 7
    ctx->pc = 0x254ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
label_254ee8:
    // 0x254ee8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x254ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254eec:
    // 0x254eec: 0x8fb100f4  lw          $s1, 0xF4($sp)
    ctx->pc = 0x254eecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_254ef0:
    // 0x254ef0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x254ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_254ef4:
    // 0x254ef4: 0x1189c2  srl         $s1, $s1, 7
    ctx->pc = 0x254ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
label_254ef8:
    // 0x254ef8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x254ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254efc:
    // 0x254efc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x254efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_254f00:
    // 0x254f00: 0xa7b20120  sh          $s2, 0x120($sp)
    ctx->pc = 0x254f00u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 18));
label_254f04:
    // 0x254f04: 0xa4f10000  sh          $s1, 0x0($a3)
    ctx->pc = 0x254f04u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 17));
label_254f08:
    // 0x254f08: 0x8fb100f8  lw          $s1, 0xF8($sp)
    ctx->pc = 0x254f08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_254f0c:
    // 0x254f0c: 0x1189c2  srl         $s1, $s1, 7
    ctx->pc = 0x254f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
label_254f10:
    // 0x254f10: 0xa4b10000  sh          $s1, 0x0($a1)
    ctx->pc = 0x254f10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 17));
label_254f14:
    // 0x254f14: 0x8fb100fc  lw          $s1, 0xFC($sp)
    ctx->pc = 0x254f14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_254f18:
    // 0x254f18: 0x1189c2  srl         $s1, $s1, 7
    ctx->pc = 0x254f18u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
label_254f1c:
    // 0x254f1c: 0xa7b10126  sh          $s1, 0x126($sp)
    ctx->pc = 0x254f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 294), (uint16_t)GPR_U32(ctx, 17));
label_254f20:
    // 0x254f20: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x254f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254f24:
    // 0x254f24: 0xc7c00050  lwc1        $f0, 0x50($fp)
    ctx->pc = 0x254f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254f28:
    // 0x254f28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254f2c:
    // 0x254f2c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x254f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_254f30:
    // 0x254f30: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x254f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254f34:
    // 0x254f34: 0xc7c00054  lwc1        $f0, 0x54($fp)
    ctx->pc = 0x254f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254f38:
    // 0x254f38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254f3c:
    // 0x254f3c: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x254f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_254f40:
    // 0x254f40: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x254f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254f44:
    // 0x254f44: 0xc7c00058  lwc1        $f0, 0x58($fp)
    ctx->pc = 0x254f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254f48:
    // 0x254f48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254f4c:
    // 0x254f4c: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x254f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_254f50:
    // 0x254f50: 0xc4c1001c  lwc1        $f1, 0x1C($a2)
    ctx->pc = 0x254f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254f54:
    // 0x254f54: 0xc7c0005c  lwc1        $f0, 0x5C($fp)
    ctx->pc = 0x254f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254f58:
    // 0x254f58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x254f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254f5c:
    // 0x254f5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x254f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_254f60:
    // 0x254f60: 0xc7c10060  lwc1        $f1, 0x60($fp)
    ctx->pc = 0x254f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254f64:
    // 0x254f64: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x254f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254f68:
    // 0x254f68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_254f6c:
    // 0x254f6c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x254f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_254f70:
    // 0x254f70: 0xc7c10064  lwc1        $f1, 0x64($fp)
    ctx->pc = 0x254f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254f74:
    // 0x254f74: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x254f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254f78:
    // 0x254f78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_254f7c:
    // 0x254f7c: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x254f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_254f80:
    // 0x254f80: 0xc7c10068  lwc1        $f1, 0x68($fp)
    ctx->pc = 0x254f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254f84:
    // 0x254f84: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x254f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254f88:
    // 0x254f88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_254f8c:
    // 0x254f8c: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x254f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_254f90:
    // 0x254f90: 0xc7c1006c  lwc1        $f1, 0x6C($fp)
    ctx->pc = 0x254f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254f94:
    // 0x254f94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x254f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254f98:
    // 0x254f98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_254f9c:
    // 0x254f9c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x254f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_254fa0:
    // 0x254fa0: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x254fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254fa4:
    // 0x254fa4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x254fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254fa8:
    // 0x254fa8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x254fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254fac:
    // 0x254fac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_254fb0:
    if (ctx->pc == 0x254FB0u) {
        ctx->pc = 0x254FB0u;
            // 0x254fb0: 0xc7a200e0  lwc1        $f2, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x254FB4u;
        goto label_254fb4;
    }
    ctx->pc = 0x254FACu;
    {
        const bool branch_taken_0x254fac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254FACu;
            // 0x254fb0: 0xc7a200e0  lwc1        $f2, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fac) {
            ctx->pc = 0x254FBCu;
            goto label_254fbc;
        }
    }
    ctx->pc = 0x254FB4u;
label_254fb4:
    // 0x254fb4: 0x10000003  b           . + 4 + (0x3 << 2)
label_254fb8:
    if (ctx->pc == 0x254FB8u) {
        ctx->pc = 0x254FB8u;
            // 0x254fb8: 0xe7a200e0  swc1        $f2, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->pc = 0x254FBCu;
        goto label_254fbc;
    }
    ctx->pc = 0x254FB4u;
    {
        const bool branch_taken_0x254fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254FB4u;
            // 0x254fb8: 0xe7a200e0  swc1        $f2, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fb4) {
            ctx->pc = 0x254FC4u;
            goto label_254fc4;
        }
    }
    ctx->pc = 0x254FBCu;
label_254fbc:
    // 0x254fbc: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x254fbcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_254fc0:
    // 0x254fc0: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x254fc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_254fc4:
    // 0x254fc4: 0x27b100e4  addiu       $s1, $sp, 0xE4
    ctx->pc = 0x254fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_254fc8:
    // 0x254fc8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x254fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254fcc:
    // 0x254fcc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x254fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254fd0:
    // 0x254fd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x254fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254fd4:
    // 0x254fd4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_254fd8:
    if (ctx->pc == 0x254FD8u) {
        ctx->pc = 0x254FDCu;
        goto label_254fdc;
    }
    ctx->pc = 0x254FD4u;
    {
        const bool branch_taken_0x254fd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x254fd4) {
            ctx->pc = 0x254FE4u;
            goto label_254fe4;
        }
    }
    ctx->pc = 0x254FDCu;
label_254fdc:
    // 0x254fdc: 0x10000003  b           . + 4 + (0x3 << 2)
label_254fe0:
    if (ctx->pc == 0x254FE0u) {
        ctx->pc = 0x254FE0u;
            // 0x254fe0: 0xe5810000  swc1        $f1, 0x0($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->pc = 0x254FE4u;
        goto label_254fe4;
    }
    ctx->pc = 0x254FDCu;
    {
        const bool branch_taken_0x254fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254FDCu;
            // 0x254fe0: 0xe5810000  swc1        $f1, 0x0($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fdc) {
            ctx->pc = 0x254FECu;
            goto label_254fec;
        }
    }
    ctx->pc = 0x254FE4u;
label_254fe4:
    // 0x254fe4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x254fe4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_254fe8:
    // 0x254fe8: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x254fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_254fec:
    // 0x254fec: 0x27b000e8  addiu       $s0, $sp, 0xE8
    ctx->pc = 0x254fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_254ff0:
    // 0x254ff0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x254ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254ff4:
    // 0x254ff4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x254ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_254ff8:
    // 0x254ff8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x254ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254ffc:
    // 0x254ffc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_255000:
    if (ctx->pc == 0x255000u) {
        ctx->pc = 0x255004u;
        goto label_255004;
    }
    ctx->pc = 0x254FFCu;
    {
        const bool branch_taken_0x254ffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x254ffc) {
            ctx->pc = 0x25500Cu;
            goto label_25500c;
        }
    }
    ctx->pc = 0x255004u;
label_255004:
    // 0x255004: 0x10000003  b           . + 4 + (0x3 << 2)
label_255008:
    if (ctx->pc == 0x255008u) {
        ctx->pc = 0x255008u;
            // 0x255008: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->pc = 0x25500Cu;
        goto label_25500c;
    }
    ctx->pc = 0x255004u;
    {
        const bool branch_taken_0x255004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255004u;
            // 0x255008: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255004) {
            ctx->pc = 0x255014u;
            goto label_255014;
        }
    }
    ctx->pc = 0x25500Cu;
label_25500c:
    // 0x25500c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25500cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255010:
    // 0x255010: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x255010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_255014:
    // 0x255014: 0x27a600ec  addiu       $a2, $sp, 0xEC
    ctx->pc = 0x255014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_255018:
    // 0x255018: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x255018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25501c:
    // 0x25501c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255020:
    // 0x255020: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255024:
    // 0x255024: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_255028:
    if (ctx->pc == 0x255028u) {
        ctx->pc = 0x25502Cu;
        goto label_25502c;
    }
    ctx->pc = 0x255024u;
    {
        const bool branch_taken_0x255024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255024) {
            ctx->pc = 0x255034u;
            goto label_255034;
        }
    }
    ctx->pc = 0x25502Cu;
label_25502c:
    // 0x25502c: 0x10000003  b           . + 4 + (0x3 << 2)
label_255030:
    if (ctx->pc == 0x255030u) {
        ctx->pc = 0x255030u;
            // 0x255030: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x255034u;
        goto label_255034;
    }
    ctx->pc = 0x25502Cu;
    {
        const bool branch_taken_0x25502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25502Cu;
            // 0x255030: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25502c) {
            ctx->pc = 0x25503Cu;
            goto label_25503c;
        }
    }
    ctx->pc = 0x255034u;
label_255034:
    // 0x255034: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255034u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255038:
    // 0x255038: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x255038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25503c:
    // 0x25503c: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x25503cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_255040:
    // 0x255040: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x255040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255044:
    // 0x255044: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x255044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255048:
    // 0x255048: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x255048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25504c:
    // 0x25504c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_255050:
    if (ctx->pc == 0x255050u) {
        ctx->pc = 0x255050u;
            // 0x255050: 0xc7a200e0  lwc1        $f2, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x255054u;
        goto label_255054;
    }
    ctx->pc = 0x25504Cu;
    {
        const bool branch_taken_0x25504c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x255050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25504Cu;
            // 0x255050: 0xc7a200e0  lwc1        $f2, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25504c) {
            ctx->pc = 0x25505Cu;
            goto label_25505c;
        }
    }
    ctx->pc = 0x255054u;
label_255054:
    // 0x255054: 0x10000003  b           . + 4 + (0x3 << 2)
label_255058:
    if (ctx->pc == 0x255058u) {
        ctx->pc = 0x255058u;
            // 0x255058: 0xe7a200e0  swc1        $f2, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->pc = 0x25505Cu;
        goto label_25505c;
    }
    ctx->pc = 0x255054u;
    {
        const bool branch_taken_0x255054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255054u;
            // 0x255058: 0xe7a200e0  swc1        $f2, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255054) {
            ctx->pc = 0x255064u;
            goto label_255064;
        }
    }
    ctx->pc = 0x25505Cu;
label_25505c:
    // 0x25505c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x25505cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_255060:
    // 0x255060: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x255060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_255064:
    // 0x255064: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x255064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255068:
    // 0x255068: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x255068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25506c:
    // 0x25506c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25506cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255070:
    // 0x255070: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_255074:
    if (ctx->pc == 0x255074u) {
        ctx->pc = 0x255078u;
        goto label_255078;
    }
    ctx->pc = 0x255070u;
    {
        const bool branch_taken_0x255070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255070) {
            ctx->pc = 0x255080u;
            goto label_255080;
        }
    }
    ctx->pc = 0x255078u;
label_255078:
    // 0x255078: 0x10000003  b           . + 4 + (0x3 << 2)
label_25507c:
    if (ctx->pc == 0x25507Cu) {
        ctx->pc = 0x25507Cu;
            // 0x25507c: 0xe5810000  swc1        $f1, 0x0($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->pc = 0x255080u;
        goto label_255080;
    }
    ctx->pc = 0x255078u;
    {
        const bool branch_taken_0x255078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25507Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255078u;
            // 0x25507c: 0xe5810000  swc1        $f1, 0x0($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255078) {
            ctx->pc = 0x255088u;
            goto label_255088;
        }
    }
    ctx->pc = 0x255080u;
label_255080:
    // 0x255080: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255080u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255084:
    // 0x255084: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x255084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_255088:
    // 0x255088: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x255088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25508c:
    // 0x25508c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x25508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255090:
    // 0x255090: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x255090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255094:
    // 0x255094: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_255098:
    if (ctx->pc == 0x255098u) {
        ctx->pc = 0x25509Cu;
        goto label_25509c;
    }
    ctx->pc = 0x255094u;
    {
        const bool branch_taken_0x255094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255094) {
            ctx->pc = 0x2550A4u;
            goto label_2550a4;
        }
    }
    ctx->pc = 0x25509Cu;
label_25509c:
    // 0x25509c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2550a0:
    if (ctx->pc == 0x2550A0u) {
        ctx->pc = 0x2550A0u;
            // 0x2550a0: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->pc = 0x2550A4u;
        goto label_2550a4;
    }
    ctx->pc = 0x25509Cu;
    {
        const bool branch_taken_0x25509c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2550A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25509Cu;
            // 0x2550a0: 0xe5610000  swc1        $f1, 0x0($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25509c) {
            ctx->pc = 0x2550ACu;
            goto label_2550ac;
        }
    }
    ctx->pc = 0x2550A4u;
label_2550a4:
    // 0x2550a4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2550a4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2550a8:
    // 0x2550a8: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x2550a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_2550ac:
    // 0x2550ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2550acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2550b0:
    // 0x2550b0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2550b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2550b4:
    // 0x2550b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2550b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2550b8:
    // 0x2550b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2550bc:
    if (ctx->pc == 0x2550BCu) {
        ctx->pc = 0x2550C0u;
        goto label_2550c0;
    }
    ctx->pc = 0x2550B8u;
    {
        const bool branch_taken_0x2550b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2550b8) {
            ctx->pc = 0x2550C8u;
            goto label_2550c8;
        }
    }
    ctx->pc = 0x2550C0u;
label_2550c0:
    // 0x2550c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2550c4:
    if (ctx->pc == 0x2550C4u) {
        ctx->pc = 0x2550C4u;
            // 0x2550c4: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x2550C8u;
        goto label_2550c8;
    }
    ctx->pc = 0x2550C0u;
    {
        const bool branch_taken_0x2550c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2550C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2550C0u;
            // 0x2550c4: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550c0) {
            ctx->pc = 0x2550D0u;
            goto label_2550d0;
        }
    }
    ctx->pc = 0x2550C8u;
label_2550c8:
    // 0x2550c8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2550c8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2550cc:
    // 0x2550cc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2550ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2550d0:
    // 0x2550d0: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x2550d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_2550d4:
    // 0x2550d4: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x2550d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2550d8:
    // 0x2550d8: 0x27ad00e0  addiu       $t5, $sp, 0xE0
    ctx->pc = 0x2550d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2550dc:
    // 0x2550dc: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x2550dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2550e0:
    // 0x2550e0: 0x27a40112  addiu       $a0, $sp, 0x112
    ctx->pc = 0x2550e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 274));
label_2550e4:
    // 0x2550e4: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x2550e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_2550e8:
    // 0x2550e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2550e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2550ec:
    // 0x2550ec: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2550ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2550f0:
    // 0x2550f0: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2550f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2550f4:
    // 0x2550f4: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x2550f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2550f8:
    // 0x2550f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2550f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2550fc:
    // 0x2550fc: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x2550fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_255100:
    // 0x255100: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x255100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255104:
    // 0x255104: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x255104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255108:
    // 0x255108: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25510c:
    // 0x25510c: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x25510cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_255110:
    // 0x255110: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x255110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255114:
    // 0x255114: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x255114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255118:
    // 0x255118: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25511c:
    // 0x25511c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25511cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_255120:
    // 0x255120: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x255120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255124:
    // 0x255124: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x255124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_255128:
    // 0x255128: 0xc5a00004  lwc1        $f0, 0x4($t5)
    ctx->pc = 0x255128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25512c:
    // 0x25512c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x25512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_255130:
    // 0x255130: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x255130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_255134:
    // 0x255134: 0x231c2  srl         $a2, $v0, 7
    ctx->pc = 0x255134u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_255138:
    // 0x255138: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x255138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25513c:
    // 0x25513c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x25513cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_255140:
    // 0x255140: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x255140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_255144:
    // 0x255144: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x255144u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_255148:
    // 0x255148: 0xc5a0000c  lwc1        $f0, 0xC($t5)
    ctx->pc = 0x255148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25514c:
    // 0x25514c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x25514cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_255150:
    // 0x255150: 0xa7a60110  sh          $a2, 0x110($sp)
    ctx->pc = 0x255150u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 272), (uint16_t)GPR_U32(ctx, 6));
label_255154:
    // 0x255154: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x255154u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_255158:
    // 0x255158: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x255158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_25515c:
    // 0x25515c: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x25515cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_255160:
    // 0x255160: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x255160u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_255164:
    // 0x255164: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x255164u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_255168:
    // 0x255168: 0x97a60120  lhu         $a2, 0x120($sp)
    ctx->pc = 0x255168u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 288)));
label_25516c:
    // 0x25516c: 0x97a20110  lhu         $v0, 0x110($sp)
    ctx->pc = 0x25516cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 272)));
label_255170:
    // 0x255170: 0x841c2  srl         $t0, $t0, 7
    ctx->pc = 0x255170u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 7));
label_255174:
    // 0x255174: 0xa7a80116  sh          $t0, 0x116($sp)
    ctx->pc = 0x255174u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 278), (uint16_t)GPR_U32(ctx, 8));
label_255178:
    // 0x255178: 0x30d2fffe  andi        $s2, $a2, 0xFFFE
    ctx->pc = 0x255178u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65534);
label_25517c:
    // 0x25517c: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x25517cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_255180:
    // 0x255180: 0x34500001  ori         $s0, $v0, 0x1
    ctx->pc = 0x255180u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_255184:
    // 0x255184: 0x94e70000  lhu         $a3, 0x0($a3)
    ctx->pc = 0x255184u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_255188:
    // 0x255188: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x255188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_25518c:
    // 0x25518c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x25518cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_255190:
    // 0x255190: 0x30d5fffe  andi        $s5, $a2, 0xFFFE
    ctx->pc = 0x255190u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65534);
label_255194:
    // 0x255194: 0x30f1fffe  andi        $s1, $a3, 0xFFFE
    ctx->pc = 0x255194u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65534);
label_255198:
    // 0x255198: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x255198u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25519c:
    // 0x25519c: 0x34b60001  ori         $s6, $a1, 0x1
    ctx->pc = 0x25519cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_2551a0:
    // 0x2551a0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2551a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2551a4:
    // 0x2551a4: 0x8fc20078  lw          $v0, 0x78($fp)
    ctx->pc = 0x2551a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
label_2551a8:
    // 0x2551a8: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x2551a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_2551ac:
    // 0x2551ac: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2551acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_2551b0:
    // 0x2551b0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2551b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2551b4:
    // 0x2551b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2551b8:
    if (ctx->pc == 0x2551B8u) {
        ctx->pc = 0x2551B8u;
            // 0x2551b8: 0x34970001  ori         $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->pc = 0x2551BCu;
        goto label_2551bc;
    }
    ctx->pc = 0x2551B4u;
    {
        const bool branch_taken_0x2551b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2551B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2551B4u;
            // 0x2551b8: 0x34970001  ori         $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551b4) {
            ctx->pc = 0x2551C8u;
            goto label_2551c8;
        }
    }
    ctx->pc = 0x2551BCu;
label_2551bc:
    // 0x2551bc: 0x27c40070  addiu       $a0, $fp, 0x70
    ctx->pc = 0x2551bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
label_2551c0:
    // 0x2551c0: 0xc0a728c  jal         func_29CA30
label_2551c4:
    if (ctx->pc == 0x2551C4u) {
        ctx->pc = 0x2551C4u;
            // 0x2551c4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2551C8u;
        goto label_2551c8;
    }
    ctx->pc = 0x2551C0u;
    SET_GPR_U32(ctx, 31, 0x2551C8u);
    ctx->pc = 0x2551C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2551C0u;
            // 0x2551c4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2551C8u; }
        if (ctx->pc != 0x2551C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2551C8u; }
        if (ctx->pc != 0x2551C8u) { return; }
    }
    ctx->pc = 0x2551C8u;
label_2551c8:
    // 0x2551c8: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x2551c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_2551cc:
    // 0x2551cc: 0x3208ffff  andi        $t0, $s0, 0xFFFF
    ctx->pc = 0x2551ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_2551d0:
    // 0x2551d0: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2551d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2551d4:
    // 0x2551d4: 0x8fd00070  lw          $s0, 0x70($fp)
    ctx->pc = 0x2551d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_2551d8:
    // 0x2551d8: 0x3247ffff  andi        $a3, $s2, 0xFFFF
    ctx->pc = 0x2551d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_2551dc:
    // 0x2551dc: 0x27c4007c  addiu       $a0, $fp, 0x7C
    ctx->pc = 0x2551dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 124));
label_2551e0:
    // 0x2551e0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2551e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2551e4:
    // 0x2551e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2551e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2551e8:
    // 0x2551e8: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x2551e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2551ec:
    // 0x2551ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2551ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2551f0:
    // 0x2551f0: 0xafc30074  sw          $v1, 0x74($fp)
    ctx->pc = 0x2551f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 3));
label_2551f4:
    // 0x2551f4: 0x26690008  addiu       $t1, $s3, 0x8
    ctx->pc = 0x2551f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_2551f8:
    // 0x2551f8: 0xc095094  jal         func_254250
label_2551fc:
    if (ctx->pc == 0x2551FCu) {
        ctx->pc = 0x2551FCu;
            // 0x2551fc: 0x266a000a  addiu       $t2, $s3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
        ctx->pc = 0x255200u;
        goto label_255200;
    }
    ctx->pc = 0x2551F8u;
    SET_GPR_U32(ctx, 31, 0x255200u);
    ctx->pc = 0x2551FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2551F8u;
            // 0x2551fc: 0x266a000a  addiu       $t2, $s3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254250u;
    if (runtime->hasFunction(0x254250u)) {
        auto targetFn = runtime->lookupFunction(0x254250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255200u; }
        if (ctx->pc != 0x255200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00254250_0x254250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255200u; }
        if (ctx->pc != 0x255200u) { return; }
    }
    ctx->pc = 0x255200u;
label_255200:
    // 0x255200: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x255200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_255204:
    // 0x255204: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x255204u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_255208:
    // 0x255208: 0x32c8ffff  andi        $t0, $s6, 0xFFFF
    ctx->pc = 0x255208u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_25520c:
    // 0x25520c: 0x27c40088  addiu       $a0, $fp, 0x88
    ctx->pc = 0x25520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 136));
label_255210:
    // 0x255210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x255210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255214:
    // 0x255214: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x255214u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_255218:
    // 0x255218: 0xc095094  jal         func_254250
label_25521c:
    if (ctx->pc == 0x25521Cu) {
        ctx->pc = 0x25521Cu;
            // 0x25521c: 0x266a0004  addiu       $t2, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x255220u;
        goto label_255220;
    }
    ctx->pc = 0x255218u;
    SET_GPR_U32(ctx, 31, 0x255220u);
    ctx->pc = 0x25521Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255218u;
            // 0x25521c: 0x266a0004  addiu       $t2, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254250u;
    if (runtime->hasFunction(0x254250u)) {
        auto targetFn = runtime->lookupFunction(0x254250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255220u; }
        if (ctx->pc != 0x255220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00254250_0x254250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255220u; }
        if (ctx->pc != 0x255220u) { return; }
    }
    ctx->pc = 0x255220u;
label_255220:
    // 0x255220: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x255220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_255224:
    // 0x255224: 0x32a7ffff  andi        $a3, $s5, 0xFFFF
    ctx->pc = 0x255224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_255228:
    // 0x255228: 0x32e8ffff  andi        $t0, $s7, 0xFFFF
    ctx->pc = 0x255228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_25522c:
    // 0x25522c: 0x27c40094  addiu       $a0, $fp, 0x94
    ctx->pc = 0x25522cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 148));
label_255230:
    // 0x255230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x255230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255234:
    // 0x255234: 0x26690002  addiu       $t1, $s3, 0x2
    ctx->pc = 0x255234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_255238:
    // 0x255238: 0xc095094  jal         func_254250
label_25523c:
    if (ctx->pc == 0x25523Cu) {
        ctx->pc = 0x25523Cu;
            // 0x25523c: 0x266a0006  addiu       $t2, $s3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
        ctx->pc = 0x255240u;
        goto label_255240;
    }
    ctx->pc = 0x255238u;
    SET_GPR_U32(ctx, 31, 0x255240u);
    ctx->pc = 0x25523Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255238u;
            // 0x25523c: 0x266a0006  addiu       $t2, $s3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254250u;
    if (runtime->hasFunction(0x254250u)) {
        auto targetFn = runtime->lookupFunction(0x254250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255240u; }
        if (ctx->pc != 0x255240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00254250_0x254250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255240u; }
        if (ctx->pc != 0x255240u) { return; }
    }
    ctx->pc = 0x255240u;
label_255240:
    // 0x255240: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x255240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_255244:
    // 0x255244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x255244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255248:
    // 0x255248: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x255248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_25524c:
    // 0x25524c: 0xc095148  jal         func_254520
label_255250:
    if (ctx->pc == 0x255250u) {
        ctx->pc = 0x255250u;
            // 0x255250: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255254u;
        goto label_255254;
    }
    ctx->pc = 0x25524Cu;
    SET_GPR_U32(ctx, 31, 0x255254u);
    ctx->pc = 0x255250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25524Cu;
            // 0x255250: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254520u;
    if (runtime->hasFunction(0x254520u)) {
        auto targetFn = runtime->lookupFunction(0x254520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255254u; }
        if (ctx->pc != 0x255254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00254520_0x254520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255254u; }
        if (ctx->pc != 0x255254u) { return; }
    }
    ctx->pc = 0x255254u;
label_255254:
    // 0x255254: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x255254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_255258:
    // 0x255258: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x255258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25525c:
    // 0x25525c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x25525cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_255260:
    // 0x255260: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x255260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_255264:
    // 0x255264: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x255264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_255268:
    // 0x255268: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x255268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25526c:
    // 0x25526c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25526cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_255270:
    // 0x255270: 0x8fd00074  lw          $s0, 0x74($fp)
    ctx->pc = 0x255270u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_255274:
    // 0x255274: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x255274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_255278:
    // 0x255278: 0x101143  sra         $v0, $s0, 5
    ctx->pc = 0x255278u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 5));
label_25527c:
    // 0x25527c: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x25527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_255280:
    // 0x255280: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x255280u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_255284:
    // 0x255284: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x255284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_255288:
    // 0x255288: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x255288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25528c:
    // 0x25528c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x25528cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_255290:
    // 0x255290: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x255290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_255294:
    // 0x255294: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x255294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_255298:
    // 0x255298: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x255298u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_25529c:
    // 0x25529c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2552a0:
    if (ctx->pc == 0x2552A0u) {
        ctx->pc = 0x2552A4u;
        goto label_2552a4;
    }
    ctx->pc = 0x25529Cu;
    {
        const bool branch_taken_0x25529c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25529c) {
            ctx->pc = 0x2552B0u;
            goto label_2552b0;
        }
    }
    ctx->pc = 0x2552A4u;
label_2552a4:
    // 0x2552a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2552a8:
    if (ctx->pc == 0x2552A8u) {
        ctx->pc = 0x2552A8u;
            // 0x2552a8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2552ACu;
        goto label_2552ac;
    }
    ctx->pc = 0x2552A4u;
    {
        const bool branch_taken_0x2552a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2552A4u;
            // 0x2552a8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552a4) {
            ctx->pc = 0x2552C0u;
            goto label_2552c0;
        }
    }
    ctx->pc = 0x2552ACu;
label_2552ac:
    // 0x2552ac: 0x0  nop
    ctx->pc = 0x2552acu;
    // NOP
label_2552b0:
    // 0x2552b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2552b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2552b4:
    // 0x2552b4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2552b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2552b8:
    // 0x2552b8: 0x320f809  jalr        $t9
label_2552bc:
    if (ctx->pc == 0x2552BCu) {
        ctx->pc = 0x2552C0u;
        goto label_2552c0;
    }
    ctx->pc = 0x2552B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2552C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2552C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2552C0u; }
            if (ctx->pc != 0x2552C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2552C0u;
label_2552c0:
    // 0x2552c0: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x2552c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_2552c4:
    // 0x2552c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2552c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2552c8:
    // 0x2552c8: 0x97a200a0  lhu         $v0, 0xA0($sp)
    ctx->pc = 0x2552c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
label_2552cc:
    // 0x2552cc: 0x8fb20138  lw          $s2, 0x138($sp)
    ctx->pc = 0x2552ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2552d0:
    // 0x2552d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2552d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2552d4:
    // 0x2552d4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2552d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2552d8:
    // 0x2552d8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2552d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2552dc:
    // 0x2552dc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2552dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2552e0:
    // 0x2552e0: 0xc0951ec  jal         func_2547B0
label_2552e4:
    if (ctx->pc == 0x2552E4u) {
        ctx->pc = 0x2552E4u;
            // 0x2552e4: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2552E8u;
        goto label_2552e8;
    }
    ctx->pc = 0x2552E0u;
    SET_GPR_U32(ctx, 31, 0x2552E8u);
    ctx->pc = 0x2552E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2552E0u;
            // 0x2552e4: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2547B0u;
    goto label_2547b0;
    ctx->pc = 0x2552E8u;
label_2552e8:
    // 0x2552e8: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x2552e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_2552ec:
    // 0x2552ec: 0x8fd60070  lw          $s6, 0x70($fp)
    ctx->pc = 0x2552ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_2552f0:
    // 0x2552f0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x2552f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_2552f4:
    // 0x2552f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2552f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2552f8:
    // 0x2552f8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2552f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2552fc:
    // 0x2552fc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2552fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_255300:
    // 0x255300: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x255300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_255304:
    // 0x255304: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x255304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_255308:
    // 0x255308: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x255308u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25530c:
    // 0x25530c: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
label_255310:
    if (ctx->pc == 0x255310u) {
        ctx->pc = 0x255314u;
        goto label_255314;
    }
    ctx->pc = 0x25530Cu;
    {
        const bool branch_taken_0x25530c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25530c) {
            ctx->pc = 0x255460u;
            goto label_255460;
        }
    }
    ctx->pc = 0x255314u;
label_255314:
    // 0x255314: 0x0  nop
    ctx->pc = 0x255314u;
    // NOP
label_255318:
    // 0x255318: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x255318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25531c:
    // 0x25531c: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
label_255320:
    if (ctx->pc == 0x255320u) {
        ctx->pc = 0x255320u;
            // 0x255320: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255324u;
        goto label_255324;
    }
    ctx->pc = 0x25531Cu;
    {
        const bool branch_taken_0x25531c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x255320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25531Cu;
            // 0x255320: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25531c) {
            ctx->pc = 0x255448u;
            goto label_255448;
        }
    }
    ctx->pc = 0x255324u;
label_255324:
    // 0x255324: 0x0  nop
    ctx->pc = 0x255324u;
    // NOP
label_255328:
    // 0x255328: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x255328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_25532c:
    // 0x25532c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_255330:
    if (ctx->pc == 0x255330u) {
        ctx->pc = 0x255334u;
        goto label_255334;
    }
    ctx->pc = 0x25532Cu;
    {
        const bool branch_taken_0x25532c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25532c) {
            ctx->pc = 0x255340u;
            goto label_255340;
        }
    }
    ctx->pc = 0x255334u;
label_255334:
    // 0x255334: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x255334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_255338:
    // 0x255338: 0x10000041  b           . + 4 + (0x41 << 2)
label_25533c:
    if (ctx->pc == 0x25533Cu) {
        ctx->pc = 0x25533Cu;
            // 0x25533c: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x255340u;
        goto label_255340;
    }
    ctx->pc = 0x255338u;
    {
        const bool branch_taken_0x255338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25533Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255338u;
            // 0x25533c: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255338) {
            ctx->pc = 0x255440u;
            goto label_255440;
        }
    }
    ctx->pc = 0x255340u;
label_255340:
    // 0x255340: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x255340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_255344:
    // 0x255344: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_255348:
    if (ctx->pc == 0x255348u) {
        ctx->pc = 0x25534Cu;
        goto label_25534c;
    }
    ctx->pc = 0x255344u;
    {
        const bool branch_taken_0x255344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x255344) {
            ctx->pc = 0x255438u;
            goto label_255438;
        }
    }
    ctx->pc = 0x25534Cu;
label_25534c:
    // 0x25534c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x25534cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_255350:
    // 0x255350: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x255350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_255354:
    // 0x255354: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x255354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_255358:
    // 0x255358: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x255358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_25535c:
    // 0x25535c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x25535cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_255360:
    // 0x255360: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x255360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_255364:
    // 0x255364: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x255364u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_255368:
    // 0x255368: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x255368u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_25536c:
    // 0x25536c: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x25536cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_255370:
    // 0x255370: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x255370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_255374:
    // 0x255374: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_255378:
    if (ctx->pc == 0x255378u) {
        ctx->pc = 0x25537Cu;
        goto label_25537c;
    }
    ctx->pc = 0x255374u;
    {
        const bool branch_taken_0x255374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255374) {
            ctx->pc = 0x255438u;
            goto label_255438;
        }
    }
    ctx->pc = 0x25537Cu;
label_25537c:
    // 0x25537c: 0x8e35000c  lw          $s5, 0xC($s1)
    ctx->pc = 0x25537cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_255380:
    // 0x255380: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x255380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_255384:
    // 0x255384: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_255388:
    if (ctx->pc == 0x255388u) {
        ctx->pc = 0x25538Cu;
        goto label_25538c;
    }
    ctx->pc = 0x255384u;
    {
        const bool branch_taken_0x255384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255384) {
            ctx->pc = 0x2553D8u;
            goto label_2553d8;
        }
    }
    ctx->pc = 0x25538Cu;
label_25538c:
    // 0x25538c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x25538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_255390:
    // 0x255390: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x255390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_255394:
    // 0x255394: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x255394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_255398:
    // 0x255398: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x255398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_25539c:
    // 0x25539c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2553a0:
    if (ctx->pc == 0x2553A0u) {
        ctx->pc = 0x2553A0u;
            // 0x2553a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2553A4u;
        goto label_2553a4;
    }
    ctx->pc = 0x25539Cu;
    {
        const bool branch_taken_0x25539c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2553A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25539Cu;
            // 0x2553a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25539c) {
            ctx->pc = 0x2553B0u;
            goto label_2553b0;
        }
    }
    ctx->pc = 0x2553A4u;
label_2553a4:
    // 0x2553a4: 0xc0a728c  jal         func_29CA30
label_2553a8:
    if (ctx->pc == 0x2553A8u) {
        ctx->pc = 0x2553A8u;
            // 0x2553a8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2553ACu;
        goto label_2553ac;
    }
    ctx->pc = 0x2553A4u;
    SET_GPR_U32(ctx, 31, 0x2553ACu);
    ctx->pc = 0x2553A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2553A4u;
            // 0x2553a8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2553ACu; }
        if (ctx->pc != 0x2553ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2553ACu; }
        if (ctx->pc != 0x2553ACu) { return; }
    }
    ctx->pc = 0x2553ACu;
label_2553ac:
    // 0x2553ac: 0x0  nop
    ctx->pc = 0x2553acu;
    // NOP
label_2553b0:
    // 0x2553b0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2553b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2553b4:
    // 0x2553b4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2553b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2553b8:
    // 0x2553b8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2553b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_2553bc:
    // 0x2553bc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2553bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2553c0:
    // 0x2553c0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2553c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2553c4:
    // 0x2553c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2553c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2553c8:
    // 0x2553c8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2553c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2553cc:
    // 0x2553cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2553ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2553d0:
    // 0x2553d0: 0x10000019  b           . + 4 + (0x19 << 2)
label_2553d4:
    if (ctx->pc == 0x2553D4u) {
        ctx->pc = 0x2553D4u;
            // 0x2553d4: 0xac950004  sw          $s5, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 21));
        ctx->pc = 0x2553D8u;
        goto label_2553d8;
    }
    ctx->pc = 0x2553D0u;
    {
        const bool branch_taken_0x2553d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2553D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2553D0u;
            // 0x2553d4: 0xac950004  sw          $s5, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2553d0) {
            ctx->pc = 0x255438u;
            goto label_255438;
        }
    }
    ctx->pc = 0x2553D8u;
label_2553d8:
    // 0x2553d8: 0x97a300a0  lhu         $v1, 0xA0($sp)
    ctx->pc = 0x2553d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
label_2553dc:
    // 0x2553dc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2553dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2553e0:
    // 0x2553e0: 0x2a42024  and         $a0, $s5, $a0
    ctx->pc = 0x2553e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
label_2553e4:
    // 0x2553e4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2553e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2553e8:
    // 0x2553e8: 0x8fc300a8  lw          $v1, 0xA8($fp)
    ctx->pc = 0x2553e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 168)));
label_2553ec:
    // 0x2553ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2553ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2553f0:
    // 0x2553f0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2553f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2553f4:
    // 0x2553f4: 0x24750004  addiu       $s5, $v1, 0x4
    ctx->pc = 0x2553f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2553f8:
    // 0x2553f8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2553f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2553fc:
    // 0x2553fc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2553fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_255400:
    // 0x255400: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x255400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_255404:
    // 0x255404: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_255408:
    if (ctx->pc == 0x255408u) {
        ctx->pc = 0x255408u;
            // 0x255408: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25540Cu;
        goto label_25540c;
    }
    ctx->pc = 0x255404u;
    {
        const bool branch_taken_0x255404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x255408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255404u;
            // 0x255408: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255404) {
            ctx->pc = 0x255418u;
            goto label_255418;
        }
    }
    ctx->pc = 0x25540Cu;
label_25540c:
    // 0x25540c: 0xc0a728c  jal         func_29CA30
label_255410:
    if (ctx->pc == 0x255410u) {
        ctx->pc = 0x255410u;
            // 0x255410: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x255414u;
        goto label_255414;
    }
    ctx->pc = 0x25540Cu;
    SET_GPR_U32(ctx, 31, 0x255414u);
    ctx->pc = 0x255410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25540Cu;
            // 0x255410: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255414u; }
        if (ctx->pc != 0x255414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255414u; }
        if (ctx->pc != 0x255414u) { return; }
    }
    ctx->pc = 0x255414u;
label_255414:
    // 0x255414: 0x0  nop
    ctx->pc = 0x255414u;
    // NOP
label_255418:
    // 0x255418: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x255418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_25541c:
    // 0x25541c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25541cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_255420:
    // 0x255420: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x255420u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_255424:
    // 0x255424: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x255424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_255428:
    // 0x255428: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x255428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25542c:
    // 0x25542c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_255430:
    // 0x255430: 0xa4770000  sh          $s7, 0x0($v1)
    ctx->pc = 0x255430u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 23));
label_255434:
    // 0x255434: 0x0  nop
    ctx->pc = 0x255434u;
    // NOP
label_255438:
    // 0x255438: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x255438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_25543c:
    // 0x25543c: 0x108042  srl         $s0, $s0, 1
    ctx->pc = 0x25543cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_255440:
    // 0x255440: 0x1600ffb9  bnez        $s0, . + 4 + (-0x47 << 2)
label_255444:
    if (ctx->pc == 0x255444u) {
        ctx->pc = 0x255448u;
        goto label_255448;
    }
    ctx->pc = 0x255440u;
    {
        const bool branch_taken_0x255440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x255440) {
            ctx->pc = 0x255328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255328;
        }
    }
    ctx->pc = 0x255448u;
label_255448:
    // 0x255448: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x255448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_25544c:
    // 0x25544c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x25544cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_255450:
    // 0x255450: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x255450u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_255454:
    // 0x255454: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
label_255458:
    if (ctx->pc == 0x255458u) {
        ctx->pc = 0x255458u;
            // 0x255458: 0x26d60200  addiu       $s6, $s6, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 512));
        ctx->pc = 0x25545Cu;
        goto label_25545c;
    }
    ctx->pc = 0x255454u;
    {
        const bool branch_taken_0x255454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x255458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255454u;
            // 0x255458: 0x26d60200  addiu       $s6, $s6, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255454) {
            ctx->pc = 0x255318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255318;
        }
    }
    ctx->pc = 0x25545Cu;
label_25545c:
    // 0x25545c: 0x0  nop
    ctx->pc = 0x25545cu;
    // NOP
label_255460:
    // 0x255460: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x255460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_255464:
    // 0x255464: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x255464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_255468:
    // 0x255468: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x255468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25546c:
    // 0x25546c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x25546cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_255470:
    // 0x255470: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x255470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_255474:
    // 0x255474: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_255478:
    if (ctx->pc == 0x255478u) {
        ctx->pc = 0x25547Cu;
        goto label_25547c;
    }
    ctx->pc = 0x255474u;
    {
        const bool branch_taken_0x255474 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x255474) {
            ctx->pc = 0x255490u;
            goto label_255490;
        }
    }
    ctx->pc = 0x25547Cu;
label_25547c:
    // 0x25547c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25547cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_255480:
    // 0x255480: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x255480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_255484:
    // 0x255484: 0x320f809  jalr        $t9
label_255488:
    if (ctx->pc == 0x255488u) {
        ctx->pc = 0x25548Cu;
        goto label_25548c;
    }
    ctx->pc = 0x255484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25548Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25548Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25548Cu; }
            if (ctx->pc != 0x25548Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25548Cu;
label_25548c:
    // 0x25548c: 0x0  nop
    ctx->pc = 0x25548cu;
    // NOP
label_255490:
    // 0x255490: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x255490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_255494:
    // 0x255494: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x255494u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_255498:
    // 0x255498: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x255498u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25549c:
    // 0x25549c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25549cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2554a0:
    // 0x2554a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2554a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2554a4:
    // 0x2554a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2554a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2554a8:
    // 0x2554a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2554a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2554ac:
    // 0x2554ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2554acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2554b0:
    // 0x2554b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2554b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2554b4:
    // 0x2554b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2554b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2554b8:
    // 0x2554b8: 0x3e00008  jr          $ra
label_2554bc:
    if (ctx->pc == 0x2554BCu) {
        ctx->pc = 0x2554BCu;
            // 0x2554bc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x2554C0u;
        goto label_2554c0;
    }
    ctx->pc = 0x2554B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2554BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2554B8u;
            // 0x2554bc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2554C0u;
label_2554c0:
    // 0x2554c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2554c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2554c4:
    // 0x2554c4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2554c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2554c8:
    // 0x2554c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2554c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2554cc:
    // 0x2554cc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2554ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2554d0:
    // 0x2554d0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2554d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2554d4:
    // 0x2554d4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2554d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2554d8:
    // 0x2554d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2554d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2554dc:
    // 0x2554dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2554dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2554e0:
    // 0x2554e0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2554e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2554e4:
    // 0x2554e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2554e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2554e8:
    // 0x2554e8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2554e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2554ec:
    // 0x2554ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2554ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2554f0:
    // 0x2554f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2554f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2554f4:
    // 0x2554f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2554f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2554f8:
    // 0x2554f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2554f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2554fc:
    // 0x2554fc: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x2554fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_255500:
    // 0x255500: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x255500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_255504:
    // 0x255504: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x255504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_255508:
    // 0x255508: 0x8cbe0000  lw          $fp, 0x0($a1)
    ctx->pc = 0x255508u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25550c:
    // 0x25550c: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x25550cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_255510:
    // 0x255510: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x255510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_255514:
    // 0x255514: 0x1e2900  sll         $a1, $fp, 4
    ctx->pc = 0x255514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
label_255518:
    // 0x255518: 0x85a021  addu        $s4, $a0, $a1
    ctx->pc = 0x255518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_25551c:
    // 0x25551c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_255520:
    // 0x255520: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x255520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_255524:
    // 0x255524: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x255524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_255528:
    // 0x255528: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25552c:
    // 0x25552c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x25552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_255530:
    // 0x255530: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x255530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_255534:
    // 0x255534: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x255534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_255538:
    // 0x255538: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x255538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_25553c:
    // 0x25553c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x25553cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_255540:
    // 0x255540: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x255540u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_255544:
    // 0x255544: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_255548:
    if (ctx->pc == 0x255548u) {
        ctx->pc = 0x25554Cu;
        goto label_25554c;
    }
    ctx->pc = 0x255544u;
    {
        const bool branch_taken_0x255544 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x255544) {
            ctx->pc = 0x255558u;
            goto label_255558;
        }
    }
    ctx->pc = 0x25554Cu;
label_25554c:
    // 0x25554c: 0x10000006  b           . + 4 + (0x6 << 2)
label_255550:
    if (ctx->pc == 0x255550u) {
        ctx->pc = 0x255550u;
            // 0x255550: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x255554u;
        goto label_255554;
    }
    ctx->pc = 0x25554Cu;
    {
        const bool branch_taken_0x25554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25554Cu;
            // 0x255550: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25554c) {
            ctx->pc = 0x255568u;
            goto label_255568;
        }
    }
    ctx->pc = 0x255554u;
label_255554:
    // 0x255554: 0x0  nop
    ctx->pc = 0x255554u;
    // NOP
label_255558:
    // 0x255558: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x255558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25555c:
    // 0x25555c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x25555cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_255560:
    // 0x255560: 0x320f809  jalr        $t9
label_255564:
    if (ctx->pc == 0x255564u) {
        ctx->pc = 0x255568u;
        goto label_255568;
    }
    ctx->pc = 0x255560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x255568u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x255568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x255568u; }
            if (ctx->pc != 0x255568u) { return; }
        }
        }
    }
    ctx->pc = 0x255568u;
label_255568:
    // 0x255568: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x255568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_25556c:
    // 0x25556c: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x25556cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_255570:
    // 0x255570: 0x33c8ffff  andi        $t0, $fp, 0xFFFF
    ctx->pc = 0x255570u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_255574:
    // 0x255574: 0x8ec2007c  lw          $v0, 0x7C($s6)
    ctx->pc = 0x255574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
label_255578:
    // 0x255578: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x255578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25557c:
    // 0x25557c: 0x8fb300d8  lw          $s3, 0xD8($sp)
    ctx->pc = 0x25557cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_255580:
    // 0x255580: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x255580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_255584:
    // 0x255584: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x255584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_255588:
    // 0x255588: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x255588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25558c:
    // 0x25558c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_255590:
    // 0x255590: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x255590u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_255594:
    // 0x255594: 0xc0951ec  jal         func_2547B0
label_255598:
    if (ctx->pc == 0x255598u) {
        ctx->pc = 0x255598u;
            // 0x255598: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25559Cu;
        goto label_25559c;
    }
    ctx->pc = 0x255594u;
    SET_GPR_U32(ctx, 31, 0x25559Cu);
    ctx->pc = 0x255598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255594u;
            // 0x255598: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2547B0u;
    goto label_2547b0;
    ctx->pc = 0x25559Cu;
label_25559c:
    // 0x25559c: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x25559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_2555a0:
    // 0x2555a0: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x2555a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_2555a4:
    // 0x2555a4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2555a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_2555a8:
    // 0x2555a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2555a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2555ac:
    // 0x2555ac: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2555acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2555b0:
    // 0x2555b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2555b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2555b4:
    // 0x2555b4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2555b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2555b8:
    // 0x2555b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2555b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2555bc:
    // 0x2555bc: 0x262082b  sltu        $at, $s3, $v0
    ctx->pc = 0x2555bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2555c0:
    // 0x2555c0: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
label_2555c4:
    if (ctx->pc == 0x2555C4u) {
        ctx->pc = 0x2555C8u;
        goto label_2555c8;
    }
    ctx->pc = 0x2555C0u;
    {
        const bool branch_taken_0x2555c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2555c0) {
            ctx->pc = 0x255740u;
            goto label_255740;
        }
    }
    ctx->pc = 0x2555C8u;
label_2555c8:
    // 0x2555c8: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x2555c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2555cc:
    // 0x2555cc: 0x12200056  beqz        $s1, . + 4 + (0x56 << 2)
label_2555d0:
    if (ctx->pc == 0x2555D0u) {
        ctx->pc = 0x2555D0u;
            // 0x2555d0: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2555D4u;
        goto label_2555d4;
    }
    ctx->pc = 0x2555CCu;
    {
        const bool branch_taken_0x2555cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2555D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2555CCu;
            // 0x2555d0: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2555cc) {
            ctx->pc = 0x255728u;
            goto label_255728;
        }
    }
    ctx->pc = 0x2555D4u;
label_2555d4:
    // 0x2555d4: 0x0  nop
    ctx->pc = 0x2555d4u;
    // NOP
label_2555d8:
    // 0x2555d8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2555d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2555dc:
    // 0x2555dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2555e0:
    if (ctx->pc == 0x2555E0u) {
        ctx->pc = 0x2555E4u;
        goto label_2555e4;
    }
    ctx->pc = 0x2555DCu;
    {
        const bool branch_taken_0x2555dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2555dc) {
            ctx->pc = 0x2555F0u;
            goto label_2555f0;
        }
    }
    ctx->pc = 0x2555E4u;
label_2555e4:
    // 0x2555e4: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x2555e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_2555e8:
    // 0x2555e8: 0x1000004d  b           . + 4 + (0x4D << 2)
label_2555ec:
    if (ctx->pc == 0x2555ECu) {
        ctx->pc = 0x2555ECu;
            // 0x2555ec: 0x118a02  srl         $s1, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x2555F0u;
        goto label_2555f0;
    }
    ctx->pc = 0x2555E8u;
    {
        const bool branch_taken_0x2555e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2555ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2555E8u;
            // 0x2555ec: 0x118a02  srl         $s1, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2555e8) {
            ctx->pc = 0x255720u;
            goto label_255720;
        }
    }
    ctx->pc = 0x2555F0u;
label_2555f0:
    // 0x2555f0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2555f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2555f4:
    // 0x2555f4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_2555f8:
    if (ctx->pc == 0x2555F8u) {
        ctx->pc = 0x2555FCu;
        goto label_2555fc;
    }
    ctx->pc = 0x2555F4u;
    {
        const bool branch_taken_0x2555f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2555f4) {
            ctx->pc = 0x255718u;
            goto label_255718;
        }
    }
    ctx->pc = 0x2555FCu;
label_2555fc:
    // 0x2555fc: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2555fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_255600:
    // 0x255600: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x255600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_255604:
    // 0x255604: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x255604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_255608:
    // 0x255608: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x255608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_25560c:
    // 0x25560c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x25560cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_255610:
    // 0x255610: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x255610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_255614:
    // 0x255614: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x255614u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_255618:
    // 0x255618: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x255618u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_25561c:
    // 0x25561c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x25561cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_255620:
    // 0x255620: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x255620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_255624:
    // 0x255624: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_255628:
    if (ctx->pc == 0x255628u) {
        ctx->pc = 0x25562Cu;
        goto label_25562c;
    }
    ctx->pc = 0x255624u;
    {
        const bool branch_taken_0x255624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255624) {
            ctx->pc = 0x255718u;
            goto label_255718;
        }
    }
    ctx->pc = 0x25562Cu;
label_25562c:
    // 0x25562c: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x25562cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_255630:
    // 0x255630: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x255630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_255634:
    // 0x255634: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_255638:
    if (ctx->pc == 0x255638u) {
        ctx->pc = 0x25563Cu;
        goto label_25563c;
    }
    ctx->pc = 0x255634u;
    {
        const bool branch_taken_0x255634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255634) {
            ctx->pc = 0x255688u;
            goto label_255688;
        }
    }
    ctx->pc = 0x25563Cu;
label_25563c:
    // 0x25563c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x25563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_255640:
    // 0x255640: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x255640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_255644:
    // 0x255644: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x255644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_255648:
    // 0x255648: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x255648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_25564c:
    // 0x25564c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_255650:
    if (ctx->pc == 0x255650u) {
        ctx->pc = 0x255654u;
        goto label_255654;
    }
    ctx->pc = 0x25564Cu;
    {
        const bool branch_taken_0x25564c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25564c) {
            ctx->pc = 0x255660u;
            goto label_255660;
        }
    }
    ctx->pc = 0x255654u;
label_255654:
    // 0x255654: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_255658:
    // 0x255658: 0xc0a728c  jal         func_29CA30
label_25565c:
    if (ctx->pc == 0x25565Cu) {
        ctx->pc = 0x25565Cu;
            // 0x25565c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x255660u;
        goto label_255660;
    }
    ctx->pc = 0x255658u;
    SET_GPR_U32(ctx, 31, 0x255660u);
    ctx->pc = 0x25565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255658u;
            // 0x25565c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255660u; }
        if (ctx->pc != 0x255660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255660u; }
        if (ctx->pc != 0x255660u) { return; }
    }
    ctx->pc = 0x255660u;
label_255660:
    // 0x255660: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x255660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_255664:
    // 0x255664: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x255664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_255668:
    // 0x255668: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x255668u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_25566c:
    // 0x25566c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25566cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_255670:
    // 0x255670: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x255670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_255674:
    // 0x255674: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x255674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_255678:
    // 0x255678: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x255678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25567c:
    // 0x25567c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25567cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_255680:
    // 0x255680: 0x10000025  b           . + 4 + (0x25 << 2)
label_255684:
    if (ctx->pc == 0x255684u) {
        ctx->pc = 0x255684u;
            // 0x255684: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x255688u;
        goto label_255688;
    }
    ctx->pc = 0x255680u;
    {
        const bool branch_taken_0x255680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255680u;
            // 0x255684: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255680) {
            ctx->pc = 0x255718u;
            goto label_255718;
        }
    }
    ctx->pc = 0x255688u;
label_255688:
    // 0x255688: 0x8ec300a8  lw          $v1, 0xA8($s6)
    ctx->pc = 0x255688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_25568c:
    // 0x25568c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x25568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_255690:
    // 0x255690: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x255690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255694:
    // 0x255694: 0x2022024  and         $a0, $s0, $v0
    ctx->pc = 0x255694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_255698:
    // 0x255698: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x255698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_25569c:
    // 0x25569c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x25569cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2556a0:
    // 0x2556a0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2556a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2556a4:
    // 0x2556a4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2556a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2556a8:
    // 0x2556a8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_2556ac:
    if (ctx->pc == 0x2556ACu) {
        ctx->pc = 0x2556ACu;
            // 0x2556ac: 0x24c40004  addiu       $a0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x2556B0u;
        goto label_2556b0;
    }
    ctx->pc = 0x2556A8u;
    {
        const bool branch_taken_0x2556a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2556ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2556A8u;
            // 0x2556ac: 0x24c40004  addiu       $a0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556a8) {
            ctx->pc = 0x2556E0u;
            goto label_2556e0;
        }
    }
    ctx->pc = 0x2556B0u;
label_2556b0:
    // 0x2556b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2556b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2556b4:
    // 0x2556b4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2556b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2556b8:
    // 0x2556b8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2556b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2556bc:
    // 0x2556bc: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_2556c0:
    if (ctx->pc == 0x2556C0u) {
        ctx->pc = 0x2556C4u;
        goto label_2556c4;
    }
    ctx->pc = 0x2556BCu;
    {
        const bool branch_taken_0x2556bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2556bc) {
            ctx->pc = 0x2556D0u;
            goto label_2556d0;
        }
    }
    ctx->pc = 0x2556C4u;
label_2556c4:
    // 0x2556c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2556c8:
    if (ctx->pc == 0x2556C8u) {
        ctx->pc = 0x2556CCu;
        goto label_2556cc;
    }
    ctx->pc = 0x2556C4u;
    {
        const bool branch_taken_0x2556c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2556c4) {
            ctx->pc = 0x2556E8u;
            goto label_2556e8;
        }
    }
    ctx->pc = 0x2556CCu;
label_2556cc:
    // 0x2556cc: 0x0  nop
    ctx->pc = 0x2556ccu;
    // NOP
label_2556d0:
    // 0x2556d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2556d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2556d4:
    // 0x2556d4: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2556d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2556d8:
    // 0x2556d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2556dc:
    if (ctx->pc == 0x2556DCu) {
        ctx->pc = 0x2556DCu;
            // 0x2556dc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x2556E0u;
        goto label_2556e0;
    }
    ctx->pc = 0x2556D8u;
    {
        const bool branch_taken_0x2556d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2556DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2556D8u;
            // 0x2556dc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556d8) {
            ctx->pc = 0x2556B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2556b8;
        }
    }
    ctx->pc = 0x2556E0u;
label_2556e0:
    // 0x2556e0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2556e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2556e4:
    // 0x2556e4: 0x0  nop
    ctx->pc = 0x2556e4u;
    // NOP
label_2556e8:
    // 0x2556e8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2556e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2556ec:
    // 0x2556ec: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2556ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2556f0:
    // 0x2556f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2556f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2556f4:
    // 0x2556f4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2556f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_2556f8:
    // 0x2556f8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2556f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2556fc:
    // 0x2556fc: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2556fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_255700:
    // 0x255700: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x255700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_255704:
    // 0x255704: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x255704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_255708:
    // 0x255708: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x255708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25570c:
    // 0x25570c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25570cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_255710:
    // 0x255710: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x255710u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_255714:
    // 0x255714: 0x0  nop
    ctx->pc = 0x255714u;
    // NOP
label_255718:
    // 0x255718: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x255718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_25571c:
    // 0x25571c: 0x118842  srl         $s1, $s1, 1
    ctx->pc = 0x25571cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_255720:
    // 0x255720: 0x1620ffad  bnez        $s1, . + 4 + (-0x53 << 2)
label_255724:
    if (ctx->pc == 0x255724u) {
        ctx->pc = 0x255728u;
        goto label_255728;
    }
    ctx->pc = 0x255720u;
    {
        const bool branch_taken_0x255720 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x255720) {
            ctx->pc = 0x2555D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2555d8;
        }
    }
    ctx->pc = 0x255728u;
label_255728:
    // 0x255728: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x255728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_25572c:
    // 0x25572c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x25572cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_255730:
    // 0x255730: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x255730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_255734:
    // 0x255734: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
label_255738:
    if (ctx->pc == 0x255738u) {
        ctx->pc = 0x255738u;
            // 0x255738: 0x26f70200  addiu       $s7, $s7, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 512));
        ctx->pc = 0x25573Cu;
        goto label_25573c;
    }
    ctx->pc = 0x255734u;
    {
        const bool branch_taken_0x255734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255734u;
            // 0x255738: 0x26f70200  addiu       $s7, $s7, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255734) {
            ctx->pc = 0x2555C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2555c8;
        }
    }
    ctx->pc = 0x25573Cu;
label_25573c:
    // 0x25573c: 0x0  nop
    ctx->pc = 0x25573cu;
    // NOP
label_255740:
    // 0x255740: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x255740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_255744:
    // 0x255744: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x255744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_255748:
    // 0x255748: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x255748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25574c:
    // 0x25574c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x25574cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_255750:
    // 0x255750: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x255750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_255754:
    // 0x255754: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_255758:
    if (ctx->pc == 0x255758u) {
        ctx->pc = 0x25575Cu;
        goto label_25575c;
    }
    ctx->pc = 0x255754u;
    {
        const bool branch_taken_0x255754 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x255754) {
            ctx->pc = 0x255770u;
            goto label_255770;
        }
    }
    ctx->pc = 0x25575Cu;
label_25575c:
    // 0x25575c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25575cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_255760:
    // 0x255760: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x255760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_255764:
    // 0x255764: 0x320f809  jalr        $t9
label_255768:
    if (ctx->pc == 0x255768u) {
        ctx->pc = 0x25576Cu;
        goto label_25576c;
    }
    ctx->pc = 0x255764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25576Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25576Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25576Cu; }
            if (ctx->pc != 0x25576Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25576Cu;
label_25576c:
    // 0x25576c: 0x0  nop
    ctx->pc = 0x25576cu;
    // NOP
label_255770:
    // 0x255770: 0x96850008  lhu         $a1, 0x8($s4)
    ctx->pc = 0x255770u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_255774:
    // 0x255774: 0x9686000a  lhu         $a2, 0xA($s4)
    ctx->pc = 0x255774u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_255778:
    // 0x255778: 0x8ed00070  lw          $s0, 0x70($s6)
    ctx->pc = 0x255778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_25577c:
    // 0x25577c: 0xc0950f4  jal         func_2543D0
label_255780:
    if (ctx->pc == 0x255780u) {
        ctx->pc = 0x255780u;
            // 0x255780: 0x26c4007c  addiu       $a0, $s6, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 124));
        ctx->pc = 0x255784u;
        goto label_255784;
    }
    ctx->pc = 0x25577Cu;
    SET_GPR_U32(ctx, 31, 0x255784u);
    ctx->pc = 0x255780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25577Cu;
            // 0x255780: 0x26c4007c  addiu       $a0, $s6, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2543D0u;
    if (runtime->hasFunction(0x2543D0u)) {
        auto targetFn = runtime->lookupFunction(0x2543D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255784u; }
        if (ctx->pc != 0x255784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002543D0_0x2543d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255784u; }
        if (ctx->pc != 0x255784u) { return; }
    }
    ctx->pc = 0x255784u;
label_255784:
    // 0x255784: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x255784u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_255788:
    // 0x255788: 0x96860004  lhu         $a2, 0x4($s4)
    ctx->pc = 0x255788u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_25578c:
    // 0x25578c: 0xc0950f4  jal         func_2543D0
label_255790:
    if (ctx->pc == 0x255790u) {
        ctx->pc = 0x255790u;
            // 0x255790: 0x26c40088  addiu       $a0, $s6, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 136));
        ctx->pc = 0x255794u;
        goto label_255794;
    }
    ctx->pc = 0x25578Cu;
    SET_GPR_U32(ctx, 31, 0x255794u);
    ctx->pc = 0x255790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25578Cu;
            // 0x255790: 0x26c40088  addiu       $a0, $s6, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2543D0u;
    if (runtime->hasFunction(0x2543D0u)) {
        auto targetFn = runtime->lookupFunction(0x2543D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255794u; }
        if (ctx->pc != 0x255794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002543D0_0x2543d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255794u; }
        if (ctx->pc != 0x255794u) { return; }
    }
    ctx->pc = 0x255794u;
label_255794:
    // 0x255794: 0x96850002  lhu         $a1, 0x2($s4)
    ctx->pc = 0x255794u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_255798:
    // 0x255798: 0x96860006  lhu         $a2, 0x6($s4)
    ctx->pc = 0x255798u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_25579c:
    // 0x25579c: 0xc0950f4  jal         func_2543D0
label_2557a0:
    if (ctx->pc == 0x2557A0u) {
        ctx->pc = 0x2557A0u;
            // 0x2557a0: 0x26c40094  addiu       $a0, $s6, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 148));
        ctx->pc = 0x2557A4u;
        goto label_2557a4;
    }
    ctx->pc = 0x25579Cu;
    SET_GPR_U32(ctx, 31, 0x2557A4u);
    ctx->pc = 0x2557A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25579Cu;
            // 0x2557a0: 0x26c40094  addiu       $a0, $s6, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2543D0u;
    if (runtime->hasFunction(0x2543D0u)) {
        auto targetFn = runtime->lookupFunction(0x2543D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2557A4u; }
        if (ctx->pc != 0x2557A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002543D0_0x2543d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2557A4u; }
        if (ctx->pc != 0x2557A4u) { return; }
    }
    ctx->pc = 0x2557A4u;
label_2557a4:
    // 0x2557a4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2557a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2557a8:
    // 0x2557a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2557a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2557ac:
    // 0x2557ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2557acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2557b0:
    // 0x2557b0: 0xc0951a0  jal         func_254680
label_2557b4:
    if (ctx->pc == 0x2557B4u) {
        ctx->pc = 0x2557B4u;
            // 0x2557b4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2557B8u;
        goto label_2557b8;
    }
    ctx->pc = 0x2557B0u;
    SET_GPR_U32(ctx, 31, 0x2557B8u);
    ctx->pc = 0x2557B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2557B0u;
            // 0x2557b4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254680u;
    if (runtime->hasFunction(0x254680u)) {
        auto targetFn = runtime->lookupFunction(0x254680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2557B8u; }
        if (ctx->pc != 0x2557B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00254680_0x254680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2557B8u; }
        if (ctx->pc != 0x2557B8u) { return; }
    }
    ctx->pc = 0x2557B8u;
label_2557b8:
    // 0x2557b8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2557b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2557bc:
    // 0x2557bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2557bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2557c0:
    // 0x2557c0: 0x3c3082b  sltu        $at, $fp, $v1
    ctx->pc = 0x2557c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2557c4:
    // 0x2557c4: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
label_2557c8:
    if (ctx->pc == 0x2557C8u) {
        ctx->pc = 0x2557CCu;
        goto label_2557cc;
    }
    ctx->pc = 0x2557C4u;
    {
        const bool branch_taken_0x2557c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2557c4) {
            ctx->pc = 0x2559D0u;
            goto label_2559d0;
        }
    }
    ctx->pc = 0x2557CCu;
label_2557cc:
    // 0x2557cc: 0x8ec40070  lw          $a0, 0x70($s6)
    ctx->pc = 0x2557ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_2557d0:
    // 0x2557d0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2557d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2557d4:
    // 0x2557d4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2557d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2557d8:
    // 0x2557d8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x2557d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2557dc:
    // 0x2557dc: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x2557dcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_2557e0:
    // 0x2557e0: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x2557e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_2557e4:
    // 0x2557e4: 0xa6840002  sh          $a0, 0x2($s4)
    ctx->pc = 0x2557e4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 4));
label_2557e8:
    // 0x2557e8: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x2557e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_2557ec:
    // 0x2557ec: 0xa6840004  sh          $a0, 0x4($s4)
    ctx->pc = 0x2557ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 4));
label_2557f0:
    // 0x2557f0: 0x94a40006  lhu         $a0, 0x6($a1)
    ctx->pc = 0x2557f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_2557f4:
    // 0x2557f4: 0xa6840006  sh          $a0, 0x6($s4)
    ctx->pc = 0x2557f4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 4));
label_2557f8:
    // 0x2557f8: 0x94a40008  lhu         $a0, 0x8($a1)
    ctx->pc = 0x2557f8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_2557fc:
    // 0x2557fc: 0xa6840008  sh          $a0, 0x8($s4)
    ctx->pc = 0x2557fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 4));
label_255800:
    // 0x255800: 0x94a4000a  lhu         $a0, 0xA($a1)
    ctx->pc = 0x255800u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_255804:
    // 0x255804: 0xa684000a  sh          $a0, 0xA($s4)
    ctx->pc = 0x255804u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 4));
label_255808:
    // 0x255808: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x255808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_25580c:
    // 0x25580c: 0xae84000c  sw          $a0, 0xC($s4)
    ctx->pc = 0x25580cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
label_255810:
    // 0x255810: 0x96850008  lhu         $a1, 0x8($s4)
    ctx->pc = 0x255810u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_255814:
    // 0x255814: 0x8ec4007c  lw          $a0, 0x7C($s6)
    ctx->pc = 0x255814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
label_255818:
    // 0x255818: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x255818u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25581c:
    // 0x25581c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x25581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_255820:
    // 0x255820: 0xa49e0002  sh          $fp, 0x2($a0)
    ctx->pc = 0x255820u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 30));
label_255824:
    // 0x255824: 0x9685000a  lhu         $a1, 0xA($s4)
    ctx->pc = 0x255824u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_255828:
    // 0x255828: 0x8ec4007c  lw          $a0, 0x7C($s6)
    ctx->pc = 0x255828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
label_25582c:
    // 0x25582c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x25582cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_255830:
    // 0x255830: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x255830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_255834:
    // 0x255834: 0xa49e0002  sh          $fp, 0x2($a0)
    ctx->pc = 0x255834u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 30));
label_255838:
    // 0x255838: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x255838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_25583c:
    // 0x25583c: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x25583cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_255840:
    // 0x255840: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
label_255844:
    if (ctx->pc == 0x255844u) {
        ctx->pc = 0x255844u;
            // 0x255844: 0x33c3ffff  andi        $v1, $fp, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x255848u;
        goto label_255848;
    }
    ctx->pc = 0x255840u;
    {
        const bool branch_taken_0x255840 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x255844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255840u;
            // 0x255844: 0x33c3ffff  andi        $v1, $fp, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255840) {
            ctx->pc = 0x2558A8u;
            goto label_2558a8;
        }
    }
    ctx->pc = 0x255848u;
label_255848:
    // 0x255848: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x255848u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_25584c:
    // 0x25584c: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x25584cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_255850:
    // 0x255850: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x255850u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_255854:
    // 0x255854: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x255854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_255858:
    // 0x255858: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x255858u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_25585c:
    // 0x25585c: 0x96850004  lhu         $a1, 0x4($s4)
    ctx->pc = 0x25585cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_255860:
    // 0x255860: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x255860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_255864:
    // 0x255864: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x255864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_255868:
    // 0x255868: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x255868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_25586c:
    // 0x25586c: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x25586cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_255870:
    // 0x255870: 0x96850002  lhu         $a1, 0x2($s4)
    ctx->pc = 0x255870u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_255874:
    // 0x255874: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x255874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
label_255878:
    // 0x255878: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x255878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25587c:
    // 0x25587c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x25587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_255880:
    // 0x255880: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x255880u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_255884:
    // 0x255884: 0x96850006  lhu         $a1, 0x6($s4)
    ctx->pc = 0x255884u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_255888:
    // 0x255888: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x255888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
label_25588c:
    // 0x25588c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x25588cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_255890:
    // 0x255890: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x255890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_255894:
    // 0x255894: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x255894u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_255898:
    // 0x255898: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x255898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_25589c:
    // 0x25589c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2558a0:
    if (ctx->pc == 0x2558A0u) {
        ctx->pc = 0x2558A0u;
            // 0x2558a0: 0xac7e0000  sw          $fp, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 30));
        ctx->pc = 0x2558A4u;
        goto label_2558a4;
    }
    ctx->pc = 0x25589Cu;
    {
        const bool branch_taken_0x25589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25589Cu;
            // 0x2558a0: 0xac7e0000  sw          $fp, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25589c) {
            ctx->pc = 0x2558C0u;
            goto label_2558c0;
        }
    }
    ctx->pc = 0x2558A4u;
label_2558a4:
    // 0x2558a4: 0x0  nop
    ctx->pc = 0x2558a4u;
    // NOP
label_2558a8:
    // 0x2558a8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2558a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2558ac:
    // 0x2558ac: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2558acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_2558b0:
    // 0x2558b0: 0x8ec400a8  lw          $a0, 0xA8($s6)
    ctx->pc = 0x2558b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_2558b4:
    // 0x2558b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2558b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2558b8:
    // 0x2558b8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2558b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_2558bc:
    // 0x2558bc: 0x0  nop
    ctx->pc = 0x2558bcu;
    // NOP
label_2558c0:
    // 0x2558c0: 0x8ec300a0  lw          $v1, 0xA0($s6)
    ctx->pc = 0x2558c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 160)));
label_2558c4:
    // 0x2558c4: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_2558c8:
    if (ctx->pc == 0x2558C8u) {
        ctx->pc = 0x2558CCu;
        goto label_2558cc;
    }
    ctx->pc = 0x2558C4u;
    {
        const bool branch_taken_0x2558c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2558c4) {
            ctx->pc = 0x2559D0u;
            goto label_2559d0;
        }
    }
    ctx->pc = 0x2558CCu;
label_2558cc:
    // 0x2558cc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x2558ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2558d0:
    // 0x2558d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2558d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2558d4:
    // 0x2558d4: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_2558d8:
    if (ctx->pc == 0x2558D8u) {
        ctx->pc = 0x2558DCu;
        goto label_2558dc;
    }
    ctx->pc = 0x2558D4u;
    {
        const bool branch_taken_0x2558d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2558d4) {
            ctx->pc = 0x2559D0u;
            goto label_2559d0;
        }
    }
    ctx->pc = 0x2558DCu;
label_2558dc:
    // 0x2558dc: 0x96870008  lhu         $a3, 0x8($s4)
    ctx->pc = 0x2558dcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_2558e0:
    // 0x2558e0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2558e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2558e4:
    // 0x2558e4: 0x8ec9007c  lw          $t1, 0x7C($s6)
    ctx->pc = 0x2558e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
label_2558e8:
    // 0x2558e8: 0x8ec500a4  lw          $a1, 0xA4($s6)
    ctx->pc = 0x2558e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 164)));
label_2558ec:
    // 0x2558ec: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2558ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2558f0:
    // 0x2558f0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2558f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_2558f4:
    // 0x2558f4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2558f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2558f8:
    // 0x2558f8: 0x854023  subu        $t0, $a0, $a1
    ctx->pc = 0x2558f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2558fc:
    // 0x2558fc: 0x1031807  srav        $v1, $v1, $t0
    ctx->pc = 0x2558fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
label_255900:
    // 0x255900: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_255904:
    if (ctx->pc == 0x255904u) {
        ctx->pc = 0x255908u;
        goto label_255908;
    }
    ctx->pc = 0x255900u;
    {
        const bool branch_taken_0x255900 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x255900) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x255908u;
label_255908:
    // 0x255908: 0x8ec600a8  lw          $a2, 0xA8($s6)
    ctx->pc = 0x255908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_25590c:
    // 0x25590c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x25590cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_255910:
    // 0x255910: 0x8ec40070  lw          $a0, 0x70($s6)
    ctx->pc = 0x255910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_255914:
    // 0x255914: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x255914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_255918:
    // 0x255918: 0x94a5fff0  lhu         $a1, -0x10($a1)
    ctx->pc = 0x255918u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_25591c:
    // 0x25591c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x25591cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_255920:
    // 0x255920: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x255920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_255924:
    // 0x255924: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x255924u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_255928:
    // 0x255928: 0xe4082a  slt         $at, $a3, $a0
    ctx->pc = 0x255928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_25592c:
    // 0x25592c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_255930:
    if (ctx->pc == 0x255930u) {
        ctx->pc = 0x255934u;
        goto label_255934;
    }
    ctx->pc = 0x25592Cu;
    {
        const bool branch_taken_0x25592c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25592c) {
            ctx->pc = 0x255938u;
            goto label_255938;
        }
    }
    ctx->pc = 0x255934u;
label_255934:
    // 0x255934: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x255934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_255938:
    // 0x255938: 0x9684000a  lhu         $a0, 0xA($s4)
    ctx->pc = 0x255938u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_25593c:
    // 0x25593c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25593cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_255940:
    // 0x255940: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x255940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_255944:
    // 0x255944: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x255944u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_255948:
    // 0x255948: 0x1042007  srav        $a0, $a0, $t0
    ctx->pc = 0x255948u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
label_25594c:
    // 0x25594c: 0x10000030  b           . + 4 + (0x30 << 2)
label_255950:
    if (ctx->pc == 0x255950u) {
        ctx->pc = 0x255950u;
            // 0x255950: 0x248bffff  addiu       $t3, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->pc = 0x255954u;
        goto label_255954;
    }
    ctx->pc = 0x25594Cu;
    {
        const bool branch_taken_0x25594c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25594Cu;
            // 0x255950: 0x248bffff  addiu       $t3, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25594c) {
            ctx->pc = 0x255A10u;
            goto label_255a10;
        }
    }
    ctx->pc = 0x255954u;
label_255954:
    // 0x255954: 0x0  nop
    ctx->pc = 0x255954u;
    // NOP
label_255958:
    // 0x255958: 0x8ec400a8  lw          $a0, 0xA8($s6)
    ctx->pc = 0x255958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_25595c:
    // 0x25595c: 0x885021  addu        $t2, $a0, $t0
    ctx->pc = 0x25595cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_255960:
    // 0x255960: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x255960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_255964:
    // 0x255964: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x255964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_255968:
    // 0x255968: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_25596c:
    if (ctx->pc == 0x25596Cu) {
        ctx->pc = 0x25596Cu;
            // 0x25596c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255970u;
        goto label_255970;
    }
    ctx->pc = 0x255968u;
    {
        const bool branch_taken_0x255968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25596Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255968u;
            // 0x25596c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255968) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x255970u;
label_255970:
    // 0x255970: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x255970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_255974:
    // 0x255974: 0x0  nop
    ctx->pc = 0x255974u;
    // NOP
label_255978:
    // 0x255978: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x255978u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_25597c:
    // 0x25597c: 0x14e40004  bne         $a3, $a0, . + 4 + (0x4 << 2)
label_255980:
    if (ctx->pc == 0x255980u) {
        ctx->pc = 0x255984u;
        goto label_255984;
    }
    ctx->pc = 0x25597Cu;
    {
        const bool branch_taken_0x25597c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x25597c) {
            ctx->pc = 0x255990u;
            goto label_255990;
        }
    }
    ctx->pc = 0x255984u;
label_255984:
    // 0x255984: 0x10000008  b           . + 4 + (0x8 << 2)
label_255988:
    if (ctx->pc == 0x255988u) {
        ctx->pc = 0x25598Cu;
        goto label_25598c;
    }
    ctx->pc = 0x255984u;
    {
        const bool branch_taken_0x255984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255984) {
            ctx->pc = 0x2559A8u;
            goto label_2559a8;
        }
    }
    ctx->pc = 0x25598Cu;
label_25598c:
    // 0x25598c: 0x0  nop
    ctx->pc = 0x25598cu;
    // NOP
label_255990:
    // 0x255990: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x255990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_255994:
    // 0x255994: 0x125202a  slt         $a0, $t1, $a1
    ctx->pc = 0x255994u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_255998:
    // 0x255998: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_25599c:
    if (ctx->pc == 0x25599Cu) {
        ctx->pc = 0x25599Cu;
            // 0x25599c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x2559A0u;
        goto label_2559a0;
    }
    ctx->pc = 0x255998u;
    {
        const bool branch_taken_0x255998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255998u;
            // 0x25599c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255998) {
            ctx->pc = 0x255978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255978;
        }
    }
    ctx->pc = 0x2559A0u;
label_2559a0:
    // 0x2559a0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2559a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2559a4:
    // 0x2559a4: 0x0  nop
    ctx->pc = 0x2559a4u;
    // NOP
label_2559a8:
    // 0x2559a8: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x2559a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_2559ac:
    // 0x2559ac: 0x92840  sll         $a1, $t1, 1
    ctx->pc = 0x2559acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_2559b0:
    // 0x2559b0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2559b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_2559b4:
    // 0x2559b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2559b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2559b8:
    // 0x2559b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2559b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2559bc:
    // 0x2559bc: 0xa49e0000  sh          $fp, 0x0($a0)
    ctx->pc = 0x2559bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 30));
label_2559c0:
    // 0x2559c0: 0x163082a  slt         $at, $t3, $v1
    ctx->pc = 0x2559c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2559c4:
    // 0x2559c4: 0x1020ffe4  beqz        $at, . + 4 + (-0x1C << 2)
label_2559c8:
    if (ctx->pc == 0x2559C8u) {
        ctx->pc = 0x2559CCu;
        goto label_2559cc;
    }
    ctx->pc = 0x2559C4u;
    {
        const bool branch_taken_0x2559c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2559c4) {
            ctx->pc = 0x255958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255958;
        }
    }
    ctx->pc = 0x2559CCu;
label_2559cc:
    // 0x2559cc: 0x0  nop
    ctx->pc = 0x2559ccu;
    // NOP
label_2559d0:
    // 0x2559d0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2559d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2559d4:
    // 0x2559d4: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x2559d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2559d8:
    // 0x2559d8: 0x8ec30078  lw          $v1, 0x78($s6)
    ctx->pc = 0x2559d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
label_2559dc:
    // 0x2559dc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2559dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_2559e0:
    // 0x2559e0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2559e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_2559e4:
    // 0x2559e4: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x2559e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2559e8:
    // 0x2559e8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_2559ec:
    if (ctx->pc == 0x2559ECu) {
        ctx->pc = 0x2559F0u;
        goto label_2559f0;
    }
    ctx->pc = 0x2559E8u;
    {
        const bool branch_taken_0x2559e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2559e8) {
            ctx->pc = 0x255A08u;
            goto label_255a08;
        }
    }
    ctx->pc = 0x2559F0u;
label_2559f0:
    // 0x2559f0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2559f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2559f4:
    // 0x2559f4: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x2559f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2559f8:
    // 0x2559f8: 0x201280a  movz        $a1, $s0, $at
    ctx->pc = 0x2559f8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_2559fc:
    // 0x2559fc: 0x26c40070  addiu       $a0, $s6, 0x70
    ctx->pc = 0x2559fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
label_255a00:
    // 0x255a00: 0xc0a725c  jal         func_29C970
label_255a04:
    if (ctx->pc == 0x255A04u) {
        ctx->pc = 0x255A04u;
            // 0x255a04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x255A08u;
        goto label_255a08;
    }
    ctx->pc = 0x255A00u;
    SET_GPR_U32(ctx, 31, 0x255A08u);
    ctx->pc = 0x255A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255A00u;
            // 0x255a04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A08u; }
        if (ctx->pc != 0x255A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255A08u; }
        if (ctx->pc != 0x255A08u) { return; }
    }
    ctx->pc = 0x255A08u;
label_255a08:
    // 0x255a08: 0x10000009  b           . + 4 + (0x9 << 2)
label_255a0c:
    if (ctx->pc == 0x255A0Cu) {
        ctx->pc = 0x255A0Cu;
            // 0x255a0c: 0xaed00074  sw          $s0, 0x74($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 116), GPR_U32(ctx, 16));
        ctx->pc = 0x255A10u;
        goto label_255a10;
    }
    ctx->pc = 0x255A08u;
    {
        const bool branch_taken_0x255a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255A08u;
            // 0x255a0c: 0xaed00074  sw          $s0, 0x74($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a08) {
            ctx->pc = 0x255A30u;
            goto label_255a30;
        }
    }
    ctx->pc = 0x255A10u;
label_255a10:
    // 0x255a10: 0x163082a  slt         $at, $t3, $v1
    ctx->pc = 0x255a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_255a14:
    // 0x255a14: 0x1420ffee  bnez        $at, . + 4 + (-0x12 << 2)
label_255a18:
    if (ctx->pc == 0x255A18u) {
        ctx->pc = 0x255A1Cu;
        goto label_255a1c;
    }
    ctx->pc = 0x255A14u;
    {
        const bool branch_taken_0x255a14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x255a14) {
            ctx->pc = 0x2559D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2559d0;
        }
    }
    ctx->pc = 0x255A1Cu;
label_255a1c:
    // 0x255a1c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x255a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_255a20:
    // 0x255a20: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x255a20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_255a24:
    // 0x255a24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x255a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_255a28:
    // 0x255a28: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_255a2c:
    if (ctx->pc == 0x255A2Cu) {
        ctx->pc = 0x255A2Cu;
            // 0x255a2c: 0x3087ffff  andi        $a3, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x255A30u;
        goto label_255a30;
    }
    ctx->pc = 0x255A28u;
    {
        const bool branch_taken_0x255a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255A28u;
            // 0x255a2c: 0x3087ffff  andi        $a3, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a28) {
            ctx->pc = 0x2559C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2559c0;
        }
    }
    ctx->pc = 0x255A30u;
label_255a30:
    // 0x255a30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x255a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_255a34:
    // 0x255a34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x255a34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_255a38:
    // 0x255a38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x255a38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_255a3c:
    // 0x255a3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x255a3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_255a40:
    // 0x255a40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x255a40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_255a44:
    // 0x255a44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x255a44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_255a48:
    // 0x255a48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x255a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_255a4c:
    // 0x255a4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_255a50:
    // 0x255a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_255a54:
    // 0x255a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_255a58:
    // 0x255a58: 0x3e00008  jr          $ra
label_255a5c:
    if (ctx->pc == 0x255A5Cu) {
        ctx->pc = 0x255A5Cu;
            // 0x255a5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x255A60u;
        goto label_255a60;
    }
    ctx->pc = 0x255A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255A58u;
            // 0x255a5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255A60u;
label_255a60:
    // 0x255a60: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x255a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_255a64:
    // 0x255a64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x255a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_255a68:
    // 0x255a68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x255a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_255a6c:
    // 0x255a6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x255a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_255a70:
    // 0x255a70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x255a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_255a74:
    // 0x255a74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x255a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_255a78:
    // 0x255a78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x255a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_255a7c:
    // 0x255a7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x255a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_255a80:
    // 0x255a80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x255a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_255a84:
    // 0x255a84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x255a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_255a88:
    // 0x255a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_255a8c:
    // 0x255a8c: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x255a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
label_255a90:
    // 0x255a90: 0xafa700d4  sw          $a3, 0xD4($sp)
    ctx->pc = 0x255a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 7));
label_255a94:
    // 0x255a94: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x255a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
label_255a98:
    // 0x255a98: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x255a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_255a9c:
    // 0x255a9c: 0x18600304  blez        $v1, . + 4 + (0x304 << 2)
label_255aa0:
    if (ctx->pc == 0x255AA0u) {
        ctx->pc = 0x255AA0u;
            // 0x255aa0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x255AA4u;
        goto label_255aa4;
    }
    ctx->pc = 0x255A9Cu;
    {
        const bool branch_taken_0x255a9c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x255AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255A9Cu;
            // 0x255aa0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a9c) {
            ctx->pc = 0x2566B0u;
            goto label_2566b0;
        }
    }
    ctx->pc = 0x255AA4u;
label_255aa4:
    // 0x255aa4: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x255aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_255aa8:
    // 0x255aa8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x255aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_255aac:
    // 0x255aac: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x255aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_255ab0:
    // 0x255ab0: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x255ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_255ab4:
    // 0x255ab4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x255ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_255ab8:
    // 0x255ab8: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x255ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_255abc:
    // 0x255abc: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x255abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_255ac0:
    // 0x255ac0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x255ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_255ac4:
    // 0x255ac4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x255ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_255ac8:
    // 0x255ac8: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x255ac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_255acc:
    // 0x255acc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_255ad0:
    if (ctx->pc == 0x255AD0u) {
        ctx->pc = 0x255AD4u;
        goto label_255ad4;
    }
    ctx->pc = 0x255ACCu;
    {
        const bool branch_taken_0x255acc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x255acc) {
            ctx->pc = 0x255AF0u;
            goto label_255af0;
        }
    }
    ctx->pc = 0x255AD4u;
label_255ad4:
    // 0x255ad4: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x255ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_255ad8:
    // 0x255ad8: 0x245082a  slt         $at, $s2, $a1
    ctx->pc = 0x255ad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_255adc:
    // 0x255adc: 0x241280a  movz        $a1, $s2, $at
    ctx->pc = 0x255adcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
label_255ae0:
    // 0x255ae0: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x255ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_255ae4:
    // 0x255ae4: 0xc0a725c  jal         func_29C970
label_255ae8:
    if (ctx->pc == 0x255AE8u) {
        ctx->pc = 0x255AE8u;
            // 0x255ae8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x255AECu;
        goto label_255aec;
    }
    ctx->pc = 0x255AE4u;
    SET_GPR_U32(ctx, 31, 0x255AECu);
    ctx->pc = 0x255AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255AE4u;
            // 0x255ae8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255AECu; }
        if (ctx->pc != 0x255AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255AECu; }
        if (ctx->pc != 0x255AECu) { return; }
    }
    ctx->pc = 0x255AECu;
label_255aec:
    // 0x255aec: 0x0  nop
    ctx->pc = 0x255aecu;
    // NOP
label_255af0:
    // 0x255af0: 0xae320074  sw          $s2, 0x74($s1)
    ctx->pc = 0x255af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 18));
label_255af4:
    // 0x255af4: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x255af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_255af8:
    // 0x255af8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x255af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_255afc:
    // 0x255afc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x255afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_255b00:
    // 0x255b00: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x255b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_255b04:
    // 0x255b04: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x255b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_255b08:
    // 0x255b08: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x255b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_255b0c:
    // 0x255b0c: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x255b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_255b10:
    // 0x255b10: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x255b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_255b14:
    // 0x255b14: 0x8e320080  lw          $s2, 0x80($s1)
    ctx->pc = 0x255b14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_255b18:
    // 0x255b18: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x255b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_255b1c:
    // 0x255b1c: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x255b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_255b20:
    // 0x255b20: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x255b20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_255b24:
    // 0x255b24: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x255b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_255b28:
    // 0x255b28: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x255b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_255b2c:
    // 0x255b2c: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x255b2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_255b30:
    // 0x255b30: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_255b34:
    if (ctx->pc == 0x255B34u) {
        ctx->pc = 0x255B38u;
        goto label_255b38;
    }
    ctx->pc = 0x255B30u;
    {
        const bool branch_taken_0x255b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x255b30) {
            ctx->pc = 0x255B50u;
            goto label_255b50;
        }
    }
    ctx->pc = 0x255B38u;
label_255b38:
    // 0x255b38: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x255b38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_255b3c:
    // 0x255b3c: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x255b3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_255b40:
    // 0x255b40: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x255b40u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
label_255b44:
    // 0x255b44: 0x2624007c  addiu       $a0, $s1, 0x7C
    ctx->pc = 0x255b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_255b48:
    // 0x255b48: 0xc0a725c  jal         func_29C970
label_255b4c:
    if (ctx->pc == 0x255B4Cu) {
        ctx->pc = 0x255B4Cu;
            // 0x255b4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x255B50u;
        goto label_255b50;
    }
    ctx->pc = 0x255B48u;
    SET_GPR_U32(ctx, 31, 0x255B50u);
    ctx->pc = 0x255B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255B48u;
            // 0x255b4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255B50u; }
        if (ctx->pc != 0x255B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255B50u; }
        if (ctx->pc != 0x255B50u) { return; }
    }
    ctx->pc = 0x255B50u;
label_255b50:
    // 0x255b50: 0xae330080  sw          $s3, 0x80($s1)
    ctx->pc = 0x255b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 19));
label_255b54:
    // 0x255b54: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x255b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_255b58:
    // 0x255b58: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x255b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_255b5c:
    // 0x255b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_255b60:
    // 0x255b60: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x255b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_255b64:
    // 0x255b64: 0x8e32008c  lw          $s2, 0x8C($s1)
    ctx->pc = 0x255b64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_255b68:
    // 0x255b68: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x255b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_255b6c:
    // 0x255b6c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x255b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_255b70:
    // 0x255b70: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x255b70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_255b74:
    // 0x255b74: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x255b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_255b78:
    // 0x255b78: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x255b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_255b7c:
    // 0x255b7c: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x255b7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_255b80:
    // 0x255b80: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_255b84:
    if (ctx->pc == 0x255B84u) {
        ctx->pc = 0x255B88u;
        goto label_255b88;
    }
    ctx->pc = 0x255B80u;
    {
        const bool branch_taken_0x255b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x255b80) {
            ctx->pc = 0x255BA0u;
            goto label_255ba0;
        }
    }
    ctx->pc = 0x255B88u;
label_255b88:
    // 0x255b88: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x255b88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_255b8c:
    // 0x255b8c: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x255b8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_255b90:
    // 0x255b90: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x255b90u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
label_255b94:
    // 0x255b94: 0x26240088  addiu       $a0, $s1, 0x88
    ctx->pc = 0x255b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_255b98:
    // 0x255b98: 0xc0a725c  jal         func_29C970
label_255b9c:
    if (ctx->pc == 0x255B9Cu) {
        ctx->pc = 0x255B9Cu;
            // 0x255b9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x255BA0u;
        goto label_255ba0;
    }
    ctx->pc = 0x255B98u;
    SET_GPR_U32(ctx, 31, 0x255BA0u);
    ctx->pc = 0x255B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255B98u;
            // 0x255b9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255BA0u; }
        if (ctx->pc != 0x255BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255BA0u; }
        if (ctx->pc != 0x255BA0u) { return; }
    }
    ctx->pc = 0x255BA0u;
label_255ba0:
    // 0x255ba0: 0xae33008c  sw          $s3, 0x8C($s1)
    ctx->pc = 0x255ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 19));
label_255ba4:
    // 0x255ba4: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x255ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_255ba8:
    // 0x255ba8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x255ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_255bac:
    // 0x255bac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x255bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_255bb0:
    // 0x255bb0: 0x27a20144  addiu       $v0, $sp, 0x144
    ctx->pc = 0x255bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_255bb4:
    // 0x255bb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x255bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_255bb8:
    // 0x255bb8: 0x8e320098  lw          $s2, 0x98($s1)
    ctx->pc = 0x255bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_255bbc:
    // 0x255bbc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x255bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_255bc0:
    // 0x255bc0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x255bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_255bc4:
    // 0x255bc4: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x255bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_255bc8:
    // 0x255bc8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x255bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_255bcc:
    // 0x255bcc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x255bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_255bd0:
    // 0x255bd0: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x255bd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_255bd4:
    // 0x255bd4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_255bd8:
    if (ctx->pc == 0x255BD8u) {
        ctx->pc = 0x255BDCu;
        goto label_255bdc;
    }
    ctx->pc = 0x255BD4u;
    {
        const bool branch_taken_0x255bd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x255bd4) {
            ctx->pc = 0x255BF8u;
            goto label_255bf8;
        }
    }
    ctx->pc = 0x255BDCu;
label_255bdc:
    // 0x255bdc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x255bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_255be0:
    // 0x255be0: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x255be0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_255be4:
    // 0x255be4: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x255be4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
label_255be8:
    // 0x255be8: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x255be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_255bec:
    // 0x255bec: 0xc0a725c  jal         func_29C970
label_255bf0:
    if (ctx->pc == 0x255BF0u) {
        ctx->pc = 0x255BF0u;
            // 0x255bf0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x255BF4u;
        goto label_255bf4;
    }
    ctx->pc = 0x255BECu;
    SET_GPR_U32(ctx, 31, 0x255BF4u);
    ctx->pc = 0x255BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255BECu;
            // 0x255bf0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255BF4u; }
        if (ctx->pc != 0x255BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255BF4u; }
        if (ctx->pc != 0x255BF4u) { return; }
    }
    ctx->pc = 0x255BF4u;
label_255bf4:
    // 0x255bf4: 0x0  nop
    ctx->pc = 0x255bf4u;
    // NOP
label_255bf8:
    // 0x255bf8: 0xae330098  sw          $s3, 0x98($s1)
    ctx->pc = 0x255bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 19));
label_255bfc:
    // 0x255bfc: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x255bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_255c00:
    // 0x255c00: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x255c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_255c04:
    // 0x255c04: 0x27be0148  addiu       $fp, $sp, 0x148
    ctx->pc = 0x255c04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_255c08:
    // 0x255c08: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x255c08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255c0c:
    // 0x255c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_255c10:
    // 0x255c10: 0x10000289  b           . + 4 + (0x289 << 2)
label_255c14:
    if (ctx->pc == 0x255C14u) {
        ctx->pc = 0x255C14u;
            // 0x255c14: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x255C18u;
        goto label_255c18;
    }
    ctx->pc = 0x255C10u;
    {
        const bool branch_taken_0x255c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255C10u;
            // 0x255c14: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c10) {
            ctx->pc = 0x256638u;
            goto label_256638;
        }
    }
    ctx->pc = 0x255C18u;
label_255c18:
    // 0x255c18: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x255c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_255c1c:
    // 0x255c1c: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x255c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255c20:
    // 0x255c20: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x255c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_255c24:
    // 0x255c24: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x255c24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255c28:
    // 0x255c28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x255c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_255c2c:
    // 0x255c2c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_255c30:
    // 0x255c30: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x255c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255c34:
    // 0x255c34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255c38:
    // 0x255c38: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x255c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_255c3c:
    // 0x255c3c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x255c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255c40:
    // 0x255c40: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x255c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255c44:
    // 0x255c44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255c48:
    // 0x255c48: 0xe7200000  swc1        $f0, 0x0($t9)
    ctx->pc = 0x255c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
label_255c4c:
    // 0x255c4c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x255c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255c50:
    // 0x255c50: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x255c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255c54:
    // 0x255c54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255c58:
    // 0x255c58: 0xe7000000  swc1        $f0, 0x0($t8)
    ctx->pc = 0x255c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
label_255c5c:
    // 0x255c5c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x255c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255c60:
    // 0x255c60: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x255c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255c64:
    // 0x255c64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255c68:
    // 0x255c68: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x255c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_255c6c:
    // 0x255c6c: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x255c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255c70:
    // 0x255c70: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x255c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255c74:
    // 0x255c74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_255c78:
    // 0x255c78: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x255c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_255c7c:
    // 0x255c7c: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x255c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255c80:
    // 0x255c80: 0xc7200000  lwc1        $f0, 0x0($t9)
    ctx->pc = 0x255c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255c84:
    // 0x255c84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_255c88:
    // 0x255c88: 0xe7200000  swc1        $f0, 0x0($t9)
    ctx->pc = 0x255c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
label_255c8c:
    // 0x255c8c: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x255c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255c90:
    // 0x255c90: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x255c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255c94:
    // 0x255c94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_255c98:
    // 0x255c98: 0xe7000000  swc1        $f0, 0x0($t8)
    ctx->pc = 0x255c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
label_255c9c:
    // 0x255c9c: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x255c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255ca0:
    // 0x255ca0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x255ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255ca4:
    // 0x255ca4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_255ca8:
    // 0x255ca8: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x255ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_255cac:
    // 0x255cac: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x255cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255cb0:
    // 0x255cb0: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x255cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255cb4:
    // 0x255cb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x255cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255cb8:
    // 0x255cb8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_255cbc:
    if (ctx->pc == 0x255CBCu) {
        ctx->pc = 0x255CBCu;
            // 0x255cbc: 0xc7a20110  lwc1        $f2, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x255CC0u;
        goto label_255cc0;
    }
    ctx->pc = 0x255CB8u;
    {
        const bool branch_taken_0x255cb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255CB8u;
            // 0x255cbc: 0xc7a20110  lwc1        $f2, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255cb8) {
            ctx->pc = 0x255CC8u;
            goto label_255cc8;
        }
    }
    ctx->pc = 0x255CC0u;
label_255cc0:
    // 0x255cc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_255cc4:
    if (ctx->pc == 0x255CC4u) {
        ctx->pc = 0x255CC4u;
            // 0x255cc4: 0xe7a20110  swc1        $f2, 0x110($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->pc = 0x255CC8u;
        goto label_255cc8;
    }
    ctx->pc = 0x255CC0u;
    {
        const bool branch_taken_0x255cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255CC0u;
            // 0x255cc4: 0xe7a20110  swc1        $f2, 0x110($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255cc0) {
            ctx->pc = 0x255CD0u;
            goto label_255cd0;
        }
    }
    ctx->pc = 0x255CC8u;
label_255cc8:
    // 0x255cc8: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x255cc8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_255ccc:
    // 0x255ccc: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x255cccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_255cd0:
    // 0x255cd0: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x255cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255cd4:
    // 0x255cd4: 0xc7210000  lwc1        $f1, 0x0($t9)
    ctx->pc = 0x255cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255cd8:
    // 0x255cd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255cdc:
    // 0x255cdc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_255ce0:
    if (ctx->pc == 0x255CE0u) {
        ctx->pc = 0x255CE4u;
        goto label_255ce4;
    }
    ctx->pc = 0x255CDCu;
    {
        const bool branch_taken_0x255cdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255cdc) {
            ctx->pc = 0x255CECu;
            goto label_255cec;
        }
    }
    ctx->pc = 0x255CE4u;
label_255ce4:
    // 0x255ce4: 0x10000003  b           . + 4 + (0x3 << 2)
label_255ce8:
    if (ctx->pc == 0x255CE8u) {
        ctx->pc = 0x255CE8u;
            // 0x255ce8: 0xe7210000  swc1        $f1, 0x0($t9) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
        ctx->pc = 0x255CECu;
        goto label_255cec;
    }
    ctx->pc = 0x255CE4u;
    {
        const bool branch_taken_0x255ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255CE4u;
            // 0x255ce8: 0xe7210000  swc1        $f1, 0x0($t9) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ce4) {
            ctx->pc = 0x255CF4u;
            goto label_255cf4;
        }
    }
    ctx->pc = 0x255CECu;
label_255cec:
    // 0x255cec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255cecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255cf0:
    // 0x255cf0: 0xe7210000  swc1        $f1, 0x0($t9)
    ctx->pc = 0x255cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
label_255cf4:
    // 0x255cf4: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x255cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255cf8:
    // 0x255cf8: 0xc7010000  lwc1        $f1, 0x0($t8)
    ctx->pc = 0x255cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255cfc:
    // 0x255cfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255d00:
    // 0x255d00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_255d04:
    if (ctx->pc == 0x255D04u) {
        ctx->pc = 0x255D08u;
        goto label_255d08;
    }
    ctx->pc = 0x255D00u;
    {
        const bool branch_taken_0x255d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255d00) {
            ctx->pc = 0x255D10u;
            goto label_255d10;
        }
    }
    ctx->pc = 0x255D08u;
label_255d08:
    // 0x255d08: 0x10000003  b           . + 4 + (0x3 << 2)
label_255d0c:
    if (ctx->pc == 0x255D0Cu) {
        ctx->pc = 0x255D0Cu;
            // 0x255d0c: 0xe7010000  swc1        $f1, 0x0($t8) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
        ctx->pc = 0x255D10u;
        goto label_255d10;
    }
    ctx->pc = 0x255D08u;
    {
        const bool branch_taken_0x255d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255D08u;
            // 0x255d0c: 0xe7010000  swc1        $f1, 0x0($t8) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d08) {
            ctx->pc = 0x255D18u;
            goto label_255d18;
        }
    }
    ctx->pc = 0x255D10u;
label_255d10:
    // 0x255d10: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255d10u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255d14:
    // 0x255d14: 0xe7010000  swc1        $f1, 0x0($t8)
    ctx->pc = 0x255d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
label_255d18:
    // 0x255d18: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x255d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255d1c:
    // 0x255d1c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x255d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255d20:
    // 0x255d20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255d24:
    // 0x255d24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_255d28:
    if (ctx->pc == 0x255D28u) {
        ctx->pc = 0x255D2Cu;
        goto label_255d2c;
    }
    ctx->pc = 0x255D24u;
    {
        const bool branch_taken_0x255d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255d24) {
            ctx->pc = 0x255D34u;
            goto label_255d34;
        }
    }
    ctx->pc = 0x255D2Cu;
label_255d2c:
    // 0x255d2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_255d30:
    if (ctx->pc == 0x255D30u) {
        ctx->pc = 0x255D30u;
            // 0x255d30: 0xe5e10000  swc1        $f1, 0x0($t7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
        ctx->pc = 0x255D34u;
        goto label_255d34;
    }
    ctx->pc = 0x255D2Cu;
    {
        const bool branch_taken_0x255d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255D2Cu;
            // 0x255d30: 0xe5e10000  swc1        $f1, 0x0($t7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d2c) {
            ctx->pc = 0x255D3Cu;
            goto label_255d3c;
        }
    }
    ctx->pc = 0x255D34u;
label_255d34:
    // 0x255d34: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255d34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255d38:
    // 0x255d38: 0xe5e10000  swc1        $f1, 0x0($t7)
    ctx->pc = 0x255d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_255d3c:
    // 0x255d3c: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x255d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_255d40:
    // 0x255d40: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x255d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255d44:
    // 0x255d44: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x255d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255d48:
    // 0x255d48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x255d48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255d4c:
    // 0x255d4c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_255d50:
    if (ctx->pc == 0x255D50u) {
        ctx->pc = 0x255D50u;
            // 0x255d50: 0xc7a20110  lwc1        $f2, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x255D54u;
        goto label_255d54;
    }
    ctx->pc = 0x255D4Cu;
    {
        const bool branch_taken_0x255d4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x255D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255D4Cu;
            // 0x255d50: 0xc7a20110  lwc1        $f2, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d4c) {
            ctx->pc = 0x255D5Cu;
            goto label_255d5c;
        }
    }
    ctx->pc = 0x255D54u;
label_255d54:
    // 0x255d54: 0x10000003  b           . + 4 + (0x3 << 2)
label_255d58:
    if (ctx->pc == 0x255D58u) {
        ctx->pc = 0x255D58u;
            // 0x255d58: 0xe7a20110  swc1        $f2, 0x110($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->pc = 0x255D5Cu;
        goto label_255d5c;
    }
    ctx->pc = 0x255D54u;
    {
        const bool branch_taken_0x255d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255D54u;
            // 0x255d58: 0xe7a20110  swc1        $f2, 0x110($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d54) {
            ctx->pc = 0x255D64u;
            goto label_255d64;
        }
    }
    ctx->pc = 0x255D5Cu;
label_255d5c:
    // 0x255d5c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x255d5cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_255d60:
    // 0x255d60: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x255d60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_255d64:
    // 0x255d64: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x255d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255d68:
    // 0x255d68: 0xc7210000  lwc1        $f1, 0x0($t9)
    ctx->pc = 0x255d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255d6c:
    // 0x255d6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x255d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255d70:
    // 0x255d70: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_255d74:
    if (ctx->pc == 0x255D74u) {
        ctx->pc = 0x255D78u;
        goto label_255d78;
    }
    ctx->pc = 0x255D70u;
    {
        const bool branch_taken_0x255d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255d70) {
            ctx->pc = 0x255D80u;
            goto label_255d80;
        }
    }
    ctx->pc = 0x255D78u;
label_255d78:
    // 0x255d78: 0x10000003  b           . + 4 + (0x3 << 2)
label_255d7c:
    if (ctx->pc == 0x255D7Cu) {
        ctx->pc = 0x255D7Cu;
            // 0x255d7c: 0xe7210000  swc1        $f1, 0x0($t9) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
        ctx->pc = 0x255D80u;
        goto label_255d80;
    }
    ctx->pc = 0x255D78u;
    {
        const bool branch_taken_0x255d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255D78u;
            // 0x255d7c: 0xe7210000  swc1        $f1, 0x0($t9) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d78) {
            ctx->pc = 0x255D88u;
            goto label_255d88;
        }
    }
    ctx->pc = 0x255D80u;
label_255d80:
    // 0x255d80: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255d80u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255d84:
    // 0x255d84: 0xe7210000  swc1        $f1, 0x0($t9)
    ctx->pc = 0x255d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
label_255d88:
    // 0x255d88: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x255d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255d8c:
    // 0x255d8c: 0xc7010000  lwc1        $f1, 0x0($t8)
    ctx->pc = 0x255d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255d90:
    // 0x255d90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x255d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255d94:
    // 0x255d94: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_255d98:
    if (ctx->pc == 0x255D98u) {
        ctx->pc = 0x255D9Cu;
        goto label_255d9c;
    }
    ctx->pc = 0x255D94u;
    {
        const bool branch_taken_0x255d94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255d94) {
            ctx->pc = 0x255DA4u;
            goto label_255da4;
        }
    }
    ctx->pc = 0x255D9Cu;
label_255d9c:
    // 0x255d9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_255da0:
    if (ctx->pc == 0x255DA0u) {
        ctx->pc = 0x255DA0u;
            // 0x255da0: 0xe7010000  swc1        $f1, 0x0($t8) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
        ctx->pc = 0x255DA4u;
        goto label_255da4;
    }
    ctx->pc = 0x255D9Cu;
    {
        const bool branch_taken_0x255d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255D9Cu;
            // 0x255da0: 0xe7010000  swc1        $f1, 0x0($t8) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d9c) {
            ctx->pc = 0x255DACu;
            goto label_255dac;
        }
    }
    ctx->pc = 0x255DA4u;
label_255da4:
    // 0x255da4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255da4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255da8:
    // 0x255da8: 0xe7010000  swc1        $f1, 0x0($t8)
    ctx->pc = 0x255da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
label_255dac:
    // 0x255dac: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x255dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255db0:
    // 0x255db0: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x255db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255db4:
    // 0x255db4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x255db4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255db8:
    // 0x255db8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_255dbc:
    if (ctx->pc == 0x255DBCu) {
        ctx->pc = 0x255DC0u;
        goto label_255dc0;
    }
    ctx->pc = 0x255DB8u;
    {
        const bool branch_taken_0x255db8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255db8) {
            ctx->pc = 0x255DC8u;
            goto label_255dc8;
        }
    }
    ctx->pc = 0x255DC0u;
label_255dc0:
    // 0x255dc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_255dc4:
    if (ctx->pc == 0x255DC4u) {
        ctx->pc = 0x255DC4u;
            // 0x255dc4: 0xe5e10000  swc1        $f1, 0x0($t7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
        ctx->pc = 0x255DC8u;
        goto label_255dc8;
    }
    ctx->pc = 0x255DC0u;
    {
        const bool branch_taken_0x255dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255DC0u;
            // 0x255dc4: 0xe5e10000  swc1        $f1, 0x0($t7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255dc0) {
            ctx->pc = 0x255DD0u;
            goto label_255dd0;
        }
    }
    ctx->pc = 0x255DC8u;
label_255dc8:
    // 0x255dc8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255dc8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255dcc:
    // 0x255dcc: 0xe5e10000  swc1        $f1, 0x0($t7)
    ctx->pc = 0x255dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_255dd0:
    // 0x255dd0: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x255dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_255dd4:
    // 0x255dd4: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x255dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255dd8:
    // 0x255dd8: 0x27b30110  addiu       $s3, $sp, 0x110
    ctx->pc = 0x255dd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_255ddc:
    // 0x255ddc: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x255ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255de0:
    // 0x255de0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x255de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_255de4:
    // 0x255de4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255de8:
    // 0x255de8: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x255de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_255dec:
    // 0x255dec: 0xc7210000  lwc1        $f1, 0x0($t9)
    ctx->pc = 0x255decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255df0:
    // 0x255df0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x255df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255df4:
    // 0x255df4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255df8:
    // 0x255df8: 0xe7200000  swc1        $f0, 0x0($t9)
    ctx->pc = 0x255df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
label_255dfc:
    // 0x255dfc: 0xc7010000  lwc1        $f1, 0x0($t8)
    ctx->pc = 0x255dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255e00:
    // 0x255e00: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x255e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255e04:
    // 0x255e04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255e08:
    // 0x255e08: 0xe7000000  swc1        $f0, 0x0($t8)
    ctx->pc = 0x255e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
label_255e0c:
    // 0x255e0c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x255e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255e10:
    // 0x255e10: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x255e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255e14:
    // 0x255e14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255e18:
    // 0x255e18: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x255e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_255e1c:
    // 0x255e1c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x255e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255e20:
    // 0x255e20: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x255e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_255e24:
    // 0x255e24: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x255e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255e28:
    // 0x255e28: 0x27b30104  addiu       $s3, $sp, 0x104
    ctx->pc = 0x255e28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_255e2c:
    // 0x255e2c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x255e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_255e30:
    // 0x255e30: 0x27b30110  addiu       $s3, $sp, 0x110
    ctx->pc = 0x255e30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_255e34:
    // 0x255e34: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x255e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255e38:
    // 0x255e38: 0x27b30108  addiu       $s3, $sp, 0x108
    ctx->pc = 0x255e38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_255e3c:
    // 0x255e3c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x255e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_255e40:
    // 0x255e40: 0x27b30110  addiu       $s3, $sp, 0x110
    ctx->pc = 0x255e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_255e44:
    // 0x255e44: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x255e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255e48:
    // 0x255e48: 0x27b3010c  addiu       $s3, $sp, 0x10C
    ctx->pc = 0x255e48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_255e4c:
    // 0x255e4c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x255e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_255e50:
    // 0x255e50: 0x8fb30100  lw          $s3, 0x100($sp)
    ctx->pc = 0x255e50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_255e54:
    // 0x255e54: 0x1399c2  srl         $s3, $s3, 7
    ctx->pc = 0x255e54u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 7));
label_255e58:
    // 0x255e58: 0xa7b30130  sh          $s3, 0x130($sp)
    ctx->pc = 0x255e58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 304), (uint16_t)GPR_U32(ctx, 19));
label_255e5c:
    // 0x255e5c: 0x27b30104  addiu       $s3, $sp, 0x104
    ctx->pc = 0x255e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_255e60:
    // 0x255e60: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x255e60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_255e64:
    // 0x255e64: 0x13a9c2  srl         $s5, $s3, 7
    ctx->pc = 0x255e64u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 19), 7));
label_255e68:
    // 0x255e68: 0x27b30132  addiu       $s3, $sp, 0x132
    ctx->pc = 0x255e68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 306));
label_255e6c:
    // 0x255e6c: 0xa6750000  sh          $s5, 0x0($s3)
    ctx->pc = 0x255e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 21));
label_255e70:
    // 0x255e70: 0x27b30108  addiu       $s3, $sp, 0x108
    ctx->pc = 0x255e70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_255e74:
    // 0x255e74: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x255e74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_255e78:
    // 0x255e78: 0x13a9c2  srl         $s5, $s3, 7
    ctx->pc = 0x255e78u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 19), 7));
label_255e7c:
    // 0x255e7c: 0x27b30134  addiu       $s3, $sp, 0x134
    ctx->pc = 0x255e7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_255e80:
    // 0x255e80: 0xa6750000  sh          $s5, 0x0($s3)
    ctx->pc = 0x255e80u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 21));
label_255e84:
    // 0x255e84: 0x27b3010c  addiu       $s3, $sp, 0x10C
    ctx->pc = 0x255e84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_255e88:
    // 0x255e88: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x255e88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_255e8c:
    // 0x255e8c: 0x13a9c2  srl         $s5, $s3, 7
    ctx->pc = 0x255e8cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 19), 7));
label_255e90:
    // 0x255e90: 0x27b30136  addiu       $s3, $sp, 0x136
    ctx->pc = 0x255e90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 310));
label_255e94:
    // 0x255e94: 0xa6750000  sh          $s5, 0x0($s3)
    ctx->pc = 0x255e94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 21));
label_255e98:
    // 0x255e98: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x255e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255e9c:
    // 0x255e9c: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x255e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255ea0:
    // 0x255ea0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255ea4:
    // 0x255ea4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x255ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_255ea8:
    // 0x255ea8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x255ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255eac:
    // 0x255eac: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x255eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255eb0:
    // 0x255eb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255eb4:
    // 0x255eb4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x255eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_255eb8:
    // 0x255eb8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x255eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255ebc:
    // 0x255ebc: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x255ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255ec0:
    // 0x255ec0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255ec4:
    // 0x255ec4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x255ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_255ec8:
    // 0x255ec8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x255ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255ecc:
    // 0x255ecc: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x255eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255ed0:
    // 0x255ed0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255ed4:
    // 0x255ed4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x255ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_255ed8:
    // 0x255ed8: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x255ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255edc:
    // 0x255edc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x255edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255ee0:
    // 0x255ee0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_255ee4:
    // 0x255ee4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x255ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_255ee8:
    // 0x255ee8: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x255ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255eec:
    // 0x255eec: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x255eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255ef0:
    // 0x255ef0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_255ef4:
    // 0x255ef4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x255ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_255ef8:
    // 0x255ef8: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x255ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255efc:
    // 0x255efc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x255efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255f00:
    // 0x255f00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_255f04:
    // 0x255f04: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x255f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_255f08:
    // 0x255f08: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x255f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255f0c:
    // 0x255f0c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x255f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255f10:
    // 0x255f10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_255f14:
    // 0x255f14: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x255f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_255f18:
    // 0x255f18: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x255f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255f1c:
    // 0x255f1c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x255f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255f20:
    // 0x255f20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x255f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255f24:
    // 0x255f24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_255f28:
    if (ctx->pc == 0x255F28u) {
        ctx->pc = 0x255F28u;
            // 0x255f28: 0xc7a200f0  lwc1        $f2, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x255F2Cu;
        goto label_255f2c;
    }
    ctx->pc = 0x255F24u;
    {
        const bool branch_taken_0x255f24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255F24u;
            // 0x255f28: 0xc7a200f0  lwc1        $f2, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f24) {
            ctx->pc = 0x255F34u;
            goto label_255f34;
        }
    }
    ctx->pc = 0x255F2Cu;
label_255f2c:
    // 0x255f2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_255f30:
    if (ctx->pc == 0x255F30u) {
        ctx->pc = 0x255F30u;
            // 0x255f30: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->pc = 0x255F34u;
        goto label_255f34;
    }
    ctx->pc = 0x255F2Cu;
    {
        const bool branch_taken_0x255f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255F2Cu;
            // 0x255f30: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f2c) {
            ctx->pc = 0x255F3Cu;
            goto label_255f3c;
        }
    }
    ctx->pc = 0x255F34u;
label_255f34:
    // 0x255f34: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x255f34u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_255f38:
    // 0x255f38: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x255f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_255f3c:
    // 0x255f3c: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x255f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255f40:
    // 0x255f40: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x255f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255f44:
    // 0x255f44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255f48:
    // 0x255f48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_255f4c:
    if (ctx->pc == 0x255F4Cu) {
        ctx->pc = 0x255F50u;
        goto label_255f50;
    }
    ctx->pc = 0x255F48u;
    {
        const bool branch_taken_0x255f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255f48) {
            ctx->pc = 0x255F58u;
            goto label_255f58;
        }
    }
    ctx->pc = 0x255F50u;
label_255f50:
    // 0x255f50: 0x10000003  b           . + 4 + (0x3 << 2)
label_255f54:
    if (ctx->pc == 0x255F54u) {
        ctx->pc = 0x255F54u;
            // 0x255f54: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->pc = 0x255F58u;
        goto label_255f58;
    }
    ctx->pc = 0x255F50u;
    {
        const bool branch_taken_0x255f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255F50u;
            // 0x255f54: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f50) {
            ctx->pc = 0x255F60u;
            goto label_255f60;
        }
    }
    ctx->pc = 0x255F58u;
label_255f58:
    // 0x255f58: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255f58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255f5c:
    // 0x255f5c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x255f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_255f60:
    // 0x255f60: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x255f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255f64:
    // 0x255f64: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x255f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255f68:
    // 0x255f68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255f6c:
    // 0x255f6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_255f70:
    if (ctx->pc == 0x255F70u) {
        ctx->pc = 0x255F74u;
        goto label_255f74;
    }
    ctx->pc = 0x255F6Cu;
    {
        const bool branch_taken_0x255f6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255f6c) {
            ctx->pc = 0x255F7Cu;
            goto label_255f7c;
        }
    }
    ctx->pc = 0x255F74u;
label_255f74:
    // 0x255f74: 0x10000003  b           . + 4 + (0x3 << 2)
label_255f78:
    if (ctx->pc == 0x255F78u) {
        ctx->pc = 0x255F78u;
            // 0x255f78: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x255F7Cu;
        goto label_255f7c;
    }
    ctx->pc = 0x255F74u;
    {
        const bool branch_taken_0x255f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255F74u;
            // 0x255f78: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f74) {
            ctx->pc = 0x255F84u;
            goto label_255f84;
        }
    }
    ctx->pc = 0x255F7Cu;
label_255f7c:
    // 0x255f7c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255f7cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255f80:
    // 0x255f80: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x255f80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_255f84:
    // 0x255f84: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x255f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255f88:
    // 0x255f88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x255f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255f8c:
    // 0x255f8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255f90:
    // 0x255f90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_255f94:
    if (ctx->pc == 0x255F94u) {
        ctx->pc = 0x255F98u;
        goto label_255f98;
    }
    ctx->pc = 0x255F90u;
    {
        const bool branch_taken_0x255f90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255f90) {
            ctx->pc = 0x255FA0u;
            goto label_255fa0;
        }
    }
    ctx->pc = 0x255F98u;
label_255f98:
    // 0x255f98: 0x10000003  b           . + 4 + (0x3 << 2)
label_255f9c:
    if (ctx->pc == 0x255F9Cu) {
        ctx->pc = 0x255F9Cu;
            // 0x255f9c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x255FA0u;
        goto label_255fa0;
    }
    ctx->pc = 0x255F98u;
    {
        const bool branch_taken_0x255f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255F98u;
            // 0x255f9c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f98) {
            ctx->pc = 0x255FA8u;
            goto label_255fa8;
        }
    }
    ctx->pc = 0x255FA0u;
label_255fa0:
    // 0x255fa0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255fa0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255fa4:
    // 0x255fa4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x255fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_255fa8:
    // 0x255fa8: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x255fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_255fac:
    // 0x255fac: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x255facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255fb0:
    // 0x255fb0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x255fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255fb4:
    // 0x255fb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x255fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255fb8:
    // 0x255fb8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_255fbc:
    if (ctx->pc == 0x255FBCu) {
        ctx->pc = 0x255FBCu;
            // 0x255fbc: 0xc7a200f0  lwc1        $f2, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x255FC0u;
        goto label_255fc0;
    }
    ctx->pc = 0x255FB8u;
    {
        const bool branch_taken_0x255fb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x255FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255FB8u;
            // 0x255fbc: 0xc7a200f0  lwc1        $f2, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fb8) {
            ctx->pc = 0x255FC8u;
            goto label_255fc8;
        }
    }
    ctx->pc = 0x255FC0u;
label_255fc0:
    // 0x255fc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_255fc4:
    if (ctx->pc == 0x255FC4u) {
        ctx->pc = 0x255FC4u;
            // 0x255fc4: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->pc = 0x255FC8u;
        goto label_255fc8;
    }
    ctx->pc = 0x255FC0u;
    {
        const bool branch_taken_0x255fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255FC0u;
            // 0x255fc4: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fc0) {
            ctx->pc = 0x255FD0u;
            goto label_255fd0;
        }
    }
    ctx->pc = 0x255FC8u;
label_255fc8:
    // 0x255fc8: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x255fc8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_255fcc:
    // 0x255fcc: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x255fccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_255fd0:
    // 0x255fd0: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x255fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255fd4:
    // 0x255fd4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x255fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255fd8:
    // 0x255fd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x255fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255fdc:
    // 0x255fdc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_255fe0:
    if (ctx->pc == 0x255FE0u) {
        ctx->pc = 0x255FE4u;
        goto label_255fe4;
    }
    ctx->pc = 0x255FDCu;
    {
        const bool branch_taken_0x255fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255fdc) {
            ctx->pc = 0x255FECu;
            goto label_255fec;
        }
    }
    ctx->pc = 0x255FE4u;
label_255fe4:
    // 0x255fe4: 0x10000003  b           . + 4 + (0x3 << 2)
label_255fe8:
    if (ctx->pc == 0x255FE8u) {
        ctx->pc = 0x255FE8u;
            // 0x255fe8: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->pc = 0x255FECu;
        goto label_255fec;
    }
    ctx->pc = 0x255FE4u;
    {
        const bool branch_taken_0x255fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255FE4u;
            // 0x255fe8: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fe4) {
            ctx->pc = 0x255FF4u;
            goto label_255ff4;
        }
    }
    ctx->pc = 0x255FECu;
label_255fec:
    // 0x255fec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x255fecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_255ff0:
    // 0x255ff0: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x255ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_255ff4:
    // 0x255ff4: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x255ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255ff8:
    // 0x255ff8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x255ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_255ffc:
    // 0x255ffc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x255ffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_256000:
    // 0x256000: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_256004:
    if (ctx->pc == 0x256004u) {
        ctx->pc = 0x256008u;
        goto label_256008;
    }
    ctx->pc = 0x256000u;
    {
        const bool branch_taken_0x256000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x256000) {
            ctx->pc = 0x256010u;
            goto label_256010;
        }
    }
    ctx->pc = 0x256008u;
label_256008:
    // 0x256008: 0x10000003  b           . + 4 + (0x3 << 2)
label_25600c:
    if (ctx->pc == 0x25600Cu) {
        ctx->pc = 0x25600Cu;
            // 0x25600c: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x256010u;
        goto label_256010;
    }
    ctx->pc = 0x256008u;
    {
        const bool branch_taken_0x256008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25600Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256008u;
            // 0x25600c: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x256008) {
            ctx->pc = 0x256018u;
            goto label_256018;
        }
    }
    ctx->pc = 0x256010u;
label_256010:
    // 0x256010: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x256010u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_256014:
    // 0x256014: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x256014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_256018:
    // 0x256018: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x256018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25601c:
    // 0x25601c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x25601cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_256020:
    // 0x256020: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x256020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_256024:
    // 0x256024: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_256028:
    if (ctx->pc == 0x256028u) {
        ctx->pc = 0x25602Cu;
        goto label_25602c;
    }
    ctx->pc = 0x256024u;
    {
        const bool branch_taken_0x256024 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x256024) {
            ctx->pc = 0x256034u;
            goto label_256034;
        }
    }
    ctx->pc = 0x25602Cu;
label_25602c:
    // 0x25602c: 0x10000003  b           . + 4 + (0x3 << 2)
label_256030:
    if (ctx->pc == 0x256030u) {
        ctx->pc = 0x256030u;
            // 0x256030: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x256034u;
        goto label_256034;
    }
    ctx->pc = 0x25602Cu;
    {
        const bool branch_taken_0x25602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25602Cu;
            // 0x256030: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25602c) {
            ctx->pc = 0x25603Cu;
            goto label_25603c;
        }
    }
    ctx->pc = 0x256034u;
label_256034:
    // 0x256034: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x256034u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_256038:
    // 0x256038: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x256038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25603c:
    // 0x25603c: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x25603cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_256040:
    // 0x256040: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x256040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_256044:
    // 0x256044: 0x8fb500a0  lw          $s5, 0xA0($sp)
    ctx->pc = 0x256044u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_256048:
    // 0x256048: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x256048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25604c:
    // 0x25604c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x25604cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_256050:
    // 0x256050: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x256050u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_256054:
    // 0x256054: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x256054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_256058:
    // 0x256058: 0x549821  addu        $s3, $v0, $s4
    ctx->pc = 0x256058u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_25605c:
    // 0x25605c: 0x2941021  addu        $v0, $s4, $s4
    ctx->pc = 0x25605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 20)));
label_256060:
    // 0x256060: 0xafb500a0  sw          $s5, 0xA0($sp)
    ctx->pc = 0x256060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 21));
label_256064:
    // 0x256064: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x256064u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_256068:
    // 0x256068: 0x13b900  sll         $s7, $s3, 4
    ctx->pc = 0x256068u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_25606c:
    // 0x25606c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25606cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_256070:
    // 0x256070: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x256070u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_256074:
    // 0x256074: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x256074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_256078:
    // 0x256078: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x256078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25607c:
    // 0x25607c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x25607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_256080:
    // 0x256080: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x256080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_256084:
    // 0x256084: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x256084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_256088:
    // 0x256088: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x256088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25608c:
    // 0x25608c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x25608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_256090:
    // 0x256090: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x256090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_256094:
    // 0x256094: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x256094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_256098:
    // 0x256098: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x256098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25609c:
    // 0x25609c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x25609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2560a0:
    // 0x2560a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2560a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2560a4:
    // 0x2560a4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2560a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2560a8:
    // 0x2560a8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2560a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2560ac:
    // 0x2560ac: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2560acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2560b0:
    // 0x2560b0: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2560b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2560b4:
    // 0x2560b4: 0x27b500e4  addiu       $s5, $sp, 0xE4
    ctx->pc = 0x2560b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_2560b8:
    // 0x2560b8: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2560b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2560bc:
    // 0x2560bc: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x2560bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2560c0:
    // 0x2560c0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2560c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2560c4:
    // 0x2560c4: 0x27b500e8  addiu       $s5, $sp, 0xE8
    ctx->pc = 0x2560c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2560c8:
    // 0x2560c8: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2560c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2560cc:
    // 0x2560cc: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x2560ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2560d0:
    // 0x2560d0: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x2560d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2560d4:
    // 0x2560d4: 0x27b500ec  addiu       $s5, $sp, 0xEC
    ctx->pc = 0x2560d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_2560d8:
    // 0x2560d8: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2560d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2560dc:
    // 0x2560dc: 0x8fb500e0  lw          $s5, 0xE0($sp)
    ctx->pc = 0x2560dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2560e0:
    // 0x2560e0: 0x15a9c2  srl         $s5, $s5, 7
    ctx->pc = 0x2560e0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
label_2560e4:
    // 0x2560e4: 0xa7b50120  sh          $s5, 0x120($sp)
    ctx->pc = 0x2560e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 21));
label_2560e8:
    // 0x2560e8: 0x27b500e4  addiu       $s5, $sp, 0xE4
    ctx->pc = 0x2560e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_2560ec:
    // 0x2560ec: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x2560ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2560f0:
    // 0x2560f0: 0x15b1c2  srl         $s6, $s5, 7
    ctx->pc = 0x2560f0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
label_2560f4:
    // 0x2560f4: 0x27b50122  addiu       $s5, $sp, 0x122
    ctx->pc = 0x2560f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 290));
label_2560f8:
    // 0x2560f8: 0xa6b60000  sh          $s6, 0x0($s5)
    ctx->pc = 0x2560f8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 22));
label_2560fc:
    // 0x2560fc: 0x27b500e8  addiu       $s5, $sp, 0xE8
    ctx->pc = 0x2560fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_256100:
    // 0x256100: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x256100u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_256104:
    // 0x256104: 0x15b1c2  srl         $s6, $s5, 7
    ctx->pc = 0x256104u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
label_256108:
    // 0x256108: 0x27b50124  addiu       $s5, $sp, 0x124
    ctx->pc = 0x256108u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_25610c:
    // 0x25610c: 0xa6b60000  sh          $s6, 0x0($s5)
    ctx->pc = 0x25610cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 22));
label_256110:
    // 0x256110: 0x27b500ec  addiu       $s5, $sp, 0xEC
    ctx->pc = 0x256110u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_256114:
    // 0x256114: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x256114u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_256118:
    // 0x256118: 0x15b1c2  srl         $s6, $s5, 7
    ctx->pc = 0x256118u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
label_25611c:
    // 0x25611c: 0x27b50126  addiu       $s5, $sp, 0x126
    ctx->pc = 0x25611cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 294));
label_256120:
    // 0x256120: 0xa6b60000  sh          $s6, 0x0($s5)
    ctx->pc = 0x256120u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 22));
label_256124:
    // 0x256124: 0x8fb500dc  lw          $s5, 0xDC($sp)
    ctx->pc = 0x256124u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_256128:
    // 0x256128: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x256128u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25612c:
    // 0x25612c: 0x2d2b021  addu        $s6, $s6, $s2
    ctx->pc = 0x25612cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_256130:
    // 0x256130: 0x8e350070  lw          $s5, 0x70($s1)
    ctx->pc = 0x256130u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_256134:
    // 0x256134: 0x8ed60000  lw          $s6, 0x0($s6)
    ctx->pc = 0x256134u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_256138:
    // 0x256138: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x256138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_25613c:
    // 0x25613c: 0x2b7a821  addu        $s5, $s5, $s7
    ctx->pc = 0x25613cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
label_256140:
    // 0x256140: 0xaeb6000c  sw          $s6, 0xC($s5)
    ctx->pc = 0x256140u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 22));
label_256144:
    // 0x256144: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x256144u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
label_256148:
    // 0x256148: 0x97b50130  lhu         $s5, 0x130($sp)
    ctx->pc = 0x256148u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 304)));
label_25614c:
    // 0x25614c: 0x8fb60140  lw          $s6, 0x140($sp)
    ctx->pc = 0x25614cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_256150:
    // 0x256150: 0x32b5fffe  andi        $s5, $s5, 0xFFFE
    ctx->pc = 0x256150u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65534);
label_256154:
    // 0x256154: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x256154u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_256158:
    // 0x256158: 0xa6d50000  sh          $s5, 0x0($s6)
    ctx->pc = 0x256158u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 21));
label_25615c:
    // 0x25615c: 0x8fb50140  lw          $s5, 0x140($sp)
    ctx->pc = 0x25615cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_256160:
    // 0x256160: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x256160u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_256164:
    // 0x256164: 0xa6b30002  sh          $s3, 0x2($s5)
    ctx->pc = 0x256164u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2), (uint16_t)GPR_U32(ctx, 19));
label_256168:
    // 0x256168: 0x97b50120  lhu         $s5, 0x120($sp)
    ctx->pc = 0x256168u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 288)));
label_25616c:
    // 0x25616c: 0x8fb60140  lw          $s6, 0x140($sp)
    ctx->pc = 0x25616cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_256170:
    // 0x256170: 0x36b50001  ori         $s5, $s5, 0x1
    ctx->pc = 0x256170u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
label_256174:
    // 0x256174: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x256174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_256178:
    // 0x256178: 0xa6d50004  sh          $s5, 0x4($s6)
    ctx->pc = 0x256178u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4), (uint16_t)GPR_U32(ctx, 21));
label_25617c:
    // 0x25617c: 0x8fb50140  lw          $s5, 0x140($sp)
    ctx->pc = 0x25617cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_256180:
    // 0x256180: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x256180u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_256184:
    // 0x256184: 0xa6b30006  sh          $s3, 0x6($s5)
    ctx->pc = 0x256184u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 19));
label_256188:
    // 0x256188: 0x27b50132  addiu       $s5, $sp, 0x132
    ctx->pc = 0x256188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 306));
label_25618c:
    // 0x25618c: 0x96b60000  lhu         $s6, 0x0($s5)
    ctx->pc = 0x25618cu;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_256190:
    // 0x256190: 0x27b50144  addiu       $s5, $sp, 0x144
    ctx->pc = 0x256190u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_256194:
    // 0x256194: 0x32d6fffe  andi        $s6, $s6, 0xFFFE
    ctx->pc = 0x256194u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65534);
label_256198:
    // 0x256198: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x256198u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25619c:
    // 0x25619c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x25619cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2561a0:
    // 0x2561a0: 0xa6b60000  sh          $s6, 0x0($s5)
    ctx->pc = 0x2561a0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 22));
label_2561a4:
    // 0x2561a4: 0x27b50144  addiu       $s5, $sp, 0x144
    ctx->pc = 0x2561a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_2561a8:
    // 0x2561a8: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x2561a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2561ac:
    // 0x2561ac: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2561acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2561b0:
    // 0x2561b0: 0xa6b30002  sh          $s3, 0x2($s5)
    ctx->pc = 0x2561b0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2), (uint16_t)GPR_U32(ctx, 19));
label_2561b4:
    // 0x2561b4: 0x27b50122  addiu       $s5, $sp, 0x122
    ctx->pc = 0x2561b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 290));
label_2561b8:
    // 0x2561b8: 0x96b60000  lhu         $s6, 0x0($s5)
    ctx->pc = 0x2561b8u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_2561bc:
    // 0x2561bc: 0x27b50144  addiu       $s5, $sp, 0x144
    ctx->pc = 0x2561bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_2561c0:
    // 0x2561c0: 0x36d60001  ori         $s6, $s6, 0x1
    ctx->pc = 0x2561c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1);
label_2561c4:
    // 0x2561c4: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x2561c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2561c8:
    // 0x2561c8: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2561c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2561cc:
    // 0x2561cc: 0xa6b60004  sh          $s6, 0x4($s5)
    ctx->pc = 0x2561ccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 22));
label_2561d0:
    // 0x2561d0: 0x27b50144  addiu       $s5, $sp, 0x144
    ctx->pc = 0x2561d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_2561d4:
    // 0x2561d4: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x2561d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2561d8:
    // 0x2561d8: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2561d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2561dc:
    // 0x2561dc: 0xa6b30006  sh          $s3, 0x6($s5)
    ctx->pc = 0x2561dcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 19));
label_2561e0:
    // 0x2561e0: 0x27b50134  addiu       $s5, $sp, 0x134
    ctx->pc = 0x2561e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_2561e4:
    // 0x2561e4: 0x8fd60000  lw          $s6, 0x0($fp)
    ctx->pc = 0x2561e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2561e8:
    // 0x2561e8: 0x96b50000  lhu         $s5, 0x0($s5)
    ctx->pc = 0x2561e8u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_2561ec:
    // 0x2561ec: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x2561ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2561f0:
    // 0x2561f0: 0x32b5fffe  andi        $s5, $s5, 0xFFFE
    ctx->pc = 0x2561f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65534);
label_2561f4:
    // 0x2561f4: 0xa6d50000  sh          $s5, 0x0($s6)
    ctx->pc = 0x2561f4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 21));
label_2561f8:
    // 0x2561f8: 0x8fd50000  lw          $s5, 0x0($fp)
    ctx->pc = 0x2561f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2561fc:
    // 0x2561fc: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2561fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_256200:
    // 0x256200: 0xa6b30002  sh          $s3, 0x2($s5)
    ctx->pc = 0x256200u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2), (uint16_t)GPR_U32(ctx, 19));
label_256204:
    // 0x256204: 0x27b50124  addiu       $s5, $sp, 0x124
    ctx->pc = 0x256204u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_256208:
    // 0x256208: 0x8fd60000  lw          $s6, 0x0($fp)
    ctx->pc = 0x256208u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_25620c:
    // 0x25620c: 0x96b50000  lhu         $s5, 0x0($s5)
    ctx->pc = 0x25620cu;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_256210:
    // 0x256210: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x256210u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_256214:
    // 0x256214: 0x36b50001  ori         $s5, $s5, 0x1
    ctx->pc = 0x256214u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
label_256218:
    // 0x256218: 0xa6d50004  sh          $s5, 0x4($s6)
    ctx->pc = 0x256218u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4), (uint16_t)GPR_U32(ctx, 21));
label_25621c:
    // 0x25621c: 0x8fd50000  lw          $s5, 0x0($fp)
    ctx->pc = 0x25621cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_256220:
    // 0x256220: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x256220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_256224:
    // 0x256224: 0xa4530006  sh          $s3, 0x6($v0)
    ctx->pc = 0x256224u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 19));
label_256228:
    // 0x256228: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x256228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_25622c:
    // 0x25622c: 0x1440fe7a  bnez        $v0, . + 4 + (-0x186 << 2)
label_256230:
    if (ctx->pc == 0x256230u) {
        ctx->pc = 0x256234u;
        goto label_256234;
    }
    ctx->pc = 0x25622Cu;
    {
        const bool branch_taken_0x25622c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25622c) {
            ctx->pc = 0x255C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255c18;
        }
    }
    ctx->pc = 0x256234u;
label_256234:
    // 0x256234: 0x0  nop
    ctx->pc = 0x256234u;
    // NOP
label_256238:
    // 0x256238: 0x8e360070  lw          $s6, 0x70($s1)
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_25623c:
    // 0x25623c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25623cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256240:
    // 0x256240: 0x27b20140  addiu       $s2, $sp, 0x140
    ctx->pc = 0x256240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_256244:
    // 0x256244: 0x0  nop
    ctx->pc = 0x256244u;
    // NOP
label_256248:
    // 0x256248: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x256248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_25624c:
    // 0x25624c: 0xc0971fc  jal         func_25C7F0
label_256250:
    if (ctx->pc == 0x256250u) {
        ctx->pc = 0x256250u;
            // 0x256250: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x256254u;
        goto label_256254;
    }
    ctx->pc = 0x25624Cu;
    SET_GPR_U32(ctx, 31, 0x256254u);
    ctx->pc = 0x256250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25624Cu;
            // 0x256250: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C7F0u;
    if (runtime->hasFunction(0x25C7F0u)) {
        auto targetFn = runtime->lookupFunction(0x25C7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256254u; }
        if (ctx->pc != 0x256254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C7F0_0x25c7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256254u; }
        if (ctx->pc != 0x256254u) { return; }
    }
    ctx->pc = 0x256254u;
label_256254:
    // 0x256254: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x256254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_256258:
    // 0x256258: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x256258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_25625c:
    // 0x25625c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_256260:
    if (ctx->pc == 0x256260u) {
        ctx->pc = 0x256260u;
            // 0x256260: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x256264u;
        goto label_256264;
    }
    ctx->pc = 0x25625Cu;
    {
        const bool branch_taken_0x25625c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25625Cu;
            // 0x256260: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25625c) {
            ctx->pc = 0x256248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256248;
        }
    }
    ctx->pc = 0x256264u;
label_256264:
    // 0x256264: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x256264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_256268:
    // 0x256268: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x256268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_25626c:
    // 0x25626c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25626cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_256270:
    // 0x256270: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x256270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_256274:
    // 0x256274: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x256274u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_256278:
    // 0x256278: 0x8c95000c  lw          $s5, 0xC($a0)
    ctx->pc = 0x256278u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25627c:
    // 0x25627c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x25627cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_256280:
    // 0x256280: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x256280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_256284:
    // 0x256284: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x256284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_256288:
    // 0x256288: 0x2a51821  addu        $v1, $s5, $a1
    ctx->pc = 0x256288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_25628c:
    // 0x25628c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x25628cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_256290:
    // 0x256290: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_256294:
    if (ctx->pc == 0x256294u) {
        ctx->pc = 0x256298u;
        goto label_256298;
    }
    ctx->pc = 0x256290u;
    {
        const bool branch_taken_0x256290 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x256290) {
            ctx->pc = 0x2562A0u;
            goto label_2562a0;
        }
    }
    ctx->pc = 0x256298u;
label_256298:
    // 0x256298: 0x10000007  b           . + 4 + (0x7 << 2)
label_25629c:
    if (ctx->pc == 0x25629Cu) {
        ctx->pc = 0x25629Cu;
            // 0x25629c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x2562A0u;
        goto label_2562a0;
    }
    ctx->pc = 0x256298u;
    {
        const bool branch_taken_0x256298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25629Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256298u;
            // 0x25629c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256298) {
            ctx->pc = 0x2562B8u;
            goto label_2562b8;
        }
    }
    ctx->pc = 0x2562A0u;
label_2562a0:
    // 0x2562a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2562a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2562a4:
    // 0x2562a4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2562a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2562a8:
    // 0x2562a8: 0x320f809  jalr        $t9
label_2562ac:
    if (ctx->pc == 0x2562ACu) {
        ctx->pc = 0x2562B0u;
        goto label_2562b0;
    }
    ctx->pc = 0x2562A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2562B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2562B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2562B0u; }
            if (ctx->pc != 0x2562B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2562B0u;
label_2562b0:
    // 0x2562b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2562b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2562b4:
    // 0x2562b4: 0x0  nop
    ctx->pc = 0x2562b4u;
    // NOP
label_2562b8:
    // 0x2562b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2562b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2562bc:
    // 0x2562bc: 0x27b30150  addiu       $s3, $sp, 0x150
    ctx->pc = 0x2562bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2562c0:
    // 0x2562c0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2562c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2562c4:
    // 0x2562c4: 0x0  nop
    ctx->pc = 0x2562c4u;
    // NOP
label_2562c8:
    // 0x2562c8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2562c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2562cc:
    // 0x2562cc: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x2562ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2562d0:
    // 0x2562d0: 0x2644007c  addiu       $a0, $s2, 0x7C
    ctx->pc = 0x2562d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
label_2562d4:
    // 0x2562d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2562d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2562d8:
    // 0x2562d8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2562d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2562dc:
    // 0x2562dc: 0xc094f68  jal         func_253DA0
label_2562e0:
    if (ctx->pc == 0x2562E0u) {
        ctx->pc = 0x2562E0u;
            // 0x2562e0: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2562E4u;
        goto label_2562e4;
    }
    ctx->pc = 0x2562DCu;
    SET_GPR_U32(ctx, 31, 0x2562E4u);
    ctx->pc = 0x2562E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2562DCu;
            // 0x2562e0: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253DA0u;
    if (runtime->hasFunction(0x253DA0u)) {
        auto targetFn = runtime->lookupFunction(0x253DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2562E4u; }
        if (ctx->pc != 0x2562E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00253DA0_0x253da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2562E4u; }
        if (ctx->pc != 0x2562E4u) { return; }
    }
    ctx->pc = 0x2562E4u;
label_2562e4:
    // 0x2562e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2562e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2562e8:
    // 0x2562e8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2562e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2562ec:
    // 0x2562ec: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x2562ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_2562f0:
    // 0x2562f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2562f4:
    if (ctx->pc == 0x2562F4u) {
        ctx->pc = 0x2562F4u;
            // 0x2562f4: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x2562F8u;
        goto label_2562f8;
    }
    ctx->pc = 0x2562F0u;
    {
        const bool branch_taken_0x2562f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2562F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2562F0u;
            // 0x2562f4: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2562f0) {
            ctx->pc = 0x2562C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2562c8;
        }
    }
    ctx->pc = 0x2562F8u;
label_2562f8:
    // 0x2562f8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2562f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2562fc:
    // 0x2562fc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2562fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_256300:
    // 0x256300: 0xac95000c  sw          $s5, 0xC($a0)
    ctx->pc = 0x256300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 21));
label_256304:
    // 0x256304: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x256304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_256308:
    // 0x256308: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
label_25630c:
    if (ctx->pc == 0x25630Cu) {
        ctx->pc = 0x256310u;
        goto label_256310;
    }
    ctx->pc = 0x256308u;
    {
        const bool branch_taken_0x256308 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x256308) {
            ctx->pc = 0x256320u;
            goto label_256320;
        }
    }
    ctx->pc = 0x256310u;
label_256310:
    // 0x256310: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x256310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_256314:
    // 0x256314: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x256314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_256318:
    // 0x256318: 0x320f809  jalr        $t9
label_25631c:
    if (ctx->pc == 0x25631Cu) {
        ctx->pc = 0x25631Cu;
            // 0x25631c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256320u;
        goto label_256320;
    }
    ctx->pc = 0x256318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x256320u);
        ctx->pc = 0x25631Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256318u;
            // 0x25631c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x256320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x256320u; }
            if (ctx->pc != 0x256320u) { return; }
        }
        }
    }
    ctx->pc = 0x256320u;
label_256320:
    // 0x256320: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x256320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_256324:
    // 0x256324: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_256328:
    if (ctx->pc == 0x256328u) {
        ctx->pc = 0x25632Cu;
        goto label_25632c;
    }
    ctx->pc = 0x256324u;
    {
        const bool branch_taken_0x256324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256324) {
            ctx->pc = 0x256390u;
            goto label_256390;
        }
    }
    ctx->pc = 0x25632Cu;
label_25632c:
    // 0x25632c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x25632cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_256330:
    // 0x256330: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_256334:
    if (ctx->pc == 0x256334u) {
        ctx->pc = 0x256334u;
            // 0x256334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256338u;
        goto label_256338;
    }
    ctx->pc = 0x256330u;
    {
        const bool branch_taken_0x256330 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x256334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256330u;
            // 0x256334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256330) {
            ctx->pc = 0x256390u;
            goto label_256390;
        }
    }
    ctx->pc = 0x256338u;
label_256338:
    // 0x256338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x256338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25633c:
    // 0x25633c: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x25633cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_256340:
    // 0x256340: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x256340u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256344:
    // 0x256344: 0x0  nop
    ctx->pc = 0x256344u;
    // NOP
label_256348:
    // 0x256348: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x256348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_25634c:
    // 0x25634c: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x25634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_256350:
    // 0x256350: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x256350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_256354:
    // 0x256354: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x256354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_256358:
    // 0x256358: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x256358u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_25635c:
    // 0x25635c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x25635cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_256360:
    // 0x256360: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x256360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_256364:
    // 0x256364: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x256364u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_256368:
    // 0x256368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25636c:
    // 0x25636c: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x25636cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
label_256370:
    // 0x256370: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x256370u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_256374:
    // 0x256374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_256378:
    // 0x256378: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x256378u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_25637c:
    // 0x25637c: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x25637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_256380:
    // 0x256380: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x256380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_256384:
    // 0x256384: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_256388:
    if (ctx->pc == 0x256388u) {
        ctx->pc = 0x256388u;
            // 0x256388: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x25638Cu;
        goto label_25638c;
    }
    ctx->pc = 0x256384u;
    {
        const bool branch_taken_0x256384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256384u;
            // 0x256388: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256384) {
            ctx->pc = 0x256348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256348;
        }
    }
    ctx->pc = 0x25638Cu;
label_25638c:
    // 0x25638c: 0x0  nop
    ctx->pc = 0x25638cu;
    // NOP
label_256390:
    // 0x256390: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x256390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_256394:
    // 0x256394: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x256394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_256398:
    // 0x256398: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x256398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_25639c:
    // 0x25639c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2563a0:
    // 0x2563a0: 0x298c3  sra         $s3, $v0, 3
    ctx->pc = 0x2563a0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 3));
label_2563a4:
    // 0x2563a4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2563a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_2563a8:
    // 0x2563a8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2563a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2563ac:
    // 0x2563ac: 0x8c92000c  lw          $s2, 0xC($a0)
    ctx->pc = 0x2563acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2563b0:
    // 0x2563b0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2563b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2563b4:
    // 0x2563b4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2563b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2563b8:
    // 0x2563b8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2563b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2563bc:
    // 0x2563bc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2563bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2563c0:
    // 0x2563c0: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x2563c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_2563c4:
    // 0x2563c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2563c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2563c8:
    // 0x2563c8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2563cc:
    if (ctx->pc == 0x2563CCu) {
        ctx->pc = 0x2563D0u;
        goto label_2563d0;
    }
    ctx->pc = 0x2563C8u;
    {
        const bool branch_taken_0x2563c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2563c8) {
            ctx->pc = 0x2563D8u;
            goto label_2563d8;
        }
    }
    ctx->pc = 0x2563D0u;
label_2563d0:
    // 0x2563d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2563d4:
    if (ctx->pc == 0x2563D4u) {
        ctx->pc = 0x2563D4u;
            // 0x2563d4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x2563D8u;
        goto label_2563d8;
    }
    ctx->pc = 0x2563D0u;
    {
        const bool branch_taken_0x2563d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2563D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2563D0u;
            // 0x2563d4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563d0) {
            ctx->pc = 0x2563F0u;
            goto label_2563f0;
        }
    }
    ctx->pc = 0x2563D8u;
label_2563d8:
    // 0x2563d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2563d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2563dc:
    // 0x2563dc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2563dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2563e0:
    // 0x2563e0: 0x320f809  jalr        $t9
label_2563e4:
    if (ctx->pc == 0x2563E4u) {
        ctx->pc = 0x2563E8u;
        goto label_2563e8;
    }
    ctx->pc = 0x2563E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2563E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2563E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2563E8u; }
            if (ctx->pc != 0x2563E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2563E8u;
label_2563e8:
    // 0x2563e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2563e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2563ec:
    // 0x2563ec: 0x0  nop
    ctx->pc = 0x2563ecu;
    // NOP
label_2563f0:
    // 0x2563f0: 0x139903  sra         $s3, $s3, 4
    ctx->pc = 0x2563f0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 4));
label_2563f4:
    // 0x2563f4: 0x660000a  bltz        $s3, . + 4 + (0xA << 2)
label_2563f8:
    if (ctx->pc == 0x2563F8u) {
        ctx->pc = 0x2563F8u;
            // 0x2563f8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2563FCu;
        goto label_2563fc;
    }
    ctx->pc = 0x2563F4u;
    {
        const bool branch_taken_0x2563f4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2563F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2563F4u;
            // 0x2563f8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563f4) {
            ctx->pc = 0x256420u;
            goto label_256420;
        }
    }
    ctx->pc = 0x2563FCu;
label_2563fc:
    // 0x2563fc: 0x0  nop
    ctx->pc = 0x2563fcu;
    // NOP
label_256400:
    // 0x256400: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x256400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_256404:
    // 0x256404: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x256404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_256408:
    // 0x256408: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x256408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_25640c:
    // 0x25640c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25640cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_256410:
    // 0x256410: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x256410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_256414:
    // 0x256414: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x256414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_256418:
    // 0x256418: 0x661fff9  bgez        $s3, . + 4 + (-0x7 << 2)
label_25641c:
    if (ctx->pc == 0x25641Cu) {
        ctx->pc = 0x25641Cu;
            // 0x25641c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x256420u;
        goto label_256420;
    }
    ctx->pc = 0x256418u;
    {
        const bool branch_taken_0x256418 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x25641Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256418u;
            // 0x25641c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256418) {
            ctx->pc = 0x256400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256400;
        }
    }
    ctx->pc = 0x256420u;
label_256420:
    // 0x256420: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x256420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_256424:
    // 0x256424: 0x10200070  beqz        $at, . + 4 + (0x70 << 2)
label_256428:
    if (ctx->pc == 0x256428u) {
        ctx->pc = 0x256428u;
            // 0x256428: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25642Cu;
        goto label_25642c;
    }
    ctx->pc = 0x256424u;
    {
        const bool branch_taken_0x256424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x256428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256424u;
            // 0x256428: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256424) {
            ctx->pc = 0x2565E8u;
            goto label_2565e8;
        }
    }
    ctx->pc = 0x25642Cu;
label_25642c:
    // 0x25642c: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x25642cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_256430:
    // 0x256430: 0x1420005b  bnez        $at, . + 4 + (0x5B << 2)
label_256434:
    if (ctx->pc == 0x256434u) {
        ctx->pc = 0x256434u;
            // 0x256434: 0x260cfff8  addiu       $t4, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->pc = 0x256438u;
        goto label_256438;
    }
    ctx->pc = 0x256430u;
    {
        const bool branch_taken_0x256430 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x256434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256430u;
            // 0x256434: 0x260cfff8  addiu       $t4, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256430) {
            ctx->pc = 0x2565A0u;
            goto label_2565a0;
        }
    }
    ctx->pc = 0x256438u;
label_256438:
    // 0x256438: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x256438u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25643c:
    // 0x25643c: 0x0  nop
    ctx->pc = 0x25643cu;
    // NOP
label_256440:
    // 0x256440: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x256440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_256444:
    // 0x256444: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x256444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_256448:
    // 0x256448: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x256448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_25644c:
    // 0x25644c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x25644cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_256450:
    // 0x256450: 0x6b4004  sllv        $t0, $t3, $v1
    ctx->pc = 0x256450u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 3) & 0x1F));
label_256454:
    // 0x256454: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x256454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_256458:
    // 0x256458: 0x25a30001  addiu       $v1, $t5, 0x1
    ctx->pc = 0x256458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_25645c:
    // 0x25645c: 0x2423821  addu        $a3, $s2, $v0
    ctx->pc = 0x25645cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_256460:
    // 0x256460: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x256460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_256464:
    // 0x256464: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x256464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_256468:
    // 0x256468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25646c:
    // 0x25646c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x25646cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_256470:
    // 0x256470: 0xc83026  xor         $a2, $a2, $t0
    ctx->pc = 0x256470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
label_256474:
    // 0x256474: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x256474u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_256478:
    // 0x256478: 0x6b2804  sllv        $a1, $t3, $v1
    ctx->pc = 0x256478u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 3) & 0x1F));
label_25647c:
    // 0x25647c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25647cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_256480:
    // 0x256480: 0x25a30002  addiu       $v1, $t5, 0x2
    ctx->pc = 0x256480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
label_256484:
    // 0x256484: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x256484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_256488:
    // 0x256488: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x256488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25648c:
    // 0x25648c: 0x435021  addu        $t2, $v0, $v1
    ctx->pc = 0x25648cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_256490:
    // 0x256490: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x256490u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_256494:
    // 0x256494: 0x25a30003  addiu       $v1, $t5, 0x3
    ctx->pc = 0x256494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
label_256498:
    // 0x256498: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x256498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25649c:
    // 0x25649c: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x25649cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2564a0:
    // 0x2564a0: 0x25a70004  addiu       $a3, $t5, 0x4
    ctx->pc = 0x2564a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_2564a4:
    // 0x2564a4: 0x3142001f  andi        $v0, $t2, 0x1F
    ctx->pc = 0x2564a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)31);
label_2564a8:
    // 0x2564a8: 0x3126001f  andi        $a2, $t1, 0x1F
    ctx->pc = 0x2564a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
label_2564ac:
    // 0x2564ac: 0x4b1804  sllv        $v1, $t3, $v0
    ctx->pc = 0x2564acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_2564b0:
    // 0x2564b0: 0xa1143  sra         $v0, $t2, 5
    ctx->pc = 0x2564b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 5));
label_2564b4:
    // 0x2564b4: 0xcb5004  sllv        $t2, $t3, $a2
    ctx->pc = 0x2564b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
label_2564b8:
    // 0x2564b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2564b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2564bc:
    // 0x2564bc: 0x93143  sra         $a2, $t1, 5
    ctx->pc = 0x2564bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 5));
label_2564c0:
    // 0x2564c0: 0x1052826  xor         $a1, $t0, $a1
    ctx->pc = 0x2564c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 5));
label_2564c4:
    // 0x2564c4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2564c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2564c8:
    // 0x2564c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2564c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2564cc:
    // 0x2564cc: 0x2464821  addu        $t1, $s2, $a2
    ctx->pc = 0x2564ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_2564d0:
    // 0x2564d0: 0x25a80005  addiu       $t0, $t5, 0x5
    ctx->pc = 0x2564d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 5));
label_2564d4:
    // 0x2564d4: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2564d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2564d8:
    // 0x2564d8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2564d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2564dc:
    // 0x2564dc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2564dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2564e0:
    // 0x2564e0: 0x30c7001f  andi        $a3, $a2, 0x1F
    ctx->pc = 0x2564e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_2564e4:
    // 0x2564e4: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x2564e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2564e8:
    // 0x2564e8: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x2564e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_2564ec:
    // 0x2564ec: 0x25a50006  addiu       $a1, $t5, 0x6
    ctx->pc = 0x2564ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 6));
label_2564f0:
    // 0x2564f0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2564f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2564f4:
    // 0x2564f4: 0xeb3804  sllv        $a3, $t3, $a3
    ctx->pc = 0x2564f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
label_2564f8:
    // 0x2564f8: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x2564f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2564fc:
    // 0x2564fc: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2564fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_256500:
    // 0x256500: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x256500u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
label_256504:
    // 0x256504: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x256504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_256508:
    // 0x256508: 0x857821  addu        $t7, $a0, $a1
    ctx->pc = 0x256508u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_25650c:
    // 0x25650c: 0x3105001f  andi        $a1, $t0, 0x1F
    ctx->pc = 0x25650cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
label_256510:
    // 0x256510: 0x82143  sra         $a0, $t0, 5
    ctx->pc = 0x256510u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 5));
label_256514:
    // 0x256514: 0x31e8001f  andi        $t0, $t7, 0x1F
    ctx->pc = 0x256514u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)31);
label_256518:
    // 0x256518: 0xac4e0000  sw          $t6, 0x0($v0)
    ctx->pc = 0x256518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
label_25651c:
    // 0x25651c: 0x10b1804  sllv        $v1, $t3, $t0
    ctx->pc = 0x25651cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 8) & 0x1F));
label_256520:
    // 0x256520: 0xf1143  sra         $v0, $t7, 5
    ctx->pc = 0x256520u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 15), 5));
label_256524:
    // 0x256524: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x256524u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_256528:
    // 0x256528: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x256528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25652c:
    // 0x25652c: 0x8fae00c0  lw          $t6, 0xC0($sp)
    ctx->pc = 0x25652cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_256530:
    // 0x256530: 0x25af0007  addiu       $t7, $t5, 0x7
    ctx->pc = 0x256530u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 7));
label_256534:
    // 0x256534: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x256534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_256538:
    // 0x256538: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x256538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_25653c:
    // 0x25653c: 0xab2804  sllv        $a1, $t3, $a1
    ctx->pc = 0x25653cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 5) & 0x1F));
label_256540:
    // 0x256540: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x256540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_256544:
    // 0x256544: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x256544u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_256548:
    // 0x256548: 0x10a4026  xor         $t0, $t0, $t2
    ctx->pc = 0x256548u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 10));
label_25654c:
    // 0x25654c: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x25654cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
label_256550:
    // 0x256550: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x256550u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_256554:
    // 0x256554: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x256554u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_256558:
    // 0x256558: 0x31cf001f  andi        $t7, $t6, 0x1F
    ctx->pc = 0x256558u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)31);
label_25655c:
    // 0x25655c: 0xe7143  sra         $t6, $t6, 5
    ctx->pc = 0x25655cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 5));
label_256560:
    // 0x256560: 0x1eb9804  sllv        $s3, $t3, $t7
    ctx->pc = 0x256560u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 15) & 0x1F));
label_256564:
    // 0x256564: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x256564u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_256568:
    // 0x256568: 0x24e7821  addu        $t7, $s2, $t6
    ctx->pc = 0x256568u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
label_25656c:
    // 0x25656c: 0x1ac702a  slt         $t6, $t5, $t4
    ctx->pc = 0x25656cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_256570:
    // 0x256570: 0x1073826  xor         $a3, $t0, $a3
    ctx->pc = 0x256570u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
label_256574:
    // 0x256574: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x256574u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_256578:
    // 0x256578: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x256578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25657c:
    // 0x25657c: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x25657cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
label_256580:
    // 0x256580: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x256580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_256584:
    // 0x256584: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x256584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_256588:
    // 0x256588: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x256588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_25658c:
    // 0x25658c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25658cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_256590:
    // 0x256590: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x256590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_256594:
    // 0x256594: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x256594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
label_256598:
    // 0x256598: 0x15c0ffa9  bnez        $t6, . + 4 + (-0x57 << 2)
label_25659c:
    if (ctx->pc == 0x25659Cu) {
        ctx->pc = 0x25659Cu;
            // 0x25659c: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2565A0u;
        goto label_2565a0;
    }
    ctx->pc = 0x256598u;
    {
        const bool branch_taken_0x256598 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x25659Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256598u;
            // 0x25659c: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256598) {
            ctx->pc = 0x256440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256440;
        }
    }
    ctx->pc = 0x2565A0u;
label_2565a0:
    // 0x2565a0: 0x1b0082a  slt         $at, $t5, $s0
    ctx->pc = 0x2565a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2565a4:
    // 0x2565a4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_2565a8:
    if (ctx->pc == 0x2565A8u) {
        ctx->pc = 0x2565ACu;
        goto label_2565ac;
    }
    ctx->pc = 0x2565A4u;
    {
        const bool branch_taken_0x2565a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2565a4) {
            ctx->pc = 0x2565E8u;
            goto label_2565e8;
        }
    }
    ctx->pc = 0x2565ACu;
label_2565ac:
    // 0x2565ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2565acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2565b0:
    // 0x2565b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2565b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2565b4:
    // 0x2565b4: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x2565b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_2565b8:
    // 0x2565b8: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x2565b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2565bc:
    // 0x2565bc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2565bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_2565c0:
    // 0x2565c0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2565c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_2565c4:
    // 0x2565c4: 0x662804  sllv        $a1, $a2, $v1
    ctx->pc = 0x2565c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_2565c8:
    // 0x2565c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2565c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2565cc:
    // 0x2565cc: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2565ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2565d0:
    // 0x2565d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2565d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2565d4:
    // 0x2565d4: 0x1b0102a  slt         $v0, $t5, $s0
    ctx->pc = 0x2565d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2565d8:
    // 0x2565d8: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x2565d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
label_2565dc:
    // 0x2565dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2565e0:
    if (ctx->pc == 0x2565E0u) {
        ctx->pc = 0x2565E0u;
            // 0x2565e0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2565E4u;
        goto label_2565e4;
    }
    ctx->pc = 0x2565DCu;
    {
        const bool branch_taken_0x2565dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2565E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2565DCu;
            // 0x2565e0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565dc) {
            ctx->pc = 0x2565B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2565b0;
        }
    }
    ctx->pc = 0x2565E4u;
label_2565e4:
    // 0x2565e4: 0x0  nop
    ctx->pc = 0x2565e4u;
    // NOP
label_2565e8:
    // 0x2565e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2565e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2565ec:
    // 0x2565ec: 0xa3a2015c  sb          $v0, 0x15C($sp)
    ctx->pc = 0x2565ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 348), (uint8_t)GPR_U32(ctx, 2));
label_2565f0:
    // 0x2565f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2565f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2565f4:
    // 0x2565f4: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x2565f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2565f8:
    // 0x2565f8: 0x83a7015c  lb          $a3, 0x15C($sp)
    ctx->pc = 0x2565f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 348)));
label_2565fc:
    // 0x2565fc: 0xc095c70  jal         func_2571C0
label_256600:
    if (ctx->pc == 0x256600u) {
        ctx->pc = 0x256600u;
            // 0x256600: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256604u;
        goto label_256604;
    }
    ctx->pc = 0x2565FCu;
    SET_GPR_U32(ctx, 31, 0x256604u);
    ctx->pc = 0x256600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2565FCu;
            // 0x256600: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2571C0u;
    if (runtime->hasFunction(0x2571C0u)) {
        auto targetFn = runtime->lookupFunction(0x2571C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256604u; }
        if (ctx->pc != 0x256604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002571C0_0x2571c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256604u; }
        if (ctx->pc != 0x256604u) { return; }
    }
    ctx->pc = 0x256604u;
label_256604:
    // 0x256604: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x256604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_256608:
    // 0x256608: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x256608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25660c:
    // 0x25660c: 0xac92000c  sw          $s2, 0xC($a0)
    ctx->pc = 0x25660cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 18));
label_256610:
    // 0x256610: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x256610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_256614:
    // 0x256614: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
label_256618:
    if (ctx->pc == 0x256618u) {
        ctx->pc = 0x25661Cu;
        goto label_25661c;
    }
    ctx->pc = 0x256614u;
    {
        const bool branch_taken_0x256614 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x256614) {
            ctx->pc = 0x256630u;
            goto label_256630;
        }
    }
    ctx->pc = 0x25661Cu;
label_25661c:
    // 0x25661c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25661cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_256620:
    // 0x256620: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x256620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_256624:
    // 0x256624: 0x320f809  jalr        $t9
label_256628:
    if (ctx->pc == 0x256628u) {
        ctx->pc = 0x256628u;
            // 0x256628: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25662Cu;
        goto label_25662c;
    }
    ctx->pc = 0x256624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25662Cu);
        ctx->pc = 0x256628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256624u;
            // 0x256628: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25662Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25662Cu; }
            if (ctx->pc != 0x25662Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25662Cu;
label_25662c:
    // 0x25662c: 0x0  nop
    ctx->pc = 0x25662cu;
    // NOP
label_256630:
    // 0x256630: 0x1000001f  b           . + 4 + (0x1F << 2)
label_256634:
    if (ctx->pc == 0x256634u) {
        ctx->pc = 0x256638u;
        goto label_256638;
    }
    ctx->pc = 0x256630u;
    {
        const bool branch_taken_0x256630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256630) {
            ctx->pc = 0x2566B0u;
            goto label_2566b0;
        }
    }
    ctx->pc = 0x256638u;
label_256638:
    // 0x256638: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x256638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_25663c:
    // 0x25663c: 0x1020fefe  beqz        $at, . + 4 + (-0x102 << 2)
label_256640:
    if (ctx->pc == 0x256640u) {
        ctx->pc = 0x256644u;
        goto label_256644;
    }
    ctx->pc = 0x25663Cu;
    {
        const bool branch_taken_0x25663c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25663c) {
            ctx->pc = 0x256238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256238;
        }
    }
    ctx->pc = 0x256644u;
label_256644:
    // 0x256644: 0x3c0e0060  lui         $t6, 0x60
    ctx->pc = 0x256644u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)96 << 16));
label_256648:
    // 0x256648: 0x3c0d0060  lui         $t5, 0x60
    ctx->pc = 0x256648u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)96 << 16));
label_25664c:
    // 0x25664c: 0x3c0c0060  lui         $t4, 0x60
    ctx->pc = 0x25664cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)96 << 16));
label_256650:
    // 0x256650: 0x3c0b0064  lui         $t3, 0x64
    ctx->pc = 0x256650u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
label_256654:
    // 0x256654: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x256654u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
label_256658:
    // 0x256658: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x256658u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
label_25665c:
    // 0x25665c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x25665cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_256660:
    // 0x256660: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x256660u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_256664:
    // 0x256664: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x256664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_256668:
    // 0x256668: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x256668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_25666c:
    // 0x25666c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25666cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256670:
    // 0x256670: 0x27b90114  addiu       $t9, $sp, 0x114
    ctx->pc = 0x256670u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_256674:
    // 0x256674: 0x27b80118  addiu       $t8, $sp, 0x118
    ctx->pc = 0x256674u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_256678:
    // 0x256678: 0x27af011c  addiu       $t7, $sp, 0x11C
    ctx->pc = 0x256678u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_25667c:
    // 0x25667c: 0x25cecf94  addiu       $t6, $t6, -0x306C
    ctx->pc = 0x25667cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294954900));
label_256680:
    // 0x256680: 0x25adcf98  addiu       $t5, $t5, -0x3068
    ctx->pc = 0x256680u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294954904));
label_256684:
    // 0x256684: 0x258ccf9c  addiu       $t4, $t4, -0x3064
    ctx->pc = 0x256684u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294954908));
label_256688:
    // 0x256688: 0x256bf934  addiu       $t3, $t3, -0x6CC
    ctx->pc = 0x256688u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965556));
label_25668c:
    // 0x25668c: 0x254af938  addiu       $t2, $t2, -0x6C8
    ctx->pc = 0x25668cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965560));
label_256690:
    // 0x256690: 0x2529f93c  addiu       $t1, $t1, -0x6C4
    ctx->pc = 0x256690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965564));
label_256694:
    // 0x256694: 0x2508f904  addiu       $t0, $t0, -0x6FC
    ctx->pc = 0x256694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965508));
label_256698:
    // 0x256698: 0x24e7f908  addiu       $a3, $a3, -0x6F8
    ctx->pc = 0x256698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965512));
label_25669c:
    // 0x25669c: 0x24c6f90c  addiu       $a2, $a2, -0x6F4
    ctx->pc = 0x25669cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965516));
label_2566a0:
    // 0x2566a0: 0x27a500f4  addiu       $a1, $sp, 0xF4
    ctx->pc = 0x2566a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_2566a4:
    // 0x2566a4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x2566a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_2566a8:
    // 0x2566a8: 0x1000fedf  b           . + 4 + (-0x121 << 2)
label_2566ac:
    if (ctx->pc == 0x2566ACu) {
        ctx->pc = 0x2566ACu;
            // 0x2566ac: 0x27a300fc  addiu       $v1, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->pc = 0x2566B0u;
        goto label_2566b0;
    }
    ctx->pc = 0x2566A8u;
    {
        const bool branch_taken_0x2566a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2566ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2566A8u;
            // 0x2566ac: 0x27a300fc  addiu       $v1, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566a8) {
            ctx->pc = 0x256228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256228;
        }
    }
    ctx->pc = 0x2566B0u;
label_2566b0:
    // 0x2566b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2566b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2566b4:
    // 0x2566b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2566b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2566b8:
    // 0x2566b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2566b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2566bc:
    // 0x2566bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2566bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2566c0:
    // 0x2566c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2566c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2566c4:
    // 0x2566c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2566c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2566c8:
    // 0x2566c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2566c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2566cc:
    // 0x2566cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2566ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2566d0:
    // 0x2566d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2566d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2566d4:
    // 0x2566d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2566d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2566d8:
    // 0x2566d8: 0x3e00008  jr          $ra
label_2566dc:
    if (ctx->pc == 0x2566DCu) {
        ctx->pc = 0x2566DCu;
            // 0x2566dc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x2566E0u;
        goto label_2566e0;
    }
    ctx->pc = 0x2566D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2566DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2566D8u;
            // 0x2566dc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2566E0u;
label_2566e0:
    // 0x2566e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2566e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2566e4:
    // 0x2566e4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2566e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2566e8:
    // 0x2566e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2566e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2566ec:
    // 0x2566ec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2566ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2566f0:
    // 0x2566f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2566f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2566f4:
    // 0x2566f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2566f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2566f8:
    // 0x2566f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2566f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2566fc:
    // 0x2566fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2566fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_256700:
    // 0x256700: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x256700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_256704:
    // 0x256704: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x256704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_256708:
    // 0x256708: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x256708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25670c:
    // 0x25670c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25670cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_256710:
    // 0x256710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_256714:
    // 0x256714: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_256718:
    // 0x256718: 0x8c900074  lw          $s0, 0x74($a0)
    ctx->pc = 0x256718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_25671c:
    // 0x25671c: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x25671cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_256720:
    // 0x256720: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x256720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_256724:
    // 0x256724: 0x101943  sra         $v1, $s0, 5
    ctx->pc = 0x256724u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 5));
label_256728:
    // 0x256728: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x256728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_25672c:
    // 0x25672c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25672cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_256730:
    // 0x256730: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x256730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_256734:
    // 0x256734: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x256734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_256738:
    // 0x256738: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x256738u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25673c:
    // 0x25673c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x25673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_256740:
    // 0x256740: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x256740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_256744:
    // 0x256744: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x256744u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_256748:
    // 0x256748: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_25674c:
    if (ctx->pc == 0x25674Cu) {
        ctx->pc = 0x25674Cu;
            // 0x25674c: 0x10b0c3  sra         $s6, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 16), 3));
        ctx->pc = 0x256750u;
        goto label_256750;
    }
    ctx->pc = 0x256748u;
    {
        const bool branch_taken_0x256748 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25674Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256748u;
            // 0x25674c: 0x10b0c3  sra         $s6, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256748) {
            ctx->pc = 0x256758u;
            goto label_256758;
        }
    }
    ctx->pc = 0x256750u;
label_256750:
    // 0x256750: 0x10000007  b           . + 4 + (0x7 << 2)
label_256754:
    if (ctx->pc == 0x256754u) {
        ctx->pc = 0x256754u;
            // 0x256754: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x256758u;
        goto label_256758;
    }
    ctx->pc = 0x256750u;
    {
        const bool branch_taken_0x256750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256750u;
            // 0x256754: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256750) {
            ctx->pc = 0x256770u;
            goto label_256770;
        }
    }
    ctx->pc = 0x256758u;
label_256758:
    // 0x256758: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x256758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25675c:
    // 0x25675c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x25675cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_256760:
    // 0x256760: 0x320f809  jalr        $t9
label_256764:
    if (ctx->pc == 0x256764u) {
        ctx->pc = 0x256768u;
        goto label_256768;
    }
    ctx->pc = 0x256760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x256768u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x256768u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x256768u; }
            if (ctx->pc != 0x256768u) { return; }
        }
        }
    }
    ctx->pc = 0x256768u;
label_256768:
    // 0x256768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x256768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25676c:
    // 0x25676c: 0x0  nop
    ctx->pc = 0x25676cu;
    // NOP
label_256770:
    // 0x256770: 0x16b103  sra         $s6, $s6, 4
    ctx->pc = 0x256770u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 4));
label_256774:
    // 0x256774: 0x6c0000a  bltz        $s6, . + 4 + (0xA << 2)
label_256778:
    if (ctx->pc == 0x256778u) {
        ctx->pc = 0x256778u;
            // 0x256778: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25677Cu;
        goto label_25677c;
    }
    ctx->pc = 0x256774u;
    {
        const bool branch_taken_0x256774 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x256778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256774u;
            // 0x256778: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256774) {
            ctx->pc = 0x2567A0u;
            goto label_2567a0;
        }
    }
    ctx->pc = 0x25677Cu;
label_25677c:
    // 0x25677c: 0x0  nop
    ctx->pc = 0x25677cu;
    // NOP
label_256780:
    // 0x256780: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x256780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_256784:
    // 0x256784: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x256784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_256788:
    // 0x256788: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x256788u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_25678c:
    // 0x25678c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25678cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_256790:
    // 0x256790: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x256790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_256794:
    // 0x256794: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x256794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_256798:
    // 0x256798: 0x6c1fff9  bgez        $s6, . + 4 + (-0x7 << 2)
label_25679c:
    if (ctx->pc == 0x25679Cu) {
        ctx->pc = 0x25679Cu;
            // 0x25679c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2567A0u;
        goto label_2567a0;
    }
    ctx->pc = 0x256798u;
    {
        const bool branch_taken_0x256798 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x25679Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256798u;
            // 0x25679c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256798) {
            ctx->pc = 0x256780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256780;
        }
    }
    ctx->pc = 0x2567A0u;
label_2567a0:
    // 0x2567a0: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2567a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2567a4:
    // 0x2567a4: 0x10200080  beqz        $at, . + 4 + (0x80 << 2)
label_2567a8:
    if (ctx->pc == 0x2567A8u) {
        ctx->pc = 0x2567A8u;
            // 0x2567a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2567ACu;
        goto label_2567ac;
    }
    ctx->pc = 0x2567A4u;
    {
        const bool branch_taken_0x2567a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2567A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2567A4u;
            // 0x2567a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567a4) {
            ctx->pc = 0x2569A8u;
            goto label_2569a8;
        }
    }
    ctx->pc = 0x2567ACu;
label_2567ac:
    // 0x2567ac: 0x2a410009  slti        $at, $s2, 0x9
    ctx->pc = 0x2567acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_2567b0:
    // 0x2567b0: 0x14200067  bnez        $at, . + 4 + (0x67 << 2)
label_2567b4:
    if (ctx->pc == 0x2567B4u) {
        ctx->pc = 0x2567B4u;
            // 0x2567b4: 0x2644fff8  addiu       $a0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->pc = 0x2567B8u;
        goto label_2567b8;
    }
    ctx->pc = 0x2567B0u;
    {
        const bool branch_taken_0x2567b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2567B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2567B0u;
            // 0x2567b4: 0x2644fff8  addiu       $a0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567b0) {
            ctx->pc = 0x256950u;
            goto label_256950;
        }
    }
    ctx->pc = 0x2567B8u;
label_2567b8:
    // 0x2567b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2567b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2567bc:
    // 0x2567bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2567bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2567c0:
    // 0x2567c0: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2567c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2567c4:
    // 0x2567c4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2567c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2567c8:
    // 0x2567c8: 0xa4302a  slt         $a2, $a1, $a0
    ctx->pc = 0x2567c8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2567cc:
    // 0x2567cc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2567ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2567d0:
    // 0x2567d0: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2567d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2567d4:
    // 0x2567d4: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2567d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2567d8:
    // 0x2567d8: 0x30e8001f  andi        $t0, $a3, 0x1F
    ctx->pc = 0x2567d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_2567dc:
    // 0x2567dc: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x2567dcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
label_2567e0:
    // 0x2567e0: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x2567e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_2567e4:
    // 0x2567e4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2567e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2567e8:
    // 0x2567e8: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x2567e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_2567ec:
    // 0x2567ec: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x2567ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2567f0:
    // 0x2567f0: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x2567f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
label_2567f4:
    // 0x2567f4: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2567f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_2567f8:
    // 0x2567f8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2567f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2567fc:
    // 0x2567fc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2567fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256800:
    // 0x256800: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x256800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_256804:
    // 0x256804: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x256804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_256808:
    // 0x256808: 0x30e8001f  andi        $t0, $a3, 0x1F
    ctx->pc = 0x256808u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_25680c:
    // 0x25680c: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x25680cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
label_256810:
    // 0x256810: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x256810u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_256814:
    // 0x256814: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x256814u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_256818:
    // 0x256818: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x256818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_25681c:
    // 0x25681c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x25681cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256820:
    // 0x256820: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x256820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
label_256824:
    // 0x256824: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x256824u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_256828:
    // 0x256828: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25682c:
    // 0x25682c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x25682cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256830:
    // 0x256830: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x256830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_256834:
    // 0x256834: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x256834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_256838:
    // 0x256838: 0x30e8001f  andi        $t0, $a3, 0x1F
    ctx->pc = 0x256838u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_25683c:
    // 0x25683c: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x25683cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
label_256840:
    // 0x256840: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x256840u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_256844:
    // 0x256844: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x256844u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_256848:
    // 0x256848: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x256848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_25684c:
    // 0x25684c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x25684cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256850:
    // 0x256850: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x256850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
label_256854:
    // 0x256854: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x256854u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_256858:
    // 0x256858: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25685c:
    // 0x25685c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x25685cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256860:
    // 0x256860: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x256860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_256864:
    // 0x256864: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x256864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_256868:
    // 0x256868: 0x30e8001f  andi        $t0, $a3, 0x1F
    ctx->pc = 0x256868u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_25686c:
    // 0x25686c: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x25686cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
label_256870:
    // 0x256870: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x256870u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_256874:
    // 0x256874: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x256874u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_256878:
    // 0x256878: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x256878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_25687c:
    // 0x25687c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x25687cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256880:
    // 0x256880: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x256880u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
label_256884:
    // 0x256884: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x256884u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_256888:
    // 0x256888: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25688c:
    // 0x25688c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x25688cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256890:
    // 0x256890: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x256890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_256894:
    // 0x256894: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x256894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_256898:
    // 0x256898: 0x30e8001f  andi        $t0, $a3, 0x1F
    ctx->pc = 0x256898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_25689c:
    // 0x25689c: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x25689cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
label_2568a0:
    // 0x2568a0: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x2568a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_2568a4:
    // 0x2568a4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2568a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2568a8:
    // 0x2568a8: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x2568a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_2568ac:
    // 0x2568ac: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x2568acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2568b0:
    // 0x2568b0: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x2568b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
label_2568b4:
    // 0x2568b4: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2568b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_2568b8:
    // 0x2568b8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2568b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2568bc:
    // 0x2568bc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2568bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2568c0:
    // 0x2568c0: 0x8ce70014  lw          $a3, 0x14($a3)
    ctx->pc = 0x2568c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_2568c4:
    // 0x2568c4: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2568c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2568c8:
    // 0x2568c8: 0x30e8001f  andi        $t0, $a3, 0x1F
    ctx->pc = 0x2568c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_2568cc:
    // 0x2568cc: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x2568ccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
label_2568d0:
    // 0x2568d0: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x2568d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_2568d4:
    // 0x2568d4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2568d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2568d8:
    // 0x2568d8: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x2568d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_2568dc:
    // 0x2568dc: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x2568dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2568e0:
    // 0x2568e0: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x2568e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
label_2568e4:
    // 0x2568e4: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2568e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_2568e8:
    // 0x2568e8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2568e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2568ec:
    // 0x2568ec: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2568ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2568f0:
    // 0x2568f0: 0x8ce70018  lw          $a3, 0x18($a3)
    ctx->pc = 0x2568f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_2568f4:
    // 0x2568f4: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2568f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2568f8:
    // 0x2568f8: 0x30e8001f  andi        $t0, $a3, 0x1F
    ctx->pc = 0x2568f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_2568fc:
    // 0x2568fc: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x2568fcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
label_256900:
    // 0x256900: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x256900u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_256904:
    // 0x256904: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x256904u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_256908:
    // 0x256908: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x256908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_25690c:
    // 0x25690c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x25690cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256910:
    // 0x256910: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x256910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
label_256914:
    // 0x256914: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x256914u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_256918:
    // 0x256918: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256918u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25691c:
    // 0x25691c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x25691cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256920:
    // 0x256920: 0x8ce7001c  lw          $a3, 0x1C($a3)
    ctx->pc = 0x256920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_256924:
    // 0x256924: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x256924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_256928:
    // 0x256928: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x256928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_25692c:
    // 0x25692c: 0x30e8001f  andi        $t0, $a3, 0x1F
    ctx->pc = 0x25692cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_256930:
    // 0x256930: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x256930u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
label_256934:
    // 0x256934: 0x1024804  sllv        $t1, $v0, $t0
    ctx->pc = 0x256934u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_256938:
    // 0x256938: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x256938u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_25693c:
    // 0x25693c: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x25693cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_256940:
    // 0x256940: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x256940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256944:
    // 0x256944: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x256944u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
label_256948:
    // 0x256948: 0x14c0ff9d  bnez        $a2, . + 4 + (-0x63 << 2)
label_25694c:
    if (ctx->pc == 0x25694Cu) {
        ctx->pc = 0x25694Cu;
            // 0x25694c: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->pc = 0x256950u;
        goto label_256950;
    }
    ctx->pc = 0x256948u;
    {
        const bool branch_taken_0x256948 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25694Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256948u;
            // 0x25694c: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256948) {
            ctx->pc = 0x2567C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2567c0;
        }
    }
    ctx->pc = 0x256950u;
label_256950:
    // 0x256950: 0xb2082a  slt         $at, $a1, $s2
    ctx->pc = 0x256950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_256954:
    // 0x256954: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_256958:
    if (ctx->pc == 0x256958u) {
        ctx->pc = 0x25695Cu;
        goto label_25695c;
    }
    ctx->pc = 0x256954u;
    {
        const bool branch_taken_0x256954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x256954) {
            ctx->pc = 0x2569A8u;
            goto label_2569a8;
        }
    }
    ctx->pc = 0x25695Cu;
label_25695c:
    // 0x25695c: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x25695cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_256960:
    // 0x256960: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x256960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256964:
    // 0x256964: 0x0  nop
    ctx->pc = 0x256964u;
    // NOP
label_256968:
    // 0x256968: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x256968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25696c:
    // 0x25696c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_256970:
    // 0x256970: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x256970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_256974:
    // 0x256974: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x256974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_256978:
    // 0x256978: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x256978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25697c:
    // 0x25697c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x25697cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_256980:
    // 0x256980: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x256980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_256984:
    // 0x256984: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x256984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_256988:
    // 0x256988: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x256988u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_25698c:
    // 0x25698c: 0x873004  sllv        $a2, $a3, $a0
    ctx->pc = 0x25698cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_256990:
    // 0x256990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x256990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_256994:
    // 0x256994: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x256994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_256998:
    // 0x256998: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x256998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25699c:
    // 0x25699c: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x25699cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
label_2569a0:
    // 0x2569a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_2569a4:
    if (ctx->pc == 0x2569A4u) {
        ctx->pc = 0x2569A4u;
            // 0x2569a4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2569A8u;
        goto label_2569a8;
    }
    ctx->pc = 0x2569A0u;
    {
        const bool branch_taken_0x2569a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2569A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2569A0u;
            // 0x2569a4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569a0) {
            ctx->pc = 0x256968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256968;
        }
    }
    ctx->pc = 0x2569A8u;
label_2569a8:
    // 0x2569a8: 0xa3a00088  sb          $zero, 0x88($sp)
    ctx->pc = 0x2569a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 0));
label_2569ac:
    // 0x2569ac: 0x83a70088  lb          $a3, 0x88($sp)
    ctx->pc = 0x2569acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
label_2569b0:
    // 0x2569b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2569b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2569b4:
    // 0x2569b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2569b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2569b8:
    // 0x2569b8: 0xc095c70  jal         func_2571C0
label_2569bc:
    if (ctx->pc == 0x2569BCu) {
        ctx->pc = 0x2569BCu;
            // 0x2569bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2569C0u;
        goto label_2569c0;
    }
    ctx->pc = 0x2569B8u;
    SET_GPR_U32(ctx, 31, 0x2569C0u);
    ctx->pc = 0x2569BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2569B8u;
            // 0x2569bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2571C0u;
    if (runtime->hasFunction(0x2571C0u)) {
        auto targetFn = runtime->lookupFunction(0x2571C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569C0u; }
        if (ctx->pc != 0x2569C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002571C0_0x2571c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569C0u; }
        if (ctx->pc != 0x2569C0u) { return; }
    }
    ctx->pc = 0x2569C0u;
label_2569c0:
    // 0x2569c0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2569c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2569c4:
    // 0x2569c4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2569c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2569c8:
    // 0x2569c8: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x2569c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
label_2569cc:
    // 0x2569cc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2569ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2569d0:
    // 0x2569d0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_2569d4:
    if (ctx->pc == 0x2569D4u) {
        ctx->pc = 0x2569D8u;
        goto label_2569d8;
    }
    ctx->pc = 0x2569D0u;
    {
        const bool branch_taken_0x2569d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2569d0) {
            ctx->pc = 0x2569E8u;
            goto label_2569e8;
        }
    }
    ctx->pc = 0x2569D8u;
label_2569d8:
    // 0x2569d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2569d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2569dc:
    // 0x2569dc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2569dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2569e0:
    // 0x2569e0: 0x320f809  jalr        $t9
label_2569e4:
    if (ctx->pc == 0x2569E4u) {
        ctx->pc = 0x2569E4u;
            // 0x2569e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2569E8u;
        goto label_2569e8;
    }
    ctx->pc = 0x2569E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2569E8u);
        ctx->pc = 0x2569E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2569E0u;
            // 0x2569e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2569E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2569E8u; }
            if (ctx->pc != 0x2569E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2569E8u;
label_2569e8:
    // 0x2569e8: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2569e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2569ec:
    // 0x2569ec: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2569ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_2569f0:
    // 0x2569f0: 0x10200081  beqz        $at, . + 4 + (0x81 << 2)
label_2569f4:
    if (ctx->pc == 0x2569F4u) {
        ctx->pc = 0x2569F4u;
            // 0x2569f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2569F8u;
        goto label_2569f8;
    }
    ctx->pc = 0x2569F0u;
    {
        const bool branch_taken_0x2569f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2569F0u;
            // 0x2569f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569f0) {
            ctx->pc = 0x256BF8u;
            goto label_256bf8;
        }
    }
    ctx->pc = 0x2569F8u;
label_2569f8:
    // 0x2569f8: 0x2a410009  slti        $at, $s2, 0x9
    ctx->pc = 0x2569f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_2569fc:
    // 0x2569fc: 0x14200068  bnez        $at, . + 4 + (0x68 << 2)
label_256a00:
    if (ctx->pc == 0x256A00u) {
        ctx->pc = 0x256A00u;
            // 0x256a00: 0x2644fff8  addiu       $a0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->pc = 0x256A04u;
        goto label_256a04;
    }
    ctx->pc = 0x2569FCu;
    {
        const bool branch_taken_0x2569fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x256A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2569FCu;
            // 0x256a00: 0x2644fff8  addiu       $a0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569fc) {
            ctx->pc = 0x256BA0u;
            goto label_256ba0;
        }
    }
    ctx->pc = 0x256A04u;
label_256a04:
    // 0x256a04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x256a04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256a08:
    // 0x256a08: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x256a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_256a0c:
    // 0x256a0c: 0x0  nop
    ctx->pc = 0x256a0cu;
    // NOP
label_256a10:
    // 0x256a10: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x256a10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256a14:
    // 0x256a14: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x256a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_256a18:
    // 0x256a18: 0x8ea70070  lw          $a3, 0x70($s5)
    ctx->pc = 0x256a18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256a1c:
    // 0x256a1c: 0xa4302a  slt         $a2, $a1, $a0
    ctx->pc = 0x256a1cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_256a20:
    // 0x256a20: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x256a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_256a24:
    // 0x256a24: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x256a24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256a28:
    // 0x256a28: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x256a28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256a2c:
    // 0x256a2c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x256a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_256a30:
    // 0x256a30: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x256a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_256a34:
    // 0x256a34: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x256a34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_256a38:
    // 0x256a38: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256a38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256a3c:
    // 0x256a3c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x256a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256a40:
    // 0x256a40: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x256a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_256a44:
    // 0x256a44: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x256a44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_256a48:
    // 0x256a48: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x256a48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256a4c:
    // 0x256a4c: 0x8ea70070  lw          $a3, 0x70($s5)
    ctx->pc = 0x256a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256a50:
    // 0x256a50: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x256a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_256a54:
    // 0x256a54: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x256a54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_256a58:
    // 0x256a58: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x256a58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256a5c:
    // 0x256a5c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x256a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_256a60:
    // 0x256a60: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x256a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_256a64:
    // 0x256a64: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x256a64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_256a68:
    // 0x256a68: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256a68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256a6c:
    // 0x256a6c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x256a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256a70:
    // 0x256a70: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x256a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_256a74:
    // 0x256a74: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x256a74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_256a78:
    // 0x256a78: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x256a78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256a7c:
    // 0x256a7c: 0x8ea70070  lw          $a3, 0x70($s5)
    ctx->pc = 0x256a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256a80:
    // 0x256a80: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x256a80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_256a84:
    // 0x256a84: 0x8d080008  lw          $t0, 0x8($t0)
    ctx->pc = 0x256a84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_256a88:
    // 0x256a88: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x256a88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256a8c:
    // 0x256a8c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x256a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_256a90:
    // 0x256a90: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x256a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_256a94:
    // 0x256a94: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x256a94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_256a98:
    // 0x256a98: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256a9c:
    // 0x256a9c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x256a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256aa0:
    // 0x256aa0: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x256aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_256aa4:
    // 0x256aa4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x256aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_256aa8:
    // 0x256aa8: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x256aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256aac:
    // 0x256aac: 0x8ea70070  lw          $a3, 0x70($s5)
    ctx->pc = 0x256aacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256ab0:
    // 0x256ab0: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x256ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_256ab4:
    // 0x256ab4: 0x8d08000c  lw          $t0, 0xC($t0)
    ctx->pc = 0x256ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_256ab8:
    // 0x256ab8: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x256ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256abc:
    // 0x256abc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x256abcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_256ac0:
    // 0x256ac0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x256ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_256ac4:
    // 0x256ac4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x256ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_256ac8:
    // 0x256ac8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256acc:
    // 0x256acc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x256accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256ad0:
    // 0x256ad0: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x256ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_256ad4:
    // 0x256ad4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x256ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_256ad8:
    // 0x256ad8: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x256ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256adc:
    // 0x256adc: 0x8ea70070  lw          $a3, 0x70($s5)
    ctx->pc = 0x256adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256ae0:
    // 0x256ae0: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x256ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_256ae4:
    // 0x256ae4: 0x8d080010  lw          $t0, 0x10($t0)
    ctx->pc = 0x256ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_256ae8:
    // 0x256ae8: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x256ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256aec:
    // 0x256aec: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x256aecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_256af0:
    // 0x256af0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x256af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_256af4:
    // 0x256af4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x256af4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_256af8:
    // 0x256af8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256af8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256afc:
    // 0x256afc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x256afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256b00:
    // 0x256b00: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x256b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_256b04:
    // 0x256b04: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x256b04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_256b08:
    // 0x256b08: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x256b08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256b0c:
    // 0x256b0c: 0x8ea70070  lw          $a3, 0x70($s5)
    ctx->pc = 0x256b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256b10:
    // 0x256b10: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x256b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_256b14:
    // 0x256b14: 0x8d080014  lw          $t0, 0x14($t0)
    ctx->pc = 0x256b14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_256b18:
    // 0x256b18: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x256b18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256b1c:
    // 0x256b1c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x256b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_256b20:
    // 0x256b20: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x256b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_256b24:
    // 0x256b24: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x256b24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_256b28:
    // 0x256b28: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256b2c:
    // 0x256b2c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x256b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256b30:
    // 0x256b30: 0x8ce70014  lw          $a3, 0x14($a3)
    ctx->pc = 0x256b30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_256b34:
    // 0x256b34: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x256b34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_256b38:
    // 0x256b38: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x256b38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256b3c:
    // 0x256b3c: 0x8ea70070  lw          $a3, 0x70($s5)
    ctx->pc = 0x256b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256b40:
    // 0x256b40: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x256b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_256b44:
    // 0x256b44: 0x8d080018  lw          $t0, 0x18($t0)
    ctx->pc = 0x256b44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_256b48:
    // 0x256b48: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x256b48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256b4c:
    // 0x256b4c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x256b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_256b50:
    // 0x256b50: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x256b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_256b54:
    // 0x256b54: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x256b54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_256b58:
    // 0x256b58: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256b58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256b5c:
    // 0x256b5c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x256b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256b60:
    // 0x256b60: 0x8ce70018  lw          $a3, 0x18($a3)
    ctx->pc = 0x256b60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_256b64:
    // 0x256b64: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x256b64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_256b68:
    // 0x256b68: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x256b68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256b6c:
    // 0x256b6c: 0x8ea70070  lw          $a3, 0x70($s5)
    ctx->pc = 0x256b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256b70:
    // 0x256b70: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x256b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_256b74:
    // 0x256b74: 0x8d08001c  lw          $t0, 0x1C($t0)
    ctx->pc = 0x256b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_256b78:
    // 0x256b78: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x256b78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_256b7c:
    // 0x256b7c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x256b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_256b80:
    // 0x256b80: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x256b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_256b84:
    // 0x256b84: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x256b84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_256b88:
    // 0x256b88: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x256b88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256b8c:
    // 0x256b8c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x256b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_256b90:
    // 0x256b90: 0x8ce7001c  lw          $a3, 0x1C($a3)
    ctx->pc = 0x256b90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_256b94:
    // 0x256b94: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x256b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_256b98:
    // 0x256b98: 0x14c0ff9d  bnez        $a2, . + 4 + (-0x63 << 2)
label_256b9c:
    if (ctx->pc == 0x256B9Cu) {
        ctx->pc = 0x256B9Cu;
            // 0x256b9c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x256BA0u;
        goto label_256ba0;
    }
    ctx->pc = 0x256B98u;
    {
        const bool branch_taken_0x256b98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x256B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256B98u;
            // 0x256b9c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b98) {
            ctx->pc = 0x256A10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256a10;
        }
    }
    ctx->pc = 0x256BA0u;
label_256ba0:
    // 0x256ba0: 0xb2082a  slt         $at, $a1, $s2
    ctx->pc = 0x256ba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_256ba4:
    // 0x256ba4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_256ba8:
    if (ctx->pc == 0x256BA8u) {
        ctx->pc = 0x256BACu;
        goto label_256bac;
    }
    ctx->pc = 0x256BA4u;
    {
        const bool branch_taken_0x256ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x256ba4) {
            ctx->pc = 0x256BF8u;
            goto label_256bf8;
        }
    }
    ctx->pc = 0x256BACu;
label_256bac:
    // 0x256bac: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x256bacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_256bb0:
    // 0x256bb0: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x256bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_256bb4:
    // 0x256bb4: 0x0  nop
    ctx->pc = 0x256bb4u;
    // NOP
label_256bb8:
    // 0x256bb8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x256bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256bbc:
    // 0x256bbc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x256bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_256bc0:
    // 0x256bc0: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x256bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256bc4:
    // 0x256bc4: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x256bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_256bc8:
    // 0x256bc8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x256bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_256bcc:
    // 0x256bcc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x256bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_256bd0:
    // 0x256bd0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x256bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_256bd4:
    // 0x256bd4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x256bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_256bd8:
    // 0x256bd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x256bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_256bdc:
    // 0x256bdc: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x256bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_256be0:
    // 0x256be0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x256be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256be4:
    // 0x256be4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x256be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_256be8:
    // 0x256be8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x256be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_256bec:
    // 0x256bec: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x256becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_256bf0:
    // 0x256bf0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_256bf4:
    if (ctx->pc == 0x256BF4u) {
        ctx->pc = 0x256BF4u;
            // 0x256bf4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x256BF8u;
        goto label_256bf8;
    }
    ctx->pc = 0x256BF0u;
    {
        const bool branch_taken_0x256bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256BF0u;
            // 0x256bf4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bf0) {
            ctx->pc = 0x256BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256bb8;
        }
    }
    ctx->pc = 0x256BF8u;
label_256bf8:
    // 0x256bf8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x256bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_256bfc:
    // 0x256bfc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x256bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_256c00:
    // 0x256c00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x256c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_256c04:
    // 0x256c04: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x256c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_256c08:
    // 0x256c08: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x256c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_256c0c:
    // 0x256c0c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x256c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_256c10:
    // 0x256c10: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x256c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_256c14:
    // 0x256c14: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x256c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_256c18:
    // 0x256c18: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x256c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_256c1c:
    // 0x256c1c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x256c1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_256c20:
    // 0x256c20: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_256c24:
    if (ctx->pc == 0x256C24u) {
        ctx->pc = 0x256C28u;
        goto label_256c28;
    }
    ctx->pc = 0x256C20u;
    {
        const bool branch_taken_0x256c20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x256c20) {
            ctx->pc = 0x256C30u;
            goto label_256c30;
        }
    }
    ctx->pc = 0x256C28u;
label_256c28:
    // 0x256c28: 0x10000005  b           . + 4 + (0x5 << 2)
label_256c2c:
    if (ctx->pc == 0x256C2Cu) {
        ctx->pc = 0x256C2Cu;
            // 0x256c2c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x256C30u;
        goto label_256c30;
    }
    ctx->pc = 0x256C28u;
    {
        const bool branch_taken_0x256c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256C28u;
            // 0x256c2c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c28) {
            ctx->pc = 0x256C40u;
            goto label_256c40;
        }
    }
    ctx->pc = 0x256C30u;
label_256c30:
    // 0x256c30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x256c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_256c34:
    // 0x256c34: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x256c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_256c38:
    // 0x256c38: 0x320f809  jalr        $t9
label_256c3c:
    if (ctx->pc == 0x256C3Cu) {
        ctx->pc = 0x256C40u;
        goto label_256c40;
    }
    ctx->pc = 0x256C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x256C40u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x256C40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x256C40u; }
            if (ctx->pc != 0x256C40u) { return; }
        }
        }
    }
    ctx->pc = 0x256C40u;
label_256c40:
    // 0x256c40: 0x2608ffff  addiu       $t0, $s0, -0x1
    ctx->pc = 0x256c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_256c44:
    // 0x256c44: 0x100082a  slt         $at, $t0, $zero
    ctx->pc = 0x256c44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_256c48:
    // 0x256c48: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x256c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_256c4c:
    // 0x256c4c: 0x14200044  bnez        $at, . + 4 + (0x44 << 2)
label_256c50:
    if (ctx->pc == 0x256C50u) {
        ctx->pc = 0x256C50u;
            // 0x256c50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256C54u;
        goto label_256c54;
    }
    ctx->pc = 0x256C4Cu;
    {
        const bool branch_taken_0x256c4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x256C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256C4Cu;
            // 0x256c50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c4c) {
            ctx->pc = 0x256D60u;
            goto label_256d60;
        }
    }
    ctx->pc = 0x256C54u;
label_256c54:
    // 0x256c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x256c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256c58:
    // 0x256c58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x256c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256c5c:
    // 0x256c5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x256c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_256c60:
    // 0x256c60: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x256c60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_256c64:
    // 0x256c64: 0x27a3008c  addiu       $v1, $sp, 0x8C
    ctx->pc = 0x256c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_256c68:
    // 0x256c68: 0x8ea90070  lw          $t1, 0x70($s5)
    ctx->pc = 0x256c68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256c6c:
    // 0x256c6c: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x256c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_256c70:
    // 0x256c70: 0x1266021  addu        $t4, $t1, $a2
    ctx->pc = 0x256c70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_256c74:
    // 0x256c74: 0x8d86000c  lw          $a2, 0xC($t4)
    ctx->pc = 0x256c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_256c78:
    // 0x256c78: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
label_256c7c:
    if (ctx->pc == 0x256C7Cu) {
        ctx->pc = 0x256C80u;
        goto label_256c80;
    }
    ctx->pc = 0x256C78u;
    {
        const bool branch_taken_0x256c78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x256c78) {
            ctx->pc = 0x256C98u;
            goto label_256c98;
        }
    }
    ctx->pc = 0x256C80u;
label_256c80:
    // 0x256c80: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x256c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256c84:
    // 0x256c84: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x256c84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_256c88:
    // 0x256c88: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x256c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_256c8c:
    // 0x256c8c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x256c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_256c90:
    // 0x256c90: 0x1000002f  b           . + 4 + (0x2F << 2)
label_256c94:
    if (ctx->pc == 0x256C94u) {
        ctx->pc = 0x256C94u;
            // 0x256c94: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x256C98u;
        goto label_256c98;
    }
    ctx->pc = 0x256C90u;
    {
        const bool branch_taken_0x256c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256C90u;
            // 0x256c94: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c90) {
            ctx->pc = 0x256D50u;
            goto label_256d50;
        }
    }
    ctx->pc = 0x256C98u;
label_256c98:
    // 0x256c98: 0x1253021  addu        $a2, $t1, $a1
    ctx->pc = 0x256c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_256c9c:
    // 0x256c9c: 0x8cc9000c  lw          $t1, 0xC($a2)
    ctx->pc = 0x256c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_256ca0:
    // 0x256ca0: 0x15230023  bne         $t1, $v1, . + 4 + (0x23 << 2)
label_256ca4:
    if (ctx->pc == 0x256CA4u) {
        ctx->pc = 0x256CA8u;
        goto label_256ca8;
    }
    ctx->pc = 0x256CA0u;
    {
        const bool branch_taken_0x256ca0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x256ca0) {
            ctx->pc = 0x256D30u;
            goto label_256d30;
        }
    }
    ctx->pc = 0x256CA8u;
label_256ca8:
    // 0x256ca8: 0x95890000  lhu         $t1, 0x0($t4)
    ctx->pc = 0x256ca8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_256cac:
    // 0x256cac: 0x85880  sll         $t3, $t0, 2
    ctx->pc = 0x256cacu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_256cb0:
    // 0x256cb0: 0xa4c90000  sh          $t1, 0x0($a2)
    ctx->pc = 0x256cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 9));
label_256cb4:
    // 0x256cb4: 0x95890002  lhu         $t1, 0x2($t4)
    ctx->pc = 0x256cb4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
label_256cb8:
    // 0x256cb8: 0xa4c90002  sh          $t1, 0x2($a2)
    ctx->pc = 0x256cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 9));
label_256cbc:
    // 0x256cbc: 0x95890004  lhu         $t1, 0x4($t4)
    ctx->pc = 0x256cbcu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
label_256cc0:
    // 0x256cc0: 0xa4c90004  sh          $t1, 0x4($a2)
    ctx->pc = 0x256cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 9));
label_256cc4:
    // 0x256cc4: 0x95890006  lhu         $t1, 0x6($t4)
    ctx->pc = 0x256cc4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 6)));
label_256cc8:
    // 0x256cc8: 0xa4c90006  sh          $t1, 0x6($a2)
    ctx->pc = 0x256cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 9));
label_256ccc:
    // 0x256ccc: 0x95890008  lhu         $t1, 0x8($t4)
    ctx->pc = 0x256cccu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 8)));
label_256cd0:
    // 0x256cd0: 0xa4c90008  sh          $t1, 0x8($a2)
    ctx->pc = 0x256cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 9));
label_256cd4:
    // 0x256cd4: 0x9589000a  lhu         $t1, 0xA($t4)
    ctx->pc = 0x256cd4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 10)));
label_256cd8:
    // 0x256cd8: 0xa4c9000a  sh          $t1, 0xA($a2)
    ctx->pc = 0x256cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 9));
label_256cdc:
    // 0x256cdc: 0x8d89000c  lw          $t1, 0xC($t4)
    ctx->pc = 0x256cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_256ce0:
    // 0x256ce0: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x256ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
label_256ce4:
    // 0x256ce4: 0x8fa90080  lw          $t1, 0x80($sp)
    ctx->pc = 0x256ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256ce8:
    // 0x256ce8: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x256ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_256cec:
    // 0x256cec: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x256cecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
label_256cf0:
    // 0x256cf0: 0x8fa90080  lw          $t1, 0x80($sp)
    ctx->pc = 0x256cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256cf4:
    // 0x256cf4: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x256cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_256cf8:
    // 0x256cf8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x256cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_256cfc:
    // 0x256cfc: 0x8cc9000c  lw          $t1, 0xC($a2)
    ctx->pc = 0x256cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_256d00:
    // 0x256d00: 0x31260001  andi        $a2, $t1, 0x1
    ctx->pc = 0x256d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_256d04:
    // 0x256d04: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_256d08:
    if (ctx->pc == 0x256D08u) {
        ctx->pc = 0x256D0Cu;
        goto label_256d0c;
    }
    ctx->pc = 0x256D04u;
    {
        const bool branch_taken_0x256d04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x256d04) {
            ctx->pc = 0x256D18u;
            goto label_256d18;
        }
    }
    ctx->pc = 0x256D0Cu;
label_256d0c:
    // 0x256d0c: 0x10000006  b           . + 4 + (0x6 << 2)
label_256d10:
    if (ctx->pc == 0x256D10u) {
        ctx->pc = 0x256D10u;
            // 0x256d10: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->pc = 0x256D14u;
        goto label_256d14;
    }
    ctx->pc = 0x256D0Cu;
    {
        const bool branch_taken_0x256d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256D0Cu;
            // 0x256d10: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d0c) {
            ctx->pc = 0x256D28u;
            goto label_256d28;
        }
    }
    ctx->pc = 0x256D14u;
label_256d14:
    // 0x256d14: 0x0  nop
    ctx->pc = 0x256d14u;
    // NOP
label_256d18:
    // 0x256d18: 0x8ea600a8  lw          $a2, 0xA8($s5)
    ctx->pc = 0x256d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
label_256d1c:
    // 0x256d1c: 0x12a4824  and         $t1, $t1, $t2
    ctx->pc = 0x256d1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
label_256d20:
    // 0x256d20: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x256d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_256d24:
    // 0x256d24: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x256d24u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
label_256d28:
    // 0x256d28: 0x10000005  b           . + 4 + (0x5 << 2)
label_256d2c:
    if (ctx->pc == 0x256D2Cu) {
        ctx->pc = 0x256D2Cu;
            // 0x256d2c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->pc = 0x256D30u;
        goto label_256d30;
    }
    ctx->pc = 0x256D28u;
    {
        const bool branch_taken_0x256d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256D28u;
            // 0x256d2c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d28) {
            ctx->pc = 0x256D40u;
            goto label_256d40;
        }
    }
    ctx->pc = 0x256D30u;
label_256d30:
    // 0x256d30: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x256d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256d34:
    // 0x256d34: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x256d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_256d38:
    // 0x256d38: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x256d38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_256d3c:
    // 0x256d3c: 0x0  nop
    ctx->pc = 0x256d3cu;
    // NOP
label_256d40:
    // 0x256d40: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x256d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_256d44:
    // 0x256d44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x256d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_256d48:
    // 0x256d48: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x256d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_256d4c:
    // 0x256d4c: 0x0  nop
    ctx->pc = 0x256d4cu;
    // NOP
label_256d50:
    // 0x256d50: 0x107082a  slt         $at, $t0, $a3
    ctx->pc = 0x256d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_256d54:
    // 0x256d54: 0x1020ffc4  beqz        $at, . + 4 + (-0x3C << 2)
label_256d58:
    if (ctx->pc == 0x256D58u) {
        ctx->pc = 0x256D5Cu;
        goto label_256d5c;
    }
    ctx->pc = 0x256D54u;
    {
        const bool branch_taken_0x256d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x256d54) {
            ctx->pc = 0x256C68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256c68;
        }
    }
    ctx->pc = 0x256D5Cu;
label_256d5c:
    // 0x256d5c: 0x0  nop
    ctx->pc = 0x256d5cu;
    // NOP
label_256d60:
    // 0x256d60: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x256d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_256d64:
    // 0x256d64: 0x25100001  addiu       $s0, $t0, 0x1
    ctx->pc = 0x256d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_256d68:
    // 0x256d68: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x256d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_256d6c:
    // 0x256d6c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x256d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_256d70:
    // 0x256d70: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x256d70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_256d74:
    // 0x256d74: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_256d78:
    if (ctx->pc == 0x256D78u) {
        ctx->pc = 0x256D7Cu;
        goto label_256d7c;
    }
    ctx->pc = 0x256D74u;
    {
        const bool branch_taken_0x256d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x256d74) {
            ctx->pc = 0x256D98u;
            goto label_256d98;
        }
    }
    ctx->pc = 0x256D7Cu;
label_256d7c:
    // 0x256d7c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x256d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_256d80:
    // 0x256d80: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x256d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_256d84:
    // 0x256d84: 0x201280a  movz        $a1, $s0, $at
    ctx->pc = 0x256d84u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_256d88:
    // 0x256d88: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x256d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_256d8c:
    // 0x256d8c: 0xc0a725c  jal         func_29C970
label_256d90:
    if (ctx->pc == 0x256D90u) {
        ctx->pc = 0x256D90u;
            // 0x256d90: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x256D94u;
        goto label_256d94;
    }
    ctx->pc = 0x256D8Cu;
    SET_GPR_U32(ctx, 31, 0x256D94u);
    ctx->pc = 0x256D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256D8Cu;
            // 0x256d90: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D94u; }
        if (ctx->pc != 0x256D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D94u; }
        if (ctx->pc != 0x256D94u) { return; }
    }
    ctx->pc = 0x256D94u;
label_256d94:
    // 0x256d94: 0x0  nop
    ctx->pc = 0x256d94u;
    // NOP
label_256d98:
    // 0x256d98: 0xaeb00074  sw          $s0, 0x74($s5)
    ctx->pc = 0x256d98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 16));
label_256d9c:
    // 0x256d9c: 0x8ea50070  lw          $a1, 0x70($s5)
    ctx->pc = 0x256d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256da0:
    // 0x256da0: 0x26a4007c  addiu       $a0, $s5, 0x7C
    ctx->pc = 0x256da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 124));
label_256da4:
    // 0x256da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x256da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256da8:
    // 0x256da8: 0xc095054  jal         func_254150
label_256dac:
    if (ctx->pc == 0x256DACu) {
        ctx->pc = 0x256DACu;
            // 0x256dac: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x256DB0u;
        goto label_256db0;
    }
    ctx->pc = 0x256DA8u;
    SET_GPR_U32(ctx, 31, 0x256DB0u);
    ctx->pc = 0x256DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256DA8u;
            // 0x256dac: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254150u;
    if (runtime->hasFunction(0x254150u)) {
        auto targetFn = runtime->lookupFunction(0x254150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DB0u; }
        if (ctx->pc != 0x256DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00254150_0x254150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DB0u; }
        if (ctx->pc != 0x256DB0u) { return; }
    }
    ctx->pc = 0x256DB0u;
label_256db0:
    // 0x256db0: 0x8ea50070  lw          $a1, 0x70($s5)
    ctx->pc = 0x256db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256db4:
    // 0x256db4: 0x26a40088  addiu       $a0, $s5, 0x88
    ctx->pc = 0x256db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 136));
label_256db8:
    // 0x256db8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x256db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256dbc:
    // 0x256dbc: 0xc095054  jal         func_254150
label_256dc0:
    if (ctx->pc == 0x256DC0u) {
        ctx->pc = 0x256DC0u;
            // 0x256dc0: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x256DC4u;
        goto label_256dc4;
    }
    ctx->pc = 0x256DBCu;
    SET_GPR_U32(ctx, 31, 0x256DC4u);
    ctx->pc = 0x256DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256DBCu;
            // 0x256dc0: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254150u;
    if (runtime->hasFunction(0x254150u)) {
        auto targetFn = runtime->lookupFunction(0x254150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DC4u; }
        if (ctx->pc != 0x256DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00254150_0x254150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DC4u; }
        if (ctx->pc != 0x256DC4u) { return; }
    }
    ctx->pc = 0x256DC4u;
label_256dc4:
    // 0x256dc4: 0x8ea50070  lw          $a1, 0x70($s5)
    ctx->pc = 0x256dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256dc8:
    // 0x256dc8: 0x26a40094  addiu       $a0, $s5, 0x94
    ctx->pc = 0x256dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 148));
label_256dcc:
    // 0x256dcc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x256dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_256dd0:
    // 0x256dd0: 0xc095054  jal         func_254150
label_256dd4:
    if (ctx->pc == 0x256DD4u) {
        ctx->pc = 0x256DD4u;
            // 0x256dd4: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x256DD8u;
        goto label_256dd8;
    }
    ctx->pc = 0x256DD0u;
    SET_GPR_U32(ctx, 31, 0x256DD8u);
    ctx->pc = 0x256DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256DD0u;
            // 0x256dd4: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254150u;
    if (runtime->hasFunction(0x254150u)) {
        auto targetFn = runtime->lookupFunction(0x254150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DD8u; }
        if (ctx->pc != 0x256DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00254150_0x254150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DD8u; }
        if (ctx->pc != 0x256DD8u) { return; }
    }
    ctx->pc = 0x256DD8u;
label_256dd8:
    // 0x256dd8: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x256dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
label_256ddc:
    // 0x256ddc: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_256de0:
    if (ctx->pc == 0x256DE0u) {
        ctx->pc = 0x256DE4u;
        goto label_256de4;
    }
    ctx->pc = 0x256DDCu;
    {
        const bool branch_taken_0x256ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256ddc) {
            ctx->pc = 0x256E98u;
            goto label_256e98;
        }
    }
    ctx->pc = 0x256DE4u;
label_256de4:
    // 0x256de4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x256de4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_256de8:
    // 0x256de8: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x256de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_256dec:
    // 0x256dec: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
label_256df0:
    if (ctx->pc == 0x256DF0u) {
        ctx->pc = 0x256DF0u;
            // 0x256df0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256DF4u;
        goto label_256df4;
    }
    ctx->pc = 0x256DECu;
    {
        const bool branch_taken_0x256dec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x256DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256DECu;
            // 0x256df0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256dec) {
            ctx->pc = 0x256E98u;
            goto label_256e98;
        }
    }
    ctx->pc = 0x256DF4u;
label_256df4:
    // 0x256df4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x256df4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256df8:
    // 0x256df8: 0x3089ffff  andi        $t1, $a0, 0xFFFF
    ctx->pc = 0x256df8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_256dfc:
    // 0x256dfc: 0x0  nop
    ctx->pc = 0x256dfcu;
    // NOP
label_256e00:
    // 0x256e00: 0x8ea500a8  lw          $a1, 0xA8($s5)
    ctx->pc = 0x256e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
label_256e04:
    // 0x256e04: 0x8ea70070  lw          $a3, 0x70($s5)
    ctx->pc = 0x256e04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_256e08:
    // 0x256e08: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x256e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_256e0c:
    // 0x256e0c: 0x94a80000  lhu         $t0, 0x0($a1)
    ctx->pc = 0x256e0cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_256e10:
    // 0x256e10: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x256e10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_256e14:
    // 0x256e14: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x256e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_256e18:
    // 0x256e18: 0x95070004  lhu         $a3, 0x4($t0)
    ctx->pc = 0x256e18u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_256e1c:
    // 0x256e1c: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x256e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_256e20:
    // 0x256e20: 0xa5070004  sh          $a3, 0x4($t0)
    ctx->pc = 0x256e20u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 7));
label_256e24:
    // 0x256e24: 0x95070006  lhu         $a3, 0x6($t0)
    ctx->pc = 0x256e24u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_256e28:
    // 0x256e28: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x256e28u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_256e2c:
    // 0x256e2c: 0xa5070006  sh          $a3, 0x6($t0)
    ctx->pc = 0x256e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 7));
label_256e30:
    // 0x256e30: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x256e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_256e34:
    // 0x256e34: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x256e34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_256e38:
    // 0x256e38: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_256e3c:
    if (ctx->pc == 0x256E3Cu) {
        ctx->pc = 0x256E3Cu;
            // 0x256e3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256E40u;
        goto label_256e40;
    }
    ctx->pc = 0x256E38u;
    {
        const bool branch_taken_0x256e38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256E38u;
            // 0x256e3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e38) {
            ctx->pc = 0x256E80u;
            goto label_256e80;
        }
    }
    ctx->pc = 0x256E40u;
label_256e40:
    // 0x256e40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x256e40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256e44:
    // 0x256e44: 0x0  nop
    ctx->pc = 0x256e44u;
    // NOP
label_256e48:
    // 0x256e48: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x256e48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_256e4c:
    // 0x256e4c: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x256e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256e50:
    // 0x256e50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x256e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_256e54:
    // 0x256e54: 0x10b5021  addu        $t2, $t0, $t3
    ctx->pc = 0x256e54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_256e58:
    // 0x256e58: 0x95480000  lhu         $t0, 0x0($t2)
    ctx->pc = 0x256e58u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_256e5c:
    // 0x256e5c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x256e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_256e60:
    // 0x256e60: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x256e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_256e64:
    // 0x256e64: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x256e64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_256e68:
    // 0x256e68: 0xa5470000  sh          $a3, 0x0($t2)
    ctx->pc = 0x256e68u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 7));
label_256e6c:
    // 0x256e6c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x256e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_256e70:
    // 0x256e70: 0x87382a  slt         $a3, $a0, $a3
    ctx->pc = 0x256e70u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_256e74:
    // 0x256e74: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
label_256e78:
    if (ctx->pc == 0x256E78u) {
        ctx->pc = 0x256E78u;
            // 0x256e78: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->pc = 0x256E7Cu;
        goto label_256e7c;
    }
    ctx->pc = 0x256E74u;
    {
        const bool branch_taken_0x256e74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x256E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256E74u;
            // 0x256e78: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e74) {
            ctx->pc = 0x256E48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256e48;
        }
    }
    ctx->pc = 0x256E7Cu;
label_256e7c:
    // 0x256e7c: 0x0  nop
    ctx->pc = 0x256e7cu;
    // NOP
label_256e80:
    // 0x256e80: 0x8ea400a0  lw          $a0, 0xA0($s5)
    ctx->pc = 0x256e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
label_256e84:
    // 0x256e84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x256e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_256e88:
    // 0x256e88: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x256e88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_256e8c:
    // 0x256e8c: 0x1480ffdc  bnez        $a0, . + 4 + (-0x24 << 2)
label_256e90:
    if (ctx->pc == 0x256E90u) {
        ctx->pc = 0x256E90u;
            // 0x256e90: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x256E94u;
        goto label_256e94;
    }
    ctx->pc = 0x256E8Cu;
    {
        const bool branch_taken_0x256e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x256E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256E8Cu;
            // 0x256e90: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e8c) {
            ctx->pc = 0x256E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256e00;
        }
    }
    ctx->pc = 0x256E94u;
label_256e94:
    // 0x256e94: 0x0  nop
    ctx->pc = 0x256e94u;
    // NOP
label_256e98:
    // 0x256e98: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x256e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_256e9c:
    // 0x256e9c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x256e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_256ea0:
    // 0x256ea0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x256ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_256ea4:
    // 0x256ea4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x256ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_256ea8:
    // 0x256ea8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x256ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_256eac:
    // 0x256eac: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_256eb0:
    if (ctx->pc == 0x256EB0u) {
        ctx->pc = 0x256EB4u;
        goto label_256eb4;
    }
    ctx->pc = 0x256EACu;
    {
        const bool branch_taken_0x256eac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x256eac) {
            ctx->pc = 0x256EC8u;
            goto label_256ec8;
        }
    }
    ctx->pc = 0x256EB4u;
label_256eb4:
    // 0x256eb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x256eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_256eb8:
    // 0x256eb8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x256eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_256ebc:
    // 0x256ebc: 0x320f809  jalr        $t9
label_256ec0:
    if (ctx->pc == 0x256EC0u) {
        ctx->pc = 0x256EC4u;
        goto label_256ec4;
    }
    ctx->pc = 0x256EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x256EC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x256EC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x256EC4u; }
            if (ctx->pc != 0x256EC4u) { return; }
        }
        }
    }
    ctx->pc = 0x256EC4u;
label_256ec4:
    // 0x256ec4: 0x0  nop
    ctx->pc = 0x256ec4u;
    // NOP
label_256ec8:
    // 0x256ec8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x256ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_256ecc:
    // 0x256ecc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x256eccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_256ed0:
    // 0x256ed0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x256ed0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_256ed4:
    // 0x256ed4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x256ed4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_256ed8:
    // 0x256ed8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x256ed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_256edc:
    // 0x256edc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x256edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_256ee0:
    // 0x256ee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_256ee4:
    // 0x256ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_256ee8:
    // 0x256ee8: 0x3e00008  jr          $ra
label_256eec:
    if (ctx->pc == 0x256EECu) {
        ctx->pc = 0x256EECu;
            // 0x256eec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x256EF0u;
        goto label_256ef0;
    }
    ctx->pc = 0x256EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256EE8u;
            // 0x256eec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256EF0u;
label_256ef0:
    // 0x256ef0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x256ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_256ef4:
    // 0x256ef4: 0x3e00008  jr          $ra
label_256ef8:
    if (ctx->pc == 0x256EF8u) {
        ctx->pc = 0x256EF8u;
            // 0x256ef8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x256EFCu;
        goto label_256efc;
    }
    ctx->pc = 0x256EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256EF4u;
            // 0x256ef8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256EFCu;
label_256efc:
    // 0x256efc: 0x0  nop
    ctx->pc = 0x256efcu;
    // NOP
label_256f00:
    // 0x256f00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x256f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_256f04:
    // 0x256f04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x256f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_256f08:
    // 0x256f08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x256f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_256f0c:
    // 0x256f0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x256f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_256f10:
    // 0x256f10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x256f10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_256f14:
    // 0x256f14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x256f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_256f18:
    // 0x256f18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x256f18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_256f1c:
    // 0x256f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_256f20:
    // 0x256f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_256f24:
    // 0x256f24: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x256f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_256f28:
    // 0x256f28: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x256f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_256f2c:
    // 0x256f2c: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x256f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_256f30:
    // 0x256f30: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x256f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_256f34:
    // 0x256f34: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x256f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_256f38:
    // 0x256f38: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x256f38u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_256f3c:
    // 0x256f3c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x256f3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_256f40:
    // 0x256f40: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_256f44:
    if (ctx->pc == 0x256F44u) {
        ctx->pc = 0x256F48u;
        goto label_256f48;
    }
    ctx->pc = 0x256F40u;
    {
        const bool branch_taken_0x256f40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f40) {
            ctx->pc = 0x256F58u;
            goto label_256f58;
        }
    }
    ctx->pc = 0x256F48u;
label_256f48:
    // 0x256f48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x256f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_256f4c:
    // 0x256f4c: 0xc0a725c  jal         func_29C970
label_256f50:
    if (ctx->pc == 0x256F50u) {
        ctx->pc = 0x256F50u;
            // 0x256f50: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x256F54u;
        goto label_256f54;
    }
    ctx->pc = 0x256F4Cu;
    SET_GPR_U32(ctx, 31, 0x256F54u);
    ctx->pc = 0x256F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256F4Cu;
            // 0x256f50: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256F54u; }
        if (ctx->pc != 0x256F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256F54u; }
        if (ctx->pc != 0x256F54u) { return; }
    }
    ctx->pc = 0x256F54u;
label_256f54:
    // 0x256f54: 0x0  nop
    ctx->pc = 0x256f54u;
    // NOP
label_256f58:
    // 0x256f58: 0x8e840074  lw          $a0, 0x74($s4)
    ctx->pc = 0x256f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_256f5c:
    // 0x256f5c: 0x8e8300a0  lw          $v1, 0xA0($s4)
    ctx->pc = 0x256f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_256f60:
    // 0x256f60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x256f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256f64:
    // 0x256f64: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x256f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_256f68:
    // 0x256f68: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x256f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_256f6c:
    // 0x256f6c: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x256f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_256f70:
    // 0x256f70: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x256f70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_256f74:
    // 0x256f74: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_256f78:
    if (ctx->pc == 0x256F78u) {
        ctx->pc = 0x256F78u;
            // 0x256f78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x256F7Cu;
        goto label_256f7c;
    }
    ctx->pc = 0x256F74u;
    {
        const bool branch_taken_0x256f74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256F74u;
            // 0x256f78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f74) {
            ctx->pc = 0x256FC8u;
            goto label_256fc8;
        }
    }
    ctx->pc = 0x256F7Cu;
label_256f7c:
    // 0x256f7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x256f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256f80:
    // 0x256f80: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x256f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_256f84:
    // 0x256f84: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x256f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_256f88:
    // 0x256f88: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x256f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_256f8c:
    // 0x256f8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x256f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_256f90:
    // 0x256f90: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_256f94:
    if (ctx->pc == 0x256F94u) {
        ctx->pc = 0x256F98u;
        goto label_256f98;
    }
    ctx->pc = 0x256F90u;
    {
        const bool branch_taken_0x256f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x256f90) {
            ctx->pc = 0x256FB0u;
            goto label_256fb0;
        }
    }
    ctx->pc = 0x256F98u;
label_256f98:
    // 0x256f98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x256f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_256f9c:
    // 0x256f9c: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x256f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_256fa0:
    // 0x256fa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x256fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_256fa4:
    // 0x256fa4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x256fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_256fa8:
    // 0x256fa8: 0xc096fb0  jal         func_25BEC0
label_256fac:
    if (ctx->pc == 0x256FACu) {
        ctx->pc = 0x256FACu;
            // 0x256fac: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x256FB0u;
        goto label_256fb0;
    }
    ctx->pc = 0x256FA8u;
    SET_GPR_U32(ctx, 31, 0x256FB0u);
    ctx->pc = 0x256FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256FA8u;
            // 0x256fac: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25BEC0u;
    if (runtime->hasFunction(0x25BEC0u)) {
        auto targetFn = runtime->lookupFunction(0x25BEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256FB0u; }
        if (ctx->pc != 0x256FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025BEC0_0x25bec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256FB0u; }
        if (ctx->pc != 0x256FB0u) { return; }
    }
    ctx->pc = 0x256FB0u;
label_256fb0:
    // 0x256fb0: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x256fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_256fb4:
    // 0x256fb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x256fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_256fb8:
    // 0x256fb8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x256fb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_256fbc:
    // 0x256fbc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_256fc0:
    if (ctx->pc == 0x256FC0u) {
        ctx->pc = 0x256FC0u;
            // 0x256fc0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x256FC4u;
        goto label_256fc4;
    }
    ctx->pc = 0x256FBCu;
    {
        const bool branch_taken_0x256fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x256FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256FBCu;
            // 0x256fc0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fbc) {
            ctx->pc = 0x256F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256f80;
        }
    }
    ctx->pc = 0x256FC4u;
label_256fc4:
    // 0x256fc4: 0x0  nop
    ctx->pc = 0x256fc4u;
    // NOP
label_256fc8:
    // 0x256fc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x256fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_256fcc:
    // 0x256fcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x256fccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_256fd0:
    // 0x256fd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x256fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_256fd4:
    // 0x256fd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x256fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_256fd8:
    // 0x256fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_256fdc:
    // 0x256fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_256fe0:
    // 0x256fe0: 0x3e00008  jr          $ra
label_256fe4:
    if (ctx->pc == 0x256FE4u) {
        ctx->pc = 0x256FE4u;
            // 0x256fe4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x256FE8u;
        goto label_256fe8;
    }
    ctx->pc = 0x256FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256FE0u;
            // 0x256fe4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256FE8u;
label_256fe8:
    // 0x256fe8: 0x0  nop
    ctx->pc = 0x256fe8u;
    // NOP
label_256fec:
    // 0x256fec: 0x0  nop
    ctx->pc = 0x256fecu;
    // NOP
label_256ff0:
    // 0x256ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x256ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_256ff4:
    // 0x256ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x256ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_256ff8:
    // 0x256ff8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x256ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_256ffc:
    // 0x256ffc: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x256ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_257000:
    // 0x257000: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x257000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_257004:
    // 0x257004: 0xc096fb0  jal         func_25BEC0
label_257008:
    if (ctx->pc == 0x257008u) {
        ctx->pc = 0x257008u;
            // 0x257008: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x25700Cu;
        goto label_25700c;
    }
    ctx->pc = 0x257004u;
    SET_GPR_U32(ctx, 31, 0x25700Cu);
    ctx->pc = 0x257008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257004u;
            // 0x257008: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25BEC0u;
    if (runtime->hasFunction(0x25BEC0u)) {
        auto targetFn = runtime->lookupFunction(0x25BEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25700Cu; }
        if (ctx->pc != 0x25700Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025BEC0_0x25bec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25700Cu; }
        if (ctx->pc != 0x25700Cu) { return; }
    }
    ctx->pc = 0x25700Cu;
label_25700c:
    // 0x25700c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25700cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_257010:
    // 0x257010: 0x3e00008  jr          $ra
label_257014:
    if (ctx->pc == 0x257014u) {
        ctx->pc = 0x257014u;
            // 0x257014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x257018u;
        goto label_257018;
    }
    ctx->pc = 0x257010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257010u;
            // 0x257014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257018u;
label_257018:
    // 0x257018: 0x0  nop
    ctx->pc = 0x257018u;
    // NOP
label_25701c:
    // 0x25701c: 0x0  nop
    ctx->pc = 0x25701cu;
    // NOP
label_257020:
    // 0x257020: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x257020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257024:
    // 0x257024: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x257024u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_257028:
    // 0x257028: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x257028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
label_25702c:
    // 0x25702c: 0x3463fc00  ori         $v1, $v1, 0xFC00
    ctx->pc = 0x25702cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64512);
label_257030:
    // 0x257030: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x257030u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_257034:
    // 0x257034: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x257034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_257038:
    // 0x257038: 0x0  nop
    ctx->pc = 0x257038u;
    // NOP
label_25703c:
    // 0x25703c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25703cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_257040:
    // 0x257040: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x257040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_257044:
    // 0x257044: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x257044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257048:
    // 0x257048: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x257048u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25704c:
    // 0x25704c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x25704cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_257050:
    // 0x257050: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x257050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257054:
    // 0x257054: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x257054u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_257058:
    // 0x257058: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x257058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_25705c:
    // 0x25705c: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x25705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257060:
    // 0x257060: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x257060u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_257064:
    // 0x257064: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x257064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_257068:
    // 0x257068: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x257068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25706c:
    // 0x25706c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x25706cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_257070:
    // 0x257070: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x257070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_257074:
    // 0x257074: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x257074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257078:
    // 0x257078: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x257078u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_25707c:
    // 0x25707c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x25707cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_257080:
    // 0x257080: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x257080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257084:
    // 0x257084: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x257084u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_257088:
    // 0x257088: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x257088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_25708c:
    // 0x25708c: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x25708cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
label_257090:
    // 0x257090: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x257090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257094:
    // 0x257094: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_257098:
    // 0x257098: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x257098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25709c:
    // 0x25709c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x25709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570a0:
    // 0x2570a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2570a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2570a4:
    // 0x2570a4: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2570a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_2570a8:
    // 0x2570a8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2570a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570ac:
    // 0x2570ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2570acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2570b0:
    // 0x2570b0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2570b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2570b4:
    // 0x2570b4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2570b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570b8:
    // 0x2570b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2570b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2570bc:
    // 0x2570bc: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x2570bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_2570c0:
    // 0x2570c0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2570c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2570c4:
    // 0x2570c4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2570c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570c8:
    // 0x2570c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2570c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2570cc:
    // 0x2570cc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2570ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2570d0:
    // 0x2570d0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2570d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2570d4:
    // 0x2570d4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2570d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570d8:
    // 0x2570d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2570d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2570dc:
    // 0x2570dc: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2570dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_2570e0:
    // 0x2570e0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2570e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2570e4:
    // 0x2570e4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2570e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570e8:
    // 0x2570e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2570e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2570ec:
    // 0x2570ec: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2570ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2570f0:
    // 0x2570f0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2570f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2570f4:
    // 0x2570f4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2570f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2570f8:
    // 0x2570f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2570f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2570fc:
    // 0x2570fc: 0x3e00008  jr          $ra
label_257100:
    if (ctx->pc == 0x257100u) {
        ctx->pc = 0x257100u;
            // 0x257100: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->pc = 0x257104u;
        goto label_257104;
    }
    ctx->pc = 0x2570FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2570FCu;
            // 0x257100: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257104u;
label_257104:
    // 0x257104: 0x0  nop
    ctx->pc = 0x257104u;
    // NOP
label_257108:
    // 0x257108: 0x0  nop
    ctx->pc = 0x257108u;
    // NOP
label_25710c:
    // 0x25710c: 0x0  nop
    ctx->pc = 0x25710cu;
    // NOP
}
