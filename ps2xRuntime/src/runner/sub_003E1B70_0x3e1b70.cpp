#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E1B70
// Address: 0x3e1b70 - 0x3e2100
void sub_003E1B70_0x3e1b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1B70_0x3e1b70");
#endif

    switch (ctx->pc) {
        case 0x3e1b70u: goto label_3e1b70;
        case 0x3e1b74u: goto label_3e1b74;
        case 0x3e1b78u: goto label_3e1b78;
        case 0x3e1b7cu: goto label_3e1b7c;
        case 0x3e1b80u: goto label_3e1b80;
        case 0x3e1b84u: goto label_3e1b84;
        case 0x3e1b88u: goto label_3e1b88;
        case 0x3e1b8cu: goto label_3e1b8c;
        case 0x3e1b90u: goto label_3e1b90;
        case 0x3e1b94u: goto label_3e1b94;
        case 0x3e1b98u: goto label_3e1b98;
        case 0x3e1b9cu: goto label_3e1b9c;
        case 0x3e1ba0u: goto label_3e1ba0;
        case 0x3e1ba4u: goto label_3e1ba4;
        case 0x3e1ba8u: goto label_3e1ba8;
        case 0x3e1bacu: goto label_3e1bac;
        case 0x3e1bb0u: goto label_3e1bb0;
        case 0x3e1bb4u: goto label_3e1bb4;
        case 0x3e1bb8u: goto label_3e1bb8;
        case 0x3e1bbcu: goto label_3e1bbc;
        case 0x3e1bc0u: goto label_3e1bc0;
        case 0x3e1bc4u: goto label_3e1bc4;
        case 0x3e1bc8u: goto label_3e1bc8;
        case 0x3e1bccu: goto label_3e1bcc;
        case 0x3e1bd0u: goto label_3e1bd0;
        case 0x3e1bd4u: goto label_3e1bd4;
        case 0x3e1bd8u: goto label_3e1bd8;
        case 0x3e1bdcu: goto label_3e1bdc;
        case 0x3e1be0u: goto label_3e1be0;
        case 0x3e1be4u: goto label_3e1be4;
        case 0x3e1be8u: goto label_3e1be8;
        case 0x3e1becu: goto label_3e1bec;
        case 0x3e1bf0u: goto label_3e1bf0;
        case 0x3e1bf4u: goto label_3e1bf4;
        case 0x3e1bf8u: goto label_3e1bf8;
        case 0x3e1bfcu: goto label_3e1bfc;
        case 0x3e1c00u: goto label_3e1c00;
        case 0x3e1c04u: goto label_3e1c04;
        case 0x3e1c08u: goto label_3e1c08;
        case 0x3e1c0cu: goto label_3e1c0c;
        case 0x3e1c10u: goto label_3e1c10;
        case 0x3e1c14u: goto label_3e1c14;
        case 0x3e1c18u: goto label_3e1c18;
        case 0x3e1c1cu: goto label_3e1c1c;
        case 0x3e1c20u: goto label_3e1c20;
        case 0x3e1c24u: goto label_3e1c24;
        case 0x3e1c28u: goto label_3e1c28;
        case 0x3e1c2cu: goto label_3e1c2c;
        case 0x3e1c30u: goto label_3e1c30;
        case 0x3e1c34u: goto label_3e1c34;
        case 0x3e1c38u: goto label_3e1c38;
        case 0x3e1c3cu: goto label_3e1c3c;
        case 0x3e1c40u: goto label_3e1c40;
        case 0x3e1c44u: goto label_3e1c44;
        case 0x3e1c48u: goto label_3e1c48;
        case 0x3e1c4cu: goto label_3e1c4c;
        case 0x3e1c50u: goto label_3e1c50;
        case 0x3e1c54u: goto label_3e1c54;
        case 0x3e1c58u: goto label_3e1c58;
        case 0x3e1c5cu: goto label_3e1c5c;
        case 0x3e1c60u: goto label_3e1c60;
        case 0x3e1c64u: goto label_3e1c64;
        case 0x3e1c68u: goto label_3e1c68;
        case 0x3e1c6cu: goto label_3e1c6c;
        case 0x3e1c70u: goto label_3e1c70;
        case 0x3e1c74u: goto label_3e1c74;
        case 0x3e1c78u: goto label_3e1c78;
        case 0x3e1c7cu: goto label_3e1c7c;
        case 0x3e1c80u: goto label_3e1c80;
        case 0x3e1c84u: goto label_3e1c84;
        case 0x3e1c88u: goto label_3e1c88;
        case 0x3e1c8cu: goto label_3e1c8c;
        case 0x3e1c90u: goto label_3e1c90;
        case 0x3e1c94u: goto label_3e1c94;
        case 0x3e1c98u: goto label_3e1c98;
        case 0x3e1c9cu: goto label_3e1c9c;
        case 0x3e1ca0u: goto label_3e1ca0;
        case 0x3e1ca4u: goto label_3e1ca4;
        case 0x3e1ca8u: goto label_3e1ca8;
        case 0x3e1cacu: goto label_3e1cac;
        case 0x3e1cb0u: goto label_3e1cb0;
        case 0x3e1cb4u: goto label_3e1cb4;
        case 0x3e1cb8u: goto label_3e1cb8;
        case 0x3e1cbcu: goto label_3e1cbc;
        case 0x3e1cc0u: goto label_3e1cc0;
        case 0x3e1cc4u: goto label_3e1cc4;
        case 0x3e1cc8u: goto label_3e1cc8;
        case 0x3e1cccu: goto label_3e1ccc;
        case 0x3e1cd0u: goto label_3e1cd0;
        case 0x3e1cd4u: goto label_3e1cd4;
        case 0x3e1cd8u: goto label_3e1cd8;
        case 0x3e1cdcu: goto label_3e1cdc;
        case 0x3e1ce0u: goto label_3e1ce0;
        case 0x3e1ce4u: goto label_3e1ce4;
        case 0x3e1ce8u: goto label_3e1ce8;
        case 0x3e1cecu: goto label_3e1cec;
        case 0x3e1cf0u: goto label_3e1cf0;
        case 0x3e1cf4u: goto label_3e1cf4;
        case 0x3e1cf8u: goto label_3e1cf8;
        case 0x3e1cfcu: goto label_3e1cfc;
        case 0x3e1d00u: goto label_3e1d00;
        case 0x3e1d04u: goto label_3e1d04;
        case 0x3e1d08u: goto label_3e1d08;
        case 0x3e1d0cu: goto label_3e1d0c;
        case 0x3e1d10u: goto label_3e1d10;
        case 0x3e1d14u: goto label_3e1d14;
        case 0x3e1d18u: goto label_3e1d18;
        case 0x3e1d1cu: goto label_3e1d1c;
        case 0x3e1d20u: goto label_3e1d20;
        case 0x3e1d24u: goto label_3e1d24;
        case 0x3e1d28u: goto label_3e1d28;
        case 0x3e1d2cu: goto label_3e1d2c;
        case 0x3e1d30u: goto label_3e1d30;
        case 0x3e1d34u: goto label_3e1d34;
        case 0x3e1d38u: goto label_3e1d38;
        case 0x3e1d3cu: goto label_3e1d3c;
        case 0x3e1d40u: goto label_3e1d40;
        case 0x3e1d44u: goto label_3e1d44;
        case 0x3e1d48u: goto label_3e1d48;
        case 0x3e1d4cu: goto label_3e1d4c;
        case 0x3e1d50u: goto label_3e1d50;
        case 0x3e1d54u: goto label_3e1d54;
        case 0x3e1d58u: goto label_3e1d58;
        case 0x3e1d5cu: goto label_3e1d5c;
        case 0x3e1d60u: goto label_3e1d60;
        case 0x3e1d64u: goto label_3e1d64;
        case 0x3e1d68u: goto label_3e1d68;
        case 0x3e1d6cu: goto label_3e1d6c;
        case 0x3e1d70u: goto label_3e1d70;
        case 0x3e1d74u: goto label_3e1d74;
        case 0x3e1d78u: goto label_3e1d78;
        case 0x3e1d7cu: goto label_3e1d7c;
        case 0x3e1d80u: goto label_3e1d80;
        case 0x3e1d84u: goto label_3e1d84;
        case 0x3e1d88u: goto label_3e1d88;
        case 0x3e1d8cu: goto label_3e1d8c;
        case 0x3e1d90u: goto label_3e1d90;
        case 0x3e1d94u: goto label_3e1d94;
        case 0x3e1d98u: goto label_3e1d98;
        case 0x3e1d9cu: goto label_3e1d9c;
        case 0x3e1da0u: goto label_3e1da0;
        case 0x3e1da4u: goto label_3e1da4;
        case 0x3e1da8u: goto label_3e1da8;
        case 0x3e1dacu: goto label_3e1dac;
        case 0x3e1db0u: goto label_3e1db0;
        case 0x3e1db4u: goto label_3e1db4;
        case 0x3e1db8u: goto label_3e1db8;
        case 0x3e1dbcu: goto label_3e1dbc;
        case 0x3e1dc0u: goto label_3e1dc0;
        case 0x3e1dc4u: goto label_3e1dc4;
        case 0x3e1dc8u: goto label_3e1dc8;
        case 0x3e1dccu: goto label_3e1dcc;
        case 0x3e1dd0u: goto label_3e1dd0;
        case 0x3e1dd4u: goto label_3e1dd4;
        case 0x3e1dd8u: goto label_3e1dd8;
        case 0x3e1ddcu: goto label_3e1ddc;
        case 0x3e1de0u: goto label_3e1de0;
        case 0x3e1de4u: goto label_3e1de4;
        case 0x3e1de8u: goto label_3e1de8;
        case 0x3e1decu: goto label_3e1dec;
        case 0x3e1df0u: goto label_3e1df0;
        case 0x3e1df4u: goto label_3e1df4;
        case 0x3e1df8u: goto label_3e1df8;
        case 0x3e1dfcu: goto label_3e1dfc;
        case 0x3e1e00u: goto label_3e1e00;
        case 0x3e1e04u: goto label_3e1e04;
        case 0x3e1e08u: goto label_3e1e08;
        case 0x3e1e0cu: goto label_3e1e0c;
        case 0x3e1e10u: goto label_3e1e10;
        case 0x3e1e14u: goto label_3e1e14;
        case 0x3e1e18u: goto label_3e1e18;
        case 0x3e1e1cu: goto label_3e1e1c;
        case 0x3e1e20u: goto label_3e1e20;
        case 0x3e1e24u: goto label_3e1e24;
        case 0x3e1e28u: goto label_3e1e28;
        case 0x3e1e2cu: goto label_3e1e2c;
        case 0x3e1e30u: goto label_3e1e30;
        case 0x3e1e34u: goto label_3e1e34;
        case 0x3e1e38u: goto label_3e1e38;
        case 0x3e1e3cu: goto label_3e1e3c;
        case 0x3e1e40u: goto label_3e1e40;
        case 0x3e1e44u: goto label_3e1e44;
        case 0x3e1e48u: goto label_3e1e48;
        case 0x3e1e4cu: goto label_3e1e4c;
        case 0x3e1e50u: goto label_3e1e50;
        case 0x3e1e54u: goto label_3e1e54;
        case 0x3e1e58u: goto label_3e1e58;
        case 0x3e1e5cu: goto label_3e1e5c;
        case 0x3e1e60u: goto label_3e1e60;
        case 0x3e1e64u: goto label_3e1e64;
        case 0x3e1e68u: goto label_3e1e68;
        case 0x3e1e6cu: goto label_3e1e6c;
        case 0x3e1e70u: goto label_3e1e70;
        case 0x3e1e74u: goto label_3e1e74;
        case 0x3e1e78u: goto label_3e1e78;
        case 0x3e1e7cu: goto label_3e1e7c;
        case 0x3e1e80u: goto label_3e1e80;
        case 0x3e1e84u: goto label_3e1e84;
        case 0x3e1e88u: goto label_3e1e88;
        case 0x3e1e8cu: goto label_3e1e8c;
        case 0x3e1e90u: goto label_3e1e90;
        case 0x3e1e94u: goto label_3e1e94;
        case 0x3e1e98u: goto label_3e1e98;
        case 0x3e1e9cu: goto label_3e1e9c;
        case 0x3e1ea0u: goto label_3e1ea0;
        case 0x3e1ea4u: goto label_3e1ea4;
        case 0x3e1ea8u: goto label_3e1ea8;
        case 0x3e1eacu: goto label_3e1eac;
        case 0x3e1eb0u: goto label_3e1eb0;
        case 0x3e1eb4u: goto label_3e1eb4;
        case 0x3e1eb8u: goto label_3e1eb8;
        case 0x3e1ebcu: goto label_3e1ebc;
        case 0x3e1ec0u: goto label_3e1ec0;
        case 0x3e1ec4u: goto label_3e1ec4;
        case 0x3e1ec8u: goto label_3e1ec8;
        case 0x3e1eccu: goto label_3e1ecc;
        case 0x3e1ed0u: goto label_3e1ed0;
        case 0x3e1ed4u: goto label_3e1ed4;
        case 0x3e1ed8u: goto label_3e1ed8;
        case 0x3e1edcu: goto label_3e1edc;
        case 0x3e1ee0u: goto label_3e1ee0;
        case 0x3e1ee4u: goto label_3e1ee4;
        case 0x3e1ee8u: goto label_3e1ee8;
        case 0x3e1eecu: goto label_3e1eec;
        case 0x3e1ef0u: goto label_3e1ef0;
        case 0x3e1ef4u: goto label_3e1ef4;
        case 0x3e1ef8u: goto label_3e1ef8;
        case 0x3e1efcu: goto label_3e1efc;
        case 0x3e1f00u: goto label_3e1f00;
        case 0x3e1f04u: goto label_3e1f04;
        case 0x3e1f08u: goto label_3e1f08;
        case 0x3e1f0cu: goto label_3e1f0c;
        case 0x3e1f10u: goto label_3e1f10;
        case 0x3e1f14u: goto label_3e1f14;
        case 0x3e1f18u: goto label_3e1f18;
        case 0x3e1f1cu: goto label_3e1f1c;
        case 0x3e1f20u: goto label_3e1f20;
        case 0x3e1f24u: goto label_3e1f24;
        case 0x3e1f28u: goto label_3e1f28;
        case 0x3e1f2cu: goto label_3e1f2c;
        case 0x3e1f30u: goto label_3e1f30;
        case 0x3e1f34u: goto label_3e1f34;
        case 0x3e1f38u: goto label_3e1f38;
        case 0x3e1f3cu: goto label_3e1f3c;
        case 0x3e1f40u: goto label_3e1f40;
        case 0x3e1f44u: goto label_3e1f44;
        case 0x3e1f48u: goto label_3e1f48;
        case 0x3e1f4cu: goto label_3e1f4c;
        case 0x3e1f50u: goto label_3e1f50;
        case 0x3e1f54u: goto label_3e1f54;
        case 0x3e1f58u: goto label_3e1f58;
        case 0x3e1f5cu: goto label_3e1f5c;
        case 0x3e1f60u: goto label_3e1f60;
        case 0x3e1f64u: goto label_3e1f64;
        case 0x3e1f68u: goto label_3e1f68;
        case 0x3e1f6cu: goto label_3e1f6c;
        case 0x3e1f70u: goto label_3e1f70;
        case 0x3e1f74u: goto label_3e1f74;
        case 0x3e1f78u: goto label_3e1f78;
        case 0x3e1f7cu: goto label_3e1f7c;
        case 0x3e1f80u: goto label_3e1f80;
        case 0x3e1f84u: goto label_3e1f84;
        case 0x3e1f88u: goto label_3e1f88;
        case 0x3e1f8cu: goto label_3e1f8c;
        case 0x3e1f90u: goto label_3e1f90;
        case 0x3e1f94u: goto label_3e1f94;
        case 0x3e1f98u: goto label_3e1f98;
        case 0x3e1f9cu: goto label_3e1f9c;
        case 0x3e1fa0u: goto label_3e1fa0;
        case 0x3e1fa4u: goto label_3e1fa4;
        case 0x3e1fa8u: goto label_3e1fa8;
        case 0x3e1facu: goto label_3e1fac;
        case 0x3e1fb0u: goto label_3e1fb0;
        case 0x3e1fb4u: goto label_3e1fb4;
        case 0x3e1fb8u: goto label_3e1fb8;
        case 0x3e1fbcu: goto label_3e1fbc;
        case 0x3e1fc0u: goto label_3e1fc0;
        case 0x3e1fc4u: goto label_3e1fc4;
        case 0x3e1fc8u: goto label_3e1fc8;
        case 0x3e1fccu: goto label_3e1fcc;
        case 0x3e1fd0u: goto label_3e1fd0;
        case 0x3e1fd4u: goto label_3e1fd4;
        case 0x3e1fd8u: goto label_3e1fd8;
        case 0x3e1fdcu: goto label_3e1fdc;
        case 0x3e1fe0u: goto label_3e1fe0;
        case 0x3e1fe4u: goto label_3e1fe4;
        case 0x3e1fe8u: goto label_3e1fe8;
        case 0x3e1fecu: goto label_3e1fec;
        case 0x3e1ff0u: goto label_3e1ff0;
        case 0x3e1ff4u: goto label_3e1ff4;
        case 0x3e1ff8u: goto label_3e1ff8;
        case 0x3e1ffcu: goto label_3e1ffc;
        case 0x3e2000u: goto label_3e2000;
        case 0x3e2004u: goto label_3e2004;
        case 0x3e2008u: goto label_3e2008;
        case 0x3e200cu: goto label_3e200c;
        case 0x3e2010u: goto label_3e2010;
        case 0x3e2014u: goto label_3e2014;
        case 0x3e2018u: goto label_3e2018;
        case 0x3e201cu: goto label_3e201c;
        case 0x3e2020u: goto label_3e2020;
        case 0x3e2024u: goto label_3e2024;
        case 0x3e2028u: goto label_3e2028;
        case 0x3e202cu: goto label_3e202c;
        case 0x3e2030u: goto label_3e2030;
        case 0x3e2034u: goto label_3e2034;
        case 0x3e2038u: goto label_3e2038;
        case 0x3e203cu: goto label_3e203c;
        case 0x3e2040u: goto label_3e2040;
        case 0x3e2044u: goto label_3e2044;
        case 0x3e2048u: goto label_3e2048;
        case 0x3e204cu: goto label_3e204c;
        case 0x3e2050u: goto label_3e2050;
        case 0x3e2054u: goto label_3e2054;
        case 0x3e2058u: goto label_3e2058;
        case 0x3e205cu: goto label_3e205c;
        case 0x3e2060u: goto label_3e2060;
        case 0x3e2064u: goto label_3e2064;
        case 0x3e2068u: goto label_3e2068;
        case 0x3e206cu: goto label_3e206c;
        case 0x3e2070u: goto label_3e2070;
        case 0x3e2074u: goto label_3e2074;
        case 0x3e2078u: goto label_3e2078;
        case 0x3e207cu: goto label_3e207c;
        case 0x3e2080u: goto label_3e2080;
        case 0x3e2084u: goto label_3e2084;
        case 0x3e2088u: goto label_3e2088;
        case 0x3e208cu: goto label_3e208c;
        case 0x3e2090u: goto label_3e2090;
        case 0x3e2094u: goto label_3e2094;
        case 0x3e2098u: goto label_3e2098;
        case 0x3e209cu: goto label_3e209c;
        case 0x3e20a0u: goto label_3e20a0;
        case 0x3e20a4u: goto label_3e20a4;
        case 0x3e20a8u: goto label_3e20a8;
        case 0x3e20acu: goto label_3e20ac;
        case 0x3e20b0u: goto label_3e20b0;
        case 0x3e20b4u: goto label_3e20b4;
        case 0x3e20b8u: goto label_3e20b8;
        case 0x3e20bcu: goto label_3e20bc;
        case 0x3e20c0u: goto label_3e20c0;
        case 0x3e20c4u: goto label_3e20c4;
        case 0x3e20c8u: goto label_3e20c8;
        case 0x3e20ccu: goto label_3e20cc;
        case 0x3e20d0u: goto label_3e20d0;
        case 0x3e20d4u: goto label_3e20d4;
        case 0x3e20d8u: goto label_3e20d8;
        case 0x3e20dcu: goto label_3e20dc;
        case 0x3e20e0u: goto label_3e20e0;
        case 0x3e20e4u: goto label_3e20e4;
        case 0x3e20e8u: goto label_3e20e8;
        case 0x3e20ecu: goto label_3e20ec;
        case 0x3e20f0u: goto label_3e20f0;
        case 0x3e20f4u: goto label_3e20f4;
        case 0x3e20f8u: goto label_3e20f8;
        case 0x3e20fcu: goto label_3e20fc;
        default: break;
    }

    ctx->pc = 0x3e1b70u;

label_3e1b70:
    // 0x3e1b70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e1b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3e1b74:
    // 0x3e1b74: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3e1b78:
    // 0x3e1b78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3e1b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3e1b7c:
    // 0x3e1b7c: 0x24639d88  addiu       $v1, $v1, -0x6278
    ctx->pc = 0x3e1b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942088));
label_3e1b80:
    // 0x3e1b80: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3e1b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3e1b84:
    // 0x3e1b84: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3e1b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3e1b88:
    // 0x3e1b88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e1b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3e1b8c:
    // 0x3e1b8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e1b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e1b90:
    // 0x3e1b90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e1b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e1b94:
    // 0x3e1b94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e1b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e1b98:
    // 0x3e1b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e1b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e1b9c:
    // 0x3e1b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e1b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e1ba0:
    // 0x3e1ba0: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x3e1ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_3e1ba4:
    // 0x3e1ba4: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x3e1ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e1ba8:
    // 0x3e1ba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e1ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1bac:
    // 0x3e1bac: 0x38b10001  xori        $s1, $a1, 0x1
    ctx->pc = 0x3e1bacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_3e1bb0:
    // 0x3e1bb0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3e1bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3e1bb4:
    // 0x3e1bb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e1bb8:
    // 0x3e1bb8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3e1bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e1bbc:
    // 0x3e1bbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e1bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e1bc0:
    // 0x3e1bc0: 0x45030144  bc1tl       . + 4 + (0x144 << 2)
label_3e1bc4:
    if (ctx->pc == 0x3E1BC4u) {
        ctx->pc = 0x3E1BC4u;
            // 0x3e1bc4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x3E1BC8u;
        goto label_3e1bc8;
    }
    ctx->pc = 0x3E1BC0u;
    {
        const bool branch_taken_0x3e1bc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1bc0) {
            ctx->pc = 0x3E1BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1BC0u;
            // 0x3e1bc4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E20D4u;
            goto label_3e20d4;
        }
    }
    ctx->pc = 0x3E1BC8u;
label_3e1bc8:
    // 0x3e1bc8: 0x8e040354  lw          $a0, 0x354($s0)
    ctx->pc = 0x3e1bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
label_3e1bcc:
    // 0x3e1bcc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3e1bd0:
    if (ctx->pc == 0x3E1BD0u) {
        ctx->pc = 0x3E1BD4u;
        goto label_3e1bd4;
    }
    ctx->pc = 0x3E1BCCu;
    {
        const bool branch_taken_0x3e1bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1bcc) {
            ctx->pc = 0x3E1BE8u;
            goto label_3e1be8;
        }
    }
    ctx->pc = 0x3E1BD4u;
label_3e1bd4:
    // 0x3e1bd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e1bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e1bd8:
    // 0x3e1bd8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3e1bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3e1bdc:
    // 0x3e1bdc: 0x320f809  jalr        $t9
label_3e1be0:
    if (ctx->pc == 0x3E1BE0u) {
        ctx->pc = 0x3E1BE0u;
            // 0x3e1be0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E1BE4u;
        goto label_3e1be4;
    }
    ctx->pc = 0x3E1BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E1BE4u);
        ctx->pc = 0x3E1BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1BDCu;
            // 0x3e1be0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E1BE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E1BE4u; }
            if (ctx->pc != 0x3E1BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x3E1BE4u;
label_3e1be4:
    // 0x3e1be4: 0xae000354  sw          $zero, 0x354($s0)
    ctx->pc = 0x3e1be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 0));
label_3e1be8:
    // 0x3e1be8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3e1be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3e1bec:
    // 0x3e1bec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e1becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e1bf0:
    // 0x3e1bf0: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x3e1bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
label_3e1bf4:
    // 0x3e1bf4: 0xa0800c75  sb          $zero, 0xC75($a0)
    ctx->pc = 0x3e1bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3189), (uint8_t)GPR_U32(ctx, 0));
label_3e1bf8:
    // 0x3e1bf8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e1bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e1bfc:
    // 0x3e1bfc: 0x8c630788  lw          $v1, 0x788($v1)
    ctx->pc = 0x3e1bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
label_3e1c00:
    // 0x3e1c00: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x3e1c00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e1c04:
    // 0x3e1c04: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3e1c08:
    if (ctx->pc == 0x3E1C08u) {
        ctx->pc = 0x3E1C08u;
            // 0x3e1c08: 0x2202026  xor         $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 0));
        ctx->pc = 0x3E1C0Cu;
        goto label_3e1c0c;
    }
    ctx->pc = 0x3E1C04u;
    {
        const bool branch_taken_0x3e1c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1c04) {
            ctx->pc = 0x3E1C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1C04u;
            // 0x3e1c08: 0x2202026  xor         $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E1C1Cu;
            goto label_3e1c1c;
        }
    }
    ctx->pc = 0x3E1C0Cu;
label_3e1c0c:
    // 0x3e1c0c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e1c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e1c10:
    // 0x3e1c10: 0x8c630ea4  lw          $v1, 0xEA4($v1)
    ctx->pc = 0x3e1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_3e1c14:
    // 0x3e1c14: 0xa060014c  sb          $zero, 0x14C($v1)
    ctx->pc = 0x3e1c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 332), (uint8_t)GPR_U32(ctx, 0));
label_3e1c18:
    // 0x3e1c18: 0x2202026  xor         $a0, $s1, $zero
    ctx->pc = 0x3e1c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 0));
label_3e1c1c:
    // 0x3e1c1c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e1c20:
    // 0x3e1c20: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x3e1c20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3e1c24:
    // 0x3e1c24: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x3e1c24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3e1c28:
    // 0x3e1c28: 0xa20502e8  sb          $a1, 0x2E8($s0)
    ctx->pc = 0x3e1c28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 5));
label_3e1c2c:
    // 0x3e1c2c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3e1c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e1c30:
    // 0x3e1c30: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3e1c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3e1c34:
    // 0x3e1c34: 0x8c660084  lw          $a2, 0x84($v1)
    ctx->pc = 0x3e1c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3e1c38:
    // 0x3e1c38: 0x54c40040  bnel        $a2, $a0, . + 4 + (0x40 << 2)
label_3e1c3c:
    if (ctx->pc == 0x3E1C3Cu) {
        ctx->pc = 0x3E1C3Cu;
            // 0x3e1c3c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3E1C40u;
        goto label_3e1c40;
    }
    ctx->pc = 0x3E1C38u;
    {
        const bool branch_taken_0x3e1c38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e1c38) {
            ctx->pc = 0x3E1C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1C38u;
            // 0x3e1c3c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E1D3Cu;
            goto label_3e1d3c;
        }
    }
    ctx->pc = 0x3E1C40u;
label_3e1c40:
    // 0x3e1c40: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e1c44:
    // 0x3e1c44: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3e1c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1c48:
    // 0x3e1c48: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e1c4c:
    // 0x3e1c4c: 0x8c650cc4  lw          $a1, 0xCC4($v1)
    ctx->pc = 0x3e1c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3268)));
label_3e1c50:
    // 0x3e1c50: 0x50a40005  beql        $a1, $a0, . + 4 + (0x5 << 2)
label_3e1c54:
    if (ctx->pc == 0x3E1C54u) {
        ctx->pc = 0x3E1C54u;
            // 0x3e1c54: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x3E1C58u;
        goto label_3e1c58;
    }
    ctx->pc = 0x3E1C50u;
    {
        const bool branch_taken_0x3e1c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e1c50) {
            ctx->pc = 0x3E1C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1C50u;
            // 0x3e1c54: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E1C68u;
            goto label_3e1c68;
        }
    }
    ctx->pc = 0x3E1C58u;
label_3e1c58:
    // 0x3e1c58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e1c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e1c5c:
    // 0x3e1c5c: 0x14a30036  bne         $a1, $v1, . + 4 + (0x36 << 2)
label_3e1c60:
    if (ctx->pc == 0x3E1C60u) {
        ctx->pc = 0x3E1C64u;
        goto label_3e1c64;
    }
    ctx->pc = 0x3E1C5Cu;
    {
        const bool branch_taken_0x3e1c5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e1c5c) {
            ctx->pc = 0x3E1D38u;
            goto label_3e1d38;
        }
    }
    ctx->pc = 0x3E1C64u;
label_3e1c64:
    // 0x3e1c64: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3e1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3e1c68:
    // 0x3e1c68: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x3e1c68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_3e1c6c:
    // 0x3e1c6c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3e1c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_3e1c70:
    // 0x3e1c70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e1c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1c74:
    // 0x3e1c74: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e1c78:
    // 0x3e1c78: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x3e1c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
label_3e1c7c:
    // 0x3e1c7c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e1c80:
    // 0x3e1c80: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x3e1c80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_3e1c84:
    // 0x3e1c84: 0x8c710788  lw          $s1, 0x788($v1)
    ctx->pc = 0x3e1c84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
label_3e1c88:
    // 0x3e1c88: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e1c8c:
    // 0x3e1c8c: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x3e1c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3e1c90:
    // 0x3e1c90: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x3e1c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_3e1c94:
    // 0x3e1c94: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3e1c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e1c98:
    // 0x3e1c98: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_3e1c9c:
    if (ctx->pc == 0x3E1C9Cu) {
        ctx->pc = 0x3E1C9Cu;
            // 0x3e1c9c: 0x8e540004  lw          $s4, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x3E1CA0u;
        goto label_3e1ca0;
    }
    ctx->pc = 0x3E1C98u;
    {
        const bool branch_taken_0x3e1c98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E1C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1C98u;
            // 0x3e1c9c: 0x8e540004  lw          $s4, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1c98) {
            ctx->pc = 0x3E1CD0u;
            goto label_3e1cd0;
        }
    }
    ctx->pc = 0x3E1CA0u;
label_3e1ca0:
    // 0x3e1ca0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e1ca4:
    // 0x3e1ca4: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3e1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e1ca8:
    // 0x3e1ca8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e1ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e1cac:
    // 0x3e1cac: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3e1cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3e1cb0:
    // 0x3e1cb0: 0x320f809  jalr        $t9
label_3e1cb4:
    if (ctx->pc == 0x3E1CB4u) {
        ctx->pc = 0x3E1CB4u;
            // 0x3e1cb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1CB8u;
        goto label_3e1cb8;
    }
    ctx->pc = 0x3E1CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E1CB8u);
        ctx->pc = 0x3E1CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1CB0u;
            // 0x3e1cb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E1CB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E1CB8u; }
            if (ctx->pc != 0x3E1CB8u) { return; }
        }
        }
    }
    ctx->pc = 0x3E1CB8u;
label_3e1cb8:
    // 0x3e1cb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3e1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e1cbc:
    // 0x3e1cbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e1cc0:
    // 0x3e1cc0: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x3e1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_3e1cc4:
    // 0x3e1cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e1cc8:
    // 0x3e1cc8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e1ccc:
    if (ctx->pc == 0x3E1CCCu) {
        ctx->pc = 0x3E1CCCu;
            // 0x3e1ccc: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x3E1CD0u;
        goto label_3e1cd0;
    }
    ctx->pc = 0x3E1CC8u;
    {
        const bool branch_taken_0x3e1cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1CC8u;
            // 0x3e1ccc: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1cc8) {
            ctx->pc = 0x3E1CE0u;
            goto label_3e1ce0;
        }
    }
    ctx->pc = 0x3E1CD0u;
label_3e1cd0:
    // 0x3e1cd0: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x3e1cd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e1cd4:
    // 0x3e1cd4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_3e1cd8:
    if (ctx->pc == 0x3E1CD8u) {
        ctx->pc = 0x3E1CDCu;
        goto label_3e1cdc;
    }
    ctx->pc = 0x3E1CD4u;
    {
        const bool branch_taken_0x3e1cd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1cd4) {
            ctx->pc = 0x3E1D30u;
            goto label_3e1d30;
        }
    }
    ctx->pc = 0x3E1CDCu;
label_3e1cdc:
    // 0x3e1cdc: 0x0  nop
    ctx->pc = 0x3e1cdcu;
    // NOP
label_3e1ce0:
    // 0x3e1ce0: 0x268402c0  addiu       $a0, $s4, 0x2C0
    ctx->pc = 0x3e1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
label_3e1ce4:
    // 0x3e1ce4: 0xc04cc1c  jal         func_133070
label_3e1ce8:
    if (ctx->pc == 0x3E1CE8u) {
        ctx->pc = 0x3E1CE8u;
            // 0x3e1ce8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3E1CECu;
        goto label_3e1cec;
    }
    ctx->pc = 0x3E1CE4u;
    SET_GPR_U32(ctx, 31, 0x3E1CECu);
    ctx->pc = 0x3E1CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1CE4u;
            // 0x3e1ce8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1CECu; }
        if (ctx->pc != 0x3E1CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1CECu; }
        if (ctx->pc != 0x3E1CECu) { return; }
    }
    ctx->pc = 0x3E1CECu;
label_3e1cec:
    // 0x3e1cec: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x3e1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_3e1cf0:
    // 0x3e1cf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e1cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e1cf4:
    // 0x3e1cf4: 0x0  nop
    ctx->pc = 0x3e1cf4u;
    // NOP
label_3e1cf8:
    // 0x3e1cf8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e1cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e1cfc:
    // 0x3e1cfc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3e1d00:
    if (ctx->pc == 0x3E1D00u) {
        ctx->pc = 0x3E1D04u;
        goto label_3e1d04;
    }
    ctx->pc = 0x3E1CFCu;
    {
        const bool branch_taken_0x3e1cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1cfc) {
            ctx->pc = 0x3E1D20u;
            goto label_3e1d20;
        }
    }
    ctx->pc = 0x3E1D04u;
label_3e1d04:
    // 0x3e1d04: 0x8e860d98  lw          $a2, 0xD98($s4)
    ctx->pc = 0x3e1d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3480)));
label_3e1d08:
    // 0x3e1d08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e1d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e1d0c:
    // 0x3e1d0c: 0x8e0501e0  lw          $a1, 0x1E0($s0)
    ctx->pc = 0x3e1d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_3e1d10:
    // 0x3e1d10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e1d14:
    // 0x3e1d14: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e1d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3e1d18:
    // 0x3e1d18: 0xa0a400b0  sb          $a0, 0xB0($a1)
    ctx->pc = 0x3e1d18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 176), (uint8_t)GPR_U32(ctx, 4));
label_3e1d1c:
    // 0x3e1d1c: 0xa0a300b4  sb          $v1, 0xB4($a1)
    ctx->pc = 0x3e1d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 180), (uint8_t)GPR_U32(ctx, 3));
label_3e1d20:
    // 0x3e1d20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e1d20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e1d24:
    // 0x3e1d24: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x3e1d24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3e1d28:
    // 0x3e1d28: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_3e1d2c:
    if (ctx->pc == 0x3E1D2Cu) {
        ctx->pc = 0x3E1D2Cu;
            // 0x3e1d2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3E1D30u;
        goto label_3e1d30;
    }
    ctx->pc = 0x3E1D28u;
    {
        const bool branch_taken_0x3e1d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1D28u;
            // 0x3e1d2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d28) {
            ctx->pc = 0x3E1C88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e1c88;
        }
    }
    ctx->pc = 0x3E1D30u;
label_3e1d30:
    // 0x3e1d30: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_3e1d34:
    if (ctx->pc == 0x3E1D34u) {
        ctx->pc = 0x3E1D38u;
        goto label_3e1d38;
    }
    ctx->pc = 0x3E1D30u;
    {
        const bool branch_taken_0x3e1d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1d30) {
            ctx->pc = 0x3E20D0u;
            goto label_3e20d0;
        }
    }
    ctx->pc = 0x3E1D38u;
label_3e1d38:
    // 0x3e1d38: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3e1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e1d3c:
    // 0x3e1d3c: 0x54c20010  bnel        $a2, $v0, . + 4 + (0x10 << 2)
label_3e1d40:
    if (ctx->pc == 0x3E1D40u) {
        ctx->pc = 0x3E1D40u;
            // 0x3e1d40: 0x8e0402c4  lw          $a0, 0x2C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
        ctx->pc = 0x3E1D44u;
        goto label_3e1d44;
    }
    ctx->pc = 0x3E1D3Cu;
    {
        const bool branch_taken_0x3e1d3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e1d3c) {
            ctx->pc = 0x3E1D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1D3Cu;
            // 0x3e1d40: 0x8e0402c4  lw          $a0, 0x2C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E1D80u;
            goto label_3e1d80;
        }
    }
    ctx->pc = 0x3E1D44u;
label_3e1d44:
    // 0x3e1d44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e1d48:
    // 0x3e1d48: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3e1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3e1d4c:
    // 0x3e1d4c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3e1d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_3e1d50:
    // 0x3e1d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1d54:
    // 0x3e1d54: 0xc0f95b8  jal         func_3E56E0
label_3e1d58:
    if (ctx->pc == 0x3E1D58u) {
        ctx->pc = 0x3E1D58u;
            // 0x3e1d58: 0xae02027c  sw          $v0, 0x27C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
        ctx->pc = 0x3E1D5Cu;
        goto label_3e1d5c;
    }
    ctx->pc = 0x3E1D54u;
    SET_GPR_U32(ctx, 31, 0x3E1D5Cu);
    ctx->pc = 0x3E1D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1D54u;
            // 0x3e1d58: 0xae02027c  sw          $v0, 0x27C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E56E0u;
    if (runtime->hasFunction(0x3E56E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E56E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1D5Cu; }
        if (ctx->pc != 0x3E1D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E56E0_0x3e56e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1D5Cu; }
        if (ctx->pc != 0x3E1D5Cu) { return; }
    }
    ctx->pc = 0x3E1D5Cu;
label_3e1d5c:
    // 0x3e1d5c: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x3e1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
label_3e1d60:
    // 0x3e1d60: 0x1c6000db  bgtz        $v1, . + 4 + (0xDB << 2)
label_3e1d64:
    if (ctx->pc == 0x3E1D64u) {
        ctx->pc = 0x3E1D68u;
        goto label_3e1d68;
    }
    ctx->pc = 0x3E1D60u;
    {
        const bool branch_taken_0x3e1d60 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3e1d60) {
            ctx->pc = 0x3E20D0u;
            goto label_3e20d0;
        }
    }
    ctx->pc = 0x3E1D68u;
label_3e1d68:
    // 0x3e1d68: 0xa20002d9  sb          $zero, 0x2D9($s0)
    ctx->pc = 0x3e1d68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 729), (uint8_t)GPR_U32(ctx, 0));
label_3e1d6c:
    // 0x3e1d6c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3e1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3e1d70:
    // 0x3e1d70: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3e1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_3e1d74:
    // 0x3e1d74: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_3e1d78:
    if (ctx->pc == 0x3E1D78u) {
        ctx->pc = 0x3E1D7Cu;
        goto label_3e1d7c;
    }
    ctx->pc = 0x3E1D74u;
    {
        const bool branch_taken_0x3e1d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1d74) {
            ctx->pc = 0x3E20D0u;
            goto label_3e20d0;
        }
    }
    ctx->pc = 0x3E1D7Cu;
label_3e1d7c:
    // 0x3e1d7c: 0x8e0402c4  lw          $a0, 0x2C4($s0)
    ctx->pc = 0x3e1d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
label_3e1d80:
    // 0x3e1d80: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3e1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e1d84:
    // 0x3e1d84: 0x54c2001b  bnel        $a2, $v0, . + 4 + (0x1B << 2)
label_3e1d88:
    if (ctx->pc == 0x3E1D88u) {
        ctx->pc = 0x3E1D88u;
            // 0x3e1d88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3E1D8Cu;
        goto label_3e1d8c;
    }
    ctx->pc = 0x3E1D84u;
    {
        const bool branch_taken_0x3e1d84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e1d84) {
            ctx->pc = 0x3E1D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1D84u;
            // 0x3e1d88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E1DF4u;
            goto label_3e1df4;
        }
    }
    ctx->pc = 0x3E1D8Cu;
label_3e1d8c:
    // 0x3e1d8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e1d90:
    // 0x3e1d90: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3e1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e1d94:
    // 0x3e1d94: 0x8c420cc4  lw          $v0, 0xCC4($v0)
    ctx->pc = 0x3e1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
label_3e1d98:
    // 0x3e1d98: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x3e1d98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3e1d9c:
    // 0x3e1d9c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_3e1da0:
    if (ctx->pc == 0x3E1DA0u) {
        ctx->pc = 0x3E1DA4u;
        goto label_3e1da4;
    }
    ctx->pc = 0x3E1D9Cu;
    {
        const bool branch_taken_0x3e1d9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1d9c) {
            ctx->pc = 0x3E1DF0u;
            goto label_3e1df0;
        }
    }
    ctx->pc = 0x3E1DA4u;
label_3e1da4:
    // 0x3e1da4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3e1da8:
    // 0x3e1da8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e1dac:
    // 0x3e1dac: 0x24639f60  addiu       $v1, $v1, -0x60A0
    ctx->pc = 0x3e1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942560));
label_3e1db0:
    // 0x3e1db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e1db4:
    // 0x3e1db4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e1db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e1db8:
    // 0x3e1db8: 0x400008  jr          $v0
label_3e1dbc:
    if (ctx->pc == 0x3E1DBCu) {
        ctx->pc = 0x3E1DC0u;
        goto label_3e1dc0;
    }
    ctx->pc = 0x3E1DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E1DC0u: goto label_3e1dc0;
            case 0x3E1DD0u: goto label_3e1dd0;
            case 0x3E1DE0u: goto label_3e1de0;
            case 0x3E1DF0u: goto label_3e1df0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3E1DC0u;
label_3e1dc0:
    // 0x3e1dc0: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x3e1dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
label_3e1dc4:
    // 0x3e1dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1dc8:
    // 0x3e1dc8: 0x10000020  b           . + 4 + (0x20 << 2)
label_3e1dcc:
    if (ctx->pc == 0x3E1DCCu) {
        ctx->pc = 0x3E1DCCu;
            // 0x3e1dcc: 0xe600027c  swc1        $f0, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->pc = 0x3E1DD0u;
        goto label_3e1dd0;
    }
    ctx->pc = 0x3E1DC8u;
    {
        const bool branch_taken_0x3e1dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1DC8u;
            // 0x3e1dcc: 0xe600027c  swc1        $f0, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1dc8) {
            ctx->pc = 0x3E1E4Cu;
            goto label_3e1e4c;
        }
    }
    ctx->pc = 0x3E1DD0u;
label_3e1dd0:
    // 0x3e1dd0: 0x3c024596  lui         $v0, 0x4596
    ctx->pc = 0x3e1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17814 << 16));
label_3e1dd4:
    // 0x3e1dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1dd8:
    // 0x3e1dd8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3e1ddc:
    if (ctx->pc == 0x3E1DDCu) {
        ctx->pc = 0x3E1DE0u;
        goto label_3e1de0;
    }
    ctx->pc = 0x3E1DD8u;
    {
        const bool branch_taken_0x3e1dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1dd8) {
            ctx->pc = 0x3E1E48u;
            goto label_3e1e48;
        }
    }
    ctx->pc = 0x3E1DE0u;
label_3e1de0:
    // 0x3e1de0: 0x3c0243d2  lui         $v0, 0x43D2
    ctx->pc = 0x3e1de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17362 << 16));
label_3e1de4:
    // 0x3e1de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1de8:
    // 0x3e1de8: 0x10000017  b           . + 4 + (0x17 << 2)
label_3e1dec:
    if (ctx->pc == 0x3E1DECu) {
        ctx->pc = 0x3E1DF0u;
        goto label_3e1df0;
    }
    ctx->pc = 0x3E1DE8u;
    {
        const bool branch_taken_0x3e1de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1de8) {
            ctx->pc = 0x3E1E48u;
            goto label_3e1e48;
        }
    }
    ctx->pc = 0x3E1DF0u;
label_3e1df0:
    // 0x3e1df0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e1df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e1df4:
    // 0x3e1df4: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_3e1df8:
    if (ctx->pc == 0x3E1DF8u) {
        ctx->pc = 0x3E1DFCu;
        goto label_3e1dfc;
    }
    ctx->pc = 0x3E1DF4u;
    {
        const bool branch_taken_0x3e1df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e1df4) {
            ctx->pc = 0x3E1E34u;
            goto label_3e1e34;
        }
    }
    ctx->pc = 0x3E1DFCu;
label_3e1dfc:
    // 0x3e1dfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e1e00:
    // 0x3e1e00: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
label_3e1e04:
    if (ctx->pc == 0x3E1E04u) {
        ctx->pc = 0x3E1E08u;
        goto label_3e1e08;
    }
    ctx->pc = 0x3E1E00u;
    {
        const bool branch_taken_0x3e1e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e1e00) {
            ctx->pc = 0x3E1E34u;
            goto label_3e1e34;
        }
    }
    ctx->pc = 0x3E1E08u;
label_3e1e08:
    // 0x3e1e08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1e0c:
    // 0x3e1e0c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_3e1e10:
    if (ctx->pc == 0x3E1E10u) {
        ctx->pc = 0x3E1E14u;
        goto label_3e1e14;
    }
    ctx->pc = 0x3E1E0Cu;
    {
        const bool branch_taken_0x3e1e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e1e0c) {
            ctx->pc = 0x3E1E28u;
            goto label_3e1e28;
        }
    }
    ctx->pc = 0x3E1E14u;
label_3e1e14:
    // 0x3e1e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e1e18:
    // 0x3e1e18: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_3e1e1c:
    if (ctx->pc == 0x3E1E1Cu) {
        ctx->pc = 0x3E1E20u;
        goto label_3e1e20;
    }
    ctx->pc = 0x3E1E18u;
    {
        const bool branch_taken_0x3e1e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e1e18) {
            ctx->pc = 0x3E1E28u;
            goto label_3e1e28;
        }
    }
    ctx->pc = 0x3E1E20u;
label_3e1e20:
    // 0x3e1e20: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e1e24:
    if (ctx->pc == 0x3E1E24u) {
        ctx->pc = 0x3E1E28u;
        goto label_3e1e28;
    }
    ctx->pc = 0x3E1E20u;
    {
        const bool branch_taken_0x3e1e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1e20) {
            ctx->pc = 0x3E1E40u;
            goto label_3e1e40;
        }
    }
    ctx->pc = 0x3E1E28u;
label_3e1e28:
    // 0x3e1e28: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e1e2c:
    // 0x3e1e2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3e1e30:
    if (ctx->pc == 0x3E1E30u) {
        ctx->pc = 0x3E1E30u;
            // 0x3e1e30: 0xc4409d48  lwc1        $f0, -0x62B8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3E1E34u;
        goto label_3e1e34;
    }
    ctx->pc = 0x3E1E2Cu;
    {
        const bool branch_taken_0x3e1e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1E2Cu;
            // 0x3e1e30: 0xc4409d48  lwc1        $f0, -0x62B8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1e2c) {
            ctx->pc = 0x3E1E48u;
            goto label_3e1e48;
        }
    }
    ctx->pc = 0x3E1E34u;
label_3e1e34:
    // 0x3e1e34: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e1e38:
    // 0x3e1e38: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e1e3c:
    if (ctx->pc == 0x3E1E3Cu) {
        ctx->pc = 0x3E1E3Cu;
            // 0x3e1e3c: 0xc4409d44  lwc1        $f0, -0x62BC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3E1E40u;
        goto label_3e1e40;
    }
    ctx->pc = 0x3E1E38u;
    {
        const bool branch_taken_0x3e1e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1E38u;
            // 0x3e1e3c: 0xc4409d44  lwc1        $f0, -0x62BC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1e38) {
            ctx->pc = 0x3E1E48u;
            goto label_3e1e48;
        }
    }
    ctx->pc = 0x3E1E40u;
label_3e1e40:
    // 0x3e1e40: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e1e44:
    // 0x3e1e44: 0xc4409d40  lwc1        $f0, -0x62C0($v0)
    ctx->pc = 0x3e1e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e1e48:
    // 0x3e1e48: 0xe600027c  swc1        $f0, 0x27C($s0)
    ctx->pc = 0x3e1e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
label_3e1e4c:
    // 0x3e1e4c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3e1e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3e1e50:
    // 0x3e1e50: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3e1e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3e1e54:
    // 0x3e1e54: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x3e1e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e1e58:
    // 0x3e1e58: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3e1e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e1e5c:
    // 0x3e1e5c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3e1e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e1e60:
    // 0x3e1e60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e1e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e1e64:
    // 0x3e1e64: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3e1e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3e1e68:
    // 0x3e1e68: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x3e1e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_3e1e6c:
    // 0x3e1e6c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x3e1e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3e1e70:
    // 0x3e1e70: 0xc08af48  jal         func_22BD20
label_3e1e74:
    if (ctx->pc == 0x3E1E74u) {
        ctx->pc = 0x3E1E74u;
            // 0x3e1e74: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x3E1E78u;
        goto label_3e1e78;
    }
    ctx->pc = 0x3E1E70u;
    SET_GPR_U32(ctx, 31, 0x3E1E78u);
    ctx->pc = 0x3E1E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1E70u;
            // 0x3e1e74: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BD20u;
    if (runtime->hasFunction(0x22BD20u)) {
        auto targetFn = runtime->lookupFunction(0x22BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1E78u; }
        if (ctx->pc != 0x3E1E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BD20_0x22bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1E78u; }
        if (ctx->pc != 0x3E1E78u) { return; }
    }
    ctx->pc = 0x3E1E78u;
label_3e1e78:
    // 0x3e1e78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e1e7c:
    // 0x3e1e7c: 0xc109d9c  jal         func_427670
label_3e1e80:
    if (ctx->pc == 0x3E1E80u) {
        ctx->pc = 0x3E1E80u;
            // 0x3e1e80: 0x8c446ec8  lw          $a0, 0x6EC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28360)));
        ctx->pc = 0x3E1E84u;
        goto label_3e1e84;
    }
    ctx->pc = 0x3E1E7Cu;
    SET_GPR_U32(ctx, 31, 0x3E1E84u);
    ctx->pc = 0x3E1E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1E7Cu;
            // 0x3e1e80: 0x8c446ec8  lw          $a0, 0x6EC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x427670u;
    if (runtime->hasFunction(0x427670u)) {
        auto targetFn = runtime->lookupFunction(0x427670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1E84u; }
        if (ctx->pc != 0x3E1E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00427670_0x427670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1E84u; }
        if (ctx->pc != 0x3E1E84u) { return; }
    }
    ctx->pc = 0x3E1E84u;
label_3e1e84:
    // 0x3e1e84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e1e88:
    // 0x3e1e88: 0x8c4364c0  lw          $v1, 0x64C0($v0)
    ctx->pc = 0x3e1e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25792)));
label_3e1e8c:
    // 0x3e1e8c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_3e1e90:
    if (ctx->pc == 0x3E1E90u) {
        ctx->pc = 0x3E1E90u;
            // 0x3e1e90: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3E1E94u;
        goto label_3e1e94;
    }
    ctx->pc = 0x3E1E8Cu;
    {
        const bool branch_taken_0x3e1e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1e8c) {
            ctx->pc = 0x3E1E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1E8Cu;
            // 0x3e1e90: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E1EA0u;
            goto label_3e1ea0;
        }
    }
    ctx->pc = 0x3E1E94u;
label_3e1e94:
    // 0x3e1e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e1e98:
    // 0x3e1e98: 0xa0620091  sb          $v0, 0x91($v1)
    ctx->pc = 0x3e1e98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 145), (uint8_t)GPR_U32(ctx, 2));
label_3e1e9c:
    // 0x3e1e9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e1ea0:
    // 0x3e1ea0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e1ea4:
    // 0x3e1ea4: 0xae0302e4  sw          $v1, 0x2E4($s0)
    ctx->pc = 0x3e1ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 3));
label_3e1ea8:
    // 0x3e1ea8: 0x8e0502c4  lw          $a1, 0x2C4($s0)
    ctx->pc = 0x3e1ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
label_3e1eac:
    // 0x3e1eac: 0xc10e754  jal         func_439D50
label_3e1eb0:
    if (ctx->pc == 0x3E1EB0u) {
        ctx->pc = 0x3E1EB0u;
            // 0x3e1eb0: 0x8c446ec0  lw          $a0, 0x6EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28352)));
        ctx->pc = 0x3E1EB4u;
        goto label_3e1eb4;
    }
    ctx->pc = 0x3E1EACu;
    SET_GPR_U32(ctx, 31, 0x3E1EB4u);
    ctx->pc = 0x3E1EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1EACu;
            // 0x3e1eb0: 0x8c446ec0  lw          $a0, 0x6EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439D50u;
    if (runtime->hasFunction(0x439D50u)) {
        auto targetFn = runtime->lookupFunction(0x439D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1EB4u; }
        if (ctx->pc != 0x3E1EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439D50_0x439d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1EB4u; }
        if (ctx->pc != 0x3E1EB4u) { return; }
    }
    ctx->pc = 0x3E1EB4u;
label_3e1eb4:
    // 0x3e1eb4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e1eb8:
    // 0x3e1eb8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3e1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e1ebc:
    // 0x3e1ebc: 0x8c720e80  lw          $s2, 0xE80($v1)
    ctx->pc = 0x3e1ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e1ec0:
    // 0x3e1ec0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e1ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1ec4:
    // 0x3e1ec4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e1ec8:
    // 0x3e1ec8: 0x8e57077c  lw          $s7, 0x77C($s2)
    ctx->pc = 0x3e1ec8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
label_3e1ecc:
    // 0x3e1ecc: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3e1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3e1ed0:
    // 0x3e1ed0: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3e1ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3e1ed4:
    // 0x3e1ed4: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
label_3e1ed8:
    if (ctx->pc == 0x3E1ED8u) {
        ctx->pc = 0x3E1ED8u;
            // 0x3e1ed8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1EDCu;
        goto label_3e1edc;
    }
    ctx->pc = 0x3E1ED4u;
    {
        const bool branch_taken_0x3e1ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3E1ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1ED4u;
            // 0x3e1ed8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ed4) {
            ctx->pc = 0x3E1F04u;
            goto label_3e1f04;
        }
    }
    ctx->pc = 0x3E1EDCu;
label_3e1edc:
    // 0x3e1edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e1edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e1ee0:
    // 0x3e1ee0: 0x2241804  sllv        $v1, $a0, $s1
    ctx->pc = 0x3e1ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
label_3e1ee4:
    // 0x3e1ee4: 0x283a025  or          $s4, $s4, $v1
    ctx->pc = 0x3e1ee4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
label_3e1ee8:
    // 0x3e1ee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e1ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3e1eec:
    // 0x3e1eec: 0x237182a  slt         $v1, $s1, $s7
    ctx->pc = 0x3e1eecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3e1ef0:
    // 0x3e1ef0: 0x0  nop
    ctx->pc = 0x3e1ef0u;
    // NOP
label_3e1ef4:
    // 0x3e1ef4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3e1ef8:
    if (ctx->pc == 0x3E1EF8u) {
        ctx->pc = 0x3E1EFCu;
        goto label_3e1efc;
    }
    ctx->pc = 0x3E1EF4u;
    {
        const bool branch_taken_0x3e1ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1ef4) {
            ctx->pc = 0x3E1EE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e1ee0;
        }
    }
    ctx->pc = 0x3E1EFCu;
label_3e1efc:
    // 0x3e1efc: 0x1000000c  b           . + 4 + (0xC << 2)
label_3e1f00:
    if (ctx->pc == 0x3E1F00u) {
        ctx->pc = 0x3E1F04u;
        goto label_3e1f04;
    }
    ctx->pc = 0x3E1EFCu;
    {
        const bool branch_taken_0x3e1efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1efc) {
            ctx->pc = 0x3E1F30u;
            goto label_3e1f30;
        }
    }
    ctx->pc = 0x3E1F04u;
label_3e1f04:
    // 0x3e1f04: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3e1f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e1f08:
    // 0x3e1f08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e1f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e1f0c:
    // 0x3e1f0c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3e1f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3e1f10:
    // 0x3e1f10: 0x320f809  jalr        $t9
label_3e1f14:
    if (ctx->pc == 0x3E1F14u) {
        ctx->pc = 0x3E1F14u;
            // 0x3e1f14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F18u;
        goto label_3e1f18;
    }
    ctx->pc = 0x3E1F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E1F18u);
        ctx->pc = 0x3E1F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1F10u;
            // 0x3e1f14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E1F18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E1F18u; }
            if (ctx->pc != 0x3E1F18u) { return; }
        }
        }
    }
    ctx->pc = 0x3E1F18u;
label_3e1f18:
    // 0x3e1f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e1f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e1f1c:
    // 0x3e1f1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e1f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3e1f20:
    // 0x3e1f20: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x3e1f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3e1f24:
    // 0x3e1f24: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x3e1f24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e1f28:
    // 0x3e1f28: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3e1f2c:
    if (ctx->pc == 0x3E1F2Cu) {
        ctx->pc = 0x3E1F2Cu;
            // 0x3e1f2c: 0x284a025  or          $s4, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 4));
        ctx->pc = 0x3E1F30u;
        goto label_3e1f30;
    }
    ctx->pc = 0x3E1F28u;
    {
        const bool branch_taken_0x3e1f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1F28u;
            // 0x3e1f2c: 0x284a025  or          $s4, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f28) {
            ctx->pc = 0x3E1F04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e1f04;
        }
    }
    ctx->pc = 0x3E1F30u;
label_3e1f30:
    // 0x3e1f30: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x3e1f30u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_3e1f34:
    // 0x3e1f34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e1f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1f38:
    // 0x3e1f38: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x3e1f38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_3e1f3c:
    // 0x3e1f3c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3e1f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1f40:
    // 0x3e1f40: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x3e1f40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1f44:
    // 0x3e1f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e1f48:
    // 0x3e1f48: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x3e1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_3e1f4c:
    // 0x3e1f4c: 0x2831824  and         $v1, $s4, $v1
    ctx->pc = 0x3e1f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
label_3e1f50:
    // 0x3e1f50: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
label_3e1f54:
    if (ctx->pc == 0x3E1F54u) {
        ctx->pc = 0x3E1F58u;
        goto label_3e1f58;
    }
    ctx->pc = 0x3E1F50u;
    {
        const bool branch_taken_0x3e1f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1f50) {
            ctx->pc = 0x3E20B0u;
            goto label_3e20b0;
        }
    }
    ctx->pc = 0x3E1F58u;
label_3e1f58:
    // 0x3e1f58: 0x8e750004  lw          $s5, 0x4($s3)
    ctx->pc = 0x3e1f58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3e1f5c:
    // 0x3e1f5c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3e1f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3e1f60:
    // 0x3e1f60: 0xae400298  sw          $zero, 0x298($s2)
    ctx->pc = 0x3e1f60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 664), GPR_U32(ctx, 0));
label_3e1f64:
    // 0x3e1f64: 0x8ea40db0  lw          $a0, 0xDB0($s5)
    ctx->pc = 0x3e1f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
label_3e1f68:
    // 0x3e1f68: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_3e1f6c:
    if (ctx->pc == 0x3E1F6Cu) {
        ctx->pc = 0x3E1F70u;
        goto label_3e1f70;
    }
    ctx->pc = 0x3E1F68u;
    {
        const bool branch_taken_0x3e1f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e1f68) {
            ctx->pc = 0x3E1F78u;
            goto label_3e1f78;
        }
    }
    ctx->pc = 0x3E1F70u;
label_3e1f70:
    // 0x3e1f70: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x3e1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_3e1f74:
    // 0x3e1f74: 0xaec30298  sw          $v1, 0x298($s6)
    ctx->pc = 0x3e1f74u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 664), GPR_U32(ctx, 3));
label_3e1f78:
    // 0x3e1f78: 0x8ea40d70  lw          $a0, 0xD70($s5)
    ctx->pc = 0x3e1f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3440)));
label_3e1f7c:
    // 0x3e1f7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e1f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e1f80:
    // 0x3e1f80: 0x8c8300cc  lw          $v1, 0xCC($a0)
    ctx->pc = 0x3e1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_3e1f84:
    // 0x3e1f84: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3e1f84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e1f88:
    // 0x3e1f88: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
label_3e1f8c:
    if (ctx->pc == 0x3E1F8Cu) {
        ctx->pc = 0x3E1F90u;
        goto label_3e1f90;
    }
    ctx->pc = 0x3E1F88u;
    {
        const bool branch_taken_0x3e1f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3e1f88) {
            ctx->pc = 0x3E1FB0u;
            goto label_3e1fb0;
        }
    }
    ctx->pc = 0x3E1F90u;
label_3e1f90:
    // 0x3e1f90: 0x8ea60db0  lw          $a2, 0xDB0($s5)
    ctx->pc = 0x3e1f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
label_3e1f94:
    // 0x3e1f94: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3e1f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3e1f98:
    // 0x3e1f98: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
label_3e1f9c:
    if (ctx->pc == 0x3E1F9Cu) {
        ctx->pc = 0x3E1FA0u;
        goto label_3e1fa0;
    }
    ctx->pc = 0x3E1F98u;
    {
        const bool branch_taken_0x3e1f98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e1f98) {
            ctx->pc = 0x3E1FB0u;
            goto label_3e1fb0;
        }
    }
    ctx->pc = 0x3E1FA0u;
label_3e1fa0:
    // 0x3e1fa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e1fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e1fa4:
    // 0x3e1fa4: 0xc0bdf9c  jal         func_2F7E70
label_3e1fa8:
    if (ctx->pc == 0x3E1FA8u) {
        ctx->pc = 0x3E1FA8u;
            // 0x3e1fa8: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x3E1FACu;
        goto label_3e1fac;
    }
    ctx->pc = 0x3E1FA4u;
    SET_GPR_U32(ctx, 31, 0x3E1FACu);
    ctx->pc = 0x3E1FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1FA4u;
            // 0x3e1fa8: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1FACu; }
        if (ctx->pc != 0x3E1FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1FACu; }
        if (ctx->pc != 0x3E1FACu) { return; }
    }
    ctx->pc = 0x3E1FACu;
label_3e1fac:
    // 0x3e1fac: 0x0  nop
    ctx->pc = 0x3e1facu;
    // NOP
label_3e1fb0:
    // 0x3e1fb0: 0x8ea40db0  lw          $a0, 0xDB0($s5)
    ctx->pc = 0x3e1fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
label_3e1fb4:
    // 0x3e1fb4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3e1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3e1fb8:
    // 0x3e1fb8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_3e1fbc:
    if (ctx->pc == 0x3E1FBCu) {
        ctx->pc = 0x3E1FC0u;
        goto label_3e1fc0;
    }
    ctx->pc = 0x3E1FB8u;
    {
        const bool branch_taken_0x3e1fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e1fb8) {
            ctx->pc = 0x3E1FD8u;
            goto label_3e1fd8;
        }
    }
    ctx->pc = 0x3E1FC0u;
label_3e1fc0:
    // 0x3e1fc0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3e1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3e1fc4:
    // 0x3e1fc4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_3e1fc8:
    if (ctx->pc == 0x3E1FC8u) {
        ctx->pc = 0x3E1FCCu;
        goto label_3e1fcc;
    }
    ctx->pc = 0x3E1FC4u;
    {
        const bool branch_taken_0x3e1fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e1fc4) {
            ctx->pc = 0x3E1FD8u;
            goto label_3e1fd8;
        }
    }
    ctx->pc = 0x3E1FCCu;
label_3e1fcc:
    // 0x3e1fcc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3e1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3e1fd0:
    // 0x3e1fd0: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
label_3e1fd4:
    if (ctx->pc == 0x3E1FD4u) {
        ctx->pc = 0x3E1FD8u;
        goto label_3e1fd8;
    }
    ctx->pc = 0x3E1FD0u;
    {
        const bool branch_taken_0x3e1fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e1fd0) {
            ctx->pc = 0x3E20A8u;
            goto label_3e20a8;
        }
    }
    ctx->pc = 0x3E1FD8u;
label_3e1fd8:
    // 0x3e1fd8: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x3e1fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e1fdc:
    // 0x3e1fdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e1fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1fe0:
    // 0x3e1fe0: 0x0  nop
    ctx->pc = 0x3e1fe0u;
    // NOP
label_3e1fe4:
    // 0x3e1fe4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3e1fe4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e1fe8:
    // 0x3e1fe8: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_3e1fec:
    if (ctx->pc == 0x3E1FECu) {
        ctx->pc = 0x3E1FF0u;
        goto label_3e1ff0;
    }
    ctx->pc = 0x3E1FE8u;
    {
        const bool branch_taken_0x3e1fe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1fe8) {
            ctx->pc = 0x3E2090u;
            goto label_3e2090;
        }
    }
    ctx->pc = 0x3E1FF0u;
label_3e1ff0:
    // 0x3e1ff0: 0xc6a20a7c  lwc1        $f2, 0xA7C($s5)
    ctx->pc = 0x3e1ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e1ff4:
    // 0x3e1ff4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3e1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3e1ff8:
    // 0x3e1ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1ffc:
    // 0x3e1ffc: 0x0  nop
    ctx->pc = 0x3e1ffcu;
    // NOP
label_3e2000:
    // 0x3e2000: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3e2000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e2004:
    // 0x3e2004: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_3e2008:
    if (ctx->pc == 0x3E2008u) {
        ctx->pc = 0x3E200Cu;
        goto label_3e200c;
    }
    ctx->pc = 0x3E2004u;
    {
        const bool branch_taken_0x3e2004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e2004) {
            ctx->pc = 0x3E2018u;
            goto label_3e2018;
        }
    }
    ctx->pc = 0x3E200Cu;
label_3e200c:
    // 0x3e200c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3e2010:
    if (ctx->pc == 0x3E2010u) {
        ctx->pc = 0x3E2010u;
            // 0x3e2010: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3E2014u;
        goto label_3e2014;
    }
    ctx->pc = 0x3E200Cu;
    {
        const bool branch_taken_0x3e200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E200Cu;
            // 0x3e2010: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e200c) {
            ctx->pc = 0x3E2038u;
            goto label_3e2038;
        }
    }
    ctx->pc = 0x3E2014u;
label_3e2014:
    // 0x3e2014: 0x0  nop
    ctx->pc = 0x3e2014u;
    // NOP
label_3e2018:
    // 0x3e2018: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3e2018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3e201c:
    // 0x3e201c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e201cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e2020:
    // 0x3e2020: 0x0  nop
    ctx->pc = 0x3e2020u;
    // NOP
label_3e2024:
    // 0x3e2024: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3e2024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e2028:
    // 0x3e2028: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3e202c:
    if (ctx->pc == 0x3E202Cu) {
        ctx->pc = 0x3E2030u;
        goto label_3e2030;
    }
    ctx->pc = 0x3E2028u;
    {
        const bool branch_taken_0x3e2028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e2028) {
            ctx->pc = 0x3E2038u;
            goto label_3e2038;
        }
    }
    ctx->pc = 0x3E2030u;
label_3e2030:
    // 0x3e2030: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x3e2030u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_3e2034:
    // 0x3e2034: 0x0  nop
    ctx->pc = 0x3e2034u;
    // NOP
label_3e2038:
    // 0x3e2038: 0x3c023f08  lui         $v0, 0x3F08
    ctx->pc = 0x3e2038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16136 << 16));
label_3e203c:
    // 0x3e203c: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x3e203cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
label_3e2040:
    // 0x3e2040: 0x8ea60a5c  lw          $a2, 0xA5C($s5)
    ctx->pc = 0x3e2040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2652)));
label_3e2044:
    // 0x3e2044: 0x34434bdb  ori         $v1, $v0, 0x4BDB
    ctx->pc = 0x3e2044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19419);
label_3e2048:
    // 0x3e2048: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x3e2048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_3e204c:
    // 0x3e204c: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x3e204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_3e2050:
    // 0x3e2050: 0x3c04428c  lui         $a0, 0x428C
    ctx->pc = 0x3e2050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17036 << 16));
label_3e2054:
    // 0x3e2054: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3e2054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3e2058:
    // 0x3e2058: 0xe4c001c8  swc1        $f0, 0x1C8($a2)
    ctx->pc = 0x3e2058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 456), bits); }
label_3e205c:
    // 0x3e205c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e205cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e2060:
    // 0x3e2060: 0x0  nop
    ctx->pc = 0x3e2060u;
    // NOP
label_3e2064:
    // 0x3e2064: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x3e2064u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3e2068:
    // 0x3e2068: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e2068u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e206c:
    // 0x3e206c: 0x0  nop
    ctx->pc = 0x3e206cu;
    // NOP
label_3e2070:
    // 0x3e2070: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x3e2070u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_3e2074:
    // 0x3e2074: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e2074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e2078:
    // 0x3e2078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e2078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e207c:
    // 0x3e207c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e207cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e2080:
    // 0x3e2080: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3e2080u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3e2084:
    // 0x3e2084: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3e2084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3e2088:
    // 0x3e2088: 0xe4c001c0  swc1        $f0, 0x1C0($a2)
    ctx->pc = 0x3e2088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 448), bits); }
label_3e208c:
    // 0x3e208c: 0x0  nop
    ctx->pc = 0x3e208cu;
    // NOP
label_3e2090:
    // 0x3e2090: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3e2090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3e2094:
    // 0x3e2094: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e2094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e2098:
    // 0x3e2098: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3e2098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3e209c:
    // 0x3e209c: 0x320f809  jalr        $t9
label_3e20a0:
    if (ctx->pc == 0x3E20A0u) {
        ctx->pc = 0x3E20A0u;
            // 0x3e20a0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x3E20A4u;
        goto label_3e20a4;
    }
    ctx->pc = 0x3E209Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E20A4u);
        ctx->pc = 0x3E20A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E209Cu;
            // 0x3e20a0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E20A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E20A4u; }
            if (ctx->pc != 0x3E20A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3E20A4u;
label_3e20a4:
    // 0x3e20a4: 0x0  nop
    ctx->pc = 0x3e20a4u;
    // NOP
label_3e20a8:
    // 0x3e20a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e20a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e20ac:
    // 0x3e20ac: 0xaea30a70  sw          $v1, 0xA70($s5)
    ctx->pc = 0x3e20acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2672), GPR_U32(ctx, 3));
label_3e20b0:
    // 0x3e20b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e20b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3e20b4:
    // 0x3e20b4: 0x237182a  slt         $v1, $s1, $s7
    ctx->pc = 0x3e20b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3e20b8:
    // 0x3e20b8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3e20b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3e20bc:
    // 0x3e20bc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3e20bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3e20c0:
    // 0x3e20c0: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
label_3e20c4:
    if (ctx->pc == 0x3E20C4u) {
        ctx->pc = 0x3E20C4u;
            // 0x3e20c4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x3E20C8u;
        goto label_3e20c8;
    }
    ctx->pc = 0x3E20C0u;
    {
        const bool branch_taken_0x3e20c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E20C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E20C0u;
            // 0x3e20c4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e20c0) {
            ctx->pc = 0x3E1F44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e1f44;
        }
    }
    ctx->pc = 0x3E20C8u;
label_3e20c8:
    // 0x3e20c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e20c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e20cc:
    // 0x3e20cc: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3e20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_3e20d0:
    // 0x3e20d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3e20d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3e20d4:
    // 0x3e20d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3e20d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e20d8:
    // 0x3e20d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3e20d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e20dc:
    // 0x3e20dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e20dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e20e0:
    // 0x3e20e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e20e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e20e4:
    // 0x3e20e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e20e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e20e8:
    // 0x3e20e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e20e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e20ec:
    // 0x3e20ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e20ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e20f0:
    // 0x3e20f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e20f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e20f4:
    // 0x3e20f4: 0x3e00008  jr          $ra
label_3e20f8:
    if (ctx->pc == 0x3E20F8u) {
        ctx->pc = 0x3E20F8u;
            // 0x3e20f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3E20FCu;
        goto label_3e20fc;
    }
    ctx->pc = 0x3E20F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E20F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E20F4u;
            // 0x3e20f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E20FCu;
label_3e20fc:
    // 0x3e20fc: 0x0  nop
    ctx->pc = 0x3e20fcu;
    // NOP
}
