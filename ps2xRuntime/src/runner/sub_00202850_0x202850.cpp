#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202850
// Address: 0x202850 - 0x203350
void sub_00202850_0x202850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202850_0x202850");
#endif

    switch (ctx->pc) {
        case 0x202850u: goto label_202850;
        case 0x202854u: goto label_202854;
        case 0x202858u: goto label_202858;
        case 0x20285cu: goto label_20285c;
        case 0x202860u: goto label_202860;
        case 0x202864u: goto label_202864;
        case 0x202868u: goto label_202868;
        case 0x20286cu: goto label_20286c;
        case 0x202870u: goto label_202870;
        case 0x202874u: goto label_202874;
        case 0x202878u: goto label_202878;
        case 0x20287cu: goto label_20287c;
        case 0x202880u: goto label_202880;
        case 0x202884u: goto label_202884;
        case 0x202888u: goto label_202888;
        case 0x20288cu: goto label_20288c;
        case 0x202890u: goto label_202890;
        case 0x202894u: goto label_202894;
        case 0x202898u: goto label_202898;
        case 0x20289cu: goto label_20289c;
        case 0x2028a0u: goto label_2028a0;
        case 0x2028a4u: goto label_2028a4;
        case 0x2028a8u: goto label_2028a8;
        case 0x2028acu: goto label_2028ac;
        case 0x2028b0u: goto label_2028b0;
        case 0x2028b4u: goto label_2028b4;
        case 0x2028b8u: goto label_2028b8;
        case 0x2028bcu: goto label_2028bc;
        case 0x2028c0u: goto label_2028c0;
        case 0x2028c4u: goto label_2028c4;
        case 0x2028c8u: goto label_2028c8;
        case 0x2028ccu: goto label_2028cc;
        case 0x2028d0u: goto label_2028d0;
        case 0x2028d4u: goto label_2028d4;
        case 0x2028d8u: goto label_2028d8;
        case 0x2028dcu: goto label_2028dc;
        case 0x2028e0u: goto label_2028e0;
        case 0x2028e4u: goto label_2028e4;
        case 0x2028e8u: goto label_2028e8;
        case 0x2028ecu: goto label_2028ec;
        case 0x2028f0u: goto label_2028f0;
        case 0x2028f4u: goto label_2028f4;
        case 0x2028f8u: goto label_2028f8;
        case 0x2028fcu: goto label_2028fc;
        case 0x202900u: goto label_202900;
        case 0x202904u: goto label_202904;
        case 0x202908u: goto label_202908;
        case 0x20290cu: goto label_20290c;
        case 0x202910u: goto label_202910;
        case 0x202914u: goto label_202914;
        case 0x202918u: goto label_202918;
        case 0x20291cu: goto label_20291c;
        case 0x202920u: goto label_202920;
        case 0x202924u: goto label_202924;
        case 0x202928u: goto label_202928;
        case 0x20292cu: goto label_20292c;
        case 0x202930u: goto label_202930;
        case 0x202934u: goto label_202934;
        case 0x202938u: goto label_202938;
        case 0x20293cu: goto label_20293c;
        case 0x202940u: goto label_202940;
        case 0x202944u: goto label_202944;
        case 0x202948u: goto label_202948;
        case 0x20294cu: goto label_20294c;
        case 0x202950u: goto label_202950;
        case 0x202954u: goto label_202954;
        case 0x202958u: goto label_202958;
        case 0x20295cu: goto label_20295c;
        case 0x202960u: goto label_202960;
        case 0x202964u: goto label_202964;
        case 0x202968u: goto label_202968;
        case 0x20296cu: goto label_20296c;
        case 0x202970u: goto label_202970;
        case 0x202974u: goto label_202974;
        case 0x202978u: goto label_202978;
        case 0x20297cu: goto label_20297c;
        case 0x202980u: goto label_202980;
        case 0x202984u: goto label_202984;
        case 0x202988u: goto label_202988;
        case 0x20298cu: goto label_20298c;
        case 0x202990u: goto label_202990;
        case 0x202994u: goto label_202994;
        case 0x202998u: goto label_202998;
        case 0x20299cu: goto label_20299c;
        case 0x2029a0u: goto label_2029a0;
        case 0x2029a4u: goto label_2029a4;
        case 0x2029a8u: goto label_2029a8;
        case 0x2029acu: goto label_2029ac;
        case 0x2029b0u: goto label_2029b0;
        case 0x2029b4u: goto label_2029b4;
        case 0x2029b8u: goto label_2029b8;
        case 0x2029bcu: goto label_2029bc;
        case 0x2029c0u: goto label_2029c0;
        case 0x2029c4u: goto label_2029c4;
        case 0x2029c8u: goto label_2029c8;
        case 0x2029ccu: goto label_2029cc;
        case 0x2029d0u: goto label_2029d0;
        case 0x2029d4u: goto label_2029d4;
        case 0x2029d8u: goto label_2029d8;
        case 0x2029dcu: goto label_2029dc;
        case 0x2029e0u: goto label_2029e0;
        case 0x2029e4u: goto label_2029e4;
        case 0x2029e8u: goto label_2029e8;
        case 0x2029ecu: goto label_2029ec;
        case 0x2029f0u: goto label_2029f0;
        case 0x2029f4u: goto label_2029f4;
        case 0x2029f8u: goto label_2029f8;
        case 0x2029fcu: goto label_2029fc;
        case 0x202a00u: goto label_202a00;
        case 0x202a04u: goto label_202a04;
        case 0x202a08u: goto label_202a08;
        case 0x202a0cu: goto label_202a0c;
        case 0x202a10u: goto label_202a10;
        case 0x202a14u: goto label_202a14;
        case 0x202a18u: goto label_202a18;
        case 0x202a1cu: goto label_202a1c;
        case 0x202a20u: goto label_202a20;
        case 0x202a24u: goto label_202a24;
        case 0x202a28u: goto label_202a28;
        case 0x202a2cu: goto label_202a2c;
        case 0x202a30u: goto label_202a30;
        case 0x202a34u: goto label_202a34;
        case 0x202a38u: goto label_202a38;
        case 0x202a3cu: goto label_202a3c;
        case 0x202a40u: goto label_202a40;
        case 0x202a44u: goto label_202a44;
        case 0x202a48u: goto label_202a48;
        case 0x202a4cu: goto label_202a4c;
        case 0x202a50u: goto label_202a50;
        case 0x202a54u: goto label_202a54;
        case 0x202a58u: goto label_202a58;
        case 0x202a5cu: goto label_202a5c;
        case 0x202a60u: goto label_202a60;
        case 0x202a64u: goto label_202a64;
        case 0x202a68u: goto label_202a68;
        case 0x202a6cu: goto label_202a6c;
        case 0x202a70u: goto label_202a70;
        case 0x202a74u: goto label_202a74;
        case 0x202a78u: goto label_202a78;
        case 0x202a7cu: goto label_202a7c;
        case 0x202a80u: goto label_202a80;
        case 0x202a84u: goto label_202a84;
        case 0x202a88u: goto label_202a88;
        case 0x202a8cu: goto label_202a8c;
        case 0x202a90u: goto label_202a90;
        case 0x202a94u: goto label_202a94;
        case 0x202a98u: goto label_202a98;
        case 0x202a9cu: goto label_202a9c;
        case 0x202aa0u: goto label_202aa0;
        case 0x202aa4u: goto label_202aa4;
        case 0x202aa8u: goto label_202aa8;
        case 0x202aacu: goto label_202aac;
        case 0x202ab0u: goto label_202ab0;
        case 0x202ab4u: goto label_202ab4;
        case 0x202ab8u: goto label_202ab8;
        case 0x202abcu: goto label_202abc;
        case 0x202ac0u: goto label_202ac0;
        case 0x202ac4u: goto label_202ac4;
        case 0x202ac8u: goto label_202ac8;
        case 0x202accu: goto label_202acc;
        case 0x202ad0u: goto label_202ad0;
        case 0x202ad4u: goto label_202ad4;
        case 0x202ad8u: goto label_202ad8;
        case 0x202adcu: goto label_202adc;
        case 0x202ae0u: goto label_202ae0;
        case 0x202ae4u: goto label_202ae4;
        case 0x202ae8u: goto label_202ae8;
        case 0x202aecu: goto label_202aec;
        case 0x202af0u: goto label_202af0;
        case 0x202af4u: goto label_202af4;
        case 0x202af8u: goto label_202af8;
        case 0x202afcu: goto label_202afc;
        case 0x202b00u: goto label_202b00;
        case 0x202b04u: goto label_202b04;
        case 0x202b08u: goto label_202b08;
        case 0x202b0cu: goto label_202b0c;
        case 0x202b10u: goto label_202b10;
        case 0x202b14u: goto label_202b14;
        case 0x202b18u: goto label_202b18;
        case 0x202b1cu: goto label_202b1c;
        case 0x202b20u: goto label_202b20;
        case 0x202b24u: goto label_202b24;
        case 0x202b28u: goto label_202b28;
        case 0x202b2cu: goto label_202b2c;
        case 0x202b30u: goto label_202b30;
        case 0x202b34u: goto label_202b34;
        case 0x202b38u: goto label_202b38;
        case 0x202b3cu: goto label_202b3c;
        case 0x202b40u: goto label_202b40;
        case 0x202b44u: goto label_202b44;
        case 0x202b48u: goto label_202b48;
        case 0x202b4cu: goto label_202b4c;
        case 0x202b50u: goto label_202b50;
        case 0x202b54u: goto label_202b54;
        case 0x202b58u: goto label_202b58;
        case 0x202b5cu: goto label_202b5c;
        case 0x202b60u: goto label_202b60;
        case 0x202b64u: goto label_202b64;
        case 0x202b68u: goto label_202b68;
        case 0x202b6cu: goto label_202b6c;
        case 0x202b70u: goto label_202b70;
        case 0x202b74u: goto label_202b74;
        case 0x202b78u: goto label_202b78;
        case 0x202b7cu: goto label_202b7c;
        case 0x202b80u: goto label_202b80;
        case 0x202b84u: goto label_202b84;
        case 0x202b88u: goto label_202b88;
        case 0x202b8cu: goto label_202b8c;
        case 0x202b90u: goto label_202b90;
        case 0x202b94u: goto label_202b94;
        case 0x202b98u: goto label_202b98;
        case 0x202b9cu: goto label_202b9c;
        case 0x202ba0u: goto label_202ba0;
        case 0x202ba4u: goto label_202ba4;
        case 0x202ba8u: goto label_202ba8;
        case 0x202bacu: goto label_202bac;
        case 0x202bb0u: goto label_202bb0;
        case 0x202bb4u: goto label_202bb4;
        case 0x202bb8u: goto label_202bb8;
        case 0x202bbcu: goto label_202bbc;
        case 0x202bc0u: goto label_202bc0;
        case 0x202bc4u: goto label_202bc4;
        case 0x202bc8u: goto label_202bc8;
        case 0x202bccu: goto label_202bcc;
        case 0x202bd0u: goto label_202bd0;
        case 0x202bd4u: goto label_202bd4;
        case 0x202bd8u: goto label_202bd8;
        case 0x202bdcu: goto label_202bdc;
        case 0x202be0u: goto label_202be0;
        case 0x202be4u: goto label_202be4;
        case 0x202be8u: goto label_202be8;
        case 0x202becu: goto label_202bec;
        case 0x202bf0u: goto label_202bf0;
        case 0x202bf4u: goto label_202bf4;
        case 0x202bf8u: goto label_202bf8;
        case 0x202bfcu: goto label_202bfc;
        case 0x202c00u: goto label_202c00;
        case 0x202c04u: goto label_202c04;
        case 0x202c08u: goto label_202c08;
        case 0x202c0cu: goto label_202c0c;
        case 0x202c10u: goto label_202c10;
        case 0x202c14u: goto label_202c14;
        case 0x202c18u: goto label_202c18;
        case 0x202c1cu: goto label_202c1c;
        case 0x202c20u: goto label_202c20;
        case 0x202c24u: goto label_202c24;
        case 0x202c28u: goto label_202c28;
        case 0x202c2cu: goto label_202c2c;
        case 0x202c30u: goto label_202c30;
        case 0x202c34u: goto label_202c34;
        case 0x202c38u: goto label_202c38;
        case 0x202c3cu: goto label_202c3c;
        case 0x202c40u: goto label_202c40;
        case 0x202c44u: goto label_202c44;
        case 0x202c48u: goto label_202c48;
        case 0x202c4cu: goto label_202c4c;
        case 0x202c50u: goto label_202c50;
        case 0x202c54u: goto label_202c54;
        case 0x202c58u: goto label_202c58;
        case 0x202c5cu: goto label_202c5c;
        case 0x202c60u: goto label_202c60;
        case 0x202c64u: goto label_202c64;
        case 0x202c68u: goto label_202c68;
        case 0x202c6cu: goto label_202c6c;
        case 0x202c70u: goto label_202c70;
        case 0x202c74u: goto label_202c74;
        case 0x202c78u: goto label_202c78;
        case 0x202c7cu: goto label_202c7c;
        case 0x202c80u: goto label_202c80;
        case 0x202c84u: goto label_202c84;
        case 0x202c88u: goto label_202c88;
        case 0x202c8cu: goto label_202c8c;
        case 0x202c90u: goto label_202c90;
        case 0x202c94u: goto label_202c94;
        case 0x202c98u: goto label_202c98;
        case 0x202c9cu: goto label_202c9c;
        case 0x202ca0u: goto label_202ca0;
        case 0x202ca4u: goto label_202ca4;
        case 0x202ca8u: goto label_202ca8;
        case 0x202cacu: goto label_202cac;
        case 0x202cb0u: goto label_202cb0;
        case 0x202cb4u: goto label_202cb4;
        case 0x202cb8u: goto label_202cb8;
        case 0x202cbcu: goto label_202cbc;
        case 0x202cc0u: goto label_202cc0;
        case 0x202cc4u: goto label_202cc4;
        case 0x202cc8u: goto label_202cc8;
        case 0x202cccu: goto label_202ccc;
        case 0x202cd0u: goto label_202cd0;
        case 0x202cd4u: goto label_202cd4;
        case 0x202cd8u: goto label_202cd8;
        case 0x202cdcu: goto label_202cdc;
        case 0x202ce0u: goto label_202ce0;
        case 0x202ce4u: goto label_202ce4;
        case 0x202ce8u: goto label_202ce8;
        case 0x202cecu: goto label_202cec;
        case 0x202cf0u: goto label_202cf0;
        case 0x202cf4u: goto label_202cf4;
        case 0x202cf8u: goto label_202cf8;
        case 0x202cfcu: goto label_202cfc;
        case 0x202d00u: goto label_202d00;
        case 0x202d04u: goto label_202d04;
        case 0x202d08u: goto label_202d08;
        case 0x202d0cu: goto label_202d0c;
        case 0x202d10u: goto label_202d10;
        case 0x202d14u: goto label_202d14;
        case 0x202d18u: goto label_202d18;
        case 0x202d1cu: goto label_202d1c;
        case 0x202d20u: goto label_202d20;
        case 0x202d24u: goto label_202d24;
        case 0x202d28u: goto label_202d28;
        case 0x202d2cu: goto label_202d2c;
        case 0x202d30u: goto label_202d30;
        case 0x202d34u: goto label_202d34;
        case 0x202d38u: goto label_202d38;
        case 0x202d3cu: goto label_202d3c;
        case 0x202d40u: goto label_202d40;
        case 0x202d44u: goto label_202d44;
        case 0x202d48u: goto label_202d48;
        case 0x202d4cu: goto label_202d4c;
        case 0x202d50u: goto label_202d50;
        case 0x202d54u: goto label_202d54;
        case 0x202d58u: goto label_202d58;
        case 0x202d5cu: goto label_202d5c;
        case 0x202d60u: goto label_202d60;
        case 0x202d64u: goto label_202d64;
        case 0x202d68u: goto label_202d68;
        case 0x202d6cu: goto label_202d6c;
        case 0x202d70u: goto label_202d70;
        case 0x202d74u: goto label_202d74;
        case 0x202d78u: goto label_202d78;
        case 0x202d7cu: goto label_202d7c;
        case 0x202d80u: goto label_202d80;
        case 0x202d84u: goto label_202d84;
        case 0x202d88u: goto label_202d88;
        case 0x202d8cu: goto label_202d8c;
        case 0x202d90u: goto label_202d90;
        case 0x202d94u: goto label_202d94;
        case 0x202d98u: goto label_202d98;
        case 0x202d9cu: goto label_202d9c;
        case 0x202da0u: goto label_202da0;
        case 0x202da4u: goto label_202da4;
        case 0x202da8u: goto label_202da8;
        case 0x202dacu: goto label_202dac;
        case 0x202db0u: goto label_202db0;
        case 0x202db4u: goto label_202db4;
        case 0x202db8u: goto label_202db8;
        case 0x202dbcu: goto label_202dbc;
        case 0x202dc0u: goto label_202dc0;
        case 0x202dc4u: goto label_202dc4;
        case 0x202dc8u: goto label_202dc8;
        case 0x202dccu: goto label_202dcc;
        case 0x202dd0u: goto label_202dd0;
        case 0x202dd4u: goto label_202dd4;
        case 0x202dd8u: goto label_202dd8;
        case 0x202ddcu: goto label_202ddc;
        case 0x202de0u: goto label_202de0;
        case 0x202de4u: goto label_202de4;
        case 0x202de8u: goto label_202de8;
        case 0x202decu: goto label_202dec;
        case 0x202df0u: goto label_202df0;
        case 0x202df4u: goto label_202df4;
        case 0x202df8u: goto label_202df8;
        case 0x202dfcu: goto label_202dfc;
        case 0x202e00u: goto label_202e00;
        case 0x202e04u: goto label_202e04;
        case 0x202e08u: goto label_202e08;
        case 0x202e0cu: goto label_202e0c;
        case 0x202e10u: goto label_202e10;
        case 0x202e14u: goto label_202e14;
        case 0x202e18u: goto label_202e18;
        case 0x202e1cu: goto label_202e1c;
        case 0x202e20u: goto label_202e20;
        case 0x202e24u: goto label_202e24;
        case 0x202e28u: goto label_202e28;
        case 0x202e2cu: goto label_202e2c;
        case 0x202e30u: goto label_202e30;
        case 0x202e34u: goto label_202e34;
        case 0x202e38u: goto label_202e38;
        case 0x202e3cu: goto label_202e3c;
        case 0x202e40u: goto label_202e40;
        case 0x202e44u: goto label_202e44;
        case 0x202e48u: goto label_202e48;
        case 0x202e4cu: goto label_202e4c;
        case 0x202e50u: goto label_202e50;
        case 0x202e54u: goto label_202e54;
        case 0x202e58u: goto label_202e58;
        case 0x202e5cu: goto label_202e5c;
        case 0x202e60u: goto label_202e60;
        case 0x202e64u: goto label_202e64;
        case 0x202e68u: goto label_202e68;
        case 0x202e6cu: goto label_202e6c;
        case 0x202e70u: goto label_202e70;
        case 0x202e74u: goto label_202e74;
        case 0x202e78u: goto label_202e78;
        case 0x202e7cu: goto label_202e7c;
        case 0x202e80u: goto label_202e80;
        case 0x202e84u: goto label_202e84;
        case 0x202e88u: goto label_202e88;
        case 0x202e8cu: goto label_202e8c;
        case 0x202e90u: goto label_202e90;
        case 0x202e94u: goto label_202e94;
        case 0x202e98u: goto label_202e98;
        case 0x202e9cu: goto label_202e9c;
        case 0x202ea0u: goto label_202ea0;
        case 0x202ea4u: goto label_202ea4;
        case 0x202ea8u: goto label_202ea8;
        case 0x202eacu: goto label_202eac;
        case 0x202eb0u: goto label_202eb0;
        case 0x202eb4u: goto label_202eb4;
        case 0x202eb8u: goto label_202eb8;
        case 0x202ebcu: goto label_202ebc;
        case 0x202ec0u: goto label_202ec0;
        case 0x202ec4u: goto label_202ec4;
        case 0x202ec8u: goto label_202ec8;
        case 0x202eccu: goto label_202ecc;
        case 0x202ed0u: goto label_202ed0;
        case 0x202ed4u: goto label_202ed4;
        case 0x202ed8u: goto label_202ed8;
        case 0x202edcu: goto label_202edc;
        case 0x202ee0u: goto label_202ee0;
        case 0x202ee4u: goto label_202ee4;
        case 0x202ee8u: goto label_202ee8;
        case 0x202eecu: goto label_202eec;
        case 0x202ef0u: goto label_202ef0;
        case 0x202ef4u: goto label_202ef4;
        case 0x202ef8u: goto label_202ef8;
        case 0x202efcu: goto label_202efc;
        case 0x202f00u: goto label_202f00;
        case 0x202f04u: goto label_202f04;
        case 0x202f08u: goto label_202f08;
        case 0x202f0cu: goto label_202f0c;
        case 0x202f10u: goto label_202f10;
        case 0x202f14u: goto label_202f14;
        case 0x202f18u: goto label_202f18;
        case 0x202f1cu: goto label_202f1c;
        case 0x202f20u: goto label_202f20;
        case 0x202f24u: goto label_202f24;
        case 0x202f28u: goto label_202f28;
        case 0x202f2cu: goto label_202f2c;
        case 0x202f30u: goto label_202f30;
        case 0x202f34u: goto label_202f34;
        case 0x202f38u: goto label_202f38;
        case 0x202f3cu: goto label_202f3c;
        case 0x202f40u: goto label_202f40;
        case 0x202f44u: goto label_202f44;
        case 0x202f48u: goto label_202f48;
        case 0x202f4cu: goto label_202f4c;
        case 0x202f50u: goto label_202f50;
        case 0x202f54u: goto label_202f54;
        case 0x202f58u: goto label_202f58;
        case 0x202f5cu: goto label_202f5c;
        case 0x202f60u: goto label_202f60;
        case 0x202f64u: goto label_202f64;
        case 0x202f68u: goto label_202f68;
        case 0x202f6cu: goto label_202f6c;
        case 0x202f70u: goto label_202f70;
        case 0x202f74u: goto label_202f74;
        case 0x202f78u: goto label_202f78;
        case 0x202f7cu: goto label_202f7c;
        case 0x202f80u: goto label_202f80;
        case 0x202f84u: goto label_202f84;
        case 0x202f88u: goto label_202f88;
        case 0x202f8cu: goto label_202f8c;
        case 0x202f90u: goto label_202f90;
        case 0x202f94u: goto label_202f94;
        case 0x202f98u: goto label_202f98;
        case 0x202f9cu: goto label_202f9c;
        case 0x202fa0u: goto label_202fa0;
        case 0x202fa4u: goto label_202fa4;
        case 0x202fa8u: goto label_202fa8;
        case 0x202facu: goto label_202fac;
        case 0x202fb0u: goto label_202fb0;
        case 0x202fb4u: goto label_202fb4;
        case 0x202fb8u: goto label_202fb8;
        case 0x202fbcu: goto label_202fbc;
        case 0x202fc0u: goto label_202fc0;
        case 0x202fc4u: goto label_202fc4;
        case 0x202fc8u: goto label_202fc8;
        case 0x202fccu: goto label_202fcc;
        case 0x202fd0u: goto label_202fd0;
        case 0x202fd4u: goto label_202fd4;
        case 0x202fd8u: goto label_202fd8;
        case 0x202fdcu: goto label_202fdc;
        case 0x202fe0u: goto label_202fe0;
        case 0x202fe4u: goto label_202fe4;
        case 0x202fe8u: goto label_202fe8;
        case 0x202fecu: goto label_202fec;
        case 0x202ff0u: goto label_202ff0;
        case 0x202ff4u: goto label_202ff4;
        case 0x202ff8u: goto label_202ff8;
        case 0x202ffcu: goto label_202ffc;
        case 0x203000u: goto label_203000;
        case 0x203004u: goto label_203004;
        case 0x203008u: goto label_203008;
        case 0x20300cu: goto label_20300c;
        case 0x203010u: goto label_203010;
        case 0x203014u: goto label_203014;
        case 0x203018u: goto label_203018;
        case 0x20301cu: goto label_20301c;
        case 0x203020u: goto label_203020;
        case 0x203024u: goto label_203024;
        case 0x203028u: goto label_203028;
        case 0x20302cu: goto label_20302c;
        case 0x203030u: goto label_203030;
        case 0x203034u: goto label_203034;
        case 0x203038u: goto label_203038;
        case 0x20303cu: goto label_20303c;
        case 0x203040u: goto label_203040;
        case 0x203044u: goto label_203044;
        case 0x203048u: goto label_203048;
        case 0x20304cu: goto label_20304c;
        case 0x203050u: goto label_203050;
        case 0x203054u: goto label_203054;
        case 0x203058u: goto label_203058;
        case 0x20305cu: goto label_20305c;
        case 0x203060u: goto label_203060;
        case 0x203064u: goto label_203064;
        case 0x203068u: goto label_203068;
        case 0x20306cu: goto label_20306c;
        case 0x203070u: goto label_203070;
        case 0x203074u: goto label_203074;
        case 0x203078u: goto label_203078;
        case 0x20307cu: goto label_20307c;
        case 0x203080u: goto label_203080;
        case 0x203084u: goto label_203084;
        case 0x203088u: goto label_203088;
        case 0x20308cu: goto label_20308c;
        case 0x203090u: goto label_203090;
        case 0x203094u: goto label_203094;
        case 0x203098u: goto label_203098;
        case 0x20309cu: goto label_20309c;
        case 0x2030a0u: goto label_2030a0;
        case 0x2030a4u: goto label_2030a4;
        case 0x2030a8u: goto label_2030a8;
        case 0x2030acu: goto label_2030ac;
        case 0x2030b0u: goto label_2030b0;
        case 0x2030b4u: goto label_2030b4;
        case 0x2030b8u: goto label_2030b8;
        case 0x2030bcu: goto label_2030bc;
        case 0x2030c0u: goto label_2030c0;
        case 0x2030c4u: goto label_2030c4;
        case 0x2030c8u: goto label_2030c8;
        case 0x2030ccu: goto label_2030cc;
        case 0x2030d0u: goto label_2030d0;
        case 0x2030d4u: goto label_2030d4;
        case 0x2030d8u: goto label_2030d8;
        case 0x2030dcu: goto label_2030dc;
        case 0x2030e0u: goto label_2030e0;
        case 0x2030e4u: goto label_2030e4;
        case 0x2030e8u: goto label_2030e8;
        case 0x2030ecu: goto label_2030ec;
        case 0x2030f0u: goto label_2030f0;
        case 0x2030f4u: goto label_2030f4;
        case 0x2030f8u: goto label_2030f8;
        case 0x2030fcu: goto label_2030fc;
        case 0x203100u: goto label_203100;
        case 0x203104u: goto label_203104;
        case 0x203108u: goto label_203108;
        case 0x20310cu: goto label_20310c;
        case 0x203110u: goto label_203110;
        case 0x203114u: goto label_203114;
        case 0x203118u: goto label_203118;
        case 0x20311cu: goto label_20311c;
        case 0x203120u: goto label_203120;
        case 0x203124u: goto label_203124;
        case 0x203128u: goto label_203128;
        case 0x20312cu: goto label_20312c;
        case 0x203130u: goto label_203130;
        case 0x203134u: goto label_203134;
        case 0x203138u: goto label_203138;
        case 0x20313cu: goto label_20313c;
        case 0x203140u: goto label_203140;
        case 0x203144u: goto label_203144;
        case 0x203148u: goto label_203148;
        case 0x20314cu: goto label_20314c;
        case 0x203150u: goto label_203150;
        case 0x203154u: goto label_203154;
        case 0x203158u: goto label_203158;
        case 0x20315cu: goto label_20315c;
        case 0x203160u: goto label_203160;
        case 0x203164u: goto label_203164;
        case 0x203168u: goto label_203168;
        case 0x20316cu: goto label_20316c;
        case 0x203170u: goto label_203170;
        case 0x203174u: goto label_203174;
        case 0x203178u: goto label_203178;
        case 0x20317cu: goto label_20317c;
        case 0x203180u: goto label_203180;
        case 0x203184u: goto label_203184;
        case 0x203188u: goto label_203188;
        case 0x20318cu: goto label_20318c;
        case 0x203190u: goto label_203190;
        case 0x203194u: goto label_203194;
        case 0x203198u: goto label_203198;
        case 0x20319cu: goto label_20319c;
        case 0x2031a0u: goto label_2031a0;
        case 0x2031a4u: goto label_2031a4;
        case 0x2031a8u: goto label_2031a8;
        case 0x2031acu: goto label_2031ac;
        case 0x2031b0u: goto label_2031b0;
        case 0x2031b4u: goto label_2031b4;
        case 0x2031b8u: goto label_2031b8;
        case 0x2031bcu: goto label_2031bc;
        case 0x2031c0u: goto label_2031c0;
        case 0x2031c4u: goto label_2031c4;
        case 0x2031c8u: goto label_2031c8;
        case 0x2031ccu: goto label_2031cc;
        case 0x2031d0u: goto label_2031d0;
        case 0x2031d4u: goto label_2031d4;
        case 0x2031d8u: goto label_2031d8;
        case 0x2031dcu: goto label_2031dc;
        case 0x2031e0u: goto label_2031e0;
        case 0x2031e4u: goto label_2031e4;
        case 0x2031e8u: goto label_2031e8;
        case 0x2031ecu: goto label_2031ec;
        case 0x2031f0u: goto label_2031f0;
        case 0x2031f4u: goto label_2031f4;
        case 0x2031f8u: goto label_2031f8;
        case 0x2031fcu: goto label_2031fc;
        case 0x203200u: goto label_203200;
        case 0x203204u: goto label_203204;
        case 0x203208u: goto label_203208;
        case 0x20320cu: goto label_20320c;
        case 0x203210u: goto label_203210;
        case 0x203214u: goto label_203214;
        case 0x203218u: goto label_203218;
        case 0x20321cu: goto label_20321c;
        case 0x203220u: goto label_203220;
        case 0x203224u: goto label_203224;
        case 0x203228u: goto label_203228;
        case 0x20322cu: goto label_20322c;
        case 0x203230u: goto label_203230;
        case 0x203234u: goto label_203234;
        case 0x203238u: goto label_203238;
        case 0x20323cu: goto label_20323c;
        case 0x203240u: goto label_203240;
        case 0x203244u: goto label_203244;
        case 0x203248u: goto label_203248;
        case 0x20324cu: goto label_20324c;
        case 0x203250u: goto label_203250;
        case 0x203254u: goto label_203254;
        case 0x203258u: goto label_203258;
        case 0x20325cu: goto label_20325c;
        case 0x203260u: goto label_203260;
        case 0x203264u: goto label_203264;
        case 0x203268u: goto label_203268;
        case 0x20326cu: goto label_20326c;
        case 0x203270u: goto label_203270;
        case 0x203274u: goto label_203274;
        case 0x203278u: goto label_203278;
        case 0x20327cu: goto label_20327c;
        case 0x203280u: goto label_203280;
        case 0x203284u: goto label_203284;
        case 0x203288u: goto label_203288;
        case 0x20328cu: goto label_20328c;
        case 0x203290u: goto label_203290;
        case 0x203294u: goto label_203294;
        case 0x203298u: goto label_203298;
        case 0x20329cu: goto label_20329c;
        case 0x2032a0u: goto label_2032a0;
        case 0x2032a4u: goto label_2032a4;
        case 0x2032a8u: goto label_2032a8;
        case 0x2032acu: goto label_2032ac;
        case 0x2032b0u: goto label_2032b0;
        case 0x2032b4u: goto label_2032b4;
        case 0x2032b8u: goto label_2032b8;
        case 0x2032bcu: goto label_2032bc;
        case 0x2032c0u: goto label_2032c0;
        case 0x2032c4u: goto label_2032c4;
        case 0x2032c8u: goto label_2032c8;
        case 0x2032ccu: goto label_2032cc;
        case 0x2032d0u: goto label_2032d0;
        case 0x2032d4u: goto label_2032d4;
        case 0x2032d8u: goto label_2032d8;
        case 0x2032dcu: goto label_2032dc;
        case 0x2032e0u: goto label_2032e0;
        case 0x2032e4u: goto label_2032e4;
        case 0x2032e8u: goto label_2032e8;
        case 0x2032ecu: goto label_2032ec;
        case 0x2032f0u: goto label_2032f0;
        case 0x2032f4u: goto label_2032f4;
        case 0x2032f8u: goto label_2032f8;
        case 0x2032fcu: goto label_2032fc;
        case 0x203300u: goto label_203300;
        case 0x203304u: goto label_203304;
        case 0x203308u: goto label_203308;
        case 0x20330cu: goto label_20330c;
        case 0x203310u: goto label_203310;
        case 0x203314u: goto label_203314;
        case 0x203318u: goto label_203318;
        case 0x20331cu: goto label_20331c;
        case 0x203320u: goto label_203320;
        case 0x203324u: goto label_203324;
        case 0x203328u: goto label_203328;
        case 0x20332cu: goto label_20332c;
        case 0x203330u: goto label_203330;
        case 0x203334u: goto label_203334;
        case 0x203338u: goto label_203338;
        case 0x20333cu: goto label_20333c;
        case 0x203340u: goto label_203340;
        case 0x203344u: goto label_203344;
        case 0x203348u: goto label_203348;
        case 0x20334cu: goto label_20334c;
        default: break;
    }

    ctx->pc = 0x202850u;

label_202850:
    // 0x202850: 0xc4a90004  lwc1        $f9, 0x4($a1)
    ctx->pc = 0x202850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_202854:
    // 0x202854: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x202854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202858:
    // 0x202858: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x202858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20285c:
    // 0x20285c: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x20285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_202860:
    // 0x202860: 0x46090201  sub.s       $f8, $f0, $f9
    ctx->pc = 0x202860u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
label_202864:
    // 0x202864: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x202864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202868:
    // 0x202868: 0xc4cb0000  lwc1        $f11, 0x0($a2)
    ctx->pc = 0x202868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_20286c:
    // 0x20286c: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x20286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_202870:
    // 0x202870: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x202870u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_202874:
    // 0x202874: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x202874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_202878:
    // 0x202878: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x202878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20287c:
    // 0x20287c: 0x460c5a81  sub.s       $f10, $f11, $f12
    ctx->pc = 0x20287cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[11], ctx->f[12]);
label_202880:
    // 0x202880: 0x46071181  sub.s       $f6, $f2, $f7
    ctx->pc = 0x202880u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_202884:
    // 0x202884: 0x4608401a  mula.s      $f8, $f8
    ctx->pc = 0x202884u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_202888:
    // 0x202888: 0x460a501e  madda.s     $f10, $f10
    ctx->pc = 0x202888u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
label_20288c:
    // 0x20288c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x20288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_202890:
    // 0x202890: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x202890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
label_202894:
    // 0x202894: 0x460630dc  madd.s      $f3, $f6, $f6
    ctx->pc = 0x202894u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
label_202898:
    // 0x202898: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x202898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20289c:
    // 0x20289c: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x20289cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_2028a0:
    // 0x2028a0: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x2028a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
label_2028a4:
    // 0x2028a4: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x2028a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_2028a8:
    // 0x2028a8: 0x4600501e  madda.s     $f10, $f0
    ctx->pc = 0x2028a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[0]));
label_2028ac:
    // 0x2028ac: 0x4602301c  madd.s      $f0, $f6, $f2
    ctx->pc = 0x2028acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
label_2028b0:
    // 0x2028b0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2028b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2028b4:
    // 0x2028b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2028b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2028b8:
    // 0x2028b8: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x2028b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2028bc:
    // 0x2028bc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2028c0:
    if (ctx->pc == 0x2028C0u) {
        ctx->pc = 0x2028C4u;
        goto label_2028c4;
    }
    ctx->pc = 0x2028BCu;
    {
        const bool branch_taken_0x2028bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2028bc) {
            ctx->pc = 0x2028E4u;
            goto label_2028e4;
        }
    }
    ctx->pc = 0x2028C4u;
label_2028c4:
    // 0x2028c4: 0xe4ec0000  swc1        $f12, 0x0($a3)
    ctx->pc = 0x2028c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2028c8:
    // 0x2028c8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2028c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2028cc:
    // 0x2028cc: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2028ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_2028d0:
    // 0x2028d0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2028d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2028d4:
    // 0x2028d4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2028d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_2028d8:
    // 0x2028d8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2028d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2028dc:
    // 0x2028dc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2028e0:
    if (ctx->pc == 0x2028E0u) {
        ctx->pc = 0x2028E0u;
            // 0x2028e0: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->pc = 0x2028E4u;
        goto label_2028e4;
    }
    ctx->pc = 0x2028DCu;
    {
        const bool branch_taken_0x2028dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2028E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2028DCu;
            // 0x2028e0: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028dc) {
            ctx->pc = 0x202958u;
            goto label_202958;
        }
    }
    ctx->pc = 0x2028E4u;
label_2028e4:
    // 0x2028e4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2028e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2028e8:
    // 0x2028e8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2028ec:
    if (ctx->pc == 0x2028ECu) {
        ctx->pc = 0x2028F0u;
        goto label_2028f0;
    }
    ctx->pc = 0x2028E8u;
    {
        const bool branch_taken_0x2028e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2028e8) {
            ctx->pc = 0x202910u;
            goto label_202910;
        }
    }
    ctx->pc = 0x2028F0u;
label_2028f0:
    // 0x2028f0: 0xe4eb0000  swc1        $f11, 0x0($a3)
    ctx->pc = 0x2028f0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2028f4:
    // 0x2028f4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2028f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2028f8:
    // 0x2028f8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2028f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_2028fc:
    // 0x2028fc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2028fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202900:
    // 0x202900: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x202900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_202904:
    // 0x202904: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x202904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202908:
    // 0x202908: 0x10000013  b           . + 4 + (0x13 << 2)
label_20290c:
    if (ctx->pc == 0x20290Cu) {
        ctx->pc = 0x20290Cu;
            // 0x20290c: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->pc = 0x202910u;
        goto label_202910;
    }
    ctx->pc = 0x202908u;
    {
        const bool branch_taken_0x202908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202908u;
            // 0x20290c: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202908) {
            ctx->pc = 0x202958u;
            goto label_202958;
        }
    }
    ctx->pc = 0x202910u;
label_202910:
    // 0x202910: 0x0  nop
    ctx->pc = 0x202910u;
    // NOP
label_202914:
    // 0x202914: 0x0  nop
    ctx->pc = 0x202914u;
    // NOP
label_202918:
    // 0x202918: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x202918u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[3];
label_20291c:
    // 0x20291c: 0x460c2018  adda.s      $f4, $f12
    ctx->pc = 0x20291cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
label_202920:
    // 0x202920: 0x460a081c  madd.s      $f0, $f1, $f10
    ctx->pc = 0x202920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[10]));
label_202924:
    // 0x202924: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x202924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_202928:
    // 0x202928: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x202928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20292c:
    // 0x20292c: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x20292cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_202930:
    // 0x202930: 0x4608081c  madd.s      $f0, $f1, $f8
    ctx->pc = 0x202930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
label_202934:
    // 0x202934: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x202934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_202938:
    // 0x202938: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x202938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20293c:
    // 0x20293c: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x20293cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_202940:
    // 0x202940: 0x4606081c  madd.s      $f0, $f1, $f6
    ctx->pc = 0x202940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
label_202944:
    // 0x202944: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x202944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_202948:
    // 0x202948: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x202948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20294c:
    // 0x20294c: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x20294cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_202950:
    // 0x202950: 0x4605081c  madd.s      $f0, $f1, $f5
    ctx->pc = 0x202950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
label_202954:
    // 0x202954: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x202954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_202958:
    // 0x202958: 0x3e00008  jr          $ra
label_20295c:
    if (ctx->pc == 0x20295Cu) {
        ctx->pc = 0x202960u;
        goto label_202960;
    }
    ctx->pc = 0x202958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202960u;
label_202960:
    // 0x202960: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x202960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_202964:
    // 0x202964: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x202964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_202968:
    // 0x202968: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x202968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20296c:
    // 0x20296c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20296cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_202970:
    // 0x202970: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x202970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_202974:
    // 0x202974: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x202974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_202978:
    // 0x202978: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x202978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20297c:
    // 0x20297c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_202980:
    // 0x202980: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x202980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_202984:
    // 0x202984: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x202984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_202988:
    // 0x202988: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x202988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20298c:
    // 0x20298c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20298cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_202990:
    // 0x202990: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x202990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_202994:
    // 0x202994: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x202994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_202998:
    // 0x202998: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x202998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20299c:
    // 0x20299c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x20299cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_2029a0:
    // 0x2029a0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2029a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2029a4:
    // 0x2029a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2029a8:
    if (ctx->pc == 0x2029A8u) {
        ctx->pc = 0x2029A8u;
            // 0x2029a8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x2029ACu;
        goto label_2029ac;
    }
    ctx->pc = 0x2029A4u;
    {
        const bool branch_taken_0x2029a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2029A4u;
            // 0x2029a8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029a4) {
            ctx->pc = 0x2029D4u;
            goto label_2029d4;
        }
    }
    ctx->pc = 0x2029ACu;
label_2029ac:
    // 0x2029ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2029acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2029b0:
    // 0x2029b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2029b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2029b4:
    // 0x2029b4: 0x2442b5e8  addiu       $v0, $v0, -0x4A18
    ctx->pc = 0x2029b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948328));
label_2029b8:
    // 0x2029b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2029b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2029bc:
    // 0x2029bc: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2029bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2029c0:
    // 0x2029c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2029c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2029c4:
    // 0x2029c4: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2029c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_2029c8:
    // 0x2029c8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2029c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2029cc:
    // 0x2029cc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2029ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_2029d0:
    // 0x2029d0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2029d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2029d4:
    // 0x2029d4: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x2029d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2029d8:
    // 0x2029d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2029d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2029dc:
    // 0x2029dc: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2029dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2029e0:
    // 0x2029e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2029e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2029e4:
    // 0x2029e4: 0xc080a14  jal         func_202850
label_2029e8:
    if (ctx->pc == 0x2029E8u) {
        ctx->pc = 0x2029E8u;
            // 0x2029e8: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2029ECu;
        goto label_2029ec;
    }
    ctx->pc = 0x2029E4u;
    SET_GPR_U32(ctx, 31, 0x2029ECu);
    ctx->pc = 0x2029E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2029E4u;
            // 0x2029e8: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202850u;
    goto label_202850;
    ctx->pc = 0x2029ECu;
label_2029ec:
    // 0x2029ec: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2029ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2029f0:
    // 0x2029f0: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x2029f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2029f4:
    // 0x2029f4: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x2029f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2029f8:
    // 0x2029f8: 0xc7a400f0  lwc1        $f4, 0xF0($sp)
    ctx->pc = 0x2029f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2029fc:
    // 0x2029fc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2029fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_202a00:
    // 0x202a00: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x202a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202a04:
    // 0x202a04: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x202a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202a08:
    // 0x202a08: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x202a08u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_202a0c:
    // 0x202a0c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x202a0cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_202a10:
    // 0x202a10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x202a10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_202a14:
    // 0x202a14: 0x4604201e  madda.s     $f4, $f4
    ctx->pc = 0x202a14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_202a18:
    // 0x202a18: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x202a18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_202a1c:
    // 0x202a1c: 0x46000044  c1          0x44
    ctx->pc = 0x202a1cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_202a20:
    // 0x202a20: 0x0  nop
    ctx->pc = 0x202a20u;
    // NOP
label_202a24:
    // 0x202a24: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x202a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202a28:
    // 0x202a28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x202a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202a2c:
    // 0x202a2c: 0x450301e6  bc1tl       . + 4 + (0x1E6 << 2)
label_202a30:
    if (ctx->pc == 0x202A30u) {
        ctx->pc = 0x202A30u;
            // 0x202a30: 0xa2800000  sb          $zero, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x202A34u;
        goto label_202a34;
    }
    ctx->pc = 0x202A2Cu;
    {
        const bool branch_taken_0x202a2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202a2c) {
            ctx->pc = 0x202A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202A2Cu;
            // 0x202a30: 0xa2800000  sb          $zero, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2031C8u;
            goto label_2031c8;
        }
    }
    ctx->pc = 0x202A34u;
label_202a34:
    // 0x202a34: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x202a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_202a38:
    // 0x202a38: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x202a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_202a3c:
    // 0x202a3c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x202a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_202a40:
    // 0x202a40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_202a44:
    // 0x202a44: 0xafa30118  sw          $v1, 0x118($sp)
    ctx->pc = 0x202a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
label_202a48:
    // 0x202a48: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x202a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_202a4c:
    // 0x202a4c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x202a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202a50:
    // 0x202a50: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x202a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_202a54:
    // 0x202a54: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x202a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202a58:
    // 0x202a58: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x202a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_202a5c:
    // 0x202a5c: 0x27a80118  addiu       $t0, $sp, 0x118
    ctx->pc = 0x202a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_202a60:
    // 0x202a60: 0x27a90114  addiu       $t1, $sp, 0x114
    ctx->pc = 0x202a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_202a64:
    // 0x202a64: 0x27aa0110  addiu       $t2, $sp, 0x110
    ctx->pc = 0x202a64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_202a68:
    // 0x202a68: 0x27ab00e0  addiu       $t3, $sp, 0xE0
    ctx->pc = 0x202a68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_202a6c:
    // 0x202a6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x202a6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_202a70:
    // 0x202a70: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x202a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_202a74:
    // 0x202a74: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x202a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202a78:
    // 0x202a78: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x202a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202a7c:
    // 0x202a7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x202a7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_202a80:
    // 0x202a80: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x202a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_202a84:
    // 0x202a84: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x202a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202a88:
    // 0x202a88: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x202a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202a8c:
    // 0x202a8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x202a8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_202a90:
    // 0x202a90: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x202a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_202a94:
    // 0x202a94: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x202a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202a98:
    // 0x202a98: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x202a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202a9c:
    // 0x202a9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x202a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_202aa0:
    // 0x202aa0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x202aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_202aa4:
    // 0x202aa4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x202aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202aa8:
    // 0x202aa8: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x202aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202aac:
    // 0x202aac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x202aacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_202ab0:
    // 0x202ab0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x202ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_202ab4:
    // 0x202ab4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x202ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202ab8:
    // 0x202ab8: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x202ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202abc:
    // 0x202abc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x202abcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_202ac0:
    // 0x202ac0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x202ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_202ac4:
    // 0x202ac4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x202ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202ac8:
    // 0x202ac8: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x202ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202acc:
    // 0x202acc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x202accu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_202ad0:
    // 0x202ad0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x202ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_202ad4:
    // 0x202ad4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x202ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202ad8:
    // 0x202ad8: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x202ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202adc:
    // 0x202adc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x202adcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_202ae0:
    // 0x202ae0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x202ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_202ae4:
    // 0x202ae4: 0xc0809a8  jal         func_2026A0
label_202ae8:
    if (ctx->pc == 0x202AE8u) {
        ctx->pc = 0x202AE8u;
            // 0x202ae8: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x202AECu;
        goto label_202aec;
    }
    ctx->pc = 0x202AE4u;
    SET_GPR_U32(ctx, 31, 0x202AECu);
    ctx->pc = 0x202AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202AE4u;
            // 0x202ae8: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2026A0u;
    if (runtime->hasFunction(0x2026A0u)) {
        auto targetFn = runtime->lookupFunction(0x2026A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AECu; }
        if (ctx->pc != 0x202AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002026A0_0x2026a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AECu; }
        if (ctx->pc != 0x202AECu) { return; }
    }
    ctx->pc = 0x202AECu;
label_202aec:
    // 0x202aec: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x202aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202af0:
    // 0x202af0: 0xc7a60118  lwc1        $f6, 0x118($sp)
    ctx->pc = 0x202af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_202af4:
    // 0x202af4: 0x460001c2  mul.s       $f7, $f0, $f0
    ctx->pc = 0x202af4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_202af8:
    // 0x202af8: 0x46073036  c.le.s      $f6, $f7
    ctx->pc = 0x202af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202afc:
    // 0x202afc: 0x450001b1  bc1f        . + 4 + (0x1B1 << 2)
label_202b00:
    if (ctx->pc == 0x202B00u) {
        ctx->pc = 0x202B04u;
        goto label_202b04;
    }
    ctx->pc = 0x202AFCu;
    {
        const bool branch_taken_0x202afc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202afc) {
            ctx->pc = 0x2031C4u;
            goto label_2031c4;
        }
    }
    ctx->pc = 0x202B04u;
label_202b04:
    // 0x202b04: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x202b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_202b08:
    // 0x202b08: 0x3c023400  lui         $v0, 0x3400
    ctx->pc = 0x202b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13312 << 16));
label_202b0c:
    // 0x202b0c: 0xc7a500b0  lwc1        $f5, 0xB0($sp)
    ctx->pc = 0x202b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_202b10:
    // 0x202b10: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x202b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_202b14:
    // 0x202b14: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x202b14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_202b18:
    // 0x202b18: 0x4605281e  madda.s     $f5, $f5
    ctx->pc = 0x202b18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
label_202b1c:
    // 0x202b1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_202b20:
    // 0x202b20: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x202b20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_202b24:
    // 0x202b24: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x202b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202b28:
    // 0x202b28: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x202b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_202b2c:
    // 0x202b2c: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_202b30:
    if (ctx->pc == 0x202B30u) {
        ctx->pc = 0x202B30u;
            // 0x202b30: 0x460092c6  mov.s       $f11, $f18 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[18]);
        ctx->pc = 0x202B34u;
        goto label_202b34;
    }
    ctx->pc = 0x202B2Cu;
    {
        const bool branch_taken_0x202b2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202b2c) {
            ctx->pc = 0x202B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202B2Cu;
            // 0x202b30: 0x460092c6  mov.s       $f11, $f18 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x202B60u;
            goto label_202b60;
        }
    }
    ctx->pc = 0x202B34u;
label_202b34:
    // 0x202b34: 0x0  nop
    ctx->pc = 0x202b34u;
    // NOP
label_202b38:
    // 0x202b38: 0x0  nop
    ctx->pc = 0x202b38u;
    // NOP
label_202b3c:
    // 0x202b3c: 0x46020484  c1          0x20484
    ctx->pc = 0x202b3cu;
    ctx->f[18] = FPU_SQRT_S(ctx->f[0]);
label_202b40:
    // 0x202b40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_202b44:
    // 0x202b44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_202b48:
    // 0x202b48: 0x0  nop
    ctx->pc = 0x202b48u;
    // NOP
label_202b4c:
    // 0x202b4c: 0x46120843  div.s       $f1, $f1, $f18
    ctx->pc = 0x202b4cu;
    if (ctx->f[18] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[18];
label_202b50:
    // 0x202b50: 0x46012b42  mul.s       $f13, $f5, $f1
    ctx->pc = 0x202b50u;
    ctx->f[13] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_202b54:
    // 0x202b54: 0x46012302  mul.s       $f12, $f4, $f1
    ctx->pc = 0x202b54u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_202b58:
    // 0x202b58: 0x10000003  b           . + 4 + (0x3 << 2)
label_202b5c:
    if (ctx->pc == 0x202B5Cu) {
        ctx->pc = 0x202B5Cu;
            // 0x202b5c: 0x46011ac2  mul.s       $f11, $f3, $f1 (Delay Slot)
        ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
        ctx->pc = 0x202B60u;
        goto label_202b60;
    }
    ctx->pc = 0x202B58u;
    {
        const bool branch_taken_0x202b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202B58u;
            // 0x202b5c: 0x46011ac2  mul.s       $f11, $f3, $f1 (Delay Slot)
        ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b58) {
            ctx->pc = 0x202B68u;
            goto label_202b68;
        }
    }
    ctx->pc = 0x202B60u;
label_202b60:
    // 0x202b60: 0x46009306  mov.s       $f12, $f18
    ctx->pc = 0x202b60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[18]);
label_202b64:
    // 0x202b64: 0x46009346  mov.s       $f13, $f18
    ctx->pc = 0x202b64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[18]);
label_202b68:
    // 0x202b68: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x202b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_202b6c:
    // 0x202b6c: 0x46063841  sub.s       $f1, $f7, $f6
    ctx->pc = 0x202b6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_202b70:
    // 0x202b70: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x202b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_202b74:
    // 0x202b74: 0x460c181a  mula.s      $f3, $f12
    ctx->pc = 0x202b74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
label_202b78:
    // 0x202b78: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x202b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_202b7c:
    // 0x202b7c: 0x460d201e  madda.s     $f4, $f13
    ctx->pc = 0x202b7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[13]));
label_202b80:
    // 0x202b80: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x202b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_202b84:
    // 0x202b84: 0x460b289c  madd.s      $f2, $f5, $f11
    ctx->pc = 0x202b84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[11]));
label_202b88:
    // 0x202b88: 0x46043018  adda.s      $f6, $f4
    ctx->pc = 0x202b88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_202b8c:
    // 0x202b8c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x202b8cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_202b90:
    // 0x202b90: 0x460d111c  madd.s      $f4, $f2, $f13
    ctx->pc = 0x202b90u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[13]));
label_202b94:
    // 0x202b94: 0x46033018  adda.s      $f6, $f3
    ctx->pc = 0x202b94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
label_202b98:
    // 0x202b98: 0x460c10dc  madd.s      $f3, $f2, $f12
    ctx->pc = 0x202b98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[12]));
label_202b9c:
    // 0x202b9c: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x202b9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_202ba0:
    // 0x202ba0: 0x460b109c  madd.s      $f2, $f2, $f11
    ctx->pc = 0x202ba0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[11]));
label_202ba4:
    // 0x202ba4: 0x46010144  c1          0x10144
    ctx->pc = 0x202ba4u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
label_202ba8:
    // 0x202ba8: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x202ba8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_202bac:
    // 0x202bac: 0x4604201e  madda.s     $f4, $f4
    ctx->pc = 0x202bacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_202bb0:
    // 0x202bb0: 0x4602109c  madd.s      $f2, $f2, $f2
    ctx->pc = 0x202bb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_202bb4:
    // 0x202bb4: 0x46023032  c.eq.s      $f6, $f2
    ctx->pc = 0x202bb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202bb8:
    // 0x202bb8: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_202bbc:
    if (ctx->pc == 0x202BBCu) {
        ctx->pc = 0x202BBCu;
            // 0x202bbc: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x202BC0u;
        goto label_202bc0;
    }
    ctx->pc = 0x202BB8u;
    {
        const bool branch_taken_0x202bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202bb8) {
            ctx->pc = 0x202BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202BB8u;
            // 0x202bbc: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202BF8u;
            goto label_202bf8;
        }
    }
    ctx->pc = 0x202BC0u;
label_202bc0:
    // 0x202bc0: 0x46061032  c.eq.s      $f2, $f6
    ctx->pc = 0x202bc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202bc4:
    // 0x202bc4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_202bc8:
    if (ctx->pc == 0x202BC8u) {
        ctx->pc = 0x202BCCu;
        goto label_202bcc;
    }
    ctx->pc = 0x202BC4u;
    {
        const bool branch_taken_0x202bc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202bc4) {
            ctx->pc = 0x202BE8u;
            goto label_202be8;
        }
    }
    ctx->pc = 0x202BCCu;
label_202bcc:
    // 0x202bcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_202bd0:
    // 0x202bd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_202bd4:
    // 0x202bd4: 0x0  nop
    ctx->pc = 0x202bd4u;
    // NOP
label_202bd8:
    // 0x202bd8: 0x46020996  rsqrt.s     $f6, $f1, $f2
    ctx->pc = 0x202bd8u;
    ctx->f[6] = 1.0f / sqrtf(ctx->f[1]);
label_202bdc:
    // 0x202bdc: 0x0  nop
    ctx->pc = 0x202bdcu;
    // NOP
label_202be0:
    // 0x202be0: 0x0  nop
    ctx->pc = 0x202be0u;
    // NOP
label_202be4:
    // 0x202be4: 0x0  nop
    ctx->pc = 0x202be4u;
    // NOP
label_202be8:
    // 0x202be8: 0x46062882  mul.s       $f2, $f5, $f6
    ctx->pc = 0x202be8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_202bec:
    // 0x202bec: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x202becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202bf0:
    // 0x202bf0: 0x10000002  b           . + 4 + (0x2 << 2)
label_202bf4:
    if (ctx->pc == 0x202BF4u) {
        ctx->pc = 0x202BF4u;
            // 0x202bf4: 0x46020c41  sub.s       $f17, $f1, $f2 (Delay Slot)
        ctx->f[17] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->pc = 0x202BF8u;
        goto label_202bf8;
    }
    ctx->pc = 0x202BF0u;
    {
        const bool branch_taken_0x202bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202BF0u;
            // 0x202bf4: 0x46020c41  sub.s       $f17, $f1, $f2 (Delay Slot)
        ctx->f[17] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bf0) {
            ctx->pc = 0x202BFCu;
            goto label_202bfc;
        }
    }
    ctx->pc = 0x202BF8u;
label_202bf8:
    // 0x202bf8: 0x44828800  mtc1        $v0, $f17
    ctx->pc = 0x202bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_202bfc:
    // 0x202bfc: 0xc6290010  lwc1        $f9, 0x10($s1)
    ctx->pc = 0x202bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_202c00:
    // 0x202c00: 0x46098834  c.lt.s      $f17, $f9
    ctx->pc = 0x202c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202c04:
    // 0x202c04: 0x4500016f  bc1f        . + 4 + (0x16F << 2)
label_202c08:
    if (ctx->pc == 0x202C08u) {
        ctx->pc = 0x202C0Cu;
        goto label_202c0c;
    }
    ctx->pc = 0x202C04u;
    {
        const bool branch_taken_0x202c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202c04) {
            ctx->pc = 0x2031C4u;
            goto label_2031c4;
        }
    }
    ctx->pc = 0x202C0Cu;
label_202c0c:
    // 0x202c0c: 0xc6660024  lwc1        $f6, 0x24($s3)
    ctx->pc = 0x202c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_202c10:
    // 0x202c10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_202c14:
    // 0x202c14: 0xc6670020  lwc1        $f7, 0x20($s3)
    ctx->pc = 0x202c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_202c18:
    // 0x202c18: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x202c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_202c1c:
    // 0x202c1c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x202c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_202c20:
    // 0x202c20: 0x460c301a  mula.s      $f6, $f12
    ctx->pc = 0x202c20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
label_202c24:
    // 0x202c24: 0xc6680028  lwc1        $f8, 0x28($s3)
    ctx->pc = 0x202c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_202c28:
    // 0x202c28: 0x460d381e  madda.s     $f7, $f13
    ctx->pc = 0x202c28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[13]));
label_202c2c:
    // 0x202c2c: 0x46112cc1  sub.s       $f19, $f5, $f17
    ctx->pc = 0x202c2cu;
    ctx->f[19] = FPU_SUB_S(ctx->f[5], ctx->f[17]);
label_202c30:
    // 0x202c30: 0xc64a0010  lwc1        $f10, 0x10($s2)
    ctx->pc = 0x202c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_202c34:
    // 0x202c34: 0x460b439c  madd.s      $f14, $f8, $f11
    ctx->pc = 0x202c34u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[11]));
label_202c38:
    // 0x202c38: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x202c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202c3c:
    // 0x202c3c: 0x460a881a  mula.s      $f17, $f10
    ctx->pc = 0x202c3cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[10]);
label_202c40:
    // 0x202c40: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x202c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_202c44:
    // 0x202c44: 0x4601991c  madd.s      $f4, $f19, $f1
    ctx->pc = 0x202c44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[1]));
label_202c48:
    // 0x202c48: 0xc6500004  lwc1        $f16, 0x4($s2)
    ctx->pc = 0x202c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_202c4c:
    // 0x202c4c: 0x4603881a  mula.s      $f17, $f3
    ctx->pc = 0x202c4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[3]);
label_202c50:
    // 0x202c50: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x202c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202c54:
    // 0x202c54: 0x461098dc  madd.s      $f3, $f19, $f16
    ctx->pc = 0x202c54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[16]));
label_202c58:
    // 0x202c58: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x202c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_202c5c:
    // 0x202c5c: 0x4601881a  mula.s      $f17, $f1
    ctx->pc = 0x202c5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
label_202c60:
    // 0x202c60: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x202c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_202c64:
    // 0x202c64: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x202c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202c68:
    // 0x202c68: 0xc650000c  lwc1        $f16, 0xC($s2)
    ctx->pc = 0x202c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_202c6c:
    // 0x202c6c: 0x4602989c  madd.s      $f2, $f19, $f2
    ctx->pc = 0x202c6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[2]));
label_202c70:
    // 0x202c70: 0x4601881a  mula.s      $f17, $f1
    ctx->pc = 0x202c70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
label_202c74:
    // 0x202c74: 0x4610985c  madd.s      $f1, $f19, $f16
    ctx->pc = 0x202c74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[16]));
label_202c78:
    // 0x202c78: 0x460c181a  mula.s      $f3, $f12
    ctx->pc = 0x202c78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
label_202c7c:
    // 0x202c7c: 0x460d201e  madda.s     $f4, $f13
    ctx->pc = 0x202c7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[13]));
label_202c80:
    // 0x202c80: 0x460b141c  madd.s      $f16, $f2, $f11
    ctx->pc = 0x202c80u;
    ctx->f[16] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[11]));
label_202c84:
    // 0x202c84: 0x460e8401  sub.s       $f16, $f16, $f14
    ctx->pc = 0x202c84u;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[14]);
label_202c88:
    // 0x202c88: 0x460f8834  c.lt.s      $f17, $f15
    ctx->pc = 0x202c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202c8c:
    // 0x202c8c: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x202c8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_202c90:
    // 0x202c90: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x202c90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_202c94:
    // 0x202c94: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x202c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_202c98:
    // 0x202c98: 0x45010057  bc1t        . + 4 + (0x57 << 2)
label_202c9c:
    if (ctx->pc == 0x202C9Cu) {
        ctx->pc = 0x202C9Cu;
            // 0x202c9c: 0xe7a100ac  swc1        $f1, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x202CA0u;
        goto label_202ca0;
    }
    ctx->pc = 0x202C98u;
    {
        const bool branch_taken_0x202c98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x202C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202C98u;
            // 0x202c9c: 0xe7a100ac  swc1        $f1, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c98) {
            ctx->pc = 0x202DF8u;
            goto label_202df8;
        }
    }
    ctx->pc = 0x202CA0u;
label_202ca0:
    // 0x202ca0: 0x460f8036  c.le.s      $f16, $f15
    ctx->pc = 0x202ca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[16], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202ca4:
    // 0x202ca4: 0x45030055  bc1tl       . + 4 + (0x55 << 2)
label_202ca8:
    if (ctx->pc == 0x202CA8u) {
        ctx->pc = 0x202CA8u;
            // 0x202ca8: 0xc6430004  lwc1        $f3, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x202CACu;
        goto label_202cac;
    }
    ctx->pc = 0x202CA4u;
    {
        const bool branch_taken_0x202ca4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202ca4) {
            ctx->pc = 0x202CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202CA4u;
            // 0x202ca8: 0xc6430004  lwc1        $f3, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x202DFCu;
            goto label_202dfc;
        }
    }
    ctx->pc = 0x202CACu;
label_202cac:
    // 0x202cac: 0x46128034  c.lt.s      $f16, $f18
    ctx->pc = 0x202cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202cb0:
    // 0x202cb0: 0x45000051  bc1f        . + 4 + (0x51 << 2)
label_202cb4:
    if (ctx->pc == 0x202CB4u) {
        ctx->pc = 0x202CB8u;
        goto label_202cb8;
    }
    ctx->pc = 0x202CB0u;
    {
        const bool branch_taken_0x202cb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202cb0) {
            ctx->pc = 0x202DF8u;
            goto label_202df8;
        }
    }
    ctx->pc = 0x202CB8u;
label_202cb8:
    // 0x202cb8: 0x0  nop
    ctx->pc = 0x202cb8u;
    // NOP
label_202cbc:
    // 0x202cbc: 0x0  nop
    ctx->pc = 0x202cbcu;
    // NOP
label_202cc0:
    // 0x202cc0: 0x46128343  div.s       $f13, $f16, $f18
    ctx->pc = 0x202cc0u;
    if (ctx->f[18] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[13] = ctx->f[16] / ctx->f[18];
label_202cc4:
    // 0x202cc4: 0xc60b0000  lwc1        $f11, 0x0($s0)
    ctx->pc = 0x202cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_202cc8:
    // 0x202cc8: 0x460d2b01  sub.s       $f12, $f5, $f13
    ctx->pc = 0x202cc8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[13]);
label_202ccc:
    // 0x202ccc: 0x460b6ac2  mul.s       $f11, $f13, $f11
    ctx->pc = 0x202cccu;
    ctx->f[11] = FPU_MUL_S(ctx->f[13], ctx->f[11]);
label_202cd0:
    // 0x202cd0: 0x460b7818  adda.s      $f15, $f11
    ctx->pc = 0x202cd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[11]);
label_202cd4:
    // 0x202cd4: 0x460762dc  madd.s      $f11, $f12, $f7
    ctx->pc = 0x202cd4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[7]));
label_202cd8:
    // 0x202cd8: 0xc60a0004  lwc1        $f10, 0x4($s0)
    ctx->pc = 0x202cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_202cdc:
    // 0x202cdc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x202cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202ce0:
    // 0x202ce0: 0xc469000c  lwc1        $f9, 0xC($v1)
    ctx->pc = 0x202ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_202ce4:
    // 0x202ce4: 0x460a69c2  mul.s       $f7, $f13, $f10
    ctx->pc = 0x202ce4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
label_202ce8:
    // 0x202ce8: 0x460b2281  sub.s       $f10, $f4, $f11
    ctx->pc = 0x202ce8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[11]);
label_202cec:
    // 0x202cec: 0x46077818  adda.s      $f15, $f7
    ctx->pc = 0x202cecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[7]);
label_202cf0:
    // 0x202cf0: 0x4606611c  madd.s      $f4, $f12, $f6
    ctx->pc = 0x202cf0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[6]));
label_202cf4:
    // 0x202cf4: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x202cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_202cf8:
    // 0x202cf8: 0x46007818  adda.s      $f15, $f0
    ctx->pc = 0x202cf8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_202cfc:
    // 0x202cfc: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x202cfcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_202d00:
    // 0x202d00: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x202d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202d04:
    // 0x202d04: 0x46041901  sub.s       $f4, $f3, $f4
    ctx->pc = 0x202d04u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_202d08:
    // 0x202d08: 0x460860dc  madd.s      $f3, $f12, $f8
    ctx->pc = 0x202d08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[8]));
label_202d0c:
    // 0x202d0c: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x202d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_202d10:
    // 0x202d10: 0x46007818  adda.s      $f15, $f0
    ctx->pc = 0x202d10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_202d14:
    // 0x202d14: 0x4609601c  madd.s      $f0, $f12, $f9
    ctx->pc = 0x202d14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[9]));
label_202d18:
    // 0x202d18: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x202d18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_202d1c:
    // 0x202d1c: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x202d1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_202d20:
    // 0x202d20: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x202d20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_202d24:
    // 0x202d24: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x202d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_202d28:
    // 0x202d28: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x202d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_202d2c:
    // 0x202d2c: 0x46007818  adda.s      $f15, $f0
    ctx->pc = 0x202d2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_202d30:
    // 0x202d30: 0x460a501c  madd.s      $f0, $f10, $f10
    ctx->pc = 0x202d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
label_202d34:
    // 0x202d34: 0x46007818  adda.s      $f15, $f0
    ctx->pc = 0x202d34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_202d38:
    // 0x202d38: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x202d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_202d3c:
    // 0x202d3c: 0x460f0032  c.eq.s      $f0, $f15
    ctx->pc = 0x202d3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202d40:
    // 0x202d40: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_202d44:
    if (ctx->pc == 0x202D44u) {
        ctx->pc = 0x202D44u;
            // 0x202d44: 0xe7ab0090  swc1        $f11, 0x90($sp) (Delay Slot)
        { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->pc = 0x202D48u;
        goto label_202d48;
    }
    ctx->pc = 0x202D40u;
    {
        const bool branch_taken_0x202d40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x202D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202D40u;
            // 0x202d44: 0xe7ab0090  swc1        $f11, 0x90($sp) (Delay Slot)
        { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d40) {
            ctx->pc = 0x202D60u;
            goto label_202d60;
        }
    }
    ctx->pc = 0x202D48u;
label_202d48:
    // 0x202d48: 0x0  nop
    ctx->pc = 0x202d48u;
    // NOP
label_202d4c:
    // 0x202d4c: 0x0  nop
    ctx->pc = 0x202d4cu;
    // NOP
label_202d50:
    // 0x202d50: 0x46002bd6  rsqrt.s     $f15, $f5, $f0
    ctx->pc = 0x202d50u;
    ctx->f[15] = 1.0f / sqrtf(ctx->f[5]);
label_202d54:
    // 0x202d54: 0x0  nop
    ctx->pc = 0x202d54u;
    // NOP
label_202d58:
    // 0x202d58: 0x0  nop
    ctx->pc = 0x202d58u;
    // NOP
label_202d5c:
    // 0x202d5c: 0x0  nop
    ctx->pc = 0x202d5cu;
    // NOP
label_202d60:
    // 0x202d60: 0x460f5002  mul.s       $f0, $f10, $f15
    ctx->pc = 0x202d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[15]);
label_202d64:
    // 0x202d64: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x202d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_202d68:
    // 0x202d68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x202d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202d6c:
    // 0x202d6c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x202d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_202d70:
    // 0x202d70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x202d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202d74:
    // 0x202d74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x202d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_202d78:
    // 0x202d78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x202d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_202d7c:
    // 0x202d7c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x202d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_202d80:
    // 0x202d80: 0x460f2002  mul.s       $f0, $f4, $f15
    ctx->pc = 0x202d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[15]);
label_202d84:
    // 0x202d84: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x202d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_202d88:
    // 0x202d88: 0x460f1042  mul.s       $f1, $f2, $f15
    ctx->pc = 0x202d88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
label_202d8c:
    // 0x202d8c: 0x460f1802  mul.s       $f0, $f3, $f15
    ctx->pc = 0x202d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
label_202d90:
    // 0x202d90: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x202d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_202d94:
    // 0x202d94: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x202d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_202d98:
    // 0x202d98: 0xe6310010  swc1        $f17, 0x10($s1)
    ctx->pc = 0x202d98u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_202d9c:
    // 0x202d9c: 0xae260014  sw          $a2, 0x14($s1)
    ctx->pc = 0x202d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 6));
label_202da0:
    // 0x202da0: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x202da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_202da4:
    // 0x202da4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x202da4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_202da8:
    // 0x202da8: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x202da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_202dac:
    // 0x202dac: 0xacc70020  sw          $a3, 0x20($a2)
    ctx->pc = 0x202dacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 7));
label_202db0:
    // 0x202db0: 0xa2850000  sb          $a1, 0x0($s4)
    ctx->pc = 0x202db0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 5));
label_202db4:
    // 0x202db4: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x202db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_202db8:
    // 0x202db8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x202db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_202dbc:
    // 0x202dbc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x202dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_202dc0:
    // 0x202dc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_202dc4:
    if (ctx->pc == 0x202DC4u) {
        ctx->pc = 0x202DC4u;
            // 0x202dc4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x202DC8u;
        goto label_202dc8;
    }
    ctx->pc = 0x202DC0u;
    {
        const bool branch_taken_0x202dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202DC0u;
            // 0x202dc4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dc0) {
            ctx->pc = 0x202DF0u;
            goto label_202df0;
        }
    }
    ctx->pc = 0x202DC8u;
label_202dc8:
    // 0x202dc8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x202dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_202dcc:
    // 0x202dcc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x202dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_202dd0:
    // 0x202dd0: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x202dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_202dd4:
    // 0x202dd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x202dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_202dd8:
    // 0x202dd8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x202dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_202ddc:
    // 0x202ddc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x202ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_202de0:
    // 0x202de0: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x202de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_202de4:
    // 0x202de4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x202de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_202de8:
    // 0x202de8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x202de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_202dec:
    // 0x202dec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x202decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_202df0:
    // 0x202df0: 0x10000108  b           . + 4 + (0x108 << 2)
label_202df4:
    if (ctx->pc == 0x202DF4u) {
        ctx->pc = 0x202DF4u;
            // 0x202df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x202DF8u;
        goto label_202df8;
    }
    ctx->pc = 0x202DF0u;
    {
        const bool branch_taken_0x202df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202DF0u;
            // 0x202df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202df0) {
            ctx->pc = 0x203214u;
            goto label_203214;
        }
    }
    ctx->pc = 0x202DF8u;
label_202df8:
    // 0x202df8: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x202df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_202dfc:
    // 0x202dfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_202e00:
    // 0x202e00: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x202e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_202e04:
    // 0x202e04: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x202e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_202e08:
    // 0x202e08: 0x460c181a  mula.s      $f3, $f12
    ctx->pc = 0x202e08u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
label_202e0c:
    // 0x202e0c: 0x460d201e  madda.s     $f4, $f13
    ctx->pc = 0x202e0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[13]));
label_202e10:
    // 0x202e10: 0x460b119c  madd.s      $f6, $f2, $f11
    ctx->pc = 0x202e10u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[11]));
label_202e14:
    // 0x202e14: 0x460e3181  sub.s       $f6, $f6, $f14
    ctx->pc = 0x202e14u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[14]);
label_202e18:
    // 0x202e18: 0x46123383  div.s       $f14, $f6, $f18
    ctx->pc = 0x202e18u;
    if (ctx->f[18] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[14] = ctx->f[6] / ctx->f[18];
label_202e1c:
    // 0x202e1c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x202e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_202e20:
    // 0x202e20: 0x0  nop
    ctx->pc = 0x202e20u;
    // NOP
label_202e24:
    // 0x202e24: 0x460e2b41  sub.s       $f13, $f5, $f14
    ctx->pc = 0x202e24u;
    ctx->f[13] = FPU_SUB_S(ctx->f[5], ctx->f[14]);
label_202e28:
    // 0x202e28: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x202e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_202e2c:
    // 0x202e2c: 0xc6680020  lwc1        $f8, 0x20($s3)
    ctx->pc = 0x202e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_202e30:
    // 0x202e30: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x202e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_202e34:
    // 0x202e34: 0x4607701a  mula.s      $f14, $f7
    ctx->pc = 0x202e34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
label_202e38:
    // 0x202e38: 0x460869dc  madd.s      $f7, $f13, $f8
    ctx->pc = 0x202e38u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_202e3c:
    // 0x202e3c: 0xc6660024  lwc1        $f6, 0x24($s3)
    ctx->pc = 0x202e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_202e40:
    // 0x202e40: 0x4605701a  mula.s      $f14, $f5
    ctx->pc = 0x202e40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[5]);
label_202e44:
    // 0x202e44: 0xc60b0008  lwc1        $f11, 0x8($s0)
    ctx->pc = 0x202e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_202e48:
    // 0x202e48: 0x4606695c  madd.s      $f5, $f13, $f6
    ctx->pc = 0x202e48u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[6]));
label_202e4c:
    // 0x202e4c: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x202e4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_202e50:
    // 0x202e50: 0x46072181  sub.s       $f6, $f4, $f7
    ctx->pc = 0x202e50u;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
label_202e54:
    // 0x202e54: 0xe7a70080  swc1        $f7, 0x80($sp)
    ctx->pc = 0x202e54u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_202e58:
    // 0x202e58: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x202e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_202e5c:
    // 0x202e5c: 0x460b701a  mula.s      $f14, $f11
    ctx->pc = 0x202e5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[11]);
label_202e60:
    // 0x202e60: 0xc607000c  lwc1        $f7, 0xC($s0)
    ctx->pc = 0x202e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_202e64:
    // 0x202e64: 0x460c6adc  madd.s      $f11, $f13, $f12
    ctx->pc = 0x202e64u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_202e68:
    // 0x202e68: 0x46051941  sub.s       $f5, $f3, $f5
    ctx->pc = 0x202e68u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_202e6c:
    // 0x202e6c: 0xc668002c  lwc1        $f8, 0x2C($s3)
    ctx->pc = 0x202e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_202e70:
    // 0x202e70: 0x4607701a  mula.s      $f14, $f7
    ctx->pc = 0x202e70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
label_202e74:
    // 0x202e74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x202e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_202e78:
    // 0x202e78: 0x460869dc  madd.s      $f7, $f13, $f8
    ctx->pc = 0x202e78u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_202e7c:
    // 0x202e7c: 0x4605281a  mula.s      $f5, $f5
    ctx->pc = 0x202e7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_202e80:
    // 0x202e80: 0x460b1141  sub.s       $f5, $f2, $f11
    ctx->pc = 0x202e80u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
label_202e84:
    // 0x202e84: 0x4606301e  madda.s     $f6, $f6
    ctx->pc = 0x202e84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
label_202e88:
    // 0x202e88: 0x4605295c  madd.s      $f5, $f5, $f5
    ctx->pc = 0x202e88u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
label_202e8c:
    // 0x202e8c: 0xe7ab0088  swc1        $f11, 0x88($sp)
    ctx->pc = 0x202e8cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_202e90:
    // 0x202e90: 0xe7a7008c  swc1        $f7, 0x8C($sp)
    ctx->pc = 0x202e90u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_202e94:
    // 0x202e94: 0x46050144  c1          0x50144
    ctx->pc = 0x202e94u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
label_202e98:
    // 0x202e98: 0x0  nop
    ctx->pc = 0x202e98u;
    // NOP
label_202e9c:
    // 0x202e9c: 0x0  nop
    ctx->pc = 0x202e9cu;
    // NOP
label_202ea0:
    // 0x202ea0: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x202ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202ea4:
    // 0x202ea4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_202ea8:
    if (ctx->pc == 0x202EA8u) {
        ctx->pc = 0x202EACu;
        goto label_202eac;
    }
    ctx->pc = 0x202EA4u;
    {
        const bool branch_taken_0x202ea4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202ea4) {
            ctx->pc = 0x202EB8u;
            goto label_202eb8;
        }
    }
    ctx->pc = 0x202EACu;
label_202eac:
    // 0x202eac: 0x46018834  c.lt.s      $f17, $f1
    ctx->pc = 0x202eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202eb0:
    // 0x202eb0: 0x450100c4  bc1t        . + 4 + (0xC4 << 2)
label_202eb4:
    if (ctx->pc == 0x202EB4u) {
        ctx->pc = 0x202EB8u;
        goto label_202eb8;
    }
    ctx->pc = 0x202EB0u;
    {
        const bool branch_taken_0x202eb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202eb0) {
            ctx->pc = 0x2031C4u;
            goto label_2031c4;
        }
    }
    ctx->pc = 0x202EB8u;
label_202eb8:
    // 0x202eb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x202eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_202ebc:
    // 0x202ebc: 0x0  nop
    ctx->pc = 0x202ebcu;
    // NOP
label_202ec0:
    // 0x202ec0: 0x46018036  c.le.s      $f16, $f1
    ctx->pc = 0x202ec0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[16], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202ec4:
    // 0x202ec4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_202ec8:
    if (ctx->pc == 0x202EC8u) {
        ctx->pc = 0x202EC8u;
            // 0x202ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x202ECCu;
        goto label_202ecc;
    }
    ctx->pc = 0x202EC4u;
    {
        const bool branch_taken_0x202ec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202ec4) {
            ctx->pc = 0x202EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202EC4u;
            // 0x202ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202ED0u;
            goto label_202ed0;
        }
    }
    ctx->pc = 0x202ECCu;
label_202ecc:
    // 0x202ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202ed0:
    // 0x202ed0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x202ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_202ed4:
    // 0x202ed4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x202ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_202ed8:
    // 0x202ed8: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x202ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202edc:
    // 0x202edc: 0xc4480028  lwc1        $f8, 0x28($v0)
    ctx->pc = 0x202edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_202ee0:
    // 0x202ee0: 0xc44b0024  lwc1        $f11, 0x24($v0)
    ctx->pc = 0x202ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_202ee4:
    // 0x202ee4: 0x46015181  sub.s       $f6, $f10, $f1
    ctx->pc = 0x202ee4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
label_202ee8:
    // 0x202ee8: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x202ee8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_202eec:
    // 0x202eec: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x202eecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
label_202ef0:
    // 0x202ef0: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x202ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202ef4:
    // 0x202ef4: 0xc6470014  lwc1        $f7, 0x14($s2)
    ctx->pc = 0x202ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_202ef8:
    // 0x202ef8: 0xc44a002c  lwc1        $f10, 0x2C($v0)
    ctx->pc = 0x202ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_202efc:
    // 0x202efc: 0xc645000c  lwc1        $f5, 0xC($s2)
    ctx->pc = 0x202efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_202f00:
    // 0x202f00: 0x46080a01  sub.s       $f8, $f1, $f8
    ctx->pc = 0x202f00u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
label_202f04:
    // 0x202f04: 0x460a2941  sub.s       $f5, $f5, $f10
    ctx->pc = 0x202f04u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[10]);
label_202f08:
    // 0x202f08: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x202f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202f0c:
    // 0x202f0c: 0x460b18c1  sub.s       $f3, $f3, $f11
    ctx->pc = 0x202f0cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[11]);
label_202f10:
    // 0x202f10: 0x460b39c1  sub.s       $f7, $f7, $f11
    ctx->pc = 0x202f10u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[11]);
label_202f14:
    // 0x202f14: 0x460a0a81  sub.s       $f10, $f1, $f10
    ctx->pc = 0x202f14u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
label_202f18:
    // 0x202f18: 0x46033841  sub.s       $f1, $f7, $f3
    ctx->pc = 0x202f18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
label_202f1c:
    // 0x202f1c: 0x46043301  sub.s       $f12, $f6, $f4
    ctx->pc = 0x202f1cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
label_202f20:
    // 0x202f20: 0x4603081a  mula.s      $f1, $f3
    ctx->pc = 0x202f20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_202f24:
    // 0x202f24: 0x460242c1  sub.s       $f11, $f8, $f2
    ctx->pc = 0x202f24u;
    ctx->f[11] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
label_202f28:
    // 0x202f28: 0x4604601e  madda.s     $f12, $f4
    ctx->pc = 0x202f28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[4]));
label_202f2c:
    // 0x202f2c: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x202f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_202f30:
    // 0x202f30: 0x46025b5c  madd.s      $f13, $f11, $f2
    ctx->pc = 0x202f30u;
    ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[2]));
label_202f34:
    // 0x202f34: 0x46116834  c.lt.s      $f13, $f17
    ctx->pc = 0x202f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202f38:
    // 0x202f38: 0x45000072  bc1f        . + 4 + (0x72 << 2)
label_202f3c:
    if (ctx->pc == 0x202F3Cu) {
        ctx->pc = 0x202F3Cu;
            // 0x202f3c: 0x46000382  mul.s       $f14, $f0, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->pc = 0x202F40u;
        goto label_202f40;
    }
    ctx->pc = 0x202F38u;
    {
        const bool branch_taken_0x202f38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x202F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202F38u;
            // 0x202f3c: 0x46000382  mul.s       $f14, $f0, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f38) {
            ctx->pc = 0x203104u;
            goto label_203104;
        }
    }
    ctx->pc = 0x202F40u;
label_202f40:
    // 0x202f40: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x202f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_202f44:
    // 0x202f44: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x202f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_202f48:
    // 0x202f48: 0x46018818  adda.s      $f17, $f1
    ctx->pc = 0x202f48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[17], ctx->f[1]);
label_202f4c:
    // 0x202f4c: 0x460c605c  madd.s      $f1, $f12, $f12
    ctx->pc = 0x202f4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[12]));
label_202f50:
    // 0x202f50: 0x46018818  adda.s      $f17, $f1
    ctx->pc = 0x202f50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[17], ctx->f[1]);
label_202f54:
    // 0x202f54: 0x460b5adc  madd.s      $f11, $f11, $f11
    ctx->pc = 0x202f54u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[11]));
label_202f58:
    // 0x202f58: 0x460e5b02  mul.s       $f12, $f11, $f14
    ctx->pc = 0x202f58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[11], ctx->f[14]);
label_202f5c:
    // 0x202f5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_202f60:
    // 0x202f60: 0x460d6bc2  mul.s       $f15, $f13, $f13
    ctx->pc = 0x202f60u;
    ctx->f[15] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_202f64:
    // 0x202f64: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x202f64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_202f68:
    // 0x202f68: 0x46017836  c.le.s      $f15, $f1
    ctx->pc = 0x202f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202f6c:
    // 0x202f6c: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_202f70:
    if (ctx->pc == 0x202F70u) {
        ctx->pc = 0x202F70u;
            // 0x202f70: 0x46008b06  mov.s       $f12, $f17 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[17]);
        ctx->pc = 0x202F74u;
        goto label_202f74;
    }
    ctx->pc = 0x202F6Cu;
    {
        const bool branch_taken_0x202f6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202f6c) {
            ctx->pc = 0x202F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202F6Cu;
            // 0x202f70: 0x46008b06  mov.s       $f12, $f17 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[17]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x202FE0u;
            goto label_202fe0;
        }
    }
    ctx->pc = 0x202F74u;
label_202f74:
    // 0x202f74: 0x460e5834  c.lt.s      $f11, $f14
    ctx->pc = 0x202f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202f78:
    // 0x202f78: 0x45030063  bc1tl       . + 4 + (0x63 << 2)
label_202f7c:
    if (ctx->pc == 0x202F7Cu) {
        ctx->pc = 0x202F7Cu;
            // 0x202f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x202F80u;
        goto label_202f80;
    }
    ctx->pc = 0x202F78u;
    {
        const bool branch_taken_0x202f78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202f78) {
            ctx->pc = 0x202F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202F78u;
            // 0x202f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203108u;
            goto label_203108;
        }
    }
    ctx->pc = 0x202F80u;
label_202f80:
    // 0x202f80: 0x46006b07  neg.s       $f12, $f13
    ctx->pc = 0x202f80u;
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
label_202f84:
    // 0x202f84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_202f88:
    // 0x202f88: 0x460b63c3  div.s       $f15, $f12, $f11
    ctx->pc = 0x202f88u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[15] = ctx->f[12] / ctx->f[11];
label_202f8c:
    // 0x202f8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_202f90:
    // 0x202f90: 0x0  nop
    ctx->pc = 0x202f90u;
    // NOP
label_202f94:
    // 0x202f94: 0x460f0c01  sub.s       $f16, $f1, $f15
    ctx->pc = 0x202f94u;
    ctx->f[16] = FPU_SUB_S(ctx->f[1], ctx->f[15]);
label_202f98:
    // 0x202f98: 0x46067842  mul.s       $f1, $f15, $f6
    ctx->pc = 0x202f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[6]);
label_202f9c:
    // 0x202f9c: 0x46018818  adda.s      $f17, $f1
    ctx->pc = 0x202f9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[17], ctx->f[1]);
label_202fa0:
    // 0x202fa0: 0x4604805c  madd.s      $f1, $f16, $f4
    ctx->pc = 0x202fa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[4]));
label_202fa4:
    // 0x202fa4: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x202fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_202fa8:
    // 0x202fa8: 0x46077842  mul.s       $f1, $f15, $f7
    ctx->pc = 0x202fa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
label_202fac:
    // 0x202fac: 0x46018818  adda.s      $f17, $f1
    ctx->pc = 0x202facu;
    ctx->f[31] = FPU_ADD_S(ctx->f[17], ctx->f[1]);
label_202fb0:
    // 0x202fb0: 0x4603805c  madd.s      $f1, $f16, $f3
    ctx->pc = 0x202fb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[3]));
label_202fb4:
    // 0x202fb4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x202fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_202fb8:
    // 0x202fb8: 0x46087842  mul.s       $f1, $f15, $f8
    ctx->pc = 0x202fb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[8]);
label_202fbc:
    // 0x202fbc: 0x46018818  adda.s      $f17, $f1
    ctx->pc = 0x202fbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[17], ctx->f[1]);
label_202fc0:
    // 0x202fc0: 0x460a7842  mul.s       $f1, $f15, $f10
    ctx->pc = 0x202fc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[10]);
label_202fc4:
    // 0x202fc4: 0x460283dc  madd.s      $f15, $f16, $f2
    ctx->pc = 0x202fc4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[2]));
label_202fc8:
    // 0x202fc8: 0x46018818  adda.s      $f17, $f1
    ctx->pc = 0x202fc8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[17], ctx->f[1]);
label_202fcc:
    // 0x202fcc: 0x4605805c  madd.s      $f1, $f16, $f5
    ctx->pc = 0x202fccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[5]));
label_202fd0:
    // 0x202fd0: 0x46008b46  mov.s       $f13, $f17
    ctx->pc = 0x202fd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[17]);
label_202fd4:
    // 0x202fd4: 0xe7af0078  swc1        $f15, 0x78($sp)
    ctx->pc = 0x202fd4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_202fd8:
    // 0x202fd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_202fdc:
    if (ctx->pc == 0x202FDCu) {
        ctx->pc = 0x202FDCu;
            // 0x202fdc: 0xe7a1007c  swc1        $f1, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->pc = 0x202FE0u;
        goto label_202fe0;
    }
    ctx->pc = 0x202FD8u;
    {
        const bool branch_taken_0x202fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202FD8u;
            // 0x202fdc: 0xe7a1007c  swc1        $f1, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fd8) {
            ctx->pc = 0x202FF0u;
            goto label_202ff0;
        }
    }
    ctx->pc = 0x202FE0u;
label_202fe0:
    // 0x202fe0: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x202fe0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_202fe4:
    // 0x202fe4: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x202fe4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_202fe8:
    // 0x202fe8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x202fe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_202fec:
    // 0x202fec: 0xe7a5007c  swc1        $f5, 0x7C($sp)
    ctx->pc = 0x202fecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_202ff0:
    // 0x202ff0: 0xc7b10074  lwc1        $f17, 0x74($sp)
    ctx->pc = 0x202ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_202ff4:
    // 0x202ff4: 0xc7af0070  lwc1        $f15, 0x70($sp)
    ctx->pc = 0x202ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_202ff8:
    // 0x202ff8: 0xc7b00078  lwc1        $f16, 0x78($sp)
    ctx->pc = 0x202ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_202ffc:
    // 0x202ffc: 0x4611881a  mula.s      $f17, $f17
    ctx->pc = 0x202ffcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
label_203000:
    // 0x203000: 0x460f781e  madda.s     $f15, $f15
    ctx->pc = 0x203000u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[15]));
label_203004:
    // 0x203004: 0x461083dc  madd.s      $f15, $f16, $f16
    ctx->pc = 0x203004u;
    ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[16]));
label_203008:
    // 0x203008: 0x460e7b81  sub.s       $f14, $f15, $f14
    ctx->pc = 0x203008u;
    ctx->f[14] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
label_20300c:
    // 0x20300c: 0x460d681a  mula.s      $f13, $f13
    ctx->pc = 0x20300cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_203010:
    // 0x203010: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x203010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_203014:
    // 0x203014: 0x460e5b9d  msub.s      $f14, $f11, $f14
    ctx->pc = 0x203014u;
    ctx->f[14] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[14]));
label_203018:
    // 0x203018: 0x46017036  c.le.s      $f14, $f1
    ctx->pc = 0x203018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20301c:
    // 0x20301c: 0x45010039  bc1t        . + 4 + (0x39 << 2)
label_203020:
    if (ctx->pc == 0x203020u) {
        ctx->pc = 0x203024u;
        goto label_203024;
    }
    ctx->pc = 0x20301Cu;
    {
        const bool branch_taken_0x20301c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20301c) {
            ctx->pc = 0x203104u;
            goto label_203104;
        }
    }
    ctx->pc = 0x203024u;
label_203024:
    // 0x203024: 0x0  nop
    ctx->pc = 0x203024u;
    // NOP
label_203028:
    // 0x203028: 0x0  nop
    ctx->pc = 0x203028u;
    // NOP
label_20302c:
    // 0x20302c: 0x460e0384  c1          0xE0384
    ctx->pc = 0x20302cu;
    ctx->f[14] = FPU_SQRT_S(ctx->f[0]);
label_203030:
    // 0x203030: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x203030u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_203034:
    // 0x203034: 0x460e6b41  sub.s       $f13, $f13, $f14
    ctx->pc = 0x203034u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[14]);
label_203038:
    // 0x203038: 0x46095a42  mul.s       $f9, $f11, $f9
    ctx->pc = 0x203038u;
    ctx->f[9] = FPU_MUL_S(ctx->f[11], ctx->f[9]);
label_20303c:
    // 0x20303c: 0x460c6b00  add.s       $f12, $f13, $f12
    ctx->pc = 0x20303cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
label_203040:
    // 0x203040: 0x46096034  c.lt.s      $f12, $f9
    ctx->pc = 0x203040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_203044:
    // 0x203044: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_203048:
    if (ctx->pc == 0x203048u) {
        ctx->pc = 0x20304Cu;
        goto label_20304c;
    }
    ctx->pc = 0x203044u;
    {
        const bool branch_taken_0x203044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x203044) {
            ctx->pc = 0x203104u;
            goto label_203104;
        }
    }
    ctx->pc = 0x20304Cu;
label_20304c:
    // 0x20304c: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x20304cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_203050:
    // 0x203050: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_203054:
    if (ctx->pc == 0x203054u) {
        ctx->pc = 0x203058u;
        goto label_203058;
    }
    ctx->pc = 0x203050u;
    {
        const bool branch_taken_0x203050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x203050) {
            ctx->pc = 0x203104u;
            goto label_203104;
        }
    }
    ctx->pc = 0x203058u;
label_203058:
    // 0x203058: 0x0  nop
    ctx->pc = 0x203058u;
    // NOP
label_20305c:
    // 0x20305c: 0x0  nop
    ctx->pc = 0x20305cu;
    // NOP
label_203060:
    // 0x203060: 0x460b6303  div.s       $f12, $f12, $f11
    ctx->pc = 0x203060u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[11];
label_203064:
    // 0x203064: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x203064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_203068:
    // 0x203068: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x203068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20306c:
    // 0x20306c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203070:
    // 0x203070: 0x46066182  mul.s       $f6, $f12, $f6
    ctx->pc = 0x203070u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
label_203074:
    // 0x203074: 0x44835800  mtc1        $v1, $f11
    ctx->pc = 0x203074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_203078:
    // 0x203078: 0x46060818  adda.s      $f1, $f6
    ctx->pc = 0x203078u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_20307c:
    // 0x20307c: 0x46005983  div.s       $f6, $f11, $f0
    ctx->pc = 0x20307cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[11] * 0.0f); } else ctx->f[6] = ctx->f[11] / ctx->f[0];
label_203080:
    // 0x203080: 0x46076242  mul.s       $f9, $f12, $f7
    ctx->pc = 0x203080u;
    ctx->f[9] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
label_203084:
    // 0x203084: 0x460a61c2  mul.s       $f7, $f12, $f10
    ctx->pc = 0x203084u;
    ctx->f[7] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
label_203088:
    // 0x203088: 0x460c5a81  sub.s       $f10, $f11, $f12
    ctx->pc = 0x203088u;
    ctx->f[10] = FPU_SUB_S(ctx->f[11], ctx->f[12]);
label_20308c:
    // 0x20308c: 0x4604501c  madd.s      $f0, $f10, $f4
    ctx->pc = 0x20308cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
label_203090:
    // 0x203090: 0xe62c0010  swc1        $f12, 0x10($s1)
    ctx->pc = 0x203090u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_203094:
    // 0x203094: 0x46086202  mul.s       $f8, $f12, $f8
    ctx->pc = 0x203094u;
    ctx->f[8] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
label_203098:
    // 0x203098: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x203098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_20309c:
    // 0x20309c: 0x46090818  adda.s      $f1, $f9
    ctx->pc = 0x20309cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_2030a0:
    // 0x2030a0: 0x4603501c  madd.s      $f0, $f10, $f3
    ctx->pc = 0x2030a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[3]));
label_2030a4:
    // 0x2030a4: 0x46080818  adda.s      $f1, $f8
    ctx->pc = 0x2030a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_2030a8:
    // 0x2030a8: 0x4602509c  madd.s      $f2, $f10, $f2
    ctx->pc = 0x2030a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
label_2030ac:
    // 0x2030ac: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2030acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2030b0:
    // 0x2030b0: 0x46070818  adda.s      $f1, $f7
    ctx->pc = 0x2030b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_2030b4:
    // 0x2030b4: 0x4605501c  madd.s      $f0, $f10, $f5
    ctx->pc = 0x2030b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[5]));
label_2030b8:
    // 0x2030b8: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2030b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2030bc:
    // 0x2030bc: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2030bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2030c0:
    // 0x2030c0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2030c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2030c4:
    // 0x2030c4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2030c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2030c8:
    // 0x2030c8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2030c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2030cc:
    // 0x2030cc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2030ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2030d0:
    // 0x2030d0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2030d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2030d4:
    // 0x2030d4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2030d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2030d8:
    // 0x2030d8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2030d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2030dc:
    // 0x2030dc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2030dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2030e0:
    // 0x2030e0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2030e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2030e4:
    // 0x2030e4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2030e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2030e8:
    // 0x2030e8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2030e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2030ec:
    // 0x2030ec: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2030ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2030f0:
    // 0x2030f0: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2030f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2030f4:
    // 0x2030f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2030f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2030f8:
    // 0x2030f8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2030f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2030fc:
    // 0x2030fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_203100:
    if (ctx->pc == 0x203100u) {
        ctx->pc = 0x203100u;
            // 0x203100: 0xac640020  sw          $a0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
        ctx->pc = 0x203104u;
        goto label_203104;
    }
    ctx->pc = 0x2030FCu;
    {
        const bool branch_taken_0x2030fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2030FCu;
            // 0x203100: 0xac640020  sw          $a0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030fc) {
            ctx->pc = 0x203108u;
            goto label_203108;
        }
    }
    ctx->pc = 0x203104u;
label_203104:
    // 0x203104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x203104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203108:
    // 0x203108: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x203108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_20310c:
    // 0x20310c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x20310cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_203110:
    // 0x203110: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_203114:
    if (ctx->pc == 0x203114u) {
        ctx->pc = 0x203114u;
            // 0x203114: 0xa2800000  sb          $zero, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x203118u;
        goto label_203118;
    }
    ctx->pc = 0x203110u;
    {
        const bool branch_taken_0x203110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203110) {
            ctx->pc = 0x203114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203110u;
            // 0x203114: 0xa2800000  sb          $zero, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203174u;
            goto label_203174;
        }
    }
    ctx->pc = 0x203118u;
label_203118:
    // 0x203118: 0xae250014  sw          $a1, 0x14($s1)
    ctx->pc = 0x203118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 5));
label_20311c:
    // 0x20311c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203120:
    // 0x203120: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x203120u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_203124:
    // 0x203124: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x203124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_203128:
    // 0x203128: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x203128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20312c:
    // 0x20312c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x20312cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_203130:
    // 0x203130: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x203130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_203134:
    // 0x203134: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x203134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_203138:
    // 0x203138: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x203138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20313c:
    // 0x20313c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_203140:
    if (ctx->pc == 0x203140u) {
        ctx->pc = 0x203140u;
            // 0x203140: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x203144u;
        goto label_203144;
    }
    ctx->pc = 0x20313Cu;
    {
        const bool branch_taken_0x20313c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20313Cu;
            // 0x203140: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20313c) {
            ctx->pc = 0x20316Cu;
            goto label_20316c;
        }
    }
    ctx->pc = 0x203144u;
label_203144:
    // 0x203144: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x203144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_203148:
    // 0x203148: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x203148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20314c:
    // 0x20314c: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x20314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_203150:
    // 0x203150: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x203150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_203154:
    // 0x203154: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203154u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_203158:
    // 0x203158: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x203158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_20315c:
    // 0x20315c: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20315cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_203160:
    // 0x203160: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x203160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_203164:
    // 0x203164: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x203164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_203168:
    // 0x203168: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x203168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_20316c:
    // 0x20316c: 0x10000029  b           . + 4 + (0x29 << 2)
label_203170:
    if (ctx->pc == 0x203170u) {
        ctx->pc = 0x203170u;
            // 0x203170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203174u;
        goto label_203174;
    }
    ctx->pc = 0x20316Cu;
    {
        const bool branch_taken_0x20316c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20316Cu;
            // 0x203170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20316c) {
            ctx->pc = 0x203214u;
            goto label_203214;
        }
    }
    ctx->pc = 0x203174u;
label_203174:
    // 0x203174: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x203174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_203178:
    // 0x203178: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x203178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20317c:
    // 0x20317c: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x20317cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_203180:
    // 0x203180: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x203180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_203184:
    // 0x203184: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x203184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_203188:
    // 0x203188: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x203188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20318c:
    // 0x20318c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_203190:
    if (ctx->pc == 0x203190u) {
        ctx->pc = 0x203190u;
            // 0x203190: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x203194u;
        goto label_203194;
    }
    ctx->pc = 0x20318Cu;
    {
        const bool branch_taken_0x20318c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20318Cu;
            // 0x203190: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20318c) {
            ctx->pc = 0x2031BCu;
            goto label_2031bc;
        }
    }
    ctx->pc = 0x203194u;
label_203194:
    // 0x203194: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x203194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_203198:
    // 0x203198: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x203198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_20319c:
    // 0x20319c: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x20319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_2031a0:
    // 0x2031a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2031a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2031a4:
    // 0x2031a4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2031a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2031a8:
    // 0x2031a8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2031a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2031ac:
    // 0x2031ac: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2031acu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_2031b0:
    // 0x2031b0: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2031b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2031b4:
    // 0x2031b4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2031b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_2031b8:
    // 0x2031b8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2031b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2031bc:
    // 0x2031bc: 0x10000015  b           . + 4 + (0x15 << 2)
label_2031c0:
    if (ctx->pc == 0x2031C0u) {
        ctx->pc = 0x2031C0u;
            // 0x2031c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2031C4u;
        goto label_2031c4;
    }
    ctx->pc = 0x2031BCu;
    {
        const bool branch_taken_0x2031bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2031BCu;
            // 0x2031c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031bc) {
            ctx->pc = 0x203214u;
            goto label_203214;
        }
    }
    ctx->pc = 0x2031C4u;
label_2031c4:
    // 0x2031c4: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x2031c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
label_2031c8:
    // 0x2031c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2031c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2031cc:
    // 0x2031cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2031ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2031d0:
    // 0x2031d0: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x2031d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_2031d4:
    // 0x2031d4: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x2031d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_2031d8:
    // 0x2031d8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2031d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2031dc:
    // 0x2031dc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2031dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2031e0:
    // 0x2031e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2031e4:
    if (ctx->pc == 0x2031E4u) {
        ctx->pc = 0x2031E4u;
            // 0x2031e4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x2031E8u;
        goto label_2031e8;
    }
    ctx->pc = 0x2031E0u;
    {
        const bool branch_taken_0x2031e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2031E0u;
            // 0x2031e4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031e0) {
            ctx->pc = 0x203210u;
            goto label_203210;
        }
    }
    ctx->pc = 0x2031E8u;
label_2031e8:
    // 0x2031e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2031e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2031ec:
    // 0x2031ec: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2031ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2031f0:
    // 0x2031f0: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x2031f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_2031f4:
    // 0x2031f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2031f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2031f8:
    // 0x2031f8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2031f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2031fc:
    // 0x2031fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2031fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_203200:
    // 0x203200: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203200u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_203204:
    // 0x203204: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x203204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_203208:
    // 0x203208: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x203208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_20320c:
    // 0x20320c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x20320cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_203210:
    // 0x203210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x203210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203214:
    // 0x203214: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x203214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_203218:
    // 0x203218: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x203218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20321c:
    // 0x20321c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20321cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_203220:
    // 0x203220: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x203220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203224:
    // 0x203224: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x203224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203228:
    // 0x203228: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x203228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20322c:
    // 0x20322c: 0x3e00008  jr          $ra
label_203230:
    if (ctx->pc == 0x203230u) {
        ctx->pc = 0x203230u;
            // 0x203230: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x203234u;
        goto label_203234;
    }
    ctx->pc = 0x20322Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20322Cu;
            // 0x203230: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203234u;
label_203234:
    // 0x203234: 0x0  nop
    ctx->pc = 0x203234u;
    // NOP
label_203238:
    // 0x203238: 0x0  nop
    ctx->pc = 0x203238u;
    // NOP
label_20323c:
    // 0x20323c: 0x0  nop
    ctx->pc = 0x20323cu;
    // NOP
label_203240:
    // 0x203240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_203244:
    // 0x203244: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x203244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203248:
    // 0x203248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20324c:
    // 0x20324c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20324cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203250:
    // 0x203250: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203254:
    // 0x203254: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x203254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203258:
    // 0x203258: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x203258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20325c:
    // 0x20325c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x20325cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_203260:
    // 0x203260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203264:
    // 0x203264: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x203264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_203268:
    // 0x203268: 0x320f809  jalr        $t9
label_20326c:
    if (ctx->pc == 0x20326Cu) {
        ctx->pc = 0x20326Cu;
            // 0x20326c: 0x24a5b5f8  addiu       $a1, $a1, -0x4A08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948344));
        ctx->pc = 0x203270u;
        goto label_203270;
    }
    ctx->pc = 0x203268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203270u);
        ctx->pc = 0x20326Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203268u;
            // 0x20326c: 0x24a5b5f8  addiu       $a1, $a1, -0x4A08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948344));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203270u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203270u; }
            if (ctx->pc != 0x203270u) { return; }
        }
        }
    }
    ctx->pc = 0x203270u;
label_203270:
    // 0x203270: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x203270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203274:
    // 0x203274: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x203274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_203278:
    // 0x203278: 0x320f809  jalr        $t9
label_20327c:
    if (ctx->pc == 0x20327Cu) {
        ctx->pc = 0x20327Cu;
            // 0x20327c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203280u;
        goto label_203280;
    }
    ctx->pc = 0x203278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203280u);
        ctx->pc = 0x20327Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203278u;
            // 0x20327c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203280u; }
            if (ctx->pc != 0x203280u) { return; }
        }
        }
    }
    ctx->pc = 0x203280u;
label_203280:
    // 0x203280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_203284:
    // 0x203284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203288:
    // 0x203288: 0x3e00008  jr          $ra
label_20328c:
    if (ctx->pc == 0x20328Cu) {
        ctx->pc = 0x20328Cu;
            // 0x20328c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x203290u;
        goto label_203290;
    }
    ctx->pc = 0x203288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203288u;
            // 0x20328c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203290u;
label_203290:
    // 0x203290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_203294:
    // 0x203294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_203298:
    // 0x203298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20329c:
    // 0x20329c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20329cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2032a0:
    // 0x2032a0: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_2032a4:
    if (ctx->pc == 0x2032A4u) {
        ctx->pc = 0x2032A4u;
            // 0x2032a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2032A8u;
        goto label_2032a8;
    }
    ctx->pc = 0x2032A0u;
    {
        const bool branch_taken_0x2032a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2032a0) {
            ctx->pc = 0x2032A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2032A0u;
            // 0x2032a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203330u;
            goto label_203330;
        }
    }
    ctx->pc = 0x2032A8u;
label_2032a8:
    // 0x2032a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2032a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2032ac:
    // 0x2032ac: 0x2442e140  addiu       $v0, $v0, -0x1EC0
    ctx->pc = 0x2032acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959424));
label_2032b0:
    // 0x2032b0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_2032b4:
    if (ctx->pc == 0x2032B4u) {
        ctx->pc = 0x2032B4u;
            // 0x2032b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2032B8u;
        goto label_2032b8;
    }
    ctx->pc = 0x2032B0u;
    {
        const bool branch_taken_0x2032b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032B0u;
            // 0x2032b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032b0) {
            ctx->pc = 0x203304u;
            goto label_203304;
        }
    }
    ctx->pc = 0x2032B8u;
label_2032b8:
    // 0x2032b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2032b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2032bc:
    // 0x2032bc: 0x2442e1e0  addiu       $v0, $v0, -0x1E20
    ctx->pc = 0x2032bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959584));
label_2032c0:
    // 0x2032c0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2032c4:
    if (ctx->pc == 0x2032C4u) {
        ctx->pc = 0x2032C4u;
            // 0x2032c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2032C8u;
        goto label_2032c8;
    }
    ctx->pc = 0x2032C0u;
    {
        const bool branch_taken_0x2032c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032C0u;
            // 0x2032c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032c0) {
            ctx->pc = 0x203304u;
            goto label_203304;
        }
    }
    ctx->pc = 0x2032C8u;
label_2032c8:
    // 0x2032c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2032c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2032cc:
    // 0x2032cc: 0x2442db60  addiu       $v0, $v0, -0x24A0
    ctx->pc = 0x2032ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957920));
label_2032d0:
    // 0x2032d0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2032d4:
    if (ctx->pc == 0x2032D4u) {
        ctx->pc = 0x2032D4u;
            // 0x2032d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2032D8u;
        goto label_2032d8;
    }
    ctx->pc = 0x2032D0u;
    {
        const bool branch_taken_0x2032d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032D0u;
            // 0x2032d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032d0) {
            ctx->pc = 0x203304u;
            goto label_203304;
        }
    }
    ctx->pc = 0x2032D8u;
label_2032d8:
    // 0x2032d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2032d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2032dc:
    // 0x2032dc: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x2032dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_2032e0:
    // 0x2032e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2032e4:
    if (ctx->pc == 0x2032E4u) {
        ctx->pc = 0x2032E4u;
            // 0x2032e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2032E8u;
        goto label_2032e8;
    }
    ctx->pc = 0x2032E0u;
    {
        const bool branch_taken_0x2032e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032E0u;
            // 0x2032e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032e0) {
            ctx->pc = 0x203304u;
            goto label_203304;
        }
    }
    ctx->pc = 0x2032E8u;
label_2032e8:
    // 0x2032e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2032e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2032ec:
    // 0x2032ec: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2032ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2032f0:
    // 0x2032f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2032f4:
    if (ctx->pc == 0x2032F4u) {
        ctx->pc = 0x2032F4u;
            // 0x2032f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2032F8u;
        goto label_2032f8;
    }
    ctx->pc = 0x2032F0u;
    {
        const bool branch_taken_0x2032f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032F0u;
            // 0x2032f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032f0) {
            ctx->pc = 0x203304u;
            goto label_203304;
        }
    }
    ctx->pc = 0x2032F8u;
label_2032f8:
    // 0x2032f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2032f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2032fc:
    // 0x2032fc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2032fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_203300:
    // 0x203300: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x203300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_203304:
    // 0x203304: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x203304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_203308:
    // 0x203308: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x203308u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_20330c:
    // 0x20330c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_203310:
    if (ctx->pc == 0x203310u) {
        ctx->pc = 0x203314u;
        goto label_203314;
    }
    ctx->pc = 0x20330Cu;
    {
        const bool branch_taken_0x20330c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20330c) {
            ctx->pc = 0x20332Cu;
            goto label_20332c;
        }
    }
    ctx->pc = 0x203314u;
label_203314:
    // 0x203314: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x203314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_203318:
    // 0x203318: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x203318u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_20331c:
    // 0x20331c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20331cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_203320:
    // 0x203320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203324:
    // 0x203324: 0xc0a7ab4  jal         func_29EAD0
label_203328:
    if (ctx->pc == 0x203328u) {
        ctx->pc = 0x203328u;
            // 0x203328: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x20332Cu;
        goto label_20332c;
    }
    ctx->pc = 0x203324u;
    SET_GPR_U32(ctx, 31, 0x20332Cu);
    ctx->pc = 0x203328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203324u;
            // 0x203328: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20332Cu; }
        if (ctx->pc != 0x20332Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20332Cu; }
        if (ctx->pc != 0x20332Cu) { return; }
    }
    ctx->pc = 0x20332Cu;
label_20332c:
    // 0x20332c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20332cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203330:
    // 0x203330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_203334:
    // 0x203334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203338:
    // 0x203338: 0x3e00008  jr          $ra
label_20333c:
    if (ctx->pc == 0x20333Cu) {
        ctx->pc = 0x20333Cu;
            // 0x20333c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x203340u;
        goto label_203340;
    }
    ctx->pc = 0x203338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20333Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203338u;
            // 0x20333c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203340u;
label_203340:
    // 0x203340: 0x3e00008  jr          $ra
label_203344:
    if (ctx->pc == 0x203344u) {
        ctx->pc = 0x203344u;
            // 0x203344: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x203348u;
        goto label_203348;
    }
    ctx->pc = 0x203340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203340u;
            // 0x203344: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203348u;
label_203348:
    // 0x203348: 0x0  nop
    ctx->pc = 0x203348u;
    // NOP
label_20334c:
    // 0x20334c: 0x0  nop
    ctx->pc = 0x20334cu;
    // NOP
}
