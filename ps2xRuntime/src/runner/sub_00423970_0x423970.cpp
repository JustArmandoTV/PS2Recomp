#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00423970
// Address: 0x423970 - 0x424890
void sub_00423970_0x423970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423970_0x423970");
#endif

    switch (ctx->pc) {
        case 0x423970u: goto label_423970;
        case 0x423974u: goto label_423974;
        case 0x423978u: goto label_423978;
        case 0x42397cu: goto label_42397c;
        case 0x423980u: goto label_423980;
        case 0x423984u: goto label_423984;
        case 0x423988u: goto label_423988;
        case 0x42398cu: goto label_42398c;
        case 0x423990u: goto label_423990;
        case 0x423994u: goto label_423994;
        case 0x423998u: goto label_423998;
        case 0x42399cu: goto label_42399c;
        case 0x4239a0u: goto label_4239a0;
        case 0x4239a4u: goto label_4239a4;
        case 0x4239a8u: goto label_4239a8;
        case 0x4239acu: goto label_4239ac;
        case 0x4239b0u: goto label_4239b0;
        case 0x4239b4u: goto label_4239b4;
        case 0x4239b8u: goto label_4239b8;
        case 0x4239bcu: goto label_4239bc;
        case 0x4239c0u: goto label_4239c0;
        case 0x4239c4u: goto label_4239c4;
        case 0x4239c8u: goto label_4239c8;
        case 0x4239ccu: goto label_4239cc;
        case 0x4239d0u: goto label_4239d0;
        case 0x4239d4u: goto label_4239d4;
        case 0x4239d8u: goto label_4239d8;
        case 0x4239dcu: goto label_4239dc;
        case 0x4239e0u: goto label_4239e0;
        case 0x4239e4u: goto label_4239e4;
        case 0x4239e8u: goto label_4239e8;
        case 0x4239ecu: goto label_4239ec;
        case 0x4239f0u: goto label_4239f0;
        case 0x4239f4u: goto label_4239f4;
        case 0x4239f8u: goto label_4239f8;
        case 0x4239fcu: goto label_4239fc;
        case 0x423a00u: goto label_423a00;
        case 0x423a04u: goto label_423a04;
        case 0x423a08u: goto label_423a08;
        case 0x423a0cu: goto label_423a0c;
        case 0x423a10u: goto label_423a10;
        case 0x423a14u: goto label_423a14;
        case 0x423a18u: goto label_423a18;
        case 0x423a1cu: goto label_423a1c;
        case 0x423a20u: goto label_423a20;
        case 0x423a24u: goto label_423a24;
        case 0x423a28u: goto label_423a28;
        case 0x423a2cu: goto label_423a2c;
        case 0x423a30u: goto label_423a30;
        case 0x423a34u: goto label_423a34;
        case 0x423a38u: goto label_423a38;
        case 0x423a3cu: goto label_423a3c;
        case 0x423a40u: goto label_423a40;
        case 0x423a44u: goto label_423a44;
        case 0x423a48u: goto label_423a48;
        case 0x423a4cu: goto label_423a4c;
        case 0x423a50u: goto label_423a50;
        case 0x423a54u: goto label_423a54;
        case 0x423a58u: goto label_423a58;
        case 0x423a5cu: goto label_423a5c;
        case 0x423a60u: goto label_423a60;
        case 0x423a64u: goto label_423a64;
        case 0x423a68u: goto label_423a68;
        case 0x423a6cu: goto label_423a6c;
        case 0x423a70u: goto label_423a70;
        case 0x423a74u: goto label_423a74;
        case 0x423a78u: goto label_423a78;
        case 0x423a7cu: goto label_423a7c;
        case 0x423a80u: goto label_423a80;
        case 0x423a84u: goto label_423a84;
        case 0x423a88u: goto label_423a88;
        case 0x423a8cu: goto label_423a8c;
        case 0x423a90u: goto label_423a90;
        case 0x423a94u: goto label_423a94;
        case 0x423a98u: goto label_423a98;
        case 0x423a9cu: goto label_423a9c;
        case 0x423aa0u: goto label_423aa0;
        case 0x423aa4u: goto label_423aa4;
        case 0x423aa8u: goto label_423aa8;
        case 0x423aacu: goto label_423aac;
        case 0x423ab0u: goto label_423ab0;
        case 0x423ab4u: goto label_423ab4;
        case 0x423ab8u: goto label_423ab8;
        case 0x423abcu: goto label_423abc;
        case 0x423ac0u: goto label_423ac0;
        case 0x423ac4u: goto label_423ac4;
        case 0x423ac8u: goto label_423ac8;
        case 0x423accu: goto label_423acc;
        case 0x423ad0u: goto label_423ad0;
        case 0x423ad4u: goto label_423ad4;
        case 0x423ad8u: goto label_423ad8;
        case 0x423adcu: goto label_423adc;
        case 0x423ae0u: goto label_423ae0;
        case 0x423ae4u: goto label_423ae4;
        case 0x423ae8u: goto label_423ae8;
        case 0x423aecu: goto label_423aec;
        case 0x423af0u: goto label_423af0;
        case 0x423af4u: goto label_423af4;
        case 0x423af8u: goto label_423af8;
        case 0x423afcu: goto label_423afc;
        case 0x423b00u: goto label_423b00;
        case 0x423b04u: goto label_423b04;
        case 0x423b08u: goto label_423b08;
        case 0x423b0cu: goto label_423b0c;
        case 0x423b10u: goto label_423b10;
        case 0x423b14u: goto label_423b14;
        case 0x423b18u: goto label_423b18;
        case 0x423b1cu: goto label_423b1c;
        case 0x423b20u: goto label_423b20;
        case 0x423b24u: goto label_423b24;
        case 0x423b28u: goto label_423b28;
        case 0x423b2cu: goto label_423b2c;
        case 0x423b30u: goto label_423b30;
        case 0x423b34u: goto label_423b34;
        case 0x423b38u: goto label_423b38;
        case 0x423b3cu: goto label_423b3c;
        case 0x423b40u: goto label_423b40;
        case 0x423b44u: goto label_423b44;
        case 0x423b48u: goto label_423b48;
        case 0x423b4cu: goto label_423b4c;
        case 0x423b50u: goto label_423b50;
        case 0x423b54u: goto label_423b54;
        case 0x423b58u: goto label_423b58;
        case 0x423b5cu: goto label_423b5c;
        case 0x423b60u: goto label_423b60;
        case 0x423b64u: goto label_423b64;
        case 0x423b68u: goto label_423b68;
        case 0x423b6cu: goto label_423b6c;
        case 0x423b70u: goto label_423b70;
        case 0x423b74u: goto label_423b74;
        case 0x423b78u: goto label_423b78;
        case 0x423b7cu: goto label_423b7c;
        case 0x423b80u: goto label_423b80;
        case 0x423b84u: goto label_423b84;
        case 0x423b88u: goto label_423b88;
        case 0x423b8cu: goto label_423b8c;
        case 0x423b90u: goto label_423b90;
        case 0x423b94u: goto label_423b94;
        case 0x423b98u: goto label_423b98;
        case 0x423b9cu: goto label_423b9c;
        case 0x423ba0u: goto label_423ba0;
        case 0x423ba4u: goto label_423ba4;
        case 0x423ba8u: goto label_423ba8;
        case 0x423bacu: goto label_423bac;
        case 0x423bb0u: goto label_423bb0;
        case 0x423bb4u: goto label_423bb4;
        case 0x423bb8u: goto label_423bb8;
        case 0x423bbcu: goto label_423bbc;
        case 0x423bc0u: goto label_423bc0;
        case 0x423bc4u: goto label_423bc4;
        case 0x423bc8u: goto label_423bc8;
        case 0x423bccu: goto label_423bcc;
        case 0x423bd0u: goto label_423bd0;
        case 0x423bd4u: goto label_423bd4;
        case 0x423bd8u: goto label_423bd8;
        case 0x423bdcu: goto label_423bdc;
        case 0x423be0u: goto label_423be0;
        case 0x423be4u: goto label_423be4;
        case 0x423be8u: goto label_423be8;
        case 0x423becu: goto label_423bec;
        case 0x423bf0u: goto label_423bf0;
        case 0x423bf4u: goto label_423bf4;
        case 0x423bf8u: goto label_423bf8;
        case 0x423bfcu: goto label_423bfc;
        case 0x423c00u: goto label_423c00;
        case 0x423c04u: goto label_423c04;
        case 0x423c08u: goto label_423c08;
        case 0x423c0cu: goto label_423c0c;
        case 0x423c10u: goto label_423c10;
        case 0x423c14u: goto label_423c14;
        case 0x423c18u: goto label_423c18;
        case 0x423c1cu: goto label_423c1c;
        case 0x423c20u: goto label_423c20;
        case 0x423c24u: goto label_423c24;
        case 0x423c28u: goto label_423c28;
        case 0x423c2cu: goto label_423c2c;
        case 0x423c30u: goto label_423c30;
        case 0x423c34u: goto label_423c34;
        case 0x423c38u: goto label_423c38;
        case 0x423c3cu: goto label_423c3c;
        case 0x423c40u: goto label_423c40;
        case 0x423c44u: goto label_423c44;
        case 0x423c48u: goto label_423c48;
        case 0x423c4cu: goto label_423c4c;
        case 0x423c50u: goto label_423c50;
        case 0x423c54u: goto label_423c54;
        case 0x423c58u: goto label_423c58;
        case 0x423c5cu: goto label_423c5c;
        case 0x423c60u: goto label_423c60;
        case 0x423c64u: goto label_423c64;
        case 0x423c68u: goto label_423c68;
        case 0x423c6cu: goto label_423c6c;
        case 0x423c70u: goto label_423c70;
        case 0x423c74u: goto label_423c74;
        case 0x423c78u: goto label_423c78;
        case 0x423c7cu: goto label_423c7c;
        case 0x423c80u: goto label_423c80;
        case 0x423c84u: goto label_423c84;
        case 0x423c88u: goto label_423c88;
        case 0x423c8cu: goto label_423c8c;
        case 0x423c90u: goto label_423c90;
        case 0x423c94u: goto label_423c94;
        case 0x423c98u: goto label_423c98;
        case 0x423c9cu: goto label_423c9c;
        case 0x423ca0u: goto label_423ca0;
        case 0x423ca4u: goto label_423ca4;
        case 0x423ca8u: goto label_423ca8;
        case 0x423cacu: goto label_423cac;
        case 0x423cb0u: goto label_423cb0;
        case 0x423cb4u: goto label_423cb4;
        case 0x423cb8u: goto label_423cb8;
        case 0x423cbcu: goto label_423cbc;
        case 0x423cc0u: goto label_423cc0;
        case 0x423cc4u: goto label_423cc4;
        case 0x423cc8u: goto label_423cc8;
        case 0x423cccu: goto label_423ccc;
        case 0x423cd0u: goto label_423cd0;
        case 0x423cd4u: goto label_423cd4;
        case 0x423cd8u: goto label_423cd8;
        case 0x423cdcu: goto label_423cdc;
        case 0x423ce0u: goto label_423ce0;
        case 0x423ce4u: goto label_423ce4;
        case 0x423ce8u: goto label_423ce8;
        case 0x423cecu: goto label_423cec;
        case 0x423cf0u: goto label_423cf0;
        case 0x423cf4u: goto label_423cf4;
        case 0x423cf8u: goto label_423cf8;
        case 0x423cfcu: goto label_423cfc;
        case 0x423d00u: goto label_423d00;
        case 0x423d04u: goto label_423d04;
        case 0x423d08u: goto label_423d08;
        case 0x423d0cu: goto label_423d0c;
        case 0x423d10u: goto label_423d10;
        case 0x423d14u: goto label_423d14;
        case 0x423d18u: goto label_423d18;
        case 0x423d1cu: goto label_423d1c;
        case 0x423d20u: goto label_423d20;
        case 0x423d24u: goto label_423d24;
        case 0x423d28u: goto label_423d28;
        case 0x423d2cu: goto label_423d2c;
        case 0x423d30u: goto label_423d30;
        case 0x423d34u: goto label_423d34;
        case 0x423d38u: goto label_423d38;
        case 0x423d3cu: goto label_423d3c;
        case 0x423d40u: goto label_423d40;
        case 0x423d44u: goto label_423d44;
        case 0x423d48u: goto label_423d48;
        case 0x423d4cu: goto label_423d4c;
        case 0x423d50u: goto label_423d50;
        case 0x423d54u: goto label_423d54;
        case 0x423d58u: goto label_423d58;
        case 0x423d5cu: goto label_423d5c;
        case 0x423d60u: goto label_423d60;
        case 0x423d64u: goto label_423d64;
        case 0x423d68u: goto label_423d68;
        case 0x423d6cu: goto label_423d6c;
        case 0x423d70u: goto label_423d70;
        case 0x423d74u: goto label_423d74;
        case 0x423d78u: goto label_423d78;
        case 0x423d7cu: goto label_423d7c;
        case 0x423d80u: goto label_423d80;
        case 0x423d84u: goto label_423d84;
        case 0x423d88u: goto label_423d88;
        case 0x423d8cu: goto label_423d8c;
        case 0x423d90u: goto label_423d90;
        case 0x423d94u: goto label_423d94;
        case 0x423d98u: goto label_423d98;
        case 0x423d9cu: goto label_423d9c;
        case 0x423da0u: goto label_423da0;
        case 0x423da4u: goto label_423da4;
        case 0x423da8u: goto label_423da8;
        case 0x423dacu: goto label_423dac;
        case 0x423db0u: goto label_423db0;
        case 0x423db4u: goto label_423db4;
        case 0x423db8u: goto label_423db8;
        case 0x423dbcu: goto label_423dbc;
        case 0x423dc0u: goto label_423dc0;
        case 0x423dc4u: goto label_423dc4;
        case 0x423dc8u: goto label_423dc8;
        case 0x423dccu: goto label_423dcc;
        case 0x423dd0u: goto label_423dd0;
        case 0x423dd4u: goto label_423dd4;
        case 0x423dd8u: goto label_423dd8;
        case 0x423ddcu: goto label_423ddc;
        case 0x423de0u: goto label_423de0;
        case 0x423de4u: goto label_423de4;
        case 0x423de8u: goto label_423de8;
        case 0x423decu: goto label_423dec;
        case 0x423df0u: goto label_423df0;
        case 0x423df4u: goto label_423df4;
        case 0x423df8u: goto label_423df8;
        case 0x423dfcu: goto label_423dfc;
        case 0x423e00u: goto label_423e00;
        case 0x423e04u: goto label_423e04;
        case 0x423e08u: goto label_423e08;
        case 0x423e0cu: goto label_423e0c;
        case 0x423e10u: goto label_423e10;
        case 0x423e14u: goto label_423e14;
        case 0x423e18u: goto label_423e18;
        case 0x423e1cu: goto label_423e1c;
        case 0x423e20u: goto label_423e20;
        case 0x423e24u: goto label_423e24;
        case 0x423e28u: goto label_423e28;
        case 0x423e2cu: goto label_423e2c;
        case 0x423e30u: goto label_423e30;
        case 0x423e34u: goto label_423e34;
        case 0x423e38u: goto label_423e38;
        case 0x423e3cu: goto label_423e3c;
        case 0x423e40u: goto label_423e40;
        case 0x423e44u: goto label_423e44;
        case 0x423e48u: goto label_423e48;
        case 0x423e4cu: goto label_423e4c;
        case 0x423e50u: goto label_423e50;
        case 0x423e54u: goto label_423e54;
        case 0x423e58u: goto label_423e58;
        case 0x423e5cu: goto label_423e5c;
        case 0x423e60u: goto label_423e60;
        case 0x423e64u: goto label_423e64;
        case 0x423e68u: goto label_423e68;
        case 0x423e6cu: goto label_423e6c;
        case 0x423e70u: goto label_423e70;
        case 0x423e74u: goto label_423e74;
        case 0x423e78u: goto label_423e78;
        case 0x423e7cu: goto label_423e7c;
        case 0x423e80u: goto label_423e80;
        case 0x423e84u: goto label_423e84;
        case 0x423e88u: goto label_423e88;
        case 0x423e8cu: goto label_423e8c;
        case 0x423e90u: goto label_423e90;
        case 0x423e94u: goto label_423e94;
        case 0x423e98u: goto label_423e98;
        case 0x423e9cu: goto label_423e9c;
        case 0x423ea0u: goto label_423ea0;
        case 0x423ea4u: goto label_423ea4;
        case 0x423ea8u: goto label_423ea8;
        case 0x423eacu: goto label_423eac;
        case 0x423eb0u: goto label_423eb0;
        case 0x423eb4u: goto label_423eb4;
        case 0x423eb8u: goto label_423eb8;
        case 0x423ebcu: goto label_423ebc;
        case 0x423ec0u: goto label_423ec0;
        case 0x423ec4u: goto label_423ec4;
        case 0x423ec8u: goto label_423ec8;
        case 0x423eccu: goto label_423ecc;
        case 0x423ed0u: goto label_423ed0;
        case 0x423ed4u: goto label_423ed4;
        case 0x423ed8u: goto label_423ed8;
        case 0x423edcu: goto label_423edc;
        case 0x423ee0u: goto label_423ee0;
        case 0x423ee4u: goto label_423ee4;
        case 0x423ee8u: goto label_423ee8;
        case 0x423eecu: goto label_423eec;
        case 0x423ef0u: goto label_423ef0;
        case 0x423ef4u: goto label_423ef4;
        case 0x423ef8u: goto label_423ef8;
        case 0x423efcu: goto label_423efc;
        case 0x423f00u: goto label_423f00;
        case 0x423f04u: goto label_423f04;
        case 0x423f08u: goto label_423f08;
        case 0x423f0cu: goto label_423f0c;
        case 0x423f10u: goto label_423f10;
        case 0x423f14u: goto label_423f14;
        case 0x423f18u: goto label_423f18;
        case 0x423f1cu: goto label_423f1c;
        case 0x423f20u: goto label_423f20;
        case 0x423f24u: goto label_423f24;
        case 0x423f28u: goto label_423f28;
        case 0x423f2cu: goto label_423f2c;
        case 0x423f30u: goto label_423f30;
        case 0x423f34u: goto label_423f34;
        case 0x423f38u: goto label_423f38;
        case 0x423f3cu: goto label_423f3c;
        case 0x423f40u: goto label_423f40;
        case 0x423f44u: goto label_423f44;
        case 0x423f48u: goto label_423f48;
        case 0x423f4cu: goto label_423f4c;
        case 0x423f50u: goto label_423f50;
        case 0x423f54u: goto label_423f54;
        case 0x423f58u: goto label_423f58;
        case 0x423f5cu: goto label_423f5c;
        case 0x423f60u: goto label_423f60;
        case 0x423f64u: goto label_423f64;
        case 0x423f68u: goto label_423f68;
        case 0x423f6cu: goto label_423f6c;
        case 0x423f70u: goto label_423f70;
        case 0x423f74u: goto label_423f74;
        case 0x423f78u: goto label_423f78;
        case 0x423f7cu: goto label_423f7c;
        case 0x423f80u: goto label_423f80;
        case 0x423f84u: goto label_423f84;
        case 0x423f88u: goto label_423f88;
        case 0x423f8cu: goto label_423f8c;
        case 0x423f90u: goto label_423f90;
        case 0x423f94u: goto label_423f94;
        case 0x423f98u: goto label_423f98;
        case 0x423f9cu: goto label_423f9c;
        case 0x423fa0u: goto label_423fa0;
        case 0x423fa4u: goto label_423fa4;
        case 0x423fa8u: goto label_423fa8;
        case 0x423facu: goto label_423fac;
        case 0x423fb0u: goto label_423fb0;
        case 0x423fb4u: goto label_423fb4;
        case 0x423fb8u: goto label_423fb8;
        case 0x423fbcu: goto label_423fbc;
        case 0x423fc0u: goto label_423fc0;
        case 0x423fc4u: goto label_423fc4;
        case 0x423fc8u: goto label_423fc8;
        case 0x423fccu: goto label_423fcc;
        case 0x423fd0u: goto label_423fd0;
        case 0x423fd4u: goto label_423fd4;
        case 0x423fd8u: goto label_423fd8;
        case 0x423fdcu: goto label_423fdc;
        case 0x423fe0u: goto label_423fe0;
        case 0x423fe4u: goto label_423fe4;
        case 0x423fe8u: goto label_423fe8;
        case 0x423fecu: goto label_423fec;
        case 0x423ff0u: goto label_423ff0;
        case 0x423ff4u: goto label_423ff4;
        case 0x423ff8u: goto label_423ff8;
        case 0x423ffcu: goto label_423ffc;
        case 0x424000u: goto label_424000;
        case 0x424004u: goto label_424004;
        case 0x424008u: goto label_424008;
        case 0x42400cu: goto label_42400c;
        case 0x424010u: goto label_424010;
        case 0x424014u: goto label_424014;
        case 0x424018u: goto label_424018;
        case 0x42401cu: goto label_42401c;
        case 0x424020u: goto label_424020;
        case 0x424024u: goto label_424024;
        case 0x424028u: goto label_424028;
        case 0x42402cu: goto label_42402c;
        case 0x424030u: goto label_424030;
        case 0x424034u: goto label_424034;
        case 0x424038u: goto label_424038;
        case 0x42403cu: goto label_42403c;
        case 0x424040u: goto label_424040;
        case 0x424044u: goto label_424044;
        case 0x424048u: goto label_424048;
        case 0x42404cu: goto label_42404c;
        case 0x424050u: goto label_424050;
        case 0x424054u: goto label_424054;
        case 0x424058u: goto label_424058;
        case 0x42405cu: goto label_42405c;
        case 0x424060u: goto label_424060;
        case 0x424064u: goto label_424064;
        case 0x424068u: goto label_424068;
        case 0x42406cu: goto label_42406c;
        case 0x424070u: goto label_424070;
        case 0x424074u: goto label_424074;
        case 0x424078u: goto label_424078;
        case 0x42407cu: goto label_42407c;
        case 0x424080u: goto label_424080;
        case 0x424084u: goto label_424084;
        case 0x424088u: goto label_424088;
        case 0x42408cu: goto label_42408c;
        case 0x424090u: goto label_424090;
        case 0x424094u: goto label_424094;
        case 0x424098u: goto label_424098;
        case 0x42409cu: goto label_42409c;
        case 0x4240a0u: goto label_4240a0;
        case 0x4240a4u: goto label_4240a4;
        case 0x4240a8u: goto label_4240a8;
        case 0x4240acu: goto label_4240ac;
        case 0x4240b0u: goto label_4240b0;
        case 0x4240b4u: goto label_4240b4;
        case 0x4240b8u: goto label_4240b8;
        case 0x4240bcu: goto label_4240bc;
        case 0x4240c0u: goto label_4240c0;
        case 0x4240c4u: goto label_4240c4;
        case 0x4240c8u: goto label_4240c8;
        case 0x4240ccu: goto label_4240cc;
        case 0x4240d0u: goto label_4240d0;
        case 0x4240d4u: goto label_4240d4;
        case 0x4240d8u: goto label_4240d8;
        case 0x4240dcu: goto label_4240dc;
        case 0x4240e0u: goto label_4240e0;
        case 0x4240e4u: goto label_4240e4;
        case 0x4240e8u: goto label_4240e8;
        case 0x4240ecu: goto label_4240ec;
        case 0x4240f0u: goto label_4240f0;
        case 0x4240f4u: goto label_4240f4;
        case 0x4240f8u: goto label_4240f8;
        case 0x4240fcu: goto label_4240fc;
        case 0x424100u: goto label_424100;
        case 0x424104u: goto label_424104;
        case 0x424108u: goto label_424108;
        case 0x42410cu: goto label_42410c;
        case 0x424110u: goto label_424110;
        case 0x424114u: goto label_424114;
        case 0x424118u: goto label_424118;
        case 0x42411cu: goto label_42411c;
        case 0x424120u: goto label_424120;
        case 0x424124u: goto label_424124;
        case 0x424128u: goto label_424128;
        case 0x42412cu: goto label_42412c;
        case 0x424130u: goto label_424130;
        case 0x424134u: goto label_424134;
        case 0x424138u: goto label_424138;
        case 0x42413cu: goto label_42413c;
        case 0x424140u: goto label_424140;
        case 0x424144u: goto label_424144;
        case 0x424148u: goto label_424148;
        case 0x42414cu: goto label_42414c;
        case 0x424150u: goto label_424150;
        case 0x424154u: goto label_424154;
        case 0x424158u: goto label_424158;
        case 0x42415cu: goto label_42415c;
        case 0x424160u: goto label_424160;
        case 0x424164u: goto label_424164;
        case 0x424168u: goto label_424168;
        case 0x42416cu: goto label_42416c;
        case 0x424170u: goto label_424170;
        case 0x424174u: goto label_424174;
        case 0x424178u: goto label_424178;
        case 0x42417cu: goto label_42417c;
        case 0x424180u: goto label_424180;
        case 0x424184u: goto label_424184;
        case 0x424188u: goto label_424188;
        case 0x42418cu: goto label_42418c;
        case 0x424190u: goto label_424190;
        case 0x424194u: goto label_424194;
        case 0x424198u: goto label_424198;
        case 0x42419cu: goto label_42419c;
        case 0x4241a0u: goto label_4241a0;
        case 0x4241a4u: goto label_4241a4;
        case 0x4241a8u: goto label_4241a8;
        case 0x4241acu: goto label_4241ac;
        case 0x4241b0u: goto label_4241b0;
        case 0x4241b4u: goto label_4241b4;
        case 0x4241b8u: goto label_4241b8;
        case 0x4241bcu: goto label_4241bc;
        case 0x4241c0u: goto label_4241c0;
        case 0x4241c4u: goto label_4241c4;
        case 0x4241c8u: goto label_4241c8;
        case 0x4241ccu: goto label_4241cc;
        case 0x4241d0u: goto label_4241d0;
        case 0x4241d4u: goto label_4241d4;
        case 0x4241d8u: goto label_4241d8;
        case 0x4241dcu: goto label_4241dc;
        case 0x4241e0u: goto label_4241e0;
        case 0x4241e4u: goto label_4241e4;
        case 0x4241e8u: goto label_4241e8;
        case 0x4241ecu: goto label_4241ec;
        case 0x4241f0u: goto label_4241f0;
        case 0x4241f4u: goto label_4241f4;
        case 0x4241f8u: goto label_4241f8;
        case 0x4241fcu: goto label_4241fc;
        case 0x424200u: goto label_424200;
        case 0x424204u: goto label_424204;
        case 0x424208u: goto label_424208;
        case 0x42420cu: goto label_42420c;
        case 0x424210u: goto label_424210;
        case 0x424214u: goto label_424214;
        case 0x424218u: goto label_424218;
        case 0x42421cu: goto label_42421c;
        case 0x424220u: goto label_424220;
        case 0x424224u: goto label_424224;
        case 0x424228u: goto label_424228;
        case 0x42422cu: goto label_42422c;
        case 0x424230u: goto label_424230;
        case 0x424234u: goto label_424234;
        case 0x424238u: goto label_424238;
        case 0x42423cu: goto label_42423c;
        case 0x424240u: goto label_424240;
        case 0x424244u: goto label_424244;
        case 0x424248u: goto label_424248;
        case 0x42424cu: goto label_42424c;
        case 0x424250u: goto label_424250;
        case 0x424254u: goto label_424254;
        case 0x424258u: goto label_424258;
        case 0x42425cu: goto label_42425c;
        case 0x424260u: goto label_424260;
        case 0x424264u: goto label_424264;
        case 0x424268u: goto label_424268;
        case 0x42426cu: goto label_42426c;
        case 0x424270u: goto label_424270;
        case 0x424274u: goto label_424274;
        case 0x424278u: goto label_424278;
        case 0x42427cu: goto label_42427c;
        case 0x424280u: goto label_424280;
        case 0x424284u: goto label_424284;
        case 0x424288u: goto label_424288;
        case 0x42428cu: goto label_42428c;
        case 0x424290u: goto label_424290;
        case 0x424294u: goto label_424294;
        case 0x424298u: goto label_424298;
        case 0x42429cu: goto label_42429c;
        case 0x4242a0u: goto label_4242a0;
        case 0x4242a4u: goto label_4242a4;
        case 0x4242a8u: goto label_4242a8;
        case 0x4242acu: goto label_4242ac;
        case 0x4242b0u: goto label_4242b0;
        case 0x4242b4u: goto label_4242b4;
        case 0x4242b8u: goto label_4242b8;
        case 0x4242bcu: goto label_4242bc;
        case 0x4242c0u: goto label_4242c0;
        case 0x4242c4u: goto label_4242c4;
        case 0x4242c8u: goto label_4242c8;
        case 0x4242ccu: goto label_4242cc;
        case 0x4242d0u: goto label_4242d0;
        case 0x4242d4u: goto label_4242d4;
        case 0x4242d8u: goto label_4242d8;
        case 0x4242dcu: goto label_4242dc;
        case 0x4242e0u: goto label_4242e0;
        case 0x4242e4u: goto label_4242e4;
        case 0x4242e8u: goto label_4242e8;
        case 0x4242ecu: goto label_4242ec;
        case 0x4242f0u: goto label_4242f0;
        case 0x4242f4u: goto label_4242f4;
        case 0x4242f8u: goto label_4242f8;
        case 0x4242fcu: goto label_4242fc;
        case 0x424300u: goto label_424300;
        case 0x424304u: goto label_424304;
        case 0x424308u: goto label_424308;
        case 0x42430cu: goto label_42430c;
        case 0x424310u: goto label_424310;
        case 0x424314u: goto label_424314;
        case 0x424318u: goto label_424318;
        case 0x42431cu: goto label_42431c;
        case 0x424320u: goto label_424320;
        case 0x424324u: goto label_424324;
        case 0x424328u: goto label_424328;
        case 0x42432cu: goto label_42432c;
        case 0x424330u: goto label_424330;
        case 0x424334u: goto label_424334;
        case 0x424338u: goto label_424338;
        case 0x42433cu: goto label_42433c;
        case 0x424340u: goto label_424340;
        case 0x424344u: goto label_424344;
        case 0x424348u: goto label_424348;
        case 0x42434cu: goto label_42434c;
        case 0x424350u: goto label_424350;
        case 0x424354u: goto label_424354;
        case 0x424358u: goto label_424358;
        case 0x42435cu: goto label_42435c;
        case 0x424360u: goto label_424360;
        case 0x424364u: goto label_424364;
        case 0x424368u: goto label_424368;
        case 0x42436cu: goto label_42436c;
        case 0x424370u: goto label_424370;
        case 0x424374u: goto label_424374;
        case 0x424378u: goto label_424378;
        case 0x42437cu: goto label_42437c;
        case 0x424380u: goto label_424380;
        case 0x424384u: goto label_424384;
        case 0x424388u: goto label_424388;
        case 0x42438cu: goto label_42438c;
        case 0x424390u: goto label_424390;
        case 0x424394u: goto label_424394;
        case 0x424398u: goto label_424398;
        case 0x42439cu: goto label_42439c;
        case 0x4243a0u: goto label_4243a0;
        case 0x4243a4u: goto label_4243a4;
        case 0x4243a8u: goto label_4243a8;
        case 0x4243acu: goto label_4243ac;
        case 0x4243b0u: goto label_4243b0;
        case 0x4243b4u: goto label_4243b4;
        case 0x4243b8u: goto label_4243b8;
        case 0x4243bcu: goto label_4243bc;
        case 0x4243c0u: goto label_4243c0;
        case 0x4243c4u: goto label_4243c4;
        case 0x4243c8u: goto label_4243c8;
        case 0x4243ccu: goto label_4243cc;
        case 0x4243d0u: goto label_4243d0;
        case 0x4243d4u: goto label_4243d4;
        case 0x4243d8u: goto label_4243d8;
        case 0x4243dcu: goto label_4243dc;
        case 0x4243e0u: goto label_4243e0;
        case 0x4243e4u: goto label_4243e4;
        case 0x4243e8u: goto label_4243e8;
        case 0x4243ecu: goto label_4243ec;
        case 0x4243f0u: goto label_4243f0;
        case 0x4243f4u: goto label_4243f4;
        case 0x4243f8u: goto label_4243f8;
        case 0x4243fcu: goto label_4243fc;
        case 0x424400u: goto label_424400;
        case 0x424404u: goto label_424404;
        case 0x424408u: goto label_424408;
        case 0x42440cu: goto label_42440c;
        case 0x424410u: goto label_424410;
        case 0x424414u: goto label_424414;
        case 0x424418u: goto label_424418;
        case 0x42441cu: goto label_42441c;
        case 0x424420u: goto label_424420;
        case 0x424424u: goto label_424424;
        case 0x424428u: goto label_424428;
        case 0x42442cu: goto label_42442c;
        case 0x424430u: goto label_424430;
        case 0x424434u: goto label_424434;
        case 0x424438u: goto label_424438;
        case 0x42443cu: goto label_42443c;
        case 0x424440u: goto label_424440;
        case 0x424444u: goto label_424444;
        case 0x424448u: goto label_424448;
        case 0x42444cu: goto label_42444c;
        case 0x424450u: goto label_424450;
        case 0x424454u: goto label_424454;
        case 0x424458u: goto label_424458;
        case 0x42445cu: goto label_42445c;
        case 0x424460u: goto label_424460;
        case 0x424464u: goto label_424464;
        case 0x424468u: goto label_424468;
        case 0x42446cu: goto label_42446c;
        case 0x424470u: goto label_424470;
        case 0x424474u: goto label_424474;
        case 0x424478u: goto label_424478;
        case 0x42447cu: goto label_42447c;
        case 0x424480u: goto label_424480;
        case 0x424484u: goto label_424484;
        case 0x424488u: goto label_424488;
        case 0x42448cu: goto label_42448c;
        case 0x424490u: goto label_424490;
        case 0x424494u: goto label_424494;
        case 0x424498u: goto label_424498;
        case 0x42449cu: goto label_42449c;
        case 0x4244a0u: goto label_4244a0;
        case 0x4244a4u: goto label_4244a4;
        case 0x4244a8u: goto label_4244a8;
        case 0x4244acu: goto label_4244ac;
        case 0x4244b0u: goto label_4244b0;
        case 0x4244b4u: goto label_4244b4;
        case 0x4244b8u: goto label_4244b8;
        case 0x4244bcu: goto label_4244bc;
        case 0x4244c0u: goto label_4244c0;
        case 0x4244c4u: goto label_4244c4;
        case 0x4244c8u: goto label_4244c8;
        case 0x4244ccu: goto label_4244cc;
        case 0x4244d0u: goto label_4244d0;
        case 0x4244d4u: goto label_4244d4;
        case 0x4244d8u: goto label_4244d8;
        case 0x4244dcu: goto label_4244dc;
        case 0x4244e0u: goto label_4244e0;
        case 0x4244e4u: goto label_4244e4;
        case 0x4244e8u: goto label_4244e8;
        case 0x4244ecu: goto label_4244ec;
        case 0x4244f0u: goto label_4244f0;
        case 0x4244f4u: goto label_4244f4;
        case 0x4244f8u: goto label_4244f8;
        case 0x4244fcu: goto label_4244fc;
        case 0x424500u: goto label_424500;
        case 0x424504u: goto label_424504;
        case 0x424508u: goto label_424508;
        case 0x42450cu: goto label_42450c;
        case 0x424510u: goto label_424510;
        case 0x424514u: goto label_424514;
        case 0x424518u: goto label_424518;
        case 0x42451cu: goto label_42451c;
        case 0x424520u: goto label_424520;
        case 0x424524u: goto label_424524;
        case 0x424528u: goto label_424528;
        case 0x42452cu: goto label_42452c;
        case 0x424530u: goto label_424530;
        case 0x424534u: goto label_424534;
        case 0x424538u: goto label_424538;
        case 0x42453cu: goto label_42453c;
        case 0x424540u: goto label_424540;
        case 0x424544u: goto label_424544;
        case 0x424548u: goto label_424548;
        case 0x42454cu: goto label_42454c;
        case 0x424550u: goto label_424550;
        case 0x424554u: goto label_424554;
        case 0x424558u: goto label_424558;
        case 0x42455cu: goto label_42455c;
        case 0x424560u: goto label_424560;
        case 0x424564u: goto label_424564;
        case 0x424568u: goto label_424568;
        case 0x42456cu: goto label_42456c;
        case 0x424570u: goto label_424570;
        case 0x424574u: goto label_424574;
        case 0x424578u: goto label_424578;
        case 0x42457cu: goto label_42457c;
        case 0x424580u: goto label_424580;
        case 0x424584u: goto label_424584;
        case 0x424588u: goto label_424588;
        case 0x42458cu: goto label_42458c;
        case 0x424590u: goto label_424590;
        case 0x424594u: goto label_424594;
        case 0x424598u: goto label_424598;
        case 0x42459cu: goto label_42459c;
        case 0x4245a0u: goto label_4245a0;
        case 0x4245a4u: goto label_4245a4;
        case 0x4245a8u: goto label_4245a8;
        case 0x4245acu: goto label_4245ac;
        case 0x4245b0u: goto label_4245b0;
        case 0x4245b4u: goto label_4245b4;
        case 0x4245b8u: goto label_4245b8;
        case 0x4245bcu: goto label_4245bc;
        case 0x4245c0u: goto label_4245c0;
        case 0x4245c4u: goto label_4245c4;
        case 0x4245c8u: goto label_4245c8;
        case 0x4245ccu: goto label_4245cc;
        case 0x4245d0u: goto label_4245d0;
        case 0x4245d4u: goto label_4245d4;
        case 0x4245d8u: goto label_4245d8;
        case 0x4245dcu: goto label_4245dc;
        case 0x4245e0u: goto label_4245e0;
        case 0x4245e4u: goto label_4245e4;
        case 0x4245e8u: goto label_4245e8;
        case 0x4245ecu: goto label_4245ec;
        case 0x4245f0u: goto label_4245f0;
        case 0x4245f4u: goto label_4245f4;
        case 0x4245f8u: goto label_4245f8;
        case 0x4245fcu: goto label_4245fc;
        case 0x424600u: goto label_424600;
        case 0x424604u: goto label_424604;
        case 0x424608u: goto label_424608;
        case 0x42460cu: goto label_42460c;
        case 0x424610u: goto label_424610;
        case 0x424614u: goto label_424614;
        case 0x424618u: goto label_424618;
        case 0x42461cu: goto label_42461c;
        case 0x424620u: goto label_424620;
        case 0x424624u: goto label_424624;
        case 0x424628u: goto label_424628;
        case 0x42462cu: goto label_42462c;
        case 0x424630u: goto label_424630;
        case 0x424634u: goto label_424634;
        case 0x424638u: goto label_424638;
        case 0x42463cu: goto label_42463c;
        case 0x424640u: goto label_424640;
        case 0x424644u: goto label_424644;
        case 0x424648u: goto label_424648;
        case 0x42464cu: goto label_42464c;
        case 0x424650u: goto label_424650;
        case 0x424654u: goto label_424654;
        case 0x424658u: goto label_424658;
        case 0x42465cu: goto label_42465c;
        case 0x424660u: goto label_424660;
        case 0x424664u: goto label_424664;
        case 0x424668u: goto label_424668;
        case 0x42466cu: goto label_42466c;
        case 0x424670u: goto label_424670;
        case 0x424674u: goto label_424674;
        case 0x424678u: goto label_424678;
        case 0x42467cu: goto label_42467c;
        case 0x424680u: goto label_424680;
        case 0x424684u: goto label_424684;
        case 0x424688u: goto label_424688;
        case 0x42468cu: goto label_42468c;
        case 0x424690u: goto label_424690;
        case 0x424694u: goto label_424694;
        case 0x424698u: goto label_424698;
        case 0x42469cu: goto label_42469c;
        case 0x4246a0u: goto label_4246a0;
        case 0x4246a4u: goto label_4246a4;
        case 0x4246a8u: goto label_4246a8;
        case 0x4246acu: goto label_4246ac;
        case 0x4246b0u: goto label_4246b0;
        case 0x4246b4u: goto label_4246b4;
        case 0x4246b8u: goto label_4246b8;
        case 0x4246bcu: goto label_4246bc;
        case 0x4246c0u: goto label_4246c0;
        case 0x4246c4u: goto label_4246c4;
        case 0x4246c8u: goto label_4246c8;
        case 0x4246ccu: goto label_4246cc;
        case 0x4246d0u: goto label_4246d0;
        case 0x4246d4u: goto label_4246d4;
        case 0x4246d8u: goto label_4246d8;
        case 0x4246dcu: goto label_4246dc;
        case 0x4246e0u: goto label_4246e0;
        case 0x4246e4u: goto label_4246e4;
        case 0x4246e8u: goto label_4246e8;
        case 0x4246ecu: goto label_4246ec;
        case 0x4246f0u: goto label_4246f0;
        case 0x4246f4u: goto label_4246f4;
        case 0x4246f8u: goto label_4246f8;
        case 0x4246fcu: goto label_4246fc;
        case 0x424700u: goto label_424700;
        case 0x424704u: goto label_424704;
        case 0x424708u: goto label_424708;
        case 0x42470cu: goto label_42470c;
        case 0x424710u: goto label_424710;
        case 0x424714u: goto label_424714;
        case 0x424718u: goto label_424718;
        case 0x42471cu: goto label_42471c;
        case 0x424720u: goto label_424720;
        case 0x424724u: goto label_424724;
        case 0x424728u: goto label_424728;
        case 0x42472cu: goto label_42472c;
        case 0x424730u: goto label_424730;
        case 0x424734u: goto label_424734;
        case 0x424738u: goto label_424738;
        case 0x42473cu: goto label_42473c;
        case 0x424740u: goto label_424740;
        case 0x424744u: goto label_424744;
        case 0x424748u: goto label_424748;
        case 0x42474cu: goto label_42474c;
        case 0x424750u: goto label_424750;
        case 0x424754u: goto label_424754;
        case 0x424758u: goto label_424758;
        case 0x42475cu: goto label_42475c;
        case 0x424760u: goto label_424760;
        case 0x424764u: goto label_424764;
        case 0x424768u: goto label_424768;
        case 0x42476cu: goto label_42476c;
        case 0x424770u: goto label_424770;
        case 0x424774u: goto label_424774;
        case 0x424778u: goto label_424778;
        case 0x42477cu: goto label_42477c;
        case 0x424780u: goto label_424780;
        case 0x424784u: goto label_424784;
        case 0x424788u: goto label_424788;
        case 0x42478cu: goto label_42478c;
        case 0x424790u: goto label_424790;
        case 0x424794u: goto label_424794;
        case 0x424798u: goto label_424798;
        case 0x42479cu: goto label_42479c;
        case 0x4247a0u: goto label_4247a0;
        case 0x4247a4u: goto label_4247a4;
        case 0x4247a8u: goto label_4247a8;
        case 0x4247acu: goto label_4247ac;
        case 0x4247b0u: goto label_4247b0;
        case 0x4247b4u: goto label_4247b4;
        case 0x4247b8u: goto label_4247b8;
        case 0x4247bcu: goto label_4247bc;
        case 0x4247c0u: goto label_4247c0;
        case 0x4247c4u: goto label_4247c4;
        case 0x4247c8u: goto label_4247c8;
        case 0x4247ccu: goto label_4247cc;
        case 0x4247d0u: goto label_4247d0;
        case 0x4247d4u: goto label_4247d4;
        case 0x4247d8u: goto label_4247d8;
        case 0x4247dcu: goto label_4247dc;
        case 0x4247e0u: goto label_4247e0;
        case 0x4247e4u: goto label_4247e4;
        case 0x4247e8u: goto label_4247e8;
        case 0x4247ecu: goto label_4247ec;
        case 0x4247f0u: goto label_4247f0;
        case 0x4247f4u: goto label_4247f4;
        case 0x4247f8u: goto label_4247f8;
        case 0x4247fcu: goto label_4247fc;
        case 0x424800u: goto label_424800;
        case 0x424804u: goto label_424804;
        case 0x424808u: goto label_424808;
        case 0x42480cu: goto label_42480c;
        case 0x424810u: goto label_424810;
        case 0x424814u: goto label_424814;
        case 0x424818u: goto label_424818;
        case 0x42481cu: goto label_42481c;
        case 0x424820u: goto label_424820;
        case 0x424824u: goto label_424824;
        case 0x424828u: goto label_424828;
        case 0x42482cu: goto label_42482c;
        case 0x424830u: goto label_424830;
        case 0x424834u: goto label_424834;
        case 0x424838u: goto label_424838;
        case 0x42483cu: goto label_42483c;
        case 0x424840u: goto label_424840;
        case 0x424844u: goto label_424844;
        case 0x424848u: goto label_424848;
        case 0x42484cu: goto label_42484c;
        case 0x424850u: goto label_424850;
        case 0x424854u: goto label_424854;
        case 0x424858u: goto label_424858;
        case 0x42485cu: goto label_42485c;
        case 0x424860u: goto label_424860;
        case 0x424864u: goto label_424864;
        case 0x424868u: goto label_424868;
        case 0x42486cu: goto label_42486c;
        case 0x424870u: goto label_424870;
        case 0x424874u: goto label_424874;
        case 0x424878u: goto label_424878;
        case 0x42487cu: goto label_42487c;
        case 0x424880u: goto label_424880;
        case 0x424884u: goto label_424884;
        case 0x424888u: goto label_424888;
        case 0x42488cu: goto label_42488c;
        default: break;
    }

    ctx->pc = 0x423970u;

label_423970:
    // 0x423970: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x423970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_423974:
    // 0x423974: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x423974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_423978:
    // 0x423978: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x423978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_42397c:
    // 0x42397c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x42397cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_423980:
    // 0x423980: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x423980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_423984:
    // 0x423984: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x423984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_423988:
    // 0x423988: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x423988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_42398c:
    // 0x42398c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x42398cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423990:
    // 0x423990: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x423990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_423994:
    // 0x423994: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x423994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_423998:
    // 0x423998: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x423998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_42399c:
    // 0x42399c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x42399cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4239a0:
    // 0x4239a0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4239a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4239a4:
    // 0x4239a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4239a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4239a8:
    // 0x4239a8: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x4239a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_4239ac:
    // 0x4239ac: 0x8c717330  lw          $s1, 0x7330($v1)
    ctx->pc = 0x4239acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29488)));
label_4239b0:
    // 0x4239b0: 0x122000d8  beqz        $s1, . + 4 + (0xD8 << 2)
label_4239b4:
    if (ctx->pc == 0x4239B4u) {
        ctx->pc = 0x4239B4u;
            // 0x4239b4: 0x8c930020  lw          $s3, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = 0x4239B8u;
        goto label_4239b8;
    }
    ctx->pc = 0x4239B0u;
    {
        const bool branch_taken_0x4239b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4239B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4239B0u;
            // 0x4239b4: 0x8c930020  lw          $s3, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4239b0) {
            ctx->pc = 0x423D14u;
            goto label_423d14;
        }
    }
    ctx->pc = 0x4239B8u;
label_4239b8:
    // 0x4239b8: 0x526000d7  beql        $s3, $zero, . + 4 + (0xD7 << 2)
label_4239bc:
    if (ctx->pc == 0x4239BCu) {
        ctx->pc = 0x4239BCu;
            // 0x4239bc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4239C0u;
        goto label_4239c0;
    }
    ctx->pc = 0x4239B8u;
    {
        const bool branch_taken_0x4239b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4239b8) {
            ctx->pc = 0x4239BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4239B8u;
            // 0x4239bc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423D18u;
            goto label_423d18;
        }
    }
    ctx->pc = 0x4239C0u;
label_4239c0:
    // 0x4239c0: 0x8e370070  lw          $s7, 0x70($s1)
    ctx->pc = 0x4239c0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_4239c4:
    // 0x4239c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4239c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4239c8:
    // 0x4239c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x4239c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4239cc:
    // 0x4239cc: 0x12e000cc  beqz        $s7, . + 4 + (0xCC << 2)
label_4239d0:
    if (ctx->pc == 0x4239D0u) {
        ctx->pc = 0x4239D0u;
            // 0x4239d0: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4239D4u;
        goto label_4239d4;
    }
    ctx->pc = 0x4239CCu;
    {
        const bool branch_taken_0x4239cc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4239D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4239CCu;
            // 0x4239d0: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4239cc) {
            ctx->pc = 0x423D00u;
            goto label_423d00;
        }
    }
    ctx->pc = 0x4239D4u;
label_4239d4:
    // 0x4239d4: 0x8e630a68  lw          $v1, 0xA68($s3)
    ctx->pc = 0x4239d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2664)));
label_4239d8:
    // 0x4239d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4239d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4239dc:
    // 0x4239dc: 0x146200c8  bne         $v1, $v0, . + 4 + (0xC8 << 2)
label_4239e0:
    if (ctx->pc == 0x4239E0u) {
        ctx->pc = 0x4239E4u;
        goto label_4239e4;
    }
    ctx->pc = 0x4239DCu;
    {
        const bool branch_taken_0x4239dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4239dc) {
            ctx->pc = 0x423D00u;
            goto label_423d00;
        }
    }
    ctx->pc = 0x4239E4u;
label_4239e4:
    // 0x4239e4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4239e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4239e8:
    // 0x4239e8: 0xc04cc04  jal         func_133010
label_4239ec:
    if (ctx->pc == 0x4239ECu) {
        ctx->pc = 0x4239ECu;
            // 0x4239ec: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x4239F0u;
        goto label_4239f0;
    }
    ctx->pc = 0x4239E8u;
    SET_GPR_U32(ctx, 31, 0x4239F0u);
    ctx->pc = 0x4239ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4239E8u;
            // 0x4239ec: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4239F0u; }
        if (ctx->pc != 0x4239F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4239F0u; }
        if (ctx->pc != 0x4239F0u) { return; }
    }
    ctx->pc = 0x4239F0u;
label_4239f0:
    // 0x4239f0: 0x8e700a60  lw          $s0, 0xA60($s3)
    ctx->pc = 0x4239f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2656)));
label_4239f4:
    // 0x4239f4: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x4239f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_4239f8:
    // 0x4239f8: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x4239f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_4239fc:
    // 0x4239fc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4239fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_423a00:
    // 0x423a00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x423a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_423a04:
    // 0x423a04: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x423a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_423a08:
    // 0x423a08: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x423a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_423a0c:
    // 0x423a0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x423a0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_423a10:
    // 0x423a10: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x423a10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_423a14:
    // 0x423a14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x423a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_423a18:
    // 0x423a18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x423a18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_423a1c:
    // 0x423a1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x423a1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_423a20:
    // 0x423a20: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x423a20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_423a24:
    // 0x423a24: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x423a24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_423a28:
    // 0x423a28: 0xc04cab0  jal         func_132AC0
label_423a2c:
    if (ctx->pc == 0x423A2Cu) {
        ctx->pc = 0x423A2Cu;
            // 0x423a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423A30u;
        goto label_423a30;
    }
    ctx->pc = 0x423A28u;
    SET_GPR_U32(ctx, 31, 0x423A30u);
    ctx->pc = 0x423A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423A28u;
            // 0x423a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423A30u; }
        if (ctx->pc != 0x423A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423A30u; }
        if (ctx->pc != 0x423A30u) { return; }
    }
    ctx->pc = 0x423A30u;
label_423a30:
    // 0x423a30: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x423a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_423a34:
    // 0x423a34: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x423a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_423a38:
    // 0x423a38: 0xc04c72c  jal         func_131CB0
label_423a3c:
    if (ctx->pc == 0x423A3Cu) {
        ctx->pc = 0x423A3Cu;
            // 0x423a3c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423A40u;
        goto label_423a40;
    }
    ctx->pc = 0x423A38u;
    SET_GPR_U32(ctx, 31, 0x423A40u);
    ctx->pc = 0x423A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423A38u;
            // 0x423a3c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423A40u; }
        if (ctx->pc != 0x423A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423A40u; }
        if (ctx->pc != 0x423A40u) { return; }
    }
    ctx->pc = 0x423A40u;
label_423a40:
    // 0x423a40: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x423a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_423a44:
    // 0x423a44: 0xc04f278  jal         func_13C9E0
label_423a48:
    if (ctx->pc == 0x423A48u) {
        ctx->pc = 0x423A48u;
            // 0x423a48: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x423A4Cu;
        goto label_423a4c;
    }
    ctx->pc = 0x423A44u;
    SET_GPR_U32(ctx, 31, 0x423A4Cu);
    ctx->pc = 0x423A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423A44u;
            // 0x423a48: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423A4Cu; }
        if (ctx->pc != 0x423A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423A4Cu; }
        if (ctx->pc != 0x423A4Cu) { return; }
    }
    ctx->pc = 0x423A4Cu;
label_423a4c:
    // 0x423a4c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x423a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_423a50:
    // 0x423a50: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x423a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_423a54:
    // 0x423a54: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x423a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_423a58:
    // 0x423a58: 0xc04cca0  jal         func_133280
label_423a5c:
    if (ctx->pc == 0x423A5Cu) {
        ctx->pc = 0x423A5Cu;
            // 0x423a5c: 0x24c6c7e0  addiu       $a2, $a2, -0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952928));
        ctx->pc = 0x423A60u;
        goto label_423a60;
    }
    ctx->pc = 0x423A58u;
    SET_GPR_U32(ctx, 31, 0x423A60u);
    ctx->pc = 0x423A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423A58u;
            // 0x423a5c: 0x24c6c7e0  addiu       $a2, $a2, -0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423A60u; }
        if (ctx->pc != 0x423A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423A60u; }
        if (ctx->pc != 0x423A60u) { return; }
    }
    ctx->pc = 0x423A60u;
label_423a60:
    // 0x423a60: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x423a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
label_423a64:
    // 0x423a64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x423a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_423a68:
    // 0x423a68: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x423a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_423a6c:
    // 0x423a6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x423a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423a70:
    // 0x423a70: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x423a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_423a74:
    // 0x423a74: 0xc6a30010  lwc1        $f3, 0x10($s5)
    ctx->pc = 0x423a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_423a78:
    // 0x423a78: 0xc7a20170  lwc1        $f2, 0x170($sp)
    ctx->pc = 0x423a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_423a7c:
    // 0x423a7c: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x423a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_423a80:
    // 0x423a80: 0xe7a301a0  swc1        $f3, 0x1A0($sp)
    ctx->pc = 0x423a80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_423a84:
    // 0x423a84: 0xc6a30014  lwc1        $f3, 0x14($s5)
    ctx->pc = 0x423a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_423a88:
    // 0x423a88: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x423a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_423a8c:
    // 0x423a8c: 0xe7a301a4  swc1        $f3, 0x1A4($sp)
    ctx->pc = 0x423a8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_423a90:
    // 0x423a90: 0xc6a30018  lwc1        $f3, 0x18($s5)
    ctx->pc = 0x423a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_423a94:
    // 0x423a94: 0xe7a301a8  swc1        $f3, 0x1A8($sp)
    ctx->pc = 0x423a94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_423a98:
    // 0x423a98: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x423a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_423a9c:
    // 0x423a9c: 0xe7a20180  swc1        $f2, 0x180($sp)
    ctx->pc = 0x423a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_423aa0:
    // 0x423aa0: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x423aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_423aa4:
    // 0x423aa4: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x423aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_423aa8:
    // 0x423aa8: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x423aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_423aac:
    // 0x423aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x423aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423ab0:
    // 0x423ab0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x423ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_423ab4:
    // 0x423ab4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x423ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_423ab8:
    // 0x423ab8: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x423ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_423abc:
    // 0x423abc: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
label_423ac0:
    if (ctx->pc == 0x423AC0u) {
        ctx->pc = 0x423AC4u;
        goto label_423ac4;
    }
    ctx->pc = 0x423ABCu;
    {
        const bool branch_taken_0x423abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x423abc) {
            ctx->pc = 0x423C08u;
            goto label_423c08;
        }
    }
    ctx->pc = 0x423AC4u;
label_423ac4:
    // 0x423ac4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x423ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_423ac8:
    // 0x423ac8: 0xc04cc04  jal         func_133010
label_423acc:
    if (ctx->pc == 0x423ACCu) {
        ctx->pc = 0x423ACCu;
            // 0x423acc: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x423AD0u;
        goto label_423ad0;
    }
    ctx->pc = 0x423AC8u;
    SET_GPR_U32(ctx, 31, 0x423AD0u);
    ctx->pc = 0x423ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423AC8u;
            // 0x423acc: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423AD0u; }
        if (ctx->pc != 0x423AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423AD0u; }
        if (ctx->pc != 0x423AD0u) { return; }
    }
    ctx->pc = 0x423AD0u;
label_423ad0:
    // 0x423ad0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x423ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_423ad4:
    // 0x423ad4: 0xc04f278  jal         func_13C9E0
label_423ad8:
    if (ctx->pc == 0x423AD8u) {
        ctx->pc = 0x423AD8u;
            // 0x423ad8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x423ADCu;
        goto label_423adc;
    }
    ctx->pc = 0x423AD4u;
    SET_GPR_U32(ctx, 31, 0x423ADCu);
    ctx->pc = 0x423AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423AD4u;
            // 0x423ad8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423ADCu; }
        if (ctx->pc != 0x423ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423ADCu; }
        if (ctx->pc != 0x423ADCu) { return; }
    }
    ctx->pc = 0x423ADCu;
label_423adc:
    // 0x423adc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x423adcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_423ae0:
    // 0x423ae0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x423ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_423ae4:
    // 0x423ae4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x423ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_423ae8:
    // 0x423ae8: 0xc04cca0  jal         func_133280
label_423aec:
    if (ctx->pc == 0x423AECu) {
        ctx->pc = 0x423AECu;
            // 0x423aec: 0x24c6c7e0  addiu       $a2, $a2, -0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952928));
        ctx->pc = 0x423AF0u;
        goto label_423af0;
    }
    ctx->pc = 0x423AE8u;
    SET_GPR_U32(ctx, 31, 0x423AF0u);
    ctx->pc = 0x423AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423AE8u;
            // 0x423aec: 0x24c6c7e0  addiu       $a2, $a2, -0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423AF0u; }
        if (ctx->pc != 0x423AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423AF0u; }
        if (ctx->pc != 0x423AF0u) { return; }
    }
    ctx->pc = 0x423AF0u;
label_423af0:
    // 0x423af0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x423af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_423af4:
    // 0x423af4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x423af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_423af8:
    // 0x423af8: 0xc04cc90  jal         func_133240
label_423afc:
    if (ctx->pc == 0x423AFCu) {
        ctx->pc = 0x423AFCu;
            // 0x423afc: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x423B00u;
        goto label_423b00;
    }
    ctx->pc = 0x423AF8u;
    SET_GPR_U32(ctx, 31, 0x423B00u);
    ctx->pc = 0x423AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423AF8u;
            // 0x423afc: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423B00u; }
        if (ctx->pc != 0x423B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423B00u; }
        if (ctx->pc != 0x423B00u) { return; }
    }
    ctx->pc = 0x423B00u;
label_423b00:
    // 0x423b00: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x423b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_423b04:
    // 0x423b04: 0xc04cc44  jal         func_133110
label_423b08:
    if (ctx->pc == 0x423B08u) {
        ctx->pc = 0x423B08u;
            // 0x423b08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423B0Cu;
        goto label_423b0c;
    }
    ctx->pc = 0x423B04u;
    SET_GPR_U32(ctx, 31, 0x423B0Cu);
    ctx->pc = 0x423B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423B04u;
            // 0x423b08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423B0Cu; }
        if (ctx->pc != 0x423B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423B0Cu; }
        if (ctx->pc != 0x423B0Cu) { return; }
    }
    ctx->pc = 0x423B0Cu;
label_423b0c:
    // 0x423b0c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x423b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_423b10:
    // 0x423b10: 0xc04cc08  jal         func_133020
label_423b14:
    if (ctx->pc == 0x423B14u) {
        ctx->pc = 0x423B14u;
            // 0x423b14: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x423B18u;
        goto label_423b18;
    }
    ctx->pc = 0x423B10u;
    SET_GPR_U32(ctx, 31, 0x423B18u);
    ctx->pc = 0x423B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423B10u;
            // 0x423b14: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423B18u; }
        if (ctx->pc != 0x423B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423B18u; }
        if (ctx->pc != 0x423B18u) { return; }
    }
    ctx->pc = 0x423B18u;
label_423b18:
    // 0x423b18: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x423b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_423b1c:
    // 0x423b1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x423b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_423b20:
    // 0x423b20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x423b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_423b24:
    // 0x423b24: 0x0  nop
    ctx->pc = 0x423b24u;
    // NOP
label_423b28:
    // 0x423b28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x423b28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_423b2c:
    // 0x423b2c: 0x45010036  bc1t        . + 4 + (0x36 << 2)
label_423b30:
    if (ctx->pc == 0x423B30u) {
        ctx->pc = 0x423B34u;
        goto label_423b34;
    }
    ctx->pc = 0x423B2Cu;
    {
        const bool branch_taken_0x423b2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x423b2c) {
            ctx->pc = 0x423C08u;
            goto label_423c08;
        }
    }
    ctx->pc = 0x423B34u;
label_423b34:
    // 0x423b34: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x423b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_423b38:
    // 0x423b38: 0xc04cc08  jal         func_133020
label_423b3c:
    if (ctx->pc == 0x423B3Cu) {
        ctx->pc = 0x423B3Cu;
            // 0x423b3c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x423B40u;
        goto label_423b40;
    }
    ctx->pc = 0x423B38u;
    SET_GPR_U32(ctx, 31, 0x423B40u);
    ctx->pc = 0x423B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423B38u;
            // 0x423b3c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423B40u; }
        if (ctx->pc != 0x423B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423B40u; }
        if (ctx->pc != 0x423B40u) { return; }
    }
    ctx->pc = 0x423B40u;
label_423b40:
    // 0x423b40: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x423b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_423b44:
    // 0x423b44: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x423b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_423b48:
    // 0x423b48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x423b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_423b4c:
    // 0x423b4c: 0x0  nop
    ctx->pc = 0x423b4cu;
    // NOP
label_423b50:
    // 0x423b50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x423b50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_423b54:
    // 0x423b54: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_423b58:
    if (ctx->pc == 0x423B58u) {
        ctx->pc = 0x423B5Cu;
        goto label_423b5c;
    }
    ctx->pc = 0x423B54u;
    {
        const bool branch_taken_0x423b54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x423b54) {
            ctx->pc = 0x423C08u;
            goto label_423c08;
        }
    }
    ctx->pc = 0x423B5Cu;
label_423b5c:
    // 0x423b5c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x423b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_423b60:
    // 0x423b60: 0xc04cc1c  jal         func_133070
label_423b64:
    if (ctx->pc == 0x423B64u) {
        ctx->pc = 0x423B64u;
            // 0x423b64: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x423B68u;
        goto label_423b68;
    }
    ctx->pc = 0x423B60u;
    SET_GPR_U32(ctx, 31, 0x423B68u);
    ctx->pc = 0x423B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423B60u;
            // 0x423b64: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423B68u; }
        if (ctx->pc != 0x423B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423B68u; }
        if (ctx->pc != 0x423B68u) { return; }
    }
    ctx->pc = 0x423B68u;
label_423b68:
    // 0x423b68: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x423b68u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_423b6c:
    // 0x423b6c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x423b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_423b70:
    // 0x423b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x423b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_423b74:
    // 0x423b74: 0x0  nop
    ctx->pc = 0x423b74u;
    // NOP
label_423b78:
    // 0x423b78: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x423b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_423b7c:
    // 0x423b7c: 0x45010022  bc1t        . + 4 + (0x22 << 2)
label_423b80:
    if (ctx->pc == 0x423B80u) {
        ctx->pc = 0x423B84u;
        goto label_423b84;
    }
    ctx->pc = 0x423B7Cu;
    {
        const bool branch_taken_0x423b7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x423b7c) {
            ctx->pc = 0x423C08u;
            goto label_423c08;
        }
    }
    ctx->pc = 0x423B84u;
label_423b84:
    // 0x423b84: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x423b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_423b88:
    // 0x423b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x423b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_423b8c:
    // 0x423b8c: 0x0  nop
    ctx->pc = 0x423b8cu;
    // NOP
label_423b90:
    // 0x423b90: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x423b90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_423b94:
    // 0x423b94: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_423b98:
    if (ctx->pc == 0x423B98u) {
        ctx->pc = 0x423B9Cu;
        goto label_423b9c;
    }
    ctx->pc = 0x423B94u;
    {
        const bool branch_taken_0x423b94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x423b94) {
            ctx->pc = 0x423C08u;
            goto label_423c08;
        }
    }
    ctx->pc = 0x423B9Cu;
label_423b9c:
    // 0x423b9c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x423b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_423ba0:
    // 0x423ba0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x423ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_423ba4:
    // 0x423ba4: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x423ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_423ba8:
    // 0x423ba8: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x423ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_423bac:
    // 0x423bac: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x423bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_423bb0:
    // 0x423bb0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x423bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_423bb4:
    // 0x423bb4: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x423bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_423bb8:
    // 0x423bb8: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x423bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_423bbc:
    // 0x423bbc: 0xe7a10190  swc1        $f1, 0x190($sp)
    ctx->pc = 0x423bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_423bc0:
    // 0x423bc0: 0xc05277c  jal         func_149DF0
label_423bc4:
    if (ctx->pc == 0x423BC4u) {
        ctx->pc = 0x423BC4u;
            // 0x423bc4: 0xe7a00194  swc1        $f0, 0x194($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
        ctx->pc = 0x423BC8u;
        goto label_423bc8;
    }
    ctx->pc = 0x423BC0u;
    SET_GPR_U32(ctx, 31, 0x423BC8u);
    ctx->pc = 0x423BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423BC0u;
            // 0x423bc4: 0xe7a00194  swc1        $f0, 0x194($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423BC8u; }
        if (ctx->pc != 0x423BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423BC8u; }
        if (ctx->pc != 0x423BC8u) { return; }
    }
    ctx->pc = 0x423BC8u;
label_423bc8:
    // 0x423bc8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_423bcc:
    if (ctx->pc == 0x423BCCu) {
        ctx->pc = 0x423BD0u;
        goto label_423bd0;
    }
    ctx->pc = 0x423BC8u;
    {
        const bool branch_taken_0x423bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423bc8) {
            ctx->pc = 0x423C08u;
            goto label_423c08;
        }
    }
    ctx->pc = 0x423BD0u;
label_423bd0:
    // 0x423bd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x423bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_423bd4:
    // 0x423bd4: 0x0  nop
    ctx->pc = 0x423bd4u;
    // NOP
label_423bd8:
    // 0x423bd8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x423bd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_423bdc:
    // 0x423bdc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_423be0:
    if (ctx->pc == 0x423BE0u) {
        ctx->pc = 0x423BE4u;
        goto label_423be4;
    }
    ctx->pc = 0x423BDCu;
    {
        const bool branch_taken_0x423bdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x423bdc) {
            ctx->pc = 0x423BF0u;
            goto label_423bf0;
        }
    }
    ctx->pc = 0x423BE4u;
label_423be4:
    // 0x423be4: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x423be4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_423be8:
    // 0x423be8: 0x10000007  b           . + 4 + (0x7 << 2)
label_423bec:
    if (ctx->pc == 0x423BECu) {
        ctx->pc = 0x423BECu;
            // 0x423bec: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423BF0u;
        goto label_423bf0;
    }
    ctx->pc = 0x423BE8u;
    {
        const bool branch_taken_0x423be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423BE8u;
            // 0x423bec: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423be8) {
            ctx->pc = 0x423C08u;
            goto label_423c08;
        }
    }
    ctx->pc = 0x423BF0u;
label_423bf0:
    // 0x423bf0: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x423bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_423bf4:
    // 0x423bf4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_423bf8:
    if (ctx->pc == 0x423BF8u) {
        ctx->pc = 0x423BFCu;
        goto label_423bfc;
    }
    ctx->pc = 0x423BF4u;
    {
        const bool branch_taken_0x423bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x423bf4) {
            ctx->pc = 0x423C08u;
            goto label_423c08;
        }
    }
    ctx->pc = 0x423BFCu;
label_423bfc:
    // 0x423bfc: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x423bfcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_423c00:
    // 0x423c00: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x423c00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_423c04:
    // 0x423c04: 0x0  nop
    ctx->pc = 0x423c04u;
    // NOP
label_423c08:
    // 0x423c08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x423c08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_423c0c:
    // 0x423c0c: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x423c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_423c10:
    // 0x423c10: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
label_423c14:
    if (ctx->pc == 0x423C14u) {
        ctx->pc = 0x423C14u;
            // 0x423c14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x423C18u;
        goto label_423c18;
    }
    ctx->pc = 0x423C10u;
    {
        const bool branch_taken_0x423c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423C10u;
            // 0x423c14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423c10) {
            ctx->pc = 0x423AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_423aa8;
        }
    }
    ctx->pc = 0x423C18u;
label_423c18:
    // 0x423c18: 0x8e620e38  lw          $v0, 0xE38($s3)
    ctx->pc = 0x423c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_423c1c:
    // 0x423c1c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x423c1cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_423c20:
    // 0x423c20: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_423c24:
    if (ctx->pc == 0x423C24u) {
        ctx->pc = 0x423C24u;
            // 0x423c24: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423C28u;
        goto label_423c28;
    }
    ctx->pc = 0x423C20u;
    {
        const bool branch_taken_0x423c20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x423C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423C20u;
            // 0x423c24: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423c20) {
            ctx->pc = 0x423C38u;
            goto label_423c38;
        }
    }
    ctx->pc = 0x423C28u;
label_423c28:
    // 0x423c28: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x423c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_423c2c:
    // 0x423c2c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_423c30:
    if (ctx->pc == 0x423C30u) {
        ctx->pc = 0x423C34u;
        goto label_423c34;
    }
    ctx->pc = 0x423C2Cu;
    {
        const bool branch_taken_0x423c2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x423c2c) {
            ctx->pc = 0x423C38u;
            goto label_423c38;
        }
    }
    ctx->pc = 0x423C34u;
label_423c34:
    // 0x423c34: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x423c34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423c38:
    // 0x423c38: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_423c3c:
    if (ctx->pc == 0x423C3Cu) {
        ctx->pc = 0x423C40u;
        goto label_423c40;
    }
    ctx->pc = 0x423C38u;
    {
        const bool branch_taken_0x423c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x423c38) {
            ctx->pc = 0x423C54u;
            goto label_423c54;
        }
    }
    ctx->pc = 0x423C40u;
label_423c40:
    // 0x423c40: 0xc075eb4  jal         func_1D7AD0
label_423c44:
    if (ctx->pc == 0x423C44u) {
        ctx->pc = 0x423C44u;
            // 0x423c44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423C48u;
        goto label_423c48;
    }
    ctx->pc = 0x423C40u;
    SET_GPR_U32(ctx, 31, 0x423C48u);
    ctx->pc = 0x423C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423C40u;
            // 0x423c44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423C48u; }
        if (ctx->pc != 0x423C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423C48u; }
        if (ctx->pc != 0x423C48u) { return; }
    }
    ctx->pc = 0x423C48u;
label_423c48:
    // 0x423c48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_423c4c:
    if (ctx->pc == 0x423C4Cu) {
        ctx->pc = 0x423C50u;
        goto label_423c50;
    }
    ctx->pc = 0x423C48u;
    {
        const bool branch_taken_0x423c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x423c48) {
            ctx->pc = 0x423C54u;
            goto label_423c54;
        }
    }
    ctx->pc = 0x423C50u;
label_423c50:
    // 0x423c50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x423c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423c54:
    // 0x423c54: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
label_423c58:
    if (ctx->pc == 0x423C58u) {
        ctx->pc = 0x423C58u;
            // 0x423c58: 0x8e650e38  lw          $a1, 0xE38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
        ctx->pc = 0x423C5Cu;
        goto label_423c5c;
    }
    ctx->pc = 0x423C54u;
    {
        const bool branch_taken_0x423c54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x423c54) {
            ctx->pc = 0x423C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423C54u;
            // 0x423c58: 0x8e650e38  lw          $a1, 0xE38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423CD0u;
            goto label_423cd0;
        }
    }
    ctx->pc = 0x423C5Cu;
label_423c5c:
    // 0x423c5c: 0x6c0001b  bltz        $s6, . + 4 + (0x1B << 2)
label_423c60:
    if (ctx->pc == 0x423C60u) {
        ctx->pc = 0x423C64u;
        goto label_423c64;
    }
    ctx->pc = 0x423C5Cu;
    {
        const bool branch_taken_0x423c5c = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x423c5c) {
            ctx->pc = 0x423CCCu;
            goto label_423ccc;
        }
    }
    ctx->pc = 0x423C64u;
label_423c64:
    // 0x423c64: 0x8ea30138  lw          $v1, 0x138($s5)
    ctx->pc = 0x423c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 312)));
label_423c68:
    // 0x423c68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x423c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_423c6c:
    // 0x423c6c: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_423c70:
    if (ctx->pc == 0x423C70u) {
        ctx->pc = 0x423C70u;
            // 0x423c70: 0x8ea30120  lw          $v1, 0x120($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 288)));
        ctx->pc = 0x423C74u;
        goto label_423c74;
    }
    ctx->pc = 0x423C6Cu;
    {
        const bool branch_taken_0x423c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x423c6c) {
            ctx->pc = 0x423C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423C6Cu;
            // 0x423c70: 0x8ea30120  lw          $v1, 0x120($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423CA4u;
            goto label_423ca4;
        }
    }
    ctx->pc = 0x423C74u;
label_423c74:
    // 0x423c74: 0x8e700d60  lw          $s0, 0xD60($s3)
    ctx->pc = 0x423c74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_423c78:
    // 0x423c78: 0x24051aa9  addiu       $a1, $zero, 0x1AA9
    ctx->pc = 0x423c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6825));
label_423c7c:
    // 0x423c7c: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x423c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_423c80:
    // 0x423c80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x423c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_423c84:
    // 0x423c84: 0x320f809  jalr        $t9
label_423c88:
    if (ctx->pc == 0x423C88u) {
        ctx->pc = 0x423C88u;
            // 0x423c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423C8Cu;
        goto label_423c8c;
    }
    ctx->pc = 0x423C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x423C8Cu);
        ctx->pc = 0x423C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423C84u;
            // 0x423c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x423C8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x423C8Cu; }
            if (ctx->pc != 0x423C8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x423C8Cu;
label_423c8c:
    // 0x423c8c: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x423c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_423c90:
    // 0x423c90: 0x8e6500ac  lw          $a1, 0xAC($s3)
    ctx->pc = 0x423c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_423c94:
    // 0x423c94: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x423c94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_423c98:
    // 0x423c98: 0x320f809  jalr        $t9
label_423c9c:
    if (ctx->pc == 0x423C9Cu) {
        ctx->pc = 0x423C9Cu;
            // 0x423c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423CA0u;
        goto label_423ca0;
    }
    ctx->pc = 0x423C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x423CA0u);
        ctx->pc = 0x423C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423C98u;
            // 0x423c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x423CA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x423CA0u; }
            if (ctx->pc != 0x423CA0u) { return; }
        }
        }
    }
    ctx->pc = 0x423CA0u;
label_423ca0:
    // 0x423ca0: 0x8ea30120  lw          $v1, 0x120($s5)
    ctx->pc = 0x423ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 288)));
label_423ca4:
    // 0x423ca4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x423ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_423ca8:
    // 0x423ca8: 0xaea30134  sw          $v1, 0x134($s5)
    ctx->pc = 0x423ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 308), GPR_U32(ctx, 3));
label_423cac:
    // 0x423cac: 0xaea20120  sw          $v0, 0x120($s5)
    ctx->pc = 0x423cacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 288), GPR_U32(ctx, 2));
label_423cb0:
    // 0x423cb0: 0x8ea20124  lw          $v0, 0x124($s5)
    ctx->pc = 0x423cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 292)));
label_423cb4:
    // 0x423cb4: 0xaea20138  sw          $v0, 0x138($s5)
    ctx->pc = 0x423cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 312), GPR_U32(ctx, 2));
label_423cb8:
    // 0x423cb8: 0xaea00124  sw          $zero, 0x124($s5)
    ctx->pc = 0x423cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 0));
label_423cbc:
    // 0x423cbc: 0x8ea200d8  lw          $v0, 0xD8($s5)
    ctx->pc = 0x423cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
label_423cc0:
    // 0x423cc0: 0x8e630e38  lw          $v1, 0xE38($s3)
    ctx->pc = 0x423cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_423cc4:
    // 0x423cc4: 0x1000000e  b           . + 4 + (0xE << 2)
label_423cc8:
    if (ctx->pc == 0x423CC8u) {
        ctx->pc = 0x423CC8u;
            // 0x423cc8: 0xac430220  sw          $v1, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
        ctx->pc = 0x423CCCu;
        goto label_423ccc;
    }
    ctx->pc = 0x423CC4u;
    {
        const bool branch_taken_0x423cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423CC4u;
            // 0x423cc8: 0xac430220  sw          $v1, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423cc4) {
            ctx->pc = 0x423D00u;
            goto label_423d00;
        }
    }
    ctx->pc = 0x423CCCu;
label_423ccc:
    // 0x423ccc: 0x8e650e38  lw          $a1, 0xE38($s3)
    ctx->pc = 0x423cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_423cd0:
    // 0x423cd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x423cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423cd4:
    // 0x423cd4: 0x8ea30114  lw          $v1, 0x114($s5)
    ctx->pc = 0x423cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_423cd8:
    // 0x423cd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x423cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_423cdc:
    // 0x423cdc: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x423cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_423ce0:
    // 0x423ce0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x423ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_423ce4:
    // 0x423ce4: 0xaea30114  sw          $v1, 0x114($s5)
    ctx->pc = 0x423ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 3));
label_423ce8:
    // 0x423ce8: 0x8ea30120  lw          $v1, 0x120($s5)
    ctx->pc = 0x423ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 288)));
label_423cec:
    // 0x423cec: 0xaea30134  sw          $v1, 0x134($s5)
    ctx->pc = 0x423cecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 308), GPR_U32(ctx, 3));
label_423cf0:
    // 0x423cf0: 0xaea00120  sw          $zero, 0x120($s5)
    ctx->pc = 0x423cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 288), GPR_U32(ctx, 0));
label_423cf4:
    // 0x423cf4: 0x8ea30124  lw          $v1, 0x124($s5)
    ctx->pc = 0x423cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 292)));
label_423cf8:
    // 0x423cf8: 0xaea30138  sw          $v1, 0x138($s5)
    ctx->pc = 0x423cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 312), GPR_U32(ctx, 3));
label_423cfc:
    // 0x423cfc: 0xaea20124  sw          $v0, 0x124($s5)
    ctx->pc = 0x423cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 2));
label_423d00:
    // 0x423d00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x423d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_423d04:
    // 0x423d04: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x423d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_423d08:
    // 0x423d08: 0x8c440180  lw          $a0, 0x180($v0)
    ctx->pc = 0x423d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_423d0c:
    // 0x423d0c: 0xc12a1f4  jal         func_4A87D0
label_423d10:
    if (ctx->pc == 0x423D10u) {
        ctx->pc = 0x423D10u;
            // 0x423d10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423D14u;
        goto label_423d14;
    }
    ctx->pc = 0x423D0Cu;
    SET_GPR_U32(ctx, 31, 0x423D14u);
    ctx->pc = 0x423D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423D0Cu;
            // 0x423d10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A87D0u;
    if (runtime->hasFunction(0x4A87D0u)) {
        auto targetFn = runtime->lookupFunction(0x4A87D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423D14u; }
        if (ctx->pc != 0x423D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A87D0_0x4a87d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423D14u; }
        if (ctx->pc != 0x423D14u) { return; }
    }
    ctx->pc = 0x423D14u;
label_423d14:
    // 0x423d14: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x423d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_423d18:
    // 0x423d18: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x423d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_423d1c:
    // 0x423d1c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x423d1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_423d20:
    // 0x423d20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x423d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_423d24:
    // 0x423d24: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x423d24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_423d28:
    // 0x423d28: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x423d28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_423d2c:
    // 0x423d2c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x423d2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_423d30:
    // 0x423d30: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x423d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_423d34:
    // 0x423d34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x423d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_423d38:
    // 0x423d38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x423d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_423d3c:
    // 0x423d3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x423d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_423d40:
    // 0x423d40: 0x3e00008  jr          $ra
label_423d44:
    if (ctx->pc == 0x423D44u) {
        ctx->pc = 0x423D44u;
            // 0x423d44: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x423D48u;
        goto label_423d48;
    }
    ctx->pc = 0x423D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423D40u;
            // 0x423d44: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x423D48u;
label_423d48:
    // 0x423d48: 0x0  nop
    ctx->pc = 0x423d48u;
    // NOP
label_423d4c:
    // 0x423d4c: 0x0  nop
    ctx->pc = 0x423d4cu;
    // NOP
label_423d50:
    // 0x423d50: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x423d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_423d54:
    // 0x423d54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x423d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_423d58:
    // 0x423d58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x423d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_423d5c:
    // 0x423d5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x423d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_423d60:
    // 0x423d60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x423d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_423d64:
    // 0x423d64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x423d64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423d68:
    // 0x423d68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x423d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_423d6c:
    // 0x423d6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x423d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_423d70:
    // 0x423d70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x423d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_423d74:
    // 0x423d74: 0xc0e393c  jal         func_38E4F0
label_423d78:
    if (ctx->pc == 0x423D78u) {
        ctx->pc = 0x423D78u;
            // 0x423d78: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x423D7Cu;
        goto label_423d7c;
    }
    ctx->pc = 0x423D74u;
    SET_GPR_U32(ctx, 31, 0x423D7Cu);
    ctx->pc = 0x423D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423D74u;
            // 0x423d78: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423D7Cu; }
        if (ctx->pc != 0x423D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423D7Cu; }
        if (ctx->pc != 0x423D7Cu) { return; }
    }
    ctx->pc = 0x423D7Cu;
label_423d7c:
    // 0x423d7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x423d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_423d80:
    // 0x423d80: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x423d80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_423d84:
    // 0x423d84: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x423d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_423d88:
    // 0x423d88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x423d88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423d8c:
    // 0x423d8c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x423d8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423d90:
    // 0x423d90: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x423d90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_423d94:
    // 0x423d94: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x423d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423d98:
    // 0x423d98: 0x8c51077c  lw          $s1, 0x77C($v0)
    ctx->pc = 0x423d98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_423d9c:
    // 0x423d9c: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x423d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_423da0:
    // 0x423da0: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x423da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_423da4:
    // 0x423da4: 0x82020e3f  lb          $v0, 0xE3F($s0)
    ctx->pc = 0x423da4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_423da8:
    // 0x423da8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_423dac:
    if (ctx->pc == 0x423DACu) {
        ctx->pc = 0x423DB0u;
        goto label_423db0;
    }
    ctx->pc = 0x423DA8u;
    {
        const bool branch_taken_0x423da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x423da8) {
            ctx->pc = 0x423DB8u;
            goto label_423db8;
        }
    }
    ctx->pc = 0x423DB0u;
label_423db0:
    // 0x423db0: 0x10000003  b           . + 4 + (0x3 << 2)
label_423db4:
    if (ctx->pc == 0x423DB4u) {
        ctx->pc = 0x423DB4u;
            // 0x423db4: 0xae4000fc  sw          $zero, 0xFC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
        ctx->pc = 0x423DB8u;
        goto label_423db8;
    }
    ctx->pc = 0x423DB0u;
    {
        const bool branch_taken_0x423db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423DB0u;
            // 0x423db4: 0xae4000fc  sw          $zero, 0xFC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423db0) {
            ctx->pc = 0x423DC0u;
            goto label_423dc0;
        }
    }
    ctx->pc = 0x423DB8u;
label_423db8:
    // 0x423db8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x423db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_423dbc:
    // 0x423dbc: 0xae4200fc  sw          $v0, 0xFC($s2)
    ctx->pc = 0x423dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 2));
label_423dc0:
    // 0x423dc0: 0x82030e3f  lb          $v1, 0xE3F($s0)
    ctx->pc = 0x423dc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_423dc4:
    // 0x423dc4: 0x16163c  dsll32      $v0, $s6, 24
    ctx->pc = 0x423dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 24));
label_423dc8:
    // 0x423dc8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x423dc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_423dcc:
    // 0x423dcc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x423dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_423dd0:
    // 0x423dd0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_423dd4:
    if (ctx->pc == 0x423DD4u) {
        ctx->pc = 0x423DD8u;
        goto label_423dd8;
    }
    ctx->pc = 0x423DD0u;
    {
        const bool branch_taken_0x423dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x423dd0) {
            ctx->pc = 0x423E08u;
            goto label_423e08;
        }
    }
    ctx->pc = 0x423DD8u;
label_423dd8:
    // 0x423dd8: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x423dd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_423ddc:
    // 0x423ddc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x423ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_423de0:
    // 0x423de0: 0xc04cc04  jal         func_133010
label_423de4:
    if (ctx->pc == 0x423DE4u) {
        ctx->pc = 0x423DE4u;
            // 0x423de4: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x423DE8u;
        goto label_423de8;
    }
    ctx->pc = 0x423DE0u;
    SET_GPR_U32(ctx, 31, 0x423DE8u);
    ctx->pc = 0x423DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423DE0u;
            // 0x423de4: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423DE8u; }
        if (ctx->pc != 0x423DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423DE8u; }
        if (ctx->pc != 0x423DE8u) { return; }
    }
    ctx->pc = 0x423DE8u;
label_423de8:
    // 0x423de8: 0x26050830  addiu       $a1, $s0, 0x830
    ctx->pc = 0x423de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
label_423dec:
    // 0x423dec: 0xc04f278  jal         func_13C9E0
label_423df0:
    if (ctx->pc == 0x423DF0u) {
        ctx->pc = 0x423DF0u;
            // 0x423df0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x423DF4u;
        goto label_423df4;
    }
    ctx->pc = 0x423DECu;
    SET_GPR_U32(ctx, 31, 0x423DF4u);
    ctx->pc = 0x423DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423DECu;
            // 0x423df0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423DF4u; }
        if (ctx->pc != 0x423DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423DF4u; }
        if (ctx->pc != 0x423DF4u) { return; }
    }
    ctx->pc = 0x423DF4u;
label_423df4:
    // 0x423df4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x423df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_423df8:
    // 0x423df8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x423df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_423dfc:
    // 0x423dfc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x423dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_423e00:
    // 0x423e00: 0xc04cca0  jal         func_133280
label_423e04:
    if (ctx->pc == 0x423E04u) {
        ctx->pc = 0x423E04u;
            // 0x423e04: 0x24c6c7e0  addiu       $a2, $a2, -0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952928));
        ctx->pc = 0x423E08u;
        goto label_423e08;
    }
    ctx->pc = 0x423E00u;
    SET_GPR_U32(ctx, 31, 0x423E08u);
    ctx->pc = 0x423E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423E00u;
            // 0x423e04: 0x24c6c7e0  addiu       $a2, $a2, -0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423E08u; }
        if (ctx->pc != 0x423E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423E08u; }
        if (ctx->pc != 0x423E08u) { return; }
    }
    ctx->pc = 0x423E08u;
label_423e08:
    // 0x423e08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x423e08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_423e0c:
    // 0x423e0c: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x423e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_423e10:
    // 0x423e10: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x423e10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_423e14:
    // 0x423e14: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_423e18:
    if (ctx->pc == 0x423E18u) {
        ctx->pc = 0x423E18u;
            // 0x423e18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x423E1Cu;
        goto label_423e1c;
    }
    ctx->pc = 0x423E14u;
    {
        const bool branch_taken_0x423e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423E14u;
            // 0x423e18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423e14) {
            ctx->pc = 0x423D9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_423d9c;
        }
    }
    ctx->pc = 0x423E1Cu;
label_423e1c:
    // 0x423e1c: 0x92a200f6  lbu         $v0, 0xF6($s5)
    ctx->pc = 0x423e1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 246)));
label_423e20:
    // 0x423e20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_423e24:
    if (ctx->pc == 0x423E24u) {
        ctx->pc = 0x423E28u;
        goto label_423e28;
    }
    ctx->pc = 0x423E20u;
    {
        const bool branch_taken_0x423e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423e20) {
            ctx->pc = 0x423E3Cu;
            goto label_423e3c;
        }
    }
    ctx->pc = 0x423E28u;
label_423e28:
    // 0x423e28: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x423e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_423e2c:
    // 0x423e2c: 0x3c023ada  lui         $v0, 0x3ADA
    ctx->pc = 0x423e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15066 << 16));
label_423e30:
    // 0x423e30: 0xaea3010c  sw          $v1, 0x10C($s5)
    ctx->pc = 0x423e30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 268), GPR_U32(ctx, 3));
label_423e34:
    // 0x423e34: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x423e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
label_423e38:
    // 0x423e38: 0xaea2011c  sw          $v0, 0x11C($s5)
    ctx->pc = 0x423e38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 284), GPR_U32(ctx, 2));
label_423e3c:
    // 0x423e3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x423e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_423e40:
    // 0x423e40: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x423e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_423e44:
    // 0x423e44: 0x8c440cd0  lw          $a0, 0xCD0($v0)
    ctx->pc = 0x423e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_423e48:
    // 0x423e48: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x423e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_423e4c:
    // 0x423e4c: 0xc108434  jal         func_4210D0
label_423e50:
    if (ctx->pc == 0x423E50u) {
        ctx->pc = 0x423E50u;
            // 0x423e50: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x423E54u;
        goto label_423e54;
    }
    ctx->pc = 0x423E4Cu;
    SET_GPR_U32(ctx, 31, 0x423E54u);
    ctx->pc = 0x423E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423E4Cu;
            // 0x423e50: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4210D0u;
    if (runtime->hasFunction(0x4210D0u)) {
        auto targetFn = runtime->lookupFunction(0x4210D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423E54u; }
        if (ctx->pc != 0x423E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004210D0_0x4210d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423E54u; }
        if (ctx->pc != 0x423E54u) { return; }
    }
    ctx->pc = 0x423E54u;
label_423e54:
    // 0x423e54: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x423e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_423e58:
    // 0x423e58: 0xc04cc04  jal         func_133010
label_423e5c:
    if (ctx->pc == 0x423E5Cu) {
        ctx->pc = 0x423E5Cu;
            // 0x423e5c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x423E60u;
        goto label_423e60;
    }
    ctx->pc = 0x423E58u;
    SET_GPR_U32(ctx, 31, 0x423E60u);
    ctx->pc = 0x423E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423E58u;
            // 0x423e5c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423E60u; }
        if (ctx->pc != 0x423E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423E60u; }
        if (ctx->pc != 0x423E60u) { return; }
    }
    ctx->pc = 0x423E60u;
label_423e60:
    // 0x423e60: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x423e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_423e64:
    // 0x423e64: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x423e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_423e68:
    // 0x423e68: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x423e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_423e6c:
    // 0x423e6c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x423e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_423e70:
    // 0x423e70: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x423e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_423e74:
    // 0x423e74: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x423e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_423e78:
    // 0x423e78: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x423e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_423e7c:
    // 0x423e7c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x423e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_423e80:
    // 0x423e80: 0xc089290  jal         func_224A40
label_423e84:
    if (ctx->pc == 0x423E84u) {
        ctx->pc = 0x423E84u;
            // 0x423e84: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x423E88u;
        goto label_423e88;
    }
    ctx->pc = 0x423E80u;
    SET_GPR_U32(ctx, 31, 0x423E88u);
    ctx->pc = 0x423E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423E80u;
            // 0x423e84: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423E88u; }
        if (ctx->pc != 0x423E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423E88u; }
        if (ctx->pc != 0x423E88u) { return; }
    }
    ctx->pc = 0x423E88u;
label_423e88:
    // 0x423e88: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x423e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_423e8c:
    // 0x423e8c: 0x3c0200e3  lui         $v0, 0xE3
    ctx->pc = 0x423e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)227 << 16));
label_423e90:
    // 0x423e90: 0xaea300b0  sw          $v1, 0xB0($s5)
    ctx->pc = 0x423e90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 3));
label_423e94:
    // 0x423e94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x423e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423e98:
    // 0x423e98: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x423e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_423e9c:
    // 0x423e9c: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x423e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_423ea0:
    // 0x423ea0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x423ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_423ea4:
    // 0x423ea4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x423ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_423ea8:
    // 0x423ea8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x423ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_423eac:
    // 0x423eac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x423eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_423eb0:
    // 0x423eb0: 0xc08bff0  jal         func_22FFC0
label_423eb4:
    if (ctx->pc == 0x423EB4u) {
        ctx->pc = 0x423EB4u;
            // 0x423eb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423EB8u;
        goto label_423eb8;
    }
    ctx->pc = 0x423EB0u;
    SET_GPR_U32(ctx, 31, 0x423EB8u);
    ctx->pc = 0x423EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423EB0u;
            // 0x423eb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423EB8u; }
        if (ctx->pc != 0x423EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423EB8u; }
        if (ctx->pc != 0x423EB8u) { return; }
    }
    ctx->pc = 0x423EB8u;
label_423eb8:
    // 0x423eb8: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x423eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_423ebc:
    // 0x423ebc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x423ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_423ec0:
    // 0x423ec0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x423ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423ec4:
    // 0x423ec4: 0xc08914c  jal         func_224530
label_423ec8:
    if (ctx->pc == 0x423EC8u) {
        ctx->pc = 0x423EC8u;
            // 0x423ec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423ECCu;
        goto label_423ecc;
    }
    ctx->pc = 0x423EC4u;
    SET_GPR_U32(ctx, 31, 0x423ECCu);
    ctx->pc = 0x423EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423EC4u;
            // 0x423ec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423ECCu; }
        if (ctx->pc != 0x423ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423ECCu; }
        if (ctx->pc != 0x423ECCu) { return; }
    }
    ctx->pc = 0x423ECCu;
label_423ecc:
    // 0x423ecc: 0xa2a00064  sb          $zero, 0x64($s5)
    ctx->pc = 0x423eccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 100), (uint8_t)GPR_U32(ctx, 0));
label_423ed0:
    // 0x423ed0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x423ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_423ed4:
    // 0x423ed4: 0xa2a00065  sb          $zero, 0x65($s5)
    ctx->pc = 0x423ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 101), (uint8_t)GPR_U32(ctx, 0));
label_423ed8:
    // 0x423ed8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x423ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_423edc:
    // 0x423edc: 0xa2a00066  sb          $zero, 0x66($s5)
    ctx->pc = 0x423edcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 102), (uint8_t)GPR_U32(ctx, 0));
label_423ee0:
    // 0x423ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x423ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423ee4:
    // 0x423ee4: 0xa2a00067  sb          $zero, 0x67($s5)
    ctx->pc = 0x423ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 103), (uint8_t)GPR_U32(ctx, 0));
label_423ee8:
    // 0x423ee8: 0xa2a40068  sb          $a0, 0x68($s5)
    ctx->pc = 0x423ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 104), (uint8_t)GPR_U32(ctx, 4));
label_423eec:
    // 0x423eec: 0xa2a00069  sb          $zero, 0x69($s5)
    ctx->pc = 0x423eecu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 105), (uint8_t)GPR_U32(ctx, 0));
label_423ef0:
    // 0x423ef0: 0xa2a3004c  sb          $v1, 0x4C($s5)
    ctx->pc = 0x423ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 76), (uint8_t)GPR_U32(ctx, 3));
label_423ef4:
    // 0x423ef4: 0xaea20158  sw          $v0, 0x158($s5)
    ctx->pc = 0x423ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 344), GPR_U32(ctx, 2));
label_423ef8:
    // 0x423ef8: 0xaea000f0  sw          $zero, 0xF0($s5)
    ctx->pc = 0x423ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 0));
label_423efc:
    // 0x423efc: 0xaea00114  sw          $zero, 0x114($s5)
    ctx->pc = 0x423efcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 0));
label_423f00:
    // 0x423f00: 0xaea00118  sw          $zero, 0x118($s5)
    ctx->pc = 0x423f00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 280), GPR_U32(ctx, 0));
label_423f04:
    // 0x423f04: 0xaea000a4  sw          $zero, 0xA4($s5)
    ctx->pc = 0x423f04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 0));
label_423f08:
    // 0x423f08: 0x8ea400d4  lw          $a0, 0xD4($s5)
    ctx->pc = 0x423f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
label_423f0c:
    // 0x423f0c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_423f10:
    if (ctx->pc == 0x423F10u) {
        ctx->pc = 0x423F10u;
            // 0x423f10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423F14u;
        goto label_423f14;
    }
    ctx->pc = 0x423F0Cu;
    {
        const bool branch_taken_0x423f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x423f0c) {
            ctx->pc = 0x423F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423F0Cu;
            // 0x423f10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423F2Cu;
            goto label_423f2c;
        }
    }
    ctx->pc = 0x423F14u;
label_423f14:
    // 0x423f14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x423f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_423f18:
    // 0x423f18: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x423f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_423f1c:
    // 0x423f1c: 0x320f809  jalr        $t9
label_423f20:
    if (ctx->pc == 0x423F20u) {
        ctx->pc = 0x423F20u;
            // 0x423f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x423F24u;
        goto label_423f24;
    }
    ctx->pc = 0x423F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x423F24u);
        ctx->pc = 0x423F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423F1Cu;
            // 0x423f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x423F24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x423F24u; }
            if (ctx->pc != 0x423F24u) { return; }
        }
        }
    }
    ctx->pc = 0x423F24u;
label_423f24:
    // 0x423f24: 0xaea000d4  sw          $zero, 0xD4($s5)
    ctx->pc = 0x423f24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 0));
label_423f28:
    // 0x423f28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x423f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423f2c:
    // 0x423f2c: 0xc0ba364  jal         func_2E8D90
label_423f30:
    if (ctx->pc == 0x423F30u) {
        ctx->pc = 0x423F34u;
        goto label_423f34;
    }
    ctx->pc = 0x423F2Cu;
    SET_GPR_U32(ctx, 31, 0x423F34u);
    ctx->pc = 0x2E8D90u;
    if (runtime->hasFunction(0x2E8D90u)) {
        auto targetFn = runtime->lookupFunction(0x2E8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423F34u; }
        if (ctx->pc != 0x423F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8D90_0x2e8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423F34u; }
        if (ctx->pc != 0x423F34u) { return; }
    }
    ctx->pc = 0x423F34u;
label_423f34:
    // 0x423f34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x423f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_423f38:
    // 0x423f38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x423f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_423f3c:
    // 0x423f3c: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x423f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_423f40:
    // 0x423f40: 0xc0bb1ec  jal         func_2EC7B0
label_423f44:
    if (ctx->pc == 0x423F44u) {
        ctx->pc = 0x423F44u;
            // 0x423f44: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x423F48u;
        goto label_423f48;
    }
    ctx->pc = 0x423F40u;
    SET_GPR_U32(ctx, 31, 0x423F48u);
    ctx->pc = 0x423F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423F40u;
            // 0x423f44: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC7B0u;
    if (runtime->hasFunction(0x2EC7B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423F48u; }
        if (ctx->pc != 0x423F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC7B0_0x2ec7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423F48u; }
        if (ctx->pc != 0x423F48u) { return; }
    }
    ctx->pc = 0x423F48u;
label_423f48:
    // 0x423f48: 0xaea200d4  sw          $v0, 0xD4($s5)
    ctx->pc = 0x423f48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 2));
label_423f4c:
    // 0x423f4c: 0x8ea30130  lw          $v1, 0x130($s5)
    ctx->pc = 0x423f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
label_423f50:
    // 0x423f50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x423f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_423f54:
    // 0x423f54: 0xaea30144  sw          $v1, 0x144($s5)
    ctx->pc = 0x423f54u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 324), GPR_U32(ctx, 3));
label_423f58:
    // 0x423f58: 0xaea00130  sw          $zero, 0x130($s5)
    ctx->pc = 0x423f58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 304), GPR_U32(ctx, 0));
label_423f5c:
    // 0x423f5c: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x423f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_423f60:
    // 0x423f60: 0xc12a1e0  jal         func_4A8780
label_423f64:
    if (ctx->pc == 0x423F64u) {
        ctx->pc = 0x423F64u;
            // 0x423f64: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->pc = 0x423F68u;
        goto label_423f68;
    }
    ctx->pc = 0x423F60u;
    SET_GPR_U32(ctx, 31, 0x423F68u);
    ctx->pc = 0x423F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423F60u;
            // 0x423f64: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A8780u;
    if (runtime->hasFunction(0x4A8780u)) {
        auto targetFn = runtime->lookupFunction(0x4A8780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423F68u; }
        if (ctx->pc != 0x423F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8780_0x4a8780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423F68u; }
        if (ctx->pc != 0x423F68u) { return; }
    }
    ctx->pc = 0x423F68u;
label_423f68:
    // 0x423f68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x423f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_423f6c:
    // 0x423f6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x423f6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_423f70:
    // 0x423f70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x423f70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_423f74:
    // 0x423f74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x423f74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_423f78:
    // 0x423f78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x423f78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_423f7c:
    // 0x423f7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x423f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_423f80:
    // 0x423f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x423f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_423f84:
    // 0x423f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x423f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_423f88:
    // 0x423f88: 0x3e00008  jr          $ra
label_423f8c:
    if (ctx->pc == 0x423F8Cu) {
        ctx->pc = 0x423F8Cu;
            // 0x423f8c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x423F90u;
        goto label_423f90;
    }
    ctx->pc = 0x423F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423F88u;
            // 0x423f8c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x423F90u;
label_423f90:
    // 0x423f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x423f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_423f94:
    // 0x423f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x423f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_423f98:
    // 0x423f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x423f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_423f9c:
    // 0x423f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x423f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423fa0:
    // 0x423fa0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x423fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_423fa4:
    // 0x423fa4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_423fa8:
    if (ctx->pc == 0x423FA8u) {
        ctx->pc = 0x423FA8u;
            // 0x423fa8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x423FACu;
        goto label_423fac;
    }
    ctx->pc = 0x423FA4u;
    {
        const bool branch_taken_0x423fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x423fa4) {
            ctx->pc = 0x423FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423FA4u;
            // 0x423fa8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423FC0u;
            goto label_423fc0;
        }
    }
    ctx->pc = 0x423FACu;
label_423fac:
    // 0x423fac: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x423facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_423fb0:
    // 0x423fb0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x423fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_423fb4:
    // 0x423fb4: 0x320f809  jalr        $t9
label_423fb8:
    if (ctx->pc == 0x423FB8u) {
        ctx->pc = 0x423FB8u;
            // 0x423fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x423FBCu;
        goto label_423fbc;
    }
    ctx->pc = 0x423FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x423FBCu);
        ctx->pc = 0x423FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423FB4u;
            // 0x423fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x423FBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x423FBCu; }
            if (ctx->pc != 0x423FBCu) { return; }
        }
        }
    }
    ctx->pc = 0x423FBCu;
label_423fbc:
    // 0x423fbc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x423fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_423fc0:
    // 0x423fc0: 0x8e04017c  lw          $a0, 0x17C($s0)
    ctx->pc = 0x423fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_423fc4:
    // 0x423fc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_423fc8:
    if (ctx->pc == 0x423FC8u) {
        ctx->pc = 0x423FC8u;
            // 0x423fc8: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
        ctx->pc = 0x423FCCu;
        goto label_423fcc;
    }
    ctx->pc = 0x423FC4u;
    {
        const bool branch_taken_0x423fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x423fc4) {
            ctx->pc = 0x423FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423FC4u;
            // 0x423fc8: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
        ctx->in_delay_slot = false;
            ctx->pc = 0x423FE0u;
            goto label_423fe0;
        }
    }
    ctx->pc = 0x423FCCu;
label_423fcc:
    // 0x423fcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x423fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_423fd0:
    // 0x423fd0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x423fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_423fd4:
    // 0x423fd4: 0x320f809  jalr        $t9
label_423fd8:
    if (ctx->pc == 0x423FD8u) {
        ctx->pc = 0x423FD8u;
            // 0x423fd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x423FDCu;
        goto label_423fdc;
    }
    ctx->pc = 0x423FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x423FDCu);
        ctx->pc = 0x423FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x423FD4u;
            // 0x423fd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x423FDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x423FDCu; }
            if (ctx->pc != 0x423FDCu) { return; }
        }
        }
    }
    ctx->pc = 0x423FDCu;
label_423fdc:
    // 0x423fdc: 0x26040148  addiu       $a0, $s0, 0x148
    ctx->pc = 0x423fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_423fe0:
    // 0x423fe0: 0xc0d37dc  jal         func_34DF70
label_423fe4:
    if (ctx->pc == 0x423FE4u) {
        ctx->pc = 0x423FE4u;
            // 0x423fe4: 0xae00017c  sw          $zero, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
        ctx->pc = 0x423FE8u;
        goto label_423fe8;
    }
    ctx->pc = 0x423FE0u;
    SET_GPR_U32(ctx, 31, 0x423FE8u);
    ctx->pc = 0x423FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423FE0u;
            // 0x423fe4: 0xae00017c  sw          $zero, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423FE8u; }
        if (ctx->pc != 0x423FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423FE8u; }
        if (ctx->pc != 0x423FE8u) { return; }
    }
    ctx->pc = 0x423FE8u;
label_423fe8:
    // 0x423fe8: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x423fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_423fec:
    // 0x423fec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x423fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_423ff0:
    // 0x423ff0: 0xc04a576  jal         func_1295D8
label_423ff4:
    if (ctx->pc == 0x423FF4u) {
        ctx->pc = 0x423FF4u;
            // 0x423ff4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x423FF8u;
        goto label_423ff8;
    }
    ctx->pc = 0x423FF0u;
    SET_GPR_U32(ctx, 31, 0x423FF8u);
    ctx->pc = 0x423FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x423FF0u;
            // 0x423ff4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423FF8u; }
        if (ctx->pc != 0x423FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x423FF8u; }
        if (ctx->pc != 0x423FF8u) { return; }
    }
    ctx->pc = 0x423FF8u;
label_423ff8:
    // 0x423ff8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x423ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_423ffc:
    // 0x423ffc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_424000:
    if (ctx->pc == 0x424000u) {
        ctx->pc = 0x424000u;
            // 0x424000: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x424004u;
        goto label_424004;
    }
    ctx->pc = 0x423FFCu;
    {
        const bool branch_taken_0x423ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x423ffc) {
            ctx->pc = 0x424000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x423FFCu;
            // 0x424000: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424018u;
            goto label_424018;
        }
    }
    ctx->pc = 0x424004u;
label_424004:
    // 0x424004: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x424004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_424008:
    // 0x424008: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x424008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42400c:
    // 0x42400c: 0x320f809  jalr        $t9
label_424010:
    if (ctx->pc == 0x424010u) {
        ctx->pc = 0x424010u;
            // 0x424010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x424014u;
        goto label_424014;
    }
    ctx->pc = 0x42400Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x424014u);
        ctx->pc = 0x424010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42400Cu;
            // 0x424010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x424014u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x424014u; }
            if (ctx->pc != 0x424014u) { return; }
        }
        }
    }
    ctx->pc = 0x424014u;
label_424014:
    // 0x424014: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x424014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_424018:
    // 0x424018: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x424018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_42401c:
    // 0x42401c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_424020:
    if (ctx->pc == 0x424020u) {
        ctx->pc = 0x424020u;
            // 0x424020: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x424024u;
        goto label_424024;
    }
    ctx->pc = 0x42401Cu;
    {
        const bool branch_taken_0x42401c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42401c) {
            ctx->pc = 0x424020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42401Cu;
            // 0x424020: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424038u;
            goto label_424038;
        }
    }
    ctx->pc = 0x424024u;
label_424024:
    // 0x424024: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x424024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_424028:
    // 0x424028: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x424028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42402c:
    // 0x42402c: 0x320f809  jalr        $t9
label_424030:
    if (ctx->pc == 0x424030u) {
        ctx->pc = 0x424030u;
            // 0x424030: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x424034u;
        goto label_424034;
    }
    ctx->pc = 0x42402Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x424034u);
        ctx->pc = 0x424030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42402Cu;
            // 0x424030: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x424034u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x424034u; }
            if (ctx->pc != 0x424034u) { return; }
        }
        }
    }
    ctx->pc = 0x424034u;
label_424034:
    // 0x424034: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x424034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_424038:
    // 0x424038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x424038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42403c:
    // 0x42403c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42403cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_424040:
    // 0x424040: 0x3e00008  jr          $ra
label_424044:
    if (ctx->pc == 0x424044u) {
        ctx->pc = 0x424044u;
            // 0x424044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x424048u;
        goto label_424048;
    }
    ctx->pc = 0x424040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424040u;
            // 0x424044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424048u;
label_424048:
    // 0x424048: 0x0  nop
    ctx->pc = 0x424048u;
    // NOP
label_42404c:
    // 0x42404c: 0x0  nop
    ctx->pc = 0x42404cu;
    // NOP
label_424050:
    // 0x424050: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x424050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_424054:
    // 0x424054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x424054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_424058:
    // 0x424058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x424058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42405c:
    // 0x42405c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x42405cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_424060:
    // 0x424060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x424060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_424064:
    // 0x424064: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x424064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_424068:
    // 0x424068: 0xc0892d0  jal         func_224B40
label_42406c:
    if (ctx->pc == 0x42406Cu) {
        ctx->pc = 0x42406Cu;
            // 0x42406c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x424070u;
        goto label_424070;
    }
    ctx->pc = 0x424068u;
    SET_GPR_U32(ctx, 31, 0x424070u);
    ctx->pc = 0x42406Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424068u;
            // 0x42406c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424070u; }
        if (ctx->pc != 0x424070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424070u; }
        if (ctx->pc != 0x424070u) { return; }
    }
    ctx->pc = 0x424070u;
label_424070:
    // 0x424070: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x424070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_424074:
    // 0x424074: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x424074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_424078:
    // 0x424078: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x424078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42407c:
    // 0x42407c: 0x8c71e3e0  lw          $s1, -0x1C20($v1)
    ctx->pc = 0x42407cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_424080:
    // 0x424080: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x424080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_424084:
    // 0x424084: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x424084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_424088:
    // 0x424088: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x424088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42408c:
    // 0x42408c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x42408cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_424090:
    // 0x424090: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x424090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_424094:
    // 0x424094: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x424094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_424098:
    // 0x424098: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x424098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_42409c:
    // 0x42409c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x42409cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_4240a0:
    // 0x4240a0: 0xc0a7a88  jal         func_29EA20
label_4240a4:
    if (ctx->pc == 0x4240A4u) {
        ctx->pc = 0x4240A4u;
            // 0x4240a4: 0xe7a200c8  swc1        $f2, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x4240A8u;
        goto label_4240a8;
    }
    ctx->pc = 0x4240A0u;
    SET_GPR_U32(ctx, 31, 0x4240A8u);
    ctx->pc = 0x4240A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4240A0u;
            // 0x4240a4: 0xe7a200c8  swc1        $f2, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4240A8u; }
        if (ctx->pc != 0x4240A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4240A8u; }
        if (ctx->pc != 0x4240A8u) { return; }
    }
    ctx->pc = 0x4240A8u;
label_4240a8:
    // 0x4240a8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4240a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4240ac:
    // 0x4240ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4240acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4240b0:
    // 0x4240b0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4240b4:
    if (ctx->pc == 0x4240B4u) {
        ctx->pc = 0x4240B4u;
            // 0x4240b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4240B8u;
        goto label_4240b8;
    }
    ctx->pc = 0x4240B0u;
    {
        const bool branch_taken_0x4240b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4240B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4240B0u;
            // 0x4240b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4240b0) {
            ctx->pc = 0x4240CCu;
            goto label_4240cc;
        }
    }
    ctx->pc = 0x4240B8u;
label_4240b8:
    // 0x4240b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4240b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4240bc:
    // 0x4240bc: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4240bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4240c0:
    // 0x4240c0: 0xc0804bc  jal         func_2012F0
label_4240c4:
    if (ctx->pc == 0x4240C4u) {
        ctx->pc = 0x4240C4u;
            // 0x4240c4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4240C8u;
        goto label_4240c8;
    }
    ctx->pc = 0x4240C0u;
    SET_GPR_U32(ctx, 31, 0x4240C8u);
    ctx->pc = 0x4240C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4240C0u;
            // 0x4240c4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4240C8u; }
        if (ctx->pc != 0x4240C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4240C8u; }
        if (ctx->pc != 0x4240C8u) { return; }
    }
    ctx->pc = 0x4240C8u;
label_4240c8:
    // 0x4240c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4240c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4240cc:
    // 0x4240cc: 0xae4400d0  sw          $a0, 0xD0($s2)
    ctx->pc = 0x4240ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 4));
label_4240d0:
    // 0x4240d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4240d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4240d4:
    // 0x4240d4: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x4240d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_4240d8:
    // 0x4240d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4240d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4240dc:
    // 0x4240dc: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x4240dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4240e0:
    // 0x4240e0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4240e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4240e4:
    // 0x4240e4: 0xc0b6e68  jal         func_2DB9A0
label_4240e8:
    if (ctx->pc == 0x4240E8u) {
        ctx->pc = 0x4240E8u;
            // 0x4240e8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4240ECu;
        goto label_4240ec;
    }
    ctx->pc = 0x4240E4u;
    SET_GPR_U32(ctx, 31, 0x4240ECu);
    ctx->pc = 0x4240E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4240E4u;
            // 0x4240e8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4240ECu; }
        if (ctx->pc != 0x4240ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4240ECu; }
        if (ctx->pc != 0x4240ECu) { return; }
    }
    ctx->pc = 0x4240ECu;
label_4240ec:
    // 0x4240ec: 0xc0b6dac  jal         func_2DB6B0
label_4240f0:
    if (ctx->pc == 0x4240F0u) {
        ctx->pc = 0x4240F0u;
            // 0x4240f0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4240F4u;
        goto label_4240f4;
    }
    ctx->pc = 0x4240ECu;
    SET_GPR_U32(ctx, 31, 0x4240F4u);
    ctx->pc = 0x4240F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4240ECu;
            // 0x4240f0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4240F4u; }
        if (ctx->pc != 0x4240F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4240F4u; }
        if (ctx->pc != 0x4240F4u) { return; }
    }
    ctx->pc = 0x4240F4u;
label_4240f4:
    // 0x4240f4: 0xc0cac94  jal         func_32B250
label_4240f8:
    if (ctx->pc == 0x4240F8u) {
        ctx->pc = 0x4240F8u;
            // 0x4240f8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4240FCu;
        goto label_4240fc;
    }
    ctx->pc = 0x4240F4u;
    SET_GPR_U32(ctx, 31, 0x4240FCu);
    ctx->pc = 0x4240F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4240F4u;
            // 0x4240f8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4240FCu; }
        if (ctx->pc != 0x4240FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4240FCu; }
        if (ctx->pc != 0x4240FCu) { return; }
    }
    ctx->pc = 0x4240FCu;
label_4240fc:
    // 0x4240fc: 0xc0cac84  jal         func_32B210
label_424100:
    if (ctx->pc == 0x424100u) {
        ctx->pc = 0x424100u;
            // 0x424100: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x424104u;
        goto label_424104;
    }
    ctx->pc = 0x4240FCu;
    SET_GPR_U32(ctx, 31, 0x424104u);
    ctx->pc = 0x424100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4240FCu;
            // 0x424100: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424104u; }
        if (ctx->pc != 0x424104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424104u; }
        if (ctx->pc != 0x424104u) { return; }
    }
    ctx->pc = 0x424104u;
label_424104:
    // 0x424104: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x424104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_424108:
    // 0x424108: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x424108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_42410c:
    // 0x42410c: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x42410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_424110:
    // 0x424110: 0xc0a562c  jal         func_2958B0
label_424114:
    if (ctx->pc == 0x424114u) {
        ctx->pc = 0x424114u;
            // 0x424114: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x424118u;
        goto label_424118;
    }
    ctx->pc = 0x424110u;
    SET_GPR_U32(ctx, 31, 0x424118u);
    ctx->pc = 0x424114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424110u;
            // 0x424114: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424118u; }
        if (ctx->pc != 0x424118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424118u; }
        if (ctx->pc != 0x424118u) { return; }
    }
    ctx->pc = 0x424118u;
label_424118:
    // 0x424118: 0xc6450018  lwc1        $f5, 0x18($s2)
    ctx->pc = 0x424118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42411c:
    // 0x42411c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x42411cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_424120:
    // 0x424120: 0xc6440014  lwc1        $f4, 0x14($s2)
    ctx->pc = 0x424120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_424124:
    // 0x424124: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x424124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_424128:
    // 0x424128: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x424128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42412c:
    // 0x42412c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42412cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_424130:
    // 0x424130: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x424130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_424134:
    // 0x424134: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x424134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424138:
    // 0x424138: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x424138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42413c:
    // 0x42413c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x42413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_424140:
    // 0x424140: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x424140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_424144:
    // 0x424144: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x424144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_424148:
    // 0x424148: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x424148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_42414c:
    // 0x42414c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x42414cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_424150:
    // 0x424150: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x424150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_424154:
    // 0x424154: 0xa3a70180  sb          $a3, 0x180($sp)
    ctx->pc = 0x424154u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 7));
label_424158:
    // 0x424158: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x424158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42415c:
    // 0x42415c: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x42415cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
label_424160:
    // 0x424160: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x424160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424164:
    // 0x424164: 0xafb000d4  sw          $s0, 0xD4($sp)
    ctx->pc = 0x424164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 16));
label_424168:
    // 0x424168: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x424168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_42416c:
    // 0x42416c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x42416cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_424170:
    // 0x424170: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x424170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_424174:
    // 0x424174: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x424174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_424178:
    // 0x424178: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x424178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_42417c:
    // 0x42417c: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x42417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_424180:
    // 0x424180: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x424180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_424184:
    // 0x424184: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x424184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424188:
    // 0x424188: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x424188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_42418c:
    // 0x42418c: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x42418cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_424190:
    // 0x424190: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x424190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_424194:
    // 0x424194: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x424194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_424198:
    // 0x424198: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x424198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42419c:
    // 0x42419c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x42419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4241a0:
    // 0x4241a0: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x4241a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4241a4:
    // 0x4241a4: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x4241a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4241a8:
    // 0x4241a8: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x4241a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4241ac:
    // 0x4241ac: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x4241acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4241b0:
    // 0x4241b0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x4241b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4241b4:
    // 0x4241b4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x4241b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4241b8:
    // 0x4241b8: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x4241b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4241bc:
    // 0x4241bc: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x4241bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_4241c0:
    // 0x4241c0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x4241c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_4241c4:
    // 0x4241c4: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x4241c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4241c8:
    // 0x4241c8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x4241c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4241cc:
    // 0x4241cc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4241ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4241d0:
    // 0x4241d0: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x4241d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_4241d4:
    // 0x4241d4: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x4241d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_4241d8:
    // 0x4241d8: 0xe7a500e8  swc1        $f5, 0xE8($sp)
    ctx->pc = 0x4241d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_4241dc:
    // 0x4241dc: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x4241dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_4241e0:
    // 0x4241e0: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x4241e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_4241e4:
    // 0x4241e4: 0xc0a7a88  jal         func_29EA20
label_4241e8:
    if (ctx->pc == 0x4241E8u) {
        ctx->pc = 0x4241E8u;
            // 0x4241e8: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x4241ECu;
        goto label_4241ec;
    }
    ctx->pc = 0x4241E4u;
    SET_GPR_U32(ctx, 31, 0x4241ECu);
    ctx->pc = 0x4241E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4241E4u;
            // 0x4241e8: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4241ECu; }
        if (ctx->pc != 0x4241ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4241ECu; }
        if (ctx->pc != 0x4241ECu) { return; }
    }
    ctx->pc = 0x4241ECu;
label_4241ec:
    // 0x4241ec: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4241ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4241f0:
    // 0x4241f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4241f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4241f4:
    // 0x4241f4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4241f8:
    if (ctx->pc == 0x4241F8u) {
        ctx->pc = 0x4241F8u;
            // 0x4241f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4241FCu;
        goto label_4241fc;
    }
    ctx->pc = 0x4241F4u;
    {
        const bool branch_taken_0x4241f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4241F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4241F4u;
            // 0x4241f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4241f4) {
            ctx->pc = 0x424244u;
            goto label_424244;
        }
    }
    ctx->pc = 0x4241FCu;
label_4241fc:
    // 0x4241fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4241fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_424200:
    // 0x424200: 0xc088ef4  jal         func_223BD0
label_424204:
    if (ctx->pc == 0x424204u) {
        ctx->pc = 0x424204u;
            // 0x424204: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x424208u;
        goto label_424208;
    }
    ctx->pc = 0x424200u;
    SET_GPR_U32(ctx, 31, 0x424208u);
    ctx->pc = 0x424204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424200u;
            // 0x424204: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424208u; }
        if (ctx->pc != 0x424208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424208u; }
        if (ctx->pc != 0x424208u) { return; }
    }
    ctx->pc = 0x424208u;
label_424208:
    // 0x424208: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x424208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42420c:
    // 0x42420c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42420cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_424210:
    // 0x424210: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x424210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_424214:
    // 0x424214: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x424214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_424218:
    // 0x424218: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x424218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_42421c:
    // 0x42421c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x42421cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_424220:
    // 0x424220: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x424220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_424224:
    // 0x424224: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x424224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_424228:
    // 0x424228: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x424228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_42422c:
    // 0x42422c: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x42422cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_424230:
    // 0x424230: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x424230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_424234:
    // 0x424234: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x424234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_424238:
    // 0x424238: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x424238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_42423c:
    // 0x42423c: 0xc088b38  jal         func_222CE0
label_424240:
    if (ctx->pc == 0x424240u) {
        ctx->pc = 0x424240u;
            // 0x424240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424244u;
        goto label_424244;
    }
    ctx->pc = 0x42423Cu;
    SET_GPR_U32(ctx, 31, 0x424244u);
    ctx->pc = 0x424240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42423Cu;
            // 0x424240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424244u; }
        if (ctx->pc != 0x424244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424244u; }
        if (ctx->pc != 0x424244u) { return; }
    }
    ctx->pc = 0x424244u;
label_424244:
    // 0x424244: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x424244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_424248:
    // 0x424248: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x424248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42424c:
    // 0x42424c: 0xc08c164  jal         func_230590
label_424250:
    if (ctx->pc == 0x424250u) {
        ctx->pc = 0x424250u;
            // 0x424250: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x424254u;
        goto label_424254;
    }
    ctx->pc = 0x42424Cu;
    SET_GPR_U32(ctx, 31, 0x424254u);
    ctx->pc = 0x424250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42424Cu;
            // 0x424250: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424254u; }
        if (ctx->pc != 0x424254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424254u; }
        if (ctx->pc != 0x424254u) { return; }
    }
    ctx->pc = 0x424254u;
label_424254:
    // 0x424254: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x424254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_424258:
    // 0x424258: 0x3c0243d1  lui         $v0, 0x43D1
    ctx->pc = 0x424258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17361 << 16));
label_42425c:
    // 0x42425c: 0x24635f20  addiu       $v1, $v1, 0x5F20
    ctx->pc = 0x42425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24352));
label_424260:
    // 0x424260: 0x34427084  ori         $v0, $v0, 0x7084
    ctx->pc = 0x424260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28804);
label_424264:
    // 0x424264: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x424264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
label_424268:
    // 0x424268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x424268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42426c:
    // 0x42426c: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x42426cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_424270:
    // 0x424270: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x424270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_424274:
    // 0x424274: 0x3c0241a7  lui         $v0, 0x41A7
    ctx->pc = 0x424274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16807 << 16));
label_424278:
    // 0x424278: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x424278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_42427c:
    // 0x42427c: 0x34428d36  ori         $v0, $v0, 0x8D36
    ctx->pc = 0x42427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36150);
label_424280:
    // 0x424280: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x424280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_424284:
    // 0x424284: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x424284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_424288:
    // 0x424288: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x424288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42428c:
    // 0x42428c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x42428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424290:
    // 0x424290: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x424290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_424294:
    // 0x424294: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x424294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_424298:
    // 0x424298: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x424298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_42429c:
    // 0x42429c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x42429cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4242a0:
    // 0x4242a0: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x4242a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4242a4:
    // 0x4242a4: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x4242a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4242a8:
    // 0x4242a8: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x4242a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4242ac:
    // 0x4242ac: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x4242acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4242b0:
    // 0x4242b0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4242b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4242b4:
    // 0x4242b4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4242b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4242b8:
    // 0x4242b8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4242b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4242bc:
    // 0x4242bc: 0xc0892b0  jal         func_224AC0
label_4242c0:
    if (ctx->pc == 0x4242C0u) {
        ctx->pc = 0x4242C0u;
            // 0x4242c0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4242C4u;
        goto label_4242c4;
    }
    ctx->pc = 0x4242BCu;
    SET_GPR_U32(ctx, 31, 0x4242C4u);
    ctx->pc = 0x4242C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4242BCu;
            // 0x4242c0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4242C4u; }
        if (ctx->pc != 0x4242C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4242C4u; }
        if (ctx->pc != 0x4242C4u) { return; }
    }
    ctx->pc = 0x4242C4u;
label_4242c4:
    // 0x4242c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4242c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4242c8:
    // 0x4242c8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4242c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4242cc:
    // 0x4242cc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4242ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4242d0:
    // 0x4242d0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4242d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4242d4:
    // 0x4242d4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x4242d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_4242d8:
    // 0x4242d8: 0xc0891d8  jal         func_224760
label_4242dc:
    if (ctx->pc == 0x4242DCu) {
        ctx->pc = 0x4242DCu;
            // 0x4242dc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4242E0u;
        goto label_4242e0;
    }
    ctx->pc = 0x4242D8u;
    SET_GPR_U32(ctx, 31, 0x4242E0u);
    ctx->pc = 0x4242DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4242D8u;
            // 0x4242dc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4242E0u; }
        if (ctx->pc != 0x4242E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4242E0u; }
        if (ctx->pc != 0x4242E0u) { return; }
    }
    ctx->pc = 0x4242E0u;
label_4242e0:
    // 0x4242e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4242e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4242e4:
    // 0x4242e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4242e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4242e8:
    // 0x4242e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4242e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4242ec:
    // 0x4242ec: 0xc08914c  jal         func_224530
label_4242f0:
    if (ctx->pc == 0x4242F0u) {
        ctx->pc = 0x4242F0u;
            // 0x4242f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4242F4u;
        goto label_4242f4;
    }
    ctx->pc = 0x4242ECu;
    SET_GPR_U32(ctx, 31, 0x4242F4u);
    ctx->pc = 0x4242F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4242ECu;
            // 0x4242f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4242F4u; }
        if (ctx->pc != 0x4242F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4242F4u; }
        if (ctx->pc != 0x4242F4u) { return; }
    }
    ctx->pc = 0x4242F4u;
label_4242f4:
    // 0x4242f4: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x4242f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_4242f8:
    // 0x4242f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4242f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4242fc:
    // 0x4242fc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4242fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_424300:
    // 0x424300: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x424300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_424304:
    // 0x424304: 0xc0a7a88  jal         func_29EA20
label_424308:
    if (ctx->pc == 0x424308u) {
        ctx->pc = 0x424308u;
            // 0x424308: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x42430Cu;
        goto label_42430c;
    }
    ctx->pc = 0x424304u;
    SET_GPR_U32(ctx, 31, 0x42430Cu);
    ctx->pc = 0x424308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424304u;
            // 0x424308: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42430Cu; }
        if (ctx->pc != 0x42430Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42430Cu; }
        if (ctx->pc != 0x42430Cu) { return; }
    }
    ctx->pc = 0x42430Cu;
label_42430c:
    // 0x42430c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x42430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_424310:
    // 0x424310: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x424310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424314:
    // 0x424314: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_424318:
    if (ctx->pc == 0x424318u) {
        ctx->pc = 0x424318u;
            // 0x424318: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42431Cu;
        goto label_42431c;
    }
    ctx->pc = 0x424314u;
    {
        const bool branch_taken_0x424314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x424318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424314u;
            // 0x424318: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424314) {
            ctx->pc = 0x424338u;
            goto label_424338;
        }
    }
    ctx->pc = 0x42431Cu;
label_42431c:
    // 0x42431c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_424320:
    // 0x424320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x424320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_424324:
    // 0x424324: 0xc0869d0  jal         func_21A740
label_424328:
    if (ctx->pc == 0x424328u) {
        ctx->pc = 0x424328u;
            // 0x424328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42432Cu;
        goto label_42432c;
    }
    ctx->pc = 0x424324u;
    SET_GPR_U32(ctx, 31, 0x42432Cu);
    ctx->pc = 0x424328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424324u;
            // 0x424328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42432Cu; }
        if (ctx->pc != 0x42432Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42432Cu; }
        if (ctx->pc != 0x42432Cu) { return; }
    }
    ctx->pc = 0x42432Cu;
label_42432c:
    // 0x42432c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42432cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_424330:
    // 0x424330: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x424330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_424334:
    // 0x424334: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x424334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_424338:
    // 0x424338: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x424338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_42433c:
    // 0x42433c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42433cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_424340:
    // 0x424340: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x424340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_424344:
    // 0x424344: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x424344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_424348:
    // 0x424348: 0xc08c650  jal         func_231940
label_42434c:
    if (ctx->pc == 0x42434Cu) {
        ctx->pc = 0x42434Cu;
            // 0x42434c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424350u;
        goto label_424350;
    }
    ctx->pc = 0x424348u;
    SET_GPR_U32(ctx, 31, 0x424350u);
    ctx->pc = 0x42434Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424348u;
            // 0x42434c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424350u; }
        if (ctx->pc != 0x424350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424350u; }
        if (ctx->pc != 0x424350u) { return; }
    }
    ctx->pc = 0x424350u;
label_424350:
    // 0x424350: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x424350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424354:
    // 0x424354: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x424354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_424358:
    // 0x424358: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x424358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_42435c:
    // 0x42435c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x42435cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_424360:
    // 0x424360: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x424360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_424364:
    // 0x424364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x424364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_424368:
    // 0x424368: 0xae46008c  sw          $a2, 0x8C($s2)
    ctx->pc = 0x424368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 6));
label_42436c:
    // 0x42436c: 0xae450070  sw          $a1, 0x70($s2)
    ctx->pc = 0x42436cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 5));
label_424370:
    // 0x424370: 0xae430078  sw          $v1, 0x78($s2)
    ctx->pc = 0x424370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
label_424374:
    // 0x424374: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x424374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
label_424378:
    // 0x424378: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x424378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_42437c:
    // 0x42437c: 0xc040180  jal         func_100600
label_424380:
    if (ctx->pc == 0x424380u) {
        ctx->pc = 0x424380u;
            // 0x424380: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x424384u;
        goto label_424384;
    }
    ctx->pc = 0x42437Cu;
    SET_GPR_U32(ctx, 31, 0x424384u);
    ctx->pc = 0x424380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42437Cu;
            // 0x424380: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424384u; }
        if (ctx->pc != 0x424384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424384u; }
        if (ctx->pc != 0x424384u) { return; }
    }
    ctx->pc = 0x424384u;
label_424384:
    // 0x424384: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_424388:
    if (ctx->pc == 0x424388u) {
        ctx->pc = 0x424388u;
            // 0x424388: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x42438Cu;
        goto label_42438c;
    }
    ctx->pc = 0x424384u;
    {
        const bool branch_taken_0x424384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424384) {
            ctx->pc = 0x424388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424384u;
            // 0x424388: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4243F0u;
            goto label_4243f0;
        }
    }
    ctx->pc = 0x42438Cu;
label_42438c:
    // 0x42438c: 0x8e080968  lw          $t0, 0x968($s0)
    ctx->pc = 0x42438cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_424390:
    // 0x424390: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x424390u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_424394:
    // 0x424394: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x424394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_424398:
    // 0x424398: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x424398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42439c:
    // 0x42439c: 0x24e7c99c  addiu       $a3, $a3, -0x3664
    ctx->pc = 0x42439cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953372));
label_4243a0:
    // 0x4243a0: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x4243a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4243a4:
    // 0x4243a4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4243a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4243a8:
    // 0x4243a8: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x4243a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_4243ac:
    // 0x4243ac: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4243acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4243b0:
    // 0x4243b0: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4243b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4243b4:
    // 0x4243b4: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x4243b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4243b8:
    // 0x4243b8: 0x2463bc00  addiu       $v1, $v1, -0x4400
    ctx->pc = 0x4243b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949888));
label_4243bc:
    // 0x4243bc: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x4243bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_4243c0:
    // 0x4243c0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4243c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_4243c4:
    // 0x4243c4: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x4243c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_4243c8:
    // 0x4243c8: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4243c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_4243cc:
    // 0x4243cc: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x4243ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_4243d0:
    // 0x4243d0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x4243d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_4243d4:
    // 0x4243d4: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x4243d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_4243d8:
    // 0x4243d8: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x4243d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_4243dc:
    // 0x4243dc: 0xac47003c  sw          $a3, 0x3C($v0)
    ctx->pc = 0x4243dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 7));
label_4243e0:
    // 0x4243e0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x4243e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_4243e4:
    // 0x4243e4: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x4243e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_4243e8:
    // 0x4243e8: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x4243e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
label_4243ec:
    // 0x4243ec: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x4243ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_4243f0:
    // 0x4243f0: 0x26440148  addiu       $a0, $s2, 0x148
    ctx->pc = 0x4243f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
label_4243f4:
    // 0x4243f4: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x4243f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_4243f8:
    // 0x4243f8: 0x2402f9fb  addiu       $v0, $zero, -0x605
    ctx->pc = 0x4243f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965755));
label_4243fc:
    // 0x4243fc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x4243fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_424400:
    // 0x424400: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x424400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_424404:
    // 0x424404: 0x34420604  ori         $v0, $v0, 0x604
    ctx->pc = 0x424404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
label_424408:
    // 0x424408: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x424408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_42440c:
    // 0x42440c: 0xa2400064  sb          $zero, 0x64($s2)
    ctx->pc = 0x42440cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 0));
label_424410:
    // 0x424410: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x424410u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
label_424414:
    // 0x424414: 0xa2400066  sb          $zero, 0x66($s2)
    ctx->pc = 0x424414u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 0));
label_424418:
    // 0x424418: 0xa2400067  sb          $zero, 0x67($s2)
    ctx->pc = 0x424418u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 0));
label_42441c:
    // 0x42441c: 0xa2400068  sb          $zero, 0x68($s2)
    ctx->pc = 0x42441cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
label_424420:
    // 0x424420: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x424420u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_424424:
    // 0x424424: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x424424u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_424428:
    // 0x424428: 0xa240006b  sb          $zero, 0x6B($s2)
    ctx->pc = 0x424428u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 0));
label_42442c:
    // 0x42442c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x42442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424430:
    // 0x424430: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x424430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_424434:
    // 0x424434: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x424434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424438:
    // 0x424438: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x424438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_42443c:
    // 0x42443c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x42443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424440:
    // 0x424440: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x424440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_424444:
    // 0x424444: 0xae520154  sw          $s2, 0x154($s2)
    ctx->pc = 0x424444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 18));
label_424448:
    // 0x424448: 0x8e4700d0  lw          $a3, 0xD0($s2)
    ctx->pc = 0x424448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_42444c:
    // 0x42444c: 0xc0d37ec  jal         func_34DFB0
label_424450:
    if (ctx->pc == 0x424450u) {
        ctx->pc = 0x424450u;
            // 0x424450: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x424454u;
        goto label_424454;
    }
    ctx->pc = 0x42444Cu;
    SET_GPR_U32(ctx, 31, 0x424454u);
    ctx->pc = 0x424450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42444Cu;
            // 0x424450: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424454u; }
        if (ctx->pc != 0x424454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424454u; }
        if (ctx->pc != 0x424454u) { return; }
    }
    ctx->pc = 0x424454u;
label_424454:
    // 0x424454: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x424454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_424458:
    // 0x424458: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x424458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_42445c:
    // 0x42445c: 0xc040180  jal         func_100600
label_424460:
    if (ctx->pc == 0x424460u) {
        ctx->pc = 0x424460u;
            // 0x424460: 0xa242004c  sb          $v0, 0x4C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x424464u;
        goto label_424464;
    }
    ctx->pc = 0x42445Cu;
    SET_GPR_U32(ctx, 31, 0x424464u);
    ctx->pc = 0x424460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42445Cu;
            // 0x424460: 0xa242004c  sb          $v0, 0x4C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424464u; }
        if (ctx->pc != 0x424464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424464u; }
        if (ctx->pc != 0x424464u) { return; }
    }
    ctx->pc = 0x424464u;
label_424464:
    // 0x424464: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x424464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424468:
    // 0x424468: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_42446c:
    if (ctx->pc == 0x42446Cu) {
        ctx->pc = 0x42446Cu;
            // 0x42446c: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x424470u;
        goto label_424470;
    }
    ctx->pc = 0x424468u;
    {
        const bool branch_taken_0x424468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x424468) {
            ctx->pc = 0x42446Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424468u;
            // 0x42446c: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4244A8u;
            goto label_4244a8;
        }
    }
    ctx->pc = 0x424470u;
label_424470:
    // 0x424470: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x424470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_424474:
    // 0x424474: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x424474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_424478:
    // 0x424478: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x424478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_42447c:
    // 0x42447c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x42447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_424480:
    // 0x424480: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x424480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_424484:
    // 0x424484: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x424484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_424488:
    // 0x424488: 0xc040138  jal         func_1004E0
label_42448c:
    if (ctx->pc == 0x42448Cu) {
        ctx->pc = 0x42448Cu;
            // 0x42448c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x424490u;
        goto label_424490;
    }
    ctx->pc = 0x424488u;
    SET_GPR_U32(ctx, 31, 0x424490u);
    ctx->pc = 0x42448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424488u;
            // 0x42448c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424490u; }
        if (ctx->pc != 0x424490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424490u; }
        if (ctx->pc != 0x424490u) { return; }
    }
    ctx->pc = 0x424490u;
label_424490:
    // 0x424490: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x424490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_424494:
    // 0x424494: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x424494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_424498:
    // 0x424498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x424498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42449c:
    // 0x42449c: 0xc04a576  jal         func_1295D8
label_4244a0:
    if (ctx->pc == 0x4244A0u) {
        ctx->pc = 0x4244A0u;
            // 0x4244a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4244A4u;
        goto label_4244a4;
    }
    ctx->pc = 0x42449Cu;
    SET_GPR_U32(ctx, 31, 0x4244A4u);
    ctx->pc = 0x4244A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42449Cu;
            // 0x4244a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4244A4u; }
        if (ctx->pc != 0x4244A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4244A4u; }
        if (ctx->pc != 0x4244A4u) { return; }
    }
    ctx->pc = 0x4244A4u;
label_4244a4:
    // 0x4244a4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4244a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4244a8:
    // 0x4244a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4244a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4244ac:
    // 0x4244ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4244acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4244b0:
    // 0x4244b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4244b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4244b4:
    // 0x4244b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4244b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4244b8:
    // 0x4244b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4244b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4244bc:
    // 0x4244bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4244bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4244c0:
    // 0x4244c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4244c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4244c4:
    // 0x4244c4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4244c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4244c8:
    // 0x4244c8: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x4244c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_4244cc:
    // 0x4244cc: 0xc122cd8  jal         func_48B360
label_4244d0:
    if (ctx->pc == 0x4244D0u) {
        ctx->pc = 0x4244D0u;
            // 0x4244d0: 0xae50017c  sw          $s0, 0x17C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 16));
        ctx->pc = 0x4244D4u;
        goto label_4244d4;
    }
    ctx->pc = 0x4244CCu;
    SET_GPR_U32(ctx, 31, 0x4244D4u);
    ctx->pc = 0x4244D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4244CCu;
            // 0x4244d0: 0xae50017c  sw          $s0, 0x17C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4244D4u; }
        if (ctx->pc != 0x4244D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4244D4u; }
        if (ctx->pc != 0x4244D4u) { return; }
    }
    ctx->pc = 0x4244D4u;
label_4244d4:
    // 0x4244d4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4244d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4244d8:
    // 0x4244d8: 0x8e44017c  lw          $a0, 0x17C($s2)
    ctx->pc = 0x4244d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
label_4244dc:
    // 0x4244dc: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x4244dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4244e0:
    // 0x4244e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4244e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4244e4:
    // 0x4244e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4244e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4244e8:
    // 0x4244e8: 0x24061aae  addiu       $a2, $zero, 0x1AAE
    ctx->pc = 0x4244e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6830));
label_4244ec:
    // 0x4244ec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4244ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4244f0:
    // 0x4244f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4244f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4244f4:
    // 0x4244f4: 0xc122cd8  jal         func_48B360
label_4244f8:
    if (ctx->pc == 0x4244F8u) {
        ctx->pc = 0x4244F8u;
            // 0x4244f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4244FCu;
        goto label_4244fc;
    }
    ctx->pc = 0x4244F4u;
    SET_GPR_U32(ctx, 31, 0x4244FCu);
    ctx->pc = 0x4244F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4244F4u;
            // 0x4244f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4244FCu; }
        if (ctx->pc != 0x4244FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4244FCu; }
        if (ctx->pc != 0x4244FCu) { return; }
    }
    ctx->pc = 0x4244FCu;
label_4244fc:
    // 0x4244fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4244fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_424500:
    // 0x424500: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x424500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_424504:
    // 0x424504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x424504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_424508:
    // 0x424508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x424508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42450c:
    // 0x42450c: 0x3e00008  jr          $ra
label_424510:
    if (ctx->pc == 0x424510u) {
        ctx->pc = 0x424510u;
            // 0x424510: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x424514u;
        goto label_424514;
    }
    ctx->pc = 0x42450Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42450Cu;
            // 0x424510: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424514u;
label_424514:
    // 0x424514: 0x0  nop
    ctx->pc = 0x424514u;
    // NOP
label_424518:
    // 0x424518: 0x0  nop
    ctx->pc = 0x424518u;
    // NOP
label_42451c:
    // 0x42451c: 0x0  nop
    ctx->pc = 0x42451cu;
    // NOP
label_424520:
    // 0x424520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x424520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_424524:
    // 0x424524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x424524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_424528:
    // 0x424528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x424528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42452c:
    // 0x42452c: 0xc0aeebc  jal         func_2BBAF0
label_424530:
    if (ctx->pc == 0x424530u) {
        ctx->pc = 0x424530u;
            // 0x424530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424534u;
        goto label_424534;
    }
    ctx->pc = 0x42452Cu;
    SET_GPR_U32(ctx, 31, 0x424534u);
    ctx->pc = 0x424530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42452Cu;
            // 0x424530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424534u; }
        if (ctx->pc != 0x424534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424534u; }
        if (ctx->pc != 0x424534u) { return; }
    }
    ctx->pc = 0x424534u;
label_424534:
    // 0x424534: 0xc0aeeb4  jal         func_2BBAD0
label_424538:
    if (ctx->pc == 0x424538u) {
        ctx->pc = 0x424538u;
            // 0x424538: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x42453Cu;
        goto label_42453c;
    }
    ctx->pc = 0x424534u;
    SET_GPR_U32(ctx, 31, 0x42453Cu);
    ctx->pc = 0x424538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424534u;
            // 0x424538: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42453Cu; }
        if (ctx->pc != 0x42453Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42453Cu; }
        if (ctx->pc != 0x42453Cu) { return; }
    }
    ctx->pc = 0x42453Cu;
label_42453c:
    // 0x42453c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42453cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_424540:
    // 0x424540: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x424540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_424544:
    // 0x424544: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x424544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_424548:
    // 0x424548: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x424548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_42454c:
    // 0x42454c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42454cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_424550:
    // 0x424550: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x424550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_424554:
    // 0x424554: 0xc0aeea4  jal         func_2BBA90
label_424558:
    if (ctx->pc == 0x424558u) {
        ctx->pc = 0x424558u;
            // 0x424558: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x42455Cu;
        goto label_42455c;
    }
    ctx->pc = 0x424554u;
    SET_GPR_U32(ctx, 31, 0x42455Cu);
    ctx->pc = 0x424558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424554u;
            // 0x424558: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42455Cu; }
        if (ctx->pc != 0x42455Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42455Cu; }
        if (ctx->pc != 0x42455Cu) { return; }
    }
    ctx->pc = 0x42455Cu;
label_42455c:
    // 0x42455c: 0xc0aee8c  jal         func_2BBA30
label_424560:
    if (ctx->pc == 0x424560u) {
        ctx->pc = 0x424560u;
            // 0x424560: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x424564u;
        goto label_424564;
    }
    ctx->pc = 0x42455Cu;
    SET_GPR_U32(ctx, 31, 0x424564u);
    ctx->pc = 0x424560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42455Cu;
            // 0x424560: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424564u; }
        if (ctx->pc != 0x424564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424564u; }
        if (ctx->pc != 0x424564u) { return; }
    }
    ctx->pc = 0x424564u;
label_424564:
    // 0x424564: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x424564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_424568:
    // 0x424568: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x424568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_42456c:
    // 0x42456c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x42456cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_424570:
    // 0x424570: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x424570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_424574:
    // 0x424574: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x424574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_424578:
    // 0x424578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x424578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42457c:
    // 0x42457c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x42457cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_424580:
    // 0x424580: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x424580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_424584:
    // 0x424584: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x424584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_424588:
    // 0x424588: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x424588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_42458c:
    // 0x42458c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x42458cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_424590:
    // 0x424590: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x424590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_424594:
    // 0x424594: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x424594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_424598:
    // 0x424598: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x424598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_42459c:
    // 0x42459c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x42459cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_4245a0:
    // 0x4245a0: 0xc0775b8  jal         func_1DD6E0
label_4245a4:
    if (ctx->pc == 0x4245A4u) {
        ctx->pc = 0x4245A4u;
            // 0x4245a4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4245A8u;
        goto label_4245a8;
    }
    ctx->pc = 0x4245A0u;
    SET_GPR_U32(ctx, 31, 0x4245A8u);
    ctx->pc = 0x4245A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4245A0u;
            // 0x4245a4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4245A8u; }
        if (ctx->pc != 0x4245A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4245A8u; }
        if (ctx->pc != 0x4245A8u) { return; }
    }
    ctx->pc = 0x4245A8u;
label_4245a8:
    // 0x4245a8: 0xc077314  jal         func_1DCC50
label_4245ac:
    if (ctx->pc == 0x4245ACu) {
        ctx->pc = 0x4245ACu;
            // 0x4245ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4245B0u;
        goto label_4245b0;
    }
    ctx->pc = 0x4245A8u;
    SET_GPR_U32(ctx, 31, 0x4245B0u);
    ctx->pc = 0x4245ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4245A8u;
            // 0x4245ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4245B0u; }
        if (ctx->pc != 0x4245B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4245B0u; }
        if (ctx->pc != 0x4245B0u) { return; }
    }
    ctx->pc = 0x4245B0u;
label_4245b0:
    // 0x4245b0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4245b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4245b4:
    // 0x4245b4: 0x3c0c006b  lui         $t4, 0x6B
    ctx->pc = 0x4245b4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)107 << 16));
label_4245b8:
    // 0x4245b8: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x4245b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_4245bc:
    // 0x4245bc: 0x3c0b006b  lui         $t3, 0x6B
    ctx->pc = 0x4245bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)107 << 16));
label_4245c0:
    // 0x4245c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4245c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4245c4:
    // 0x4245c4: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x4245c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_4245c8:
    // 0x4245c8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4245c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4245cc:
    // 0x4245cc: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x4245ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_4245d0:
    // 0x4245d0: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x4245d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_4245d4:
    // 0x4245d4: 0x258cbcd0  addiu       $t4, $t4, -0x4330
    ctx->pc = 0x4245d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294950096));
label_4245d8:
    // 0x4245d8: 0x256bbd10  addiu       $t3, $t3, -0x42F0
    ctx->pc = 0x4245d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294950160));
label_4245dc:
    // 0x4245dc: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x4245dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4245e0:
    // 0x4245e0: 0x3c023ada  lui         $v0, 0x3ADA
    ctx->pc = 0x4245e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15066 << 16));
label_4245e4:
    // 0x4245e4: 0x2508cfe0  addiu       $t0, $t0, -0x3020
    ctx->pc = 0x4245e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954976));
label_4245e8:
    // 0x4245e8: 0x646818  mult        $t5, $v1, $a0
    ctx->pc = 0x4245e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_4245ec:
    // 0x4245ec: 0x3449740e  ori         $t1, $v0, 0x740E
    ctx->pc = 0x4245ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
label_4245f0:
    // 0x4245f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4245f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4245f4:
    // 0x4245f4: 0x24e724a0  addiu       $a3, $a3, 0x24A0
    ctx->pc = 0x4245f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9376));
label_4245f8:
    // 0x4245f8: 0x2442bc30  addiu       $v0, $v0, -0x43D0
    ctx->pc = 0x4245f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949936));
label_4245fc:
    // 0x4245fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4245fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424600:
    // 0x424600: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x424600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_424604:
    // 0x424604: 0xae0d00c8  sw          $t5, 0xC8($s0)
    ctx->pc = 0x424604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 13));
label_424608:
    // 0x424608: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x424608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42460c:
    // 0x42460c: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x42460cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
label_424610:
    // 0x424610: 0x24632460  addiu       $v1, $v1, 0x2460
    ctx->pc = 0x424610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9312));
label_424614:
    // 0x424614: 0xae0b0054  sw          $t3, 0x54($s0)
    ctx->pc = 0x424614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 11));
label_424618:
    // 0x424618: 0x2604015c  addiu       $a0, $s0, 0x15C
    ctx->pc = 0x424618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
label_42461c:
    // 0x42461c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x42461cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_424620:
    // 0x424620: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x424620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_424624:
    // 0x424624: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x424624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_424628:
    // 0x424628: 0xa20000f4  sb          $zero, 0xF4($s0)
    ctx->pc = 0x424628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 244), (uint8_t)GPR_U32(ctx, 0));
label_42462c:
    // 0x42462c: 0xa20000f6  sb          $zero, 0xF6($s0)
    ctx->pc = 0x42462cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 0));
label_424630:
    // 0x424630: 0xae0a010c  sw          $t2, 0x10C($s0)
    ctx->pc = 0x424630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 10));
label_424634:
    // 0x424634: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x424634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_424638:
    // 0x424638: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x424638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
label_42463c:
    // 0x42463c: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x42463cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
label_424640:
    // 0x424640: 0xae09011c  sw          $t1, 0x11C($s0)
    ctx->pc = 0x424640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 9));
label_424644:
    // 0x424644: 0xae080148  sw          $t0, 0x148($s0)
    ctx->pc = 0x424644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 8));
label_424648:
    // 0x424648: 0xae070148  sw          $a3, 0x148($s0)
    ctx->pc = 0x424648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 7));
label_42464c:
    // 0x42464c: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x42464cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
label_424650:
    // 0x424650: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x424650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
label_424654:
    // 0x424654: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x424654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_424658:
    // 0x424658: 0xa2000150  sb          $zero, 0x150($s0)
    ctx->pc = 0x424658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 336), (uint8_t)GPR_U32(ctx, 0));
label_42465c:
    // 0x42465c: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x42465cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
label_424660:
    // 0x424660: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x424660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_424664:
    // 0x424664: 0xa600016c  sh          $zero, 0x16C($s0)
    ctx->pc = 0x424664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 364), (uint16_t)GPR_U32(ctx, 0));
label_424668:
    // 0x424668: 0xa600016e  sh          $zero, 0x16E($s0)
    ctx->pc = 0x424668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 366), (uint16_t)GPR_U32(ctx, 0));
label_42466c:
    // 0x42466c: 0xc04a576  jal         func_1295D8
label_424670:
    if (ctx->pc == 0x424670u) {
        ctx->pc = 0x424670u;
            // 0x424670: 0xa6000170  sh          $zero, 0x170($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 368), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x424674u;
        goto label_424674;
    }
    ctx->pc = 0x42466Cu;
    SET_GPR_U32(ctx, 31, 0x424674u);
    ctx->pc = 0x424670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42466Cu;
            // 0x424670: 0xa6000170  sh          $zero, 0x170($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 368), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424674u; }
        if (ctx->pc != 0x424674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424674u; }
        if (ctx->pc != 0x424674u) { return; }
    }
    ctx->pc = 0x424674u;
label_424674:
    // 0x424674: 0xae00017c  sw          $zero, 0x17C($s0)
    ctx->pc = 0x424674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
label_424678:
    // 0x424678: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x424678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42467c:
    // 0x42467c: 0xa2000180  sb          $zero, 0x180($s0)
    ctx->pc = 0x42467cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 384), (uint8_t)GPR_U32(ctx, 0));
label_424680:
    // 0x424680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x424680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424684:
    // 0x424684: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x424684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
label_424688:
    // 0x424688: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x424688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_42468c:
    // 0x42468c: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x42468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_424690:
    // 0x424690: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_424694:
    if (ctx->pc == 0x424694u) {
        ctx->pc = 0x424694u;
            // 0x424694: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->pc = 0x424698u;
        goto label_424698;
    }
    ctx->pc = 0x424690u;
    {
        const bool branch_taken_0x424690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x424690) {
            ctx->pc = 0x424694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424690u;
            // 0x424694: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4246A8u;
            goto label_4246a8;
        }
    }
    ctx->pc = 0x424698u;
label_424698:
    // 0x424698: 0x240204b0  addiu       $v0, $zero, 0x4B0
    ctx->pc = 0x424698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_42469c:
    // 0x42469c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x42469cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_4246a0:
    // 0x4246a0: 0xa20300f6  sb          $v1, 0xF6($s0)
    ctx->pc = 0x4246a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 3));
label_4246a4:
    // 0x4246a4: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x4246a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_4246a8:
    // 0x4246a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4246a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4246ac:
    // 0x4246ac: 0xc04a576  jal         func_1295D8
label_4246b0:
    if (ctx->pc == 0x4246B0u) {
        ctx->pc = 0x4246B0u;
            // 0x4246b0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4246B4u;
        goto label_4246b4;
    }
    ctx->pc = 0x4246ACu;
    SET_GPR_U32(ctx, 31, 0x4246B4u);
    ctx->pc = 0x4246B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4246ACu;
            // 0x4246b0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4246B4u; }
        if (ctx->pc != 0x4246B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4246B4u; }
        if (ctx->pc != 0x4246B4u) { return; }
    }
    ctx->pc = 0x4246B4u;
label_4246b4:
    // 0x4246b4: 0x26040134  addiu       $a0, $s0, 0x134
    ctx->pc = 0x4246b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
label_4246b8:
    // 0x4246b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4246b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4246bc:
    // 0x4246bc: 0xc04a576  jal         func_1295D8
label_4246c0:
    if (ctx->pc == 0x4246C0u) {
        ctx->pc = 0x4246C0u;
            // 0x4246c0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4246C4u;
        goto label_4246c4;
    }
    ctx->pc = 0x4246BCu;
    SET_GPR_U32(ctx, 31, 0x4246C4u);
    ctx->pc = 0x4246C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4246BCu;
            // 0x4246c0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4246C4u; }
        if (ctx->pc != 0x4246C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4246C4u; }
        if (ctx->pc != 0x4246C4u) { return; }
    }
    ctx->pc = 0x4246C4u;
label_4246c4:
    // 0x4246c4: 0xc040180  jal         func_100600
label_4246c8:
    if (ctx->pc == 0x4246C8u) {
        ctx->pc = 0x4246C8u;
            // 0x4246c8: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->pc = 0x4246CCu;
        goto label_4246cc;
    }
    ctx->pc = 0x4246C4u;
    SET_GPR_U32(ctx, 31, 0x4246CCu);
    ctx->pc = 0x4246C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4246C4u;
            // 0x4246c8: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4246CCu; }
        if (ctx->pc != 0x4246CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4246CCu; }
        if (ctx->pc != 0x4246CCu) { return; }
    }
    ctx->pc = 0x4246CCu;
label_4246cc:
    // 0x4246cc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_4246d0:
    if (ctx->pc == 0x4246D0u) {
        ctx->pc = 0x4246D0u;
            // 0x4246d0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->pc = 0x4246D4u;
        goto label_4246d4;
    }
    ctx->pc = 0x4246CCu;
    {
        const bool branch_taken_0x4246cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4246cc) {
            ctx->pc = 0x4246D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4246CCu;
            // 0x4246d0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4246F8u;
            goto label_4246f8;
        }
    }
    ctx->pc = 0x4246D4u;
label_4246d4:
    // 0x4246d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4246d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4246d8:
    // 0x4246d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4246d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4246dc:
    // 0x4246dc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4246dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4246e0:
    // 0x4246e0: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x4246e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_4246e4:
    // 0x4246e4: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4246e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4246e8:
    // 0x4246e8: 0x26080114  addiu       $t0, $s0, 0x114
    ctx->pc = 0x4246e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
label_4246ec:
    // 0x4246ec: 0xc1337c4  jal         func_4CDF10
label_4246f0:
    if (ctx->pc == 0x4246F0u) {
        ctx->pc = 0x4246F0u;
            // 0x4246f0: 0x3449d090  ori         $t1, $v0, 0xD090 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53392);
        ctx->pc = 0x4246F4u;
        goto label_4246f4;
    }
    ctx->pc = 0x4246ECu;
    SET_GPR_U32(ctx, 31, 0x4246F4u);
    ctx->pc = 0x4246F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4246ECu;
            // 0x4246f0: 0x3449d090  ori         $t1, $v0, 0xD090 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CDF10u;
    if (runtime->hasFunction(0x4CDF10u)) {
        auto targetFn = runtime->lookupFunction(0x4CDF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4246F4u; }
        if (ctx->pc != 0x4246F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CDF10_0x4cdf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4246F4u; }
        if (ctx->pc != 0x4246F4u) { return; }
    }
    ctx->pc = 0x4246F4u;
label_4246f4:
    // 0x4246f4: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x4246f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_4246f8:
    // 0x4246f8: 0xc040180  jal         func_100600
label_4246fc:
    if (ctx->pc == 0x4246FCu) {
        ctx->pc = 0x424700u;
        goto label_424700;
    }
    ctx->pc = 0x4246F8u;
    SET_GPR_U32(ctx, 31, 0x424700u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424700u; }
        if (ctx->pc != 0x424700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424700u; }
        if (ctx->pc != 0x424700u) { return; }
    }
    ctx->pc = 0x424700u;
label_424700:
    // 0x424700: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_424704:
    if (ctx->pc == 0x424704u) {
        ctx->pc = 0x424704u;
            // 0x424704: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x424708u;
        goto label_424708;
    }
    ctx->pc = 0x424700u;
    {
        const bool branch_taken_0x424700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424700) {
            ctx->pc = 0x424704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424700u;
            // 0x424704: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42472Cu;
            goto label_42472c;
        }
    }
    ctx->pc = 0x424708u;
label_424708:
    // 0x424708: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x424708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42470c:
    // 0x42470c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42470cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424710:
    // 0x424710: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x424710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_424714:
    // 0x424714: 0x26060124  addiu       $a2, $s0, 0x124
    ctx->pc = 0x424714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_424718:
    // 0x424718: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x424718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_42471c:
    // 0x42471c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42471cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424720:
    // 0x424720: 0xc1337c4  jal         func_4CDF10
label_424724:
    if (ctx->pc == 0x424724u) {
        ctx->pc = 0x424724u;
            // 0x424724: 0x3449d090  ori         $t1, $v0, 0xD090 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53392);
        ctx->pc = 0x424728u;
        goto label_424728;
    }
    ctx->pc = 0x424720u;
    SET_GPR_U32(ctx, 31, 0x424728u);
    ctx->pc = 0x424724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424720u;
            // 0x424724: 0x3449d090  ori         $t1, $v0, 0xD090 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CDF10u;
    if (runtime->hasFunction(0x4CDF10u)) {
        auto targetFn = runtime->lookupFunction(0x4CDF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424728u; }
        if (ctx->pc != 0x424728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CDF10_0x4cdf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424728u; }
        if (ctx->pc != 0x424728u) { return; }
    }
    ctx->pc = 0x424728u;
label_424728:
    // 0x424728: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x424728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_42472c:
    // 0x42472c: 0xc040180  jal         func_100600
label_424730:
    if (ctx->pc == 0x424730u) {
        ctx->pc = 0x424730u;
            // 0x424730: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->pc = 0x424734u;
        goto label_424734;
    }
    ctx->pc = 0x42472Cu;
    SET_GPR_U32(ctx, 31, 0x424734u);
    ctx->pc = 0x424730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42472Cu;
            // 0x424730: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424734u; }
        if (ctx->pc != 0x424734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424734u; }
        if (ctx->pc != 0x424734u) { return; }
    }
    ctx->pc = 0x424734u;
label_424734:
    // 0x424734: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_424738:
    if (ctx->pc == 0x424738u) {
        ctx->pc = 0x424738u;
            // 0x424738: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->pc = 0x42473Cu;
        goto label_42473c;
    }
    ctx->pc = 0x424734u;
    {
        const bool branch_taken_0x424734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424734) {
            ctx->pc = 0x424738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424734u;
            // 0x424738: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424760u;
            goto label_424760;
        }
    }
    ctx->pc = 0x42473Cu;
label_42473c:
    // 0x42473c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42473cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424740:
    // 0x424740: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x424740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_424744:
    // 0x424744: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x424744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_424748:
    // 0x424748: 0x26060130  addiu       $a2, $s0, 0x130
    ctx->pc = 0x424748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_42474c:
    // 0x42474c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x42474cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_424750:
    // 0x424750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x424750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424754:
    // 0x424754: 0xc1337c4  jal         func_4CDF10
label_424758:
    if (ctx->pc == 0x424758u) {
        ctx->pc = 0x424758u;
            // 0x424758: 0x3449d090  ori         $t1, $v0, 0xD090 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53392);
        ctx->pc = 0x42475Cu;
        goto label_42475c;
    }
    ctx->pc = 0x424754u;
    SET_GPR_U32(ctx, 31, 0x42475Cu);
    ctx->pc = 0x424758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424754u;
            // 0x424758: 0x3449d090  ori         $t1, $v0, 0xD090 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CDF10u;
    if (runtime->hasFunction(0x4CDF10u)) {
        auto targetFn = runtime->lookupFunction(0x4CDF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42475Cu; }
        if (ctx->pc != 0x42475Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CDF10_0x4cdf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42475Cu; }
        if (ctx->pc != 0x42475Cu) { return; }
    }
    ctx->pc = 0x42475Cu;
label_42475c:
    // 0x42475c: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x42475cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_424760:
    // 0x424760: 0xc040180  jal         func_100600
label_424764:
    if (ctx->pc == 0x424764u) {
        ctx->pc = 0x424768u;
        goto label_424768;
    }
    ctx->pc = 0x424760u;
    SET_GPR_U32(ctx, 31, 0x424768u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424768u; }
        if (ctx->pc != 0x424768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424768u; }
        if (ctx->pc != 0x424768u) { return; }
    }
    ctx->pc = 0x424768u;
label_424768:
    // 0x424768: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_42476c:
    if (ctx->pc == 0x42476Cu) {
        ctx->pc = 0x42476Cu;
            // 0x42476c: 0x920200f6  lbu         $v0, 0xF6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
        ctx->pc = 0x424770u;
        goto label_424770;
    }
    ctx->pc = 0x424768u;
    {
        const bool branch_taken_0x424768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424768) {
            ctx->pc = 0x42476Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424768u;
            // 0x42476c: 0x920200f6  lbu         $v0, 0xF6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424794u;
            goto label_424794;
        }
    }
    ctx->pc = 0x424770u;
label_424770:
    // 0x424770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x424770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424774:
    // 0x424774: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x424774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_424778:
    // 0x424778: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x424778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_42477c:
    // 0x42477c: 0x26060128  addiu       $a2, $s0, 0x128
    ctx->pc = 0x42477cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
label_424780:
    // 0x424780: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x424780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_424784:
    // 0x424784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x424784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424788:
    // 0x424788: 0xc1337c4  jal         func_4CDF10
label_42478c:
    if (ctx->pc == 0x42478Cu) {
        ctx->pc = 0x42478Cu;
            // 0x42478c: 0x3449d090  ori         $t1, $v0, 0xD090 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53392);
        ctx->pc = 0x424790u;
        goto label_424790;
    }
    ctx->pc = 0x424788u;
    SET_GPR_U32(ctx, 31, 0x424790u);
    ctx->pc = 0x42478Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424788u;
            // 0x42478c: 0x3449d090  ori         $t1, $v0, 0xD090 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CDF10u;
    if (runtime->hasFunction(0x4CDF10u)) {
        auto targetFn = runtime->lookupFunction(0x4CDF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424790u; }
        if (ctx->pc != 0x424790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CDF10_0x4cdf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424790u; }
        if (ctx->pc != 0x424790u) { return; }
    }
    ctx->pc = 0x424790u;
label_424790:
    // 0x424790: 0x920200f6  lbu         $v0, 0xF6($s0)
    ctx->pc = 0x424790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
label_424794:
    // 0x424794: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_424798:
    if (ctx->pc == 0x424798u) {
        ctx->pc = 0x424798u;
            // 0x424798: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
        ctx->pc = 0x42479Cu;
        goto label_42479c;
    }
    ctx->pc = 0x424794u;
    {
        const bool branch_taken_0x424794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424794) {
            ctx->pc = 0x424798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424794u;
            // 0x424798: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4247E0u;
            goto label_4247e0;
        }
    }
    ctx->pc = 0x42479Cu;
label_42479c:
    // 0x42479c: 0xc040180  jal         func_100600
label_4247a0:
    if (ctx->pc == 0x4247A0u) {
        ctx->pc = 0x4247A0u;
            // 0x4247a0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->pc = 0x4247A4u;
        goto label_4247a4;
    }
    ctx->pc = 0x42479Cu;
    SET_GPR_U32(ctx, 31, 0x4247A4u);
    ctx->pc = 0x4247A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42479Cu;
            // 0x4247a0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4247A4u; }
        if (ctx->pc != 0x4247A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4247A4u; }
        if (ctx->pc != 0x4247A4u) { return; }
    }
    ctx->pc = 0x4247A4u;
label_4247a4:
    // 0x4247a4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_4247a8:
    if (ctx->pc == 0x4247A8u) {
        ctx->pc = 0x4247A8u;
            // 0x4247a8: 0xae0200dc  sw          $v0, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
        ctx->pc = 0x4247ACu;
        goto label_4247ac;
    }
    ctx->pc = 0x4247A4u;
    {
        const bool branch_taken_0x4247a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4247a4) {
            ctx->pc = 0x4247A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4247A4u;
            // 0x4247a8: 0xae0200dc  sw          $v0, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4247D0u;
            goto label_4247d0;
        }
    }
    ctx->pc = 0x4247ACu;
label_4247ac:
    // 0x4247ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4247acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4247b0:
    // 0x4247b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4247b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4247b4:
    // 0x4247b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4247b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4247b8:
    // 0x4247b8: 0x2606012c  addiu       $a2, $s0, 0x12C
    ctx->pc = 0x4247b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
label_4247bc:
    // 0x4247bc: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4247bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4247c0:
    // 0x4247c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4247c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4247c4:
    // 0x4247c4: 0xc1337c4  jal         func_4CDF10
label_4247c8:
    if (ctx->pc == 0x4247C8u) {
        ctx->pc = 0x4247C8u;
            // 0x4247c8: 0x34498a92  ori         $t1, $v0, 0x8A92 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
        ctx->pc = 0x4247CCu;
        goto label_4247cc;
    }
    ctx->pc = 0x4247C4u;
    SET_GPR_U32(ctx, 31, 0x4247CCu);
    ctx->pc = 0x4247C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4247C4u;
            // 0x4247c8: 0x34498a92  ori         $t1, $v0, 0x8A92 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CDF10u;
    if (runtime->hasFunction(0x4CDF10u)) {
        auto targetFn = runtime->lookupFunction(0x4CDF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4247CCu; }
        if (ctx->pc != 0x4247CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CDF10_0x4cdf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4247CCu; }
        if (ctx->pc != 0x4247CCu) { return; }
    }
    ctx->pc = 0x4247CCu;
label_4247cc:
    // 0x4247cc: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x4247ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
label_4247d0:
    // 0x4247d0: 0x3c023ada  lui         $v0, 0x3ADA
    ctx->pc = 0x4247d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15066 << 16));
label_4247d4:
    // 0x4247d4: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x4247d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
label_4247d8:
    // 0x4247d8: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x4247d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_4247dc:
    // 0x4247dc: 0x260400fc  addiu       $a0, $s0, 0xFC
    ctx->pc = 0x4247dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
label_4247e0:
    // 0x4247e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4247e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4247e4:
    // 0x4247e4: 0xc04a576  jal         func_1295D8
label_4247e8:
    if (ctx->pc == 0x4247E8u) {
        ctx->pc = 0x4247E8u;
            // 0x4247e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4247ECu;
        goto label_4247ec;
    }
    ctx->pc = 0x4247E4u;
    SET_GPR_U32(ctx, 31, 0x4247ECu);
    ctx->pc = 0x4247E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4247E4u;
            // 0x4247e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4247ECu; }
        if (ctx->pc != 0x4247ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4247ECu; }
        if (ctx->pc != 0x4247ECu) { return; }
    }
    ctx->pc = 0x4247ECu;
label_4247ec:
    // 0x4247ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4247ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4247f0:
    // 0x4247f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4247f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4247f4:
    // 0x4247f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4247f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4247f8:
    // 0x4247f8: 0x3e00008  jr          $ra
label_4247fc:
    if (ctx->pc == 0x4247FCu) {
        ctx->pc = 0x4247FCu;
            // 0x4247fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x424800u;
        goto label_424800;
    }
    ctx->pc = 0x4247F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4247FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4247F8u;
            // 0x4247fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424800u;
label_424800:
    // 0x424800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x424800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_424804:
    // 0x424804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x424804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_424808:
    // 0x424808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x424808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42480c:
    // 0x42480c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42480cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_424810:
    // 0x424810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x424810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_424814:
    // 0x424814: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_424818:
    if (ctx->pc == 0x424818u) {
        ctx->pc = 0x424818u;
            // 0x424818: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42481Cu;
        goto label_42481c;
    }
    ctx->pc = 0x424814u;
    {
        const bool branch_taken_0x424814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x424818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424814u;
            // 0x424818: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424814) {
            ctx->pc = 0x424878u;
            goto label_424878;
        }
    }
    ctx->pc = 0x42481Cu;
label_42481c:
    // 0x42481c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_424820:
    // 0x424820: 0x2442bc30  addiu       $v0, $v0, -0x43D0
    ctx->pc = 0x424820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949936));
label_424824:
    // 0x424824: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_424828:
    if (ctx->pc == 0x424828u) {
        ctx->pc = 0x424828u;
            // 0x424828: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x42482Cu;
        goto label_42482c;
    }
    ctx->pc = 0x424824u;
    {
        const bool branch_taken_0x424824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x424828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424824u;
            // 0x424828: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424824) {
            ctx->pc = 0x424860u;
            goto label_424860;
        }
    }
    ctx->pc = 0x42482Cu;
label_42482c:
    // 0x42482c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42482cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_424830:
    // 0x424830: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x424830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_424834:
    // 0x424834: 0xc0d37dc  jal         func_34DF70
label_424838:
    if (ctx->pc == 0x424838u) {
        ctx->pc = 0x424838u;
            // 0x424838: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x42483Cu;
        goto label_42483c;
    }
    ctx->pc = 0x424834u;
    SET_GPR_U32(ctx, 31, 0x42483Cu);
    ctx->pc = 0x424838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424834u;
            // 0x424838: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42483Cu; }
        if (ctx->pc != 0x42483Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42483Cu; }
        if (ctx->pc != 0x42483Cu) { return; }
    }
    ctx->pc = 0x42483Cu;
label_42483c:
    // 0x42483c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_424840:
    if (ctx->pc == 0x424840u) {
        ctx->pc = 0x424840u;
            // 0x424840: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x424844u;
        goto label_424844;
    }
    ctx->pc = 0x42483Cu;
    {
        const bool branch_taken_0x42483c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42483c) {
            ctx->pc = 0x424840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42483Cu;
            // 0x424840: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424864u;
            goto label_424864;
        }
    }
    ctx->pc = 0x424844u;
label_424844:
    // 0x424844: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x424844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_424848:
    // 0x424848: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x424848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_42484c:
    // 0x42484c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_424850:
    if (ctx->pc == 0x424850u) {
        ctx->pc = 0x424850u;
            // 0x424850: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x424854u;
        goto label_424854;
    }
    ctx->pc = 0x42484Cu;
    {
        const bool branch_taken_0x42484c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x424850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42484Cu;
            // 0x424850: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42484c) {
            ctx->pc = 0x424860u;
            goto label_424860;
        }
    }
    ctx->pc = 0x424854u;
label_424854:
    // 0x424854: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x424854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_424858:
    // 0x424858: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x424858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_42485c:
    // 0x42485c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42485cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_424860:
    // 0x424860: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x424860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_424864:
    // 0x424864: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x424864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_424868:
    // 0x424868: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42486c:
    if (ctx->pc == 0x42486Cu) {
        ctx->pc = 0x42486Cu;
            // 0x42486c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424870u;
        goto label_424870;
    }
    ctx->pc = 0x424868u;
    {
        const bool branch_taken_0x424868 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x424868) {
            ctx->pc = 0x42486Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424868u;
            // 0x42486c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42487Cu;
            goto label_42487c;
        }
    }
    ctx->pc = 0x424870u;
label_424870:
    // 0x424870: 0xc0400a8  jal         func_1002A0
label_424874:
    if (ctx->pc == 0x424874u) {
        ctx->pc = 0x424874u;
            // 0x424874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424878u;
        goto label_424878;
    }
    ctx->pc = 0x424870u;
    SET_GPR_U32(ctx, 31, 0x424878u);
    ctx->pc = 0x424874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424870u;
            // 0x424874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424878u; }
        if (ctx->pc != 0x424878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424878u; }
        if (ctx->pc != 0x424878u) { return; }
    }
    ctx->pc = 0x424878u;
label_424878:
    // 0x424878: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x424878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42487c:
    // 0x42487c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42487cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_424880:
    // 0x424880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x424880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_424884:
    // 0x424884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x424884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_424888:
    // 0x424888: 0x3e00008  jr          $ra
label_42488c:
    if (ctx->pc == 0x42488Cu) {
        ctx->pc = 0x42488Cu;
            // 0x42488c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x424890u;
        goto label_fallthrough_0x424888;
    }
    ctx->pc = 0x424888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42488Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424888u;
            // 0x42488c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x424888:
    ctx->pc = 0x424890u;
}
