#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1BA0
// Address: 0x1e1ba0 - 0x1e23f0
void sub_001E1BA0_0x1e1ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1BA0_0x1e1ba0");
#endif

    switch (ctx->pc) {
        case 0x1e1ba0u: goto label_1e1ba0;
        case 0x1e1ba4u: goto label_1e1ba4;
        case 0x1e1ba8u: goto label_1e1ba8;
        case 0x1e1bacu: goto label_1e1bac;
        case 0x1e1bb0u: goto label_1e1bb0;
        case 0x1e1bb4u: goto label_1e1bb4;
        case 0x1e1bb8u: goto label_1e1bb8;
        case 0x1e1bbcu: goto label_1e1bbc;
        case 0x1e1bc0u: goto label_1e1bc0;
        case 0x1e1bc4u: goto label_1e1bc4;
        case 0x1e1bc8u: goto label_1e1bc8;
        case 0x1e1bccu: goto label_1e1bcc;
        case 0x1e1bd0u: goto label_1e1bd0;
        case 0x1e1bd4u: goto label_1e1bd4;
        case 0x1e1bd8u: goto label_1e1bd8;
        case 0x1e1bdcu: goto label_1e1bdc;
        case 0x1e1be0u: goto label_1e1be0;
        case 0x1e1be4u: goto label_1e1be4;
        case 0x1e1be8u: goto label_1e1be8;
        case 0x1e1becu: goto label_1e1bec;
        case 0x1e1bf0u: goto label_1e1bf0;
        case 0x1e1bf4u: goto label_1e1bf4;
        case 0x1e1bf8u: goto label_1e1bf8;
        case 0x1e1bfcu: goto label_1e1bfc;
        case 0x1e1c00u: goto label_1e1c00;
        case 0x1e1c04u: goto label_1e1c04;
        case 0x1e1c08u: goto label_1e1c08;
        case 0x1e1c0cu: goto label_1e1c0c;
        case 0x1e1c10u: goto label_1e1c10;
        case 0x1e1c14u: goto label_1e1c14;
        case 0x1e1c18u: goto label_1e1c18;
        case 0x1e1c1cu: goto label_1e1c1c;
        case 0x1e1c20u: goto label_1e1c20;
        case 0x1e1c24u: goto label_1e1c24;
        case 0x1e1c28u: goto label_1e1c28;
        case 0x1e1c2cu: goto label_1e1c2c;
        case 0x1e1c30u: goto label_1e1c30;
        case 0x1e1c34u: goto label_1e1c34;
        case 0x1e1c38u: goto label_1e1c38;
        case 0x1e1c3cu: goto label_1e1c3c;
        case 0x1e1c40u: goto label_1e1c40;
        case 0x1e1c44u: goto label_1e1c44;
        case 0x1e1c48u: goto label_1e1c48;
        case 0x1e1c4cu: goto label_1e1c4c;
        case 0x1e1c50u: goto label_1e1c50;
        case 0x1e1c54u: goto label_1e1c54;
        case 0x1e1c58u: goto label_1e1c58;
        case 0x1e1c5cu: goto label_1e1c5c;
        case 0x1e1c60u: goto label_1e1c60;
        case 0x1e1c64u: goto label_1e1c64;
        case 0x1e1c68u: goto label_1e1c68;
        case 0x1e1c6cu: goto label_1e1c6c;
        case 0x1e1c70u: goto label_1e1c70;
        case 0x1e1c74u: goto label_1e1c74;
        case 0x1e1c78u: goto label_1e1c78;
        case 0x1e1c7cu: goto label_1e1c7c;
        case 0x1e1c80u: goto label_1e1c80;
        case 0x1e1c84u: goto label_1e1c84;
        case 0x1e1c88u: goto label_1e1c88;
        case 0x1e1c8cu: goto label_1e1c8c;
        case 0x1e1c90u: goto label_1e1c90;
        case 0x1e1c94u: goto label_1e1c94;
        case 0x1e1c98u: goto label_1e1c98;
        case 0x1e1c9cu: goto label_1e1c9c;
        case 0x1e1ca0u: goto label_1e1ca0;
        case 0x1e1ca4u: goto label_1e1ca4;
        case 0x1e1ca8u: goto label_1e1ca8;
        case 0x1e1cacu: goto label_1e1cac;
        case 0x1e1cb0u: goto label_1e1cb0;
        case 0x1e1cb4u: goto label_1e1cb4;
        case 0x1e1cb8u: goto label_1e1cb8;
        case 0x1e1cbcu: goto label_1e1cbc;
        case 0x1e1cc0u: goto label_1e1cc0;
        case 0x1e1cc4u: goto label_1e1cc4;
        case 0x1e1cc8u: goto label_1e1cc8;
        case 0x1e1cccu: goto label_1e1ccc;
        case 0x1e1cd0u: goto label_1e1cd0;
        case 0x1e1cd4u: goto label_1e1cd4;
        case 0x1e1cd8u: goto label_1e1cd8;
        case 0x1e1cdcu: goto label_1e1cdc;
        case 0x1e1ce0u: goto label_1e1ce0;
        case 0x1e1ce4u: goto label_1e1ce4;
        case 0x1e1ce8u: goto label_1e1ce8;
        case 0x1e1cecu: goto label_1e1cec;
        case 0x1e1cf0u: goto label_1e1cf0;
        case 0x1e1cf4u: goto label_1e1cf4;
        case 0x1e1cf8u: goto label_1e1cf8;
        case 0x1e1cfcu: goto label_1e1cfc;
        case 0x1e1d00u: goto label_1e1d00;
        case 0x1e1d04u: goto label_1e1d04;
        case 0x1e1d08u: goto label_1e1d08;
        case 0x1e1d0cu: goto label_1e1d0c;
        case 0x1e1d10u: goto label_1e1d10;
        case 0x1e1d14u: goto label_1e1d14;
        case 0x1e1d18u: goto label_1e1d18;
        case 0x1e1d1cu: goto label_1e1d1c;
        case 0x1e1d20u: goto label_1e1d20;
        case 0x1e1d24u: goto label_1e1d24;
        case 0x1e1d28u: goto label_1e1d28;
        case 0x1e1d2cu: goto label_1e1d2c;
        case 0x1e1d30u: goto label_1e1d30;
        case 0x1e1d34u: goto label_1e1d34;
        case 0x1e1d38u: goto label_1e1d38;
        case 0x1e1d3cu: goto label_1e1d3c;
        case 0x1e1d40u: goto label_1e1d40;
        case 0x1e1d44u: goto label_1e1d44;
        case 0x1e1d48u: goto label_1e1d48;
        case 0x1e1d4cu: goto label_1e1d4c;
        case 0x1e1d50u: goto label_1e1d50;
        case 0x1e1d54u: goto label_1e1d54;
        case 0x1e1d58u: goto label_1e1d58;
        case 0x1e1d5cu: goto label_1e1d5c;
        case 0x1e1d60u: goto label_1e1d60;
        case 0x1e1d64u: goto label_1e1d64;
        case 0x1e1d68u: goto label_1e1d68;
        case 0x1e1d6cu: goto label_1e1d6c;
        case 0x1e1d70u: goto label_1e1d70;
        case 0x1e1d74u: goto label_1e1d74;
        case 0x1e1d78u: goto label_1e1d78;
        case 0x1e1d7cu: goto label_1e1d7c;
        case 0x1e1d80u: goto label_1e1d80;
        case 0x1e1d84u: goto label_1e1d84;
        case 0x1e1d88u: goto label_1e1d88;
        case 0x1e1d8cu: goto label_1e1d8c;
        case 0x1e1d90u: goto label_1e1d90;
        case 0x1e1d94u: goto label_1e1d94;
        case 0x1e1d98u: goto label_1e1d98;
        case 0x1e1d9cu: goto label_1e1d9c;
        case 0x1e1da0u: goto label_1e1da0;
        case 0x1e1da4u: goto label_1e1da4;
        case 0x1e1da8u: goto label_1e1da8;
        case 0x1e1dacu: goto label_1e1dac;
        case 0x1e1db0u: goto label_1e1db0;
        case 0x1e1db4u: goto label_1e1db4;
        case 0x1e1db8u: goto label_1e1db8;
        case 0x1e1dbcu: goto label_1e1dbc;
        case 0x1e1dc0u: goto label_1e1dc0;
        case 0x1e1dc4u: goto label_1e1dc4;
        case 0x1e1dc8u: goto label_1e1dc8;
        case 0x1e1dccu: goto label_1e1dcc;
        case 0x1e1dd0u: goto label_1e1dd0;
        case 0x1e1dd4u: goto label_1e1dd4;
        case 0x1e1dd8u: goto label_1e1dd8;
        case 0x1e1ddcu: goto label_1e1ddc;
        case 0x1e1de0u: goto label_1e1de0;
        case 0x1e1de4u: goto label_1e1de4;
        case 0x1e1de8u: goto label_1e1de8;
        case 0x1e1decu: goto label_1e1dec;
        case 0x1e1df0u: goto label_1e1df0;
        case 0x1e1df4u: goto label_1e1df4;
        case 0x1e1df8u: goto label_1e1df8;
        case 0x1e1dfcu: goto label_1e1dfc;
        case 0x1e1e00u: goto label_1e1e00;
        case 0x1e1e04u: goto label_1e1e04;
        case 0x1e1e08u: goto label_1e1e08;
        case 0x1e1e0cu: goto label_1e1e0c;
        case 0x1e1e10u: goto label_1e1e10;
        case 0x1e1e14u: goto label_1e1e14;
        case 0x1e1e18u: goto label_1e1e18;
        case 0x1e1e1cu: goto label_1e1e1c;
        case 0x1e1e20u: goto label_1e1e20;
        case 0x1e1e24u: goto label_1e1e24;
        case 0x1e1e28u: goto label_1e1e28;
        case 0x1e1e2cu: goto label_1e1e2c;
        case 0x1e1e30u: goto label_1e1e30;
        case 0x1e1e34u: goto label_1e1e34;
        case 0x1e1e38u: goto label_1e1e38;
        case 0x1e1e3cu: goto label_1e1e3c;
        case 0x1e1e40u: goto label_1e1e40;
        case 0x1e1e44u: goto label_1e1e44;
        case 0x1e1e48u: goto label_1e1e48;
        case 0x1e1e4cu: goto label_1e1e4c;
        case 0x1e1e50u: goto label_1e1e50;
        case 0x1e1e54u: goto label_1e1e54;
        case 0x1e1e58u: goto label_1e1e58;
        case 0x1e1e5cu: goto label_1e1e5c;
        case 0x1e1e60u: goto label_1e1e60;
        case 0x1e1e64u: goto label_1e1e64;
        case 0x1e1e68u: goto label_1e1e68;
        case 0x1e1e6cu: goto label_1e1e6c;
        case 0x1e1e70u: goto label_1e1e70;
        case 0x1e1e74u: goto label_1e1e74;
        case 0x1e1e78u: goto label_1e1e78;
        case 0x1e1e7cu: goto label_1e1e7c;
        case 0x1e1e80u: goto label_1e1e80;
        case 0x1e1e84u: goto label_1e1e84;
        case 0x1e1e88u: goto label_1e1e88;
        case 0x1e1e8cu: goto label_1e1e8c;
        case 0x1e1e90u: goto label_1e1e90;
        case 0x1e1e94u: goto label_1e1e94;
        case 0x1e1e98u: goto label_1e1e98;
        case 0x1e1e9cu: goto label_1e1e9c;
        case 0x1e1ea0u: goto label_1e1ea0;
        case 0x1e1ea4u: goto label_1e1ea4;
        case 0x1e1ea8u: goto label_1e1ea8;
        case 0x1e1eacu: goto label_1e1eac;
        case 0x1e1eb0u: goto label_1e1eb0;
        case 0x1e1eb4u: goto label_1e1eb4;
        case 0x1e1eb8u: goto label_1e1eb8;
        case 0x1e1ebcu: goto label_1e1ebc;
        case 0x1e1ec0u: goto label_1e1ec0;
        case 0x1e1ec4u: goto label_1e1ec4;
        case 0x1e1ec8u: goto label_1e1ec8;
        case 0x1e1eccu: goto label_1e1ecc;
        case 0x1e1ed0u: goto label_1e1ed0;
        case 0x1e1ed4u: goto label_1e1ed4;
        case 0x1e1ed8u: goto label_1e1ed8;
        case 0x1e1edcu: goto label_1e1edc;
        case 0x1e1ee0u: goto label_1e1ee0;
        case 0x1e1ee4u: goto label_1e1ee4;
        case 0x1e1ee8u: goto label_1e1ee8;
        case 0x1e1eecu: goto label_1e1eec;
        case 0x1e1ef0u: goto label_1e1ef0;
        case 0x1e1ef4u: goto label_1e1ef4;
        case 0x1e1ef8u: goto label_1e1ef8;
        case 0x1e1efcu: goto label_1e1efc;
        case 0x1e1f00u: goto label_1e1f00;
        case 0x1e1f04u: goto label_1e1f04;
        case 0x1e1f08u: goto label_1e1f08;
        case 0x1e1f0cu: goto label_1e1f0c;
        case 0x1e1f10u: goto label_1e1f10;
        case 0x1e1f14u: goto label_1e1f14;
        case 0x1e1f18u: goto label_1e1f18;
        case 0x1e1f1cu: goto label_1e1f1c;
        case 0x1e1f20u: goto label_1e1f20;
        case 0x1e1f24u: goto label_1e1f24;
        case 0x1e1f28u: goto label_1e1f28;
        case 0x1e1f2cu: goto label_1e1f2c;
        case 0x1e1f30u: goto label_1e1f30;
        case 0x1e1f34u: goto label_1e1f34;
        case 0x1e1f38u: goto label_1e1f38;
        case 0x1e1f3cu: goto label_1e1f3c;
        case 0x1e1f40u: goto label_1e1f40;
        case 0x1e1f44u: goto label_1e1f44;
        case 0x1e1f48u: goto label_1e1f48;
        case 0x1e1f4cu: goto label_1e1f4c;
        case 0x1e1f50u: goto label_1e1f50;
        case 0x1e1f54u: goto label_1e1f54;
        case 0x1e1f58u: goto label_1e1f58;
        case 0x1e1f5cu: goto label_1e1f5c;
        case 0x1e1f60u: goto label_1e1f60;
        case 0x1e1f64u: goto label_1e1f64;
        case 0x1e1f68u: goto label_1e1f68;
        case 0x1e1f6cu: goto label_1e1f6c;
        case 0x1e1f70u: goto label_1e1f70;
        case 0x1e1f74u: goto label_1e1f74;
        case 0x1e1f78u: goto label_1e1f78;
        case 0x1e1f7cu: goto label_1e1f7c;
        case 0x1e1f80u: goto label_1e1f80;
        case 0x1e1f84u: goto label_1e1f84;
        case 0x1e1f88u: goto label_1e1f88;
        case 0x1e1f8cu: goto label_1e1f8c;
        case 0x1e1f90u: goto label_1e1f90;
        case 0x1e1f94u: goto label_1e1f94;
        case 0x1e1f98u: goto label_1e1f98;
        case 0x1e1f9cu: goto label_1e1f9c;
        case 0x1e1fa0u: goto label_1e1fa0;
        case 0x1e1fa4u: goto label_1e1fa4;
        case 0x1e1fa8u: goto label_1e1fa8;
        case 0x1e1facu: goto label_1e1fac;
        case 0x1e1fb0u: goto label_1e1fb0;
        case 0x1e1fb4u: goto label_1e1fb4;
        case 0x1e1fb8u: goto label_1e1fb8;
        case 0x1e1fbcu: goto label_1e1fbc;
        case 0x1e1fc0u: goto label_1e1fc0;
        case 0x1e1fc4u: goto label_1e1fc4;
        case 0x1e1fc8u: goto label_1e1fc8;
        case 0x1e1fccu: goto label_1e1fcc;
        case 0x1e1fd0u: goto label_1e1fd0;
        case 0x1e1fd4u: goto label_1e1fd4;
        case 0x1e1fd8u: goto label_1e1fd8;
        case 0x1e1fdcu: goto label_1e1fdc;
        case 0x1e1fe0u: goto label_1e1fe0;
        case 0x1e1fe4u: goto label_1e1fe4;
        case 0x1e1fe8u: goto label_1e1fe8;
        case 0x1e1fecu: goto label_1e1fec;
        case 0x1e1ff0u: goto label_1e1ff0;
        case 0x1e1ff4u: goto label_1e1ff4;
        case 0x1e1ff8u: goto label_1e1ff8;
        case 0x1e1ffcu: goto label_1e1ffc;
        case 0x1e2000u: goto label_1e2000;
        case 0x1e2004u: goto label_1e2004;
        case 0x1e2008u: goto label_1e2008;
        case 0x1e200cu: goto label_1e200c;
        case 0x1e2010u: goto label_1e2010;
        case 0x1e2014u: goto label_1e2014;
        case 0x1e2018u: goto label_1e2018;
        case 0x1e201cu: goto label_1e201c;
        case 0x1e2020u: goto label_1e2020;
        case 0x1e2024u: goto label_1e2024;
        case 0x1e2028u: goto label_1e2028;
        case 0x1e202cu: goto label_1e202c;
        case 0x1e2030u: goto label_1e2030;
        case 0x1e2034u: goto label_1e2034;
        case 0x1e2038u: goto label_1e2038;
        case 0x1e203cu: goto label_1e203c;
        case 0x1e2040u: goto label_1e2040;
        case 0x1e2044u: goto label_1e2044;
        case 0x1e2048u: goto label_1e2048;
        case 0x1e204cu: goto label_1e204c;
        case 0x1e2050u: goto label_1e2050;
        case 0x1e2054u: goto label_1e2054;
        case 0x1e2058u: goto label_1e2058;
        case 0x1e205cu: goto label_1e205c;
        case 0x1e2060u: goto label_1e2060;
        case 0x1e2064u: goto label_1e2064;
        case 0x1e2068u: goto label_1e2068;
        case 0x1e206cu: goto label_1e206c;
        case 0x1e2070u: goto label_1e2070;
        case 0x1e2074u: goto label_1e2074;
        case 0x1e2078u: goto label_1e2078;
        case 0x1e207cu: goto label_1e207c;
        case 0x1e2080u: goto label_1e2080;
        case 0x1e2084u: goto label_1e2084;
        case 0x1e2088u: goto label_1e2088;
        case 0x1e208cu: goto label_1e208c;
        case 0x1e2090u: goto label_1e2090;
        case 0x1e2094u: goto label_1e2094;
        case 0x1e2098u: goto label_1e2098;
        case 0x1e209cu: goto label_1e209c;
        case 0x1e20a0u: goto label_1e20a0;
        case 0x1e20a4u: goto label_1e20a4;
        case 0x1e20a8u: goto label_1e20a8;
        case 0x1e20acu: goto label_1e20ac;
        case 0x1e20b0u: goto label_1e20b0;
        case 0x1e20b4u: goto label_1e20b4;
        case 0x1e20b8u: goto label_1e20b8;
        case 0x1e20bcu: goto label_1e20bc;
        case 0x1e20c0u: goto label_1e20c0;
        case 0x1e20c4u: goto label_1e20c4;
        case 0x1e20c8u: goto label_1e20c8;
        case 0x1e20ccu: goto label_1e20cc;
        case 0x1e20d0u: goto label_1e20d0;
        case 0x1e20d4u: goto label_1e20d4;
        case 0x1e20d8u: goto label_1e20d8;
        case 0x1e20dcu: goto label_1e20dc;
        case 0x1e20e0u: goto label_1e20e0;
        case 0x1e20e4u: goto label_1e20e4;
        case 0x1e20e8u: goto label_1e20e8;
        case 0x1e20ecu: goto label_1e20ec;
        case 0x1e20f0u: goto label_1e20f0;
        case 0x1e20f4u: goto label_1e20f4;
        case 0x1e20f8u: goto label_1e20f8;
        case 0x1e20fcu: goto label_1e20fc;
        case 0x1e2100u: goto label_1e2100;
        case 0x1e2104u: goto label_1e2104;
        case 0x1e2108u: goto label_1e2108;
        case 0x1e210cu: goto label_1e210c;
        case 0x1e2110u: goto label_1e2110;
        case 0x1e2114u: goto label_1e2114;
        case 0x1e2118u: goto label_1e2118;
        case 0x1e211cu: goto label_1e211c;
        case 0x1e2120u: goto label_1e2120;
        case 0x1e2124u: goto label_1e2124;
        case 0x1e2128u: goto label_1e2128;
        case 0x1e212cu: goto label_1e212c;
        case 0x1e2130u: goto label_1e2130;
        case 0x1e2134u: goto label_1e2134;
        case 0x1e2138u: goto label_1e2138;
        case 0x1e213cu: goto label_1e213c;
        case 0x1e2140u: goto label_1e2140;
        case 0x1e2144u: goto label_1e2144;
        case 0x1e2148u: goto label_1e2148;
        case 0x1e214cu: goto label_1e214c;
        case 0x1e2150u: goto label_1e2150;
        case 0x1e2154u: goto label_1e2154;
        case 0x1e2158u: goto label_1e2158;
        case 0x1e215cu: goto label_1e215c;
        case 0x1e2160u: goto label_1e2160;
        case 0x1e2164u: goto label_1e2164;
        case 0x1e2168u: goto label_1e2168;
        case 0x1e216cu: goto label_1e216c;
        case 0x1e2170u: goto label_1e2170;
        case 0x1e2174u: goto label_1e2174;
        case 0x1e2178u: goto label_1e2178;
        case 0x1e217cu: goto label_1e217c;
        case 0x1e2180u: goto label_1e2180;
        case 0x1e2184u: goto label_1e2184;
        case 0x1e2188u: goto label_1e2188;
        case 0x1e218cu: goto label_1e218c;
        case 0x1e2190u: goto label_1e2190;
        case 0x1e2194u: goto label_1e2194;
        case 0x1e2198u: goto label_1e2198;
        case 0x1e219cu: goto label_1e219c;
        case 0x1e21a0u: goto label_1e21a0;
        case 0x1e21a4u: goto label_1e21a4;
        case 0x1e21a8u: goto label_1e21a8;
        case 0x1e21acu: goto label_1e21ac;
        case 0x1e21b0u: goto label_1e21b0;
        case 0x1e21b4u: goto label_1e21b4;
        case 0x1e21b8u: goto label_1e21b8;
        case 0x1e21bcu: goto label_1e21bc;
        case 0x1e21c0u: goto label_1e21c0;
        case 0x1e21c4u: goto label_1e21c4;
        case 0x1e21c8u: goto label_1e21c8;
        case 0x1e21ccu: goto label_1e21cc;
        case 0x1e21d0u: goto label_1e21d0;
        case 0x1e21d4u: goto label_1e21d4;
        case 0x1e21d8u: goto label_1e21d8;
        case 0x1e21dcu: goto label_1e21dc;
        case 0x1e21e0u: goto label_1e21e0;
        case 0x1e21e4u: goto label_1e21e4;
        case 0x1e21e8u: goto label_1e21e8;
        case 0x1e21ecu: goto label_1e21ec;
        case 0x1e21f0u: goto label_1e21f0;
        case 0x1e21f4u: goto label_1e21f4;
        case 0x1e21f8u: goto label_1e21f8;
        case 0x1e21fcu: goto label_1e21fc;
        case 0x1e2200u: goto label_1e2200;
        case 0x1e2204u: goto label_1e2204;
        case 0x1e2208u: goto label_1e2208;
        case 0x1e220cu: goto label_1e220c;
        case 0x1e2210u: goto label_1e2210;
        case 0x1e2214u: goto label_1e2214;
        case 0x1e2218u: goto label_1e2218;
        case 0x1e221cu: goto label_1e221c;
        case 0x1e2220u: goto label_1e2220;
        case 0x1e2224u: goto label_1e2224;
        case 0x1e2228u: goto label_1e2228;
        case 0x1e222cu: goto label_1e222c;
        case 0x1e2230u: goto label_1e2230;
        case 0x1e2234u: goto label_1e2234;
        case 0x1e2238u: goto label_1e2238;
        case 0x1e223cu: goto label_1e223c;
        case 0x1e2240u: goto label_1e2240;
        case 0x1e2244u: goto label_1e2244;
        case 0x1e2248u: goto label_1e2248;
        case 0x1e224cu: goto label_1e224c;
        case 0x1e2250u: goto label_1e2250;
        case 0x1e2254u: goto label_1e2254;
        case 0x1e2258u: goto label_1e2258;
        case 0x1e225cu: goto label_1e225c;
        case 0x1e2260u: goto label_1e2260;
        case 0x1e2264u: goto label_1e2264;
        case 0x1e2268u: goto label_1e2268;
        case 0x1e226cu: goto label_1e226c;
        case 0x1e2270u: goto label_1e2270;
        case 0x1e2274u: goto label_1e2274;
        case 0x1e2278u: goto label_1e2278;
        case 0x1e227cu: goto label_1e227c;
        case 0x1e2280u: goto label_1e2280;
        case 0x1e2284u: goto label_1e2284;
        case 0x1e2288u: goto label_1e2288;
        case 0x1e228cu: goto label_1e228c;
        case 0x1e2290u: goto label_1e2290;
        case 0x1e2294u: goto label_1e2294;
        case 0x1e2298u: goto label_1e2298;
        case 0x1e229cu: goto label_1e229c;
        case 0x1e22a0u: goto label_1e22a0;
        case 0x1e22a4u: goto label_1e22a4;
        case 0x1e22a8u: goto label_1e22a8;
        case 0x1e22acu: goto label_1e22ac;
        case 0x1e22b0u: goto label_1e22b0;
        case 0x1e22b4u: goto label_1e22b4;
        case 0x1e22b8u: goto label_1e22b8;
        case 0x1e22bcu: goto label_1e22bc;
        case 0x1e22c0u: goto label_1e22c0;
        case 0x1e22c4u: goto label_1e22c4;
        case 0x1e22c8u: goto label_1e22c8;
        case 0x1e22ccu: goto label_1e22cc;
        case 0x1e22d0u: goto label_1e22d0;
        case 0x1e22d4u: goto label_1e22d4;
        case 0x1e22d8u: goto label_1e22d8;
        case 0x1e22dcu: goto label_1e22dc;
        case 0x1e22e0u: goto label_1e22e0;
        case 0x1e22e4u: goto label_1e22e4;
        case 0x1e22e8u: goto label_1e22e8;
        case 0x1e22ecu: goto label_1e22ec;
        case 0x1e22f0u: goto label_1e22f0;
        case 0x1e22f4u: goto label_1e22f4;
        case 0x1e22f8u: goto label_1e22f8;
        case 0x1e22fcu: goto label_1e22fc;
        case 0x1e2300u: goto label_1e2300;
        case 0x1e2304u: goto label_1e2304;
        case 0x1e2308u: goto label_1e2308;
        case 0x1e230cu: goto label_1e230c;
        case 0x1e2310u: goto label_1e2310;
        case 0x1e2314u: goto label_1e2314;
        case 0x1e2318u: goto label_1e2318;
        case 0x1e231cu: goto label_1e231c;
        case 0x1e2320u: goto label_1e2320;
        case 0x1e2324u: goto label_1e2324;
        case 0x1e2328u: goto label_1e2328;
        case 0x1e232cu: goto label_1e232c;
        case 0x1e2330u: goto label_1e2330;
        case 0x1e2334u: goto label_1e2334;
        case 0x1e2338u: goto label_1e2338;
        case 0x1e233cu: goto label_1e233c;
        case 0x1e2340u: goto label_1e2340;
        case 0x1e2344u: goto label_1e2344;
        case 0x1e2348u: goto label_1e2348;
        case 0x1e234cu: goto label_1e234c;
        case 0x1e2350u: goto label_1e2350;
        case 0x1e2354u: goto label_1e2354;
        case 0x1e2358u: goto label_1e2358;
        case 0x1e235cu: goto label_1e235c;
        case 0x1e2360u: goto label_1e2360;
        case 0x1e2364u: goto label_1e2364;
        case 0x1e2368u: goto label_1e2368;
        case 0x1e236cu: goto label_1e236c;
        case 0x1e2370u: goto label_1e2370;
        case 0x1e2374u: goto label_1e2374;
        case 0x1e2378u: goto label_1e2378;
        case 0x1e237cu: goto label_1e237c;
        case 0x1e2380u: goto label_1e2380;
        case 0x1e2384u: goto label_1e2384;
        case 0x1e2388u: goto label_1e2388;
        case 0x1e238cu: goto label_1e238c;
        case 0x1e2390u: goto label_1e2390;
        case 0x1e2394u: goto label_1e2394;
        case 0x1e2398u: goto label_1e2398;
        case 0x1e239cu: goto label_1e239c;
        case 0x1e23a0u: goto label_1e23a0;
        case 0x1e23a4u: goto label_1e23a4;
        case 0x1e23a8u: goto label_1e23a8;
        case 0x1e23acu: goto label_1e23ac;
        case 0x1e23b0u: goto label_1e23b0;
        case 0x1e23b4u: goto label_1e23b4;
        case 0x1e23b8u: goto label_1e23b8;
        case 0x1e23bcu: goto label_1e23bc;
        case 0x1e23c0u: goto label_1e23c0;
        case 0x1e23c4u: goto label_1e23c4;
        case 0x1e23c8u: goto label_1e23c8;
        case 0x1e23ccu: goto label_1e23cc;
        case 0x1e23d0u: goto label_1e23d0;
        case 0x1e23d4u: goto label_1e23d4;
        case 0x1e23d8u: goto label_1e23d8;
        case 0x1e23dcu: goto label_1e23dc;
        case 0x1e23e0u: goto label_1e23e0;
        case 0x1e23e4u: goto label_1e23e4;
        case 0x1e23e8u: goto label_1e23e8;
        case 0x1e23ecu: goto label_1e23ec;
        default: break;
    }

    ctx->pc = 0x1e1ba0u;

label_1e1ba0:
    // 0x1e1ba0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1e1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1e1ba4:
    // 0x1e1ba4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e1ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e1ba8:
    // 0x1e1ba8: 0x2442c6f0  addiu       $v0, $v0, -0x3910
    ctx->pc = 0x1e1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952688));
label_1e1bac:
    // 0x1e1bac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1bb0:
    // 0x1e1bb0: 0x3e00008  jr          $ra
label_1e1bb4:
    if (ctx->pc == 0x1E1BB4u) {
        ctx->pc = 0x1E1BB4u;
            // 0x1e1bb4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1E1BB8u;
        goto label_1e1bb8;
    }
    ctx->pc = 0x1E1BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BB0u;
            // 0x1e1bb4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1BB8u;
label_1e1bb8:
    // 0x1e1bb8: 0x0  nop
    ctx->pc = 0x1e1bb8u;
    // NOP
label_1e1bbc:
    // 0x1e1bbc: 0x0  nop
    ctx->pc = 0x1e1bbcu;
    // NOP
label_1e1bc0:
    // 0x1e1bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e1bc4:
    // 0x1e1bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e1bc8:
    // 0x1e1bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1bcc:
    // 0x1e1bcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1bd0:
    // 0x1e1bd0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1e1bd4:
    if (ctx->pc == 0x1E1BD4u) {
        ctx->pc = 0x1E1BD4u;
            // 0x1e1bd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1BD8u;
        goto label_1e1bd8;
    }
    ctx->pc = 0x1E1BD0u;
    {
        const bool branch_taken_0x1e1bd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1bd0) {
            ctx->pc = 0x1E1BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BD0u;
            // 0x1e1bd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1BFCu;
            goto label_1e1bfc;
        }
    }
    ctx->pc = 0x1E1BD8u;
label_1e1bd8:
    // 0x1e1bd8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e1bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e1bdc:
    // 0x1e1bdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e1bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e1be0:
    // 0x1e1be0: 0x2463cfe0  addiu       $v1, $v1, -0x3020
    ctx->pc = 0x1e1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954976));
label_1e1be4:
    // 0x1e1be4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1be4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e1be8:
    // 0x1e1be8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1e1bec:
    if (ctx->pc == 0x1E1BECu) {
        ctx->pc = 0x1E1BECu;
            // 0x1e1bec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1E1BF0u;
        goto label_1e1bf0;
    }
    ctx->pc = 0x1E1BE8u;
    {
        const bool branch_taken_0x1e1be8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E1BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BE8u;
            // 0x1e1bec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1be8) {
            ctx->pc = 0x1E1BF8u;
            goto label_1e1bf8;
        }
    }
    ctx->pc = 0x1E1BF0u;
label_1e1bf0:
    // 0x1e1bf0: 0xc0400a8  jal         func_1002A0
label_1e1bf4:
    if (ctx->pc == 0x1E1BF4u) {
        ctx->pc = 0x1E1BF8u;
        goto label_1e1bf8;
    }
    ctx->pc = 0x1E1BF0u;
    SET_GPR_U32(ctx, 31, 0x1E1BF8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1BF8u; }
        if (ctx->pc != 0x1E1BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1BF8u; }
        if (ctx->pc != 0x1E1BF8u) { return; }
    }
    ctx->pc = 0x1E1BF8u;
label_1e1bf8:
    // 0x1e1bf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1bfc:
    // 0x1e1bfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1c00:
    // 0x1e1c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1c04:
    // 0x1e1c04: 0x3e00008  jr          $ra
label_1e1c08:
    if (ctx->pc == 0x1E1C08u) {
        ctx->pc = 0x1E1C08u;
            // 0x1e1c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E1C0Cu;
        goto label_1e1c0c;
    }
    ctx->pc = 0x1E1C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C04u;
            // 0x1e1c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1C0Cu;
label_1e1c0c:
    // 0x1e1c0c: 0x0  nop
    ctx->pc = 0x1e1c0cu;
    // NOP
label_1e1c10:
    // 0x1e1c10: 0x3e00008  jr          $ra
label_1e1c14:
    if (ctx->pc == 0x1E1C14u) {
        ctx->pc = 0x1E1C14u;
            // 0x1e1c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C18u;
        goto label_1e1c18;
    }
    ctx->pc = 0x1E1C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C10u;
            // 0x1e1c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1C18u;
label_1e1c18:
    // 0x1e1c18: 0x0  nop
    ctx->pc = 0x1e1c18u;
    // NOP
label_1e1c1c:
    // 0x1e1c1c: 0x0  nop
    ctx->pc = 0x1e1c1cu;
    // NOP
label_1e1c20:
    // 0x1e1c20: 0x3e00008  jr          $ra
label_1e1c24:
    if (ctx->pc == 0x1E1C24u) {
        ctx->pc = 0x1E1C28u;
        goto label_1e1c28;
    }
    ctx->pc = 0x1E1C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1C28u;
label_1e1c28:
    // 0x1e1c28: 0x0  nop
    ctx->pc = 0x1e1c28u;
    // NOP
label_1e1c2c:
    // 0x1e1c2c: 0x0  nop
    ctx->pc = 0x1e1c2cu;
    // NOP
label_1e1c30:
    // 0x1e1c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e1c34:
    // 0x1e1c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e1c38:
    // 0x1e1c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1c3c:
    // 0x1e1c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c40:
    // 0x1e1c40: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1e1c44:
    if (ctx->pc == 0x1E1C44u) {
        ctx->pc = 0x1E1C44u;
            // 0x1e1c44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C48u;
        goto label_1e1c48;
    }
    ctx->pc = 0x1E1C40u;
    {
        const bool branch_taken_0x1e1c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1c40) {
            ctx->pc = 0x1E1C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C40u;
            // 0x1e1c44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1C6Cu;
            goto label_1e1c6c;
        }
    }
    ctx->pc = 0x1E1C48u;
label_1e1c48:
    // 0x1e1c48: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e1c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e1c4c:
    // 0x1e1c4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e1c50:
    // 0x1e1c50: 0x2463d008  addiu       $v1, $v1, -0x2FF8
    ctx->pc = 0x1e1c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955016));
label_1e1c54:
    // 0x1e1c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e1c58:
    // 0x1e1c58: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1e1c5c:
    if (ctx->pc == 0x1E1C5Cu) {
        ctx->pc = 0x1E1C5Cu;
            // 0x1e1c5c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1E1C60u;
        goto label_1e1c60;
    }
    ctx->pc = 0x1E1C58u;
    {
        const bool branch_taken_0x1e1c58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E1C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C58u;
            // 0x1e1c5c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c58) {
            ctx->pc = 0x1E1C68u;
            goto label_1e1c68;
        }
    }
    ctx->pc = 0x1E1C60u;
label_1e1c60:
    // 0x1e1c60: 0xc0400a8  jal         func_1002A0
label_1e1c64:
    if (ctx->pc == 0x1E1C64u) {
        ctx->pc = 0x1E1C68u;
        goto label_1e1c68;
    }
    ctx->pc = 0x1E1C60u;
    SET_GPR_U32(ctx, 31, 0x1E1C68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C68u; }
        if (ctx->pc != 0x1E1C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C68u; }
        if (ctx->pc != 0x1E1C68u) { return; }
    }
    ctx->pc = 0x1E1C68u;
label_1e1c68:
    // 0x1e1c68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c6c:
    // 0x1e1c6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1c70:
    // 0x1e1c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1c74:
    // 0x1e1c74: 0x3e00008  jr          $ra
label_1e1c78:
    if (ctx->pc == 0x1E1C78u) {
        ctx->pc = 0x1E1C78u;
            // 0x1e1c78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E1C7Cu;
        goto label_1e1c7c;
    }
    ctx->pc = 0x1E1C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C74u;
            // 0x1e1c78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1C7Cu;
label_1e1c7c:
    // 0x1e1c7c: 0x0  nop
    ctx->pc = 0x1e1c7cu;
    // NOP
label_1e1c80:
    // 0x1e1c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e1c84:
    // 0x1e1c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e1c88:
    // 0x1e1c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1c8c:
    // 0x1e1c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1c90:
    // 0x1e1c90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c94:
    // 0x1e1c94: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_1e1c98:
    if (ctx->pc == 0x1E1C98u) {
        ctx->pc = 0x1E1C98u;
            // 0x1e1c98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C9Cu;
        goto label_1e1c9c;
    }
    ctx->pc = 0x1E1C94u;
    {
        const bool branch_taken_0x1e1c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C94u;
            // 0x1e1c98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c94) {
            ctx->pc = 0x1E1CE4u;
            goto label_1e1ce4;
        }
    }
    ctx->pc = 0x1E1C9Cu;
label_1e1c9c:
    // 0x1e1c9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1ca0:
    // 0x1e1ca0: 0x2442d070  addiu       $v0, $v0, -0x2F90
    ctx->pc = 0x1e1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955120));
label_1e1ca4:
    // 0x1e1ca4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1e1ca8:
    if (ctx->pc == 0x1E1CA8u) {
        ctx->pc = 0x1E1CA8u;
            // 0x1e1ca8: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x1E1CACu;
        goto label_1e1cac;
    }
    ctx->pc = 0x1E1CA4u;
    {
        const bool branch_taken_0x1e1ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CA4u;
            // 0x1e1ca8: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ca4) {
            ctx->pc = 0x1E1CCCu;
            goto label_1e1ccc;
        }
    }
    ctx->pc = 0x1E1CACu;
label_1e1cac:
    // 0x1e1cac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1cb0:
    // 0x1e1cb0: 0x2442d040  addiu       $v0, $v0, -0x2FC0
    ctx->pc = 0x1e1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955072));
label_1e1cb4:
    // 0x1e1cb4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1e1cb8:
    if (ctx->pc == 0x1E1CB8u) {
        ctx->pc = 0x1E1CB8u;
            // 0x1e1cb8: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x1E1CBCu;
        goto label_1e1cbc;
    }
    ctx->pc = 0x1E1CB4u;
    {
        const bool branch_taken_0x1e1cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CB4u;
            // 0x1e1cb8: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1cb4) {
            ctx->pc = 0x1E1CCCu;
            goto label_1e1ccc;
        }
    }
    ctx->pc = 0x1E1CBCu;
label_1e1cbc:
    // 0x1e1cbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1cc0:
    // 0x1e1cc0: 0x2442d020  addiu       $v0, $v0, -0x2FE0
    ctx->pc = 0x1e1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955040));
label_1e1cc4:
    // 0x1e1cc4: 0xc0bfa40  jal         func_2FE900
label_1e1cc8:
    if (ctx->pc == 0x1E1CC8u) {
        ctx->pc = 0x1E1CC8u;
            // 0x1e1cc8: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x1E1CCCu;
        goto label_1e1ccc;
    }
    ctx->pc = 0x1E1CC4u;
    SET_GPR_U32(ctx, 31, 0x1E1CCCu);
    ctx->pc = 0x1E1CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CC4u;
            // 0x1e1cc8: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE900u;
    if (runtime->hasFunction(0x2FE900u)) {
        auto targetFn = runtime->lookupFunction(0x2FE900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CCCu; }
        if (ctx->pc != 0x1E1CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE900_0x2fe900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CCCu; }
        if (ctx->pc != 0x1E1CCCu) { return; }
    }
    ctx->pc = 0x1E1CCCu;
label_1e1ccc:
    // 0x1e1ccc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e1cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e1cd0:
    // 0x1e1cd0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1cd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e1cd4:
    // 0x1e1cd4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1e1cd8:
    if (ctx->pc == 0x1E1CD8u) {
        ctx->pc = 0x1E1CD8u;
            // 0x1e1cd8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CDCu;
        goto label_1e1cdc;
    }
    ctx->pc = 0x1E1CD4u;
    {
        const bool branch_taken_0x1e1cd4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e1cd4) {
            ctx->pc = 0x1E1CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CD4u;
            // 0x1e1cd8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1CE8u;
            goto label_1e1ce8;
        }
    }
    ctx->pc = 0x1E1CDCu;
label_1e1cdc:
    // 0x1e1cdc: 0xc0400a8  jal         func_1002A0
label_1e1ce0:
    if (ctx->pc == 0x1E1CE0u) {
        ctx->pc = 0x1E1CE0u;
            // 0x1e1ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CE4u;
        goto label_1e1ce4;
    }
    ctx->pc = 0x1E1CDCu;
    SET_GPR_U32(ctx, 31, 0x1E1CE4u);
    ctx->pc = 0x1E1CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CDCu;
            // 0x1e1ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CE4u; }
        if (ctx->pc != 0x1E1CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CE4u; }
        if (ctx->pc != 0x1E1CE4u) { return; }
    }
    ctx->pc = 0x1E1CE4u;
label_1e1ce4:
    // 0x1e1ce4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e1ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ce8:
    // 0x1e1ce8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1cec:
    // 0x1e1cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1cf0:
    // 0x1e1cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1cf4:
    // 0x1e1cf4: 0x3e00008  jr          $ra
label_1e1cf8:
    if (ctx->pc == 0x1E1CF8u) {
        ctx->pc = 0x1E1CF8u;
            // 0x1e1cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E1CFCu;
        goto label_1e1cfc;
    }
    ctx->pc = 0x1E1CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CF4u;
            // 0x1e1cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1CFCu;
label_1e1cfc:
    // 0x1e1cfc: 0x0  nop
    ctx->pc = 0x1e1cfcu;
    // NOP
label_1e1d00:
    // 0x1e1d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e1d04:
    // 0x1e1d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e1d08:
    // 0x1e1d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1d0c:
    // 0x1e1d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1d10:
    // 0x1e1d10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d14:
    // 0x1e1d14: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_1e1d18:
    if (ctx->pc == 0x1E1D18u) {
        ctx->pc = 0x1E1D18u;
            // 0x1e1d18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D1Cu;
        goto label_1e1d1c;
    }
    ctx->pc = 0x1E1D14u;
    {
        const bool branch_taken_0x1e1d14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D14u;
            // 0x1e1d18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d14) {
            ctx->pc = 0x1E1D64u;
            goto label_1e1d64;
        }
    }
    ctx->pc = 0x1E1D1Cu;
label_1e1d1c:
    // 0x1e1d1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1d20:
    // 0x1e1d20: 0x2442d0a0  addiu       $v0, $v0, -0x2F60
    ctx->pc = 0x1e1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955168));
label_1e1d24:
    // 0x1e1d24: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1e1d28:
    if (ctx->pc == 0x1E1D28u) {
        ctx->pc = 0x1E1D28u;
            // 0x1e1d28: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x1E1D2Cu;
        goto label_1e1d2c;
    }
    ctx->pc = 0x1E1D24u;
    {
        const bool branch_taken_0x1e1d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D24u;
            // 0x1e1d28: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d24) {
            ctx->pc = 0x1E1D4Cu;
            goto label_1e1d4c;
        }
    }
    ctx->pc = 0x1E1D2Cu;
label_1e1d2c:
    // 0x1e1d2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1d30:
    // 0x1e1d30: 0x2442d040  addiu       $v0, $v0, -0x2FC0
    ctx->pc = 0x1e1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955072));
label_1e1d34:
    // 0x1e1d34: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1e1d38:
    if (ctx->pc == 0x1E1D38u) {
        ctx->pc = 0x1E1D38u;
            // 0x1e1d38: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x1E1D3Cu;
        goto label_1e1d3c;
    }
    ctx->pc = 0x1E1D34u;
    {
        const bool branch_taken_0x1e1d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D34u;
            // 0x1e1d38: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d34) {
            ctx->pc = 0x1E1D4Cu;
            goto label_1e1d4c;
        }
    }
    ctx->pc = 0x1E1D3Cu;
label_1e1d3c:
    // 0x1e1d3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1d40:
    // 0x1e1d40: 0x2442d020  addiu       $v0, $v0, -0x2FE0
    ctx->pc = 0x1e1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955040));
label_1e1d44:
    // 0x1e1d44: 0xc0bfa40  jal         func_2FE900
label_1e1d48:
    if (ctx->pc == 0x1E1D48u) {
        ctx->pc = 0x1E1D48u;
            // 0x1e1d48: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x1E1D4Cu;
        goto label_1e1d4c;
    }
    ctx->pc = 0x1E1D44u;
    SET_GPR_U32(ctx, 31, 0x1E1D4Cu);
    ctx->pc = 0x1E1D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D44u;
            // 0x1e1d48: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE900u;
    if (runtime->hasFunction(0x2FE900u)) {
        auto targetFn = runtime->lookupFunction(0x2FE900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D4Cu; }
        if (ctx->pc != 0x1E1D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE900_0x2fe900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D4Cu; }
        if (ctx->pc != 0x1E1D4Cu) { return; }
    }
    ctx->pc = 0x1E1D4Cu;
label_1e1d4c:
    // 0x1e1d4c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e1d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e1d50:
    // 0x1e1d50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1d50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e1d54:
    // 0x1e1d54: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1e1d58:
    if (ctx->pc == 0x1E1D58u) {
        ctx->pc = 0x1E1D58u;
            // 0x1e1d58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D5Cu;
        goto label_1e1d5c;
    }
    ctx->pc = 0x1E1D54u;
    {
        const bool branch_taken_0x1e1d54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e1d54) {
            ctx->pc = 0x1E1D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D54u;
            // 0x1e1d58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1D68u;
            goto label_1e1d68;
        }
    }
    ctx->pc = 0x1E1D5Cu;
label_1e1d5c:
    // 0x1e1d5c: 0xc0400a8  jal         func_1002A0
label_1e1d60:
    if (ctx->pc == 0x1E1D60u) {
        ctx->pc = 0x1E1D60u;
            // 0x1e1d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D64u;
        goto label_1e1d64;
    }
    ctx->pc = 0x1E1D5Cu;
    SET_GPR_U32(ctx, 31, 0x1E1D64u);
    ctx->pc = 0x1E1D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D5Cu;
            // 0x1e1d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D64u; }
        if (ctx->pc != 0x1E1D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D64u; }
        if (ctx->pc != 0x1E1D64u) { return; }
    }
    ctx->pc = 0x1E1D64u;
label_1e1d64:
    // 0x1e1d64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e1d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d68:
    // 0x1e1d68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1d6c:
    // 0x1e1d6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1d70:
    // 0x1e1d70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1d74:
    // 0x1e1d74: 0x3e00008  jr          $ra
label_1e1d78:
    if (ctx->pc == 0x1E1D78u) {
        ctx->pc = 0x1E1D78u;
            // 0x1e1d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E1D7Cu;
        goto label_1e1d7c;
    }
    ctx->pc = 0x1E1D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D74u;
            // 0x1e1d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1D7Cu;
label_1e1d7c:
    // 0x1e1d7c: 0x0  nop
    ctx->pc = 0x1e1d7cu;
    // NOP
label_1e1d80:
    // 0x1e1d80: 0x3e00008  jr          $ra
label_1e1d84:
    if (ctx->pc == 0x1E1D84u) {
        ctx->pc = 0x1E1D84u;
            // 0x1e1d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D88u;
        goto label_1e1d88;
    }
    ctx->pc = 0x1E1D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D80u;
            // 0x1e1d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1D88u;
label_1e1d88:
    // 0x1e1d88: 0x0  nop
    ctx->pc = 0x1e1d88u;
    // NOP
label_1e1d8c:
    // 0x1e1d8c: 0x0  nop
    ctx->pc = 0x1e1d8cu;
    // NOP
label_1e1d90:
    // 0x1e1d90: 0x3e00008  jr          $ra
label_1e1d94:
    if (ctx->pc == 0x1E1D94u) {
        ctx->pc = 0x1E1D98u;
        goto label_1e1d98;
    }
    ctx->pc = 0x1E1D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1D98u;
label_1e1d98:
    // 0x1e1d98: 0x0  nop
    ctx->pc = 0x1e1d98u;
    // NOP
label_1e1d9c:
    // 0x1e1d9c: 0x0  nop
    ctx->pc = 0x1e1d9cu;
    // NOP
label_1e1da0:
    // 0x1e1da0: 0x3e00008  jr          $ra
label_1e1da4:
    if (ctx->pc == 0x1E1DA4u) {
        ctx->pc = 0x1E1DA8u;
        goto label_1e1da8;
    }
    ctx->pc = 0x1E1DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1DA8u;
label_1e1da8:
    // 0x1e1da8: 0x0  nop
    ctx->pc = 0x1e1da8u;
    // NOP
label_1e1dac:
    // 0x1e1dac: 0x0  nop
    ctx->pc = 0x1e1dacu;
    // NOP
label_1e1db0:
    // 0x1e1db0: 0x3e00008  jr          $ra
label_1e1db4:
    if (ctx->pc == 0x1E1DB4u) {
        ctx->pc = 0x1E1DB8u;
        goto label_1e1db8;
    }
    ctx->pc = 0x1E1DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1DB8u;
label_1e1db8:
    // 0x1e1db8: 0x0  nop
    ctx->pc = 0x1e1db8u;
    // NOP
label_1e1dbc:
    // 0x1e1dbc: 0x0  nop
    ctx->pc = 0x1e1dbcu;
    // NOP
label_1e1dc0:
    // 0x1e1dc0: 0x3e00008  jr          $ra
label_1e1dc4:
    if (ctx->pc == 0x1E1DC4u) {
        ctx->pc = 0x1E1DC4u;
            // 0x1e1dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DC8u;
        goto label_1e1dc8;
    }
    ctx->pc = 0x1E1DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DC0u;
            // 0x1e1dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1DC8u;
label_1e1dc8:
    // 0x1e1dc8: 0x0  nop
    ctx->pc = 0x1e1dc8u;
    // NOP
label_1e1dcc:
    // 0x1e1dcc: 0x0  nop
    ctx->pc = 0x1e1dccu;
    // NOP
label_1e1dd0:
    // 0x1e1dd0: 0x3e00008  jr          $ra
label_1e1dd4:
    if (ctx->pc == 0x1E1DD4u) {
        ctx->pc = 0x1E1DD4u;
            // 0x1e1dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DD8u;
        goto label_1e1dd8;
    }
    ctx->pc = 0x1E1DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DD0u;
            // 0x1e1dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1DD8u;
label_1e1dd8:
    // 0x1e1dd8: 0x0  nop
    ctx->pc = 0x1e1dd8u;
    // NOP
label_1e1ddc:
    // 0x1e1ddc: 0x0  nop
    ctx->pc = 0x1e1ddcu;
    // NOP
label_1e1de0:
    // 0x1e1de0: 0x3e00008  jr          $ra
label_1e1de4:
    if (ctx->pc == 0x1E1DE4u) {
        ctx->pc = 0x1E1DE4u;
            // 0x1e1de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DE8u;
        goto label_1e1de8;
    }
    ctx->pc = 0x1E1DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DE0u;
            // 0x1e1de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1DE8u;
label_1e1de8:
    // 0x1e1de8: 0x0  nop
    ctx->pc = 0x1e1de8u;
    // NOP
label_1e1dec:
    // 0x1e1dec: 0x0  nop
    ctx->pc = 0x1e1decu;
    // NOP
label_1e1df0:
    // 0x1e1df0: 0x3e00008  jr          $ra
label_1e1df4:
    if (ctx->pc == 0x1E1DF4u) {
        ctx->pc = 0x1E1DF4u;
            // 0x1e1df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DF8u;
        goto label_1e1df8;
    }
    ctx->pc = 0x1E1DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DF0u;
            // 0x1e1df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1DF8u;
label_1e1df8:
    // 0x1e1df8: 0x0  nop
    ctx->pc = 0x1e1df8u;
    // NOP
label_1e1dfc:
    // 0x1e1dfc: 0x0  nop
    ctx->pc = 0x1e1dfcu;
    // NOP
label_1e1e00:
    // 0x1e1e00: 0x3e00008  jr          $ra
label_1e1e04:
    if (ctx->pc == 0x1E1E04u) {
        ctx->pc = 0x1E1E04u;
            // 0x1e1e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E08u;
        goto label_1e1e08;
    }
    ctx->pc = 0x1E1E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E00u;
            // 0x1e1e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1E08u;
label_1e1e08:
    // 0x1e1e08: 0x0  nop
    ctx->pc = 0x1e1e08u;
    // NOP
label_1e1e0c:
    // 0x1e1e0c: 0x0  nop
    ctx->pc = 0x1e1e0cu;
    // NOP
label_1e1e10:
    // 0x1e1e10: 0x3e00008  jr          $ra
label_1e1e14:
    if (ctx->pc == 0x1E1E14u) {
        ctx->pc = 0x1E1E14u;
            // 0x1e1e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E18u;
        goto label_1e1e18;
    }
    ctx->pc = 0x1E1E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E10u;
            // 0x1e1e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1E18u;
label_1e1e18:
    // 0x1e1e18: 0x0  nop
    ctx->pc = 0x1e1e18u;
    // NOP
label_1e1e1c:
    // 0x1e1e1c: 0x0  nop
    ctx->pc = 0x1e1e1cu;
    // NOP
label_1e1e20:
    // 0x1e1e20: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1e1e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1e1e24:
    // 0x1e1e24: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x1e1e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_1e1e28:
    // 0x1e1e28: 0x3200008  jr          $t9
label_1e1e2c:
    if (ctx->pc == 0x1E1E2Cu) {
        ctx->pc = 0x1E1E30u;
        goto label_1e1e30;
    }
    ctx->pc = 0x1E1E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1E30u;
label_1e1e30:
    // 0x1e1e30: 0x3e00008  jr          $ra
label_1e1e34:
    if (ctx->pc == 0x1E1E34u) {
        ctx->pc = 0x1E1E34u;
            // 0x1e1e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E38u;
        goto label_1e1e38;
    }
    ctx->pc = 0x1E1E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E30u;
            // 0x1e1e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1E38u;
label_1e1e38:
    // 0x1e1e38: 0x0  nop
    ctx->pc = 0x1e1e38u;
    // NOP
label_1e1e3c:
    // 0x1e1e3c: 0x0  nop
    ctx->pc = 0x1e1e3cu;
    // NOP
label_1e1e40:
    // 0x1e1e40: 0x3e00008  jr          $ra
label_1e1e44:
    if (ctx->pc == 0x1E1E44u) {
        ctx->pc = 0x1E1E44u;
            // 0x1e1e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E48u;
        goto label_1e1e48;
    }
    ctx->pc = 0x1E1E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E40u;
            // 0x1e1e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1E48u;
label_1e1e48:
    // 0x1e1e48: 0x0  nop
    ctx->pc = 0x1e1e48u;
    // NOP
label_1e1e4c:
    // 0x1e1e4c: 0x0  nop
    ctx->pc = 0x1e1e4cu;
    // NOP
label_1e1e50:
    // 0x1e1e50: 0x3e00008  jr          $ra
label_1e1e54:
    if (ctx->pc == 0x1E1E54u) {
        ctx->pc = 0x1E1E54u;
            // 0x1e1e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E58u;
        goto label_1e1e58;
    }
    ctx->pc = 0x1E1E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E50u;
            // 0x1e1e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1E58u;
label_1e1e58:
    // 0x1e1e58: 0x0  nop
    ctx->pc = 0x1e1e58u;
    // NOP
label_1e1e5c:
    // 0x1e1e5c: 0x0  nop
    ctx->pc = 0x1e1e5cu;
    // NOP
label_1e1e60:
    // 0x1e1e60: 0x3e00008  jr          $ra
label_1e1e64:
    if (ctx->pc == 0x1E1E64u) {
        ctx->pc = 0x1E1E64u;
            // 0x1e1e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E68u;
        goto label_1e1e68;
    }
    ctx->pc = 0x1E1E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E60u;
            // 0x1e1e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1E68u;
label_1e1e68:
    // 0x1e1e68: 0x0  nop
    ctx->pc = 0x1e1e68u;
    // NOP
label_1e1e6c:
    // 0x1e1e6c: 0x0  nop
    ctx->pc = 0x1e1e6cu;
    // NOP
label_1e1e70:
    // 0x1e1e70: 0x3e00008  jr          $ra
label_1e1e74:
    if (ctx->pc == 0x1E1E74u) {
        ctx->pc = 0x1E1E74u;
            // 0x1e1e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E78u;
        goto label_1e1e78;
    }
    ctx->pc = 0x1E1E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E70u;
            // 0x1e1e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1E78u;
label_1e1e78:
    // 0x1e1e78: 0x0  nop
    ctx->pc = 0x1e1e78u;
    // NOP
label_1e1e7c:
    // 0x1e1e7c: 0x0  nop
    ctx->pc = 0x1e1e7cu;
    // NOP
label_1e1e80:
    // 0x1e1e80: 0x3e00008  jr          $ra
label_1e1e84:
    if (ctx->pc == 0x1E1E84u) {
        ctx->pc = 0x1E1E84u;
            // 0x1e1e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E88u;
        goto label_1e1e88;
    }
    ctx->pc = 0x1E1E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E80u;
            // 0x1e1e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1E88u;
label_1e1e88:
    // 0x1e1e88: 0x0  nop
    ctx->pc = 0x1e1e88u;
    // NOP
label_1e1e8c:
    // 0x1e1e8c: 0x0  nop
    ctx->pc = 0x1e1e8cu;
    // NOP
label_1e1e90:
    // 0x1e1e90: 0x3e00008  jr          $ra
label_1e1e94:
    if (ctx->pc == 0x1E1E94u) {
        ctx->pc = 0x1E1E94u;
            // 0x1e1e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E98u;
        goto label_1e1e98;
    }
    ctx->pc = 0x1E1E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E90u;
            // 0x1e1e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1E98u;
label_1e1e98:
    // 0x1e1e98: 0x0  nop
    ctx->pc = 0x1e1e98u;
    // NOP
label_1e1e9c:
    // 0x1e1e9c: 0x0  nop
    ctx->pc = 0x1e1e9cu;
    // NOP
label_1e1ea0:
    // 0x1e1ea0: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1e1ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1e1ea4:
    // 0x1e1ea4: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x1e1ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_1e1ea8:
    // 0x1e1ea8: 0x3200008  jr          $t9
label_1e1eac:
    if (ctx->pc == 0x1E1EACu) {
        ctx->pc = 0x1E1EB0u;
        goto label_1e1eb0;
    }
    ctx->pc = 0x1E1EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1EB0u;
label_1e1eb0:
    // 0x1e1eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e1eb4:
    // 0x1e1eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e1eb8:
    // 0x1e1eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1ebc:
    // 0x1e1ebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ec0:
    // 0x1e1ec0: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_1e1ec4:
    if (ctx->pc == 0x1E1EC4u) {
        ctx->pc = 0x1E1EC4u;
            // 0x1e1ec4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1EC8u;
        goto label_1e1ec8;
    }
    ctx->pc = 0x1E1EC0u;
    {
        const bool branch_taken_0x1e1ec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ec0) {
            ctx->pc = 0x1E1EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1EC0u;
            // 0x1e1ec4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1F40u;
            goto label_1e1f40;
        }
    }
    ctx->pc = 0x1E1EC8u;
label_1e1ec8:
    // 0x1e1ec8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e1ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e1ecc:
    // 0x1e1ecc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1ed0:
    // 0x1e1ed0: 0x2463d100  addiu       $v1, $v1, -0x2F00
    ctx->pc = 0x1e1ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955264));
label_1e1ed4:
    // 0x1e1ed4: 0x2442d128  addiu       $v0, $v0, -0x2ED8
    ctx->pc = 0x1e1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955304));
label_1e1ed8:
    // 0x1e1ed8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1e1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1e1edc:
    // 0x1e1edc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_1e1ee0:
    if (ctx->pc == 0x1E1EE0u) {
        ctx->pc = 0x1E1EE0u;
            // 0x1e1ee0: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x1E1EE4u;
        goto label_1e1ee4;
    }
    ctx->pc = 0x1E1EDCu;
    {
        const bool branch_taken_0x1e1edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1EDCu;
            // 0x1e1ee0: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1edc) {
            ctx->pc = 0x1E1F24u;
            goto label_1e1f24;
        }
    }
    ctx->pc = 0x1E1EE4u;
label_1e1ee4:
    // 0x1e1ee4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1ee8:
    // 0x1e1ee8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e1ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e1eec:
    // 0x1e1eec: 0x244244b0  addiu       $v0, $v0, 0x44B0
    ctx->pc = 0x1e1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17584));
label_1e1ef0:
    // 0x1e1ef0: 0x246344d8  addiu       $v1, $v1, 0x44D8
    ctx->pc = 0x1e1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17624));
label_1e1ef4:
    // 0x1e1ef4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1e1ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1e1ef8:
    // 0x1e1ef8: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1e1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1e1efc:
    // 0x1e1efc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e1f00:
    if (ctx->pc == 0x1E1F00u) {
        ctx->pc = 0x1E1F00u;
            // 0x1e1f00: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->pc = 0x1E1F04u;
        goto label_1e1f04;
    }
    ctx->pc = 0x1E1EFCu;
    {
        const bool branch_taken_0x1e1efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1EFCu;
            // 0x1e1f00: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1efc) {
            ctx->pc = 0x1E1F10u;
            goto label_1e1f10;
        }
    }
    ctx->pc = 0x1E1F04u;
label_1e1f04:
    // 0x1e1f04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1f08:
    // 0x1e1f08: 0x2442d0d0  addiu       $v0, $v0, -0x2F30
    ctx->pc = 0x1e1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955216));
label_1e1f0c:
    // 0x1e1f0c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1e1f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1e1f10:
    // 0x1e1f10: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_1e1f14:
    if (ctx->pc == 0x1E1F14u) {
        ctx->pc = 0x1E1F14u;
            // 0x1e1f14: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x1E1F18u;
        goto label_1e1f18;
    }
    ctx->pc = 0x1E1F10u;
    {
        const bool branch_taken_0x1e1f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1f10) {
            ctx->pc = 0x1E1F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F10u;
            // 0x1e1f14: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1F28u;
            goto label_1e1f28;
        }
    }
    ctx->pc = 0x1E1F18u;
label_1e1f18:
    // 0x1e1f18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1f1c:
    // 0x1e1f1c: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x1e1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
label_1e1f20:
    // 0x1e1f20: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1e1f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1e1f24:
    // 0x1e1f24: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e1f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e1f28:
    // 0x1e1f28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1f28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e1f2c:
    // 0x1e1f2c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1e1f30:
    if (ctx->pc == 0x1E1F30u) {
        ctx->pc = 0x1E1F34u;
        goto label_1e1f34;
    }
    ctx->pc = 0x1E1F2Cu;
    {
        const bool branch_taken_0x1e1f2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e1f2c) {
            ctx->pc = 0x1E1F3Cu;
            goto label_1e1f3c;
        }
    }
    ctx->pc = 0x1E1F34u;
label_1e1f34:
    // 0x1e1f34: 0xc0400a8  jal         func_1002A0
label_1e1f38:
    if (ctx->pc == 0x1E1F38u) {
        ctx->pc = 0x1E1F38u;
            // 0x1e1f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F3Cu;
        goto label_1e1f3c;
    }
    ctx->pc = 0x1E1F34u;
    SET_GPR_U32(ctx, 31, 0x1E1F3Cu);
    ctx->pc = 0x1E1F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F34u;
            // 0x1e1f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F3Cu; }
        if (ctx->pc != 0x1E1F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F3Cu; }
        if (ctx->pc != 0x1E1F3Cu) { return; }
    }
    ctx->pc = 0x1E1F3Cu;
label_1e1f3c:
    // 0x1e1f3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f40:
    // 0x1e1f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1f44:
    // 0x1e1f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1f48:
    // 0x1e1f48: 0x3e00008  jr          $ra
label_1e1f4c:
    if (ctx->pc == 0x1E1F4Cu) {
        ctx->pc = 0x1E1F4Cu;
            // 0x1e1f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E1F50u;
        goto label_1e1f50;
    }
    ctx->pc = 0x1E1F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F48u;
            // 0x1e1f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1F50u;
label_1e1f50:
    // 0x1e1f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e1f54:
    // 0x1e1f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e1f58:
    // 0x1e1f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1f5c:
    // 0x1e1f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1f60:
    // 0x1e1f60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f64:
    // 0x1e1f64: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1e1f68:
    if (ctx->pc == 0x1E1F68u) {
        ctx->pc = 0x1E1F68u;
            // 0x1e1f68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F6Cu;
        goto label_1e1f6c;
    }
    ctx->pc = 0x1E1F64u;
    {
        const bool branch_taken_0x1e1f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F64u;
            // 0x1e1f68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f64) {
            ctx->pc = 0x1E1FDCu;
            goto label_1e1fdc;
        }
    }
    ctx->pc = 0x1E1F6Cu;
label_1e1f6c:
    // 0x1e1f6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1f70:
    // 0x1e1f70: 0x2442d1d0  addiu       $v0, $v0, -0x2E30
    ctx->pc = 0x1e1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955472));
label_1e1f74:
    // 0x1e1f74: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1e1f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1e1f78:
    // 0x1e1f78: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x1e1f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1e1f7c:
    // 0x1e1f7c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_1e1f80:
    if (ctx->pc == 0x1E1F80u) {
        ctx->pc = 0x1E1F80u;
            // 0x1e1f80: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x1E1F84u;
        goto label_1e1f84;
    }
    ctx->pc = 0x1E1F7Cu;
    {
        const bool branch_taken_0x1e1f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1f7c) {
            ctx->pc = 0x1E1F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F7Cu;
            // 0x1e1f80: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1FA0u;
            goto label_1e1fa0;
        }
    }
    ctx->pc = 0x1E1F84u;
label_1e1f84:
    // 0x1e1f84: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1e1f88:
    if (ctx->pc == 0x1E1F88u) {
        ctx->pc = 0x1E1F8Cu;
        goto label_1e1f8c;
    }
    ctx->pc = 0x1E1F84u;
    {
        const bool branch_taken_0x1e1f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1f84) {
            ctx->pc = 0x1E1F9Cu;
            goto label_1e1f9c;
        }
    }
    ctx->pc = 0x1E1F8Cu;
label_1e1f8c:
    // 0x1e1f8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1f90:
    // 0x1e1f90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e1f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e1f94:
    // 0x1e1f94: 0x320f809  jalr        $t9
label_1e1f98:
    if (ctx->pc == 0x1E1F98u) {
        ctx->pc = 0x1E1F98u;
            // 0x1e1f98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E1F9Cu;
        goto label_1e1f9c;
    }
    ctx->pc = 0x1E1F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1F9Cu);
        ctx->pc = 0x1E1F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F94u;
            // 0x1e1f98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E1F9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F9Cu; }
            if (ctx->pc != 0x1E1F9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E1F9Cu;
label_1e1f9c:
    // 0x1e1f9c: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1e1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_1e1fa0:
    // 0x1e1fa0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_1e1fa4:
    if (ctx->pc == 0x1E1FA4u) {
        ctx->pc = 0x1E1FA4u;
            // 0x1e1fa4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1E1FA8u;
        goto label_1e1fa8;
    }
    ctx->pc = 0x1E1FA0u;
    {
        const bool branch_taken_0x1e1fa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1fa0) {
            ctx->pc = 0x1E1FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FA0u;
            // 0x1e1fa4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1FC8u;
            goto label_1e1fc8;
        }
    }
    ctx->pc = 0x1E1FA8u;
label_1e1fa8:
    // 0x1e1fa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1fac:
    // 0x1e1fac: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x1e1facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_1e1fb0:
    // 0x1e1fb0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e1fb4:
    if (ctx->pc == 0x1E1FB4u) {
        ctx->pc = 0x1E1FB4u;
            // 0x1e1fb4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1E1FB8u;
        goto label_1e1fb8;
    }
    ctx->pc = 0x1E1FB0u;
    {
        const bool branch_taken_0x1e1fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FB0u;
            // 0x1e1fb4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fb0) {
            ctx->pc = 0x1E1FC4u;
            goto label_1e1fc4;
        }
    }
    ctx->pc = 0x1E1FB8u;
label_1e1fb8:
    // 0x1e1fb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1fbc:
    // 0x1e1fbc: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x1e1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_1e1fc0:
    // 0x1e1fc0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1e1fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1e1fc4:
    // 0x1e1fc4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e1fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e1fc8:
    // 0x1e1fc8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1fc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e1fcc:
    // 0x1e1fcc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1e1fd0:
    if (ctx->pc == 0x1E1FD0u) {
        ctx->pc = 0x1E1FD0u;
            // 0x1e1fd0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FD4u;
        goto label_1e1fd4;
    }
    ctx->pc = 0x1E1FCCu;
    {
        const bool branch_taken_0x1e1fcc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e1fcc) {
            ctx->pc = 0x1E1FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FCCu;
            // 0x1e1fd0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1FE0u;
            goto label_1e1fe0;
        }
    }
    ctx->pc = 0x1E1FD4u;
label_1e1fd4:
    // 0x1e1fd4: 0xc0400a8  jal         func_1002A0
label_1e1fd8:
    if (ctx->pc == 0x1E1FD8u) {
        ctx->pc = 0x1E1FD8u;
            // 0x1e1fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FDCu;
        goto label_1e1fdc;
    }
    ctx->pc = 0x1E1FD4u;
    SET_GPR_U32(ctx, 31, 0x1E1FDCu);
    ctx->pc = 0x1E1FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FD4u;
            // 0x1e1fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1FDCu; }
        if (ctx->pc != 0x1E1FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1FDCu; }
        if (ctx->pc != 0x1E1FDCu) { return; }
    }
    ctx->pc = 0x1E1FDCu;
label_1e1fdc:
    // 0x1e1fdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e1fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1fe0:
    // 0x1e1fe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1fe4:
    // 0x1e1fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1fe8:
    // 0x1e1fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1fec:
    // 0x1e1fec: 0x3e00008  jr          $ra
label_1e1ff0:
    if (ctx->pc == 0x1E1FF0u) {
        ctx->pc = 0x1E1FF0u;
            // 0x1e1ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E1FF4u;
        goto label_1e1ff4;
    }
    ctx->pc = 0x1E1FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FECu;
            // 0x1e1ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1FF4u;
label_1e1ff4:
    // 0x1e1ff4: 0x0  nop
    ctx->pc = 0x1e1ff4u;
    // NOP
label_1e1ff8:
    // 0x1e1ff8: 0x0  nop
    ctx->pc = 0x1e1ff8u;
    // NOP
label_1e1ffc:
    // 0x1e1ffc: 0x0  nop
    ctx->pc = 0x1e1ffcu;
    // NOP
label_1e2000:
    // 0x1e2000: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e2000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1e2004:
    // 0x1e2004: 0x3e00008  jr          $ra
label_1e2008:
    if (ctx->pc == 0x1E2008u) {
        ctx->pc = 0x1E2008u;
            // 0x1e2008: 0xc440d3d0  lwc1        $f0, -0x2C30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1E200Cu;
        goto label_1e200c;
    }
    ctx->pc = 0x1E2004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2004u;
            // 0x1e2008: 0xc440d3d0  lwc1        $f0, -0x2C30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E200Cu;
label_1e200c:
    // 0x1e200c: 0x0  nop
    ctx->pc = 0x1e200cu;
    // NOP
label_1e2010:
    // 0x1e2010: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e2010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1e2014:
    // 0x1e2014: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1e2014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2018:
    // 0x1e2018: 0xc440d3d0  lwc1        $f0, -0x2C30($v0)
    ctx->pc = 0x1e2018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e201c:
    // 0x1e201c: 0x3e00008  jr          $ra
label_1e2020:
    if (ctx->pc == 0x1E2020u) {
        ctx->pc = 0x1E2020u;
            // 0x1e2020: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1E2024u;
        goto label_1e2024;
    }
    ctx->pc = 0x1E201Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E201Cu;
            // 0x1e2020: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2024u;
label_1e2024:
    // 0x1e2024: 0x0  nop
    ctx->pc = 0x1e2024u;
    // NOP
label_1e2028:
    // 0x1e2028: 0x0  nop
    ctx->pc = 0x1e2028u;
    // NOP
label_1e202c:
    // 0x1e202c: 0x0  nop
    ctx->pc = 0x1e202cu;
    // NOP
label_1e2030:
    // 0x1e2030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e2034:
    // 0x1e2034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e2038:
    // 0x1e2038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e203c:
    // 0x1e203c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2040:
    // 0x1e2040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2044:
    // 0x1e2044: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_1e2048:
    if (ctx->pc == 0x1E2048u) {
        ctx->pc = 0x1E2048u;
            // 0x1e2048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E204Cu;
        goto label_1e204c;
    }
    ctx->pc = 0x1E2044u;
    {
        const bool branch_taken_0x1e2044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2044u;
            // 0x1e2048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2044) {
            ctx->pc = 0x1E20B4u;
            goto label_1e20b4;
        }
    }
    ctx->pc = 0x1E204Cu;
label_1e204c:
    // 0x1e204c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2050:
    // 0x1e2050: 0x2442d210  addiu       $v0, $v0, -0x2DF0
    ctx->pc = 0x1e2050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955536));
label_1e2054:
    // 0x1e2054: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1e2054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1e2058:
    // 0x1e2058: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x1e2058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1e205c:
    // 0x1e205c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e2060:
    if (ctx->pc == 0x1E2060u) {
        ctx->pc = 0x1E2060u;
            // 0x1e2060: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x1E2064u;
        goto label_1e2064;
    }
    ctx->pc = 0x1E205Cu;
    {
        const bool branch_taken_0x1e205c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e205c) {
            ctx->pc = 0x1E2060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E205Cu;
            // 0x1e2060: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2078u;
            goto label_1e2078;
        }
    }
    ctx->pc = 0x1E2064u;
label_1e2064:
    // 0x1e2064: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e2064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2068:
    // 0x1e2068: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e2068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e206c:
    // 0x1e206c: 0x320f809  jalr        $t9
label_1e2070:
    if (ctx->pc == 0x1E2070u) {
        ctx->pc = 0x1E2070u;
            // 0x1e2070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E2074u;
        goto label_1e2074;
    }
    ctx->pc = 0x1E206Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2074u);
        ctx->pc = 0x1E2070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E206Cu;
            // 0x1e2070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E2074u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E2074u; }
            if (ctx->pc != 0x1E2074u) { return; }
        }
        }
    }
    ctx->pc = 0x1E2074u;
label_1e2074:
    // 0x1e2074: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1e2074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_1e2078:
    // 0x1e2078: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_1e207c:
    if (ctx->pc == 0x1E207Cu) {
        ctx->pc = 0x1E207Cu;
            // 0x1e207c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1E2080u;
        goto label_1e2080;
    }
    ctx->pc = 0x1E2078u;
    {
        const bool branch_taken_0x1e2078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2078) {
            ctx->pc = 0x1E207Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2078u;
            // 0x1e207c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E20A0u;
            goto label_1e20a0;
        }
    }
    ctx->pc = 0x1E2080u;
label_1e2080:
    // 0x1e2080: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2084:
    // 0x1e2084: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x1e2084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_1e2088:
    // 0x1e2088: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e208c:
    if (ctx->pc == 0x1E208Cu) {
        ctx->pc = 0x1E208Cu;
            // 0x1e208c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1E2090u;
        goto label_1e2090;
    }
    ctx->pc = 0x1E2088u;
    {
        const bool branch_taken_0x1e2088 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E208Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2088u;
            // 0x1e208c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2088) {
            ctx->pc = 0x1E209Cu;
            goto label_1e209c;
        }
    }
    ctx->pc = 0x1E2090u;
label_1e2090:
    // 0x1e2090: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2094:
    // 0x1e2094: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x1e2094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_1e2098:
    // 0x1e2098: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1e2098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1e209c:
    // 0x1e209c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e209cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e20a0:
    // 0x1e20a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e20a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e20a4:
    // 0x1e20a4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1e20a8:
    if (ctx->pc == 0x1E20A8u) {
        ctx->pc = 0x1E20A8u;
            // 0x1e20a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E20ACu;
        goto label_1e20ac;
    }
    ctx->pc = 0x1E20A4u;
    {
        const bool branch_taken_0x1e20a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e20a4) {
            ctx->pc = 0x1E20A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E20A4u;
            // 0x1e20a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E20B8u;
            goto label_1e20b8;
        }
    }
    ctx->pc = 0x1E20ACu;
label_1e20ac:
    // 0x1e20ac: 0xc0400a8  jal         func_1002A0
label_1e20b0:
    if (ctx->pc == 0x1E20B0u) {
        ctx->pc = 0x1E20B0u;
            // 0x1e20b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E20B4u;
        goto label_1e20b4;
    }
    ctx->pc = 0x1E20ACu;
    SET_GPR_U32(ctx, 31, 0x1E20B4u);
    ctx->pc = 0x1E20B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E20ACu;
            // 0x1e20b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E20B4u; }
        if (ctx->pc != 0x1E20B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E20B4u; }
        if (ctx->pc != 0x1E20B4u) { return; }
    }
    ctx->pc = 0x1E20B4u;
label_1e20b4:
    // 0x1e20b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e20b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e20b8:
    // 0x1e20b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e20b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e20bc:
    // 0x1e20bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e20bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e20c0:
    // 0x1e20c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e20c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e20c4:
    // 0x1e20c4: 0x3e00008  jr          $ra
label_1e20c8:
    if (ctx->pc == 0x1E20C8u) {
        ctx->pc = 0x1E20C8u;
            // 0x1e20c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E20CCu;
        goto label_1e20cc;
    }
    ctx->pc = 0x1E20C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E20C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E20C4u;
            // 0x1e20c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E20CCu;
label_1e20cc:
    // 0x1e20cc: 0x0  nop
    ctx->pc = 0x1e20ccu;
    // NOP
label_1e20d0:
    // 0x1e20d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1e20d4:
    // 0x1e20d4: 0x3e00008  jr          $ra
label_1e20d8:
    if (ctx->pc == 0x1E20D8u) {
        ctx->pc = 0x1E20D8u;
            // 0x1e20d8: 0xc440d3f8  lwc1        $f0, -0x2C08($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1E20DCu;
        goto label_1e20dc;
    }
    ctx->pc = 0x1E20D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E20D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E20D4u;
            // 0x1e20d8: 0xc440d3f8  lwc1        $f0, -0x2C08($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E20DCu;
label_1e20dc:
    // 0x1e20dc: 0x0  nop
    ctx->pc = 0x1e20dcu;
    // NOP
label_1e20e0:
    // 0x1e20e0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1e20e4:
    // 0x1e20e4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1e20e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e20e8:
    // 0x1e20e8: 0xc440d3f8  lwc1        $f0, -0x2C08($v0)
    ctx->pc = 0x1e20e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e20ec:
    // 0x1e20ec: 0x3e00008  jr          $ra
label_1e20f0:
    if (ctx->pc == 0x1E20F0u) {
        ctx->pc = 0x1E20F0u;
            // 0x1e20f0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1E20F4u;
        goto label_1e20f4;
    }
    ctx->pc = 0x1E20ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E20F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E20ECu;
            // 0x1e20f0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E20F4u;
label_1e20f4:
    // 0x1e20f4: 0x0  nop
    ctx->pc = 0x1e20f4u;
    // NOP
label_1e20f8:
    // 0x1e20f8: 0x0  nop
    ctx->pc = 0x1e20f8u;
    // NOP
label_1e20fc:
    // 0x1e20fc: 0x0  nop
    ctx->pc = 0x1e20fcu;
    // NOP
label_1e2100:
    // 0x1e2100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e2104:
    // 0x1e2104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e2108:
    // 0x1e2108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e210c:
    // 0x1e210c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e210cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2110:
    // 0x1e2110: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2114:
    // 0x1e2114: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_1e2118:
    if (ctx->pc == 0x1E2118u) {
        ctx->pc = 0x1E2118u;
            // 0x1e2118: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E211Cu;
        goto label_1e211c;
    }
    ctx->pc = 0x1E2114u;
    {
        const bool branch_taken_0x1e2114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2114u;
            // 0x1e2118: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2114) {
            ctx->pc = 0x1E2184u;
            goto label_1e2184;
        }
    }
    ctx->pc = 0x1E211Cu;
label_1e211c:
    // 0x1e211c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e211cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2120:
    // 0x1e2120: 0x2442d250  addiu       $v0, $v0, -0x2DB0
    ctx->pc = 0x1e2120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955600));
label_1e2124:
    // 0x1e2124: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1e2124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1e2128:
    // 0x1e2128: 0x8e240150  lw          $a0, 0x150($s1)
    ctx->pc = 0x1e2128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_1e212c:
    // 0x1e212c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e2130:
    if (ctx->pc == 0x1E2130u) {
        ctx->pc = 0x1E2130u;
            // 0x1e2130: 0xae200150  sw          $zero, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 0));
        ctx->pc = 0x1E2134u;
        goto label_1e2134;
    }
    ctx->pc = 0x1E212Cu;
    {
        const bool branch_taken_0x1e212c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e212c) {
            ctx->pc = 0x1E2130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E212Cu;
            // 0x1e2130: 0xae200150  sw          $zero, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2148u;
            goto label_1e2148;
        }
    }
    ctx->pc = 0x1E2134u;
label_1e2134:
    // 0x1e2134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e2134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2138:
    // 0x1e2138: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e2138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e213c:
    // 0x1e213c: 0x320f809  jalr        $t9
label_1e2140:
    if (ctx->pc == 0x1E2140u) {
        ctx->pc = 0x1E2140u;
            // 0x1e2140: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E2144u;
        goto label_1e2144;
    }
    ctx->pc = 0x1E213Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2144u);
        ctx->pc = 0x1E2140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E213Cu;
            // 0x1e2140: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E2144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E2144u; }
            if (ctx->pc != 0x1E2144u) { return; }
        }
        }
    }
    ctx->pc = 0x1E2144u;
label_1e2144:
    // 0x1e2144: 0xae200150  sw          $zero, 0x150($s1)
    ctx->pc = 0x1e2144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 0));
label_1e2148:
    // 0x1e2148: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_1e214c:
    if (ctx->pc == 0x1E214Cu) {
        ctx->pc = 0x1E214Cu;
            // 0x1e214c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1E2150u;
        goto label_1e2150;
    }
    ctx->pc = 0x1E2148u;
    {
        const bool branch_taken_0x1e2148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2148) {
            ctx->pc = 0x1E214Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2148u;
            // 0x1e214c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2170u;
            goto label_1e2170;
        }
    }
    ctx->pc = 0x1E2150u;
label_1e2150:
    // 0x1e2150: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2154:
    // 0x1e2154: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x1e2154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_1e2158:
    // 0x1e2158: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e215c:
    if (ctx->pc == 0x1E215Cu) {
        ctx->pc = 0x1E215Cu;
            // 0x1e215c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1E2160u;
        goto label_1e2160;
    }
    ctx->pc = 0x1E2158u;
    {
        const bool branch_taken_0x1e2158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E215Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2158u;
            // 0x1e215c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2158) {
            ctx->pc = 0x1E216Cu;
            goto label_1e216c;
        }
    }
    ctx->pc = 0x1E2160u;
label_1e2160:
    // 0x1e2160: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2164:
    // 0x1e2164: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x1e2164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_1e2168:
    // 0x1e2168: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1e2168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1e216c:
    // 0x1e216c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e2170:
    // 0x1e2170: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e2174:
    // 0x1e2174: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1e2178:
    if (ctx->pc == 0x1E2178u) {
        ctx->pc = 0x1E2178u;
            // 0x1e2178: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E217Cu;
        goto label_1e217c;
    }
    ctx->pc = 0x1E2174u;
    {
        const bool branch_taken_0x1e2174 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e2174) {
            ctx->pc = 0x1E2178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2174u;
            // 0x1e2178: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2188u;
            goto label_1e2188;
        }
    }
    ctx->pc = 0x1E217Cu;
label_1e217c:
    // 0x1e217c: 0xc0400a8  jal         func_1002A0
label_1e2180:
    if (ctx->pc == 0x1E2180u) {
        ctx->pc = 0x1E2180u;
            // 0x1e2180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E2184u;
        goto label_1e2184;
    }
    ctx->pc = 0x1E217Cu;
    SET_GPR_U32(ctx, 31, 0x1E2184u);
    ctx->pc = 0x1E2180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E217Cu;
            // 0x1e2180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2184u; }
        if (ctx->pc != 0x1E2184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2184u; }
        if (ctx->pc != 0x1E2184u) { return; }
    }
    ctx->pc = 0x1E2184u;
label_1e2184:
    // 0x1e2184: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e2184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2188:
    // 0x1e2188: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e218c:
    // 0x1e218c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e218cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2190:
    // 0x1e2190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2194:
    // 0x1e2194: 0x3e00008  jr          $ra
label_1e2198:
    if (ctx->pc == 0x1E2198u) {
        ctx->pc = 0x1E2198u;
            // 0x1e2198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E219Cu;
        goto label_1e219c;
    }
    ctx->pc = 0x1E2194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2194u;
            // 0x1e2198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E219Cu;
label_1e219c:
    // 0x1e219c: 0x0  nop
    ctx->pc = 0x1e219cu;
    // NOP
label_1e21a0:
    // 0x1e21a0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1e21a4:
    // 0x1e21a4: 0x3e00008  jr          $ra
label_1e21a8:
    if (ctx->pc == 0x1E21A8u) {
        ctx->pc = 0x1E21A8u;
            // 0x1e21a8: 0xc440ba20  lwc1        $f0, -0x45E0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1E21ACu;
        goto label_1e21ac;
    }
    ctx->pc = 0x1E21A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E21A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E21A4u;
            // 0x1e21a8: 0xc440ba20  lwc1        $f0, -0x45E0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E21ACu;
label_1e21ac:
    // 0x1e21ac: 0x0  nop
    ctx->pc = 0x1e21acu;
    // NOP
label_1e21b0:
    // 0x1e21b0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e21b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1e21b4:
    // 0x1e21b4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1e21b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e21b8:
    // 0x1e21b8: 0xc440ba20  lwc1        $f0, -0x45E0($v0)
    ctx->pc = 0x1e21b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e21bc:
    // 0x1e21bc: 0x3e00008  jr          $ra
label_1e21c0:
    if (ctx->pc == 0x1E21C0u) {
        ctx->pc = 0x1E21C0u;
            // 0x1e21c0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1E21C4u;
        goto label_1e21c4;
    }
    ctx->pc = 0x1E21BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E21C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E21BCu;
            // 0x1e21c0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E21C4u;
label_1e21c4:
    // 0x1e21c4: 0x0  nop
    ctx->pc = 0x1e21c4u;
    // NOP
label_1e21c8:
    // 0x1e21c8: 0x0  nop
    ctx->pc = 0x1e21c8u;
    // NOP
label_1e21cc:
    // 0x1e21cc: 0x0  nop
    ctx->pc = 0x1e21ccu;
    // NOP
label_1e21d0:
    // 0x1e21d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e21d4:
    // 0x1e21d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e21d8:
    // 0x1e21d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e21d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e21dc:
    // 0x1e21dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e21dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e21e0:
    // 0x1e21e0: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_1e21e4:
    if (ctx->pc == 0x1E21E4u) {
        ctx->pc = 0x1E21E4u;
            // 0x1e21e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E21E8u;
        goto label_1e21e8;
    }
    ctx->pc = 0x1E21E0u;
    {
        const bool branch_taken_0x1e21e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e21e0) {
            ctx->pc = 0x1E21E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E21E0u;
            // 0x1e21e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2230u;
            goto label_1e2230;
        }
    }
    ctx->pc = 0x1E21E8u;
label_1e21e8:
    // 0x1e21e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e21ec:
    // 0x1e21ec: 0x2442d290  addiu       $v0, $v0, -0x2D70
    ctx->pc = 0x1e21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955664));
label_1e21f0:
    // 0x1e21f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1e21f4:
    if (ctx->pc == 0x1E21F4u) {
        ctx->pc = 0x1E21F4u;
            // 0x1e21f4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1E21F8u;
        goto label_1e21f8;
    }
    ctx->pc = 0x1E21F0u;
    {
        const bool branch_taken_0x1e21f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E21F0u;
            // 0x1e21f4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21f0) {
            ctx->pc = 0x1E2214u;
            goto label_1e2214;
        }
    }
    ctx->pc = 0x1E21F8u;
label_1e21f8:
    // 0x1e21f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e21fc:
    // 0x1e21fc: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x1e21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_1e2200:
    // 0x1e2200: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1e2204:
    if (ctx->pc == 0x1E2204u) {
        ctx->pc = 0x1E2204u;
            // 0x1e2204: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1E2208u;
        goto label_1e2208;
    }
    ctx->pc = 0x1E2200u;
    {
        const bool branch_taken_0x1e2200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2200u;
            // 0x1e2204: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2200) {
            ctx->pc = 0x1E2214u;
            goto label_1e2214;
        }
    }
    ctx->pc = 0x1E2208u;
label_1e2208:
    // 0x1e2208: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e220c:
    // 0x1e220c: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x1e220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_1e2210:
    // 0x1e2210: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1e2210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1e2214:
    // 0x1e2214: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e2214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e2218:
    // 0x1e2218: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2218u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e221c:
    // 0x1e221c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1e2220:
    if (ctx->pc == 0x1E2220u) {
        ctx->pc = 0x1E2224u;
        goto label_1e2224;
    }
    ctx->pc = 0x1E221Cu;
    {
        const bool branch_taken_0x1e221c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e221c) {
            ctx->pc = 0x1E222Cu;
            goto label_1e222c;
        }
    }
    ctx->pc = 0x1E2224u;
label_1e2224:
    // 0x1e2224: 0xc0400a8  jal         func_1002A0
label_1e2228:
    if (ctx->pc == 0x1E2228u) {
        ctx->pc = 0x1E2228u;
            // 0x1e2228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E222Cu;
        goto label_1e222c;
    }
    ctx->pc = 0x1E2224u;
    SET_GPR_U32(ctx, 31, 0x1E222Cu);
    ctx->pc = 0x1E2228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2224u;
            // 0x1e2228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E222Cu; }
        if (ctx->pc != 0x1E222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E222Cu; }
        if (ctx->pc != 0x1E222Cu) { return; }
    }
    ctx->pc = 0x1E222Cu;
label_1e222c:
    // 0x1e222c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e222cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2230:
    // 0x1e2230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2234:
    // 0x1e2234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2238:
    // 0x1e2238: 0x3e00008  jr          $ra
label_1e223c:
    if (ctx->pc == 0x1E223Cu) {
        ctx->pc = 0x1E223Cu;
            // 0x1e223c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E2240u;
        goto label_1e2240;
    }
    ctx->pc = 0x1E2238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2238u;
            // 0x1e223c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2240u;
label_1e2240:
    // 0x1e2240: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x1e2240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_1e2244:
    // 0x1e2244: 0x3e00008  jr          $ra
label_1e2248:
    if (ctx->pc == 0x1E2248u) {
        ctx->pc = 0x1E2248u;
            // 0x1e2248: 0xc440bcc8  lwc1        $f0, -0x4338($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1E224Cu;
        goto label_1e224c;
    }
    ctx->pc = 0x1E2244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2244u;
            // 0x1e2248: 0xc440bcc8  lwc1        $f0, -0x4338($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E224Cu;
label_1e224c:
    // 0x1e224c: 0x0  nop
    ctx->pc = 0x1e224cu;
    // NOP
label_1e2250:
    // 0x1e2250: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x1e2250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_1e2254:
    // 0x1e2254: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1e2254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2258:
    // 0x1e2258: 0xc440bcc8  lwc1        $f0, -0x4338($v0)
    ctx->pc = 0x1e2258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e225c:
    // 0x1e225c: 0x3e00008  jr          $ra
label_1e2260:
    if (ctx->pc == 0x1E2260u) {
        ctx->pc = 0x1E2260u;
            // 0x1e2260: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1E2264u;
        goto label_1e2264;
    }
    ctx->pc = 0x1E225Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E225Cu;
            // 0x1e2260: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2264u;
label_1e2264:
    // 0x1e2264: 0x0  nop
    ctx->pc = 0x1e2264u;
    // NOP
label_1e2268:
    // 0x1e2268: 0x0  nop
    ctx->pc = 0x1e2268u;
    // NOP
label_1e226c:
    // 0x1e226c: 0x0  nop
    ctx->pc = 0x1e226cu;
    // NOP
label_1e2270:
    // 0x1e2270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e2274:
    // 0x1e2274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e2278:
    // 0x1e2278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e227c:
    // 0x1e227c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e227cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2280:
    // 0x1e2280: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_1e2284:
    if (ctx->pc == 0x1E2284u) {
        ctx->pc = 0x1E2284u;
            // 0x1e2284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E2288u;
        goto label_1e2288;
    }
    ctx->pc = 0x1E2280u;
    {
        const bool branch_taken_0x1e2280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2280) {
            ctx->pc = 0x1E2284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2280u;
            // 0x1e2284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E22D0u;
            goto label_1e22d0;
        }
    }
    ctx->pc = 0x1E2288u;
label_1e2288:
    // 0x1e2288: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e228c:
    // 0x1e228c: 0x2442d2d0  addiu       $v0, $v0, -0x2D30
    ctx->pc = 0x1e228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955728));
label_1e2290:
    // 0x1e2290: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1e2294:
    if (ctx->pc == 0x1E2294u) {
        ctx->pc = 0x1E2294u;
            // 0x1e2294: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1E2298u;
        goto label_1e2298;
    }
    ctx->pc = 0x1E2290u;
    {
        const bool branch_taken_0x1e2290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2290u;
            // 0x1e2294: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2290) {
            ctx->pc = 0x1E22B4u;
            goto label_1e22b4;
        }
    }
    ctx->pc = 0x1E2298u;
label_1e2298:
    // 0x1e2298: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e229c:
    // 0x1e229c: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x1e229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_1e22a0:
    // 0x1e22a0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1e22a4:
    if (ctx->pc == 0x1E22A4u) {
        ctx->pc = 0x1E22A4u;
            // 0x1e22a4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1E22A8u;
        goto label_1e22a8;
    }
    ctx->pc = 0x1E22A0u;
    {
        const bool branch_taken_0x1e22a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E22A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22A0u;
            // 0x1e22a4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22a0) {
            ctx->pc = 0x1E22B4u;
            goto label_1e22b4;
        }
    }
    ctx->pc = 0x1E22A8u;
label_1e22a8:
    // 0x1e22a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e22ac:
    // 0x1e22ac: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x1e22acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_1e22b0:
    // 0x1e22b0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1e22b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1e22b4:
    // 0x1e22b4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e22b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e22b8:
    // 0x1e22b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e22b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e22bc:
    // 0x1e22bc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1e22c0:
    if (ctx->pc == 0x1E22C0u) {
        ctx->pc = 0x1E22C4u;
        goto label_1e22c4;
    }
    ctx->pc = 0x1E22BCu;
    {
        const bool branch_taken_0x1e22bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e22bc) {
            ctx->pc = 0x1E22CCu;
            goto label_1e22cc;
        }
    }
    ctx->pc = 0x1E22C4u;
label_1e22c4:
    // 0x1e22c4: 0xc0400a8  jal         func_1002A0
label_1e22c8:
    if (ctx->pc == 0x1E22C8u) {
        ctx->pc = 0x1E22C8u;
            // 0x1e22c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E22CCu;
        goto label_1e22cc;
    }
    ctx->pc = 0x1E22C4u;
    SET_GPR_U32(ctx, 31, 0x1E22CCu);
    ctx->pc = 0x1E22C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22C4u;
            // 0x1e22c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22CCu; }
        if (ctx->pc != 0x1E22CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22CCu; }
        if (ctx->pc != 0x1E22CCu) { return; }
    }
    ctx->pc = 0x1E22CCu;
label_1e22cc:
    // 0x1e22cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e22ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e22d0:
    // 0x1e22d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e22d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e22d4:
    // 0x1e22d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e22d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e22d8:
    // 0x1e22d8: 0x3e00008  jr          $ra
label_1e22dc:
    if (ctx->pc == 0x1E22DCu) {
        ctx->pc = 0x1E22DCu;
            // 0x1e22dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E22E0u;
        goto label_1e22e0;
    }
    ctx->pc = 0x1E22D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E22DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22D8u;
            // 0x1e22dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E22E0u;
label_1e22e0:
    // 0x1e22e0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x1e22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_1e22e4:
    // 0x1e22e4: 0x3e00008  jr          $ra
label_1e22e8:
    if (ctx->pc == 0x1E22E8u) {
        ctx->pc = 0x1E22E8u;
            // 0x1e22e8: 0xc440bc28  lwc1        $f0, -0x43D8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1E22ECu;
        goto label_1e22ec;
    }
    ctx->pc = 0x1E22E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E22E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22E4u;
            // 0x1e22e8: 0xc440bc28  lwc1        $f0, -0x43D8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E22ECu;
label_1e22ec:
    // 0x1e22ec: 0x0  nop
    ctx->pc = 0x1e22ecu;
    // NOP
label_1e22f0:
    // 0x1e22f0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x1e22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_1e22f4:
    // 0x1e22f4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1e22f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e22f8:
    // 0x1e22f8: 0xc440bc28  lwc1        $f0, -0x43D8($v0)
    ctx->pc = 0x1e22f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e22fc:
    // 0x1e22fc: 0x3e00008  jr          $ra
label_1e2300:
    if (ctx->pc == 0x1E2300u) {
        ctx->pc = 0x1E2300u;
            // 0x1e2300: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1E2304u;
        goto label_1e2304;
    }
    ctx->pc = 0x1E22FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E22FCu;
            // 0x1e2300: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2304u;
label_1e2304:
    // 0x1e2304: 0x0  nop
    ctx->pc = 0x1e2304u;
    // NOP
label_1e2308:
    // 0x1e2308: 0x0  nop
    ctx->pc = 0x1e2308u;
    // NOP
label_1e230c:
    // 0x1e230c: 0x0  nop
    ctx->pc = 0x1e230cu;
    // NOP
label_1e2310:
    // 0x1e2310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e2314:
    // 0x1e2314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e2318:
    // 0x1e2318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e231c:
    // 0x1e231c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2320:
    // 0x1e2320: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2324:
    // 0x1e2324: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1e2328:
    if (ctx->pc == 0x1E2328u) {
        ctx->pc = 0x1E2328u;
            // 0x1e2328: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E232Cu;
        goto label_1e232c;
    }
    ctx->pc = 0x1E2324u;
    {
        const bool branch_taken_0x1e2324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2324u;
            // 0x1e2328: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2324) {
            ctx->pc = 0x1E239Cu;
            goto label_1e239c;
        }
    }
    ctx->pc = 0x1E232Cu;
label_1e232c:
    // 0x1e232c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e232cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2330:
    // 0x1e2330: 0x2442d310  addiu       $v0, $v0, -0x2CF0
    ctx->pc = 0x1e2330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
label_1e2334:
    // 0x1e2334: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1e2334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1e2338:
    // 0x1e2338: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x1e2338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_1e233c:
    // 0x1e233c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_1e2340:
    if (ctx->pc == 0x1E2340u) {
        ctx->pc = 0x1E2340u;
            // 0x1e2340: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x1E2344u;
        goto label_1e2344;
    }
    ctx->pc = 0x1E233Cu;
    {
        const bool branch_taken_0x1e233c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e233c) {
            ctx->pc = 0x1E2340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E233Cu;
            // 0x1e2340: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2360u;
            goto label_1e2360;
        }
    }
    ctx->pc = 0x1E2344u;
label_1e2344:
    // 0x1e2344: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1e2348:
    if (ctx->pc == 0x1E2348u) {
        ctx->pc = 0x1E234Cu;
        goto label_1e234c;
    }
    ctx->pc = 0x1E2344u;
    {
        const bool branch_taken_0x1e2344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2344) {
            ctx->pc = 0x1E235Cu;
            goto label_1e235c;
        }
    }
    ctx->pc = 0x1E234Cu;
label_1e234c:
    // 0x1e234c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e234cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2350:
    // 0x1e2350: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e2350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e2354:
    // 0x1e2354: 0x320f809  jalr        $t9
label_1e2358:
    if (ctx->pc == 0x1E2358u) {
        ctx->pc = 0x1E2358u;
            // 0x1e2358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E235Cu;
        goto label_1e235c;
    }
    ctx->pc = 0x1E2354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E235Cu);
        ctx->pc = 0x1E2358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2354u;
            // 0x1e2358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E235Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E235Cu; }
            if (ctx->pc != 0x1E235Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E235Cu;
label_1e235c:
    // 0x1e235c: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x1e235cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_1e2360:
    // 0x1e2360: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_1e2364:
    if (ctx->pc == 0x1E2364u) {
        ctx->pc = 0x1E2364u;
            // 0x1e2364: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1E2368u;
        goto label_1e2368;
    }
    ctx->pc = 0x1E2360u;
    {
        const bool branch_taken_0x1e2360 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2360) {
            ctx->pc = 0x1E2364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2360u;
            // 0x1e2364: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2388u;
            goto label_1e2388;
        }
    }
    ctx->pc = 0x1E2368u;
label_1e2368:
    // 0x1e2368: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e236c:
    // 0x1e236c: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x1e236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_1e2370:
    // 0x1e2370: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e2374:
    if (ctx->pc == 0x1E2374u) {
        ctx->pc = 0x1E2374u;
            // 0x1e2374: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1E2378u;
        goto label_1e2378;
    }
    ctx->pc = 0x1E2370u;
    {
        const bool branch_taken_0x1e2370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2370u;
            // 0x1e2374: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2370) {
            ctx->pc = 0x1E2384u;
            goto label_1e2384;
        }
    }
    ctx->pc = 0x1E2378u;
label_1e2378:
    // 0x1e2378: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e237c:
    // 0x1e237c: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x1e237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_1e2380:
    // 0x1e2380: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1e2380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1e2384:
    // 0x1e2384: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e2384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e2388:
    // 0x1e2388: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2388u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e238c:
    // 0x1e238c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1e2390:
    if (ctx->pc == 0x1E2390u) {
        ctx->pc = 0x1E2390u;
            // 0x1e2390: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E2394u;
        goto label_1e2394;
    }
    ctx->pc = 0x1E238Cu;
    {
        const bool branch_taken_0x1e238c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e238c) {
            ctx->pc = 0x1E2390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E238Cu;
            // 0x1e2390: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E23A0u;
            goto label_1e23a0;
        }
    }
    ctx->pc = 0x1E2394u;
label_1e2394:
    // 0x1e2394: 0xc0400a8  jal         func_1002A0
label_1e2398:
    if (ctx->pc == 0x1E2398u) {
        ctx->pc = 0x1E2398u;
            // 0x1e2398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E239Cu;
        goto label_1e239c;
    }
    ctx->pc = 0x1E2394u;
    SET_GPR_U32(ctx, 31, 0x1E239Cu);
    ctx->pc = 0x1E2398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2394u;
            // 0x1e2398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E239Cu; }
        if (ctx->pc != 0x1E239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E239Cu; }
        if (ctx->pc != 0x1E239Cu) { return; }
    }
    ctx->pc = 0x1E239Cu;
label_1e239c:
    // 0x1e239c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e239cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e23a0:
    // 0x1e23a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e23a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e23a4:
    // 0x1e23a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e23a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e23a8:
    // 0x1e23a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e23a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e23ac:
    // 0x1e23ac: 0x3e00008  jr          $ra
label_1e23b0:
    if (ctx->pc == 0x1E23B0u) {
        ctx->pc = 0x1E23B0u;
            // 0x1e23b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E23B4u;
        goto label_1e23b4;
    }
    ctx->pc = 0x1E23ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E23B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E23ACu;
            // 0x1e23b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E23B4u;
label_1e23b4:
    // 0x1e23b4: 0x0  nop
    ctx->pc = 0x1e23b4u;
    // NOP
label_1e23b8:
    // 0x1e23b8: 0x0  nop
    ctx->pc = 0x1e23b8u;
    // NOP
label_1e23bc:
    // 0x1e23bc: 0x0  nop
    ctx->pc = 0x1e23bcu;
    // NOP
label_1e23c0:
    // 0x1e23c0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x1e23c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_1e23c4:
    // 0x1e23c4: 0x3e00008  jr          $ra
label_1e23c8:
    if (ctx->pc == 0x1E23C8u) {
        ctx->pc = 0x1E23C8u;
            // 0x1e23c8: 0xc440bd68  lwc1        $f0, -0x4298($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1E23CCu;
        goto label_1e23cc;
    }
    ctx->pc = 0x1E23C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E23C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E23C4u;
            // 0x1e23c8: 0xc440bd68  lwc1        $f0, -0x4298($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E23CCu;
label_1e23cc:
    // 0x1e23cc: 0x0  nop
    ctx->pc = 0x1e23ccu;
    // NOP
label_1e23d0:
    // 0x1e23d0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x1e23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_1e23d4:
    // 0x1e23d4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1e23d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e23d8:
    // 0x1e23d8: 0xc440bd68  lwc1        $f0, -0x4298($v0)
    ctx->pc = 0x1e23d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e23dc:
    // 0x1e23dc: 0x3e00008  jr          $ra
label_1e23e0:
    if (ctx->pc == 0x1E23E0u) {
        ctx->pc = 0x1E23E0u;
            // 0x1e23e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1E23E4u;
        goto label_1e23e4;
    }
    ctx->pc = 0x1E23DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E23E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E23DCu;
            // 0x1e23e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E23E4u;
label_1e23e4:
    // 0x1e23e4: 0x0  nop
    ctx->pc = 0x1e23e4u;
    // NOP
label_1e23e8:
    // 0x1e23e8: 0x0  nop
    ctx->pc = 0x1e23e8u;
    // NOP
label_1e23ec:
    // 0x1e23ec: 0x0  nop
    ctx->pc = 0x1e23ecu;
    // NOP
}
