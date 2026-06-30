#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00487940
// Address: 0x487940 - 0x4885c0
void sub_00487940_0x487940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487940_0x487940");
#endif

    switch (ctx->pc) {
        case 0x487940u: goto label_487940;
        case 0x487944u: goto label_487944;
        case 0x487948u: goto label_487948;
        case 0x48794cu: goto label_48794c;
        case 0x487950u: goto label_487950;
        case 0x487954u: goto label_487954;
        case 0x487958u: goto label_487958;
        case 0x48795cu: goto label_48795c;
        case 0x487960u: goto label_487960;
        case 0x487964u: goto label_487964;
        case 0x487968u: goto label_487968;
        case 0x48796cu: goto label_48796c;
        case 0x487970u: goto label_487970;
        case 0x487974u: goto label_487974;
        case 0x487978u: goto label_487978;
        case 0x48797cu: goto label_48797c;
        case 0x487980u: goto label_487980;
        case 0x487984u: goto label_487984;
        case 0x487988u: goto label_487988;
        case 0x48798cu: goto label_48798c;
        case 0x487990u: goto label_487990;
        case 0x487994u: goto label_487994;
        case 0x487998u: goto label_487998;
        case 0x48799cu: goto label_48799c;
        case 0x4879a0u: goto label_4879a0;
        case 0x4879a4u: goto label_4879a4;
        case 0x4879a8u: goto label_4879a8;
        case 0x4879acu: goto label_4879ac;
        case 0x4879b0u: goto label_4879b0;
        case 0x4879b4u: goto label_4879b4;
        case 0x4879b8u: goto label_4879b8;
        case 0x4879bcu: goto label_4879bc;
        case 0x4879c0u: goto label_4879c0;
        case 0x4879c4u: goto label_4879c4;
        case 0x4879c8u: goto label_4879c8;
        case 0x4879ccu: goto label_4879cc;
        case 0x4879d0u: goto label_4879d0;
        case 0x4879d4u: goto label_4879d4;
        case 0x4879d8u: goto label_4879d8;
        case 0x4879dcu: goto label_4879dc;
        case 0x4879e0u: goto label_4879e0;
        case 0x4879e4u: goto label_4879e4;
        case 0x4879e8u: goto label_4879e8;
        case 0x4879ecu: goto label_4879ec;
        case 0x4879f0u: goto label_4879f0;
        case 0x4879f4u: goto label_4879f4;
        case 0x4879f8u: goto label_4879f8;
        case 0x4879fcu: goto label_4879fc;
        case 0x487a00u: goto label_487a00;
        case 0x487a04u: goto label_487a04;
        case 0x487a08u: goto label_487a08;
        case 0x487a0cu: goto label_487a0c;
        case 0x487a10u: goto label_487a10;
        case 0x487a14u: goto label_487a14;
        case 0x487a18u: goto label_487a18;
        case 0x487a1cu: goto label_487a1c;
        case 0x487a20u: goto label_487a20;
        case 0x487a24u: goto label_487a24;
        case 0x487a28u: goto label_487a28;
        case 0x487a2cu: goto label_487a2c;
        case 0x487a30u: goto label_487a30;
        case 0x487a34u: goto label_487a34;
        case 0x487a38u: goto label_487a38;
        case 0x487a3cu: goto label_487a3c;
        case 0x487a40u: goto label_487a40;
        case 0x487a44u: goto label_487a44;
        case 0x487a48u: goto label_487a48;
        case 0x487a4cu: goto label_487a4c;
        case 0x487a50u: goto label_487a50;
        case 0x487a54u: goto label_487a54;
        case 0x487a58u: goto label_487a58;
        case 0x487a5cu: goto label_487a5c;
        case 0x487a60u: goto label_487a60;
        case 0x487a64u: goto label_487a64;
        case 0x487a68u: goto label_487a68;
        case 0x487a6cu: goto label_487a6c;
        case 0x487a70u: goto label_487a70;
        case 0x487a74u: goto label_487a74;
        case 0x487a78u: goto label_487a78;
        case 0x487a7cu: goto label_487a7c;
        case 0x487a80u: goto label_487a80;
        case 0x487a84u: goto label_487a84;
        case 0x487a88u: goto label_487a88;
        case 0x487a8cu: goto label_487a8c;
        case 0x487a90u: goto label_487a90;
        case 0x487a94u: goto label_487a94;
        case 0x487a98u: goto label_487a98;
        case 0x487a9cu: goto label_487a9c;
        case 0x487aa0u: goto label_487aa0;
        case 0x487aa4u: goto label_487aa4;
        case 0x487aa8u: goto label_487aa8;
        case 0x487aacu: goto label_487aac;
        case 0x487ab0u: goto label_487ab0;
        case 0x487ab4u: goto label_487ab4;
        case 0x487ab8u: goto label_487ab8;
        case 0x487abcu: goto label_487abc;
        case 0x487ac0u: goto label_487ac0;
        case 0x487ac4u: goto label_487ac4;
        case 0x487ac8u: goto label_487ac8;
        case 0x487accu: goto label_487acc;
        case 0x487ad0u: goto label_487ad0;
        case 0x487ad4u: goto label_487ad4;
        case 0x487ad8u: goto label_487ad8;
        case 0x487adcu: goto label_487adc;
        case 0x487ae0u: goto label_487ae0;
        case 0x487ae4u: goto label_487ae4;
        case 0x487ae8u: goto label_487ae8;
        case 0x487aecu: goto label_487aec;
        case 0x487af0u: goto label_487af0;
        case 0x487af4u: goto label_487af4;
        case 0x487af8u: goto label_487af8;
        case 0x487afcu: goto label_487afc;
        case 0x487b00u: goto label_487b00;
        case 0x487b04u: goto label_487b04;
        case 0x487b08u: goto label_487b08;
        case 0x487b0cu: goto label_487b0c;
        case 0x487b10u: goto label_487b10;
        case 0x487b14u: goto label_487b14;
        case 0x487b18u: goto label_487b18;
        case 0x487b1cu: goto label_487b1c;
        case 0x487b20u: goto label_487b20;
        case 0x487b24u: goto label_487b24;
        case 0x487b28u: goto label_487b28;
        case 0x487b2cu: goto label_487b2c;
        case 0x487b30u: goto label_487b30;
        case 0x487b34u: goto label_487b34;
        case 0x487b38u: goto label_487b38;
        case 0x487b3cu: goto label_487b3c;
        case 0x487b40u: goto label_487b40;
        case 0x487b44u: goto label_487b44;
        case 0x487b48u: goto label_487b48;
        case 0x487b4cu: goto label_487b4c;
        case 0x487b50u: goto label_487b50;
        case 0x487b54u: goto label_487b54;
        case 0x487b58u: goto label_487b58;
        case 0x487b5cu: goto label_487b5c;
        case 0x487b60u: goto label_487b60;
        case 0x487b64u: goto label_487b64;
        case 0x487b68u: goto label_487b68;
        case 0x487b6cu: goto label_487b6c;
        case 0x487b70u: goto label_487b70;
        case 0x487b74u: goto label_487b74;
        case 0x487b78u: goto label_487b78;
        case 0x487b7cu: goto label_487b7c;
        case 0x487b80u: goto label_487b80;
        case 0x487b84u: goto label_487b84;
        case 0x487b88u: goto label_487b88;
        case 0x487b8cu: goto label_487b8c;
        case 0x487b90u: goto label_487b90;
        case 0x487b94u: goto label_487b94;
        case 0x487b98u: goto label_487b98;
        case 0x487b9cu: goto label_487b9c;
        case 0x487ba0u: goto label_487ba0;
        case 0x487ba4u: goto label_487ba4;
        case 0x487ba8u: goto label_487ba8;
        case 0x487bacu: goto label_487bac;
        case 0x487bb0u: goto label_487bb0;
        case 0x487bb4u: goto label_487bb4;
        case 0x487bb8u: goto label_487bb8;
        case 0x487bbcu: goto label_487bbc;
        case 0x487bc0u: goto label_487bc0;
        case 0x487bc4u: goto label_487bc4;
        case 0x487bc8u: goto label_487bc8;
        case 0x487bccu: goto label_487bcc;
        case 0x487bd0u: goto label_487bd0;
        case 0x487bd4u: goto label_487bd4;
        case 0x487bd8u: goto label_487bd8;
        case 0x487bdcu: goto label_487bdc;
        case 0x487be0u: goto label_487be0;
        case 0x487be4u: goto label_487be4;
        case 0x487be8u: goto label_487be8;
        case 0x487becu: goto label_487bec;
        case 0x487bf0u: goto label_487bf0;
        case 0x487bf4u: goto label_487bf4;
        case 0x487bf8u: goto label_487bf8;
        case 0x487bfcu: goto label_487bfc;
        case 0x487c00u: goto label_487c00;
        case 0x487c04u: goto label_487c04;
        case 0x487c08u: goto label_487c08;
        case 0x487c0cu: goto label_487c0c;
        case 0x487c10u: goto label_487c10;
        case 0x487c14u: goto label_487c14;
        case 0x487c18u: goto label_487c18;
        case 0x487c1cu: goto label_487c1c;
        case 0x487c20u: goto label_487c20;
        case 0x487c24u: goto label_487c24;
        case 0x487c28u: goto label_487c28;
        case 0x487c2cu: goto label_487c2c;
        case 0x487c30u: goto label_487c30;
        case 0x487c34u: goto label_487c34;
        case 0x487c38u: goto label_487c38;
        case 0x487c3cu: goto label_487c3c;
        case 0x487c40u: goto label_487c40;
        case 0x487c44u: goto label_487c44;
        case 0x487c48u: goto label_487c48;
        case 0x487c4cu: goto label_487c4c;
        case 0x487c50u: goto label_487c50;
        case 0x487c54u: goto label_487c54;
        case 0x487c58u: goto label_487c58;
        case 0x487c5cu: goto label_487c5c;
        case 0x487c60u: goto label_487c60;
        case 0x487c64u: goto label_487c64;
        case 0x487c68u: goto label_487c68;
        case 0x487c6cu: goto label_487c6c;
        case 0x487c70u: goto label_487c70;
        case 0x487c74u: goto label_487c74;
        case 0x487c78u: goto label_487c78;
        case 0x487c7cu: goto label_487c7c;
        case 0x487c80u: goto label_487c80;
        case 0x487c84u: goto label_487c84;
        case 0x487c88u: goto label_487c88;
        case 0x487c8cu: goto label_487c8c;
        case 0x487c90u: goto label_487c90;
        case 0x487c94u: goto label_487c94;
        case 0x487c98u: goto label_487c98;
        case 0x487c9cu: goto label_487c9c;
        case 0x487ca0u: goto label_487ca0;
        case 0x487ca4u: goto label_487ca4;
        case 0x487ca8u: goto label_487ca8;
        case 0x487cacu: goto label_487cac;
        case 0x487cb0u: goto label_487cb0;
        case 0x487cb4u: goto label_487cb4;
        case 0x487cb8u: goto label_487cb8;
        case 0x487cbcu: goto label_487cbc;
        case 0x487cc0u: goto label_487cc0;
        case 0x487cc4u: goto label_487cc4;
        case 0x487cc8u: goto label_487cc8;
        case 0x487cccu: goto label_487ccc;
        case 0x487cd0u: goto label_487cd0;
        case 0x487cd4u: goto label_487cd4;
        case 0x487cd8u: goto label_487cd8;
        case 0x487cdcu: goto label_487cdc;
        case 0x487ce0u: goto label_487ce0;
        case 0x487ce4u: goto label_487ce4;
        case 0x487ce8u: goto label_487ce8;
        case 0x487cecu: goto label_487cec;
        case 0x487cf0u: goto label_487cf0;
        case 0x487cf4u: goto label_487cf4;
        case 0x487cf8u: goto label_487cf8;
        case 0x487cfcu: goto label_487cfc;
        case 0x487d00u: goto label_487d00;
        case 0x487d04u: goto label_487d04;
        case 0x487d08u: goto label_487d08;
        case 0x487d0cu: goto label_487d0c;
        case 0x487d10u: goto label_487d10;
        case 0x487d14u: goto label_487d14;
        case 0x487d18u: goto label_487d18;
        case 0x487d1cu: goto label_487d1c;
        case 0x487d20u: goto label_487d20;
        case 0x487d24u: goto label_487d24;
        case 0x487d28u: goto label_487d28;
        case 0x487d2cu: goto label_487d2c;
        case 0x487d30u: goto label_487d30;
        case 0x487d34u: goto label_487d34;
        case 0x487d38u: goto label_487d38;
        case 0x487d3cu: goto label_487d3c;
        case 0x487d40u: goto label_487d40;
        case 0x487d44u: goto label_487d44;
        case 0x487d48u: goto label_487d48;
        case 0x487d4cu: goto label_487d4c;
        case 0x487d50u: goto label_487d50;
        case 0x487d54u: goto label_487d54;
        case 0x487d58u: goto label_487d58;
        case 0x487d5cu: goto label_487d5c;
        case 0x487d60u: goto label_487d60;
        case 0x487d64u: goto label_487d64;
        case 0x487d68u: goto label_487d68;
        case 0x487d6cu: goto label_487d6c;
        case 0x487d70u: goto label_487d70;
        case 0x487d74u: goto label_487d74;
        case 0x487d78u: goto label_487d78;
        case 0x487d7cu: goto label_487d7c;
        case 0x487d80u: goto label_487d80;
        case 0x487d84u: goto label_487d84;
        case 0x487d88u: goto label_487d88;
        case 0x487d8cu: goto label_487d8c;
        case 0x487d90u: goto label_487d90;
        case 0x487d94u: goto label_487d94;
        case 0x487d98u: goto label_487d98;
        case 0x487d9cu: goto label_487d9c;
        case 0x487da0u: goto label_487da0;
        case 0x487da4u: goto label_487da4;
        case 0x487da8u: goto label_487da8;
        case 0x487dacu: goto label_487dac;
        case 0x487db0u: goto label_487db0;
        case 0x487db4u: goto label_487db4;
        case 0x487db8u: goto label_487db8;
        case 0x487dbcu: goto label_487dbc;
        case 0x487dc0u: goto label_487dc0;
        case 0x487dc4u: goto label_487dc4;
        case 0x487dc8u: goto label_487dc8;
        case 0x487dccu: goto label_487dcc;
        case 0x487dd0u: goto label_487dd0;
        case 0x487dd4u: goto label_487dd4;
        case 0x487dd8u: goto label_487dd8;
        case 0x487ddcu: goto label_487ddc;
        case 0x487de0u: goto label_487de0;
        case 0x487de4u: goto label_487de4;
        case 0x487de8u: goto label_487de8;
        case 0x487decu: goto label_487dec;
        case 0x487df0u: goto label_487df0;
        case 0x487df4u: goto label_487df4;
        case 0x487df8u: goto label_487df8;
        case 0x487dfcu: goto label_487dfc;
        case 0x487e00u: goto label_487e00;
        case 0x487e04u: goto label_487e04;
        case 0x487e08u: goto label_487e08;
        case 0x487e0cu: goto label_487e0c;
        case 0x487e10u: goto label_487e10;
        case 0x487e14u: goto label_487e14;
        case 0x487e18u: goto label_487e18;
        case 0x487e1cu: goto label_487e1c;
        case 0x487e20u: goto label_487e20;
        case 0x487e24u: goto label_487e24;
        case 0x487e28u: goto label_487e28;
        case 0x487e2cu: goto label_487e2c;
        case 0x487e30u: goto label_487e30;
        case 0x487e34u: goto label_487e34;
        case 0x487e38u: goto label_487e38;
        case 0x487e3cu: goto label_487e3c;
        case 0x487e40u: goto label_487e40;
        case 0x487e44u: goto label_487e44;
        case 0x487e48u: goto label_487e48;
        case 0x487e4cu: goto label_487e4c;
        case 0x487e50u: goto label_487e50;
        case 0x487e54u: goto label_487e54;
        case 0x487e58u: goto label_487e58;
        case 0x487e5cu: goto label_487e5c;
        case 0x487e60u: goto label_487e60;
        case 0x487e64u: goto label_487e64;
        case 0x487e68u: goto label_487e68;
        case 0x487e6cu: goto label_487e6c;
        case 0x487e70u: goto label_487e70;
        case 0x487e74u: goto label_487e74;
        case 0x487e78u: goto label_487e78;
        case 0x487e7cu: goto label_487e7c;
        case 0x487e80u: goto label_487e80;
        case 0x487e84u: goto label_487e84;
        case 0x487e88u: goto label_487e88;
        case 0x487e8cu: goto label_487e8c;
        case 0x487e90u: goto label_487e90;
        case 0x487e94u: goto label_487e94;
        case 0x487e98u: goto label_487e98;
        case 0x487e9cu: goto label_487e9c;
        case 0x487ea0u: goto label_487ea0;
        case 0x487ea4u: goto label_487ea4;
        case 0x487ea8u: goto label_487ea8;
        case 0x487eacu: goto label_487eac;
        case 0x487eb0u: goto label_487eb0;
        case 0x487eb4u: goto label_487eb4;
        case 0x487eb8u: goto label_487eb8;
        case 0x487ebcu: goto label_487ebc;
        case 0x487ec0u: goto label_487ec0;
        case 0x487ec4u: goto label_487ec4;
        case 0x487ec8u: goto label_487ec8;
        case 0x487eccu: goto label_487ecc;
        case 0x487ed0u: goto label_487ed0;
        case 0x487ed4u: goto label_487ed4;
        case 0x487ed8u: goto label_487ed8;
        case 0x487edcu: goto label_487edc;
        case 0x487ee0u: goto label_487ee0;
        case 0x487ee4u: goto label_487ee4;
        case 0x487ee8u: goto label_487ee8;
        case 0x487eecu: goto label_487eec;
        case 0x487ef0u: goto label_487ef0;
        case 0x487ef4u: goto label_487ef4;
        case 0x487ef8u: goto label_487ef8;
        case 0x487efcu: goto label_487efc;
        case 0x487f00u: goto label_487f00;
        case 0x487f04u: goto label_487f04;
        case 0x487f08u: goto label_487f08;
        case 0x487f0cu: goto label_487f0c;
        case 0x487f10u: goto label_487f10;
        case 0x487f14u: goto label_487f14;
        case 0x487f18u: goto label_487f18;
        case 0x487f1cu: goto label_487f1c;
        case 0x487f20u: goto label_487f20;
        case 0x487f24u: goto label_487f24;
        case 0x487f28u: goto label_487f28;
        case 0x487f2cu: goto label_487f2c;
        case 0x487f30u: goto label_487f30;
        case 0x487f34u: goto label_487f34;
        case 0x487f38u: goto label_487f38;
        case 0x487f3cu: goto label_487f3c;
        case 0x487f40u: goto label_487f40;
        case 0x487f44u: goto label_487f44;
        case 0x487f48u: goto label_487f48;
        case 0x487f4cu: goto label_487f4c;
        case 0x487f50u: goto label_487f50;
        case 0x487f54u: goto label_487f54;
        case 0x487f58u: goto label_487f58;
        case 0x487f5cu: goto label_487f5c;
        case 0x487f60u: goto label_487f60;
        case 0x487f64u: goto label_487f64;
        case 0x487f68u: goto label_487f68;
        case 0x487f6cu: goto label_487f6c;
        case 0x487f70u: goto label_487f70;
        case 0x487f74u: goto label_487f74;
        case 0x487f78u: goto label_487f78;
        case 0x487f7cu: goto label_487f7c;
        case 0x487f80u: goto label_487f80;
        case 0x487f84u: goto label_487f84;
        case 0x487f88u: goto label_487f88;
        case 0x487f8cu: goto label_487f8c;
        case 0x487f90u: goto label_487f90;
        case 0x487f94u: goto label_487f94;
        case 0x487f98u: goto label_487f98;
        case 0x487f9cu: goto label_487f9c;
        case 0x487fa0u: goto label_487fa0;
        case 0x487fa4u: goto label_487fa4;
        case 0x487fa8u: goto label_487fa8;
        case 0x487facu: goto label_487fac;
        case 0x487fb0u: goto label_487fb0;
        case 0x487fb4u: goto label_487fb4;
        case 0x487fb8u: goto label_487fb8;
        case 0x487fbcu: goto label_487fbc;
        case 0x487fc0u: goto label_487fc0;
        case 0x487fc4u: goto label_487fc4;
        case 0x487fc8u: goto label_487fc8;
        case 0x487fccu: goto label_487fcc;
        case 0x487fd0u: goto label_487fd0;
        case 0x487fd4u: goto label_487fd4;
        case 0x487fd8u: goto label_487fd8;
        case 0x487fdcu: goto label_487fdc;
        case 0x487fe0u: goto label_487fe0;
        case 0x487fe4u: goto label_487fe4;
        case 0x487fe8u: goto label_487fe8;
        case 0x487fecu: goto label_487fec;
        case 0x487ff0u: goto label_487ff0;
        case 0x487ff4u: goto label_487ff4;
        case 0x487ff8u: goto label_487ff8;
        case 0x487ffcu: goto label_487ffc;
        case 0x488000u: goto label_488000;
        case 0x488004u: goto label_488004;
        case 0x488008u: goto label_488008;
        case 0x48800cu: goto label_48800c;
        case 0x488010u: goto label_488010;
        case 0x488014u: goto label_488014;
        case 0x488018u: goto label_488018;
        case 0x48801cu: goto label_48801c;
        case 0x488020u: goto label_488020;
        case 0x488024u: goto label_488024;
        case 0x488028u: goto label_488028;
        case 0x48802cu: goto label_48802c;
        case 0x488030u: goto label_488030;
        case 0x488034u: goto label_488034;
        case 0x488038u: goto label_488038;
        case 0x48803cu: goto label_48803c;
        case 0x488040u: goto label_488040;
        case 0x488044u: goto label_488044;
        case 0x488048u: goto label_488048;
        case 0x48804cu: goto label_48804c;
        case 0x488050u: goto label_488050;
        case 0x488054u: goto label_488054;
        case 0x488058u: goto label_488058;
        case 0x48805cu: goto label_48805c;
        case 0x488060u: goto label_488060;
        case 0x488064u: goto label_488064;
        case 0x488068u: goto label_488068;
        case 0x48806cu: goto label_48806c;
        case 0x488070u: goto label_488070;
        case 0x488074u: goto label_488074;
        case 0x488078u: goto label_488078;
        case 0x48807cu: goto label_48807c;
        case 0x488080u: goto label_488080;
        case 0x488084u: goto label_488084;
        case 0x488088u: goto label_488088;
        case 0x48808cu: goto label_48808c;
        case 0x488090u: goto label_488090;
        case 0x488094u: goto label_488094;
        case 0x488098u: goto label_488098;
        case 0x48809cu: goto label_48809c;
        case 0x4880a0u: goto label_4880a0;
        case 0x4880a4u: goto label_4880a4;
        case 0x4880a8u: goto label_4880a8;
        case 0x4880acu: goto label_4880ac;
        case 0x4880b0u: goto label_4880b0;
        case 0x4880b4u: goto label_4880b4;
        case 0x4880b8u: goto label_4880b8;
        case 0x4880bcu: goto label_4880bc;
        case 0x4880c0u: goto label_4880c0;
        case 0x4880c4u: goto label_4880c4;
        case 0x4880c8u: goto label_4880c8;
        case 0x4880ccu: goto label_4880cc;
        case 0x4880d0u: goto label_4880d0;
        case 0x4880d4u: goto label_4880d4;
        case 0x4880d8u: goto label_4880d8;
        case 0x4880dcu: goto label_4880dc;
        case 0x4880e0u: goto label_4880e0;
        case 0x4880e4u: goto label_4880e4;
        case 0x4880e8u: goto label_4880e8;
        case 0x4880ecu: goto label_4880ec;
        case 0x4880f0u: goto label_4880f0;
        case 0x4880f4u: goto label_4880f4;
        case 0x4880f8u: goto label_4880f8;
        case 0x4880fcu: goto label_4880fc;
        case 0x488100u: goto label_488100;
        case 0x488104u: goto label_488104;
        case 0x488108u: goto label_488108;
        case 0x48810cu: goto label_48810c;
        case 0x488110u: goto label_488110;
        case 0x488114u: goto label_488114;
        case 0x488118u: goto label_488118;
        case 0x48811cu: goto label_48811c;
        case 0x488120u: goto label_488120;
        case 0x488124u: goto label_488124;
        case 0x488128u: goto label_488128;
        case 0x48812cu: goto label_48812c;
        case 0x488130u: goto label_488130;
        case 0x488134u: goto label_488134;
        case 0x488138u: goto label_488138;
        case 0x48813cu: goto label_48813c;
        case 0x488140u: goto label_488140;
        case 0x488144u: goto label_488144;
        case 0x488148u: goto label_488148;
        case 0x48814cu: goto label_48814c;
        case 0x488150u: goto label_488150;
        case 0x488154u: goto label_488154;
        case 0x488158u: goto label_488158;
        case 0x48815cu: goto label_48815c;
        case 0x488160u: goto label_488160;
        case 0x488164u: goto label_488164;
        case 0x488168u: goto label_488168;
        case 0x48816cu: goto label_48816c;
        case 0x488170u: goto label_488170;
        case 0x488174u: goto label_488174;
        case 0x488178u: goto label_488178;
        case 0x48817cu: goto label_48817c;
        case 0x488180u: goto label_488180;
        case 0x488184u: goto label_488184;
        case 0x488188u: goto label_488188;
        case 0x48818cu: goto label_48818c;
        case 0x488190u: goto label_488190;
        case 0x488194u: goto label_488194;
        case 0x488198u: goto label_488198;
        case 0x48819cu: goto label_48819c;
        case 0x4881a0u: goto label_4881a0;
        case 0x4881a4u: goto label_4881a4;
        case 0x4881a8u: goto label_4881a8;
        case 0x4881acu: goto label_4881ac;
        case 0x4881b0u: goto label_4881b0;
        case 0x4881b4u: goto label_4881b4;
        case 0x4881b8u: goto label_4881b8;
        case 0x4881bcu: goto label_4881bc;
        case 0x4881c0u: goto label_4881c0;
        case 0x4881c4u: goto label_4881c4;
        case 0x4881c8u: goto label_4881c8;
        case 0x4881ccu: goto label_4881cc;
        case 0x4881d0u: goto label_4881d0;
        case 0x4881d4u: goto label_4881d4;
        case 0x4881d8u: goto label_4881d8;
        case 0x4881dcu: goto label_4881dc;
        case 0x4881e0u: goto label_4881e0;
        case 0x4881e4u: goto label_4881e4;
        case 0x4881e8u: goto label_4881e8;
        case 0x4881ecu: goto label_4881ec;
        case 0x4881f0u: goto label_4881f0;
        case 0x4881f4u: goto label_4881f4;
        case 0x4881f8u: goto label_4881f8;
        case 0x4881fcu: goto label_4881fc;
        case 0x488200u: goto label_488200;
        case 0x488204u: goto label_488204;
        case 0x488208u: goto label_488208;
        case 0x48820cu: goto label_48820c;
        case 0x488210u: goto label_488210;
        case 0x488214u: goto label_488214;
        case 0x488218u: goto label_488218;
        case 0x48821cu: goto label_48821c;
        case 0x488220u: goto label_488220;
        case 0x488224u: goto label_488224;
        case 0x488228u: goto label_488228;
        case 0x48822cu: goto label_48822c;
        case 0x488230u: goto label_488230;
        case 0x488234u: goto label_488234;
        case 0x488238u: goto label_488238;
        case 0x48823cu: goto label_48823c;
        case 0x488240u: goto label_488240;
        case 0x488244u: goto label_488244;
        case 0x488248u: goto label_488248;
        case 0x48824cu: goto label_48824c;
        case 0x488250u: goto label_488250;
        case 0x488254u: goto label_488254;
        case 0x488258u: goto label_488258;
        case 0x48825cu: goto label_48825c;
        case 0x488260u: goto label_488260;
        case 0x488264u: goto label_488264;
        case 0x488268u: goto label_488268;
        case 0x48826cu: goto label_48826c;
        case 0x488270u: goto label_488270;
        case 0x488274u: goto label_488274;
        case 0x488278u: goto label_488278;
        case 0x48827cu: goto label_48827c;
        case 0x488280u: goto label_488280;
        case 0x488284u: goto label_488284;
        case 0x488288u: goto label_488288;
        case 0x48828cu: goto label_48828c;
        case 0x488290u: goto label_488290;
        case 0x488294u: goto label_488294;
        case 0x488298u: goto label_488298;
        case 0x48829cu: goto label_48829c;
        case 0x4882a0u: goto label_4882a0;
        case 0x4882a4u: goto label_4882a4;
        case 0x4882a8u: goto label_4882a8;
        case 0x4882acu: goto label_4882ac;
        case 0x4882b0u: goto label_4882b0;
        case 0x4882b4u: goto label_4882b4;
        case 0x4882b8u: goto label_4882b8;
        case 0x4882bcu: goto label_4882bc;
        case 0x4882c0u: goto label_4882c0;
        case 0x4882c4u: goto label_4882c4;
        case 0x4882c8u: goto label_4882c8;
        case 0x4882ccu: goto label_4882cc;
        case 0x4882d0u: goto label_4882d0;
        case 0x4882d4u: goto label_4882d4;
        case 0x4882d8u: goto label_4882d8;
        case 0x4882dcu: goto label_4882dc;
        case 0x4882e0u: goto label_4882e0;
        case 0x4882e4u: goto label_4882e4;
        case 0x4882e8u: goto label_4882e8;
        case 0x4882ecu: goto label_4882ec;
        case 0x4882f0u: goto label_4882f0;
        case 0x4882f4u: goto label_4882f4;
        case 0x4882f8u: goto label_4882f8;
        case 0x4882fcu: goto label_4882fc;
        case 0x488300u: goto label_488300;
        case 0x488304u: goto label_488304;
        case 0x488308u: goto label_488308;
        case 0x48830cu: goto label_48830c;
        case 0x488310u: goto label_488310;
        case 0x488314u: goto label_488314;
        case 0x488318u: goto label_488318;
        case 0x48831cu: goto label_48831c;
        case 0x488320u: goto label_488320;
        case 0x488324u: goto label_488324;
        case 0x488328u: goto label_488328;
        case 0x48832cu: goto label_48832c;
        case 0x488330u: goto label_488330;
        case 0x488334u: goto label_488334;
        case 0x488338u: goto label_488338;
        case 0x48833cu: goto label_48833c;
        case 0x488340u: goto label_488340;
        case 0x488344u: goto label_488344;
        case 0x488348u: goto label_488348;
        case 0x48834cu: goto label_48834c;
        case 0x488350u: goto label_488350;
        case 0x488354u: goto label_488354;
        case 0x488358u: goto label_488358;
        case 0x48835cu: goto label_48835c;
        case 0x488360u: goto label_488360;
        case 0x488364u: goto label_488364;
        case 0x488368u: goto label_488368;
        case 0x48836cu: goto label_48836c;
        case 0x488370u: goto label_488370;
        case 0x488374u: goto label_488374;
        case 0x488378u: goto label_488378;
        case 0x48837cu: goto label_48837c;
        case 0x488380u: goto label_488380;
        case 0x488384u: goto label_488384;
        case 0x488388u: goto label_488388;
        case 0x48838cu: goto label_48838c;
        case 0x488390u: goto label_488390;
        case 0x488394u: goto label_488394;
        case 0x488398u: goto label_488398;
        case 0x48839cu: goto label_48839c;
        case 0x4883a0u: goto label_4883a0;
        case 0x4883a4u: goto label_4883a4;
        case 0x4883a8u: goto label_4883a8;
        case 0x4883acu: goto label_4883ac;
        case 0x4883b0u: goto label_4883b0;
        case 0x4883b4u: goto label_4883b4;
        case 0x4883b8u: goto label_4883b8;
        case 0x4883bcu: goto label_4883bc;
        case 0x4883c0u: goto label_4883c0;
        case 0x4883c4u: goto label_4883c4;
        case 0x4883c8u: goto label_4883c8;
        case 0x4883ccu: goto label_4883cc;
        case 0x4883d0u: goto label_4883d0;
        case 0x4883d4u: goto label_4883d4;
        case 0x4883d8u: goto label_4883d8;
        case 0x4883dcu: goto label_4883dc;
        case 0x4883e0u: goto label_4883e0;
        case 0x4883e4u: goto label_4883e4;
        case 0x4883e8u: goto label_4883e8;
        case 0x4883ecu: goto label_4883ec;
        case 0x4883f0u: goto label_4883f0;
        case 0x4883f4u: goto label_4883f4;
        case 0x4883f8u: goto label_4883f8;
        case 0x4883fcu: goto label_4883fc;
        case 0x488400u: goto label_488400;
        case 0x488404u: goto label_488404;
        case 0x488408u: goto label_488408;
        case 0x48840cu: goto label_48840c;
        case 0x488410u: goto label_488410;
        case 0x488414u: goto label_488414;
        case 0x488418u: goto label_488418;
        case 0x48841cu: goto label_48841c;
        case 0x488420u: goto label_488420;
        case 0x488424u: goto label_488424;
        case 0x488428u: goto label_488428;
        case 0x48842cu: goto label_48842c;
        case 0x488430u: goto label_488430;
        case 0x488434u: goto label_488434;
        case 0x488438u: goto label_488438;
        case 0x48843cu: goto label_48843c;
        case 0x488440u: goto label_488440;
        case 0x488444u: goto label_488444;
        case 0x488448u: goto label_488448;
        case 0x48844cu: goto label_48844c;
        case 0x488450u: goto label_488450;
        case 0x488454u: goto label_488454;
        case 0x488458u: goto label_488458;
        case 0x48845cu: goto label_48845c;
        case 0x488460u: goto label_488460;
        case 0x488464u: goto label_488464;
        case 0x488468u: goto label_488468;
        case 0x48846cu: goto label_48846c;
        case 0x488470u: goto label_488470;
        case 0x488474u: goto label_488474;
        case 0x488478u: goto label_488478;
        case 0x48847cu: goto label_48847c;
        case 0x488480u: goto label_488480;
        case 0x488484u: goto label_488484;
        case 0x488488u: goto label_488488;
        case 0x48848cu: goto label_48848c;
        case 0x488490u: goto label_488490;
        case 0x488494u: goto label_488494;
        case 0x488498u: goto label_488498;
        case 0x48849cu: goto label_48849c;
        case 0x4884a0u: goto label_4884a0;
        case 0x4884a4u: goto label_4884a4;
        case 0x4884a8u: goto label_4884a8;
        case 0x4884acu: goto label_4884ac;
        case 0x4884b0u: goto label_4884b0;
        case 0x4884b4u: goto label_4884b4;
        case 0x4884b8u: goto label_4884b8;
        case 0x4884bcu: goto label_4884bc;
        case 0x4884c0u: goto label_4884c0;
        case 0x4884c4u: goto label_4884c4;
        case 0x4884c8u: goto label_4884c8;
        case 0x4884ccu: goto label_4884cc;
        case 0x4884d0u: goto label_4884d0;
        case 0x4884d4u: goto label_4884d4;
        case 0x4884d8u: goto label_4884d8;
        case 0x4884dcu: goto label_4884dc;
        case 0x4884e0u: goto label_4884e0;
        case 0x4884e4u: goto label_4884e4;
        case 0x4884e8u: goto label_4884e8;
        case 0x4884ecu: goto label_4884ec;
        case 0x4884f0u: goto label_4884f0;
        case 0x4884f4u: goto label_4884f4;
        case 0x4884f8u: goto label_4884f8;
        case 0x4884fcu: goto label_4884fc;
        case 0x488500u: goto label_488500;
        case 0x488504u: goto label_488504;
        case 0x488508u: goto label_488508;
        case 0x48850cu: goto label_48850c;
        case 0x488510u: goto label_488510;
        case 0x488514u: goto label_488514;
        case 0x488518u: goto label_488518;
        case 0x48851cu: goto label_48851c;
        case 0x488520u: goto label_488520;
        case 0x488524u: goto label_488524;
        case 0x488528u: goto label_488528;
        case 0x48852cu: goto label_48852c;
        case 0x488530u: goto label_488530;
        case 0x488534u: goto label_488534;
        case 0x488538u: goto label_488538;
        case 0x48853cu: goto label_48853c;
        case 0x488540u: goto label_488540;
        case 0x488544u: goto label_488544;
        case 0x488548u: goto label_488548;
        case 0x48854cu: goto label_48854c;
        case 0x488550u: goto label_488550;
        case 0x488554u: goto label_488554;
        case 0x488558u: goto label_488558;
        case 0x48855cu: goto label_48855c;
        case 0x488560u: goto label_488560;
        case 0x488564u: goto label_488564;
        case 0x488568u: goto label_488568;
        case 0x48856cu: goto label_48856c;
        case 0x488570u: goto label_488570;
        case 0x488574u: goto label_488574;
        case 0x488578u: goto label_488578;
        case 0x48857cu: goto label_48857c;
        case 0x488580u: goto label_488580;
        case 0x488584u: goto label_488584;
        case 0x488588u: goto label_488588;
        case 0x48858cu: goto label_48858c;
        case 0x488590u: goto label_488590;
        case 0x488594u: goto label_488594;
        case 0x488598u: goto label_488598;
        case 0x48859cu: goto label_48859c;
        case 0x4885a0u: goto label_4885a0;
        case 0x4885a4u: goto label_4885a4;
        case 0x4885a8u: goto label_4885a8;
        case 0x4885acu: goto label_4885ac;
        case 0x4885b0u: goto label_4885b0;
        case 0x4885b4u: goto label_4885b4;
        case 0x4885b8u: goto label_4885b8;
        case 0x4885bcu: goto label_4885bc;
        default: break;
    }

    ctx->pc = 0x487940u;

label_487940:
    // 0x487940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x487940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_487944:
    // 0x487944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x487944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_487948:
    // 0x487948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x487948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48794c:
    // 0x48794c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48794cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_487950:
    // 0x487950: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x487950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_487954:
    // 0x487954: 0x320f809  jalr        $t9
label_487958:
    if (ctx->pc == 0x487958u) {
        ctx->pc = 0x487958u;
            // 0x487958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48795Cu;
        goto label_48795c;
    }
    ctx->pc = 0x487954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48795Cu);
        ctx->pc = 0x487958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487954u;
            // 0x487958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48795Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48795Cu; }
            if (ctx->pc != 0x48795Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48795Cu;
label_48795c:
    // 0x48795c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48795cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_487960:
    // 0x487960: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x487960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_487964:
    // 0x487964: 0xae0600e0  sw          $a2, 0xE0($s0)
    ctx->pc = 0x487964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 6));
label_487968:
    // 0x487968: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x487968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_48796c:
    // 0x48796c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x48796cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_487970:
    // 0x487970: 0xc08914c  jal         func_224530
label_487974:
    if (ctx->pc == 0x487974u) {
        ctx->pc = 0x487974u;
            // 0x487974: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487978u;
        goto label_487978;
    }
    ctx->pc = 0x487970u;
    SET_GPR_U32(ctx, 31, 0x487978u);
    ctx->pc = 0x487974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487970u;
            // 0x487974: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487978u; }
        if (ctx->pc != 0x487978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487978u; }
        if (ctx->pc != 0x487978u) { return; }
    }
    ctx->pc = 0x487978u;
label_487978:
    // 0x487978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x487978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48797c:
    // 0x48797c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48797cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_487980:
    // 0x487980: 0x3e00008  jr          $ra
label_487984:
    if (ctx->pc == 0x487984u) {
        ctx->pc = 0x487984u;
            // 0x487984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x487988u;
        goto label_487988;
    }
    ctx->pc = 0x487980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487980u;
            // 0x487984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x487988u;
label_487988:
    // 0x487988: 0x0  nop
    ctx->pc = 0x487988u;
    // NOP
label_48798c:
    // 0x48798c: 0x0  nop
    ctx->pc = 0x48798cu;
    // NOP
label_487990:
    // 0x487990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x487990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_487994:
    // 0x487994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x487994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_487998:
    // 0x487998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x487998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48799c:
    // 0x48799c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48799cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4879a0:
    // 0x4879a0: 0xc04ab66  jal         func_12AD98
label_4879a4:
    if (ctx->pc == 0x4879A4u) {
        ctx->pc = 0x4879A4u;
            // 0x4879a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4879A8u;
        goto label_4879a8;
    }
    ctx->pc = 0x4879A0u;
    SET_GPR_U32(ctx, 31, 0x4879A8u);
    ctx->pc = 0x4879A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4879A0u;
            // 0x4879a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4879A8u; }
        if (ctx->pc != 0x4879A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4879A8u; }
        if (ctx->pc != 0x4879A8u) { return; }
    }
    ctx->pc = 0x4879A8u;
label_4879a8:
    // 0x4879a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4879a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_4879ac:
    // 0x4879ac: 0xc04ab66  jal         func_12AD98
label_4879b0:
    if (ctx->pc == 0x4879B0u) {
        ctx->pc = 0x4879B0u;
            // 0x4879b0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x4879B4u;
        goto label_4879b4;
    }
    ctx->pc = 0x4879ACu;
    SET_GPR_U32(ctx, 31, 0x4879B4u);
    ctx->pc = 0x4879B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4879ACu;
            // 0x4879b0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4879B4u; }
        if (ctx->pc != 0x4879B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4879B4u; }
        if (ctx->pc != 0x4879B4u) { return; }
    }
    ctx->pc = 0x4879B4u;
label_4879b4:
    // 0x4879b4: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x4879b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4879b8:
    // 0x4879b8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x4879b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_4879bc:
    // 0x4879bc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_4879c0:
    if (ctx->pc == 0x4879C0u) {
        ctx->pc = 0x4879C0u;
            // 0x4879c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4879C4u;
        goto label_4879c4;
    }
    ctx->pc = 0x4879BCu;
    {
        const bool branch_taken_0x4879bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4879bc) {
            ctx->pc = 0x4879C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4879BCu;
            // 0x4879c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4879D8u;
            goto label_4879d8;
        }
    }
    ctx->pc = 0x4879C4u;
label_4879c4:
    // 0x4879c4: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x4879c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_4879c8:
    // 0x4879c8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x4879c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4879cc:
    // 0x4879cc: 0xc122d2c  jal         func_48B4B0
label_4879d0:
    if (ctx->pc == 0x4879D0u) {
        ctx->pc = 0x4879D0u;
            // 0x4879d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4879D4u;
        goto label_4879d4;
    }
    ctx->pc = 0x4879CCu;
    SET_GPR_U32(ctx, 31, 0x4879D4u);
    ctx->pc = 0x4879D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4879CCu;
            // 0x4879d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4879D4u; }
        if (ctx->pc != 0x4879D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4879D4u; }
        if (ctx->pc != 0x4879D4u) { return; }
    }
    ctx->pc = 0x4879D4u;
label_4879d4:
    // 0x4879d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4879d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4879d8:
    // 0x4879d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4879d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4879dc:
    // 0x4879dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4879dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4879e0:
    // 0x4879e0: 0x3e00008  jr          $ra
label_4879e4:
    if (ctx->pc == 0x4879E4u) {
        ctx->pc = 0x4879E4u;
            // 0x4879e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4879E8u;
        goto label_4879e8;
    }
    ctx->pc = 0x4879E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4879E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4879E0u;
            // 0x4879e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4879E8u;
label_4879e8:
    // 0x4879e8: 0x0  nop
    ctx->pc = 0x4879e8u;
    // NOP
label_4879ec:
    // 0x4879ec: 0x0  nop
    ctx->pc = 0x4879ecu;
    // NOP
label_4879f0:
    // 0x4879f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4879f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4879f4:
    // 0x4879f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4879f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4879f8:
    // 0x4879f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4879f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4879fc:
    // 0x4879fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4879fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_487a00:
    // 0x487a00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x487a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_487a04:
    // 0x487a04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x487a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487a08:
    // 0x487a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x487a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_487a0c:
    // 0x487a0c: 0xc0ba938  jal         func_2EA4E0
label_487a10:
    if (ctx->pc == 0x487A10u) {
        ctx->pc = 0x487A10u;
            // 0x487a10: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x487A14u;
        goto label_487a14;
    }
    ctx->pc = 0x487A0Cu;
    SET_GPR_U32(ctx, 31, 0x487A14u);
    ctx->pc = 0x487A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487A0Cu;
            // 0x487a10: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487A14u; }
        if (ctx->pc != 0x487A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487A14u; }
        if (ctx->pc != 0x487A14u) { return; }
    }
    ctx->pc = 0x487A14u;
label_487a14:
    // 0x487a14: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x487a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_487a18:
    // 0x487a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x487a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487a1c:
    // 0x487a1c: 0xc122d2c  jal         func_48B4B0
label_487a20:
    if (ctx->pc == 0x487A20u) {
        ctx->pc = 0x487A20u;
            // 0x487a20: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x487A24u;
        goto label_487a24;
    }
    ctx->pc = 0x487A1Cu;
    SET_GPR_U32(ctx, 31, 0x487A24u);
    ctx->pc = 0x487A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487A1Cu;
            // 0x487a20: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487A24u; }
        if (ctx->pc != 0x487A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487A24u; }
        if (ctx->pc != 0x487A24u) { return; }
    }
    ctx->pc = 0x487A24u;
label_487a24:
    // 0x487a24: 0x9230004c  lbu         $s0, 0x4C($s1)
    ctx->pc = 0x487a24u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_487a28:
    // 0x487a28: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x487a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_487a2c:
    // 0x487a2c: 0xc040180  jal         func_100600
label_487a30:
    if (ctx->pc == 0x487A30u) {
        ctx->pc = 0x487A30u;
            // 0x487a30: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x487A34u;
        goto label_487a34;
    }
    ctx->pc = 0x487A2Cu;
    SET_GPR_U32(ctx, 31, 0x487A34u);
    ctx->pc = 0x487A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487A2Cu;
            // 0x487a30: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487A34u; }
        if (ctx->pc != 0x487A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487A34u; }
        if (ctx->pc != 0x487A34u) { return; }
    }
    ctx->pc = 0x487A34u;
label_487a34:
    // 0x487a34: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_487a38:
    if (ctx->pc == 0x487A38u) {
        ctx->pc = 0x487A38u;
            // 0x487a38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487A3Cu;
        goto label_487a3c;
    }
    ctx->pc = 0x487A34u;
    {
        const bool branch_taken_0x487a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487A34u;
            // 0x487a38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487a34) {
            ctx->pc = 0x487AA8u;
            goto label_487aa8;
        }
    }
    ctx->pc = 0x487A3Cu;
label_487a3c:
    // 0x487a3c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x487a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_487a40:
    // 0x487a40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x487a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_487a44:
    // 0x487a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x487a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487a48:
    // 0x487a48: 0x34458a88  ori         $a1, $v0, 0x8A88
    ctx->pc = 0x487a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_487a4c:
    // 0x487a4c: 0xc10ca68  jal         func_4329A0
label_487a50:
    if (ctx->pc == 0x487A50u) {
        ctx->pc = 0x487A50u;
            // 0x487a50: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487A54u;
        goto label_487a54;
    }
    ctx->pc = 0x487A4Cu;
    SET_GPR_U32(ctx, 31, 0x487A54u);
    ctx->pc = 0x487A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487A4Cu;
            // 0x487a50: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487A54u; }
        if (ctx->pc != 0x487A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487A54u; }
        if (ctx->pc != 0x487A54u) { return; }
    }
    ctx->pc = 0x487A54u;
label_487a54:
    // 0x487a54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x487a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_487a58:
    // 0x487a58: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x487a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_487a5c:
    // 0x487a5c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x487a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_487a60:
    // 0x487a60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x487a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_487a64:
    // 0x487a64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x487a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_487a68:
    // 0x487a68: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x487a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_487a6c:
    // 0x487a6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x487a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_487a70:
    // 0x487a70: 0x244276a0  addiu       $v0, $v0, 0x76A0
    ctx->pc = 0x487a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30368));
label_487a74:
    // 0x487a74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x487a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_487a78:
    // 0x487a78: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x487a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_487a7c:
    // 0x487a7c: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x487a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_487a80:
    // 0x487a80: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x487a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_487a84:
    // 0x487a84: 0xc440da20  lwc1        $f0, -0x25E0($v0)
    ctx->pc = 0x487a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487a88:
    // 0x487a88: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x487a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_487a8c:
    // 0x487a8c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x487a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_487a90:
    // 0x487a90: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x487a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_487a94:
    // 0x487a94: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x487a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_487a98:
    // 0x487a98: 0xc04cc04  jal         func_133010
label_487a9c:
    if (ctx->pc == 0x487A9Cu) {
        ctx->pc = 0x487A9Cu;
            // 0x487a9c: 0xa2300080  sb          $s0, 0x80($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x487AA0u;
        goto label_487aa0;
    }
    ctx->pc = 0x487A98u;
    SET_GPR_U32(ctx, 31, 0x487AA0u);
    ctx->pc = 0x487A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487A98u;
            // 0x487a9c: 0xa2300080  sb          $s0, 0x80($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487AA0u; }
        if (ctx->pc != 0x487AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487AA0u; }
        if (ctx->pc != 0x487AA0u) { return; }
    }
    ctx->pc = 0x487AA0u;
label_487aa0:
    // 0x487aa0: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x487aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487aa4:
    // 0x487aa4: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x487aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_487aa8:
    // 0x487aa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x487aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_487aac:
    // 0x487aac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x487aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_487ab0:
    // 0x487ab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x487ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_487ab4:
    // 0x487ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_487ab8:
    // 0x487ab8: 0x3e00008  jr          $ra
label_487abc:
    if (ctx->pc == 0x487ABCu) {
        ctx->pc = 0x487ABCu;
            // 0x487abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x487AC0u;
        goto label_487ac0;
    }
    ctx->pc = 0x487AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487AB8u;
            // 0x487abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x487AC0u;
label_487ac0:
    // 0x487ac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x487ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_487ac4:
    // 0x487ac4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x487ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_487ac8:
    // 0x487ac8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x487ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_487acc:
    // 0x487acc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x487accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_487ad0:
    // 0x487ad0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x487ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_487ad4:
    // 0x487ad4: 0x24c6fdf8  addiu       $a2, $a2, -0x208
    ctx->pc = 0x487ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966776));
label_487ad8:
    // 0x487ad8: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x487ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_487adc:
    // 0x487adc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x487adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_487ae0:
    // 0x487ae0: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x487ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487ae4:
    // 0x487ae4: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x487ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487ae8:
    // 0x487ae8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x487ae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_487aec:
    // 0x487aec: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x487aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_487af0:
    // 0x487af0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x487af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_487af4:
    // 0x487af4: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x487af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_487af8:
    // 0x487af8: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x487af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487afc:
    // 0x487afc: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x487afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487b00:
    // 0x487b00: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x487b00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_487b04:
    // 0x487b04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x487b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487b08:
    // 0x487b08: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x487b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_487b0c:
    // 0x487b0c: 0xc04cafc  jal         func_132BF0
label_487b10:
    if (ctx->pc == 0x487B10u) {
        ctx->pc = 0x487B10u;
            // 0x487b10: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x487B14u;
        goto label_487b14;
    }
    ctx->pc = 0x487B0Cu;
    SET_GPR_U32(ctx, 31, 0x487B14u);
    ctx->pc = 0x487B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487B0Cu;
            // 0x487b10: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487B14u; }
        if (ctx->pc != 0x487B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487B14u; }
        if (ctx->pc != 0x487B14u) { return; }
    }
    ctx->pc = 0x487B14u;
label_487b14:
    // 0x487b14: 0xc040180  jal         func_100600
label_487b18:
    if (ctx->pc == 0x487B18u) {
        ctx->pc = 0x487B18u;
            // 0x487b18: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x487B1Cu;
        goto label_487b1c;
    }
    ctx->pc = 0x487B14u;
    SET_GPR_U32(ctx, 31, 0x487B1Cu);
    ctx->pc = 0x487B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487B14u;
            // 0x487b18: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487B1Cu; }
        if (ctx->pc != 0x487B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487B1Cu; }
        if (ctx->pc != 0x487B1Cu) { return; }
    }
    ctx->pc = 0x487B1Cu;
label_487b1c:
    // 0x487b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x487b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487b20:
    // 0x487b20: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_487b24:
    if (ctx->pc == 0x487B24u) {
        ctx->pc = 0x487B24u;
            // 0x487b24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x487B28u;
        goto label_487b28;
    }
    ctx->pc = 0x487B20u;
    {
        const bool branch_taken_0x487b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x487b20) {
            ctx->pc = 0x487B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x487B20u;
            // 0x487b24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487BCCu;
            goto label_487bcc;
        }
    }
    ctx->pc = 0x487B28u;
label_487b28:
    // 0x487b28: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x487b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_487b2c:
    // 0x487b2c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x487b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_487b30:
    // 0x487b30: 0xc441fe38  lwc1        $f1, -0x1C8($v0)
    ctx->pc = 0x487b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487b34:
    // 0x487b34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x487b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_487b38:
    // 0x487b38: 0x0  nop
    ctx->pc = 0x487b38u;
    // NOP
label_487b3c:
    // 0x487b3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x487b3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_487b40:
    // 0x487b40: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_487b44:
    if (ctx->pc == 0x487B44u) {
        ctx->pc = 0x487B44u;
            // 0x487b44: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x487B48u;
        goto label_487b48;
    }
    ctx->pc = 0x487B40u;
    {
        const bool branch_taken_0x487b40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x487b40) {
            ctx->pc = 0x487B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x487B40u;
            // 0x487b44: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x487B58u;
            goto label_487b58;
        }
    }
    ctx->pc = 0x487B48u;
label_487b48:
    // 0x487b48: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x487b48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_487b4c:
    // 0x487b4c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x487b4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_487b50:
    // 0x487b50: 0x10000006  b           . + 4 + (0x6 << 2)
label_487b54:
    if (ctx->pc == 0x487B54u) {
        ctx->pc = 0x487B58u;
        goto label_487b58;
    }
    ctx->pc = 0x487B50u;
    {
        const bool branch_taken_0x487b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x487b50) {
            ctx->pc = 0x487B6Cu;
            goto label_487b6c;
        }
    }
    ctx->pc = 0x487B58u;
label_487b58:
    // 0x487b58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x487b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_487b5c:
    // 0x487b5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x487b5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_487b60:
    // 0x487b60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x487b60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_487b64:
    // 0x487b64: 0x0  nop
    ctx->pc = 0x487b64u;
    // NOP
label_487b68:
    // 0x487b68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x487b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_487b6c:
    // 0x487b6c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x487b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_487b70:
    // 0x487b70: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x487b70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_487b74:
    // 0x487b74: 0x2442fe08  addiu       $v0, $v0, -0x1F8
    ctx->pc = 0x487b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966792));
label_487b78:
    // 0x487b78: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x487b78u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_487b7c:
    // 0x487b7c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x487b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_487b80:
    // 0x487b80: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x487b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_487b84:
    // 0x487b84: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x487b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_487b88:
    // 0x487b88: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x487b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_487b8c:
    // 0x487b8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x487b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_487b90:
    // 0x487b90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x487b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_487b94:
    // 0x487b94: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x487b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_487b98:
    // 0x487b98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x487b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_487b9c:
    // 0x487b9c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x487b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_487ba0:
    // 0x487ba0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x487ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_487ba4:
    // 0x487ba4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x487ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_487ba8:
    // 0x487ba8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x487ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_487bac:
    // 0x487bac: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x487bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_487bb0:
    // 0x487bb0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x487bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_487bb4:
    // 0x487bb4: 0x2529fe18  addiu       $t1, $t1, -0x1E8
    ctx->pc = 0x487bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966808));
label_487bb8:
    // 0x487bb8: 0x254afe28  addiu       $t2, $t2, -0x1D8
    ctx->pc = 0x487bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966824));
label_487bbc:
    // 0x487bbc: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x487bbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_487bc0:
    // 0x487bc0: 0xc0db488  jal         func_36D220
label_487bc4:
    if (ctx->pc == 0x487BC4u) {
        ctx->pc = 0x487BC4u;
            // 0x487bc4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x487BC8u;
        goto label_487bc8;
    }
    ctx->pc = 0x487BC0u;
    SET_GPR_U32(ctx, 31, 0x487BC8u);
    ctx->pc = 0x487BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487BC0u;
            // 0x487bc4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487BC8u; }
        if (ctx->pc != 0x487BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487BC8u; }
        if (ctx->pc != 0x487BC8u) { return; }
    }
    ctx->pc = 0x487BC8u;
label_487bc8:
    // 0x487bc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x487bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_487bcc:
    // 0x487bcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x487bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_487bd0:
    // 0x487bd0: 0x3e00008  jr          $ra
label_487bd4:
    if (ctx->pc == 0x487BD4u) {
        ctx->pc = 0x487BD4u;
            // 0x487bd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x487BD8u;
        goto label_487bd8;
    }
    ctx->pc = 0x487BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487BD0u;
            // 0x487bd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x487BD8u;
label_487bd8:
    // 0x487bd8: 0x0  nop
    ctx->pc = 0x487bd8u;
    // NOP
label_487bdc:
    // 0x487bdc: 0x0  nop
    ctx->pc = 0x487bdcu;
    // NOP
label_487be0:
    // 0x487be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x487be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_487be4:
    // 0x487be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x487be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_487be8:
    // 0x487be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x487be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_487bec:
    // 0x487bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x487becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487bf0:
    // 0x487bf0: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x487bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_487bf4:
    // 0x487bf4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_487bf8:
    if (ctx->pc == 0x487BF8u) {
        ctx->pc = 0x487BF8u;
            // 0x487bf8: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x487BFCu;
        goto label_487bfc;
    }
    ctx->pc = 0x487BF4u;
    {
        const bool branch_taken_0x487bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x487bf4) {
            ctx->pc = 0x487BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x487BF4u;
            // 0x487bf8: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487C10u;
            goto label_487c10;
        }
    }
    ctx->pc = 0x487BFCu;
label_487bfc:
    // 0x487bfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x487bfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_487c00:
    // 0x487c00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x487c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_487c04:
    // 0x487c04: 0x320f809  jalr        $t9
label_487c08:
    if (ctx->pc == 0x487C08u) {
        ctx->pc = 0x487C08u;
            // 0x487c08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x487C0Cu;
        goto label_487c0c;
    }
    ctx->pc = 0x487C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x487C0Cu);
        ctx->pc = 0x487C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487C04u;
            // 0x487c08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x487C0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x487C0Cu; }
            if (ctx->pc != 0x487C0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x487C0Cu;
label_487c0c:
    // 0x487c0c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x487c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_487c10:
    // 0x487c10: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x487c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_487c14:
    // 0x487c14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_487c18:
    if (ctx->pc == 0x487C18u) {
        ctx->pc = 0x487C18u;
            // 0x487c18: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x487C1Cu;
        goto label_487c1c;
    }
    ctx->pc = 0x487C14u;
    {
        const bool branch_taken_0x487c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x487c14) {
            ctx->pc = 0x487C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x487C14u;
            // 0x487c18: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487C30u;
            goto label_487c30;
        }
    }
    ctx->pc = 0x487C1Cu;
label_487c1c:
    // 0x487c1c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x487c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_487c20:
    // 0x487c20: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x487c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_487c24:
    // 0x487c24: 0x320f809  jalr        $t9
label_487c28:
    if (ctx->pc == 0x487C28u) {
        ctx->pc = 0x487C28u;
            // 0x487c28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x487C2Cu;
        goto label_487c2c;
    }
    ctx->pc = 0x487C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x487C2Cu);
        ctx->pc = 0x487C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487C24u;
            // 0x487c28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x487C2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x487C2Cu; }
            if (ctx->pc != 0x487C2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x487C2Cu;
label_487c2c:
    // 0x487c2c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x487c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_487c30:
    // 0x487c30: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x487c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_487c34:
    // 0x487c34: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_487c38:
    if (ctx->pc == 0x487C38u) {
        ctx->pc = 0x487C38u;
            // 0x487c38: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x487C3Cu;
        goto label_487c3c;
    }
    ctx->pc = 0x487C34u;
    {
        const bool branch_taken_0x487c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x487c34) {
            ctx->pc = 0x487C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x487C34u;
            // 0x487c38: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487C50u;
            goto label_487c50;
        }
    }
    ctx->pc = 0x487C3Cu;
label_487c3c:
    // 0x487c3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x487c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_487c40:
    // 0x487c40: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x487c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_487c44:
    // 0x487c44: 0x320f809  jalr        $t9
label_487c48:
    if (ctx->pc == 0x487C48u) {
        ctx->pc = 0x487C48u;
            // 0x487c48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x487C4Cu;
        goto label_487c4c;
    }
    ctx->pc = 0x487C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x487C4Cu);
        ctx->pc = 0x487C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487C44u;
            // 0x487c48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x487C4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x487C4Cu; }
            if (ctx->pc != 0x487C4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x487C4Cu;
label_487c4c:
    // 0x487c4c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x487c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_487c50:
    // 0x487c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x487c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_487c54:
    // 0x487c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_487c58:
    // 0x487c58: 0x3e00008  jr          $ra
label_487c5c:
    if (ctx->pc == 0x487C5Cu) {
        ctx->pc = 0x487C5Cu;
            // 0x487c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x487C60u;
        goto label_487c60;
    }
    ctx->pc = 0x487C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487C58u;
            // 0x487c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x487C60u;
label_487c60:
    // 0x487c60: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x487c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_487c64:
    // 0x487c64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x487c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_487c68:
    // 0x487c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x487c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_487c6c:
    // 0x487c6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x487c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487c70:
    // 0x487c70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x487c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_487c74:
    // 0x487c74: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x487c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_487c78:
    // 0x487c78: 0xc0892d0  jal         func_224B40
label_487c7c:
    if (ctx->pc == 0x487C7Cu) {
        ctx->pc = 0x487C7Cu;
            // 0x487c7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x487C80u;
        goto label_487c80;
    }
    ctx->pc = 0x487C78u;
    SET_GPR_U32(ctx, 31, 0x487C80u);
    ctx->pc = 0x487C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487C78u;
            // 0x487c7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487C80u; }
        if (ctx->pc != 0x487C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487C80u; }
        if (ctx->pc != 0x487C80u) { return; }
    }
    ctx->pc = 0x487C80u;
label_487c80:
    // 0x487c80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x487c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_487c84:
    // 0x487c84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x487c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_487c88:
    // 0x487c88: 0x8c427ba8  lw          $v0, 0x7BA8($v0)
    ctx->pc = 0x487c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31656)));
label_487c8c:
    // 0x487c8c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x487c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_487c90:
    // 0x487c90: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x487c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_487c94:
    // 0x487c94: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x487c94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_487c98:
    // 0x487c98: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x487c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_487c9c:
    // 0x487c9c: 0xc0b6e68  jal         func_2DB9A0
label_487ca0:
    if (ctx->pc == 0x487CA0u) {
        ctx->pc = 0x487CA0u;
            // 0x487ca0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x487CA4u;
        goto label_487ca4;
    }
    ctx->pc = 0x487C9Cu;
    SET_GPR_U32(ctx, 31, 0x487CA4u);
    ctx->pc = 0x487CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487C9Cu;
            // 0x487ca0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487CA4u; }
        if (ctx->pc != 0x487CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487CA4u; }
        if (ctx->pc != 0x487CA4u) { return; }
    }
    ctx->pc = 0x487CA4u;
label_487ca4:
    // 0x487ca4: 0xc0b6dac  jal         func_2DB6B0
label_487ca8:
    if (ctx->pc == 0x487CA8u) {
        ctx->pc = 0x487CA8u;
            // 0x487ca8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x487CACu;
        goto label_487cac;
    }
    ctx->pc = 0x487CA4u;
    SET_GPR_U32(ctx, 31, 0x487CACu);
    ctx->pc = 0x487CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487CA4u;
            // 0x487ca8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487CACu; }
        if (ctx->pc != 0x487CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487CACu; }
        if (ctx->pc != 0x487CACu) { return; }
    }
    ctx->pc = 0x487CACu;
label_487cac:
    // 0x487cac: 0xc0cac94  jal         func_32B250
label_487cb0:
    if (ctx->pc == 0x487CB0u) {
        ctx->pc = 0x487CB0u;
            // 0x487cb0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x487CB4u;
        goto label_487cb4;
    }
    ctx->pc = 0x487CACu;
    SET_GPR_U32(ctx, 31, 0x487CB4u);
    ctx->pc = 0x487CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487CACu;
            // 0x487cb0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487CB4u; }
        if (ctx->pc != 0x487CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487CB4u; }
        if (ctx->pc != 0x487CB4u) { return; }
    }
    ctx->pc = 0x487CB4u;
label_487cb4:
    // 0x487cb4: 0xc0cac84  jal         func_32B210
label_487cb8:
    if (ctx->pc == 0x487CB8u) {
        ctx->pc = 0x487CB8u;
            // 0x487cb8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x487CBCu;
        goto label_487cbc;
    }
    ctx->pc = 0x487CB4u;
    SET_GPR_U32(ctx, 31, 0x487CBCu);
    ctx->pc = 0x487CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487CB4u;
            // 0x487cb8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487CBCu; }
        if (ctx->pc != 0x487CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487CBCu; }
        if (ctx->pc != 0x487CBCu) { return; }
    }
    ctx->pc = 0x487CBCu;
label_487cbc:
    // 0x487cbc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x487cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_487cc0:
    // 0x487cc0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x487cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_487cc4:
    // 0x487cc4: 0xc44cc930  lwc1        $f12, -0x36D0($v0)
    ctx->pc = 0x487cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_487cc8:
    // 0x487cc8: 0xc0a5a68  jal         func_2969A0
label_487ccc:
    if (ctx->pc == 0x487CCCu) {
        ctx->pc = 0x487CCCu;
            // 0x487ccc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x487CD0u;
        goto label_487cd0;
    }
    ctx->pc = 0x487CC8u;
    SET_GPR_U32(ctx, 31, 0x487CD0u);
    ctx->pc = 0x487CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487CC8u;
            // 0x487ccc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487CD0u; }
        if (ctx->pc != 0x487CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487CD0u; }
        if (ctx->pc != 0x487CD0u) { return; }
    }
    ctx->pc = 0x487CD0u;
label_487cd0:
    // 0x487cd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x487cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_487cd4:
    // 0x487cd4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x487cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_487cd8:
    // 0x487cd8: 0x8c447ba8  lw          $a0, 0x7BA8($v0)
    ctx->pc = 0x487cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31656)));
label_487cdc:
    // 0x487cdc: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x487cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_487ce0:
    // 0x487ce0: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x487ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487ce4:
    // 0x487ce4: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x487ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_487ce8:
    // 0x487ce8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x487ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487cec:
    // 0x487cec: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x487cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_487cf0:
    // 0x487cf0: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x487cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_487cf4:
    // 0x487cf4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x487cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_487cf8:
    // 0x487cf8: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x487cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_487cfc:
    // 0x487cfc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x487cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_487d00:
    // 0x487d00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x487d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_487d04:
    // 0x487d04: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x487d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
label_487d08:
    // 0x487d08: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x487d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_487d0c:
    // 0x487d0c: 0xc64a0018  lwc1        $f10, 0x18($s2)
    ctx->pc = 0x487d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_487d10:
    // 0x487d10: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x487d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_487d14:
    // 0x487d14: 0xc6490014  lwc1        $f9, 0x14($s2)
    ctx->pc = 0x487d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_487d18:
    // 0x487d18: 0xc6480010  lwc1        $f8, 0x10($s2)
    ctx->pc = 0x487d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_487d1c:
    // 0x487d1c: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x487d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_487d20:
    // 0x487d20: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x487d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_487d24:
    // 0x487d24: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x487d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_487d28:
    // 0x487d28: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x487d28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_487d2c:
    // 0x487d2c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x487d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_487d30:
    // 0x487d30: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x487d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_487d34:
    // 0x487d34: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x487d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_487d38:
    // 0x487d38: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x487d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_487d3c:
    // 0x487d3c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x487d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_487d40:
    // 0x487d40: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x487d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_487d44:
    // 0x487d44: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x487d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487d48:
    // 0x487d48: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x487d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487d4c:
    // 0x487d4c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x487d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_487d50:
    // 0x487d50: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x487d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_487d54:
    // 0x487d54: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x487d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_487d58:
    // 0x487d58: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x487d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_487d5c:
    // 0x487d5c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x487d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487d60:
    // 0x487d60: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x487d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487d64:
    // 0x487d64: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x487d64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_487d68:
    // 0x487d68: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x487d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_487d6c:
    // 0x487d6c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x487d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_487d70:
    // 0x487d70: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x487d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_487d74:
    // 0x487d74: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x487d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_487d78:
    // 0x487d78: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x487d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_487d7c:
    // 0x487d7c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x487d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487d80:
    // 0x487d80: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x487d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487d84:
    // 0x487d84: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x487d84u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_487d88:
    // 0x487d88: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x487d88u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_487d8c:
    // 0x487d8c: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x487d8cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_487d90:
    // 0x487d90: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x487d90u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_487d94:
    // 0x487d94: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x487d94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_487d98:
    // 0x487d98: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x487d98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_487d9c:
    // 0x487d9c: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x487d9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_487da0:
    // 0x487da0: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x487da0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_487da4:
    // 0x487da4: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x487da4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_487da8:
    // 0x487da8: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x487da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_487dac:
    // 0x487dac: 0xc0a7a88  jal         func_29EA20
label_487db0:
    if (ctx->pc == 0x487DB0u) {
        ctx->pc = 0x487DB0u;
            // 0x487db0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x487DB4u;
        goto label_487db4;
    }
    ctx->pc = 0x487DACu;
    SET_GPR_U32(ctx, 31, 0x487DB4u);
    ctx->pc = 0x487DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487DACu;
            // 0x487db0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487DB4u; }
        if (ctx->pc != 0x487DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487DB4u; }
        if (ctx->pc != 0x487DB4u) { return; }
    }
    ctx->pc = 0x487DB4u;
label_487db4:
    // 0x487db4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x487db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_487db8:
    // 0x487db8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x487db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487dbc:
    // 0x487dbc: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_487dc0:
    if (ctx->pc == 0x487DC0u) {
        ctx->pc = 0x487DC0u;
            // 0x487dc0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x487DC4u;
        goto label_487dc4;
    }
    ctx->pc = 0x487DBCu;
    {
        const bool branch_taken_0x487dbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x487DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487DBCu;
            // 0x487dc0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487dbc) {
            ctx->pc = 0x487E0Cu;
            goto label_487e0c;
        }
    }
    ctx->pc = 0x487DC4u;
label_487dc4:
    // 0x487dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x487dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487dc8:
    // 0x487dc8: 0xc088ef4  jal         func_223BD0
label_487dcc:
    if (ctx->pc == 0x487DCCu) {
        ctx->pc = 0x487DCCu;
            // 0x487dcc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x487DD0u;
        goto label_487dd0;
    }
    ctx->pc = 0x487DC8u;
    SET_GPR_U32(ctx, 31, 0x487DD0u);
    ctx->pc = 0x487DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487DC8u;
            // 0x487dcc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487DD0u; }
        if (ctx->pc != 0x487DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487DD0u; }
        if (ctx->pc != 0x487DD0u) { return; }
    }
    ctx->pc = 0x487DD0u;
label_487dd0:
    // 0x487dd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x487dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_487dd4:
    // 0x487dd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x487dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_487dd8:
    // 0x487dd8: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x487dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_487ddc:
    // 0x487ddc: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x487ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_487de0:
    // 0x487de0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x487de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_487de4:
    // 0x487de4: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x487de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_487de8:
    // 0x487de8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x487de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_487dec:
    // 0x487dec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x487decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_487df0:
    // 0x487df0: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x487df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_487df4:
    // 0x487df4: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x487df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_487df8:
    // 0x487df8: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x487df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_487dfc:
    // 0x487dfc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x487dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_487e00:
    // 0x487e00: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x487e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_487e04:
    // 0x487e04: 0xc088b38  jal         func_222CE0
label_487e08:
    if (ctx->pc == 0x487E08u) {
        ctx->pc = 0x487E08u;
            // 0x487e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487E0Cu;
        goto label_487e0c;
    }
    ctx->pc = 0x487E04u;
    SET_GPR_U32(ctx, 31, 0x487E0Cu);
    ctx->pc = 0x487E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487E04u;
            // 0x487e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487E0Cu; }
        if (ctx->pc != 0x487E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487E0Cu; }
        if (ctx->pc != 0x487E0Cu) { return; }
    }
    ctx->pc = 0x487E0Cu;
label_487e0c:
    // 0x487e0c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x487e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_487e10:
    // 0x487e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x487e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487e14:
    // 0x487e14: 0xc08c164  jal         func_230590
label_487e18:
    if (ctx->pc == 0x487E18u) {
        ctx->pc = 0x487E18u;
            // 0x487e18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x487E1Cu;
        goto label_487e1c;
    }
    ctx->pc = 0x487E14u;
    SET_GPR_U32(ctx, 31, 0x487E1Cu);
    ctx->pc = 0x487E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487E14u;
            // 0x487e18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487E1Cu; }
        if (ctx->pc != 0x487E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487E1Cu; }
        if (ctx->pc != 0x487E1Cu) { return; }
    }
    ctx->pc = 0x487E1Cu;
label_487e1c:
    // 0x487e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x487e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487e20:
    // 0x487e20: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x487e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_487e24:
    // 0x487e24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x487e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_487e28:
    // 0x487e28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x487e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487e2c:
    // 0x487e2c: 0xc08914c  jal         func_224530
label_487e30:
    if (ctx->pc == 0x487E30u) {
        ctx->pc = 0x487E30u;
            // 0x487e30: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x487E34u;
        goto label_487e34;
    }
    ctx->pc = 0x487E2Cu;
    SET_GPR_U32(ctx, 31, 0x487E34u);
    ctx->pc = 0x487E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487E2Cu;
            // 0x487e30: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487E34u; }
        if (ctx->pc != 0x487E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487E34u; }
        if (ctx->pc != 0x487E34u) { return; }
    }
    ctx->pc = 0x487E34u;
label_487e34:
    // 0x487e34: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x487e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_487e38:
    // 0x487e38: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x487e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_487e3c:
    // 0x487e3c: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x487e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_487e40:
    // 0x487e40: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x487e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_487e44:
    // 0x487e44: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x487e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_487e48:
    // 0x487e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x487e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487e4c:
    // 0x487e4c: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x487e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_487e50:
    // 0x487e50: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x487e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_487e54:
    // 0x487e54: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x487e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_487e58:
    // 0x487e58: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x487e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_487e5c:
    // 0x487e5c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x487e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487e60:
    // 0x487e60: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x487e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487e64:
    // 0x487e64: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x487e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_487e68:
    // 0x487e68: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x487e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_487e6c:
    // 0x487e6c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x487e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_487e70:
    // 0x487e70: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x487e70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_487e74:
    // 0x487e74: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x487e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_487e78:
    // 0x487e78: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x487e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_487e7c:
    // 0x487e7c: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x487e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487e80:
    // 0x487e80: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x487e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487e84:
    // 0x487e84: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x487e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_487e88:
    // 0x487e88: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x487e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_487e8c:
    // 0x487e8c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x487e8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_487e90:
    // 0x487e90: 0xc0892b0  jal         func_224AC0
label_487e94:
    if (ctx->pc == 0x487E94u) {
        ctx->pc = 0x487E94u;
            // 0x487e94: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x487E98u;
        goto label_487e98;
    }
    ctx->pc = 0x487E90u;
    SET_GPR_U32(ctx, 31, 0x487E98u);
    ctx->pc = 0x487E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487E90u;
            // 0x487e94: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487E98u; }
        if (ctx->pc != 0x487E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487E98u; }
        if (ctx->pc != 0x487E98u) { return; }
    }
    ctx->pc = 0x487E98u;
label_487e98:
    // 0x487e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x487e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487e9c:
    // 0x487e9c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x487e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_487ea0:
    // 0x487ea0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x487ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_487ea4:
    // 0x487ea4: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x487ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_487ea8:
    // 0x487ea8: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x487ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_487eac:
    // 0x487eac: 0xc0891d8  jal         func_224760
label_487eb0:
    if (ctx->pc == 0x487EB0u) {
        ctx->pc = 0x487EB0u;
            // 0x487eb0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x487EB4u;
        goto label_487eb4;
    }
    ctx->pc = 0x487EACu;
    SET_GPR_U32(ctx, 31, 0x487EB4u);
    ctx->pc = 0x487EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487EACu;
            // 0x487eb0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487EB4u; }
        if (ctx->pc != 0x487EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487EB4u; }
        if (ctx->pc != 0x487EB4u) { return; }
    }
    ctx->pc = 0x487EB4u;
label_487eb4:
    // 0x487eb4: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x487eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_487eb8:
    // 0x487eb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x487eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_487ebc:
    // 0x487ebc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x487ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_487ec0:
    // 0x487ec0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x487ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_487ec4:
    // 0x487ec4: 0xc0a7a88  jal         func_29EA20
label_487ec8:
    if (ctx->pc == 0x487EC8u) {
        ctx->pc = 0x487EC8u;
            // 0x487ec8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x487ECCu;
        goto label_487ecc;
    }
    ctx->pc = 0x487EC4u;
    SET_GPR_U32(ctx, 31, 0x487ECCu);
    ctx->pc = 0x487EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487EC4u;
            // 0x487ec8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487ECCu; }
        if (ctx->pc != 0x487ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487ECCu; }
        if (ctx->pc != 0x487ECCu) { return; }
    }
    ctx->pc = 0x487ECCu;
label_487ecc:
    // 0x487ecc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x487eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_487ed0:
    // 0x487ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x487ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487ed4:
    // 0x487ed4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_487ed8:
    if (ctx->pc == 0x487ED8u) {
        ctx->pc = 0x487ED8u;
            // 0x487ed8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x487EDCu;
        goto label_487edc;
    }
    ctx->pc = 0x487ED4u;
    {
        const bool branch_taken_0x487ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x487ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487ED4u;
            // 0x487ed8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487ed4) {
            ctx->pc = 0x487EF8u;
            goto label_487ef8;
        }
    }
    ctx->pc = 0x487EDCu;
label_487edc:
    // 0x487edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x487edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487ee0:
    // 0x487ee0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x487ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487ee4:
    // 0x487ee4: 0xc0869d0  jal         func_21A740
label_487ee8:
    if (ctx->pc == 0x487EE8u) {
        ctx->pc = 0x487EE8u;
            // 0x487ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487EECu;
        goto label_487eec;
    }
    ctx->pc = 0x487EE4u;
    SET_GPR_U32(ctx, 31, 0x487EECu);
    ctx->pc = 0x487EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487EE4u;
            // 0x487ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487EECu; }
        if (ctx->pc != 0x487EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487EECu; }
        if (ctx->pc != 0x487EECu) { return; }
    }
    ctx->pc = 0x487EECu;
label_487eec:
    // 0x487eec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x487eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_487ef0:
    // 0x487ef0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x487ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_487ef4:
    // 0x487ef4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x487ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_487ef8:
    // 0x487ef8: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x487ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_487efc:
    // 0x487efc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x487efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_487f00:
    // 0x487f00: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x487f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_487f04:
    // 0x487f04: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x487f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_487f08:
    // 0x487f08: 0xc08c650  jal         func_231940
label_487f0c:
    if (ctx->pc == 0x487F0Cu) {
        ctx->pc = 0x487F0Cu;
            // 0x487f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487F10u;
        goto label_487f10;
    }
    ctx->pc = 0x487F08u;
    SET_GPR_U32(ctx, 31, 0x487F10u);
    ctx->pc = 0x487F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487F08u;
            // 0x487f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487F10u; }
        if (ctx->pc != 0x487F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487F10u; }
        if (ctx->pc != 0x487F10u) { return; }
    }
    ctx->pc = 0x487F10u;
label_487f10:
    // 0x487f10: 0xc040180  jal         func_100600
label_487f14:
    if (ctx->pc == 0x487F14u) {
        ctx->pc = 0x487F14u;
            // 0x487f14: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x487F18u;
        goto label_487f18;
    }
    ctx->pc = 0x487F10u;
    SET_GPR_U32(ctx, 31, 0x487F18u);
    ctx->pc = 0x487F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487F10u;
            // 0x487f14: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487F18u; }
        if (ctx->pc != 0x487F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487F18u; }
        if (ctx->pc != 0x487F18u) { return; }
    }
    ctx->pc = 0x487F18u;
label_487f18:
    // 0x487f18: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_487f1c:
    if (ctx->pc == 0x487F1Cu) {
        ctx->pc = 0x487F1Cu;
            // 0x487f1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487F20u;
        goto label_487f20;
    }
    ctx->pc = 0x487F18u;
    {
        const bool branch_taken_0x487f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487F18u;
            // 0x487f1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487f18) {
            ctx->pc = 0x487F88u;
            goto label_487f88;
        }
    }
    ctx->pc = 0x487F20u;
label_487f20:
    // 0x487f20: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x487f20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_487f24:
    // 0x487f24: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x487f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_487f28:
    // 0x487f28: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x487f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_487f2c:
    // 0x487f2c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x487f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_487f30:
    // 0x487f30: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x487f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_487f34:
    // 0x487f34: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x487f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_487f38:
    // 0x487f38: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x487f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_487f3c:
    // 0x487f3c: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x487f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_487f40:
    // 0x487f40: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x487f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_487f44:
    // 0x487f44: 0x24a5fd80  addiu       $a1, $a1, -0x280
    ctx->pc = 0x487f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966656));
label_487f48:
    // 0x487f48: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x487f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_487f4c:
    // 0x487f4c: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x487f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_487f50:
    // 0x487f50: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x487f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_487f54:
    // 0x487f54: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x487f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_487f58:
    // 0x487f58: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x487f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_487f5c:
    // 0x487f5c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x487f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_487f60:
    // 0x487f60: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x487f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_487f64:
    // 0x487f64: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x487f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_487f68:
    // 0x487f68: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x487f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_487f6c:
    // 0x487f6c: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x487f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_487f70:
    // 0x487f70: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x487f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_487f74:
    // 0x487f74: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x487f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_487f78:
    // 0x487f78: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x487f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_487f7c:
    // 0x487f7c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x487f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_487f80:
    // 0x487f80: 0xc04c968  jal         func_1325A0
label_487f84:
    if (ctx->pc == 0x487F84u) {
        ctx->pc = 0x487F84u;
            // 0x487f84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x487F88u;
        goto label_487f88;
    }
    ctx->pc = 0x487F80u;
    SET_GPR_U32(ctx, 31, 0x487F88u);
    ctx->pc = 0x487F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487F80u;
            // 0x487f84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487F88u; }
        if (ctx->pc != 0x487F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487F88u; }
        if (ctx->pc != 0x487F88u) { return; }
    }
    ctx->pc = 0x487F88u;
label_487f88:
    // 0x487f88: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x487f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_487f8c:
    // 0x487f8c: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x487f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_487f90:
    // 0x487f90: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x487f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_487f94:
    // 0x487f94: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x487f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_487f98:
    // 0x487f98: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x487f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_487f9c:
    // 0x487f9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x487f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_487fa0:
    // 0x487fa0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x487fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_487fa4:
    // 0x487fa4: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x487fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_487fa8:
    // 0x487fa8: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x487fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487fac:
    // 0x487fac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x487facu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_487fb0:
    // 0x487fb0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x487fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_487fb4:
    // 0x487fb4: 0x0  nop
    ctx->pc = 0x487fb4u;
    // NOP
label_487fb8:
    // 0x487fb8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_487fbc:
    if (ctx->pc == 0x487FBCu) {
        ctx->pc = 0x487FBCu;
            // 0x487fbc: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x487FC0u;
        goto label_487fc0;
    }
    ctx->pc = 0x487FB8u;
    {
        const bool branch_taken_0x487fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x487fb8) {
            ctx->pc = 0x487FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x487FB8u;
            // 0x487fbc: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x488008u;
            goto label_488008;
        }
    }
    ctx->pc = 0x487FC0u;
label_487fc0:
    // 0x487fc0: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x487fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_487fc4:
    // 0x487fc4: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x487fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_487fc8:
    // 0x487fc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x487fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_487fcc:
    // 0x487fcc: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x487fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_487fd0:
    // 0x487fd0: 0x3c034290  lui         $v1, 0x4290
    ctx->pc = 0x487fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17040 << 16));
label_487fd4:
    // 0x487fd4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x487fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_487fd8:
    // 0x487fd8: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x487fd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_487fdc:
    // 0x487fdc: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x487fdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_487fe0:
    // 0x487fe0: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x487fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_487fe4:
    // 0x487fe4: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x487fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
label_487fe8:
    // 0x487fe8: 0xae440070  sw          $a0, 0x70($s2)
    ctx->pc = 0x487fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 4));
label_487fec:
    // 0x487fec: 0xae430078  sw          $v1, 0x78($s2)
    ctx->pc = 0x487fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
label_487ff0:
    // 0x487ff0: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x487ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_487ff4:
    // 0x487ff4: 0xa2400068  sb          $zero, 0x68($s2)
    ctx->pc = 0x487ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
label_487ff8:
    // 0x487ff8: 0xa2450069  sb          $a1, 0x69($s2)
    ctx->pc = 0x487ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 5));
label_487ffc:
    // 0x487ffc: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x487ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_488000:
    // 0x488000: 0x10000011  b           . + 4 + (0x11 << 2)
label_488004:
    if (ctx->pc == 0x488004u) {
        ctx->pc = 0x488004u;
            // 0x488004: 0xa245006b  sb          $a1, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x488008u;
        goto label_488008;
    }
    ctx->pc = 0x488000u;
    {
        const bool branch_taken_0x488000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488000u;
            // 0x488004: 0xa245006b  sb          $a1, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488000) {
            ctx->pc = 0x488048u;
            goto label_488048;
        }
    }
    ctx->pc = 0x488008u;
label_488008:
    // 0x488008: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x488008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_48800c:
    // 0x48800c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48800cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488010:
    // 0x488010: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x488010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
label_488014:
    // 0x488014: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x488014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_488018:
    // 0x488018: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x488018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_48801c:
    // 0x48801c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x48801cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_488020:
    // 0x488020: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x488020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
label_488024:
    // 0x488024: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x488024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_488028:
    // 0x488028: 0xae46008c  sw          $a2, 0x8C($s2)
    ctx->pc = 0x488028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 6));
label_48802c:
    // 0x48802c: 0xae450070  sw          $a1, 0x70($s2)
    ctx->pc = 0x48802cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 5));
label_488030:
    // 0x488030: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x488030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_488034:
    // 0x488034: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x488034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_488038:
    // 0x488038: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x488038u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_48803c:
    // 0x48803c: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x48803cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_488040:
    // 0x488040: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x488040u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_488044:
    // 0x488044: 0xa246006b  sb          $a2, 0x6B($s2)
    ctx->pc = 0x488044u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 6));
label_488048:
    // 0x488048: 0xc040180  jal         func_100600
label_48804c:
    if (ctx->pc == 0x48804Cu) {
        ctx->pc = 0x48804Cu;
            // 0x48804c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x488050u;
        goto label_488050;
    }
    ctx->pc = 0x488048u;
    SET_GPR_U32(ctx, 31, 0x488050u);
    ctx->pc = 0x48804Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488048u;
            // 0x48804c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488050u; }
        if (ctx->pc != 0x488050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488050u; }
        if (ctx->pc != 0x488050u) { return; }
    }
    ctx->pc = 0x488050u;
label_488050:
    // 0x488050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x488050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488054:
    // 0x488054: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_488058:
    if (ctx->pc == 0x488058u) {
        ctx->pc = 0x488058u;
            // 0x488058: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x48805Cu;
        goto label_48805c;
    }
    ctx->pc = 0x488054u;
    {
        const bool branch_taken_0x488054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x488054) {
            ctx->pc = 0x488058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x488054u;
            // 0x488058: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x488094u;
            goto label_488094;
        }
    }
    ctx->pc = 0x48805Cu;
label_48805c:
    // 0x48805c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x48805cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_488060:
    // 0x488060: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x488060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_488064:
    // 0x488064: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x488064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_488068:
    // 0x488068: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x488068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_48806c:
    // 0x48806c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x48806cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_488070:
    // 0x488070: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x488070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_488074:
    // 0x488074: 0xc040138  jal         func_1004E0
label_488078:
    if (ctx->pc == 0x488078u) {
        ctx->pc = 0x488078u;
            // 0x488078: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x48807Cu;
        goto label_48807c;
    }
    ctx->pc = 0x488074u;
    SET_GPR_U32(ctx, 31, 0x48807Cu);
    ctx->pc = 0x488078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488074u;
            // 0x488078: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48807Cu; }
        if (ctx->pc != 0x48807Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48807Cu; }
        if (ctx->pc != 0x48807Cu) { return; }
    }
    ctx->pc = 0x48807Cu;
label_48807c:
    // 0x48807c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x48807cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_488080:
    // 0x488080: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x488080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_488084:
    // 0x488084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x488084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488088:
    // 0x488088: 0xc04a576  jal         func_1295D8
label_48808c:
    if (ctx->pc == 0x48808Cu) {
        ctx->pc = 0x48808Cu;
            // 0x48808c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x488090u;
        goto label_488090;
    }
    ctx->pc = 0x488088u;
    SET_GPR_U32(ctx, 31, 0x488090u);
    ctx->pc = 0x48808Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488088u;
            // 0x48808c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488090u; }
        if (ctx->pc != 0x488090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488090u; }
        if (ctx->pc != 0x488090u) { return; }
    }
    ctx->pc = 0x488090u;
label_488090:
    // 0x488090: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x488090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_488094:
    // 0x488094: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x488094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_488098:
    // 0x488098: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x488098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_48809c:
    // 0x48809c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48809cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4880a0:
    // 0x4880a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4880a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4880a4:
    // 0x4880a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4880a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4880a8:
    // 0x4880a8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4880a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4880ac:
    // 0x4880ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4880acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4880b0:
    // 0x4880b0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4880b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4880b4:
    // 0x4880b4: 0x344614ae  ori         $a2, $v0, 0x14AE
    ctx->pc = 0x4880b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
label_4880b8:
    // 0x4880b8: 0xc122cd8  jal         func_48B360
label_4880bc:
    if (ctx->pc == 0x4880BCu) {
        ctx->pc = 0x4880BCu;
            // 0x4880bc: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x4880C0u;
        goto label_4880c0;
    }
    ctx->pc = 0x4880B8u;
    SET_GPR_U32(ctx, 31, 0x4880C0u);
    ctx->pc = 0x4880BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4880B8u;
            // 0x4880bc: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4880C0u; }
        if (ctx->pc != 0x4880C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4880C0u; }
        if (ctx->pc != 0x4880C0u) { return; }
    }
    ctx->pc = 0x4880C0u;
label_4880c0:
    // 0x4880c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4880c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4880c4:
    // 0x4880c4: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4880c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_4880c8:
    // 0x4880c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4880c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4880cc:
    // 0x4880cc: 0x8e4400e4  lw          $a0, 0xE4($s2)
    ctx->pc = 0x4880ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_4880d0:
    // 0x4880d0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4880d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_4880d4:
    // 0x4880d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4880d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4880d8:
    // 0x4880d8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4880d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4880dc:
    // 0x4880dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4880dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4880e0:
    // 0x4880e0: 0x344614ae  ori         $a2, $v0, 0x14AE
    ctx->pc = 0x4880e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
label_4880e4:
    // 0x4880e4: 0xc122cd8  jal         func_48B360
label_4880e8:
    if (ctx->pc == 0x4880E8u) {
        ctx->pc = 0x4880E8u;
            // 0x4880e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4880ECu;
        goto label_4880ec;
    }
    ctx->pc = 0x4880E4u;
    SET_GPR_U32(ctx, 31, 0x4880ECu);
    ctx->pc = 0x4880E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4880E4u;
            // 0x4880e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4880ECu; }
        if (ctx->pc != 0x4880ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4880ECu; }
        if (ctx->pc != 0x4880ECu) { return; }
    }
    ctx->pc = 0x4880ECu;
label_4880ec:
    // 0x4880ec: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4880ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4880f0:
    // 0x4880f0: 0x8e4400e4  lw          $a0, 0xE4($s2)
    ctx->pc = 0x4880f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_4880f4:
    // 0x4880f4: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x4880f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4880f8:
    // 0x4880f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4880f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4880fc:
    // 0x4880fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4880fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_488100:
    // 0x488100: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x488100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488104:
    // 0x488104: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x488104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_488108:
    // 0x488108: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x488108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_48810c:
    // 0x48810c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x48810cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_488110:
    // 0x488110: 0xc122cd8  jal         func_48B360
label_488114:
    if (ctx->pc == 0x488114u) {
        ctx->pc = 0x488114u;
            // 0x488114: 0x344614ae  ori         $a2, $v0, 0x14AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
        ctx->pc = 0x488118u;
        goto label_488118;
    }
    ctx->pc = 0x488110u;
    SET_GPR_U32(ctx, 31, 0x488118u);
    ctx->pc = 0x488114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488110u;
            // 0x488114: 0x344614ae  ori         $a2, $v0, 0x14AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488118u; }
        if (ctx->pc != 0x488118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488118u; }
        if (ctx->pc != 0x488118u) { return; }
    }
    ctx->pc = 0x488118u;
label_488118:
    // 0x488118: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x488118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_48811c:
    // 0x48811c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48811cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488120:
    // 0x488120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488124:
    // 0x488124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488128:
    // 0x488128: 0x3e00008  jr          $ra
label_48812c:
    if (ctx->pc == 0x48812Cu) {
        ctx->pc = 0x48812Cu;
            // 0x48812c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x488130u;
        goto label_488130;
    }
    ctx->pc = 0x488128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48812Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488128u;
            // 0x48812c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488130u;
label_488130:
    // 0x488130: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x488130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_488134:
    // 0x488134: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x488134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_488138:
    // 0x488138: 0xa083004c  sb          $v1, 0x4C($a0)
    ctx->pc = 0x488138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 3));
label_48813c:
    // 0x48813c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_488140:
    // 0x488140: 0xa08200cc  sb          $v0, 0xCC($a0)
    ctx->pc = 0x488140u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 2));
label_488144:
    // 0x488144: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x488144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
label_488148:
    // 0x488148: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x488148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48814c:
    // 0x48814c: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x48814cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
label_488150:
    // 0x488150: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x488150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_488154:
    // 0x488154: 0x24a55f60  addiu       $a1, $a1, 0x5F60
    ctx->pc = 0x488154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24416));
label_488158:
    // 0x488158: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x488158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_48815c:
    // 0x48815c: 0x80c7007a  lb          $a3, 0x7A($a2)
    ctx->pc = 0x48815cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
label_488160:
    // 0x488160: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x488160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_488164:
    // 0x488164: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x488164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_488168:
    // 0x488168: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x488168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_48816c:
    // 0x48816c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48816cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488170:
    // 0x488170: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x488170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_488174:
    // 0x488174: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x488174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_488178:
    // 0x488178: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x488178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_48817c:
    // 0x48817c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x48817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_488180:
    // 0x488180: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x488180u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_488184:
    // 0x488184: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x488184u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_488188:
    // 0x488188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x488188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48818c:
    // 0x48818c: 0xac8200c8  sw          $v0, 0xC8($a0)
    ctx->pc = 0x48818cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 2));
label_488190:
    // 0x488190: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x488190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_488194:
    // 0x488194: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x488194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_488198:
    // 0x488198: 0xc48e0038  lwc1        $f14, 0x38($a0)
    ctx->pc = 0x488198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_48819c:
    // 0x48819c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x48819cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4881a0:
    // 0x4881a0: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x4881a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
label_4881a4:
    // 0x4881a4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x4881a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_4881a8:
    // 0x4881a8: 0x0  nop
    ctx->pc = 0x4881a8u;
    // NOP
label_4881ac:
    // 0x4881ac: 0x0  nop
    ctx->pc = 0x4881acu;
    // NOP
label_4881b0:
    // 0x4881b0: 0x80d8aac  j           func_362AB0
label_4881b4:
    if (ctx->pc == 0x4881B4u) {
        ctx->pc = 0x4881B8u;
        goto label_4881b8;
    }
    ctx->pc = 0x4881B0u;
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00362AB0_0x362ab0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4881B8u;
label_4881b8:
    // 0x4881b8: 0x0  nop
    ctx->pc = 0x4881b8u;
    // NOP
label_4881bc:
    // 0x4881bc: 0x0  nop
    ctx->pc = 0x4881bcu;
    // NOP
label_4881c0:
    // 0x4881c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4881c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4881c4:
    // 0x4881c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4881c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4881c8:
    // 0x4881c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4881c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4881cc:
    // 0x4881cc: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4881ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4881d0:
    // 0x4881d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4881d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4881d4:
    // 0x4881d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4881d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4881d8:
    // 0x4881d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4881d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4881dc:
    // 0x4881dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4881dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4881e0:
    // 0x4881e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4881e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4881e4:
    // 0x4881e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4881e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4881e8:
    // 0x4881e8: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x4881e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4881ec:
    // 0x4881ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4881ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4881f0:
    // 0x4881f0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x4881f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_4881f4:
    // 0x4881f4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4881f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4881f8:
    // 0x4881f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4881f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4881fc:
    // 0x4881fc: 0xc08bff0  jal         func_22FFC0
label_488200:
    if (ctx->pc == 0x488200u) {
        ctx->pc = 0x488200u;
            // 0x488200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488204u;
        goto label_488204;
    }
    ctx->pc = 0x4881FCu;
    SET_GPR_U32(ctx, 31, 0x488204u);
    ctx->pc = 0x488200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4881FCu;
            // 0x488200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488204u; }
        if (ctx->pc != 0x488204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488204u; }
        if (ctx->pc != 0x488204u) { return; }
    }
    ctx->pc = 0x488204u;
label_488204:
    // 0x488204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x488204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488208:
    // 0x488208: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x488208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_48820c:
    // 0x48820c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48820cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488210:
    // 0x488210: 0xc08914c  jal         func_224530
label_488214:
    if (ctx->pc == 0x488214u) {
        ctx->pc = 0x488214u;
            // 0x488214: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488218u;
        goto label_488218;
    }
    ctx->pc = 0x488210u;
    SET_GPR_U32(ctx, 31, 0x488218u);
    ctx->pc = 0x488214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488210u;
            // 0x488214: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488218u; }
        if (ctx->pc != 0x488218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488218u; }
        if (ctx->pc != 0x488218u) { return; }
    }
    ctx->pc = 0x488218u;
label_488218:
    // 0x488218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x488218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48821c:
    // 0x48821c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x48821cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_488220:
    // 0x488220: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x488220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_488224:
    // 0x488224: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x488224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_488228:
    // 0x488228: 0xc088b74  jal         func_222DD0
label_48822c:
    if (ctx->pc == 0x48822Cu) {
        ctx->pc = 0x48822Cu;
            // 0x48822c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x488230u;
        goto label_488230;
    }
    ctx->pc = 0x488228u;
    SET_GPR_U32(ctx, 31, 0x488230u);
    ctx->pc = 0x48822Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488228u;
            // 0x48822c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488230u; }
        if (ctx->pc != 0x488230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488230u; }
        if (ctx->pc != 0x488230u) { return; }
    }
    ctx->pc = 0x488230u;
label_488230:
    // 0x488230: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x488230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_488234:
    // 0x488234: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x488234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_488238:
    // 0x488238: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x488238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_48823c:
    // 0x48823c: 0x320f809  jalr        $t9
label_488240:
    if (ctx->pc == 0x488240u) {
        ctx->pc = 0x488240u;
            // 0x488240: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x488244u;
        goto label_488244;
    }
    ctx->pc = 0x48823Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x488244u);
        ctx->pc = 0x488240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48823Cu;
            // 0x488240: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x488244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x488244u; }
            if (ctx->pc != 0x488244u) { return; }
        }
        }
    }
    ctx->pc = 0x488244u;
label_488244:
    // 0x488244: 0xc088b74  jal         func_222DD0
label_488248:
    if (ctx->pc == 0x488248u) {
        ctx->pc = 0x488248u;
            // 0x488248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48824Cu;
        goto label_48824c;
    }
    ctx->pc = 0x488244u;
    SET_GPR_U32(ctx, 31, 0x48824Cu);
    ctx->pc = 0x488248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488244u;
            // 0x488248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48824Cu; }
        if (ctx->pc != 0x48824Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48824Cu; }
        if (ctx->pc != 0x48824Cu) { return; }
    }
    ctx->pc = 0x48824Cu;
label_48824c:
    // 0x48824c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x48824cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_488250:
    // 0x488250: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x488250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_488254:
    // 0x488254: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x488254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_488258:
    // 0x488258: 0x320f809  jalr        $t9
label_48825c:
    if (ctx->pc == 0x48825Cu) {
        ctx->pc = 0x48825Cu;
            // 0x48825c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x488260u;
        goto label_488260;
    }
    ctx->pc = 0x488258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x488260u);
        ctx->pc = 0x48825Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488258u;
            // 0x48825c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x488260u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x488260u; }
            if (ctx->pc != 0x488260u) { return; }
        }
        }
    }
    ctx->pc = 0x488260u;
label_488260:
    // 0x488260: 0xc0e393c  jal         func_38E4F0
label_488264:
    if (ctx->pc == 0x488264u) {
        ctx->pc = 0x488264u;
            // 0x488264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488268u;
        goto label_488268;
    }
    ctx->pc = 0x488260u;
    SET_GPR_U32(ctx, 31, 0x488268u);
    ctx->pc = 0x488264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488260u;
            // 0x488264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488268u; }
        if (ctx->pc != 0x488268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488268u; }
        if (ctx->pc != 0x488268u) { return; }
    }
    ctx->pc = 0x488268u;
label_488268:
    // 0x488268: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x488268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_48826c:
    // 0x48826c: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x48826cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_488270:
    // 0x488270: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x488270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_488274:
    // 0x488274: 0x263200f0  addiu       $s2, $s1, 0xF0
    ctx->pc = 0x488274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_488278:
    // 0x488278: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x488278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_48827c:
    // 0x48827c: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x48827cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
label_488280:
    // 0x488280: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x488280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_488284:
    // 0x488284: 0xc0d8a84  jal         func_362A10
label_488288:
    if (ctx->pc == 0x488288u) {
        ctx->pc = 0x488288u;
            // 0x488288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48828Cu;
        goto label_48828c;
    }
    ctx->pc = 0x488284u;
    SET_GPR_U32(ctx, 31, 0x48828Cu);
    ctx->pc = 0x488288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488284u;
            // 0x488288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A10u;
    if (runtime->hasFunction(0x362A10u)) {
        auto targetFn = runtime->lookupFunction(0x362A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48828Cu; }
        if (ctx->pc != 0x48828Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A10_0x362a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48828Cu; }
        if (ctx->pc != 0x48828Cu) { return; }
    }
    ctx->pc = 0x48828Cu;
label_48828c:
    // 0x48828c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x48828cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_488290:
    // 0x488290: 0xc04cc04  jal         func_133010
label_488294:
    if (ctx->pc == 0x488294u) {
        ctx->pc = 0x488294u;
            // 0x488294: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->pc = 0x488298u;
        goto label_488298;
    }
    ctx->pc = 0x488290u;
    SET_GPR_U32(ctx, 31, 0x488298u);
    ctx->pc = 0x488294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488290u;
            // 0x488294: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488298u; }
        if (ctx->pc != 0x488298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488298u; }
        if (ctx->pc != 0x488298u) { return; }
    }
    ctx->pc = 0x488298u;
label_488298:
    // 0x488298: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x488298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48829c:
    // 0x48829c: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x48829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_4882a0:
    // 0x4882a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4882a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4882a4:
    // 0x4882a4: 0x26450134  addiu       $a1, $s2, 0x134
    ctx->pc = 0x4882a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 308));
label_4882a8:
    // 0x4882a8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4882a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4882ac:
    // 0x4882ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4882acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4882b0:
    // 0x4882b0: 0xc04c720  jal         func_131C80
label_4882b4:
    if (ctx->pc == 0x4882B4u) {
        ctx->pc = 0x4882B4u;
            // 0x4882b4: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->pc = 0x4882B8u;
        goto label_4882b8;
    }
    ctx->pc = 0x4882B0u;
    SET_GPR_U32(ctx, 31, 0x4882B8u);
    ctx->pc = 0x4882B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4882B0u;
            // 0x4882b4: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4882B8u; }
        if (ctx->pc != 0x4882B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4882B8u; }
        if (ctx->pc != 0x4882B8u) { return; }
    }
    ctx->pc = 0x4882B8u;
label_4882b8:
    // 0x4882b8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4882b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4882bc:
    // 0x4882bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4882bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4882c0:
    // 0x4882c0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4882c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4882c4:
    // 0x4882c4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4882c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4882c8:
    // 0x4882c8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4882c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4882cc:
    // 0x4882cc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4882ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4882d0:
    // 0x4882d0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4882d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4882d4:
    // 0x4882d4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4882d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4882d8:
    // 0x4882d8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4882d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4882dc:
    // 0x4882dc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4882dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4882e0:
    // 0x4882e0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4882e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4882e4:
    // 0x4882e4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4882e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4882e8:
    // 0x4882e8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4882e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4882ec:
    // 0x4882ec: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4882ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4882f0:
    // 0x4882f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4882f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4882f4:
    // 0x4882f4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4882f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4882f8:
    // 0x4882f8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4882f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4882fc:
    // 0x4882fc: 0xc0892b0  jal         func_224AC0
label_488300:
    if (ctx->pc == 0x488300u) {
        ctx->pc = 0x488300u;
            // 0x488300: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x488304u;
        goto label_488304;
    }
    ctx->pc = 0x4882FCu;
    SET_GPR_U32(ctx, 31, 0x488304u);
    ctx->pc = 0x488300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4882FCu;
            // 0x488300: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488304u; }
        if (ctx->pc != 0x488304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488304u; }
        if (ctx->pc != 0x488304u) { return; }
    }
    ctx->pc = 0x488304u;
label_488304:
    // 0x488304: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x488304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_488308:
    // 0x488308: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x488308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_48830c:
    // 0x48830c: 0xc122c94  jal         func_48B250
label_488310:
    if (ctx->pc == 0x488310u) {
        ctx->pc = 0x488310u;
            // 0x488310: 0x8e2400e4  lw          $a0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->pc = 0x488314u;
        goto label_488314;
    }
    ctx->pc = 0x48830Cu;
    SET_GPR_U32(ctx, 31, 0x488314u);
    ctx->pc = 0x488310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48830Cu;
            // 0x488310: 0x8e2400e4  lw          $a0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488314u; }
        if (ctx->pc != 0x488314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488314u; }
        if (ctx->pc != 0x488314u) { return; }
    }
    ctx->pc = 0x488314u;
label_488314:
    // 0x488314: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x488314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_488318:
    // 0x488318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x488318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48831c:
    // 0x48831c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48831cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488320:
    // 0x488320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488324:
    // 0x488324: 0x3e00008  jr          $ra
label_488328:
    if (ctx->pc == 0x488328u) {
        ctx->pc = 0x488328u;
            // 0x488328: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x48832Cu;
        goto label_48832c;
    }
    ctx->pc = 0x488324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488324u;
            // 0x488328: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48832Cu;
label_48832c:
    // 0x48832c: 0x0  nop
    ctx->pc = 0x48832cu;
    // NOP
label_488330:
    // 0x488330: 0x3e00008  jr          $ra
label_488334:
    if (ctx->pc == 0x488334u) {
        ctx->pc = 0x488334u;
            // 0x488334: 0x2402523a  addiu       $v0, $zero, 0x523A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21050));
        ctx->pc = 0x488338u;
        goto label_488338;
    }
    ctx->pc = 0x488330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488330u;
            // 0x488334: 0x2402523a  addiu       $v0, $zero, 0x523A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488338u;
label_488338:
    // 0x488338: 0x0  nop
    ctx->pc = 0x488338u;
    // NOP
label_48833c:
    // 0x48833c: 0x0  nop
    ctx->pc = 0x48833cu;
    // NOP
label_488340:
    // 0x488340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x488340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_488344:
    // 0x488344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x488344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_488348:
    // 0x488348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x488348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48834c:
    // 0x48834c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_488350:
    // 0x488350: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x488350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488354:
    // 0x488354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x488354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_488358:
    // 0x488358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x488358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48835c:
    // 0x48835c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_488360:
    // 0x488360: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x488360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_488364:
    // 0x488364: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_488368:
    if (ctx->pc == 0x488368u) {
        ctx->pc = 0x488368u;
            // 0x488368: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48836Cu;
        goto label_48836c;
    }
    ctx->pc = 0x488364u;
    {
        const bool branch_taken_0x488364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x488368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488364u;
            // 0x488368: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488364) {
            ctx->pc = 0x4883A8u;
            goto label_4883a8;
        }
    }
    ctx->pc = 0x48836Cu;
label_48836c:
    // 0x48836c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48836cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488370:
    // 0x488370: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x488370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488374:
    // 0x488374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x488374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488378:
    // 0x488378: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x488378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_48837c:
    // 0x48837c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x48837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_488380:
    // 0x488380: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x488380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_488384:
    // 0x488384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x488384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_488388:
    // 0x488388: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x488388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_48838c:
    // 0x48838c: 0x320f809  jalr        $t9
label_488390:
    if (ctx->pc == 0x488390u) {
        ctx->pc = 0x488394u;
        goto label_488394;
    }
    ctx->pc = 0x48838Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x488394u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x488394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x488394u; }
            if (ctx->pc != 0x488394u) { return; }
        }
        }
    }
    ctx->pc = 0x488394u;
label_488394:
    // 0x488394: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x488394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_488398:
    // 0x488398: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x488398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_48839c:
    // 0x48839c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x48839cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4883a0:
    // 0x4883a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4883a4:
    if (ctx->pc == 0x4883A4u) {
        ctx->pc = 0x4883A4u;
            // 0x4883a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4883A8u;
        goto label_4883a8;
    }
    ctx->pc = 0x4883A0u;
    {
        const bool branch_taken_0x4883a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4883A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4883A0u;
            // 0x4883a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4883a0) {
            ctx->pc = 0x488378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_488378;
        }
    }
    ctx->pc = 0x4883A8u;
label_4883a8:
    // 0x4883a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4883a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4883ac:
    // 0x4883ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4883acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4883b0:
    // 0x4883b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4883b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4883b4:
    // 0x4883b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4883b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4883b8:
    // 0x4883b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4883b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4883bc:
    // 0x4883bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4883bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4883c0:
    // 0x4883c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4883c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4883c4:
    // 0x4883c4: 0x3e00008  jr          $ra
label_4883c8:
    if (ctx->pc == 0x4883C8u) {
        ctx->pc = 0x4883C8u;
            // 0x4883c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4883CCu;
        goto label_4883cc;
    }
    ctx->pc = 0x4883C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4883C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4883C4u;
            // 0x4883c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4883CCu;
label_4883cc:
    // 0x4883cc: 0x0  nop
    ctx->pc = 0x4883ccu;
    // NOP
label_4883d0:
    // 0x4883d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4883d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4883d4:
    // 0x4883d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4883d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4883d8:
    // 0x4883d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4883d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4883dc:
    // 0x4883dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4883dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4883e0:
    // 0x4883e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4883e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4883e4:
    // 0x4883e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4883e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4883e8:
    // 0x4883e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4883e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4883ec:
    // 0x4883ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4883ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4883f0:
    // 0x4883f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4883f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4883f4:
    // 0x4883f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4883f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4883f8:
    // 0x4883f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4883f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4883fc:
    // 0x4883fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4883fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_488400:
    // 0x488400: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x488400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_488404:
    // 0x488404: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x488404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_488408:
    // 0x488408: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x488408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_48840c:
    // 0x48840c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x48840cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_488410:
    // 0x488410: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x488410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_488414:
    // 0x488414: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x488414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_488418:
    // 0x488418: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x488418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_48841c:
    // 0x48841c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x48841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_488420:
    // 0x488420: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x488420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_488424:
    // 0x488424: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x488424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_488428:
    // 0x488428: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x488428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48842c:
    // 0x48842c: 0xc0a997c  jal         func_2A65F0
label_488430:
    if (ctx->pc == 0x488430u) {
        ctx->pc = 0x488430u;
            // 0x488430: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x488434u;
        goto label_488434;
    }
    ctx->pc = 0x48842Cu;
    SET_GPR_U32(ctx, 31, 0x488434u);
    ctx->pc = 0x488430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48842Cu;
            // 0x488430: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488434u; }
        if (ctx->pc != 0x488434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488434u; }
        if (ctx->pc != 0x488434u) { return; }
    }
    ctx->pc = 0x488434u;
label_488434:
    // 0x488434: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x488434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_488438:
    // 0x488438: 0xc0d879c  jal         func_361E70
label_48843c:
    if (ctx->pc == 0x48843Cu) {
        ctx->pc = 0x48843Cu;
            // 0x48843c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488440u;
        goto label_488440;
    }
    ctx->pc = 0x488438u;
    SET_GPR_U32(ctx, 31, 0x488440u);
    ctx->pc = 0x48843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488438u;
            // 0x48843c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488440u; }
        if (ctx->pc != 0x488440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488440u; }
        if (ctx->pc != 0x488440u) { return; }
    }
    ctx->pc = 0x488440u;
label_488440:
    // 0x488440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x488440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_488444:
    // 0x488444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488448:
    // 0x488448: 0x3e00008  jr          $ra
label_48844c:
    if (ctx->pc == 0x48844Cu) {
        ctx->pc = 0x48844Cu;
            // 0x48844c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x488450u;
        goto label_488450;
    }
    ctx->pc = 0x488448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488448u;
            // 0x48844c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488450u;
label_488450:
    // 0x488450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x488450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_488454:
    // 0x488454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x488454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_488458:
    // 0x488458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x488458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48845c:
    // 0x48845c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x48845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_488460:
    // 0x488460: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_488464:
    if (ctx->pc == 0x488464u) {
        ctx->pc = 0x488464u;
            // 0x488464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488468u;
        goto label_488468;
    }
    ctx->pc = 0x488460u;
    {
        const bool branch_taken_0x488460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x488464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488460u;
            // 0x488464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488460) {
            ctx->pc = 0x488580u;
            goto label_488580;
        }
    }
    ctx->pc = 0x488468u;
label_488468:
    // 0x488468: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x488468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_48846c:
    // 0x48846c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x48846cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_488470:
    // 0x488470: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x488470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_488474:
    // 0x488474: 0xc075128  jal         func_1D44A0
label_488478:
    if (ctx->pc == 0x488478u) {
        ctx->pc = 0x488478u;
            // 0x488478: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x48847Cu;
        goto label_48847c;
    }
    ctx->pc = 0x488474u;
    SET_GPR_U32(ctx, 31, 0x48847Cu);
    ctx->pc = 0x488478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488474u;
            // 0x488478: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48847Cu; }
        if (ctx->pc != 0x48847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48847Cu; }
        if (ctx->pc != 0x48847Cu) { return; }
    }
    ctx->pc = 0x48847Cu;
label_48847c:
    // 0x48847c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x48847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_488480:
    // 0x488480: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_488484:
    // 0x488484: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x488484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_488488:
    // 0x488488: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x488488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_48848c:
    // 0x48848c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x48848cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_488490:
    // 0x488490: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_488494:
    if (ctx->pc == 0x488494u) {
        ctx->pc = 0x488494u;
            // 0x488494: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x488498u;
        goto label_488498;
    }
    ctx->pc = 0x488490u;
    {
        const bool branch_taken_0x488490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x488494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488490u;
            // 0x488494: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488490) {
            ctx->pc = 0x4884A0u;
            goto label_4884a0;
        }
    }
    ctx->pc = 0x488498u;
label_488498:
    // 0x488498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x488498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48849c:
    // 0x48849c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x48849cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4884a0:
    // 0x4884a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4884a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4884a4:
    // 0x4884a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4884a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4884a8:
    // 0x4884a8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4884a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4884ac:
    // 0x4884ac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4884acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4884b0:
    // 0x4884b0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4884b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4884b4:
    // 0x4884b4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4884b8:
    if (ctx->pc == 0x4884B8u) {
        ctx->pc = 0x4884B8u;
            // 0x4884b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4884BCu;
        goto label_4884bc;
    }
    ctx->pc = 0x4884B4u;
    {
        const bool branch_taken_0x4884b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4884b4) {
            ctx->pc = 0x4884B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4884B4u;
            // 0x4884b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4884C8u;
            goto label_4884c8;
        }
    }
    ctx->pc = 0x4884BCu;
label_4884bc:
    // 0x4884bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4884bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4884c0:
    // 0x4884c0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4884c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4884c4:
    // 0x4884c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4884c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4884c8:
    // 0x4884c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4884c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4884cc:
    // 0x4884cc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4884ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4884d0:
    // 0x4884d0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4884d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4884d4:
    // 0x4884d4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4884d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4884d8:
    // 0x4884d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4884dc:
    if (ctx->pc == 0x4884DCu) {
        ctx->pc = 0x4884DCu;
            // 0x4884dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4884E0u;
        goto label_4884e0;
    }
    ctx->pc = 0x4884D8u;
    {
        const bool branch_taken_0x4884d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4884d8) {
            ctx->pc = 0x4884DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4884D8u;
            // 0x4884dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4884ECu;
            goto label_4884ec;
        }
    }
    ctx->pc = 0x4884E0u;
label_4884e0:
    // 0x4884e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4884e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4884e4:
    // 0x4884e4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4884e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4884e8:
    // 0x4884e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4884e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4884ec:
    // 0x4884ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4884ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4884f0:
    // 0x4884f0: 0x320f809  jalr        $t9
label_4884f4:
    if (ctx->pc == 0x4884F4u) {
        ctx->pc = 0x4884F4u;
            // 0x4884f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4884F8u;
        goto label_4884f8;
    }
    ctx->pc = 0x4884F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4884F8u);
        ctx->pc = 0x4884F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4884F0u;
            // 0x4884f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4884F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4884F8u; }
            if (ctx->pc != 0x4884F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4884F8u;
label_4884f8:
    // 0x4884f8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4884f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4884fc:
    // 0x4884fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4884fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_488500:
    // 0x488500: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x488500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_488504:
    // 0x488504: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x488504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_488508:
    // 0x488508: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x488508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_48850c:
    // 0x48850c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x48850cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_488510:
    // 0x488510: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_488514:
    if (ctx->pc == 0x488514u) {
        ctx->pc = 0x488514u;
            // 0x488514: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x488518u;
        goto label_488518;
    }
    ctx->pc = 0x488510u;
    {
        const bool branch_taken_0x488510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488510) {
            ctx->pc = 0x488514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x488510u;
            // 0x488514: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x488524u;
            goto label_488524;
        }
    }
    ctx->pc = 0x488518u;
label_488518:
    // 0x488518: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x488518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48851c:
    // 0x48851c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x48851cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_488520:
    // 0x488520: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x488520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_488524:
    // 0x488524: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x488524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_488528:
    // 0x488528: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x488528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_48852c:
    // 0x48852c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x48852cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_488530:
    // 0x488530: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x488530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_488534:
    // 0x488534: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x488534u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_488538:
    // 0x488538: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_48853c:
    if (ctx->pc == 0x48853Cu) {
        ctx->pc = 0x488540u;
        goto label_488540;
    }
    ctx->pc = 0x488538u;
    {
        const bool branch_taken_0x488538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488538) {
            ctx->pc = 0x488548u;
            goto label_488548;
        }
    }
    ctx->pc = 0x488540u;
label_488540:
    // 0x488540: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x488540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_488544:
    // 0x488544: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x488544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_488548:
    // 0x488548: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x488548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48854c:
    // 0x48854c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x48854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_488550:
    // 0x488550: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x488550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_488554:
    // 0x488554: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_488558:
    if (ctx->pc == 0x488558u) {
        ctx->pc = 0x48855Cu;
        goto label_48855c;
    }
    ctx->pc = 0x488554u;
    {
        const bool branch_taken_0x488554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488554) {
            ctx->pc = 0x488564u;
            goto label_488564;
        }
    }
    ctx->pc = 0x48855Cu;
label_48855c:
    // 0x48855c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x48855cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_488560:
    // 0x488560: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x488560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_488564:
    // 0x488564: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x488564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_488568:
    // 0x488568: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x488568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_48856c:
    // 0x48856c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x48856cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_488570:
    // 0x488570: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_488574:
    if (ctx->pc == 0x488574u) {
        ctx->pc = 0x488574u;
            // 0x488574: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x488578u;
        goto label_488578;
    }
    ctx->pc = 0x488570u;
    {
        const bool branch_taken_0x488570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x488570) {
            ctx->pc = 0x488574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x488570u;
            // 0x488574: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x488584u;
            goto label_488584;
        }
    }
    ctx->pc = 0x488578u;
label_488578:
    // 0x488578: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x488578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48857c:
    // 0x48857c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x48857cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_488580:
    // 0x488580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x488580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_488584:
    // 0x488584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488588:
    // 0x488588: 0x3e00008  jr          $ra
label_48858c:
    if (ctx->pc == 0x48858Cu) {
        ctx->pc = 0x48858Cu;
            // 0x48858c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x488590u;
        goto label_488590;
    }
    ctx->pc = 0x488588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488588u;
            // 0x48858c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488590u;
label_488590:
    // 0x488590: 0x8121c1c  j           func_487070
label_488594:
    if (ctx->pc == 0x488594u) {
        ctx->pc = 0x488594u;
            // 0x488594: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x488598u;
        goto label_488598;
    }
    ctx->pc = 0x488590u;
    ctx->pc = 0x488594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488590u;
            // 0x488594: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x487070u;
    {
        auto targetFn = runtime->lookupFunction(0x487070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x488598u;
label_488598:
    // 0x488598: 0x0  nop
    ctx->pc = 0x488598u;
    // NOP
label_48859c:
    // 0x48859c: 0x0  nop
    ctx->pc = 0x48859cu;
    // NOP
label_4885a0:
    // 0x4885a0: 0x8121a8c  j           func_486A30
label_4885a4:
    if (ctx->pc == 0x4885A4u) {
        ctx->pc = 0x4885A4u;
            // 0x4885a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4885A8u;
        goto label_4885a8;
    }
    ctx->pc = 0x4885A0u;
    ctx->pc = 0x4885A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4885A0u;
            // 0x4885a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x486A30u;
    if (runtime->hasFunction(0x486A30u)) {
        auto targetFn = runtime->lookupFunction(0x486A30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00486A30_0x486a30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4885A8u;
label_4885a8:
    // 0x4885a8: 0x0  nop
    ctx->pc = 0x4885a8u;
    // NOP
label_4885ac:
    // 0x4885ac: 0x0  nop
    ctx->pc = 0x4885acu;
    // NOP
label_4885b0:
    // 0x4885b0: 0x8121a68  j           func_4869A0
label_4885b4:
    if (ctx->pc == 0x4885B4u) {
        ctx->pc = 0x4885B4u;
            // 0x4885b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4885B8u;
        goto label_4885b8;
    }
    ctx->pc = 0x4885B0u;
    ctx->pc = 0x4885B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4885B0u;
            // 0x4885b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4869A0u;
    {
        auto targetFn = runtime->lookupFunction(0x4869A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4885B8u;
label_4885b8:
    // 0x4885b8: 0x0  nop
    ctx->pc = 0x4885b8u;
    // NOP
label_4885bc:
    // 0x4885bc: 0x0  nop
    ctx->pc = 0x4885bcu;
    // NOP
}
