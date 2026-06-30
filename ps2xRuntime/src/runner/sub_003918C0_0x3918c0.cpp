#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003918C0
// Address: 0x3918c0 - 0x3926c0
void sub_003918C0_0x3918c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003918C0_0x3918c0");
#endif

    switch (ctx->pc) {
        case 0x3918c0u: goto label_3918c0;
        case 0x3918c4u: goto label_3918c4;
        case 0x3918c8u: goto label_3918c8;
        case 0x3918ccu: goto label_3918cc;
        case 0x3918d0u: goto label_3918d0;
        case 0x3918d4u: goto label_3918d4;
        case 0x3918d8u: goto label_3918d8;
        case 0x3918dcu: goto label_3918dc;
        case 0x3918e0u: goto label_3918e0;
        case 0x3918e4u: goto label_3918e4;
        case 0x3918e8u: goto label_3918e8;
        case 0x3918ecu: goto label_3918ec;
        case 0x3918f0u: goto label_3918f0;
        case 0x3918f4u: goto label_3918f4;
        case 0x3918f8u: goto label_3918f8;
        case 0x3918fcu: goto label_3918fc;
        case 0x391900u: goto label_391900;
        case 0x391904u: goto label_391904;
        case 0x391908u: goto label_391908;
        case 0x39190cu: goto label_39190c;
        case 0x391910u: goto label_391910;
        case 0x391914u: goto label_391914;
        case 0x391918u: goto label_391918;
        case 0x39191cu: goto label_39191c;
        case 0x391920u: goto label_391920;
        case 0x391924u: goto label_391924;
        case 0x391928u: goto label_391928;
        case 0x39192cu: goto label_39192c;
        case 0x391930u: goto label_391930;
        case 0x391934u: goto label_391934;
        case 0x391938u: goto label_391938;
        case 0x39193cu: goto label_39193c;
        case 0x391940u: goto label_391940;
        case 0x391944u: goto label_391944;
        case 0x391948u: goto label_391948;
        case 0x39194cu: goto label_39194c;
        case 0x391950u: goto label_391950;
        case 0x391954u: goto label_391954;
        case 0x391958u: goto label_391958;
        case 0x39195cu: goto label_39195c;
        case 0x391960u: goto label_391960;
        case 0x391964u: goto label_391964;
        case 0x391968u: goto label_391968;
        case 0x39196cu: goto label_39196c;
        case 0x391970u: goto label_391970;
        case 0x391974u: goto label_391974;
        case 0x391978u: goto label_391978;
        case 0x39197cu: goto label_39197c;
        case 0x391980u: goto label_391980;
        case 0x391984u: goto label_391984;
        case 0x391988u: goto label_391988;
        case 0x39198cu: goto label_39198c;
        case 0x391990u: goto label_391990;
        case 0x391994u: goto label_391994;
        case 0x391998u: goto label_391998;
        case 0x39199cu: goto label_39199c;
        case 0x3919a0u: goto label_3919a0;
        case 0x3919a4u: goto label_3919a4;
        case 0x3919a8u: goto label_3919a8;
        case 0x3919acu: goto label_3919ac;
        case 0x3919b0u: goto label_3919b0;
        case 0x3919b4u: goto label_3919b4;
        case 0x3919b8u: goto label_3919b8;
        case 0x3919bcu: goto label_3919bc;
        case 0x3919c0u: goto label_3919c0;
        case 0x3919c4u: goto label_3919c4;
        case 0x3919c8u: goto label_3919c8;
        case 0x3919ccu: goto label_3919cc;
        case 0x3919d0u: goto label_3919d0;
        case 0x3919d4u: goto label_3919d4;
        case 0x3919d8u: goto label_3919d8;
        case 0x3919dcu: goto label_3919dc;
        case 0x3919e0u: goto label_3919e0;
        case 0x3919e4u: goto label_3919e4;
        case 0x3919e8u: goto label_3919e8;
        case 0x3919ecu: goto label_3919ec;
        case 0x3919f0u: goto label_3919f0;
        case 0x3919f4u: goto label_3919f4;
        case 0x3919f8u: goto label_3919f8;
        case 0x3919fcu: goto label_3919fc;
        case 0x391a00u: goto label_391a00;
        case 0x391a04u: goto label_391a04;
        case 0x391a08u: goto label_391a08;
        case 0x391a0cu: goto label_391a0c;
        case 0x391a10u: goto label_391a10;
        case 0x391a14u: goto label_391a14;
        case 0x391a18u: goto label_391a18;
        case 0x391a1cu: goto label_391a1c;
        case 0x391a20u: goto label_391a20;
        case 0x391a24u: goto label_391a24;
        case 0x391a28u: goto label_391a28;
        case 0x391a2cu: goto label_391a2c;
        case 0x391a30u: goto label_391a30;
        case 0x391a34u: goto label_391a34;
        case 0x391a38u: goto label_391a38;
        case 0x391a3cu: goto label_391a3c;
        case 0x391a40u: goto label_391a40;
        case 0x391a44u: goto label_391a44;
        case 0x391a48u: goto label_391a48;
        case 0x391a4cu: goto label_391a4c;
        case 0x391a50u: goto label_391a50;
        case 0x391a54u: goto label_391a54;
        case 0x391a58u: goto label_391a58;
        case 0x391a5cu: goto label_391a5c;
        case 0x391a60u: goto label_391a60;
        case 0x391a64u: goto label_391a64;
        case 0x391a68u: goto label_391a68;
        case 0x391a6cu: goto label_391a6c;
        case 0x391a70u: goto label_391a70;
        case 0x391a74u: goto label_391a74;
        case 0x391a78u: goto label_391a78;
        case 0x391a7cu: goto label_391a7c;
        case 0x391a80u: goto label_391a80;
        case 0x391a84u: goto label_391a84;
        case 0x391a88u: goto label_391a88;
        case 0x391a8cu: goto label_391a8c;
        case 0x391a90u: goto label_391a90;
        case 0x391a94u: goto label_391a94;
        case 0x391a98u: goto label_391a98;
        case 0x391a9cu: goto label_391a9c;
        case 0x391aa0u: goto label_391aa0;
        case 0x391aa4u: goto label_391aa4;
        case 0x391aa8u: goto label_391aa8;
        case 0x391aacu: goto label_391aac;
        case 0x391ab0u: goto label_391ab0;
        case 0x391ab4u: goto label_391ab4;
        case 0x391ab8u: goto label_391ab8;
        case 0x391abcu: goto label_391abc;
        case 0x391ac0u: goto label_391ac0;
        case 0x391ac4u: goto label_391ac4;
        case 0x391ac8u: goto label_391ac8;
        case 0x391accu: goto label_391acc;
        case 0x391ad0u: goto label_391ad0;
        case 0x391ad4u: goto label_391ad4;
        case 0x391ad8u: goto label_391ad8;
        case 0x391adcu: goto label_391adc;
        case 0x391ae0u: goto label_391ae0;
        case 0x391ae4u: goto label_391ae4;
        case 0x391ae8u: goto label_391ae8;
        case 0x391aecu: goto label_391aec;
        case 0x391af0u: goto label_391af0;
        case 0x391af4u: goto label_391af4;
        case 0x391af8u: goto label_391af8;
        case 0x391afcu: goto label_391afc;
        case 0x391b00u: goto label_391b00;
        case 0x391b04u: goto label_391b04;
        case 0x391b08u: goto label_391b08;
        case 0x391b0cu: goto label_391b0c;
        case 0x391b10u: goto label_391b10;
        case 0x391b14u: goto label_391b14;
        case 0x391b18u: goto label_391b18;
        case 0x391b1cu: goto label_391b1c;
        case 0x391b20u: goto label_391b20;
        case 0x391b24u: goto label_391b24;
        case 0x391b28u: goto label_391b28;
        case 0x391b2cu: goto label_391b2c;
        case 0x391b30u: goto label_391b30;
        case 0x391b34u: goto label_391b34;
        case 0x391b38u: goto label_391b38;
        case 0x391b3cu: goto label_391b3c;
        case 0x391b40u: goto label_391b40;
        case 0x391b44u: goto label_391b44;
        case 0x391b48u: goto label_391b48;
        case 0x391b4cu: goto label_391b4c;
        case 0x391b50u: goto label_391b50;
        case 0x391b54u: goto label_391b54;
        case 0x391b58u: goto label_391b58;
        case 0x391b5cu: goto label_391b5c;
        case 0x391b60u: goto label_391b60;
        case 0x391b64u: goto label_391b64;
        case 0x391b68u: goto label_391b68;
        case 0x391b6cu: goto label_391b6c;
        case 0x391b70u: goto label_391b70;
        case 0x391b74u: goto label_391b74;
        case 0x391b78u: goto label_391b78;
        case 0x391b7cu: goto label_391b7c;
        case 0x391b80u: goto label_391b80;
        case 0x391b84u: goto label_391b84;
        case 0x391b88u: goto label_391b88;
        case 0x391b8cu: goto label_391b8c;
        case 0x391b90u: goto label_391b90;
        case 0x391b94u: goto label_391b94;
        case 0x391b98u: goto label_391b98;
        case 0x391b9cu: goto label_391b9c;
        case 0x391ba0u: goto label_391ba0;
        case 0x391ba4u: goto label_391ba4;
        case 0x391ba8u: goto label_391ba8;
        case 0x391bacu: goto label_391bac;
        case 0x391bb0u: goto label_391bb0;
        case 0x391bb4u: goto label_391bb4;
        case 0x391bb8u: goto label_391bb8;
        case 0x391bbcu: goto label_391bbc;
        case 0x391bc0u: goto label_391bc0;
        case 0x391bc4u: goto label_391bc4;
        case 0x391bc8u: goto label_391bc8;
        case 0x391bccu: goto label_391bcc;
        case 0x391bd0u: goto label_391bd0;
        case 0x391bd4u: goto label_391bd4;
        case 0x391bd8u: goto label_391bd8;
        case 0x391bdcu: goto label_391bdc;
        case 0x391be0u: goto label_391be0;
        case 0x391be4u: goto label_391be4;
        case 0x391be8u: goto label_391be8;
        case 0x391becu: goto label_391bec;
        case 0x391bf0u: goto label_391bf0;
        case 0x391bf4u: goto label_391bf4;
        case 0x391bf8u: goto label_391bf8;
        case 0x391bfcu: goto label_391bfc;
        case 0x391c00u: goto label_391c00;
        case 0x391c04u: goto label_391c04;
        case 0x391c08u: goto label_391c08;
        case 0x391c0cu: goto label_391c0c;
        case 0x391c10u: goto label_391c10;
        case 0x391c14u: goto label_391c14;
        case 0x391c18u: goto label_391c18;
        case 0x391c1cu: goto label_391c1c;
        case 0x391c20u: goto label_391c20;
        case 0x391c24u: goto label_391c24;
        case 0x391c28u: goto label_391c28;
        case 0x391c2cu: goto label_391c2c;
        case 0x391c30u: goto label_391c30;
        case 0x391c34u: goto label_391c34;
        case 0x391c38u: goto label_391c38;
        case 0x391c3cu: goto label_391c3c;
        case 0x391c40u: goto label_391c40;
        case 0x391c44u: goto label_391c44;
        case 0x391c48u: goto label_391c48;
        case 0x391c4cu: goto label_391c4c;
        case 0x391c50u: goto label_391c50;
        case 0x391c54u: goto label_391c54;
        case 0x391c58u: goto label_391c58;
        case 0x391c5cu: goto label_391c5c;
        case 0x391c60u: goto label_391c60;
        case 0x391c64u: goto label_391c64;
        case 0x391c68u: goto label_391c68;
        case 0x391c6cu: goto label_391c6c;
        case 0x391c70u: goto label_391c70;
        case 0x391c74u: goto label_391c74;
        case 0x391c78u: goto label_391c78;
        case 0x391c7cu: goto label_391c7c;
        case 0x391c80u: goto label_391c80;
        case 0x391c84u: goto label_391c84;
        case 0x391c88u: goto label_391c88;
        case 0x391c8cu: goto label_391c8c;
        case 0x391c90u: goto label_391c90;
        case 0x391c94u: goto label_391c94;
        case 0x391c98u: goto label_391c98;
        case 0x391c9cu: goto label_391c9c;
        case 0x391ca0u: goto label_391ca0;
        case 0x391ca4u: goto label_391ca4;
        case 0x391ca8u: goto label_391ca8;
        case 0x391cacu: goto label_391cac;
        case 0x391cb0u: goto label_391cb0;
        case 0x391cb4u: goto label_391cb4;
        case 0x391cb8u: goto label_391cb8;
        case 0x391cbcu: goto label_391cbc;
        case 0x391cc0u: goto label_391cc0;
        case 0x391cc4u: goto label_391cc4;
        case 0x391cc8u: goto label_391cc8;
        case 0x391cccu: goto label_391ccc;
        case 0x391cd0u: goto label_391cd0;
        case 0x391cd4u: goto label_391cd4;
        case 0x391cd8u: goto label_391cd8;
        case 0x391cdcu: goto label_391cdc;
        case 0x391ce0u: goto label_391ce0;
        case 0x391ce4u: goto label_391ce4;
        case 0x391ce8u: goto label_391ce8;
        case 0x391cecu: goto label_391cec;
        case 0x391cf0u: goto label_391cf0;
        case 0x391cf4u: goto label_391cf4;
        case 0x391cf8u: goto label_391cf8;
        case 0x391cfcu: goto label_391cfc;
        case 0x391d00u: goto label_391d00;
        case 0x391d04u: goto label_391d04;
        case 0x391d08u: goto label_391d08;
        case 0x391d0cu: goto label_391d0c;
        case 0x391d10u: goto label_391d10;
        case 0x391d14u: goto label_391d14;
        case 0x391d18u: goto label_391d18;
        case 0x391d1cu: goto label_391d1c;
        case 0x391d20u: goto label_391d20;
        case 0x391d24u: goto label_391d24;
        case 0x391d28u: goto label_391d28;
        case 0x391d2cu: goto label_391d2c;
        case 0x391d30u: goto label_391d30;
        case 0x391d34u: goto label_391d34;
        case 0x391d38u: goto label_391d38;
        case 0x391d3cu: goto label_391d3c;
        case 0x391d40u: goto label_391d40;
        case 0x391d44u: goto label_391d44;
        case 0x391d48u: goto label_391d48;
        case 0x391d4cu: goto label_391d4c;
        case 0x391d50u: goto label_391d50;
        case 0x391d54u: goto label_391d54;
        case 0x391d58u: goto label_391d58;
        case 0x391d5cu: goto label_391d5c;
        case 0x391d60u: goto label_391d60;
        case 0x391d64u: goto label_391d64;
        case 0x391d68u: goto label_391d68;
        case 0x391d6cu: goto label_391d6c;
        case 0x391d70u: goto label_391d70;
        case 0x391d74u: goto label_391d74;
        case 0x391d78u: goto label_391d78;
        case 0x391d7cu: goto label_391d7c;
        case 0x391d80u: goto label_391d80;
        case 0x391d84u: goto label_391d84;
        case 0x391d88u: goto label_391d88;
        case 0x391d8cu: goto label_391d8c;
        case 0x391d90u: goto label_391d90;
        case 0x391d94u: goto label_391d94;
        case 0x391d98u: goto label_391d98;
        case 0x391d9cu: goto label_391d9c;
        case 0x391da0u: goto label_391da0;
        case 0x391da4u: goto label_391da4;
        case 0x391da8u: goto label_391da8;
        case 0x391dacu: goto label_391dac;
        case 0x391db0u: goto label_391db0;
        case 0x391db4u: goto label_391db4;
        case 0x391db8u: goto label_391db8;
        case 0x391dbcu: goto label_391dbc;
        case 0x391dc0u: goto label_391dc0;
        case 0x391dc4u: goto label_391dc4;
        case 0x391dc8u: goto label_391dc8;
        case 0x391dccu: goto label_391dcc;
        case 0x391dd0u: goto label_391dd0;
        case 0x391dd4u: goto label_391dd4;
        case 0x391dd8u: goto label_391dd8;
        case 0x391ddcu: goto label_391ddc;
        case 0x391de0u: goto label_391de0;
        case 0x391de4u: goto label_391de4;
        case 0x391de8u: goto label_391de8;
        case 0x391decu: goto label_391dec;
        case 0x391df0u: goto label_391df0;
        case 0x391df4u: goto label_391df4;
        case 0x391df8u: goto label_391df8;
        case 0x391dfcu: goto label_391dfc;
        case 0x391e00u: goto label_391e00;
        case 0x391e04u: goto label_391e04;
        case 0x391e08u: goto label_391e08;
        case 0x391e0cu: goto label_391e0c;
        case 0x391e10u: goto label_391e10;
        case 0x391e14u: goto label_391e14;
        case 0x391e18u: goto label_391e18;
        case 0x391e1cu: goto label_391e1c;
        case 0x391e20u: goto label_391e20;
        case 0x391e24u: goto label_391e24;
        case 0x391e28u: goto label_391e28;
        case 0x391e2cu: goto label_391e2c;
        case 0x391e30u: goto label_391e30;
        case 0x391e34u: goto label_391e34;
        case 0x391e38u: goto label_391e38;
        case 0x391e3cu: goto label_391e3c;
        case 0x391e40u: goto label_391e40;
        case 0x391e44u: goto label_391e44;
        case 0x391e48u: goto label_391e48;
        case 0x391e4cu: goto label_391e4c;
        case 0x391e50u: goto label_391e50;
        case 0x391e54u: goto label_391e54;
        case 0x391e58u: goto label_391e58;
        case 0x391e5cu: goto label_391e5c;
        case 0x391e60u: goto label_391e60;
        case 0x391e64u: goto label_391e64;
        case 0x391e68u: goto label_391e68;
        case 0x391e6cu: goto label_391e6c;
        case 0x391e70u: goto label_391e70;
        case 0x391e74u: goto label_391e74;
        case 0x391e78u: goto label_391e78;
        case 0x391e7cu: goto label_391e7c;
        case 0x391e80u: goto label_391e80;
        case 0x391e84u: goto label_391e84;
        case 0x391e88u: goto label_391e88;
        case 0x391e8cu: goto label_391e8c;
        case 0x391e90u: goto label_391e90;
        case 0x391e94u: goto label_391e94;
        case 0x391e98u: goto label_391e98;
        case 0x391e9cu: goto label_391e9c;
        case 0x391ea0u: goto label_391ea0;
        case 0x391ea4u: goto label_391ea4;
        case 0x391ea8u: goto label_391ea8;
        case 0x391eacu: goto label_391eac;
        case 0x391eb0u: goto label_391eb0;
        case 0x391eb4u: goto label_391eb4;
        case 0x391eb8u: goto label_391eb8;
        case 0x391ebcu: goto label_391ebc;
        case 0x391ec0u: goto label_391ec0;
        case 0x391ec4u: goto label_391ec4;
        case 0x391ec8u: goto label_391ec8;
        case 0x391eccu: goto label_391ecc;
        case 0x391ed0u: goto label_391ed0;
        case 0x391ed4u: goto label_391ed4;
        case 0x391ed8u: goto label_391ed8;
        case 0x391edcu: goto label_391edc;
        case 0x391ee0u: goto label_391ee0;
        case 0x391ee4u: goto label_391ee4;
        case 0x391ee8u: goto label_391ee8;
        case 0x391eecu: goto label_391eec;
        case 0x391ef0u: goto label_391ef0;
        case 0x391ef4u: goto label_391ef4;
        case 0x391ef8u: goto label_391ef8;
        case 0x391efcu: goto label_391efc;
        case 0x391f00u: goto label_391f00;
        case 0x391f04u: goto label_391f04;
        case 0x391f08u: goto label_391f08;
        case 0x391f0cu: goto label_391f0c;
        case 0x391f10u: goto label_391f10;
        case 0x391f14u: goto label_391f14;
        case 0x391f18u: goto label_391f18;
        case 0x391f1cu: goto label_391f1c;
        case 0x391f20u: goto label_391f20;
        case 0x391f24u: goto label_391f24;
        case 0x391f28u: goto label_391f28;
        case 0x391f2cu: goto label_391f2c;
        case 0x391f30u: goto label_391f30;
        case 0x391f34u: goto label_391f34;
        case 0x391f38u: goto label_391f38;
        case 0x391f3cu: goto label_391f3c;
        case 0x391f40u: goto label_391f40;
        case 0x391f44u: goto label_391f44;
        case 0x391f48u: goto label_391f48;
        case 0x391f4cu: goto label_391f4c;
        case 0x391f50u: goto label_391f50;
        case 0x391f54u: goto label_391f54;
        case 0x391f58u: goto label_391f58;
        case 0x391f5cu: goto label_391f5c;
        case 0x391f60u: goto label_391f60;
        case 0x391f64u: goto label_391f64;
        case 0x391f68u: goto label_391f68;
        case 0x391f6cu: goto label_391f6c;
        case 0x391f70u: goto label_391f70;
        case 0x391f74u: goto label_391f74;
        case 0x391f78u: goto label_391f78;
        case 0x391f7cu: goto label_391f7c;
        case 0x391f80u: goto label_391f80;
        case 0x391f84u: goto label_391f84;
        case 0x391f88u: goto label_391f88;
        case 0x391f8cu: goto label_391f8c;
        case 0x391f90u: goto label_391f90;
        case 0x391f94u: goto label_391f94;
        case 0x391f98u: goto label_391f98;
        case 0x391f9cu: goto label_391f9c;
        case 0x391fa0u: goto label_391fa0;
        case 0x391fa4u: goto label_391fa4;
        case 0x391fa8u: goto label_391fa8;
        case 0x391facu: goto label_391fac;
        case 0x391fb0u: goto label_391fb0;
        case 0x391fb4u: goto label_391fb4;
        case 0x391fb8u: goto label_391fb8;
        case 0x391fbcu: goto label_391fbc;
        case 0x391fc0u: goto label_391fc0;
        case 0x391fc4u: goto label_391fc4;
        case 0x391fc8u: goto label_391fc8;
        case 0x391fccu: goto label_391fcc;
        case 0x391fd0u: goto label_391fd0;
        case 0x391fd4u: goto label_391fd4;
        case 0x391fd8u: goto label_391fd8;
        case 0x391fdcu: goto label_391fdc;
        case 0x391fe0u: goto label_391fe0;
        case 0x391fe4u: goto label_391fe4;
        case 0x391fe8u: goto label_391fe8;
        case 0x391fecu: goto label_391fec;
        case 0x391ff0u: goto label_391ff0;
        case 0x391ff4u: goto label_391ff4;
        case 0x391ff8u: goto label_391ff8;
        case 0x391ffcu: goto label_391ffc;
        case 0x392000u: goto label_392000;
        case 0x392004u: goto label_392004;
        case 0x392008u: goto label_392008;
        case 0x39200cu: goto label_39200c;
        case 0x392010u: goto label_392010;
        case 0x392014u: goto label_392014;
        case 0x392018u: goto label_392018;
        case 0x39201cu: goto label_39201c;
        case 0x392020u: goto label_392020;
        case 0x392024u: goto label_392024;
        case 0x392028u: goto label_392028;
        case 0x39202cu: goto label_39202c;
        case 0x392030u: goto label_392030;
        case 0x392034u: goto label_392034;
        case 0x392038u: goto label_392038;
        case 0x39203cu: goto label_39203c;
        case 0x392040u: goto label_392040;
        case 0x392044u: goto label_392044;
        case 0x392048u: goto label_392048;
        case 0x39204cu: goto label_39204c;
        case 0x392050u: goto label_392050;
        case 0x392054u: goto label_392054;
        case 0x392058u: goto label_392058;
        case 0x39205cu: goto label_39205c;
        case 0x392060u: goto label_392060;
        case 0x392064u: goto label_392064;
        case 0x392068u: goto label_392068;
        case 0x39206cu: goto label_39206c;
        case 0x392070u: goto label_392070;
        case 0x392074u: goto label_392074;
        case 0x392078u: goto label_392078;
        case 0x39207cu: goto label_39207c;
        case 0x392080u: goto label_392080;
        case 0x392084u: goto label_392084;
        case 0x392088u: goto label_392088;
        case 0x39208cu: goto label_39208c;
        case 0x392090u: goto label_392090;
        case 0x392094u: goto label_392094;
        case 0x392098u: goto label_392098;
        case 0x39209cu: goto label_39209c;
        case 0x3920a0u: goto label_3920a0;
        case 0x3920a4u: goto label_3920a4;
        case 0x3920a8u: goto label_3920a8;
        case 0x3920acu: goto label_3920ac;
        case 0x3920b0u: goto label_3920b0;
        case 0x3920b4u: goto label_3920b4;
        case 0x3920b8u: goto label_3920b8;
        case 0x3920bcu: goto label_3920bc;
        case 0x3920c0u: goto label_3920c0;
        case 0x3920c4u: goto label_3920c4;
        case 0x3920c8u: goto label_3920c8;
        case 0x3920ccu: goto label_3920cc;
        case 0x3920d0u: goto label_3920d0;
        case 0x3920d4u: goto label_3920d4;
        case 0x3920d8u: goto label_3920d8;
        case 0x3920dcu: goto label_3920dc;
        case 0x3920e0u: goto label_3920e0;
        case 0x3920e4u: goto label_3920e4;
        case 0x3920e8u: goto label_3920e8;
        case 0x3920ecu: goto label_3920ec;
        case 0x3920f0u: goto label_3920f0;
        case 0x3920f4u: goto label_3920f4;
        case 0x3920f8u: goto label_3920f8;
        case 0x3920fcu: goto label_3920fc;
        case 0x392100u: goto label_392100;
        case 0x392104u: goto label_392104;
        case 0x392108u: goto label_392108;
        case 0x39210cu: goto label_39210c;
        case 0x392110u: goto label_392110;
        case 0x392114u: goto label_392114;
        case 0x392118u: goto label_392118;
        case 0x39211cu: goto label_39211c;
        case 0x392120u: goto label_392120;
        case 0x392124u: goto label_392124;
        case 0x392128u: goto label_392128;
        case 0x39212cu: goto label_39212c;
        case 0x392130u: goto label_392130;
        case 0x392134u: goto label_392134;
        case 0x392138u: goto label_392138;
        case 0x39213cu: goto label_39213c;
        case 0x392140u: goto label_392140;
        case 0x392144u: goto label_392144;
        case 0x392148u: goto label_392148;
        case 0x39214cu: goto label_39214c;
        case 0x392150u: goto label_392150;
        case 0x392154u: goto label_392154;
        case 0x392158u: goto label_392158;
        case 0x39215cu: goto label_39215c;
        case 0x392160u: goto label_392160;
        case 0x392164u: goto label_392164;
        case 0x392168u: goto label_392168;
        case 0x39216cu: goto label_39216c;
        case 0x392170u: goto label_392170;
        case 0x392174u: goto label_392174;
        case 0x392178u: goto label_392178;
        case 0x39217cu: goto label_39217c;
        case 0x392180u: goto label_392180;
        case 0x392184u: goto label_392184;
        case 0x392188u: goto label_392188;
        case 0x39218cu: goto label_39218c;
        case 0x392190u: goto label_392190;
        case 0x392194u: goto label_392194;
        case 0x392198u: goto label_392198;
        case 0x39219cu: goto label_39219c;
        case 0x3921a0u: goto label_3921a0;
        case 0x3921a4u: goto label_3921a4;
        case 0x3921a8u: goto label_3921a8;
        case 0x3921acu: goto label_3921ac;
        case 0x3921b0u: goto label_3921b0;
        case 0x3921b4u: goto label_3921b4;
        case 0x3921b8u: goto label_3921b8;
        case 0x3921bcu: goto label_3921bc;
        case 0x3921c0u: goto label_3921c0;
        case 0x3921c4u: goto label_3921c4;
        case 0x3921c8u: goto label_3921c8;
        case 0x3921ccu: goto label_3921cc;
        case 0x3921d0u: goto label_3921d0;
        case 0x3921d4u: goto label_3921d4;
        case 0x3921d8u: goto label_3921d8;
        case 0x3921dcu: goto label_3921dc;
        case 0x3921e0u: goto label_3921e0;
        case 0x3921e4u: goto label_3921e4;
        case 0x3921e8u: goto label_3921e8;
        case 0x3921ecu: goto label_3921ec;
        case 0x3921f0u: goto label_3921f0;
        case 0x3921f4u: goto label_3921f4;
        case 0x3921f8u: goto label_3921f8;
        case 0x3921fcu: goto label_3921fc;
        case 0x392200u: goto label_392200;
        case 0x392204u: goto label_392204;
        case 0x392208u: goto label_392208;
        case 0x39220cu: goto label_39220c;
        case 0x392210u: goto label_392210;
        case 0x392214u: goto label_392214;
        case 0x392218u: goto label_392218;
        case 0x39221cu: goto label_39221c;
        case 0x392220u: goto label_392220;
        case 0x392224u: goto label_392224;
        case 0x392228u: goto label_392228;
        case 0x39222cu: goto label_39222c;
        case 0x392230u: goto label_392230;
        case 0x392234u: goto label_392234;
        case 0x392238u: goto label_392238;
        case 0x39223cu: goto label_39223c;
        case 0x392240u: goto label_392240;
        case 0x392244u: goto label_392244;
        case 0x392248u: goto label_392248;
        case 0x39224cu: goto label_39224c;
        case 0x392250u: goto label_392250;
        case 0x392254u: goto label_392254;
        case 0x392258u: goto label_392258;
        case 0x39225cu: goto label_39225c;
        case 0x392260u: goto label_392260;
        case 0x392264u: goto label_392264;
        case 0x392268u: goto label_392268;
        case 0x39226cu: goto label_39226c;
        case 0x392270u: goto label_392270;
        case 0x392274u: goto label_392274;
        case 0x392278u: goto label_392278;
        case 0x39227cu: goto label_39227c;
        case 0x392280u: goto label_392280;
        case 0x392284u: goto label_392284;
        case 0x392288u: goto label_392288;
        case 0x39228cu: goto label_39228c;
        case 0x392290u: goto label_392290;
        case 0x392294u: goto label_392294;
        case 0x392298u: goto label_392298;
        case 0x39229cu: goto label_39229c;
        case 0x3922a0u: goto label_3922a0;
        case 0x3922a4u: goto label_3922a4;
        case 0x3922a8u: goto label_3922a8;
        case 0x3922acu: goto label_3922ac;
        case 0x3922b0u: goto label_3922b0;
        case 0x3922b4u: goto label_3922b4;
        case 0x3922b8u: goto label_3922b8;
        case 0x3922bcu: goto label_3922bc;
        case 0x3922c0u: goto label_3922c0;
        case 0x3922c4u: goto label_3922c4;
        case 0x3922c8u: goto label_3922c8;
        case 0x3922ccu: goto label_3922cc;
        case 0x3922d0u: goto label_3922d0;
        case 0x3922d4u: goto label_3922d4;
        case 0x3922d8u: goto label_3922d8;
        case 0x3922dcu: goto label_3922dc;
        case 0x3922e0u: goto label_3922e0;
        case 0x3922e4u: goto label_3922e4;
        case 0x3922e8u: goto label_3922e8;
        case 0x3922ecu: goto label_3922ec;
        case 0x3922f0u: goto label_3922f0;
        case 0x3922f4u: goto label_3922f4;
        case 0x3922f8u: goto label_3922f8;
        case 0x3922fcu: goto label_3922fc;
        case 0x392300u: goto label_392300;
        case 0x392304u: goto label_392304;
        case 0x392308u: goto label_392308;
        case 0x39230cu: goto label_39230c;
        case 0x392310u: goto label_392310;
        case 0x392314u: goto label_392314;
        case 0x392318u: goto label_392318;
        case 0x39231cu: goto label_39231c;
        case 0x392320u: goto label_392320;
        case 0x392324u: goto label_392324;
        case 0x392328u: goto label_392328;
        case 0x39232cu: goto label_39232c;
        case 0x392330u: goto label_392330;
        case 0x392334u: goto label_392334;
        case 0x392338u: goto label_392338;
        case 0x39233cu: goto label_39233c;
        case 0x392340u: goto label_392340;
        case 0x392344u: goto label_392344;
        case 0x392348u: goto label_392348;
        case 0x39234cu: goto label_39234c;
        case 0x392350u: goto label_392350;
        case 0x392354u: goto label_392354;
        case 0x392358u: goto label_392358;
        case 0x39235cu: goto label_39235c;
        case 0x392360u: goto label_392360;
        case 0x392364u: goto label_392364;
        case 0x392368u: goto label_392368;
        case 0x39236cu: goto label_39236c;
        case 0x392370u: goto label_392370;
        case 0x392374u: goto label_392374;
        case 0x392378u: goto label_392378;
        case 0x39237cu: goto label_39237c;
        case 0x392380u: goto label_392380;
        case 0x392384u: goto label_392384;
        case 0x392388u: goto label_392388;
        case 0x39238cu: goto label_39238c;
        case 0x392390u: goto label_392390;
        case 0x392394u: goto label_392394;
        case 0x392398u: goto label_392398;
        case 0x39239cu: goto label_39239c;
        case 0x3923a0u: goto label_3923a0;
        case 0x3923a4u: goto label_3923a4;
        case 0x3923a8u: goto label_3923a8;
        case 0x3923acu: goto label_3923ac;
        case 0x3923b0u: goto label_3923b0;
        case 0x3923b4u: goto label_3923b4;
        case 0x3923b8u: goto label_3923b8;
        case 0x3923bcu: goto label_3923bc;
        case 0x3923c0u: goto label_3923c0;
        case 0x3923c4u: goto label_3923c4;
        case 0x3923c8u: goto label_3923c8;
        case 0x3923ccu: goto label_3923cc;
        case 0x3923d0u: goto label_3923d0;
        case 0x3923d4u: goto label_3923d4;
        case 0x3923d8u: goto label_3923d8;
        case 0x3923dcu: goto label_3923dc;
        case 0x3923e0u: goto label_3923e0;
        case 0x3923e4u: goto label_3923e4;
        case 0x3923e8u: goto label_3923e8;
        case 0x3923ecu: goto label_3923ec;
        case 0x3923f0u: goto label_3923f0;
        case 0x3923f4u: goto label_3923f4;
        case 0x3923f8u: goto label_3923f8;
        case 0x3923fcu: goto label_3923fc;
        case 0x392400u: goto label_392400;
        case 0x392404u: goto label_392404;
        case 0x392408u: goto label_392408;
        case 0x39240cu: goto label_39240c;
        case 0x392410u: goto label_392410;
        case 0x392414u: goto label_392414;
        case 0x392418u: goto label_392418;
        case 0x39241cu: goto label_39241c;
        case 0x392420u: goto label_392420;
        case 0x392424u: goto label_392424;
        case 0x392428u: goto label_392428;
        case 0x39242cu: goto label_39242c;
        case 0x392430u: goto label_392430;
        case 0x392434u: goto label_392434;
        case 0x392438u: goto label_392438;
        case 0x39243cu: goto label_39243c;
        case 0x392440u: goto label_392440;
        case 0x392444u: goto label_392444;
        case 0x392448u: goto label_392448;
        case 0x39244cu: goto label_39244c;
        case 0x392450u: goto label_392450;
        case 0x392454u: goto label_392454;
        case 0x392458u: goto label_392458;
        case 0x39245cu: goto label_39245c;
        case 0x392460u: goto label_392460;
        case 0x392464u: goto label_392464;
        case 0x392468u: goto label_392468;
        case 0x39246cu: goto label_39246c;
        case 0x392470u: goto label_392470;
        case 0x392474u: goto label_392474;
        case 0x392478u: goto label_392478;
        case 0x39247cu: goto label_39247c;
        case 0x392480u: goto label_392480;
        case 0x392484u: goto label_392484;
        case 0x392488u: goto label_392488;
        case 0x39248cu: goto label_39248c;
        case 0x392490u: goto label_392490;
        case 0x392494u: goto label_392494;
        case 0x392498u: goto label_392498;
        case 0x39249cu: goto label_39249c;
        case 0x3924a0u: goto label_3924a0;
        case 0x3924a4u: goto label_3924a4;
        case 0x3924a8u: goto label_3924a8;
        case 0x3924acu: goto label_3924ac;
        case 0x3924b0u: goto label_3924b0;
        case 0x3924b4u: goto label_3924b4;
        case 0x3924b8u: goto label_3924b8;
        case 0x3924bcu: goto label_3924bc;
        case 0x3924c0u: goto label_3924c0;
        case 0x3924c4u: goto label_3924c4;
        case 0x3924c8u: goto label_3924c8;
        case 0x3924ccu: goto label_3924cc;
        case 0x3924d0u: goto label_3924d0;
        case 0x3924d4u: goto label_3924d4;
        case 0x3924d8u: goto label_3924d8;
        case 0x3924dcu: goto label_3924dc;
        case 0x3924e0u: goto label_3924e0;
        case 0x3924e4u: goto label_3924e4;
        case 0x3924e8u: goto label_3924e8;
        case 0x3924ecu: goto label_3924ec;
        case 0x3924f0u: goto label_3924f0;
        case 0x3924f4u: goto label_3924f4;
        case 0x3924f8u: goto label_3924f8;
        case 0x3924fcu: goto label_3924fc;
        case 0x392500u: goto label_392500;
        case 0x392504u: goto label_392504;
        case 0x392508u: goto label_392508;
        case 0x39250cu: goto label_39250c;
        case 0x392510u: goto label_392510;
        case 0x392514u: goto label_392514;
        case 0x392518u: goto label_392518;
        case 0x39251cu: goto label_39251c;
        case 0x392520u: goto label_392520;
        case 0x392524u: goto label_392524;
        case 0x392528u: goto label_392528;
        case 0x39252cu: goto label_39252c;
        case 0x392530u: goto label_392530;
        case 0x392534u: goto label_392534;
        case 0x392538u: goto label_392538;
        case 0x39253cu: goto label_39253c;
        case 0x392540u: goto label_392540;
        case 0x392544u: goto label_392544;
        case 0x392548u: goto label_392548;
        case 0x39254cu: goto label_39254c;
        case 0x392550u: goto label_392550;
        case 0x392554u: goto label_392554;
        case 0x392558u: goto label_392558;
        case 0x39255cu: goto label_39255c;
        case 0x392560u: goto label_392560;
        case 0x392564u: goto label_392564;
        case 0x392568u: goto label_392568;
        case 0x39256cu: goto label_39256c;
        case 0x392570u: goto label_392570;
        case 0x392574u: goto label_392574;
        case 0x392578u: goto label_392578;
        case 0x39257cu: goto label_39257c;
        case 0x392580u: goto label_392580;
        case 0x392584u: goto label_392584;
        case 0x392588u: goto label_392588;
        case 0x39258cu: goto label_39258c;
        case 0x392590u: goto label_392590;
        case 0x392594u: goto label_392594;
        case 0x392598u: goto label_392598;
        case 0x39259cu: goto label_39259c;
        case 0x3925a0u: goto label_3925a0;
        case 0x3925a4u: goto label_3925a4;
        case 0x3925a8u: goto label_3925a8;
        case 0x3925acu: goto label_3925ac;
        case 0x3925b0u: goto label_3925b0;
        case 0x3925b4u: goto label_3925b4;
        case 0x3925b8u: goto label_3925b8;
        case 0x3925bcu: goto label_3925bc;
        case 0x3925c0u: goto label_3925c0;
        case 0x3925c4u: goto label_3925c4;
        case 0x3925c8u: goto label_3925c8;
        case 0x3925ccu: goto label_3925cc;
        case 0x3925d0u: goto label_3925d0;
        case 0x3925d4u: goto label_3925d4;
        case 0x3925d8u: goto label_3925d8;
        case 0x3925dcu: goto label_3925dc;
        case 0x3925e0u: goto label_3925e0;
        case 0x3925e4u: goto label_3925e4;
        case 0x3925e8u: goto label_3925e8;
        case 0x3925ecu: goto label_3925ec;
        case 0x3925f0u: goto label_3925f0;
        case 0x3925f4u: goto label_3925f4;
        case 0x3925f8u: goto label_3925f8;
        case 0x3925fcu: goto label_3925fc;
        case 0x392600u: goto label_392600;
        case 0x392604u: goto label_392604;
        case 0x392608u: goto label_392608;
        case 0x39260cu: goto label_39260c;
        case 0x392610u: goto label_392610;
        case 0x392614u: goto label_392614;
        case 0x392618u: goto label_392618;
        case 0x39261cu: goto label_39261c;
        case 0x392620u: goto label_392620;
        case 0x392624u: goto label_392624;
        case 0x392628u: goto label_392628;
        case 0x39262cu: goto label_39262c;
        case 0x392630u: goto label_392630;
        case 0x392634u: goto label_392634;
        case 0x392638u: goto label_392638;
        case 0x39263cu: goto label_39263c;
        case 0x392640u: goto label_392640;
        case 0x392644u: goto label_392644;
        case 0x392648u: goto label_392648;
        case 0x39264cu: goto label_39264c;
        case 0x392650u: goto label_392650;
        case 0x392654u: goto label_392654;
        case 0x392658u: goto label_392658;
        case 0x39265cu: goto label_39265c;
        case 0x392660u: goto label_392660;
        case 0x392664u: goto label_392664;
        case 0x392668u: goto label_392668;
        case 0x39266cu: goto label_39266c;
        case 0x392670u: goto label_392670;
        case 0x392674u: goto label_392674;
        case 0x392678u: goto label_392678;
        case 0x39267cu: goto label_39267c;
        case 0x392680u: goto label_392680;
        case 0x392684u: goto label_392684;
        case 0x392688u: goto label_392688;
        case 0x39268cu: goto label_39268c;
        case 0x392690u: goto label_392690;
        case 0x392694u: goto label_392694;
        case 0x392698u: goto label_392698;
        case 0x39269cu: goto label_39269c;
        case 0x3926a0u: goto label_3926a0;
        case 0x3926a4u: goto label_3926a4;
        case 0x3926a8u: goto label_3926a8;
        case 0x3926acu: goto label_3926ac;
        case 0x3926b0u: goto label_3926b0;
        case 0x3926b4u: goto label_3926b4;
        case 0x3926b8u: goto label_3926b8;
        case 0x3926bcu: goto label_3926bc;
        default: break;
    }

    ctx->pc = 0x3918c0u;

label_3918c0:
    // 0x3918c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3918c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3918c4:
    // 0x3918c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3918c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3918c8:
    // 0x3918c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3918c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3918cc:
    // 0x3918cc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x3918ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_3918d0:
    // 0x3918d0: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3918d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3918d4:
    // 0x3918d4: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_3918d8:
    if (ctx->pc == 0x3918D8u) {
        ctx->pc = 0x3918D8u;
            // 0x3918d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3918DCu;
        goto label_3918dc;
    }
    ctx->pc = 0x3918D4u;
    {
        const bool branch_taken_0x3918d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3918D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3918D4u;
            // 0x3918d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3918d4) {
            ctx->pc = 0x391970u;
            goto label_391970;
        }
    }
    ctx->pc = 0x3918DCu;
label_3918dc:
    // 0x3918dc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3918dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3918e0:
    // 0x3918e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3918e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3918e4:
    // 0x3918e4: 0x24a560a0  addiu       $a1, $a1, 0x60A0
    ctx->pc = 0x3918e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24736));
label_3918e8:
    // 0x3918e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3918e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3918ec:
    // 0x3918ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3918ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3918f0:
    // 0x3918f0: 0x600008  jr          $v1
label_3918f4:
    if (ctx->pc == 0x3918F4u) {
        ctx->pc = 0x3918F8u;
        goto label_3918f8;
    }
    ctx->pc = 0x3918F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3918F8u: goto label_3918f8;
            case 0x391910u: goto label_391910;
            case 0x391928u: goto label_391928;
            case 0x391940u: goto label_391940;
            case 0x391958u: goto label_391958;
            case 0x391960u: goto label_391960;
            case 0x391970u: goto label_391970;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3918F8u;
label_3918f8:
    // 0x3918f8: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3918f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3918fc:
    // 0x3918fc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3918fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_391900:
    // 0x391900: 0x320f809  jalr        $t9
label_391904:
    if (ctx->pc == 0x391904u) {
        ctx->pc = 0x391908u;
        goto label_391908;
    }
    ctx->pc = 0x391900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x391908u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x391908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x391908u; }
            if (ctx->pc != 0x391908u) { return; }
        }
        }
    }
    ctx->pc = 0x391908u;
label_391908:
    // 0x391908: 0x1000001a  b           . + 4 + (0x1A << 2)
label_39190c:
    if (ctx->pc == 0x39190Cu) {
        ctx->pc = 0x39190Cu;
            // 0x39190c: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x391910u;
        goto label_391910;
    }
    ctx->pc = 0x391908u;
    {
        const bool branch_taken_0x391908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39190Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391908u;
            // 0x39190c: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391908) {
            ctx->pc = 0x391974u;
            goto label_391974;
        }
    }
    ctx->pc = 0x391910u;
label_391910:
    // 0x391910: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x391910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_391914:
    // 0x391914: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x391914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_391918:
    // 0x391918: 0x320f809  jalr        $t9
label_39191c:
    if (ctx->pc == 0x39191Cu) {
        ctx->pc = 0x391920u;
        goto label_391920;
    }
    ctx->pc = 0x391918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x391920u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x391920u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x391920u; }
            if (ctx->pc != 0x391920u) { return; }
        }
        }
    }
    ctx->pc = 0x391920u;
label_391920:
    // 0x391920: 0x10000013  b           . + 4 + (0x13 << 2)
label_391924:
    if (ctx->pc == 0x391924u) {
        ctx->pc = 0x391928u;
        goto label_391928;
    }
    ctx->pc = 0x391920u;
    {
        const bool branch_taken_0x391920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391920) {
            ctx->pc = 0x391970u;
            goto label_391970;
        }
    }
    ctx->pc = 0x391928u;
label_391928:
    // 0x391928: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x391928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_39192c:
    // 0x39192c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x39192cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_391930:
    // 0x391930: 0x320f809  jalr        $t9
label_391934:
    if (ctx->pc == 0x391934u) {
        ctx->pc = 0x391938u;
        goto label_391938;
    }
    ctx->pc = 0x391930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x391938u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x391938u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x391938u; }
            if (ctx->pc != 0x391938u) { return; }
        }
        }
    }
    ctx->pc = 0x391938u;
label_391938:
    // 0x391938: 0x1000000d  b           . + 4 + (0xD << 2)
label_39193c:
    if (ctx->pc == 0x39193Cu) {
        ctx->pc = 0x391940u;
        goto label_391940;
    }
    ctx->pc = 0x391938u;
    {
        const bool branch_taken_0x391938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391938) {
            ctx->pc = 0x391970u;
            goto label_391970;
        }
    }
    ctx->pc = 0x391940u;
label_391940:
    // 0x391940: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x391940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_391944:
    // 0x391944: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x391944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_391948:
    // 0x391948: 0x320f809  jalr        $t9
label_39194c:
    if (ctx->pc == 0x39194Cu) {
        ctx->pc = 0x391950u;
        goto label_391950;
    }
    ctx->pc = 0x391948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x391950u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x391950u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x391950u; }
            if (ctx->pc != 0x391950u) { return; }
        }
        }
    }
    ctx->pc = 0x391950u;
label_391950:
    // 0x391950: 0x10000007  b           . + 4 + (0x7 << 2)
label_391954:
    if (ctx->pc == 0x391954u) {
        ctx->pc = 0x391958u;
        goto label_391958;
    }
    ctx->pc = 0x391950u;
    {
        const bool branch_taken_0x391950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391950) {
            ctx->pc = 0x391970u;
            goto label_391970;
        }
    }
    ctx->pc = 0x391958u;
label_391958:
    // 0x391958: 0xc0e4358  jal         func_390D60
label_39195c:
    if (ctx->pc == 0x39195Cu) {
        ctx->pc = 0x391960u;
        goto label_391960;
    }
    ctx->pc = 0x391958u;
    SET_GPR_U32(ctx, 31, 0x391960u);
    ctx->pc = 0x390D60u;
    if (runtime->hasFunction(0x390D60u)) {
        auto targetFn = runtime->lookupFunction(0x390D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391960u; }
        if (ctx->pc != 0x391960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00390D60_0x390d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391960u; }
        if (ctx->pc != 0x391960u) { return; }
    }
    ctx->pc = 0x391960u;
label_391960:
    // 0x391960: 0x8e190048  lw          $t9, 0x48($s0)
    ctx->pc = 0x391960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_391964:
    // 0x391964: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x391964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_391968:
    // 0x391968: 0x320f809  jalr        $t9
label_39196c:
    if (ctx->pc == 0x39196Cu) {
        ctx->pc = 0x39196Cu;
            // 0x39196c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x391970u;
        goto label_391970;
    }
    ctx->pc = 0x391968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x391970u);
        ctx->pc = 0x39196Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391968u;
            // 0x39196c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x391970u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x391970u; }
            if (ctx->pc != 0x391970u) { return; }
        }
        }
    }
    ctx->pc = 0x391970u;
label_391970:
    // 0x391970: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x391970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_391974:
    // 0x391974: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
label_391978:
    if (ctx->pc == 0x391978u) {
        ctx->pc = 0x391978u;
            // 0x391978: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x39197Cu;
        goto label_39197c;
    }
    ctx->pc = 0x391974u;
    {
        const bool branch_taken_0x391974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x391974) {
            ctx->pc = 0x391978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391974u;
            // 0x391978: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391A34u;
            goto label_391a34;
        }
    }
    ctx->pc = 0x39197Cu;
label_39197c:
    // 0x39197c: 0x8c640db0  lw          $a0, 0xDB0($v1)
    ctx->pc = 0x39197cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
label_391980:
    // 0x391980: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x391980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_391984:
    // 0x391984: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
label_391988:
    if (ctx->pc == 0x391988u) {
        ctx->pc = 0x39198Cu;
        goto label_39198c;
    }
    ctx->pc = 0x391984u;
    {
        const bool branch_taken_0x391984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x391984) {
            ctx->pc = 0x391A30u;
            goto label_391a30;
        }
    }
    ctx->pc = 0x39198Cu;
label_39198c:
    // 0x39198c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x39198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_391990:
    // 0x391990: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
label_391994:
    if (ctx->pc == 0x391994u) {
        ctx->pc = 0x391998u;
        goto label_391998;
    }
    ctx->pc = 0x391990u;
    {
        const bool branch_taken_0x391990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x391990) {
            ctx->pc = 0x391A30u;
            goto label_391a30;
        }
    }
    ctx->pc = 0x391998u;
label_391998:
    // 0x391998: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x391998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_39199c:
    // 0x39199c: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
label_3919a0:
    if (ctx->pc == 0x3919A0u) {
        ctx->pc = 0x3919A4u;
        goto label_3919a4;
    }
    ctx->pc = 0x39199Cu;
    {
        const bool branch_taken_0x39199c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x39199c) {
            ctx->pc = 0x391A30u;
            goto label_391a30;
        }
    }
    ctx->pc = 0x3919A4u;
label_3919a4:
    // 0x3919a4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x3919a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3919a8:
    // 0x3919a8: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x3919a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_3919ac:
    // 0x3919ac: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_3919b0:
    if (ctx->pc == 0x3919B0u) {
        ctx->pc = 0x3919B4u;
        goto label_3919b4;
    }
    ctx->pc = 0x3919ACu;
    {
        const bool branch_taken_0x3919ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3919ac) {
            ctx->pc = 0x391A30u;
            goto label_391a30;
        }
    }
    ctx->pc = 0x3919B4u;
label_3919b4:
    // 0x3919b4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3919b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3919b8:
    // 0x3919b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3919b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3919bc:
    // 0x3919bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3919bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3919c0:
    // 0x3919c0: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x3919c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_3919c4:
    // 0x3919c4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x3919c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_3919c8:
    // 0x3919c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3919c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3919cc:
    // 0x3919cc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3919ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3919d0:
    // 0x3919d0: 0xc08914c  jal         func_224530
label_3919d4:
    if (ctx->pc == 0x3919D4u) {
        ctx->pc = 0x3919D4u;
            // 0x3919d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3919D8u;
        goto label_3919d8;
    }
    ctx->pc = 0x3919D0u;
    SET_GPR_U32(ctx, 31, 0x3919D8u);
    ctx->pc = 0x3919D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3919D0u;
            // 0x3919d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3919D8u; }
        if (ctx->pc != 0x3919D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3919D8u; }
        if (ctx->pc != 0x3919D8u) { return; }
    }
    ctx->pc = 0x3919D8u;
label_3919d8:
    // 0x3919d8: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x3919d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3919dc:
    // 0x3919dc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3919dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3919e0:
    // 0x3919e0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3919e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_3919e4:
    // 0x3919e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3919e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3919e8:
    // 0x3919e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3919e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3919ec:
    // 0x3919ec: 0x8d050214  lw          $a1, 0x214($t0)
    ctx->pc = 0x3919ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 532)));
label_3919f0:
    // 0x3919f0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3919f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3919f4:
    // 0x3919f4: 0xad030214  sw          $v1, 0x214($t0)
    ctx->pc = 0x3919f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 532), GPR_U32(ctx, 3));
label_3919f8:
    // 0x3919f8: 0x8e080040  lw          $t0, 0x40($s0)
    ctx->pc = 0x3919f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3919fc:
    // 0x3919fc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3919fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_391a00:
    // 0x391a00: 0x1041825  or          $v1, $t0, $a0
    ctx->pc = 0x391a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
label_391a04:
    // 0x391a04: 0x1042027  nor         $a0, $t0, $a0
    ctx->pc = 0x391a04u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 8) | GPR_U64(ctx, 4)));
label_391a08:
    // 0x391a08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x391a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_391a0c:
    // 0x391a0c: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x391a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_391a10:
    // 0x391a10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x391a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_391a14:
    // 0x391a14: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x391a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
label_391a18:
    // 0x391a18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x391a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_391a1c:
    // 0x391a1c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x391a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_391a20:
    // 0x391a20: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x391a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_391a24:
    // 0x391a24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x391a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_391a28:
    // 0x391a28: 0xc08bff0  jal         func_22FFC0
label_391a2c:
    if (ctx->pc == 0x391A2Cu) {
        ctx->pc = 0x391A2Cu;
            // 0x391a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x391A30u;
        goto label_391a30;
    }
    ctx->pc = 0x391A28u;
    SET_GPR_U32(ctx, 31, 0x391A30u);
    ctx->pc = 0x391A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391A28u;
            // 0x391a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391A30u; }
        if (ctx->pc != 0x391A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391A30u; }
        if (ctx->pc != 0x391A30u) { return; }
    }
    ctx->pc = 0x391A30u;
label_391a30:
    // 0x391a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x391a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_391a34:
    // 0x391a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x391a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_391a38:
    // 0x391a38: 0x3e00008  jr          $ra
label_391a3c:
    if (ctx->pc == 0x391A3Cu) {
        ctx->pc = 0x391A3Cu;
            // 0x391a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x391A40u;
        goto label_391a40;
    }
    ctx->pc = 0x391A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391A38u;
            // 0x391a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x391A40u;
label_391a40:
    // 0x391a40: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x391a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_391a44:
    // 0x391a44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x391a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_391a48:
    // 0x391a48: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x391a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_391a4c:
    // 0x391a4c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x391a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_391a50:
    // 0x391a50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x391a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_391a54:
    // 0x391a54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x391a54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_391a58:
    // 0x391a58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x391a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_391a5c:
    // 0x391a5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x391a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_391a60:
    // 0x391a60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x391a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_391a64:
    // 0x391a64: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x391a64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_391a68:
    // 0x391a68: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x391a68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_391a6c:
    // 0x391a6c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x391a6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_391a70:
    // 0x391a70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x391a70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_391a74:
    // 0x391a74: 0x8c920020  lw          $s2, 0x20($a0)
    ctx->pc = 0x391a74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_391a78:
    // 0x391a78: 0x8c930024  lw          $s3, 0x24($a0)
    ctx->pc = 0x391a78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_391a7c:
    // 0x391a7c: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x391a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
label_391a80:
    // 0x391a80: 0x26510a50  addiu       $s1, $s2, 0xA50
    ctx->pc = 0x391a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
label_391a84:
    // 0x391a84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x391a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_391a88:
    // 0x391a88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x391a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_391a8c:
    // 0x391a8c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x391a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_391a90:
    // 0x391a90: 0xc0dc9bc  jal         func_3726F0
label_391a94:
    if (ctx->pc == 0x391A94u) {
        ctx->pc = 0x391A94u;
            // 0x391a94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x391A98u;
        goto label_391a98;
    }
    ctx->pc = 0x391A90u;
    SET_GPR_U32(ctx, 31, 0x391A98u);
    ctx->pc = 0x391A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391A90u;
            // 0x391a94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391A98u; }
        if (ctx->pc != 0x391A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391A98u; }
        if (ctx->pc != 0x391A98u) { return; }
    }
    ctx->pc = 0x391A98u;
label_391a98:
    // 0x391a98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x391a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_391a9c:
    // 0x391a9c: 0xc0dc9a0  jal         func_372680
label_391aa0:
    if (ctx->pc == 0x391AA0u) {
        ctx->pc = 0x391AA0u;
            // 0x391aa0: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x391AA4u;
        goto label_391aa4;
    }
    ctx->pc = 0x391A9Cu;
    SET_GPR_U32(ctx, 31, 0x391AA4u);
    ctx->pc = 0x391AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391A9Cu;
            // 0x391aa0: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391AA4u; }
        if (ctx->pc != 0x391AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391AA4u; }
        if (ctx->pc != 0x391AA4u) { return; }
    }
    ctx->pc = 0x391AA4u;
label_391aa4:
    // 0x391aa4: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
label_391aa8:
    if (ctx->pc == 0x391AA8u) {
        ctx->pc = 0x391AA8u;
            // 0x391aa8: 0x8e830034  lw          $v1, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->pc = 0x391AACu;
        goto label_391aac;
    }
    ctx->pc = 0x391AA4u;
    {
        const bool branch_taken_0x391aa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x391aa4) {
            ctx->pc = 0x391AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391AA4u;
            // 0x391aa8: 0x8e830034  lw          $v1, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391AD0u;
            goto label_391ad0;
        }
    }
    ctx->pc = 0x391AACu;
label_391aac:
    // 0x391aac: 0x8e660214  lw          $a2, 0x214($s3)
    ctx->pc = 0x391aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_391ab0:
    // 0x391ab0: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x391ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_391ab4:
    // 0x391ab4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x391ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_391ab8:
    // 0x391ab8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x391ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_391abc:
    // 0x391abc: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x391abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_391ac0:
    // 0x391ac0: 0xae650214  sw          $a1, 0x214($s3)
    ctx->pc = 0x391ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 5));
label_391ac4:
    // 0x391ac4: 0xae840034  sw          $a0, 0x34($s4)
    ctx->pc = 0x391ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 4));
label_391ac8:
    // 0x391ac8: 0x100002f1  b           . + 4 + (0x2F1 << 2)
label_391acc:
    if (ctx->pc == 0x391ACCu) {
        ctx->pc = 0x391ACCu;
            // 0x391acc: 0xae830038  sw          $v1, 0x38($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x391AD0u;
        goto label_391ad0;
    }
    ctx->pc = 0x391AC8u;
    {
        const bool branch_taken_0x391ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391AC8u;
            // 0x391acc: 0xae830038  sw          $v1, 0x38($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ac8) {
            ctx->pc = 0x392690u;
            goto label_392690;
        }
    }
    ctx->pc = 0x391AD0u;
label_391ad0:
    // 0x391ad0: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x391ad0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_391ad4:
    // 0x391ad4: 0x502002ef  beql        $at, $zero, . + 4 + (0x2EF << 2)
label_391ad8:
    if (ctx->pc == 0x391AD8u) {
        ctx->pc = 0x391AD8u;
            // 0x391ad8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x391ADCu;
        goto label_391adc;
    }
    ctx->pc = 0x391AD4u;
    {
        const bool branch_taken_0x391ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x391ad4) {
            ctx->pc = 0x391AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391AD4u;
            // 0x391ad8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392694u;
            goto label_392694;
        }
    }
    ctx->pc = 0x391ADCu;
label_391adc:
    // 0x391adc: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x391adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_391ae0:
    // 0x391ae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x391ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_391ae4:
    // 0x391ae4: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x391ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
label_391ae8:
    // 0x391ae8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x391ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_391aec:
    // 0x391aec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x391aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_391af0:
    // 0x391af0: 0x600008  jr          $v1
label_391af4:
    if (ctx->pc == 0x391AF4u) {
        ctx->pc = 0x391AF8u;
        goto label_391af8;
    }
    ctx->pc = 0x391AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x391AF8u: goto label_391af8;
            case 0x392050u: goto label_392050;
            case 0x392274u: goto label_392274;
            case 0x392494u: goto label_392494;
            case 0x392690u: goto label_392690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x391AF8u;
label_391af8:
    // 0x391af8: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x391af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_391afc:
    // 0x391afc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x391afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_391b00:
    // 0x391b00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x391b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_391b04:
    // 0x391b04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x391b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_391b08:
    // 0x391b08: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x391b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_391b0c:
    // 0x391b0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x391b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391b10:
    // 0x391b10: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x391b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391b14:
    // 0x391b14: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x391b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_391b18:
    // 0x391b18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391b1c:
    // 0x391b1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x391b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_391b20:
    // 0x391b20: 0xe6600154  swc1        $f0, 0x154($s3)
    ctx->pc = 0x391b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
label_391b24:
    // 0x391b24: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x391b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_391b28:
    // 0x391b28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x391b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_391b2c:
    // 0x391b2c: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x391b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_391b30:
    // 0x391b30: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x391b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_391b34:
    // 0x391b34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x391b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_391b38:
    // 0x391b38: 0xc08bff0  jal         func_22FFC0
label_391b3c:
    if (ctx->pc == 0x391B3Cu) {
        ctx->pc = 0x391B3Cu;
            // 0x391b3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x391B40u;
        goto label_391b40;
    }
    ctx->pc = 0x391B38u;
    SET_GPR_U32(ctx, 31, 0x391B40u);
    ctx->pc = 0x391B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391B38u;
            // 0x391b3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391B40u; }
        if (ctx->pc != 0x391B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391B40u; }
        if (ctx->pc != 0x391B40u) { return; }
    }
    ctx->pc = 0x391B40u;
label_391b40:
    // 0x391b40: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x391b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_391b44:
    // 0x391b44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391b48:
    // 0x391b48: 0xc4750060  lwc1        $f21, 0x60($v1)
    ctx->pc = 0x391b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_391b4c:
    // 0x391b4c: 0xc074740  jal         func_1D1D00
label_391b50:
    if (ctx->pc == 0x391B50u) {
        ctx->pc = 0x391B50u;
            // 0x391b50: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x391B54u;
        goto label_391b54;
    }
    ctx->pc = 0x391B4Cu;
    SET_GPR_U32(ctx, 31, 0x391B54u);
    ctx->pc = 0x391B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391B4Cu;
            // 0x391b50: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391B54u; }
        if (ctx->pc != 0x391B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391B54u; }
        if (ctx->pc != 0x391B54u) { return; }
    }
    ctx->pc = 0x391B54u;
label_391b54:
    // 0x391b54: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391b58:
    if (ctx->pc == 0x391B58u) {
        ctx->pc = 0x391B58u;
            // 0x391b58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391B5Cu;
        goto label_391b5c;
    }
    ctx->pc = 0x391B54u;
    {
        const bool branch_taken_0x391b54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391b54) {
            ctx->pc = 0x391B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391B54u;
            // 0x391b58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391B68u;
            goto label_391b68;
        }
    }
    ctx->pc = 0x391B5Cu;
label_391b5c:
    // 0x391b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391b60:
    // 0x391b60: 0x10000007  b           . + 4 + (0x7 << 2)
label_391b64:
    if (ctx->pc == 0x391B64u) {
        ctx->pc = 0x391B64u;
            // 0x391b64: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391B68u;
        goto label_391b68;
    }
    ctx->pc = 0x391B60u;
    {
        const bool branch_taken_0x391b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391B60u;
            // 0x391b64: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b60) {
            ctx->pc = 0x391B80u;
            goto label_391b80;
        }
    }
    ctx->pc = 0x391B68u;
label_391b68:
    // 0x391b68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391b6c:
    // 0x391b6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_391b70:
    // 0x391b70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391b74:
    // 0x391b74: 0x0  nop
    ctx->pc = 0x391b74u;
    // NOP
label_391b78:
    // 0x391b78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x391b78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_391b7c:
    // 0x391b7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391b7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_391b80:
    // 0x391b80: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x391b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_391b84:
    // 0x391b84: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x391b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_391b88:
    // 0x391b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391b8c:
    // 0x391b8c: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x391b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_391b90:
    // 0x391b90: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x391b90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391b94:
    // 0x391b94: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x391b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_391b98:
    // 0x391b98: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x391b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_391b9c:
    // 0x391b9c: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x391b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_391ba0:
    // 0x391ba0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x391ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_391ba4:
    // 0x391ba4: 0xc4406100  lwc1        $f0, 0x6100($v0)
    ctx->pc = 0x391ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391ba8:
    // 0x391ba8: 0x46016018  adda.s      $f12, $f1
    ctx->pc = 0x391ba8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_391bac:
    // 0x391bac: 0x4602a85c  madd.s      $f1, $f21, $f2
    ctx->pc = 0x391bacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[2]));
label_391bb0:
    // 0x391bb0: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x391bb0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[13] = ctx->f[1] / ctx->f[0];
label_391bb4:
    // 0x391bb4: 0xc4746100  lwc1        $f20, 0x6100($v1)
    ctx->pc = 0x391bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_391bb8:
    // 0x391bb8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x391bb8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_391bbc:
    // 0x391bbc: 0x0  nop
    ctx->pc = 0x391bbcu;
    // NOP
label_391bc0:
    // 0x391bc0: 0x0  nop
    ctx->pc = 0x391bc0u;
    // NOP
label_391bc4:
    // 0x391bc4: 0xc04cbd8  jal         func_132F60
label_391bc8:
    if (ctx->pc == 0x391BC8u) {
        ctx->pc = 0x391BCCu;
        goto label_391bcc;
    }
    ctx->pc = 0x391BC4u;
    SET_GPR_U32(ctx, 31, 0x391BCCu);
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391BCCu; }
        if (ctx->pc != 0x391BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391BCCu; }
        if (ctx->pc != 0x391BCCu) { return; }
    }
    ctx->pc = 0x391BCCu;
label_391bcc:
    // 0x391bcc: 0x26450580  addiu       $a1, $s2, 0x580
    ctx->pc = 0x391bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
label_391bd0:
    // 0x391bd0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x391bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_391bd4:
    // 0x391bd4: 0xc04cca0  jal         func_133280
label_391bd8:
    if (ctx->pc == 0x391BD8u) {
        ctx->pc = 0x391BD8u;
            // 0x391bd8: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x391BDCu;
        goto label_391bdc;
    }
    ctx->pc = 0x391BD4u;
    SET_GPR_U32(ctx, 31, 0x391BDCu);
    ctx->pc = 0x391BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391BD4u;
            // 0x391bd8: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391BDCu; }
        if (ctx->pc != 0x391BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391BDCu; }
        if (ctx->pc != 0x391BDCu) { return; }
    }
    ctx->pc = 0x391BDCu;
label_391bdc:
    // 0x391bdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391be0:
    // 0x391be0: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x391be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_391be4:
    // 0x391be4: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x391be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_391be8:
    // 0x391be8: 0xc7a601a0  lwc1        $f6, 0x1A0($sp)
    ctx->pc = 0x391be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_391bec:
    // 0x391bec: 0xc7a501a4  lwc1        $f5, 0x1A4($sp)
    ctx->pc = 0x391becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_391bf0:
    // 0x391bf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x391bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_391bf4:
    // 0x391bf4: 0xc7a401a8  lwc1        $f4, 0x1A8($sp)
    ctx->pc = 0x391bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_391bf8:
    // 0x391bf8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x391bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_391bfc:
    // 0x391bfc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x391bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_391c00:
    // 0x391c00: 0xe7a60090  swc1        $f6, 0x90($sp)
    ctx->pc = 0x391c00u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_391c04:
    // 0x391c04: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x391c04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_391c08:
    // 0x391c08: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x391c08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_391c0c:
    // 0x391c0c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x391c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_391c10:
    // 0x391c10: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x391c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391c14:
    // 0x391c14: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x391c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_391c18:
    // 0x391c18: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x391c18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_391c1c:
    // 0x391c1c: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x391c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_391c20:
    // 0x391c20: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x391c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_391c24:
    // 0x391c24: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x391c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_391c28:
    // 0x391c28: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x391c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_391c2c:
    // 0x391c2c: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x391c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_391c30:
    // 0x391c30: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x391c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_391c34:
    // 0x391c34: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x391c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_391c38:
    // 0x391c38: 0xc088b74  jal         func_222DD0
label_391c3c:
    if (ctx->pc == 0x391C3Cu) {
        ctx->pc = 0x391C3Cu;
            // 0x391c3c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x391C40u;
        goto label_391c40;
    }
    ctx->pc = 0x391C38u;
    SET_GPR_U32(ctx, 31, 0x391C40u);
    ctx->pc = 0x391C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391C38u;
            // 0x391c3c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391C40u; }
        if (ctx->pc != 0x391C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391C40u; }
        if (ctx->pc != 0x391C40u) { return; }
    }
    ctx->pc = 0x391C40u;
label_391c40:
    // 0x391c40: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x391c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_391c44:
    // 0x391c44: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x391c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_391c48:
    // 0x391c48: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x391c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_391c4c:
    // 0x391c4c: 0x320f809  jalr        $t9
label_391c50:
    if (ctx->pc == 0x391C50u) {
        ctx->pc = 0x391C50u;
            // 0x391c50: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x391C54u;
        goto label_391c54;
    }
    ctx->pc = 0x391C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x391C54u);
        ctx->pc = 0x391C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391C4Cu;
            // 0x391c50: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x391C54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x391C54u; }
            if (ctx->pc != 0x391C54u) { return; }
        }
        }
    }
    ctx->pc = 0x391C54u;
label_391c54:
    // 0x391c54: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x391c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_391c58:
    // 0x391c58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391c5c:
    // 0x391c5c: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x391c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_391c60:
    // 0x391c60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x391c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391c64:
    // 0x391c64: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x391c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_391c68:
    // 0x391c68: 0x601827  not         $v1, $v1
    ctx->pc = 0x391c68u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_391c6c:
    // 0x391c6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x391c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_391c70:
    // 0x391c70: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x391c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_391c74:
    // 0x391c74: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x391c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_391c78:
    // 0x391c78: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x391c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_391c7c:
    // 0x391c7c: 0xc08bff0  jal         func_22FFC0
label_391c80:
    if (ctx->pc == 0x391C80u) {
        ctx->pc = 0x391C80u;
            // 0x391c80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x391C84u;
        goto label_391c84;
    }
    ctx->pc = 0x391C7Cu;
    SET_GPR_U32(ctx, 31, 0x391C84u);
    ctx->pc = 0x391C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391C7Cu;
            // 0x391c80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391C84u; }
        if (ctx->pc != 0x391C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391C84u; }
        if (ctx->pc != 0x391C84u) { return; }
    }
    ctx->pc = 0x391C84u;
label_391c84:
    // 0x391c84: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x391c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_391c88:
    // 0x391c88: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x391c88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_391c8c:
    // 0x391c8c: 0x50200075  beql        $at, $zero, . + 4 + (0x75 << 2)
label_391c90:
    if (ctx->pc == 0x391C90u) {
        ctx->pc = 0x391C90u;
            // 0x391c90: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x391C94u;
        goto label_391c94;
    }
    ctx->pc = 0x391C8Cu;
    {
        const bool branch_taken_0x391c8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x391c8c) {
            ctx->pc = 0x391C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391C8Cu;
            // 0x391c90: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391E64u;
            goto label_391e64;
        }
    }
    ctx->pc = 0x391C94u;
label_391c94:
    // 0x391c94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x391c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_391c98:
    // 0x391c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x391c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_391c9c:
    // 0x391c9c: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x391c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_391ca0:
    // 0x391ca0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x391ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_391ca4:
    // 0x391ca4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x391ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391ca8:
    // 0x391ca8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391cac:
    // 0x391cac: 0xc08914c  jal         func_224530
label_391cb0:
    if (ctx->pc == 0x391CB0u) {
        ctx->pc = 0x391CB0u;
            // 0x391cb0: 0xae800044  sw          $zero, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x391CB4u;
        goto label_391cb4;
    }
    ctx->pc = 0x391CACu;
    SET_GPR_U32(ctx, 31, 0x391CB4u);
    ctx->pc = 0x391CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391CACu;
            // 0x391cb0: 0xae800044  sw          $zero, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391CB4u; }
        if (ctx->pc != 0x391CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391CB4u; }
        if (ctx->pc != 0x391CB4u) { return; }
    }
    ctx->pc = 0x391CB4u;
label_391cb4:
    // 0x391cb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391cb8:
    // 0x391cb8: 0xc074740  jal         func_1D1D00
label_391cbc:
    if (ctx->pc == 0x391CBCu) {
        ctx->pc = 0x391CBCu;
            // 0x391cbc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x391CC0u;
        goto label_391cc0;
    }
    ctx->pc = 0x391CB8u;
    SET_GPR_U32(ctx, 31, 0x391CC0u);
    ctx->pc = 0x391CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391CB8u;
            // 0x391cbc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391CC0u; }
        if (ctx->pc != 0x391CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391CC0u; }
        if (ctx->pc != 0x391CC0u) { return; }
    }
    ctx->pc = 0x391CC0u;
label_391cc0:
    // 0x391cc0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391cc4:
    if (ctx->pc == 0x391CC4u) {
        ctx->pc = 0x391CC4u;
            // 0x391cc4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391CC8u;
        goto label_391cc8;
    }
    ctx->pc = 0x391CC0u;
    {
        const bool branch_taken_0x391cc0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391cc0) {
            ctx->pc = 0x391CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391CC0u;
            // 0x391cc4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391CD4u;
            goto label_391cd4;
        }
    }
    ctx->pc = 0x391CC8u;
label_391cc8:
    // 0x391cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391ccc:
    // 0x391ccc: 0x10000007  b           . + 4 + (0x7 << 2)
label_391cd0:
    if (ctx->pc == 0x391CD0u) {
        ctx->pc = 0x391CD0u;
            // 0x391cd0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391CD4u;
        goto label_391cd4;
    }
    ctx->pc = 0x391CCCu;
    {
        const bool branch_taken_0x391ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391CCCu;
            // 0x391cd0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ccc) {
            ctx->pc = 0x391CECu;
            goto label_391cec;
        }
    }
    ctx->pc = 0x391CD4u;
label_391cd4:
    // 0x391cd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391cd8:
    // 0x391cd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_391cdc:
    // 0x391cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391ce0:
    // 0x391ce0: 0x0  nop
    ctx->pc = 0x391ce0u;
    // NOP
label_391ce4:
    // 0x391ce4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x391ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_391ce8:
    // 0x391ce8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391ce8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_391cec:
    // 0x391cec: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x391cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_391cf0:
    // 0x391cf0: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x391cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_391cf4:
    // 0x391cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391cf8:
    // 0x391cf8: 0x0  nop
    ctx->pc = 0x391cf8u;
    // NOP
label_391cfc:
    // 0x391cfc: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x391cfcu;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391d00:
    // 0x391d00: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x391d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_391d04:
    // 0x391d04: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x391d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_391d08:
    // 0x391d08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391d0c:
    // 0x391d0c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x391d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_391d10:
    // 0x391d10: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x391d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391d14:
    // 0x391d14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x391d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_391d18:
    // 0x391d18: 0xc074740  jal         func_1D1D00
label_391d1c:
    if (ctx->pc == 0x391D1Cu) {
        ctx->pc = 0x391D1Cu;
            // 0x391d1c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x391D20u;
        goto label_391d20;
    }
    ctx->pc = 0x391D18u;
    SET_GPR_U32(ctx, 31, 0x391D20u);
    ctx->pc = 0x391D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391D18u;
            // 0x391d1c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391D20u; }
        if (ctx->pc != 0x391D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391D20u; }
        if (ctx->pc != 0x391D20u) { return; }
    }
    ctx->pc = 0x391D20u;
label_391d20:
    // 0x391d20: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391d24:
    if (ctx->pc == 0x391D24u) {
        ctx->pc = 0x391D24u;
            // 0x391d24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391D28u;
        goto label_391d28;
    }
    ctx->pc = 0x391D20u;
    {
        const bool branch_taken_0x391d20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391d20) {
            ctx->pc = 0x391D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391D20u;
            // 0x391d24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391D34u;
            goto label_391d34;
        }
    }
    ctx->pc = 0x391D28u;
label_391d28:
    // 0x391d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391d2c:
    // 0x391d2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_391d30:
    if (ctx->pc == 0x391D30u) {
        ctx->pc = 0x391D30u;
            // 0x391d30: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391D34u;
        goto label_391d34;
    }
    ctx->pc = 0x391D2Cu;
    {
        const bool branch_taken_0x391d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391D2Cu;
            // 0x391d30: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d2c) {
            ctx->pc = 0x391D4Cu;
            goto label_391d4c;
        }
    }
    ctx->pc = 0x391D34u;
label_391d34:
    // 0x391d34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391d38:
    // 0x391d38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_391d3c:
    // 0x391d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391d40:
    // 0x391d40: 0x0  nop
    ctx->pc = 0x391d40u;
    // NOP
label_391d44:
    // 0x391d44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x391d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_391d48:
    // 0x391d48: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391d48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_391d4c:
    // 0x391d4c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x391d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_391d50:
    // 0x391d50: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x391d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_391d54:
    // 0x391d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391d58:
    // 0x391d58: 0x0  nop
    ctx->pc = 0x391d58u;
    // NOP
label_391d5c:
    // 0x391d5c: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x391d5cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391d60:
    // 0x391d60: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x391d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_391d64:
    // 0x391d64: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x391d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_391d68:
    // 0x391d68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391d6c:
    // 0x391d6c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x391d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_391d70:
    // 0x391d70: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x391d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391d74:
    // 0x391d74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x391d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_391d78:
    // 0x391d78: 0xc074740  jal         func_1D1D00
label_391d7c:
    if (ctx->pc == 0x391D7Cu) {
        ctx->pc = 0x391D7Cu;
            // 0x391d7c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x391D80u;
        goto label_391d80;
    }
    ctx->pc = 0x391D78u;
    SET_GPR_U32(ctx, 31, 0x391D80u);
    ctx->pc = 0x391D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391D78u;
            // 0x391d7c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391D80u; }
        if (ctx->pc != 0x391D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391D80u; }
        if (ctx->pc != 0x391D80u) { return; }
    }
    ctx->pc = 0x391D80u;
label_391d80:
    // 0x391d80: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391d84:
    if (ctx->pc == 0x391D84u) {
        ctx->pc = 0x391D84u;
            // 0x391d84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391D88u;
        goto label_391d88;
    }
    ctx->pc = 0x391D80u;
    {
        const bool branch_taken_0x391d80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391d80) {
            ctx->pc = 0x391D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391D80u;
            // 0x391d84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391D94u;
            goto label_391d94;
        }
    }
    ctx->pc = 0x391D88u;
label_391d88:
    // 0x391d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391d8c:
    // 0x391d8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_391d90:
    if (ctx->pc == 0x391D90u) {
        ctx->pc = 0x391D90u;
            // 0x391d90: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391D94u;
        goto label_391d94;
    }
    ctx->pc = 0x391D8Cu;
    {
        const bool branch_taken_0x391d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391D8Cu;
            // 0x391d90: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d8c) {
            ctx->pc = 0x391DACu;
            goto label_391dac;
        }
    }
    ctx->pc = 0x391D94u;
label_391d94:
    // 0x391d94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391d98:
    // 0x391d98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_391d9c:
    // 0x391d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391da0:
    // 0x391da0: 0x0  nop
    ctx->pc = 0x391da0u;
    // NOP
label_391da4:
    // 0x391da4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x391da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_391da8:
    // 0x391da8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391da8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_391dac:
    // 0x391dac: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x391dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_391db0:
    // 0x391db0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x391db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_391db4:
    // 0x391db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391db8:
    // 0x391db8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x391db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_391dbc:
    // 0x391dbc: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x391dbcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391dc0:
    // 0x391dc0: 0x8e87003c  lw          $a3, 0x3C($s4)
    ctx->pc = 0x391dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_391dc4:
    // 0x391dc4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x391dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_391dc8:
    // 0x391dc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x391dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_391dcc:
    // 0x391dcc: 0x3446fa35  ori         $a2, $v0, 0xFA35
    ctx->pc = 0x391dccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_391dd0:
    // 0x391dd0: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x391dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
label_391dd4:
    // 0x391dd4: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x391dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_391dd8:
    // 0x391dd8: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x391dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391ddc:
    // 0x391ddc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x391ddcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_391de0:
    // 0x391de0: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x391de0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_391de4:
    // 0x391de4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x391de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_391de8:
    // 0x391de8: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x391de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
label_391dec:
    // 0x391dec: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x391decu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_391df0:
    // 0x391df0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x391df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_391df4:
    // 0x391df4: 0x0  nop
    ctx->pc = 0x391df4u;
    // NOP
label_391df8:
    // 0x391df8: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x391df8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_391dfc:
    // 0x391dfc: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x391dfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_391e00:
    // 0x391e00: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x391e00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_391e04:
    // 0x391e04: 0x0  nop
    ctx->pc = 0x391e04u;
    // NOP
label_391e08:
    // 0x391e08: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x391e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_391e0c:
    // 0x391e0c: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x391e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_391e10:
    // 0x391e10: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x391e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_391e14:
    // 0x391e14: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x391e14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_391e18:
    // 0x391e18: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x391e18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_391e1c:
    // 0x391e1c: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x391e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_391e20:
    // 0x391e20: 0x46151818  adda.s      $f3, $f21
    ctx->pc = 0x391e20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_391e24:
    // 0x391e24: 0x4617001d  msub.s      $f0, $f0, $f23
    ctx->pc = 0x391e24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[23]));
label_391e28:
    // 0x391e28: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x391e28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_391e2c:
    // 0x391e2c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x391e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_391e30:
    // 0x391e30: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x391e30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_391e34:
    // 0x391e34: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x391e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_391e38:
    // 0x391e38: 0xc088b74  jal         func_222DD0
label_391e3c:
    if (ctx->pc == 0x391E3Cu) {
        ctx->pc = 0x391E3Cu;
            // 0x391e3c: 0xae620158  sw          $v0, 0x158($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 2));
        ctx->pc = 0x391E40u;
        goto label_391e40;
    }
    ctx->pc = 0x391E38u;
    SET_GPR_U32(ctx, 31, 0x391E40u);
    ctx->pc = 0x391E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391E38u;
            // 0x391e3c: 0xae620158  sw          $v0, 0x158($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391E40u; }
        if (ctx->pc != 0x391E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391E40u; }
        if (ctx->pc != 0x391E40u) { return; }
    }
    ctx->pc = 0x391E40u;
label_391e40:
    // 0x391e40: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x391e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_391e44:
    // 0x391e44: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x391e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_391e48:
    // 0x391e48: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x391e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_391e4c:
    // 0x391e4c: 0x320f809  jalr        $t9
label_391e50:
    if (ctx->pc == 0x391E50u) {
        ctx->pc = 0x391E50u;
            // 0x391e50: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x391E54u;
        goto label_391e54;
    }
    ctx->pc = 0x391E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x391E54u);
        ctx->pc = 0x391E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391E4Cu;
            // 0x391e50: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x391E54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x391E54u; }
            if (ctx->pc != 0x391E54u) { return; }
        }
        }
    }
    ctx->pc = 0x391E54u;
label_391e54:
    // 0x391e54: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x391e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_391e58:
    // 0x391e58: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x391e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_391e5c:
    // 0x391e5c: 0x1000020c  b           . + 4 + (0x20C << 2)
label_391e60:
    if (ctx->pc == 0x391E60u) {
        ctx->pc = 0x391E60u;
            // 0x391e60: 0xae630160  sw          $v1, 0x160($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 3));
        ctx->pc = 0x391E64u;
        goto label_391e64;
    }
    ctx->pc = 0x391E5Cu;
    {
        const bool branch_taken_0x391e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391E5Cu;
            // 0x391e60: 0xae630160  sw          $v1, 0x160($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e5c) {
            ctx->pc = 0x392690u;
            goto label_392690;
        }
    }
    ctx->pc = 0x391E64u;
label_391e64:
    // 0x391e64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x391e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391e68:
    // 0x391e68: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x391e68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_391e6c:
    // 0x391e6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x391e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_391e70:
    // 0x391e70: 0xae850044  sw          $a1, 0x44($s4)
    ctx->pc = 0x391e70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 5));
label_391e74:
    // 0x391e74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x391e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_391e78:
    // 0x391e78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391e7c:
    // 0x391e7c: 0xc08914c  jal         func_224530
label_391e80:
    if (ctx->pc == 0x391E80u) {
        ctx->pc = 0x391E80u;
            // 0x391e80: 0xe6940028  swc1        $f20, 0x28($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->pc = 0x391E84u;
        goto label_391e84;
    }
    ctx->pc = 0x391E7Cu;
    SET_GPR_U32(ctx, 31, 0x391E84u);
    ctx->pc = 0x391E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391E7Cu;
            // 0x391e80: 0xe6940028  swc1        $f20, 0x28($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391E84u; }
        if (ctx->pc != 0x391E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391E84u; }
        if (ctx->pc != 0x391E84u) { return; }
    }
    ctx->pc = 0x391E84u;
label_391e84:
    // 0x391e84: 0x8e650214  lw          $a1, 0x214($s3)
    ctx->pc = 0x391e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_391e88:
    // 0x391e88: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x391e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_391e8c:
    // 0x391e8c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x391e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_391e90:
    // 0x391e90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391e94:
    // 0x391e94: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x391e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_391e98:
    // 0x391e98: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x391e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_391e9c:
    // 0x391e9c: 0xae640214  sw          $a0, 0x214($s3)
    ctx->pc = 0x391e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 4));
label_391ea0:
    // 0x391ea0: 0xae63015c  sw          $v1, 0x15C($s3)
    ctx->pc = 0x391ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 348), GPR_U32(ctx, 3));
label_391ea4:
    // 0x391ea4: 0xc074740  jal         func_1D1D00
label_391ea8:
    if (ctx->pc == 0x391EA8u) {
        ctx->pc = 0x391EA8u;
            // 0x391ea8: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x391EACu;
        goto label_391eac;
    }
    ctx->pc = 0x391EA4u;
    SET_GPR_U32(ctx, 31, 0x391EACu);
    ctx->pc = 0x391EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391EA4u;
            // 0x391ea8: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391EACu; }
        if (ctx->pc != 0x391EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391EACu; }
        if (ctx->pc != 0x391EACu) { return; }
    }
    ctx->pc = 0x391EACu;
label_391eac:
    // 0x391eac: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391eb0:
    if (ctx->pc == 0x391EB0u) {
        ctx->pc = 0x391EB0u;
            // 0x391eb0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391EB4u;
        goto label_391eb4;
    }
    ctx->pc = 0x391EACu;
    {
        const bool branch_taken_0x391eac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391eac) {
            ctx->pc = 0x391EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391EACu;
            // 0x391eb0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391EC0u;
            goto label_391ec0;
        }
    }
    ctx->pc = 0x391EB4u;
label_391eb4:
    // 0x391eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391eb8:
    // 0x391eb8: 0x10000007  b           . + 4 + (0x7 << 2)
label_391ebc:
    if (ctx->pc == 0x391EBCu) {
        ctx->pc = 0x391EBCu;
            // 0x391ebc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391EC0u;
        goto label_391ec0;
    }
    ctx->pc = 0x391EB8u;
    {
        const bool branch_taken_0x391eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391EB8u;
            // 0x391ebc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391eb8) {
            ctx->pc = 0x391ED8u;
            goto label_391ed8;
        }
    }
    ctx->pc = 0x391EC0u;
label_391ec0:
    // 0x391ec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391ec4:
    // 0x391ec4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_391ec8:
    // 0x391ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391ecc:
    // 0x391ecc: 0x0  nop
    ctx->pc = 0x391eccu;
    // NOP
label_391ed0:
    // 0x391ed0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x391ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_391ed4:
    // 0x391ed4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391ed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_391ed8:
    // 0x391ed8: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x391ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_391edc:
    // 0x391edc: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x391edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_391ee0:
    // 0x391ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391ee4:
    // 0x391ee4: 0x0  nop
    ctx->pc = 0x391ee4u;
    // NOP
label_391ee8:
    // 0x391ee8: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x391ee8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391eec:
    // 0x391eec: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x391eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_391ef0:
    // 0x391ef0: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x391ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_391ef4:
    // 0x391ef4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391ef8:
    // 0x391ef8: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x391ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_391efc:
    // 0x391efc: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x391efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391f00:
    // 0x391f00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x391f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_391f04:
    // 0x391f04: 0xc074740  jal         func_1D1D00
label_391f08:
    if (ctx->pc == 0x391F08u) {
        ctx->pc = 0x391F08u;
            // 0x391f08: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x391F0Cu;
        goto label_391f0c;
    }
    ctx->pc = 0x391F04u;
    SET_GPR_U32(ctx, 31, 0x391F0Cu);
    ctx->pc = 0x391F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391F04u;
            // 0x391f08: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391F0Cu; }
        if (ctx->pc != 0x391F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391F0Cu; }
        if (ctx->pc != 0x391F0Cu) { return; }
    }
    ctx->pc = 0x391F0Cu;
label_391f0c:
    // 0x391f0c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391f10:
    if (ctx->pc == 0x391F10u) {
        ctx->pc = 0x391F10u;
            // 0x391f10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391F14u;
        goto label_391f14;
    }
    ctx->pc = 0x391F0Cu;
    {
        const bool branch_taken_0x391f0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391f0c) {
            ctx->pc = 0x391F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391F0Cu;
            // 0x391f10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391F20u;
            goto label_391f20;
        }
    }
    ctx->pc = 0x391F14u;
label_391f14:
    // 0x391f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391f18:
    // 0x391f18: 0x10000007  b           . + 4 + (0x7 << 2)
label_391f1c:
    if (ctx->pc == 0x391F1Cu) {
        ctx->pc = 0x391F1Cu;
            // 0x391f1c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391F20u;
        goto label_391f20;
    }
    ctx->pc = 0x391F18u;
    {
        const bool branch_taken_0x391f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391F18u;
            // 0x391f1c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f18) {
            ctx->pc = 0x391F38u;
            goto label_391f38;
        }
    }
    ctx->pc = 0x391F20u;
label_391f20:
    // 0x391f20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391f24:
    // 0x391f24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_391f28:
    // 0x391f28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391f2c:
    // 0x391f2c: 0x0  nop
    ctx->pc = 0x391f2cu;
    // NOP
label_391f30:
    // 0x391f30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x391f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_391f34:
    // 0x391f34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_391f38:
    // 0x391f38: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x391f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_391f3c:
    // 0x391f3c: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x391f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_391f40:
    // 0x391f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391f44:
    // 0x391f44: 0x0  nop
    ctx->pc = 0x391f44u;
    // NOP
label_391f48:
    // 0x391f48: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x391f48u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391f4c:
    // 0x391f4c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x391f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_391f50:
    // 0x391f50: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x391f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_391f54:
    // 0x391f54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391f58:
    // 0x391f58: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x391f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_391f5c:
    // 0x391f5c: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x391f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391f60:
    // 0x391f60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x391f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_391f64:
    // 0x391f64: 0xc074740  jal         func_1D1D00
label_391f68:
    if (ctx->pc == 0x391F68u) {
        ctx->pc = 0x391F68u;
            // 0x391f68: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x391F6Cu;
        goto label_391f6c;
    }
    ctx->pc = 0x391F64u;
    SET_GPR_U32(ctx, 31, 0x391F6Cu);
    ctx->pc = 0x391F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391F64u;
            // 0x391f68: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391F6Cu; }
        if (ctx->pc != 0x391F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391F6Cu; }
        if (ctx->pc != 0x391F6Cu) { return; }
    }
    ctx->pc = 0x391F6Cu;
label_391f6c:
    // 0x391f6c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391f70:
    if (ctx->pc == 0x391F70u) {
        ctx->pc = 0x391F70u;
            // 0x391f70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391F74u;
        goto label_391f74;
    }
    ctx->pc = 0x391F6Cu;
    {
        const bool branch_taken_0x391f6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391f6c) {
            ctx->pc = 0x391F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391F6Cu;
            // 0x391f70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391F80u;
            goto label_391f80;
        }
    }
    ctx->pc = 0x391F74u;
label_391f74:
    // 0x391f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391f78:
    // 0x391f78: 0x10000007  b           . + 4 + (0x7 << 2)
label_391f7c:
    if (ctx->pc == 0x391F7Cu) {
        ctx->pc = 0x391F7Cu;
            // 0x391f7c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391F80u;
        goto label_391f80;
    }
    ctx->pc = 0x391F78u;
    {
        const bool branch_taken_0x391f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391F78u;
            // 0x391f7c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f78) {
            ctx->pc = 0x391F98u;
            goto label_391f98;
        }
    }
    ctx->pc = 0x391F80u;
label_391f80:
    // 0x391f80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391f84:
    // 0x391f84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_391f88:
    // 0x391f88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391f8c:
    // 0x391f8c: 0x0  nop
    ctx->pc = 0x391f8cu;
    // NOP
label_391f90:
    // 0x391f90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x391f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_391f94:
    // 0x391f94: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391f94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_391f98:
    // 0x391f98: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x391f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_391f9c:
    // 0x391f9c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x391f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_391fa0:
    // 0x391fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391fa4:
    // 0x391fa4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x391fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_391fa8:
    // 0x391fa8: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x391fa8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391fac:
    // 0x391fac: 0x8e87003c  lw          $a3, 0x3C($s4)
    ctx->pc = 0x391facu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_391fb0:
    // 0x391fb0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x391fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_391fb4:
    // 0x391fb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x391fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_391fb8:
    // 0x391fb8: 0x3446fa35  ori         $a2, $v0, 0xFA35
    ctx->pc = 0x391fb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_391fbc:
    // 0x391fbc: 0x3c02423c  lui         $v0, 0x423C
    ctx->pc = 0x391fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16956 << 16));
label_391fc0:
    // 0x391fc0: 0x34427edd  ori         $v0, $v0, 0x7EDD
    ctx->pc = 0x391fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32477);
label_391fc4:
    // 0x391fc4: 0xc4e00050  lwc1        $f0, 0x50($a3)
    ctx->pc = 0x391fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391fc8:
    // 0x391fc8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x391fc8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_391fcc:
    // 0x391fcc: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x391fccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_391fd0:
    // 0x391fd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x391fd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_391fd4:
    // 0x391fd4: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x391fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
label_391fd8:
    // 0x391fd8: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x391fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_391fdc:
    // 0x391fdc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x391fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_391fe0:
    // 0x391fe0: 0x0  nop
    ctx->pc = 0x391fe0u;
    // NOP
label_391fe4:
    // 0x391fe4: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x391fe4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_391fe8:
    // 0x391fe8: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x391fe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_391fec:
    // 0x391fec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x391fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_391ff0:
    // 0x391ff0: 0x0  nop
    ctx->pc = 0x391ff0u;
    // NOP
label_391ff4:
    // 0x391ff4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x391ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_391ff8:
    // 0x391ff8: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x391ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_391ffc:
    // 0x391ffc: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x391ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_392000:
    // 0x392000: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x392000u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_392004:
    // 0x392004: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x392004u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_392008:
    // 0x392008: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x392008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_39200c:
    // 0x39200c: 0x46151818  adda.s      $f3, $f21
    ctx->pc = 0x39200cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_392010:
    // 0x392010: 0x4617001d  msub.s      $f0, $f0, $f23
    ctx->pc = 0x392010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[23]));
label_392014:
    // 0x392014: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x392014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_392018:
    // 0x392018: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x392018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_39201c:
    // 0x39201c: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x39201cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_392020:
    // 0x392020: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x392020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_392024:
    // 0x392024: 0xc088b74  jal         func_222DD0
label_392028:
    if (ctx->pc == 0x392028u) {
        ctx->pc = 0x392028u;
            // 0x392028: 0xae620158  sw          $v0, 0x158($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 2));
        ctx->pc = 0x39202Cu;
        goto label_39202c;
    }
    ctx->pc = 0x392024u;
    SET_GPR_U32(ctx, 31, 0x39202Cu);
    ctx->pc = 0x392028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392024u;
            // 0x392028: 0xae620158  sw          $v0, 0x158($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39202Cu; }
        if (ctx->pc != 0x39202Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39202Cu; }
        if (ctx->pc != 0x39202Cu) { return; }
    }
    ctx->pc = 0x39202Cu;
label_39202c:
    // 0x39202c: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x39202cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_392030:
    // 0x392030: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x392030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_392034:
    // 0x392034: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x392034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_392038:
    // 0x392038: 0x320f809  jalr        $t9
label_39203c:
    if (ctx->pc == 0x39203Cu) {
        ctx->pc = 0x39203Cu;
            // 0x39203c: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x392040u;
        goto label_392040;
    }
    ctx->pc = 0x392038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x392040u);
        ctx->pc = 0x39203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392038u;
            // 0x39203c: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x392040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x392040u; }
            if (ctx->pc != 0x392040u) { return; }
        }
        }
    }
    ctx->pc = 0x392040u;
label_392040:
    // 0x392040: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x392040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_392044:
    // 0x392044: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x392044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_392048:
    // 0x392048: 0x10000191  b           . + 4 + (0x191 << 2)
label_39204c:
    if (ctx->pc == 0x39204Cu) {
        ctx->pc = 0x39204Cu;
            // 0x39204c: 0xae630160  sw          $v1, 0x160($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 3));
        ctx->pc = 0x392050u;
        goto label_392050;
    }
    ctx->pc = 0x392048u;
    {
        const bool branch_taken_0x392048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39204Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392048u;
            // 0x39204c: 0xae630160  sw          $v1, 0x160($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392048) {
            ctx->pc = 0x392690u;
            goto label_392690;
        }
    }
    ctx->pc = 0x392050u;
label_392050:
    // 0x392050: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x392050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_392054:
    // 0x392054: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x392054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_392058:
    // 0x392058: 0x1483018d  bne         $a0, $v1, . + 4 + (0x18D << 2)
label_39205c:
    if (ctx->pc == 0x39205Cu) {
        ctx->pc = 0x392060u;
        goto label_392060;
    }
    ctx->pc = 0x392058u;
    {
        const bool branch_taken_0x392058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x392058) {
            ctx->pc = 0x392690u;
            goto label_392690;
        }
    }
    ctx->pc = 0x392060u;
label_392060:
    // 0x392060: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392064:
    // 0x392064: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x392064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_392068:
    // 0x392068: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x392068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
label_39206c:
    // 0x39206c: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x39206cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
label_392070:
    // 0x392070: 0xc088b74  jal         func_222DD0
label_392074:
    if (ctx->pc == 0x392074u) {
        ctx->pc = 0x392074u;
            // 0x392074: 0xafa0017c  sw          $zero, 0x17C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
        ctx->pc = 0x392078u;
        goto label_392078;
    }
    ctx->pc = 0x392070u;
    SET_GPR_U32(ctx, 31, 0x392078u);
    ctx->pc = 0x392074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392070u;
            // 0x392074: 0xafa0017c  sw          $zero, 0x17C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392078u; }
        if (ctx->pc != 0x392078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392078u; }
        if (ctx->pc != 0x392078u) { return; }
    }
    ctx->pc = 0x392078u;
label_392078:
    // 0x392078: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x392078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39207c:
    // 0x39207c: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x39207cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_392080:
    // 0x392080: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x392080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_392084:
    // 0x392084: 0x320f809  jalr        $t9
label_392088:
    if (ctx->pc == 0x392088u) {
        ctx->pc = 0x392088u;
            // 0x392088: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x39208Cu;
        goto label_39208c;
    }
    ctx->pc = 0x392084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39208Cu);
        ctx->pc = 0x392088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392084u;
            // 0x392088: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39208Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39208Cu; }
            if (ctx->pc != 0x39208Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39208Cu;
label_39208c:
    // 0x39208c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39208cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_392090:
    // 0x392090: 0xc074740  jal         func_1D1D00
label_392094:
    if (ctx->pc == 0x392094u) {
        ctx->pc = 0x392094u;
            // 0x392094: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x392098u;
        goto label_392098;
    }
    ctx->pc = 0x392090u;
    SET_GPR_U32(ctx, 31, 0x392098u);
    ctx->pc = 0x392094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392090u;
            // 0x392094: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392098u; }
        if (ctx->pc != 0x392098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392098u; }
        if (ctx->pc != 0x392098u) { return; }
    }
    ctx->pc = 0x392098u;
label_392098:
    // 0x392098: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39209c:
    if (ctx->pc == 0x39209Cu) {
        ctx->pc = 0x39209Cu;
            // 0x39209c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3920A0u;
        goto label_3920a0;
    }
    ctx->pc = 0x392098u;
    {
        const bool branch_taken_0x392098 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x392098) {
            ctx->pc = 0x39209Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392098u;
            // 0x39209c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3920ACu;
            goto label_3920ac;
        }
    }
    ctx->pc = 0x3920A0u;
label_3920a0:
    // 0x3920a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3920a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3920a4:
    // 0x3920a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3920a8:
    if (ctx->pc == 0x3920A8u) {
        ctx->pc = 0x3920A8u;
            // 0x3920a8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3920ACu;
        goto label_3920ac;
    }
    ctx->pc = 0x3920A4u;
    {
        const bool branch_taken_0x3920a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3920A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3920A4u;
            // 0x3920a8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3920a4) {
            ctx->pc = 0x3920C4u;
            goto label_3920c4;
        }
    }
    ctx->pc = 0x3920ACu;
label_3920ac:
    // 0x3920ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3920acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3920b0:
    // 0x3920b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3920b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3920b4:
    // 0x3920b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3920b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3920b8:
    // 0x3920b8: 0x0  nop
    ctx->pc = 0x3920b8u;
    // NOP
label_3920bc:
    // 0x3920bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3920bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3920c0:
    // 0x3920c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3920c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3920c4:
    // 0x3920c4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3920c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_3920c8:
    // 0x3920c8: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x3920c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_3920cc:
    // 0x3920cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3920ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3920d0:
    // 0x3920d0: 0x0  nop
    ctx->pc = 0x3920d0u;
    // NOP
label_3920d4:
    // 0x3920d4: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x3920d4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3920d8:
    // 0x3920d8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3920d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_3920dc:
    // 0x3920dc: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x3920dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_3920e0:
    // 0x3920e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3920e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3920e4:
    // 0x3920e4: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x3920e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_3920e8:
    // 0x3920e8: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x3920e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3920ec:
    // 0x3920ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3920ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3920f0:
    // 0x3920f0: 0xc074740  jal         func_1D1D00
label_3920f4:
    if (ctx->pc == 0x3920F4u) {
        ctx->pc = 0x3920F4u;
            // 0x3920f4: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3920F8u;
        goto label_3920f8;
    }
    ctx->pc = 0x3920F0u;
    SET_GPR_U32(ctx, 31, 0x3920F8u);
    ctx->pc = 0x3920F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3920F0u;
            // 0x3920f4: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3920F8u; }
        if (ctx->pc != 0x3920F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3920F8u; }
        if (ctx->pc != 0x3920F8u) { return; }
    }
    ctx->pc = 0x3920F8u;
label_3920f8:
    // 0x3920f8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3920fc:
    if (ctx->pc == 0x3920FCu) {
        ctx->pc = 0x3920FCu;
            // 0x3920fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x392100u;
        goto label_392100;
    }
    ctx->pc = 0x3920F8u;
    {
        const bool branch_taken_0x3920f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3920f8) {
            ctx->pc = 0x3920FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3920F8u;
            // 0x3920fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39210Cu;
            goto label_39210c;
        }
    }
    ctx->pc = 0x392100u;
label_392100:
    // 0x392100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x392100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_392104:
    // 0x392104: 0x10000007  b           . + 4 + (0x7 << 2)
label_392108:
    if (ctx->pc == 0x392108u) {
        ctx->pc = 0x392108u;
            // 0x392108: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39210Cu;
        goto label_39210c;
    }
    ctx->pc = 0x392104u;
    {
        const bool branch_taken_0x392104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392104u;
            // 0x392108: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392104) {
            ctx->pc = 0x392124u;
            goto label_392124;
        }
    }
    ctx->pc = 0x39210Cu;
label_39210c:
    // 0x39210c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_392110:
    // 0x392110: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x392110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_392114:
    // 0x392114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_392118:
    // 0x392118: 0x0  nop
    ctx->pc = 0x392118u;
    // NOP
label_39211c:
    // 0x39211c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39211cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_392120:
    // 0x392120: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x392120u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_392124:
    // 0x392124: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x392124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_392128:
    // 0x392128: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x392128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39212c:
    // 0x39212c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39212cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_392130:
    // 0x392130: 0x0  nop
    ctx->pc = 0x392130u;
    // NOP
label_392134:
    // 0x392134: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x392134u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_392138:
    // 0x392138: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x392138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_39213c:
    // 0x39213c: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x39213cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_392140:
    // 0x392140: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x392140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_392144:
    // 0x392144: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x392144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_392148:
    // 0x392148: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x392148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39214c:
    // 0x39214c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39214cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_392150:
    // 0x392150: 0xc074740  jal         func_1D1D00
label_392154:
    if (ctx->pc == 0x392154u) {
        ctx->pc = 0x392154u;
            // 0x392154: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x392158u;
        goto label_392158;
    }
    ctx->pc = 0x392150u;
    SET_GPR_U32(ctx, 31, 0x392158u);
    ctx->pc = 0x392154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392150u;
            // 0x392154: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392158u; }
        if (ctx->pc != 0x392158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392158u; }
        if (ctx->pc != 0x392158u) { return; }
    }
    ctx->pc = 0x392158u;
label_392158:
    // 0x392158: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39215c:
    if (ctx->pc == 0x39215Cu) {
        ctx->pc = 0x39215Cu;
            // 0x39215c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x392160u;
        goto label_392160;
    }
    ctx->pc = 0x392158u;
    {
        const bool branch_taken_0x392158 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x392158) {
            ctx->pc = 0x39215Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392158u;
            // 0x39215c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39216Cu;
            goto label_39216c;
        }
    }
    ctx->pc = 0x392160u;
label_392160:
    // 0x392160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x392160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_392164:
    // 0x392164: 0x10000007  b           . + 4 + (0x7 << 2)
label_392168:
    if (ctx->pc == 0x392168u) {
        ctx->pc = 0x392168u;
            // 0x392168: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39216Cu;
        goto label_39216c;
    }
    ctx->pc = 0x392164u;
    {
        const bool branch_taken_0x392164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392164u;
            // 0x392168: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392164) {
            ctx->pc = 0x392184u;
            goto label_392184;
        }
    }
    ctx->pc = 0x39216Cu;
label_39216c:
    // 0x39216c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_392170:
    // 0x392170: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x392170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_392174:
    // 0x392174: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_392178:
    // 0x392178: 0x0  nop
    ctx->pc = 0x392178u;
    // NOP
label_39217c:
    // 0x39217c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39217cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_392180:
    // 0x392180: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x392180u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_392184:
    // 0x392184: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x392184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_392188:
    // 0x392188: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x392188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_39218c:
    // 0x39218c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39218cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_392190:
    // 0x392190: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x392190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_392194:
    // 0x392194: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x392194u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_392198:
    // 0x392198: 0x8e87003c  lw          $a3, 0x3C($s4)
    ctx->pc = 0x392198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39219c:
    // 0x39219c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x39219cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_3921a0:
    // 0x3921a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3921a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3921a4:
    // 0x3921a4: 0x3446fa35  ori         $a2, $v0, 0xFA35
    ctx->pc = 0x3921a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_3921a8:
    // 0x3921a8: 0x3c02423c  lui         $v0, 0x423C
    ctx->pc = 0x3921a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16956 << 16));
label_3921ac:
    // 0x3921ac: 0x34427edd  ori         $v0, $v0, 0x7EDD
    ctx->pc = 0x3921acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32477);
label_3921b0:
    // 0x3921b0: 0xc4e00044  lwc1        $f0, 0x44($a3)
    ctx->pc = 0x3921b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3921b4:
    // 0x3921b4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3921b4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3921b8:
    // 0x3921b8: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x3921b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3921bc:
    // 0x3921bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3921bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3921c0:
    // 0x3921c0: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x3921c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
label_3921c4:
    // 0x3921c4: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x3921c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_3921c8:
    // 0x3921c8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3921c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3921cc:
    // 0x3921cc: 0x0  nop
    ctx->pc = 0x3921ccu;
    // NOP
label_3921d0:
    // 0x3921d0: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x3921d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3921d4:
    // 0x3921d4: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x3921d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_3921d8:
    // 0x3921d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3921d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3921dc:
    // 0x3921dc: 0x0  nop
    ctx->pc = 0x3921dcu;
    // NOP
label_3921e0:
    // 0x3921e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3921e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3921e4:
    // 0x3921e4: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x3921e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_3921e8:
    // 0x3921e8: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x3921e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_3921ec:
    // 0x3921ec: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x3921ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_3921f0:
    // 0x3921f0: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x3921f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_3921f4:
    // 0x3921f4: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x3921f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_3921f8:
    // 0x3921f8: 0x46151818  adda.s      $f3, $f21
    ctx->pc = 0x3921f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_3921fc:
    // 0x3921fc: 0x4617001d  msub.s      $f0, $f0, $f23
    ctx->pc = 0x3921fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[23]));
label_392200:
    // 0x392200: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x392200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_392204:
    // 0x392204: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x392204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_392208:
    // 0x392208: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x392208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_39220c:
    // 0x39220c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x39220cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_392210:
    // 0x392210: 0xc088b74  jal         func_222DD0
label_392214:
    if (ctx->pc == 0x392214u) {
        ctx->pc = 0x392214u;
            // 0x392214: 0xae620158  sw          $v0, 0x158($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 2));
        ctx->pc = 0x392218u;
        goto label_392218;
    }
    ctx->pc = 0x392210u;
    SET_GPR_U32(ctx, 31, 0x392218u);
    ctx->pc = 0x392214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392210u;
            // 0x392214: 0xae620158  sw          $v0, 0x158($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392218u; }
        if (ctx->pc != 0x392218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392218u; }
        if (ctx->pc != 0x392218u) { return; }
    }
    ctx->pc = 0x392218u;
label_392218:
    // 0x392218: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x392218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39221c:
    // 0x39221c: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x39221cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_392220:
    // 0x392220: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x392220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_392224:
    // 0x392224: 0x320f809  jalr        $t9
label_392228:
    if (ctx->pc == 0x392228u) {
        ctx->pc = 0x392228u;
            // 0x392228: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x39222Cu;
        goto label_39222c;
    }
    ctx->pc = 0x392224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39222Cu);
        ctx->pc = 0x392228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392224u;
            // 0x392228: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39222Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39222Cu; }
            if (ctx->pc != 0x39222Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39222Cu;
label_39222c:
    // 0x39222c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x39222cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_392230:
    // 0x392230: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x392230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392234:
    // 0x392234: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x392234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_392238:
    // 0x392238: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x392238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_39223c:
    // 0x39223c: 0xae630160  sw          $v1, 0x160($s3)
    ctx->pc = 0x39223cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 3));
label_392240:
    // 0x392240: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392244:
    // 0x392244: 0xae62015c  sw          $v0, 0x15C($s3)
    ctx->pc = 0x392244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 348), GPR_U32(ctx, 2));
label_392248:
    // 0x392248: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x392248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39224c:
    // 0x39224c: 0xc08914c  jal         func_224530
label_392250:
    if (ctx->pc == 0x392250u) {
        ctx->pc = 0x392250u;
            // 0x392250: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392254u;
        goto label_392254;
    }
    ctx->pc = 0x39224Cu;
    SET_GPR_U32(ctx, 31, 0x392254u);
    ctx->pc = 0x392250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39224Cu;
            // 0x392250: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392254u; }
        if (ctx->pc != 0x392254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392254u; }
        if (ctx->pc != 0x392254u) { return; }
    }
    ctx->pc = 0x392254u;
label_392254:
    // 0x392254: 0x8e650214  lw          $a1, 0x214($s3)
    ctx->pc = 0x392254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_392258:
    // 0x392258: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x392258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_39225c:
    // 0x39225c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_392260:
    // 0x392260: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x392260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_392264:
    // 0x392264: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x392264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_392268:
    // 0x392268: 0xae640214  sw          $a0, 0x214($s3)
    ctx->pc = 0x392268u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 4));
label_39226c:
    // 0x39226c: 0x10000108  b           . + 4 + (0x108 << 2)
label_392270:
    if (ctx->pc == 0x392270u) {
        ctx->pc = 0x392270u;
            // 0x392270: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x392274u;
        goto label_392274;
    }
    ctx->pc = 0x39226Cu;
    {
        const bool branch_taken_0x39226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39226Cu;
            // 0x392270: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39226c) {
            ctx->pc = 0x392690u;
            goto label_392690;
        }
    }
    ctx->pc = 0x392274u;
label_392274:
    // 0x392274: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x392274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_392278:
    // 0x392278: 0xc04cce8  jal         func_1333A0
label_39227c:
    if (ctx->pc == 0x39227Cu) {
        ctx->pc = 0x39227Cu;
            // 0x39227c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x392280u;
        goto label_392280;
    }
    ctx->pc = 0x392278u;
    SET_GPR_U32(ctx, 31, 0x392280u);
    ctx->pc = 0x39227Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392278u;
            // 0x39227c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392280u; }
        if (ctx->pc != 0x392280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392280u; }
        if (ctx->pc != 0x392280u) { return; }
    }
    ctx->pc = 0x392280u;
label_392280:
    // 0x392280: 0x264502c0  addiu       $a1, $s2, 0x2C0
    ctx->pc = 0x392280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_392284:
    // 0x392284: 0xc04ce80  jal         func_133A00
label_392288:
    if (ctx->pc == 0x392288u) {
        ctx->pc = 0x392288u;
            // 0x392288: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x39228Cu;
        goto label_39228c;
    }
    ctx->pc = 0x392284u;
    SET_GPR_U32(ctx, 31, 0x39228Cu);
    ctx->pc = 0x392288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392284u;
            // 0x392288: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39228Cu; }
        if (ctx->pc != 0x39228Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39228Cu; }
        if (ctx->pc != 0x39228Cu) { return; }
    }
    ctx->pc = 0x39228Cu;
label_39228c:
    // 0x39228c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x39228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_392290:
    // 0x392290: 0xc04ccf4  jal         func_1333D0
label_392294:
    if (ctx->pc == 0x392294u) {
        ctx->pc = 0x392294u;
            // 0x392294: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x392298u;
        goto label_392298;
    }
    ctx->pc = 0x392290u;
    SET_GPR_U32(ctx, 31, 0x392298u);
    ctx->pc = 0x392294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392290u;
            // 0x392294: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392298u; }
        if (ctx->pc != 0x392298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392298u; }
        if (ctx->pc != 0x392298u) { return; }
    }
    ctx->pc = 0x392298u;
label_392298:
    // 0x392298: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x392298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39229c:
    // 0x39229c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x39229cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3922a0:
    // 0x3922a0: 0xc04cca0  jal         func_133280
label_3922a4:
    if (ctx->pc == 0x3922A4u) {
        ctx->pc = 0x3922A4u;
            // 0x3922a4: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3922A8u;
        goto label_3922a8;
    }
    ctx->pc = 0x3922A0u;
    SET_GPR_U32(ctx, 31, 0x3922A8u);
    ctx->pc = 0x3922A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3922A0u;
            // 0x3922a4: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3922A8u; }
        if (ctx->pc != 0x3922A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3922A8u; }
        if (ctx->pc != 0x3922A8u) { return; }
    }
    ctx->pc = 0x3922A8u;
label_3922a8:
    // 0x3922a8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3922a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_3922ac:
    // 0x3922ac: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x3922acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_3922b0:
    // 0x3922b0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3922b4:
    if (ctx->pc == 0x3922B4u) {
        ctx->pc = 0x3922B4u;
            // 0x3922b4: 0x3c02bf99  lui         $v0, 0xBF99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
        ctx->pc = 0x3922B8u;
        goto label_3922b8;
    }
    ctx->pc = 0x3922B0u;
    {
        const bool branch_taken_0x3922b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3922b0) {
            ctx->pc = 0x3922B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3922B0u;
            // 0x3922b4: 0x3c02bf99  lui         $v0, 0xBF99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3922D4u;
            goto label_3922d4;
        }
    }
    ctx->pc = 0x3922B8u;
label_3922b8:
    // 0x3922b8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x3922b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3922bc:
    // 0x3922bc: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3922bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_3922c0:
    // 0x3922c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3922c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3922c4:
    // 0x3922c4: 0x0  nop
    ctx->pc = 0x3922c4u;
    // NOP
label_3922c8:
    // 0x3922c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3922c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3922cc:
    // 0x3922cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3922d0:
    if (ctx->pc == 0x3922D0u) {
        ctx->pc = 0x3922D0u;
            // 0x3922d0: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x3922D4u;
        goto label_3922d4;
    }
    ctx->pc = 0x3922CCu;
    {
        const bool branch_taken_0x3922cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3922D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3922CCu;
            // 0x3922d0: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922cc) {
            ctx->pc = 0x3922ECu;
            goto label_3922ec;
        }
    }
    ctx->pc = 0x3922D4u;
label_3922d4:
    // 0x3922d4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3922d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3922d8:
    // 0x3922d8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x3922d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3922dc:
    // 0x3922dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3922dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3922e0:
    // 0x3922e0: 0x0  nop
    ctx->pc = 0x3922e0u;
    // NOP
label_3922e4:
    // 0x3922e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3922e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3922e8:
    // 0x3922e8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3922e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3922ec:
    // 0x3922ec: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x3922ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3922f0:
    // 0x3922f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3922f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3922f4:
    // 0x3922f4: 0x0  nop
    ctx->pc = 0x3922f4u;
    // NOP
label_3922f8:
    // 0x3922f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3922f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3922fc:
    // 0x3922fc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_392300:
    if (ctx->pc == 0x392300u) {
        ctx->pc = 0x392300u;
            // 0x392300: 0x8e82003c  lw          $v0, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->pc = 0x392304u;
        goto label_392304;
    }
    ctx->pc = 0x3922FCu;
    {
        const bool branch_taken_0x3922fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3922fc) {
            ctx->pc = 0x392300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3922FCu;
            // 0x392300: 0x8e82003c  lw          $v0, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392318u;
            goto label_392318;
        }
    }
    ctx->pc = 0x392304u;
label_392304:
    // 0x392304: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x392304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_392308:
    // 0x392308: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x392308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39230c:
    // 0x39230c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x39230cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_392310:
    // 0x392310: 0x10000003  b           . + 4 + (0x3 << 2)
label_392314:
    if (ctx->pc == 0x392314u) {
        ctx->pc = 0x392314u;
            // 0x392314: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x392318u;
        goto label_392318;
    }
    ctx->pc = 0x392310u;
    {
        const bool branch_taken_0x392310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392310u;
            // 0x392314: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392310) {
            ctx->pc = 0x392320u;
            goto label_392320;
        }
    }
    ctx->pc = 0x392318u;
label_392318:
    // 0x392318: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x392318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39231c:
    // 0x39231c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x39231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_392320:
    // 0x392320: 0xc04cc14  jal         func_133050
label_392324:
    if (ctx->pc == 0x392324u) {
        ctx->pc = 0x392324u;
            // 0x392324: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x392328u;
        goto label_392328;
    }
    ctx->pc = 0x392320u;
    SET_GPR_U32(ctx, 31, 0x392328u);
    ctx->pc = 0x392324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392320u;
            // 0x392324: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392328u; }
        if (ctx->pc != 0x392328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392328u; }
        if (ctx->pc != 0x392328u) { return; }
    }
    ctx->pc = 0x392328u;
label_392328:
    // 0x392328: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x392328u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39232c:
    // 0x39232c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x39232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_392330:
    // 0x392330: 0xc04cc44  jal         func_133110
label_392334:
    if (ctx->pc == 0x392334u) {
        ctx->pc = 0x392334u;
            // 0x392334: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x392338u;
        goto label_392338;
    }
    ctx->pc = 0x392330u;
    SET_GPR_U32(ctx, 31, 0x392338u);
    ctx->pc = 0x392334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392330u;
            // 0x392334: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392338u; }
        if (ctx->pc != 0x392338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392338u; }
        if (ctx->pc != 0x392338u) { return; }
    }
    ctx->pc = 0x392338u;
label_392338:
    // 0x392338: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x392338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39233c:
    // 0x39233c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_392340:
    // 0x392340: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x392340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_392344:
    // 0x392344: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x392344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_392348:
    // 0x392348: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x392348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_39234c:
    // 0x39234c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x39234cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_392350:
    // 0x392350: 0xc4640068  lwc1        $f4, 0x68($v1)
    ctx->pc = 0x392350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_392354:
    // 0x392354: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x392354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_392358:
    // 0x392358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x392358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39235c:
    // 0x39235c: 0x0  nop
    ctx->pc = 0x39235cu;
    // NOP
label_392360:
    // 0x392360: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x392360u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_392364:
    // 0x392364: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x392364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_392368:
    // 0x392368: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x392368u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_39236c:
    // 0x39236c: 0xc4630064  lwc1        $f3, 0x64($v1)
    ctx->pc = 0x39236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_392370:
    // 0x392370: 0x46141018  adda.s      $f2, $f20
    ctx->pc = 0x392370u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_392374:
    // 0x392374: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x392374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_392378:
    // 0x392378: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x392378u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_39237c:
    // 0x39237c: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x39237cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_392380:
    // 0x392380: 0x0  nop
    ctx->pc = 0x392380u;
    // NOP
label_392384:
    // 0x392384: 0x0  nop
    ctx->pc = 0x392384u;
    // NOP
label_392388:
    // 0x392388: 0xc04cc70  jal         func_1331C0
label_39238c:
    if (ctx->pc == 0x39238Cu) {
        ctx->pc = 0x39238Cu;
            // 0x39238c: 0x4604a31c  madd.s      $f12, $f20, $f4 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[4]));
        ctx->pc = 0x392390u;
        goto label_392390;
    }
    ctx->pc = 0x392388u;
    SET_GPR_U32(ctx, 31, 0x392390u);
    ctx->pc = 0x39238Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392388u;
            // 0x39238c: 0x4604a31c  madd.s      $f12, $f20, $f4 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392390u; }
        if (ctx->pc != 0x392390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392390u; }
        if (ctx->pc != 0x392390u) { return; }
    }
    ctx->pc = 0x392390u;
label_392390:
    // 0x392390: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x392390u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_392394:
    // 0x392394: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x392394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_392398:
    // 0x392398: 0xc04cc70  jal         func_1331C0
label_39239c:
    if (ctx->pc == 0x39239Cu) {
        ctx->pc = 0x39239Cu;
            // 0x39239c: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x3923A0u;
        goto label_3923a0;
    }
    ctx->pc = 0x392398u;
    SET_GPR_U32(ctx, 31, 0x3923A0u);
    ctx->pc = 0x39239Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392398u;
            // 0x39239c: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3923A0u; }
        if (ctx->pc != 0x3923A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3923A0u; }
        if (ctx->pc != 0x3923A0u) { return; }
    }
    ctx->pc = 0x3923A0u;
label_3923a0:
    // 0x3923a0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3923a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3923a4:
    // 0x3923a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3923a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3923a8:
    // 0x3923a8: 0xc04cca0  jal         func_133280
label_3923ac:
    if (ctx->pc == 0x3923ACu) {
        ctx->pc = 0x3923ACu;
            // 0x3923ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3923B0u;
        goto label_3923b0;
    }
    ctx->pc = 0x3923A8u;
    SET_GPR_U32(ctx, 31, 0x3923B0u);
    ctx->pc = 0x3923ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3923A8u;
            // 0x3923ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3923B0u; }
        if (ctx->pc != 0x3923B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3923B0u; }
        if (ctx->pc != 0x3923B0u) { return; }
    }
    ctx->pc = 0x3923B0u;
label_3923b0:
    // 0x3923b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3923b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3923b4:
    // 0x3923b4: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x3923b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_3923b8:
    // 0x3923b8: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x3923b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3923bc:
    // 0x3923bc: 0xc7a600b0  lwc1        $f6, 0xB0($sp)
    ctx->pc = 0x3923bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3923c0:
    // 0x3923c0: 0xc7a500b4  lwc1        $f5, 0xB4($sp)
    ctx->pc = 0x3923c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3923c4:
    // 0x3923c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3923c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3923c8:
    // 0x3923c8: 0xc7a400b8  lwc1        $f4, 0xB8($sp)
    ctx->pc = 0x3923c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3923cc:
    // 0x3923cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3923ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3923d0:
    // 0x3923d0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3923d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3923d4:
    // 0x3923d4: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x3923d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3923d8:
    // 0x3923d8: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x3923d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3923dc:
    // 0x3923dc: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x3923dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3923e0:
    // 0x3923e0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x3923e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3923e4:
    // 0x3923e4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3923e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3923e8:
    // 0x3923e8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3923e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3923ec:
    // 0x3923ec: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3923ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3923f0:
    // 0x3923f0: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x3923f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3923f4:
    // 0x3923f4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3923f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3923f8:
    // 0x3923f8: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x3923f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3923fc:
    // 0x3923fc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3923fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_392400:
    // 0x392400: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x392400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_392404:
    // 0x392404: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x392404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_392408:
    // 0x392408: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x392408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_39240c:
    // 0x39240c: 0xc088b74  jal         func_222DD0
label_392410:
    if (ctx->pc == 0x392410u) {
        ctx->pc = 0x392410u;
            // 0x392410: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x392414u;
        goto label_392414;
    }
    ctx->pc = 0x39240Cu;
    SET_GPR_U32(ctx, 31, 0x392414u);
    ctx->pc = 0x392410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39240Cu;
            // 0x392410: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392414u; }
        if (ctx->pc != 0x392414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392414u; }
        if (ctx->pc != 0x392414u) { return; }
    }
    ctx->pc = 0x392414u;
label_392414:
    // 0x392414: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x392414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_392418:
    // 0x392418: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x392418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_39241c:
    // 0x39241c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39241cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_392420:
    // 0x392420: 0x320f809  jalr        $t9
label_392424:
    if (ctx->pc == 0x392424u) {
        ctx->pc = 0x392424u;
            // 0x392424: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x392428u;
        goto label_392428;
    }
    ctx->pc = 0x392420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x392428u);
        ctx->pc = 0x392424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392420u;
            // 0x392424: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x392428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x392428u; }
            if (ctx->pc != 0x392428u) { return; }
        }
        }
    }
    ctx->pc = 0x392428u;
label_392428:
    // 0x392428: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x392428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39242c:
    // 0x39242c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39242cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_392430:
    // 0x392430: 0x8c63e3e0  lw          $v1, -0x1C20($v1)
    ctx->pc = 0x392430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_392434:
    // 0x392434: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x392434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_392438:
    // 0x392438: 0xc475001c  lwc1        $f21, 0x1C($v1)
    ctx->pc = 0x392438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39243c:
    // 0x39243c: 0xc4540018  lwc1        $f20, 0x18($v0)
    ctx->pc = 0x39243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_392440:
    // 0x392440: 0xc04cc14  jal         func_133050
label_392444:
    if (ctx->pc == 0x392444u) {
        ctx->pc = 0x392444u;
            // 0x392444: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392448u;
        goto label_392448;
    }
    ctx->pc = 0x392440u;
    SET_GPR_U32(ctx, 31, 0x392448u);
    ctx->pc = 0x392444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392440u;
            // 0x392444: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392448u; }
        if (ctx->pc != 0x392448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392448u; }
        if (ctx->pc != 0x392448u) { return; }
    }
    ctx->pc = 0x392448u;
label_392448:
    // 0x392448: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x392448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_39244c:
    // 0x39244c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39244cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392450:
    // 0x392450: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392454:
    // 0x392454: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x392454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392458:
    // 0x392458: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x392458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39245c:
    // 0x39245c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x39245cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_392460:
    // 0x392460: 0xc08914c  jal         func_224530
label_392464:
    if (ctx->pc == 0x392464u) {
        ctx->pc = 0x392464u;
            // 0x392464: 0xe6600154  swc1        $f0, 0x154($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
        ctx->pc = 0x392468u;
        goto label_392468;
    }
    ctx->pc = 0x392460u;
    SET_GPR_U32(ctx, 31, 0x392468u);
    ctx->pc = 0x392464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392460u;
            // 0x392464: 0xe6600154  swc1        $f0, 0x154($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392468u; }
        if (ctx->pc != 0x392468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392468u; }
        if (ctx->pc != 0x392468u) { return; }
    }
    ctx->pc = 0x392468u;
label_392468:
    // 0x392468: 0x8e650214  lw          $a1, 0x214($s3)
    ctx->pc = 0x392468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_39246c:
    // 0x39246c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x39246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_392470:
    // 0x392470: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x392470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_392474:
    // 0x392474: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x392474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_392478:
    // 0x392478: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x392478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_39247c:
    // 0x39247c: 0xae640214  sw          $a0, 0x214($s3)
    ctx->pc = 0x39247cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 4));
label_392480:
    // 0x392480: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x392480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_392484:
    // 0x392484: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x392484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_392488:
    // 0x392488: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x392488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_39248c:
    // 0x39248c: 0x10000080  b           . + 4 + (0x80 << 2)
label_392490:
    if (ctx->pc == 0x392490u) {
        ctx->pc = 0x392490u;
            // 0x392490: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x392494u;
        goto label_392494;
    }
    ctx->pc = 0x39248Cu;
    {
        const bool branch_taken_0x39248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39248Cu;
            // 0x392490: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39248c) {
            ctx->pc = 0x392690u;
            goto label_392690;
        }
    }
    ctx->pc = 0x392494u;
label_392494:
    // 0x392494: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x392494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_392498:
    // 0x392498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x392498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39249c:
    // 0x39249c: 0x0  nop
    ctx->pc = 0x39249cu;
    // NOP
label_3924a0:
    // 0x3924a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3924a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3924a4:
    // 0x3924a4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_3924a8:
    if (ctx->pc == 0x3924A8u) {
        ctx->pc = 0x3924ACu;
        goto label_3924ac;
    }
    ctx->pc = 0x3924A4u;
    {
        const bool branch_taken_0x3924a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3924a4) {
            ctx->pc = 0x392528u;
            goto label_392528;
        }
    }
    ctx->pc = 0x3924ACu;
label_3924ac:
    // 0x3924ac: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x3924acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3924b0:
    // 0x3924b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3924b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3924b4:
    // 0x3924b4: 0x8e880040  lw          $t0, 0x40($s4)
    ctx->pc = 0x3924b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_3924b8:
    // 0x3924b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3924b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3924bc:
    // 0x3924bc: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x3924bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3924c0:
    // 0x3924c0: 0x1001827  not         $v1, $t0
    ctx->pc = 0x3924c0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 8) | GPR_U64(ctx, 0)));
label_3924c4:
    // 0x3924c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3924c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3924c8:
    // 0x3924c8: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x3924c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_3924cc:
    // 0x3924cc: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3924ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_3924d0:
    // 0x3924d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3924d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3924d4:
    // 0x3924d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3924d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3924d8:
    // 0x3924d8: 0xc08bff0  jal         func_22FFC0
label_3924dc:
    if (ctx->pc == 0x3924DCu) {
        ctx->pc = 0x3924DCu;
            // 0x3924dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3924E0u;
        goto label_3924e0;
    }
    ctx->pc = 0x3924D8u;
    SET_GPR_U32(ctx, 31, 0x3924E0u);
    ctx->pc = 0x3924DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3924D8u;
            // 0x3924dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3924E0u; }
        if (ctx->pc != 0x3924E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3924E0u; }
        if (ctx->pc != 0x3924E0u) { return; }
    }
    ctx->pc = 0x3924E0u;
label_3924e0:
    // 0x3924e0: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x3924e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_3924e4:
    // 0x3924e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3924e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3924e8:
    // 0x3924e8: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x3924e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_3924ec:
    // 0x3924ec: 0xc44e0064  lwc1        $f14, 0x64($v0)
    ctx->pc = 0x3924ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3924f0:
    // 0x3924f0: 0xc04cbd8  jal         func_132F60
label_3924f4:
    if (ctx->pc == 0x3924F4u) {
        ctx->pc = 0x3924F4u;
            // 0x3924f4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3924F8u;
        goto label_3924f8;
    }
    ctx->pc = 0x3924F0u;
    SET_GPR_U32(ctx, 31, 0x3924F8u);
    ctx->pc = 0x3924F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3924F0u;
            // 0x3924f4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3924F8u; }
        if (ctx->pc != 0x3924F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3924F8u; }
        if (ctx->pc != 0x3924F8u) { return; }
    }
    ctx->pc = 0x3924F8u;
label_3924f8:
    // 0x3924f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3924f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3924fc:
    // 0x3924fc: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x3924fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_392500:
    // 0x392500: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x392500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_392504:
    // 0x392504: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x392504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_392508:
    // 0x392508: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x392508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39250c:
    // 0x39250c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39250cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_392510:
    // 0x392510: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x392510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_392514:
    // 0x392514: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x392514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_392518:
    // 0x392518: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x392518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39251c:
    // 0x39251c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x39251cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_392520:
    // 0x392520: 0x10000016  b           . + 4 + (0x16 << 2)
label_392524:
    if (ctx->pc == 0x392524u) {
        ctx->pc = 0x392524u;
            // 0x392524: 0xe6600154  swc1        $f0, 0x154($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
        ctx->pc = 0x392528u;
        goto label_392528;
    }
    ctx->pc = 0x392520u;
    {
        const bool branch_taken_0x392520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392520u;
            // 0x392524: 0xe6600154  swc1        $f0, 0x154($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392520) {
            ctx->pc = 0x39257Cu;
            goto label_39257c;
        }
    }
    ctx->pc = 0x392528u;
label_392528:
    // 0x392528: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x392528u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39252c:
    // 0x39252c: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
label_392530:
    if (ctx->pc == 0x392530u) {
        ctx->pc = 0x392530u;
            // 0x392530: 0xc6800028  lwc1        $f0, 0x28($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x392534u;
        goto label_392534;
    }
    ctx->pc = 0x39252Cu;
    {
        const bool branch_taken_0x39252c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39252c) {
            ctx->pc = 0x392530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39252Cu;
            // 0x392530: 0xc6800028  lwc1        $f0, 0x28($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x392580u;
            goto label_392580;
        }
    }
    ctx->pc = 0x392534u;
label_392534:
    // 0x392534: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x392534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_392538:
    // 0x392538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x392538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39253c:
    // 0x39253c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_392540:
    // 0x392540: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x392540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_392544:
    // 0x392544: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x392544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_392548:
    // 0x392548: 0xc04cc7c  jal         func_1331F0
label_39254c:
    if (ctx->pc == 0x39254Cu) {
        ctx->pc = 0x39254Cu;
            // 0x39254c: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x392550u;
        goto label_392550;
    }
    ctx->pc = 0x392548u;
    SET_GPR_U32(ctx, 31, 0x392550u);
    ctx->pc = 0x39254Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392548u;
            // 0x39254c: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392550u; }
        if (ctx->pc != 0x392550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392550u; }
        if (ctx->pc != 0x392550u) { return; }
    }
    ctx->pc = 0x392550u;
label_392550:
    // 0x392550: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x392550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_392554:
    // 0x392554: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x392554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_392558:
    // 0x392558: 0x8c63e3e0  lw          $v1, -0x1C20($v1)
    ctx->pc = 0x392558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_39255c:
    // 0x39255c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_392560:
    // 0x392560: 0xc475001c  lwc1        $f21, 0x1C($v1)
    ctx->pc = 0x392560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_392564:
    // 0x392564: 0xc4540018  lwc1        $f20, 0x18($v0)
    ctx->pc = 0x392564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_392568:
    // 0x392568: 0xc04cc14  jal         func_133050
label_39256c:
    if (ctx->pc == 0x39256Cu) {
        ctx->pc = 0x39256Cu;
            // 0x39256c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392570u;
        goto label_392570;
    }
    ctx->pc = 0x392568u;
    SET_GPR_U32(ctx, 31, 0x392570u);
    ctx->pc = 0x39256Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392568u;
            // 0x39256c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392570u; }
        if (ctx->pc != 0x392570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392570u; }
        if (ctx->pc != 0x392570u) { return; }
    }
    ctx->pc = 0x392570u;
label_392570:
    // 0x392570: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x392570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_392574:
    // 0x392574: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x392574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_392578:
    // 0x392578: 0xe6600154  swc1        $f0, 0x154($s3)
    ctx->pc = 0x392578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
label_39257c:
    // 0x39257c: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x39257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_392580:
    // 0x392580: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x392580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_392584:
    // 0x392584: 0x0  nop
    ctx->pc = 0x392584u;
    // NOP
label_392588:
    // 0x392588: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x392588u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39258c:
    // 0x39258c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_392590:
    if (ctx->pc == 0x392590u) {
        ctx->pc = 0x392594u;
        goto label_392594;
    }
    ctx->pc = 0x39258Cu;
    {
        const bool branch_taken_0x39258c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39258c) {
            ctx->pc = 0x3925BCu;
            goto label_3925bc;
        }
    }
    ctx->pc = 0x392594u;
label_392594:
    // 0x392594: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x392594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_392598:
    // 0x392598: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x392598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39259c:
    // 0x39259c: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x39259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3925a0:
    // 0x3925a0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3925a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3925a4:
    // 0x3925a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3925a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3925a8:
    // 0x3925a8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3925a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3925ac:
    // 0x3925ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3925b0:
    if (ctx->pc == 0x3925B0u) {
        ctx->pc = 0x3925B0u;
            // 0x3925b0: 0xe6800028  swc1        $f0, 0x28($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->pc = 0x3925B4u;
        goto label_3925b4;
    }
    ctx->pc = 0x3925ACu;
    {
        const bool branch_taken_0x3925ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3925B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3925ACu;
            // 0x3925b0: 0xe6800028  swc1        $f0, 0x28($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3925ac) {
            ctx->pc = 0x3925D0u;
            goto label_3925d0;
        }
    }
    ctx->pc = 0x3925B4u;
label_3925b4:
    // 0x3925b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3925b8:
    if (ctx->pc == 0x3925B8u) {
        ctx->pc = 0x3925B8u;
            // 0x3925b8: 0xe6820028  swc1        $f2, 0x28($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->pc = 0x3925BCu;
        goto label_3925bc;
    }
    ctx->pc = 0x3925B4u;
    {
        const bool branch_taken_0x3925b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3925B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3925B4u;
            // 0x3925b8: 0xe6820028  swc1        $f2, 0x28($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3925b4) {
            ctx->pc = 0x3925D0u;
            goto label_3925d0;
        }
    }
    ctx->pc = 0x3925BCu;
label_3925bc:
    // 0x3925bc: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x3925bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3925c0:
    // 0x3925c0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3925c4:
    if (ctx->pc == 0x3925C4u) {
        ctx->pc = 0x3925C4u;
            // 0x3925c4: 0x8e82003c  lw          $v0, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->pc = 0x3925C8u;
        goto label_3925c8;
    }
    ctx->pc = 0x3925C0u;
    {
        const bool branch_taken_0x3925c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3925c0) {
            ctx->pc = 0x3925C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3925C0u;
            // 0x3925c4: 0x8e82003c  lw          $v0, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3925D4u;
            goto label_3925d4;
        }
    }
    ctx->pc = 0x3925C8u;
label_3925c8:
    // 0x3925c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3925c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3925cc:
    // 0x3925cc: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x3925ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_3925d0:
    // 0x3925d0: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x3925d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_3925d4:
    // 0x3925d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3925d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3925d8:
    // 0x3925d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3925d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3925dc:
    // 0x3925dc: 0xc44e0064  lwc1        $f14, 0x64($v0)
    ctx->pc = 0x3925dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3925e0:
    // 0x3925e0: 0xc04cbd8  jal         func_132F60
label_3925e4:
    if (ctx->pc == 0x3925E4u) {
        ctx->pc = 0x3925E4u;
            // 0x3925e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3925E8u;
        goto label_3925e8;
    }
    ctx->pc = 0x3925E0u;
    SET_GPR_U32(ctx, 31, 0x3925E8u);
    ctx->pc = 0x3925E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3925E0u;
            // 0x3925e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3925E8u; }
        if (ctx->pc != 0x3925E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3925E8u; }
        if (ctx->pc != 0x3925E8u) { return; }
    }
    ctx->pc = 0x3925E8u;
label_3925e8:
    // 0x3925e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3925e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3925ec:
    // 0x3925ec: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3925ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3925f0:
    // 0x3925f0: 0xc04cca0  jal         func_133280
label_3925f4:
    if (ctx->pc == 0x3925F4u) {
        ctx->pc = 0x3925F4u;
            // 0x3925f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3925F8u;
        goto label_3925f8;
    }
    ctx->pc = 0x3925F0u;
    SET_GPR_U32(ctx, 31, 0x3925F8u);
    ctx->pc = 0x3925F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3925F0u;
            // 0x3925f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3925F8u; }
        if (ctx->pc != 0x3925F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3925F8u; }
        if (ctx->pc != 0x3925F8u) { return; }
    }
    ctx->pc = 0x3925F8u;
label_3925f8:
    // 0x3925f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3925f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3925fc:
    // 0x3925fc: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3925fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_392600:
    // 0x392600: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x392600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_392604:
    // 0x392604: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x392604u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_392608:
    // 0x392608: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x392608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39260c:
    // 0x39260c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x39260cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_392610:
    // 0x392610: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x392610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_392614:
    // 0x392614: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x392614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_392618:
    // 0x392618: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x392618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_39261c:
    // 0x39261c: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x39261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_392620:
    // 0x392620: 0xc089638  jal         func_2258E0
label_392624:
    if (ctx->pc == 0x392624u) {
        ctx->pc = 0x392624u;
            // 0x392624: 0x266400a0  addiu       $a0, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->pc = 0x392628u;
        goto label_392628;
    }
    ctx->pc = 0x392620u;
    SET_GPR_U32(ctx, 31, 0x392628u);
    ctx->pc = 0x392624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392620u;
            // 0x392624: 0x266400a0  addiu       $a0, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392628u; }
        if (ctx->pc != 0x392628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392628u; }
        if (ctx->pc != 0x392628u) { return; }
    }
    ctx->pc = 0x392628u;
label_392628:
    // 0x392628: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x392628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39262c:
    // 0x39262c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_392630:
    // 0x392630: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x392630u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_392634:
    // 0x392634: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x392634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_392638:
    // 0x392638: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x392638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39263c:
    // 0x39263c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x39263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_392640:
    // 0x392640: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x392640u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_392644:
    // 0x392644: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x392644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_392648:
    // 0x392648: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x392648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39264c:
    // 0x39264c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x39264cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_392650:
    // 0x392650: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x392650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_392654:
    // 0x392654: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x392654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_392658:
    // 0x392658: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x392658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_39265c:
    // 0x39265c: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x39265cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_392660:
    // 0x392660: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x392660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_392664:
    // 0x392664: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x392664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_392668:
    // 0x392668: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x392668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_39266c:
    // 0x39266c: 0xc6140018  lwc1        $f20, 0x18($s0)
    ctx->pc = 0x39266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_392670:
    // 0x392670: 0xc088b74  jal         func_222DD0
label_392674:
    if (ctx->pc == 0x392674u) {
        ctx->pc = 0x392674u;
            // 0x392674: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392678u;
        goto label_392678;
    }
    ctx->pc = 0x392670u;
    SET_GPR_U32(ctx, 31, 0x392678u);
    ctx->pc = 0x392674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392670u;
            // 0x392674: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392678u; }
        if (ctx->pc != 0x392678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392678u; }
        if (ctx->pc != 0x392678u) { return; }
    }
    ctx->pc = 0x392678u;
label_392678:
    // 0x392678: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x392678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39267c:
    // 0x39267c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39267cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_392680:
    // 0x392680: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x392680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_392684:
    // 0x392684: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x392684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_392688:
    // 0x392688: 0x320f809  jalr        $t9
label_39268c:
    if (ctx->pc == 0x39268Cu) {
        ctx->pc = 0x39268Cu;
            // 0x39268c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x392690u;
        goto label_392690;
    }
    ctx->pc = 0x392688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x392690u);
        ctx->pc = 0x39268Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392688u;
            // 0x39268c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x392690u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x392690u; }
            if (ctx->pc != 0x392690u) { return; }
        }
        }
    }
    ctx->pc = 0x392690u;
label_392690:
    // 0x392690: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x392690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_392694:
    // 0x392694: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x392694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_392698:
    // 0x392698: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x392698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39269c:
    // 0x39269c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x39269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3926a0:
    // 0x3926a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3926a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3926a4:
    // 0x3926a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3926a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3926a8:
    // 0x3926a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3926a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3926ac:
    // 0x3926ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3926acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3926b0:
    // 0x3926b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3926b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3926b4:
    // 0x3926b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3926b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3926b8:
    // 0x3926b8: 0x3e00008  jr          $ra
label_3926bc:
    if (ctx->pc == 0x3926BCu) {
        ctx->pc = 0x3926BCu;
            // 0x3926bc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x3926C0u;
        goto label_fallthrough_0x3926b8;
    }
    ctx->pc = 0x3926B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3926BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3926B8u;
            // 0x3926bc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3926b8:
    ctx->pc = 0x3926C0u;
}
