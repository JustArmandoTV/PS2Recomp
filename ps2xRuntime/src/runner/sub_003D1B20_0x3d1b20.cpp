#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D1B20
// Address: 0x3d1b20 - 0x3d2070
void sub_003D1B20_0x3d1b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1B20_0x3d1b20");
#endif

    switch (ctx->pc) {
        case 0x3d1b20u: goto label_3d1b20;
        case 0x3d1b24u: goto label_3d1b24;
        case 0x3d1b28u: goto label_3d1b28;
        case 0x3d1b2cu: goto label_3d1b2c;
        case 0x3d1b30u: goto label_3d1b30;
        case 0x3d1b34u: goto label_3d1b34;
        case 0x3d1b38u: goto label_3d1b38;
        case 0x3d1b3cu: goto label_3d1b3c;
        case 0x3d1b40u: goto label_3d1b40;
        case 0x3d1b44u: goto label_3d1b44;
        case 0x3d1b48u: goto label_3d1b48;
        case 0x3d1b4cu: goto label_3d1b4c;
        case 0x3d1b50u: goto label_3d1b50;
        case 0x3d1b54u: goto label_3d1b54;
        case 0x3d1b58u: goto label_3d1b58;
        case 0x3d1b5cu: goto label_3d1b5c;
        case 0x3d1b60u: goto label_3d1b60;
        case 0x3d1b64u: goto label_3d1b64;
        case 0x3d1b68u: goto label_3d1b68;
        case 0x3d1b6cu: goto label_3d1b6c;
        case 0x3d1b70u: goto label_3d1b70;
        case 0x3d1b74u: goto label_3d1b74;
        case 0x3d1b78u: goto label_3d1b78;
        case 0x3d1b7cu: goto label_3d1b7c;
        case 0x3d1b80u: goto label_3d1b80;
        case 0x3d1b84u: goto label_3d1b84;
        case 0x3d1b88u: goto label_3d1b88;
        case 0x3d1b8cu: goto label_3d1b8c;
        case 0x3d1b90u: goto label_3d1b90;
        case 0x3d1b94u: goto label_3d1b94;
        case 0x3d1b98u: goto label_3d1b98;
        case 0x3d1b9cu: goto label_3d1b9c;
        case 0x3d1ba0u: goto label_3d1ba0;
        case 0x3d1ba4u: goto label_3d1ba4;
        case 0x3d1ba8u: goto label_3d1ba8;
        case 0x3d1bacu: goto label_3d1bac;
        case 0x3d1bb0u: goto label_3d1bb0;
        case 0x3d1bb4u: goto label_3d1bb4;
        case 0x3d1bb8u: goto label_3d1bb8;
        case 0x3d1bbcu: goto label_3d1bbc;
        case 0x3d1bc0u: goto label_3d1bc0;
        case 0x3d1bc4u: goto label_3d1bc4;
        case 0x3d1bc8u: goto label_3d1bc8;
        case 0x3d1bccu: goto label_3d1bcc;
        case 0x3d1bd0u: goto label_3d1bd0;
        case 0x3d1bd4u: goto label_3d1bd4;
        case 0x3d1bd8u: goto label_3d1bd8;
        case 0x3d1bdcu: goto label_3d1bdc;
        case 0x3d1be0u: goto label_3d1be0;
        case 0x3d1be4u: goto label_3d1be4;
        case 0x3d1be8u: goto label_3d1be8;
        case 0x3d1becu: goto label_3d1bec;
        case 0x3d1bf0u: goto label_3d1bf0;
        case 0x3d1bf4u: goto label_3d1bf4;
        case 0x3d1bf8u: goto label_3d1bf8;
        case 0x3d1bfcu: goto label_3d1bfc;
        case 0x3d1c00u: goto label_3d1c00;
        case 0x3d1c04u: goto label_3d1c04;
        case 0x3d1c08u: goto label_3d1c08;
        case 0x3d1c0cu: goto label_3d1c0c;
        case 0x3d1c10u: goto label_3d1c10;
        case 0x3d1c14u: goto label_3d1c14;
        case 0x3d1c18u: goto label_3d1c18;
        case 0x3d1c1cu: goto label_3d1c1c;
        case 0x3d1c20u: goto label_3d1c20;
        case 0x3d1c24u: goto label_3d1c24;
        case 0x3d1c28u: goto label_3d1c28;
        case 0x3d1c2cu: goto label_3d1c2c;
        case 0x3d1c30u: goto label_3d1c30;
        case 0x3d1c34u: goto label_3d1c34;
        case 0x3d1c38u: goto label_3d1c38;
        case 0x3d1c3cu: goto label_3d1c3c;
        case 0x3d1c40u: goto label_3d1c40;
        case 0x3d1c44u: goto label_3d1c44;
        case 0x3d1c48u: goto label_3d1c48;
        case 0x3d1c4cu: goto label_3d1c4c;
        case 0x3d1c50u: goto label_3d1c50;
        case 0x3d1c54u: goto label_3d1c54;
        case 0x3d1c58u: goto label_3d1c58;
        case 0x3d1c5cu: goto label_3d1c5c;
        case 0x3d1c60u: goto label_3d1c60;
        case 0x3d1c64u: goto label_3d1c64;
        case 0x3d1c68u: goto label_3d1c68;
        case 0x3d1c6cu: goto label_3d1c6c;
        case 0x3d1c70u: goto label_3d1c70;
        case 0x3d1c74u: goto label_3d1c74;
        case 0x3d1c78u: goto label_3d1c78;
        case 0x3d1c7cu: goto label_3d1c7c;
        case 0x3d1c80u: goto label_3d1c80;
        case 0x3d1c84u: goto label_3d1c84;
        case 0x3d1c88u: goto label_3d1c88;
        case 0x3d1c8cu: goto label_3d1c8c;
        case 0x3d1c90u: goto label_3d1c90;
        case 0x3d1c94u: goto label_3d1c94;
        case 0x3d1c98u: goto label_3d1c98;
        case 0x3d1c9cu: goto label_3d1c9c;
        case 0x3d1ca0u: goto label_3d1ca0;
        case 0x3d1ca4u: goto label_3d1ca4;
        case 0x3d1ca8u: goto label_3d1ca8;
        case 0x3d1cacu: goto label_3d1cac;
        case 0x3d1cb0u: goto label_3d1cb0;
        case 0x3d1cb4u: goto label_3d1cb4;
        case 0x3d1cb8u: goto label_3d1cb8;
        case 0x3d1cbcu: goto label_3d1cbc;
        case 0x3d1cc0u: goto label_3d1cc0;
        case 0x3d1cc4u: goto label_3d1cc4;
        case 0x3d1cc8u: goto label_3d1cc8;
        case 0x3d1cccu: goto label_3d1ccc;
        case 0x3d1cd0u: goto label_3d1cd0;
        case 0x3d1cd4u: goto label_3d1cd4;
        case 0x3d1cd8u: goto label_3d1cd8;
        case 0x3d1cdcu: goto label_3d1cdc;
        case 0x3d1ce0u: goto label_3d1ce0;
        case 0x3d1ce4u: goto label_3d1ce4;
        case 0x3d1ce8u: goto label_3d1ce8;
        case 0x3d1cecu: goto label_3d1cec;
        case 0x3d1cf0u: goto label_3d1cf0;
        case 0x3d1cf4u: goto label_3d1cf4;
        case 0x3d1cf8u: goto label_3d1cf8;
        case 0x3d1cfcu: goto label_3d1cfc;
        case 0x3d1d00u: goto label_3d1d00;
        case 0x3d1d04u: goto label_3d1d04;
        case 0x3d1d08u: goto label_3d1d08;
        case 0x3d1d0cu: goto label_3d1d0c;
        case 0x3d1d10u: goto label_3d1d10;
        case 0x3d1d14u: goto label_3d1d14;
        case 0x3d1d18u: goto label_3d1d18;
        case 0x3d1d1cu: goto label_3d1d1c;
        case 0x3d1d20u: goto label_3d1d20;
        case 0x3d1d24u: goto label_3d1d24;
        case 0x3d1d28u: goto label_3d1d28;
        case 0x3d1d2cu: goto label_3d1d2c;
        case 0x3d1d30u: goto label_3d1d30;
        case 0x3d1d34u: goto label_3d1d34;
        case 0x3d1d38u: goto label_3d1d38;
        case 0x3d1d3cu: goto label_3d1d3c;
        case 0x3d1d40u: goto label_3d1d40;
        case 0x3d1d44u: goto label_3d1d44;
        case 0x3d1d48u: goto label_3d1d48;
        case 0x3d1d4cu: goto label_3d1d4c;
        case 0x3d1d50u: goto label_3d1d50;
        case 0x3d1d54u: goto label_3d1d54;
        case 0x3d1d58u: goto label_3d1d58;
        case 0x3d1d5cu: goto label_3d1d5c;
        case 0x3d1d60u: goto label_3d1d60;
        case 0x3d1d64u: goto label_3d1d64;
        case 0x3d1d68u: goto label_3d1d68;
        case 0x3d1d6cu: goto label_3d1d6c;
        case 0x3d1d70u: goto label_3d1d70;
        case 0x3d1d74u: goto label_3d1d74;
        case 0x3d1d78u: goto label_3d1d78;
        case 0x3d1d7cu: goto label_3d1d7c;
        case 0x3d1d80u: goto label_3d1d80;
        case 0x3d1d84u: goto label_3d1d84;
        case 0x3d1d88u: goto label_3d1d88;
        case 0x3d1d8cu: goto label_3d1d8c;
        case 0x3d1d90u: goto label_3d1d90;
        case 0x3d1d94u: goto label_3d1d94;
        case 0x3d1d98u: goto label_3d1d98;
        case 0x3d1d9cu: goto label_3d1d9c;
        case 0x3d1da0u: goto label_3d1da0;
        case 0x3d1da4u: goto label_3d1da4;
        case 0x3d1da8u: goto label_3d1da8;
        case 0x3d1dacu: goto label_3d1dac;
        case 0x3d1db0u: goto label_3d1db0;
        case 0x3d1db4u: goto label_3d1db4;
        case 0x3d1db8u: goto label_3d1db8;
        case 0x3d1dbcu: goto label_3d1dbc;
        case 0x3d1dc0u: goto label_3d1dc0;
        case 0x3d1dc4u: goto label_3d1dc4;
        case 0x3d1dc8u: goto label_3d1dc8;
        case 0x3d1dccu: goto label_3d1dcc;
        case 0x3d1dd0u: goto label_3d1dd0;
        case 0x3d1dd4u: goto label_3d1dd4;
        case 0x3d1dd8u: goto label_3d1dd8;
        case 0x3d1ddcu: goto label_3d1ddc;
        case 0x3d1de0u: goto label_3d1de0;
        case 0x3d1de4u: goto label_3d1de4;
        case 0x3d1de8u: goto label_3d1de8;
        case 0x3d1decu: goto label_3d1dec;
        case 0x3d1df0u: goto label_3d1df0;
        case 0x3d1df4u: goto label_3d1df4;
        case 0x3d1df8u: goto label_3d1df8;
        case 0x3d1dfcu: goto label_3d1dfc;
        case 0x3d1e00u: goto label_3d1e00;
        case 0x3d1e04u: goto label_3d1e04;
        case 0x3d1e08u: goto label_3d1e08;
        case 0x3d1e0cu: goto label_3d1e0c;
        case 0x3d1e10u: goto label_3d1e10;
        case 0x3d1e14u: goto label_3d1e14;
        case 0x3d1e18u: goto label_3d1e18;
        case 0x3d1e1cu: goto label_3d1e1c;
        case 0x3d1e20u: goto label_3d1e20;
        case 0x3d1e24u: goto label_3d1e24;
        case 0x3d1e28u: goto label_3d1e28;
        case 0x3d1e2cu: goto label_3d1e2c;
        case 0x3d1e30u: goto label_3d1e30;
        case 0x3d1e34u: goto label_3d1e34;
        case 0x3d1e38u: goto label_3d1e38;
        case 0x3d1e3cu: goto label_3d1e3c;
        case 0x3d1e40u: goto label_3d1e40;
        case 0x3d1e44u: goto label_3d1e44;
        case 0x3d1e48u: goto label_3d1e48;
        case 0x3d1e4cu: goto label_3d1e4c;
        case 0x3d1e50u: goto label_3d1e50;
        case 0x3d1e54u: goto label_3d1e54;
        case 0x3d1e58u: goto label_3d1e58;
        case 0x3d1e5cu: goto label_3d1e5c;
        case 0x3d1e60u: goto label_3d1e60;
        case 0x3d1e64u: goto label_3d1e64;
        case 0x3d1e68u: goto label_3d1e68;
        case 0x3d1e6cu: goto label_3d1e6c;
        case 0x3d1e70u: goto label_3d1e70;
        case 0x3d1e74u: goto label_3d1e74;
        case 0x3d1e78u: goto label_3d1e78;
        case 0x3d1e7cu: goto label_3d1e7c;
        case 0x3d1e80u: goto label_3d1e80;
        case 0x3d1e84u: goto label_3d1e84;
        case 0x3d1e88u: goto label_3d1e88;
        case 0x3d1e8cu: goto label_3d1e8c;
        case 0x3d1e90u: goto label_3d1e90;
        case 0x3d1e94u: goto label_3d1e94;
        case 0x3d1e98u: goto label_3d1e98;
        case 0x3d1e9cu: goto label_3d1e9c;
        case 0x3d1ea0u: goto label_3d1ea0;
        case 0x3d1ea4u: goto label_3d1ea4;
        case 0x3d1ea8u: goto label_3d1ea8;
        case 0x3d1eacu: goto label_3d1eac;
        case 0x3d1eb0u: goto label_3d1eb0;
        case 0x3d1eb4u: goto label_3d1eb4;
        case 0x3d1eb8u: goto label_3d1eb8;
        case 0x3d1ebcu: goto label_3d1ebc;
        case 0x3d1ec0u: goto label_3d1ec0;
        case 0x3d1ec4u: goto label_3d1ec4;
        case 0x3d1ec8u: goto label_3d1ec8;
        case 0x3d1eccu: goto label_3d1ecc;
        case 0x3d1ed0u: goto label_3d1ed0;
        case 0x3d1ed4u: goto label_3d1ed4;
        case 0x3d1ed8u: goto label_3d1ed8;
        case 0x3d1edcu: goto label_3d1edc;
        case 0x3d1ee0u: goto label_3d1ee0;
        case 0x3d1ee4u: goto label_3d1ee4;
        case 0x3d1ee8u: goto label_3d1ee8;
        case 0x3d1eecu: goto label_3d1eec;
        case 0x3d1ef0u: goto label_3d1ef0;
        case 0x3d1ef4u: goto label_3d1ef4;
        case 0x3d1ef8u: goto label_3d1ef8;
        case 0x3d1efcu: goto label_3d1efc;
        case 0x3d1f00u: goto label_3d1f00;
        case 0x3d1f04u: goto label_3d1f04;
        case 0x3d1f08u: goto label_3d1f08;
        case 0x3d1f0cu: goto label_3d1f0c;
        case 0x3d1f10u: goto label_3d1f10;
        case 0x3d1f14u: goto label_3d1f14;
        case 0x3d1f18u: goto label_3d1f18;
        case 0x3d1f1cu: goto label_3d1f1c;
        case 0x3d1f20u: goto label_3d1f20;
        case 0x3d1f24u: goto label_3d1f24;
        case 0x3d1f28u: goto label_3d1f28;
        case 0x3d1f2cu: goto label_3d1f2c;
        case 0x3d1f30u: goto label_3d1f30;
        case 0x3d1f34u: goto label_3d1f34;
        case 0x3d1f38u: goto label_3d1f38;
        case 0x3d1f3cu: goto label_3d1f3c;
        case 0x3d1f40u: goto label_3d1f40;
        case 0x3d1f44u: goto label_3d1f44;
        case 0x3d1f48u: goto label_3d1f48;
        case 0x3d1f4cu: goto label_3d1f4c;
        case 0x3d1f50u: goto label_3d1f50;
        case 0x3d1f54u: goto label_3d1f54;
        case 0x3d1f58u: goto label_3d1f58;
        case 0x3d1f5cu: goto label_3d1f5c;
        case 0x3d1f60u: goto label_3d1f60;
        case 0x3d1f64u: goto label_3d1f64;
        case 0x3d1f68u: goto label_3d1f68;
        case 0x3d1f6cu: goto label_3d1f6c;
        case 0x3d1f70u: goto label_3d1f70;
        case 0x3d1f74u: goto label_3d1f74;
        case 0x3d1f78u: goto label_3d1f78;
        case 0x3d1f7cu: goto label_3d1f7c;
        case 0x3d1f80u: goto label_3d1f80;
        case 0x3d1f84u: goto label_3d1f84;
        case 0x3d1f88u: goto label_3d1f88;
        case 0x3d1f8cu: goto label_3d1f8c;
        case 0x3d1f90u: goto label_3d1f90;
        case 0x3d1f94u: goto label_3d1f94;
        case 0x3d1f98u: goto label_3d1f98;
        case 0x3d1f9cu: goto label_3d1f9c;
        case 0x3d1fa0u: goto label_3d1fa0;
        case 0x3d1fa4u: goto label_3d1fa4;
        case 0x3d1fa8u: goto label_3d1fa8;
        case 0x3d1facu: goto label_3d1fac;
        case 0x3d1fb0u: goto label_3d1fb0;
        case 0x3d1fb4u: goto label_3d1fb4;
        case 0x3d1fb8u: goto label_3d1fb8;
        case 0x3d1fbcu: goto label_3d1fbc;
        case 0x3d1fc0u: goto label_3d1fc0;
        case 0x3d1fc4u: goto label_3d1fc4;
        case 0x3d1fc8u: goto label_3d1fc8;
        case 0x3d1fccu: goto label_3d1fcc;
        case 0x3d1fd0u: goto label_3d1fd0;
        case 0x3d1fd4u: goto label_3d1fd4;
        case 0x3d1fd8u: goto label_3d1fd8;
        case 0x3d1fdcu: goto label_3d1fdc;
        case 0x3d1fe0u: goto label_3d1fe0;
        case 0x3d1fe4u: goto label_3d1fe4;
        case 0x3d1fe8u: goto label_3d1fe8;
        case 0x3d1fecu: goto label_3d1fec;
        case 0x3d1ff0u: goto label_3d1ff0;
        case 0x3d1ff4u: goto label_3d1ff4;
        case 0x3d1ff8u: goto label_3d1ff8;
        case 0x3d1ffcu: goto label_3d1ffc;
        case 0x3d2000u: goto label_3d2000;
        case 0x3d2004u: goto label_3d2004;
        case 0x3d2008u: goto label_3d2008;
        case 0x3d200cu: goto label_3d200c;
        case 0x3d2010u: goto label_3d2010;
        case 0x3d2014u: goto label_3d2014;
        case 0x3d2018u: goto label_3d2018;
        case 0x3d201cu: goto label_3d201c;
        case 0x3d2020u: goto label_3d2020;
        case 0x3d2024u: goto label_3d2024;
        case 0x3d2028u: goto label_3d2028;
        case 0x3d202cu: goto label_3d202c;
        case 0x3d2030u: goto label_3d2030;
        case 0x3d2034u: goto label_3d2034;
        case 0x3d2038u: goto label_3d2038;
        case 0x3d203cu: goto label_3d203c;
        case 0x3d2040u: goto label_3d2040;
        case 0x3d2044u: goto label_3d2044;
        case 0x3d2048u: goto label_3d2048;
        case 0x3d204cu: goto label_3d204c;
        case 0x3d2050u: goto label_3d2050;
        case 0x3d2054u: goto label_3d2054;
        case 0x3d2058u: goto label_3d2058;
        case 0x3d205cu: goto label_3d205c;
        case 0x3d2060u: goto label_3d2060;
        case 0x3d2064u: goto label_3d2064;
        case 0x3d2068u: goto label_3d2068;
        case 0x3d206cu: goto label_3d206c;
        default: break;
    }

    ctx->pc = 0x3d1b20u;

label_3d1b20:
    // 0x3d1b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d1b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d1b24:
    // 0x3d1b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d1b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d1b28:
    // 0x3d1b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d1b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d1b2c:
    // 0x3d1b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d1b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d1b30:
    // 0x3d1b30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d1b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d1b34:
    // 0x3d1b34: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3d1b38:
    if (ctx->pc == 0x3D1B38u) {
        ctx->pc = 0x3D1B38u;
            // 0x3d1b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D1B3Cu;
        goto label_3d1b3c;
    }
    ctx->pc = 0x3D1B34u;
    {
        const bool branch_taken_0x3d1b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1B34u;
            // 0x3d1b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1b34) {
            ctx->pc = 0x3D1C68u;
            goto label_3d1c68;
        }
    }
    ctx->pc = 0x3D1B3Cu;
label_3d1b3c:
    // 0x3d1b3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d1b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d1b40:
    // 0x3d1b40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d1b44:
    // 0x3d1b44: 0x24639280  addiu       $v1, $v1, -0x6D80
    ctx->pc = 0x3d1b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939264));
label_3d1b48:
    // 0x3d1b48: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x3d1b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_3d1b4c:
    // 0x3d1b4c: 0x244292b8  addiu       $v0, $v0, -0x6D48
    ctx->pc = 0x3d1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939320));
label_3d1b50:
    // 0x3d1b50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d1b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d1b54:
    // 0x3d1b54: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3d1b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3d1b58:
    // 0x3d1b58: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3d1b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3d1b5c:
    // 0x3d1b5c: 0xc0407c0  jal         func_101F00
label_3d1b60:
    if (ctx->pc == 0x3D1B60u) {
        ctx->pc = 0x3D1B60u;
            // 0x3d1b60: 0x24a56f00  addiu       $a1, $a1, 0x6F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28416));
        ctx->pc = 0x3D1B64u;
        goto label_3d1b64;
    }
    ctx->pc = 0x3D1B5Cu;
    SET_GPR_U32(ctx, 31, 0x3D1B64u);
    ctx->pc = 0x3D1B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1B5Cu;
            // 0x3d1b60: 0x24a56f00  addiu       $a1, $a1, 0x6F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1B64u; }
        if (ctx->pc != 0x3D1B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1B64u; }
        if (ctx->pc != 0x3D1B64u) { return; }
    }
    ctx->pc = 0x3D1B64u;
label_3d1b64:
    // 0x3d1b64: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3d1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3d1b68:
    // 0x3d1b68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3d1b6c:
    if (ctx->pc == 0x3D1B6Cu) {
        ctx->pc = 0x3D1B6Cu;
            // 0x3d1b6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3D1B70u;
        goto label_3d1b70;
    }
    ctx->pc = 0x3D1B68u;
    {
        const bool branch_taken_0x3d1b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1b68) {
            ctx->pc = 0x3D1B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1B68u;
            // 0x3d1b6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1B7Cu;
            goto label_3d1b7c;
        }
    }
    ctx->pc = 0x3D1B70u;
label_3d1b70:
    // 0x3d1b70: 0xc07507c  jal         func_1D41F0
label_3d1b74:
    if (ctx->pc == 0x3D1B74u) {
        ctx->pc = 0x3D1B74u;
            // 0x3d1b74: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3D1B78u;
        goto label_3d1b78;
    }
    ctx->pc = 0x3D1B70u;
    SET_GPR_U32(ctx, 31, 0x3D1B78u);
    ctx->pc = 0x3D1B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1B70u;
            // 0x3d1b74: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1B78u; }
        if (ctx->pc != 0x3D1B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1B78u; }
        if (ctx->pc != 0x3D1B78u) { return; }
    }
    ctx->pc = 0x3D1B78u;
label_3d1b78:
    // 0x3d1b78: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3d1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3d1b7c:
    // 0x3d1b7c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3d1b80:
    if (ctx->pc == 0x3D1B80u) {
        ctx->pc = 0x3D1B80u;
            // 0x3d1b80: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3D1B84u;
        goto label_3d1b84;
    }
    ctx->pc = 0x3D1B7Cu;
    {
        const bool branch_taken_0x3d1b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1b7c) {
            ctx->pc = 0x3D1B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1B7Cu;
            // 0x3d1b80: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1BACu;
            goto label_3d1bac;
        }
    }
    ctx->pc = 0x3D1B84u;
label_3d1b84:
    // 0x3d1b84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3d1b88:
    if (ctx->pc == 0x3D1B88u) {
        ctx->pc = 0x3D1B8Cu;
        goto label_3d1b8c;
    }
    ctx->pc = 0x3D1B84u;
    {
        const bool branch_taken_0x3d1b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1b84) {
            ctx->pc = 0x3D1BA8u;
            goto label_3d1ba8;
        }
    }
    ctx->pc = 0x3D1B8Cu;
label_3d1b8c:
    // 0x3d1b8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d1b90:
    if (ctx->pc == 0x3D1B90u) {
        ctx->pc = 0x3D1B94u;
        goto label_3d1b94;
    }
    ctx->pc = 0x3D1B8Cu;
    {
        const bool branch_taken_0x3d1b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1b8c) {
            ctx->pc = 0x3D1BA8u;
            goto label_3d1ba8;
        }
    }
    ctx->pc = 0x3D1B94u;
label_3d1b94:
    // 0x3d1b94: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3d1b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3d1b98:
    // 0x3d1b98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3d1b9c:
    if (ctx->pc == 0x3D1B9Cu) {
        ctx->pc = 0x3D1BA0u;
        goto label_3d1ba0;
    }
    ctx->pc = 0x3D1B98u;
    {
        const bool branch_taken_0x3d1b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1b98) {
            ctx->pc = 0x3D1BA8u;
            goto label_3d1ba8;
        }
    }
    ctx->pc = 0x3D1BA0u;
label_3d1ba0:
    // 0x3d1ba0: 0xc0400a8  jal         func_1002A0
label_3d1ba4:
    if (ctx->pc == 0x3D1BA4u) {
        ctx->pc = 0x3D1BA8u;
        goto label_3d1ba8;
    }
    ctx->pc = 0x3D1BA0u;
    SET_GPR_U32(ctx, 31, 0x3D1BA8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1BA8u; }
        if (ctx->pc != 0x3D1BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1BA8u; }
        if (ctx->pc != 0x3D1BA8u) { return; }
    }
    ctx->pc = 0x3D1BA8u;
label_3d1ba8:
    // 0x3d1ba8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3d1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3d1bac:
    // 0x3d1bac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3d1bb0:
    if (ctx->pc == 0x3D1BB0u) {
        ctx->pc = 0x3D1BB0u;
            // 0x3d1bb0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3D1BB4u;
        goto label_3d1bb4;
    }
    ctx->pc = 0x3D1BACu;
    {
        const bool branch_taken_0x3d1bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1bac) {
            ctx->pc = 0x3D1BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1BACu;
            // 0x3d1bb0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1BDCu;
            goto label_3d1bdc;
        }
    }
    ctx->pc = 0x3D1BB4u;
label_3d1bb4:
    // 0x3d1bb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3d1bb8:
    if (ctx->pc == 0x3D1BB8u) {
        ctx->pc = 0x3D1BBCu;
        goto label_3d1bbc;
    }
    ctx->pc = 0x3D1BB4u;
    {
        const bool branch_taken_0x3d1bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1bb4) {
            ctx->pc = 0x3D1BD8u;
            goto label_3d1bd8;
        }
    }
    ctx->pc = 0x3D1BBCu;
label_3d1bbc:
    // 0x3d1bbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d1bc0:
    if (ctx->pc == 0x3D1BC0u) {
        ctx->pc = 0x3D1BC4u;
        goto label_3d1bc4;
    }
    ctx->pc = 0x3D1BBCu;
    {
        const bool branch_taken_0x3d1bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1bbc) {
            ctx->pc = 0x3D1BD8u;
            goto label_3d1bd8;
        }
    }
    ctx->pc = 0x3D1BC4u;
label_3d1bc4:
    // 0x3d1bc4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3d1bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3d1bc8:
    // 0x3d1bc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3d1bcc:
    if (ctx->pc == 0x3D1BCCu) {
        ctx->pc = 0x3D1BD0u;
        goto label_3d1bd0;
    }
    ctx->pc = 0x3D1BC8u;
    {
        const bool branch_taken_0x3d1bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1bc8) {
            ctx->pc = 0x3D1BD8u;
            goto label_3d1bd8;
        }
    }
    ctx->pc = 0x3D1BD0u;
label_3d1bd0:
    // 0x3d1bd0: 0xc0400a8  jal         func_1002A0
label_3d1bd4:
    if (ctx->pc == 0x3D1BD4u) {
        ctx->pc = 0x3D1BD8u;
        goto label_3d1bd8;
    }
    ctx->pc = 0x3D1BD0u;
    SET_GPR_U32(ctx, 31, 0x3D1BD8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1BD8u; }
        if (ctx->pc != 0x3D1BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1BD8u; }
        if (ctx->pc != 0x3D1BD8u) { return; }
    }
    ctx->pc = 0x3D1BD8u;
label_3d1bd8:
    // 0x3d1bd8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3d1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3d1bdc:
    // 0x3d1bdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d1be0:
    if (ctx->pc == 0x3D1BE0u) {
        ctx->pc = 0x3D1BE4u;
        goto label_3d1be4;
    }
    ctx->pc = 0x3D1BDCu;
    {
        const bool branch_taken_0x3d1bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1bdc) {
            ctx->pc = 0x3D1BF8u;
            goto label_3d1bf8;
        }
    }
    ctx->pc = 0x3D1BE4u;
label_3d1be4:
    // 0x3d1be4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d1be8:
    // 0x3d1be8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d1bec:
    // 0x3d1bec: 0x24639268  addiu       $v1, $v1, -0x6D98
    ctx->pc = 0x3d1becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939240));
label_3d1bf0:
    // 0x3d1bf0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3d1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3d1bf4:
    // 0x3d1bf4: 0xac406ea0  sw          $zero, 0x6EA0($v0)
    ctx->pc = 0x3d1bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28320), GPR_U32(ctx, 0));
label_3d1bf8:
    // 0x3d1bf8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3d1bfc:
    if (ctx->pc == 0x3D1BFCu) {
        ctx->pc = 0x3D1BFCu;
            // 0x3d1bfc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3D1C00u;
        goto label_3d1c00;
    }
    ctx->pc = 0x3D1BF8u;
    {
        const bool branch_taken_0x3d1bf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1bf8) {
            ctx->pc = 0x3D1BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1BF8u;
            // 0x3d1bfc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1C54u;
            goto label_3d1c54;
        }
    }
    ctx->pc = 0x3D1C00u;
label_3d1c00:
    // 0x3d1c00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d1c04:
    // 0x3d1c04: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3d1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3d1c08:
    // 0x3d1c08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d1c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3d1c0c:
    // 0x3d1c0c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3d1c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3d1c10:
    // 0x3d1c10: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d1c14:
    if (ctx->pc == 0x3D1C14u) {
        ctx->pc = 0x3D1C14u;
            // 0x3d1c14: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3D1C18u;
        goto label_3d1c18;
    }
    ctx->pc = 0x3D1C10u;
    {
        const bool branch_taken_0x3d1c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1c10) {
            ctx->pc = 0x3D1C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1C10u;
            // 0x3d1c14: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1C2Cu;
            goto label_3d1c2c;
        }
    }
    ctx->pc = 0x3D1C18u;
label_3d1c18:
    // 0x3d1c18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d1c18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d1c1c:
    // 0x3d1c1c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d1c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d1c20:
    // 0x3d1c20: 0x320f809  jalr        $t9
label_3d1c24:
    if (ctx->pc == 0x3D1C24u) {
        ctx->pc = 0x3D1C24u;
            // 0x3d1c24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D1C28u;
        goto label_3d1c28;
    }
    ctx->pc = 0x3D1C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D1C28u);
        ctx->pc = 0x3D1C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1C20u;
            // 0x3d1c24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D1C28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D1C28u; }
            if (ctx->pc != 0x3D1C28u) { return; }
        }
        }
    }
    ctx->pc = 0x3D1C28u;
label_3d1c28:
    // 0x3d1c28: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3d1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3d1c2c:
    // 0x3d1c2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d1c30:
    if (ctx->pc == 0x3D1C30u) {
        ctx->pc = 0x3D1C30u;
            // 0x3d1c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C34u;
        goto label_3d1c34;
    }
    ctx->pc = 0x3D1C2Cu;
    {
        const bool branch_taken_0x3d1c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1c2c) {
            ctx->pc = 0x3D1C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1C2Cu;
            // 0x3d1c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1C48u;
            goto label_3d1c48;
        }
    }
    ctx->pc = 0x3D1C34u;
label_3d1c34:
    // 0x3d1c34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d1c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d1c38:
    // 0x3d1c38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d1c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d1c3c:
    // 0x3d1c3c: 0x320f809  jalr        $t9
label_3d1c40:
    if (ctx->pc == 0x3D1C40u) {
        ctx->pc = 0x3D1C40u;
            // 0x3d1c40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D1C44u;
        goto label_3d1c44;
    }
    ctx->pc = 0x3D1C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D1C44u);
        ctx->pc = 0x3D1C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1C3Cu;
            // 0x3d1c40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D1C44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D1C44u; }
            if (ctx->pc != 0x3D1C44u) { return; }
        }
        }
    }
    ctx->pc = 0x3D1C44u;
label_3d1c44:
    // 0x3d1c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1c48:
    // 0x3d1c48: 0xc075bf8  jal         func_1D6FE0
label_3d1c4c:
    if (ctx->pc == 0x3D1C4Cu) {
        ctx->pc = 0x3D1C4Cu;
            // 0x3d1c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C50u;
        goto label_3d1c50;
    }
    ctx->pc = 0x3D1C48u;
    SET_GPR_U32(ctx, 31, 0x3D1C50u);
    ctx->pc = 0x3D1C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1C48u;
            // 0x3d1c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1C50u; }
        if (ctx->pc != 0x3D1C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1C50u; }
        if (ctx->pc != 0x3D1C50u) { return; }
    }
    ctx->pc = 0x3D1C50u;
label_3d1c50:
    // 0x3d1c50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3d1c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3d1c54:
    // 0x3d1c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d1c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d1c58:
    // 0x3d1c58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d1c5c:
    if (ctx->pc == 0x3D1C5Cu) {
        ctx->pc = 0x3D1C5Cu;
            // 0x3d1c5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C60u;
        goto label_3d1c60;
    }
    ctx->pc = 0x3D1C58u;
    {
        const bool branch_taken_0x3d1c58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d1c58) {
            ctx->pc = 0x3D1C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1C58u;
            // 0x3d1c5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1C6Cu;
            goto label_3d1c6c;
        }
    }
    ctx->pc = 0x3D1C60u;
label_3d1c60:
    // 0x3d1c60: 0xc0400a8  jal         func_1002A0
label_3d1c64:
    if (ctx->pc == 0x3D1C64u) {
        ctx->pc = 0x3D1C64u;
            // 0x3d1c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C68u;
        goto label_3d1c68;
    }
    ctx->pc = 0x3D1C60u;
    SET_GPR_U32(ctx, 31, 0x3D1C68u);
    ctx->pc = 0x3D1C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1C60u;
            // 0x3d1c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1C68u; }
        if (ctx->pc != 0x3D1C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1C68u; }
        if (ctx->pc != 0x3D1C68u) { return; }
    }
    ctx->pc = 0x3D1C68u;
label_3d1c68:
    // 0x3d1c68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d1c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1c6c:
    // 0x3d1c6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d1c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1c70:
    // 0x3d1c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d1c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1c74:
    // 0x3d1c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d1c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1c78:
    // 0x3d1c78: 0x3e00008  jr          $ra
label_3d1c7c:
    if (ctx->pc == 0x3D1C7Cu) {
        ctx->pc = 0x3D1C7Cu;
            // 0x3d1c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D1C80u;
        goto label_3d1c80;
    }
    ctx->pc = 0x3D1C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1C78u;
            // 0x3d1c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D1C80u;
label_3d1c80:
    // 0x3d1c80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3d1c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3d1c84:
    // 0x3d1c84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d1c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3d1c88:
    // 0x3d1c88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d1c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3d1c8c:
    // 0x3d1c8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d1c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3d1c90:
    // 0x3d1c90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d1c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d1c94:
    // 0x3d1c94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d1c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d1c98:
    // 0x3d1c98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d1c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d1c9c:
    // 0x3d1c9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d1c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d1ca0:
    // 0x3d1ca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d1ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d1ca4:
    // 0x3d1ca4: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x3d1ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3d1ca8:
    // 0x3d1ca8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3d1ca8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d1cac:
    // 0x3d1cac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d1cb0:
    // 0x3d1cb0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3d1cb4:
    if (ctx->pc == 0x3D1CB4u) {
        ctx->pc = 0x3D1CB4u;
            // 0x3d1cb4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D1CB8u;
        goto label_3d1cb8;
    }
    ctx->pc = 0x3D1CB0u;
    {
        const bool branch_taken_0x3d1cb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D1CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1CB0u;
            // 0x3d1cb4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1cb0) {
            ctx->pc = 0x3D1CF4u;
            goto label_3d1cf4;
        }
    }
    ctx->pc = 0x3D1CB8u;
label_3d1cb8:
    // 0x3d1cb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d1cbc:
    // 0x3d1cbc: 0x50a3004d  beql        $a1, $v1, . + 4 + (0x4D << 2)
label_3d1cc0:
    if (ctx->pc == 0x3D1CC0u) {
        ctx->pc = 0x3D1CC0u;
            // 0x3d1cc0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3D1CC4u;
        goto label_3d1cc4;
    }
    ctx->pc = 0x3D1CBCu;
    {
        const bool branch_taken_0x3d1cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d1cbc) {
            ctx->pc = 0x3D1CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1CBCu;
            // 0x3d1cc0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1DF4u;
            goto label_3d1df4;
        }
    }
    ctx->pc = 0x3D1CC4u;
label_3d1cc4:
    // 0x3d1cc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d1cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d1cc8:
    // 0x3d1cc8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3d1ccc:
    if (ctx->pc == 0x3D1CCCu) {
        ctx->pc = 0x3D1CCCu;
            // 0x3d1ccc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D1CD0u;
        goto label_3d1cd0;
    }
    ctx->pc = 0x3D1CC8u;
    {
        const bool branch_taken_0x3d1cc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d1cc8) {
            ctx->pc = 0x3D1CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1CC8u;
            // 0x3d1ccc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1CD8u;
            goto label_3d1cd8;
        }
    }
    ctx->pc = 0x3D1CD0u;
label_3d1cd0:
    // 0x3d1cd0: 0x10000047  b           . + 4 + (0x47 << 2)
label_3d1cd4:
    if (ctx->pc == 0x3D1CD4u) {
        ctx->pc = 0x3D1CD8u;
        goto label_3d1cd8;
    }
    ctx->pc = 0x3D1CD0u;
    {
        const bool branch_taken_0x3d1cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1cd0) {
            ctx->pc = 0x3D1DF0u;
            goto label_3d1df0;
        }
    }
    ctx->pc = 0x3D1CD8u;
label_3d1cd8:
    // 0x3d1cd8: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x3d1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_3d1cdc:
    // 0x3d1cdc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3d1cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3d1ce0:
    // 0x3d1ce0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3d1ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3d1ce4:
    // 0x3d1ce4: 0x320f809  jalr        $t9
label_3d1ce8:
    if (ctx->pc == 0x3D1CE8u) {
        ctx->pc = 0x3D1CE8u;
            // 0x3d1ce8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3D1CECu;
        goto label_3d1cec;
    }
    ctx->pc = 0x3D1CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D1CECu);
        ctx->pc = 0x3D1CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1CE4u;
            // 0x3d1ce8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D1CECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D1CECu; }
            if (ctx->pc != 0x3D1CECu) { return; }
        }
        }
    }
    ctx->pc = 0x3D1CECu;
label_3d1cec:
    // 0x3d1cec: 0x10000040  b           . + 4 + (0x40 << 2)
label_3d1cf0:
    if (ctx->pc == 0x3D1CF0u) {
        ctx->pc = 0x3D1CF4u;
        goto label_3d1cf4;
    }
    ctx->pc = 0x3D1CECu;
    {
        const bool branch_taken_0x3d1cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1cec) {
            ctx->pc = 0x3D1DF0u;
            goto label_3d1df0;
        }
    }
    ctx->pc = 0x3D1CF4u;
label_3d1cf4:
    // 0x3d1cf4: 0x8eb20070  lw          $s2, 0x70($s5)
    ctx->pc = 0x3d1cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3d1cf8:
    // 0x3d1cf8: 0x1240003d  beqz        $s2, . + 4 + (0x3D << 2)
label_3d1cfc:
    if (ctx->pc == 0x3D1CFCu) {
        ctx->pc = 0x3D1D00u;
        goto label_3d1d00;
    }
    ctx->pc = 0x3D1CF8u;
    {
        const bool branch_taken_0x3d1cf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1cf8) {
            ctx->pc = 0x3D1DF0u;
            goto label_3d1df0;
        }
    }
    ctx->pc = 0x3D1D00u;
label_3d1d00:
    // 0x3d1d00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d1d04:
    // 0x3d1d04: 0xac40e3d8  sw          $zero, -0x1C28($v0)
    ctx->pc = 0x3d1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960088), GPR_U32(ctx, 0));
label_3d1d08:
    // 0x3d1d08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d1d0c:
    // 0x3d1d0c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x3d1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_3d1d10:
    // 0x3d1d10: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x3d1d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_3d1d14:
    // 0x3d1d14: 0xc04e738  jal         func_139CE0
label_3d1d18:
    if (ctx->pc == 0x3D1D18u) {
        ctx->pc = 0x3D1D18u;
            // 0x3d1d18: 0x26b10084  addiu       $s1, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->pc = 0x3D1D1Cu;
        goto label_3d1d1c;
    }
    ctx->pc = 0x3D1D14u;
    SET_GPR_U32(ctx, 31, 0x3D1D1Cu);
    ctx->pc = 0x3D1D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1D14u;
            // 0x3d1d18: 0x26b10084  addiu       $s1, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1D1Cu; }
        if (ctx->pc != 0x3D1D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1D1Cu; }
        if (ctx->pc != 0x3D1D1Cu) { return; }
    }
    ctx->pc = 0x3D1D1Cu;
label_3d1d1c:
    // 0x3d1d1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3d1d1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1d20:
    // 0x3d1d20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d1d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1d24:
    // 0x3d1d24: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x3d1d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3d1d28:
    // 0x3d1d28: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3d1d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3d1d2c:
    // 0x3d1d2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d1d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d1d30:
    // 0x3d1d30: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x3d1d30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_3d1d34:
    // 0x3d1d34: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3d1d38:
    if (ctx->pc == 0x3D1D38u) {
        ctx->pc = 0x3D1D38u;
            // 0x3d1d38: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3D1D3Cu;
        goto label_3d1d3c;
    }
    ctx->pc = 0x3D1D34u;
    {
        const bool branch_taken_0x3d1d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1D34u;
            // 0x3d1d38: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1d34) {
            ctx->pc = 0x3D1D50u;
            goto label_3d1d50;
        }
    }
    ctx->pc = 0x3D1D3Cu;
label_3d1d3c:
    // 0x3d1d3c: 0x8c8400e0  lw          $a0, 0xE0($a0)
    ctx->pc = 0x3d1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_3d1d40:
    // 0x3d1d40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d1d44:
    // 0x3d1d44: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_3d1d48:
    if (ctx->pc == 0x3D1D48u) {
        ctx->pc = 0x3D1D4Cu;
        goto label_3d1d4c;
    }
    ctx->pc = 0x3D1D44u;
    {
        const bool branch_taken_0x3d1d44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d1d44) {
            ctx->pc = 0x3D1D58u;
            goto label_3d1d58;
        }
    }
    ctx->pc = 0x3D1D4Cu;
label_3d1d4c:
    // 0x3d1d4c: 0x0  nop
    ctx->pc = 0x3d1d4cu;
    // NOP
label_3d1d50:
    // 0x3d1d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d1d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1d54:
    // 0x3d1d54: 0x0  nop
    ctx->pc = 0x3d1d54u;
    // NOP
label_3d1d58:
    // 0x3d1d58: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_3d1d5c:
    if (ctx->pc == 0x3D1D5Cu) {
        ctx->pc = 0x3D1D60u;
        goto label_3d1d60;
    }
    ctx->pc = 0x3D1D58u;
    {
        const bool branch_taken_0x3d1d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1d58) {
            ctx->pc = 0x3D1DB0u;
            goto label_3d1db0;
        }
    }
    ctx->pc = 0x3D1D60u;
label_3d1d60:
    // 0x3d1d60: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x3d1d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_3d1d64:
    // 0x3d1d64: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3d1d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d1d68:
    // 0x3d1d68: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x3d1d68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_3d1d6c:
    // 0x3d1d6c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d1d70:
    // 0x3d1d70: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3d1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3d1d74:
    // 0x3d1d74: 0xc04cce8  jal         func_1333A0
label_3d1d78:
    if (ctx->pc == 0x3D1D78u) {
        ctx->pc = 0x3D1D78u;
            // 0x3d1d78: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3D1D7Cu;
        goto label_3d1d7c;
    }
    ctx->pc = 0x3D1D74u;
    SET_GPR_U32(ctx, 31, 0x3D1D7Cu);
    ctx->pc = 0x3D1D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1D74u;
            // 0x3d1d78: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1D7Cu; }
        if (ctx->pc != 0x3D1D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1D7Cu; }
        if (ctx->pc != 0x3D1D7Cu) { return; }
    }
    ctx->pc = 0x3D1D7Cu;
label_3d1d7c:
    // 0x3d1d7c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3d1d80:
    // 0x3d1d80: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x3d1d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_3d1d84:
    // 0x3d1d84: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3d1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3d1d88:
    // 0x3d1d88: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x3d1d88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_3d1d8c:
    // 0x3d1d8c: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x3d1d8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_3d1d90:
    // 0x3d1d90: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x3d1d90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3d1d94:
    // 0x3d1d94: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3d1d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_3d1d98:
    // 0x3d1d98: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3d1d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3d1d9c:
    // 0x3d1d9c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3d1d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3d1da0:
    // 0x3d1da0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3d1da0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3d1da4:
    // 0x3d1da4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3d1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3d1da8:
    // 0x3d1da8: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x3d1da8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
label_3d1dac:
    // 0x3d1dac: 0x0  nop
    ctx->pc = 0x3d1dacu;
    // NOP
label_3d1db0:
    // 0x3d1db0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3d1db0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3d1db4:
    // 0x3d1db4: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x3d1db4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3d1db8:
    // 0x3d1db8: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_3d1dbc:
    if (ctx->pc == 0x3D1DBCu) {
        ctx->pc = 0x3D1DBCu;
            // 0x3d1dbc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3D1DC0u;
        goto label_3d1dc0;
    }
    ctx->pc = 0x3D1DB8u;
    {
        const bool branch_taken_0x3d1db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1DB8u;
            // 0x3d1dbc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1db8) {
            ctx->pc = 0x3D1D24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d1d24;
        }
    }
    ctx->pc = 0x3D1DC0u;
label_3d1dc0:
    // 0x3d1dc0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d1dc4:
    // 0x3d1dc4: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x3d1dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3d1dc8:
    // 0x3d1dc8: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_3d1dcc:
    if (ctx->pc == 0x3D1DCCu) {
        ctx->pc = 0x3D1DCCu;
            // 0x3d1dcc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3D1DD0u;
        goto label_3d1dd0;
    }
    ctx->pc = 0x3D1DC8u;
    {
        const bool branch_taken_0x3d1dc8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3D1DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1DC8u;
            // 0x3d1dcc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1dc8) {
            ctx->pc = 0x3D1DF0u;
            goto label_3d1df0;
        }
    }
    ctx->pc = 0x3D1DD0u;
label_3d1dd0:
    // 0x3d1dd0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d1dd4:
    // 0x3d1dd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d1dd8:
    // 0x3d1dd8: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x3d1dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3d1ddc:
    // 0x3d1ddc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3d1ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3d1de0:
    // 0x3d1de0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3d1de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3d1de4:
    // 0x3d1de4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d1de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1de8:
    // 0x3d1de8: 0xc055d28  jal         func_1574A0
label_3d1dec:
    if (ctx->pc == 0x3D1DECu) {
        ctx->pc = 0x3D1DECu;
            // 0x3d1dec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D1DF0u;
        goto label_3d1df0;
    }
    ctx->pc = 0x3D1DE8u;
    SET_GPR_U32(ctx, 31, 0x3D1DF0u);
    ctx->pc = 0x3D1DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1DE8u;
            // 0x3d1dec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1DF0u; }
        if (ctx->pc != 0x3D1DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1DF0u; }
        if (ctx->pc != 0x3D1DF0u) { return; }
    }
    ctx->pc = 0x3D1DF0u;
label_3d1df0:
    // 0x3d1df0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d1df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3d1df4:
    // 0x3d1df4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d1df4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d1df8:
    // 0x3d1df8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d1df8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d1dfc:
    // 0x3d1dfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d1dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d1e00:
    // 0x3d1e00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d1e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1e04:
    // 0x3d1e04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d1e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1e08:
    // 0x3d1e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d1e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1e0c:
    // 0x3d1e0c: 0x3e00008  jr          $ra
label_3d1e10:
    if (ctx->pc == 0x3D1E10u) {
        ctx->pc = 0x3D1E10u;
            // 0x3d1e10: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3D1E14u;
        goto label_3d1e14;
    }
    ctx->pc = 0x3D1E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1E0Cu;
            // 0x3d1e10: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D1E14u;
label_3d1e14:
    // 0x3d1e14: 0x0  nop
    ctx->pc = 0x3d1e14u;
    // NOP
label_3d1e18:
    // 0x3d1e18: 0x0  nop
    ctx->pc = 0x3d1e18u;
    // NOP
label_3d1e1c:
    // 0x3d1e1c: 0x0  nop
    ctx->pc = 0x3d1e1cu;
    // NOP
label_3d1e20:
    // 0x3d1e20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3d1e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3d1e24:
    // 0x3d1e24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d1e28:
    // 0x3d1e28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d1e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3d1e2c:
    // 0x3d1e2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d1e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d1e30:
    // 0x3d1e30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d1e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d1e34:
    // 0x3d1e34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d1e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d1e38:
    // 0x3d1e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d1e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d1e3c:
    // 0x3d1e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d1e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d1e40:
    // 0x3d1e40: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3d1e40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d1e44:
    // 0x3d1e44: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_3d1e48:
    if (ctx->pc == 0x3D1E48u) {
        ctx->pc = 0x3D1E48u;
            // 0x3d1e48: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D1E4Cu;
        goto label_3d1e4c;
    }
    ctx->pc = 0x3D1E44u;
    {
        const bool branch_taken_0x3d1e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D1E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1E44u;
            // 0x3d1e48: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1e44) {
            ctx->pc = 0x3D1E78u;
            goto label_3d1e78;
        }
    }
    ctx->pc = 0x3D1E4Cu;
label_3d1e4c:
    // 0x3d1e4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d1e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d1e50:
    // 0x3d1e50: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3d1e54:
    if (ctx->pc == 0x3D1E54u) {
        ctx->pc = 0x3D1E54u;
            // 0x3d1e54: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D1E58u;
        goto label_3d1e58;
    }
    ctx->pc = 0x3D1E50u;
    {
        const bool branch_taken_0x3d1e50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d1e50) {
            ctx->pc = 0x3D1E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1E50u;
            // 0x3d1e54: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1E6Cu;
            goto label_3d1e6c;
        }
    }
    ctx->pc = 0x3D1E58u;
label_3d1e58:
    // 0x3d1e58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d1e5c:
    // 0x3d1e5c: 0x10a3005a  beq         $a1, $v1, . + 4 + (0x5A << 2)
label_3d1e60:
    if (ctx->pc == 0x3D1E60u) {
        ctx->pc = 0x3D1E64u;
        goto label_3d1e64;
    }
    ctx->pc = 0x3D1E5Cu;
    {
        const bool branch_taken_0x3d1e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d1e5c) {
            ctx->pc = 0x3D1FC8u;
            goto label_3d1fc8;
        }
    }
    ctx->pc = 0x3D1E64u;
label_3d1e64:
    // 0x3d1e64: 0x10000058  b           . + 4 + (0x58 << 2)
label_3d1e68:
    if (ctx->pc == 0x3D1E68u) {
        ctx->pc = 0x3D1E6Cu;
        goto label_3d1e6c;
    }
    ctx->pc = 0x3D1E64u;
    {
        const bool branch_taken_0x3d1e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1e64) {
            ctx->pc = 0x3D1FC8u;
            goto label_3d1fc8;
        }
    }
    ctx->pc = 0x3D1E6Cu;
label_3d1e6c:
    // 0x3d1e6c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3d1e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3d1e70:
    // 0x3d1e70: 0x320f809  jalr        $t9
label_3d1e74:
    if (ctx->pc == 0x3D1E74u) {
        ctx->pc = 0x3D1E78u;
        goto label_3d1e78;
    }
    ctx->pc = 0x3D1E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D1E78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D1E78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D1E78u; }
            if (ctx->pc != 0x3D1E78u) { return; }
        }
        }
    }
    ctx->pc = 0x3D1E78u;
label_3d1e78:
    // 0x3d1e78: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x3d1e78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_3d1e7c:
    // 0x3d1e7c: 0x12000052  beqz        $s0, . + 4 + (0x52 << 2)
label_3d1e80:
    if (ctx->pc == 0x3D1E80u) {
        ctx->pc = 0x3D1E84u;
        goto label_3d1e84;
    }
    ctx->pc = 0x3D1E7Cu;
    {
        const bool branch_taken_0x3d1e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1e7c) {
            ctx->pc = 0x3D1FC8u;
            goto label_3d1fc8;
        }
    }
    ctx->pc = 0x3D1E84u;
label_3d1e84:
    // 0x3d1e84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3d1e88:
    // 0x3d1e88: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3d1e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3d1e8c:
    // 0x3d1e8c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3d1e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3d1e90:
    // 0x3d1e90: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x3d1e90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_3d1e94:
    // 0x3d1e94: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_3d1e98:
    if (ctx->pc == 0x3D1E98u) {
        ctx->pc = 0x3D1E9Cu;
        goto label_3d1e9c;
    }
    ctx->pc = 0x3D1E94u;
    {
        const bool branch_taken_0x3d1e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1e94) {
            ctx->pc = 0x3D1FC8u;
            goto label_3d1fc8;
        }
    }
    ctx->pc = 0x3D1E9Cu;
label_3d1e9c:
    // 0x3d1e9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d1e9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1ea0:
    // 0x3d1ea0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d1ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1ea4:
    // 0x3d1ea4: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x3d1ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3d1ea8:
    // 0x3d1ea8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d1eac:
    // 0x3d1eac: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3d1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3d1eb0:
    // 0x3d1eb0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3d1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3d1eb4:
    // 0x3d1eb4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x3d1eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d1eb8:
    // 0x3d1eb8: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x3d1eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d1ebc:
    // 0x3d1ebc: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x3d1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_3d1ec0:
    // 0x3d1ec0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x3d1ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d1ec4:
    // 0x3d1ec4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3d1ec8:
    if (ctx->pc == 0x3D1EC8u) {
        ctx->pc = 0x3D1EC8u;
            // 0x3d1ec8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3D1ECCu;
        goto label_3d1ecc;
    }
    ctx->pc = 0x3D1EC4u;
    {
        const bool branch_taken_0x3d1ec4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3d1ec4) {
            ctx->pc = 0x3D1EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1EC4u;
            // 0x3d1ec8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D1ED8u;
            goto label_3d1ed8;
        }
    }
    ctx->pc = 0x3D1ECCu;
label_3d1ecc:
    // 0x3d1ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1ed0:
    // 0x3d1ed0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d1ed4:
    if (ctx->pc == 0x3D1ED4u) {
        ctx->pc = 0x3D1ED4u;
            // 0x3d1ed4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3D1ED8u;
        goto label_3d1ed8;
    }
    ctx->pc = 0x3D1ED0u;
    {
        const bool branch_taken_0x3d1ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1ED0u;
            // 0x3d1ed4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1ed0) {
            ctx->pc = 0x3D1EF0u;
            goto label_3d1ef0;
        }
    }
    ctx->pc = 0x3D1ED8u;
label_3d1ed8:
    // 0x3d1ed8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d1ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d1edc:
    // 0x3d1edc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d1edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d1ee0:
    // 0x3d1ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d1ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1ee4:
    // 0x3d1ee4: 0x0  nop
    ctx->pc = 0x3d1ee4u;
    // NOP
label_3d1ee8:
    // 0x3d1ee8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d1ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d1eec:
    // 0x3d1eec: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d1eecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d1ef0:
    // 0x3d1ef0: 0xc641020c  lwc1        $f1, 0x20C($s2)
    ctx->pc = 0x3d1ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d1ef4:
    // 0x3d1ef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d1ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1ef8:
    // 0x3d1ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d1ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1efc:
    // 0x3d1efc: 0x0  nop
    ctx->pc = 0x3d1efcu;
    // NOP
label_3d1f00:
    // 0x3d1f00: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3d1f00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d1f04:
    // 0x3d1f04: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x3d1f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_3d1f08:
    // 0x3d1f08: 0xc0e3658  jal         func_38D960
label_3d1f0c:
    if (ctx->pc == 0x3D1F0Cu) {
        ctx->pc = 0x3D1F0Cu;
            // 0x3d1f0c: 0xe640020c  swc1        $f0, 0x20C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 524), bits); }
        ctx->pc = 0x3D1F10u;
        goto label_3d1f10;
    }
    ctx->pc = 0x3D1F08u;
    SET_GPR_U32(ctx, 31, 0x3D1F10u);
    ctx->pc = 0x3D1F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1F08u;
            // 0x3d1f0c: 0xe640020c  swc1        $f0, 0x20C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 524), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1F10u; }
        if (ctx->pc != 0x3D1F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1F10u; }
        if (ctx->pc != 0x3D1F10u) { return; }
    }
    ctx->pc = 0x3D1F10u;
label_3d1f10:
    // 0x3d1f10: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x3d1f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_3d1f14:
    // 0x3d1f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d1f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d1f18:
    // 0x3d1f18: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
label_3d1f1c:
    if (ctx->pc == 0x3D1F1Cu) {
        ctx->pc = 0x3D1F20u;
        goto label_3d1f20;
    }
    ctx->pc = 0x3D1F18u;
    {
        const bool branch_taken_0x3d1f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d1f18) {
            ctx->pc = 0x3D1FB8u;
            goto label_3d1fb8;
        }
    }
    ctx->pc = 0x3D1F20u;
label_3d1f20:
    // 0x3d1f20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d1f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d1f24:
    // 0x3d1f24: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
label_3d1f28:
    if (ctx->pc == 0x3D1F28u) {
        ctx->pc = 0x3D1F2Cu;
        goto label_3d1f2c;
    }
    ctx->pc = 0x3D1F24u;
    {
        const bool branch_taken_0x3d1f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d1f24) {
            ctx->pc = 0x3D1FB8u;
            goto label_3d1fb8;
        }
    }
    ctx->pc = 0x3D1F2Cu;
label_3d1f2c:
    // 0x3d1f2c: 0xc641020c  lwc1        $f1, 0x20C($s2)
    ctx->pc = 0x3d1f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d1f30:
    // 0x3d1f30: 0xc6400204  lwc1        $f0, 0x204($s2)
    ctx->pc = 0x3d1f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1f34:
    // 0x3d1f34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d1f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d1f38:
    // 0x3d1f38: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_3d1f3c:
    if (ctx->pc == 0x3D1F3Cu) {
        ctx->pc = 0x3D1F40u;
        goto label_3d1f40;
    }
    ctx->pc = 0x3D1F38u;
    {
        const bool branch_taken_0x3d1f38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d1f38) {
            ctx->pc = 0x3D1FB8u;
            goto label_3d1fb8;
        }
    }
    ctx->pc = 0x3D1F40u;
label_3d1f40:
    // 0x3d1f40: 0xae40020c  sw          $zero, 0x20C($s2)
    ctx->pc = 0x3d1f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 0));
label_3d1f44:
    // 0x3d1f44: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d1f48:
    // 0x3d1f48: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x3d1f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_3d1f4c:
    // 0x3d1f4c: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
label_3d1f50:
    if (ctx->pc == 0x3D1F50u) {
        ctx->pc = 0x3D1F54u;
        goto label_3d1f54;
    }
    ctx->pc = 0x3D1F4Cu;
    {
        const bool branch_taken_0x3d1f4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d1f4c) {
            ctx->pc = 0x3D1FB8u;
            goto label_3d1fb8;
        }
    }
    ctx->pc = 0x3D1F54u;
label_3d1f54:
    // 0x3d1f54: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3d1f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d1f58:
    // 0x3d1f58: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3d1f58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3d1f5c:
    // 0x3d1f5c: 0x320f809  jalr        $t9
label_3d1f60:
    if (ctx->pc == 0x3D1F60u) {
        ctx->pc = 0x3D1F60u;
            // 0x3d1f60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D1F64u;
        goto label_3d1f64;
    }
    ctx->pc = 0x3D1F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D1F64u);
        ctx->pc = 0x3D1F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1F5Cu;
            // 0x3d1f60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D1F64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D1F64u; }
            if (ctx->pc != 0x3D1F64u) { return; }
        }
        }
    }
    ctx->pc = 0x3D1F64u;
label_3d1f64:
    // 0x3d1f64: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x3d1f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3d1f68:
    // 0x3d1f68: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3d1f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d1f6c:
    // 0x3d1f6c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3d1f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d1f70:
    // 0x3d1f70: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3d1f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d1f74:
    // 0x3d1f74: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3d1f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1f78:
    // 0x3d1f78: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3d1f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d1f7c:
    // 0x3d1f7c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3d1f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3d1f80:
    // 0x3d1f80: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3d1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3d1f84:
    // 0x3d1f84: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x3d1f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3d1f88:
    // 0x3d1f88: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x3d1f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3d1f8c:
    // 0x3d1f8c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x3d1f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d1f90:
    // 0x3d1f90: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x3d1f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d1f94:
    // 0x3d1f94: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x3d1f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d1f98:
    // 0x3d1f98: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3d1f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d1f9c:
    // 0x3d1f9c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3d1f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3d1fa0:
    // 0x3d1fa0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3d1fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3d1fa4:
    // 0x3d1fa4: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x3d1fa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3d1fa8:
    // 0x3d1fa8: 0xc0892b0  jal         func_224AC0
label_3d1fac:
    if (ctx->pc == 0x3D1FACu) {
        ctx->pc = 0x3D1FACu;
            // 0x3d1fac: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x3D1FB0u;
        goto label_3d1fb0;
    }
    ctx->pc = 0x3D1FA8u;
    SET_GPR_U32(ctx, 31, 0x3D1FB0u);
    ctx->pc = 0x3D1FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1FA8u;
            // 0x3d1fac: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1FB0u; }
        if (ctx->pc != 0x3D1FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D1FB0u; }
        if (ctx->pc != 0x3D1FB0u) { return; }
    }
    ctx->pc = 0x3D1FB0u;
label_3d1fb0:
    // 0x3d1fb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d1fb4:
    // 0x3d1fb4: 0xae4300e0  sw          $v1, 0xE0($s2)
    ctx->pc = 0x3d1fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
label_3d1fb8:
    // 0x3d1fb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d1fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d1fbc:
    // 0x3d1fbc: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x3d1fbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d1fc0:
    // 0x3d1fc0: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_3d1fc4:
    if (ctx->pc == 0x3D1FC4u) {
        ctx->pc = 0x3D1FC4u;
            // 0x3d1fc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3D1FC8u;
        goto label_3d1fc8;
    }
    ctx->pc = 0x3D1FC0u;
    {
        const bool branch_taken_0x3d1fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1FC0u;
            // 0x3d1fc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1fc0) {
            ctx->pc = 0x3D1EA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d1ea4;
        }
    }
    ctx->pc = 0x3D1FC8u;
label_3d1fc8:
    // 0x3d1fc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d1fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d1fcc:
    // 0x3d1fcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d1fccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d1fd0:
    // 0x3d1fd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d1fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d1fd4:
    // 0x3d1fd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d1fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1fd8:
    // 0x3d1fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d1fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1fdc:
    // 0x3d1fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d1fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1fe0:
    // 0x3d1fe0: 0x3e00008  jr          $ra
label_3d1fe4:
    if (ctx->pc == 0x3D1FE4u) {
        ctx->pc = 0x3D1FE4u;
            // 0x3d1fe4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D1FE8u;
        goto label_3d1fe8;
    }
    ctx->pc = 0x3D1FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D1FE0u;
            // 0x3d1fe4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D1FE8u;
label_3d1fe8:
    // 0x3d1fe8: 0x0  nop
    ctx->pc = 0x3d1fe8u;
    // NOP
label_3d1fec:
    // 0x3d1fec: 0x0  nop
    ctx->pc = 0x3d1fecu;
    // NOP
label_3d1ff0:
    // 0x3d1ff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d1ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d1ff4:
    // 0x3d1ff4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d1ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3d1ff8:
    // 0x3d1ff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d1ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d1ffc:
    // 0x3d1ffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d1ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d2000:
    // 0x3d2000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d2000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d2004:
    // 0x3d2004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d2004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d2008:
    // 0x3d2008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d2008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d200c:
    // 0x3d200c: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3d200cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3d2010:
    // 0x3d2010: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_3d2014:
    if (ctx->pc == 0x3D2014u) {
        ctx->pc = 0x3D2014u;
            // 0x3d2014: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2018u;
        goto label_3d2018;
    }
    ctx->pc = 0x3D2010u;
    {
        const bool branch_taken_0x3d2010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2010u;
            // 0x3d2014: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2010) {
            ctx->pc = 0x3D2050u;
            goto label_3d2050;
        }
    }
    ctx->pc = 0x3D2018u;
label_3d2018:
    // 0x3d2018: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d2018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d201c:
    // 0x3d201c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d201cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d2020:
    // 0x3d2020: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x3d2020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_3d2024:
    // 0x3d2024: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3d2024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3d2028:
    // 0x3d2028: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x3d2028u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d202c:
    // 0x3d202c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d202cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d2030:
    // 0x3d2030: 0xc0f4cc8  jal         func_3D3320
label_3d2034:
    if (ctx->pc == 0x3D2034u) {
        ctx->pc = 0x3D2034u;
            // 0x3d2034: 0xae8000e0  sw          $zero, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x3D2038u;
        goto label_3d2038;
    }
    ctx->pc = 0x3D2030u;
    SET_GPR_U32(ctx, 31, 0x3D2038u);
    ctx->pc = 0x3D2034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2030u;
            // 0x3d2034: 0xae8000e0  sw          $zero, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D3320u;
    if (runtime->hasFunction(0x3D3320u)) {
        auto targetFn = runtime->lookupFunction(0x3D3320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2038u; }
        if (ctx->pc != 0x3D2038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D3320_0x3d3320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2038u; }
        if (ctx->pc != 0x3D2038u) { return; }
    }
    ctx->pc = 0x3D2038u;
label_3d2038:
    // 0x3d2038: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3d2038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3d203c:
    // 0x3d203c: 0xae80020c  sw          $zero, 0x20C($s4)
    ctx->pc = 0x3d203cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 524), GPR_U32(ctx, 0));
label_3d2040:
    // 0x3d2040: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x3d2040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d2044:
    // 0x3d2044: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3d2048:
    if (ctx->pc == 0x3D2048u) {
        ctx->pc = 0x3D2048u;
            // 0x3d2048: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3D204Cu;
        goto label_3d204c;
    }
    ctx->pc = 0x3D2044u;
    {
        const bool branch_taken_0x3d2044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2044u;
            // 0x3d2048: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2044) {
            ctx->pc = 0x3D2020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d2020;
        }
    }
    ctx->pc = 0x3D204Cu;
label_3d204c:
    // 0x3d204c: 0x0  nop
    ctx->pc = 0x3d204cu;
    // NOP
label_3d2050:
    // 0x3d2050: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d2050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d2054:
    // 0x3d2054: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d2054u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d2058:
    // 0x3d2058: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d2058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d205c:
    // 0x3d205c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d205cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d2060:
    // 0x3d2060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d2060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2064:
    // 0x3d2064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d2068:
    // 0x3d2068: 0x3e00008  jr          $ra
label_3d206c:
    if (ctx->pc == 0x3D206Cu) {
        ctx->pc = 0x3D206Cu;
            // 0x3d206c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D2070u;
        goto label_fallthrough_0x3d2068;
    }
    ctx->pc = 0x3D2068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D206Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2068u;
            // 0x3d206c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3d2068:
    ctx->pc = 0x3D2070u;
}
