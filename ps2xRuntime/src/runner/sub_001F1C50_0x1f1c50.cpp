#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1C50
// Address: 0x1f1c50 - 0x1f2170
void sub_001F1C50_0x1f1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1C50_0x1f1c50");
#endif

    switch (ctx->pc) {
        case 0x1f1c50u: goto label_1f1c50;
        case 0x1f1c54u: goto label_1f1c54;
        case 0x1f1c58u: goto label_1f1c58;
        case 0x1f1c5cu: goto label_1f1c5c;
        case 0x1f1c60u: goto label_1f1c60;
        case 0x1f1c64u: goto label_1f1c64;
        case 0x1f1c68u: goto label_1f1c68;
        case 0x1f1c6cu: goto label_1f1c6c;
        case 0x1f1c70u: goto label_1f1c70;
        case 0x1f1c74u: goto label_1f1c74;
        case 0x1f1c78u: goto label_1f1c78;
        case 0x1f1c7cu: goto label_1f1c7c;
        case 0x1f1c80u: goto label_1f1c80;
        case 0x1f1c84u: goto label_1f1c84;
        case 0x1f1c88u: goto label_1f1c88;
        case 0x1f1c8cu: goto label_1f1c8c;
        case 0x1f1c90u: goto label_1f1c90;
        case 0x1f1c94u: goto label_1f1c94;
        case 0x1f1c98u: goto label_1f1c98;
        case 0x1f1c9cu: goto label_1f1c9c;
        case 0x1f1ca0u: goto label_1f1ca0;
        case 0x1f1ca4u: goto label_1f1ca4;
        case 0x1f1ca8u: goto label_1f1ca8;
        case 0x1f1cacu: goto label_1f1cac;
        case 0x1f1cb0u: goto label_1f1cb0;
        case 0x1f1cb4u: goto label_1f1cb4;
        case 0x1f1cb8u: goto label_1f1cb8;
        case 0x1f1cbcu: goto label_1f1cbc;
        case 0x1f1cc0u: goto label_1f1cc0;
        case 0x1f1cc4u: goto label_1f1cc4;
        case 0x1f1cc8u: goto label_1f1cc8;
        case 0x1f1cccu: goto label_1f1ccc;
        case 0x1f1cd0u: goto label_1f1cd0;
        case 0x1f1cd4u: goto label_1f1cd4;
        case 0x1f1cd8u: goto label_1f1cd8;
        case 0x1f1cdcu: goto label_1f1cdc;
        case 0x1f1ce0u: goto label_1f1ce0;
        case 0x1f1ce4u: goto label_1f1ce4;
        case 0x1f1ce8u: goto label_1f1ce8;
        case 0x1f1cecu: goto label_1f1cec;
        case 0x1f1cf0u: goto label_1f1cf0;
        case 0x1f1cf4u: goto label_1f1cf4;
        case 0x1f1cf8u: goto label_1f1cf8;
        case 0x1f1cfcu: goto label_1f1cfc;
        case 0x1f1d00u: goto label_1f1d00;
        case 0x1f1d04u: goto label_1f1d04;
        case 0x1f1d08u: goto label_1f1d08;
        case 0x1f1d0cu: goto label_1f1d0c;
        case 0x1f1d10u: goto label_1f1d10;
        case 0x1f1d14u: goto label_1f1d14;
        case 0x1f1d18u: goto label_1f1d18;
        case 0x1f1d1cu: goto label_1f1d1c;
        case 0x1f1d20u: goto label_1f1d20;
        case 0x1f1d24u: goto label_1f1d24;
        case 0x1f1d28u: goto label_1f1d28;
        case 0x1f1d2cu: goto label_1f1d2c;
        case 0x1f1d30u: goto label_1f1d30;
        case 0x1f1d34u: goto label_1f1d34;
        case 0x1f1d38u: goto label_1f1d38;
        case 0x1f1d3cu: goto label_1f1d3c;
        case 0x1f1d40u: goto label_1f1d40;
        case 0x1f1d44u: goto label_1f1d44;
        case 0x1f1d48u: goto label_1f1d48;
        case 0x1f1d4cu: goto label_1f1d4c;
        case 0x1f1d50u: goto label_1f1d50;
        case 0x1f1d54u: goto label_1f1d54;
        case 0x1f1d58u: goto label_1f1d58;
        case 0x1f1d5cu: goto label_1f1d5c;
        case 0x1f1d60u: goto label_1f1d60;
        case 0x1f1d64u: goto label_1f1d64;
        case 0x1f1d68u: goto label_1f1d68;
        case 0x1f1d6cu: goto label_1f1d6c;
        case 0x1f1d70u: goto label_1f1d70;
        case 0x1f1d74u: goto label_1f1d74;
        case 0x1f1d78u: goto label_1f1d78;
        case 0x1f1d7cu: goto label_1f1d7c;
        case 0x1f1d80u: goto label_1f1d80;
        case 0x1f1d84u: goto label_1f1d84;
        case 0x1f1d88u: goto label_1f1d88;
        case 0x1f1d8cu: goto label_1f1d8c;
        case 0x1f1d90u: goto label_1f1d90;
        case 0x1f1d94u: goto label_1f1d94;
        case 0x1f1d98u: goto label_1f1d98;
        case 0x1f1d9cu: goto label_1f1d9c;
        case 0x1f1da0u: goto label_1f1da0;
        case 0x1f1da4u: goto label_1f1da4;
        case 0x1f1da8u: goto label_1f1da8;
        case 0x1f1dacu: goto label_1f1dac;
        case 0x1f1db0u: goto label_1f1db0;
        case 0x1f1db4u: goto label_1f1db4;
        case 0x1f1db8u: goto label_1f1db8;
        case 0x1f1dbcu: goto label_1f1dbc;
        case 0x1f1dc0u: goto label_1f1dc0;
        case 0x1f1dc4u: goto label_1f1dc4;
        case 0x1f1dc8u: goto label_1f1dc8;
        case 0x1f1dccu: goto label_1f1dcc;
        case 0x1f1dd0u: goto label_1f1dd0;
        case 0x1f1dd4u: goto label_1f1dd4;
        case 0x1f1dd8u: goto label_1f1dd8;
        case 0x1f1ddcu: goto label_1f1ddc;
        case 0x1f1de0u: goto label_1f1de0;
        case 0x1f1de4u: goto label_1f1de4;
        case 0x1f1de8u: goto label_1f1de8;
        case 0x1f1decu: goto label_1f1dec;
        case 0x1f1df0u: goto label_1f1df0;
        case 0x1f1df4u: goto label_1f1df4;
        case 0x1f1df8u: goto label_1f1df8;
        case 0x1f1dfcu: goto label_1f1dfc;
        case 0x1f1e00u: goto label_1f1e00;
        case 0x1f1e04u: goto label_1f1e04;
        case 0x1f1e08u: goto label_1f1e08;
        case 0x1f1e0cu: goto label_1f1e0c;
        case 0x1f1e10u: goto label_1f1e10;
        case 0x1f1e14u: goto label_1f1e14;
        case 0x1f1e18u: goto label_1f1e18;
        case 0x1f1e1cu: goto label_1f1e1c;
        case 0x1f1e20u: goto label_1f1e20;
        case 0x1f1e24u: goto label_1f1e24;
        case 0x1f1e28u: goto label_1f1e28;
        case 0x1f1e2cu: goto label_1f1e2c;
        case 0x1f1e30u: goto label_1f1e30;
        case 0x1f1e34u: goto label_1f1e34;
        case 0x1f1e38u: goto label_1f1e38;
        case 0x1f1e3cu: goto label_1f1e3c;
        case 0x1f1e40u: goto label_1f1e40;
        case 0x1f1e44u: goto label_1f1e44;
        case 0x1f1e48u: goto label_1f1e48;
        case 0x1f1e4cu: goto label_1f1e4c;
        case 0x1f1e50u: goto label_1f1e50;
        case 0x1f1e54u: goto label_1f1e54;
        case 0x1f1e58u: goto label_1f1e58;
        case 0x1f1e5cu: goto label_1f1e5c;
        case 0x1f1e60u: goto label_1f1e60;
        case 0x1f1e64u: goto label_1f1e64;
        case 0x1f1e68u: goto label_1f1e68;
        case 0x1f1e6cu: goto label_1f1e6c;
        case 0x1f1e70u: goto label_1f1e70;
        case 0x1f1e74u: goto label_1f1e74;
        case 0x1f1e78u: goto label_1f1e78;
        case 0x1f1e7cu: goto label_1f1e7c;
        case 0x1f1e80u: goto label_1f1e80;
        case 0x1f1e84u: goto label_1f1e84;
        case 0x1f1e88u: goto label_1f1e88;
        case 0x1f1e8cu: goto label_1f1e8c;
        case 0x1f1e90u: goto label_1f1e90;
        case 0x1f1e94u: goto label_1f1e94;
        case 0x1f1e98u: goto label_1f1e98;
        case 0x1f1e9cu: goto label_1f1e9c;
        case 0x1f1ea0u: goto label_1f1ea0;
        case 0x1f1ea4u: goto label_1f1ea4;
        case 0x1f1ea8u: goto label_1f1ea8;
        case 0x1f1eacu: goto label_1f1eac;
        case 0x1f1eb0u: goto label_1f1eb0;
        case 0x1f1eb4u: goto label_1f1eb4;
        case 0x1f1eb8u: goto label_1f1eb8;
        case 0x1f1ebcu: goto label_1f1ebc;
        case 0x1f1ec0u: goto label_1f1ec0;
        case 0x1f1ec4u: goto label_1f1ec4;
        case 0x1f1ec8u: goto label_1f1ec8;
        case 0x1f1eccu: goto label_1f1ecc;
        case 0x1f1ed0u: goto label_1f1ed0;
        case 0x1f1ed4u: goto label_1f1ed4;
        case 0x1f1ed8u: goto label_1f1ed8;
        case 0x1f1edcu: goto label_1f1edc;
        case 0x1f1ee0u: goto label_1f1ee0;
        case 0x1f1ee4u: goto label_1f1ee4;
        case 0x1f1ee8u: goto label_1f1ee8;
        case 0x1f1eecu: goto label_1f1eec;
        case 0x1f1ef0u: goto label_1f1ef0;
        case 0x1f1ef4u: goto label_1f1ef4;
        case 0x1f1ef8u: goto label_1f1ef8;
        case 0x1f1efcu: goto label_1f1efc;
        case 0x1f1f00u: goto label_1f1f00;
        case 0x1f1f04u: goto label_1f1f04;
        case 0x1f1f08u: goto label_1f1f08;
        case 0x1f1f0cu: goto label_1f1f0c;
        case 0x1f1f10u: goto label_1f1f10;
        case 0x1f1f14u: goto label_1f1f14;
        case 0x1f1f18u: goto label_1f1f18;
        case 0x1f1f1cu: goto label_1f1f1c;
        case 0x1f1f20u: goto label_1f1f20;
        case 0x1f1f24u: goto label_1f1f24;
        case 0x1f1f28u: goto label_1f1f28;
        case 0x1f1f2cu: goto label_1f1f2c;
        case 0x1f1f30u: goto label_1f1f30;
        case 0x1f1f34u: goto label_1f1f34;
        case 0x1f1f38u: goto label_1f1f38;
        case 0x1f1f3cu: goto label_1f1f3c;
        case 0x1f1f40u: goto label_1f1f40;
        case 0x1f1f44u: goto label_1f1f44;
        case 0x1f1f48u: goto label_1f1f48;
        case 0x1f1f4cu: goto label_1f1f4c;
        case 0x1f1f50u: goto label_1f1f50;
        case 0x1f1f54u: goto label_1f1f54;
        case 0x1f1f58u: goto label_1f1f58;
        case 0x1f1f5cu: goto label_1f1f5c;
        case 0x1f1f60u: goto label_1f1f60;
        case 0x1f1f64u: goto label_1f1f64;
        case 0x1f1f68u: goto label_1f1f68;
        case 0x1f1f6cu: goto label_1f1f6c;
        case 0x1f1f70u: goto label_1f1f70;
        case 0x1f1f74u: goto label_1f1f74;
        case 0x1f1f78u: goto label_1f1f78;
        case 0x1f1f7cu: goto label_1f1f7c;
        case 0x1f1f80u: goto label_1f1f80;
        case 0x1f1f84u: goto label_1f1f84;
        case 0x1f1f88u: goto label_1f1f88;
        case 0x1f1f8cu: goto label_1f1f8c;
        case 0x1f1f90u: goto label_1f1f90;
        case 0x1f1f94u: goto label_1f1f94;
        case 0x1f1f98u: goto label_1f1f98;
        case 0x1f1f9cu: goto label_1f1f9c;
        case 0x1f1fa0u: goto label_1f1fa0;
        case 0x1f1fa4u: goto label_1f1fa4;
        case 0x1f1fa8u: goto label_1f1fa8;
        case 0x1f1facu: goto label_1f1fac;
        case 0x1f1fb0u: goto label_1f1fb0;
        case 0x1f1fb4u: goto label_1f1fb4;
        case 0x1f1fb8u: goto label_1f1fb8;
        case 0x1f1fbcu: goto label_1f1fbc;
        case 0x1f1fc0u: goto label_1f1fc0;
        case 0x1f1fc4u: goto label_1f1fc4;
        case 0x1f1fc8u: goto label_1f1fc8;
        case 0x1f1fccu: goto label_1f1fcc;
        case 0x1f1fd0u: goto label_1f1fd0;
        case 0x1f1fd4u: goto label_1f1fd4;
        case 0x1f1fd8u: goto label_1f1fd8;
        case 0x1f1fdcu: goto label_1f1fdc;
        case 0x1f1fe0u: goto label_1f1fe0;
        case 0x1f1fe4u: goto label_1f1fe4;
        case 0x1f1fe8u: goto label_1f1fe8;
        case 0x1f1fecu: goto label_1f1fec;
        case 0x1f1ff0u: goto label_1f1ff0;
        case 0x1f1ff4u: goto label_1f1ff4;
        case 0x1f1ff8u: goto label_1f1ff8;
        case 0x1f1ffcu: goto label_1f1ffc;
        case 0x1f2000u: goto label_1f2000;
        case 0x1f2004u: goto label_1f2004;
        case 0x1f2008u: goto label_1f2008;
        case 0x1f200cu: goto label_1f200c;
        case 0x1f2010u: goto label_1f2010;
        case 0x1f2014u: goto label_1f2014;
        case 0x1f2018u: goto label_1f2018;
        case 0x1f201cu: goto label_1f201c;
        case 0x1f2020u: goto label_1f2020;
        case 0x1f2024u: goto label_1f2024;
        case 0x1f2028u: goto label_1f2028;
        case 0x1f202cu: goto label_1f202c;
        case 0x1f2030u: goto label_1f2030;
        case 0x1f2034u: goto label_1f2034;
        case 0x1f2038u: goto label_1f2038;
        case 0x1f203cu: goto label_1f203c;
        case 0x1f2040u: goto label_1f2040;
        case 0x1f2044u: goto label_1f2044;
        case 0x1f2048u: goto label_1f2048;
        case 0x1f204cu: goto label_1f204c;
        case 0x1f2050u: goto label_1f2050;
        case 0x1f2054u: goto label_1f2054;
        case 0x1f2058u: goto label_1f2058;
        case 0x1f205cu: goto label_1f205c;
        case 0x1f2060u: goto label_1f2060;
        case 0x1f2064u: goto label_1f2064;
        case 0x1f2068u: goto label_1f2068;
        case 0x1f206cu: goto label_1f206c;
        case 0x1f2070u: goto label_1f2070;
        case 0x1f2074u: goto label_1f2074;
        case 0x1f2078u: goto label_1f2078;
        case 0x1f207cu: goto label_1f207c;
        case 0x1f2080u: goto label_1f2080;
        case 0x1f2084u: goto label_1f2084;
        case 0x1f2088u: goto label_1f2088;
        case 0x1f208cu: goto label_1f208c;
        case 0x1f2090u: goto label_1f2090;
        case 0x1f2094u: goto label_1f2094;
        case 0x1f2098u: goto label_1f2098;
        case 0x1f209cu: goto label_1f209c;
        case 0x1f20a0u: goto label_1f20a0;
        case 0x1f20a4u: goto label_1f20a4;
        case 0x1f20a8u: goto label_1f20a8;
        case 0x1f20acu: goto label_1f20ac;
        case 0x1f20b0u: goto label_1f20b0;
        case 0x1f20b4u: goto label_1f20b4;
        case 0x1f20b8u: goto label_1f20b8;
        case 0x1f20bcu: goto label_1f20bc;
        case 0x1f20c0u: goto label_1f20c0;
        case 0x1f20c4u: goto label_1f20c4;
        case 0x1f20c8u: goto label_1f20c8;
        case 0x1f20ccu: goto label_1f20cc;
        case 0x1f20d0u: goto label_1f20d0;
        case 0x1f20d4u: goto label_1f20d4;
        case 0x1f20d8u: goto label_1f20d8;
        case 0x1f20dcu: goto label_1f20dc;
        case 0x1f20e0u: goto label_1f20e0;
        case 0x1f20e4u: goto label_1f20e4;
        case 0x1f20e8u: goto label_1f20e8;
        case 0x1f20ecu: goto label_1f20ec;
        case 0x1f20f0u: goto label_1f20f0;
        case 0x1f20f4u: goto label_1f20f4;
        case 0x1f20f8u: goto label_1f20f8;
        case 0x1f20fcu: goto label_1f20fc;
        case 0x1f2100u: goto label_1f2100;
        case 0x1f2104u: goto label_1f2104;
        case 0x1f2108u: goto label_1f2108;
        case 0x1f210cu: goto label_1f210c;
        case 0x1f2110u: goto label_1f2110;
        case 0x1f2114u: goto label_1f2114;
        case 0x1f2118u: goto label_1f2118;
        case 0x1f211cu: goto label_1f211c;
        case 0x1f2120u: goto label_1f2120;
        case 0x1f2124u: goto label_1f2124;
        case 0x1f2128u: goto label_1f2128;
        case 0x1f212cu: goto label_1f212c;
        case 0x1f2130u: goto label_1f2130;
        case 0x1f2134u: goto label_1f2134;
        case 0x1f2138u: goto label_1f2138;
        case 0x1f213cu: goto label_1f213c;
        case 0x1f2140u: goto label_1f2140;
        case 0x1f2144u: goto label_1f2144;
        case 0x1f2148u: goto label_1f2148;
        case 0x1f214cu: goto label_1f214c;
        case 0x1f2150u: goto label_1f2150;
        case 0x1f2154u: goto label_1f2154;
        case 0x1f2158u: goto label_1f2158;
        case 0x1f215cu: goto label_1f215c;
        case 0x1f2160u: goto label_1f2160;
        case 0x1f2164u: goto label_1f2164;
        case 0x1f2168u: goto label_1f2168;
        case 0x1f216cu: goto label_1f216c;
        default: break;
    }

    ctx->pc = 0x1f1c50u;

label_1f1c50:
    // 0x1f1c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f1c54:
    // 0x1f1c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f1c58:
    // 0x1f1c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f1c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f1c5c:
    // 0x1f1c5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1f1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1f1c60:
    // 0x1f1c60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1c64:
    // 0x1f1c64: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x1f1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
label_1f1c68:
    // 0x1f1c68: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x1f1c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
label_1f1c6c:
    // 0x1f1c6c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f1c70:
    // 0x1f1c70: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1f1c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1f1c74:
    // 0x1f1c74: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x1f1c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
label_1f1c78:
    // 0x1f1c78: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1f1c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f1c7c:
    // 0x1f1c7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f1c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f1c80:
    // 0x1f1c80: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f1c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f1c84:
    // 0x1f1c84: 0x320f809  jalr        $t9
label_1f1c88:
    if (ctx->pc == 0x1F1C88u) {
        ctx->pc = 0x1F1C8Cu;
        goto label_1f1c8c;
    }
    ctx->pc = 0x1F1C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F1C8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F1C8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C8Cu; }
            if (ctx->pc != 0x1F1C8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F1C8Cu;
label_1f1c8c:
    // 0x1f1c8c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1f1c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1f1c90:
    // 0x1f1c90: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1f1c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1f1c94:
    // 0x1f1c94: 0xc091c60  jal         func_247180
label_1f1c98:
    if (ctx->pc == 0x1F1C98u) {
        ctx->pc = 0x1F1C98u;
            // 0x1f1c98: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F1C9Cu;
        goto label_1f1c9c;
    }
    ctx->pc = 0x1F1C94u;
    SET_GPR_U32(ctx, 31, 0x1F1C9Cu);
    ctx->pc = 0x1F1C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C94u;
            // 0x1f1c98: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247180u;
    if (runtime->hasFunction(0x247180u)) {
        auto targetFn = runtime->lookupFunction(0x247180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C9Cu; }
        if (ctx->pc != 0x1F1C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247180_0x247180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C9Cu; }
        if (ctx->pc != 0x1F1C9Cu) { return; }
    }
    ctx->pc = 0x1F1C9Cu;
label_1f1c9c:
    // 0x1f1c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f1c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1ca0:
    // 0x1f1ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1ca4:
    // 0x1f1ca4: 0x3e00008  jr          $ra
label_1f1ca8:
    if (ctx->pc == 0x1F1CA8u) {
        ctx->pc = 0x1F1CA8u;
            // 0x1f1ca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1F1CACu;
        goto label_1f1cac;
    }
    ctx->pc = 0x1F1CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CA4u;
            // 0x1f1ca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1CACu;
label_1f1cac:
    // 0x1f1cac: 0x0  nop
    ctx->pc = 0x1f1cacu;
    // NOP
label_1f1cb0:
    // 0x1f1cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f1cb4:
    // 0x1f1cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f1cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f1cb8:
    // 0x1f1cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f1cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f1cbc:
    // 0x1f1cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f1cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f1cc0:
    // 0x1f1cc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1cc4:
    // 0x1f1cc4: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_1f1cc8:
    if (ctx->pc == 0x1F1CC8u) {
        ctx->pc = 0x1F1CC8u;
            // 0x1f1cc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CCCu;
        goto label_1f1ccc;
    }
    ctx->pc = 0x1F1CC4u;
    {
        const bool branch_taken_0x1f1cc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CC4u;
            // 0x1f1cc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cc4) {
            ctx->pc = 0x1F1D9Cu;
            goto label_1f1d9c;
        }
    }
    ctx->pc = 0x1F1CCCu;
label_1f1ccc:
    // 0x1f1ccc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f1cd0:
    // 0x1f1cd0: 0x2442daa0  addiu       $v0, $v0, -0x2560
    ctx->pc = 0x1f1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957728));
label_1f1cd4:
    // 0x1f1cd4: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_1f1cd8:
    if (ctx->pc == 0x1F1CD8u) {
        ctx->pc = 0x1F1CD8u;
            // 0x1f1cd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F1CDCu;
        goto label_1f1cdc;
    }
    ctx->pc = 0x1F1CD4u;
    {
        const bool branch_taken_0x1f1cd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CD4u;
            // 0x1f1cd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cd4) {
            ctx->pc = 0x1F1D74u;
            goto label_1f1d74;
        }
    }
    ctx->pc = 0x1F1CDCu;
label_1f1cdc:
    // 0x1f1cdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f1ce0:
    // 0x1f1ce0: 0x2442dae0  addiu       $v0, $v0, -0x2520
    ctx->pc = 0x1f1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957792));
label_1f1ce4:
    // 0x1f1ce4: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_1f1ce8:
    if (ctx->pc == 0x1F1CE8u) {
        ctx->pc = 0x1F1CE8u;
            // 0x1f1ce8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F1CECu;
        goto label_1f1cec;
    }
    ctx->pc = 0x1F1CE4u;
    {
        const bool branch_taken_0x1f1ce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CE4u;
            // 0x1f1ce8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ce4) {
            ctx->pc = 0x1F1D74u;
            goto label_1f1d74;
        }
    }
    ctx->pc = 0x1F1CECu;
label_1f1cec:
    // 0x1f1cec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f1cf0:
    // 0x1f1cf0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1f1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1f1cf4:
    // 0x1f1cf4: 0x2463da60  addiu       $v1, $v1, -0x25A0
    ctx->pc = 0x1f1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957664));
label_1f1cf8:
    // 0x1f1cf8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1f1cfc:
    if (ctx->pc == 0x1F1CFCu) {
        ctx->pc = 0x1F1CFCu;
            // 0x1f1cfc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1F1D00u;
        goto label_1f1d00;
    }
    ctx->pc = 0x1F1CF8u;
    {
        const bool branch_taken_0x1f1cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CF8u;
            // 0x1f1cfc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cf8) {
            ctx->pc = 0x1F1D40u;
            goto label_1f1d40;
        }
    }
    ctx->pc = 0x1F1D00u;
label_1f1d00:
    // 0x1f1d00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1f1d04:
    if (ctx->pc == 0x1F1D04u) {
        ctx->pc = 0x1F1D08u;
        goto label_1f1d08;
    }
    ctx->pc = 0x1F1D00u;
    {
        const bool branch_taken_0x1f1d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d00) {
            ctx->pc = 0x1F1D40u;
            goto label_1f1d40;
        }
    }
    ctx->pc = 0x1F1D08u;
label_1f1d08:
    // 0x1f1d08: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1f1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1f1d0c:
    // 0x1f1d0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1f1d10:
    // 0x1f1d10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f1d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1f1d14:
    // 0x1f1d14: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f1d18:
    if (ctx->pc == 0x1F1D18u) {
        ctx->pc = 0x1F1D1Cu;
        goto label_1f1d1c;
    }
    ctx->pc = 0x1F1D14u;
    {
        const bool branch_taken_0x1f1d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d14) {
            ctx->pc = 0x1F1D40u;
            goto label_1f1d40;
        }
    }
    ctx->pc = 0x1F1D1Cu;
label_1f1d1c:
    // 0x1f1d1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f1d20:
    // 0x1f1d20: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1f1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1f1d24:
    // 0x1f1d24: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f1d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f1d28:
    // 0x1f1d28: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1f1d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1f1d2c:
    // 0x1f1d2c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1f1d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f1d30:
    // 0x1f1d30: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1f1d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1f1d34:
    // 0x1f1d34: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1f1d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1f1d38:
    // 0x1f1d38: 0xc0a7ab4  jal         func_29EAD0
label_1f1d3c:
    if (ctx->pc == 0x1F1D3Cu) {
        ctx->pc = 0x1F1D3Cu;
            // 0x1f1d3c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1F1D40u;
        goto label_1f1d40;
    }
    ctx->pc = 0x1F1D38u;
    SET_GPR_U32(ctx, 31, 0x1F1D40u);
    ctx->pc = 0x1F1D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D38u;
            // 0x1f1d3c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1D40u; }
        if (ctx->pc != 0x1F1D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1D40u; }
        if (ctx->pc != 0x1F1D40u) { return; }
    }
    ctx->pc = 0x1F1D40u;
label_1f1d40:
    // 0x1f1d40: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_1f1d44:
    if (ctx->pc == 0x1F1D44u) {
        ctx->pc = 0x1F1D44u;
            // 0x1f1d44: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1F1D48u;
        goto label_1f1d48;
    }
    ctx->pc = 0x1F1D40u;
    {
        const bool branch_taken_0x1f1d40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d40) {
            ctx->pc = 0x1F1D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D40u;
            // 0x1f1d44: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D78u;
            goto label_1f1d78;
        }
    }
    ctx->pc = 0x1F1D48u;
label_1f1d48:
    // 0x1f1d48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f1d4c:
    // 0x1f1d4c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1f1d50:
    // 0x1f1d50: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1f1d54:
    if (ctx->pc == 0x1F1D54u) {
        ctx->pc = 0x1F1D54u;
            // 0x1f1d54: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F1D58u;
        goto label_1f1d58;
    }
    ctx->pc = 0x1F1D50u;
    {
        const bool branch_taken_0x1f1d50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D50u;
            // 0x1f1d54: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d50) {
            ctx->pc = 0x1F1D74u;
            goto label_1f1d74;
        }
    }
    ctx->pc = 0x1F1D58u;
label_1f1d58:
    // 0x1f1d58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f1d5c:
    // 0x1f1d5c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f1d60:
    // 0x1f1d60: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1f1d64:
    if (ctx->pc == 0x1F1D64u) {
        ctx->pc = 0x1F1D64u;
            // 0x1f1d64: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F1D68u;
        goto label_1f1d68;
    }
    ctx->pc = 0x1F1D60u;
    {
        const bool branch_taken_0x1f1d60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D60u;
            // 0x1f1d64: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d60) {
            ctx->pc = 0x1F1D74u;
            goto label_1f1d74;
        }
    }
    ctx->pc = 0x1F1D68u;
label_1f1d68:
    // 0x1f1d68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f1d6c:
    // 0x1f1d6c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1f1d70:
    // 0x1f1d70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f1d74:
    // 0x1f1d74: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1f1d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1f1d78:
    // 0x1f1d78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f1d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1f1d7c:
    // 0x1f1d7c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_1f1d80:
    if (ctx->pc == 0x1F1D80u) {
        ctx->pc = 0x1F1D80u;
            // 0x1f1d80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D84u;
        goto label_1f1d84;
    }
    ctx->pc = 0x1F1D7Cu;
    {
        const bool branch_taken_0x1f1d7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f1d7c) {
            ctx->pc = 0x1F1D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D7Cu;
            // 0x1f1d80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1DA0u;
            goto label_1f1da0;
        }
    }
    ctx->pc = 0x1F1D84u;
label_1f1d84:
    // 0x1f1d84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f1d88:
    // 0x1f1d88: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1f1d88u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1f1d8c:
    // 0x1f1d8c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f1d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f1d90:
    // 0x1f1d90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f1d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1d94:
    // 0x1f1d94: 0xc0a7ab4  jal         func_29EAD0
label_1f1d98:
    if (ctx->pc == 0x1F1D98u) {
        ctx->pc = 0x1F1D98u;
            // 0x1f1d98: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1F1D9Cu;
        goto label_1f1d9c;
    }
    ctx->pc = 0x1F1D94u;
    SET_GPR_U32(ctx, 31, 0x1F1D9Cu);
    ctx->pc = 0x1F1D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D94u;
            // 0x1f1d98: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1D9Cu; }
        if (ctx->pc != 0x1F1D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1D9Cu; }
        if (ctx->pc != 0x1F1D9Cu) { return; }
    }
    ctx->pc = 0x1F1D9Cu;
label_1f1d9c:
    // 0x1f1d9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f1d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1da0:
    // 0x1f1da0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f1da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1da4:
    // 0x1f1da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1da8:
    // 0x1f1da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1dac:
    // 0x1f1dac: 0x3e00008  jr          $ra
label_1f1db0:
    if (ctx->pc == 0x1F1DB0u) {
        ctx->pc = 0x1F1DB0u;
            // 0x1f1db0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1F1DB4u;
        goto label_1f1db4;
    }
    ctx->pc = 0x1F1DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1DACu;
            // 0x1f1db0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1DB4u;
label_1f1db4:
    // 0x1f1db4: 0x0  nop
    ctx->pc = 0x1f1db4u;
    // NOP
label_1f1db8:
    // 0x1f1db8: 0x0  nop
    ctx->pc = 0x1f1db8u;
    // NOP
label_1f1dbc:
    // 0x1f1dbc: 0x0  nop
    ctx->pc = 0x1f1dbcu;
    // NOP
label_1f1dc0:
    // 0x1f1dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f1dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f1dc4:
    // 0x1f1dc4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f1dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f1dc8:
    // 0x1f1dc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f1dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f1dcc:
    // 0x1f1dcc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f1dd0:
    // 0x1f1dd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f1dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f1dd4:
    // 0x1f1dd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f1dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1dd8:
    // 0x1f1dd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f1dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f1ddc:
    // 0x1f1ddc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f1ddcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f1de0:
    // 0x1f1de0: 0x8d110000  lw          $s1, 0x0($t0)
    ctx->pc = 0x1f1de0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f1de4:
    // 0x1f1de4: 0xc5143030  lwc1        $f20, 0x3030($t0)
    ctx->pc = 0x1f1de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f1de8:
    // 0x1f1de8: 0xc07c640  jal         func_1F1900
label_1f1dec:
    if (ctx->pc == 0x1F1DECu) {
        ctx->pc = 0x1F1DECu;
            // 0x1f1dec: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DF0u;
        goto label_1f1df0;
    }
    ctx->pc = 0x1F1DE8u;
    SET_GPR_U32(ctx, 31, 0x1F1DF0u);
    ctx->pc = 0x1F1DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1DE8u;
            // 0x1f1dec: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1900u;
    if (runtime->hasFunction(0x1F1900u)) {
        auto targetFn = runtime->lookupFunction(0x1F1900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1DF0u; }
        if (ctx->pc != 0x1F1DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1900_0x1f1900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1DF0u; }
        if (ctx->pc != 0x1F1DF0u) { return; }
    }
    ctx->pc = 0x1F1DF0u;
label_1f1df0:
    // 0x1f1df0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f1df4:
    // 0x1f1df4: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x1f1df4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f1df8:
    // 0x1f1df8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1f1dfc:
    if (ctx->pc == 0x1F1DFCu) {
        ctx->pc = 0x1F1E00u;
        goto label_1f1e00;
    }
    ctx->pc = 0x1F1DF8u;
    {
        const bool branch_taken_0x1f1df8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1df8) {
            ctx->pc = 0x1F1E98u;
            goto label_1f1e98;
        }
    }
    ctx->pc = 0x1F1E00u;
label_1f1e00:
    // 0x1f1e00: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f1e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f1e04:
    // 0x1f1e04: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f1e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1e08:
    // 0x1f1e08: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x1f1e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f1e0c:
    // 0x1f1e0c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1f1e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1e10:
    // 0x1f1e10: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f1e10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f1e14:
    // 0x1f1e14: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f1e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f1e18:
    // 0x1f1e18: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f1e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1f1e1c:
    // 0x1f1e1c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1f1e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1e20:
    // 0x1f1e20: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1f1e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1e24:
    // 0x1f1e24: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f1e24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f1e28:
    // 0x1f1e28: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f1e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f1e2c:
    // 0x1f1e2c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1f1e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1f1e30:
    // 0x1f1e30: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f1e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1e34:
    // 0x1f1e34: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1f1e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1e38:
    // 0x1f1e38: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f1e38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f1e3c:
    // 0x1f1e3c: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f1e3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f1e40:
    // 0x1f1e40: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f1e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1f1e44:
    // 0x1f1e44: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1f1e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1e48:
    // 0x1f1e48: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1f1e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1e4c:
    // 0x1f1e4c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f1e4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f1e50:
    // 0x1f1e50: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f1e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f1e54:
    // 0x1f1e54: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1f1e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1f1e58:
    // 0x1f1e58: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1f1e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1e5c:
    // 0x1f1e5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f1e5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f1e60:
    // 0x1f1e60: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1f1e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1f1e64:
    // 0x1f1e64: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1f1e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1e68:
    // 0x1f1e68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f1e68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f1e6c:
    // 0x1f1e6c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1f1e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1f1e70:
    // 0x1f1e70: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1f1e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1e74:
    // 0x1f1e74: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f1e74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f1e78:
    // 0x1f1e78: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1f1e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1f1e7c:
    // 0x1f1e7c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1f1e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1e80:
    // 0x1f1e80: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1f1e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1f1e84:
    // 0x1f1e84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f1e88:
    // 0x1f1e88: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1f1e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1f1e8c:
    // 0x1f1e8c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1f1e8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f1e90:
    // 0x1f1e90: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
label_1f1e94:
    if (ctx->pc == 0x1F1E94u) {
        ctx->pc = 0x1F1E94u;
            // 0x1f1e94: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1F1E98u;
        goto label_1f1e98;
    }
    ctx->pc = 0x1F1E90u;
    {
        const bool branch_taken_0x1f1e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e90) {
            ctx->pc = 0x1F1E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E90u;
            // 0x1f1e94: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1e08;
        }
    }
    ctx->pc = 0x1F1E98u;
label_1f1e98:
    // 0x1f1e98: 0xc6003030  lwc1        $f0, 0x3030($s0)
    ctx->pc = 0x1f1e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1e9c:
    // 0x1f1e9c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1f1e9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1ea0:
    // 0x1f1ea0: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_1f1ea4:
    if (ctx->pc == 0x1F1EA4u) {
        ctx->pc = 0x1F1EA4u;
            // 0x1f1ea4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1F1EA8u;
        goto label_1f1ea8;
    }
    ctx->pc = 0x1F1EA0u;
    {
        const bool branch_taken_0x1f1ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1ea0) {
            ctx->pc = 0x1F1EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EA0u;
            // 0x1f1ea4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1F48u;
            goto label_1f1f48;
        }
    }
    ctx->pc = 0x1F1EA8u;
label_1f1ea8:
    // 0x1f1ea8: 0xc6003020  lwc1        $f0, 0x3020($s0)
    ctx->pc = 0x1f1ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1eac:
    // 0x1f1eac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f1eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1eb0:
    // 0x1f1eb0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f1eb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f1eb4:
    // 0x1f1eb4: 0xe6003020  swc1        $f0, 0x3020($s0)
    ctx->pc = 0x1f1eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12320), bits); }
label_1f1eb8:
    // 0x1f1eb8: 0xc6003024  lwc1        $f0, 0x3024($s0)
    ctx->pc = 0x1f1eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1ebc:
    // 0x1f1ebc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f1ebcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f1ec0:
    // 0x1f1ec0: 0xe6003024  swc1        $f0, 0x3024($s0)
    ctx->pc = 0x1f1ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12324), bits); }
label_1f1ec4:
    // 0x1f1ec4: 0xc6003028  lwc1        $f0, 0x3028($s0)
    ctx->pc = 0x1f1ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1ec8:
    // 0x1f1ec8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f1ec8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f1ecc:
    // 0x1f1ecc: 0xe6003028  swc1        $f0, 0x3028($s0)
    ctx->pc = 0x1f1eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12328), bits); }
label_1f1ed0:
    // 0x1f1ed0: 0xc600302c  lwc1        $f0, 0x302C($s0)
    ctx->pc = 0x1f1ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1ed4:
    // 0x1f1ed4: 0xe600302c  swc1        $f0, 0x302C($s0)
    ctx->pc = 0x1f1ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12332), bits); }
label_1f1ed8:
    // 0x1f1ed8: 0x92053042  lbu         $a1, 0x3042($s0)
    ctx->pc = 0x1f1ed8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12354)));
label_1f1edc:
    // 0x1f1edc: 0x92043043  lbu         $a0, 0x3043($s0)
    ctx->pc = 0x1f1edcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12355)));
label_1f1ee0:
    // 0x1f1ee0: 0xa2043042  sb          $a0, 0x3042($s0)
    ctx->pc = 0x1f1ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12354), (uint8_t)GPR_U32(ctx, 4));
label_1f1ee4:
    // 0x1f1ee4: 0xa2053043  sb          $a1, 0x3043($s0)
    ctx->pc = 0x1f1ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12355), (uint8_t)GPR_U32(ctx, 5));
label_1f1ee8:
    // 0x1f1ee8: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1f1ee8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1f1eec:
    // 0x1f1eec: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1f1eecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1f1ef0:
    // 0x1f1ef0: 0xa2043040  sb          $a0, 0x3040($s0)
    ctx->pc = 0x1f1ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12352), (uint8_t)GPR_U32(ctx, 4));
label_1f1ef4:
    // 0x1f1ef4: 0xa2053041  sb          $a1, 0x3041($s0)
    ctx->pc = 0x1f1ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12353), (uint8_t)GPR_U32(ctx, 5));
label_1f1ef8:
    // 0x1f1ef8: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1f1ef8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1f1efc:
    // 0x1f1efc: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1f1efcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1f1f00:
    // 0x1f1f00: 0x96063038  lhu         $a2, 0x3038($s0)
    ctx->pc = 0x1f1f00u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12344)));
label_1f1f04:
    // 0x1f1f04: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1f1f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1f1f08:
    // 0x1f1f08: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f1f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f1f0c:
    // 0x1f1f0c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1f1f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f1f10:
    // 0x1f1f10: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1f1f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1f1f14:
    // 0x1f1f14: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x1f1f14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_1f1f18:
    // 0x1f1f18: 0xa6043038  sh          $a0, 0x3038($s0)
    ctx->pc = 0x1f1f18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12344), (uint16_t)GPR_U32(ctx, 4));
label_1f1f1c:
    // 0x1f1f1c: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x1f1f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_1f1f20:
    // 0x1f1f20: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1f1f20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1f1f24:
    // 0x1f1f24: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1f1f24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1f1f28:
    // 0x1f1f28: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1f1f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1f1f2c:
    // 0x1f1f2c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1f1f30:
    if (ctx->pc == 0x1F1F30u) {
        ctx->pc = 0x1F1F34u;
        goto label_1f1f34;
    }
    ctx->pc = 0x1F1F2Cu;
    {
        const bool branch_taken_0x1f1f2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1f2c) {
            ctx->pc = 0x1F1F44u;
            goto label_1f1f44;
        }
    }
    ctx->pc = 0x1F1F34u;
label_1f1f34:
    // 0x1f1f34: 0x9604303a  lhu         $a0, 0x303A($s0)
    ctx->pc = 0x1f1f34u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12346)));
label_1f1f38:
    // 0x1f1f38: 0x9603303c  lhu         $v1, 0x303C($s0)
    ctx->pc = 0x1f1f38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12348)));
label_1f1f3c:
    // 0x1f1f3c: 0xa603303a  sh          $v1, 0x303A($s0)
    ctx->pc = 0x1f1f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12346), (uint16_t)GPR_U32(ctx, 3));
label_1f1f40:
    // 0x1f1f40: 0xa604303c  sh          $a0, 0x303C($s0)
    ctx->pc = 0x1f1f40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12348), (uint16_t)GPR_U32(ctx, 4));
label_1f1f44:
    // 0x1f1f44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f1f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1f48:
    // 0x1f1f48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f1f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f1f4c:
    // 0x1f1f4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f1f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1f50:
    // 0x1f1f50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f1f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1f54:
    // 0x1f1f54: 0x3e00008  jr          $ra
label_1f1f58:
    if (ctx->pc == 0x1F1F58u) {
        ctx->pc = 0x1F1F58u;
            // 0x1f1f58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1F1F5Cu;
        goto label_1f1f5c;
    }
    ctx->pc = 0x1F1F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F54u;
            // 0x1f1f58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1F5Cu;
label_1f1f5c:
    // 0x1f1f5c: 0x0  nop
    ctx->pc = 0x1f1f5cu;
    // NOP
label_1f1f60:
    // 0x1f1f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f1f64:
    // 0x1f1f64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f1f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f68:
    // 0x1f1f68: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f6c:
    // 0x1f1f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f1f70:
    // 0x1f1f70: 0xc07c714  jal         func_1F1C50
label_1f1f74:
    if (ctx->pc == 0x1F1F74u) {
        ctx->pc = 0x1F1F74u;
            // 0x1f1f74: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F78u;
        goto label_1f1f78;
    }
    ctx->pc = 0x1F1F70u;
    SET_GPR_U32(ctx, 31, 0x1F1F78u);
    ctx->pc = 0x1F1F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F70u;
            // 0x1f1f74: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C50u;
    goto label_1f1c50;
    ctx->pc = 0x1F1F78u;
label_1f1f78:
    // 0x1f1f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1f7c:
    // 0x1f1f7c: 0x3e00008  jr          $ra
label_1f1f80:
    if (ctx->pc == 0x1F1F80u) {
        ctx->pc = 0x1F1F80u;
            // 0x1f1f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F1F84u;
        goto label_1f1f84;
    }
    ctx->pc = 0x1F1F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F7Cu;
            // 0x1f1f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1F84u;
label_1f1f84:
    // 0x1f1f84: 0x0  nop
    ctx->pc = 0x1f1f84u;
    // NOP
label_1f1f88:
    // 0x1f1f88: 0x0  nop
    ctx->pc = 0x1f1f88u;
    // NOP
label_1f1f8c:
    // 0x1f1f8c: 0x0  nop
    ctx->pc = 0x1f1f8cu;
    // NOP
label_1f1f90:
    // 0x1f1f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f1f94:
    // 0x1f1f94: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f1f98:
    // 0x1f1f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f1f9c:
    // 0x1f1f9c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f1f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f1fa0:
    // 0x1f1fa0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1f1fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1f1fa4:
    // 0x1f1fa4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f1fa8:
    // 0x1f1fa8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1f1fa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f1fac:
    // 0x1f1fac: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1f1facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1f1fb0:
    // 0x1f1fb0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f1fb4:
    // 0x1f1fb4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f1fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1f1fb8:
    // 0x1f1fb8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1f1fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f1fbc:
    // 0x1f1fbc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f1fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f1fc0:
    // 0x1f1fc0: 0xc07c6e0  jal         func_1F1B80
label_1f1fc4:
    if (ctx->pc == 0x1F1FC4u) {
        ctx->pc = 0x1F1FC4u;
            // 0x1f1fc4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F1FC8u;
        goto label_1f1fc8;
    }
    ctx->pc = 0x1F1FC0u;
    SET_GPR_U32(ctx, 31, 0x1F1FC8u);
    ctx->pc = 0x1F1FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1FC0u;
            // 0x1f1fc4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1B80u;
    if (runtime->hasFunction(0x1F1B80u)) {
        auto targetFn = runtime->lookupFunction(0x1F1B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1FC8u; }
        if (ctx->pc != 0x1F1FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B80_0x1f1b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1FC8u; }
        if (ctx->pc != 0x1F1FC8u) { return; }
    }
    ctx->pc = 0x1F1FC8u;
label_1f1fc8:
    // 0x1f1fc8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f1fcc:
    // 0x1f1fcc: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f1fd0:
    // 0x1f1fd0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1f1fd4:
    // 0x1f1fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1fd8:
    // 0x1f1fd8: 0x3e00008  jr          $ra
label_1f1fdc:
    if (ctx->pc == 0x1F1FDCu) {
        ctx->pc = 0x1F1FDCu;
            // 0x1f1fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F1FE0u;
        goto label_1f1fe0;
    }
    ctx->pc = 0x1F1FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1FD8u;
            // 0x1f1fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1FE0u;
label_1f1fe0:
    // 0x1f1fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f1fe4:
    // 0x1f1fe4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f1fe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f1fe8:
    // 0x1f1fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f1fec:
    // 0x1f1fec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f1ff0:
    // 0x1f1ff0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1f1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1f1ff4:
    // 0x1f1ff4: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1f1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1f1ff8:
    // 0x1f1ff8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ffc:
    // 0x1f1ffc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f2000:
    // 0x1f2000: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f2000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f2004:
    // 0x1f2004: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1f2004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f2008:
    // 0x1f2008: 0xc07c700  jal         func_1F1C00
label_1f200c:
    if (ctx->pc == 0x1F200Cu) {
        ctx->pc = 0x1F200Cu;
            // 0x1f200c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F2010u;
        goto label_1f2010;
    }
    ctx->pc = 0x1F2008u;
    SET_GPR_U32(ctx, 31, 0x1F2010u);
    ctx->pc = 0x1F200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2008u;
            // 0x1f200c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C00u;
    if (runtime->hasFunction(0x1F1C00u)) {
        auto targetFn = runtime->lookupFunction(0x1F1C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2010u; }
        if (ctx->pc != 0x1F2010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1C00_0x1f1c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2010u; }
        if (ctx->pc != 0x1F2010u) { return; }
    }
    ctx->pc = 0x1F2010u;
label_1f2010:
    // 0x1f2010: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f2010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f2014:
    // 0x1f2014: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1f2014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1f2018:
    // 0x1f2018: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f2018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1f201c:
    // 0x1f201c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f201cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f2020:
    // 0x1f2020: 0x3e00008  jr          $ra
label_1f2024:
    if (ctx->pc == 0x1F2024u) {
        ctx->pc = 0x1F2024u;
            // 0x1f2024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F2028u;
        goto label_1f2028;
    }
    ctx->pc = 0x1F2020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2020u;
            // 0x1f2024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2028u;
label_1f2028:
    // 0x1f2028: 0x0  nop
    ctx->pc = 0x1f2028u;
    // NOP
label_1f202c:
    // 0x1f202c: 0x0  nop
    ctx->pc = 0x1f202cu;
    // NOP
label_1f2030:
    // 0x1f2030: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f2030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1f2034:
    // 0x1f2034: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f2034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f2038:
    // 0x1f2038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f203c:
    // 0x1f203c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1f203cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f2040:
    // 0x1f2040: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1f2040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f2044:
    // 0x1f2044: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f2044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f2048:
    // 0x1f2048: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f2048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f204c:
    // 0x1f204c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1f204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1f2050:
    // 0x1f2050: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1f2050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_1f2054:
    // 0x1f2054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f2058:
    // 0x1f2058: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1f2058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f205c:
    // 0x1f205c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1f205cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f2060:
    // 0x1f2060: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1f2060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1f2064:
    // 0x1f2064: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1f2064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_1f2068:
    // 0x1f2068: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1f2068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1f206c:
    // 0x1f206c: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x1f206cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
label_1f2070:
    // 0x1f2070: 0x80e50010  lb          $a1, 0x10($a3)
    ctx->pc = 0x1f2070u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_1f2074:
    // 0x1f2074: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x1f2074u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
label_1f2078:
    // 0x1f2078: 0xc4e90020  lwc1        $f9, 0x20($a3)
    ctx->pc = 0x1f2078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f207c:
    // 0x1f207c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1f207cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f2080:
    // 0x1f2080: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x1f2080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f2084:
    // 0x1f2084: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1f2084u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1f2088:
    // 0x1f2088: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1f2088u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f208c:
    // 0x1f208c: 0xc4e70028  lwc1        $f7, 0x28($a3)
    ctx->pc = 0x1f208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f2090:
    // 0x1f2090: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1f2090u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1f2094:
    // 0x1f2094: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1f2094u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f2098:
    // 0x1f2098: 0xc4e6002c  lwc1        $f6, 0x2C($a3)
    ctx->pc = 0x1f2098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f209c:
    // 0x1f209c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1f209cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1f20a0:
    // 0x1f20a0: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1f20a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f20a4:
    // 0x1f20a4: 0xc4e50030  lwc1        $f5, 0x30($a3)
    ctx->pc = 0x1f20a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f20a8:
    // 0x1f20a8: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1f20a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1f20ac:
    // 0x1f20ac: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1f20acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f20b0:
    // 0x1f20b0: 0xc4e50034  lwc1        $f5, 0x34($a3)
    ctx->pc = 0x1f20b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f20b4:
    // 0x1f20b4: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1f20b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f20b8:
    // 0x1f20b8: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x1f20b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_1f20bc:
    // 0x1f20bc: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1f20bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1f20c0:
    // 0x1f20c0: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1f20c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f20c4:
    // 0x1f20c4: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1f20c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f20c8:
    // 0x1f20c8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1f20c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1f20cc:
    // 0x1f20cc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1f20ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f20d0:
    // 0x1f20d0: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1f20d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_1f20d4:
    // 0x1f20d4: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1f20d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f20d8:
    // 0x1f20d8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f20d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1f20dc:
    // 0x1f20dc: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1f20dcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1f20e0:
    // 0x1f20e0: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1f20e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1f20e4:
    // 0x1f20e4: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1f20e4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f20e8:
    // 0x1f20e8: 0x11200012  beqz        $t1, . + 4 + (0x12 << 2)
label_1f20ec:
    if (ctx->pc == 0x1F20ECu) {
        ctx->pc = 0x1F20ECu;
            // 0x1f20ec: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1F20F0u;
        goto label_1f20f0;
    }
    ctx->pc = 0x1F20E8u;
    {
        const bool branch_taken_0x1f20e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F20ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F20E8u;
            // 0x1f20ec: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f20e8) {
            ctx->pc = 0x1F2134u;
            goto label_1f2134;
        }
    }
    ctx->pc = 0x1F20F0u;
label_1f20f0:
    // 0x1f20f0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f20f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f20f4:
    // 0x1f20f4: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x1f20f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
label_1f20f8:
    // 0x1f20f8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1f20f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1f20fc:
    // 0x1f20fc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f2100:
    // 0x1f2100: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1f2100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1f2104:
    // 0x1f2104: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1f2104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f2108:
    // 0x1f2108: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1f2108u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f210c:
    // 0x1f210c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1f210cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f2110:
    // 0x1f2110: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1f2110u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1f2114:
    // 0x1f2114: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1f2114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f2118:
    // 0x1f2118: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1f2118u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1f211c:
    // 0x1f211c: 0xc07c6ec  jal         func_1F1BB0
label_1f2120:
    if (ctx->pc == 0x1F2120u) {
        ctx->pc = 0x1F2120u;
            // 0x1f2120: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1F2124u;
        goto label_1f2124;
    }
    ctx->pc = 0x1F211Cu;
    SET_GPR_U32(ctx, 31, 0x1F2124u);
    ctx->pc = 0x1F2120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F211Cu;
            // 0x1f2120: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1BB0u;
    if (runtime->hasFunction(0x1F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2124u; }
        if (ctx->pc != 0x1F2124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1BB0_0x1f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2124u; }
        if (ctx->pc != 0x1F2124u) { return; }
    }
    ctx->pc = 0x1F2124u;
label_1f2124:
    // 0x1f2124: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f2124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f2128:
    // 0x1f2128: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f2128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f212c:
    // 0x1f212c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f2130:
    if (ctx->pc == 0x1F2130u) {
        ctx->pc = 0x1F2130u;
            // 0x1f2130: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1F2134u;
        goto label_1f2134;
    }
    ctx->pc = 0x1F212Cu;
    {
        const bool branch_taken_0x1f212c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F212Cu;
            // 0x1f2130: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f212c) {
            ctx->pc = 0x1F214Cu;
            goto label_1f214c;
        }
    }
    ctx->pc = 0x1F2134u;
label_1f2134:
    // 0x1f2134: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f2134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f2138:
    // 0x1f2138: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1f2138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f213c:
    // 0x1f213c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1f213cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1f2140:
    // 0x1f2140: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1f2140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f2144:
    // 0x1f2144: 0xc07c6ec  jal         func_1F1BB0
label_1f2148:
    if (ctx->pc == 0x1F2148u) {
        ctx->pc = 0x1F2148u;
            // 0x1f2148: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F214Cu;
        goto label_1f214c;
    }
    ctx->pc = 0x1F2144u;
    SET_GPR_U32(ctx, 31, 0x1F214Cu);
    ctx->pc = 0x1F2148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2144u;
            // 0x1f2148: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1BB0u;
    if (runtime->hasFunction(0x1F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F214Cu; }
        if (ctx->pc != 0x1F214Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1BB0_0x1f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F214Cu; }
        if (ctx->pc != 0x1F214Cu) { return; }
    }
    ctx->pc = 0x1F214Cu;
label_1f214c:
    // 0x1f214c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f214cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f2150:
    // 0x1f2150: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f2150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f2154:
    // 0x1f2154: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1f2154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1f2158:
    // 0x1f2158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f215c:
    // 0x1f215c: 0x3e00008  jr          $ra
label_1f2160:
    if (ctx->pc == 0x1F2160u) {
        ctx->pc = 0x1F2160u;
            // 0x1f2160: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1F2164u;
        goto label_1f2164;
    }
    ctx->pc = 0x1F215Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F215Cu;
            // 0x1f2160: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2164u;
label_1f2164:
    // 0x1f2164: 0x0  nop
    ctx->pc = 0x1f2164u;
    // NOP
label_1f2168:
    // 0x1f2168: 0x0  nop
    ctx->pc = 0x1f2168u;
    // NOP
label_1f216c:
    // 0x1f216c: 0x0  nop
    ctx->pc = 0x1f216cu;
    // NOP
}
