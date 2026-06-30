#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305860
// Address: 0x305860 - 0x306800
void sub_00305860_0x305860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305860_0x305860");
#endif

    switch (ctx->pc) {
        case 0x305860u: goto label_305860;
        case 0x305864u: goto label_305864;
        case 0x305868u: goto label_305868;
        case 0x30586cu: goto label_30586c;
        case 0x305870u: goto label_305870;
        case 0x305874u: goto label_305874;
        case 0x305878u: goto label_305878;
        case 0x30587cu: goto label_30587c;
        case 0x305880u: goto label_305880;
        case 0x305884u: goto label_305884;
        case 0x305888u: goto label_305888;
        case 0x30588cu: goto label_30588c;
        case 0x305890u: goto label_305890;
        case 0x305894u: goto label_305894;
        case 0x305898u: goto label_305898;
        case 0x30589cu: goto label_30589c;
        case 0x3058a0u: goto label_3058a0;
        case 0x3058a4u: goto label_3058a4;
        case 0x3058a8u: goto label_3058a8;
        case 0x3058acu: goto label_3058ac;
        case 0x3058b0u: goto label_3058b0;
        case 0x3058b4u: goto label_3058b4;
        case 0x3058b8u: goto label_3058b8;
        case 0x3058bcu: goto label_3058bc;
        case 0x3058c0u: goto label_3058c0;
        case 0x3058c4u: goto label_3058c4;
        case 0x3058c8u: goto label_3058c8;
        case 0x3058ccu: goto label_3058cc;
        case 0x3058d0u: goto label_3058d0;
        case 0x3058d4u: goto label_3058d4;
        case 0x3058d8u: goto label_3058d8;
        case 0x3058dcu: goto label_3058dc;
        case 0x3058e0u: goto label_3058e0;
        case 0x3058e4u: goto label_3058e4;
        case 0x3058e8u: goto label_3058e8;
        case 0x3058ecu: goto label_3058ec;
        case 0x3058f0u: goto label_3058f0;
        case 0x3058f4u: goto label_3058f4;
        case 0x3058f8u: goto label_3058f8;
        case 0x3058fcu: goto label_3058fc;
        case 0x305900u: goto label_305900;
        case 0x305904u: goto label_305904;
        case 0x305908u: goto label_305908;
        case 0x30590cu: goto label_30590c;
        case 0x305910u: goto label_305910;
        case 0x305914u: goto label_305914;
        case 0x305918u: goto label_305918;
        case 0x30591cu: goto label_30591c;
        case 0x305920u: goto label_305920;
        case 0x305924u: goto label_305924;
        case 0x305928u: goto label_305928;
        case 0x30592cu: goto label_30592c;
        case 0x305930u: goto label_305930;
        case 0x305934u: goto label_305934;
        case 0x305938u: goto label_305938;
        case 0x30593cu: goto label_30593c;
        case 0x305940u: goto label_305940;
        case 0x305944u: goto label_305944;
        case 0x305948u: goto label_305948;
        case 0x30594cu: goto label_30594c;
        case 0x305950u: goto label_305950;
        case 0x305954u: goto label_305954;
        case 0x305958u: goto label_305958;
        case 0x30595cu: goto label_30595c;
        case 0x305960u: goto label_305960;
        case 0x305964u: goto label_305964;
        case 0x305968u: goto label_305968;
        case 0x30596cu: goto label_30596c;
        case 0x305970u: goto label_305970;
        case 0x305974u: goto label_305974;
        case 0x305978u: goto label_305978;
        case 0x30597cu: goto label_30597c;
        case 0x305980u: goto label_305980;
        case 0x305984u: goto label_305984;
        case 0x305988u: goto label_305988;
        case 0x30598cu: goto label_30598c;
        case 0x305990u: goto label_305990;
        case 0x305994u: goto label_305994;
        case 0x305998u: goto label_305998;
        case 0x30599cu: goto label_30599c;
        case 0x3059a0u: goto label_3059a0;
        case 0x3059a4u: goto label_3059a4;
        case 0x3059a8u: goto label_3059a8;
        case 0x3059acu: goto label_3059ac;
        case 0x3059b0u: goto label_3059b0;
        case 0x3059b4u: goto label_3059b4;
        case 0x3059b8u: goto label_3059b8;
        case 0x3059bcu: goto label_3059bc;
        case 0x3059c0u: goto label_3059c0;
        case 0x3059c4u: goto label_3059c4;
        case 0x3059c8u: goto label_3059c8;
        case 0x3059ccu: goto label_3059cc;
        case 0x3059d0u: goto label_3059d0;
        case 0x3059d4u: goto label_3059d4;
        case 0x3059d8u: goto label_3059d8;
        case 0x3059dcu: goto label_3059dc;
        case 0x3059e0u: goto label_3059e0;
        case 0x3059e4u: goto label_3059e4;
        case 0x3059e8u: goto label_3059e8;
        case 0x3059ecu: goto label_3059ec;
        case 0x3059f0u: goto label_3059f0;
        case 0x3059f4u: goto label_3059f4;
        case 0x3059f8u: goto label_3059f8;
        case 0x3059fcu: goto label_3059fc;
        case 0x305a00u: goto label_305a00;
        case 0x305a04u: goto label_305a04;
        case 0x305a08u: goto label_305a08;
        case 0x305a0cu: goto label_305a0c;
        case 0x305a10u: goto label_305a10;
        case 0x305a14u: goto label_305a14;
        case 0x305a18u: goto label_305a18;
        case 0x305a1cu: goto label_305a1c;
        case 0x305a20u: goto label_305a20;
        case 0x305a24u: goto label_305a24;
        case 0x305a28u: goto label_305a28;
        case 0x305a2cu: goto label_305a2c;
        case 0x305a30u: goto label_305a30;
        case 0x305a34u: goto label_305a34;
        case 0x305a38u: goto label_305a38;
        case 0x305a3cu: goto label_305a3c;
        case 0x305a40u: goto label_305a40;
        case 0x305a44u: goto label_305a44;
        case 0x305a48u: goto label_305a48;
        case 0x305a4cu: goto label_305a4c;
        case 0x305a50u: goto label_305a50;
        case 0x305a54u: goto label_305a54;
        case 0x305a58u: goto label_305a58;
        case 0x305a5cu: goto label_305a5c;
        case 0x305a60u: goto label_305a60;
        case 0x305a64u: goto label_305a64;
        case 0x305a68u: goto label_305a68;
        case 0x305a6cu: goto label_305a6c;
        case 0x305a70u: goto label_305a70;
        case 0x305a74u: goto label_305a74;
        case 0x305a78u: goto label_305a78;
        case 0x305a7cu: goto label_305a7c;
        case 0x305a80u: goto label_305a80;
        case 0x305a84u: goto label_305a84;
        case 0x305a88u: goto label_305a88;
        case 0x305a8cu: goto label_305a8c;
        case 0x305a90u: goto label_305a90;
        case 0x305a94u: goto label_305a94;
        case 0x305a98u: goto label_305a98;
        case 0x305a9cu: goto label_305a9c;
        case 0x305aa0u: goto label_305aa0;
        case 0x305aa4u: goto label_305aa4;
        case 0x305aa8u: goto label_305aa8;
        case 0x305aacu: goto label_305aac;
        case 0x305ab0u: goto label_305ab0;
        case 0x305ab4u: goto label_305ab4;
        case 0x305ab8u: goto label_305ab8;
        case 0x305abcu: goto label_305abc;
        case 0x305ac0u: goto label_305ac0;
        case 0x305ac4u: goto label_305ac4;
        case 0x305ac8u: goto label_305ac8;
        case 0x305accu: goto label_305acc;
        case 0x305ad0u: goto label_305ad0;
        case 0x305ad4u: goto label_305ad4;
        case 0x305ad8u: goto label_305ad8;
        case 0x305adcu: goto label_305adc;
        case 0x305ae0u: goto label_305ae0;
        case 0x305ae4u: goto label_305ae4;
        case 0x305ae8u: goto label_305ae8;
        case 0x305aecu: goto label_305aec;
        case 0x305af0u: goto label_305af0;
        case 0x305af4u: goto label_305af4;
        case 0x305af8u: goto label_305af8;
        case 0x305afcu: goto label_305afc;
        case 0x305b00u: goto label_305b00;
        case 0x305b04u: goto label_305b04;
        case 0x305b08u: goto label_305b08;
        case 0x305b0cu: goto label_305b0c;
        case 0x305b10u: goto label_305b10;
        case 0x305b14u: goto label_305b14;
        case 0x305b18u: goto label_305b18;
        case 0x305b1cu: goto label_305b1c;
        case 0x305b20u: goto label_305b20;
        case 0x305b24u: goto label_305b24;
        case 0x305b28u: goto label_305b28;
        case 0x305b2cu: goto label_305b2c;
        case 0x305b30u: goto label_305b30;
        case 0x305b34u: goto label_305b34;
        case 0x305b38u: goto label_305b38;
        case 0x305b3cu: goto label_305b3c;
        case 0x305b40u: goto label_305b40;
        case 0x305b44u: goto label_305b44;
        case 0x305b48u: goto label_305b48;
        case 0x305b4cu: goto label_305b4c;
        case 0x305b50u: goto label_305b50;
        case 0x305b54u: goto label_305b54;
        case 0x305b58u: goto label_305b58;
        case 0x305b5cu: goto label_305b5c;
        case 0x305b60u: goto label_305b60;
        case 0x305b64u: goto label_305b64;
        case 0x305b68u: goto label_305b68;
        case 0x305b6cu: goto label_305b6c;
        case 0x305b70u: goto label_305b70;
        case 0x305b74u: goto label_305b74;
        case 0x305b78u: goto label_305b78;
        case 0x305b7cu: goto label_305b7c;
        case 0x305b80u: goto label_305b80;
        case 0x305b84u: goto label_305b84;
        case 0x305b88u: goto label_305b88;
        case 0x305b8cu: goto label_305b8c;
        case 0x305b90u: goto label_305b90;
        case 0x305b94u: goto label_305b94;
        case 0x305b98u: goto label_305b98;
        case 0x305b9cu: goto label_305b9c;
        case 0x305ba0u: goto label_305ba0;
        case 0x305ba4u: goto label_305ba4;
        case 0x305ba8u: goto label_305ba8;
        case 0x305bacu: goto label_305bac;
        case 0x305bb0u: goto label_305bb0;
        case 0x305bb4u: goto label_305bb4;
        case 0x305bb8u: goto label_305bb8;
        case 0x305bbcu: goto label_305bbc;
        case 0x305bc0u: goto label_305bc0;
        case 0x305bc4u: goto label_305bc4;
        case 0x305bc8u: goto label_305bc8;
        case 0x305bccu: goto label_305bcc;
        case 0x305bd0u: goto label_305bd0;
        case 0x305bd4u: goto label_305bd4;
        case 0x305bd8u: goto label_305bd8;
        case 0x305bdcu: goto label_305bdc;
        case 0x305be0u: goto label_305be0;
        case 0x305be4u: goto label_305be4;
        case 0x305be8u: goto label_305be8;
        case 0x305becu: goto label_305bec;
        case 0x305bf0u: goto label_305bf0;
        case 0x305bf4u: goto label_305bf4;
        case 0x305bf8u: goto label_305bf8;
        case 0x305bfcu: goto label_305bfc;
        case 0x305c00u: goto label_305c00;
        case 0x305c04u: goto label_305c04;
        case 0x305c08u: goto label_305c08;
        case 0x305c0cu: goto label_305c0c;
        case 0x305c10u: goto label_305c10;
        case 0x305c14u: goto label_305c14;
        case 0x305c18u: goto label_305c18;
        case 0x305c1cu: goto label_305c1c;
        case 0x305c20u: goto label_305c20;
        case 0x305c24u: goto label_305c24;
        case 0x305c28u: goto label_305c28;
        case 0x305c2cu: goto label_305c2c;
        case 0x305c30u: goto label_305c30;
        case 0x305c34u: goto label_305c34;
        case 0x305c38u: goto label_305c38;
        case 0x305c3cu: goto label_305c3c;
        case 0x305c40u: goto label_305c40;
        case 0x305c44u: goto label_305c44;
        case 0x305c48u: goto label_305c48;
        case 0x305c4cu: goto label_305c4c;
        case 0x305c50u: goto label_305c50;
        case 0x305c54u: goto label_305c54;
        case 0x305c58u: goto label_305c58;
        case 0x305c5cu: goto label_305c5c;
        case 0x305c60u: goto label_305c60;
        case 0x305c64u: goto label_305c64;
        case 0x305c68u: goto label_305c68;
        case 0x305c6cu: goto label_305c6c;
        case 0x305c70u: goto label_305c70;
        case 0x305c74u: goto label_305c74;
        case 0x305c78u: goto label_305c78;
        case 0x305c7cu: goto label_305c7c;
        case 0x305c80u: goto label_305c80;
        case 0x305c84u: goto label_305c84;
        case 0x305c88u: goto label_305c88;
        case 0x305c8cu: goto label_305c8c;
        case 0x305c90u: goto label_305c90;
        case 0x305c94u: goto label_305c94;
        case 0x305c98u: goto label_305c98;
        case 0x305c9cu: goto label_305c9c;
        case 0x305ca0u: goto label_305ca0;
        case 0x305ca4u: goto label_305ca4;
        case 0x305ca8u: goto label_305ca8;
        case 0x305cacu: goto label_305cac;
        case 0x305cb0u: goto label_305cb0;
        case 0x305cb4u: goto label_305cb4;
        case 0x305cb8u: goto label_305cb8;
        case 0x305cbcu: goto label_305cbc;
        case 0x305cc0u: goto label_305cc0;
        case 0x305cc4u: goto label_305cc4;
        case 0x305cc8u: goto label_305cc8;
        case 0x305cccu: goto label_305ccc;
        case 0x305cd0u: goto label_305cd0;
        case 0x305cd4u: goto label_305cd4;
        case 0x305cd8u: goto label_305cd8;
        case 0x305cdcu: goto label_305cdc;
        case 0x305ce0u: goto label_305ce0;
        case 0x305ce4u: goto label_305ce4;
        case 0x305ce8u: goto label_305ce8;
        case 0x305cecu: goto label_305cec;
        case 0x305cf0u: goto label_305cf0;
        case 0x305cf4u: goto label_305cf4;
        case 0x305cf8u: goto label_305cf8;
        case 0x305cfcu: goto label_305cfc;
        case 0x305d00u: goto label_305d00;
        case 0x305d04u: goto label_305d04;
        case 0x305d08u: goto label_305d08;
        case 0x305d0cu: goto label_305d0c;
        case 0x305d10u: goto label_305d10;
        case 0x305d14u: goto label_305d14;
        case 0x305d18u: goto label_305d18;
        case 0x305d1cu: goto label_305d1c;
        case 0x305d20u: goto label_305d20;
        case 0x305d24u: goto label_305d24;
        case 0x305d28u: goto label_305d28;
        case 0x305d2cu: goto label_305d2c;
        case 0x305d30u: goto label_305d30;
        case 0x305d34u: goto label_305d34;
        case 0x305d38u: goto label_305d38;
        case 0x305d3cu: goto label_305d3c;
        case 0x305d40u: goto label_305d40;
        case 0x305d44u: goto label_305d44;
        case 0x305d48u: goto label_305d48;
        case 0x305d4cu: goto label_305d4c;
        case 0x305d50u: goto label_305d50;
        case 0x305d54u: goto label_305d54;
        case 0x305d58u: goto label_305d58;
        case 0x305d5cu: goto label_305d5c;
        case 0x305d60u: goto label_305d60;
        case 0x305d64u: goto label_305d64;
        case 0x305d68u: goto label_305d68;
        case 0x305d6cu: goto label_305d6c;
        case 0x305d70u: goto label_305d70;
        case 0x305d74u: goto label_305d74;
        case 0x305d78u: goto label_305d78;
        case 0x305d7cu: goto label_305d7c;
        case 0x305d80u: goto label_305d80;
        case 0x305d84u: goto label_305d84;
        case 0x305d88u: goto label_305d88;
        case 0x305d8cu: goto label_305d8c;
        case 0x305d90u: goto label_305d90;
        case 0x305d94u: goto label_305d94;
        case 0x305d98u: goto label_305d98;
        case 0x305d9cu: goto label_305d9c;
        case 0x305da0u: goto label_305da0;
        case 0x305da4u: goto label_305da4;
        case 0x305da8u: goto label_305da8;
        case 0x305dacu: goto label_305dac;
        case 0x305db0u: goto label_305db0;
        case 0x305db4u: goto label_305db4;
        case 0x305db8u: goto label_305db8;
        case 0x305dbcu: goto label_305dbc;
        case 0x305dc0u: goto label_305dc0;
        case 0x305dc4u: goto label_305dc4;
        case 0x305dc8u: goto label_305dc8;
        case 0x305dccu: goto label_305dcc;
        case 0x305dd0u: goto label_305dd0;
        case 0x305dd4u: goto label_305dd4;
        case 0x305dd8u: goto label_305dd8;
        case 0x305ddcu: goto label_305ddc;
        case 0x305de0u: goto label_305de0;
        case 0x305de4u: goto label_305de4;
        case 0x305de8u: goto label_305de8;
        case 0x305decu: goto label_305dec;
        case 0x305df0u: goto label_305df0;
        case 0x305df4u: goto label_305df4;
        case 0x305df8u: goto label_305df8;
        case 0x305dfcu: goto label_305dfc;
        case 0x305e00u: goto label_305e00;
        case 0x305e04u: goto label_305e04;
        case 0x305e08u: goto label_305e08;
        case 0x305e0cu: goto label_305e0c;
        case 0x305e10u: goto label_305e10;
        case 0x305e14u: goto label_305e14;
        case 0x305e18u: goto label_305e18;
        case 0x305e1cu: goto label_305e1c;
        case 0x305e20u: goto label_305e20;
        case 0x305e24u: goto label_305e24;
        case 0x305e28u: goto label_305e28;
        case 0x305e2cu: goto label_305e2c;
        case 0x305e30u: goto label_305e30;
        case 0x305e34u: goto label_305e34;
        case 0x305e38u: goto label_305e38;
        case 0x305e3cu: goto label_305e3c;
        case 0x305e40u: goto label_305e40;
        case 0x305e44u: goto label_305e44;
        case 0x305e48u: goto label_305e48;
        case 0x305e4cu: goto label_305e4c;
        case 0x305e50u: goto label_305e50;
        case 0x305e54u: goto label_305e54;
        case 0x305e58u: goto label_305e58;
        case 0x305e5cu: goto label_305e5c;
        case 0x305e60u: goto label_305e60;
        case 0x305e64u: goto label_305e64;
        case 0x305e68u: goto label_305e68;
        case 0x305e6cu: goto label_305e6c;
        case 0x305e70u: goto label_305e70;
        case 0x305e74u: goto label_305e74;
        case 0x305e78u: goto label_305e78;
        case 0x305e7cu: goto label_305e7c;
        case 0x305e80u: goto label_305e80;
        case 0x305e84u: goto label_305e84;
        case 0x305e88u: goto label_305e88;
        case 0x305e8cu: goto label_305e8c;
        case 0x305e90u: goto label_305e90;
        case 0x305e94u: goto label_305e94;
        case 0x305e98u: goto label_305e98;
        case 0x305e9cu: goto label_305e9c;
        case 0x305ea0u: goto label_305ea0;
        case 0x305ea4u: goto label_305ea4;
        case 0x305ea8u: goto label_305ea8;
        case 0x305eacu: goto label_305eac;
        case 0x305eb0u: goto label_305eb0;
        case 0x305eb4u: goto label_305eb4;
        case 0x305eb8u: goto label_305eb8;
        case 0x305ebcu: goto label_305ebc;
        case 0x305ec0u: goto label_305ec0;
        case 0x305ec4u: goto label_305ec4;
        case 0x305ec8u: goto label_305ec8;
        case 0x305eccu: goto label_305ecc;
        case 0x305ed0u: goto label_305ed0;
        case 0x305ed4u: goto label_305ed4;
        case 0x305ed8u: goto label_305ed8;
        case 0x305edcu: goto label_305edc;
        case 0x305ee0u: goto label_305ee0;
        case 0x305ee4u: goto label_305ee4;
        case 0x305ee8u: goto label_305ee8;
        case 0x305eecu: goto label_305eec;
        case 0x305ef0u: goto label_305ef0;
        case 0x305ef4u: goto label_305ef4;
        case 0x305ef8u: goto label_305ef8;
        case 0x305efcu: goto label_305efc;
        case 0x305f00u: goto label_305f00;
        case 0x305f04u: goto label_305f04;
        case 0x305f08u: goto label_305f08;
        case 0x305f0cu: goto label_305f0c;
        case 0x305f10u: goto label_305f10;
        case 0x305f14u: goto label_305f14;
        case 0x305f18u: goto label_305f18;
        case 0x305f1cu: goto label_305f1c;
        case 0x305f20u: goto label_305f20;
        case 0x305f24u: goto label_305f24;
        case 0x305f28u: goto label_305f28;
        case 0x305f2cu: goto label_305f2c;
        case 0x305f30u: goto label_305f30;
        case 0x305f34u: goto label_305f34;
        case 0x305f38u: goto label_305f38;
        case 0x305f3cu: goto label_305f3c;
        case 0x305f40u: goto label_305f40;
        case 0x305f44u: goto label_305f44;
        case 0x305f48u: goto label_305f48;
        case 0x305f4cu: goto label_305f4c;
        case 0x305f50u: goto label_305f50;
        case 0x305f54u: goto label_305f54;
        case 0x305f58u: goto label_305f58;
        case 0x305f5cu: goto label_305f5c;
        case 0x305f60u: goto label_305f60;
        case 0x305f64u: goto label_305f64;
        case 0x305f68u: goto label_305f68;
        case 0x305f6cu: goto label_305f6c;
        case 0x305f70u: goto label_305f70;
        case 0x305f74u: goto label_305f74;
        case 0x305f78u: goto label_305f78;
        case 0x305f7cu: goto label_305f7c;
        case 0x305f80u: goto label_305f80;
        case 0x305f84u: goto label_305f84;
        case 0x305f88u: goto label_305f88;
        case 0x305f8cu: goto label_305f8c;
        case 0x305f90u: goto label_305f90;
        case 0x305f94u: goto label_305f94;
        case 0x305f98u: goto label_305f98;
        case 0x305f9cu: goto label_305f9c;
        case 0x305fa0u: goto label_305fa0;
        case 0x305fa4u: goto label_305fa4;
        case 0x305fa8u: goto label_305fa8;
        case 0x305facu: goto label_305fac;
        case 0x305fb0u: goto label_305fb0;
        case 0x305fb4u: goto label_305fb4;
        case 0x305fb8u: goto label_305fb8;
        case 0x305fbcu: goto label_305fbc;
        case 0x305fc0u: goto label_305fc0;
        case 0x305fc4u: goto label_305fc4;
        case 0x305fc8u: goto label_305fc8;
        case 0x305fccu: goto label_305fcc;
        case 0x305fd0u: goto label_305fd0;
        case 0x305fd4u: goto label_305fd4;
        case 0x305fd8u: goto label_305fd8;
        case 0x305fdcu: goto label_305fdc;
        case 0x305fe0u: goto label_305fe0;
        case 0x305fe4u: goto label_305fe4;
        case 0x305fe8u: goto label_305fe8;
        case 0x305fecu: goto label_305fec;
        case 0x305ff0u: goto label_305ff0;
        case 0x305ff4u: goto label_305ff4;
        case 0x305ff8u: goto label_305ff8;
        case 0x305ffcu: goto label_305ffc;
        case 0x306000u: goto label_306000;
        case 0x306004u: goto label_306004;
        case 0x306008u: goto label_306008;
        case 0x30600cu: goto label_30600c;
        case 0x306010u: goto label_306010;
        case 0x306014u: goto label_306014;
        case 0x306018u: goto label_306018;
        case 0x30601cu: goto label_30601c;
        case 0x306020u: goto label_306020;
        case 0x306024u: goto label_306024;
        case 0x306028u: goto label_306028;
        case 0x30602cu: goto label_30602c;
        case 0x306030u: goto label_306030;
        case 0x306034u: goto label_306034;
        case 0x306038u: goto label_306038;
        case 0x30603cu: goto label_30603c;
        case 0x306040u: goto label_306040;
        case 0x306044u: goto label_306044;
        case 0x306048u: goto label_306048;
        case 0x30604cu: goto label_30604c;
        case 0x306050u: goto label_306050;
        case 0x306054u: goto label_306054;
        case 0x306058u: goto label_306058;
        case 0x30605cu: goto label_30605c;
        case 0x306060u: goto label_306060;
        case 0x306064u: goto label_306064;
        case 0x306068u: goto label_306068;
        case 0x30606cu: goto label_30606c;
        case 0x306070u: goto label_306070;
        case 0x306074u: goto label_306074;
        case 0x306078u: goto label_306078;
        case 0x30607cu: goto label_30607c;
        case 0x306080u: goto label_306080;
        case 0x306084u: goto label_306084;
        case 0x306088u: goto label_306088;
        case 0x30608cu: goto label_30608c;
        case 0x306090u: goto label_306090;
        case 0x306094u: goto label_306094;
        case 0x306098u: goto label_306098;
        case 0x30609cu: goto label_30609c;
        case 0x3060a0u: goto label_3060a0;
        case 0x3060a4u: goto label_3060a4;
        case 0x3060a8u: goto label_3060a8;
        case 0x3060acu: goto label_3060ac;
        case 0x3060b0u: goto label_3060b0;
        case 0x3060b4u: goto label_3060b4;
        case 0x3060b8u: goto label_3060b8;
        case 0x3060bcu: goto label_3060bc;
        case 0x3060c0u: goto label_3060c0;
        case 0x3060c4u: goto label_3060c4;
        case 0x3060c8u: goto label_3060c8;
        case 0x3060ccu: goto label_3060cc;
        case 0x3060d0u: goto label_3060d0;
        case 0x3060d4u: goto label_3060d4;
        case 0x3060d8u: goto label_3060d8;
        case 0x3060dcu: goto label_3060dc;
        case 0x3060e0u: goto label_3060e0;
        case 0x3060e4u: goto label_3060e4;
        case 0x3060e8u: goto label_3060e8;
        case 0x3060ecu: goto label_3060ec;
        case 0x3060f0u: goto label_3060f0;
        case 0x3060f4u: goto label_3060f4;
        case 0x3060f8u: goto label_3060f8;
        case 0x3060fcu: goto label_3060fc;
        case 0x306100u: goto label_306100;
        case 0x306104u: goto label_306104;
        case 0x306108u: goto label_306108;
        case 0x30610cu: goto label_30610c;
        case 0x306110u: goto label_306110;
        case 0x306114u: goto label_306114;
        case 0x306118u: goto label_306118;
        case 0x30611cu: goto label_30611c;
        case 0x306120u: goto label_306120;
        case 0x306124u: goto label_306124;
        case 0x306128u: goto label_306128;
        case 0x30612cu: goto label_30612c;
        case 0x306130u: goto label_306130;
        case 0x306134u: goto label_306134;
        case 0x306138u: goto label_306138;
        case 0x30613cu: goto label_30613c;
        case 0x306140u: goto label_306140;
        case 0x306144u: goto label_306144;
        case 0x306148u: goto label_306148;
        case 0x30614cu: goto label_30614c;
        case 0x306150u: goto label_306150;
        case 0x306154u: goto label_306154;
        case 0x306158u: goto label_306158;
        case 0x30615cu: goto label_30615c;
        case 0x306160u: goto label_306160;
        case 0x306164u: goto label_306164;
        case 0x306168u: goto label_306168;
        case 0x30616cu: goto label_30616c;
        case 0x306170u: goto label_306170;
        case 0x306174u: goto label_306174;
        case 0x306178u: goto label_306178;
        case 0x30617cu: goto label_30617c;
        case 0x306180u: goto label_306180;
        case 0x306184u: goto label_306184;
        case 0x306188u: goto label_306188;
        case 0x30618cu: goto label_30618c;
        case 0x306190u: goto label_306190;
        case 0x306194u: goto label_306194;
        case 0x306198u: goto label_306198;
        case 0x30619cu: goto label_30619c;
        case 0x3061a0u: goto label_3061a0;
        case 0x3061a4u: goto label_3061a4;
        case 0x3061a8u: goto label_3061a8;
        case 0x3061acu: goto label_3061ac;
        case 0x3061b0u: goto label_3061b0;
        case 0x3061b4u: goto label_3061b4;
        case 0x3061b8u: goto label_3061b8;
        case 0x3061bcu: goto label_3061bc;
        case 0x3061c0u: goto label_3061c0;
        case 0x3061c4u: goto label_3061c4;
        case 0x3061c8u: goto label_3061c8;
        case 0x3061ccu: goto label_3061cc;
        case 0x3061d0u: goto label_3061d0;
        case 0x3061d4u: goto label_3061d4;
        case 0x3061d8u: goto label_3061d8;
        case 0x3061dcu: goto label_3061dc;
        case 0x3061e0u: goto label_3061e0;
        case 0x3061e4u: goto label_3061e4;
        case 0x3061e8u: goto label_3061e8;
        case 0x3061ecu: goto label_3061ec;
        case 0x3061f0u: goto label_3061f0;
        case 0x3061f4u: goto label_3061f4;
        case 0x3061f8u: goto label_3061f8;
        case 0x3061fcu: goto label_3061fc;
        case 0x306200u: goto label_306200;
        case 0x306204u: goto label_306204;
        case 0x306208u: goto label_306208;
        case 0x30620cu: goto label_30620c;
        case 0x306210u: goto label_306210;
        case 0x306214u: goto label_306214;
        case 0x306218u: goto label_306218;
        case 0x30621cu: goto label_30621c;
        case 0x306220u: goto label_306220;
        case 0x306224u: goto label_306224;
        case 0x306228u: goto label_306228;
        case 0x30622cu: goto label_30622c;
        case 0x306230u: goto label_306230;
        case 0x306234u: goto label_306234;
        case 0x306238u: goto label_306238;
        case 0x30623cu: goto label_30623c;
        case 0x306240u: goto label_306240;
        case 0x306244u: goto label_306244;
        case 0x306248u: goto label_306248;
        case 0x30624cu: goto label_30624c;
        case 0x306250u: goto label_306250;
        case 0x306254u: goto label_306254;
        case 0x306258u: goto label_306258;
        case 0x30625cu: goto label_30625c;
        case 0x306260u: goto label_306260;
        case 0x306264u: goto label_306264;
        case 0x306268u: goto label_306268;
        case 0x30626cu: goto label_30626c;
        case 0x306270u: goto label_306270;
        case 0x306274u: goto label_306274;
        case 0x306278u: goto label_306278;
        case 0x30627cu: goto label_30627c;
        case 0x306280u: goto label_306280;
        case 0x306284u: goto label_306284;
        case 0x306288u: goto label_306288;
        case 0x30628cu: goto label_30628c;
        case 0x306290u: goto label_306290;
        case 0x306294u: goto label_306294;
        case 0x306298u: goto label_306298;
        case 0x30629cu: goto label_30629c;
        case 0x3062a0u: goto label_3062a0;
        case 0x3062a4u: goto label_3062a4;
        case 0x3062a8u: goto label_3062a8;
        case 0x3062acu: goto label_3062ac;
        case 0x3062b0u: goto label_3062b0;
        case 0x3062b4u: goto label_3062b4;
        case 0x3062b8u: goto label_3062b8;
        case 0x3062bcu: goto label_3062bc;
        case 0x3062c0u: goto label_3062c0;
        case 0x3062c4u: goto label_3062c4;
        case 0x3062c8u: goto label_3062c8;
        case 0x3062ccu: goto label_3062cc;
        case 0x3062d0u: goto label_3062d0;
        case 0x3062d4u: goto label_3062d4;
        case 0x3062d8u: goto label_3062d8;
        case 0x3062dcu: goto label_3062dc;
        case 0x3062e0u: goto label_3062e0;
        case 0x3062e4u: goto label_3062e4;
        case 0x3062e8u: goto label_3062e8;
        case 0x3062ecu: goto label_3062ec;
        case 0x3062f0u: goto label_3062f0;
        case 0x3062f4u: goto label_3062f4;
        case 0x3062f8u: goto label_3062f8;
        case 0x3062fcu: goto label_3062fc;
        case 0x306300u: goto label_306300;
        case 0x306304u: goto label_306304;
        case 0x306308u: goto label_306308;
        case 0x30630cu: goto label_30630c;
        case 0x306310u: goto label_306310;
        case 0x306314u: goto label_306314;
        case 0x306318u: goto label_306318;
        case 0x30631cu: goto label_30631c;
        case 0x306320u: goto label_306320;
        case 0x306324u: goto label_306324;
        case 0x306328u: goto label_306328;
        case 0x30632cu: goto label_30632c;
        case 0x306330u: goto label_306330;
        case 0x306334u: goto label_306334;
        case 0x306338u: goto label_306338;
        case 0x30633cu: goto label_30633c;
        case 0x306340u: goto label_306340;
        case 0x306344u: goto label_306344;
        case 0x306348u: goto label_306348;
        case 0x30634cu: goto label_30634c;
        case 0x306350u: goto label_306350;
        case 0x306354u: goto label_306354;
        case 0x306358u: goto label_306358;
        case 0x30635cu: goto label_30635c;
        case 0x306360u: goto label_306360;
        case 0x306364u: goto label_306364;
        case 0x306368u: goto label_306368;
        case 0x30636cu: goto label_30636c;
        case 0x306370u: goto label_306370;
        case 0x306374u: goto label_306374;
        case 0x306378u: goto label_306378;
        case 0x30637cu: goto label_30637c;
        case 0x306380u: goto label_306380;
        case 0x306384u: goto label_306384;
        case 0x306388u: goto label_306388;
        case 0x30638cu: goto label_30638c;
        case 0x306390u: goto label_306390;
        case 0x306394u: goto label_306394;
        case 0x306398u: goto label_306398;
        case 0x30639cu: goto label_30639c;
        case 0x3063a0u: goto label_3063a0;
        case 0x3063a4u: goto label_3063a4;
        case 0x3063a8u: goto label_3063a8;
        case 0x3063acu: goto label_3063ac;
        case 0x3063b0u: goto label_3063b0;
        case 0x3063b4u: goto label_3063b4;
        case 0x3063b8u: goto label_3063b8;
        case 0x3063bcu: goto label_3063bc;
        case 0x3063c0u: goto label_3063c0;
        case 0x3063c4u: goto label_3063c4;
        case 0x3063c8u: goto label_3063c8;
        case 0x3063ccu: goto label_3063cc;
        case 0x3063d0u: goto label_3063d0;
        case 0x3063d4u: goto label_3063d4;
        case 0x3063d8u: goto label_3063d8;
        case 0x3063dcu: goto label_3063dc;
        case 0x3063e0u: goto label_3063e0;
        case 0x3063e4u: goto label_3063e4;
        case 0x3063e8u: goto label_3063e8;
        case 0x3063ecu: goto label_3063ec;
        case 0x3063f0u: goto label_3063f0;
        case 0x3063f4u: goto label_3063f4;
        case 0x3063f8u: goto label_3063f8;
        case 0x3063fcu: goto label_3063fc;
        case 0x306400u: goto label_306400;
        case 0x306404u: goto label_306404;
        case 0x306408u: goto label_306408;
        case 0x30640cu: goto label_30640c;
        case 0x306410u: goto label_306410;
        case 0x306414u: goto label_306414;
        case 0x306418u: goto label_306418;
        case 0x30641cu: goto label_30641c;
        case 0x306420u: goto label_306420;
        case 0x306424u: goto label_306424;
        case 0x306428u: goto label_306428;
        case 0x30642cu: goto label_30642c;
        case 0x306430u: goto label_306430;
        case 0x306434u: goto label_306434;
        case 0x306438u: goto label_306438;
        case 0x30643cu: goto label_30643c;
        case 0x306440u: goto label_306440;
        case 0x306444u: goto label_306444;
        case 0x306448u: goto label_306448;
        case 0x30644cu: goto label_30644c;
        case 0x306450u: goto label_306450;
        case 0x306454u: goto label_306454;
        case 0x306458u: goto label_306458;
        case 0x30645cu: goto label_30645c;
        case 0x306460u: goto label_306460;
        case 0x306464u: goto label_306464;
        case 0x306468u: goto label_306468;
        case 0x30646cu: goto label_30646c;
        case 0x306470u: goto label_306470;
        case 0x306474u: goto label_306474;
        case 0x306478u: goto label_306478;
        case 0x30647cu: goto label_30647c;
        case 0x306480u: goto label_306480;
        case 0x306484u: goto label_306484;
        case 0x306488u: goto label_306488;
        case 0x30648cu: goto label_30648c;
        case 0x306490u: goto label_306490;
        case 0x306494u: goto label_306494;
        case 0x306498u: goto label_306498;
        case 0x30649cu: goto label_30649c;
        case 0x3064a0u: goto label_3064a0;
        case 0x3064a4u: goto label_3064a4;
        case 0x3064a8u: goto label_3064a8;
        case 0x3064acu: goto label_3064ac;
        case 0x3064b0u: goto label_3064b0;
        case 0x3064b4u: goto label_3064b4;
        case 0x3064b8u: goto label_3064b8;
        case 0x3064bcu: goto label_3064bc;
        case 0x3064c0u: goto label_3064c0;
        case 0x3064c4u: goto label_3064c4;
        case 0x3064c8u: goto label_3064c8;
        case 0x3064ccu: goto label_3064cc;
        case 0x3064d0u: goto label_3064d0;
        case 0x3064d4u: goto label_3064d4;
        case 0x3064d8u: goto label_3064d8;
        case 0x3064dcu: goto label_3064dc;
        case 0x3064e0u: goto label_3064e0;
        case 0x3064e4u: goto label_3064e4;
        case 0x3064e8u: goto label_3064e8;
        case 0x3064ecu: goto label_3064ec;
        case 0x3064f0u: goto label_3064f0;
        case 0x3064f4u: goto label_3064f4;
        case 0x3064f8u: goto label_3064f8;
        case 0x3064fcu: goto label_3064fc;
        case 0x306500u: goto label_306500;
        case 0x306504u: goto label_306504;
        case 0x306508u: goto label_306508;
        case 0x30650cu: goto label_30650c;
        case 0x306510u: goto label_306510;
        case 0x306514u: goto label_306514;
        case 0x306518u: goto label_306518;
        case 0x30651cu: goto label_30651c;
        case 0x306520u: goto label_306520;
        case 0x306524u: goto label_306524;
        case 0x306528u: goto label_306528;
        case 0x30652cu: goto label_30652c;
        case 0x306530u: goto label_306530;
        case 0x306534u: goto label_306534;
        case 0x306538u: goto label_306538;
        case 0x30653cu: goto label_30653c;
        case 0x306540u: goto label_306540;
        case 0x306544u: goto label_306544;
        case 0x306548u: goto label_306548;
        case 0x30654cu: goto label_30654c;
        case 0x306550u: goto label_306550;
        case 0x306554u: goto label_306554;
        case 0x306558u: goto label_306558;
        case 0x30655cu: goto label_30655c;
        case 0x306560u: goto label_306560;
        case 0x306564u: goto label_306564;
        case 0x306568u: goto label_306568;
        case 0x30656cu: goto label_30656c;
        case 0x306570u: goto label_306570;
        case 0x306574u: goto label_306574;
        case 0x306578u: goto label_306578;
        case 0x30657cu: goto label_30657c;
        case 0x306580u: goto label_306580;
        case 0x306584u: goto label_306584;
        case 0x306588u: goto label_306588;
        case 0x30658cu: goto label_30658c;
        case 0x306590u: goto label_306590;
        case 0x306594u: goto label_306594;
        case 0x306598u: goto label_306598;
        case 0x30659cu: goto label_30659c;
        case 0x3065a0u: goto label_3065a0;
        case 0x3065a4u: goto label_3065a4;
        case 0x3065a8u: goto label_3065a8;
        case 0x3065acu: goto label_3065ac;
        case 0x3065b0u: goto label_3065b0;
        case 0x3065b4u: goto label_3065b4;
        case 0x3065b8u: goto label_3065b8;
        case 0x3065bcu: goto label_3065bc;
        case 0x3065c0u: goto label_3065c0;
        case 0x3065c4u: goto label_3065c4;
        case 0x3065c8u: goto label_3065c8;
        case 0x3065ccu: goto label_3065cc;
        case 0x3065d0u: goto label_3065d0;
        case 0x3065d4u: goto label_3065d4;
        case 0x3065d8u: goto label_3065d8;
        case 0x3065dcu: goto label_3065dc;
        case 0x3065e0u: goto label_3065e0;
        case 0x3065e4u: goto label_3065e4;
        case 0x3065e8u: goto label_3065e8;
        case 0x3065ecu: goto label_3065ec;
        case 0x3065f0u: goto label_3065f0;
        case 0x3065f4u: goto label_3065f4;
        case 0x3065f8u: goto label_3065f8;
        case 0x3065fcu: goto label_3065fc;
        case 0x306600u: goto label_306600;
        case 0x306604u: goto label_306604;
        case 0x306608u: goto label_306608;
        case 0x30660cu: goto label_30660c;
        case 0x306610u: goto label_306610;
        case 0x306614u: goto label_306614;
        case 0x306618u: goto label_306618;
        case 0x30661cu: goto label_30661c;
        case 0x306620u: goto label_306620;
        case 0x306624u: goto label_306624;
        case 0x306628u: goto label_306628;
        case 0x30662cu: goto label_30662c;
        case 0x306630u: goto label_306630;
        case 0x306634u: goto label_306634;
        case 0x306638u: goto label_306638;
        case 0x30663cu: goto label_30663c;
        case 0x306640u: goto label_306640;
        case 0x306644u: goto label_306644;
        case 0x306648u: goto label_306648;
        case 0x30664cu: goto label_30664c;
        case 0x306650u: goto label_306650;
        case 0x306654u: goto label_306654;
        case 0x306658u: goto label_306658;
        case 0x30665cu: goto label_30665c;
        case 0x306660u: goto label_306660;
        case 0x306664u: goto label_306664;
        case 0x306668u: goto label_306668;
        case 0x30666cu: goto label_30666c;
        case 0x306670u: goto label_306670;
        case 0x306674u: goto label_306674;
        case 0x306678u: goto label_306678;
        case 0x30667cu: goto label_30667c;
        case 0x306680u: goto label_306680;
        case 0x306684u: goto label_306684;
        case 0x306688u: goto label_306688;
        case 0x30668cu: goto label_30668c;
        case 0x306690u: goto label_306690;
        case 0x306694u: goto label_306694;
        case 0x306698u: goto label_306698;
        case 0x30669cu: goto label_30669c;
        case 0x3066a0u: goto label_3066a0;
        case 0x3066a4u: goto label_3066a4;
        case 0x3066a8u: goto label_3066a8;
        case 0x3066acu: goto label_3066ac;
        case 0x3066b0u: goto label_3066b0;
        case 0x3066b4u: goto label_3066b4;
        case 0x3066b8u: goto label_3066b8;
        case 0x3066bcu: goto label_3066bc;
        case 0x3066c0u: goto label_3066c0;
        case 0x3066c4u: goto label_3066c4;
        case 0x3066c8u: goto label_3066c8;
        case 0x3066ccu: goto label_3066cc;
        case 0x3066d0u: goto label_3066d0;
        case 0x3066d4u: goto label_3066d4;
        case 0x3066d8u: goto label_3066d8;
        case 0x3066dcu: goto label_3066dc;
        case 0x3066e0u: goto label_3066e0;
        case 0x3066e4u: goto label_3066e4;
        case 0x3066e8u: goto label_3066e8;
        case 0x3066ecu: goto label_3066ec;
        case 0x3066f0u: goto label_3066f0;
        case 0x3066f4u: goto label_3066f4;
        case 0x3066f8u: goto label_3066f8;
        case 0x3066fcu: goto label_3066fc;
        case 0x306700u: goto label_306700;
        case 0x306704u: goto label_306704;
        case 0x306708u: goto label_306708;
        case 0x30670cu: goto label_30670c;
        case 0x306710u: goto label_306710;
        case 0x306714u: goto label_306714;
        case 0x306718u: goto label_306718;
        case 0x30671cu: goto label_30671c;
        case 0x306720u: goto label_306720;
        case 0x306724u: goto label_306724;
        case 0x306728u: goto label_306728;
        case 0x30672cu: goto label_30672c;
        case 0x306730u: goto label_306730;
        case 0x306734u: goto label_306734;
        case 0x306738u: goto label_306738;
        case 0x30673cu: goto label_30673c;
        case 0x306740u: goto label_306740;
        case 0x306744u: goto label_306744;
        case 0x306748u: goto label_306748;
        case 0x30674cu: goto label_30674c;
        case 0x306750u: goto label_306750;
        case 0x306754u: goto label_306754;
        case 0x306758u: goto label_306758;
        case 0x30675cu: goto label_30675c;
        case 0x306760u: goto label_306760;
        case 0x306764u: goto label_306764;
        case 0x306768u: goto label_306768;
        case 0x30676cu: goto label_30676c;
        case 0x306770u: goto label_306770;
        case 0x306774u: goto label_306774;
        case 0x306778u: goto label_306778;
        case 0x30677cu: goto label_30677c;
        case 0x306780u: goto label_306780;
        case 0x306784u: goto label_306784;
        case 0x306788u: goto label_306788;
        case 0x30678cu: goto label_30678c;
        case 0x306790u: goto label_306790;
        case 0x306794u: goto label_306794;
        case 0x306798u: goto label_306798;
        case 0x30679cu: goto label_30679c;
        case 0x3067a0u: goto label_3067a0;
        case 0x3067a4u: goto label_3067a4;
        case 0x3067a8u: goto label_3067a8;
        case 0x3067acu: goto label_3067ac;
        case 0x3067b0u: goto label_3067b0;
        case 0x3067b4u: goto label_3067b4;
        case 0x3067b8u: goto label_3067b8;
        case 0x3067bcu: goto label_3067bc;
        case 0x3067c0u: goto label_3067c0;
        case 0x3067c4u: goto label_3067c4;
        case 0x3067c8u: goto label_3067c8;
        case 0x3067ccu: goto label_3067cc;
        case 0x3067d0u: goto label_3067d0;
        case 0x3067d4u: goto label_3067d4;
        case 0x3067d8u: goto label_3067d8;
        case 0x3067dcu: goto label_3067dc;
        case 0x3067e0u: goto label_3067e0;
        case 0x3067e4u: goto label_3067e4;
        case 0x3067e8u: goto label_3067e8;
        case 0x3067ecu: goto label_3067ec;
        case 0x3067f0u: goto label_3067f0;
        case 0x3067f4u: goto label_3067f4;
        case 0x3067f8u: goto label_3067f8;
        case 0x3067fcu: goto label_3067fc;
        default: break;
    }

    ctx->pc = 0x305860u;

label_305860:
    // 0x305860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x305860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_305864:
    // 0x305864: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x305864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_305868:
    // 0x305868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x305868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30586c:
    // 0x30586c: 0x244227cc  addiu       $v0, $v0, 0x27CC
    ctx->pc = 0x30586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10188));
label_305870:
    // 0x305870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x305870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_305874:
    // 0x305874: 0x8c850db0  lw          $a1, 0xDB0($a0)
    ctx->pc = 0x305874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_305878:
    // 0x305878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30587c:
    // 0x30587c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x30587cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_305880:
    // 0x305880: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x305880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_305884:
    // 0x305884: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x305884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_305888:
    // 0x305888: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x305888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_30588c:
    // 0x30588c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_305890:
    // 0x305890: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x305890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_305894:
    // 0x305894: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x305894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_305898:
    // 0x305898: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x305898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30589c:
    // 0x30589c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x30589cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3058a0:
    // 0x3058a0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3058a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3058a4:
    // 0x3058a4: 0xc0408ec  jal         func_1023B0
label_3058a8:
    if (ctx->pc == 0x3058A8u) {
        ctx->pc = 0x3058A8u;
            // 0x3058a8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x3058ACu;
        goto label_3058ac;
    }
    ctx->pc = 0x3058A4u;
    SET_GPR_U32(ctx, 31, 0x3058ACu);
    ctx->pc = 0x3058A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3058A4u;
            // 0x3058a8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023B0u;
    if (runtime->hasFunction(0x1023B0u)) {
        auto targetFn = runtime->lookupFunction(0x1023B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3058ACu; }
        if (ctx->pc != 0x3058ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001023B0_0x1023b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3058ACu; }
        if (ctx->pc != 0x3058ACu) { return; }
    }
    ctx->pc = 0x3058ACu;
label_3058ac:
    // 0x3058ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3058b0:
    if (ctx->pc == 0x3058B0u) {
        ctx->pc = 0x3058B0u;
            // 0x3058b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3058B4u;
        goto label_3058b4;
    }
    ctx->pc = 0x3058ACu;
    {
        const bool branch_taken_0x3058ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3058ac) {
            ctx->pc = 0x3058B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3058ACu;
            // 0x3058b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3058C4u;
            goto label_3058c4;
        }
    }
    ctx->pc = 0x3058B4u;
label_3058b4:
    // 0x3058b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3058b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3058b8:
    // 0x3058b8: 0xc0408c8  jal         func_102320
label_3058bc:
    if (ctx->pc == 0x3058BCu) {
        ctx->pc = 0x3058BCu;
            // 0x3058bc: 0x27b90020  addiu       $t9, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3058C0u;
        goto label_3058c0;
    }
    ctx->pc = 0x3058B8u;
    SET_GPR_U32(ctx, 31, 0x3058C0u);
    ctx->pc = 0x3058BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3058B8u;
            // 0x3058bc: 0x27b90020  addiu       $t9, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3058C0u; }
        if (ctx->pc != 0x3058C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3058C0u; }
        if (ctx->pc != 0x3058C0u) { return; }
    }
    ctx->pc = 0x3058C0u;
label_3058c0:
    // 0x3058c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3058c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3058c4:
    // 0x3058c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3058c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3058c8:
    // 0x3058c8: 0x3e00008  jr          $ra
label_3058cc:
    if (ctx->pc == 0x3058CCu) {
        ctx->pc = 0x3058CCu;
            // 0x3058cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3058D0u;
        goto label_3058d0;
    }
    ctx->pc = 0x3058C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3058CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3058C8u;
            // 0x3058cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3058D0u;
label_3058d0:
    // 0x3058d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3058d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3058d4:
    // 0x3058d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3058d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3058d8:
    // 0x3058d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3058d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3058dc:
    // 0x3058dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3058dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3058e0:
    // 0x3058e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3058e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3058e4:
    // 0x3058e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3058e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3058e8:
    // 0x3058e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3058e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3058ec:
    // 0x3058ec: 0x8c820db0  lw          $v0, 0xDB0($a0)
    ctx->pc = 0x3058ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_3058f0:
    // 0x3058f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3058f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3058f4:
    // 0x3058f4: 0xac820db4  sw          $v0, 0xDB4($a0)
    ctx->pc = 0x3058f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3508), GPR_U32(ctx, 2));
label_3058f8:
    // 0x3058f8: 0xac910db0  sw          $s1, 0xDB0($a0)
    ctx->pc = 0x3058f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3504), GPR_U32(ctx, 17));
label_3058fc:
    // 0x3058fc: 0xac800e30  sw          $zero, 0xE30($a0)
    ctx->pc = 0x3058fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3632), GPR_U32(ctx, 0));
label_305900:
    // 0x305900: 0xac800a74  sw          $zero, 0xA74($a0)
    ctx->pc = 0x305900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2676), GPR_U32(ctx, 0));
label_305904:
    // 0x305904: 0xc0eec24  jal         func_3BB090
label_305908:
    if (ctx->pc == 0x305908u) {
        ctx->pc = 0x305908u;
            // 0x305908: 0x26440a50  addiu       $a0, $s2, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
        ctx->pc = 0x30590Cu;
        goto label_30590c;
    }
    ctx->pc = 0x305904u;
    SET_GPR_U32(ctx, 31, 0x30590Cu);
    ctx->pc = 0x305908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305904u;
            // 0x305908: 0x26440a50  addiu       $a0, $s2, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB090u;
    if (runtime->hasFunction(0x3BB090u)) {
        auto targetFn = runtime->lookupFunction(0x3BB090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30590Cu; }
        if (ctx->pc != 0x30590Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB090_0x3bb090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30590Cu; }
        if (ctx->pc != 0x30590Cu) { return; }
    }
    ctx->pc = 0x30590Cu;
label_30590c:
    // 0x30590c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30590cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_305910:
    // 0x305910: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x305910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_305914:
    // 0x305914: 0xae430df0  sw          $v1, 0xDF0($s2)
    ctx->pc = 0x305914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3568), GPR_U32(ctx, 3));
label_305918:
    // 0x305918: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x305918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_30591c:
    // 0x30591c: 0xae400df4  sw          $zero, 0xDF4($s2)
    ctx->pc = 0x30591cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3572), GPR_U32(ctx, 0));
label_305920:
    // 0x305920: 0x8e430db4  lw          $v1, 0xDB4($s2)
    ctx->pc = 0x305920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3508)));
label_305924:
    // 0x305924: 0x506200b6  beql        $v1, $v0, . + 4 + (0xB6 << 2)
label_305928:
    if (ctx->pc == 0x305928u) {
        ctx->pc = 0x305928u;
            // 0x305928: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x30592Cu;
        goto label_30592c;
    }
    ctx->pc = 0x305924u;
    {
        const bool branch_taken_0x305924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305924) {
            ctx->pc = 0x305928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305924u;
            // 0x305928: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305C00u;
            goto label_305c00;
        }
    }
    ctx->pc = 0x30592Cu;
label_30592c:
    // 0x30592c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x30592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_305930:
    // 0x305930: 0x5062009c  beql        $v1, $v0, . + 4 + (0x9C << 2)
label_305934:
    if (ctx->pc == 0x305934u) {
        ctx->pc = 0x305934u;
            // 0x305934: 0x8e4511c4  lw          $a1, 0x11C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4548)));
        ctx->pc = 0x305938u;
        goto label_305938;
    }
    ctx->pc = 0x305930u;
    {
        const bool branch_taken_0x305930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305930) {
            ctx->pc = 0x305934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305930u;
            // 0x305934: 0x8e4511c4  lw          $a1, 0x11C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4548)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305BA4u;
            goto label_305ba4;
        }
    }
    ctx->pc = 0x305938u;
label_305938:
    // 0x305938: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x305938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_30593c:
    // 0x30593c: 0x50620070  beql        $v1, $v0, . + 4 + (0x70 << 2)
label_305940:
    if (ctx->pc == 0x305940u) {
        ctx->pc = 0x305940u;
            // 0x305940: 0xc64c0880  lwc1        $f12, 0x880($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x305944u;
        goto label_305944;
    }
    ctx->pc = 0x30593Cu;
    {
        const bool branch_taken_0x30593c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30593c) {
            ctx->pc = 0x305940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30593Cu;
            // 0x305940: 0xc64c0880  lwc1        $f12, 0x880($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x305B00u;
            goto label_305b00;
        }
    }
    ctx->pc = 0x305944u;
label_305944:
    // 0x305944: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x305944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_305948:
    // 0x305948: 0x50620066  beql        $v1, $v0, . + 4 + (0x66 << 2)
label_30594c:
    if (ctx->pc == 0x30594Cu) {
        ctx->pc = 0x30594Cu;
            // 0x30594c: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->pc = 0x305950u;
        goto label_305950;
    }
    ctx->pc = 0x305948u;
    {
        const bool branch_taken_0x305948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305948) {
            ctx->pc = 0x30594Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305948u;
            // 0x30594c: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305AE4u;
            goto label_305ae4;
        }
    }
    ctx->pc = 0x305950u;
label_305950:
    // 0x305950: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x305950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_305954:
    // 0x305954: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
label_305958:
    if (ctx->pc == 0x305958u) {
        ctx->pc = 0x30595Cu;
        goto label_30595c;
    }
    ctx->pc = 0x305954u;
    {
        const bool branch_taken_0x305954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305954) {
            ctx->pc = 0x305A94u;
            goto label_305a94;
        }
    }
    ctx->pc = 0x30595Cu;
label_30595c:
    // 0x30595c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x30595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_305960:
    // 0x305960: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_305964:
    if (ctx->pc == 0x305964u) {
        ctx->pc = 0x305968u;
        goto label_305968;
    }
    ctx->pc = 0x305960u;
    {
        const bool branch_taken_0x305960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305960) {
            ctx->pc = 0x305A00u;
            goto label_305a00;
        }
    }
    ctx->pc = 0x305968u;
label_305968:
    // 0x305968: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x305968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_30596c:
    // 0x30596c: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
label_305970:
    if (ctx->pc == 0x305970u) {
        ctx->pc = 0x305970u;
            // 0x305970: 0x26440940  addiu       $a0, $s2, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
        ctx->pc = 0x305974u;
        goto label_305974;
    }
    ctx->pc = 0x30596Cu;
    {
        const bool branch_taken_0x30596c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30596c) {
            ctx->pc = 0x305970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30596Cu;
            // 0x305970: 0x26440940  addiu       $a0, $s2, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3059F0u;
            goto label_3059f0;
        }
    }
    ctx->pc = 0x305974u;
label_305974:
    // 0x305974: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x305974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_305978:
    // 0x305978: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_30597c:
    if (ctx->pc == 0x30597Cu) {
        ctx->pc = 0x30597Cu;
            // 0x30597c: 0x8e420e38  lw          $v0, 0xE38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
        ctx->pc = 0x305980u;
        goto label_305980;
    }
    ctx->pc = 0x305978u;
    {
        const bool branch_taken_0x305978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305978) {
            ctx->pc = 0x30597Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305978u;
            // 0x30597c: 0x8e420e38  lw          $v0, 0xE38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3059A0u;
            goto label_3059a0;
        }
    }
    ctx->pc = 0x305980u;
label_305980:
    // 0x305980: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x305980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_305984:
    // 0x305984: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_305988:
    if (ctx->pc == 0x305988u) {
        ctx->pc = 0x305988u;
            // 0x305988: 0x8e420d60  lw          $v0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x30598Cu;
        goto label_30598c;
    }
    ctx->pc = 0x305984u;
    {
        const bool branch_taken_0x305984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305984) {
            ctx->pc = 0x305988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305984u;
            // 0x305988: 0x8e420d60  lw          $v0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305994u;
            goto label_305994;
        }
    }
    ctx->pc = 0x30598Cu;
label_30598c:
    // 0x30598c: 0x1000009b  b           . + 4 + (0x9B << 2)
label_305990:
    if (ctx->pc == 0x305990u) {
        ctx->pc = 0x305994u;
        goto label_305994;
    }
    ctx->pc = 0x30598Cu;
    {
        const bool branch_taken_0x30598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30598c) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305994u;
label_305994:
    // 0x305994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305998:
    // 0x305998: 0x10000098  b           . + 4 + (0x98 << 2)
label_30599c:
    if (ctx->pc == 0x30599Cu) {
        ctx->pc = 0x30599Cu;
            // 0x30599c: 0xa043001c  sb          $v1, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3059A0u;
        goto label_3059a0;
    }
    ctx->pc = 0x305998u;
    {
        const bool branch_taken_0x305998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305998u;
            // 0x30599c: 0xa043001c  sb          $v1, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305998) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x3059A0u;
label_3059a0:
    // 0x3059a0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3059a0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3059a4:
    // 0x3059a4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3059a8:
    if (ctx->pc == 0x3059A8u) {
        ctx->pc = 0x3059A8u;
            // 0x3059a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3059ACu;
        goto label_3059ac;
    }
    ctx->pc = 0x3059A4u;
    {
        const bool branch_taken_0x3059a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3059A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3059A4u;
            // 0x3059a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059a4) {
            ctx->pc = 0x3059BCu;
            goto label_3059bc;
        }
    }
    ctx->pc = 0x3059ACu;
label_3059ac:
    // 0x3059ac: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3059acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3059b0:
    // 0x3059b0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3059b4:
    if (ctx->pc == 0x3059B4u) {
        ctx->pc = 0x3059B8u;
        goto label_3059b8;
    }
    ctx->pc = 0x3059B0u;
    {
        const bool branch_taken_0x3059b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3059b0) {
            ctx->pc = 0x3059BCu;
            goto label_3059bc;
        }
    }
    ctx->pc = 0x3059B8u;
label_3059b8:
    // 0x3059b8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3059b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3059bc:
    // 0x3059bc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3059c0:
    if (ctx->pc == 0x3059C0u) {
        ctx->pc = 0x3059C4u;
        goto label_3059c4;
    }
    ctx->pc = 0x3059BCu;
    {
        const bool branch_taken_0x3059bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3059bc) {
            ctx->pc = 0x3059D8u;
            goto label_3059d8;
        }
    }
    ctx->pc = 0x3059C4u;
label_3059c4:
    // 0x3059c4: 0xc075eb4  jal         func_1D7AD0
label_3059c8:
    if (ctx->pc == 0x3059C8u) {
        ctx->pc = 0x3059C8u;
            // 0x3059c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3059CCu;
        goto label_3059cc;
    }
    ctx->pc = 0x3059C4u;
    SET_GPR_U32(ctx, 31, 0x3059CCu);
    ctx->pc = 0x3059C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3059C4u;
            // 0x3059c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3059CCu; }
        if (ctx->pc != 0x3059CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3059CCu; }
        if (ctx->pc != 0x3059CCu) { return; }
    }
    ctx->pc = 0x3059CCu;
label_3059cc:
    // 0x3059cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3059d0:
    if (ctx->pc == 0x3059D0u) {
        ctx->pc = 0x3059D4u;
        goto label_3059d4;
    }
    ctx->pc = 0x3059CCu;
    {
        const bool branch_taken_0x3059cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3059cc) {
            ctx->pc = 0x3059D8u;
            goto label_3059d8;
        }
    }
    ctx->pc = 0x3059D4u;
label_3059d4:
    // 0x3059d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3059d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3059d8:
    // 0x3059d8: 0x12000088  beqz        $s0, . + 4 + (0x88 << 2)
label_3059dc:
    if (ctx->pc == 0x3059DCu) {
        ctx->pc = 0x3059E0u;
        goto label_3059e0;
    }
    ctx->pc = 0x3059D8u;
    {
        const bool branch_taken_0x3059d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3059d8) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x3059E0u;
label_3059e0:
    // 0x3059e0: 0xc072aaa  jal         func_1CAAA8
label_3059e4:
    if (ctx->pc == 0x3059E4u) {
        ctx->pc = 0x3059E4u;
            // 0x3059e4: 0x9244005c  lbu         $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x3059E8u;
        goto label_3059e8;
    }
    ctx->pc = 0x3059E0u;
    SET_GPR_U32(ctx, 31, 0x3059E8u);
    ctx->pc = 0x3059E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3059E0u;
            // 0x3059e4: 0x9244005c  lbu         $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3059E8u; }
        if (ctx->pc != 0x3059E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3059E8u; }
        if (ctx->pc != 0x3059E8u) { return; }
    }
    ctx->pc = 0x3059E8u;
label_3059e8:
    // 0x3059e8: 0x10000084  b           . + 4 + (0x84 << 2)
label_3059ec:
    if (ctx->pc == 0x3059ECu) {
        ctx->pc = 0x3059F0u;
        goto label_3059f0;
    }
    ctx->pc = 0x3059E8u;
    {
        const bool branch_taken_0x3059e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3059e8) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x3059F0u;
label_3059f0:
    // 0x3059f0: 0xc142b94  jal         func_50AE50
label_3059f4:
    if (ctx->pc == 0x3059F4u) {
        ctx->pc = 0x3059F8u;
        goto label_3059f8;
    }
    ctx->pc = 0x3059F0u;
    SET_GPR_U32(ctx, 31, 0x3059F8u);
    ctx->pc = 0x50AE50u;
    if (runtime->hasFunction(0x50AE50u)) {
        auto targetFn = runtime->lookupFunction(0x50AE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3059F8u; }
        if (ctx->pc != 0x3059F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050AE50_0x50ae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3059F8u; }
        if (ctx->pc != 0x3059F8u) { return; }
    }
    ctx->pc = 0x3059F8u;
label_3059f8:
    // 0x3059f8: 0x10000080  b           . + 4 + (0x80 << 2)
label_3059fc:
    if (ctx->pc == 0x3059FCu) {
        ctx->pc = 0x305A00u;
        goto label_305a00;
    }
    ctx->pc = 0x3059F8u;
    {
        const bool branch_taken_0x3059f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3059f8) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305A00u;
label_305a00:
    // 0x305a00: 0x1222007e  beq         $s1, $v0, . + 4 + (0x7E << 2)
label_305a04:
    if (ctx->pc == 0x305A04u) {
        ctx->pc = 0x305A08u;
        goto label_305a08;
    }
    ctx->pc = 0x305A00u;
    {
        const bool branch_taken_0x305a00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x305a00) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305A08u;
label_305a08:
    // 0x305a08: 0xc0b6764  jal         func_2D9D90
label_305a0c:
    if (ctx->pc == 0x305A0Cu) {
        ctx->pc = 0x305A0Cu;
            // 0x305a0c: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->pc = 0x305A10u;
        goto label_305a10;
    }
    ctx->pc = 0x305A08u;
    SET_GPR_U32(ctx, 31, 0x305A10u);
    ctx->pc = 0x305A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305A08u;
            // 0x305a0c: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A10u; }
        if (ctx->pc != 0x305A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A10u; }
        if (ctx->pc != 0x305A10u) { return; }
    }
    ctx->pc = 0x305A10u;
label_305a10:
    // 0x305a10: 0xc0bfb18  jal         func_2FEC60
label_305a14:
    if (ctx->pc == 0x305A14u) {
        ctx->pc = 0x305A14u;
            // 0x305a14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305A18u;
        goto label_305a18;
    }
    ctx->pc = 0x305A10u;
    SET_GPR_U32(ctx, 31, 0x305A18u);
    ctx->pc = 0x305A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305A10u;
            // 0x305a14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FEC60u;
    if (runtime->hasFunction(0x2FEC60u)) {
        auto targetFn = runtime->lookupFunction(0x2FEC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A18u; }
        if (ctx->pc != 0x305A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FEC60_0x2fec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A18u; }
        if (ctx->pc != 0x305A18u) { return; }
    }
    ctx->pc = 0x305A18u;
label_305a18:
    // 0x305a18: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x305a18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_305a1c:
    // 0x305a1c: 0x3a22001b  xori        $v0, $s1, 0x1B
    ctx->pc = 0x305a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)27);
label_305a20:
    // 0x305a20: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x305a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_305a24:
    // 0x305a24: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x305a24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_305a28:
    // 0x305a28: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x305a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_305a2c:
    // 0x305a2c: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x305a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_305a30:
    // 0x305a30: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x305a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_305a34:
    // 0x305a34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x305a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_305a38:
    // 0x305a38: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_305a3c:
    if (ctx->pc == 0x305A3Cu) {
        ctx->pc = 0x305A3Cu;
            // 0x305a3c: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x305A40u;
        goto label_305a40;
    }
    ctx->pc = 0x305A38u;
    {
        const bool branch_taken_0x305a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a38) {
            ctx->pc = 0x305A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305A38u;
            // 0x305a3c: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305A60u;
            goto label_305a60;
        }
    }
    ctx->pc = 0x305A40u;
label_305a40:
    // 0x305a40: 0x8e440d70  lw          $a0, 0xD70($s2)
    ctx->pc = 0x305a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_305a44:
    // 0x305a44: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x305a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_305a48:
    // 0x305a48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305a4c:
    // 0x305a4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x305a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305a50:
    // 0x305a50: 0xc0bdf94  jal         func_2F7E50
label_305a54:
    if (ctx->pc == 0x305A54u) {
        ctx->pc = 0x305A54u;
            // 0x305a54: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x305A58u;
        goto label_305a58;
    }
    ctx->pc = 0x305A50u;
    SET_GPR_U32(ctx, 31, 0x305A58u);
    ctx->pc = 0x305A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305A50u;
            // 0x305a54: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A58u; }
        if (ctx->pc != 0x305A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A58u; }
        if (ctx->pc != 0x305A58u) { return; }
    }
    ctx->pc = 0x305A58u;
label_305a58:
    // 0x305a58: 0x10000068  b           . + 4 + (0x68 << 2)
label_305a5c:
    if (ctx->pc == 0x305A5Cu) {
        ctx->pc = 0x305A60u;
        goto label_305a60;
    }
    ctx->pc = 0x305A58u;
    {
        const bool branch_taken_0x305a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a58) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305A60u;
label_305a60:
    // 0x305a60: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x305a60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_305a64:
    // 0x305a64: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_305a68:
    if (ctx->pc == 0x305A68u) {
        ctx->pc = 0x305A68u;
            // 0x305a68: 0x8e420d70  lw          $v0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->pc = 0x305A6Cu;
        goto label_305a6c;
    }
    ctx->pc = 0x305A64u;
    {
        const bool branch_taken_0x305a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a64) {
            ctx->pc = 0x305A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305A64u;
            // 0x305a68: 0x8e420d70  lw          $v0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305A8Cu;
            goto label_305a8c;
        }
    }
    ctx->pc = 0x305A6Cu;
label_305a6c:
    // 0x305a6c: 0x8e440d70  lw          $a0, 0xD70($s2)
    ctx->pc = 0x305a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_305a70:
    // 0x305a70: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x305a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_305a74:
    // 0x305a74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305a78:
    // 0x305a78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x305a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305a7c:
    // 0x305a7c: 0xc0bdf94  jal         func_2F7E50
label_305a80:
    if (ctx->pc == 0x305A80u) {
        ctx->pc = 0x305A80u;
            // 0x305a80: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x305A84u;
        goto label_305a84;
    }
    ctx->pc = 0x305A7Cu;
    SET_GPR_U32(ctx, 31, 0x305A84u);
    ctx->pc = 0x305A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305A7Cu;
            // 0x305a80: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A84u; }
        if (ctx->pc != 0x305A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305A84u; }
        if (ctx->pc != 0x305A84u) { return; }
    }
    ctx->pc = 0x305A84u;
label_305a84:
    // 0x305a84: 0x1000005d  b           . + 4 + (0x5D << 2)
label_305a88:
    if (ctx->pc == 0x305A88u) {
        ctx->pc = 0x305A8Cu;
        goto label_305a8c;
    }
    ctx->pc = 0x305A84u;
    {
        const bool branch_taken_0x305a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a84) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305A8Cu;
label_305a8c:
    // 0x305a8c: 0x1000005b  b           . + 4 + (0x5B << 2)
label_305a90:
    if (ctx->pc == 0x305A90u) {
        ctx->pc = 0x305A90u;
            // 0x305a90: 0xa04000dd  sb          $zero, 0xDD($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 221), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x305A94u;
        goto label_305a94;
    }
    ctx->pc = 0x305A8Cu;
    {
        const bool branch_taken_0x305a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305A8Cu;
            // 0x305a90: 0xa04000dd  sb          $zero, 0xDD($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 221), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a8c) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305A94u;
label_305a94:
    // 0x305a94: 0x12220059  beq         $s1, $v0, . + 4 + (0x59 << 2)
label_305a98:
    if (ctx->pc == 0x305A98u) {
        ctx->pc = 0x305A9Cu;
        goto label_305a9c;
    }
    ctx->pc = 0x305A94u;
    {
        const bool branch_taken_0x305a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x305a94) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305A9Cu;
label_305a9c:
    // 0x305a9c: 0xc0754b4  jal         func_1D52D0
label_305aa0:
    if (ctx->pc == 0x305AA0u) {
        ctx->pc = 0x305AA0u;
            // 0x305aa0: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x305AA4u;
        goto label_305aa4;
    }
    ctx->pc = 0x305A9Cu;
    SET_GPR_U32(ctx, 31, 0x305AA4u);
    ctx->pc = 0x305AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305A9Cu;
            // 0x305aa0: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305AA4u; }
        if (ctx->pc != 0x305AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305AA4u; }
        if (ctx->pc != 0x305AA4u) { return; }
    }
    ctx->pc = 0x305AA4u;
label_305aa4:
    // 0x305aa4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x305aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_305aa8:
    // 0x305aa8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x305aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_305aac:
    // 0x305aac: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
label_305ab0:
    if (ctx->pc == 0x305AB0u) {
        ctx->pc = 0x305AB0u;
            // 0x305ab0: 0xae400e10  sw          $zero, 0xE10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3600), GPR_U32(ctx, 0));
        ctx->pc = 0x305AB4u;
        goto label_305ab4;
    }
    ctx->pc = 0x305AACu;
    {
        const bool branch_taken_0x305aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305aac) {
            ctx->pc = 0x305AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305AACu;
            // 0x305ab0: 0xae400e10  sw          $zero, 0xE10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305AB4u;
label_305ab4:
    // 0x305ab4: 0xc040180  jal         func_100600
label_305ab8:
    if (ctx->pc == 0x305AB8u) {
        ctx->pc = 0x305AB8u;
            // 0x305ab8: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x305ABCu;
        goto label_305abc;
    }
    ctx->pc = 0x305AB4u;
    SET_GPR_U32(ctx, 31, 0x305ABCu);
    ctx->pc = 0x305AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305AB4u;
            // 0x305ab8: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305ABCu; }
        if (ctx->pc != 0x305ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305ABCu; }
        if (ctx->pc != 0x305ABCu) { return; }
    }
    ctx->pc = 0x305ABCu;
label_305abc:
    // 0x305abc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_305ac0:
    if (ctx->pc == 0x305AC0u) {
        ctx->pc = 0x305AC4u;
        goto label_305ac4;
    }
    ctx->pc = 0x305ABCu;
    {
        const bool branch_taken_0x305abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305abc) {
            ctx->pc = 0x305AD8u;
            goto label_305ad8;
        }
    }
    ctx->pc = 0x305AC4u;
label_305ac4:
    // 0x305ac4: 0x8e450d98  lw          $a1, 0xD98($s2)
    ctx->pc = 0x305ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_305ac8:
    // 0x305ac8: 0xc64c0a80  lwc1        $f12, 0xA80($s2)
    ctx->pc = 0x305ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_305acc:
    // 0x305acc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x305accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305ad0:
    // 0x305ad0: 0xc11ebc4  jal         func_47AF10
label_305ad4:
    if (ctx->pc == 0x305AD4u) {
        ctx->pc = 0x305AD4u;
            // 0x305ad4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x305AD8u;
        goto label_305ad8;
    }
    ctx->pc = 0x305AD0u;
    SET_GPR_U32(ctx, 31, 0x305AD8u);
    ctx->pc = 0x305AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305AD0u;
            // 0x305ad4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305AD8u; }
        if (ctx->pc != 0x305AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305AD8u; }
        if (ctx->pc != 0x305AD8u) { return; }
    }
    ctx->pc = 0x305AD8u;
label_305ad8:
    // 0x305ad8: 0xae400e10  sw          $zero, 0xE10($s2)
    ctx->pc = 0x305ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3600), GPR_U32(ctx, 0));
label_305adc:
    // 0x305adc: 0x10000047  b           . + 4 + (0x47 << 2)
label_305ae0:
    if (ctx->pc == 0x305AE0u) {
        ctx->pc = 0x305AE4u;
        goto label_305ae4;
    }
    ctx->pc = 0x305ADCu;
    {
        const bool branch_taken_0x305adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305adc) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305AE4u;
label_305ae4:
    // 0x305ae4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x305ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_305ae8:
    // 0x305ae8: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
label_305aec:
    if (ctx->pc == 0x305AECu) {
        ctx->pc = 0x305AF0u;
        goto label_305af0;
    }
    ctx->pc = 0x305AE8u;
    {
        const bool branch_taken_0x305ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305ae8) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305AF0u;
label_305af0:
    // 0x305af0: 0xc0c1c04  jal         func_307010
label_305af4:
    if (ctx->pc == 0x305AF4u) {
        ctx->pc = 0x305AF4u;
            // 0x305af4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305AF8u;
        goto label_305af8;
    }
    ctx->pc = 0x305AF0u;
    SET_GPR_U32(ctx, 31, 0x305AF8u);
    ctx->pc = 0x305AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305AF0u;
            // 0x305af4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307010u;
    if (runtime->hasFunction(0x307010u)) {
        auto targetFn = runtime->lookupFunction(0x307010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305AF8u; }
        if (ctx->pc != 0x305AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307010_0x307010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305AF8u; }
        if (ctx->pc != 0x305AF8u) { return; }
    }
    ctx->pc = 0x305AF8u;
label_305af8:
    // 0x305af8: 0x10000040  b           . + 4 + (0x40 << 2)
label_305afc:
    if (ctx->pc == 0x305AFCu) {
        ctx->pc = 0x305B00u;
        goto label_305b00;
    }
    ctx->pc = 0x305AF8u;
    {
        const bool branch_taken_0x305af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305af8) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305B00u;
label_305b00:
    // 0x305b00: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x305b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
label_305b04:
    // 0x305b04: 0xc0c753c  jal         func_31D4F0
label_305b08:
    if (ctx->pc == 0x305B08u) {
        ctx->pc = 0x305B08u;
            // 0x305b08: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x305B0Cu;
        goto label_305b0c;
    }
    ctx->pc = 0x305B04u;
    SET_GPR_U32(ctx, 31, 0x305B0Cu);
    ctx->pc = 0x305B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305B04u;
            // 0x305b08: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B0Cu; }
        if (ctx->pc != 0x305B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B0Cu; }
        if (ctx->pc != 0x305B0Cu) { return; }
    }
    ctx->pc = 0x305B0Cu;
label_305b0c:
    // 0x305b0c: 0x8e420d9c  lw          $v0, 0xD9C($s2)
    ctx->pc = 0x305b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_305b10:
    // 0x305b10: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x305b10u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_305b14:
    // 0x305b14: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x305b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_305b18:
    // 0x305b18: 0xae420d9c  sw          $v0, 0xD9C($s2)
    ctx->pc = 0x305b18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3484), GPR_U32(ctx, 2));
label_305b1c:
    // 0x305b1c: 0xae400af4  sw          $zero, 0xAF4($s2)
    ctx->pc = 0x305b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2804), GPR_U32(ctx, 0));
label_305b20:
    // 0x305b20: 0xae400af8  sw          $zero, 0xAF8($s2)
    ctx->pc = 0x305b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2808), GPR_U32(ctx, 0));
label_305b24:
    // 0x305b24: 0xae400b00  sw          $zero, 0xB00($s2)
    ctx->pc = 0x305b24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2816), GPR_U32(ctx, 0));
label_305b28:
    // 0x305b28: 0x8e420e38  lw          $v0, 0xE38($s2)
    ctx->pc = 0x305b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_305b2c:
    // 0x305b2c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_305b30:
    if (ctx->pc == 0x305B30u) {
        ctx->pc = 0x305B30u;
            // 0x305b30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305B34u;
        goto label_305b34;
    }
    ctx->pc = 0x305B2Cu;
    {
        const bool branch_taken_0x305b2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x305B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305B2Cu;
            // 0x305b30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b2c) {
            ctx->pc = 0x305B44u;
            goto label_305b44;
        }
    }
    ctx->pc = 0x305B34u;
label_305b34:
    // 0x305b34: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x305b34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_305b38:
    // 0x305b38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_305b3c:
    if (ctx->pc == 0x305B3Cu) {
        ctx->pc = 0x305B40u;
        goto label_305b40;
    }
    ctx->pc = 0x305B38u;
    {
        const bool branch_taken_0x305b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x305b38) {
            ctx->pc = 0x305B44u;
            goto label_305b44;
        }
    }
    ctx->pc = 0x305B40u;
label_305b40:
    // 0x305b40: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x305b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305b44:
    // 0x305b44: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_305b48:
    if (ctx->pc == 0x305B48u) {
        ctx->pc = 0x305B4Cu;
        goto label_305b4c;
    }
    ctx->pc = 0x305B44u;
    {
        const bool branch_taken_0x305b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305b44) {
            ctx->pc = 0x305B60u;
            goto label_305b60;
        }
    }
    ctx->pc = 0x305B4Cu;
label_305b4c:
    // 0x305b4c: 0xc075eb4  jal         func_1D7AD0
label_305b50:
    if (ctx->pc == 0x305B50u) {
        ctx->pc = 0x305B50u;
            // 0x305b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305B54u;
        goto label_305b54;
    }
    ctx->pc = 0x305B4Cu;
    SET_GPR_U32(ctx, 31, 0x305B54u);
    ctx->pc = 0x305B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305B4Cu;
            // 0x305b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B54u; }
        if (ctx->pc != 0x305B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B54u; }
        if (ctx->pc != 0x305B54u) { return; }
    }
    ctx->pc = 0x305B54u;
label_305b54:
    // 0x305b54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_305b58:
    if (ctx->pc == 0x305B58u) {
        ctx->pc = 0x305B5Cu;
        goto label_305b5c;
    }
    ctx->pc = 0x305B54u;
    {
        const bool branch_taken_0x305b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305b54) {
            ctx->pc = 0x305B60u;
            goto label_305b60;
        }
    }
    ctx->pc = 0x305B5Cu;
label_305b5c:
    // 0x305b5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x305b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305b60:
    // 0x305b60: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_305b64:
    if (ctx->pc == 0x305B64u) {
        ctx->pc = 0x305B68u;
        goto label_305b68;
    }
    ctx->pc = 0x305B60u;
    {
        const bool branch_taken_0x305b60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305b60) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305B68u;
label_305b68:
    // 0x305b68: 0xc072b78  jal         func_1CADE0
label_305b6c:
    if (ctx->pc == 0x305B6Cu) {
        ctx->pc = 0x305B6Cu;
            // 0x305b6c: 0x92440088  lbu         $a0, 0x88($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->pc = 0x305B70u;
        goto label_305b70;
    }
    ctx->pc = 0x305B68u;
    SET_GPR_U32(ctx, 31, 0x305B70u);
    ctx->pc = 0x305B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305B68u;
            // 0x305b6c: 0x92440088  lbu         $a0, 0x88($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B70u; }
        if (ctx->pc != 0x305B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B70u; }
        if (ctx->pc != 0x305B70u) { return; }
    }
    ctx->pc = 0x305B70u;
label_305b70:
    // 0x305b70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_305b74:
    if (ctx->pc == 0x305B74u) {
        ctx->pc = 0x305B74u;
            // 0x305b74: 0x9244008c  lbu         $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->pc = 0x305B78u;
        goto label_305b78;
    }
    ctx->pc = 0x305B70u;
    {
        const bool branch_taken_0x305b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305b70) {
            ctx->pc = 0x305B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305B70u;
            // 0x305b74: 0x9244008c  lbu         $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305B84u;
            goto label_305b84;
        }
    }
    ctx->pc = 0x305B78u;
label_305b78:
    // 0x305b78: 0xc072aaa  jal         func_1CAAA8
label_305b7c:
    if (ctx->pc == 0x305B7Cu) {
        ctx->pc = 0x305B7Cu;
            // 0x305b7c: 0x92440088  lbu         $a0, 0x88($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->pc = 0x305B80u;
        goto label_305b80;
    }
    ctx->pc = 0x305B78u;
    SET_GPR_U32(ctx, 31, 0x305B80u);
    ctx->pc = 0x305B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305B78u;
            // 0x305b7c: 0x92440088  lbu         $a0, 0x88($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B80u; }
        if (ctx->pc != 0x305B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B80u; }
        if (ctx->pc != 0x305B80u) { return; }
    }
    ctx->pc = 0x305B80u;
label_305b80:
    // 0x305b80: 0x9244008c  lbu         $a0, 0x8C($s2)
    ctx->pc = 0x305b80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
label_305b84:
    // 0x305b84: 0xc072b78  jal         func_1CADE0
label_305b88:
    if (ctx->pc == 0x305B88u) {
        ctx->pc = 0x305B8Cu;
        goto label_305b8c;
    }
    ctx->pc = 0x305B84u;
    SET_GPR_U32(ctx, 31, 0x305B8Cu);
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B8Cu; }
        if (ctx->pc != 0x305B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B8Cu; }
        if (ctx->pc != 0x305B8Cu) { return; }
    }
    ctx->pc = 0x305B8Cu;
label_305b8c:
    // 0x305b8c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_305b90:
    if (ctx->pc == 0x305B90u) {
        ctx->pc = 0x305B94u;
        goto label_305b94;
    }
    ctx->pc = 0x305B8Cu;
    {
        const bool branch_taken_0x305b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305b8c) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305B94u;
label_305b94:
    // 0x305b94: 0xc072aaa  jal         func_1CAAA8
label_305b98:
    if (ctx->pc == 0x305B98u) {
        ctx->pc = 0x305B98u;
            // 0x305b98: 0x9244008c  lbu         $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->pc = 0x305B9Cu;
        goto label_305b9c;
    }
    ctx->pc = 0x305B94u;
    SET_GPR_U32(ctx, 31, 0x305B9Cu);
    ctx->pc = 0x305B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305B94u;
            // 0x305b98: 0x9244008c  lbu         $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B9Cu; }
        if (ctx->pc != 0x305B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B9Cu; }
        if (ctx->pc != 0x305B9Cu) { return; }
    }
    ctx->pc = 0x305B9Cu;
label_305b9c:
    // 0x305b9c: 0x10000017  b           . + 4 + (0x17 << 2)
label_305ba0:
    if (ctx->pc == 0x305BA0u) {
        ctx->pc = 0x305BA4u;
        goto label_305ba4;
    }
    ctx->pc = 0x305B9Cu;
    {
        const bool branch_taken_0x305b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305b9c) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305BA4u;
label_305ba4:
    // 0x305ba4: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_305ba8:
    if (ctx->pc == 0x305BA8u) {
        ctx->pc = 0x305BA8u;
            // 0x305ba8: 0x8e4511c8  lw          $a1, 0x11C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
        ctx->pc = 0x305BACu;
        goto label_305bac;
    }
    ctx->pc = 0x305BA4u;
    {
        const bool branch_taken_0x305ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x305ba4) {
            ctx->pc = 0x305BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305BA4u;
            // 0x305ba8: 0x8e4511c8  lw          $a1, 0x11C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305BC4u;
            goto label_305bc4;
        }
    }
    ctx->pc = 0x305BACu;
label_305bac:
    // 0x305bac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x305bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_305bb0:
    // 0x305bb0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x305bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_305bb4:
    // 0x305bb4: 0xc057b7c  jal         func_15EDF0
label_305bb8:
    if (ctx->pc == 0x305BB8u) {
        ctx->pc = 0x305BB8u;
            // 0x305bb8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x305BBCu;
        goto label_305bbc;
    }
    ctx->pc = 0x305BB4u;
    SET_GPR_U32(ctx, 31, 0x305BBCu);
    ctx->pc = 0x305BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305BB4u;
            // 0x305bb8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BBCu; }
        if (ctx->pc != 0x305BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BBCu; }
        if (ctx->pc != 0x305BBCu) { return; }
    }
    ctx->pc = 0x305BBCu;
label_305bbc:
    // 0x305bbc: 0xae4011c4  sw          $zero, 0x11C4($s2)
    ctx->pc = 0x305bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4548), GPR_U32(ctx, 0));
label_305bc0:
    // 0x305bc0: 0x8e4511c8  lw          $a1, 0x11C8($s2)
    ctx->pc = 0x305bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
label_305bc4:
    // 0x305bc4: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_305bc8:
    if (ctx->pc == 0x305BC8u) {
        ctx->pc = 0x305BC8u;
            // 0x305bc8: 0xa24011cc  sb          $zero, 0x11CC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4556), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x305BCCu;
        goto label_305bcc;
    }
    ctx->pc = 0x305BC4u;
    {
        const bool branch_taken_0x305bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x305bc4) {
            ctx->pc = 0x305BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305BC4u;
            // 0x305bc8: 0xa24011cc  sb          $zero, 0x11CC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4556), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305BE4u;
            goto label_305be4;
        }
    }
    ctx->pc = 0x305BCCu;
label_305bcc:
    // 0x305bcc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x305bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_305bd0:
    // 0x305bd0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x305bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_305bd4:
    // 0x305bd4: 0xc057b7c  jal         func_15EDF0
label_305bd8:
    if (ctx->pc == 0x305BD8u) {
        ctx->pc = 0x305BD8u;
            // 0x305bd8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x305BDCu;
        goto label_305bdc;
    }
    ctx->pc = 0x305BD4u;
    SET_GPR_U32(ctx, 31, 0x305BDCu);
    ctx->pc = 0x305BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305BD4u;
            // 0x305bd8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BDCu; }
        if (ctx->pc != 0x305BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BDCu; }
        if (ctx->pc != 0x305BDCu) { return; }
    }
    ctx->pc = 0x305BDCu;
label_305bdc:
    // 0x305bdc: 0xae4011c8  sw          $zero, 0x11C8($s2)
    ctx->pc = 0x305bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4552), GPR_U32(ctx, 0));
label_305be0:
    // 0x305be0: 0xa24011cc  sb          $zero, 0x11CC($s2)
    ctx->pc = 0x305be0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4556), (uint8_t)GPR_U32(ctx, 0));
label_305be4:
    // 0x305be4: 0xc072b78  jal         func_1CADE0
label_305be8:
    if (ctx->pc == 0x305BE8u) {
        ctx->pc = 0x305BE8u;
            // 0x305be8: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->pc = 0x305BECu;
        goto label_305bec;
    }
    ctx->pc = 0x305BE4u;
    SET_GPR_U32(ctx, 31, 0x305BECu);
    ctx->pc = 0x305BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305BE4u;
            // 0x305be8: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BECu; }
        if (ctx->pc != 0x305BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BECu; }
        if (ctx->pc != 0x305BECu) { return; }
    }
    ctx->pc = 0x305BECu;
label_305bec:
    // 0x305bec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_305bf0:
    if (ctx->pc == 0x305BF0u) {
        ctx->pc = 0x305BF4u;
        goto label_305bf4;
    }
    ctx->pc = 0x305BECu;
    {
        const bool branch_taken_0x305bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305bec) {
            ctx->pc = 0x305BFCu;
            goto label_305bfc;
        }
    }
    ctx->pc = 0x305BF4u;
label_305bf4:
    // 0x305bf4: 0xc072aaa  jal         func_1CAAA8
label_305bf8:
    if (ctx->pc == 0x305BF8u) {
        ctx->pc = 0x305BF8u;
            // 0x305bf8: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->pc = 0x305BFCu;
        goto label_305bfc;
    }
    ctx->pc = 0x305BF4u;
    SET_GPR_U32(ctx, 31, 0x305BFCu);
    ctx->pc = 0x305BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305BF4u;
            // 0x305bf8: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BFCu; }
        if (ctx->pc != 0x305BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BFCu; }
        if (ctx->pc != 0x305BFCu) { return; }
    }
    ctx->pc = 0x305BFCu;
label_305bfc:
    // 0x305bfc: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x305bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_305c00:
    // 0x305c00: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x305c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_305c04:
    // 0x305c04: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x305c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_305c08:
    // 0x305c08: 0x244227c0  addiu       $v0, $v0, 0x27C0
    ctx->pc = 0x305c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10176));
label_305c0c:
    // 0x305c0c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x305c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_305c10:
    // 0x305c10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x305c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_305c14:
    // 0x305c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x305c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_305c18:
    // 0x305c18: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x305c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_305c1c:
    // 0x305c1c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x305c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_305c20:
    // 0x305c20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x305c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_305c24:
    // 0x305c24: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x305c24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_305c28:
    // 0x305c28: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x305c28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_305c2c:
    // 0x305c2c: 0xc0408ec  jal         func_1023B0
label_305c30:
    if (ctx->pc == 0x305C30u) {
        ctx->pc = 0x305C30u;
            // 0x305c30: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->pc = 0x305C34u;
        goto label_305c34;
    }
    ctx->pc = 0x305C2Cu;
    SET_GPR_U32(ctx, 31, 0x305C34u);
    ctx->pc = 0x305C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305C2Cu;
            // 0x305c30: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023B0u;
    if (runtime->hasFunction(0x1023B0u)) {
        auto targetFn = runtime->lookupFunction(0x1023B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C34u; }
        if (ctx->pc != 0x305C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001023B0_0x1023b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C34u; }
        if (ctx->pc != 0x305C34u) { return; }
    }
    ctx->pc = 0x305C34u;
label_305c34:
    // 0x305c34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_305c38:
    if (ctx->pc == 0x305C38u) {
        ctx->pc = 0x305C38u;
            // 0x305c38: 0x8e440db4  lw          $a0, 0xDB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3508)));
        ctx->pc = 0x305C3Cu;
        goto label_305c3c;
    }
    ctx->pc = 0x305C34u;
    {
        const bool branch_taken_0x305c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305c34) {
            ctx->pc = 0x305C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305C34u;
            // 0x305c38: 0x8e440db4  lw          $a0, 0xDB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3508)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305C4Cu;
            goto label_305c4c;
        }
    }
    ctx->pc = 0x305C3Cu;
label_305c3c:
    // 0x305c3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x305c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_305c40:
    // 0x305c40: 0xc0408c8  jal         func_102320
label_305c44:
    if (ctx->pc == 0x305C44u) {
        ctx->pc = 0x305C44u;
            // 0x305c44: 0x27b90040  addiu       $t9, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x305C48u;
        goto label_305c48;
    }
    ctx->pc = 0x305C40u;
    SET_GPR_U32(ctx, 31, 0x305C48u);
    ctx->pc = 0x305C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305C40u;
            // 0x305c44: 0x27b90040  addiu       $t9, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C48u; }
        if (ctx->pc != 0x305C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C48u; }
        if (ctx->pc != 0x305C48u) { return; }
    }
    ctx->pc = 0x305C48u;
label_305c48:
    // 0x305c48: 0x8e440db4  lw          $a0, 0xDB4($s2)
    ctx->pc = 0x305c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3508)));
label_305c4c:
    // 0x305c4c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x305c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_305c50:
    // 0x305c50: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_305c54:
    if (ctx->pc == 0x305C54u) {
        ctx->pc = 0x305C54u;
            // 0x305c54: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x305C58u;
        goto label_305c58;
    }
    ctx->pc = 0x305C50u;
    {
        const bool branch_taken_0x305c50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x305c50) {
            ctx->pc = 0x305C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305C50u;
            // 0x305c54: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305C60u;
            goto label_305c60;
        }
    }
    ctx->pc = 0x305C58u;
label_305c58:
    // 0x305c58: 0xae4009ec  sw          $zero, 0x9EC($s2)
    ctx->pc = 0x305c58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2540), GPR_U32(ctx, 0));
label_305c5c:
    // 0x305c5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x305c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_305c60:
    // 0x305c60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x305c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_305c64:
    // 0x305c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x305c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_305c68:
    // 0x305c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x305c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_305c6c:
    // 0x305c6c: 0x3e00008  jr          $ra
label_305c70:
    if (ctx->pc == 0x305C70u) {
        ctx->pc = 0x305C70u;
            // 0x305c70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x305C74u;
        goto label_305c74;
    }
    ctx->pc = 0x305C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305C6Cu;
            // 0x305c70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305C74u;
label_305c74:
    // 0x305c74: 0x0  nop
    ctx->pc = 0x305c74u;
    // NOP
label_305c78:
    // 0x305c78: 0x0  nop
    ctx->pc = 0x305c78u;
    // NOP
label_305c7c:
    // 0x305c7c: 0x0  nop
    ctx->pc = 0x305c7cu;
    // NOP
label_305c80:
    // 0x305c80: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x305c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_305c84:
    // 0x305c84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x305c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_305c88:
    // 0x305c88: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x305c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_305c8c:
    // 0x305c8c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x305c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_305c90:
    // 0x305c90: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x305c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_305c94:
    // 0x305c94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x305c94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_305c98:
    // 0x305c98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x305c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_305c9c:
    // 0x305c9c: 0x26a40440  addiu       $a0, $s5, 0x440
    ctx->pc = 0x305c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1088));
label_305ca0:
    // 0x305ca0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x305ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_305ca4:
    // 0x305ca4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x305ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_305ca8:
    // 0x305ca8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x305ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_305cac:
    // 0x305cac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x305cacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_305cb0:
    // 0x305cb0: 0xc0754b4  jal         func_1D52D0
label_305cb4:
    if (ctx->pc == 0x305CB4u) {
        ctx->pc = 0x305CB4u;
            // 0x305cb4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x305CB8u;
        goto label_305cb8;
    }
    ctx->pc = 0x305CB0u;
    SET_GPR_U32(ctx, 31, 0x305CB8u);
    ctx->pc = 0x305CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305CB0u;
            // 0x305cb4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CB8u; }
        if (ctx->pc != 0x305CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CB8u; }
        if (ctx->pc != 0x305CB8u) { return; }
    }
    ctx->pc = 0x305CB8u;
label_305cb8:
    // 0x305cb8: 0x8ea30d60  lw          $v1, 0xD60($s5)
    ctx->pc = 0x305cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
label_305cbc:
    // 0x305cbc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x305cbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305cc0:
    // 0x305cc0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x305cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_305cc4:
    // 0x305cc4: 0x8eb40550  lw          $s4, 0x550($s5)
    ctx->pc = 0x305cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1360)));
label_305cc8:
    // 0x305cc8: 0xc6a00e1c  lwc1        $f0, 0xE1C($s5)
    ctx->pc = 0x305cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_305ccc:
    // 0x305ccc: 0x26b00580  addiu       $s0, $s5, 0x580
    ctx->pc = 0x305cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1408));
label_305cd0:
    // 0x305cd0: 0x24710020  addiu       $s1, $v1, 0x20
    ctx->pc = 0x305cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_305cd4:
    // 0x305cd4: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x305cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_305cd8:
    // 0x305cd8: 0xc4740018  lwc1        $f20, 0x18($v1)
    ctx->pc = 0x305cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_305cdc:
    // 0x305cdc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x305cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_305ce0:
    // 0x305ce0: 0xe6a00de4  swc1        $f0, 0xDE4($s5)
    ctx->pc = 0x305ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3556), bits); }
label_305ce4:
    // 0x305ce4: 0x8ea30d60  lw          $v1, 0xD60($s5)
    ctx->pc = 0x305ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
label_305ce8:
    // 0x305ce8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x305ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_305cec:
    // 0x305cec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x305cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_305cf0:
    // 0x305cf0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_305cf4:
    if (ctx->pc == 0x305CF4u) {
        ctx->pc = 0x305CF4u;
            // 0x305cf4: 0x26b30c50  addiu       $s3, $s5, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 3152));
        ctx->pc = 0x305CF8u;
        goto label_305cf8;
    }
    ctx->pc = 0x305CF0u;
    {
        const bool branch_taken_0x305cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305CF0u;
            // 0x305cf4: 0x26b30c50  addiu       $s3, $s5, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 3152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305cf0) {
            ctx->pc = 0x305D18u;
            goto label_305d18;
        }
    }
    ctx->pc = 0x305CF8u;
label_305cf8:
    // 0x305cf8: 0x8ea20e30  lw          $v0, 0xE30($s5)
    ctx->pc = 0x305cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
label_305cfc:
    // 0x305cfc: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
label_305d00:
    if (ctx->pc == 0x305D00u) {
        ctx->pc = 0x305D00u;
            // 0x305d00: 0x26a402e0  addiu       $a0, $s5, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 736));
        ctx->pc = 0x305D04u;
        goto label_305d04;
    }
    ctx->pc = 0x305CFCu;
    {
        const bool branch_taken_0x305cfc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x305cfc) {
            ctx->pc = 0x305D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305CFCu;
            // 0x305d00: 0x26a402e0  addiu       $a0, $s5, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 736));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305D1Cu;
            goto label_305d1c;
        }
    }
    ctx->pc = 0x305D04u;
label_305d04:
    // 0x305d04: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x305d04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_305d08:
    // 0x305d08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_305d0c:
    if (ctx->pc == 0x305D0Cu) {
        ctx->pc = 0x305D10u;
        goto label_305d10;
    }
    ctx->pc = 0x305D08u;
    {
        const bool branch_taken_0x305d08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x305d08) {
            ctx->pc = 0x305D18u;
            goto label_305d18;
        }
    }
    ctx->pc = 0x305D10u;
label_305d10:
    // 0x305d10: 0xc0c1c38  jal         func_3070E0
label_305d14:
    if (ctx->pc == 0x305D14u) {
        ctx->pc = 0x305D14u;
            // 0x305d14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D18u;
        goto label_305d18;
    }
    ctx->pc = 0x305D10u;
    SET_GPR_U32(ctx, 31, 0x305D18u);
    ctx->pc = 0x305D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D10u;
            // 0x305d14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3070E0u;
    if (runtime->hasFunction(0x3070E0u)) {
        auto targetFn = runtime->lookupFunction(0x3070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D18u; }
        if (ctx->pc != 0x305D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003070E0_0x3070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D18u; }
        if (ctx->pc != 0x305D18u) { return; }
    }
    ctx->pc = 0x305D18u;
label_305d18:
    // 0x305d18: 0x26a402e0  addiu       $a0, $s5, 0x2E0
    ctx->pc = 0x305d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 736));
label_305d1c:
    // 0x305d1c: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x305d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_305d20:
    // 0x305d20: 0xc04cc04  jal         func_133010
label_305d24:
    if (ctx->pc == 0x305D24u) {
        ctx->pc = 0x305D24u;
            // 0x305d24: 0x26b207e0  addiu       $s2, $s5, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 2016));
        ctx->pc = 0x305D28u;
        goto label_305d28;
    }
    ctx->pc = 0x305D20u;
    SET_GPR_U32(ctx, 31, 0x305D28u);
    ctx->pc = 0x305D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D20u;
            // 0x305d24: 0x26b207e0  addiu       $s2, $s5, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D28u; }
        if (ctx->pc != 0x305D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D28u; }
        if (ctx->pc != 0x305D28u) { return; }
    }
    ctx->pc = 0x305D28u;
label_305d28:
    // 0x305d28: 0x26a40560  addiu       $a0, $s5, 0x560
    ctx->pc = 0x305d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1376));
label_305d2c:
    // 0x305d2c: 0xc075318  jal         func_1D4C60
label_305d30:
    if (ctx->pc == 0x305D30u) {
        ctx->pc = 0x305D30u;
            // 0x305d30: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x305D34u;
        goto label_305d34;
    }
    ctx->pc = 0x305D2Cu;
    SET_GPR_U32(ctx, 31, 0x305D34u);
    ctx->pc = 0x305D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D2Cu;
            // 0x305d30: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D34u; }
        if (ctx->pc != 0x305D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D34u; }
        if (ctx->pc != 0x305D34u) { return; }
    }
    ctx->pc = 0x305D34u;
label_305d34:
    // 0x305d34: 0x26a50560  addiu       $a1, $s5, 0x560
    ctx->pc = 0x305d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1376));
label_305d38:
    // 0x305d38: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x305d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_305d3c:
    // 0x305d3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x305d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305d40:
    // 0x305d40: 0xc0c6250  jal         func_318940
label_305d44:
    if (ctx->pc == 0x305D44u) {
        ctx->pc = 0x305D44u;
            // 0x305d44: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D48u;
        goto label_305d48;
    }
    ctx->pc = 0x305D40u;
    SET_GPR_U32(ctx, 31, 0x305D48u);
    ctx->pc = 0x305D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D40u;
            // 0x305d44: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D48u; }
        if (ctx->pc != 0x305D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D48u; }
        if (ctx->pc != 0x305D48u) { return; }
    }
    ctx->pc = 0x305D48u;
label_305d48:
    // 0x305d48: 0xc0b9210  jal         func_2E4840
label_305d4c:
    if (ctx->pc == 0x305D4Cu) {
        ctx->pc = 0x305D4Cu;
            // 0x305d4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D50u;
        goto label_305d50;
    }
    ctx->pc = 0x305D48u;
    SET_GPR_U32(ctx, 31, 0x305D50u);
    ctx->pc = 0x305D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D48u;
            // 0x305d4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D50u; }
        if (ctx->pc != 0x305D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D50u; }
        if (ctx->pc != 0x305D50u) { return; }
    }
    ctx->pc = 0x305D50u;
label_305d50:
    // 0x305d50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x305d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305d54:
    // 0x305d54: 0xc04c720  jal         func_131C80
label_305d58:
    if (ctx->pc == 0x305D58u) {
        ctx->pc = 0x305D58u;
            // 0x305d58: 0x26a50830  addiu       $a1, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->pc = 0x305D5Cu;
        goto label_305d5c;
    }
    ctx->pc = 0x305D54u;
    SET_GPR_U32(ctx, 31, 0x305D5Cu);
    ctx->pc = 0x305D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D54u;
            // 0x305d58: 0x26a50830  addiu       $a1, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D5Cu; }
        if (ctx->pc != 0x305D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D5Cu; }
        if (ctx->pc != 0x305D5Cu) { return; }
    }
    ctx->pc = 0x305D5Cu;
label_305d5c:
    // 0x305d5c: 0xc0783ac  jal         func_1E0EB0
label_305d60:
    if (ctx->pc == 0x305D60u) {
        ctx->pc = 0x305D60u;
            // 0x305d60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D64u;
        goto label_305d64;
    }
    ctx->pc = 0x305D5Cu;
    SET_GPR_U32(ctx, 31, 0x305D64u);
    ctx->pc = 0x305D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D5Cu;
            // 0x305d60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D64u; }
        if (ctx->pc != 0x305D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D64u; }
        if (ctx->pc != 0x305D64u) { return; }
    }
    ctx->pc = 0x305D64u;
label_305d64:
    // 0x305d64: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x305d64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_305d68:
    // 0x305d68: 0xc0c1a10  jal         func_306840
label_305d6c:
    if (ctx->pc == 0x305D6Cu) {
        ctx->pc = 0x305D6Cu;
            // 0x305d6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D70u;
        goto label_305d70;
    }
    ctx->pc = 0x305D68u;
    SET_GPR_U32(ctx, 31, 0x305D70u);
    ctx->pc = 0x305D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D68u;
            // 0x305d6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D70u; }
        if (ctx->pc != 0x305D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D70u; }
        if (ctx->pc != 0x305D70u) { return; }
    }
    ctx->pc = 0x305D70u;
label_305d70:
    // 0x305d70: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x305d70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305d74:
    // 0x305d74: 0x45030033  bc1tl       . + 4 + (0x33 << 2)
label_305d78:
    if (ctx->pc == 0x305D78u) {
        ctx->pc = 0x305D78u;
            // 0x305d78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D7Cu;
        goto label_305d7c;
    }
    ctx->pc = 0x305D74u;
    {
        const bool branch_taken_0x305d74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x305d74) {
            ctx->pc = 0x305D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305D74u;
            // 0x305d78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305E44u;
            goto label_305e44;
        }
    }
    ctx->pc = 0x305D7Cu;
label_305d7c:
    // 0x305d7c: 0xc0c1a10  jal         func_306840
label_305d80:
    if (ctx->pc == 0x305D80u) {
        ctx->pc = 0x305D80u;
            // 0x305d80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D84u;
        goto label_305d84;
    }
    ctx->pc = 0x305D7Cu;
    SET_GPR_U32(ctx, 31, 0x305D84u);
    ctx->pc = 0x305D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D7Cu;
            // 0x305d80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D84u; }
        if (ctx->pc != 0x305D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D84u; }
        if (ctx->pc != 0x305D84u) { return; }
    }
    ctx->pc = 0x305D84u;
label_305d84:
    // 0x305d84: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x305d84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_305d88:
    // 0x305d88: 0xc0783ac  jal         func_1E0EB0
label_305d8c:
    if (ctx->pc == 0x305D8Cu) {
        ctx->pc = 0x305D8Cu;
            // 0x305d8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D90u;
        goto label_305d90;
    }
    ctx->pc = 0x305D88u;
    SET_GPR_U32(ctx, 31, 0x305D90u);
    ctx->pc = 0x305D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D88u;
            // 0x305d8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D90u; }
        if (ctx->pc != 0x305D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D90u; }
        if (ctx->pc != 0x305D90u) { return; }
    }
    ctx->pc = 0x305D90u;
label_305d90:
    // 0x305d90: 0x4600a841  sub.s       $f1, $f21, $f0
    ctx->pc = 0x305d90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_305d94:
    // 0x305d94: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x305d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
label_305d98:
    // 0x305d98: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x305d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_305d9c:
    // 0x305d9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x305d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_305da0:
    // 0x305da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x305da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_305da4:
    // 0x305da4: 0xc0783ac  jal         func_1E0EB0
label_305da8:
    if (ctx->pc == 0x305DA8u) {
        ctx->pc = 0x305DA8u;
            // 0x305da8: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x305DACu;
        goto label_305dac;
    }
    ctx->pc = 0x305DA4u;
    SET_GPR_U32(ctx, 31, 0x305DACu);
    ctx->pc = 0x305DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305DA4u;
            // 0x305da8: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DACu; }
        if (ctx->pc != 0x305DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DACu; }
        if (ctx->pc != 0x305DACu) { return; }
    }
    ctx->pc = 0x305DACu;
label_305dac:
    // 0x305dac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x305dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_305db0:
    // 0x305db0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x305db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_305db4:
    // 0x305db4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x305db4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_305db8:
    // 0x305db8: 0xc0c1a0c  jal         func_306830
label_305dbc:
    if (ctx->pc == 0x305DBCu) {
        ctx->pc = 0x305DBCu;
            // 0x305dbc: 0x4615a31c  madd.s      $f12, $f20, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[21]));
        ctx->pc = 0x305DC0u;
        goto label_305dc0;
    }
    ctx->pc = 0x305DB8u;
    SET_GPR_U32(ctx, 31, 0x305DC0u);
    ctx->pc = 0x305DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305DB8u;
            // 0x305dbc: 0x4615a31c  madd.s      $f12, $f20, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DC0u; }
        if (ctx->pc != 0x305DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DC0u; }
        if (ctx->pc != 0x305DC0u) { return; }
    }
    ctx->pc = 0x305DC0u;
label_305dc0:
    // 0x305dc0: 0xc0c1a08  jal         func_306820
label_305dc4:
    if (ctx->pc == 0x305DC4u) {
        ctx->pc = 0x305DC4u;
            // 0x305dc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305DC8u;
        goto label_305dc8;
    }
    ctx->pc = 0x305DC0u;
    SET_GPR_U32(ctx, 31, 0x305DC8u);
    ctx->pc = 0x305DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305DC0u;
            // 0x305dc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306820u;
    if (runtime->hasFunction(0x306820u)) {
        auto targetFn = runtime->lookupFunction(0x306820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DC8u; }
        if (ctx->pc != 0x305DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306820_0x306820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DC8u; }
        if (ctx->pc != 0x305DC8u) { return; }
    }
    ctx->pc = 0x305DC8u;
label_305dc8:
    // 0x305dc8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x305dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_305dcc:
    // 0x305dcc: 0x0  nop
    ctx->pc = 0x305dccu;
    // NOP
label_305dd0:
    // 0x305dd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x305dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305dd4:
    // 0x305dd4: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_305dd8:
    if (ctx->pc == 0x305DD8u) {
        ctx->pc = 0x305DD8u;
            // 0x305dd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305DDCu;
        goto label_305ddc;
    }
    ctx->pc = 0x305DD4u;
    {
        const bool branch_taken_0x305dd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x305dd4) {
            ctx->pc = 0x305DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305DD4u;
            // 0x305dd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305E08u;
            goto label_305e08;
        }
    }
    ctx->pc = 0x305DDCu;
label_305ddc:
    // 0x305ddc: 0xc0c1a08  jal         func_306820
label_305de0:
    if (ctx->pc == 0x305DE0u) {
        ctx->pc = 0x305DE0u;
            // 0x305de0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305DE4u;
        goto label_305de4;
    }
    ctx->pc = 0x305DDCu;
    SET_GPR_U32(ctx, 31, 0x305DE4u);
    ctx->pc = 0x305DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305DDCu;
            // 0x305de0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306820u;
    if (runtime->hasFunction(0x306820u)) {
        auto targetFn = runtime->lookupFunction(0x306820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DE4u; }
        if (ctx->pc != 0x305DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306820_0x306820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DE4u; }
        if (ctx->pc != 0x305DE4u) { return; }
    }
    ctx->pc = 0x305DE4u;
label_305de4:
    // 0x305de4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x305de4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_305de8:
    // 0x305de8: 0xc0783ac  jal         func_1E0EB0
label_305dec:
    if (ctx->pc == 0x305DECu) {
        ctx->pc = 0x305DECu;
            // 0x305dec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305DF0u;
        goto label_305df0;
    }
    ctx->pc = 0x305DE8u;
    SET_GPR_U32(ctx, 31, 0x305DF0u);
    ctx->pc = 0x305DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305DE8u;
            // 0x305dec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DF0u; }
        if (ctx->pc != 0x305DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DF0u; }
        if (ctx->pc != 0x305DF0u) { return; }
    }
    ctx->pc = 0x305DF0u;
label_305df0:
    // 0x305df0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x305df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_305df4:
    // 0x305df4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x305df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_305df8:
    // 0x305df8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x305df8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_305dfc:
    // 0x305dfc: 0xc0c1a0c  jal         func_306830
label_305e00:
    if (ctx->pc == 0x305E00u) {
        ctx->pc = 0x305E00u;
            // 0x305e00: 0x4615a31c  madd.s      $f12, $f20, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[21]));
        ctx->pc = 0x305E04u;
        goto label_305e04;
    }
    ctx->pc = 0x305DFCu;
    SET_GPR_U32(ctx, 31, 0x305E04u);
    ctx->pc = 0x305E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305DFCu;
            // 0x305e00: 0x4615a31c  madd.s      $f12, $f20, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E04u; }
        if (ctx->pc != 0x305E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E04u; }
        if (ctx->pc != 0x305E04u) { return; }
    }
    ctx->pc = 0x305E04u;
label_305e04:
    // 0x305e04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x305e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_305e08:
    // 0x305e08: 0xc0783ac  jal         func_1E0EB0
label_305e0c:
    if (ctx->pc == 0x305E0Cu) {
        ctx->pc = 0x305E10u;
        goto label_305e10;
    }
    ctx->pc = 0x305E08u;
    SET_GPR_U32(ctx, 31, 0x305E10u);
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E10u; }
        if (ctx->pc != 0x305E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E10u; }
        if (ctx->pc != 0x305E10u) { return; }
    }
    ctx->pc = 0x305E10u;
label_305e10:
    // 0x305e10: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x305e10u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_305e14:
    // 0x305e14: 0xc0c1a10  jal         func_306840
label_305e18:
    if (ctx->pc == 0x305E18u) {
        ctx->pc = 0x305E18u;
            // 0x305e18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E1Cu;
        goto label_305e1c;
    }
    ctx->pc = 0x305E14u;
    SET_GPR_U32(ctx, 31, 0x305E1Cu);
    ctx->pc = 0x305E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E14u;
            // 0x305e18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E1Cu; }
        if (ctx->pc != 0x305E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E1Cu; }
        if (ctx->pc != 0x305E1Cu) { return; }
    }
    ctx->pc = 0x305E1Cu;
label_305e1c:
    // 0x305e1c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x305e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305e20:
    // 0x305e20: 0x4502003e  bc1fl       . + 4 + (0x3E << 2)
label_305e24:
    if (ctx->pc == 0x305E24u) {
        ctx->pc = 0x305E24u;
            // 0x305e24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E28u;
        goto label_305e28;
    }
    ctx->pc = 0x305E20u;
    {
        const bool branch_taken_0x305e20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x305e20) {
            ctx->pc = 0x305E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305E20u;
            // 0x305e24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305F1Cu;
            goto label_305f1c;
        }
    }
    ctx->pc = 0x305E28u;
label_305e28:
    // 0x305e28: 0xc0c1a10  jal         func_306840
label_305e2c:
    if (ctx->pc == 0x305E2Cu) {
        ctx->pc = 0x305E2Cu;
            // 0x305e2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E30u;
        goto label_305e30;
    }
    ctx->pc = 0x305E28u;
    SET_GPR_U32(ctx, 31, 0x305E30u);
    ctx->pc = 0x305E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E28u;
            // 0x305e2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E30u; }
        if (ctx->pc != 0x305E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E30u; }
        if (ctx->pc != 0x305E30u) { return; }
    }
    ctx->pc = 0x305E30u;
label_305e30:
    // 0x305e30: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x305e30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_305e34:
    // 0x305e34: 0xc0c1a0c  jal         func_306830
label_305e38:
    if (ctx->pc == 0x305E38u) {
        ctx->pc = 0x305E38u;
            // 0x305e38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E3Cu;
        goto label_305e3c;
    }
    ctx->pc = 0x305E34u;
    SET_GPR_U32(ctx, 31, 0x305E3Cu);
    ctx->pc = 0x305E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E34u;
            // 0x305e38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E3Cu; }
        if (ctx->pc != 0x305E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E3Cu; }
        if (ctx->pc != 0x305E3Cu) { return; }
    }
    ctx->pc = 0x305E3Cu;
label_305e3c:
    // 0x305e3c: 0x10000036  b           . + 4 + (0x36 << 2)
label_305e40:
    if (ctx->pc == 0x305E40u) {
        ctx->pc = 0x305E44u;
        goto label_305e44;
    }
    ctx->pc = 0x305E3Cu;
    {
        const bool branch_taken_0x305e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305e3c) {
            ctx->pc = 0x305F18u;
            goto label_305f18;
        }
    }
    ctx->pc = 0x305E44u;
label_305e44:
    // 0x305e44: 0xc0783ac  jal         func_1E0EB0
label_305e48:
    if (ctx->pc == 0x305E48u) {
        ctx->pc = 0x305E4Cu;
        goto label_305e4c;
    }
    ctx->pc = 0x305E44u;
    SET_GPR_U32(ctx, 31, 0x305E4Cu);
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E4Cu; }
        if (ctx->pc != 0x305E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E4Cu; }
        if (ctx->pc != 0x305E4Cu) { return; }
    }
    ctx->pc = 0x305E4Cu;
label_305e4c:
    // 0x305e4c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x305e4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_305e50:
    // 0x305e50: 0xc0c1a04  jal         func_306810
label_305e54:
    if (ctx->pc == 0x305E54u) {
        ctx->pc = 0x305E54u;
            // 0x305e54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E58u;
        goto label_305e58;
    }
    ctx->pc = 0x305E50u;
    SET_GPR_U32(ctx, 31, 0x305E58u);
    ctx->pc = 0x305E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E50u;
            // 0x305e54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306810u;
    if (runtime->hasFunction(0x306810u)) {
        auto targetFn = runtime->lookupFunction(0x306810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E58u; }
        if (ctx->pc != 0x305E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306810_0x306810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E58u; }
        if (ctx->pc != 0x305E58u) { return; }
    }
    ctx->pc = 0x305E58u;
label_305e58:
    // 0x305e58: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x305e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305e5c:
    // 0x305e5c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_305e60:
    if (ctx->pc == 0x305E60u) {
        ctx->pc = 0x305E60u;
            // 0x305e60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E64u;
        goto label_305e64;
    }
    ctx->pc = 0x305E5Cu;
    {
        const bool branch_taken_0x305e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x305e5c) {
            ctx->pc = 0x305E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305E5Cu;
            // 0x305e60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305E80u;
            goto label_305e80;
        }
    }
    ctx->pc = 0x305E64u;
label_305e64:
    // 0x305e64: 0xc0c1a04  jal         func_306810
label_305e68:
    if (ctx->pc == 0x305E68u) {
        ctx->pc = 0x305E68u;
            // 0x305e68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E6Cu;
        goto label_305e6c;
    }
    ctx->pc = 0x305E64u;
    SET_GPR_U32(ctx, 31, 0x305E6Cu);
    ctx->pc = 0x305E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E64u;
            // 0x305e68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306810u;
    if (runtime->hasFunction(0x306810u)) {
        auto targetFn = runtime->lookupFunction(0x306810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E6Cu; }
        if (ctx->pc != 0x305E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306810_0x306810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E6Cu; }
        if (ctx->pc != 0x305E6Cu) { return; }
    }
    ctx->pc = 0x305E6Cu;
label_305e6c:
    // 0x305e6c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x305e6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_305e70:
    // 0x305e70: 0xc0c1a0c  jal         func_306830
label_305e74:
    if (ctx->pc == 0x305E74u) {
        ctx->pc = 0x305E74u;
            // 0x305e74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E78u;
        goto label_305e78;
    }
    ctx->pc = 0x305E70u;
    SET_GPR_U32(ctx, 31, 0x305E78u);
    ctx->pc = 0x305E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E70u;
            // 0x305e74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E78u; }
        if (ctx->pc != 0x305E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E78u; }
        if (ctx->pc != 0x305E78u) { return; }
    }
    ctx->pc = 0x305E78u;
label_305e78:
    // 0x305e78: 0x10000027  b           . + 4 + (0x27 << 2)
label_305e7c:
    if (ctx->pc == 0x305E7Cu) {
        ctx->pc = 0x305E80u;
        goto label_305e80;
    }
    ctx->pc = 0x305E78u;
    {
        const bool branch_taken_0x305e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305e78) {
            ctx->pc = 0x305F18u;
            goto label_305f18;
        }
    }
    ctx->pc = 0x305E80u;
label_305e80:
    // 0x305e80: 0xc0c1a08  jal         func_306820
label_305e84:
    if (ctx->pc == 0x305E84u) {
        ctx->pc = 0x305E88u;
        goto label_305e88;
    }
    ctx->pc = 0x305E80u;
    SET_GPR_U32(ctx, 31, 0x305E88u);
    ctx->pc = 0x306820u;
    if (runtime->hasFunction(0x306820u)) {
        auto targetFn = runtime->lookupFunction(0x306820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E88u; }
        if (ctx->pc != 0x305E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306820_0x306820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E88u; }
        if (ctx->pc != 0x305E88u) { return; }
    }
    ctx->pc = 0x305E88u;
label_305e88:
    // 0x305e88: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x305e88u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_305e8c:
    // 0x305e8c: 0xc0783ac  jal         func_1E0EB0
label_305e90:
    if (ctx->pc == 0x305E90u) {
        ctx->pc = 0x305E90u;
            // 0x305e90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E94u;
        goto label_305e94;
    }
    ctx->pc = 0x305E8Cu;
    SET_GPR_U32(ctx, 31, 0x305E94u);
    ctx->pc = 0x305E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E8Cu;
            // 0x305e90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E94u; }
        if (ctx->pc != 0x305E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E94u; }
        if (ctx->pc != 0x305E94u) { return; }
    }
    ctx->pc = 0x305E94u;
label_305e94:
    // 0x305e94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x305e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_305e98:
    // 0x305e98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x305e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_305e9c:
    // 0x305e9c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x305e9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_305ea0:
    // 0x305ea0: 0xc0c1a0c  jal         func_306830
label_305ea4:
    if (ctx->pc == 0x305EA4u) {
        ctx->pc = 0x305EA4u;
            // 0x305ea4: 0x4615a31c  madd.s      $f12, $f20, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[21]));
        ctx->pc = 0x305EA8u;
        goto label_305ea8;
    }
    ctx->pc = 0x305EA0u;
    SET_GPR_U32(ctx, 31, 0x305EA8u);
    ctx->pc = 0x305EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305EA0u;
            // 0x305ea4: 0x4615a31c  madd.s      $f12, $f20, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EA8u; }
        if (ctx->pc != 0x305EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EA8u; }
        if (ctx->pc != 0x305EA8u) { return; }
    }
    ctx->pc = 0x305EA8u;
label_305ea8:
    // 0x305ea8: 0xc0783ac  jal         func_1E0EB0
label_305eac:
    if (ctx->pc == 0x305EACu) {
        ctx->pc = 0x305EACu;
            // 0x305eac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305EB0u;
        goto label_305eb0;
    }
    ctx->pc = 0x305EA8u;
    SET_GPR_U32(ctx, 31, 0x305EB0u);
    ctx->pc = 0x305EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305EA8u;
            // 0x305eac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EB0u; }
        if (ctx->pc != 0x305EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EB0u; }
        if (ctx->pc != 0x305EB0u) { return; }
    }
    ctx->pc = 0x305EB0u;
label_305eb0:
    // 0x305eb0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x305eb0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_305eb4:
    // 0x305eb4: 0xc0c1a10  jal         func_306840
label_305eb8:
    if (ctx->pc == 0x305EB8u) {
        ctx->pc = 0x305EB8u;
            // 0x305eb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305EBCu;
        goto label_305ebc;
    }
    ctx->pc = 0x305EB4u;
    SET_GPR_U32(ctx, 31, 0x305EBCu);
    ctx->pc = 0x305EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305EB4u;
            // 0x305eb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EBCu; }
        if (ctx->pc != 0x305EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EBCu; }
        if (ctx->pc != 0x305EBCu) { return; }
    }
    ctx->pc = 0x305EBCu;
label_305ebc:
    // 0x305ebc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x305ebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305ec0:
    // 0x305ec0: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_305ec4:
    if (ctx->pc == 0x305EC4u) {
        ctx->pc = 0x305EC4u;
            // 0x305ec4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305EC8u;
        goto label_305ec8;
    }
    ctx->pc = 0x305EC0u;
    {
        const bool branch_taken_0x305ec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x305ec0) {
            ctx->pc = 0x305EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305EC0u;
            // 0x305ec4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305EE4u;
            goto label_305ee4;
        }
    }
    ctx->pc = 0x305EC8u;
label_305ec8:
    // 0x305ec8: 0xc0c1a10  jal         func_306840
label_305ecc:
    if (ctx->pc == 0x305ECCu) {
        ctx->pc = 0x305ECCu;
            // 0x305ecc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305ED0u;
        goto label_305ed0;
    }
    ctx->pc = 0x305EC8u;
    SET_GPR_U32(ctx, 31, 0x305ED0u);
    ctx->pc = 0x305ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305EC8u;
            // 0x305ecc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305ED0u; }
        if (ctx->pc != 0x305ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305ED0u; }
        if (ctx->pc != 0x305ED0u) { return; }
    }
    ctx->pc = 0x305ED0u;
label_305ed0:
    // 0x305ed0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x305ed0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_305ed4:
    // 0x305ed4: 0xc0c1a0c  jal         func_306830
label_305ed8:
    if (ctx->pc == 0x305ED8u) {
        ctx->pc = 0x305ED8u;
            // 0x305ed8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305EDCu;
        goto label_305edc;
    }
    ctx->pc = 0x305ED4u;
    SET_GPR_U32(ctx, 31, 0x305EDCu);
    ctx->pc = 0x305ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305ED4u;
            // 0x305ed8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EDCu; }
        if (ctx->pc != 0x305EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EDCu; }
        if (ctx->pc != 0x305EDCu) { return; }
    }
    ctx->pc = 0x305EDCu;
label_305edc:
    // 0x305edc: 0x1000000e  b           . + 4 + (0xE << 2)
label_305ee0:
    if (ctx->pc == 0x305EE0u) {
        ctx->pc = 0x305EE4u;
        goto label_305ee4;
    }
    ctx->pc = 0x305EDCu;
    {
        const bool branch_taken_0x305edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305edc) {
            ctx->pc = 0x305F18u;
            goto label_305f18;
        }
    }
    ctx->pc = 0x305EE4u;
label_305ee4:
    // 0x305ee4: 0xc0783ac  jal         func_1E0EB0
label_305ee8:
    if (ctx->pc == 0x305EE8u) {
        ctx->pc = 0x305EECu;
        goto label_305eec;
    }
    ctx->pc = 0x305EE4u;
    SET_GPR_U32(ctx, 31, 0x305EECu);
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EECu; }
        if (ctx->pc != 0x305EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EECu; }
        if (ctx->pc != 0x305EECu) { return; }
    }
    ctx->pc = 0x305EECu;
label_305eec:
    // 0x305eec: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x305eecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_305ef0:
    // 0x305ef0: 0xc0c1a04  jal         func_306810
label_305ef4:
    if (ctx->pc == 0x305EF4u) {
        ctx->pc = 0x305EF4u;
            // 0x305ef4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305EF8u;
        goto label_305ef8;
    }
    ctx->pc = 0x305EF0u;
    SET_GPR_U32(ctx, 31, 0x305EF8u);
    ctx->pc = 0x305EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305EF0u;
            // 0x305ef4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306810u;
    if (runtime->hasFunction(0x306810u)) {
        auto targetFn = runtime->lookupFunction(0x306810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EF8u; }
        if (ctx->pc != 0x305EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306810_0x306810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EF8u; }
        if (ctx->pc != 0x305EF8u) { return; }
    }
    ctx->pc = 0x305EF8u;
label_305ef8:
    // 0x305ef8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x305ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305efc:
    // 0x305efc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_305f00:
    if (ctx->pc == 0x305F00u) {
        ctx->pc = 0x305F04u;
        goto label_305f04;
    }
    ctx->pc = 0x305EFCu;
    {
        const bool branch_taken_0x305efc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x305efc) {
            ctx->pc = 0x305F18u;
            goto label_305f18;
        }
    }
    ctx->pc = 0x305F04u;
label_305f04:
    // 0x305f04: 0xc0c1a04  jal         func_306810
label_305f08:
    if (ctx->pc == 0x305F08u) {
        ctx->pc = 0x305F08u;
            // 0x305f08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305F0Cu;
        goto label_305f0c;
    }
    ctx->pc = 0x305F04u;
    SET_GPR_U32(ctx, 31, 0x305F0Cu);
    ctx->pc = 0x305F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305F04u;
            // 0x305f08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306810u;
    if (runtime->hasFunction(0x306810u)) {
        auto targetFn = runtime->lookupFunction(0x306810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F0Cu; }
        if (ctx->pc != 0x305F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306810_0x306810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F0Cu; }
        if (ctx->pc != 0x305F0Cu) { return; }
    }
    ctx->pc = 0x305F0Cu;
label_305f0c:
    // 0x305f0c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x305f0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_305f10:
    // 0x305f10: 0xc0c1a0c  jal         func_306830
label_305f14:
    if (ctx->pc == 0x305F14u) {
        ctx->pc = 0x305F14u;
            // 0x305f14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305F18u;
        goto label_305f18;
    }
    ctx->pc = 0x305F10u;
    SET_GPR_U32(ctx, 31, 0x305F18u);
    ctx->pc = 0x305F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305F10u;
            // 0x305f14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F18u; }
        if (ctx->pc != 0x305F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F18u; }
        if (ctx->pc != 0x305F18u) { return; }
    }
    ctx->pc = 0x305F18u;
label_305f18:
    // 0x305f18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x305f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_305f1c:
    // 0x305f1c: 0xc0783ac  jal         func_1E0EB0
label_305f20:
    if (ctx->pc == 0x305F20u) {
        ctx->pc = 0x305F24u;
        goto label_305f24;
    }
    ctx->pc = 0x305F1Cu;
    SET_GPR_U32(ctx, 31, 0x305F24u);
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F24u; }
        if (ctx->pc != 0x305F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F24u; }
        if (ctx->pc != 0x305F24u) { return; }
    }
    ctx->pc = 0x305F24u;
label_305f24:
    // 0x305f24: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x305f24u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_305f28:
    // 0x305f28: 0xc0c1a10  jal         func_306840
label_305f2c:
    if (ctx->pc == 0x305F2Cu) {
        ctx->pc = 0x305F2Cu;
            // 0x305f2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305F30u;
        goto label_305f30;
    }
    ctx->pc = 0x305F28u;
    SET_GPR_U32(ctx, 31, 0x305F30u);
    ctx->pc = 0x305F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305F28u;
            // 0x305f2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306840u;
    if (runtime->hasFunction(0x306840u)) {
        auto targetFn = runtime->lookupFunction(0x306840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F30u; }
        if (ctx->pc != 0x305F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306840_0x306840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F30u; }
        if (ctx->pc != 0x305F30u) { return; }
    }
    ctx->pc = 0x305F30u;
label_305f30:
    // 0x305f30: 0x0  nop
    ctx->pc = 0x305f30u;
    // NOP
label_305f34:
    // 0x305f34: 0x0  nop
    ctx->pc = 0x305f34u;
    // NOP
label_305f38:
    // 0x305f38: 0x4600ab03  div.s       $f12, $f21, $f0
    ctx->pc = 0x305f38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[12] = ctx->f[21] / ctx->f[0];
label_305f3c:
    // 0x305f3c: 0x0  nop
    ctx->pc = 0x305f3cu;
    // NOP
label_305f40:
    // 0x305f40: 0x0  nop
    ctx->pc = 0x305f40u;
    // NOP
label_305f44:
    // 0x305f44: 0xc0c1a00  jal         func_306800
label_305f48:
    if (ctx->pc == 0x305F48u) {
        ctx->pc = 0x305F48u;
            // 0x305f48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305F4Cu;
        goto label_305f4c;
    }
    ctx->pc = 0x305F44u;
    SET_GPR_U32(ctx, 31, 0x305F4Cu);
    ctx->pc = 0x305F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305F44u;
            // 0x305f48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306800u;
    if (runtime->hasFunction(0x306800u)) {
        auto targetFn = runtime->lookupFunction(0x306800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F4Cu; }
        if (ctx->pc != 0x305F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306800_0x306800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F4Cu; }
        if (ctx->pc != 0x305F4Cu) { return; }
    }
    ctx->pc = 0x305F4Cu;
label_305f4c:
    // 0x305f4c: 0x8ea20e30  lw          $v0, 0xE30($s5)
    ctx->pc = 0x305f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
label_305f50:
    // 0x305f50: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_305f54:
    if (ctx->pc == 0x305F54u) {
        ctx->pc = 0x305F54u;
            // 0x305f54: 0x8ea50e30  lw          $a1, 0xE30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
        ctx->pc = 0x305F58u;
        goto label_305f58;
    }
    ctx->pc = 0x305F50u;
    {
        const bool branch_taken_0x305f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f50) {
            ctx->pc = 0x305F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305F50u;
            // 0x305f54: 0x8ea50e30  lw          $a1, 0xE30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305FACu;
            goto label_305fac;
        }
    }
    ctx->pc = 0x305F58u;
label_305f58:
    // 0x305f58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x305f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_305f5c:
    // 0x305f5c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x305f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_305f60:
    // 0x305f60: 0x24422b7c  addiu       $v0, $v0, 0x2B7C
    ctx->pc = 0x305f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11132));
label_305f64:
    // 0x305f64: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x305f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_305f68:
    // 0x305f68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x305f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_305f6c:
    // 0x305f6c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x305f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_305f70:
    // 0x305f70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x305f70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_305f74:
    // 0x305f74: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x305f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_305f78:
    // 0x305f78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x305f78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_305f7c:
    // 0x305f7c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x305f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_305f80:
    // 0x305f80: 0x0  nop
    ctx->pc = 0x305f80u;
    // NOP
label_305f84:
    // 0x305f84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x305f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_305f88:
    // 0x305f88: 0x28414000  slti        $at, $v0, 0x4000
    ctx->pc = 0x305f88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
label_305f8c:
    // 0x305f8c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_305f90:
    if (ctx->pc == 0x305F90u) {
        ctx->pc = 0x305F90u;
            // 0x305f90: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x305F94u;
        goto label_305f94;
    }
    ctx->pc = 0x305F8Cu;
    {
        const bool branch_taken_0x305f8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x305F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305F8Cu;
            // 0x305f90: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f8c) {
            ctx->pc = 0x305FA8u;
            goto label_305fa8;
        }
    }
    ctx->pc = 0x305F94u;
label_305f94:
    // 0x305f94: 0x8ea20e30  lw          $v0, 0xE30($s5)
    ctx->pc = 0x305f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
label_305f98:
    // 0x305f98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_305f9c:
    if (ctx->pc == 0x305F9Cu) {
        ctx->pc = 0x305FA0u;
        goto label_305fa0;
    }
    ctx->pc = 0x305F98u;
    {
        const bool branch_taken_0x305f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f98) {
            ctx->pc = 0x305FA8u;
            goto label_305fa8;
        }
    }
    ctx->pc = 0x305FA0u;
label_305fa0:
    // 0x305fa0: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x305fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_305fa4:
    // 0x305fa4: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x305fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_305fa8:
    // 0x305fa8: 0x8ea50e30  lw          $a1, 0xE30($s5)
    ctx->pc = 0x305fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
label_305fac:
    // 0x305fac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x305facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_305fb0:
    // 0x305fb0: 0x50a200a0  beql        $a1, $v0, . + 4 + (0xA0 << 2)
label_305fb4:
    if (ctx->pc == 0x305FB4u) {
        ctx->pc = 0x305FB4u;
            // 0x305fb4: 0x8ea40d70  lw          $a0, 0xD70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3440)));
        ctx->pc = 0x305FB8u;
        goto label_305fb8;
    }
    ctx->pc = 0x305FB0u;
    {
        const bool branch_taken_0x305fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x305fb0) {
            ctx->pc = 0x305FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305FB0u;
            // 0x305fb4: 0x8ea40d70  lw          $a0, 0xD70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306234u;
            goto label_306234;
        }
    }
    ctx->pc = 0x305FB8u;
label_305fb8:
    // 0x305fb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x305fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_305fbc:
    // 0x305fbc: 0x10a4009c  beq         $a1, $a0, . + 4 + (0x9C << 2)
label_305fc0:
    if (ctx->pc == 0x305FC0u) {
        ctx->pc = 0x305FC4u;
        goto label_305fc4;
    }
    ctx->pc = 0x305FBCu;
    {
        const bool branch_taken_0x305fbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x305fbc) {
            ctx->pc = 0x306230u;
            goto label_306230;
        }
    }
    ctx->pc = 0x305FC4u;
label_305fc4:
    // 0x305fc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305fc8:
    // 0x305fc8: 0x50a3000e  beql        $a1, $v1, . + 4 + (0xE << 2)
label_305fcc:
    if (ctx->pc == 0x305FCCu) {
        ctx->pc = 0x305FCCu;
            // 0x305fcc: 0x8ea20d60  lw          $v0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->pc = 0x305FD0u;
        goto label_305fd0;
    }
    ctx->pc = 0x305FC8u;
    {
        const bool branch_taken_0x305fc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x305fc8) {
            ctx->pc = 0x305FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305FC8u;
            // 0x305fcc: 0x8ea20d60  lw          $v0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306004u;
            goto label_306004;
        }
    }
    ctx->pc = 0x305FD0u;
label_305fd0:
    // 0x305fd0: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_305fd4:
    if (ctx->pc == 0x305FD4u) {
        ctx->pc = 0x305FD4u;
            // 0x305fd4: 0x8ea20d60  lw          $v0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->pc = 0x305FD8u;
        goto label_305fd8;
    }
    ctx->pc = 0x305FD0u;
    {
        const bool branch_taken_0x305fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x305fd0) {
            ctx->pc = 0x305FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305FD0u;
            // 0x305fd4: 0x8ea20d60  lw          $v0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305FE0u;
            goto label_305fe0;
        }
    }
    ctx->pc = 0x305FD8u;
label_305fd8:
    // 0x305fd8: 0x1000009f  b           . + 4 + (0x9F << 2)
label_305fdc:
    if (ctx->pc == 0x305FDCu) {
        ctx->pc = 0x305FDCu;
            // 0x305fdc: 0xc6600010  lwc1        $f0, 0x10($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x305FE0u;
        goto label_305fe0;
    }
    ctx->pc = 0x305FD8u;
    {
        const bool branch_taken_0x305fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305FD8u;
            // 0x305fdc: 0xc6600010  lwc1        $f0, 0x10($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fd8) {
            ctx->pc = 0x306258u;
            goto label_306258;
        }
    }
    ctx->pc = 0x305FE0u;
label_305fe0:
    // 0x305fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x305fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_305fe4:
    // 0x305fe4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x305fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_305fe8:
    // 0x305fe8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x305fe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305fec:
    // 0x305fec: 0x45000099  bc1f        . + 4 + (0x99 << 2)
label_305ff0:
    if (ctx->pc == 0x305FF0u) {
        ctx->pc = 0x305FF4u;
        goto label_305ff4;
    }
    ctx->pc = 0x305FECu;
    {
        const bool branch_taken_0x305fec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x305fec) {
            ctx->pc = 0x306254u;
            goto label_306254;
        }
    }
    ctx->pc = 0x305FF4u;
label_305ff4:
    // 0x305ff4: 0xaea30e30  sw          $v1, 0xE30($s5)
    ctx->pc = 0x305ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3632), GPR_U32(ctx, 3));
label_305ff8:
    // 0x305ff8: 0x8ea20d74  lw          $v0, 0xD74($s5)
    ctx->pc = 0x305ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
label_305ffc:
    // 0x305ffc: 0x10000095  b           . + 4 + (0x95 << 2)
label_306000:
    if (ctx->pc == 0x306000u) {
        ctx->pc = 0x306000u;
            // 0x306000: 0xac4402b0  sw          $a0, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 4));
        ctx->pc = 0x306004u;
        goto label_306004;
    }
    ctx->pc = 0x305FFCu;
    {
        const bool branch_taken_0x305ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305FFCu;
            // 0x306000: 0xac4402b0  sw          $a0, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ffc) {
            ctx->pc = 0x306254u;
            goto label_306254;
        }
    }
    ctx->pc = 0x306004u;
label_306004:
    // 0x306004: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x306004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_306008:
    // 0x306008: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
label_30600c:
    if (ctx->pc == 0x30600Cu) {
        ctx->pc = 0x306010u;
        goto label_306010;
    }
    ctx->pc = 0x306008u;
    {
        const bool branch_taken_0x306008 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x306008) {
            ctx->pc = 0x30606Cu;
            goto label_30606c;
        }
    }
    ctx->pc = 0x306010u;
label_306010:
    // 0x306010: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x306010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_306014:
    // 0x306014: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x306014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_306018:
    // 0x306018: 0xc4402bb0  lwc1        $f0, 0x2BB0($v0)
    ctx->pc = 0x306018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30601c:
    // 0x30601c: 0x31023  negu        $v0, $v1
    ctx->pc = 0x30601cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_306020:
    // 0x306020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306024:
    // 0x306024: 0x0  nop
    ctx->pc = 0x306024u;
    // NOP
label_306028:
    // 0x306028: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x306028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_30602c:
    // 0x30602c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30602cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306030:
    // 0x306030: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
label_306034:
    if (ctx->pc == 0x306034u) {
        ctx->pc = 0x306034u;
            // 0x306034: 0x8ea20d60  lw          $v0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->pc = 0x306038u;
        goto label_306038;
    }
    ctx->pc = 0x306030u;
    {
        const bool branch_taken_0x306030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306030) {
            ctx->pc = 0x306034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306030u;
            // 0x306034: 0x8ea20d60  lw          $v0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3060C0u;
            goto label_3060c0;
        }
    }
    ctx->pc = 0x306038u;
label_306038:
    // 0x306038: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x306038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_30603c:
    // 0x30603c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x30603cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_306040:
    // 0x306040: 0xc4412bc0  lwc1        $f1, 0x2BC0($v0)
    ctx->pc = 0x306040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306044:
    // 0x306044: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x306044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306048:
    // 0x306048: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x306048u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_30604c:
    // 0x30604c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x30604cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_306050:
    // 0x306050: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x306050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_306054:
    // 0x306054: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x306054u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_306058:
    // 0x306058: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x306058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_30605c:
    // 0x30605c: 0x0  nop
    ctx->pc = 0x30605cu;
    // NOP
label_306060:
    // 0x306060: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x306060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_306064:
    // 0x306064: 0x10000015  b           . + 4 + (0x15 << 2)
label_306068:
    if (ctx->pc == 0x306068u) {
        ctx->pc = 0x306068u;
            // 0x306068: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x30606Cu;
        goto label_30606c;
    }
    ctx->pc = 0x306064u;
    {
        const bool branch_taken_0x306064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306064u;
            // 0x306068: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306064) {
            ctx->pc = 0x3060BCu;
            goto label_3060bc;
        }
    }
    ctx->pc = 0x30606Cu;
label_30606c:
    // 0x30606c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_306070:
    if (ctx->pc == 0x306070u) {
        ctx->pc = 0x306074u;
        goto label_306074;
    }
    ctx->pc = 0x30606Cu;
    {
        const bool branch_taken_0x30606c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30606c) {
            ctx->pc = 0x3060BCu;
            goto label_3060bc;
        }
    }
    ctx->pc = 0x306074u;
label_306074:
    // 0x306074: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x306074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306078:
    // 0x306078: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x306078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_30607c:
    // 0x30607c: 0xc4402ba8  lwc1        $f0, 0x2BA8($v0)
    ctx->pc = 0x30607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306080:
    // 0x306080: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x306080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_306084:
    // 0x306084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x306084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306088:
    // 0x306088: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_30608c:
    if (ctx->pc == 0x30608Cu) {
        ctx->pc = 0x306090u;
        goto label_306090;
    }
    ctx->pc = 0x306088u;
    {
        const bool branch_taken_0x306088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306088) {
            ctx->pc = 0x3060BCu;
            goto label_3060bc;
        }
    }
    ctx->pc = 0x306090u;
label_306090:
    // 0x306090: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x306090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_306094:
    // 0x306094: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x306094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_306098:
    // 0x306098: 0xc4412bc0  lwc1        $f1, 0x2BC0($v0)
    ctx->pc = 0x306098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30609c:
    // 0x30609c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x30609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3060a0:
    // 0x3060a0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3060a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3060a4:
    // 0x3060a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3060a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3060a8:
    // 0x3060a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3060a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3060ac:
    // 0x3060ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3060acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3060b0:
    // 0x3060b0: 0x0  nop
    ctx->pc = 0x3060b0u;
    // NOP
label_3060b4:
    // 0x3060b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3060b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3060b8:
    // 0x3060b8: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x3060b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_3060bc:
    // 0x3060bc: 0x8ea20d60  lw          $v0, 0xD60($s5)
    ctx->pc = 0x3060bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
label_3060c0:
    // 0x3060c0: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x3060c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_3060c4:
    // 0x3060c4: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_3060c8:
    if (ctx->pc == 0x3060C8u) {
        ctx->pc = 0x3060CCu;
        goto label_3060cc;
    }
    ctx->pc = 0x3060C4u;
    {
        const bool branch_taken_0x3060c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3060c4) {
            ctx->pc = 0x3060FCu;
            goto label_3060fc;
        }
    }
    ctx->pc = 0x3060CCu;
label_3060cc:
    // 0x3060cc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3060ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3060d0:
    // 0x3060d0: 0xc4412bb8  lwc1        $f1, 0x2BB8($v0)
    ctx->pc = 0x3060d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3060d4:
    // 0x3060d4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3060d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3060d8:
    // 0x3060d8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3060d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3060dc:
    // 0x3060dc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3060dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3060e0:
    // 0x3060e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3060e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3060e4:
    // 0x3060e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3060e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3060e8:
    // 0x3060e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3060e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3060ec:
    // 0x3060ec: 0x0  nop
    ctx->pc = 0x3060ecu;
    // NOP
label_3060f0:
    // 0x3060f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3060f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3060f4:
    // 0x3060f4: 0x10000015  b           . + 4 + (0x15 << 2)
label_3060f8:
    if (ctx->pc == 0x3060F8u) {
        ctx->pc = 0x3060F8u;
            // 0x3060f8: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x3060FCu;
        goto label_3060fc;
    }
    ctx->pc = 0x3060F4u;
    {
        const bool branch_taken_0x3060f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3060F4u;
            // 0x3060f8: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060f4) {
            ctx->pc = 0x30614Cu;
            goto label_30614c;
        }
    }
    ctx->pc = 0x3060FCu;
label_3060fc:
    // 0x3060fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3060fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306100:
    // 0x306100: 0x0  nop
    ctx->pc = 0x306100u;
    // NOP
label_306104:
    // 0x306104: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x306104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_306108:
    // 0x306108: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x306108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30610c:
    // 0x30610c: 0x0  nop
    ctx->pc = 0x30610cu;
    // NOP
label_306110:
    // 0x306110: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x306110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306114:
    // 0x306114: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_306118:
    if (ctx->pc == 0x306118u) {
        ctx->pc = 0x306118u;
            // 0x306118: 0x3c023e8e  lui         $v0, 0x3E8E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
        ctx->pc = 0x30611Cu;
        goto label_30611c;
    }
    ctx->pc = 0x306114u;
    {
        const bool branch_taken_0x306114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x306114) {
            ctx->pc = 0x306118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306114u;
            // 0x306118: 0x3c023e8e  lui         $v0, 0x3E8E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306150u;
            goto label_306150;
        }
    }
    ctx->pc = 0x30611Cu;
label_30611c:
    // 0x30611c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x30611cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_306120:
    // 0x306120: 0xc4412bb8  lwc1        $f1, 0x2BB8($v0)
    ctx->pc = 0x306120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306124:
    // 0x306124: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x306124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306128:
    // 0x306128: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x306128u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_30612c:
    // 0x30612c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x30612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_306130:
    // 0x306130: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x306130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_306134:
    // 0x306134: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x306134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_306138:
    // 0x306138: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x306138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_30613c:
    // 0x30613c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30613cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_306140:
    // 0x306140: 0x0  nop
    ctx->pc = 0x306140u;
    // NOP
label_306144:
    // 0x306144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_306148:
    // 0x306148: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x306148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_30614c:
    // 0x30614c: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x30614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
label_306150:
    // 0x306150: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x306150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_306154:
    // 0x306154: 0xc6a10de4  lwc1        $f1, 0xDE4($s5)
    ctx->pc = 0x306154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306158:
    // 0x306158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30615c:
    // 0x30615c: 0x0  nop
    ctx->pc = 0x30615cu;
    // NOP
label_306160:
    // 0x306160: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x306160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306164:
    // 0x306164: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_306168:
    if (ctx->pc == 0x306168u) {
        ctx->pc = 0x30616Cu;
        goto label_30616c;
    }
    ctx->pc = 0x306164u;
    {
        const bool branch_taken_0x306164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306164) {
            ctx->pc = 0x306254u;
            goto label_306254;
        }
    }
    ctx->pc = 0x30616Cu;
label_30616c:
    // 0x30616c: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x30616cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_306170:
    // 0x306170: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x306170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_306174:
    // 0x306174: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x306174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306178:
    // 0x306178: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x306178u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_30617c:
    // 0x30617c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30617cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_306180:
    // 0x306180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306184:
    // 0x306184: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x306184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_306188:
    // 0x306188: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x306188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30618c:
    // 0x30618c: 0xe6a00de0  swc1        $f0, 0xDE0($s5)
    ctx->pc = 0x30618cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3552), bits); }
label_306190:
    // 0x306190: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x306190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_306194:
    // 0x306194: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x306194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
label_306198:
    // 0x306198: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x306198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30619c:
    // 0x30619c: 0x8ea20db8  lw          $v0, 0xDB8($s5)
    ctx->pc = 0x30619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3512)));
label_3061a0:
    // 0x3061a0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3061a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3061a4:
    // 0x3061a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3061a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3061a8:
    // 0x3061a8: 0xaea20db8  sw          $v0, 0xDB8($s5)
    ctx->pc = 0x3061a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3512), GPR_U32(ctx, 2));
label_3061ac:
    // 0x3061ac: 0xae080110  sw          $t0, 0x110($s0)
    ctx->pc = 0x3061acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 8));
label_3061b0:
    // 0x3061b0: 0xaea00de8  sw          $zero, 0xDE8($s5)
    ctx->pc = 0x3061b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3560), GPR_U32(ctx, 0));
label_3061b4:
    // 0x3061b4: 0x8282010c  lb          $v0, 0x10C($s4)
    ctx->pc = 0x3061b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 268)));
label_3061b8:
    // 0x3061b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3061b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3061bc:
    // 0x3061bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3061bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3061c0:
    // 0x3061c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3061c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3061c4:
    // 0x3061c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3061c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3061c8:
    // 0x3061c8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3061c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3061cc:
    // 0x3061cc: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3061ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3061d0:
    // 0x3061d0: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x3061d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_3061d4:
    // 0x3061d4: 0x8285010d  lb          $a1, 0x10D($s4)
    ctx->pc = 0x3061d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
label_3061d8:
    // 0x3061d8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3061d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3061dc:
    // 0x3061dc: 0x320f809  jalr        $t9
label_3061e0:
    if (ctx->pc == 0x3061E0u) {
        ctx->pc = 0x3061E0u;
            // 0x3061e0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3061E4u;
        goto label_3061e4;
    }
    ctx->pc = 0x3061DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3061E4u);
        ctx->pc = 0x3061E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3061DCu;
            // 0x3061e0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3061E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3061E4u; }
            if (ctx->pc != 0x3061E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3061E4u;
label_3061e4:
    // 0x3061e4: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x3061e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_3061e8:
    // 0x3061e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3061e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3061ec:
    // 0x3061ec: 0x8285010d  lb          $a1, 0x10D($s4)
    ctx->pc = 0x3061ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
label_3061f0:
    // 0x3061f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3061f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3061f4:
    // 0x3061f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3061f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3061f8:
    // 0x3061f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3061f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3061fc:
    // 0x3061fc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3061fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_306200:
    // 0x306200: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x306200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_306204:
    // 0x306204: 0x320f809  jalr        $t9
label_306208:
    if (ctx->pc == 0x306208u) {
        ctx->pc = 0x306208u;
            // 0x306208: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x30620Cu;
        goto label_30620c;
    }
    ctx->pc = 0x306204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30620Cu);
        ctx->pc = 0x306208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306204u;
            // 0x306208: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30620Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30620Cu; }
            if (ctx->pc != 0x30620Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30620Cu;
label_30620c:
    // 0x30620c: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x30620cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_306210:
    // 0x306210: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x306210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_306214:
    // 0x306214: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x306214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_306218:
    // 0x306218: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x306218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_30621c:
    // 0x30621c: 0x320f809  jalr        $t9
label_306220:
    if (ctx->pc == 0x306220u) {
        ctx->pc = 0x306220u;
            // 0x306220: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306224u;
        goto label_306224;
    }
    ctx->pc = 0x30621Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306224u);
        ctx->pc = 0x306220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30621Cu;
            // 0x306220: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306224u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306224u; }
            if (ctx->pc != 0x306224u) { return; }
        }
        }
    }
    ctx->pc = 0x306224u;
label_306224:
    // 0x306224: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x306224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306228:
    // 0x306228: 0x1000000a  b           . + 4 + (0xA << 2)
label_30622c:
    if (ctx->pc == 0x30622Cu) {
        ctx->pc = 0x30622Cu;
            // 0x30622c: 0xaea20e30  sw          $v0, 0xE30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3632), GPR_U32(ctx, 2));
        ctx->pc = 0x306230u;
        goto label_306230;
    }
    ctx->pc = 0x306228u;
    {
        const bool branch_taken_0x306228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306228u;
            // 0x30622c: 0xaea20e30  sw          $v0, 0xE30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306228) {
            ctx->pc = 0x306254u;
            goto label_306254;
        }
    }
    ctx->pc = 0x306230u;
label_306230:
    // 0x306230: 0x8ea40d70  lw          $a0, 0xD70($s5)
    ctx->pc = 0x306230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3440)));
label_306234:
    // 0x306234: 0xc0be258  jal         func_2F8960
label_306238:
    if (ctx->pc == 0x306238u) {
        ctx->pc = 0x30623Cu;
        goto label_30623c;
    }
    ctx->pc = 0x306234u;
    SET_GPR_U32(ctx, 31, 0x30623Cu);
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30623Cu; }
        if (ctx->pc != 0x30623Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30623Cu; }
        if (ctx->pc != 0x30623Cu) { return; }
    }
    ctx->pc = 0x30623Cu;
label_30623c:
    // 0x30623c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x30623cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_306240:
    // 0x306240: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x306240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_306244:
    // 0x306244: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x306244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306248:
    // 0x306248: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x306248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_30624c:
    // 0x30624c: 0x320f809  jalr        $t9
label_306250:
    if (ctx->pc == 0x306250u) {
        ctx->pc = 0x306250u;
            // 0x306250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306254u;
        goto label_306254;
    }
    ctx->pc = 0x30624Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306254u);
        ctx->pc = 0x306250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30624Cu;
            // 0x306250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306254u; }
            if (ctx->pc != 0x306254u) { return; }
        }
        }
    }
    ctx->pc = 0x306254u;
label_306254:
    // 0x306254: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x306254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306258:
    // 0x306258: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x306258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
label_30625c:
    // 0x30625c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x30625cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_306260:
    // 0x306260: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x306260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_306264:
    // 0x306264: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x306264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_306268:
    // 0x306268: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x306268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_30626c:
    // 0x30626c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30626cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306270:
    // 0x306270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x306270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306274:
    // 0x306274: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x306274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_306278:
    // 0x306278: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x306278u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30627c:
    // 0x30627c: 0xc047714  jal         func_11DC50
label_306280:
    if (ctx->pc == 0x306280u) {
        ctx->pc = 0x306280u;
            // 0x306280: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x306284u;
        goto label_306284;
    }
    ctx->pc = 0x30627Cu;
    SET_GPR_U32(ctx, 31, 0x306284u);
    ctx->pc = 0x306280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30627Cu;
            // 0x306280: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306284u; }
        if (ctx->pc != 0x306284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306284u; }
        if (ctx->pc != 0x306284u) { return; }
    }
    ctx->pc = 0x306284u;
label_306284:
    // 0x306284: 0x8ea20e30  lw          $v0, 0xE30($s5)
    ctx->pc = 0x306284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
label_306288:
    // 0x306288: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x306288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_30628c:
    // 0x30628c: 0x3463f2ba  ori         $v1, $v1, 0xF2BA
    ctx->pc = 0x30628cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62138);
label_306290:
    // 0x306290: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x306290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_306294:
    // 0x306294: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x306294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_306298:
    // 0x306298: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_30629c:
    if (ctx->pc == 0x30629Cu) {
        ctx->pc = 0x30629Cu;
            // 0x30629c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3062A0u;
        goto label_3062a0;
    }
    ctx->pc = 0x306298u;
    {
        const bool branch_taken_0x306298 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x306298) {
            ctx->pc = 0x30629Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306298u;
            // 0x30629c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3062ACu;
            goto label_3062ac;
        }
    }
    ctx->pc = 0x3062A0u;
label_3062a0:
    // 0x3062a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3062a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3062a4:
    // 0x3062a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3062a8:
    if (ctx->pc == 0x3062A8u) {
        ctx->pc = 0x3062A8u;
            // 0x3062a8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3062ACu;
        goto label_3062ac;
    }
    ctx->pc = 0x3062A4u;
    {
        const bool branch_taken_0x3062a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3062A4u;
            // 0x3062a8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062a4) {
            ctx->pc = 0x3062C4u;
            goto label_3062c4;
        }
    }
    ctx->pc = 0x3062ACu;
label_3062ac:
    // 0x3062ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3062acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3062b0:
    // 0x3062b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3062b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3062b4:
    // 0x3062b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3062b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3062b8:
    // 0x3062b8: 0x0  nop
    ctx->pc = 0x3062b8u;
    // NOP
label_3062bc:
    // 0x3062bc: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3062bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3062c0:
    // 0x3062c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3062c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3062c4:
    // 0x3062c4: 0x3c03bab6  lui         $v1, 0xBAB6
    ctx->pc = 0x3062c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47798 << 16));
label_3062c8:
    // 0x3062c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3062c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3062cc:
    // 0x3062cc: 0x34630b61  ori         $v1, $v1, 0xB61
    ctx->pc = 0x3062ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2913);
label_3062d0:
    // 0x3062d0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3062d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3062d4:
    // 0x3062d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3062d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3062d8:
    // 0x3062d8: 0x0  nop
    ctx->pc = 0x3062d8u;
    // NOP
label_3062dc:
    // 0x3062dc: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x3062dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3062e0:
    // 0x3062e0: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x3062e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_3062e4:
    // 0x3062e4: 0xe6a00de8  swc1        $f0, 0xDE8($s5)
    ctx->pc = 0x3062e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3560), bits); }
label_3062e8:
    // 0x3062e8: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x3062e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3062ec:
    // 0x3062ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3062ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3062f0:
    // 0x3062f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3062f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3062f4:
    // 0x3062f4: 0xc04c970  jal         func_1325C0
label_3062f8:
    if (ctx->pc == 0x3062F8u) {
        ctx->pc = 0x3062F8u;
            // 0x3062f8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3062FCu;
        goto label_3062fc;
    }
    ctx->pc = 0x3062F4u;
    SET_GPR_U32(ctx, 31, 0x3062FCu);
    ctx->pc = 0x3062F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3062F4u;
            // 0x3062f8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3062FCu; }
        if (ctx->pc != 0x3062FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3062FCu; }
        if (ctx->pc != 0x3062FCu) { return; }
    }
    ctx->pc = 0x3062FCu;
label_3062fc:
    // 0x3062fc: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x3062fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_306300:
    // 0x306300: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x306300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_306304:
    // 0x306304: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x306304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_306308:
    // 0x306308: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x306308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_30630c:
    // 0x30630c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30630cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306310:
    // 0x306310: 0xc04c970  jal         func_1325C0
label_306314:
    if (ctx->pc == 0x306314u) {
        ctx->pc = 0x306314u;
            // 0x306314: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x306318u;
        goto label_306318;
    }
    ctx->pc = 0x306310u;
    SET_GPR_U32(ctx, 31, 0x306318u);
    ctx->pc = 0x306314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306310u;
            // 0x306314: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306318u; }
        if (ctx->pc != 0x306318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306318u; }
        if (ctx->pc != 0x306318u) { return; }
    }
    ctx->pc = 0x306318u;
label_306318:
    // 0x306318: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x306318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_30631c:
    // 0x30631c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x30631cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_306320:
    // 0x306320: 0xc04c72c  jal         func_131CB0
label_306324:
    if (ctx->pc == 0x306324u) {
        ctx->pc = 0x306324u;
            // 0x306324: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306328u;
        goto label_306328;
    }
    ctx->pc = 0x306320u;
    SET_GPR_U32(ctx, 31, 0x306328u);
    ctx->pc = 0x306324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306320u;
            // 0x306324: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306328u; }
        if (ctx->pc != 0x306328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306328u; }
        if (ctx->pc != 0x306328u) { return; }
    }
    ctx->pc = 0x306328u;
label_306328:
    // 0x306328: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x306328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_30632c:
    // 0x30632c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30632cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_306330:
    // 0x306330: 0xc04c72c  jal         func_131CB0
label_306334:
    if (ctx->pc == 0x306334u) {
        ctx->pc = 0x306334u;
            // 0x306334: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306338u;
        goto label_306338;
    }
    ctx->pc = 0x306330u;
    SET_GPR_U32(ctx, 31, 0x306338u);
    ctx->pc = 0x306334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306330u;
            // 0x306334: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306338u; }
        if (ctx->pc != 0x306338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306338u; }
        if (ctx->pc != 0x306338u) { return; }
    }
    ctx->pc = 0x306338u;
label_306338:
    // 0x306338: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x306338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_30633c:
    // 0x30633c: 0xc04f278  jal         func_13C9E0
label_306340:
    if (ctx->pc == 0x306340u) {
        ctx->pc = 0x306340u;
            // 0x306340: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x306344u;
        goto label_306344;
    }
    ctx->pc = 0x30633Cu;
    SET_GPR_U32(ctx, 31, 0x306344u);
    ctx->pc = 0x306340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30633Cu;
            // 0x306340: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306344u; }
        if (ctx->pc != 0x306344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306344u; }
        if (ctx->pc != 0x306344u) { return; }
    }
    ctx->pc = 0x306344u;
label_306344:
    // 0x306344: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x306344u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_306348:
    // 0x306348: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x306348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_30634c:
    // 0x30634c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x30634cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_306350:
    // 0x306350: 0xc04cca0  jal         func_133280
label_306354:
    if (ctx->pc == 0x306354u) {
        ctx->pc = 0x306354u;
            // 0x306354: 0x24c62c00  addiu       $a2, $a2, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11264));
        ctx->pc = 0x306358u;
        goto label_306358;
    }
    ctx->pc = 0x306350u;
    SET_GPR_U32(ctx, 31, 0x306358u);
    ctx->pc = 0x306354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306350u;
            // 0x306354: 0x24c62c00  addiu       $a2, $a2, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306358u; }
        if (ctx->pc != 0x306358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306358u; }
        if (ctx->pc != 0x306358u) { return; }
    }
    ctx->pc = 0x306358u;
label_306358:
    // 0x306358: 0xc6ac0de4  lwc1        $f12, 0xDE4($s5)
    ctx->pc = 0x306358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30635c:
    // 0x30635c: 0x26a40330  addiu       $a0, $s5, 0x330
    ctx->pc = 0x30635cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 816));
label_306360:
    // 0x306360: 0xc04cc70  jal         func_1331C0
label_306364:
    if (ctx->pc == 0x306364u) {
        ctx->pc = 0x306364u;
            // 0x306364: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x306368u;
        goto label_306368;
    }
    ctx->pc = 0x306360u;
    SET_GPR_U32(ctx, 31, 0x306368u);
    ctx->pc = 0x306364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306360u;
            // 0x306364: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306368u; }
        if (ctx->pc != 0x306368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306368u; }
        if (ctx->pc != 0x306368u) { return; }
    }
    ctx->pc = 0x306368u;
label_306368:
    // 0x306368: 0x26a30890  addiu       $v1, $s5, 0x890
    ctx->pc = 0x306368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2192));
label_30636c:
    // 0x30636c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30636cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_306370:
    // 0x306370: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x306370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306374:
    // 0x306374: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x306374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_306378:
    // 0x306378: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x306378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_30637c:
    // 0x30637c: 0xc0c6250  jal         func_318940
label_306380:
    if (ctx->pc == 0x306380u) {
        ctx->pc = 0x306380u;
            // 0x306380: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x306384u;
        goto label_306384;
    }
    ctx->pc = 0x30637Cu;
    SET_GPR_U32(ctx, 31, 0x306384u);
    ctx->pc = 0x306380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30637Cu;
            // 0x306380: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306384u; }
        if (ctx->pc != 0x306384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306384u; }
        if (ctx->pc != 0x306384u) { return; }
    }
    ctx->pc = 0x306384u;
label_306384:
    // 0x306384: 0xc0754b4  jal         func_1D52D0
label_306388:
    if (ctx->pc == 0x306388u) {
        ctx->pc = 0x306388u;
            // 0x306388: 0x26a40440  addiu       $a0, $s5, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1088));
        ctx->pc = 0x30638Cu;
        goto label_30638c;
    }
    ctx->pc = 0x306384u;
    SET_GPR_U32(ctx, 31, 0x30638Cu);
    ctx->pc = 0x306388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306384u;
            // 0x306388: 0x26a40440  addiu       $a0, $s5, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30638Cu; }
        if (ctx->pc != 0x30638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30638Cu; }
        if (ctx->pc != 0x30638Cu) { return; }
    }
    ctx->pc = 0x30638Cu;
label_30638c:
    // 0x30638c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x30638cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_306390:
    // 0x306390: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x306390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_306394:
    // 0x306394: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
label_306398:
    if (ctx->pc == 0x306398u) {
        ctx->pc = 0x306398u;
            // 0x306398: 0x8ea40da0  lw          $a0, 0xDA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3488)));
        ctx->pc = 0x30639Cu;
        goto label_30639c;
    }
    ctx->pc = 0x306394u;
    {
        const bool branch_taken_0x306394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306394) {
            ctx->pc = 0x306398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306394u;
            // 0x306398: 0x8ea40da0  lw          $a0, 0xDA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306440u;
            goto label_306440;
        }
    }
    ctx->pc = 0x30639Cu;
label_30639c:
    // 0x30639c: 0x8ea30e0c  lw          $v1, 0xE0C($s5)
    ctx->pc = 0x30639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3596)));
label_3063a0:
    // 0x3063a0: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x3063a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3063a4:
    // 0x3063a4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3063a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3063a8:
    // 0x3063a8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3063a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3063ac:
    // 0x3063ac: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_3063b0:
    if (ctx->pc == 0x3063B0u) {
        ctx->pc = 0x3063B0u;
            // 0x3063b0: 0x26a40a50  addiu       $a0, $s5, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2640));
        ctx->pc = 0x3063B4u;
        goto label_3063b4;
    }
    ctx->pc = 0x3063ACu;
    {
        const bool branch_taken_0x3063ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3063B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3063ACu;
            // 0x3063b0: 0x26a40a50  addiu       $a0, $s5, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063ac) {
            ctx->pc = 0x3063E4u;
            goto label_3063e4;
        }
    }
    ctx->pc = 0x3063B4u;
label_3063b4:
    // 0x3063b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3063b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3063b8:
    // 0x3063b8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3063b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3063bc:
    // 0x3063bc: 0x24422be8  addiu       $v0, $v0, 0x2BE8
    ctx->pc = 0x3063bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11240));
label_3063c0:
    // 0x3063c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3063c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3063c4:
    // 0x3063c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3063c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3063c8:
    // 0x3063c8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3063c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3063cc:
    // 0x3063cc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3063ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3063d0:
    // 0x3063d0: 0xc6a00de4  lwc1        $f0, 0xDE4($s5)
    ctx->pc = 0x3063d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3063d4:
    // 0x3063d4: 0xc4420c7c  lwc1        $f2, 0xC7C($v0)
    ctx->pc = 0x3063d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3063d8:
    // 0x3063d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3063d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3063dc:
    // 0x3063dc: 0x10000009  b           . + 4 + (0x9 << 2)
label_3063e0:
    if (ctx->pc == 0x3063E0u) {
        ctx->pc = 0x3063E0u;
            // 0x3063e0: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3063E4u;
        goto label_3063e4;
    }
    ctx->pc = 0x3063DCu;
    {
        const bool branch_taken_0x3063dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3063E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3063DCu;
            // 0x3063e0: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063dc) {
            ctx->pc = 0x306404u;
            goto label_306404;
        }
    }
    ctx->pc = 0x3063E4u;
label_3063e4:
    // 0x3063e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3063e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3063e8:
    // 0x3063e8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3063e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3063ec:
    // 0x3063ec: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3063ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3063f0:
    // 0x3063f0: 0xc4412bf0  lwc1        $f1, 0x2BF0($v0)
    ctx->pc = 0x3063f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3063f4:
    // 0x3063f4: 0xc6a00de4  lwc1        $f0, 0xDE4($s5)
    ctx->pc = 0x3063f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3063f8:
    // 0x3063f8: 0xc4620c7c  lwc1        $f2, 0xC7C($v1)
    ctx->pc = 0x3063f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3063fc:
    // 0x3063fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3063fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_306400:
    // 0x306400: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x306400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_306404:
    // 0x306404: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x306404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_306408:
    // 0x306408: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x306408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_30640c:
    // 0x30640c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x30640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306410:
    // 0x306410: 0xc0eea40  jal         func_3BA900
label_306414:
    if (ctx->pc == 0x306414u) {
        ctx->pc = 0x306414u;
            // 0x306414: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x306418u;
        goto label_306418;
    }
    ctx->pc = 0x306410u;
    SET_GPR_U32(ctx, 31, 0x306418u);
    ctx->pc = 0x306414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306410u;
            // 0x306414: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA900u;
    if (runtime->hasFunction(0x3BA900u)) {
        auto targetFn = runtime->lookupFunction(0x3BA900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306418u; }
        if (ctx->pc != 0x306418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA900_0x3ba900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306418u; }
        if (ctx->pc != 0x306418u) { return; }
    }
    ctx->pc = 0x306418u;
label_306418:
    // 0x306418: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x306418u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_30641c:
    // 0x30641c: 0x26a40a50  addiu       $a0, $s5, 0xA50
    ctx->pc = 0x30641cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2640));
label_306420:
    // 0x306420: 0xc6a00a7c  lwc1        $f0, 0xA7C($s5)
    ctx->pc = 0x306420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306424:
    // 0x306424: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x306424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_306428:
    // 0x306428: 0xc0eea24  jal         func_3BA890
label_30642c:
    if (ctx->pc == 0x30642Cu) {
        ctx->pc = 0x30642Cu;
            // 0x30642c: 0xe6a00a7c  swc1        $f0, 0xA7C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2684), bits); }
        ctx->pc = 0x306430u;
        goto label_306430;
    }
    ctx->pc = 0x306428u;
    SET_GPR_U32(ctx, 31, 0x306430u);
    ctx->pc = 0x30642Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306428u;
            // 0x30642c: 0xe6a00a7c  swc1        $f0, 0xA7C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306430u; }
        if (ctx->pc != 0x306430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306430u; }
        if (ctx->pc != 0x306430u) { return; }
    }
    ctx->pc = 0x306430u;
label_306430:
    // 0x306430: 0xc6a00a80  lwc1        $f0, 0xA80($s5)
    ctx->pc = 0x306430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306434:
    // 0x306434: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x306434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_306438:
    // 0x306438: 0xe6a00a80  swc1        $f0, 0xA80($s5)
    ctx->pc = 0x306438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2688), bits); }
label_30643c:
    // 0x30643c: 0x8ea40da0  lw          $a0, 0xDA0($s5)
    ctx->pc = 0x30643cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3488)));
label_306440:
    // 0x306440: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x306440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_306444:
    // 0x306444: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_306448:
    if (ctx->pc == 0x306448u) {
        ctx->pc = 0x306448u;
            // 0x306448: 0x8ea30e30  lw          $v1, 0xE30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
        ctx->pc = 0x30644Cu;
        goto label_30644c;
    }
    ctx->pc = 0x306444u;
    {
        const bool branch_taken_0x306444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306444) {
            ctx->pc = 0x306448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306444u;
            // 0x306448: 0x8ea30e30  lw          $v1, 0xE30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30645Cu;
            goto label_30645c;
        }
    }
    ctx->pc = 0x30644Cu;
label_30644c:
    // 0x30644c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x30644cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_306450:
    // 0x306450: 0x506000de  beql        $v1, $zero, . + 4 + (0xDE << 2)
label_306454:
    if (ctx->pc == 0x306454u) {
        ctx->pc = 0x306454u;
            // 0x306454: 0xc6a00de4  lwc1        $f0, 0xDE4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x306458u;
        goto label_306458;
    }
    ctx->pc = 0x306450u;
    {
        const bool branch_taken_0x306450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306450) {
            ctx->pc = 0x306454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306450u;
            // 0x306454: 0xc6a00de4  lwc1        $f0, 0xDE4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3067CCu;
            goto label_3067cc;
        }
    }
    ctx->pc = 0x306458u;
label_306458:
    // 0x306458: 0x8ea30e30  lw          $v1, 0xE30($s5)
    ctx->pc = 0x306458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
label_30645c:
    // 0x30645c: 0x186000da  blez        $v1, . + 4 + (0xDA << 2)
label_306460:
    if (ctx->pc == 0x306460u) {
        ctx->pc = 0x306464u;
        goto label_306464;
    }
    ctx->pc = 0x30645Cu;
    {
        const bool branch_taken_0x30645c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x30645c) {
            ctx->pc = 0x3067C8u;
            goto label_3067c8;
        }
    }
    ctx->pc = 0x306464u;
label_306464:
    // 0x306464: 0x26a40560  addiu       $a0, $s5, 0x560
    ctx->pc = 0x306464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1376));
label_306468:
    // 0x306468: 0x26a508d0  addiu       $a1, $s5, 0x8D0
    ctx->pc = 0x306468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2256));
label_30646c:
    // 0x30646c: 0xc075378  jal         func_1D4DE0
label_306470:
    if (ctx->pc == 0x306470u) {
        ctx->pc = 0x306470u;
            // 0x306470: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306474u;
        goto label_306474;
    }
    ctx->pc = 0x30646Cu;
    SET_GPR_U32(ctx, 31, 0x306474u);
    ctx->pc = 0x306470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30646Cu;
            // 0x306470: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306474u; }
        if (ctx->pc != 0x306474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306474u; }
        if (ctx->pc != 0x306474u) { return; }
    }
    ctx->pc = 0x306474u;
label_306474:
    // 0x306474: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x306474u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_306478:
    // 0x306478: 0x26a4092c  addiu       $a0, $s5, 0x92C
    ctx->pc = 0x306478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2348));
label_30647c:
    // 0x30647c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30647cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_306480:
    // 0x306480: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x306480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_306484:
    // 0x306484: 0xc0c753c  jal         func_31D4F0
label_306488:
    if (ctx->pc == 0x306488u) {
        ctx->pc = 0x306488u;
            // 0x306488: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x30648Cu;
        goto label_30648c;
    }
    ctx->pc = 0x306484u;
    SET_GPR_U32(ctx, 31, 0x30648Cu);
    ctx->pc = 0x306488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306484u;
            // 0x306488: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30648Cu; }
        if (ctx->pc != 0x30648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30648Cu; }
        if (ctx->pc != 0x30648Cu) { return; }
    }
    ctx->pc = 0x30648Cu;
label_30648c:
    // 0x30648c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30648cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_306490:
    // 0x306490: 0x26a4087c  addiu       $a0, $s5, 0x87C
    ctx->pc = 0x306490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2172));
label_306494:
    // 0x306494: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x306494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_306498:
    // 0x306498: 0xc0c753c  jal         func_31D4F0
label_30649c:
    if (ctx->pc == 0x30649Cu) {
        ctx->pc = 0x30649Cu;
            // 0x30649c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3064A0u;
        goto label_3064a0;
    }
    ctx->pc = 0x306498u;
    SET_GPR_U32(ctx, 31, 0x3064A0u);
    ctx->pc = 0x30649Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306498u;
            // 0x30649c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064A0u; }
        if (ctx->pc != 0x3064A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064A0u; }
        if (ctx->pc != 0x3064A0u) { return; }
    }
    ctx->pc = 0x3064A0u;
label_3064a0:
    // 0x3064a0: 0xc0b9210  jal         func_2E4840
label_3064a4:
    if (ctx->pc == 0x3064A4u) {
        ctx->pc = 0x3064A4u;
            // 0x3064a4: 0x26a407e0  addiu       $a0, $s5, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2016));
        ctx->pc = 0x3064A8u;
        goto label_3064a8;
    }
    ctx->pc = 0x3064A0u;
    SET_GPR_U32(ctx, 31, 0x3064A8u);
    ctx->pc = 0x3064A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3064A0u;
            // 0x3064a4: 0x26a407e0  addiu       $a0, $s5, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064A8u; }
        if (ctx->pc != 0x3064A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064A8u; }
        if (ctx->pc != 0x3064A8u) { return; }
    }
    ctx->pc = 0x3064A8u;
label_3064a8:
    // 0x3064a8: 0x26a50560  addiu       $a1, $s5, 0x560
    ctx->pc = 0x3064a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1376));
label_3064ac:
    // 0x3064ac: 0x26a408f0  addiu       $a0, $s5, 0x8F0
    ctx->pc = 0x3064acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2288));
label_3064b0:
    // 0x3064b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3064b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3064b4:
    // 0x3064b4: 0xc0c6250  jal         func_318940
label_3064b8:
    if (ctx->pc == 0x3064B8u) {
        ctx->pc = 0x3064B8u;
            // 0x3064b8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3064BCu;
        goto label_3064bc;
    }
    ctx->pc = 0x3064B4u;
    SET_GPR_U32(ctx, 31, 0x3064BCu);
    ctx->pc = 0x3064B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3064B4u;
            // 0x3064b8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064BCu; }
        if (ctx->pc != 0x3064BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064BCu; }
        if (ctx->pc != 0x3064BCu) { return; }
    }
    ctx->pc = 0x3064BCu;
label_3064bc:
    // 0x3064bc: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x3064bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_3064c0:
    // 0x3064c0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3064c0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3064c4:
    // 0x3064c4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3064c8:
    if (ctx->pc == 0x3064C8u) {
        ctx->pc = 0x3064C8u;
            // 0x3064c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3064CCu;
        goto label_3064cc;
    }
    ctx->pc = 0x3064C4u;
    {
        const bool branch_taken_0x3064c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3064C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3064C4u;
            // 0x3064c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064c4) {
            ctx->pc = 0x3064DCu;
            goto label_3064dc;
        }
    }
    ctx->pc = 0x3064CCu;
label_3064cc:
    // 0x3064cc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3064ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3064d0:
    // 0x3064d0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3064d4:
    if (ctx->pc == 0x3064D4u) {
        ctx->pc = 0x3064D8u;
        goto label_3064d8;
    }
    ctx->pc = 0x3064D0u;
    {
        const bool branch_taken_0x3064d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3064d0) {
            ctx->pc = 0x3064DCu;
            goto label_3064dc;
        }
    }
    ctx->pc = 0x3064D8u;
label_3064d8:
    // 0x3064d8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3064d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3064dc:
    // 0x3064dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3064e0:
    if (ctx->pc == 0x3064E0u) {
        ctx->pc = 0x3064E4u;
        goto label_3064e4;
    }
    ctx->pc = 0x3064DCu;
    {
        const bool branch_taken_0x3064dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3064dc) {
            ctx->pc = 0x3064F8u;
            goto label_3064f8;
        }
    }
    ctx->pc = 0x3064E4u;
label_3064e4:
    // 0x3064e4: 0xc075eb4  jal         func_1D7AD0
label_3064e8:
    if (ctx->pc == 0x3064E8u) {
        ctx->pc = 0x3064E8u;
            // 0x3064e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3064ECu;
        goto label_3064ec;
    }
    ctx->pc = 0x3064E4u;
    SET_GPR_U32(ctx, 31, 0x3064ECu);
    ctx->pc = 0x3064E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3064E4u;
            // 0x3064e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064ECu; }
        if (ctx->pc != 0x3064ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064ECu; }
        if (ctx->pc != 0x3064ECu) { return; }
    }
    ctx->pc = 0x3064ECu;
label_3064ec:
    // 0x3064ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3064f0:
    if (ctx->pc == 0x3064F0u) {
        ctx->pc = 0x3064F4u;
        goto label_3064f4;
    }
    ctx->pc = 0x3064ECu;
    {
        const bool branch_taken_0x3064ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3064ec) {
            ctx->pc = 0x3064F8u;
            goto label_3064f8;
        }
    }
    ctx->pc = 0x3064F4u;
label_3064f4:
    // 0x3064f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3064f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3064f8:
    // 0x3064f8: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_3064fc:
    if (ctx->pc == 0x3064FCu) {
        ctx->pc = 0x3064FCu;
            // 0x3064fc: 0x92a4005c  lbu         $a0, 0x5C($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
        ctx->pc = 0x306500u;
        goto label_306500;
    }
    ctx->pc = 0x3064F8u;
    {
        const bool branch_taken_0x3064f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3064f8) {
            ctx->pc = 0x3064FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3064F8u;
            // 0x3064fc: 0x92a4005c  lbu         $a0, 0x5C($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306514u;
            goto label_306514;
        }
    }
    ctx->pc = 0x306500u;
label_306500:
    // 0x306500: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x306500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_306504:
    // 0x306504: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x306504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_306508:
    // 0x306508: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_30650c:
    if (ctx->pc == 0x30650Cu) {
        ctx->pc = 0x30650Cu;
            // 0x30650c: 0x8ea20e38  lw          $v0, 0xE38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3640)));
        ctx->pc = 0x306510u;
        goto label_306510;
    }
    ctx->pc = 0x306508u;
    {
        const bool branch_taken_0x306508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x306508) {
            ctx->pc = 0x30650Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306508u;
            // 0x30650c: 0x8ea20e38  lw          $v0, 0xE38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306528u;
            goto label_306528;
        }
    }
    ctx->pc = 0x306510u;
label_306510:
    // 0x306510: 0x92a4005c  lbu         $a0, 0x5C($s5)
    ctx->pc = 0x306510u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
label_306514:
    // 0x306514: 0xc072aaa  jal         func_1CAAA8
label_306518:
    if (ctx->pc == 0x306518u) {
        ctx->pc = 0x30651Cu;
        goto label_30651c;
    }
    ctx->pc = 0x306514u;
    SET_GPR_U32(ctx, 31, 0x30651Cu);
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30651Cu; }
        if (ctx->pc != 0x30651Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30651Cu; }
        if (ctx->pc != 0x30651Cu) { return; }
    }
    ctx->pc = 0x30651Cu;
label_30651c:
    // 0x30651c: 0xc0bd98c  jal         func_2F6630
label_306520:
    if (ctx->pc == 0x306520u) {
        ctx->pc = 0x306520u;
            // 0x306520: 0x8ea40d70  lw          $a0, 0xD70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3440)));
        ctx->pc = 0x306524u;
        goto label_306524;
    }
    ctx->pc = 0x30651Cu;
    SET_GPR_U32(ctx, 31, 0x306524u);
    ctx->pc = 0x306520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30651Cu;
            // 0x306520: 0x8ea40d70  lw          $a0, 0xD70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6630u;
    if (runtime->hasFunction(0x2F6630u)) {
        auto targetFn = runtime->lookupFunction(0x2F6630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306524u; }
        if (ctx->pc != 0x306524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6630_0x2f6630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306524u; }
        if (ctx->pc != 0x306524u) { return; }
    }
    ctx->pc = 0x306524u;
label_306524:
    // 0x306524: 0x8ea20e38  lw          $v0, 0xE38($s5)
    ctx->pc = 0x306524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3640)));
label_306528:
    // 0x306528: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x306528u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_30652c:
    // 0x30652c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_306530:
    if (ctx->pc == 0x306530u) {
        ctx->pc = 0x306530u;
            // 0x306530: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306534u;
        goto label_306534;
    }
    ctx->pc = 0x30652Cu;
    {
        const bool branch_taken_0x30652c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x306530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30652Cu;
            // 0x306530: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30652c) {
            ctx->pc = 0x306544u;
            goto label_306544;
        }
    }
    ctx->pc = 0x306534u;
label_306534:
    // 0x306534: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x306534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_306538:
    // 0x306538: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_30653c:
    if (ctx->pc == 0x30653Cu) {
        ctx->pc = 0x306540u;
        goto label_306540;
    }
    ctx->pc = 0x306538u;
    {
        const bool branch_taken_0x306538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x306538) {
            ctx->pc = 0x306544u;
            goto label_306544;
        }
    }
    ctx->pc = 0x306540u;
label_306540:
    // 0x306540: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x306540u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306544:
    // 0x306544: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_306548:
    if (ctx->pc == 0x306548u) {
        ctx->pc = 0x30654Cu;
        goto label_30654c;
    }
    ctx->pc = 0x306544u;
    {
        const bool branch_taken_0x306544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306544) {
            ctx->pc = 0x306560u;
            goto label_306560;
        }
    }
    ctx->pc = 0x30654Cu;
label_30654c:
    // 0x30654c: 0xc075eb4  jal         func_1D7AD0
label_306550:
    if (ctx->pc == 0x306550u) {
        ctx->pc = 0x306550u;
            // 0x306550: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306554u;
        goto label_306554;
    }
    ctx->pc = 0x30654Cu;
    SET_GPR_U32(ctx, 31, 0x306554u);
    ctx->pc = 0x306550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30654Cu;
            // 0x306550: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306554u; }
        if (ctx->pc != 0x306554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306554u; }
        if (ctx->pc != 0x306554u) { return; }
    }
    ctx->pc = 0x306554u;
label_306554:
    // 0x306554: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_306558:
    if (ctx->pc == 0x306558u) {
        ctx->pc = 0x30655Cu;
        goto label_30655c;
    }
    ctx->pc = 0x306554u;
    {
        const bool branch_taken_0x306554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306554) {
            ctx->pc = 0x306560u;
            goto label_306560;
        }
    }
    ctx->pc = 0x30655Cu;
label_30655c:
    // 0x30655c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30655cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306560:
    // 0x306560: 0x52000049  beql        $s0, $zero, . + 4 + (0x49 << 2)
label_306564:
    if (ctx->pc == 0x306564u) {
        ctx->pc = 0x306564u;
            // 0x306564: 0xaea00e1c  sw          $zero, 0xE1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3612), GPR_U32(ctx, 0));
        ctx->pc = 0x306568u;
        goto label_306568;
    }
    ctx->pc = 0x306560u;
    {
        const bool branch_taken_0x306560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x306560) {
            ctx->pc = 0x306564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306560u;
            // 0x306564: 0xaea00e1c  sw          $zero, 0xE1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306688u;
            goto label_306688;
        }
    }
    ctx->pc = 0x306568u;
label_306568:
    // 0x306568: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x306568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_30656c:
    // 0x30656c: 0x8ea30d98  lw          $v1, 0xD98($s5)
    ctx->pc = 0x30656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_306570:
    // 0x306570: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x306570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_306574:
    // 0x306574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x306574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_306578:
    // 0x306578: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x306578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_30657c:
    // 0x30657c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_306580:
    // 0x306580: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x306580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_306584:
    // 0x306584: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x306584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_306588:
    // 0x306588: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x306588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_30658c:
    // 0x30658c: 0x320f809  jalr        $t9
label_306590:
    if (ctx->pc == 0x306590u) {
        ctx->pc = 0x306594u;
        goto label_306594;
    }
    ctx->pc = 0x30658Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306594u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x306594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306594u; }
            if (ctx->pc != 0x306594u) { return; }
        }
        }
    }
    ctx->pc = 0x306594u;
label_306594:
    // 0x306594: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x306594u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_306598:
    // 0x306598: 0x8ea30d98  lw          $v1, 0xD98($s5)
    ctx->pc = 0x306598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_30659c:
    // 0x30659c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3065a0:
    // 0x3065a0: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3065a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3065a4:
    // 0x3065a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3065a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3065a8:
    // 0x3065a8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3065a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3065ac:
    // 0x3065ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3065acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3065b0:
    // 0x3065b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3065b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3065b4:
    // 0x3065b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3065b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3065b8:
    // 0x3065b8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3065b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3065bc:
    // 0x3065bc: 0x320f809  jalr        $t9
label_3065c0:
    if (ctx->pc == 0x3065C0u) {
        ctx->pc = 0x3065C4u;
        goto label_3065c4;
    }
    ctx->pc = 0x3065BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3065C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3065C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3065C4u; }
            if (ctx->pc != 0x3065C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3065C4u;
label_3065c4:
    // 0x3065c4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_3065c8:
    if (ctx->pc == 0x3065C8u) {
        ctx->pc = 0x3065C8u;
            // 0x3065c8: 0x8c500018  lw          $s0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x3065CCu;
        goto label_3065cc;
    }
    ctx->pc = 0x3065C4u;
    {
        const bool branch_taken_0x3065c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3065C4u;
            // 0x3065c8: 0x8c500018  lw          $s0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065c4) {
            ctx->pc = 0x306624u;
            goto label_306624;
        }
    }
    ctx->pc = 0x3065CCu;
label_3065cc:
    // 0x3065cc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3065ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3065d0:
    // 0x3065d0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3065d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3065d4:
    // 0x3065d4: 0x320f809  jalr        $t9
label_3065d8:
    if (ctx->pc == 0x3065D8u) {
        ctx->pc = 0x3065D8u;
            // 0x3065d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3065DCu;
        goto label_3065dc;
    }
    ctx->pc = 0x3065D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3065DCu);
        ctx->pc = 0x3065D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3065D4u;
            // 0x3065d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3065DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3065DCu; }
            if (ctx->pc != 0x3065DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3065DCu;
label_3065dc:
    // 0x3065dc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3065dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3065e0:
    // 0x3065e0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_3065e4:
    if (ctx->pc == 0x3065E4u) {
        ctx->pc = 0x3065E8u;
        goto label_3065e8;
    }
    ctx->pc = 0x3065E0u;
    {
        const bool branch_taken_0x3065e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3065e0) {
            ctx->pc = 0x306624u;
            goto label_306624;
        }
    }
    ctx->pc = 0x3065E8u;
label_3065e8:
    // 0x3065e8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3065e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3065ec:
    // 0x3065ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3065ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3065f0:
    // 0x3065f0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3065f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3065f4:
    // 0x3065f4: 0x320f809  jalr        $t9
label_3065f8:
    if (ctx->pc == 0x3065F8u) {
        ctx->pc = 0x3065F8u;
            // 0x3065f8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3065FCu;
        goto label_3065fc;
    }
    ctx->pc = 0x3065F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3065FCu);
        ctx->pc = 0x3065F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3065F4u;
            // 0x3065f8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3065FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3065FCu; }
            if (ctx->pc != 0x3065FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3065FCu;
label_3065fc:
    // 0x3065fc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3065fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_306600:
    // 0x306600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306604:
    // 0x306604: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x306604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_306608:
    // 0x306608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30660c:
    // 0x30660c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x30660cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_306610:
    // 0x306610: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x306610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_306614:
    // 0x306614: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x306614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_306618:
    // 0x306618: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x306618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_30661c:
    // 0x30661c: 0x320f809  jalr        $t9
label_306620:
    if (ctx->pc == 0x306620u) {
        ctx->pc = 0x306620u;
            // 0x306620: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x306624u;
        goto label_306624;
    }
    ctx->pc = 0x30661Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306624u);
        ctx->pc = 0x306620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30661Cu;
            // 0x306620: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306624u; }
            if (ctx->pc != 0x306624u) { return; }
        }
        }
    }
    ctx->pc = 0x306624u;
label_306624:
    // 0x306624: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_306628:
    if (ctx->pc == 0x306628u) {
        ctx->pc = 0x30662Cu;
        goto label_30662c;
    }
    ctx->pc = 0x306624u;
    {
        const bool branch_taken_0x306624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x306624) {
            ctx->pc = 0x306684u;
            goto label_306684;
        }
    }
    ctx->pc = 0x30662Cu;
label_30662c:
    // 0x30662c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x30662cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_306630:
    // 0x306630: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x306630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_306634:
    // 0x306634: 0x320f809  jalr        $t9
label_306638:
    if (ctx->pc == 0x306638u) {
        ctx->pc = 0x306638u;
            // 0x306638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30663Cu;
        goto label_30663c;
    }
    ctx->pc = 0x306634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30663Cu);
        ctx->pc = 0x306638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306634u;
            // 0x306638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30663Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30663Cu; }
            if (ctx->pc != 0x30663Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30663Cu;
label_30663c:
    // 0x30663c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x30663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_306640:
    // 0x306640: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_306644:
    if (ctx->pc == 0x306644u) {
        ctx->pc = 0x306648u;
        goto label_306648;
    }
    ctx->pc = 0x306640u;
    {
        const bool branch_taken_0x306640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306640) {
            ctx->pc = 0x306684u;
            goto label_306684;
        }
    }
    ctx->pc = 0x306648u;
label_306648:
    // 0x306648: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x306648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30664c:
    // 0x30664c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30664cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306650:
    // 0x306650: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x306650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_306654:
    // 0x306654: 0x320f809  jalr        $t9
label_306658:
    if (ctx->pc == 0x306658u) {
        ctx->pc = 0x306658u;
            // 0x306658: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x30665Cu;
        goto label_30665c;
    }
    ctx->pc = 0x306654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30665Cu);
        ctx->pc = 0x306658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306654u;
            // 0x306658: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30665Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30665Cu; }
            if (ctx->pc != 0x30665Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30665Cu;
label_30665c:
    // 0x30665c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x30665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_306660:
    // 0x306660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306664:
    // 0x306664: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x306664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_306668:
    // 0x306668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30666c:
    // 0x30666c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x30666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_306670:
    // 0x306670: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x306670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_306674:
    // 0x306674: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x306674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_306678:
    // 0x306678: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x306678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_30667c:
    // 0x30667c: 0x320f809  jalr        $t9
label_306680:
    if (ctx->pc == 0x306680u) {
        ctx->pc = 0x306680u;
            // 0x306680: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x306684u;
        goto label_306684;
    }
    ctx->pc = 0x30667Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306684u);
        ctx->pc = 0x306680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30667Cu;
            // 0x306680: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306684u; }
            if (ctx->pc != 0x306684u) { return; }
        }
        }
    }
    ctx->pc = 0x306684u;
label_306684:
    // 0x306684: 0xaea00e1c  sw          $zero, 0xE1C($s5)
    ctx->pc = 0x306684u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3612), GPR_U32(ctx, 0));
label_306688:
    // 0x306688: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x306688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30668c:
    // 0x30668c: 0xa6620018  sh          $v0, 0x18($s3)
    ctx->pc = 0x30668cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 2));
label_306690:
    // 0x306690: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x306690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_306694:
    // 0x306694: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x306694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_306698:
    // 0x306698: 0x26a40330  addiu       $a0, $s5, 0x330
    ctx->pc = 0x306698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 816));
label_30669c:
    // 0x30669c: 0xaea20db8  sw          $v0, 0xDB8($s5)
    ctx->pc = 0x30669cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3512), GPR_U32(ctx, 2));
label_3066a0:
    // 0x3066a0: 0xc04cc04  jal         func_133010
label_3066a4:
    if (ctx->pc == 0x3066A4u) {
        ctx->pc = 0x3066A4u;
            // 0x3066a4: 0x24a52c10  addiu       $a1, $a1, 0x2C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11280));
        ctx->pc = 0x3066A8u;
        goto label_3066a8;
    }
    ctx->pc = 0x3066A0u;
    SET_GPR_U32(ctx, 31, 0x3066A8u);
    ctx->pc = 0x3066A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3066A0u;
            // 0x3066a4: 0x24a52c10  addiu       $a1, $a1, 0x2C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3066A8u; }
        if (ctx->pc != 0x3066A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3066A8u; }
        if (ctx->pc != 0x3066A8u) { return; }
    }
    ctx->pc = 0x3066A8u;
label_3066a8:
    // 0x3066a8: 0x8ea20da0  lw          $v0, 0xDA0($s5)
    ctx->pc = 0x3066a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3488)));
label_3066ac:
    // 0x3066ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3066acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3066b0:
    // 0x3066b0: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_3066b4:
    if (ctx->pc == 0x3066B4u) {
        ctx->pc = 0x3066B4u;
            // 0x3066b4: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3066B8u;
        goto label_3066b8;
    }
    ctx->pc = 0x3066B0u;
    {
        const bool branch_taken_0x3066b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3066b0) {
            ctx->pc = 0x3066B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3066B0u;
            // 0x3066b4: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x306748u;
            goto label_306748;
        }
    }
    ctx->pc = 0x3066B8u;
label_3066b8:
    // 0x3066b8: 0x8eb00550  lw          $s0, 0x550($s5)
    ctx->pc = 0x3066b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1360)));
label_3066bc:
    // 0x3066bc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3066bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3066c0:
    // 0x3066c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3066c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3066c4:
    // 0x3066c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3066c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3066c8:
    // 0x3066c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3066c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3066cc:
    // 0x3066cc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3066ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3066d0:
    // 0x3066d0: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x3066d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3066d4:
    // 0x3066d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3066d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3066d8:
    // 0x3066d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3066d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3066dc:
    // 0x3066dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3066dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3066e0:
    // 0x3066e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3066e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3066e4:
    // 0x3066e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3066e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3066e8:
    // 0x3066e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3066e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3066ec:
    // 0x3066ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3066ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3066f0:
    // 0x3066f0: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3066f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3066f4:
    // 0x3066f4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3066f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3066f8:
    // 0x3066f8: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3066f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3066fc:
    // 0x3066fc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3066fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_306700:
    // 0x306700: 0x320f809  jalr        $t9
label_306704:
    if (ctx->pc == 0x306704u) {
        ctx->pc = 0x306704u;
            // 0x306704: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x306708u;
        goto label_306708;
    }
    ctx->pc = 0x306700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306708u);
        ctx->pc = 0x306704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306700u;
            // 0x306704: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306708u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306708u; }
            if (ctx->pc != 0x306708u) { return; }
        }
        }
    }
    ctx->pc = 0x306708u;
label_306708:
    // 0x306708: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x306708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_30670c:
    // 0x30670c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30670cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306710:
    // 0x306710: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x306710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_306714:
    // 0x306714: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x306714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_306718:
    // 0x306718: 0x320f809  jalr        $t9
label_30671c:
    if (ctx->pc == 0x30671Cu) {
        ctx->pc = 0x30671Cu;
            // 0x30671c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x306720u;
        goto label_306720;
    }
    ctx->pc = 0x306718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306720u);
        ctx->pc = 0x30671Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306718u;
            // 0x30671c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306720u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306720u; }
            if (ctx->pc != 0x306720u) { return; }
        }
        }
    }
    ctx->pc = 0x306720u;
label_306720:
    // 0x306720: 0x8ea20da0  lw          $v0, 0xDA0($s5)
    ctx->pc = 0x306720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3488)));
label_306724:
    // 0x306724: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x306724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_306728:
    // 0x306728: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x306728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_30672c:
    // 0x30672c: 0xaea20da0  sw          $v0, 0xDA0($s5)
    ctx->pc = 0x30672cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3488), GPR_U32(ctx, 2));
label_306730:
    // 0x306730: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x306730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_306734:
    // 0x306734: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x306734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_306738:
    // 0x306738: 0x320f809  jalr        $t9
label_30673c:
    if (ctx->pc == 0x30673Cu) {
        ctx->pc = 0x30673Cu;
            // 0x30673c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x306740u;
        goto label_306740;
    }
    ctx->pc = 0x306738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306740u);
        ctx->pc = 0x30673Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306738u;
            // 0x30673c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306740u; }
            if (ctx->pc != 0x306740u) { return; }
        }
        }
    }
    ctx->pc = 0x306740u;
label_306740:
    // 0x306740: 0x10000006  b           . + 4 + (0x6 << 2)
label_306744:
    if (ctx->pc == 0x306744u) {
        ctx->pc = 0x306744u;
            // 0x306744: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306748u;
        goto label_306748;
    }
    ctx->pc = 0x306740u;
    {
        const bool branch_taken_0x306740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306740u;
            // 0x306744: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306740) {
            ctx->pc = 0x30675Cu;
            goto label_30675c;
        }
    }
    ctx->pc = 0x306748u;
label_306748:
    // 0x306748: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x306748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30674c:
    // 0x30674c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x30674cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_306750:
    // 0x306750: 0x320f809  jalr        $t9
label_306754:
    if (ctx->pc == 0x306754u) {
        ctx->pc = 0x306754u;
            // 0x306754: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x306758u;
        goto label_306758;
    }
    ctx->pc = 0x306750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306758u);
        ctx->pc = 0x306754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306750u;
            // 0x306754: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306758u; }
            if (ctx->pc != 0x306758u) { return; }
        }
        }
    }
    ctx->pc = 0x306758u;
label_306758:
    // 0x306758: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x306758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30675c:
    // 0x30675c: 0xc0c1590  jal         func_305640
label_306760:
    if (ctx->pc == 0x306760u) {
        ctx->pc = 0x306764u;
        goto label_306764;
    }
    ctx->pc = 0x30675Cu;
    SET_GPR_U32(ctx, 31, 0x306764u);
    ctx->pc = 0x305640u;
    if (runtime->hasFunction(0x305640u)) {
        auto targetFn = runtime->lookupFunction(0x305640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306764u; }
        if (ctx->pc != 0x306764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305640_0x305640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306764u; }
        if (ctx->pc != 0x306764u) { return; }
    }
    ctx->pc = 0x306764u;
label_306764:
    // 0x306764: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x306764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_306768:
    // 0x306768: 0xc07649c  jal         func_1D9270
label_30676c:
    if (ctx->pc == 0x30676Cu) {
        ctx->pc = 0x30676Cu;
            // 0x30676c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x306770u;
        goto label_306770;
    }
    ctx->pc = 0x306768u;
    SET_GPR_U32(ctx, 31, 0x306770u);
    ctx->pc = 0x30676Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306768u;
            // 0x30676c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306770u; }
        if (ctx->pc != 0x306770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306770u; }
        if (ctx->pc != 0x306770u) { return; }
    }
    ctx->pc = 0x306770u;
label_306770:
    // 0x306770: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x306770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_306774:
    // 0x306774: 0xc07626c  jal         func_1D89B0
label_306778:
    if (ctx->pc == 0x306778u) {
        ctx->pc = 0x306778u;
            // 0x306778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30677Cu;
        goto label_30677c;
    }
    ctx->pc = 0x306774u;
    SET_GPR_U32(ctx, 31, 0x30677Cu);
    ctx->pc = 0x306778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306774u;
            // 0x306778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30677Cu; }
        if (ctx->pc != 0x30677Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30677Cu; }
        if (ctx->pc != 0x30677Cu) { return; }
    }
    ctx->pc = 0x30677Cu;
label_30677c:
    // 0x30677c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30677cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_306780:
    // 0x306780: 0xc07626c  jal         func_1D89B0
label_306784:
    if (ctx->pc == 0x306784u) {
        ctx->pc = 0x306784u;
            // 0x306784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x306788u;
        goto label_306788;
    }
    ctx->pc = 0x306780u;
    SET_GPR_U32(ctx, 31, 0x306788u);
    ctx->pc = 0x306784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306780u;
            // 0x306784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306788u; }
        if (ctx->pc != 0x306788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306788u; }
        if (ctx->pc != 0x306788u) { return; }
    }
    ctx->pc = 0x306788u;
label_306788:
    // 0x306788: 0xc0754b4  jal         func_1D52D0
label_30678c:
    if (ctx->pc == 0x30678Cu) {
        ctx->pc = 0x30678Cu;
            // 0x30678c: 0x26a40440  addiu       $a0, $s5, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1088));
        ctx->pc = 0x306790u;
        goto label_306790;
    }
    ctx->pc = 0x306788u;
    SET_GPR_U32(ctx, 31, 0x306790u);
    ctx->pc = 0x30678Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306788u;
            // 0x30678c: 0x26a40440  addiu       $a0, $s5, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306790u; }
        if (ctx->pc != 0x306790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306790u; }
        if (ctx->pc != 0x306790u) { return; }
    }
    ctx->pc = 0x306790u;
label_306790:
    // 0x306790: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x306790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_306794:
    // 0x306794: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x306794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_306798:
    // 0x306798: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_30679c:
    if (ctx->pc == 0x30679Cu) {
        ctx->pc = 0x30679Cu;
            // 0x30679c: 0xaea00e10  sw          $zero, 0xE10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3600), GPR_U32(ctx, 0));
        ctx->pc = 0x3067A0u;
        goto label_3067a0;
    }
    ctx->pc = 0x306798u;
    {
        const bool branch_taken_0x306798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306798) {
            ctx->pc = 0x30679Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x306798u;
            // 0x30679c: 0xaea00e10  sw          $zero, 0xE10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3067C8u;
            goto label_3067c8;
        }
    }
    ctx->pc = 0x3067A0u;
label_3067a0:
    // 0x3067a0: 0xc040180  jal         func_100600
label_3067a4:
    if (ctx->pc == 0x3067A4u) {
        ctx->pc = 0x3067A4u;
            // 0x3067a4: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x3067A8u;
        goto label_3067a8;
    }
    ctx->pc = 0x3067A0u;
    SET_GPR_U32(ctx, 31, 0x3067A8u);
    ctx->pc = 0x3067A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3067A0u;
            // 0x3067a4: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3067A8u; }
        if (ctx->pc != 0x3067A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3067A8u; }
        if (ctx->pc != 0x3067A8u) { return; }
    }
    ctx->pc = 0x3067A8u;
label_3067a8:
    // 0x3067a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3067a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3067ac:
    // 0x3067ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3067b0:
    if (ctx->pc == 0x3067B0u) {
        ctx->pc = 0x3067B4u;
        goto label_3067b4;
    }
    ctx->pc = 0x3067ACu;
    {
        const bool branch_taken_0x3067ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3067ac) {
            ctx->pc = 0x3067C4u;
            goto label_3067c4;
        }
    }
    ctx->pc = 0x3067B4u;
label_3067b4:
    // 0x3067b4: 0x8ea50d98  lw          $a1, 0xD98($s5)
    ctx->pc = 0x3067b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_3067b8:
    // 0x3067b8: 0xc6ac0a80  lwc1        $f12, 0xA80($s5)
    ctx->pc = 0x3067b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3067bc:
    // 0x3067bc: 0xc11ebc4  jal         func_47AF10
label_3067c0:
    if (ctx->pc == 0x3067C0u) {
        ctx->pc = 0x3067C0u;
            // 0x3067c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3067C4u;
        goto label_3067c4;
    }
    ctx->pc = 0x3067BCu;
    SET_GPR_U32(ctx, 31, 0x3067C4u);
    ctx->pc = 0x3067C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3067BCu;
            // 0x3067c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3067C4u; }
        if (ctx->pc != 0x3067C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3067C4u; }
        if (ctx->pc != 0x3067C4u) { return; }
    }
    ctx->pc = 0x3067C4u;
label_3067c4:
    // 0x3067c4: 0xaea00e10  sw          $zero, 0xE10($s5)
    ctx->pc = 0x3067c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3600), GPR_U32(ctx, 0));
label_3067c8:
    // 0x3067c8: 0xc6a00de4  lwc1        $f0, 0xDE4($s5)
    ctx->pc = 0x3067c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3067cc:
    // 0x3067cc: 0xe6a00e1c  swc1        $f0, 0xE1C($s5)
    ctx->pc = 0x3067ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3612), bits); }
label_3067d0:
    // 0x3067d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3067d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3067d4:
    // 0x3067d4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3067d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3067d8:
    // 0x3067d8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3067d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3067dc:
    // 0x3067dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3067dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3067e0:
    // 0x3067e0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3067e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3067e4:
    // 0x3067e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3067e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3067e8:
    // 0x3067e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3067e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3067ec:
    // 0x3067ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3067ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3067f0:
    // 0x3067f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3067f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3067f4:
    // 0x3067f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3067f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3067f8:
    // 0x3067f8: 0x3e00008  jr          $ra
label_3067fc:
    if (ctx->pc == 0x3067FCu) {
        ctx->pc = 0x3067FCu;
            // 0x3067fc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x306800u;
        goto label_fallthrough_0x3067f8;
    }
    ctx->pc = 0x3067F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3067FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3067F8u;
            // 0x3067fc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3067f8:
    ctx->pc = 0x306800u;
}
