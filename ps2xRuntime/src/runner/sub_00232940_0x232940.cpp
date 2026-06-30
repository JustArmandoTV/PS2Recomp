#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00232940
// Address: 0x232940 - 0x233220
void sub_00232940_0x232940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232940_0x232940");
#endif

    switch (ctx->pc) {
        case 0x232940u: goto label_232940;
        case 0x232944u: goto label_232944;
        case 0x232948u: goto label_232948;
        case 0x23294cu: goto label_23294c;
        case 0x232950u: goto label_232950;
        case 0x232954u: goto label_232954;
        case 0x232958u: goto label_232958;
        case 0x23295cu: goto label_23295c;
        case 0x232960u: goto label_232960;
        case 0x232964u: goto label_232964;
        case 0x232968u: goto label_232968;
        case 0x23296cu: goto label_23296c;
        case 0x232970u: goto label_232970;
        case 0x232974u: goto label_232974;
        case 0x232978u: goto label_232978;
        case 0x23297cu: goto label_23297c;
        case 0x232980u: goto label_232980;
        case 0x232984u: goto label_232984;
        case 0x232988u: goto label_232988;
        case 0x23298cu: goto label_23298c;
        case 0x232990u: goto label_232990;
        case 0x232994u: goto label_232994;
        case 0x232998u: goto label_232998;
        case 0x23299cu: goto label_23299c;
        case 0x2329a0u: goto label_2329a0;
        case 0x2329a4u: goto label_2329a4;
        case 0x2329a8u: goto label_2329a8;
        case 0x2329acu: goto label_2329ac;
        case 0x2329b0u: goto label_2329b0;
        case 0x2329b4u: goto label_2329b4;
        case 0x2329b8u: goto label_2329b8;
        case 0x2329bcu: goto label_2329bc;
        case 0x2329c0u: goto label_2329c0;
        case 0x2329c4u: goto label_2329c4;
        case 0x2329c8u: goto label_2329c8;
        case 0x2329ccu: goto label_2329cc;
        case 0x2329d0u: goto label_2329d0;
        case 0x2329d4u: goto label_2329d4;
        case 0x2329d8u: goto label_2329d8;
        case 0x2329dcu: goto label_2329dc;
        case 0x2329e0u: goto label_2329e0;
        case 0x2329e4u: goto label_2329e4;
        case 0x2329e8u: goto label_2329e8;
        case 0x2329ecu: goto label_2329ec;
        case 0x2329f0u: goto label_2329f0;
        case 0x2329f4u: goto label_2329f4;
        case 0x2329f8u: goto label_2329f8;
        case 0x2329fcu: goto label_2329fc;
        case 0x232a00u: goto label_232a00;
        case 0x232a04u: goto label_232a04;
        case 0x232a08u: goto label_232a08;
        case 0x232a0cu: goto label_232a0c;
        case 0x232a10u: goto label_232a10;
        case 0x232a14u: goto label_232a14;
        case 0x232a18u: goto label_232a18;
        case 0x232a1cu: goto label_232a1c;
        case 0x232a20u: goto label_232a20;
        case 0x232a24u: goto label_232a24;
        case 0x232a28u: goto label_232a28;
        case 0x232a2cu: goto label_232a2c;
        case 0x232a30u: goto label_232a30;
        case 0x232a34u: goto label_232a34;
        case 0x232a38u: goto label_232a38;
        case 0x232a3cu: goto label_232a3c;
        case 0x232a40u: goto label_232a40;
        case 0x232a44u: goto label_232a44;
        case 0x232a48u: goto label_232a48;
        case 0x232a4cu: goto label_232a4c;
        case 0x232a50u: goto label_232a50;
        case 0x232a54u: goto label_232a54;
        case 0x232a58u: goto label_232a58;
        case 0x232a5cu: goto label_232a5c;
        case 0x232a60u: goto label_232a60;
        case 0x232a64u: goto label_232a64;
        case 0x232a68u: goto label_232a68;
        case 0x232a6cu: goto label_232a6c;
        case 0x232a70u: goto label_232a70;
        case 0x232a74u: goto label_232a74;
        case 0x232a78u: goto label_232a78;
        case 0x232a7cu: goto label_232a7c;
        case 0x232a80u: goto label_232a80;
        case 0x232a84u: goto label_232a84;
        case 0x232a88u: goto label_232a88;
        case 0x232a8cu: goto label_232a8c;
        case 0x232a90u: goto label_232a90;
        case 0x232a94u: goto label_232a94;
        case 0x232a98u: goto label_232a98;
        case 0x232a9cu: goto label_232a9c;
        case 0x232aa0u: goto label_232aa0;
        case 0x232aa4u: goto label_232aa4;
        case 0x232aa8u: goto label_232aa8;
        case 0x232aacu: goto label_232aac;
        case 0x232ab0u: goto label_232ab0;
        case 0x232ab4u: goto label_232ab4;
        case 0x232ab8u: goto label_232ab8;
        case 0x232abcu: goto label_232abc;
        case 0x232ac0u: goto label_232ac0;
        case 0x232ac4u: goto label_232ac4;
        case 0x232ac8u: goto label_232ac8;
        case 0x232accu: goto label_232acc;
        case 0x232ad0u: goto label_232ad0;
        case 0x232ad4u: goto label_232ad4;
        case 0x232ad8u: goto label_232ad8;
        case 0x232adcu: goto label_232adc;
        case 0x232ae0u: goto label_232ae0;
        case 0x232ae4u: goto label_232ae4;
        case 0x232ae8u: goto label_232ae8;
        case 0x232aecu: goto label_232aec;
        case 0x232af0u: goto label_232af0;
        case 0x232af4u: goto label_232af4;
        case 0x232af8u: goto label_232af8;
        case 0x232afcu: goto label_232afc;
        case 0x232b00u: goto label_232b00;
        case 0x232b04u: goto label_232b04;
        case 0x232b08u: goto label_232b08;
        case 0x232b0cu: goto label_232b0c;
        case 0x232b10u: goto label_232b10;
        case 0x232b14u: goto label_232b14;
        case 0x232b18u: goto label_232b18;
        case 0x232b1cu: goto label_232b1c;
        case 0x232b20u: goto label_232b20;
        case 0x232b24u: goto label_232b24;
        case 0x232b28u: goto label_232b28;
        case 0x232b2cu: goto label_232b2c;
        case 0x232b30u: goto label_232b30;
        case 0x232b34u: goto label_232b34;
        case 0x232b38u: goto label_232b38;
        case 0x232b3cu: goto label_232b3c;
        case 0x232b40u: goto label_232b40;
        case 0x232b44u: goto label_232b44;
        case 0x232b48u: goto label_232b48;
        case 0x232b4cu: goto label_232b4c;
        case 0x232b50u: goto label_232b50;
        case 0x232b54u: goto label_232b54;
        case 0x232b58u: goto label_232b58;
        case 0x232b5cu: goto label_232b5c;
        case 0x232b60u: goto label_232b60;
        case 0x232b64u: goto label_232b64;
        case 0x232b68u: goto label_232b68;
        case 0x232b6cu: goto label_232b6c;
        case 0x232b70u: goto label_232b70;
        case 0x232b74u: goto label_232b74;
        case 0x232b78u: goto label_232b78;
        case 0x232b7cu: goto label_232b7c;
        case 0x232b80u: goto label_232b80;
        case 0x232b84u: goto label_232b84;
        case 0x232b88u: goto label_232b88;
        case 0x232b8cu: goto label_232b8c;
        case 0x232b90u: goto label_232b90;
        case 0x232b94u: goto label_232b94;
        case 0x232b98u: goto label_232b98;
        case 0x232b9cu: goto label_232b9c;
        case 0x232ba0u: goto label_232ba0;
        case 0x232ba4u: goto label_232ba4;
        case 0x232ba8u: goto label_232ba8;
        case 0x232bacu: goto label_232bac;
        case 0x232bb0u: goto label_232bb0;
        case 0x232bb4u: goto label_232bb4;
        case 0x232bb8u: goto label_232bb8;
        case 0x232bbcu: goto label_232bbc;
        case 0x232bc0u: goto label_232bc0;
        case 0x232bc4u: goto label_232bc4;
        case 0x232bc8u: goto label_232bc8;
        case 0x232bccu: goto label_232bcc;
        case 0x232bd0u: goto label_232bd0;
        case 0x232bd4u: goto label_232bd4;
        case 0x232bd8u: goto label_232bd8;
        case 0x232bdcu: goto label_232bdc;
        case 0x232be0u: goto label_232be0;
        case 0x232be4u: goto label_232be4;
        case 0x232be8u: goto label_232be8;
        case 0x232becu: goto label_232bec;
        case 0x232bf0u: goto label_232bf0;
        case 0x232bf4u: goto label_232bf4;
        case 0x232bf8u: goto label_232bf8;
        case 0x232bfcu: goto label_232bfc;
        case 0x232c00u: goto label_232c00;
        case 0x232c04u: goto label_232c04;
        case 0x232c08u: goto label_232c08;
        case 0x232c0cu: goto label_232c0c;
        case 0x232c10u: goto label_232c10;
        case 0x232c14u: goto label_232c14;
        case 0x232c18u: goto label_232c18;
        case 0x232c1cu: goto label_232c1c;
        case 0x232c20u: goto label_232c20;
        case 0x232c24u: goto label_232c24;
        case 0x232c28u: goto label_232c28;
        case 0x232c2cu: goto label_232c2c;
        case 0x232c30u: goto label_232c30;
        case 0x232c34u: goto label_232c34;
        case 0x232c38u: goto label_232c38;
        case 0x232c3cu: goto label_232c3c;
        case 0x232c40u: goto label_232c40;
        case 0x232c44u: goto label_232c44;
        case 0x232c48u: goto label_232c48;
        case 0x232c4cu: goto label_232c4c;
        case 0x232c50u: goto label_232c50;
        case 0x232c54u: goto label_232c54;
        case 0x232c58u: goto label_232c58;
        case 0x232c5cu: goto label_232c5c;
        case 0x232c60u: goto label_232c60;
        case 0x232c64u: goto label_232c64;
        case 0x232c68u: goto label_232c68;
        case 0x232c6cu: goto label_232c6c;
        case 0x232c70u: goto label_232c70;
        case 0x232c74u: goto label_232c74;
        case 0x232c78u: goto label_232c78;
        case 0x232c7cu: goto label_232c7c;
        case 0x232c80u: goto label_232c80;
        case 0x232c84u: goto label_232c84;
        case 0x232c88u: goto label_232c88;
        case 0x232c8cu: goto label_232c8c;
        case 0x232c90u: goto label_232c90;
        case 0x232c94u: goto label_232c94;
        case 0x232c98u: goto label_232c98;
        case 0x232c9cu: goto label_232c9c;
        case 0x232ca0u: goto label_232ca0;
        case 0x232ca4u: goto label_232ca4;
        case 0x232ca8u: goto label_232ca8;
        case 0x232cacu: goto label_232cac;
        case 0x232cb0u: goto label_232cb0;
        case 0x232cb4u: goto label_232cb4;
        case 0x232cb8u: goto label_232cb8;
        case 0x232cbcu: goto label_232cbc;
        case 0x232cc0u: goto label_232cc0;
        case 0x232cc4u: goto label_232cc4;
        case 0x232cc8u: goto label_232cc8;
        case 0x232cccu: goto label_232ccc;
        case 0x232cd0u: goto label_232cd0;
        case 0x232cd4u: goto label_232cd4;
        case 0x232cd8u: goto label_232cd8;
        case 0x232cdcu: goto label_232cdc;
        case 0x232ce0u: goto label_232ce0;
        case 0x232ce4u: goto label_232ce4;
        case 0x232ce8u: goto label_232ce8;
        case 0x232cecu: goto label_232cec;
        case 0x232cf0u: goto label_232cf0;
        case 0x232cf4u: goto label_232cf4;
        case 0x232cf8u: goto label_232cf8;
        case 0x232cfcu: goto label_232cfc;
        case 0x232d00u: goto label_232d00;
        case 0x232d04u: goto label_232d04;
        case 0x232d08u: goto label_232d08;
        case 0x232d0cu: goto label_232d0c;
        case 0x232d10u: goto label_232d10;
        case 0x232d14u: goto label_232d14;
        case 0x232d18u: goto label_232d18;
        case 0x232d1cu: goto label_232d1c;
        case 0x232d20u: goto label_232d20;
        case 0x232d24u: goto label_232d24;
        case 0x232d28u: goto label_232d28;
        case 0x232d2cu: goto label_232d2c;
        case 0x232d30u: goto label_232d30;
        case 0x232d34u: goto label_232d34;
        case 0x232d38u: goto label_232d38;
        case 0x232d3cu: goto label_232d3c;
        case 0x232d40u: goto label_232d40;
        case 0x232d44u: goto label_232d44;
        case 0x232d48u: goto label_232d48;
        case 0x232d4cu: goto label_232d4c;
        case 0x232d50u: goto label_232d50;
        case 0x232d54u: goto label_232d54;
        case 0x232d58u: goto label_232d58;
        case 0x232d5cu: goto label_232d5c;
        case 0x232d60u: goto label_232d60;
        case 0x232d64u: goto label_232d64;
        case 0x232d68u: goto label_232d68;
        case 0x232d6cu: goto label_232d6c;
        case 0x232d70u: goto label_232d70;
        case 0x232d74u: goto label_232d74;
        case 0x232d78u: goto label_232d78;
        case 0x232d7cu: goto label_232d7c;
        case 0x232d80u: goto label_232d80;
        case 0x232d84u: goto label_232d84;
        case 0x232d88u: goto label_232d88;
        case 0x232d8cu: goto label_232d8c;
        case 0x232d90u: goto label_232d90;
        case 0x232d94u: goto label_232d94;
        case 0x232d98u: goto label_232d98;
        case 0x232d9cu: goto label_232d9c;
        case 0x232da0u: goto label_232da0;
        case 0x232da4u: goto label_232da4;
        case 0x232da8u: goto label_232da8;
        case 0x232dacu: goto label_232dac;
        case 0x232db0u: goto label_232db0;
        case 0x232db4u: goto label_232db4;
        case 0x232db8u: goto label_232db8;
        case 0x232dbcu: goto label_232dbc;
        case 0x232dc0u: goto label_232dc0;
        case 0x232dc4u: goto label_232dc4;
        case 0x232dc8u: goto label_232dc8;
        case 0x232dccu: goto label_232dcc;
        case 0x232dd0u: goto label_232dd0;
        case 0x232dd4u: goto label_232dd4;
        case 0x232dd8u: goto label_232dd8;
        case 0x232ddcu: goto label_232ddc;
        case 0x232de0u: goto label_232de0;
        case 0x232de4u: goto label_232de4;
        case 0x232de8u: goto label_232de8;
        case 0x232decu: goto label_232dec;
        case 0x232df0u: goto label_232df0;
        case 0x232df4u: goto label_232df4;
        case 0x232df8u: goto label_232df8;
        case 0x232dfcu: goto label_232dfc;
        case 0x232e00u: goto label_232e00;
        case 0x232e04u: goto label_232e04;
        case 0x232e08u: goto label_232e08;
        case 0x232e0cu: goto label_232e0c;
        case 0x232e10u: goto label_232e10;
        case 0x232e14u: goto label_232e14;
        case 0x232e18u: goto label_232e18;
        case 0x232e1cu: goto label_232e1c;
        case 0x232e20u: goto label_232e20;
        case 0x232e24u: goto label_232e24;
        case 0x232e28u: goto label_232e28;
        case 0x232e2cu: goto label_232e2c;
        case 0x232e30u: goto label_232e30;
        case 0x232e34u: goto label_232e34;
        case 0x232e38u: goto label_232e38;
        case 0x232e3cu: goto label_232e3c;
        case 0x232e40u: goto label_232e40;
        case 0x232e44u: goto label_232e44;
        case 0x232e48u: goto label_232e48;
        case 0x232e4cu: goto label_232e4c;
        case 0x232e50u: goto label_232e50;
        case 0x232e54u: goto label_232e54;
        case 0x232e58u: goto label_232e58;
        case 0x232e5cu: goto label_232e5c;
        case 0x232e60u: goto label_232e60;
        case 0x232e64u: goto label_232e64;
        case 0x232e68u: goto label_232e68;
        case 0x232e6cu: goto label_232e6c;
        case 0x232e70u: goto label_232e70;
        case 0x232e74u: goto label_232e74;
        case 0x232e78u: goto label_232e78;
        case 0x232e7cu: goto label_232e7c;
        case 0x232e80u: goto label_232e80;
        case 0x232e84u: goto label_232e84;
        case 0x232e88u: goto label_232e88;
        case 0x232e8cu: goto label_232e8c;
        case 0x232e90u: goto label_232e90;
        case 0x232e94u: goto label_232e94;
        case 0x232e98u: goto label_232e98;
        case 0x232e9cu: goto label_232e9c;
        case 0x232ea0u: goto label_232ea0;
        case 0x232ea4u: goto label_232ea4;
        case 0x232ea8u: goto label_232ea8;
        case 0x232eacu: goto label_232eac;
        case 0x232eb0u: goto label_232eb0;
        case 0x232eb4u: goto label_232eb4;
        case 0x232eb8u: goto label_232eb8;
        case 0x232ebcu: goto label_232ebc;
        case 0x232ec0u: goto label_232ec0;
        case 0x232ec4u: goto label_232ec4;
        case 0x232ec8u: goto label_232ec8;
        case 0x232eccu: goto label_232ecc;
        case 0x232ed0u: goto label_232ed0;
        case 0x232ed4u: goto label_232ed4;
        case 0x232ed8u: goto label_232ed8;
        case 0x232edcu: goto label_232edc;
        case 0x232ee0u: goto label_232ee0;
        case 0x232ee4u: goto label_232ee4;
        case 0x232ee8u: goto label_232ee8;
        case 0x232eecu: goto label_232eec;
        case 0x232ef0u: goto label_232ef0;
        case 0x232ef4u: goto label_232ef4;
        case 0x232ef8u: goto label_232ef8;
        case 0x232efcu: goto label_232efc;
        case 0x232f00u: goto label_232f00;
        case 0x232f04u: goto label_232f04;
        case 0x232f08u: goto label_232f08;
        case 0x232f0cu: goto label_232f0c;
        case 0x232f10u: goto label_232f10;
        case 0x232f14u: goto label_232f14;
        case 0x232f18u: goto label_232f18;
        case 0x232f1cu: goto label_232f1c;
        case 0x232f20u: goto label_232f20;
        case 0x232f24u: goto label_232f24;
        case 0x232f28u: goto label_232f28;
        case 0x232f2cu: goto label_232f2c;
        case 0x232f30u: goto label_232f30;
        case 0x232f34u: goto label_232f34;
        case 0x232f38u: goto label_232f38;
        case 0x232f3cu: goto label_232f3c;
        case 0x232f40u: goto label_232f40;
        case 0x232f44u: goto label_232f44;
        case 0x232f48u: goto label_232f48;
        case 0x232f4cu: goto label_232f4c;
        case 0x232f50u: goto label_232f50;
        case 0x232f54u: goto label_232f54;
        case 0x232f58u: goto label_232f58;
        case 0x232f5cu: goto label_232f5c;
        case 0x232f60u: goto label_232f60;
        case 0x232f64u: goto label_232f64;
        case 0x232f68u: goto label_232f68;
        case 0x232f6cu: goto label_232f6c;
        case 0x232f70u: goto label_232f70;
        case 0x232f74u: goto label_232f74;
        case 0x232f78u: goto label_232f78;
        case 0x232f7cu: goto label_232f7c;
        case 0x232f80u: goto label_232f80;
        case 0x232f84u: goto label_232f84;
        case 0x232f88u: goto label_232f88;
        case 0x232f8cu: goto label_232f8c;
        case 0x232f90u: goto label_232f90;
        case 0x232f94u: goto label_232f94;
        case 0x232f98u: goto label_232f98;
        case 0x232f9cu: goto label_232f9c;
        case 0x232fa0u: goto label_232fa0;
        case 0x232fa4u: goto label_232fa4;
        case 0x232fa8u: goto label_232fa8;
        case 0x232facu: goto label_232fac;
        case 0x232fb0u: goto label_232fb0;
        case 0x232fb4u: goto label_232fb4;
        case 0x232fb8u: goto label_232fb8;
        case 0x232fbcu: goto label_232fbc;
        case 0x232fc0u: goto label_232fc0;
        case 0x232fc4u: goto label_232fc4;
        case 0x232fc8u: goto label_232fc8;
        case 0x232fccu: goto label_232fcc;
        case 0x232fd0u: goto label_232fd0;
        case 0x232fd4u: goto label_232fd4;
        case 0x232fd8u: goto label_232fd8;
        case 0x232fdcu: goto label_232fdc;
        case 0x232fe0u: goto label_232fe0;
        case 0x232fe4u: goto label_232fe4;
        case 0x232fe8u: goto label_232fe8;
        case 0x232fecu: goto label_232fec;
        case 0x232ff0u: goto label_232ff0;
        case 0x232ff4u: goto label_232ff4;
        case 0x232ff8u: goto label_232ff8;
        case 0x232ffcu: goto label_232ffc;
        case 0x233000u: goto label_233000;
        case 0x233004u: goto label_233004;
        case 0x233008u: goto label_233008;
        case 0x23300cu: goto label_23300c;
        case 0x233010u: goto label_233010;
        case 0x233014u: goto label_233014;
        case 0x233018u: goto label_233018;
        case 0x23301cu: goto label_23301c;
        case 0x233020u: goto label_233020;
        case 0x233024u: goto label_233024;
        case 0x233028u: goto label_233028;
        case 0x23302cu: goto label_23302c;
        case 0x233030u: goto label_233030;
        case 0x233034u: goto label_233034;
        case 0x233038u: goto label_233038;
        case 0x23303cu: goto label_23303c;
        case 0x233040u: goto label_233040;
        case 0x233044u: goto label_233044;
        case 0x233048u: goto label_233048;
        case 0x23304cu: goto label_23304c;
        case 0x233050u: goto label_233050;
        case 0x233054u: goto label_233054;
        case 0x233058u: goto label_233058;
        case 0x23305cu: goto label_23305c;
        case 0x233060u: goto label_233060;
        case 0x233064u: goto label_233064;
        case 0x233068u: goto label_233068;
        case 0x23306cu: goto label_23306c;
        case 0x233070u: goto label_233070;
        case 0x233074u: goto label_233074;
        case 0x233078u: goto label_233078;
        case 0x23307cu: goto label_23307c;
        case 0x233080u: goto label_233080;
        case 0x233084u: goto label_233084;
        case 0x233088u: goto label_233088;
        case 0x23308cu: goto label_23308c;
        case 0x233090u: goto label_233090;
        case 0x233094u: goto label_233094;
        case 0x233098u: goto label_233098;
        case 0x23309cu: goto label_23309c;
        case 0x2330a0u: goto label_2330a0;
        case 0x2330a4u: goto label_2330a4;
        case 0x2330a8u: goto label_2330a8;
        case 0x2330acu: goto label_2330ac;
        case 0x2330b0u: goto label_2330b0;
        case 0x2330b4u: goto label_2330b4;
        case 0x2330b8u: goto label_2330b8;
        case 0x2330bcu: goto label_2330bc;
        case 0x2330c0u: goto label_2330c0;
        case 0x2330c4u: goto label_2330c4;
        case 0x2330c8u: goto label_2330c8;
        case 0x2330ccu: goto label_2330cc;
        case 0x2330d0u: goto label_2330d0;
        case 0x2330d4u: goto label_2330d4;
        case 0x2330d8u: goto label_2330d8;
        case 0x2330dcu: goto label_2330dc;
        case 0x2330e0u: goto label_2330e0;
        case 0x2330e4u: goto label_2330e4;
        case 0x2330e8u: goto label_2330e8;
        case 0x2330ecu: goto label_2330ec;
        case 0x2330f0u: goto label_2330f0;
        case 0x2330f4u: goto label_2330f4;
        case 0x2330f8u: goto label_2330f8;
        case 0x2330fcu: goto label_2330fc;
        case 0x233100u: goto label_233100;
        case 0x233104u: goto label_233104;
        case 0x233108u: goto label_233108;
        case 0x23310cu: goto label_23310c;
        case 0x233110u: goto label_233110;
        case 0x233114u: goto label_233114;
        case 0x233118u: goto label_233118;
        case 0x23311cu: goto label_23311c;
        case 0x233120u: goto label_233120;
        case 0x233124u: goto label_233124;
        case 0x233128u: goto label_233128;
        case 0x23312cu: goto label_23312c;
        case 0x233130u: goto label_233130;
        case 0x233134u: goto label_233134;
        case 0x233138u: goto label_233138;
        case 0x23313cu: goto label_23313c;
        case 0x233140u: goto label_233140;
        case 0x233144u: goto label_233144;
        case 0x233148u: goto label_233148;
        case 0x23314cu: goto label_23314c;
        case 0x233150u: goto label_233150;
        case 0x233154u: goto label_233154;
        case 0x233158u: goto label_233158;
        case 0x23315cu: goto label_23315c;
        case 0x233160u: goto label_233160;
        case 0x233164u: goto label_233164;
        case 0x233168u: goto label_233168;
        case 0x23316cu: goto label_23316c;
        case 0x233170u: goto label_233170;
        case 0x233174u: goto label_233174;
        case 0x233178u: goto label_233178;
        case 0x23317cu: goto label_23317c;
        case 0x233180u: goto label_233180;
        case 0x233184u: goto label_233184;
        case 0x233188u: goto label_233188;
        case 0x23318cu: goto label_23318c;
        case 0x233190u: goto label_233190;
        case 0x233194u: goto label_233194;
        case 0x233198u: goto label_233198;
        case 0x23319cu: goto label_23319c;
        case 0x2331a0u: goto label_2331a0;
        case 0x2331a4u: goto label_2331a4;
        case 0x2331a8u: goto label_2331a8;
        case 0x2331acu: goto label_2331ac;
        case 0x2331b0u: goto label_2331b0;
        case 0x2331b4u: goto label_2331b4;
        case 0x2331b8u: goto label_2331b8;
        case 0x2331bcu: goto label_2331bc;
        case 0x2331c0u: goto label_2331c0;
        case 0x2331c4u: goto label_2331c4;
        case 0x2331c8u: goto label_2331c8;
        case 0x2331ccu: goto label_2331cc;
        case 0x2331d0u: goto label_2331d0;
        case 0x2331d4u: goto label_2331d4;
        case 0x2331d8u: goto label_2331d8;
        case 0x2331dcu: goto label_2331dc;
        case 0x2331e0u: goto label_2331e0;
        case 0x2331e4u: goto label_2331e4;
        case 0x2331e8u: goto label_2331e8;
        case 0x2331ecu: goto label_2331ec;
        case 0x2331f0u: goto label_2331f0;
        case 0x2331f4u: goto label_2331f4;
        case 0x2331f8u: goto label_2331f8;
        case 0x2331fcu: goto label_2331fc;
        case 0x233200u: goto label_233200;
        case 0x233204u: goto label_233204;
        case 0x233208u: goto label_233208;
        case 0x23320cu: goto label_23320c;
        case 0x233210u: goto label_233210;
        case 0x233214u: goto label_233214;
        case 0x233218u: goto label_233218;
        case 0x23321cu: goto label_23321c;
        default: break;
    }

    ctx->pc = 0x232940u;

label_232940:
    // 0x232940: 0x8c83012c  lw          $v1, 0x12C($a0)
    ctx->pc = 0x232940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
label_232944:
    // 0x232944: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_232948:
    if (ctx->pc == 0x232948u) {
        ctx->pc = 0x232948u;
            // 0x232948: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23294Cu;
        goto label_23294c;
    }
    ctx->pc = 0x232944u;
    {
        const bool branch_taken_0x232944 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x232948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232944u;
            // 0x232948: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232944) {
            ctx->pc = 0x232978u;
            goto label_232978;
        }
    }
    ctx->pc = 0x23294Cu;
label_23294c:
    // 0x23294c: 0x8c860128  lw          $a2, 0x128($a0)
    ctx->pc = 0x23294cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_232950:
    // 0x232950: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x232950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_232954:
    // 0x232954: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
label_232958:
    if (ctx->pc == 0x232958u) {
        ctx->pc = 0x232958u;
            // 0x232958: 0x8c83012c  lw          $v1, 0x12C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
        ctx->pc = 0x23295Cu;
        goto label_23295c;
    }
    ctx->pc = 0x232954u;
    {
        const bool branch_taken_0x232954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x232954) {
            ctx->pc = 0x232958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232954u;
            // 0x232958: 0x8c83012c  lw          $v1, 0x12C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232964u;
            goto label_232964;
        }
    }
    ctx->pc = 0x23295Cu;
label_23295c:
    // 0x23295c: 0x10000008  b           . + 4 + (0x8 << 2)
label_232960:
    if (ctx->pc == 0x232960u) {
        ctx->pc = 0x232960u;
            // 0x232960: 0x8c830128  lw          $v1, 0x128($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
        ctx->pc = 0x232964u;
        goto label_232964;
    }
    ctx->pc = 0x23295Cu;
    {
        const bool branch_taken_0x23295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23295Cu;
            // 0x232960: 0x8c830128  lw          $v1, 0x128($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23295c) {
            ctx->pc = 0x232980u;
            goto label_232980;
        }
    }
    ctx->pc = 0x232964u;
label_232964:
    // 0x232964: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x232964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_232968:
    // 0x232968: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x232968u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23296c:
    // 0x23296c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_232970:
    if (ctx->pc == 0x232970u) {
        ctx->pc = 0x232970u;
            // 0x232970: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x232974u;
        goto label_232974;
    }
    ctx->pc = 0x23296Cu;
    {
        const bool branch_taken_0x23296c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23296Cu;
            // 0x232970: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23296c) {
            ctx->pc = 0x232950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232950;
        }
    }
    ctx->pc = 0x232974u;
label_232974:
    // 0x232974: 0x0  nop
    ctx->pc = 0x232974u;
    // NOP
label_232978:
    // 0x232978: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x232978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23297c:
    // 0x23297c: 0x8c830128  lw          $v1, 0x128($a0)
    ctx->pc = 0x23297cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_232980:
    // 0x232980: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x232980u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_232984:
    // 0x232984: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x232984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_232988:
    // 0x232988: 0x3e00008  jr          $ra
label_23298c:
    if (ctx->pc == 0x23298Cu) {
        ctx->pc = 0x23298Cu;
            // 0x23298c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x232990u;
        goto label_232990;
    }
    ctx->pc = 0x232988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23298Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232988u;
            // 0x23298c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232990u;
label_232990:
    // 0x232990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_232994:
    // 0x232994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x232994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_232998:
    // 0x232998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23299c:
    // 0x23299c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2329a0:
    // 0x2329a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2329a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2329a4:
    // 0x2329a4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2329a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2329a8:
    // 0x2329a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2329a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2329ac:
    // 0x2329ac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2329acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2329b0:
    // 0x2329b0: 0x320f809  jalr        $t9
label_2329b4:
    if (ctx->pc == 0x2329B4u) {
        ctx->pc = 0x2329B8u;
        goto label_2329b8;
    }
    ctx->pc = 0x2329B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2329B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2329B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2329B8u; }
            if (ctx->pc != 0x2329B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2329B8u;
label_2329b8:
    // 0x2329b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2329b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2329bc:
    // 0x2329bc: 0x56000036  bnel        $s0, $zero, . + 4 + (0x36 << 2)
label_2329c0:
    if (ctx->pc == 0x2329C0u) {
        ctx->pc = 0x2329C0u;
            // 0x2329c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2329C4u;
        goto label_2329c4;
    }
    ctx->pc = 0x2329BCu;
    {
        const bool branch_taken_0x2329bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2329bc) {
            ctx->pc = 0x2329C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2329BCu;
            // 0x2329c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232A98u;
            goto label_232a98;
        }
    }
    ctx->pc = 0x2329C4u;
label_2329c4:
    // 0x2329c4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2329c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2329c8:
    // 0x2329c8: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
label_2329cc:
    if (ctx->pc == 0x2329CCu) {
        ctx->pc = 0x2329D0u;
        goto label_2329d0;
    }
    ctx->pc = 0x2329C8u;
    {
        const bool branch_taken_0x2329c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2329c8) {
            ctx->pc = 0x232A94u;
            goto label_232a94;
        }
    }
    ctx->pc = 0x2329D0u;
label_2329d0:
    // 0x2329d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2329d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2329d4:
    // 0x2329d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2329d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2329d8:
    // 0x2329d8: 0x8c42ea20  lw          $v0, -0x15E0($v0)
    ctx->pc = 0x2329d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961696)));
label_2329dc:
    // 0x2329dc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x2329dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2329e0:
    // 0x2329e0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2329e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2329e4:
    // 0x2329e4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2329e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2329e8:
    // 0x2329e8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2329e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2329ec:
    // 0x2329ec: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_2329f0:
    if (ctx->pc == 0x2329F0u) {
        ctx->pc = 0x2329F4u;
        goto label_2329f4;
    }
    ctx->pc = 0x2329ECu;
    {
        const bool branch_taken_0x2329ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2329ec) {
            ctx->pc = 0x232A94u;
            goto label_232a94;
        }
    }
    ctx->pc = 0x2329F4u;
label_2329f4:
    // 0x2329f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2329f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2329f8:
    // 0x2329f8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2329f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2329fc:
    // 0x2329fc: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x2329fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_232a00:
    // 0x232a00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x232a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_232a04:
    // 0x232a04: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x232a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_232a08:
    // 0x232a08: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x232a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_232a0c:
    // 0x232a0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_232a10:
    if (ctx->pc == 0x232A10u) {
        ctx->pc = 0x232A10u;
            // 0x232a10: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x232A14u;
        goto label_232a14;
    }
    ctx->pc = 0x232A0Cu;
    {
        const bool branch_taken_0x232a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A0Cu;
            // 0x232a10: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a0c) {
            ctx->pc = 0x232A3Cu;
            goto label_232a3c;
        }
    }
    ctx->pc = 0x232A14u;
label_232a14:
    // 0x232a14: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x232a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_232a18:
    // 0x232a18: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x232a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_232a1c:
    // 0x232a1c: 0x2442f500  addiu       $v0, $v0, -0xB00
    ctx->pc = 0x232a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964480));
label_232a20:
    // 0x232a20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x232a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_232a24:
    // 0x232a24: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x232a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_232a28:
    // 0x232a28: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x232a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_232a2c:
    // 0x232a2c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x232a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_232a30:
    // 0x232a30: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x232a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_232a34:
    // 0x232a34: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x232a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_232a38:
    // 0x232a38: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x232a38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_232a3c:
    // 0x232a3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x232a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_232a40:
    // 0x232a40: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232a40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232a44:
    // 0x232a44: 0x320f809  jalr        $t9
label_232a48:
    if (ctx->pc == 0x232A48u) {
        ctx->pc = 0x232A48u;
            // 0x232a48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232A4Cu;
        goto label_232a4c;
    }
    ctx->pc = 0x232A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232A4Cu);
        ctx->pc = 0x232A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A44u;
            // 0x232a48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232A4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232A4Cu; }
            if (ctx->pc != 0x232A4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x232A4Cu;
label_232a4c:
    // 0x232a4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x232a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_232a50:
    // 0x232a50: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x232a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_232a54:
    // 0x232a54: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x232a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_232a58:
    // 0x232a58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x232a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_232a5c:
    // 0x232a5c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x232a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_232a60:
    // 0x232a60: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x232a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_232a64:
    // 0x232a64: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_232a68:
    if (ctx->pc == 0x232A68u) {
        ctx->pc = 0x232A68u;
            // 0x232a68: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x232A6Cu;
        goto label_232a6c;
    }
    ctx->pc = 0x232A64u;
    {
        const bool branch_taken_0x232a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A64u;
            // 0x232a68: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a64) {
            ctx->pc = 0x232A94u;
            goto label_232a94;
        }
    }
    ctx->pc = 0x232A6Cu;
label_232a6c:
    // 0x232a6c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x232a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_232a70:
    // 0x232a70: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x232a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_232a74:
    // 0x232a74: 0x2442f4f8  addiu       $v0, $v0, -0xB08
    ctx->pc = 0x232a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964472));
label_232a78:
    // 0x232a78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x232a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_232a7c:
    // 0x232a7c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x232a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_232a80:
    // 0x232a80: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x232a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_232a84:
    // 0x232a84: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x232a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_232a88:
    // 0x232a88: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x232a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_232a8c:
    // 0x232a8c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x232a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_232a90:
    // 0x232a90: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x232a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_232a94:
    // 0x232a94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x232a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232a98:
    // 0x232a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_232a9c:
    // 0x232a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_232aa0:
    // 0x232aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_232aa4:
    // 0x232aa4: 0x3e00008  jr          $ra
label_232aa8:
    if (ctx->pc == 0x232AA8u) {
        ctx->pc = 0x232AA8u;
            // 0x232aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x232AACu;
        goto label_232aac;
    }
    ctx->pc = 0x232AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232AA4u;
            // 0x232aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232AACu;
label_232aac:
    // 0x232aac: 0x0  nop
    ctx->pc = 0x232aacu;
    // NOP
label_232ab0:
    // 0x232ab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x232ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_232ab4:
    // 0x232ab4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x232ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_232ab8:
    // 0x232ab8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x232ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_232abc:
    // 0x232abc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x232abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_232ac0:
    // 0x232ac0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x232ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_232ac4:
    // 0x232ac4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x232ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_232ac8:
    // 0x232ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_232acc:
    // 0x232acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_232ad0:
    // 0x232ad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232ad4:
    // 0x232ad4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x232ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_232ad8:
    // 0x232ad8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x232ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232adc:
    // 0x232adc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232ae0:
    // 0x232ae0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232ae4:
    // 0x232ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232ae8:
    // 0x232ae8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x232ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_232aec:
    // 0x232aec: 0x320f809  jalr        $t9
label_232af0:
    if (ctx->pc == 0x232AF0u) {
        ctx->pc = 0x232AF0u;
            // 0x232af0: 0x24a5c990  addiu       $a1, $a1, -0x3670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
        ctx->pc = 0x232AF4u;
        goto label_232af4;
    }
    ctx->pc = 0x232AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232AF4u);
        ctx->pc = 0x232AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232AECu;
            // 0x232af0: 0x24a5c990  addiu       $a1, $a1, -0x3670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232AF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232AF4u; }
            if (ctx->pc != 0x232AF4u) { return; }
        }
        }
    }
    ctx->pc = 0x232AF4u;
label_232af4:
    // 0x232af4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x232af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_232af8:
    // 0x232af8: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x232af8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_232afc:
    // 0x232afc: 0x6800010  bltz        $s4, . + 4 + (0x10 << 2)
label_232b00:
    if (ctx->pc == 0x232B00u) {
        ctx->pc = 0x232B00u;
            // 0x232b00: 0x26320028  addiu       $s2, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->pc = 0x232B04u;
        goto label_232b04;
    }
    ctx->pc = 0x232AFCu;
    {
        const bool branch_taken_0x232afc = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x232B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232AFCu;
            // 0x232b00: 0x26320028  addiu       $s2, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232afc) {
            ctx->pc = 0x232B40u;
            goto label_232b40;
        }
    }
    ctx->pc = 0x232B04u;
label_232b04:
    // 0x232b04: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x232b04u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_232b08:
    // 0x232b08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x232b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_232b0c:
    // 0x232b0c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232b10:
    // 0x232b10: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232b14:
    // 0x232b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232b18:
    // 0x232b18: 0x24a5c998  addiu       $a1, $a1, -0x3668
    ctx->pc = 0x232b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953368));
label_232b1c:
    // 0x232b1c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x232b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_232b20:
    // 0x232b20: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x232b20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232b24:
    // 0x232b24: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x232b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_232b28:
    // 0x232b28: 0x320f809  jalr        $t9
label_232b2c:
    if (ctx->pc == 0x232B2Cu) {
        ctx->pc = 0x232B2Cu;
            // 0x232b2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x232B30u;
        goto label_232b30;
    }
    ctx->pc = 0x232B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232B30u);
        ctx->pc = 0x232B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B28u;
            // 0x232b2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232B30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232B30u; }
            if (ctx->pc != 0x232B30u) { return; }
        }
        }
    }
    ctx->pc = 0x232B30u;
label_232b30:
    // 0x232b30: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x232b30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_232b34:
    // 0x232b34: 0x681fff4  bgez        $s4, . + 4 + (-0xC << 2)
label_232b38:
    if (ctx->pc == 0x232B38u) {
        ctx->pc = 0x232B38u;
            // 0x232b38: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->pc = 0x232B3Cu;
        goto label_232b3c;
    }
    ctx->pc = 0x232B34u;
    {
        const bool branch_taken_0x232b34 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x232B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B34u;
            // 0x232b38: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b34) {
            ctx->pc = 0x232B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232b08;
        }
    }
    ctx->pc = 0x232B3Cu;
label_232b3c:
    // 0x232b3c: 0x0  nop
    ctx->pc = 0x232b3cu;
    // NOP
label_232b40:
    // 0x232b40: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x232b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_232b44:
    // 0x232b44: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x232b44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_232b48:
    // 0x232b48: 0x660000f  bltz        $s3, . + 4 + (0xF << 2)
label_232b4c:
    if (ctx->pc == 0x232B4Cu) {
        ctx->pc = 0x232B50u;
        goto label_232b50;
    }
    ctx->pc = 0x232B48u;
    {
        const bool branch_taken_0x232b48 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x232b48) {
            ctx->pc = 0x232B88u;
            goto label_232b88;
        }
    }
    ctx->pc = 0x232B50u;
label_232b50:
    // 0x232b50: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x232b50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_232b54:
    // 0x232b54: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x232b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_232b58:
    // 0x232b58: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232b5c:
    // 0x232b5c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232b60:
    // 0x232b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232b64:
    // 0x232b64: 0x24a5c9a0  addiu       $a1, $a1, -0x3660
    ctx->pc = 0x232b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953376));
label_232b68:
    // 0x232b68: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x232b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_232b6c:
    // 0x232b6c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x232b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232b70:
    // 0x232b70: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x232b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_232b74:
    // 0x232b74: 0x320f809  jalr        $t9
label_232b78:
    if (ctx->pc == 0x232B78u) {
        ctx->pc = 0x232B78u;
            // 0x232b78: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x232B7Cu;
        goto label_232b7c;
    }
    ctx->pc = 0x232B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232B7Cu);
        ctx->pc = 0x232B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B74u;
            // 0x232b78: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232B7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232B7Cu; }
            if (ctx->pc != 0x232B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x232B7Cu;
label_232b7c:
    // 0x232b7c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x232b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_232b80:
    // 0x232b80: 0x661fff4  bgez        $s3, . + 4 + (-0xC << 2)
label_232b84:
    if (ctx->pc == 0x232B84u) {
        ctx->pc = 0x232B84u;
            // 0x232b84: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x232B88u;
        goto label_232b88;
    }
    ctx->pc = 0x232B80u;
    {
        const bool branch_taken_0x232b80 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x232B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B80u;
            // 0x232b84: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b80) {
            ctx->pc = 0x232B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232b54;
        }
    }
    ctx->pc = 0x232B88u;
label_232b88:
    // 0x232b88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232b8c:
    // 0x232b8c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232b90:
    // 0x232b90: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x232b90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_232b94:
    // 0x232b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232b98:
    // 0x232b98: 0x24a5c9b0  addiu       $a1, $a1, -0x3650
    ctx->pc = 0x232b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953392));
label_232b9c:
    // 0x232b9c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x232b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_232ba0:
    // 0x232ba0: 0x320f809  jalr        $t9
label_232ba4:
    if (ctx->pc == 0x232BA4u) {
        ctx->pc = 0x232BA4u;
            // 0x232ba4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x232BA8u;
        goto label_232ba8;
    }
    ctx->pc = 0x232BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232BA8u);
        ctx->pc = 0x232BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BA0u;
            // 0x232ba4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232BA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232BA8u; }
            if (ctx->pc != 0x232BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x232BA8u;
label_232ba8:
    // 0x232ba8: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x232ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_232bac:
    // 0x232bac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x232bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_232bb0:
    // 0x232bb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x232bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_232bb4:
    // 0x232bb4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_232bb8:
    if (ctx->pc == 0x232BB8u) {
        ctx->pc = 0x232BB8u;
            // 0x232bb8: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x232BBCu;
        goto label_232bbc;
    }
    ctx->pc = 0x232BB4u;
    {
        const bool branch_taken_0x232bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232bb4) {
            ctx->pc = 0x232BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232BB4u;
            // 0x232bb8: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232BF4u;
            goto label_232bf4;
        }
    }
    ctx->pc = 0x232BBCu;
label_232bbc:
    // 0x232bbc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232bc0:
    // 0x232bc0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x232bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_232bc4:
    // 0x232bc4: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x232bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_232bc8:
    // 0x232bc8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x232bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_232bcc:
    // 0x232bcc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232bd0:
    // 0x232bd0: 0x8e2700ec  lw          $a3, 0xEC($s1)
    ctx->pc = 0x232bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_232bd4:
    // 0x232bd4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232bd8:
    // 0x232bd8: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x232bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_232bdc:
    // 0x232bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232be0:
    // 0x232be0: 0x24a5c9b8  addiu       $a1, $a1, -0x3648
    ctx->pc = 0x232be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953400));
label_232be4:
    // 0x232be4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x232be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232be8:
    // 0x232be8: 0x320f809  jalr        $t9
label_232bec:
    if (ctx->pc == 0x232BECu) {
        ctx->pc = 0x232BECu;
            // 0x232bec: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x232BF0u;
        goto label_232bf0;
    }
    ctx->pc = 0x232BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232BF0u);
        ctx->pc = 0x232BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BE8u;
            // 0x232bec: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232BF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232BF0u; }
            if (ctx->pc != 0x232BF0u) { return; }
        }
        }
    }
    ctx->pc = 0x232BF0u;
label_232bf0:
    // 0x232bf0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x232bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_232bf4:
    // 0x232bf4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_232bf8:
    if (ctx->pc == 0x232BF8u) {
        ctx->pc = 0x232BF8u;
            // 0x232bf8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232BFCu;
        goto label_232bfc;
    }
    ctx->pc = 0x232BF4u;
    {
        const bool branch_taken_0x232bf4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x232BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BF4u;
            // 0x232bf8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bf4) {
            ctx->pc = 0x232C40u;
            goto label_232c40;
        }
    }
    ctx->pc = 0x232BFCu;
label_232bfc:
    // 0x232bfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x232bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232c00:
    // 0x232c00: 0x8e2200ec  lw          $v0, 0xEC($s1)
    ctx->pc = 0x232c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_232c04:
    // 0x232c04: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232c08:
    // 0x232c08: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232c0c:
    // 0x232c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232c10:
    // 0x232c10: 0x24a5c9c8  addiu       $a1, $a1, -0x3638
    ctx->pc = 0x232c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953416));
label_232c14:
    // 0x232c14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x232c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_232c18:
    // 0x232c18: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x232c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232c1c:
    // 0x232c1c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x232c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_232c20:
    // 0x232c20: 0x320f809  jalr        $t9
label_232c24:
    if (ctx->pc == 0x232C24u) {
        ctx->pc = 0x232C24u;
            // 0x232c24: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x232C28u;
        goto label_232c28;
    }
    ctx->pc = 0x232C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232C28u);
        ctx->pc = 0x232C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C20u;
            // 0x232c24: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232C28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232C28u; }
            if (ctx->pc != 0x232C28u) { return; }
        }
        }
    }
    ctx->pc = 0x232C28u;
label_232c28:
    // 0x232c28: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x232c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_232c2c:
    // 0x232c2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x232c2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_232c30:
    // 0x232c30: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x232c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_232c34:
    // 0x232c34: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_232c38:
    if (ctx->pc == 0x232C38u) {
        ctx->pc = 0x232C38u;
            // 0x232c38: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x232C3Cu;
        goto label_232c3c;
    }
    ctx->pc = 0x232C34u;
    {
        const bool branch_taken_0x232c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C34u;
            // 0x232c38: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c34) {
            ctx->pc = 0x232C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232c00;
        }
    }
    ctx->pc = 0x232C3Cu;
label_232c3c:
    // 0x232c3c: 0x0  nop
    ctx->pc = 0x232c3cu;
    // NOP
label_232c40:
    // 0x232c40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232c44:
    // 0x232c44: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232c48:
    // 0x232c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232c4c:
    // 0x232c4c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x232c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_232c50:
    // 0x232c50: 0x320f809  jalr        $t9
label_232c54:
    if (ctx->pc == 0x232C54u) {
        ctx->pc = 0x232C54u;
            // 0x232c54: 0x24a5c9d8  addiu       $a1, $a1, -0x3628 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953432));
        ctx->pc = 0x232C58u;
        goto label_232c58;
    }
    ctx->pc = 0x232C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232C58u);
        ctx->pc = 0x232C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C50u;
            // 0x232c54: 0x24a5c9d8  addiu       $a1, $a1, -0x3628 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232C58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232C58u; }
            if (ctx->pc != 0x232C58u) { return; }
        }
        }
    }
    ctx->pc = 0x232C58u;
label_232c58:
    // 0x232c58: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232c5c:
    // 0x232c5c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232c60:
    // 0x232c60: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x232c60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_232c64:
    // 0x232c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232c68:
    // 0x232c68: 0x24a5c9e8  addiu       $a1, $a1, -0x3618
    ctx->pc = 0x232c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953448));
label_232c6c:
    // 0x232c6c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x232c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_232c70:
    // 0x232c70: 0x320f809  jalr        $t9
label_232c74:
    if (ctx->pc == 0x232C74u) {
        ctx->pc = 0x232C74u;
            // 0x232c74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x232C78u;
        goto label_232c78;
    }
    ctx->pc = 0x232C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232C78u);
        ctx->pc = 0x232C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C70u;
            // 0x232c74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232C78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232C78u; }
            if (ctx->pc != 0x232C78u) { return; }
        }
        }
    }
    ctx->pc = 0x232C78u;
label_232c78:
    // 0x232c78: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x232c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_232c7c:
    // 0x232c7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x232c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_232c80:
    // 0x232c80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x232c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_232c84:
    // 0x232c84: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_232c88:
    if (ctx->pc == 0x232C88u) {
        ctx->pc = 0x232C88u;
            // 0x232c88: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x232C8Cu;
        goto label_232c8c;
    }
    ctx->pc = 0x232C84u;
    {
        const bool branch_taken_0x232c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232c84) {
            ctx->pc = 0x232C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232C84u;
            // 0x232c88: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232CC4u;
            goto label_232cc4;
        }
    }
    ctx->pc = 0x232C8Cu;
label_232c8c:
    // 0x232c8c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232c90:
    // 0x232c90: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x232c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_232c94:
    // 0x232c94: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x232c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_232c98:
    // 0x232c98: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x232c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_232c9c:
    // 0x232c9c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232ca0:
    // 0x232ca0: 0x8e270040  lw          $a3, 0x40($s1)
    ctx->pc = 0x232ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_232ca4:
    // 0x232ca4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232ca8:
    // 0x232ca8: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x232ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_232cac:
    // 0x232cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232cb0:
    // 0x232cb0: 0x24a5c9f8  addiu       $a1, $a1, -0x3608
    ctx->pc = 0x232cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953464));
label_232cb4:
    // 0x232cb4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x232cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_232cb8:
    // 0x232cb8: 0x320f809  jalr        $t9
label_232cbc:
    if (ctx->pc == 0x232CBCu) {
        ctx->pc = 0x232CBCu;
            // 0x232cbc: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x232CC0u;
        goto label_232cc0;
    }
    ctx->pc = 0x232CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232CC0u);
        ctx->pc = 0x232CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232CB8u;
            // 0x232cbc: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232CC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232CC0u; }
            if (ctx->pc != 0x232CC0u) { return; }
        }
        }
    }
    ctx->pc = 0x232CC0u;
label_232cc0:
    // 0x232cc0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232cc4:
    // 0x232cc4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232cc8:
    // 0x232cc8: 0x8e27004c  lw          $a3, 0x4C($s1)
    ctx->pc = 0x232cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_232ccc:
    // 0x232ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232cd0:
    // 0x232cd0: 0x24a5ca08  addiu       $a1, $a1, -0x35F8
    ctx->pc = 0x232cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953480));
label_232cd4:
    // 0x232cd4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x232cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_232cd8:
    // 0x232cd8: 0x320f809  jalr        $t9
label_232cdc:
    if (ctx->pc == 0x232CDCu) {
        ctx->pc = 0x232CDCu;
            // 0x232cdc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x232CE0u;
        goto label_232ce0;
    }
    ctx->pc = 0x232CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232CE0u);
        ctx->pc = 0x232CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232CD8u;
            // 0x232cdc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232CE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232CE0u; }
            if (ctx->pc != 0x232CE0u) { return; }
        }
        }
    }
    ctx->pc = 0x232CE0u;
label_232ce0:
    // 0x232ce0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232ce4:
    // 0x232ce4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232ce8:
    // 0x232ce8: 0x8e27007c  lw          $a3, 0x7C($s1)
    ctx->pc = 0x232ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_232cec:
    // 0x232cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232cf0:
    // 0x232cf0: 0x24a5ca18  addiu       $a1, $a1, -0x35E8
    ctx->pc = 0x232cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953496));
label_232cf4:
    // 0x232cf4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x232cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232cf8:
    // 0x232cf8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232cfc:
    // 0x232cfc: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x232cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_232d00:
    // 0x232d00: 0x320f809  jalr        $t9
label_232d04:
    if (ctx->pc == 0x232D04u) {
        ctx->pc = 0x232D04u;
            // 0x232d04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232D08u;
        goto label_232d08;
    }
    ctx->pc = 0x232D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232D08u);
        ctx->pc = 0x232D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232D00u;
            // 0x232d04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232D08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232D08u; }
            if (ctx->pc != 0x232D08u) { return; }
        }
        }
    }
    ctx->pc = 0x232D08u;
label_232d08:
    // 0x232d08: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232d0c:
    // 0x232d0c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232d10:
    // 0x232d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232d14:
    // 0x232d14: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x232d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_232d18:
    // 0x232d18: 0x320f809  jalr        $t9
label_232d1c:
    if (ctx->pc == 0x232D1Cu) {
        ctx->pc = 0x232D1Cu;
            // 0x232d1c: 0x24a5ca18  addiu       $a1, $a1, -0x35E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953496));
        ctx->pc = 0x232D20u;
        goto label_232d20;
    }
    ctx->pc = 0x232D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232D20u);
        ctx->pc = 0x232D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232D18u;
            // 0x232d1c: 0x24a5ca18  addiu       $a1, $a1, -0x35E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953496));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232D20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232D20u; }
            if (ctx->pc != 0x232D20u) { return; }
        }
        }
    }
    ctx->pc = 0x232D20u;
label_232d20:
    // 0x232d20: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x232d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_232d24:
    // 0x232d24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x232d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_232d28:
    // 0x232d28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x232d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_232d2c:
    // 0x232d2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x232d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_232d30:
    // 0x232d30: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_232d34:
    if (ctx->pc == 0x232D34u) {
        ctx->pc = 0x232D34u;
            // 0x232d34: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x232D38u;
        goto label_232d38;
    }
    ctx->pc = 0x232D30u;
    {
        const bool branch_taken_0x232d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232d30) {
            ctx->pc = 0x232D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232D30u;
            // 0x232d34: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232D80u;
            goto label_232d80;
        }
    }
    ctx->pc = 0x232D38u;
label_232d38:
    // 0x232d38: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x232d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_232d3c:
    // 0x232d3c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232d40:
    // 0x232d40: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x232d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_232d44:
    // 0x232d44: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x232d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_232d48:
    // 0x232d48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x232d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_232d4c:
    // 0x232d4c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x232d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_232d50:
    // 0x232d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232d54:
    // 0x232d54: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232d58:
    // 0x232d58: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x232d58u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_232d5c:
    // 0x232d5c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x232d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_232d60:
    // 0x232d60: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x232d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_232d64:
    // 0x232d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232d68:
    // 0x232d68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x232d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_232d6c:
    // 0x232d6c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232d70:
    // 0x232d70: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x232d70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_232d74:
    // 0x232d74: 0x320f809  jalr        $t9
label_232d78:
    if (ctx->pc == 0x232D78u) {
        ctx->pc = 0x232D78u;
            // 0x232d78: 0x24a5ca20  addiu       $a1, $a1, -0x35E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953504));
        ctx->pc = 0x232D7Cu;
        goto label_232d7c;
    }
    ctx->pc = 0x232D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232D7Cu);
        ctx->pc = 0x232D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232D74u;
            // 0x232d78: 0x24a5ca20  addiu       $a1, $a1, -0x35E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953504));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232D7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232D7Cu; }
            if (ctx->pc != 0x232D7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x232D7Cu;
label_232d7c:
    // 0x232d7c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232d80:
    // 0x232d80: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x232d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_232d84:
    // 0x232d84: 0x320f809  jalr        $t9
label_232d88:
    if (ctx->pc == 0x232D88u) {
        ctx->pc = 0x232D88u;
            // 0x232d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232D8Cu;
        goto label_232d8c;
    }
    ctx->pc = 0x232D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232D8Cu);
        ctx->pc = 0x232D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232D84u;
            // 0x232d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232D8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232D8Cu; }
            if (ctx->pc != 0x232D8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x232D8Cu;
label_232d8c:
    // 0x232d8c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232d90:
    // 0x232d90: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232d94:
    // 0x232d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232d98:
    // 0x232d98: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x232d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_232d9c:
    // 0x232d9c: 0x320f809  jalr        $t9
label_232da0:
    if (ctx->pc == 0x232DA0u) {
        ctx->pc = 0x232DA0u;
            // 0x232da0: 0x24a5ca30  addiu       $a1, $a1, -0x35D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953520));
        ctx->pc = 0x232DA4u;
        goto label_232da4;
    }
    ctx->pc = 0x232D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232DA4u);
        ctx->pc = 0x232DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232D9Cu;
            // 0x232da0: 0x24a5ca30  addiu       $a1, $a1, -0x35D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953520));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232DA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232DA4u; }
            if (ctx->pc != 0x232DA4u) { return; }
        }
        }
    }
    ctx->pc = 0x232DA4u;
label_232da4:
    // 0x232da4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232da8:
    // 0x232da8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232dac:
    // 0x232dac: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x232dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_232db0:
    // 0x232db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232db4:
    // 0x232db4: 0x24a5ca38  addiu       $a1, $a1, -0x35C8
    ctx->pc = 0x232db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953528));
label_232db8:
    // 0x232db8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x232db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_232dbc:
    // 0x232dbc: 0x320f809  jalr        $t9
label_232dc0:
    if (ctx->pc == 0x232DC0u) {
        ctx->pc = 0x232DC0u;
            // 0x232dc0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x232DC4u;
        goto label_232dc4;
    }
    ctx->pc = 0x232DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232DC4u);
        ctx->pc = 0x232DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232DBCu;
            // 0x232dc0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232DC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232DC4u; }
            if (ctx->pc != 0x232DC4u) { return; }
        }
        }
    }
    ctx->pc = 0x232DC4u;
label_232dc4:
    // 0x232dc4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232dc8:
    // 0x232dc8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232dcc:
    // 0x232dcc: 0x8e270058  lw          $a3, 0x58($s1)
    ctx->pc = 0x232dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_232dd0:
    // 0x232dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232dd4:
    // 0x232dd4: 0x24a5ca48  addiu       $a1, $a1, -0x35B8
    ctx->pc = 0x232dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953544));
label_232dd8:
    // 0x232dd8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x232dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232ddc:
    // 0x232ddc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232ddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232de0:
    // 0x232de0: 0x24080104  addiu       $t0, $zero, 0x104
    ctx->pc = 0x232de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_232de4:
    // 0x232de4: 0x320f809  jalr        $t9
label_232de8:
    if (ctx->pc == 0x232DE8u) {
        ctx->pc = 0x232DE8u;
            // 0x232de8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232DECu;
        goto label_232dec;
    }
    ctx->pc = 0x232DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232DECu);
        ctx->pc = 0x232DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232DE4u;
            // 0x232de8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232DECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232DECu; }
            if (ctx->pc != 0x232DECu) { return; }
        }
        }
    }
    ctx->pc = 0x232DECu;
label_232dec:
    // 0x232dec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232df0:
    // 0x232df0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232df4:
    // 0x232df4: 0x8e270060  lw          $a3, 0x60($s1)
    ctx->pc = 0x232df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_232df8:
    // 0x232df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232dfc:
    // 0x232dfc: 0x24a5ca48  addiu       $a1, $a1, -0x35B8
    ctx->pc = 0x232dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953544));
label_232e00:
    // 0x232e00: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x232e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232e04:
    // 0x232e04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232e08:
    // 0x232e08: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x232e08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_232e0c:
    // 0x232e0c: 0x320f809  jalr        $t9
label_232e10:
    if (ctx->pc == 0x232E10u) {
        ctx->pc = 0x232E10u;
            // 0x232e10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232E14u;
        goto label_232e14;
    }
    ctx->pc = 0x232E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232E14u);
        ctx->pc = 0x232E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E0Cu;
            // 0x232e10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232E14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232E14u; }
            if (ctx->pc != 0x232E14u) { return; }
        }
        }
    }
    ctx->pc = 0x232E14u;
label_232e14:
    // 0x232e14: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232e18:
    // 0x232e18: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232e1c:
    // 0x232e1c: 0x8e27005c  lw          $a3, 0x5C($s1)
    ctx->pc = 0x232e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_232e20:
    // 0x232e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232e24:
    // 0x232e24: 0x24a5ca48  addiu       $a1, $a1, -0x35B8
    ctx->pc = 0x232e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953544));
label_232e28:
    // 0x232e28: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x232e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232e2c:
    // 0x232e2c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232e30:
    // 0x232e30: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x232e30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_232e34:
    // 0x232e34: 0x320f809  jalr        $t9
label_232e38:
    if (ctx->pc == 0x232E38u) {
        ctx->pc = 0x232E38u;
            // 0x232e38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232E3Cu;
        goto label_232e3c;
    }
    ctx->pc = 0x232E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232E3Cu);
        ctx->pc = 0x232E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E34u;
            // 0x232e38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232E3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232E3Cu; }
            if (ctx->pc != 0x232E3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x232E3Cu;
label_232e3c:
    // 0x232e3c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232e40:
    // 0x232e40: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232e44:
    // 0x232e44: 0x8e270064  lw          $a3, 0x64($s1)
    ctx->pc = 0x232e44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_232e48:
    // 0x232e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232e4c:
    // 0x232e4c: 0x24a5ca48  addiu       $a1, $a1, -0x35B8
    ctx->pc = 0x232e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953544));
label_232e50:
    // 0x232e50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x232e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232e54:
    // 0x232e54: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232e58:
    // 0x232e58: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x232e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_232e5c:
    // 0x232e5c: 0x320f809  jalr        $t9
label_232e60:
    if (ctx->pc == 0x232E60u) {
        ctx->pc = 0x232E60u;
            // 0x232e60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232E64u;
        goto label_232e64;
    }
    ctx->pc = 0x232E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232E64u);
        ctx->pc = 0x232E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E5Cu;
            // 0x232e60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232E64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232E64u; }
            if (ctx->pc != 0x232E64u) { return; }
        }
        }
    }
    ctx->pc = 0x232E64u;
label_232e64:
    // 0x232e64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232e68:
    // 0x232e68: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232e6c:
    // 0x232e6c: 0x8e27006c  lw          $a3, 0x6C($s1)
    ctx->pc = 0x232e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_232e70:
    // 0x232e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232e74:
    // 0x232e74: 0x24a5ca58  addiu       $a1, $a1, -0x35A8
    ctx->pc = 0x232e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953560));
label_232e78:
    // 0x232e78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x232e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232e7c:
    // 0x232e7c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232e80:
    // 0x232e80: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_232e84:
    // 0x232e84: 0x320f809  jalr        $t9
label_232e88:
    if (ctx->pc == 0x232E88u) {
        ctx->pc = 0x232E88u;
            // 0x232e88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232E8Cu;
        goto label_232e8c;
    }
    ctx->pc = 0x232E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232E8Cu);
        ctx->pc = 0x232E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E84u;
            // 0x232e88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232E8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232E8Cu; }
            if (ctx->pc != 0x232E8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x232E8Cu;
label_232e8c:
    // 0x232e8c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232e90:
    // 0x232e90: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232e94:
    // 0x232e94: 0x8e270070  lw          $a3, 0x70($s1)
    ctx->pc = 0x232e94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_232e98:
    // 0x232e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232e9c:
    // 0x232e9c: 0x24a5ca68  addiu       $a1, $a1, -0x3598
    ctx->pc = 0x232e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953576));
label_232ea0:
    // 0x232ea0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x232ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_232ea4:
    // 0x232ea4: 0x320f809  jalr        $t9
label_232ea8:
    if (ctx->pc == 0x232EA8u) {
        ctx->pc = 0x232EA8u;
            // 0x232ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x232EACu;
        goto label_232eac;
    }
    ctx->pc = 0x232EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232EACu);
        ctx->pc = 0x232EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232EA4u;
            // 0x232ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232EACu; }
            if (ctx->pc != 0x232EACu) { return; }
        }
        }
    }
    ctx->pc = 0x232EACu;
label_232eac:
    // 0x232eac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232eb0:
    // 0x232eb0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232eb4:
    // 0x232eb4: 0x8e270074  lw          $a3, 0x74($s1)
    ctx->pc = 0x232eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_232eb8:
    // 0x232eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232ebc:
    // 0x232ebc: 0x24a5ca70  addiu       $a1, $a1, -0x3590
    ctx->pc = 0x232ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953584));
label_232ec0:
    // 0x232ec0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x232ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_232ec4:
    // 0x232ec4: 0x320f809  jalr        $t9
label_232ec8:
    if (ctx->pc == 0x232EC8u) {
        ctx->pc = 0x232EC8u;
            // 0x232ec8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x232ECCu;
        goto label_232ecc;
    }
    ctx->pc = 0x232EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232ECCu);
        ctx->pc = 0x232EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232EC4u;
            // 0x232ec8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232ECCu; }
            if (ctx->pc != 0x232ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x232ECCu;
label_232ecc:
    // 0x232ecc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232ed0:
    // 0x232ed0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x232ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_232ed4:
    // 0x232ed4: 0x320f809  jalr        $t9
label_232ed8:
    if (ctx->pc == 0x232ED8u) {
        ctx->pc = 0x232ED8u;
            // 0x232ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232EDCu;
        goto label_232edc;
    }
    ctx->pc = 0x232ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232EDCu);
        ctx->pc = 0x232ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232ED4u;
            // 0x232ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232EDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232EDCu; }
            if (ctx->pc != 0x232EDCu) { return; }
        }
        }
    }
    ctx->pc = 0x232EDCu;
label_232edc:
    // 0x232edc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232ee0:
    // 0x232ee0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x232ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_232ee4:
    // 0x232ee4: 0x320f809  jalr        $t9
label_232ee8:
    if (ctx->pc == 0x232EE8u) {
        ctx->pc = 0x232EE8u;
            // 0x232ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232EECu;
        goto label_232eec;
    }
    ctx->pc = 0x232EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232EECu);
        ctx->pc = 0x232EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232EE4u;
            // 0x232ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232EECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232EECu; }
            if (ctx->pc != 0x232EECu) { return; }
        }
        }
    }
    ctx->pc = 0x232EECu;
label_232eec:
    // 0x232eec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232ef0:
    // 0x232ef0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232ef4:
    // 0x232ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232ef8:
    // 0x232ef8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x232ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_232efc:
    // 0x232efc: 0x320f809  jalr        $t9
label_232f00:
    if (ctx->pc == 0x232F00u) {
        ctx->pc = 0x232F00u;
            // 0x232f00: 0x24a5ca80  addiu       $a1, $a1, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
        ctx->pc = 0x232F04u;
        goto label_232f04;
    }
    ctx->pc = 0x232EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232F04u);
        ctx->pc = 0x232F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232EFCu;
            // 0x232f00: 0x24a5ca80  addiu       $a1, $a1, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232F04u; }
            if (ctx->pc != 0x232F04u) { return; }
        }
        }
    }
    ctx->pc = 0x232F04u;
label_232f04:
    // 0x232f04: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x232f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_232f08:
    // 0x232f08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x232f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_232f0c:
    // 0x232f0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x232f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_232f10:
    // 0x232f10: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_232f14:
    if (ctx->pc == 0x232F14u) {
        ctx->pc = 0x232F14u;
            // 0x232f14: 0x8e230118  lw          $v1, 0x118($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
        ctx->pc = 0x232F18u;
        goto label_232f18;
    }
    ctx->pc = 0x232F10u;
    {
        const bool branch_taken_0x232f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232f10) {
            ctx->pc = 0x232F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232F10u;
            // 0x232f14: 0x8e230118  lw          $v1, 0x118($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232F50u;
            goto label_232f50;
        }
    }
    ctx->pc = 0x232F18u;
label_232f18:
    // 0x232f18: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232f1c:
    // 0x232f1c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x232f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_232f20:
    // 0x232f20: 0x8e230108  lw          $v1, 0x108($s1)
    ctx->pc = 0x232f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_232f24:
    // 0x232f24: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x232f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_232f28:
    // 0x232f28: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232f2c:
    // 0x232f2c: 0x8e270104  lw          $a3, 0x104($s1)
    ctx->pc = 0x232f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_232f30:
    // 0x232f30: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232f34:
    // 0x232f34: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x232f34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_232f38:
    // 0x232f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232f3c:
    // 0x232f3c: 0x24a5ca90  addiu       $a1, $a1, -0x3570
    ctx->pc = 0x232f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953616));
label_232f40:
    // 0x232f40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x232f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232f44:
    // 0x232f44: 0x320f809  jalr        $t9
label_232f48:
    if (ctx->pc == 0x232F48u) {
        ctx->pc = 0x232F48u;
            // 0x232f48: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x232F4Cu;
        goto label_232f4c;
    }
    ctx->pc = 0x232F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232F4Cu);
        ctx->pc = 0x232F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232F44u;
            // 0x232f48: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232F4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232F4Cu; }
            if (ctx->pc != 0x232F4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x232F4Cu;
label_232f4c:
    // 0x232f4c: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x232f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_232f50:
    // 0x232f50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x232f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_232f54:
    // 0x232f54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x232f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_232f58:
    // 0x232f58: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_232f5c:
    if (ctx->pc == 0x232F5Cu) {
        ctx->pc = 0x232F5Cu;
            // 0x232f5c: 0x8e230124  lw          $v1, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->pc = 0x232F60u;
        goto label_232f60;
    }
    ctx->pc = 0x232F58u;
    {
        const bool branch_taken_0x232f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232f58) {
            ctx->pc = 0x232F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232F58u;
            // 0x232f5c: 0x8e230124  lw          $v1, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232F98u;
            goto label_232f98;
        }
    }
    ctx->pc = 0x232F60u;
label_232f60:
    // 0x232f60: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232f64:
    // 0x232f64: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x232f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_232f68:
    // 0x232f68: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x232f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_232f6c:
    // 0x232f6c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x232f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_232f70:
    // 0x232f70: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232f74:
    // 0x232f74: 0x8e270110  lw          $a3, 0x110($s1)
    ctx->pc = 0x232f74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_232f78:
    // 0x232f78: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232f7c:
    // 0x232f7c: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x232f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_232f80:
    // 0x232f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232f84:
    // 0x232f84: 0x24a5caa0  addiu       $a1, $a1, -0x3560
    ctx->pc = 0x232f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953632));
label_232f88:
    // 0x232f88: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x232f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232f8c:
    // 0x232f8c: 0x320f809  jalr        $t9
label_232f90:
    if (ctx->pc == 0x232F90u) {
        ctx->pc = 0x232F90u;
            // 0x232f90: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x232F94u;
        goto label_232f94;
    }
    ctx->pc = 0x232F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232F94u);
        ctx->pc = 0x232F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232F8Cu;
            // 0x232f90: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232F94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232F94u; }
            if (ctx->pc != 0x232F94u) { return; }
        }
        }
    }
    ctx->pc = 0x232F94u;
label_232f94:
    // 0x232f94: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x232f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_232f98:
    // 0x232f98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x232f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_232f9c:
    // 0x232f9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x232f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_232fa0:
    // 0x232fa0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_232fa4:
    if (ctx->pc == 0x232FA4u) {
        ctx->pc = 0x232FA4u;
            // 0x232fa4: 0x8e230130  lw          $v1, 0x130($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
        ctx->pc = 0x232FA8u;
        goto label_232fa8;
    }
    ctx->pc = 0x232FA0u;
    {
        const bool branch_taken_0x232fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232fa0) {
            ctx->pc = 0x232FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232FA0u;
            // 0x232fa4: 0x8e230130  lw          $v1, 0x130($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232FE0u;
            goto label_232fe0;
        }
    }
    ctx->pc = 0x232FA8u;
label_232fa8:
    // 0x232fa8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232fac:
    // 0x232fac: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x232facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_232fb0:
    // 0x232fb0: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x232fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_232fb4:
    // 0x232fb4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x232fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_232fb8:
    // 0x232fb8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x232fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_232fbc:
    // 0x232fbc: 0x8e27011c  lw          $a3, 0x11C($s1)
    ctx->pc = 0x232fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_232fc0:
    // 0x232fc0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232fc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232fc4:
    // 0x232fc4: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x232fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_232fc8:
    // 0x232fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232fcc:
    // 0x232fcc: 0x24a5cab0  addiu       $a1, $a1, -0x3550
    ctx->pc = 0x232fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953648));
label_232fd0:
    // 0x232fd0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x232fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232fd4:
    // 0x232fd4: 0x320f809  jalr        $t9
label_232fd8:
    if (ctx->pc == 0x232FD8u) {
        ctx->pc = 0x232FD8u;
            // 0x232fd8: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x232FDCu;
        goto label_232fdc;
    }
    ctx->pc = 0x232FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232FDCu);
        ctx->pc = 0x232FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232FD4u;
            // 0x232fd8: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232FDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232FDCu; }
            if (ctx->pc != 0x232FDCu) { return; }
        }
        }
    }
    ctx->pc = 0x232FDCu;
label_232fdc:
    // 0x232fdc: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x232fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_232fe0:
    // 0x232fe0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x232fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_232fe4:
    // 0x232fe4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x232fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_232fe8:
    // 0x232fe8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_232fec:
    if (ctx->pc == 0x232FECu) {
        ctx->pc = 0x232FECu;
            // 0x232fec: 0x8e23013c  lw          $v1, 0x13C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
        ctx->pc = 0x232FF0u;
        goto label_232ff0;
    }
    ctx->pc = 0x232FE8u;
    {
        const bool branch_taken_0x232fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232fe8) {
            ctx->pc = 0x232FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232FE8u;
            // 0x232fec: 0x8e23013c  lw          $v1, 0x13C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233028u;
            goto label_233028;
        }
    }
    ctx->pc = 0x232FF0u;
label_232ff0:
    // 0x232ff0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x232ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232ff4:
    // 0x232ff4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x232ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_232ff8:
    // 0x232ff8: 0x8e23012c  lw          $v1, 0x12C($s1)
    ctx->pc = 0x232ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_232ffc:
    // 0x232ffc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x232ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_233000:
    // 0x233000: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x233000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_233004:
    // 0x233004: 0x8e270128  lw          $a3, 0x128($s1)
    ctx->pc = 0x233004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_233008:
    // 0x233008: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x233008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23300c:
    // 0x23300c: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x23300cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_233010:
    // 0x233010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233014:
    // 0x233014: 0x24a5cac0  addiu       $a1, $a1, -0x3540
    ctx->pc = 0x233014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953664));
label_233018:
    // 0x233018: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x233018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23301c:
    // 0x23301c: 0x320f809  jalr        $t9
label_233020:
    if (ctx->pc == 0x233020u) {
        ctx->pc = 0x233020u;
            // 0x233020: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x233024u;
        goto label_233024;
    }
    ctx->pc = 0x23301Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233024u);
        ctx->pc = 0x233020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23301Cu;
            // 0x233020: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233024u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233024u; }
            if (ctx->pc != 0x233024u) { return; }
        }
        }
    }
    ctx->pc = 0x233024u;
label_233024:
    // 0x233024: 0x8e23013c  lw          $v1, 0x13C($s1)
    ctx->pc = 0x233024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_233028:
    // 0x233028: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x233028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23302c:
    // 0x23302c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23302cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_233030:
    // 0x233030: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_233034:
    if (ctx->pc == 0x233034u) {
        ctx->pc = 0x233034u;
            // 0x233034: 0x8e230148  lw          $v1, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->pc = 0x233038u;
        goto label_233038;
    }
    ctx->pc = 0x233030u;
    {
        const bool branch_taken_0x233030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233030) {
            ctx->pc = 0x233034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233030u;
            // 0x233034: 0x8e230148  lw          $v1, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233070u;
            goto label_233070;
        }
    }
    ctx->pc = 0x233038u;
label_233038:
    // 0x233038: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x233038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23303c:
    // 0x23303c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_233040:
    // 0x233040: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x233040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_233044:
    // 0x233044: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x233044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_233048:
    // 0x233048: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x233048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_23304c:
    // 0x23304c: 0x8e270134  lw          $a3, 0x134($s1)
    ctx->pc = 0x23304cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_233050:
    // 0x233050: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x233050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_233054:
    // 0x233054: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x233054u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_233058:
    // 0x233058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23305c:
    // 0x23305c: 0x24a5cad0  addiu       $a1, $a1, -0x3530
    ctx->pc = 0x23305cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953680));
label_233060:
    // 0x233060: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x233060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_233064:
    // 0x233064: 0x320f809  jalr        $t9
label_233068:
    if (ctx->pc == 0x233068u) {
        ctx->pc = 0x233068u;
            // 0x233068: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23306Cu;
        goto label_23306c;
    }
    ctx->pc = 0x233064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23306Cu);
        ctx->pc = 0x233068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233064u;
            // 0x233068: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23306Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23306Cu; }
            if (ctx->pc != 0x23306Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23306Cu;
label_23306c:
    // 0x23306c: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x23306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_233070:
    // 0x233070: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x233070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_233074:
    // 0x233074: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x233074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_233078:
    // 0x233078: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_23307c:
    if (ctx->pc == 0x23307Cu) {
        ctx->pc = 0x23307Cu;
            // 0x23307c: 0x8e230154  lw          $v1, 0x154($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
        ctx->pc = 0x233080u;
        goto label_233080;
    }
    ctx->pc = 0x233078u;
    {
        const bool branch_taken_0x233078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233078) {
            ctx->pc = 0x23307Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233078u;
            // 0x23307c: 0x8e230154  lw          $v1, 0x154($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2330B8u;
            goto label_2330b8;
        }
    }
    ctx->pc = 0x233080u;
label_233080:
    // 0x233080: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x233080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_233084:
    // 0x233084: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x233084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_233088:
    // 0x233088: 0x8e230144  lw          $v1, 0x144($s1)
    ctx->pc = 0x233088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_23308c:
    // 0x23308c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23308cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_233090:
    // 0x233090: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x233090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_233094:
    // 0x233094: 0x8e270140  lw          $a3, 0x140($s1)
    ctx->pc = 0x233094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_233098:
    // 0x233098: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x233098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23309c:
    // 0x23309c: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x23309cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2330a0:
    // 0x2330a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2330a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2330a4:
    // 0x2330a4: 0x24a5cae0  addiu       $a1, $a1, -0x3520
    ctx->pc = 0x2330a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953696));
label_2330a8:
    // 0x2330a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2330a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2330ac:
    // 0x2330ac: 0x320f809  jalr        $t9
label_2330b0:
    if (ctx->pc == 0x2330B0u) {
        ctx->pc = 0x2330B0u;
            // 0x2330b0: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x2330B4u;
        goto label_2330b4;
    }
    ctx->pc = 0x2330ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2330B4u);
        ctx->pc = 0x2330B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2330ACu;
            // 0x2330b0: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2330B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2330B4u; }
            if (ctx->pc != 0x2330B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2330B4u;
label_2330b4:
    // 0x2330b4: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x2330b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_2330b8:
    // 0x2330b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2330b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2330bc:
    // 0x2330bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2330bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2330c0:
    // 0x2330c0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2330c4:
    if (ctx->pc == 0x2330C4u) {
        ctx->pc = 0x2330C4u;
            // 0x2330c4: 0x8e230160  lw          $v1, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->pc = 0x2330C8u;
        goto label_2330c8;
    }
    ctx->pc = 0x2330C0u;
    {
        const bool branch_taken_0x2330c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2330c0) {
            ctx->pc = 0x2330C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2330C0u;
            // 0x2330c4: 0x8e230160  lw          $v1, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233100u;
            goto label_233100;
        }
    }
    ctx->pc = 0x2330C8u;
label_2330c8:
    // 0x2330c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2330c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2330cc:
    // 0x2330cc: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2330ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2330d0:
    // 0x2330d0: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2330d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2330d4:
    // 0x2330d4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2330d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2330d8:
    // 0x2330d8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2330d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2330dc:
    // 0x2330dc: 0x8e27014c  lw          $a3, 0x14C($s1)
    ctx->pc = 0x2330dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
label_2330e0:
    // 0x2330e0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2330e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2330e4:
    // 0x2330e4: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x2330e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2330e8:
    // 0x2330e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2330e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2330ec:
    // 0x2330ec: 0x24a5caf0  addiu       $a1, $a1, -0x3510
    ctx->pc = 0x2330ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953712));
label_2330f0:
    // 0x2330f0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2330f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2330f4:
    // 0x2330f4: 0x320f809  jalr        $t9
label_2330f8:
    if (ctx->pc == 0x2330F8u) {
        ctx->pc = 0x2330F8u;
            // 0x2330f8: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x2330FCu;
        goto label_2330fc;
    }
    ctx->pc = 0x2330F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2330FCu);
        ctx->pc = 0x2330F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2330F4u;
            // 0x2330f8: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2330FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2330FCu; }
            if (ctx->pc != 0x2330FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2330FCu;
label_2330fc:
    // 0x2330fc: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x2330fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_233100:
    // 0x233100: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x233100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_233104:
    // 0x233104: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x233104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_233108:
    // 0x233108: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_23310c:
    if (ctx->pc == 0x23310Cu) {
        ctx->pc = 0x23310Cu;
            // 0x23310c: 0x8e23016c  lw          $v1, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->pc = 0x233110u;
        goto label_233110;
    }
    ctx->pc = 0x233108u;
    {
        const bool branch_taken_0x233108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233108) {
            ctx->pc = 0x23310Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233108u;
            // 0x23310c: 0x8e23016c  lw          $v1, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233148u;
            goto label_233148;
        }
    }
    ctx->pc = 0x233110u;
label_233110:
    // 0x233110: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x233110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_233114:
    // 0x233114: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x233114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_233118:
    // 0x233118: 0x8e23015c  lw          $v1, 0x15C($s1)
    ctx->pc = 0x233118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
label_23311c:
    // 0x23311c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_233120:
    // 0x233120: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x233120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_233124:
    // 0x233124: 0x8e270158  lw          $a3, 0x158($s1)
    ctx->pc = 0x233124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_233128:
    // 0x233128: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x233128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23312c:
    // 0x23312c: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x23312cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_233130:
    // 0x233130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233134:
    // 0x233134: 0x24a5cb00  addiu       $a1, $a1, -0x3500
    ctx->pc = 0x233134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953728));
label_233138:
    // 0x233138: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x233138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23313c:
    // 0x23313c: 0x320f809  jalr        $t9
label_233140:
    if (ctx->pc == 0x233140u) {
        ctx->pc = 0x233140u;
            // 0x233140: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x233144u;
        goto label_233144;
    }
    ctx->pc = 0x23313Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233144u);
        ctx->pc = 0x233140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23313Cu;
            // 0x233140: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233144u; }
            if (ctx->pc != 0x233144u) { return; }
        }
        }
    }
    ctx->pc = 0x233144u;
label_233144:
    // 0x233144: 0x8e23016c  lw          $v1, 0x16C($s1)
    ctx->pc = 0x233144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
label_233148:
    // 0x233148: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x233148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23314c:
    // 0x23314c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23314cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_233150:
    // 0x233150: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_233154:
    if (ctx->pc == 0x233154u) {
        ctx->pc = 0x233154u;
            // 0x233154: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->pc = 0x233158u;
        goto label_233158;
    }
    ctx->pc = 0x233150u;
    {
        const bool branch_taken_0x233150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233150) {
            ctx->pc = 0x233154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233150u;
            // 0x233154: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233190u;
            goto label_233190;
        }
    }
    ctx->pc = 0x233158u;
label_233158:
    // 0x233158: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x233158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23315c:
    // 0x23315c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_233160:
    // 0x233160: 0x8e230168  lw          $v1, 0x168($s1)
    ctx->pc = 0x233160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
label_233164:
    // 0x233164: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x233164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_233168:
    // 0x233168: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x233168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_23316c:
    // 0x23316c: 0x8e270164  lw          $a3, 0x164($s1)
    ctx->pc = 0x23316cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_233170:
    // 0x233170: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x233170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_233174:
    // 0x233174: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x233174u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_233178:
    // 0x233178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23317c:
    // 0x23317c: 0x24a5caf0  addiu       $a1, $a1, -0x3510
    ctx->pc = 0x23317cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953712));
label_233180:
    // 0x233180: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x233180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_233184:
    // 0x233184: 0x320f809  jalr        $t9
label_233188:
    if (ctx->pc == 0x233188u) {
        ctx->pc = 0x233188u;
            // 0x233188: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23318Cu;
        goto label_23318c;
    }
    ctx->pc = 0x233184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23318Cu);
        ctx->pc = 0x233188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233184u;
            // 0x233188: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23318Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23318Cu; }
            if (ctx->pc != 0x23318Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23318Cu;
label_23318c:
    // 0x23318c: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x23318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_233190:
    // 0x233190: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x233190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_233194:
    // 0x233194: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x233194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_233198:
    // 0x233198: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_23319c:
    if (ctx->pc == 0x23319Cu) {
        ctx->pc = 0x23319Cu;
            // 0x23319c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2331A0u;
        goto label_2331a0;
    }
    ctx->pc = 0x233198u;
    {
        const bool branch_taken_0x233198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233198) {
            ctx->pc = 0x23319Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233198u;
            // 0x23319c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2331D8u;
            goto label_2331d8;
        }
    }
    ctx->pc = 0x2331A0u;
label_2331a0:
    // 0x2331a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2331a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2331a4:
    // 0x2331a4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2331a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2331a8:
    // 0x2331a8: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x2331a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_2331ac:
    // 0x2331ac: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2331acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2331b0:
    // 0x2331b0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2331b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2331b4:
    // 0x2331b4: 0x8e27017c  lw          $a3, 0x17C($s1)
    ctx->pc = 0x2331b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_2331b8:
    // 0x2331b8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2331b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2331bc:
    // 0x2331bc: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x2331bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2331c0:
    // 0x2331c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2331c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2331c4:
    // 0x2331c4: 0x24a5cb10  addiu       $a1, $a1, -0x34F0
    ctx->pc = 0x2331c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953744));
label_2331c8:
    // 0x2331c8: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x2331c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2331cc:
    // 0x2331cc: 0x320f809  jalr        $t9
label_2331d0:
    if (ctx->pc == 0x2331D0u) {
        ctx->pc = 0x2331D0u;
            // 0x2331d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2331D4u;
        goto label_2331d4;
    }
    ctx->pc = 0x2331CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2331D4u);
        ctx->pc = 0x2331D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2331CCu;
            // 0x2331d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2331D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2331D4u; }
            if (ctx->pc != 0x2331D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2331D4u;
label_2331d4:
    // 0x2331d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2331d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2331d8:
    // 0x2331d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2331d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2331dc:
    // 0x2331dc: 0x320f809  jalr        $t9
label_2331e0:
    if (ctx->pc == 0x2331E0u) {
        ctx->pc = 0x2331E0u;
            // 0x2331e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2331E4u;
        goto label_2331e4;
    }
    ctx->pc = 0x2331DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2331E4u);
        ctx->pc = 0x2331E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2331DCu;
            // 0x2331e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2331E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2331E4u; }
            if (ctx->pc != 0x2331E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2331E4u;
label_2331e4:
    // 0x2331e4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2331e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2331e8:
    // 0x2331e8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2331e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2331ec:
    // 0x2331ec: 0x320f809  jalr        $t9
label_2331f0:
    if (ctx->pc == 0x2331F0u) {
        ctx->pc = 0x2331F0u;
            // 0x2331f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2331F4u;
        goto label_2331f4;
    }
    ctx->pc = 0x2331ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2331F4u);
        ctx->pc = 0x2331F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2331ECu;
            // 0x2331f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2331F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2331F4u; }
            if (ctx->pc != 0x2331F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2331F4u;
label_2331f4:
    // 0x2331f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2331f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2331f8:
    // 0x2331f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2331f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2331fc:
    // 0x2331fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2331fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_233200:
    // 0x233200: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x233200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_233204:
    // 0x233204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x233204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_233208:
    // 0x233208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x233208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23320c:
    // 0x23320c: 0x3e00008  jr          $ra
label_233210:
    if (ctx->pc == 0x233210u) {
        ctx->pc = 0x233210u;
            // 0x233210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x233214u;
        goto label_233214;
    }
    ctx->pc = 0x23320Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23320Cu;
            // 0x233210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x233214u;
label_233214:
    // 0x233214: 0x0  nop
    ctx->pc = 0x233214u;
    // NOP
label_233218:
    // 0x233218: 0x0  nop
    ctx->pc = 0x233218u;
    // NOP
label_23321c:
    // 0x23321c: 0x0  nop
    ctx->pc = 0x23321cu;
    // NOP
}
