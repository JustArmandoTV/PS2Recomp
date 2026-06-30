#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D1AD0
// Address: 0x4d1ad0 - 0x4d2040
void sub_004D1AD0_0x4d1ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1AD0_0x4d1ad0");
#endif

    switch (ctx->pc) {
        case 0x4d1ad0u: goto label_4d1ad0;
        case 0x4d1ad4u: goto label_4d1ad4;
        case 0x4d1ad8u: goto label_4d1ad8;
        case 0x4d1adcu: goto label_4d1adc;
        case 0x4d1ae0u: goto label_4d1ae0;
        case 0x4d1ae4u: goto label_4d1ae4;
        case 0x4d1ae8u: goto label_4d1ae8;
        case 0x4d1aecu: goto label_4d1aec;
        case 0x4d1af0u: goto label_4d1af0;
        case 0x4d1af4u: goto label_4d1af4;
        case 0x4d1af8u: goto label_4d1af8;
        case 0x4d1afcu: goto label_4d1afc;
        case 0x4d1b00u: goto label_4d1b00;
        case 0x4d1b04u: goto label_4d1b04;
        case 0x4d1b08u: goto label_4d1b08;
        case 0x4d1b0cu: goto label_4d1b0c;
        case 0x4d1b10u: goto label_4d1b10;
        case 0x4d1b14u: goto label_4d1b14;
        case 0x4d1b18u: goto label_4d1b18;
        case 0x4d1b1cu: goto label_4d1b1c;
        case 0x4d1b20u: goto label_4d1b20;
        case 0x4d1b24u: goto label_4d1b24;
        case 0x4d1b28u: goto label_4d1b28;
        case 0x4d1b2cu: goto label_4d1b2c;
        case 0x4d1b30u: goto label_4d1b30;
        case 0x4d1b34u: goto label_4d1b34;
        case 0x4d1b38u: goto label_4d1b38;
        case 0x4d1b3cu: goto label_4d1b3c;
        case 0x4d1b40u: goto label_4d1b40;
        case 0x4d1b44u: goto label_4d1b44;
        case 0x4d1b48u: goto label_4d1b48;
        case 0x4d1b4cu: goto label_4d1b4c;
        case 0x4d1b50u: goto label_4d1b50;
        case 0x4d1b54u: goto label_4d1b54;
        case 0x4d1b58u: goto label_4d1b58;
        case 0x4d1b5cu: goto label_4d1b5c;
        case 0x4d1b60u: goto label_4d1b60;
        case 0x4d1b64u: goto label_4d1b64;
        case 0x4d1b68u: goto label_4d1b68;
        case 0x4d1b6cu: goto label_4d1b6c;
        case 0x4d1b70u: goto label_4d1b70;
        case 0x4d1b74u: goto label_4d1b74;
        case 0x4d1b78u: goto label_4d1b78;
        case 0x4d1b7cu: goto label_4d1b7c;
        case 0x4d1b80u: goto label_4d1b80;
        case 0x4d1b84u: goto label_4d1b84;
        case 0x4d1b88u: goto label_4d1b88;
        case 0x4d1b8cu: goto label_4d1b8c;
        case 0x4d1b90u: goto label_4d1b90;
        case 0x4d1b94u: goto label_4d1b94;
        case 0x4d1b98u: goto label_4d1b98;
        case 0x4d1b9cu: goto label_4d1b9c;
        case 0x4d1ba0u: goto label_4d1ba0;
        case 0x4d1ba4u: goto label_4d1ba4;
        case 0x4d1ba8u: goto label_4d1ba8;
        case 0x4d1bacu: goto label_4d1bac;
        case 0x4d1bb0u: goto label_4d1bb0;
        case 0x4d1bb4u: goto label_4d1bb4;
        case 0x4d1bb8u: goto label_4d1bb8;
        case 0x4d1bbcu: goto label_4d1bbc;
        case 0x4d1bc0u: goto label_4d1bc0;
        case 0x4d1bc4u: goto label_4d1bc4;
        case 0x4d1bc8u: goto label_4d1bc8;
        case 0x4d1bccu: goto label_4d1bcc;
        case 0x4d1bd0u: goto label_4d1bd0;
        case 0x4d1bd4u: goto label_4d1bd4;
        case 0x4d1bd8u: goto label_4d1bd8;
        case 0x4d1bdcu: goto label_4d1bdc;
        case 0x4d1be0u: goto label_4d1be0;
        case 0x4d1be4u: goto label_4d1be4;
        case 0x4d1be8u: goto label_4d1be8;
        case 0x4d1becu: goto label_4d1bec;
        case 0x4d1bf0u: goto label_4d1bf0;
        case 0x4d1bf4u: goto label_4d1bf4;
        case 0x4d1bf8u: goto label_4d1bf8;
        case 0x4d1bfcu: goto label_4d1bfc;
        case 0x4d1c00u: goto label_4d1c00;
        case 0x4d1c04u: goto label_4d1c04;
        case 0x4d1c08u: goto label_4d1c08;
        case 0x4d1c0cu: goto label_4d1c0c;
        case 0x4d1c10u: goto label_4d1c10;
        case 0x4d1c14u: goto label_4d1c14;
        case 0x4d1c18u: goto label_4d1c18;
        case 0x4d1c1cu: goto label_4d1c1c;
        case 0x4d1c20u: goto label_4d1c20;
        case 0x4d1c24u: goto label_4d1c24;
        case 0x4d1c28u: goto label_4d1c28;
        case 0x4d1c2cu: goto label_4d1c2c;
        case 0x4d1c30u: goto label_4d1c30;
        case 0x4d1c34u: goto label_4d1c34;
        case 0x4d1c38u: goto label_4d1c38;
        case 0x4d1c3cu: goto label_4d1c3c;
        case 0x4d1c40u: goto label_4d1c40;
        case 0x4d1c44u: goto label_4d1c44;
        case 0x4d1c48u: goto label_4d1c48;
        case 0x4d1c4cu: goto label_4d1c4c;
        case 0x4d1c50u: goto label_4d1c50;
        case 0x4d1c54u: goto label_4d1c54;
        case 0x4d1c58u: goto label_4d1c58;
        case 0x4d1c5cu: goto label_4d1c5c;
        case 0x4d1c60u: goto label_4d1c60;
        case 0x4d1c64u: goto label_4d1c64;
        case 0x4d1c68u: goto label_4d1c68;
        case 0x4d1c6cu: goto label_4d1c6c;
        case 0x4d1c70u: goto label_4d1c70;
        case 0x4d1c74u: goto label_4d1c74;
        case 0x4d1c78u: goto label_4d1c78;
        case 0x4d1c7cu: goto label_4d1c7c;
        case 0x4d1c80u: goto label_4d1c80;
        case 0x4d1c84u: goto label_4d1c84;
        case 0x4d1c88u: goto label_4d1c88;
        case 0x4d1c8cu: goto label_4d1c8c;
        case 0x4d1c90u: goto label_4d1c90;
        case 0x4d1c94u: goto label_4d1c94;
        case 0x4d1c98u: goto label_4d1c98;
        case 0x4d1c9cu: goto label_4d1c9c;
        case 0x4d1ca0u: goto label_4d1ca0;
        case 0x4d1ca4u: goto label_4d1ca4;
        case 0x4d1ca8u: goto label_4d1ca8;
        case 0x4d1cacu: goto label_4d1cac;
        case 0x4d1cb0u: goto label_4d1cb0;
        case 0x4d1cb4u: goto label_4d1cb4;
        case 0x4d1cb8u: goto label_4d1cb8;
        case 0x4d1cbcu: goto label_4d1cbc;
        case 0x4d1cc0u: goto label_4d1cc0;
        case 0x4d1cc4u: goto label_4d1cc4;
        case 0x4d1cc8u: goto label_4d1cc8;
        case 0x4d1cccu: goto label_4d1ccc;
        case 0x4d1cd0u: goto label_4d1cd0;
        case 0x4d1cd4u: goto label_4d1cd4;
        case 0x4d1cd8u: goto label_4d1cd8;
        case 0x4d1cdcu: goto label_4d1cdc;
        case 0x4d1ce0u: goto label_4d1ce0;
        case 0x4d1ce4u: goto label_4d1ce4;
        case 0x4d1ce8u: goto label_4d1ce8;
        case 0x4d1cecu: goto label_4d1cec;
        case 0x4d1cf0u: goto label_4d1cf0;
        case 0x4d1cf4u: goto label_4d1cf4;
        case 0x4d1cf8u: goto label_4d1cf8;
        case 0x4d1cfcu: goto label_4d1cfc;
        case 0x4d1d00u: goto label_4d1d00;
        case 0x4d1d04u: goto label_4d1d04;
        case 0x4d1d08u: goto label_4d1d08;
        case 0x4d1d0cu: goto label_4d1d0c;
        case 0x4d1d10u: goto label_4d1d10;
        case 0x4d1d14u: goto label_4d1d14;
        case 0x4d1d18u: goto label_4d1d18;
        case 0x4d1d1cu: goto label_4d1d1c;
        case 0x4d1d20u: goto label_4d1d20;
        case 0x4d1d24u: goto label_4d1d24;
        case 0x4d1d28u: goto label_4d1d28;
        case 0x4d1d2cu: goto label_4d1d2c;
        case 0x4d1d30u: goto label_4d1d30;
        case 0x4d1d34u: goto label_4d1d34;
        case 0x4d1d38u: goto label_4d1d38;
        case 0x4d1d3cu: goto label_4d1d3c;
        case 0x4d1d40u: goto label_4d1d40;
        case 0x4d1d44u: goto label_4d1d44;
        case 0x4d1d48u: goto label_4d1d48;
        case 0x4d1d4cu: goto label_4d1d4c;
        case 0x4d1d50u: goto label_4d1d50;
        case 0x4d1d54u: goto label_4d1d54;
        case 0x4d1d58u: goto label_4d1d58;
        case 0x4d1d5cu: goto label_4d1d5c;
        case 0x4d1d60u: goto label_4d1d60;
        case 0x4d1d64u: goto label_4d1d64;
        case 0x4d1d68u: goto label_4d1d68;
        case 0x4d1d6cu: goto label_4d1d6c;
        case 0x4d1d70u: goto label_4d1d70;
        case 0x4d1d74u: goto label_4d1d74;
        case 0x4d1d78u: goto label_4d1d78;
        case 0x4d1d7cu: goto label_4d1d7c;
        case 0x4d1d80u: goto label_4d1d80;
        case 0x4d1d84u: goto label_4d1d84;
        case 0x4d1d88u: goto label_4d1d88;
        case 0x4d1d8cu: goto label_4d1d8c;
        case 0x4d1d90u: goto label_4d1d90;
        case 0x4d1d94u: goto label_4d1d94;
        case 0x4d1d98u: goto label_4d1d98;
        case 0x4d1d9cu: goto label_4d1d9c;
        case 0x4d1da0u: goto label_4d1da0;
        case 0x4d1da4u: goto label_4d1da4;
        case 0x4d1da8u: goto label_4d1da8;
        case 0x4d1dacu: goto label_4d1dac;
        case 0x4d1db0u: goto label_4d1db0;
        case 0x4d1db4u: goto label_4d1db4;
        case 0x4d1db8u: goto label_4d1db8;
        case 0x4d1dbcu: goto label_4d1dbc;
        case 0x4d1dc0u: goto label_4d1dc0;
        case 0x4d1dc4u: goto label_4d1dc4;
        case 0x4d1dc8u: goto label_4d1dc8;
        case 0x4d1dccu: goto label_4d1dcc;
        case 0x4d1dd0u: goto label_4d1dd0;
        case 0x4d1dd4u: goto label_4d1dd4;
        case 0x4d1dd8u: goto label_4d1dd8;
        case 0x4d1ddcu: goto label_4d1ddc;
        case 0x4d1de0u: goto label_4d1de0;
        case 0x4d1de4u: goto label_4d1de4;
        case 0x4d1de8u: goto label_4d1de8;
        case 0x4d1decu: goto label_4d1dec;
        case 0x4d1df0u: goto label_4d1df0;
        case 0x4d1df4u: goto label_4d1df4;
        case 0x4d1df8u: goto label_4d1df8;
        case 0x4d1dfcu: goto label_4d1dfc;
        case 0x4d1e00u: goto label_4d1e00;
        case 0x4d1e04u: goto label_4d1e04;
        case 0x4d1e08u: goto label_4d1e08;
        case 0x4d1e0cu: goto label_4d1e0c;
        case 0x4d1e10u: goto label_4d1e10;
        case 0x4d1e14u: goto label_4d1e14;
        case 0x4d1e18u: goto label_4d1e18;
        case 0x4d1e1cu: goto label_4d1e1c;
        case 0x4d1e20u: goto label_4d1e20;
        case 0x4d1e24u: goto label_4d1e24;
        case 0x4d1e28u: goto label_4d1e28;
        case 0x4d1e2cu: goto label_4d1e2c;
        case 0x4d1e30u: goto label_4d1e30;
        case 0x4d1e34u: goto label_4d1e34;
        case 0x4d1e38u: goto label_4d1e38;
        case 0x4d1e3cu: goto label_4d1e3c;
        case 0x4d1e40u: goto label_4d1e40;
        case 0x4d1e44u: goto label_4d1e44;
        case 0x4d1e48u: goto label_4d1e48;
        case 0x4d1e4cu: goto label_4d1e4c;
        case 0x4d1e50u: goto label_4d1e50;
        case 0x4d1e54u: goto label_4d1e54;
        case 0x4d1e58u: goto label_4d1e58;
        case 0x4d1e5cu: goto label_4d1e5c;
        case 0x4d1e60u: goto label_4d1e60;
        case 0x4d1e64u: goto label_4d1e64;
        case 0x4d1e68u: goto label_4d1e68;
        case 0x4d1e6cu: goto label_4d1e6c;
        case 0x4d1e70u: goto label_4d1e70;
        case 0x4d1e74u: goto label_4d1e74;
        case 0x4d1e78u: goto label_4d1e78;
        case 0x4d1e7cu: goto label_4d1e7c;
        case 0x4d1e80u: goto label_4d1e80;
        case 0x4d1e84u: goto label_4d1e84;
        case 0x4d1e88u: goto label_4d1e88;
        case 0x4d1e8cu: goto label_4d1e8c;
        case 0x4d1e90u: goto label_4d1e90;
        case 0x4d1e94u: goto label_4d1e94;
        case 0x4d1e98u: goto label_4d1e98;
        case 0x4d1e9cu: goto label_4d1e9c;
        case 0x4d1ea0u: goto label_4d1ea0;
        case 0x4d1ea4u: goto label_4d1ea4;
        case 0x4d1ea8u: goto label_4d1ea8;
        case 0x4d1eacu: goto label_4d1eac;
        case 0x4d1eb0u: goto label_4d1eb0;
        case 0x4d1eb4u: goto label_4d1eb4;
        case 0x4d1eb8u: goto label_4d1eb8;
        case 0x4d1ebcu: goto label_4d1ebc;
        case 0x4d1ec0u: goto label_4d1ec0;
        case 0x4d1ec4u: goto label_4d1ec4;
        case 0x4d1ec8u: goto label_4d1ec8;
        case 0x4d1eccu: goto label_4d1ecc;
        case 0x4d1ed0u: goto label_4d1ed0;
        case 0x4d1ed4u: goto label_4d1ed4;
        case 0x4d1ed8u: goto label_4d1ed8;
        case 0x4d1edcu: goto label_4d1edc;
        case 0x4d1ee0u: goto label_4d1ee0;
        case 0x4d1ee4u: goto label_4d1ee4;
        case 0x4d1ee8u: goto label_4d1ee8;
        case 0x4d1eecu: goto label_4d1eec;
        case 0x4d1ef0u: goto label_4d1ef0;
        case 0x4d1ef4u: goto label_4d1ef4;
        case 0x4d1ef8u: goto label_4d1ef8;
        case 0x4d1efcu: goto label_4d1efc;
        case 0x4d1f00u: goto label_4d1f00;
        case 0x4d1f04u: goto label_4d1f04;
        case 0x4d1f08u: goto label_4d1f08;
        case 0x4d1f0cu: goto label_4d1f0c;
        case 0x4d1f10u: goto label_4d1f10;
        case 0x4d1f14u: goto label_4d1f14;
        case 0x4d1f18u: goto label_4d1f18;
        case 0x4d1f1cu: goto label_4d1f1c;
        case 0x4d1f20u: goto label_4d1f20;
        case 0x4d1f24u: goto label_4d1f24;
        case 0x4d1f28u: goto label_4d1f28;
        case 0x4d1f2cu: goto label_4d1f2c;
        case 0x4d1f30u: goto label_4d1f30;
        case 0x4d1f34u: goto label_4d1f34;
        case 0x4d1f38u: goto label_4d1f38;
        case 0x4d1f3cu: goto label_4d1f3c;
        case 0x4d1f40u: goto label_4d1f40;
        case 0x4d1f44u: goto label_4d1f44;
        case 0x4d1f48u: goto label_4d1f48;
        case 0x4d1f4cu: goto label_4d1f4c;
        case 0x4d1f50u: goto label_4d1f50;
        case 0x4d1f54u: goto label_4d1f54;
        case 0x4d1f58u: goto label_4d1f58;
        case 0x4d1f5cu: goto label_4d1f5c;
        case 0x4d1f60u: goto label_4d1f60;
        case 0x4d1f64u: goto label_4d1f64;
        case 0x4d1f68u: goto label_4d1f68;
        case 0x4d1f6cu: goto label_4d1f6c;
        case 0x4d1f70u: goto label_4d1f70;
        case 0x4d1f74u: goto label_4d1f74;
        case 0x4d1f78u: goto label_4d1f78;
        case 0x4d1f7cu: goto label_4d1f7c;
        case 0x4d1f80u: goto label_4d1f80;
        case 0x4d1f84u: goto label_4d1f84;
        case 0x4d1f88u: goto label_4d1f88;
        case 0x4d1f8cu: goto label_4d1f8c;
        case 0x4d1f90u: goto label_4d1f90;
        case 0x4d1f94u: goto label_4d1f94;
        case 0x4d1f98u: goto label_4d1f98;
        case 0x4d1f9cu: goto label_4d1f9c;
        case 0x4d1fa0u: goto label_4d1fa0;
        case 0x4d1fa4u: goto label_4d1fa4;
        case 0x4d1fa8u: goto label_4d1fa8;
        case 0x4d1facu: goto label_4d1fac;
        case 0x4d1fb0u: goto label_4d1fb0;
        case 0x4d1fb4u: goto label_4d1fb4;
        case 0x4d1fb8u: goto label_4d1fb8;
        case 0x4d1fbcu: goto label_4d1fbc;
        case 0x4d1fc0u: goto label_4d1fc0;
        case 0x4d1fc4u: goto label_4d1fc4;
        case 0x4d1fc8u: goto label_4d1fc8;
        case 0x4d1fccu: goto label_4d1fcc;
        case 0x4d1fd0u: goto label_4d1fd0;
        case 0x4d1fd4u: goto label_4d1fd4;
        case 0x4d1fd8u: goto label_4d1fd8;
        case 0x4d1fdcu: goto label_4d1fdc;
        case 0x4d1fe0u: goto label_4d1fe0;
        case 0x4d1fe4u: goto label_4d1fe4;
        case 0x4d1fe8u: goto label_4d1fe8;
        case 0x4d1fecu: goto label_4d1fec;
        case 0x4d1ff0u: goto label_4d1ff0;
        case 0x4d1ff4u: goto label_4d1ff4;
        case 0x4d1ff8u: goto label_4d1ff8;
        case 0x4d1ffcu: goto label_4d1ffc;
        case 0x4d2000u: goto label_4d2000;
        case 0x4d2004u: goto label_4d2004;
        case 0x4d2008u: goto label_4d2008;
        case 0x4d200cu: goto label_4d200c;
        case 0x4d2010u: goto label_4d2010;
        case 0x4d2014u: goto label_4d2014;
        case 0x4d2018u: goto label_4d2018;
        case 0x4d201cu: goto label_4d201c;
        case 0x4d2020u: goto label_4d2020;
        case 0x4d2024u: goto label_4d2024;
        case 0x4d2028u: goto label_4d2028;
        case 0x4d202cu: goto label_4d202c;
        case 0x4d2030u: goto label_4d2030;
        case 0x4d2034u: goto label_4d2034;
        case 0x4d2038u: goto label_4d2038;
        case 0x4d203cu: goto label_4d203c;
        default: break;
    }

    ctx->pc = 0x4d1ad0u;

label_4d1ad0:
    // 0x4d1ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d1ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d1ad4:
    // 0x4d1ad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d1ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d1ad8:
    // 0x4d1ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d1ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d1adc:
    // 0x4d1adc: 0xc48000e4  lwc1        $f0, 0xE4($a0)
    ctx->pc = 0x4d1adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1ae0:
    // 0x4d1ae0: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x4d1ae0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d1ae4:
    // 0x4d1ae4: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_4d1ae8:
    if (ctx->pc == 0x4D1AE8u) {
        ctx->pc = 0x4D1AE8u;
            // 0x4d1ae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1AECu;
        goto label_4d1aec;
    }
    ctx->pc = 0x4D1AE4u;
    {
        const bool branch_taken_0x4d1ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4D1AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1AE4u;
            // 0x4d1ae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ae4) {
            ctx->pc = 0x4D1B60u;
            goto label_4d1b60;
        }
    }
    ctx->pc = 0x4D1AECu;
label_4d1aec:
    // 0x4d1aec: 0x54a0000a  bnel        $a1, $zero, . + 4 + (0xA << 2)
label_4d1af0:
    if (ctx->pc == 0x4D1AF0u) {
        ctx->pc = 0x4D1AF0u;
            // 0x4d1af0: 0x8e0200ec  lw          $v0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->pc = 0x4D1AF4u;
        goto label_4d1af4;
    }
    ctx->pc = 0x4D1AECu;
    {
        const bool branch_taken_0x4d1aec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d1aec) {
            ctx->pc = 0x4D1AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1AECu;
            // 0x4d1af0: 0x8e0200ec  lw          $v0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1B18u;
            goto label_4d1b18;
        }
    }
    ctx->pc = 0x4D1AF4u;
label_4d1af4:
    // 0x4d1af4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x4d1af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1af8:
    // 0x4d1af8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4d1af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d1afc:
    // 0x4d1afc: 0x0  nop
    ctx->pc = 0x4d1afcu;
    // NOP
label_4d1b00:
    // 0x4d1b00: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d1b00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d1b04:
    // 0x4d1b04: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4d1b08:
    if (ctx->pc == 0x4D1B08u) {
        ctx->pc = 0x4D1B0Cu;
        goto label_4d1b0c;
    }
    ctx->pc = 0x4D1B04u;
    {
        const bool branch_taken_0x4d1b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d1b04) {
            ctx->pc = 0x4D1B14u;
            goto label_4d1b14;
        }
    }
    ctx->pc = 0x4D1B0Cu;
label_4d1b0c:
    // 0x4d1b0c: 0x10000015  b           . + 4 + (0x15 << 2)
label_4d1b10:
    if (ctx->pc == 0x4D1B10u) {
        ctx->pc = 0x4D1B10u;
            // 0x4d1b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B14u;
        goto label_4d1b14;
    }
    ctx->pc = 0x4D1B0Cu;
    {
        const bool branch_taken_0x4d1b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1B0Cu;
            // 0x4d1b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b0c) {
            ctx->pc = 0x4D1B64u;
            goto label_4d1b64;
        }
    }
    ctx->pc = 0x4D1B14u;
label_4d1b14:
    // 0x4d1b14: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x4d1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_4d1b18:
    // 0x4d1b18: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_4d1b1c:
    if (ctx->pc == 0x4D1B1Cu) {
        ctx->pc = 0x4D1B1Cu;
            // 0x4d1b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B20u;
        goto label_4d1b20;
    }
    ctx->pc = 0x4D1B18u;
    {
        const bool branch_taken_0x4d1b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d1b18) {
            ctx->pc = 0x4D1B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1B18u;
            // 0x4d1b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1B64u;
            goto label_4d1b64;
        }
    }
    ctx->pc = 0x4D1B20u;
label_4d1b20:
    // 0x4d1b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1b24:
    // 0x4d1b24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d1b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1b28:
    // 0x4d1b28: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x4d1b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
label_4d1b2c:
    // 0x4d1b2c: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4d1b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4d1b30:
    // 0x4d1b30: 0xc122d2c  jal         func_48B4B0
label_4d1b34:
    if (ctx->pc == 0x4D1B34u) {
        ctx->pc = 0x4D1B34u;
            // 0x4d1b34: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4D1B38u;
        goto label_4d1b38;
    }
    ctx->pc = 0x4D1B30u;
    SET_GPR_U32(ctx, 31, 0x4D1B38u);
    ctx->pc = 0x4D1B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1B30u;
            // 0x4d1b34: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1B38u; }
        if (ctx->pc != 0x4D1B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1B38u; }
        if (ctx->pc != 0x4D1B38u) { return; }
    }
    ctx->pc = 0x4D1B38u;
label_4d1b38:
    // 0x4d1b38: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4d1b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1b3c:
    // 0x4d1b3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d1b40:
    // 0x4d1b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4d1b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1b44:
    // 0x4d1b44: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x4d1b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_4d1b48:
    // 0x4d1b48: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4d1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4d1b4c:
    // 0x4d1b4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4d1b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4d1b50:
    // 0x4d1b50: 0xc08bff0  jal         func_22FFC0
label_4d1b54:
    if (ctx->pc == 0x4D1B54u) {
        ctx->pc = 0x4D1B54u;
            // 0x4d1b54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B58u;
        goto label_4d1b58;
    }
    ctx->pc = 0x4D1B50u;
    SET_GPR_U32(ctx, 31, 0x4D1B58u);
    ctx->pc = 0x4D1B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1B50u;
            // 0x4d1b54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1B58u; }
        if (ctx->pc != 0x4D1B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1B58u; }
        if (ctx->pc != 0x4D1B58u) { return; }
    }
    ctx->pc = 0x4D1B58u;
label_4d1b58:
    // 0x4d1b58: 0x10000002  b           . + 4 + (0x2 << 2)
label_4d1b5c:
    if (ctx->pc == 0x4D1B5Cu) {
        ctx->pc = 0x4D1B5Cu;
            // 0x4d1b5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D1B60u;
        goto label_4d1b60;
    }
    ctx->pc = 0x4D1B58u;
    {
        const bool branch_taken_0x4d1b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1B58u;
            // 0x4d1b5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b58) {
            ctx->pc = 0x4D1B64u;
            goto label_4d1b64;
        }
    }
    ctx->pc = 0x4D1B60u;
label_4d1b60:
    // 0x4d1b60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4d1b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1b64:
    // 0x4d1b64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d1b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d1b68:
    // 0x4d1b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d1b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d1b6c:
    // 0x4d1b6c: 0x3e00008  jr          $ra
label_4d1b70:
    if (ctx->pc == 0x4D1B70u) {
        ctx->pc = 0x4D1B70u;
            // 0x4d1b70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D1B74u;
        goto label_4d1b74;
    }
    ctx->pc = 0x4D1B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1B6Cu;
            // 0x4d1b70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D1B74u;
label_4d1b74:
    // 0x4d1b74: 0x0  nop
    ctx->pc = 0x4d1b74u;
    // NOP
label_4d1b78:
    // 0x4d1b78: 0x0  nop
    ctx->pc = 0x4d1b78u;
    // NOP
label_4d1b7c:
    // 0x4d1b7c: 0x0  nop
    ctx->pc = 0x4d1b7cu;
    // NOP
label_4d1b80:
    // 0x4d1b80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4d1b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4d1b84:
    // 0x4d1b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d1b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d1b88:
    // 0x4d1b88: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4d1b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4d1b8c:
    // 0x4d1b8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d1b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d1b90:
    // 0x4d1b90: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4d1b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4d1b94:
    // 0x4d1b94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d1b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d1b98:
    // 0x4d1b98: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x4d1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4d1b9c:
    // 0x4d1b9c: 0xc4820128  lwc1        $f2, 0x128($a0)
    ctx->pc = 0x4d1b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d1ba0:
    // 0x4d1ba0: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x4d1ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1ba4:
    // 0x4d1ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d1ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d1ba8:
    // 0x4d1ba8: 0xc4800120  lwc1        $f0, 0x120($a0)
    ctx->pc = 0x4d1ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1bac:
    // 0x4d1bac: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4d1bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4d1bb0:
    // 0x4d1bb0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4d1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_4d1bb4:
    // 0x4d1bb4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4d1bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4d1bb8:
    // 0x4d1bb8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x4d1bb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4d1bbc:
    // 0x4d1bbc: 0xc483013c  lwc1        $f3, 0x13C($a0)
    ctx->pc = 0x4d1bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d1bc0:
    // 0x4d1bc0: 0xc4820138  lwc1        $f2, 0x138($a0)
    ctx->pc = 0x4d1bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d1bc4:
    // 0x4d1bc4: 0xc4810134  lwc1        $f1, 0x134($a0)
    ctx->pc = 0x4d1bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1bc8:
    // 0x4d1bc8: 0xc4800130  lwc1        $f0, 0x130($a0)
    ctx->pc = 0x4d1bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1bcc:
    // 0x4d1bcc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4d1bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4d1bd0:
    // 0x4d1bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d1bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1bd4:
    // 0x4d1bd4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4d1bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4d1bd8:
    // 0x4d1bd8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4d1bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4d1bdc:
    // 0x4d1bdc: 0xc0892b0  jal         func_224AC0
label_4d1be0:
    if (ctx->pc == 0x4D1BE0u) {
        ctx->pc = 0x4D1BE0u;
            // 0x4d1be0: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x4D1BE4u;
        goto label_4d1be4;
    }
    ctx->pc = 0x4D1BDCu;
    SET_GPR_U32(ctx, 31, 0x4D1BE4u);
    ctx->pc = 0x4D1BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1BDCu;
            // 0x4d1be0: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1BE4u; }
        if (ctx->pc != 0x4D1BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1BE4u; }
        if (ctx->pc != 0x4D1BE4u) { return; }
    }
    ctx->pc = 0x4D1BE4u;
label_4d1be4:
    // 0x4d1be4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4d1be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1be8:
    // 0x4d1be8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4d1be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1bec:
    // 0x4d1bec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d1becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d1bf0:
    // 0x4d1bf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4d1bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1bf4:
    // 0x4d1bf4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4d1bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4d1bf8:
    // 0x4d1bf8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4d1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4d1bfc:
    // 0x4d1bfc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4d1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4d1c00:
    // 0x4d1c00: 0xc08bff0  jal         func_22FFC0
label_4d1c04:
    if (ctx->pc == 0x4D1C04u) {
        ctx->pc = 0x4D1C04u;
            // 0x4d1c04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C08u;
        goto label_4d1c08;
    }
    ctx->pc = 0x4D1C00u;
    SET_GPR_U32(ctx, 31, 0x4D1C08u);
    ctx->pc = 0x4D1C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1C00u;
            // 0x4d1c04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C08u; }
        if (ctx->pc != 0x4D1C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C08u; }
        if (ctx->pc != 0x4D1C08u) { return; }
    }
    ctx->pc = 0x4D1C08u;
label_4d1c08:
    // 0x4d1c08: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4d1c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1c0c:
    // 0x4d1c0c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4d1c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d1c10:
    // 0x4d1c10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d1c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1c14:
    // 0x4d1c14: 0xc08914c  jal         func_224530
label_4d1c18:
    if (ctx->pc == 0x4D1C18u) {
        ctx->pc = 0x4D1C18u;
            // 0x4d1c18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C1Cu;
        goto label_4d1c1c;
    }
    ctx->pc = 0x4D1C14u;
    SET_GPR_U32(ctx, 31, 0x4D1C1Cu);
    ctx->pc = 0x4D1C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1C14u;
            // 0x4d1c18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C1Cu; }
        if (ctx->pc != 0x4D1C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C1Cu; }
        if (ctx->pc != 0x4D1C1Cu) { return; }
    }
    ctx->pc = 0x4D1C1Cu;
label_4d1c1c:
    // 0x4d1c1c: 0xc0e393c  jal         func_38E4F0
label_4d1c20:
    if (ctx->pc == 0x4D1C20u) {
        ctx->pc = 0x4D1C20u;
            // 0x4d1c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C24u;
        goto label_4d1c24;
    }
    ctx->pc = 0x4D1C1Cu;
    SET_GPR_U32(ctx, 31, 0x4D1C24u);
    ctx->pc = 0x4D1C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1C1Cu;
            // 0x4d1c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C24u; }
        if (ctx->pc != 0x4D1C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C24u; }
        if (ctx->pc != 0x4D1C24u) { return; }
    }
    ctx->pc = 0x4D1C24u;
label_4d1c24:
    // 0x4d1c24: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4d1c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4d1c28:
    // 0x4d1c28: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x4d1c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_4d1c2c:
    // 0x4d1c2c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x4d1c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_4d1c30:
    // 0x4d1c30: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x4d1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_4d1c34:
    // 0x4d1c34: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4d1c34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1c38:
    // 0x4d1c38: 0xc088b74  jal         func_222DD0
label_4d1c3c:
    if (ctx->pc == 0x4D1C3Cu) {
        ctx->pc = 0x4D1C3Cu;
            // 0x4d1c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C40u;
        goto label_4d1c40;
    }
    ctx->pc = 0x4D1C38u;
    SET_GPR_U32(ctx, 31, 0x4D1C40u);
    ctx->pc = 0x4D1C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1C38u;
            // 0x4d1c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C40u; }
        if (ctx->pc != 0x4D1C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C40u; }
        if (ctx->pc != 0x4D1C40u) { return; }
    }
    ctx->pc = 0x4D1C40u;
label_4d1c40:
    // 0x4d1c40: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4d1c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4d1c44:
    // 0x4d1c44: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4d1c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4d1c48:
    // 0x4d1c48: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4d1c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4d1c4c:
    // 0x4d1c4c: 0x320f809  jalr        $t9
label_4d1c50:
    if (ctx->pc == 0x4D1C50u) {
        ctx->pc = 0x4D1C50u;
            // 0x4d1c50: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4D1C54u;
        goto label_4d1c54;
    }
    ctx->pc = 0x4D1C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D1C54u);
        ctx->pc = 0x4D1C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1C4Cu;
            // 0x4d1c50: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D1C54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C54u; }
            if (ctx->pc != 0x4D1C54u) { return; }
        }
        }
    }
    ctx->pc = 0x4D1C54u;
label_4d1c54:
    // 0x4d1c54: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4d1c54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1c58:
    // 0x4d1c58: 0xc088b74  jal         func_222DD0
label_4d1c5c:
    if (ctx->pc == 0x4D1C5Cu) {
        ctx->pc = 0x4D1C5Cu;
            // 0x4d1c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C60u;
        goto label_4d1c60;
    }
    ctx->pc = 0x4D1C58u;
    SET_GPR_U32(ctx, 31, 0x4D1C60u);
    ctx->pc = 0x4D1C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1C58u;
            // 0x4d1c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C60u; }
        if (ctx->pc != 0x4D1C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C60u; }
        if (ctx->pc != 0x4D1C60u) { return; }
    }
    ctx->pc = 0x4D1C60u;
label_4d1c60:
    // 0x4d1c60: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4d1c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4d1c64:
    // 0x4d1c64: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4d1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4d1c68:
    // 0x4d1c68: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d1c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d1c6c:
    // 0x4d1c6c: 0x320f809  jalr        $t9
label_4d1c70:
    if (ctx->pc == 0x4D1C70u) {
        ctx->pc = 0x4D1C70u;
            // 0x4d1c70: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4D1C74u;
        goto label_4d1c74;
    }
    ctx->pc = 0x4D1C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D1C74u);
        ctx->pc = 0x4D1C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1C6Cu;
            // 0x4d1c70: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D1C74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D1C74u; }
            if (ctx->pc != 0x4D1C74u) { return; }
        }
        }
    }
    ctx->pc = 0x4D1C74u;
label_4d1c74:
    // 0x4d1c74: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4d1c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1c78:
    // 0x4d1c78: 0xc603013c  lwc1        $f3, 0x13C($s0)
    ctx->pc = 0x4d1c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d1c7c:
    // 0x4d1c7c: 0xc6020138  lwc1        $f2, 0x138($s0)
    ctx->pc = 0x4d1c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d1c80:
    // 0x4d1c80: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4d1c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4d1c84:
    // 0x4d1c84: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x4d1c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1c88:
    // 0x4d1c88: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x4d1c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1c8c:
    // 0x4d1c8c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4d1c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4d1c90:
    // 0x4d1c90: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4d1c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4d1c94:
    // 0x4d1c94: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4d1c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4d1c98:
    // 0x4d1c98: 0xc0892a0  jal         func_224A80
label_4d1c9c:
    if (ctx->pc == 0x4D1C9Cu) {
        ctx->pc = 0x4D1C9Cu;
            // 0x4d1c9c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4D1CA0u;
        goto label_4d1ca0;
    }
    ctx->pc = 0x4D1C98u;
    SET_GPR_U32(ctx, 31, 0x4D1CA0u);
    ctx->pc = 0x4D1C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1C98u;
            // 0x4d1c9c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1CA0u; }
        if (ctx->pc != 0x4D1CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1CA0u; }
        if (ctx->pc != 0x4D1CA0u) { return; }
    }
    ctx->pc = 0x4D1CA0u;
label_4d1ca0:
    // 0x4d1ca0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4d1ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1ca4:
    // 0x4d1ca4: 0xc6020128  lwc1        $f2, 0x128($s0)
    ctx->pc = 0x4d1ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d1ca8:
    // 0x4d1ca8: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x4d1ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1cac:
    // 0x4d1cac: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4d1cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4d1cb0:
    // 0x4d1cb0: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x4d1cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1cb4:
    // 0x4d1cb4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4d1cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4d1cb8:
    // 0x4d1cb8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4d1cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_4d1cbc:
    // 0x4d1cbc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4d1cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4d1cc0:
    // 0x4d1cc0: 0xc089290  jal         func_224A40
label_4d1cc4:
    if (ctx->pc == 0x4D1CC4u) {
        ctx->pc = 0x4D1CC4u;
            // 0x4d1cc4: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x4D1CC8u;
        goto label_4d1cc8;
    }
    ctx->pc = 0x4D1CC0u;
    SET_GPR_U32(ctx, 31, 0x4D1CC8u);
    ctx->pc = 0x4D1CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1CC0u;
            // 0x4d1cc4: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1CC8u; }
        if (ctx->pc != 0x4D1CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1CC8u; }
        if (ctx->pc != 0x4D1CC8u) { return; }
    }
    ctx->pc = 0x4D1CC8u;
label_4d1cc8:
    // 0x4d1cc8: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x4d1cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1ccc:
    // 0x4d1ccc: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x4d1cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_4d1cd0:
    // 0x4d1cd0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4d1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_4d1cd4:
    // 0x4d1cd4: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x4d1cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_4d1cd8:
    // 0x4d1cd8: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x4d1cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_4d1cdc:
    // 0x4d1cdc: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x4d1cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_4d1ce0:
    // 0x4d1ce0: 0xa2000066  sb          $zero, 0x66($s0)
    ctx->pc = 0x4d1ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 0));
label_4d1ce4:
    // 0x4d1ce4: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x4d1ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_4d1ce8:
    // 0x4d1ce8: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x4d1ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_4d1cec:
    // 0x4d1cec: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x4d1cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_4d1cf0:
    // 0x4d1cf0: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x4d1cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
label_4d1cf4:
    // 0x4d1cf4: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x4d1cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
label_4d1cf8:
    // 0x4d1cf8: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x4d1cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
label_4d1cfc:
    // 0x4d1cfc: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x4d1cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_4d1d00:
    // 0x4d1d00: 0xa20000d7  sb          $zero, 0xD7($s0)
    ctx->pc = 0x4d1d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 215), (uint8_t)GPR_U32(ctx, 0));
label_4d1d04:
    // 0x4d1d04: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x4d1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_4d1d08:
    // 0x4d1d08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d1d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d1d0c:
    // 0x4d1d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d1d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d1d10:
    // 0x4d1d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d1d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d1d14:
    // 0x4d1d14: 0x3e00008  jr          $ra
label_4d1d18:
    if (ctx->pc == 0x4D1D18u) {
        ctx->pc = 0x4D1D18u;
            // 0x4d1d18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4D1D1Cu;
        goto label_4d1d1c;
    }
    ctx->pc = 0x4D1D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1D14u;
            // 0x4d1d18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D1D1Cu;
label_4d1d1c:
    // 0x4d1d1c: 0x0  nop
    ctx->pc = 0x4d1d1cu;
    // NOP
label_4d1d20:
    // 0x4d1d20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4d1d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4d1d24:
    // 0x4d1d24: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x4d1d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_4d1d28:
    // 0x4d1d28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4d1d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4d1d2c:
    // 0x4d1d2c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d1d30:
    // 0x4d1d30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d1d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4d1d34:
    // 0x4d1d34: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4d1d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d1d38:
    // 0x4d1d38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d1d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4d1d3c:
    // 0x4d1d3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d1d3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4d1d40:
    // 0x4d1d40: 0x8c42aa30  lw          $v0, -0x55D0($v0)
    ctx->pc = 0x4d1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945328)));
label_4d1d44:
    // 0x4d1d44: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4d1d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4d1d48:
    // 0x4d1d48: 0xc12e608  jal         func_4B9820
label_4d1d4c:
    if (ctx->pc == 0x4D1D4Cu) {
        ctx->pc = 0x4D1D4Cu;
            // 0x4d1d4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1D50u;
        goto label_4d1d50;
    }
    ctx->pc = 0x4D1D48u;
    SET_GPR_U32(ctx, 31, 0x4D1D50u);
    ctx->pc = 0x4D1D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1D48u;
            // 0x4d1d4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1D50u; }
        if (ctx->pc != 0x4D1D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1D50u; }
        if (ctx->pc != 0x4D1D50u) { return; }
    }
    ctx->pc = 0x4D1D50u;
label_4d1d50:
    // 0x4d1d50: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x4d1d50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
label_4d1d54:
    // 0x4d1d54: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x4d1d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_4d1d58:
    // 0x4d1d58: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x4d1d58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_4d1d5c:
    // 0x4d1d5c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4d1d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4d1d60:
    // 0x4d1d60: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x4d1d60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_4d1d64:
    // 0x4d1d64: 0xa2000066  sb          $zero, 0x66($s0)
    ctx->pc = 0x4d1d64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 0));
label_4d1d68:
    // 0x4d1d68: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x4d1d68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_4d1d6c:
    // 0x4d1d6c: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x4d1d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_4d1d70:
    // 0x4d1d70: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x4d1d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_4d1d74:
    // 0x4d1d74: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x4d1d74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
label_4d1d78:
    // 0x4d1d78: 0xc04cc04  jal         func_133010
label_4d1d7c:
    if (ctx->pc == 0x4D1D7Cu) {
        ctx->pc = 0x4D1D7Cu;
            // 0x4d1d7c: 0xa200006b  sb          $zero, 0x6B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4D1D80u;
        goto label_4d1d80;
    }
    ctx->pc = 0x4D1D78u;
    SET_GPR_U32(ctx, 31, 0x4D1D80u);
    ctx->pc = 0x4D1D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1D78u;
            // 0x4d1d7c: 0xa200006b  sb          $zero, 0x6B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1D80u; }
        if (ctx->pc != 0x4D1D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1D80u; }
        if (ctx->pc != 0x4D1D80u) { return; }
    }
    ctx->pc = 0x4D1D80u;
label_4d1d80:
    // 0x4d1d80: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x4d1d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_4d1d84:
    // 0x4d1d84: 0xc04c720  jal         func_131C80
label_4d1d88:
    if (ctx->pc == 0x4D1D88u) {
        ctx->pc = 0x4D1D88u;
            // 0x4d1d88: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4D1D8Cu;
        goto label_4d1d8c;
    }
    ctx->pc = 0x4D1D84u;
    SET_GPR_U32(ctx, 31, 0x4D1D8Cu);
    ctx->pc = 0x4D1D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1D84u;
            // 0x4d1d88: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1D8Cu; }
        if (ctx->pc != 0x4D1D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1D8Cu; }
        if (ctx->pc != 0x4D1D8Cu) { return; }
    }
    ctx->pc = 0x4D1D8Cu;
label_4d1d8c:
    // 0x4d1d8c: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x4d1d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d1d90:
    // 0x4d1d90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4d1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4d1d94:
    // 0x4d1d94: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x4d1d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d1d98:
    // 0x4d1d98: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x4d1d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1d9c:
    // 0x4d1d9c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x4d1d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1da0:
    // 0x4d1da0: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x4d1da0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4d1da4:
    // 0x4d1da4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4d1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_4d1da8:
    // 0x4d1da8: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x4d1da8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4d1dac:
    // 0x4d1dac: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4d1dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4d1db0:
    // 0x4d1db0: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x4d1db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_4d1db4:
    // 0x4d1db4: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4d1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_4d1db8:
    // 0x4d1db8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x4d1db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_4d1dbc:
    // 0x4d1dbc: 0xc04c968  jal         func_1325A0
label_4d1dc0:
    if (ctx->pc == 0x4D1DC0u) {
        ctx->pc = 0x4D1DC0u;
            // 0x4d1dc0: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x4D1DC4u;
        goto label_4d1dc4;
    }
    ctx->pc = 0x4D1DBCu;
    SET_GPR_U32(ctx, 31, 0x4D1DC4u);
    ctx->pc = 0x4D1DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1DBCu;
            // 0x4d1dc0: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1DC4u; }
        if (ctx->pc != 0x4D1DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1DC4u; }
        if (ctx->pc != 0x4D1DC4u) { return; }
    }
    ctx->pc = 0x4D1DC4u;
label_4d1dc4:
    // 0x4d1dc4: 0x3c03c080  lui         $v1, 0xC080
    ctx->pc = 0x4d1dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49280 << 16));
label_4d1dc8:
    // 0x4d1dc8: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4d1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_4d1dcc:
    // 0x4d1dcc: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x4d1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
label_4d1dd0:
    // 0x4d1dd0: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4d1dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4d1dd4:
    // 0x4d1dd4: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x4d1dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1dd8:
    // 0x4d1dd8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4d1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4d1ddc:
    // 0x4d1ddc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4d1ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4d1de0:
    // 0x4d1de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4d1de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1de4:
    // 0x4d1de4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4d1de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4d1de8:
    // 0x4d1de8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d1de8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4d1dec:
    // 0x4d1dec: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4d1decu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4d1df0:
    // 0x4d1df0: 0xc04ca18  jal         func_132860
label_4d1df4:
    if (ctx->pc == 0x4D1DF4u) {
        ctx->pc = 0x4D1DF4u;
            // 0x4d1df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1DF8u;
        goto label_4d1df8;
    }
    ctx->pc = 0x4D1DF0u;
    SET_GPR_U32(ctx, 31, 0x4D1DF8u);
    ctx->pc = 0x4D1DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1DF0u;
            // 0x4d1df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1DF8u; }
        if (ctx->pc != 0x4D1DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1DF8u; }
        if (ctx->pc != 0x4D1DF8u) { return; }
    }
    ctx->pc = 0x4D1DF8u;
label_4d1df8:
    // 0x4d1df8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4d1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4d1dfc:
    // 0x4d1dfc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4d1dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4d1e00:
    // 0x4d1e00: 0xc04c72c  jal         func_131CB0
label_4d1e04:
    if (ctx->pc == 0x4D1E04u) {
        ctx->pc = 0x4D1E04u;
            // 0x4d1e04: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1E08u;
        goto label_4d1e08;
    }
    ctx->pc = 0x4D1E00u;
    SET_GPR_U32(ctx, 31, 0x4D1E08u);
    ctx->pc = 0x4D1E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1E00u;
            // 0x4d1e04: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E08u; }
        if (ctx->pc != 0x4D1E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E08u; }
        if (ctx->pc != 0x4D1E08u) { return; }
    }
    ctx->pc = 0x4D1E08u;
label_4d1e08:
    // 0x4d1e08: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x4d1e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1e0c:
    // 0x4d1e0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4d1e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4d1e10:
    // 0x4d1e10: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x4d1e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1e14:
    // 0x4d1e14: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x4d1e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d1e18:
    // 0x4d1e18: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x4d1e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_4d1e1c:
    // 0x4d1e1c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x4d1e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_4d1e20:
    // 0x4d1e20: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x4d1e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1e24:
    // 0x4d1e24: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x4d1e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1e28:
    // 0x4d1e28: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x4d1e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4d1e2c:
    // 0x4d1e2c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x4d1e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4d1e30:
    // 0x4d1e30: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x4d1e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4d1e34:
    // 0x4d1e34: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x4d1e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d1e38:
    // 0x4d1e38: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x4d1e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1e3c:
    // 0x4d1e3c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x4d1e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1e40:
    // 0x4d1e40: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x4d1e40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_4d1e44:
    // 0x4d1e44: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x4d1e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4d1e48:
    // 0x4d1e48: 0xc0d8a80  jal         func_362A00
label_4d1e4c:
    if (ctx->pc == 0x4D1E4Cu) {
        ctx->pc = 0x4D1E4Cu;
            // 0x4d1e4c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x4D1E50u;
        goto label_4d1e50;
    }
    ctx->pc = 0x4D1E48u;
    SET_GPR_U32(ctx, 31, 0x4D1E50u);
    ctx->pc = 0x4D1E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1E48u;
            // 0x4d1e4c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E50u; }
        if (ctx->pc != 0x4D1E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E50u; }
        if (ctx->pc != 0x4D1E50u) { return; }
    }
    ctx->pc = 0x4D1E50u;
label_4d1e50:
    // 0x4d1e50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4d1e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1e54:
    // 0x4d1e54: 0xc0d8a80  jal         func_362A00
label_4d1e58:
    if (ctx->pc == 0x4D1E58u) {
        ctx->pc = 0x4D1E58u;
            // 0x4d1e58: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D1E5Cu;
        goto label_4d1e5c;
    }
    ctx->pc = 0x4D1E54u;
    SET_GPR_U32(ctx, 31, 0x4D1E5Cu);
    ctx->pc = 0x4D1E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1E54u;
            // 0x4d1e58: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E5Cu; }
        if (ctx->pc != 0x4D1E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E5Cu; }
        if (ctx->pc != 0x4D1E5Cu) { return; }
    }
    ctx->pc = 0x4D1E5Cu;
label_4d1e5c:
    // 0x4d1e5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d1e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d1e60:
    // 0x4d1e60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4d1e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1e64:
    // 0x4d1e64: 0xc0d8a6c  jal         func_3629B0
label_4d1e68:
    if (ctx->pc == 0x4D1E68u) {
        ctx->pc = 0x4D1E68u;
            // 0x4d1e68: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D1E6Cu;
        goto label_4d1e6c;
    }
    ctx->pc = 0x4D1E64u;
    SET_GPR_U32(ctx, 31, 0x4D1E6Cu);
    ctx->pc = 0x4D1E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1E64u;
            // 0x4d1e68: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E6Cu; }
        if (ctx->pc != 0x4D1E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E6Cu; }
        if (ctx->pc != 0x4D1E6Cu) { return; }
    }
    ctx->pc = 0x4D1E6Cu;
label_4d1e6c:
    // 0x4d1e6c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4d1e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4d1e70:
    // 0x4d1e70: 0xc0b6e90  jal         func_2DBA40
label_4d1e74:
    if (ctx->pc == 0x4D1E74u) {
        ctx->pc = 0x4D1E74u;
            // 0x4d1e74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4D1E78u;
        goto label_4d1e78;
    }
    ctx->pc = 0x4D1E70u;
    SET_GPR_U32(ctx, 31, 0x4D1E78u);
    ctx->pc = 0x4D1E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1E70u;
            // 0x4d1e74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E78u; }
        if (ctx->pc != 0x4D1E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E78u; }
        if (ctx->pc != 0x4D1E78u) { return; }
    }
    ctx->pc = 0x4D1E78u;
label_4d1e78:
    // 0x4d1e78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4d1e78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4d1e7c:
    // 0x4d1e7c: 0xc0d8a80  jal         func_362A00
label_4d1e80:
    if (ctx->pc == 0x4D1E80u) {
        ctx->pc = 0x4D1E80u;
            // 0x4d1e80: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4D1E84u;
        goto label_4d1e84;
    }
    ctx->pc = 0x4D1E7Cu;
    SET_GPR_U32(ctx, 31, 0x4D1E84u);
    ctx->pc = 0x4D1E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1E7Cu;
            // 0x4d1e80: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E84u; }
        if (ctx->pc != 0x4D1E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E84u; }
        if (ctx->pc != 0x4D1E84u) { return; }
    }
    ctx->pc = 0x4D1E84u;
label_4d1e84:
    // 0x4d1e84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4d1e84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4d1e88:
    // 0x4d1e88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d1e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1e8c:
    // 0x4d1e8c: 0xc0d8a54  jal         func_362950
label_4d1e90:
    if (ctx->pc == 0x4D1E90u) {
        ctx->pc = 0x4D1E90u;
            // 0x4d1e90: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D1E94u;
        goto label_4d1e94;
    }
    ctx->pc = 0x4D1E8Cu;
    SET_GPR_U32(ctx, 31, 0x4D1E94u);
    ctx->pc = 0x4D1E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1E8Cu;
            // 0x4d1e90: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E94u; }
        if (ctx->pc != 0x4D1E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1E94u; }
        if (ctx->pc != 0x4D1E94u) { return; }
    }
    ctx->pc = 0x4D1E94u;
label_4d1e94:
    // 0x4d1e94: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4d1e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4d1e98:
    // 0x4d1e98: 0xc0b6e90  jal         func_2DBA40
label_4d1e9c:
    if (ctx->pc == 0x4D1E9Cu) {
        ctx->pc = 0x4D1E9Cu;
            // 0x4d1e9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4D1EA0u;
        goto label_4d1ea0;
    }
    ctx->pc = 0x4D1E98u;
    SET_GPR_U32(ctx, 31, 0x4D1EA0u);
    ctx->pc = 0x4D1E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1E98u;
            // 0x4d1e9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EA0u; }
        if (ctx->pc != 0x4D1EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EA0u; }
        if (ctx->pc != 0x4D1EA0u) { return; }
    }
    ctx->pc = 0x4D1EA0u;
label_4d1ea0:
    // 0x4d1ea0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4d1ea0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4d1ea4:
    // 0x4d1ea4: 0xc0d8a80  jal         func_362A00
label_4d1ea8:
    if (ctx->pc == 0x4D1EA8u) {
        ctx->pc = 0x4D1EA8u;
            // 0x4d1ea8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D1EACu;
        goto label_4d1eac;
    }
    ctx->pc = 0x4D1EA4u;
    SET_GPR_U32(ctx, 31, 0x4D1EACu);
    ctx->pc = 0x4D1EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1EA4u;
            // 0x4d1ea8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EACu; }
        if (ctx->pc != 0x4D1EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EACu; }
        if (ctx->pc != 0x4D1EACu) { return; }
    }
    ctx->pc = 0x4D1EACu;
label_4d1eac:
    // 0x4d1eac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4d1eacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4d1eb0:
    // 0x4d1eb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d1eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1eb4:
    // 0x4d1eb4: 0xc0d8a3c  jal         func_3628F0
label_4d1eb8:
    if (ctx->pc == 0x4D1EB8u) {
        ctx->pc = 0x4D1EB8u;
            // 0x4d1eb8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D1EBCu;
        goto label_4d1ebc;
    }
    ctx->pc = 0x4D1EB4u;
    SET_GPR_U32(ctx, 31, 0x4D1EBCu);
    ctx->pc = 0x4D1EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1EB4u;
            // 0x4d1eb8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EBCu; }
        if (ctx->pc != 0x4D1EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EBCu; }
        if (ctx->pc != 0x4D1EBCu) { return; }
    }
    ctx->pc = 0x4D1EBCu;
label_4d1ebc:
    // 0x4d1ebc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4d1ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4d1ec0:
    // 0x4d1ec0: 0xc0b6e00  jal         func_2DB800
label_4d1ec4:
    if (ctx->pc == 0x4D1EC4u) {
        ctx->pc = 0x4D1EC4u;
            // 0x4d1ec4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1EC8u;
        goto label_4d1ec8;
    }
    ctx->pc = 0x4D1EC0u;
    SET_GPR_U32(ctx, 31, 0x4D1EC8u);
    ctx->pc = 0x4D1EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1EC0u;
            // 0x4d1ec4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EC8u; }
        if (ctx->pc != 0x4D1EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EC8u; }
        if (ctx->pc != 0x4D1EC8u) { return; }
    }
    ctx->pc = 0x4D1EC8u;
label_4d1ec8:
    // 0x4d1ec8: 0xc0d8a80  jal         func_362A00
label_4d1ecc:
    if (ctx->pc == 0x4D1ECCu) {
        ctx->pc = 0x4D1ECCu;
            // 0x4d1ecc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D1ED0u;
        goto label_4d1ed0;
    }
    ctx->pc = 0x4D1EC8u;
    SET_GPR_U32(ctx, 31, 0x4D1ED0u);
    ctx->pc = 0x4D1ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1EC8u;
            // 0x4d1ecc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1ED0u; }
        if (ctx->pc != 0x4D1ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1ED0u; }
        if (ctx->pc != 0x4D1ED0u) { return; }
    }
    ctx->pc = 0x4D1ED0u;
label_4d1ed0:
    // 0x4d1ed0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4d1ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1ed4:
    // 0x4d1ed4: 0xc0d8a80  jal         func_362A00
label_4d1ed8:
    if (ctx->pc == 0x4D1ED8u) {
        ctx->pc = 0x4D1ED8u;
            // 0x4d1ed8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4D1EDCu;
        goto label_4d1edc;
    }
    ctx->pc = 0x4D1ED4u;
    SET_GPR_U32(ctx, 31, 0x4D1EDCu);
    ctx->pc = 0x4D1ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1ED4u;
            // 0x4d1ed8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EDCu; }
        if (ctx->pc != 0x4D1EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EDCu; }
        if (ctx->pc != 0x4D1EDCu) { return; }
    }
    ctx->pc = 0x4D1EDCu;
label_4d1edc:
    // 0x4d1edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d1edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d1ee0:
    // 0x4d1ee0: 0xc0d8a2c  jal         func_3628B0
label_4d1ee4:
    if (ctx->pc == 0x4D1EE4u) {
        ctx->pc = 0x4D1EE4u;
            // 0x4d1ee4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1EE8u;
        goto label_4d1ee8;
    }
    ctx->pc = 0x4D1EE0u;
    SET_GPR_U32(ctx, 31, 0x4D1EE8u);
    ctx->pc = 0x4D1EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1EE0u;
            // 0x4d1ee4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EE8u; }
        if (ctx->pc != 0x4D1EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EE8u; }
        if (ctx->pc != 0x4D1EE8u) { return; }
    }
    ctx->pc = 0x4D1EE8u;
label_4d1ee8:
    // 0x4d1ee8: 0xc0d8a24  jal         func_362890
label_4d1eec:
    if (ctx->pc == 0x4D1EECu) {
        ctx->pc = 0x4D1EECu;
            // 0x4d1eec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4D1EF0u;
        goto label_4d1ef0;
    }
    ctx->pc = 0x4D1EE8u;
    SET_GPR_U32(ctx, 31, 0x4D1EF0u);
    ctx->pc = 0x4D1EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1EE8u;
            // 0x4d1eec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EF0u; }
        if (ctx->pc != 0x4D1EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1EF0u; }
        if (ctx->pc != 0x4D1EF0u) { return; }
    }
    ctx->pc = 0x4D1EF0u;
label_4d1ef0:
    // 0x4d1ef0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4d1ef4:
    if (ctx->pc == 0x4D1EF4u) {
        ctx->pc = 0x4D1EF4u;
            // 0x4d1ef4: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4D1EF8u;
        goto label_4d1ef8;
    }
    ctx->pc = 0x4D1EF0u;
    {
        const bool branch_taken_0x4d1ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d1ef0) {
            ctx->pc = 0x4D1EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1EF0u;
            // 0x4d1ef4: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1F08u;
            goto label_4d1f08;
        }
    }
    ctx->pc = 0x4D1EF8u;
label_4d1ef8:
    // 0x4d1ef8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4d1ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4d1efc:
    // 0x4d1efc: 0xc0d8a14  jal         func_362850
label_4d1f00:
    if (ctx->pc == 0x4D1F00u) {
        ctx->pc = 0x4D1F00u;
            // 0x4d1f00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1F04u;
        goto label_4d1f04;
    }
    ctx->pc = 0x4D1EFCu;
    SET_GPR_U32(ctx, 31, 0x4D1F04u);
    ctx->pc = 0x4D1F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1EFCu;
            // 0x4d1f00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1F04u; }
        if (ctx->pc != 0x4D1F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1F04u; }
        if (ctx->pc != 0x4D1F04u) { return; }
    }
    ctx->pc = 0x4D1F04u;
label_4d1f04:
    // 0x4d1f04: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x4d1f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1f08:
    // 0x4d1f08: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x4d1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_4d1f0c:
    // 0x4d1f0c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4d1f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_4d1f10:
    // 0x4d1f10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4d1f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d1f14:
    // 0x4d1f14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d1f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1f18:
    // 0x4d1f18: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x4d1f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_4d1f1c:
    // 0x4d1f1c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x4d1f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1f20:
    // 0x4d1f20: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x4d1f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_4d1f24:
    // 0x4d1f24: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x4d1f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1f28:
    // 0x4d1f28: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x4d1f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_4d1f2c:
    // 0x4d1f2c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x4d1f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1f30:
    // 0x4d1f30: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x4d1f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_4d1f34:
    // 0x4d1f34: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x4d1f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_4d1f38:
    // 0x4d1f38: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x4d1f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_4d1f3c:
    // 0x4d1f3c: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x4d1f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_4d1f40:
    // 0x4d1f40: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x4d1f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_4d1f44:
    // 0x4d1f44: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x4d1f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_4d1f48:
    // 0x4d1f48: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4d1f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1f4c:
    // 0x4d1f4c: 0xc08914c  jal         func_224530
label_4d1f50:
    if (ctx->pc == 0x4D1F50u) {
        ctx->pc = 0x4D1F50u;
            // 0x4d1f50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1F54u;
        goto label_4d1f54;
    }
    ctx->pc = 0x4D1F4Cu;
    SET_GPR_U32(ctx, 31, 0x4D1F54u);
    ctx->pc = 0x4D1F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1F4Cu;
            // 0x4d1f50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1F54u; }
        if (ctx->pc != 0x4D1F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1F54u; }
        if (ctx->pc != 0x4D1F54u) { return; }
    }
    ctx->pc = 0x4D1F54u;
label_4d1f54:
    // 0x4d1f54: 0xc040180  jal         func_100600
label_4d1f58:
    if (ctx->pc == 0x4D1F58u) {
        ctx->pc = 0x4D1F58u;
            // 0x4d1f58: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x4D1F5Cu;
        goto label_4d1f5c;
    }
    ctx->pc = 0x4D1F54u;
    SET_GPR_U32(ctx, 31, 0x4D1F5Cu);
    ctx->pc = 0x4D1F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1F54u;
            // 0x4d1f58: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1F5Cu; }
        if (ctx->pc != 0x4D1F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1F5Cu; }
        if (ctx->pc != 0x4D1F5Cu) { return; }
    }
    ctx->pc = 0x4D1F5Cu;
label_4d1f5c:
    // 0x4d1f5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4d1f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1f60:
    // 0x4d1f60: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_4d1f64:
    if (ctx->pc == 0x4D1F64u) {
        ctx->pc = 0x4D1F64u;
            // 0x4d1f64: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4D1F68u;
        goto label_4d1f68;
    }
    ctx->pc = 0x4D1F60u;
    {
        const bool branch_taken_0x4d1f60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d1f60) {
            ctx->pc = 0x4D1F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1F60u;
            // 0x4d1f64: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1FA0u;
            goto label_4d1fa0;
        }
    }
    ctx->pc = 0x4D1F68u;
label_4d1f68:
    // 0x4d1f68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d1f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4d1f6c:
    // 0x4d1f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1f70:
    // 0x4d1f70: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4d1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4d1f74:
    // 0x4d1f74: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4d1f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4d1f78:
    // 0x4d1f78: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d1f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d1f7c:
    // 0x4d1f7c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4d1f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4d1f80:
    // 0x4d1f80: 0xc040138  jal         func_1004E0
label_4d1f84:
    if (ctx->pc == 0x4D1F84u) {
        ctx->pc = 0x4D1F84u;
            // 0x4d1f84: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4D1F88u;
        goto label_4d1f88;
    }
    ctx->pc = 0x4D1F80u;
    SET_GPR_U32(ctx, 31, 0x4D1F88u);
    ctx->pc = 0x4D1F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1F80u;
            // 0x4d1f84: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1F88u; }
        if (ctx->pc != 0x4D1F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1F88u; }
        if (ctx->pc != 0x4D1F88u) { return; }
    }
    ctx->pc = 0x4D1F88u;
label_4d1f88:
    // 0x4d1f88: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4d1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4d1f8c:
    // 0x4d1f8c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4d1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4d1f90:
    // 0x4d1f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d1f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1f94:
    // 0x4d1f94: 0xc04a576  jal         func_1295D8
label_4d1f98:
    if (ctx->pc == 0x4D1F98u) {
        ctx->pc = 0x4D1F98u;
            // 0x4d1f98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4D1F9Cu;
        goto label_4d1f9c;
    }
    ctx->pc = 0x4D1F94u;
    SET_GPR_U32(ctx, 31, 0x4D1F9Cu);
    ctx->pc = 0x4D1F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1F94u;
            // 0x4d1f98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1F9Cu; }
        if (ctx->pc != 0x4D1F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1F9Cu; }
        if (ctx->pc != 0x4D1F9Cu) { return; }
    }
    ctx->pc = 0x4D1F9Cu;
label_4d1f9c:
    // 0x4d1f9c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4d1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4d1fa0:
    // 0x4d1fa0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4d1fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_4d1fa4:
    // 0x4d1fa4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4d1fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4d1fa8:
    // 0x4d1fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d1fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d1fac:
    // 0x4d1fac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4d1facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d1fb0:
    // 0x4d1fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d1fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1fb4:
    // 0x4d1fb4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4d1fb8:
    // 0x4d1fb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4d1fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1fbc:
    // 0x4d1fbc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4d1fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4d1fc0:
    // 0x4d1fc0: 0x344610ae  ori         $a2, $v0, 0x10AE
    ctx->pc = 0x4d1fc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4270);
label_4d1fc4:
    // 0x4d1fc4: 0xc122cd8  jal         func_48B360
label_4d1fc8:
    if (ctx->pc == 0x4D1FC8u) {
        ctx->pc = 0x4D1FC8u;
            // 0x4d1fc8: 0xae110140  sw          $s1, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 17));
        ctx->pc = 0x4D1FCCu;
        goto label_4d1fcc;
    }
    ctx->pc = 0x4D1FC4u;
    SET_GPR_U32(ctx, 31, 0x4D1FCCu);
    ctx->pc = 0x4D1FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1FC4u;
            // 0x4d1fc8: 0xae110140  sw          $s1, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1FCCu; }
        if (ctx->pc != 0x4D1FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1FCCu; }
        if (ctx->pc != 0x4D1FCCu) { return; }
    }
    ctx->pc = 0x4D1FCCu;
label_4d1fcc:
    // 0x4d1fcc: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x4d1fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_4d1fd0:
    // 0x4d1fd0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x4d1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_4d1fd4:
    // 0x4d1fd4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x4d1fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_4d1fd8:
    // 0x4d1fd8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4d1fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4d1fdc:
    // 0x4d1fdc: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4d1fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d1fe0:
    // 0x4d1fe0: 0xc088b74  jal         func_222DD0
label_4d1fe4:
    if (ctx->pc == 0x4D1FE4u) {
        ctx->pc = 0x4D1FE4u;
            // 0x4d1fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1FE8u;
        goto label_4d1fe8;
    }
    ctx->pc = 0x4D1FE0u;
    SET_GPR_U32(ctx, 31, 0x4D1FE8u);
    ctx->pc = 0x4D1FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1FE0u;
            // 0x4d1fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1FE8u; }
        if (ctx->pc != 0x4D1FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1FE8u; }
        if (ctx->pc != 0x4D1FE8u) { return; }
    }
    ctx->pc = 0x4D1FE8u;
label_4d1fe8:
    // 0x4d1fe8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4d1fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4d1fec:
    // 0x4d1fec: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4d1fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4d1ff0:
    // 0x4d1ff0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4d1ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4d1ff4:
    // 0x4d1ff4: 0x320f809  jalr        $t9
label_4d1ff8:
    if (ctx->pc == 0x4D1FF8u) {
        ctx->pc = 0x4D1FF8u;
            // 0x4d1ff8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4D1FFCu;
        goto label_4d1ffc;
    }
    ctx->pc = 0x4D1FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D1FFCu);
        ctx->pc = 0x4D1FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1FF4u;
            // 0x4d1ff8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D1FFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D1FFCu; }
            if (ctx->pc != 0x4D1FFCu) { return; }
        }
        }
    }
    ctx->pc = 0x4D1FFCu;
label_4d1ffc:
    // 0x4d1ffc: 0x8e100050  lw          $s0, 0x50($s0)
    ctx->pc = 0x4d1ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d2000:
    // 0x4d2000: 0xc088b74  jal         func_222DD0
label_4d2004:
    if (ctx->pc == 0x4D2004u) {
        ctx->pc = 0x4D2004u;
            // 0x4d2004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2008u;
        goto label_4d2008;
    }
    ctx->pc = 0x4D2000u;
    SET_GPR_U32(ctx, 31, 0x4D2008u);
    ctx->pc = 0x4D2004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2000u;
            // 0x4d2004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2008u; }
        if (ctx->pc != 0x4D2008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2008u; }
        if (ctx->pc != 0x4D2008u) { return; }
    }
    ctx->pc = 0x4D2008u;
label_4d2008:
    // 0x4d2008: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4d2008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4d200c:
    // 0x4d200c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4d200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4d2010:
    // 0x4d2010: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d2010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d2014:
    // 0x4d2014: 0x320f809  jalr        $t9
label_4d2018:
    if (ctx->pc == 0x4D2018u) {
        ctx->pc = 0x4D2018u;
            // 0x4d2018: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4D201Cu;
        goto label_4d201c;
    }
    ctx->pc = 0x4D2014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D201Cu);
        ctx->pc = 0x4D2018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2014u;
            // 0x4d2018: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D201Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D201Cu; }
            if (ctx->pc != 0x4D201Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D201Cu;
label_4d201c:
    // 0x4d201c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d201cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d2020:
    // 0x4d2020: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d2020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4d2024:
    // 0x4d2024: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d2024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d2028:
    // 0x4d2028: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d2028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d202c:
    // 0x4d202c: 0x3e00008  jr          $ra
label_4d2030:
    if (ctx->pc == 0x4D2030u) {
        ctx->pc = 0x4D2030u;
            // 0x4d2030: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4D2034u;
        goto label_4d2034;
    }
    ctx->pc = 0x4D202Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D202Cu;
            // 0x4d2030: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2034u;
label_4d2034:
    // 0x4d2034: 0x0  nop
    ctx->pc = 0x4d2034u;
    // NOP
label_4d2038:
    // 0x4d2038: 0x0  nop
    ctx->pc = 0x4d2038u;
    // NOP
label_4d203c:
    // 0x4d203c: 0x0  nop
    ctx->pc = 0x4d203cu;
    // NOP
}
