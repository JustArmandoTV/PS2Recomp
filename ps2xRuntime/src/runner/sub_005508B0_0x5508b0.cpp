#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005508B0
// Address: 0x5508b0 - 0x5519a0
void sub_005508B0_0x5508b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005508B0_0x5508b0");
#endif

    switch (ctx->pc) {
        case 0x5508b0u: goto label_5508b0;
        case 0x5508b4u: goto label_5508b4;
        case 0x5508b8u: goto label_5508b8;
        case 0x5508bcu: goto label_5508bc;
        case 0x5508c0u: goto label_5508c0;
        case 0x5508c4u: goto label_5508c4;
        case 0x5508c8u: goto label_5508c8;
        case 0x5508ccu: goto label_5508cc;
        case 0x5508d0u: goto label_5508d0;
        case 0x5508d4u: goto label_5508d4;
        case 0x5508d8u: goto label_5508d8;
        case 0x5508dcu: goto label_5508dc;
        case 0x5508e0u: goto label_5508e0;
        case 0x5508e4u: goto label_5508e4;
        case 0x5508e8u: goto label_5508e8;
        case 0x5508ecu: goto label_5508ec;
        case 0x5508f0u: goto label_5508f0;
        case 0x5508f4u: goto label_5508f4;
        case 0x5508f8u: goto label_5508f8;
        case 0x5508fcu: goto label_5508fc;
        case 0x550900u: goto label_550900;
        case 0x550904u: goto label_550904;
        case 0x550908u: goto label_550908;
        case 0x55090cu: goto label_55090c;
        case 0x550910u: goto label_550910;
        case 0x550914u: goto label_550914;
        case 0x550918u: goto label_550918;
        case 0x55091cu: goto label_55091c;
        case 0x550920u: goto label_550920;
        case 0x550924u: goto label_550924;
        case 0x550928u: goto label_550928;
        case 0x55092cu: goto label_55092c;
        case 0x550930u: goto label_550930;
        case 0x550934u: goto label_550934;
        case 0x550938u: goto label_550938;
        case 0x55093cu: goto label_55093c;
        case 0x550940u: goto label_550940;
        case 0x550944u: goto label_550944;
        case 0x550948u: goto label_550948;
        case 0x55094cu: goto label_55094c;
        case 0x550950u: goto label_550950;
        case 0x550954u: goto label_550954;
        case 0x550958u: goto label_550958;
        case 0x55095cu: goto label_55095c;
        case 0x550960u: goto label_550960;
        case 0x550964u: goto label_550964;
        case 0x550968u: goto label_550968;
        case 0x55096cu: goto label_55096c;
        case 0x550970u: goto label_550970;
        case 0x550974u: goto label_550974;
        case 0x550978u: goto label_550978;
        case 0x55097cu: goto label_55097c;
        case 0x550980u: goto label_550980;
        case 0x550984u: goto label_550984;
        case 0x550988u: goto label_550988;
        case 0x55098cu: goto label_55098c;
        case 0x550990u: goto label_550990;
        case 0x550994u: goto label_550994;
        case 0x550998u: goto label_550998;
        case 0x55099cu: goto label_55099c;
        case 0x5509a0u: goto label_5509a0;
        case 0x5509a4u: goto label_5509a4;
        case 0x5509a8u: goto label_5509a8;
        case 0x5509acu: goto label_5509ac;
        case 0x5509b0u: goto label_5509b0;
        case 0x5509b4u: goto label_5509b4;
        case 0x5509b8u: goto label_5509b8;
        case 0x5509bcu: goto label_5509bc;
        case 0x5509c0u: goto label_5509c0;
        case 0x5509c4u: goto label_5509c4;
        case 0x5509c8u: goto label_5509c8;
        case 0x5509ccu: goto label_5509cc;
        case 0x5509d0u: goto label_5509d0;
        case 0x5509d4u: goto label_5509d4;
        case 0x5509d8u: goto label_5509d8;
        case 0x5509dcu: goto label_5509dc;
        case 0x5509e0u: goto label_5509e0;
        case 0x5509e4u: goto label_5509e4;
        case 0x5509e8u: goto label_5509e8;
        case 0x5509ecu: goto label_5509ec;
        case 0x5509f0u: goto label_5509f0;
        case 0x5509f4u: goto label_5509f4;
        case 0x5509f8u: goto label_5509f8;
        case 0x5509fcu: goto label_5509fc;
        case 0x550a00u: goto label_550a00;
        case 0x550a04u: goto label_550a04;
        case 0x550a08u: goto label_550a08;
        case 0x550a0cu: goto label_550a0c;
        case 0x550a10u: goto label_550a10;
        case 0x550a14u: goto label_550a14;
        case 0x550a18u: goto label_550a18;
        case 0x550a1cu: goto label_550a1c;
        case 0x550a20u: goto label_550a20;
        case 0x550a24u: goto label_550a24;
        case 0x550a28u: goto label_550a28;
        case 0x550a2cu: goto label_550a2c;
        case 0x550a30u: goto label_550a30;
        case 0x550a34u: goto label_550a34;
        case 0x550a38u: goto label_550a38;
        case 0x550a3cu: goto label_550a3c;
        case 0x550a40u: goto label_550a40;
        case 0x550a44u: goto label_550a44;
        case 0x550a48u: goto label_550a48;
        case 0x550a4cu: goto label_550a4c;
        case 0x550a50u: goto label_550a50;
        case 0x550a54u: goto label_550a54;
        case 0x550a58u: goto label_550a58;
        case 0x550a5cu: goto label_550a5c;
        case 0x550a60u: goto label_550a60;
        case 0x550a64u: goto label_550a64;
        case 0x550a68u: goto label_550a68;
        case 0x550a6cu: goto label_550a6c;
        case 0x550a70u: goto label_550a70;
        case 0x550a74u: goto label_550a74;
        case 0x550a78u: goto label_550a78;
        case 0x550a7cu: goto label_550a7c;
        case 0x550a80u: goto label_550a80;
        case 0x550a84u: goto label_550a84;
        case 0x550a88u: goto label_550a88;
        case 0x550a8cu: goto label_550a8c;
        case 0x550a90u: goto label_550a90;
        case 0x550a94u: goto label_550a94;
        case 0x550a98u: goto label_550a98;
        case 0x550a9cu: goto label_550a9c;
        case 0x550aa0u: goto label_550aa0;
        case 0x550aa4u: goto label_550aa4;
        case 0x550aa8u: goto label_550aa8;
        case 0x550aacu: goto label_550aac;
        case 0x550ab0u: goto label_550ab0;
        case 0x550ab4u: goto label_550ab4;
        case 0x550ab8u: goto label_550ab8;
        case 0x550abcu: goto label_550abc;
        case 0x550ac0u: goto label_550ac0;
        case 0x550ac4u: goto label_550ac4;
        case 0x550ac8u: goto label_550ac8;
        case 0x550accu: goto label_550acc;
        case 0x550ad0u: goto label_550ad0;
        case 0x550ad4u: goto label_550ad4;
        case 0x550ad8u: goto label_550ad8;
        case 0x550adcu: goto label_550adc;
        case 0x550ae0u: goto label_550ae0;
        case 0x550ae4u: goto label_550ae4;
        case 0x550ae8u: goto label_550ae8;
        case 0x550aecu: goto label_550aec;
        case 0x550af0u: goto label_550af0;
        case 0x550af4u: goto label_550af4;
        case 0x550af8u: goto label_550af8;
        case 0x550afcu: goto label_550afc;
        case 0x550b00u: goto label_550b00;
        case 0x550b04u: goto label_550b04;
        case 0x550b08u: goto label_550b08;
        case 0x550b0cu: goto label_550b0c;
        case 0x550b10u: goto label_550b10;
        case 0x550b14u: goto label_550b14;
        case 0x550b18u: goto label_550b18;
        case 0x550b1cu: goto label_550b1c;
        case 0x550b20u: goto label_550b20;
        case 0x550b24u: goto label_550b24;
        case 0x550b28u: goto label_550b28;
        case 0x550b2cu: goto label_550b2c;
        case 0x550b30u: goto label_550b30;
        case 0x550b34u: goto label_550b34;
        case 0x550b38u: goto label_550b38;
        case 0x550b3cu: goto label_550b3c;
        case 0x550b40u: goto label_550b40;
        case 0x550b44u: goto label_550b44;
        case 0x550b48u: goto label_550b48;
        case 0x550b4cu: goto label_550b4c;
        case 0x550b50u: goto label_550b50;
        case 0x550b54u: goto label_550b54;
        case 0x550b58u: goto label_550b58;
        case 0x550b5cu: goto label_550b5c;
        case 0x550b60u: goto label_550b60;
        case 0x550b64u: goto label_550b64;
        case 0x550b68u: goto label_550b68;
        case 0x550b6cu: goto label_550b6c;
        case 0x550b70u: goto label_550b70;
        case 0x550b74u: goto label_550b74;
        case 0x550b78u: goto label_550b78;
        case 0x550b7cu: goto label_550b7c;
        case 0x550b80u: goto label_550b80;
        case 0x550b84u: goto label_550b84;
        case 0x550b88u: goto label_550b88;
        case 0x550b8cu: goto label_550b8c;
        case 0x550b90u: goto label_550b90;
        case 0x550b94u: goto label_550b94;
        case 0x550b98u: goto label_550b98;
        case 0x550b9cu: goto label_550b9c;
        case 0x550ba0u: goto label_550ba0;
        case 0x550ba4u: goto label_550ba4;
        case 0x550ba8u: goto label_550ba8;
        case 0x550bacu: goto label_550bac;
        case 0x550bb0u: goto label_550bb0;
        case 0x550bb4u: goto label_550bb4;
        case 0x550bb8u: goto label_550bb8;
        case 0x550bbcu: goto label_550bbc;
        case 0x550bc0u: goto label_550bc0;
        case 0x550bc4u: goto label_550bc4;
        case 0x550bc8u: goto label_550bc8;
        case 0x550bccu: goto label_550bcc;
        case 0x550bd0u: goto label_550bd0;
        case 0x550bd4u: goto label_550bd4;
        case 0x550bd8u: goto label_550bd8;
        case 0x550bdcu: goto label_550bdc;
        case 0x550be0u: goto label_550be0;
        case 0x550be4u: goto label_550be4;
        case 0x550be8u: goto label_550be8;
        case 0x550becu: goto label_550bec;
        case 0x550bf0u: goto label_550bf0;
        case 0x550bf4u: goto label_550bf4;
        case 0x550bf8u: goto label_550bf8;
        case 0x550bfcu: goto label_550bfc;
        case 0x550c00u: goto label_550c00;
        case 0x550c04u: goto label_550c04;
        case 0x550c08u: goto label_550c08;
        case 0x550c0cu: goto label_550c0c;
        case 0x550c10u: goto label_550c10;
        case 0x550c14u: goto label_550c14;
        case 0x550c18u: goto label_550c18;
        case 0x550c1cu: goto label_550c1c;
        case 0x550c20u: goto label_550c20;
        case 0x550c24u: goto label_550c24;
        case 0x550c28u: goto label_550c28;
        case 0x550c2cu: goto label_550c2c;
        case 0x550c30u: goto label_550c30;
        case 0x550c34u: goto label_550c34;
        case 0x550c38u: goto label_550c38;
        case 0x550c3cu: goto label_550c3c;
        case 0x550c40u: goto label_550c40;
        case 0x550c44u: goto label_550c44;
        case 0x550c48u: goto label_550c48;
        case 0x550c4cu: goto label_550c4c;
        case 0x550c50u: goto label_550c50;
        case 0x550c54u: goto label_550c54;
        case 0x550c58u: goto label_550c58;
        case 0x550c5cu: goto label_550c5c;
        case 0x550c60u: goto label_550c60;
        case 0x550c64u: goto label_550c64;
        case 0x550c68u: goto label_550c68;
        case 0x550c6cu: goto label_550c6c;
        case 0x550c70u: goto label_550c70;
        case 0x550c74u: goto label_550c74;
        case 0x550c78u: goto label_550c78;
        case 0x550c7cu: goto label_550c7c;
        case 0x550c80u: goto label_550c80;
        case 0x550c84u: goto label_550c84;
        case 0x550c88u: goto label_550c88;
        case 0x550c8cu: goto label_550c8c;
        case 0x550c90u: goto label_550c90;
        case 0x550c94u: goto label_550c94;
        case 0x550c98u: goto label_550c98;
        case 0x550c9cu: goto label_550c9c;
        case 0x550ca0u: goto label_550ca0;
        case 0x550ca4u: goto label_550ca4;
        case 0x550ca8u: goto label_550ca8;
        case 0x550cacu: goto label_550cac;
        case 0x550cb0u: goto label_550cb0;
        case 0x550cb4u: goto label_550cb4;
        case 0x550cb8u: goto label_550cb8;
        case 0x550cbcu: goto label_550cbc;
        case 0x550cc0u: goto label_550cc0;
        case 0x550cc4u: goto label_550cc4;
        case 0x550cc8u: goto label_550cc8;
        case 0x550cccu: goto label_550ccc;
        case 0x550cd0u: goto label_550cd0;
        case 0x550cd4u: goto label_550cd4;
        case 0x550cd8u: goto label_550cd8;
        case 0x550cdcu: goto label_550cdc;
        case 0x550ce0u: goto label_550ce0;
        case 0x550ce4u: goto label_550ce4;
        case 0x550ce8u: goto label_550ce8;
        case 0x550cecu: goto label_550cec;
        case 0x550cf0u: goto label_550cf0;
        case 0x550cf4u: goto label_550cf4;
        case 0x550cf8u: goto label_550cf8;
        case 0x550cfcu: goto label_550cfc;
        case 0x550d00u: goto label_550d00;
        case 0x550d04u: goto label_550d04;
        case 0x550d08u: goto label_550d08;
        case 0x550d0cu: goto label_550d0c;
        case 0x550d10u: goto label_550d10;
        case 0x550d14u: goto label_550d14;
        case 0x550d18u: goto label_550d18;
        case 0x550d1cu: goto label_550d1c;
        case 0x550d20u: goto label_550d20;
        case 0x550d24u: goto label_550d24;
        case 0x550d28u: goto label_550d28;
        case 0x550d2cu: goto label_550d2c;
        case 0x550d30u: goto label_550d30;
        case 0x550d34u: goto label_550d34;
        case 0x550d38u: goto label_550d38;
        case 0x550d3cu: goto label_550d3c;
        case 0x550d40u: goto label_550d40;
        case 0x550d44u: goto label_550d44;
        case 0x550d48u: goto label_550d48;
        case 0x550d4cu: goto label_550d4c;
        case 0x550d50u: goto label_550d50;
        case 0x550d54u: goto label_550d54;
        case 0x550d58u: goto label_550d58;
        case 0x550d5cu: goto label_550d5c;
        case 0x550d60u: goto label_550d60;
        case 0x550d64u: goto label_550d64;
        case 0x550d68u: goto label_550d68;
        case 0x550d6cu: goto label_550d6c;
        case 0x550d70u: goto label_550d70;
        case 0x550d74u: goto label_550d74;
        case 0x550d78u: goto label_550d78;
        case 0x550d7cu: goto label_550d7c;
        case 0x550d80u: goto label_550d80;
        case 0x550d84u: goto label_550d84;
        case 0x550d88u: goto label_550d88;
        case 0x550d8cu: goto label_550d8c;
        case 0x550d90u: goto label_550d90;
        case 0x550d94u: goto label_550d94;
        case 0x550d98u: goto label_550d98;
        case 0x550d9cu: goto label_550d9c;
        case 0x550da0u: goto label_550da0;
        case 0x550da4u: goto label_550da4;
        case 0x550da8u: goto label_550da8;
        case 0x550dacu: goto label_550dac;
        case 0x550db0u: goto label_550db0;
        case 0x550db4u: goto label_550db4;
        case 0x550db8u: goto label_550db8;
        case 0x550dbcu: goto label_550dbc;
        case 0x550dc0u: goto label_550dc0;
        case 0x550dc4u: goto label_550dc4;
        case 0x550dc8u: goto label_550dc8;
        case 0x550dccu: goto label_550dcc;
        case 0x550dd0u: goto label_550dd0;
        case 0x550dd4u: goto label_550dd4;
        case 0x550dd8u: goto label_550dd8;
        case 0x550ddcu: goto label_550ddc;
        case 0x550de0u: goto label_550de0;
        case 0x550de4u: goto label_550de4;
        case 0x550de8u: goto label_550de8;
        case 0x550decu: goto label_550dec;
        case 0x550df0u: goto label_550df0;
        case 0x550df4u: goto label_550df4;
        case 0x550df8u: goto label_550df8;
        case 0x550dfcu: goto label_550dfc;
        case 0x550e00u: goto label_550e00;
        case 0x550e04u: goto label_550e04;
        case 0x550e08u: goto label_550e08;
        case 0x550e0cu: goto label_550e0c;
        case 0x550e10u: goto label_550e10;
        case 0x550e14u: goto label_550e14;
        case 0x550e18u: goto label_550e18;
        case 0x550e1cu: goto label_550e1c;
        case 0x550e20u: goto label_550e20;
        case 0x550e24u: goto label_550e24;
        case 0x550e28u: goto label_550e28;
        case 0x550e2cu: goto label_550e2c;
        case 0x550e30u: goto label_550e30;
        case 0x550e34u: goto label_550e34;
        case 0x550e38u: goto label_550e38;
        case 0x550e3cu: goto label_550e3c;
        case 0x550e40u: goto label_550e40;
        case 0x550e44u: goto label_550e44;
        case 0x550e48u: goto label_550e48;
        case 0x550e4cu: goto label_550e4c;
        case 0x550e50u: goto label_550e50;
        case 0x550e54u: goto label_550e54;
        case 0x550e58u: goto label_550e58;
        case 0x550e5cu: goto label_550e5c;
        case 0x550e60u: goto label_550e60;
        case 0x550e64u: goto label_550e64;
        case 0x550e68u: goto label_550e68;
        case 0x550e6cu: goto label_550e6c;
        case 0x550e70u: goto label_550e70;
        case 0x550e74u: goto label_550e74;
        case 0x550e78u: goto label_550e78;
        case 0x550e7cu: goto label_550e7c;
        case 0x550e80u: goto label_550e80;
        case 0x550e84u: goto label_550e84;
        case 0x550e88u: goto label_550e88;
        case 0x550e8cu: goto label_550e8c;
        case 0x550e90u: goto label_550e90;
        case 0x550e94u: goto label_550e94;
        case 0x550e98u: goto label_550e98;
        case 0x550e9cu: goto label_550e9c;
        case 0x550ea0u: goto label_550ea0;
        case 0x550ea4u: goto label_550ea4;
        case 0x550ea8u: goto label_550ea8;
        case 0x550eacu: goto label_550eac;
        case 0x550eb0u: goto label_550eb0;
        case 0x550eb4u: goto label_550eb4;
        case 0x550eb8u: goto label_550eb8;
        case 0x550ebcu: goto label_550ebc;
        case 0x550ec0u: goto label_550ec0;
        case 0x550ec4u: goto label_550ec4;
        case 0x550ec8u: goto label_550ec8;
        case 0x550eccu: goto label_550ecc;
        case 0x550ed0u: goto label_550ed0;
        case 0x550ed4u: goto label_550ed4;
        case 0x550ed8u: goto label_550ed8;
        case 0x550edcu: goto label_550edc;
        case 0x550ee0u: goto label_550ee0;
        case 0x550ee4u: goto label_550ee4;
        case 0x550ee8u: goto label_550ee8;
        case 0x550eecu: goto label_550eec;
        case 0x550ef0u: goto label_550ef0;
        case 0x550ef4u: goto label_550ef4;
        case 0x550ef8u: goto label_550ef8;
        case 0x550efcu: goto label_550efc;
        case 0x550f00u: goto label_550f00;
        case 0x550f04u: goto label_550f04;
        case 0x550f08u: goto label_550f08;
        case 0x550f0cu: goto label_550f0c;
        case 0x550f10u: goto label_550f10;
        case 0x550f14u: goto label_550f14;
        case 0x550f18u: goto label_550f18;
        case 0x550f1cu: goto label_550f1c;
        case 0x550f20u: goto label_550f20;
        case 0x550f24u: goto label_550f24;
        case 0x550f28u: goto label_550f28;
        case 0x550f2cu: goto label_550f2c;
        case 0x550f30u: goto label_550f30;
        case 0x550f34u: goto label_550f34;
        case 0x550f38u: goto label_550f38;
        case 0x550f3cu: goto label_550f3c;
        case 0x550f40u: goto label_550f40;
        case 0x550f44u: goto label_550f44;
        case 0x550f48u: goto label_550f48;
        case 0x550f4cu: goto label_550f4c;
        case 0x550f50u: goto label_550f50;
        case 0x550f54u: goto label_550f54;
        case 0x550f58u: goto label_550f58;
        case 0x550f5cu: goto label_550f5c;
        case 0x550f60u: goto label_550f60;
        case 0x550f64u: goto label_550f64;
        case 0x550f68u: goto label_550f68;
        case 0x550f6cu: goto label_550f6c;
        case 0x550f70u: goto label_550f70;
        case 0x550f74u: goto label_550f74;
        case 0x550f78u: goto label_550f78;
        case 0x550f7cu: goto label_550f7c;
        case 0x550f80u: goto label_550f80;
        case 0x550f84u: goto label_550f84;
        case 0x550f88u: goto label_550f88;
        case 0x550f8cu: goto label_550f8c;
        case 0x550f90u: goto label_550f90;
        case 0x550f94u: goto label_550f94;
        case 0x550f98u: goto label_550f98;
        case 0x550f9cu: goto label_550f9c;
        case 0x550fa0u: goto label_550fa0;
        case 0x550fa4u: goto label_550fa4;
        case 0x550fa8u: goto label_550fa8;
        case 0x550facu: goto label_550fac;
        case 0x550fb0u: goto label_550fb0;
        case 0x550fb4u: goto label_550fb4;
        case 0x550fb8u: goto label_550fb8;
        case 0x550fbcu: goto label_550fbc;
        case 0x550fc0u: goto label_550fc0;
        case 0x550fc4u: goto label_550fc4;
        case 0x550fc8u: goto label_550fc8;
        case 0x550fccu: goto label_550fcc;
        case 0x550fd0u: goto label_550fd0;
        case 0x550fd4u: goto label_550fd4;
        case 0x550fd8u: goto label_550fd8;
        case 0x550fdcu: goto label_550fdc;
        case 0x550fe0u: goto label_550fe0;
        case 0x550fe4u: goto label_550fe4;
        case 0x550fe8u: goto label_550fe8;
        case 0x550fecu: goto label_550fec;
        case 0x550ff0u: goto label_550ff0;
        case 0x550ff4u: goto label_550ff4;
        case 0x550ff8u: goto label_550ff8;
        case 0x550ffcu: goto label_550ffc;
        case 0x551000u: goto label_551000;
        case 0x551004u: goto label_551004;
        case 0x551008u: goto label_551008;
        case 0x55100cu: goto label_55100c;
        case 0x551010u: goto label_551010;
        case 0x551014u: goto label_551014;
        case 0x551018u: goto label_551018;
        case 0x55101cu: goto label_55101c;
        case 0x551020u: goto label_551020;
        case 0x551024u: goto label_551024;
        case 0x551028u: goto label_551028;
        case 0x55102cu: goto label_55102c;
        case 0x551030u: goto label_551030;
        case 0x551034u: goto label_551034;
        case 0x551038u: goto label_551038;
        case 0x55103cu: goto label_55103c;
        case 0x551040u: goto label_551040;
        case 0x551044u: goto label_551044;
        case 0x551048u: goto label_551048;
        case 0x55104cu: goto label_55104c;
        case 0x551050u: goto label_551050;
        case 0x551054u: goto label_551054;
        case 0x551058u: goto label_551058;
        case 0x55105cu: goto label_55105c;
        case 0x551060u: goto label_551060;
        case 0x551064u: goto label_551064;
        case 0x551068u: goto label_551068;
        case 0x55106cu: goto label_55106c;
        case 0x551070u: goto label_551070;
        case 0x551074u: goto label_551074;
        case 0x551078u: goto label_551078;
        case 0x55107cu: goto label_55107c;
        case 0x551080u: goto label_551080;
        case 0x551084u: goto label_551084;
        case 0x551088u: goto label_551088;
        case 0x55108cu: goto label_55108c;
        case 0x551090u: goto label_551090;
        case 0x551094u: goto label_551094;
        case 0x551098u: goto label_551098;
        case 0x55109cu: goto label_55109c;
        case 0x5510a0u: goto label_5510a0;
        case 0x5510a4u: goto label_5510a4;
        case 0x5510a8u: goto label_5510a8;
        case 0x5510acu: goto label_5510ac;
        case 0x5510b0u: goto label_5510b0;
        case 0x5510b4u: goto label_5510b4;
        case 0x5510b8u: goto label_5510b8;
        case 0x5510bcu: goto label_5510bc;
        case 0x5510c0u: goto label_5510c0;
        case 0x5510c4u: goto label_5510c4;
        case 0x5510c8u: goto label_5510c8;
        case 0x5510ccu: goto label_5510cc;
        case 0x5510d0u: goto label_5510d0;
        case 0x5510d4u: goto label_5510d4;
        case 0x5510d8u: goto label_5510d8;
        case 0x5510dcu: goto label_5510dc;
        case 0x5510e0u: goto label_5510e0;
        case 0x5510e4u: goto label_5510e4;
        case 0x5510e8u: goto label_5510e8;
        case 0x5510ecu: goto label_5510ec;
        case 0x5510f0u: goto label_5510f0;
        case 0x5510f4u: goto label_5510f4;
        case 0x5510f8u: goto label_5510f8;
        case 0x5510fcu: goto label_5510fc;
        case 0x551100u: goto label_551100;
        case 0x551104u: goto label_551104;
        case 0x551108u: goto label_551108;
        case 0x55110cu: goto label_55110c;
        case 0x551110u: goto label_551110;
        case 0x551114u: goto label_551114;
        case 0x551118u: goto label_551118;
        case 0x55111cu: goto label_55111c;
        case 0x551120u: goto label_551120;
        case 0x551124u: goto label_551124;
        case 0x551128u: goto label_551128;
        case 0x55112cu: goto label_55112c;
        case 0x551130u: goto label_551130;
        case 0x551134u: goto label_551134;
        case 0x551138u: goto label_551138;
        case 0x55113cu: goto label_55113c;
        case 0x551140u: goto label_551140;
        case 0x551144u: goto label_551144;
        case 0x551148u: goto label_551148;
        case 0x55114cu: goto label_55114c;
        case 0x551150u: goto label_551150;
        case 0x551154u: goto label_551154;
        case 0x551158u: goto label_551158;
        case 0x55115cu: goto label_55115c;
        case 0x551160u: goto label_551160;
        case 0x551164u: goto label_551164;
        case 0x551168u: goto label_551168;
        case 0x55116cu: goto label_55116c;
        case 0x551170u: goto label_551170;
        case 0x551174u: goto label_551174;
        case 0x551178u: goto label_551178;
        case 0x55117cu: goto label_55117c;
        case 0x551180u: goto label_551180;
        case 0x551184u: goto label_551184;
        case 0x551188u: goto label_551188;
        case 0x55118cu: goto label_55118c;
        case 0x551190u: goto label_551190;
        case 0x551194u: goto label_551194;
        case 0x551198u: goto label_551198;
        case 0x55119cu: goto label_55119c;
        case 0x5511a0u: goto label_5511a0;
        case 0x5511a4u: goto label_5511a4;
        case 0x5511a8u: goto label_5511a8;
        case 0x5511acu: goto label_5511ac;
        case 0x5511b0u: goto label_5511b0;
        case 0x5511b4u: goto label_5511b4;
        case 0x5511b8u: goto label_5511b8;
        case 0x5511bcu: goto label_5511bc;
        case 0x5511c0u: goto label_5511c0;
        case 0x5511c4u: goto label_5511c4;
        case 0x5511c8u: goto label_5511c8;
        case 0x5511ccu: goto label_5511cc;
        case 0x5511d0u: goto label_5511d0;
        case 0x5511d4u: goto label_5511d4;
        case 0x5511d8u: goto label_5511d8;
        case 0x5511dcu: goto label_5511dc;
        case 0x5511e0u: goto label_5511e0;
        case 0x5511e4u: goto label_5511e4;
        case 0x5511e8u: goto label_5511e8;
        case 0x5511ecu: goto label_5511ec;
        case 0x5511f0u: goto label_5511f0;
        case 0x5511f4u: goto label_5511f4;
        case 0x5511f8u: goto label_5511f8;
        case 0x5511fcu: goto label_5511fc;
        case 0x551200u: goto label_551200;
        case 0x551204u: goto label_551204;
        case 0x551208u: goto label_551208;
        case 0x55120cu: goto label_55120c;
        case 0x551210u: goto label_551210;
        case 0x551214u: goto label_551214;
        case 0x551218u: goto label_551218;
        case 0x55121cu: goto label_55121c;
        case 0x551220u: goto label_551220;
        case 0x551224u: goto label_551224;
        case 0x551228u: goto label_551228;
        case 0x55122cu: goto label_55122c;
        case 0x551230u: goto label_551230;
        case 0x551234u: goto label_551234;
        case 0x551238u: goto label_551238;
        case 0x55123cu: goto label_55123c;
        case 0x551240u: goto label_551240;
        case 0x551244u: goto label_551244;
        case 0x551248u: goto label_551248;
        case 0x55124cu: goto label_55124c;
        case 0x551250u: goto label_551250;
        case 0x551254u: goto label_551254;
        case 0x551258u: goto label_551258;
        case 0x55125cu: goto label_55125c;
        case 0x551260u: goto label_551260;
        case 0x551264u: goto label_551264;
        case 0x551268u: goto label_551268;
        case 0x55126cu: goto label_55126c;
        case 0x551270u: goto label_551270;
        case 0x551274u: goto label_551274;
        case 0x551278u: goto label_551278;
        case 0x55127cu: goto label_55127c;
        case 0x551280u: goto label_551280;
        case 0x551284u: goto label_551284;
        case 0x551288u: goto label_551288;
        case 0x55128cu: goto label_55128c;
        case 0x551290u: goto label_551290;
        case 0x551294u: goto label_551294;
        case 0x551298u: goto label_551298;
        case 0x55129cu: goto label_55129c;
        case 0x5512a0u: goto label_5512a0;
        case 0x5512a4u: goto label_5512a4;
        case 0x5512a8u: goto label_5512a8;
        case 0x5512acu: goto label_5512ac;
        case 0x5512b0u: goto label_5512b0;
        case 0x5512b4u: goto label_5512b4;
        case 0x5512b8u: goto label_5512b8;
        case 0x5512bcu: goto label_5512bc;
        case 0x5512c0u: goto label_5512c0;
        case 0x5512c4u: goto label_5512c4;
        case 0x5512c8u: goto label_5512c8;
        case 0x5512ccu: goto label_5512cc;
        case 0x5512d0u: goto label_5512d0;
        case 0x5512d4u: goto label_5512d4;
        case 0x5512d8u: goto label_5512d8;
        case 0x5512dcu: goto label_5512dc;
        case 0x5512e0u: goto label_5512e0;
        case 0x5512e4u: goto label_5512e4;
        case 0x5512e8u: goto label_5512e8;
        case 0x5512ecu: goto label_5512ec;
        case 0x5512f0u: goto label_5512f0;
        case 0x5512f4u: goto label_5512f4;
        case 0x5512f8u: goto label_5512f8;
        case 0x5512fcu: goto label_5512fc;
        case 0x551300u: goto label_551300;
        case 0x551304u: goto label_551304;
        case 0x551308u: goto label_551308;
        case 0x55130cu: goto label_55130c;
        case 0x551310u: goto label_551310;
        case 0x551314u: goto label_551314;
        case 0x551318u: goto label_551318;
        case 0x55131cu: goto label_55131c;
        case 0x551320u: goto label_551320;
        case 0x551324u: goto label_551324;
        case 0x551328u: goto label_551328;
        case 0x55132cu: goto label_55132c;
        case 0x551330u: goto label_551330;
        case 0x551334u: goto label_551334;
        case 0x551338u: goto label_551338;
        case 0x55133cu: goto label_55133c;
        case 0x551340u: goto label_551340;
        case 0x551344u: goto label_551344;
        case 0x551348u: goto label_551348;
        case 0x55134cu: goto label_55134c;
        case 0x551350u: goto label_551350;
        case 0x551354u: goto label_551354;
        case 0x551358u: goto label_551358;
        case 0x55135cu: goto label_55135c;
        case 0x551360u: goto label_551360;
        case 0x551364u: goto label_551364;
        case 0x551368u: goto label_551368;
        case 0x55136cu: goto label_55136c;
        case 0x551370u: goto label_551370;
        case 0x551374u: goto label_551374;
        case 0x551378u: goto label_551378;
        case 0x55137cu: goto label_55137c;
        case 0x551380u: goto label_551380;
        case 0x551384u: goto label_551384;
        case 0x551388u: goto label_551388;
        case 0x55138cu: goto label_55138c;
        case 0x551390u: goto label_551390;
        case 0x551394u: goto label_551394;
        case 0x551398u: goto label_551398;
        case 0x55139cu: goto label_55139c;
        case 0x5513a0u: goto label_5513a0;
        case 0x5513a4u: goto label_5513a4;
        case 0x5513a8u: goto label_5513a8;
        case 0x5513acu: goto label_5513ac;
        case 0x5513b0u: goto label_5513b0;
        case 0x5513b4u: goto label_5513b4;
        case 0x5513b8u: goto label_5513b8;
        case 0x5513bcu: goto label_5513bc;
        case 0x5513c0u: goto label_5513c0;
        case 0x5513c4u: goto label_5513c4;
        case 0x5513c8u: goto label_5513c8;
        case 0x5513ccu: goto label_5513cc;
        case 0x5513d0u: goto label_5513d0;
        case 0x5513d4u: goto label_5513d4;
        case 0x5513d8u: goto label_5513d8;
        case 0x5513dcu: goto label_5513dc;
        case 0x5513e0u: goto label_5513e0;
        case 0x5513e4u: goto label_5513e4;
        case 0x5513e8u: goto label_5513e8;
        case 0x5513ecu: goto label_5513ec;
        case 0x5513f0u: goto label_5513f0;
        case 0x5513f4u: goto label_5513f4;
        case 0x5513f8u: goto label_5513f8;
        case 0x5513fcu: goto label_5513fc;
        case 0x551400u: goto label_551400;
        case 0x551404u: goto label_551404;
        case 0x551408u: goto label_551408;
        case 0x55140cu: goto label_55140c;
        case 0x551410u: goto label_551410;
        case 0x551414u: goto label_551414;
        case 0x551418u: goto label_551418;
        case 0x55141cu: goto label_55141c;
        case 0x551420u: goto label_551420;
        case 0x551424u: goto label_551424;
        case 0x551428u: goto label_551428;
        case 0x55142cu: goto label_55142c;
        case 0x551430u: goto label_551430;
        case 0x551434u: goto label_551434;
        case 0x551438u: goto label_551438;
        case 0x55143cu: goto label_55143c;
        case 0x551440u: goto label_551440;
        case 0x551444u: goto label_551444;
        case 0x551448u: goto label_551448;
        case 0x55144cu: goto label_55144c;
        case 0x551450u: goto label_551450;
        case 0x551454u: goto label_551454;
        case 0x551458u: goto label_551458;
        case 0x55145cu: goto label_55145c;
        case 0x551460u: goto label_551460;
        case 0x551464u: goto label_551464;
        case 0x551468u: goto label_551468;
        case 0x55146cu: goto label_55146c;
        case 0x551470u: goto label_551470;
        case 0x551474u: goto label_551474;
        case 0x551478u: goto label_551478;
        case 0x55147cu: goto label_55147c;
        case 0x551480u: goto label_551480;
        case 0x551484u: goto label_551484;
        case 0x551488u: goto label_551488;
        case 0x55148cu: goto label_55148c;
        case 0x551490u: goto label_551490;
        case 0x551494u: goto label_551494;
        case 0x551498u: goto label_551498;
        case 0x55149cu: goto label_55149c;
        case 0x5514a0u: goto label_5514a0;
        case 0x5514a4u: goto label_5514a4;
        case 0x5514a8u: goto label_5514a8;
        case 0x5514acu: goto label_5514ac;
        case 0x5514b0u: goto label_5514b0;
        case 0x5514b4u: goto label_5514b4;
        case 0x5514b8u: goto label_5514b8;
        case 0x5514bcu: goto label_5514bc;
        case 0x5514c0u: goto label_5514c0;
        case 0x5514c4u: goto label_5514c4;
        case 0x5514c8u: goto label_5514c8;
        case 0x5514ccu: goto label_5514cc;
        case 0x5514d0u: goto label_5514d0;
        case 0x5514d4u: goto label_5514d4;
        case 0x5514d8u: goto label_5514d8;
        case 0x5514dcu: goto label_5514dc;
        case 0x5514e0u: goto label_5514e0;
        case 0x5514e4u: goto label_5514e4;
        case 0x5514e8u: goto label_5514e8;
        case 0x5514ecu: goto label_5514ec;
        case 0x5514f0u: goto label_5514f0;
        case 0x5514f4u: goto label_5514f4;
        case 0x5514f8u: goto label_5514f8;
        case 0x5514fcu: goto label_5514fc;
        case 0x551500u: goto label_551500;
        case 0x551504u: goto label_551504;
        case 0x551508u: goto label_551508;
        case 0x55150cu: goto label_55150c;
        case 0x551510u: goto label_551510;
        case 0x551514u: goto label_551514;
        case 0x551518u: goto label_551518;
        case 0x55151cu: goto label_55151c;
        case 0x551520u: goto label_551520;
        case 0x551524u: goto label_551524;
        case 0x551528u: goto label_551528;
        case 0x55152cu: goto label_55152c;
        case 0x551530u: goto label_551530;
        case 0x551534u: goto label_551534;
        case 0x551538u: goto label_551538;
        case 0x55153cu: goto label_55153c;
        case 0x551540u: goto label_551540;
        case 0x551544u: goto label_551544;
        case 0x551548u: goto label_551548;
        case 0x55154cu: goto label_55154c;
        case 0x551550u: goto label_551550;
        case 0x551554u: goto label_551554;
        case 0x551558u: goto label_551558;
        case 0x55155cu: goto label_55155c;
        case 0x551560u: goto label_551560;
        case 0x551564u: goto label_551564;
        case 0x551568u: goto label_551568;
        case 0x55156cu: goto label_55156c;
        case 0x551570u: goto label_551570;
        case 0x551574u: goto label_551574;
        case 0x551578u: goto label_551578;
        case 0x55157cu: goto label_55157c;
        case 0x551580u: goto label_551580;
        case 0x551584u: goto label_551584;
        case 0x551588u: goto label_551588;
        case 0x55158cu: goto label_55158c;
        case 0x551590u: goto label_551590;
        case 0x551594u: goto label_551594;
        case 0x551598u: goto label_551598;
        case 0x55159cu: goto label_55159c;
        case 0x5515a0u: goto label_5515a0;
        case 0x5515a4u: goto label_5515a4;
        case 0x5515a8u: goto label_5515a8;
        case 0x5515acu: goto label_5515ac;
        case 0x5515b0u: goto label_5515b0;
        case 0x5515b4u: goto label_5515b4;
        case 0x5515b8u: goto label_5515b8;
        case 0x5515bcu: goto label_5515bc;
        case 0x5515c0u: goto label_5515c0;
        case 0x5515c4u: goto label_5515c4;
        case 0x5515c8u: goto label_5515c8;
        case 0x5515ccu: goto label_5515cc;
        case 0x5515d0u: goto label_5515d0;
        case 0x5515d4u: goto label_5515d4;
        case 0x5515d8u: goto label_5515d8;
        case 0x5515dcu: goto label_5515dc;
        case 0x5515e0u: goto label_5515e0;
        case 0x5515e4u: goto label_5515e4;
        case 0x5515e8u: goto label_5515e8;
        case 0x5515ecu: goto label_5515ec;
        case 0x5515f0u: goto label_5515f0;
        case 0x5515f4u: goto label_5515f4;
        case 0x5515f8u: goto label_5515f8;
        case 0x5515fcu: goto label_5515fc;
        case 0x551600u: goto label_551600;
        case 0x551604u: goto label_551604;
        case 0x551608u: goto label_551608;
        case 0x55160cu: goto label_55160c;
        case 0x551610u: goto label_551610;
        case 0x551614u: goto label_551614;
        case 0x551618u: goto label_551618;
        case 0x55161cu: goto label_55161c;
        case 0x551620u: goto label_551620;
        case 0x551624u: goto label_551624;
        case 0x551628u: goto label_551628;
        case 0x55162cu: goto label_55162c;
        case 0x551630u: goto label_551630;
        case 0x551634u: goto label_551634;
        case 0x551638u: goto label_551638;
        case 0x55163cu: goto label_55163c;
        case 0x551640u: goto label_551640;
        case 0x551644u: goto label_551644;
        case 0x551648u: goto label_551648;
        case 0x55164cu: goto label_55164c;
        case 0x551650u: goto label_551650;
        case 0x551654u: goto label_551654;
        case 0x551658u: goto label_551658;
        case 0x55165cu: goto label_55165c;
        case 0x551660u: goto label_551660;
        case 0x551664u: goto label_551664;
        case 0x551668u: goto label_551668;
        case 0x55166cu: goto label_55166c;
        case 0x551670u: goto label_551670;
        case 0x551674u: goto label_551674;
        case 0x551678u: goto label_551678;
        case 0x55167cu: goto label_55167c;
        case 0x551680u: goto label_551680;
        case 0x551684u: goto label_551684;
        case 0x551688u: goto label_551688;
        case 0x55168cu: goto label_55168c;
        case 0x551690u: goto label_551690;
        case 0x551694u: goto label_551694;
        case 0x551698u: goto label_551698;
        case 0x55169cu: goto label_55169c;
        case 0x5516a0u: goto label_5516a0;
        case 0x5516a4u: goto label_5516a4;
        case 0x5516a8u: goto label_5516a8;
        case 0x5516acu: goto label_5516ac;
        case 0x5516b0u: goto label_5516b0;
        case 0x5516b4u: goto label_5516b4;
        case 0x5516b8u: goto label_5516b8;
        case 0x5516bcu: goto label_5516bc;
        case 0x5516c0u: goto label_5516c0;
        case 0x5516c4u: goto label_5516c4;
        case 0x5516c8u: goto label_5516c8;
        case 0x5516ccu: goto label_5516cc;
        case 0x5516d0u: goto label_5516d0;
        case 0x5516d4u: goto label_5516d4;
        case 0x5516d8u: goto label_5516d8;
        case 0x5516dcu: goto label_5516dc;
        case 0x5516e0u: goto label_5516e0;
        case 0x5516e4u: goto label_5516e4;
        case 0x5516e8u: goto label_5516e8;
        case 0x5516ecu: goto label_5516ec;
        case 0x5516f0u: goto label_5516f0;
        case 0x5516f4u: goto label_5516f4;
        case 0x5516f8u: goto label_5516f8;
        case 0x5516fcu: goto label_5516fc;
        case 0x551700u: goto label_551700;
        case 0x551704u: goto label_551704;
        case 0x551708u: goto label_551708;
        case 0x55170cu: goto label_55170c;
        case 0x551710u: goto label_551710;
        case 0x551714u: goto label_551714;
        case 0x551718u: goto label_551718;
        case 0x55171cu: goto label_55171c;
        case 0x551720u: goto label_551720;
        case 0x551724u: goto label_551724;
        case 0x551728u: goto label_551728;
        case 0x55172cu: goto label_55172c;
        case 0x551730u: goto label_551730;
        case 0x551734u: goto label_551734;
        case 0x551738u: goto label_551738;
        case 0x55173cu: goto label_55173c;
        case 0x551740u: goto label_551740;
        case 0x551744u: goto label_551744;
        case 0x551748u: goto label_551748;
        case 0x55174cu: goto label_55174c;
        case 0x551750u: goto label_551750;
        case 0x551754u: goto label_551754;
        case 0x551758u: goto label_551758;
        case 0x55175cu: goto label_55175c;
        case 0x551760u: goto label_551760;
        case 0x551764u: goto label_551764;
        case 0x551768u: goto label_551768;
        case 0x55176cu: goto label_55176c;
        case 0x551770u: goto label_551770;
        case 0x551774u: goto label_551774;
        case 0x551778u: goto label_551778;
        case 0x55177cu: goto label_55177c;
        case 0x551780u: goto label_551780;
        case 0x551784u: goto label_551784;
        case 0x551788u: goto label_551788;
        case 0x55178cu: goto label_55178c;
        case 0x551790u: goto label_551790;
        case 0x551794u: goto label_551794;
        case 0x551798u: goto label_551798;
        case 0x55179cu: goto label_55179c;
        case 0x5517a0u: goto label_5517a0;
        case 0x5517a4u: goto label_5517a4;
        case 0x5517a8u: goto label_5517a8;
        case 0x5517acu: goto label_5517ac;
        case 0x5517b0u: goto label_5517b0;
        case 0x5517b4u: goto label_5517b4;
        case 0x5517b8u: goto label_5517b8;
        case 0x5517bcu: goto label_5517bc;
        case 0x5517c0u: goto label_5517c0;
        case 0x5517c4u: goto label_5517c4;
        case 0x5517c8u: goto label_5517c8;
        case 0x5517ccu: goto label_5517cc;
        case 0x5517d0u: goto label_5517d0;
        case 0x5517d4u: goto label_5517d4;
        case 0x5517d8u: goto label_5517d8;
        case 0x5517dcu: goto label_5517dc;
        case 0x5517e0u: goto label_5517e0;
        case 0x5517e4u: goto label_5517e4;
        case 0x5517e8u: goto label_5517e8;
        case 0x5517ecu: goto label_5517ec;
        case 0x5517f0u: goto label_5517f0;
        case 0x5517f4u: goto label_5517f4;
        case 0x5517f8u: goto label_5517f8;
        case 0x5517fcu: goto label_5517fc;
        case 0x551800u: goto label_551800;
        case 0x551804u: goto label_551804;
        case 0x551808u: goto label_551808;
        case 0x55180cu: goto label_55180c;
        case 0x551810u: goto label_551810;
        case 0x551814u: goto label_551814;
        case 0x551818u: goto label_551818;
        case 0x55181cu: goto label_55181c;
        case 0x551820u: goto label_551820;
        case 0x551824u: goto label_551824;
        case 0x551828u: goto label_551828;
        case 0x55182cu: goto label_55182c;
        case 0x551830u: goto label_551830;
        case 0x551834u: goto label_551834;
        case 0x551838u: goto label_551838;
        case 0x55183cu: goto label_55183c;
        case 0x551840u: goto label_551840;
        case 0x551844u: goto label_551844;
        case 0x551848u: goto label_551848;
        case 0x55184cu: goto label_55184c;
        case 0x551850u: goto label_551850;
        case 0x551854u: goto label_551854;
        case 0x551858u: goto label_551858;
        case 0x55185cu: goto label_55185c;
        case 0x551860u: goto label_551860;
        case 0x551864u: goto label_551864;
        case 0x551868u: goto label_551868;
        case 0x55186cu: goto label_55186c;
        case 0x551870u: goto label_551870;
        case 0x551874u: goto label_551874;
        case 0x551878u: goto label_551878;
        case 0x55187cu: goto label_55187c;
        case 0x551880u: goto label_551880;
        case 0x551884u: goto label_551884;
        case 0x551888u: goto label_551888;
        case 0x55188cu: goto label_55188c;
        case 0x551890u: goto label_551890;
        case 0x551894u: goto label_551894;
        case 0x551898u: goto label_551898;
        case 0x55189cu: goto label_55189c;
        case 0x5518a0u: goto label_5518a0;
        case 0x5518a4u: goto label_5518a4;
        case 0x5518a8u: goto label_5518a8;
        case 0x5518acu: goto label_5518ac;
        case 0x5518b0u: goto label_5518b0;
        case 0x5518b4u: goto label_5518b4;
        case 0x5518b8u: goto label_5518b8;
        case 0x5518bcu: goto label_5518bc;
        case 0x5518c0u: goto label_5518c0;
        case 0x5518c4u: goto label_5518c4;
        case 0x5518c8u: goto label_5518c8;
        case 0x5518ccu: goto label_5518cc;
        case 0x5518d0u: goto label_5518d0;
        case 0x5518d4u: goto label_5518d4;
        case 0x5518d8u: goto label_5518d8;
        case 0x5518dcu: goto label_5518dc;
        case 0x5518e0u: goto label_5518e0;
        case 0x5518e4u: goto label_5518e4;
        case 0x5518e8u: goto label_5518e8;
        case 0x5518ecu: goto label_5518ec;
        case 0x5518f0u: goto label_5518f0;
        case 0x5518f4u: goto label_5518f4;
        case 0x5518f8u: goto label_5518f8;
        case 0x5518fcu: goto label_5518fc;
        case 0x551900u: goto label_551900;
        case 0x551904u: goto label_551904;
        case 0x551908u: goto label_551908;
        case 0x55190cu: goto label_55190c;
        case 0x551910u: goto label_551910;
        case 0x551914u: goto label_551914;
        case 0x551918u: goto label_551918;
        case 0x55191cu: goto label_55191c;
        case 0x551920u: goto label_551920;
        case 0x551924u: goto label_551924;
        case 0x551928u: goto label_551928;
        case 0x55192cu: goto label_55192c;
        case 0x551930u: goto label_551930;
        case 0x551934u: goto label_551934;
        case 0x551938u: goto label_551938;
        case 0x55193cu: goto label_55193c;
        case 0x551940u: goto label_551940;
        case 0x551944u: goto label_551944;
        case 0x551948u: goto label_551948;
        case 0x55194cu: goto label_55194c;
        case 0x551950u: goto label_551950;
        case 0x551954u: goto label_551954;
        case 0x551958u: goto label_551958;
        case 0x55195cu: goto label_55195c;
        case 0x551960u: goto label_551960;
        case 0x551964u: goto label_551964;
        case 0x551968u: goto label_551968;
        case 0x55196cu: goto label_55196c;
        case 0x551970u: goto label_551970;
        case 0x551974u: goto label_551974;
        case 0x551978u: goto label_551978;
        case 0x55197cu: goto label_55197c;
        case 0x551980u: goto label_551980;
        case 0x551984u: goto label_551984;
        case 0x551988u: goto label_551988;
        case 0x55198cu: goto label_55198c;
        case 0x551990u: goto label_551990;
        case 0x551994u: goto label_551994;
        case 0x551998u: goto label_551998;
        case 0x55199cu: goto label_55199c;
        default: break;
    }

    ctx->pc = 0x5508b0u;

label_5508b0:
    // 0x5508b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x5508b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_5508b4:
    // 0x5508b4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x5508b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_5508b8:
    // 0x5508b8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x5508b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_5508bc:
    // 0x5508bc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x5508bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_5508c0:
    // 0x5508c0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x5508c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_5508c4:
    // 0x5508c4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x5508c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_5508c8:
    // 0x5508c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x5508c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_5508cc:
    // 0x5508cc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x5508ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5508d0:
    // 0x5508d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x5508d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_5508d4:
    // 0x5508d4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x5508d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_5508d8:
    // 0x5508d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x5508d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_5508dc:
    // 0x5508dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x5508dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_5508e0:
    // 0x5508e0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x5508e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_5508e4:
    // 0x5508e4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x5508e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_5508e8:
    // 0x5508e8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x5508e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_5508ec:
    // 0x5508ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x5508ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_5508f0:
    // 0x5508f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5508f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5508f4:
    // 0x5508f4: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x5508f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5508f8:
    // 0x5508f8: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x5508f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_5508fc:
    // 0x5508fc: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x5508fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_550900:
    // 0x550900: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x550900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_550904:
    // 0x550904: 0x102000f6  beqz        $at, . + 4 + (0xF6 << 2)
label_550908:
    if (ctx->pc == 0x550908u) {
        ctx->pc = 0x550908u;
            // 0x550908: 0x4b82b  sltu        $s7, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->pc = 0x55090Cu;
        goto label_55090c;
    }
    ctx->pc = 0x550904u;
    {
        const bool branch_taken_0x550904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x550908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550904u;
            // 0x550908: 0x4b82b  sltu        $s7, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x550904) {
            ctx->pc = 0x550CE0u;
            goto label_550ce0;
        }
    }
    ctx->pc = 0x55090Cu;
label_55090c:
    // 0x55090c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x55090cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_550910:
    // 0x550910: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x550910u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_550914:
    // 0x550914: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x550914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_550918:
    // 0x550918: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x550918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_55091c:
    // 0x55091c: 0x847eeada  lh          $fp, -0x1526($v1)
    ctx->pc = 0x55091cu;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961882)));
label_550920:
    // 0x550920: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x550920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_550924:
    // 0x550924: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x550924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_550928:
    // 0x550928: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x550928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55092c:
    // 0x55092c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x55092cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_550930:
    // 0x550930: 0x8442eae4  lh          $v0, -0x151C($v0)
    ctx->pc = 0x550930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961892)));
label_550934:
    // 0x550934: 0x8474eadc  lh          $s4, -0x1524($v1)
    ctx->pc = 0x550934u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961884)));
label_550938:
    // 0x550938: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x550938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_55093c:
    // 0x55093c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55093cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_550940:
    // 0x550940: 0x8c6289f0  lw          $v0, -0x7610($v1)
    ctx->pc = 0x550940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_550944:
    // 0x550944: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x550944u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_550948:
    // 0x550948: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_55094c:
    if (ctx->pc == 0x55094Cu) {
        ctx->pc = 0x55094Cu;
            // 0x55094c: 0x2652ead0  addiu       $s2, $s2, -0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961872));
        ctx->pc = 0x550950u;
        goto label_550950;
    }
    ctx->pc = 0x550948u;
    {
        const bool branch_taken_0x550948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x55094Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550948u;
            // 0x55094c: 0x2652ead0  addiu       $s2, $s2, -0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x550948) {
            ctx->pc = 0x550954u;
            goto label_550954;
        }
    }
    ctx->pc = 0x550950u;
label_550950:
    // 0x550950: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x550950u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_550954:
    // 0x550954: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x550954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_550958:
    // 0x550958: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x550958u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_55095c:
    // 0x55095c: 0x9451daa8  lhu         $s1, -0x2558($v0)
    ctx->pc = 0x55095cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957736)));
label_550960:
    // 0x550960: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x550960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_550964:
    // 0x550964: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x550964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_550968:
    // 0x550968: 0x9450daaa  lhu         $s0, -0x2556($v0)
    ctx->pc = 0x550968u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957738)));
label_55096c:
    // 0x55096c: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x55096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_550970:
    // 0x550970: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x550970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_550974:
    // 0x550974: 0xc0506ac  jal         func_141AB0
label_550978:
    if (ctx->pc == 0x550978u) {
        ctx->pc = 0x550978u;
            // 0x550978: 0x2673ec20  addiu       $s3, $s3, -0x13E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962208));
        ctx->pc = 0x55097Cu;
        goto label_55097c;
    }
    ctx->pc = 0x550974u;
    SET_GPR_U32(ctx, 31, 0x55097Cu);
    ctx->pc = 0x550978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550974u;
            // 0x550978: 0x2673ec20  addiu       $s3, $s3, -0x13E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55097Cu; }
        if (ctx->pc != 0x55097Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55097Cu; }
        if (ctx->pc != 0x55097Cu) { return; }
    }
    ctx->pc = 0x55097Cu;
label_55097c:
    // 0x55097c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_550980:
    // 0x550980: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x550980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_550984:
    // 0x550984: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x550984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_550988:
    // 0x550988: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x550988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55098c:
    // 0x55098c: 0x320f809  jalr        $t9
label_550990:
    if (ctx->pc == 0x550990u) {
        ctx->pc = 0x550990u;
            // 0x550990: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x550994u;
        goto label_550994;
    }
    ctx->pc = 0x55098Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x550994u);
        ctx->pc = 0x550990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55098Cu;
            // 0x550990: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x550994u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x550994u; }
            if (ctx->pc != 0x550994u) { return; }
        }
        }
    }
    ctx->pc = 0x550994u;
label_550994:
    // 0x550994: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x550994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_550998:
    // 0x550998: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x550998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55099c:
    // 0x55099c: 0xc476ec28  lwc1        $f22, -0x13D8($v1)
    ctx->pc = 0x55099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_5509a0:
    // 0x5509a0: 0xc455ec2c  lwc1        $f21, -0x13D4($v0)
    ctx->pc = 0x5509a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_5509a4:
    // 0x5509a4: 0xc6a20070  lwc1        $f2, 0x70($s5)
    ctx->pc = 0x5509a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5509a8:
    // 0x5509a8: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x5509a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_5509ac:
    // 0x5509ac: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x5509acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5509b0:
    // 0x5509b0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x5509b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_5509b4:
    // 0x5509b4: 0x34567fd9  ori         $s6, $v0, 0x7FD9
    ctx->pc = 0x5509b4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32729);
label_5509b8:
    // 0x5509b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5509b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5509bc:
    // 0x5509bc: 0x0  nop
    ctx->pc = 0x5509bcu;
    // NOP
label_5509c0:
    // 0x5509c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5509c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5509c4:
    // 0x5509c4: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x5509c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_5509c8:
    // 0x5509c8: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x5509c8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
label_5509cc:
    // 0x5509cc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x5509ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_5509d0:
    // 0x5509d0: 0x46011603  div.s       $f24, $f2, $f1
    ctx->pc = 0x5509d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[24] = ctx->f[2] / ctx->f[1];
label_5509d4:
    // 0x5509d4: 0xc6a00074  lwc1        $f0, 0x74($s5)
    ctx->pc = 0x5509d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5509d8:
    // 0x5509d8: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x5509d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_5509dc:
    // 0x5509dc: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x5509dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5509e0:
    // 0x5509e0: 0x46000dc3  div.s       $f23, $f1, $f0
    ctx->pc = 0x5509e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[23] = ctx->f[1] / ctx->f[0];
label_5509e4:
    // 0x5509e4: 0x0  nop
    ctx->pc = 0x5509e4u;
    // NOP
label_5509e8:
    // 0x5509e8: 0x0  nop
    ctx->pc = 0x5509e8u;
    // NOP
label_5509ec:
    // 0x5509ec: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
label_5509f0:
    if (ctx->pc == 0x5509F0u) {
        ctx->pc = 0x5509F4u;
        goto label_5509f4;
    }
    ctx->pc = 0x5509ECu;
    {
        const bool branch_taken_0x5509ec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x5509ec) {
            ctx->pc = 0x5509F8u;
            goto label_5509f8;
        }
    }
    ctx->pc = 0x5509F4u;
label_5509f4:
    // 0x5509f4: 0x2416ffd9  addiu       $s6, $zero, -0x27
    ctx->pc = 0x5509f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
label_5509f8:
    // 0x5509f8: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x5509f8u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5509fc:
    // 0x5509fc: 0x0  nop
    ctx->pc = 0x5509fcu;
    // NOP
label_550a00:
    // 0x550a00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550a04:
    // 0x550a04: 0x46180300  add.s       $f12, $f0, $f24
    ctx->pc = 0x550a04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_550a08:
    // 0x550a08: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x550a08u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550a0c:
    // 0x550a0c: 0x0  nop
    ctx->pc = 0x550a0cu;
    // NOP
label_550a10:
    // 0x550a10: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x550a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_550a14:
    // 0x550a14: 0x460cb380  add.s       $f14, $f22, $f12
    ctx->pc = 0x550a14u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
label_550a18:
    // 0x550a18: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_550a1c:
    if (ctx->pc == 0x550A1Cu) {
        ctx->pc = 0x550A1Cu;
            // 0x550a1c: 0x46156bc0  add.s       $f15, $f13, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
        ctx->pc = 0x550A20u;
        goto label_550a20;
    }
    ctx->pc = 0x550A18u;
    {
        const bool branch_taken_0x550a18 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x550A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550A18u;
            // 0x550a1c: 0x46156bc0  add.s       $f15, $f13, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x550a18) {
            ctx->pc = 0x550A2Cu;
            goto label_550a2c;
        }
    }
    ctx->pc = 0x550A20u;
label_550a20:
    // 0x550a20: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x550a20u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550a24:
    // 0x550a24: 0x10000008  b           . + 4 + (0x8 << 2)
label_550a28:
    if (ctx->pc == 0x550A28u) {
        ctx->pc = 0x550A28u;
            // 0x550a28: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550A2Cu;
        goto label_550a2c;
    }
    ctx->pc = 0x550A24u;
    {
        const bool branch_taken_0x550a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550A24u;
            // 0x550a28: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550a24) {
            ctx->pc = 0x550A48u;
            goto label_550a48;
        }
    }
    ctx->pc = 0x550A2Cu;
label_550a2c:
    // 0x550a2c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x550a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_550a30:
    // 0x550a30: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x550a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_550a34:
    // 0x550a34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550a38:
    // 0x550a38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550a3c:
    // 0x550a3c: 0x0  nop
    ctx->pc = 0x550a3cu;
    // NOP
label_550a40:
    // 0x550a40: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x550a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_550a44:
    // 0x550a44: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x550a44u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_550a48:
    // 0x550a48: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_550a4c:
    if (ctx->pc == 0x550A4Cu) {
        ctx->pc = 0x550A4Cu;
            // 0x550a4c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x550A50u;
        goto label_550a50;
    }
    ctx->pc = 0x550A48u;
    {
        const bool branch_taken_0x550a48 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x550a48) {
            ctx->pc = 0x550A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550A48u;
            // 0x550a4c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x550A5Cu;
            goto label_550a5c;
        }
    }
    ctx->pc = 0x550A50u;
label_550a50:
    // 0x550a50: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x550a50u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550a54:
    // 0x550a54: 0x10000007  b           . + 4 + (0x7 << 2)
label_550a58:
    if (ctx->pc == 0x550A58u) {
        ctx->pc = 0x550A58u;
            // 0x550a58: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550A5Cu;
        goto label_550a5c;
    }
    ctx->pc = 0x550A54u;
    {
        const bool branch_taken_0x550a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550A54u;
            // 0x550a58: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550a54) {
            ctx->pc = 0x550A74u;
            goto label_550a74;
        }
    }
    ctx->pc = 0x550A5Cu;
label_550a5c:
    // 0x550a5c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x550a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_550a60:
    // 0x550a60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550a64:
    // 0x550a64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550a68:
    // 0x550a68: 0x0  nop
    ctx->pc = 0x550a68u;
    // NOP
label_550a6c:
    // 0x550a6c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x550a6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_550a70:
    // 0x550a70: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x550a70u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_550a74:
    // 0x550a74: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x550a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_550a78:
    // 0x550a78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x550a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_550a7c:
    // 0x550a7c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x550a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_550a80:
    // 0x550a80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x550a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_550a84:
    // 0x550a84: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x550a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_550a88:
    // 0x550a88: 0xc0bc284  jal         func_2F0A10
label_550a8c:
    if (ctx->pc == 0x550A8Cu) {
        ctx->pc = 0x550A8Cu;
            // 0x550a8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x550A90u;
        goto label_550a90;
    }
    ctx->pc = 0x550A88u;
    SET_GPR_U32(ctx, 31, 0x550A90u);
    ctx->pc = 0x550A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550A88u;
            // 0x550a8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550A90u; }
        if (ctx->pc != 0x550A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550A90u; }
        if (ctx->pc != 0x550A90u) { return; }
    }
    ctx->pc = 0x550A90u;
label_550a90:
    // 0x550a90: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x550a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_550a94:
    // 0x550a94: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x550a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_550a98:
    // 0x550a98: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x550a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_550a9c:
    // 0x550a9c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x550a9cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550aa0:
    // 0x550aa0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x550aa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_550aa4:
    // 0x550aa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550aa8:
    // 0x550aa8: 0x46152502  mul.s       $f20, $f4, $f21
    ctx->pc = 0x550aa8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_550aac:
    // 0x550aac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x550aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_550ab0:
    // 0x550ab0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x550ab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_550ab4:
    // 0x550ab4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x550ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_550ab8:
    // 0x550ab8: 0x0  nop
    ctx->pc = 0x550ab8u;
    // NOP
label_550abc:
    // 0x550abc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x550abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_550ac0:
    // 0x550ac0: 0xc662002c  lwc1        $f2, 0x2C($s3)
    ctx->pc = 0x550ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_550ac4:
    // 0x550ac4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550ac8:
    // 0x550ac8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x550ac8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_550acc:
    // 0x550acc: 0x46180b00  add.s       $f12, $f1, $f24
    ctx->pc = 0x550accu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
label_550ad0:
    // 0x550ad0: 0xc6630028  lwc1        $f3, 0x28($s3)
    ctx->pc = 0x550ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_550ad4:
    // 0x550ad4: 0x46020341  sub.s       $f13, $f0, $f2
    ctx->pc = 0x550ad4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_550ad8:
    // 0x550ad8: 0x460c1b80  add.s       $f14, $f3, $f12
    ctx->pc = 0x550ad8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
label_550adc:
    // 0x550adc: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_550ae0:
    if (ctx->pc == 0x550AE0u) {
        ctx->pc = 0x550AE0u;
            // 0x550ae0: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x550AE4u;
        goto label_550ae4;
    }
    ctx->pc = 0x550ADCu;
    {
        const bool branch_taken_0x550adc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x550AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550ADCu;
            // 0x550ae0: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x550adc) {
            ctx->pc = 0x550AF0u;
            goto label_550af0;
        }
    }
    ctx->pc = 0x550AE4u;
label_550ae4:
    // 0x550ae4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x550ae4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550ae8:
    // 0x550ae8: 0x10000008  b           . + 4 + (0x8 << 2)
label_550aec:
    if (ctx->pc == 0x550AECu) {
        ctx->pc = 0x550AECu;
            // 0x550aec: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550AF0u;
        goto label_550af0;
    }
    ctx->pc = 0x550AE8u;
    {
        const bool branch_taken_0x550ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550AE8u;
            // 0x550aec: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550ae8) {
            ctx->pc = 0x550B0Cu;
            goto label_550b0c;
        }
    }
    ctx->pc = 0x550AF0u;
label_550af0:
    // 0x550af0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x550af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_550af4:
    // 0x550af4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x550af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_550af8:
    // 0x550af8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550afc:
    // 0x550afc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550b00:
    // 0x550b00: 0x0  nop
    ctx->pc = 0x550b00u;
    // NOP
label_550b04:
    // 0x550b04: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x550b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_550b08:
    // 0x550b08: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x550b08u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_550b0c:
    // 0x550b0c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_550b10:
    if (ctx->pc == 0x550B10u) {
        ctx->pc = 0x550B10u;
            // 0x550b10: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x550B14u;
        goto label_550b14;
    }
    ctx->pc = 0x550B0Cu;
    {
        const bool branch_taken_0x550b0c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x550b0c) {
            ctx->pc = 0x550B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550B0Cu;
            // 0x550b10: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x550B20u;
            goto label_550b20;
        }
    }
    ctx->pc = 0x550B14u;
label_550b14:
    // 0x550b14: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x550b14u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550b18:
    // 0x550b18: 0x10000007  b           . + 4 + (0x7 << 2)
label_550b1c:
    if (ctx->pc == 0x550B1Cu) {
        ctx->pc = 0x550B1Cu;
            // 0x550b1c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550B20u;
        goto label_550b20;
    }
    ctx->pc = 0x550B18u;
    {
        const bool branch_taken_0x550b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550B18u;
            // 0x550b1c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550b18) {
            ctx->pc = 0x550B38u;
            goto label_550b38;
        }
    }
    ctx->pc = 0x550B20u;
label_550b20:
    // 0x550b20: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x550b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_550b24:
    // 0x550b24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550b28:
    // 0x550b28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550b28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550b2c:
    // 0x550b2c: 0x0  nop
    ctx->pc = 0x550b2cu;
    // NOP
label_550b30:
    // 0x550b30: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x550b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_550b34:
    // 0x550b34: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x550b34u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_550b38:
    // 0x550b38: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x550b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_550b3c:
    // 0x550b3c: 0x36c600ff  ori         $a2, $s6, 0xFF
    ctx->pc = 0x550b3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)255);
label_550b40:
    // 0x550b40: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x550b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_550b44:
    // 0x550b44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x550b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_550b48:
    // 0x550b48: 0xc0bc284  jal         func_2F0A10
label_550b4c:
    if (ctx->pc == 0x550B4Cu) {
        ctx->pc = 0x550B4Cu;
            // 0x550b4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x550B50u;
        goto label_550b50;
    }
    ctx->pc = 0x550B48u;
    SET_GPR_U32(ctx, 31, 0x550B50u);
    ctx->pc = 0x550B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550B48u;
            // 0x550b4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550B50u; }
        if (ctx->pc != 0x550B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550B50u; }
        if (ctx->pc != 0x550B50u) { return; }
    }
    ctx->pc = 0x550B50u;
label_550b50:
    // 0x550b50: 0x86420012  lh          $v0, 0x12($s2)
    ctx->pc = 0x550b50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_550b54:
    // 0x550b54: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x550b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_550b58:
    // 0x550b58: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x550b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_550b5c:
    // 0x550b5c: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_550b60:
    if (ctx->pc == 0x550B60u) {
        ctx->pc = 0x550B64u;
        goto label_550b64;
    }
    ctx->pc = 0x550B5Cu;
    {
        const bool branch_taken_0x550b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x550b5c) {
            ctx->pc = 0x550CC8u;
            goto label_550cc8;
        }
    }
    ctx->pc = 0x550B64u;
label_550b64:
    // 0x550b64: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x550b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_550b68:
    // 0x550b68: 0x16e00002  bnez        $s7, . + 4 + (0x2 << 2)
label_550b6c:
    if (ctx->pc == 0x550B6Cu) {
        ctx->pc = 0x550B6Cu;
            // 0x550b6c: 0x34547fd9  ori         $s4, $v0, 0x7FD9 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32729);
        ctx->pc = 0x550B70u;
        goto label_550b70;
    }
    ctx->pc = 0x550B68u;
    {
        const bool branch_taken_0x550b68 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x550B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550B68u;
            // 0x550b6c: 0x34547fd9  ori         $s4, $v0, 0x7FD9 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32729);
        ctx->in_delay_slot = false;
        if (branch_taken_0x550b68) {
            ctx->pc = 0x550B74u;
            goto label_550b74;
        }
    }
    ctx->pc = 0x550B70u;
label_550b70:
    // 0x550b70: 0x2414ffd9  addiu       $s4, $zero, -0x27
    ctx->pc = 0x550b70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
label_550b74:
    // 0x550b74: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x550b74u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550b78:
    // 0x550b78: 0x0  nop
    ctx->pc = 0x550b78u;
    // NOP
label_550b7c:
    // 0x550b7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550b7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550b80:
    // 0x550b80: 0x46170300  add.s       $f12, $f0, $f23
    ctx->pc = 0x550b80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_550b84:
    // 0x550b84: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x550b84u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550b88:
    // 0x550b88: 0x0  nop
    ctx->pc = 0x550b88u;
    // NOP
label_550b8c:
    // 0x550b8c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x550b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_550b90:
    // 0x550b90: 0x460cb380  add.s       $f14, $f22, $f12
    ctx->pc = 0x550b90u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
label_550b94:
    // 0x550b94: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_550b98:
    if (ctx->pc == 0x550B98u) {
        ctx->pc = 0x550B98u;
            // 0x550b98: 0x46156bc0  add.s       $f15, $f13, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
        ctx->pc = 0x550B9Cu;
        goto label_550b9c;
    }
    ctx->pc = 0x550B94u;
    {
        const bool branch_taken_0x550b94 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x550B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550B94u;
            // 0x550b98: 0x46156bc0  add.s       $f15, $f13, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x550b94) {
            ctx->pc = 0x550BA8u;
            goto label_550ba8;
        }
    }
    ctx->pc = 0x550B9Cu;
label_550b9c:
    // 0x550b9c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x550b9cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550ba0:
    // 0x550ba0: 0x10000008  b           . + 4 + (0x8 << 2)
label_550ba4:
    if (ctx->pc == 0x550BA4u) {
        ctx->pc = 0x550BA4u;
            // 0x550ba4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550BA8u;
        goto label_550ba8;
    }
    ctx->pc = 0x550BA0u;
    {
        const bool branch_taken_0x550ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550BA0u;
            // 0x550ba4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550ba0) {
            ctx->pc = 0x550BC4u;
            goto label_550bc4;
        }
    }
    ctx->pc = 0x550BA8u;
label_550ba8:
    // 0x550ba8: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x550ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_550bac:
    // 0x550bac: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x550bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_550bb0:
    // 0x550bb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550bb4:
    // 0x550bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550bb8:
    // 0x550bb8: 0x0  nop
    ctx->pc = 0x550bb8u;
    // NOP
label_550bbc:
    // 0x550bbc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x550bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_550bc0:
    // 0x550bc0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x550bc0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_550bc4:
    // 0x550bc4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_550bc8:
    if (ctx->pc == 0x550BC8u) {
        ctx->pc = 0x550BC8u;
            // 0x550bc8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x550BCCu;
        goto label_550bcc;
    }
    ctx->pc = 0x550BC4u;
    {
        const bool branch_taken_0x550bc4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x550bc4) {
            ctx->pc = 0x550BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550BC4u;
            // 0x550bc8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x550BD8u;
            goto label_550bd8;
        }
    }
    ctx->pc = 0x550BCCu;
label_550bcc:
    // 0x550bcc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x550bccu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550bd0:
    // 0x550bd0: 0x10000007  b           . + 4 + (0x7 << 2)
label_550bd4:
    if (ctx->pc == 0x550BD4u) {
        ctx->pc = 0x550BD4u;
            // 0x550bd4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550BD8u;
        goto label_550bd8;
    }
    ctx->pc = 0x550BD0u;
    {
        const bool branch_taken_0x550bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550BD0u;
            // 0x550bd4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550bd0) {
            ctx->pc = 0x550BF0u;
            goto label_550bf0;
        }
    }
    ctx->pc = 0x550BD8u;
label_550bd8:
    // 0x550bd8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x550bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_550bdc:
    // 0x550bdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550be0:
    // 0x550be0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550be0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550be4:
    // 0x550be4: 0x0  nop
    ctx->pc = 0x550be4u;
    // NOP
label_550be8:
    // 0x550be8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x550be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_550bec:
    // 0x550bec: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x550becu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_550bf0:
    // 0x550bf0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x550bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_550bf4:
    // 0x550bf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x550bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_550bf8:
    // 0x550bf8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x550bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_550bfc:
    // 0x550bfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x550bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_550c00:
    // 0x550c00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x550c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_550c04:
    // 0x550c04: 0xc0bc284  jal         func_2F0A10
label_550c08:
    if (ctx->pc == 0x550C08u) {
        ctx->pc = 0x550C08u;
            // 0x550c08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x550C0Cu;
        goto label_550c0c;
    }
    ctx->pc = 0x550C04u;
    SET_GPR_U32(ctx, 31, 0x550C0Cu);
    ctx->pc = 0x550C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550C04u;
            // 0x550c08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550C0Cu; }
        if (ctx->pc != 0x550C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550C0Cu; }
        if (ctx->pc != 0x550C0Cu) { return; }
    }
    ctx->pc = 0x550C0Cu;
label_550c0c:
    // 0x550c0c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x550c0cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550c10:
    // 0x550c10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x550c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_550c14:
    // 0x550c14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550c18:
    // 0x550c18: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x550c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_550c1c:
    // 0x550c1c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x550c1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_550c20:
    // 0x550c20: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x550c20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_550c24:
    // 0x550c24: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x550c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_550c28:
    // 0x550c28: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x550c28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_550c2c:
    // 0x550c2c: 0xc6630038  lwc1        $f3, 0x38($s3)
    ctx->pc = 0x550c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_550c30:
    // 0x550c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x550c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550c34:
    // 0x550c34: 0x0  nop
    ctx->pc = 0x550c34u;
    // NOP
label_550c38:
    // 0x550c38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x550c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550c3c:
    // 0x550c3c: 0x46170300  add.s       $f12, $f0, $f23
    ctx->pc = 0x550c3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_550c40:
    // 0x550c40: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x550c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_550c44:
    // 0x550c44: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x550c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_550c48:
    // 0x550c48: 0x460c1b80  add.s       $f14, $f3, $f12
    ctx->pc = 0x550c48u;
    ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
label_550c4c:
    // 0x550c4c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x550c4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_550c50:
    // 0x550c50: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x550c50u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_550c54:
    // 0x550c54: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_550c58:
    if (ctx->pc == 0x550C58u) {
        ctx->pc = 0x550C58u;
            // 0x550c58: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x550C5Cu;
        goto label_550c5c;
    }
    ctx->pc = 0x550C54u;
    {
        const bool branch_taken_0x550c54 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x550C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550C54u;
            // 0x550c58: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x550c54) {
            ctx->pc = 0x550C68u;
            goto label_550c68;
        }
    }
    ctx->pc = 0x550C5Cu;
label_550c5c:
    // 0x550c5c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x550c5cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550c60:
    // 0x550c60: 0x10000008  b           . + 4 + (0x8 << 2)
label_550c64:
    if (ctx->pc == 0x550C64u) {
        ctx->pc = 0x550C64u;
            // 0x550c64: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550C68u;
        goto label_550c68;
    }
    ctx->pc = 0x550C60u;
    {
        const bool branch_taken_0x550c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550C60u;
            // 0x550c64: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550c60) {
            ctx->pc = 0x550C84u;
            goto label_550c84;
        }
    }
    ctx->pc = 0x550C68u;
label_550c68:
    // 0x550c68: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x550c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_550c6c:
    // 0x550c6c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x550c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_550c70:
    // 0x550c70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550c74:
    // 0x550c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550c78:
    // 0x550c78: 0x0  nop
    ctx->pc = 0x550c78u;
    // NOP
label_550c7c:
    // 0x550c7c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x550c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_550c80:
    // 0x550c80: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x550c80u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_550c84:
    // 0x550c84: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_550c88:
    if (ctx->pc == 0x550C88u) {
        ctx->pc = 0x550C88u;
            // 0x550c88: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x550C8Cu;
        goto label_550c8c;
    }
    ctx->pc = 0x550C84u;
    {
        const bool branch_taken_0x550c84 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x550c84) {
            ctx->pc = 0x550C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550C84u;
            // 0x550c88: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x550C98u;
            goto label_550c98;
        }
    }
    ctx->pc = 0x550C8Cu;
label_550c8c:
    // 0x550c8c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x550c8cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550c90:
    // 0x550c90: 0x10000007  b           . + 4 + (0x7 << 2)
label_550c94:
    if (ctx->pc == 0x550C94u) {
        ctx->pc = 0x550C94u;
            // 0x550c94: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x550C98u;
        goto label_550c98;
    }
    ctx->pc = 0x550C90u;
    {
        const bool branch_taken_0x550c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550C90u;
            // 0x550c94: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550c90) {
            ctx->pc = 0x550CB0u;
            goto label_550cb0;
        }
    }
    ctx->pc = 0x550C98u;
label_550c98:
    // 0x550c98: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x550c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_550c9c:
    // 0x550c9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x550c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_550ca0:
    // 0x550ca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x550ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550ca4:
    // 0x550ca4: 0x0  nop
    ctx->pc = 0x550ca4u;
    // NOP
label_550ca8:
    // 0x550ca8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x550ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_550cac:
    // 0x550cac: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x550cacu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_550cb0:
    // 0x550cb0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x550cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_550cb4:
    // 0x550cb4: 0x368600ff  ori         $a2, $s4, 0xFF
    ctx->pc = 0x550cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)255);
label_550cb8:
    // 0x550cb8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x550cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_550cbc:
    // 0x550cbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x550cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_550cc0:
    // 0x550cc0: 0xc0bc284  jal         func_2F0A10
label_550cc4:
    if (ctx->pc == 0x550CC4u) {
        ctx->pc = 0x550CC4u;
            // 0x550cc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x550CC8u;
        goto label_550cc8;
    }
    ctx->pc = 0x550CC0u;
    SET_GPR_U32(ctx, 31, 0x550CC8u);
    ctx->pc = 0x550CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550CC0u;
            // 0x550cc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550CC8u; }
        if (ctx->pc != 0x550CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550CC8u; }
        if (ctx->pc != 0x550CC8u) { return; }
    }
    ctx->pc = 0x550CC8u;
label_550cc8:
    // 0x550cc8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x550cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_550ccc:
    // 0x550ccc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x550cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_550cd0:
    // 0x550cd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x550cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_550cd4:
    // 0x550cd4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x550cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_550cd8:
    // 0x550cd8: 0x320f809  jalr        $t9
label_550cdc:
    if (ctx->pc == 0x550CDCu) {
        ctx->pc = 0x550CE0u;
        goto label_550ce0;
    }
    ctx->pc = 0x550CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x550CE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x550CE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x550CE0u; }
            if (ctx->pc != 0x550CE0u) { return; }
        }
        }
    }
    ctx->pc = 0x550CE0u;
label_550ce0:
    // 0x550ce0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x550ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_550ce4:
    // 0x550ce4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x550ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_550ce8:
    // 0x550ce8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x550ce8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_550cec:
    // 0x550cec: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x550cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_550cf0:
    // 0x550cf0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x550cf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_550cf4:
    // 0x550cf4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x550cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_550cf8:
    // 0x550cf8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x550cf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_550cfc:
    // 0x550cfc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x550cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_550d00:
    // 0x550d00: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x550d00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_550d04:
    // 0x550d04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x550d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_550d08:
    // 0x550d08: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x550d08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_550d0c:
    // 0x550d0c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x550d0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_550d10:
    // 0x550d10: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x550d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_550d14:
    // 0x550d14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x550d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_550d18:
    // 0x550d18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x550d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_550d1c:
    // 0x550d1c: 0x3e00008  jr          $ra
label_550d20:
    if (ctx->pc == 0x550D20u) {
        ctx->pc = 0x550D20u;
            // 0x550d20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x550D24u;
        goto label_550d24;
    }
    ctx->pc = 0x550D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x550D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550D1Cu;
            // 0x550d20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x550D24u;
label_550d24:
    // 0x550d24: 0x0  nop
    ctx->pc = 0x550d24u;
    // NOP
label_550d28:
    // 0x550d28: 0x0  nop
    ctx->pc = 0x550d28u;
    // NOP
label_550d2c:
    // 0x550d2c: 0x0  nop
    ctx->pc = 0x550d2cu;
    // NOP
label_550d30:
    // 0x550d30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x550d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_550d34:
    // 0x550d34: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x550d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_550d38:
    // 0x550d38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x550d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_550d3c:
    // 0x550d3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x550d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_550d40:
    // 0x550d40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x550d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_550d44:
    // 0x550d44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x550d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_550d48:
    // 0x550d48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x550d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_550d4c:
    // 0x550d4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x550d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_550d50:
    // 0x550d50: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x550d50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_550d54:
    // 0x550d54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x550d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_550d58:
    // 0x550d58: 0x8c650ec8  lw          $a1, 0xEC8($v1)
    ctx->pc = 0x550d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_550d5c:
    // 0x550d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x550d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_550d60:
    // 0x550d60: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x550d60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_550d64:
    // 0x550d64: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x550d64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_550d68:
    // 0x550d68: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x550d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_550d6c:
    // 0x550d6c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_550d70:
    if (ctx->pc == 0x550D70u) {
        ctx->pc = 0x550D70u;
            // 0x550d70: 0x2652ead0  addiu       $s2, $s2, -0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961872));
        ctx->pc = 0x550D74u;
        goto label_550d74;
    }
    ctx->pc = 0x550D6Cu;
    {
        const bool branch_taken_0x550d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x550D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550D6Cu;
            // 0x550d70: 0x2652ead0  addiu       $s2, $s2, -0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x550d6c) {
            ctx->pc = 0x550DA4u;
            goto label_550da4;
        }
    }
    ctx->pc = 0x550D74u;
label_550d74:
    // 0x550d74: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x550d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_550d78:
    // 0x550d78: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x550d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_550d7c:
    // 0x550d7c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x550d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_550d80:
    // 0x550d80: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x550d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_550d84:
    // 0x550d84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x550d84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550d88:
    // 0x550d88: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x550d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_550d8c:
    // 0x550d8c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x550d8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_550d90:
    // 0x550d90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x550d90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_550d94:
    // 0x550d94: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_550d98:
    if (ctx->pc == 0x550D98u) {
        ctx->pc = 0x550D98u;
            // 0x550d98: 0xe6010084  swc1        $f1, 0x84($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->pc = 0x550D9Cu;
        goto label_550d9c;
    }
    ctx->pc = 0x550D94u;
    {
        const bool branch_taken_0x550d94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x550D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550D94u;
            // 0x550d98: 0xe6010084  swc1        $f1, 0x84($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550d94) {
            ctx->pc = 0x550DCCu;
            goto label_550dcc;
        }
    }
    ctx->pc = 0x550D9Cu;
label_550d9c:
    // 0x550d9c: 0x1000000b  b           . + 4 + (0xB << 2)
label_550da0:
    if (ctx->pc == 0x550DA0u) {
        ctx->pc = 0x550DA0u;
            // 0x550da0: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->pc = 0x550DA4u;
        goto label_550da4;
    }
    ctx->pc = 0x550D9Cu;
    {
        const bool branch_taken_0x550d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550D9Cu;
            // 0x550da0: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550d9c) {
            ctx->pc = 0x550DCCu;
            goto label_550dcc;
        }
    }
    ctx->pc = 0x550DA4u;
label_550da4:
    // 0x550da4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x550da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_550da8:
    // 0x550da8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x550da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_550dac:
    // 0x550dac: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x550dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_550db0:
    // 0x550db0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x550db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550db4:
    // 0x550db4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x550db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_550db8:
    // 0x550db8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x550db8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_550dbc:
    // 0x550dbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x550dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_550dc0:
    // 0x550dc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_550dc4:
    if (ctx->pc == 0x550DC4u) {
        ctx->pc = 0x550DC4u;
            // 0x550dc4: 0xe6010084  swc1        $f1, 0x84($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->pc = 0x550DC8u;
        goto label_550dc8;
    }
    ctx->pc = 0x550DC0u;
    {
        const bool branch_taken_0x550dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x550DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550DC0u;
            // 0x550dc4: 0xe6010084  swc1        $f1, 0x84($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550dc0) {
            ctx->pc = 0x550DCCu;
            goto label_550dcc;
        }
    }
    ctx->pc = 0x550DC8u;
label_550dc8:
    // 0x550dc8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x550dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_550dcc:
    // 0x550dcc: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x550dccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_550dd0:
    // 0x550dd0: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x550dd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_550dd4:
    // 0x550dd4: 0x502002a5  beql        $at, $zero, . + 4 + (0x2A5 << 2)
label_550dd8:
    if (ctx->pc == 0x550DD8u) {
        ctx->pc = 0x550DD8u;
            // 0x550dd8: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x550DDCu;
        goto label_550ddc;
    }
    ctx->pc = 0x550DD4u;
    {
        const bool branch_taken_0x550dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x550dd4) {
            ctx->pc = 0x550DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550DD4u;
            // 0x550dd8: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55186Cu;
            goto label_55186c;
        }
    }
    ctx->pc = 0x550DDCu;
label_550ddc:
    // 0x550ddc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x550ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_550de0:
    // 0x550de0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x550de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_550de4:
    // 0x550de4: 0x2484ebc0  addiu       $a0, $a0, -0x1440
    ctx->pc = 0x550de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
label_550de8:
    // 0x550de8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x550de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_550dec:
    // 0x550dec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x550decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_550df0:
    // 0x550df0: 0x600008  jr          $v1
label_550df4:
    if (ctx->pc == 0x550DF4u) {
        ctx->pc = 0x550DF8u;
        goto label_550df8;
    }
    ctx->pc = 0x550DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x550DF8u: goto label_550df8;
            case 0x550EB0u: goto label_550eb0;
            case 0x550F4Cu: goto label_550f4c;
            case 0x550FE8u: goto label_550fe8;
            case 0x55111Cu: goto label_55111c;
            case 0x551174u: goto label_551174;
            case 0x551330u: goto label_551330;
            case 0x55142Cu: goto label_55142c;
            case 0x55156Cu: goto label_55156c;
            case 0x5515B8u: goto label_5515b8;
            case 0x551604u: goto label_551604;
            case 0x5516B4u: goto label_5516b4;
            case 0x551760u: goto label_551760;
            case 0x55181Cu: goto label_55181c;
            case 0x551848u: goto label_551848;
            default: break;
        }
        return;
    }
    ctx->pc = 0x550DF8u;
label_550df8:
    // 0x550df8: 0x86430038  lh          $v1, 0x38($s2)
    ctx->pc = 0x550df8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_550dfc:
    // 0x550dfc: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x550dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_550e00:
    // 0x550e00: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x550e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_550e04:
    // 0x550e04: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x550e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_550e08:
    // 0x550e08: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x550e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_550e0c:
    // 0x550e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x550e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_550e10:
    // 0x550e10: 0xa603006c  sh          $v1, 0x6C($s0)
    ctx->pc = 0x550e10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 3));
label_550e14:
    // 0x550e14: 0xe6020070  swc1        $f2, 0x70($s0)
    ctx->pc = 0x550e14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_550e18:
    // 0x550e18: 0xe6010074  swc1        $f1, 0x74($s0)
    ctx->pc = 0x550e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_550e1c:
    // 0x550e1c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x550e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_550e20:
    // 0x550e20: 0xc154668  jal         func_5519A0
label_550e24:
    if (ctx->pc == 0x550E24u) {
        ctx->pc = 0x550E24u;
            // 0x550e24: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x550E28u;
        goto label_550e28;
    }
    ctx->pc = 0x550E20u;
    SET_GPR_U32(ctx, 31, 0x550E28u);
    ctx->pc = 0x550E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550E20u;
            // 0x550e24: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5519A0u;
    if (runtime->hasFunction(0x5519A0u)) {
        auto targetFn = runtime->lookupFunction(0x5519A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550E28u; }
        if (ctx->pc != 0x550E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005519A0_0x5519a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550E28u; }
        if (ctx->pc != 0x550E28u) { return; }
    }
    ctx->pc = 0x550E28u;
label_550e28:
    // 0x550e28: 0xc040180  jal         func_100600
label_550e2c:
    if (ctx->pc == 0x550E2Cu) {
        ctx->pc = 0x550E2Cu;
            // 0x550e2c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x550E30u;
        goto label_550e30;
    }
    ctx->pc = 0x550E28u;
    SET_GPR_U32(ctx, 31, 0x550E30u);
    ctx->pc = 0x550E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550E28u;
            // 0x550e2c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550E30u; }
        if (ctx->pc != 0x550E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550E30u; }
        if (ctx->pc != 0x550E30u) { return; }
    }
    ctx->pc = 0x550E30u;
label_550e30:
    // 0x550e30: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_550e34:
    if (ctx->pc == 0x550E34u) {
        ctx->pc = 0x550E34u;
            // 0x550e34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x550E38u;
        goto label_550e38;
    }
    ctx->pc = 0x550E30u;
    {
        const bool branch_taken_0x550e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x550E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550E30u;
            // 0x550e34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x550e30) {
            ctx->pc = 0x550EA0u;
            goto label_550ea0;
        }
    }
    ctx->pc = 0x550E38u;
label_550e38:
    // 0x550e38: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x550e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_550e3c:
    // 0x550e3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x550e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_550e40:
    // 0x550e40: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x550e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_550e44:
    // 0x550e44: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x550e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_550e48:
    // 0x550e48: 0xc10ca68  jal         func_4329A0
label_550e4c:
    if (ctx->pc == 0x550E4Cu) {
        ctx->pc = 0x550E4Cu;
            // 0x550e4c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x550E50u;
        goto label_550e50;
    }
    ctx->pc = 0x550E48u;
    SET_GPR_U32(ctx, 31, 0x550E50u);
    ctx->pc = 0x550E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550E48u;
            // 0x550e4c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550E50u; }
        if (ctx->pc != 0x550E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550E50u; }
        if (ctx->pc != 0x550E50u) { return; }
    }
    ctx->pc = 0x550E50u;
label_550e50:
    // 0x550e50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x550e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_550e54:
    // 0x550e54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x550e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_550e58:
    // 0x550e58: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x550e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_550e5c:
    // 0x550e5c: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x550e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_550e60:
    // 0x550e60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x550e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_550e64:
    // 0x550e64: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x550e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_550e68:
    // 0x550e68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x550e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_550e6c:
    // 0x550e6c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x550e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_550e70:
    // 0x550e70: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x550e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_550e74:
    // 0x550e74: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x550e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_550e78:
    // 0x550e78: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x550e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_550e7c:
    // 0x550e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x550e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_550e80:
    // 0x550e80: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x550e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_550e84:
    // 0x550e84: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x550e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_550e88:
    // 0x550e88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x550e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_550e8c:
    // 0x550e8c: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x550e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_550e90:
    // 0x550e90: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x550e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_550e94:
    // 0x550e94: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x550e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_550e98:
    // 0x550e98: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x550e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_550e9c:
    // 0x550e9c: 0xa220006c  sb          $zero, 0x6C($s1)
    ctx->pc = 0x550e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 0));
label_550ea0:
    // 0x550ea0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x550ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_550ea4:
    // 0x550ea4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x550ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_550ea8:
    // 0x550ea8: 0x320f809  jalr        $t9
label_550eac:
    if (ctx->pc == 0x550EACu) {
        ctx->pc = 0x550EACu;
            // 0x550eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x550EB0u;
        goto label_550eb0;
    }
    ctx->pc = 0x550EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x550EB0u);
        ctx->pc = 0x550EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550EA8u;
            // 0x550eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x550EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x550EB0u; }
            if (ctx->pc != 0x550EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x550EB0u;
label_550eb0:
    // 0x550eb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x550eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_550eb4:
    // 0x550eb4: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x550eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_550eb8:
    // 0x550eb8: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x550eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_550ebc:
    // 0x550ebc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x550ebcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_550ec0:
    // 0x550ec0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x550ec0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_550ec4:
    // 0x550ec4: 0x2673ea20  addiu       $s3, $s3, -0x15E0
    ctx->pc = 0x550ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961696));
label_550ec8:
    // 0x550ec8: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x550ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_550ecc:
    // 0x550ecc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x550eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_550ed0:
    // 0x550ed0: 0xc0b90e0  jal         func_2E4380
label_550ed4:
    if (ctx->pc == 0x550ED4u) {
        ctx->pc = 0x550ED4u;
            // 0x550ed4: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->pc = 0x550ED8u;
        goto label_550ed8;
    }
    ctx->pc = 0x550ED0u;
    SET_GPR_U32(ctx, 31, 0x550ED8u);
    ctx->pc = 0x550ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x550ED0u;
            // 0x550ed4: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550ED8u; }
        if (ctx->pc != 0x550ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x550ED8u; }
        if (ctx->pc != 0x550ED8u) { return; }
    }
    ctx->pc = 0x550ED8u;
label_550ed8:
    // 0x550ed8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_550edc:
    if (ctx->pc == 0x550EDCu) {
        ctx->pc = 0x550EDCu;
            // 0x550edc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x550EE0u;
        goto label_550ee0;
    }
    ctx->pc = 0x550ED8u;
    {
        const bool branch_taken_0x550ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x550ed8) {
            ctx->pc = 0x550EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550ED8u;
            // 0x550edc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x550EE8u;
            goto label_550ee8;
        }
    }
    ctx->pc = 0x550EE0u;
label_550ee0:
    // 0x550ee0: 0x10000005  b           . + 4 + (0x5 << 2)
label_550ee4:
    if (ctx->pc == 0x550EE4u) {
        ctx->pc = 0x550EE4u;
            // 0x550ee4: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x550EE8u;
        goto label_550ee8;
    }
    ctx->pc = 0x550EE0u;
    {
        const bool branch_taken_0x550ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550EE0u;
            // 0x550ee4: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x550ee0) {
            ctx->pc = 0x550EF8u;
            goto label_550ef8;
        }
    }
    ctx->pc = 0x550EE8u;
label_550ee8:
    // 0x550ee8: 0x2a820029  slti        $v0, $s4, 0x29
    ctx->pc = 0x550ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)41) ? 1 : 0);
label_550eec:
    // 0x550eec: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_550ef0:
    if (ctx->pc == 0x550EF0u) {
        ctx->pc = 0x550EF0u;
            // 0x550ef0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x550EF4u;
        goto label_550ef4;
    }
    ctx->pc = 0x550EECu;
    {
        const bool branch_taken_0x550eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x550EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550EECu;
            // 0x550ef0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x550eec) {
            ctx->pc = 0x550ECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_550ecc;
        }
    }
    ctx->pc = 0x550EF4u;
label_550ef4:
    // 0x550ef4: 0x0  nop
    ctx->pc = 0x550ef4u;
    // NOP
label_550ef8:
    // 0x550ef8: 0x52a00009  beql        $s5, $zero, . + 4 + (0x9 << 2)
label_550efc:
    if (ctx->pc == 0x550EFCu) {
        ctx->pc = 0x550EFCu;
            // 0x550efc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x550F00u;
        goto label_550f00;
    }
    ctx->pc = 0x550EF8u;
    {
        const bool branch_taken_0x550ef8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x550ef8) {
            ctx->pc = 0x550EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550EF8u;
            // 0x550efc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x550F20u;
            goto label_550f20;
        }
    }
    ctx->pc = 0x550F00u;
label_550f00:
    // 0x550f00: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x550f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_550f04:
    // 0x550f04: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x550f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_550f08:
    // 0x550f08: 0x320f809  jalr        $t9
label_550f0c:
    if (ctx->pc == 0x550F0Cu) {
        ctx->pc = 0x550F0Cu;
            // 0x550f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x550F10u;
        goto label_550f10;
    }
    ctx->pc = 0x550F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x550F10u);
        ctx->pc = 0x550F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550F08u;
            // 0x550f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x550F10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x550F10u; }
            if (ctx->pc != 0x550F10u) { return; }
        }
        }
    }
    ctx->pc = 0x550F10u;
label_550f10:
    // 0x550f10: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x550f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_550f14:
    // 0x550f14: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x550f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_550f18:
    // 0x550f18: 0x10000253  b           . + 4 + (0x253 << 2)
label_550f1c:
    if (ctx->pc == 0x550F1Cu) {
        ctx->pc = 0x550F1Cu;
            // 0x550f1c: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
        ctx->pc = 0x550F20u;
        goto label_550f20;
    }
    ctx->pc = 0x550F18u;
    {
        const bool branch_taken_0x550f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550F18u;
            // 0x550f1c: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x550f18) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x550F20u;
label_550f20:
    // 0x550f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x550f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_550f24:
    // 0x550f24: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x550f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_550f28:
    // 0x550f28: 0x320f809  jalr        $t9
label_550f2c:
    if (ctx->pc == 0x550F2Cu) {
        ctx->pc = 0x550F2Cu;
            // 0x550f2c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x550F30u;
        goto label_550f30;
    }
    ctx->pc = 0x550F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x550F30u);
        ctx->pc = 0x550F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550F28u;
            // 0x550f2c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x550F30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x550F30u; }
            if (ctx->pc != 0x550F30u) { return; }
        }
        }
    }
    ctx->pc = 0x550F30u;
label_550f30:
    // 0x550f30: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x550f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_550f34:
    // 0x550f34: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x550f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_550f38:
    // 0x550f38: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x550f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_550f3c:
    // 0x550f3c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x550f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_550f40:
    // 0x550f40: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x550f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_550f44:
    // 0x550f44: 0x10000248  b           . + 4 + (0x248 << 2)
label_550f48:
    if (ctx->pc == 0x550F48u) {
        ctx->pc = 0x550F48u;
            // 0x550f48: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x550F4Cu;
        goto label_550f4c;
    }
    ctx->pc = 0x550F44u;
    {
        const bool branch_taken_0x550f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x550F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550F44u;
            // 0x550f48: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x550f44) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x550F4Cu;
label_550f4c:
    // 0x550f4c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x550f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_550f50:
    // 0x550f50: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x550f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_550f54:
    // 0x550f54: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x550f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_550f58:
    // 0x550f58: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x550f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_550f5c:
    // 0x550f5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x550f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550f60:
    // 0x550f60: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x550f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_550f64:
    // 0x550f64: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x550f64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_550f68:
    // 0x550f68: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x550f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_550f6c:
    // 0x550f6c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x550f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_550f70:
    // 0x550f70: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x550f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_550f74:
    // 0x550f74: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x550f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_550f78:
    // 0x550f78: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x550f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_550f7c:
    // 0x550f7c: 0xe6010074  swc1        $f1, 0x74($s0)
    ctx->pc = 0x550f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_550f80:
    // 0x550f80: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x550f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_550f84:
    // 0x550f84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x550f84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_550f88:
    // 0x550f88: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_550f8c:
    if (ctx->pc == 0x550F8Cu) {
        ctx->pc = 0x550F8Cu;
            // 0x550f8c: 0xc6010074  lwc1        $f1, 0x74($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x550F90u;
        goto label_550f90;
    }
    ctx->pc = 0x550F88u;
    {
        const bool branch_taken_0x550f88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x550f88) {
            ctx->pc = 0x550F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550F88u;
            // 0x550f8c: 0xc6010074  lwc1        $f1, 0x74($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x550F98u;
            goto label_550f98;
        }
    }
    ctx->pc = 0x550F90u;
label_550f90:
    // 0x550f90: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x550f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_550f94:
    // 0x550f94: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x550f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_550f98:
    // 0x550f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x550f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_550f9c:
    // 0x550f9c: 0x0  nop
    ctx->pc = 0x550f9cu;
    // NOP
label_550fa0:
    // 0x550fa0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x550fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_550fa4:
    // 0x550fa4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_550fa8:
    if (ctx->pc == 0x550FA8u) {
        ctx->pc = 0x550FA8u;
            // 0x550fa8: 0xc6000070  lwc1        $f0, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x550FACu;
        goto label_550fac;
    }
    ctx->pc = 0x550FA4u;
    {
        const bool branch_taken_0x550fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x550fa4) {
            ctx->pc = 0x550FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x550FA4u;
            // 0x550fa8: 0xc6000070  lwc1        $f0, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x550FB4u;
            goto label_550fb4;
        }
    }
    ctx->pc = 0x550FACu;
label_550fac:
    // 0x550fac: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x550facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_550fb0:
    // 0x550fb0: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x550fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_550fb4:
    // 0x550fb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x550fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_550fb8:
    // 0x550fb8: 0x0  nop
    ctx->pc = 0x550fb8u;
    // NOP
label_550fbc:
    // 0x550fbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x550fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_550fc0:
    // 0x550fc0: 0x45000229  bc1f        . + 4 + (0x229 << 2)
label_550fc4:
    if (ctx->pc == 0x550FC4u) {
        ctx->pc = 0x550FC8u;
        goto label_550fc8;
    }
    ctx->pc = 0x550FC0u;
    {
        const bool branch_taken_0x550fc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x550fc0) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x550FC8u;
label_550fc8:
    // 0x550fc8: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x550fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_550fcc:
    // 0x550fcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x550fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_550fd0:
    // 0x550fd0: 0x45000225  bc1f        . + 4 + (0x225 << 2)
label_550fd4:
    if (ctx->pc == 0x550FD4u) {
        ctx->pc = 0x550FD8u;
        goto label_550fd8;
    }
    ctx->pc = 0x550FD0u;
    {
        const bool branch_taken_0x550fd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x550fd0) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x550FD8u;
label_550fd8:
    // 0x550fd8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x550fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_550fdc:
    // 0x550fdc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x550fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_550fe0:
    // 0x550fe0: 0x320f809  jalr        $t9
label_550fe4:
    if (ctx->pc == 0x550FE4u) {
        ctx->pc = 0x550FE4u;
            // 0x550fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x550FE8u;
        goto label_550fe8;
    }
    ctx->pc = 0x550FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x550FE8u);
        ctx->pc = 0x550FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x550FE0u;
            // 0x550fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x550FE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x550FE8u; }
            if (ctx->pc != 0x550FE8u) { return; }
        }
        }
    }
    ctx->pc = 0x550FE8u;
label_550fe8:
    // 0x550fe8: 0x96030062  lhu         $v1, 0x62($s0)
    ctx->pc = 0x550fe8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
label_550fec:
    // 0x550fec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x550fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_550ff0:
    // 0x550ff0: 0xa6030062  sh          $v1, 0x62($s0)
    ctx->pc = 0x550ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 3));
label_550ff4:
    // 0x550ff4: 0x96030062  lhu         $v1, 0x62($s0)
    ctx->pc = 0x550ff4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
label_550ff8:
    // 0x550ff8: 0x286301ff  slti        $v1, $v1, 0x1FF
    ctx->pc = 0x550ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_550ffc:
    // 0x550ffc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_551000:
    if (ctx->pc == 0x551000u) {
        ctx->pc = 0x551004u;
        goto label_551004;
    }
    ctx->pc = 0x550FFCu;
    {
        const bool branch_taken_0x550ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x550ffc) {
            ctx->pc = 0x551008u;
            goto label_551008;
        }
    }
    ctx->pc = 0x551004u;
label_551004:
    // 0x551004: 0xa6000062  sh          $zero, 0x62($s0)
    ctx->pc = 0x551004u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
label_551008:
    // 0x551008: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x551008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55100c:
    // 0x55100c: 0x3c040300  lui         $a0, 0x300
    ctx->pc = 0x55100cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
label_551010:
    // 0x551010: 0x8c65976c  lw          $a1, -0x6894($v1)
    ctx->pc = 0x551010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940524)));
label_551014:
    // 0x551014: 0x34830030  ori         $v1, $a0, 0x30
    ctx->pc = 0x551014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)48);
label_551018:
    // 0x551018: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x551018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_55101c:
    // 0x55101c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x55101cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_551020:
    // 0x551020: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_551024:
    if (ctx->pc == 0x551024u) {
        ctx->pc = 0x551028u;
        goto label_551028;
    }
    ctx->pc = 0x551020u;
    {
        const bool branch_taken_0x551020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x551020) {
            ctx->pc = 0x551054u;
            goto label_551054;
        }
    }
    ctx->pc = 0x551028u;
label_551028:
    // 0x551028: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x551028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_55102c:
    // 0x55102c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x55102cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_551030:
    // 0x551030: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_551034:
    if (ctx->pc == 0x551034u) {
        ctx->pc = 0x551034u;
            // 0x551034: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->pc = 0x551038u;
        goto label_551038;
    }
    ctx->pc = 0x551030u;
    {
        const bool branch_taken_0x551030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x551030) {
            ctx->pc = 0x551034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551030u;
            // 0x551034: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x551048u;
            goto label_551048;
        }
    }
    ctx->pc = 0x551038u;
label_551038:
    // 0x551038: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x551038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_55103c:
    // 0x55103c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x55103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_551040:
    // 0x551040: 0x10000002  b           . + 4 + (0x2 << 2)
label_551044:
    if (ctx->pc == 0x551044u) {
        ctx->pc = 0x551044u;
            // 0x551044: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x551048u;
        goto label_551048;
    }
    ctx->pc = 0x551040u;
    {
        const bool branch_taken_0x551040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551040u;
            // 0x551044: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551040) {
            ctx->pc = 0x55104Cu;
            goto label_55104c;
        }
    }
    ctx->pc = 0x551048u;
label_551048:
    // 0x551048: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x551048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_55104c:
    // 0x55104c: 0xc073234  jal         func_1CC8D0
label_551050:
    if (ctx->pc == 0x551050u) {
        ctx->pc = 0x551050u;
            // 0x551050: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x551054u;
        goto label_551054;
    }
    ctx->pc = 0x55104Cu;
    SET_GPR_U32(ctx, 31, 0x551054u);
    ctx->pc = 0x551050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55104Cu;
            // 0x551050: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551054u; }
        if (ctx->pc != 0x551054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551054u; }
        if (ctx->pc != 0x551054u) { return; }
    }
    ctx->pc = 0x551054u;
label_551054:
    // 0x551054: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x551054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_551058:
    // 0x551058: 0x8c639764  lw          $v1, -0x689C($v1)
    ctx->pc = 0x551058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_55105c:
    // 0x55105c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x55105cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_551060:
    // 0x551060: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_551064:
    if (ctx->pc == 0x551064u) {
        ctx->pc = 0x551068u;
        goto label_551068;
    }
    ctx->pc = 0x551060u;
    {
        const bool branch_taken_0x551060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x551060) {
            ctx->pc = 0x5510C8u;
            goto label_5510c8;
        }
    }
    ctx->pc = 0x551068u;
label_551068:
    // 0x551068: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x551068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_55106c:
    // 0x55106c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x55106cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_551070:
    // 0x551070: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_551074:
    if (ctx->pc == 0x551074u) {
        ctx->pc = 0x551074u;
            // 0x551074: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x551078u;
        goto label_551078;
    }
    ctx->pc = 0x551070u;
    {
        const bool branch_taken_0x551070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x551070) {
            ctx->pc = 0x551074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551070u;
            // 0x551074: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551094u;
            goto label_551094;
        }
    }
    ctx->pc = 0x551078u;
label_551078:
    // 0x551078: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x551078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55107c:
    // 0x55107c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x55107cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_551080:
    // 0x551080: 0x320f809  jalr        $t9
label_551084:
    if (ctx->pc == 0x551084u) {
        ctx->pc = 0x551084u;
            // 0x551084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551088u;
        goto label_551088;
    }
    ctx->pc = 0x551080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551088u);
        ctx->pc = 0x551084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551080u;
            // 0x551084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551088u; }
            if (ctx->pc != 0x551088u) { return; }
        }
        }
    }
    ctx->pc = 0x551088u;
label_551088:
    // 0x551088: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x551088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_55108c:
    // 0x55108c: 0x1000000b  b           . + 4 + (0xB << 2)
label_551090:
    if (ctx->pc == 0x551090u) {
        ctx->pc = 0x551090u;
            // 0x551090: 0xa6020062  sh          $v0, 0x62($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x551094u;
        goto label_551094;
    }
    ctx->pc = 0x55108Cu;
    {
        const bool branch_taken_0x55108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55108Cu;
            // 0x551090: 0xa6020062  sh          $v0, 0x62($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55108c) {
            ctx->pc = 0x5510BCu;
            goto label_5510bc;
        }
    }
    ctx->pc = 0x551094u;
label_551094:
    // 0x551094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x551094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_551098:
    // 0x551098: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x551098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_55109c:
    // 0x55109c: 0x320f809  jalr        $t9
label_5510a0:
    if (ctx->pc == 0x5510A0u) {
        ctx->pc = 0x5510A0u;
            // 0x5510a0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x5510A4u;
        goto label_5510a4;
    }
    ctx->pc = 0x55109Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5510A4u);
        ctx->pc = 0x5510A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55109Cu;
            // 0x5510a0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5510A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5510A4u; }
            if (ctx->pc != 0x5510A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5510A4u;
label_5510a4:
    // 0x5510a4: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x5510a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5510a8:
    // 0x5510a8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x5510a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_5510ac:
    // 0x5510ac: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x5510acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5510b0:
    // 0x5510b0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x5510b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_5510b4:
    // 0x5510b4: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x5510b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_5510b8:
    // 0x5510b8: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x5510b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_5510bc:
    // 0x5510bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5510bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_5510c0:
    // 0x5510c0: 0xc073234  jal         func_1CC8D0
label_5510c4:
    if (ctx->pc == 0x5510C4u) {
        ctx->pc = 0x5510C4u;
            // 0x5510c4: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x5510C8u;
        goto label_5510c8;
    }
    ctx->pc = 0x5510C0u;
    SET_GPR_U32(ctx, 31, 0x5510C8u);
    ctx->pc = 0x5510C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5510C0u;
            // 0x5510c4: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5510C8u; }
        if (ctx->pc != 0x5510C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5510C8u; }
        if (ctx->pc != 0x5510C8u) { return; }
    }
    ctx->pc = 0x5510C8u;
label_5510c8:
    // 0x5510c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5510c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5510cc:
    // 0x5510cc: 0x8c639764  lw          $v1, -0x689C($v1)
    ctx->pc = 0x5510ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_5510d0:
    // 0x5510d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x5510d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_5510d4:
    // 0x5510d4: 0x106001e4  beqz        $v1, . + 4 + (0x1E4 << 2)
label_5510d8:
    if (ctx->pc == 0x5510D8u) {
        ctx->pc = 0x5510DCu;
        goto label_5510dc;
    }
    ctx->pc = 0x5510D4u;
    {
        const bool branch_taken_0x5510d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5510d4) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x5510DCu;
label_5510dc:
    // 0x5510dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5510dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5510e0:
    // 0x5510e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5510e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5510e4:
    // 0x5510e4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5510e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5510e8:
    // 0x5510e8: 0x320f809  jalr        $t9
label_5510ec:
    if (ctx->pc == 0x5510ECu) {
        ctx->pc = 0x5510ECu;
            // 0x5510ec: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x5510F0u;
        goto label_5510f0;
    }
    ctx->pc = 0x5510E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5510F0u);
        ctx->pc = 0x5510ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5510E8u;
            // 0x5510ec: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5510F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5510F0u; }
            if (ctx->pc != 0x5510F0u) { return; }
        }
        }
    }
    ctx->pc = 0x5510F0u;
label_5510f0:
    // 0x5510f0: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x5510f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5510f4:
    // 0x5510f4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x5510f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_5510f8:
    // 0x5510f8: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x5510f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5510fc:
    // 0x5510fc: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x5510fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_551100:
    // 0x551100: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x551100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_551104:
    // 0x551104: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x551104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_551108:
    // 0x551108: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x551108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_55110c:
    // 0x55110c: 0xc073234  jal         func_1CC8D0
label_551110:
    if (ctx->pc == 0x551110u) {
        ctx->pc = 0x551110u;
            // 0x551110: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x551114u;
        goto label_551114;
    }
    ctx->pc = 0x55110Cu;
    SET_GPR_U32(ctx, 31, 0x551114u);
    ctx->pc = 0x551110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55110Cu;
            // 0x551110: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551114u; }
        if (ctx->pc != 0x551114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551114u; }
        if (ctx->pc != 0x551114u) { return; }
    }
    ctx->pc = 0x551114u;
label_551114:
    // 0x551114: 0x100001d4  b           . + 4 + (0x1D4 << 2)
label_551118:
    if (ctx->pc == 0x551118u) {
        ctx->pc = 0x55111Cu;
        goto label_55111c;
    }
    ctx->pc = 0x551114u;
    {
        const bool branch_taken_0x551114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x551114) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x55111Cu;
label_55111c:
    // 0x55111c: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x55111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_551120:
    // 0x551120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x551120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551124:
    // 0x551124: 0x0  nop
    ctx->pc = 0x551124u;
    // NOP
label_551128:
    // 0x551128: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x551128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55112c:
    // 0x55112c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_551130:
    if (ctx->pc == 0x551130u) {
        ctx->pc = 0x551130u;
            // 0x551130: 0xc6010078  lwc1        $f1, 0x78($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x551134u;
        goto label_551134;
    }
    ctx->pc = 0x55112Cu;
    {
        const bool branch_taken_0x55112c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x55112c) {
            ctx->pc = 0x551130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55112Cu;
            // 0x551130: 0xc6010078  lwc1        $f1, 0x78($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55114Cu;
            goto label_55114c;
        }
    }
    ctx->pc = 0x551134u;
label_551134:
    // 0x551134: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x551134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_551138:
    // 0x551138: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x551138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_55113c:
    // 0x55113c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x55113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_551140:
    // 0x551140: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x551140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_551144:
    // 0x551144: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x551144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_551148:
    // 0x551148: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x551148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55114c:
    // 0x55114c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55114cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551150:
    // 0x551150: 0x0  nop
    ctx->pc = 0x551150u;
    // NOP
label_551154:
    // 0x551154: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x551154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_551158:
    // 0x551158: 0x450001c3  bc1f        . + 4 + (0x1C3 << 2)
label_55115c:
    if (ctx->pc == 0x55115Cu) {
        ctx->pc = 0x551160u;
        goto label_551160;
    }
    ctx->pc = 0x551158u;
    {
        const bool branch_taken_0x551158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x551158) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x551160u;
label_551160:
    // 0x551160: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x551160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_551164:
    // 0x551164: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x551164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_551168:
    // 0x551168: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x551168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_55116c:
    // 0x55116c: 0x320f809  jalr        $t9
label_551170:
    if (ctx->pc == 0x551170u) {
        ctx->pc = 0x551170u;
            // 0x551170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551174u;
        goto label_551174;
    }
    ctx->pc = 0x55116Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551174u);
        ctx->pc = 0x551170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55116Cu;
            // 0x551170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551174u; }
            if (ctx->pc != 0x551174u) { return; }
        }
        }
    }
    ctx->pc = 0x551174u;
label_551174:
    // 0x551174: 0x96030064  lhu         $v1, 0x64($s0)
    ctx->pc = 0x551174u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_551178:
    // 0x551178: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x551178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_55117c:
    // 0x55117c: 0xa6030064  sh          $v1, 0x64($s0)
    ctx->pc = 0x55117cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 3));
label_551180:
    // 0x551180: 0x96030064  lhu         $v1, 0x64($s0)
    ctx->pc = 0x551180u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_551184:
    // 0x551184: 0x286301ff  slti        $v1, $v1, 0x1FF
    ctx->pc = 0x551184u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_551188:
    // 0x551188: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_55118c:
    if (ctx->pc == 0x55118Cu) {
        ctx->pc = 0x551190u;
        goto label_551190;
    }
    ctx->pc = 0x551188u;
    {
        const bool branch_taken_0x551188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x551188) {
            ctx->pc = 0x551194u;
            goto label_551194;
        }
    }
    ctx->pc = 0x551190u;
label_551190:
    // 0x551190: 0xa6000064  sh          $zero, 0x64($s0)
    ctx->pc = 0x551190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 0));
label_551194:
    // 0x551194: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x551194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_551198:
    // 0x551198: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x551198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_55119c:
    // 0x55119c: 0x8c68976c  lw          $t0, -0x6894($v1)
    ctx->pc = 0x55119cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940524)));
label_5511a0:
    // 0x5511a0: 0x34870020  ori         $a3, $a0, 0x20
    ctx->pc = 0x5511a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_5511a4:
    // 0x5511a4: 0x8206005c  lb          $a2, 0x5C($s0)
    ctx->pc = 0x5511a4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_5511a8:
    // 0x5511a8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x5511a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_5511ac:
    // 0x5511ac: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x5511acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_5511b0:
    // 0x5511b0: 0x1074024  and         $t0, $t0, $a3
    ctx->pc = 0x5511b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_5511b4:
    // 0x5511b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5511b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5511b8:
    // 0x5511b8: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x5511b8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_5511bc:
    // 0x5511bc: 0x34a70010  ori         $a3, $a1, 0x10
    ctx->pc = 0x5511bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
label_5511c0:
    // 0x5511c0: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x5511c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_5511c4:
    // 0x5511c4: 0x3c050300  lui         $a1, 0x300
    ctx->pc = 0x5511c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)768 << 16));
label_5511c8:
    // 0x5511c8: 0xa206005c  sb          $a2, 0x5C($s0)
    ctx->pc = 0x5511c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 6));
label_5511cc:
    // 0x5511cc: 0x34a50030  ori         $a1, $a1, 0x30
    ctx->pc = 0x5511ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48);
label_5511d0:
    // 0x5511d0: 0x8c84976c  lw          $a0, -0x6894($a0)
    ctx->pc = 0x5511d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940524)));
label_5511d4:
    // 0x5511d4: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x5511d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
label_5511d8:
    // 0x5511d8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x5511d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_5511dc:
    // 0x5511dc: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x5511dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_5511e0:
    // 0x5511e0: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x5511e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_5511e4:
    // 0x5511e4: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x5511e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_5511e8:
    // 0x5511e8: 0xa204005c  sb          $a0, 0x5C($s0)
    ctx->pc = 0x5511e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 4));
label_5511ec:
    // 0x5511ec: 0x8c63976c  lw          $v1, -0x6894($v1)
    ctx->pc = 0x5511ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940524)));
label_5511f0:
    // 0x5511f0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x5511f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_5511f4:
    // 0x5511f4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x5511f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_5511f8:
    // 0x5511f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_5511fc:
    if (ctx->pc == 0x5511FCu) {
        ctx->pc = 0x551200u;
        goto label_551200;
    }
    ctx->pc = 0x5511F8u;
    {
        const bool branch_taken_0x5511f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5511f8) {
            ctx->pc = 0x551208u;
            goto label_551208;
        }
    }
    ctx->pc = 0x551200u;
label_551200:
    // 0x551200: 0xc073234  jal         func_1CC8D0
label_551204:
    if (ctx->pc == 0x551204u) {
        ctx->pc = 0x551204u;
            // 0x551204: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x551208u;
        goto label_551208;
    }
    ctx->pc = 0x551200u;
    SET_GPR_U32(ctx, 31, 0x551208u);
    ctx->pc = 0x551204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551200u;
            // 0x551204: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551208u; }
        if (ctx->pc != 0x551208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551208u; }
        if (ctx->pc != 0x551208u) { return; }
    }
    ctx->pc = 0x551208u;
label_551208:
    // 0x551208: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x551208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_55120c:
    // 0x55120c: 0x86040060  lh          $a0, 0x60($s0)
    ctx->pc = 0x55120cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_551210:
    // 0x551210: 0x8c65daa0  lw          $a1, -0x2560($v1)
    ctx->pc = 0x551210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957728)));
label_551214:
    // 0x551214: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x551214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_551218:
    // 0x551218: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x551218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_55121c:
    // 0x55121c: 0x8204005c  lb          $a0, 0x5C($s0)
    ctx->pc = 0x55121cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_551220:
    // 0x551220: 0x8c63daa0  lw          $v1, -0x2560($v1)
    ctx->pc = 0x551220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957728)));
label_551224:
    // 0x551224: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x551224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_551228:
    // 0x551228: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_55122c:
    if (ctx->pc == 0x55122Cu) {
        ctx->pc = 0x55122Cu;
            // 0x55122c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551230u;
        goto label_551230;
    }
    ctx->pc = 0x551228u;
    {
        const bool branch_taken_0x551228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x551228) {
            ctx->pc = 0x55122Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551228u;
            // 0x55122c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551230u;
            goto label_551230;
        }
    }
    ctx->pc = 0x551230u;
label_551230:
    // 0x551230: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x551230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
label_551234:
    // 0x551234: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x551234u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_551238:
    // 0x551238: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x551238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_55123c:
    // 0x55123c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_551240:
    if (ctx->pc == 0x551240u) {
        ctx->pc = 0x551240u;
            // 0x551240: 0xa205005c  sb          $a1, 0x5C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x551244u;
        goto label_551244;
    }
    ctx->pc = 0x55123Cu;
    {
        const bool branch_taken_0x55123c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x551240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55123Cu;
            // 0x551240: 0xa205005c  sb          $a1, 0x5C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55123c) {
            ctx->pc = 0x55124Cu;
            goto label_55124c;
        }
    }
    ctx->pc = 0x551244u;
label_551244:
    // 0x551244: 0x10000003  b           . + 4 + (0x3 << 2)
label_551248:
    if (ctx->pc == 0x551248u) {
        ctx->pc = 0x551248u;
            // 0x551248: 0xa206005c  sb          $a2, 0x5C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x55124Cu;
        goto label_55124c;
    }
    ctx->pc = 0x551244u;
    {
        const bool branch_taken_0x551244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551244u;
            // 0x551248: 0xa206005c  sb          $a2, 0x5C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551244) {
            ctx->pc = 0x551254u;
            goto label_551254;
        }
    }
    ctx->pc = 0x55124Cu;
label_55124c:
    // 0x55124c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x55124cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_551250:
    // 0x551250: 0xa206005c  sb          $a2, 0x5C($s0)
    ctx->pc = 0x551250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 6));
label_551254:
    // 0x551254: 0x62e3c  dsll32      $a1, $a2, 24
    ctx->pc = 0x551254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 24));
label_551258:
    // 0x551258: 0x8604005e  lh          $a0, 0x5E($s0)
    ctx->pc = 0x551258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
label_55125c:
    // 0x55125c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x55125cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_551260:
    // 0x551260: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x551260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_551264:
    // 0x551264: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x551264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_551268:
    // 0x551268: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_55126c:
    if (ctx->pc == 0x55126Cu) {
        ctx->pc = 0x55126Cu;
            // 0x55126c: 0xa4082a  slt         $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->pc = 0x551270u;
        goto label_551270;
    }
    ctx->pc = 0x551268u;
    {
        const bool branch_taken_0x551268 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x551268) {
            ctx->pc = 0x55126Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551268u;
            // 0x55126c: 0xa4082a  slt         $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x55127Cu;
            goto label_55127c;
        }
    }
    ctx->pc = 0x551270u;
label_551270:
    // 0x551270: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x551270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_551274:
    // 0x551274: 0x10000005  b           . + 4 + (0x5 << 2)
label_551278:
    if (ctx->pc == 0x551278u) {
        ctx->pc = 0x551278u;
            // 0x551278: 0xa603005e  sh          $v1, 0x5E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x55127Cu;
        goto label_55127c;
    }
    ctx->pc = 0x551274u;
    {
        const bool branch_taken_0x551274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551274u;
            // 0x551278: 0xa603005e  sh          $v1, 0x5E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551274) {
            ctx->pc = 0x55128Cu;
            goto label_55128c;
        }
    }
    ctx->pc = 0x55127Cu;
label_55127c:
    // 0x55127c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_551280:
    if (ctx->pc == 0x551280u) {
        ctx->pc = 0x551284u;
        goto label_551284;
    }
    ctx->pc = 0x55127Cu;
    {
        const bool branch_taken_0x55127c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55127c) {
            ctx->pc = 0x55128Cu;
            goto label_55128c;
        }
    }
    ctx->pc = 0x551284u;
label_551284:
    // 0x551284: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x551284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_551288:
    // 0x551288: 0xa603005e  sh          $v1, 0x5E($s0)
    ctx->pc = 0x551288u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 3));
label_55128c:
    // 0x55128c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55128cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_551290:
    // 0x551290: 0x8c649764  lw          $a0, -0x689C($v1)
    ctx->pc = 0x551290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_551294:
    // 0x551294: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x551294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_551298:
    // 0x551298: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_55129c:
    if (ctx->pc == 0x55129Cu) {
        ctx->pc = 0x55129Cu;
            // 0x55129c: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x5512A0u;
        goto label_5512a0;
    }
    ctx->pc = 0x551298u;
    {
        const bool branch_taken_0x551298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x551298) {
            ctx->pc = 0x55129Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551298u;
            // 0x55129c: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5512F4u;
            goto label_5512f4;
        }
    }
    ctx->pc = 0x5512A0u;
label_5512a0:
    // 0x5512a0: 0x8203005c  lb          $v1, 0x5C($s0)
    ctx->pc = 0x5512a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_5512a4:
    // 0x5512a4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5512a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5512a8:
    // 0x5512a8: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x5512a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
label_5512ac:
    // 0x5512ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5512acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5512b0:
    // 0x5512b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5512b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5512b4:
    // 0x5512b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x5512b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5512b8:
    // 0x5512b8: 0xc0b90e0  jal         func_2E4380
label_5512bc:
    if (ctx->pc == 0x5512BCu) {
        ctx->pc = 0x5512BCu;
            // 0x5512bc: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->pc = 0x5512C0u;
        goto label_5512c0;
    }
    ctx->pc = 0x5512B8u;
    SET_GPR_U32(ctx, 31, 0x5512C0u);
    ctx->pc = 0x5512BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5512B8u;
            // 0x5512bc: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5512C0u; }
        if (ctx->pc != 0x5512C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5512C0u; }
        if (ctx->pc != 0x5512C0u) { return; }
    }
    ctx->pc = 0x5512C0u;
label_5512c0:
    // 0x5512c0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_5512c4:
    if (ctx->pc == 0x5512C4u) {
        ctx->pc = 0x5512C4u;
            // 0x5512c4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x5512C8u;
        goto label_5512c8;
    }
    ctx->pc = 0x5512C0u;
    {
        const bool branch_taken_0x5512c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5512c0) {
            ctx->pc = 0x5512C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5512C0u;
            // 0x5512c4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5512E4u;
            goto label_5512e4;
        }
    }
    ctx->pc = 0x5512C8u;
label_5512c8:
    // 0x5512c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5512c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5512cc:
    // 0x5512cc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5512ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5512d0:
    // 0x5512d0: 0x320f809  jalr        $t9
label_5512d4:
    if (ctx->pc == 0x5512D4u) {
        ctx->pc = 0x5512D4u;
            // 0x5512d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5512D8u;
        goto label_5512d8;
    }
    ctx->pc = 0x5512D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5512D8u);
        ctx->pc = 0x5512D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5512D0u;
            // 0x5512d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5512D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5512D8u; }
            if (ctx->pc != 0x5512D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5512D8u;
label_5512d8:
    // 0x5512d8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x5512d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_5512dc:
    // 0x5512dc: 0xa6020064  sh          $v0, 0x64($s0)
    ctx->pc = 0x5512dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
label_5512e0:
    // 0x5512e0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5512e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_5512e4:
    // 0x5512e4: 0xc073234  jal         func_1CC8D0
label_5512e8:
    if (ctx->pc == 0x5512E8u) {
        ctx->pc = 0x5512E8u;
            // 0x5512e8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x5512ECu;
        goto label_5512ec;
    }
    ctx->pc = 0x5512E4u;
    SET_GPR_U32(ctx, 31, 0x5512ECu);
    ctx->pc = 0x5512E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5512E4u;
            // 0x5512e8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5512ECu; }
        if (ctx->pc != 0x5512ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5512ECu; }
        if (ctx->pc != 0x5512ECu) { return; }
    }
    ctx->pc = 0x5512ECu;
label_5512ec:
    // 0x5512ec: 0x1000015e  b           . + 4 + (0x15E << 2)
label_5512f0:
    if (ctx->pc == 0x5512F0u) {
        ctx->pc = 0x5512F4u;
        goto label_5512f4;
    }
    ctx->pc = 0x5512ECu;
    {
        const bool branch_taken_0x5512ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5512ec) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x5512F4u;
label_5512f4:
    // 0x5512f4: 0x1060015c  beqz        $v1, . + 4 + (0x15C << 2)
label_5512f8:
    if (ctx->pc == 0x5512F8u) {
        ctx->pc = 0x5512FCu;
        goto label_5512fc;
    }
    ctx->pc = 0x5512F4u;
    {
        const bool branch_taken_0x5512f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5512f4) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x5512FCu;
label_5512fc:
    // 0x5512fc: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x5512fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_551300:
    // 0x551300: 0xa6000064  sh          $zero, 0x64($s0)
    ctx->pc = 0x551300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 0));
label_551304:
    // 0x551304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x551304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_551308:
    // 0x551308: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x551308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_55130c:
    // 0x55130c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x55130cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_551310:
    // 0x551310: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x551310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_551314:
    // 0x551314: 0x320f809  jalr        $t9
label_551318:
    if (ctx->pc == 0x551318u) {
        ctx->pc = 0x551318u;
            // 0x551318: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x55131Cu;
        goto label_55131c;
    }
    ctx->pc = 0x551314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55131Cu);
        ctx->pc = 0x551318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551314u;
            // 0x551318: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55131Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55131Cu; }
            if (ctx->pc != 0x55131Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55131Cu;
label_55131c:
    // 0x55131c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x55131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_551320:
    // 0x551320: 0xc073234  jal         func_1CC8D0
label_551324:
    if (ctx->pc == 0x551324u) {
        ctx->pc = 0x551324u;
            // 0x551324: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x551328u;
        goto label_551328;
    }
    ctx->pc = 0x551320u;
    SET_GPR_U32(ctx, 31, 0x551328u);
    ctx->pc = 0x551324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551320u;
            // 0x551324: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551328u; }
        if (ctx->pc != 0x551328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551328u; }
        if (ctx->pc != 0x551328u) { return; }
    }
    ctx->pc = 0x551328u;
label_551328:
    // 0x551328: 0x1000014f  b           . + 4 + (0x14F << 2)
label_55132c:
    if (ctx->pc == 0x55132Cu) {
        ctx->pc = 0x551330u;
        goto label_551330;
    }
    ctx->pc = 0x551328u;
    {
        const bool branch_taken_0x551328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x551328) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x551330u;
label_551330:
    // 0x551330: 0x96030066  lhu         $v1, 0x66($s0)
    ctx->pc = 0x551330u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_551334:
    // 0x551334: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x551334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_551338:
    // 0x551338: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x551338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
label_55133c:
    // 0x55133c: 0x96030066  lhu         $v1, 0x66($s0)
    ctx->pc = 0x55133cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_551340:
    // 0x551340: 0x286301ff  slti        $v1, $v1, 0x1FF
    ctx->pc = 0x551340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_551344:
    // 0x551344: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_551348:
    if (ctx->pc == 0x551348u) {
        ctx->pc = 0x55134Cu;
        goto label_55134c;
    }
    ctx->pc = 0x551344u;
    {
        const bool branch_taken_0x551344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x551344) {
            ctx->pc = 0x551350u;
            goto label_551350;
        }
    }
    ctx->pc = 0x55134Cu;
label_55134c:
    // 0x55134c: 0xa6000066  sh          $zero, 0x66($s0)
    ctx->pc = 0x55134cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 0));
label_551350:
    // 0x551350: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x551350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_551354:
    // 0x551354: 0x3c040c00  lui         $a0, 0xC00
    ctx->pc = 0x551354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3072 << 16));
label_551358:
    // 0x551358: 0x8c65976c  lw          $a1, -0x6894($v1)
    ctx->pc = 0x551358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940524)));
label_55135c:
    // 0x55135c: 0x348300c0  ori         $v1, $a0, 0xC0
    ctx->pc = 0x55135cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)192);
label_551360:
    // 0x551360: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x551360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_551364:
    // 0x551364: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x551364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_551368:
    // 0x551368: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_55136c:
    if (ctx->pc == 0x55136Cu) {
        ctx->pc = 0x551370u;
        goto label_551370;
    }
    ctx->pc = 0x551368u;
    {
        const bool branch_taken_0x551368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x551368) {
            ctx->pc = 0x55139Cu;
            goto label_55139c;
        }
    }
    ctx->pc = 0x551370u;
label_551370:
    // 0x551370: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x551370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_551374:
    // 0x551374: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x551374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_551378:
    // 0x551378: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_55137c:
    if (ctx->pc == 0x55137Cu) {
        ctx->pc = 0x55137Cu;
            // 0x55137c: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->pc = 0x551380u;
        goto label_551380;
    }
    ctx->pc = 0x551378u;
    {
        const bool branch_taken_0x551378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x551378) {
            ctx->pc = 0x55137Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551378u;
            // 0x55137c: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x551390u;
            goto label_551390;
        }
    }
    ctx->pc = 0x551380u;
label_551380:
    // 0x551380: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x551380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_551384:
    // 0x551384: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x551384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_551388:
    // 0x551388: 0x10000002  b           . + 4 + (0x2 << 2)
label_55138c:
    if (ctx->pc == 0x55138Cu) {
        ctx->pc = 0x55138Cu;
            // 0x55138c: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x551390u;
        goto label_551390;
    }
    ctx->pc = 0x551388u;
    {
        const bool branch_taken_0x551388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55138Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551388u;
            // 0x55138c: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551388) {
            ctx->pc = 0x551394u;
            goto label_551394;
        }
    }
    ctx->pc = 0x551390u;
label_551390:
    // 0x551390: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x551390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_551394:
    // 0x551394: 0xc073234  jal         func_1CC8D0
label_551398:
    if (ctx->pc == 0x551398u) {
        ctx->pc = 0x551398u;
            // 0x551398: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x55139Cu;
        goto label_55139c;
    }
    ctx->pc = 0x551394u;
    SET_GPR_U32(ctx, 31, 0x55139Cu);
    ctx->pc = 0x551398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551394u;
            // 0x551398: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55139Cu; }
        if (ctx->pc != 0x55139Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55139Cu; }
        if (ctx->pc != 0x55139Cu) { return; }
    }
    ctx->pc = 0x55139Cu;
label_55139c:
    // 0x55139c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55139cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5513a0:
    // 0x5513a0: 0x8c649764  lw          $a0, -0x689C($v1)
    ctx->pc = 0x5513a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_5513a4:
    // 0x5513a4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x5513a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_5513a8:
    // 0x5513a8: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_5513ac:
    if (ctx->pc == 0x5513ACu) {
        ctx->pc = 0x5513ACu;
            // 0x5513ac: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x5513B0u;
        goto label_5513b0;
    }
    ctx->pc = 0x5513A8u;
    {
        const bool branch_taken_0x5513a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5513a8) {
            ctx->pc = 0x5513ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5513A8u;
            // 0x5513ac: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5513FCu;
            goto label_5513fc;
        }
    }
    ctx->pc = 0x5513B0u;
label_5513b0:
    // 0x5513b0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x5513b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_5513b4:
    // 0x5513b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x5513b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_5513b8:
    // 0x5513b8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_5513bc:
    if (ctx->pc == 0x5513BCu) {
        ctx->pc = 0x5513BCu;
            // 0x5513bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x5513C0u;
        goto label_5513c0;
    }
    ctx->pc = 0x5513B8u;
    {
        const bool branch_taken_0x5513b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5513b8) {
            ctx->pc = 0x5513BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5513B8u;
            // 0x5513bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5513D8u;
            goto label_5513d8;
        }
    }
    ctx->pc = 0x5513C0u;
label_5513c0:
    // 0x5513c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5513c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5513c4:
    // 0x5513c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5513c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5513c8:
    // 0x5513c8: 0x320f809  jalr        $t9
label_5513cc:
    if (ctx->pc == 0x5513CCu) {
        ctx->pc = 0x5513CCu;
            // 0x5513cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5513D0u;
        goto label_5513d0;
    }
    ctx->pc = 0x5513C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5513D0u);
        ctx->pc = 0x5513CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5513C8u;
            // 0x5513cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5513D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5513D0u; }
            if (ctx->pc != 0x5513D0u) { return; }
        }
        }
    }
    ctx->pc = 0x5513D0u;
label_5513d0:
    // 0x5513d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_5513d4:
    if (ctx->pc == 0x5513D4u) {
        ctx->pc = 0x5513D4u;
            // 0x5513d4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x5513D8u;
        goto label_5513d8;
    }
    ctx->pc = 0x5513D0u;
    {
        const bool branch_taken_0x5513d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5513D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5513D0u;
            // 0x5513d4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5513d0) {
            ctx->pc = 0x5513ECu;
            goto label_5513ec;
        }
    }
    ctx->pc = 0x5513D8u;
label_5513d8:
    // 0x5513d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5513d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5513dc:
    // 0x5513dc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5513dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5513e0:
    // 0x5513e0: 0x320f809  jalr        $t9
label_5513e4:
    if (ctx->pc == 0x5513E4u) {
        ctx->pc = 0x5513E4u;
            // 0x5513e4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x5513E8u;
        goto label_5513e8;
    }
    ctx->pc = 0x5513E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5513E8u);
        ctx->pc = 0x5513E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5513E0u;
            // 0x5513e4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5513E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5513E8u; }
            if (ctx->pc != 0x5513E8u) { return; }
        }
        }
    }
    ctx->pc = 0x5513E8u;
label_5513e8:
    // 0x5513e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5513e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_5513ec:
    // 0x5513ec: 0xc073234  jal         func_1CC8D0
label_5513f0:
    if (ctx->pc == 0x5513F0u) {
        ctx->pc = 0x5513F0u;
            // 0x5513f0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x5513F4u;
        goto label_5513f4;
    }
    ctx->pc = 0x5513ECu;
    SET_GPR_U32(ctx, 31, 0x5513F4u);
    ctx->pc = 0x5513F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5513ECu;
            // 0x5513f0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5513F4u; }
        if (ctx->pc != 0x5513F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5513F4u; }
        if (ctx->pc != 0x5513F4u) { return; }
    }
    ctx->pc = 0x5513F4u;
label_5513f4:
    // 0x5513f4: 0x1000011c  b           . + 4 + (0x11C << 2)
label_5513f8:
    if (ctx->pc == 0x5513F8u) {
        ctx->pc = 0x5513FCu;
        goto label_5513fc;
    }
    ctx->pc = 0x5513F4u;
    {
        const bool branch_taken_0x5513f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5513f4) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x5513FCu;
label_5513fc:
    // 0x5513fc: 0x1060011a  beqz        $v1, . + 4 + (0x11A << 2)
label_551400:
    if (ctx->pc == 0x551400u) {
        ctx->pc = 0x551404u;
        goto label_551404;
    }
    ctx->pc = 0x5513FCu;
    {
        const bool branch_taken_0x5513fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5513fc) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x551404u;
label_551404:
    // 0x551404: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x551404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_551408:
    // 0x551408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x551408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55140c:
    // 0x55140c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x55140cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_551410:
    // 0x551410: 0x320f809  jalr        $t9
label_551414:
    if (ctx->pc == 0x551414u) {
        ctx->pc = 0x551414u;
            // 0x551414: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x551418u;
        goto label_551418;
    }
    ctx->pc = 0x551410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551418u);
        ctx->pc = 0x551414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551410u;
            // 0x551414: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551418u; }
            if (ctx->pc != 0x551418u) { return; }
        }
        }
    }
    ctx->pc = 0x551418u;
label_551418:
    // 0x551418: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x551418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_55141c:
    // 0x55141c: 0xc073234  jal         func_1CC8D0
label_551420:
    if (ctx->pc == 0x551420u) {
        ctx->pc = 0x551420u;
            // 0x551420: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x551424u;
        goto label_551424;
    }
    ctx->pc = 0x55141Cu;
    SET_GPR_U32(ctx, 31, 0x551424u);
    ctx->pc = 0x551420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55141Cu;
            // 0x551420: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551424u; }
        if (ctx->pc != 0x551424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551424u; }
        if (ctx->pc != 0x551424u) { return; }
    }
    ctx->pc = 0x551424u;
label_551424:
    // 0x551424: 0x10000110  b           . + 4 + (0x110 << 2)
label_551428:
    if (ctx->pc == 0x551428u) {
        ctx->pc = 0x55142Cu;
        goto label_55142c;
    }
    ctx->pc = 0x551424u;
    {
        const bool branch_taken_0x551424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x551424) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x55142Cu;
label_55142c:
    // 0x55142c: 0x8205005c  lb          $a1, 0x5C($s0)
    ctx->pc = 0x55142cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_551430:
    // 0x551430: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x551430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_551434:
    // 0x551434: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x551434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_551438:
    // 0x551438: 0x2484b710  addiu       $a0, $a0, -0x48F0
    ctx->pc = 0x551438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
label_55143c:
    // 0x55143c: 0x8c430ec8  lw          $v1, 0xEC8($v0)
    ctx->pc = 0x55143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_551440:
    // 0x551440: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x551440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_551444:
    // 0x551444: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x551444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_551448:
    // 0x551448: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x551448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55144c:
    // 0x55144c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x55144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_551450:
    // 0x551450: 0x244214b8  addiu       $v0, $v0, 0x14B8
    ctx->pc = 0x551450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5304));
label_551454:
    // 0x551454: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x551454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_551458:
    // 0x551458: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x551458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_55145c:
    // 0x55145c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x55145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_551460:
    // 0x551460: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x551460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_551464:
    // 0x551464: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x551464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_551468:
    // 0x551468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x551468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55146c:
    // 0x55146c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x55146cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_551470:
    // 0x551470: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x551470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_551474:
    // 0x551474: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x551474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_551478:
    // 0x551478: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_55147c:
    if (ctx->pc == 0x55147Cu) {
        ctx->pc = 0x55147Cu;
            // 0x55147c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551480u;
        goto label_551480;
    }
    ctx->pc = 0x551478u;
    {
        const bool branch_taken_0x551478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x55147Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551478u;
            // 0x55147c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551478) {
            ctx->pc = 0x551494u;
            goto label_551494;
        }
    }
    ctx->pc = 0x551480u;
label_551480:
    // 0x551480: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x551480u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_551484:
    // 0x551484: 0xc120640  jal         func_481900
label_551488:
    if (ctx->pc == 0x551488u) {
        ctx->pc = 0x551488u;
            // 0x551488: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x55148Cu;
        goto label_55148c;
    }
    ctx->pc = 0x551484u;
    SET_GPR_U32(ctx, 31, 0x55148Cu);
    ctx->pc = 0x551488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551484u;
            // 0x551488: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x481900u;
    if (runtime->hasFunction(0x481900u)) {
        auto targetFn = runtime->lookupFunction(0x481900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55148Cu; }
        if (ctx->pc != 0x55148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481900_0x481900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55148Cu; }
        if (ctx->pc != 0x55148Cu) { return; }
    }
    ctx->pc = 0x55148Cu;
label_55148c:
    // 0x55148c: 0xc073234  jal         func_1CC8D0
label_551490:
    if (ctx->pc == 0x551490u) {
        ctx->pc = 0x551490u;
            // 0x551490: 0x24041ba9  addiu       $a0, $zero, 0x1BA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7081));
        ctx->pc = 0x551494u;
        goto label_551494;
    }
    ctx->pc = 0x55148Cu;
    SET_GPR_U32(ctx, 31, 0x551494u);
    ctx->pc = 0x551490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55148Cu;
            // 0x551490: 0x24041ba9  addiu       $a0, $zero, 0x1BA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7081));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551494u; }
        if (ctx->pc != 0x551494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551494u; }
        if (ctx->pc != 0x551494u) { return; }
    }
    ctx->pc = 0x551494u;
label_551494:
    // 0x551494: 0x5260002f  beql        $s3, $zero, . + 4 + (0x2F << 2)
label_551498:
    if (ctx->pc == 0x551498u) {
        ctx->pc = 0x551498u;
            // 0x551498: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x55149Cu;
        goto label_55149c;
    }
    ctx->pc = 0x551494u;
    {
        const bool branch_taken_0x551494 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x551494) {
            ctx->pc = 0x551498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551494u;
            // 0x551498: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551554u;
            goto label_551554;
        }
    }
    ctx->pc = 0x55149Cu;
label_55149c:
    // 0x55149c: 0x8203005c  lb          $v1, 0x5C($s0)
    ctx->pc = 0x55149cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_5514a0:
    // 0x5514a0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5514a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5514a4:
    // 0x5514a4: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x5514a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
label_5514a8:
    // 0x5514a8: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x5514a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_5514ac:
    // 0x5514ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5514acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5514b0:
    // 0x5514b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5514b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5514b4:
    // 0x5514b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x5514b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5514b8:
    // 0x5514b8: 0xc0ca4b0  jal         func_3292C0
label_5514bc:
    if (ctx->pc == 0x5514BCu) {
        ctx->pc = 0x5514BCu;
            // 0x5514bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5514C0u;
        goto label_5514c0;
    }
    ctx->pc = 0x5514B8u;
    SET_GPR_U32(ctx, 31, 0x5514C0u);
    ctx->pc = 0x5514BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5514B8u;
            // 0x5514bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5514C0u; }
        if (ctx->pc != 0x5514C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5514C0u; }
        if (ctx->pc != 0x5514C0u) { return; }
    }
    ctx->pc = 0x5514C0u;
label_5514c0:
    // 0x5514c0: 0xc154668  jal         func_5519A0
label_5514c4:
    if (ctx->pc == 0x5514C4u) {
        ctx->pc = 0x5514C4u;
            // 0x5514c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5514C8u;
        goto label_5514c8;
    }
    ctx->pc = 0x5514C0u;
    SET_GPR_U32(ctx, 31, 0x5514C8u);
    ctx->pc = 0x5514C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5514C0u;
            // 0x5514c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5519A0u;
    if (runtime->hasFunction(0x5519A0u)) {
        auto targetFn = runtime->lookupFunction(0x5519A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5514C8u; }
        if (ctx->pc != 0x5514C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005519A0_0x5519a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5514C8u; }
        if (ctx->pc != 0x5514C8u) { return; }
    }
    ctx->pc = 0x5514C8u;
label_5514c8:
    // 0x5514c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5514c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5514cc:
    // 0x5514cc: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x5514ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_5514d0:
    // 0x5514d0: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x5514d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_5514d4:
    // 0x5514d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x5514d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5514d8:
    // 0x5514d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x5514d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5514dc:
    // 0x5514dc: 0x2673ea20  addiu       $s3, $s3, -0x15E0
    ctx->pc = 0x5514dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961696));
label_5514e0:
    // 0x5514e0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x5514e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_5514e4:
    // 0x5514e4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x5514e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5514e8:
    // 0x5514e8: 0xc0b90e0  jal         func_2E4380
label_5514ec:
    if (ctx->pc == 0x5514ECu) {
        ctx->pc = 0x5514ECu;
            // 0x5514ec: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->pc = 0x5514F0u;
        goto label_5514f0;
    }
    ctx->pc = 0x5514E8u;
    SET_GPR_U32(ctx, 31, 0x5514F0u);
    ctx->pc = 0x5514ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5514E8u;
            // 0x5514ec: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5514F0u; }
        if (ctx->pc != 0x5514F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5514F0u; }
        if (ctx->pc != 0x5514F0u) { return; }
    }
    ctx->pc = 0x5514F0u;
label_5514f0:
    // 0x5514f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_5514f4:
    if (ctx->pc == 0x5514F4u) {
        ctx->pc = 0x5514F4u;
            // 0x5514f4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x5514F8u;
        goto label_5514f8;
    }
    ctx->pc = 0x5514F0u;
    {
        const bool branch_taken_0x5514f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5514f0) {
            ctx->pc = 0x5514F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5514F0u;
            // 0x5514f4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551500u;
            goto label_551500;
        }
    }
    ctx->pc = 0x5514F8u;
label_5514f8:
    // 0x5514f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_5514fc:
    if (ctx->pc == 0x5514FCu) {
        ctx->pc = 0x5514FCu;
            // 0x5514fc: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x551500u;
        goto label_551500;
    }
    ctx->pc = 0x5514F8u;
    {
        const bool branch_taken_0x5514f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5514FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5514F8u;
            // 0x5514fc: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5514f8) {
            ctx->pc = 0x551510u;
            goto label_551510;
        }
    }
    ctx->pc = 0x551500u;
label_551500:
    // 0x551500: 0x2a820029  slti        $v0, $s4, 0x29
    ctx->pc = 0x551500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)41) ? 1 : 0);
label_551504:
    // 0x551504: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_551508:
    if (ctx->pc == 0x551508u) {
        ctx->pc = 0x551508u;
            // 0x551508: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x55150Cu;
        goto label_55150c;
    }
    ctx->pc = 0x551504u;
    {
        const bool branch_taken_0x551504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x551508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551504u;
            // 0x551508: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551504) {
            ctx->pc = 0x5514E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5514e4;
        }
    }
    ctx->pc = 0x55150Cu;
label_55150c:
    // 0x55150c: 0x0  nop
    ctx->pc = 0x55150cu;
    // NOP
label_551510:
    // 0x551510: 0x52a00007  beql        $s5, $zero, . + 4 + (0x7 << 2)
label_551514:
    if (ctx->pc == 0x551514u) {
        ctx->pc = 0x551514u;
            // 0x551514: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x551518u;
        goto label_551518;
    }
    ctx->pc = 0x551510u;
    {
        const bool branch_taken_0x551510 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x551510) {
            ctx->pc = 0x551514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551510u;
            // 0x551514: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551530u;
            goto label_551530;
        }
    }
    ctx->pc = 0x551518u;
label_551518:
    // 0x551518: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x551518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55151c:
    // 0x55151c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x55151cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_551520:
    // 0x551520: 0x320f809  jalr        $t9
label_551524:
    if (ctx->pc == 0x551524u) {
        ctx->pc = 0x551524u;
            // 0x551524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551528u;
        goto label_551528;
    }
    ctx->pc = 0x551520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551528u);
        ctx->pc = 0x551524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551520u;
            // 0x551524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551528u; }
            if (ctx->pc != 0x551528u) { return; }
        }
        }
    }
    ctx->pc = 0x551528u;
label_551528:
    // 0x551528: 0x100000cf  b           . + 4 + (0xCF << 2)
label_55152c:
    if (ctx->pc == 0x55152Cu) {
        ctx->pc = 0x551530u;
        goto label_551530;
    }
    ctx->pc = 0x551528u;
    {
        const bool branch_taken_0x551528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x551528) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x551530u;
label_551530:
    // 0x551530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x551530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_551534:
    // 0x551534: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x551534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_551538:
    // 0x551538: 0x320f809  jalr        $t9
label_55153c:
    if (ctx->pc == 0x55153Cu) {
        ctx->pc = 0x55153Cu;
            // 0x55153c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x551540u;
        goto label_551540;
    }
    ctx->pc = 0x551538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551540u);
        ctx->pc = 0x55153Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551538u;
            // 0x55153c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551540u; }
            if (ctx->pc != 0x551540u) { return; }
        }
        }
    }
    ctx->pc = 0x551540u;
label_551540:
    // 0x551540: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x551540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_551544:
    // 0x551544: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x551544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_551548:
    // 0x551548: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x551548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_55154c:
    // 0x55154c: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_551550:
    if (ctx->pc == 0x551550u) {
        ctx->pc = 0x551550u;
            // 0x551550: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->pc = 0x551554u;
        goto label_551554;
    }
    ctx->pc = 0x55154Cu;
    {
        const bool branch_taken_0x55154c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55154Cu;
            // 0x551550: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55154c) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x551554u;
label_551554:
    // 0x551554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x551554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_551558:
    // 0x551558: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x551558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_55155c:
    // 0x55155c: 0x320f809  jalr        $t9
label_551560:
    if (ctx->pc == 0x551560u) {
        ctx->pc = 0x551560u;
            // 0x551560: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x551564u;
        goto label_551564;
    }
    ctx->pc = 0x55155Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551564u);
        ctx->pc = 0x551560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55155Cu;
            // 0x551560: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551564u; }
            if (ctx->pc != 0x551564u) { return; }
        }
        }
    }
    ctx->pc = 0x551564u;
label_551564:
    // 0x551564: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_551568:
    if (ctx->pc == 0x551568u) {
        ctx->pc = 0x55156Cu;
        goto label_55156c;
    }
    ctx->pc = 0x551564u;
    {
        const bool branch_taken_0x551564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x551564) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x55156Cu;
label_55156c:
    // 0x55156c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x55156cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_551570:
    // 0x551570: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x551570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_551574:
    // 0x551574: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x551574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_551578:
    // 0x551578: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x551578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_55157c:
    // 0x55157c: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x55157cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_551580:
    // 0x551580: 0x8c639764  lw          $v1, -0x689C($v1)
    ctx->pc = 0x551580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_551584:
    // 0x551584: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x551584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_551588:
    // 0x551588: 0x106000b7  beqz        $v1, . + 4 + (0xB7 << 2)
label_55158c:
    if (ctx->pc == 0x55158Cu) {
        ctx->pc = 0x551590u;
        goto label_551590;
    }
    ctx->pc = 0x551588u;
    {
        const bool branch_taken_0x551588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x551588) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x551590u;
label_551590:
    // 0x551590: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x551590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_551594:
    // 0x551594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x551594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_551598:
    // 0x551598: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x551598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_55159c:
    // 0x55159c: 0x320f809  jalr        $t9
label_5515a0:
    if (ctx->pc == 0x5515A0u) {
        ctx->pc = 0x5515A0u;
            // 0x5515a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x5515A4u;
        goto label_5515a4;
    }
    ctx->pc = 0x55159Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5515A4u);
        ctx->pc = 0x5515A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55159Cu;
            // 0x5515a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5515A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5515A4u; }
            if (ctx->pc != 0x5515A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5515A4u;
label_5515a4:
    // 0x5515a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5515a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_5515a8:
    // 0x5515a8: 0xc073234  jal         func_1CC8D0
label_5515ac:
    if (ctx->pc == 0x5515ACu) {
        ctx->pc = 0x5515ACu;
            // 0x5515ac: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x5515B0u;
        goto label_5515b0;
    }
    ctx->pc = 0x5515A8u;
    SET_GPR_U32(ctx, 31, 0x5515B0u);
    ctx->pc = 0x5515ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5515A8u;
            // 0x5515ac: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5515B0u; }
        if (ctx->pc != 0x5515B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5515B0u; }
        if (ctx->pc != 0x5515B0u) { return; }
    }
    ctx->pc = 0x5515B0u;
label_5515b0:
    // 0x5515b0: 0x100000ad  b           . + 4 + (0xAD << 2)
label_5515b4:
    if (ctx->pc == 0x5515B4u) {
        ctx->pc = 0x5515B8u;
        goto label_5515b8;
    }
    ctx->pc = 0x5515B0u;
    {
        const bool branch_taken_0x5515b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5515b0) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x5515B8u;
label_5515b8:
    // 0x5515b8: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x5515b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_5515bc:
    // 0x5515bc: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x5515bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_5515c0:
    // 0x5515c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5515c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5515c4:
    // 0x5515c4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x5515c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_5515c8:
    // 0x5515c8: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x5515c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_5515cc:
    // 0x5515cc: 0x8c639764  lw          $v1, -0x689C($v1)
    ctx->pc = 0x5515ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_5515d0:
    // 0x5515d0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x5515d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_5515d4:
    // 0x5515d4: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
label_5515d8:
    if (ctx->pc == 0x5515D8u) {
        ctx->pc = 0x5515DCu;
        goto label_5515dc;
    }
    ctx->pc = 0x5515D4u;
    {
        const bool branch_taken_0x5515d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5515d4) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x5515DCu;
label_5515dc:
    // 0x5515dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5515dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5515e0:
    // 0x5515e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5515e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5515e4:
    // 0x5515e4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5515e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5515e8:
    // 0x5515e8: 0x320f809  jalr        $t9
label_5515ec:
    if (ctx->pc == 0x5515ECu) {
        ctx->pc = 0x5515ECu;
            // 0x5515ec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x5515F0u;
        goto label_5515f0;
    }
    ctx->pc = 0x5515E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5515F0u);
        ctx->pc = 0x5515ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5515E8u;
            // 0x5515ec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5515F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5515F0u; }
            if (ctx->pc != 0x5515F0u) { return; }
        }
        }
    }
    ctx->pc = 0x5515F0u;
label_5515f0:
    // 0x5515f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5515f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_5515f4:
    // 0x5515f4: 0xc073234  jal         func_1CC8D0
label_5515f8:
    if (ctx->pc == 0x5515F8u) {
        ctx->pc = 0x5515F8u;
            // 0x5515f8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x5515FCu;
        goto label_5515fc;
    }
    ctx->pc = 0x5515F4u;
    SET_GPR_U32(ctx, 31, 0x5515FCu);
    ctx->pc = 0x5515F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5515F4u;
            // 0x5515f8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5515FCu; }
        if (ctx->pc != 0x5515FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5515FCu; }
        if (ctx->pc != 0x5515FCu) { return; }
    }
    ctx->pc = 0x5515FCu;
label_5515fc:
    // 0x5515fc: 0x1000009a  b           . + 4 + (0x9A << 2)
label_551600:
    if (ctx->pc == 0x551600u) {
        ctx->pc = 0x551604u;
        goto label_551604;
    }
    ctx->pc = 0x5515FCu;
    {
        const bool branch_taken_0x5515fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5515fc) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x551604u;
label_551604:
    // 0x551604: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x551604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_551608:
    // 0x551608: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x551608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_55160c:
    // 0x55160c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x55160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_551610:
    // 0x551610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x551610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551614:
    // 0x551614: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x551614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_551618:
    // 0x551618: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x551618u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_55161c:
    // 0x55161c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x55161cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_551620:
    // 0x551620: 0x45000091  bc1f        . + 4 + (0x91 << 2)
label_551624:
    if (ctx->pc == 0x551624u) {
        ctx->pc = 0x551624u;
            // 0x551624: 0xe6010068  swc1        $f1, 0x68($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->pc = 0x551628u;
        goto label_551628;
    }
    ctx->pc = 0x551620u;
    {
        const bool branch_taken_0x551620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x551624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551620u;
            // 0x551624: 0xe6010068  swc1        $f1, 0x68($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x551620) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x551628u;
label_551628:
    // 0x551628: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x551628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55162c:
    // 0x55162c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55162cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_551630:
    // 0x551630: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x551630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_551634:
    // 0x551634: 0x320f809  jalr        $t9
label_551638:
    if (ctx->pc == 0x551638u) {
        ctx->pc = 0x551638u;
            // 0x551638: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x55163Cu;
        goto label_55163c;
    }
    ctx->pc = 0x551634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55163Cu);
        ctx->pc = 0x551638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551634u;
            // 0x551638: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55163Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55163Cu; }
            if (ctx->pc != 0x55163Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55163Cu;
label_55163c:
    // 0x55163c: 0xc040180  jal         func_100600
label_551640:
    if (ctx->pc == 0x551640u) {
        ctx->pc = 0x551640u;
            // 0x551640: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x551644u;
        goto label_551644;
    }
    ctx->pc = 0x55163Cu;
    SET_GPR_U32(ctx, 31, 0x551644u);
    ctx->pc = 0x551640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55163Cu;
            // 0x551640: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551644u; }
        if (ctx->pc != 0x551644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551644u; }
        if (ctx->pc != 0x551644u) { return; }
    }
    ctx->pc = 0x551644u;
label_551644:
    // 0x551644: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_551648:
    if (ctx->pc == 0x551648u) {
        ctx->pc = 0x551648u;
            // 0x551648: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55164Cu;
        goto label_55164c;
    }
    ctx->pc = 0x551644u;
    {
        const bool branch_taken_0x551644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x551648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551644u;
            // 0x551648: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551644) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x55164Cu;
label_55164c:
    // 0x55164c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x55164cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_551650:
    // 0x551650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x551650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_551654:
    // 0x551654: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x551654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_551658:
    // 0x551658: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x551658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_55165c:
    // 0x55165c: 0xc10ca68  jal         func_4329A0
label_551660:
    if (ctx->pc == 0x551660u) {
        ctx->pc = 0x551660u;
            // 0x551660: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x551664u;
        goto label_551664;
    }
    ctx->pc = 0x55165Cu;
    SET_GPR_U32(ctx, 31, 0x551664u);
    ctx->pc = 0x551660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55165Cu;
            // 0x551660: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551664u; }
        if (ctx->pc != 0x551664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551664u; }
        if (ctx->pc != 0x551664u) { return; }
    }
    ctx->pc = 0x551664u;
label_551664:
    // 0x551664: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x551664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_551668:
    // 0x551668: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x551668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_55166c:
    // 0x55166c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x55166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_551670:
    // 0x551670: 0x24844f60  addiu       $a0, $a0, 0x4F60
    ctx->pc = 0x551670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20320));
label_551674:
    // 0x551674: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x551674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_551678:
    // 0x551678: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x551678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_55167c:
    // 0x55167c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x55167cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_551680:
    // 0x551680: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x551680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
label_551684:
    // 0x551684: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x551684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_551688:
    // 0x551688: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x551688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_55168c:
    // 0x55168c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x55168cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_551690:
    // 0x551690: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x551690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_551694:
    // 0x551694: 0xae25005c  sw          $a1, 0x5C($s1)
    ctx->pc = 0x551694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 5));
label_551698:
    // 0x551698: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x551698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_55169c:
    // 0x55169c: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x55169cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_5516a0:
    // 0x5516a0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5516a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5516a4:
    // 0x5516a4: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x5516a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_5516a8:
    // 0x5516a8: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x5516a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
label_5516ac:
    // 0x5516ac: 0x1000006e  b           . + 4 + (0x6E << 2)
label_5516b0:
    if (ctx->pc == 0x5516B0u) {
        ctx->pc = 0x5516B0u;
            // 0x5516b0: 0xa220006c  sb          $zero, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x5516B4u;
        goto label_5516b4;
    }
    ctx->pc = 0x5516ACu;
    {
        const bool branch_taken_0x5516ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5516B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5516ACu;
            // 0x5516b0: 0xa220006c  sb          $zero, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5516ac) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x5516B4u;
label_5516b4:
    // 0x5516b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5516b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5516b8:
    // 0x5516b8: 0x8c639764  lw          $v1, -0x689C($v1)
    ctx->pc = 0x5516b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_5516bc:
    // 0x5516bc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x5516bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_5516c0:
    // 0x5516c0: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
label_5516c4:
    if (ctx->pc == 0x5516C4u) {
        ctx->pc = 0x5516C8u;
        goto label_5516c8;
    }
    ctx->pc = 0x5516C0u;
    {
        const bool branch_taken_0x5516c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5516c0) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x5516C8u;
label_5516c8:
    // 0x5516c8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5516c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_5516cc:
    // 0x5516cc: 0xc073234  jal         func_1CC8D0
label_5516d0:
    if (ctx->pc == 0x5516D0u) {
        ctx->pc = 0x5516D0u;
            // 0x5516d0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x5516D4u;
        goto label_5516d4;
    }
    ctx->pc = 0x5516CCu;
    SET_GPR_U32(ctx, 31, 0x5516D4u);
    ctx->pc = 0x5516D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5516CCu;
            // 0x5516d0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5516D4u; }
        if (ctx->pc != 0x5516D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5516D4u; }
        if (ctx->pc != 0x5516D4u) { return; }
    }
    ctx->pc = 0x5516D4u;
label_5516d4:
    // 0x5516d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5516d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5516d8:
    // 0x5516d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5516d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5516dc:
    // 0x5516dc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5516dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5516e0:
    // 0x5516e0: 0x320f809  jalr        $t9
label_5516e4:
    if (ctx->pc == 0x5516E4u) {
        ctx->pc = 0x5516E4u;
            // 0x5516e4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x5516E8u;
        goto label_5516e8;
    }
    ctx->pc = 0x5516E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5516E8u);
        ctx->pc = 0x5516E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5516E0u;
            // 0x5516e4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5516E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5516E8u; }
            if (ctx->pc != 0x5516E8u) { return; }
        }
        }
    }
    ctx->pc = 0x5516E8u;
label_5516e8:
    // 0x5516e8: 0xc040180  jal         func_100600
label_5516ec:
    if (ctx->pc == 0x5516ECu) {
        ctx->pc = 0x5516ECu;
            // 0x5516ec: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x5516F0u;
        goto label_5516f0;
    }
    ctx->pc = 0x5516E8u;
    SET_GPR_U32(ctx, 31, 0x5516F0u);
    ctx->pc = 0x5516ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5516E8u;
            // 0x5516ec: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5516F0u; }
        if (ctx->pc != 0x5516F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5516F0u; }
        if (ctx->pc != 0x5516F0u) { return; }
    }
    ctx->pc = 0x5516F0u;
label_5516f0:
    // 0x5516f0: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_5516f4:
    if (ctx->pc == 0x5516F4u) {
        ctx->pc = 0x5516F4u;
            // 0x5516f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5516F8u;
        goto label_5516f8;
    }
    ctx->pc = 0x5516F0u;
    {
        const bool branch_taken_0x5516f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5516F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5516F0u;
            // 0x5516f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5516f0) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x5516F8u;
label_5516f8:
    // 0x5516f8: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x5516f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_5516fc:
    // 0x5516fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5516fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_551700:
    // 0x551700: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x551700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_551704:
    // 0x551704: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x551704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_551708:
    // 0x551708: 0xc10ca68  jal         func_4329A0
label_55170c:
    if (ctx->pc == 0x55170Cu) {
        ctx->pc = 0x55170Cu;
            // 0x55170c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x551710u;
        goto label_551710;
    }
    ctx->pc = 0x551708u;
    SET_GPR_U32(ctx, 31, 0x551710u);
    ctx->pc = 0x55170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551708u;
            // 0x55170c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551710u; }
        if (ctx->pc != 0x551710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551710u; }
        if (ctx->pc != 0x551710u) { return; }
    }
    ctx->pc = 0x551710u;
label_551710:
    // 0x551710: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x551710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_551714:
    // 0x551714: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x551714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_551718:
    // 0x551718: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x551718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_55171c:
    // 0x55171c: 0x24844f60  addiu       $a0, $a0, 0x4F60
    ctx->pc = 0x55171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20320));
label_551720:
    // 0x551720: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x551720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_551724:
    // 0x551724: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x551724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_551728:
    // 0x551728: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x551728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_55172c:
    // 0x55172c: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x55172cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
label_551730:
    // 0x551730: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x551730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_551734:
    // 0x551734: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x551734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_551738:
    // 0x551738: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x551738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_55173c:
    // 0x55173c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55173cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_551740:
    // 0x551740: 0xae25005c  sw          $a1, 0x5C($s1)
    ctx->pc = 0x551740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 5));
label_551744:
    // 0x551744: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x551744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_551748:
    // 0x551748: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x551748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_55174c:
    // 0x55174c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x55174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_551750:
    // 0x551750: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x551750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_551754:
    // 0x551754: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x551754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
label_551758:
    // 0x551758: 0x10000043  b           . + 4 + (0x43 << 2)
label_55175c:
    if (ctx->pc == 0x55175Cu) {
        ctx->pc = 0x55175Cu;
            // 0x55175c: 0xa220006c  sb          $zero, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x551760u;
        goto label_551760;
    }
    ctx->pc = 0x551758u;
    {
        const bool branch_taken_0x551758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55175Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551758u;
            // 0x55175c: 0xa220006c  sb          $zero, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551758) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x551760u;
label_551760:
    // 0x551760: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x551760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_551764:
    // 0x551764: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x551764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_551768:
    // 0x551768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x551768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55176c:
    // 0x55176c: 0x0  nop
    ctx->pc = 0x55176cu;
    // NOP
label_551770:
    // 0x551770: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x551770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_551774:
    // 0x551774: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
label_551778:
    if (ctx->pc == 0x551778u) {
        ctx->pc = 0x55177Cu;
        goto label_55177c;
    }
    ctx->pc = 0x551774u;
    {
        const bool branch_taken_0x551774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x551774) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x55177Cu;
label_55177c:
    // 0x55177c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x55177cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_551780:
    // 0x551780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x551780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_551784:
    // 0x551784: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x551784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_551788:
    // 0x551788: 0x320f809  jalr        $t9
label_55178c:
    if (ctx->pc == 0x55178Cu) {
        ctx->pc = 0x55178Cu;
            // 0x55178c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551790u;
        goto label_551790;
    }
    ctx->pc = 0x551788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551790u);
        ctx->pc = 0x55178Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551788u;
            // 0x55178c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551790u; }
            if (ctx->pc != 0x551790u) { return; }
        }
        }
    }
    ctx->pc = 0x551790u;
label_551790:
    // 0x551790: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x551790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_551794:
    // 0x551794: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x551794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_551798:
    // 0x551798: 0xc151cc0  jal         func_547300
label_55179c:
    if (ctx->pc == 0x55179Cu) {
        ctx->pc = 0x55179Cu;
            // 0x55179c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x5517A0u;
        goto label_5517a0;
    }
    ctx->pc = 0x551798u;
    SET_GPR_U32(ctx, 31, 0x5517A0u);
    ctx->pc = 0x55179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551798u;
            // 0x55179c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x547300u;
    if (runtime->hasFunction(0x547300u)) {
        auto targetFn = runtime->lookupFunction(0x547300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5517A0u; }
        if (ctx->pc != 0x5517A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00547300_0x547300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5517A0u; }
        if (ctx->pc != 0x5517A0u) { return; }
    }
    ctx->pc = 0x5517A0u;
label_5517a0:
    // 0x5517a0: 0xc040180  jal         func_100600
label_5517a4:
    if (ctx->pc == 0x5517A4u) {
        ctx->pc = 0x5517A4u;
            // 0x5517a4: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x5517A8u;
        goto label_5517a8;
    }
    ctx->pc = 0x5517A0u;
    SET_GPR_U32(ctx, 31, 0x5517A8u);
    ctx->pc = 0x5517A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5517A0u;
            // 0x5517a4: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5517A8u; }
        if (ctx->pc != 0x5517A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5517A8u; }
        if (ctx->pc != 0x5517A8u) { return; }
    }
    ctx->pc = 0x5517A8u;
label_5517a8:
    // 0x5517a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x5517a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5517ac:
    // 0x5517ac: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_5517b0:
    if (ctx->pc == 0x5517B0u) {
        ctx->pc = 0x5517B4u;
        goto label_5517b4;
    }
    ctx->pc = 0x5517ACu;
    {
        const bool branch_taken_0x5517ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5517ac) {
            ctx->pc = 0x5517D8u;
            goto label_5517d8;
        }
    }
    ctx->pc = 0x5517B4u;
label_5517b4:
    // 0x5517b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5517b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5517b8:
    // 0x5517b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5517b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5517bc:
    // 0x5517bc: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x5517bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_5517c0:
    // 0x5517c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x5517c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5517c4:
    // 0x5517c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5517c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5517c8:
    // 0x5517c8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x5517c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5517cc:
    // 0x5517cc: 0xc151190  jal         func_544640
label_5517d0:
    if (ctx->pc == 0x5517D0u) {
        ctx->pc = 0x5517D0u;
            // 0x5517d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5517D4u;
        goto label_5517d4;
    }
    ctx->pc = 0x5517CCu;
    SET_GPR_U32(ctx, 31, 0x5517D4u);
    ctx->pc = 0x5517D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5517CCu;
            // 0x5517d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5517D4u; }
        if (ctx->pc != 0x5517D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5517D4u; }
        if (ctx->pc != 0x5517D4u) { return; }
    }
    ctx->pc = 0x5517D4u;
label_5517d4:
    // 0x5517d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x5517d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5517d8:
    // 0x5517d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5517d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5517dc:
    // 0x5517dc: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x5517dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_5517e0:
    // 0x5517e0: 0xc1206b0  jal         func_481AC0
label_5517e4:
    if (ctx->pc == 0x5517E4u) {
        ctx->pc = 0x5517E4u;
            // 0x5517e4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x5517E8u;
        goto label_5517e8;
    }
    ctx->pc = 0x5517E0u;
    SET_GPR_U32(ctx, 31, 0x5517E8u);
    ctx->pc = 0x5517E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5517E0u;
            // 0x5517e4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481AC0u;
    if (runtime->hasFunction(0x481AC0u)) {
        auto targetFn = runtime->lookupFunction(0x481AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5517E8u; }
        if (ctx->pc != 0x5517E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481AC0_0x481ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5517E8u; }
        if (ctx->pc != 0x5517E8u) { return; }
    }
    ctx->pc = 0x5517E8u;
label_5517e8:
    // 0x5517e8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5517e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5517ec:
    // 0x5517ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5517ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5517f0:
    // 0x5517f0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5517f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5517f4:
    // 0x5517f4: 0x320f809  jalr        $t9
label_5517f8:
    if (ctx->pc == 0x5517F8u) {
        ctx->pc = 0x5517F8u;
            // 0x5517f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5517FCu;
        goto label_5517fc;
    }
    ctx->pc = 0x5517F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5517FCu);
        ctx->pc = 0x5517F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5517F4u;
            // 0x5517f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5517FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5517FCu; }
            if (ctx->pc != 0x5517FCu) { return; }
        }
        }
    }
    ctx->pc = 0x5517FCu;
label_5517fc:
    // 0x5517fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5517fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_551800:
    // 0x551800: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x551800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_551804:
    // 0x551804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x551804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_551808:
    // 0x551808: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x551808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_55180c:
    // 0x55180c: 0x320f809  jalr        $t9
label_551810:
    if (ctx->pc == 0x551810u) {
        ctx->pc = 0x551810u;
            // 0x551810: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->pc = 0x551814u;
        goto label_551814;
    }
    ctx->pc = 0x55180Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551814u);
        ctx->pc = 0x551810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55180Cu;
            // 0x551810: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551814u; }
            if (ctx->pc != 0x551814u) { return; }
        }
        }
    }
    ctx->pc = 0x551814u;
label_551814:
    // 0x551814: 0x10000014  b           . + 4 + (0x14 << 2)
label_551818:
    if (ctx->pc == 0x551818u) {
        ctx->pc = 0x55181Cu;
        goto label_55181c;
    }
    ctx->pc = 0x551814u;
    {
        const bool branch_taken_0x551814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x551814) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x55181Cu;
label_55181c:
    // 0x55181c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x55181cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_551820:
    // 0x551820: 0x8c633e28  lw          $v1, 0x3E28($v1)
    ctx->pc = 0x551820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_551824:
    // 0x551824: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x551824u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_551828:
    // 0x551828: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_55182c:
    if (ctx->pc == 0x55182Cu) {
        ctx->pc = 0x551830u;
        goto label_551830;
    }
    ctx->pc = 0x551828u;
    {
        const bool branch_taken_0x551828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x551828) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x551830u;
label_551830:
    // 0x551830: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x551830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_551834:
    // 0x551834: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x551834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_551838:
    // 0x551838: 0x320f809  jalr        $t9
label_55183c:
    if (ctx->pc == 0x55183Cu) {
        ctx->pc = 0x55183Cu;
            // 0x55183c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551840u;
        goto label_551840;
    }
    ctx->pc = 0x551838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551840u);
        ctx->pc = 0x55183Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551838u;
            // 0x55183c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551840u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551840u; }
            if (ctx->pc != 0x551840u) { return; }
        }
        }
    }
    ctx->pc = 0x551840u;
label_551840:
    // 0x551840: 0x10000009  b           . + 4 + (0x9 << 2)
label_551844:
    if (ctx->pc == 0x551844u) {
        ctx->pc = 0x551848u;
        goto label_551848;
    }
    ctx->pc = 0x551840u;
    {
        const bool branch_taken_0x551840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x551840) {
            ctx->pc = 0x551868u;
            goto label_551868;
        }
    }
    ctx->pc = 0x551848u;
label_551848:
    // 0x551848: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x551848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_55184c:
    // 0x55184c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x55184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_551850:
    // 0x551850: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x551850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_551854:
    // 0x551854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x551854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_551858:
    // 0x551858: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x551858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
label_55185c:
    // 0x55185c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x55185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_551860:
    // 0x551860: 0xc057b7c  jal         func_15EDF0
label_551864:
    if (ctx->pc == 0x551864u) {
        ctx->pc = 0x551864u;
            // 0x551864: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x551868u;
        goto label_551868;
    }
    ctx->pc = 0x551860u;
    SET_GPR_U32(ctx, 31, 0x551868u);
    ctx->pc = 0x551864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551860u;
            // 0x551864: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551868u; }
        if (ctx->pc != 0x551868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551868u; }
        if (ctx->pc != 0x551868u) { return; }
    }
    ctx->pc = 0x551868u;
label_551868:
    // 0x551868: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x551868u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_55186c:
    // 0x55186c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55186cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_551870:
    // 0x551870: 0x50830041  beql        $a0, $v1, . + 4 + (0x41 << 2)
label_551874:
    if (ctx->pc == 0x551874u) {
        ctx->pc = 0x551874u;
            // 0x551874: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x551878u;
        goto label_551878;
    }
    ctx->pc = 0x551870u;
    {
        const bool branch_taken_0x551870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x551870) {
            ctx->pc = 0x551874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551870u;
            // 0x551874: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551978u;
            goto label_551978;
        }
    }
    ctx->pc = 0x551878u;
label_551878:
    // 0x551878: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
label_55187c:
    if (ctx->pc == 0x55187Cu) {
        ctx->pc = 0x551880u;
        goto label_551880;
    }
    ctx->pc = 0x551878u;
    {
        const bool branch_taken_0x551878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x551878) {
            ctx->pc = 0x551974u;
            goto label_551974;
        }
    }
    ctx->pc = 0x551880u;
label_551880:
    // 0x551880: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x551880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_551884:
    // 0x551884: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
label_551888:
    if (ctx->pc == 0x551888u) {
        ctx->pc = 0x55188Cu;
        goto label_55188c;
    }
    ctx->pc = 0x551884u;
    {
        const bool branch_taken_0x551884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x551884) {
            ctx->pc = 0x551974u;
            goto label_551974;
        }
    }
    ctx->pc = 0x55188Cu;
label_55188c:
    // 0x55188c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x55188cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_551890:
    // 0x551890: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_551894:
    if (ctx->pc == 0x551894u) {
        ctx->pc = 0x551898u;
        goto label_551898;
    }
    ctx->pc = 0x551890u;
    {
        const bool branch_taken_0x551890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x551890) {
            ctx->pc = 0x5518A0u;
            goto label_5518a0;
        }
    }
    ctx->pc = 0x551898u;
label_551898:
    // 0x551898: 0x1000001c  b           . + 4 + (0x1C << 2)
label_55189c:
    if (ctx->pc == 0x55189Cu) {
        ctx->pc = 0x55189Cu;
            // 0x55189c: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->pc = 0x5518A0u;
        goto label_5518a0;
    }
    ctx->pc = 0x551898u;
    {
        const bool branch_taken_0x551898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55189Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551898u;
            // 0x55189c: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551898) {
            ctx->pc = 0x55190Cu;
            goto label_55190c;
        }
    }
    ctx->pc = 0x5518A0u;
label_5518a0:
    // 0x5518a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5518a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5518a4:
    // 0x5518a4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5518a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5518a8:
    // 0x5518a8: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x5518a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5518ac:
    // 0x5518ac: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x5518acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5518b0:
    // 0x5518b0: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x5518b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5518b4:
    // 0x5518b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x5518b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_5518b8:
    // 0x5518b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x5518b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5518bc:
    // 0x5518bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_5518c0:
    if (ctx->pc == 0x5518C0u) {
        ctx->pc = 0x5518C0u;
            // 0x5518c0: 0xe6010080  swc1        $f1, 0x80($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->pc = 0x5518C4u;
        goto label_5518c4;
    }
    ctx->pc = 0x5518BCu;
    {
        const bool branch_taken_0x5518bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5518C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5518BCu;
            // 0x5518c0: 0xe6010080  swc1        $f1, 0x80($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5518bc) {
            ctx->pc = 0x5518C8u;
            goto label_5518c8;
        }
    }
    ctx->pc = 0x5518C4u;
label_5518c4:
    // 0x5518c4: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x5518c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_5518c8:
    // 0x5518c8: 0x86440038  lh          $a0, 0x38($s2)
    ctx->pc = 0x5518c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_5518cc:
    // 0x5518cc: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x5518ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5518d0:
    // 0x5518d0: 0x86430040  lh          $v1, 0x40($s2)
    ctx->pc = 0x5518d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
label_5518d4:
    // 0x5518d4: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x5518d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5518d8:
    // 0x5518d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5518d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5518dc:
    // 0x5518dc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x5518dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5518e0:
    // 0x5518e0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x5518e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_5518e4:
    // 0x5518e4: 0x0  nop
    ctx->pc = 0x5518e4u;
    // NOP
label_5518e8:
    // 0x5518e8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x5518e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_5518ec:
    // 0x5518ec: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x5518ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_5518f0:
    // 0x5518f0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x5518f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_5518f4:
    // 0x5518f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5518f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5518f8:
    // 0x5518f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x5518f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5518fc:
    // 0x5518fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5518fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_551900:
    // 0x551900: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x551900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_551904:
    // 0x551904: 0x1000001b  b           . + 4 + (0x1B << 2)
label_551908:
    if (ctx->pc == 0x551908u) {
        ctx->pc = 0x551908u;
            // 0x551908: 0xa603006c  sh          $v1, 0x6C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x55190Cu;
        goto label_55190c;
    }
    ctx->pc = 0x551904u;
    {
        const bool branch_taken_0x551904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551904u;
            // 0x551908: 0xa603006c  sh          $v1, 0x6C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551904) {
            ctx->pc = 0x551974u;
            goto label_551974;
        }
    }
    ctx->pc = 0x55190Cu;
label_55190c:
    // 0x55190c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x55190cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_551910:
    // 0x551910: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x551910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_551914:
    // 0x551914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x551914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551918:
    // 0x551918: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x551918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55191c:
    // 0x55191c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x55191cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_551920:
    // 0x551920: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x551920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_551924:
    // 0x551924: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_551928:
    if (ctx->pc == 0x551928u) {
        ctx->pc = 0x551928u;
            // 0x551928: 0xe6010080  swc1        $f1, 0x80($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->pc = 0x55192Cu;
        goto label_55192c;
    }
    ctx->pc = 0x551924u;
    {
        const bool branch_taken_0x551924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x551928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551924u;
            // 0x551928: 0xe6010080  swc1        $f1, 0x80($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x551924) {
            ctx->pc = 0x551930u;
            goto label_551930;
        }
    }
    ctx->pc = 0x55192Cu;
label_55192c:
    // 0x55192c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x55192cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_551930:
    // 0x551930: 0x86440038  lh          $a0, 0x38($s2)
    ctx->pc = 0x551930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_551934:
    // 0x551934: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x551934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_551938:
    // 0x551938: 0x86430040  lh          $v1, 0x40($s2)
    ctx->pc = 0x551938u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
label_55193c:
    // 0x55193c: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x55193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_551940:
    // 0x551940: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x551940u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551944:
    // 0x551944: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x551944u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_551948:
    // 0x551948: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x551948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_55194c:
    // 0x55194c: 0x0  nop
    ctx->pc = 0x55194cu;
    // NOP
label_551950:
    // 0x551950: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x551950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_551954:
    // 0x551954: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x551954u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_551958:
    // 0x551958: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x551958u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_55195c:
    // 0x55195c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x55195cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_551960:
    // 0x551960: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x551960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_551964:
    // 0x551964: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x551964u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_551968:
    // 0x551968: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x551968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_55196c:
    // 0x55196c: 0x0  nop
    ctx->pc = 0x55196cu;
    // NOP
label_551970:
    // 0x551970: 0xa603006c  sh          $v1, 0x6C($s0)
    ctx->pc = 0x551970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 3));
label_551974:
    // 0x551974: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x551974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_551978:
    // 0x551978: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x551978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55197c:
    // 0x55197c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x55197cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_551980:
    // 0x551980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x551980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_551984:
    // 0x551984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x551984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_551988:
    // 0x551988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x551988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55198c:
    // 0x55198c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55198cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_551990:
    // 0x551990: 0x3e00008  jr          $ra
label_551994:
    if (ctx->pc == 0x551994u) {
        ctx->pc = 0x551994u;
            // 0x551994: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x551998u;
        goto label_551998;
    }
    ctx->pc = 0x551990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x551994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551990u;
            // 0x551994: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x551998u;
label_551998:
    // 0x551998: 0x0  nop
    ctx->pc = 0x551998u;
    // NOP
label_55199c:
    // 0x55199c: 0x0  nop
    ctx->pc = 0x55199cu;
    // NOP
}
