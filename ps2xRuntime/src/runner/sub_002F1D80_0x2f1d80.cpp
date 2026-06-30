#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1D80
// Address: 0x2f1d80 - 0x2f22d0
void sub_002F1D80_0x2f1d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1D80_0x2f1d80");
#endif

    switch (ctx->pc) {
        case 0x2f1d80u: goto label_2f1d80;
        case 0x2f1d84u: goto label_2f1d84;
        case 0x2f1d88u: goto label_2f1d88;
        case 0x2f1d8cu: goto label_2f1d8c;
        case 0x2f1d90u: goto label_2f1d90;
        case 0x2f1d94u: goto label_2f1d94;
        case 0x2f1d98u: goto label_2f1d98;
        case 0x2f1d9cu: goto label_2f1d9c;
        case 0x2f1da0u: goto label_2f1da0;
        case 0x2f1da4u: goto label_2f1da4;
        case 0x2f1da8u: goto label_2f1da8;
        case 0x2f1dacu: goto label_2f1dac;
        case 0x2f1db0u: goto label_2f1db0;
        case 0x2f1db4u: goto label_2f1db4;
        case 0x2f1db8u: goto label_2f1db8;
        case 0x2f1dbcu: goto label_2f1dbc;
        case 0x2f1dc0u: goto label_2f1dc0;
        case 0x2f1dc4u: goto label_2f1dc4;
        case 0x2f1dc8u: goto label_2f1dc8;
        case 0x2f1dccu: goto label_2f1dcc;
        case 0x2f1dd0u: goto label_2f1dd0;
        case 0x2f1dd4u: goto label_2f1dd4;
        case 0x2f1dd8u: goto label_2f1dd8;
        case 0x2f1ddcu: goto label_2f1ddc;
        case 0x2f1de0u: goto label_2f1de0;
        case 0x2f1de4u: goto label_2f1de4;
        case 0x2f1de8u: goto label_2f1de8;
        case 0x2f1decu: goto label_2f1dec;
        case 0x2f1df0u: goto label_2f1df0;
        case 0x2f1df4u: goto label_2f1df4;
        case 0x2f1df8u: goto label_2f1df8;
        case 0x2f1dfcu: goto label_2f1dfc;
        case 0x2f1e00u: goto label_2f1e00;
        case 0x2f1e04u: goto label_2f1e04;
        case 0x2f1e08u: goto label_2f1e08;
        case 0x2f1e0cu: goto label_2f1e0c;
        case 0x2f1e10u: goto label_2f1e10;
        case 0x2f1e14u: goto label_2f1e14;
        case 0x2f1e18u: goto label_2f1e18;
        case 0x2f1e1cu: goto label_2f1e1c;
        case 0x2f1e20u: goto label_2f1e20;
        case 0x2f1e24u: goto label_2f1e24;
        case 0x2f1e28u: goto label_2f1e28;
        case 0x2f1e2cu: goto label_2f1e2c;
        case 0x2f1e30u: goto label_2f1e30;
        case 0x2f1e34u: goto label_2f1e34;
        case 0x2f1e38u: goto label_2f1e38;
        case 0x2f1e3cu: goto label_2f1e3c;
        case 0x2f1e40u: goto label_2f1e40;
        case 0x2f1e44u: goto label_2f1e44;
        case 0x2f1e48u: goto label_2f1e48;
        case 0x2f1e4cu: goto label_2f1e4c;
        case 0x2f1e50u: goto label_2f1e50;
        case 0x2f1e54u: goto label_2f1e54;
        case 0x2f1e58u: goto label_2f1e58;
        case 0x2f1e5cu: goto label_2f1e5c;
        case 0x2f1e60u: goto label_2f1e60;
        case 0x2f1e64u: goto label_2f1e64;
        case 0x2f1e68u: goto label_2f1e68;
        case 0x2f1e6cu: goto label_2f1e6c;
        case 0x2f1e70u: goto label_2f1e70;
        case 0x2f1e74u: goto label_2f1e74;
        case 0x2f1e78u: goto label_2f1e78;
        case 0x2f1e7cu: goto label_2f1e7c;
        case 0x2f1e80u: goto label_2f1e80;
        case 0x2f1e84u: goto label_2f1e84;
        case 0x2f1e88u: goto label_2f1e88;
        case 0x2f1e8cu: goto label_2f1e8c;
        case 0x2f1e90u: goto label_2f1e90;
        case 0x2f1e94u: goto label_2f1e94;
        case 0x2f1e98u: goto label_2f1e98;
        case 0x2f1e9cu: goto label_2f1e9c;
        case 0x2f1ea0u: goto label_2f1ea0;
        case 0x2f1ea4u: goto label_2f1ea4;
        case 0x2f1ea8u: goto label_2f1ea8;
        case 0x2f1eacu: goto label_2f1eac;
        case 0x2f1eb0u: goto label_2f1eb0;
        case 0x2f1eb4u: goto label_2f1eb4;
        case 0x2f1eb8u: goto label_2f1eb8;
        case 0x2f1ebcu: goto label_2f1ebc;
        case 0x2f1ec0u: goto label_2f1ec0;
        case 0x2f1ec4u: goto label_2f1ec4;
        case 0x2f1ec8u: goto label_2f1ec8;
        case 0x2f1eccu: goto label_2f1ecc;
        case 0x2f1ed0u: goto label_2f1ed0;
        case 0x2f1ed4u: goto label_2f1ed4;
        case 0x2f1ed8u: goto label_2f1ed8;
        case 0x2f1edcu: goto label_2f1edc;
        case 0x2f1ee0u: goto label_2f1ee0;
        case 0x2f1ee4u: goto label_2f1ee4;
        case 0x2f1ee8u: goto label_2f1ee8;
        case 0x2f1eecu: goto label_2f1eec;
        case 0x2f1ef0u: goto label_2f1ef0;
        case 0x2f1ef4u: goto label_2f1ef4;
        case 0x2f1ef8u: goto label_2f1ef8;
        case 0x2f1efcu: goto label_2f1efc;
        case 0x2f1f00u: goto label_2f1f00;
        case 0x2f1f04u: goto label_2f1f04;
        case 0x2f1f08u: goto label_2f1f08;
        case 0x2f1f0cu: goto label_2f1f0c;
        case 0x2f1f10u: goto label_2f1f10;
        case 0x2f1f14u: goto label_2f1f14;
        case 0x2f1f18u: goto label_2f1f18;
        case 0x2f1f1cu: goto label_2f1f1c;
        case 0x2f1f20u: goto label_2f1f20;
        case 0x2f1f24u: goto label_2f1f24;
        case 0x2f1f28u: goto label_2f1f28;
        case 0x2f1f2cu: goto label_2f1f2c;
        case 0x2f1f30u: goto label_2f1f30;
        case 0x2f1f34u: goto label_2f1f34;
        case 0x2f1f38u: goto label_2f1f38;
        case 0x2f1f3cu: goto label_2f1f3c;
        case 0x2f1f40u: goto label_2f1f40;
        case 0x2f1f44u: goto label_2f1f44;
        case 0x2f1f48u: goto label_2f1f48;
        case 0x2f1f4cu: goto label_2f1f4c;
        case 0x2f1f50u: goto label_2f1f50;
        case 0x2f1f54u: goto label_2f1f54;
        case 0x2f1f58u: goto label_2f1f58;
        case 0x2f1f5cu: goto label_2f1f5c;
        case 0x2f1f60u: goto label_2f1f60;
        case 0x2f1f64u: goto label_2f1f64;
        case 0x2f1f68u: goto label_2f1f68;
        case 0x2f1f6cu: goto label_2f1f6c;
        case 0x2f1f70u: goto label_2f1f70;
        case 0x2f1f74u: goto label_2f1f74;
        case 0x2f1f78u: goto label_2f1f78;
        case 0x2f1f7cu: goto label_2f1f7c;
        case 0x2f1f80u: goto label_2f1f80;
        case 0x2f1f84u: goto label_2f1f84;
        case 0x2f1f88u: goto label_2f1f88;
        case 0x2f1f8cu: goto label_2f1f8c;
        case 0x2f1f90u: goto label_2f1f90;
        case 0x2f1f94u: goto label_2f1f94;
        case 0x2f1f98u: goto label_2f1f98;
        case 0x2f1f9cu: goto label_2f1f9c;
        case 0x2f1fa0u: goto label_2f1fa0;
        case 0x2f1fa4u: goto label_2f1fa4;
        case 0x2f1fa8u: goto label_2f1fa8;
        case 0x2f1facu: goto label_2f1fac;
        case 0x2f1fb0u: goto label_2f1fb0;
        case 0x2f1fb4u: goto label_2f1fb4;
        case 0x2f1fb8u: goto label_2f1fb8;
        case 0x2f1fbcu: goto label_2f1fbc;
        case 0x2f1fc0u: goto label_2f1fc0;
        case 0x2f1fc4u: goto label_2f1fc4;
        case 0x2f1fc8u: goto label_2f1fc8;
        case 0x2f1fccu: goto label_2f1fcc;
        case 0x2f1fd0u: goto label_2f1fd0;
        case 0x2f1fd4u: goto label_2f1fd4;
        case 0x2f1fd8u: goto label_2f1fd8;
        case 0x2f1fdcu: goto label_2f1fdc;
        case 0x2f1fe0u: goto label_2f1fe0;
        case 0x2f1fe4u: goto label_2f1fe4;
        case 0x2f1fe8u: goto label_2f1fe8;
        case 0x2f1fecu: goto label_2f1fec;
        case 0x2f1ff0u: goto label_2f1ff0;
        case 0x2f1ff4u: goto label_2f1ff4;
        case 0x2f1ff8u: goto label_2f1ff8;
        case 0x2f1ffcu: goto label_2f1ffc;
        case 0x2f2000u: goto label_2f2000;
        case 0x2f2004u: goto label_2f2004;
        case 0x2f2008u: goto label_2f2008;
        case 0x2f200cu: goto label_2f200c;
        case 0x2f2010u: goto label_2f2010;
        case 0x2f2014u: goto label_2f2014;
        case 0x2f2018u: goto label_2f2018;
        case 0x2f201cu: goto label_2f201c;
        case 0x2f2020u: goto label_2f2020;
        case 0x2f2024u: goto label_2f2024;
        case 0x2f2028u: goto label_2f2028;
        case 0x2f202cu: goto label_2f202c;
        case 0x2f2030u: goto label_2f2030;
        case 0x2f2034u: goto label_2f2034;
        case 0x2f2038u: goto label_2f2038;
        case 0x2f203cu: goto label_2f203c;
        case 0x2f2040u: goto label_2f2040;
        case 0x2f2044u: goto label_2f2044;
        case 0x2f2048u: goto label_2f2048;
        case 0x2f204cu: goto label_2f204c;
        case 0x2f2050u: goto label_2f2050;
        case 0x2f2054u: goto label_2f2054;
        case 0x2f2058u: goto label_2f2058;
        case 0x2f205cu: goto label_2f205c;
        case 0x2f2060u: goto label_2f2060;
        case 0x2f2064u: goto label_2f2064;
        case 0x2f2068u: goto label_2f2068;
        case 0x2f206cu: goto label_2f206c;
        case 0x2f2070u: goto label_2f2070;
        case 0x2f2074u: goto label_2f2074;
        case 0x2f2078u: goto label_2f2078;
        case 0x2f207cu: goto label_2f207c;
        case 0x2f2080u: goto label_2f2080;
        case 0x2f2084u: goto label_2f2084;
        case 0x2f2088u: goto label_2f2088;
        case 0x2f208cu: goto label_2f208c;
        case 0x2f2090u: goto label_2f2090;
        case 0x2f2094u: goto label_2f2094;
        case 0x2f2098u: goto label_2f2098;
        case 0x2f209cu: goto label_2f209c;
        case 0x2f20a0u: goto label_2f20a0;
        case 0x2f20a4u: goto label_2f20a4;
        case 0x2f20a8u: goto label_2f20a8;
        case 0x2f20acu: goto label_2f20ac;
        case 0x2f20b0u: goto label_2f20b0;
        case 0x2f20b4u: goto label_2f20b4;
        case 0x2f20b8u: goto label_2f20b8;
        case 0x2f20bcu: goto label_2f20bc;
        case 0x2f20c0u: goto label_2f20c0;
        case 0x2f20c4u: goto label_2f20c4;
        case 0x2f20c8u: goto label_2f20c8;
        case 0x2f20ccu: goto label_2f20cc;
        case 0x2f20d0u: goto label_2f20d0;
        case 0x2f20d4u: goto label_2f20d4;
        case 0x2f20d8u: goto label_2f20d8;
        case 0x2f20dcu: goto label_2f20dc;
        case 0x2f20e0u: goto label_2f20e0;
        case 0x2f20e4u: goto label_2f20e4;
        case 0x2f20e8u: goto label_2f20e8;
        case 0x2f20ecu: goto label_2f20ec;
        case 0x2f20f0u: goto label_2f20f0;
        case 0x2f20f4u: goto label_2f20f4;
        case 0x2f20f8u: goto label_2f20f8;
        case 0x2f20fcu: goto label_2f20fc;
        case 0x2f2100u: goto label_2f2100;
        case 0x2f2104u: goto label_2f2104;
        case 0x2f2108u: goto label_2f2108;
        case 0x2f210cu: goto label_2f210c;
        case 0x2f2110u: goto label_2f2110;
        case 0x2f2114u: goto label_2f2114;
        case 0x2f2118u: goto label_2f2118;
        case 0x2f211cu: goto label_2f211c;
        case 0x2f2120u: goto label_2f2120;
        case 0x2f2124u: goto label_2f2124;
        case 0x2f2128u: goto label_2f2128;
        case 0x2f212cu: goto label_2f212c;
        case 0x2f2130u: goto label_2f2130;
        case 0x2f2134u: goto label_2f2134;
        case 0x2f2138u: goto label_2f2138;
        case 0x2f213cu: goto label_2f213c;
        case 0x2f2140u: goto label_2f2140;
        case 0x2f2144u: goto label_2f2144;
        case 0x2f2148u: goto label_2f2148;
        case 0x2f214cu: goto label_2f214c;
        case 0x2f2150u: goto label_2f2150;
        case 0x2f2154u: goto label_2f2154;
        case 0x2f2158u: goto label_2f2158;
        case 0x2f215cu: goto label_2f215c;
        case 0x2f2160u: goto label_2f2160;
        case 0x2f2164u: goto label_2f2164;
        case 0x2f2168u: goto label_2f2168;
        case 0x2f216cu: goto label_2f216c;
        case 0x2f2170u: goto label_2f2170;
        case 0x2f2174u: goto label_2f2174;
        case 0x2f2178u: goto label_2f2178;
        case 0x2f217cu: goto label_2f217c;
        case 0x2f2180u: goto label_2f2180;
        case 0x2f2184u: goto label_2f2184;
        case 0x2f2188u: goto label_2f2188;
        case 0x2f218cu: goto label_2f218c;
        case 0x2f2190u: goto label_2f2190;
        case 0x2f2194u: goto label_2f2194;
        case 0x2f2198u: goto label_2f2198;
        case 0x2f219cu: goto label_2f219c;
        case 0x2f21a0u: goto label_2f21a0;
        case 0x2f21a4u: goto label_2f21a4;
        case 0x2f21a8u: goto label_2f21a8;
        case 0x2f21acu: goto label_2f21ac;
        case 0x2f21b0u: goto label_2f21b0;
        case 0x2f21b4u: goto label_2f21b4;
        case 0x2f21b8u: goto label_2f21b8;
        case 0x2f21bcu: goto label_2f21bc;
        case 0x2f21c0u: goto label_2f21c0;
        case 0x2f21c4u: goto label_2f21c4;
        case 0x2f21c8u: goto label_2f21c8;
        case 0x2f21ccu: goto label_2f21cc;
        case 0x2f21d0u: goto label_2f21d0;
        case 0x2f21d4u: goto label_2f21d4;
        case 0x2f21d8u: goto label_2f21d8;
        case 0x2f21dcu: goto label_2f21dc;
        case 0x2f21e0u: goto label_2f21e0;
        case 0x2f21e4u: goto label_2f21e4;
        case 0x2f21e8u: goto label_2f21e8;
        case 0x2f21ecu: goto label_2f21ec;
        case 0x2f21f0u: goto label_2f21f0;
        case 0x2f21f4u: goto label_2f21f4;
        case 0x2f21f8u: goto label_2f21f8;
        case 0x2f21fcu: goto label_2f21fc;
        case 0x2f2200u: goto label_2f2200;
        case 0x2f2204u: goto label_2f2204;
        case 0x2f2208u: goto label_2f2208;
        case 0x2f220cu: goto label_2f220c;
        case 0x2f2210u: goto label_2f2210;
        case 0x2f2214u: goto label_2f2214;
        case 0x2f2218u: goto label_2f2218;
        case 0x2f221cu: goto label_2f221c;
        case 0x2f2220u: goto label_2f2220;
        case 0x2f2224u: goto label_2f2224;
        case 0x2f2228u: goto label_2f2228;
        case 0x2f222cu: goto label_2f222c;
        case 0x2f2230u: goto label_2f2230;
        case 0x2f2234u: goto label_2f2234;
        case 0x2f2238u: goto label_2f2238;
        case 0x2f223cu: goto label_2f223c;
        case 0x2f2240u: goto label_2f2240;
        case 0x2f2244u: goto label_2f2244;
        case 0x2f2248u: goto label_2f2248;
        case 0x2f224cu: goto label_2f224c;
        case 0x2f2250u: goto label_2f2250;
        case 0x2f2254u: goto label_2f2254;
        case 0x2f2258u: goto label_2f2258;
        case 0x2f225cu: goto label_2f225c;
        case 0x2f2260u: goto label_2f2260;
        case 0x2f2264u: goto label_2f2264;
        case 0x2f2268u: goto label_2f2268;
        case 0x2f226cu: goto label_2f226c;
        case 0x2f2270u: goto label_2f2270;
        case 0x2f2274u: goto label_2f2274;
        case 0x2f2278u: goto label_2f2278;
        case 0x2f227cu: goto label_2f227c;
        case 0x2f2280u: goto label_2f2280;
        case 0x2f2284u: goto label_2f2284;
        case 0x2f2288u: goto label_2f2288;
        case 0x2f228cu: goto label_2f228c;
        case 0x2f2290u: goto label_2f2290;
        case 0x2f2294u: goto label_2f2294;
        case 0x2f2298u: goto label_2f2298;
        case 0x2f229cu: goto label_2f229c;
        case 0x2f22a0u: goto label_2f22a0;
        case 0x2f22a4u: goto label_2f22a4;
        case 0x2f22a8u: goto label_2f22a8;
        case 0x2f22acu: goto label_2f22ac;
        case 0x2f22b0u: goto label_2f22b0;
        case 0x2f22b4u: goto label_2f22b4;
        case 0x2f22b8u: goto label_2f22b8;
        case 0x2f22bcu: goto label_2f22bc;
        case 0x2f22c0u: goto label_2f22c0;
        case 0x2f22c4u: goto label_2f22c4;
        case 0x2f22c8u: goto label_2f22c8;
        case 0x2f22ccu: goto label_2f22cc;
        default: break;
    }

    ctx->pc = 0x2f1d80u;

label_2f1d80:
    // 0x2f1d80: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2f1d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_2f1d84:
    // 0x2f1d84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f1d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2f1d88:
    // 0x2f1d88: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2f1d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2f1d8c:
    // 0x2f1d8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2f1d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2f1d90:
    // 0x2f1d90: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x2f1d90u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_2f1d94:
    // 0x2f1d94: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f1d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2f1d98:
    // 0x2f1d98: 0x27deab70  addiu       $fp, $fp, -0x5490
    ctx->pc = 0x2f1d98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945648));
label_2f1d9c:
    // 0x2f1d9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f1d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f1da0:
    // 0x2f1da0: 0x2417001a  addiu       $s7, $zero, 0x1A
    ctx->pc = 0x2f1da0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2f1da4:
    // 0x2f1da4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f1da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f1da8:
    // 0x2f1da8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2f1da8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2f1dac:
    // 0x2f1dac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f1dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f1db0:
    // 0x2f1db0: 0x64043  sra         $t0, $a2, 1
    ctx->pc = 0x2f1db0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 1));
label_2f1db4:
    // 0x2f1db4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f1db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f1db8:
    // 0x2f1db8: 0x3c130064  lui         $s3, 0x64
    ctx->pc = 0x2f1db8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
label_2f1dbc:
    // 0x2f1dbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f1dc0:
    // 0x2f1dc0: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x2f1dc0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
label_2f1dc4:
    // 0x2f1dc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f1dc8:
    // 0x2f1dc8: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_2f1dcc:
    if (ctx->pc == 0x2F1DCCu) {
        ctx->pc = 0x2F1DCCu;
            // 0x2f1dcc: 0x26732110  addiu       $s3, $s3, 0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8464));
        ctx->pc = 0x2F1DD0u;
        goto label_2f1dd0;
    }
    ctx->pc = 0x2F1DC8u;
    {
        const bool branch_taken_0x2f1dc8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1DC8u;
            // 0x2f1dcc: 0x26732110  addiu       $s3, $s3, 0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1dc8) {
            ctx->pc = 0x2F1DD4u;
            goto label_2f1dd4;
        }
    }
    ctx->pc = 0x2F1DD0u;
label_2f1dd0:
    // 0x2f1dd0: 0x24170027  addiu       $s7, $zero, 0x27
    ctx->pc = 0x2f1dd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_2f1dd4:
    // 0x2f1dd4: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x2f1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2f1dd8:
    // 0x2f1dd8: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x2f1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_2f1ddc:
    // 0x2f1ddc: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2f1ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_2f1de0:
    // 0x2f1de0: 0x3c3a021  addu        $s4, $fp, $v1
    ctx->pc = 0x2f1de0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_2f1de4:
    // 0x2f1de4: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x2f1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2f1de8:
    // 0x2f1de8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2f1de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2f1dec:
    // 0x2f1dec: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x2f1decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1df0:
    // 0x2f1df0: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x2f1df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2f1df4:
    // 0x2f1df4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2f1df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2f1df8:
    // 0x2f1df8: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2f1df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1dfc:
    // 0x2f1dfc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2f1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2f1e00:
    // 0x2f1e00: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2f1e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2f1e04:
    // 0x2f1e04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f1e04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f1e08:
    // 0x2f1e08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f1e0c:
    // 0x2f1e0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f1e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f1e10:
    // 0x2f1e10: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x2f1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_2f1e14:
    // 0x2f1e14: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2f1e14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f1e18:
    // 0x2f1e18: 0x0  nop
    ctx->pc = 0x2f1e18u;
    // NOP
label_2f1e1c:
    // 0x2f1e1c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2f1e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_2f1e20:
    // 0x2f1e20: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2f1e20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2f1e24:
    // 0x2f1e24: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2f1e24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2f1e28:
    // 0x2f1e28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f1e28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f1e2c:
    // 0x2f1e2c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2f1e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f1e30:
    // 0x2f1e30: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2f1e30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2f1e34:
    // 0x2f1e34: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x2f1e34u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f1e38:
    // 0x2f1e38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f1e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f1e3c:
    // 0x2f1e3c: 0x0  nop
    ctx->pc = 0x2f1e3cu;
    // NOP
label_2f1e40:
    // 0x2f1e40: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2f1e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_2f1e44:
    // 0x2f1e44: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2f1e44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2f1e48:
    // 0x2f1e48: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2f1e48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2f1e4c:
    // 0x2f1e4c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2f1e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f1e50:
    // 0x2f1e50: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2f1e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2f1e54:
    // 0x2f1e54: 0xc0506ac  jal         func_141AB0
label_2f1e58:
    if (ctx->pc == 0x2F1E58u) {
        ctx->pc = 0x2F1E58u;
            // 0x2f1e58: 0x43b023  subu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F1E5Cu;
        goto label_2f1e5c;
    }
    ctx->pc = 0x2F1E54u;
    SET_GPR_U32(ctx, 31, 0x2F1E5Cu);
    ctx->pc = 0x2F1E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1E54u;
            // 0x2f1e58: 0x43b023  subu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1E5Cu; }
        if (ctx->pc != 0x2F1E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1E5Cu; }
        if (ctx->pc != 0x2F1E5Cu) { return; }
    }
    ctx->pc = 0x2F1E5Cu;
label_2f1e5c:
    // 0x2f1e5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f1e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2f1e60:
    // 0x2f1e60: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x2f1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_2f1e64:
    // 0x2f1e64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f1e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f1e68:
    // 0x2f1e68: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f1e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f1e6c:
    // 0x2f1e6c: 0x320f809  jalr        $t9
label_2f1e70:
    if (ctx->pc == 0x2F1E70u) {
        ctx->pc = 0x2F1E70u;
            // 0x2f1e70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F1E74u;
        goto label_2f1e74;
    }
    ctx->pc = 0x2F1E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F1E74u);
        ctx->pc = 0x2F1E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1E6Cu;
            // 0x2f1e70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F1E74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F1E74u; }
            if (ctx->pc != 0x2F1E74u) { return; }
        }
        }
    }
    ctx->pc = 0x2F1E74u;
label_2f1e74:
    // 0x2f1e74: 0x26e20003  addiu       $v0, $s7, 0x3
    ctx->pc = 0x2f1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 3));
label_2f1e78:
    // 0x2f1e78: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x2f1e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_2f1e7c:
    // 0x2f1e7c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2f1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2f1e80:
    // 0x2f1e80: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x2f1e80u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2f1e84:
    // 0x2f1e84: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x2f1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_2f1e88:
    // 0x2f1e88: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x2f1e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_2f1e8c:
    // 0x2f1e8c: 0x62a825  or          $s5, $v1, $v0
    ctx->pc = 0x2f1e8cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f1e90:
    // 0x2f1e90: 0x86680002  lh          $t0, 0x2($s3)
    ctx->pc = 0x2f1e90u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2f1e94:
    // 0x2f1e94: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2f1e94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2f1e98:
    // 0x2f1e98: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f1e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f1e9c:
    // 0x2f1e9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f1e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f1ea0:
    // 0x2f1ea0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f1ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ea4:
    // 0x2f1ea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ea8:
    // 0x2f1ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1eac:
    // 0x2f1eac: 0x0  nop
    ctx->pc = 0x2f1eacu;
    // NOP
label_2f1eb0:
    // 0x2f1eb0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f1eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f1eb4:
    // 0x2f1eb4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2f1eb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2f1eb8:
    // 0x2f1eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1ebc:
    // 0x2f1ebc: 0x0  nop
    ctx->pc = 0x2f1ebcu;
    // NOP
label_2f1ec0:
    // 0x2f1ec0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f1ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f1ec4:
    // 0x2f1ec4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2f1ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2f1ec8:
    // 0x2f1ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1ecc:
    // 0x2f1ecc: 0x0  nop
    ctx->pc = 0x2f1eccu;
    // NOP
label_2f1ed0:
    // 0x2f1ed0: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f1ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f1ed4:
    // 0x2f1ed4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2f1ed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2f1ed8:
    // 0x2f1ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1edc:
    // 0x2f1edc: 0x0  nop
    ctx->pc = 0x2f1edcu;
    // NOP
label_2f1ee0:
    // 0x2f1ee0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f1ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f1ee4:
    // 0x2f1ee4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f1ee4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1ee8:
    // 0x2f1ee8: 0x0  nop
    ctx->pc = 0x2f1ee8u;
    // NOP
label_2f1eec:
    // 0x2f1eec: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f1eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f1ef0:
    // 0x2f1ef0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f1ef0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1ef4:
    // 0x2f1ef4: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f1ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f1ef8:
    // 0x2f1ef8: 0xc0bc284  jal         func_2F0A10
label_2f1efc:
    if (ctx->pc == 0x2F1EFCu) {
        ctx->pc = 0x2F1EFCu;
            // 0x2f1efc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F1F00u;
        goto label_2f1f00;
    }
    ctx->pc = 0x2F1EF8u;
    SET_GPR_U32(ctx, 31, 0x2F1F00u);
    ctx->pc = 0x2F1EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1EF8u;
            // 0x2f1efc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1F00u; }
        if (ctx->pc != 0x2F1F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1F00u; }
        if (ctx->pc != 0x2F1F00u) { return; }
    }
    ctx->pc = 0x2F1F00u;
label_2f1f00:
    // 0x2f1f00: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x2f1f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2f1f04:
    // 0x2f1f04: 0x26e30002  addiu       $v1, $s7, 0x2
    ctx->pc = 0x2f1f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
label_2f1f08:
    // 0x2f1f08: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x2f1f08u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2f1f0c:
    // 0x2f1f0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f1f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f1f10:
    // 0x2f1f10: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f1f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f14:
    // 0x2f1f14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f18:
    // 0x2f1f18: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2f1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2f1f1c:
    // 0x2f1f1c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2f1f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2f1f20:
    // 0x2f1f20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2f1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2f1f24:
    // 0x2f1f24: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2f1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2f1f28:
    // 0x2f1f28: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2f1f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2f1f2c:
    // 0x2f1f2c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x2f1f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_2f1f30:
    // 0x2f1f30: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2f1f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2f1f34:
    // 0x2f1f34: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2f1f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2f1f38:
    // 0x2f1f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1f3c:
    // 0x2f1f3c: 0x0  nop
    ctx->pc = 0x2f1f3cu;
    // NOP
label_2f1f40:
    // 0x2f1f40: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f1f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f1f44:
    // 0x2f1f44: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f1f48:
    // 0x2f1f48: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f1f48u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1f4c:
    // 0x2f1f4c: 0x0  nop
    ctx->pc = 0x2f1f4cu;
    // NOP
label_2f1f50:
    // 0x2f1f50: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f1f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f1f54:
    // 0x2f1f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1f58:
    // 0x2f1f58: 0x0  nop
    ctx->pc = 0x2f1f58u;
    // NOP
label_2f1f5c:
    // 0x2f1f5c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f1f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f1f60:
    // 0x2f1f60: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2f1f60u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1f64:
    // 0x2f1f64: 0x0  nop
    ctx->pc = 0x2f1f64u;
    // NOP
label_2f1f68:
    // 0x2f1f68: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f1f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f1f6c:
    // 0x2f1f6c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2f1f6cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1f70:
    // 0x2f1f70: 0x0  nop
    ctx->pc = 0x2f1f70u;
    // NOP
label_2f1f74:
    // 0x2f1f74: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f1f74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f1f78:
    // 0x2f1f78: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2f1f78u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1f7c:
    // 0x2f1f7c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f1f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f1f80:
    // 0x2f1f80: 0xc0bc284  jal         func_2F0A10
label_2f1f84:
    if (ctx->pc == 0x2F1F84u) {
        ctx->pc = 0x2F1F84u;
            // 0x2f1f84: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F1F88u;
        goto label_2f1f88;
    }
    ctx->pc = 0x2F1F80u;
    SET_GPR_U32(ctx, 31, 0x2F1F88u);
    ctx->pc = 0x2F1F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1F80u;
            // 0x2f1f84: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1F88u; }
        if (ctx->pc != 0x2F1F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1F88u; }
        if (ctx->pc != 0x2F1F88u) { return; }
    }
    ctx->pc = 0x2F1F88u;
label_2f1f88:
    // 0x2f1f88: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x2f1f88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2f1f8c:
    // 0x2f1f8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f1f90:
    // 0x2f1f90: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x2f1f90u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2f1f94:
    // 0x2f1f94: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f1f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f98:
    // 0x2f1f98: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2f1f98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2f1f9c:
    // 0x2f1f9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1fa0:
    // 0x2f1fa0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2f1fa4:
    // 0x2f1fa4: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2f1fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2f1fa8:
    // 0x2f1fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1fac:
    // 0x2f1fac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2f1facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2f1fb0:
    // 0x2f1fb0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f1fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f1fb4:
    // 0x2f1fb4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f1fb8:
    // 0x2f1fb8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f1fb8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1fbc:
    // 0x2f1fbc: 0x0  nop
    ctx->pc = 0x2f1fbcu;
    // NOP
label_2f1fc0:
    // 0x2f1fc0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f1fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f1fc4:
    // 0x2f1fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1fc8:
    // 0x2f1fc8: 0x0  nop
    ctx->pc = 0x2f1fc8u;
    // NOP
label_2f1fcc:
    // 0x2f1fcc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f1fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f1fd0:
    // 0x2f1fd0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2f1fd0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1fd4:
    // 0x2f1fd4: 0x0  nop
    ctx->pc = 0x2f1fd4u;
    // NOP
label_2f1fd8:
    // 0x2f1fd8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f1fd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f1fdc:
    // 0x2f1fdc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2f1fdcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1fe0:
    // 0x2f1fe0: 0x0  nop
    ctx->pc = 0x2f1fe0u;
    // NOP
label_2f1fe4:
    // 0x2f1fe4: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f1fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f1fe8:
    // 0x2f1fe8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2f1fe8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1fec:
    // 0x2f1fec: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f1fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f1ff0:
    // 0x2f1ff0: 0xc0bc284  jal         func_2F0A10
label_2f1ff4:
    if (ctx->pc == 0x2F1FF4u) {
        ctx->pc = 0x2F1FF4u;
            // 0x2f1ff4: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F1FF8u;
        goto label_2f1ff8;
    }
    ctx->pc = 0x2F1FF0u;
    SET_GPR_U32(ctx, 31, 0x2F1FF8u);
    ctx->pc = 0x2F1FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1FF0u;
            // 0x2f1ff4: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1FF8u; }
        if (ctx->pc != 0x2F1FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1FF8u; }
        if (ctx->pc != 0x2F1FF8u) { return; }
    }
    ctx->pc = 0x2F1FF8u;
label_2f1ff8:
    // 0x2f1ff8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2f1ff8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1ffc:
    // 0x2f1ffc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x2f1ffcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2f2000:
    // 0x2f2000: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f2000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2004:
    // 0x2f2004: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x2f2004u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2f2008:
    // 0x2f2008: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x2f2008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2f200c:
    // 0x2f200c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2010:
    // 0x2f2010: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x2f2010u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2f2014:
    // 0x2f2014: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f2014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f2018:
    // 0x2f2018: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2f2018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2f201c:
    // 0x2f201c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f201cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2020:
    // 0x2f2020: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2f2020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2f2024:
    // 0x2f2024: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x2f2024u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2f2028:
    // 0x2f2028: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2f2028u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2f202c:
    // 0x2f202c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f202cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2030:
    // 0x2f2030: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f2030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f2034:
    // 0x2f2034: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2038:
    // 0x2f2038: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2f2038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f203c:
    // 0x2f203c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f203cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2040:
    // 0x2f2040: 0x0  nop
    ctx->pc = 0x2f2040u;
    // NOP
label_2f2044:
    // 0x2f2044: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f2044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f2048:
    // 0x2f2048: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f2048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f204c:
    // 0x2f204c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f204cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2050:
    // 0x2f2050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2054:
    // 0x2f2054: 0x0  nop
    ctx->pc = 0x2f2054u;
    // NOP
label_2f2058:
    // 0x2f2058: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f2058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f205c:
    // 0x2f205c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2f205cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2060:
    // 0x2f2060: 0x0  nop
    ctx->pc = 0x2f2060u;
    // NOP
label_2f2064:
    // 0x2f2064: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f2064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f2068:
    // 0x2f2068: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2f2068u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f206c:
    // 0x2f206c: 0xc0bc284  jal         func_2F0A10
label_2f2070:
    if (ctx->pc == 0x2F2070u) {
        ctx->pc = 0x2F2070u;
            // 0x2f2070: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F2074u;
        goto label_2f2074;
    }
    ctx->pc = 0x2F206Cu;
    SET_GPR_U32(ctx, 31, 0x2F2074u);
    ctx->pc = 0x2F2070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F206Cu;
            // 0x2f2070: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2074u; }
        if (ctx->pc != 0x2F2074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2074u; }
        if (ctx->pc != 0x2F2074u) { return; }
    }
    ctx->pc = 0x2F2074u;
label_2f2074:
    // 0x2f2074: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2f2074u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2078:
    // 0x2f2078: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x2f2078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2f207c:
    // 0x2f207c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f207cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2080:
    // 0x2f2080: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x2f2080u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2f2084:
    // 0x2f2084: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2f2084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2f2088:
    // 0x2f2088: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2f2088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f208c:
    // 0x2f208c: 0x2c2b821  addu        $s7, $s6, $v0
    ctx->pc = 0x2f208cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2f2090:
    // 0x2f2090: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2094:
    // 0x2f2094: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f2094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f2098:
    // 0x2f2098: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f2098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f209c:
    // 0x2f209c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f209cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f20a0:
    // 0x2f20a0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f20a0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f20a4:
    // 0x2f20a4: 0x0  nop
    ctx->pc = 0x2f20a4u;
    // NOP
label_2f20a8:
    // 0x2f20a8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f20a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f20ac:
    // 0x2f20ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f20acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f20b0:
    // 0x2f20b0: 0x0  nop
    ctx->pc = 0x2f20b0u;
    // NOP
label_2f20b4:
    // 0x2f20b4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f20b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f20b8:
    // 0x2f20b8: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x2f20b8u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f20bc:
    // 0x2f20bc: 0x0  nop
    ctx->pc = 0x2f20bcu;
    // NOP
label_2f20c0:
    // 0x2f20c0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f20c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f20c4:
    // 0x2f20c4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2f20c4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f20c8:
    // 0x2f20c8: 0x0  nop
    ctx->pc = 0x2f20c8u;
    // NOP
label_2f20cc:
    // 0x2f20cc: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f20ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f20d0:
    // 0x2f20d0: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2f20d0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f20d4:
    // 0x2f20d4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f20d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f20d8:
    // 0x2f20d8: 0xc0bc284  jal         func_2F0A10
label_2f20dc:
    if (ctx->pc == 0x2F20DCu) {
        ctx->pc = 0x2F20DCu;
            // 0x2f20dc: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F20E0u;
        goto label_2f20e0;
    }
    ctx->pc = 0x2F20D8u;
    SET_GPR_U32(ctx, 31, 0x2F20E0u);
    ctx->pc = 0x2F20DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F20D8u;
            // 0x2f20dc: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20E0u; }
        if (ctx->pc != 0x2F20E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20E0u; }
        if (ctx->pc != 0x2F20E0u) { return; }
    }
    ctx->pc = 0x2F20E0u;
label_2f20e0:
    // 0x2f20e0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2f20e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2f20e4:
    // 0x2f20e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f20e8:
    // 0x2f20e8: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x2f20e8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2f20ec:
    // 0x2f20ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f20ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f20f0:
    // 0x2f20f0: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2f20f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2f20f4:
    // 0x2f20f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f20f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f20f8:
    // 0x2f20f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f20f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f20fc:
    // 0x2f20fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f20fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2100:
    // 0x2f2100: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f2100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2104:
    // 0x2f2104: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f2104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f2108:
    // 0x2f2108: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f2108u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f210c:
    // 0x2f210c: 0x0  nop
    ctx->pc = 0x2f210cu;
    // NOP
label_2f2110:
    // 0x2f2110: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2114:
    // 0x2f2114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f2114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2118:
    // 0x2f2118: 0x0  nop
    ctx->pc = 0x2f2118u;
    // NOP
label_2f211c:
    // 0x2f211c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f211cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f2120:
    // 0x2f2120: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f2120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2124:
    // 0x2f2124: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f2124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2128:
    // 0x2f2128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f212c:
    // 0x2f212c: 0x0  nop
    ctx->pc = 0x2f212cu;
    // NOP
label_2f2130:
    // 0x2f2130: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f2130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2134:
    // 0x2f2134: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2f2134u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2138:
    // 0x2f2138: 0x0  nop
    ctx->pc = 0x2f2138u;
    // NOP
label_2f213c:
    // 0x2f213c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f213cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f2140:
    // 0x2f2140: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2f2140u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2144:
    // 0x2f2144: 0xc0bc284  jal         func_2F0A10
label_2f2148:
    if (ctx->pc == 0x2F2148u) {
        ctx->pc = 0x2F2148u;
            // 0x2f2148: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F214Cu;
        goto label_2f214c;
    }
    ctx->pc = 0x2F2144u;
    SET_GPR_U32(ctx, 31, 0x2F214Cu);
    ctx->pc = 0x2F2148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2144u;
            // 0x2f2148: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F214Cu; }
        if (ctx->pc != 0x2F214Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F214Cu; }
        if (ctx->pc != 0x2F214Cu) { return; }
    }
    ctx->pc = 0x2F214Cu;
label_2f214c:
    // 0x2f214c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f214cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2150:
    // 0x2f2150: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2154:
    // 0x2f2154: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x2f2154u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2f2158:
    // 0x2f2158: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f2158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f215c:
    // 0x2f215c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2f215cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2f2160:
    // 0x2f2160: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f2160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f2164:
    // 0x2f2164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2168:
    // 0x2f2168: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f216c:
    // 0x2f216c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f216cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2170:
    // 0x2f2170: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f2170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f2174:
    // 0x2f2174: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2f2174u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2178:
    // 0x2f2178: 0x0  nop
    ctx->pc = 0x2f2178u;
    // NOP
label_2f217c:
    // 0x2f217c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f217cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f2180:
    // 0x2f2180: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f2180u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2184:
    // 0x2f2184: 0x0  nop
    ctx->pc = 0x2f2184u;
    // NOP
label_2f2188:
    // 0x2f2188: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f218c:
    // 0x2f218c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f218cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2190:
    // 0x2f2190: 0x0  nop
    ctx->pc = 0x2f2190u;
    // NOP
label_2f2194:
    // 0x2f2194: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f2194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f2198:
    // 0x2f2198: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f2198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f219c:
    // 0x2f219c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2f219cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f21a0:
    // 0x2f21a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f21a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f21a4:
    // 0x2f21a4: 0x0  nop
    ctx->pc = 0x2f21a4u;
    // NOP
label_2f21a8:
    // 0x2f21a8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f21a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f21ac:
    // 0x2f21ac: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2f21acu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f21b0:
    // 0x2f21b0: 0xc0bc284  jal         func_2F0A10
label_2f21b4:
    if (ctx->pc == 0x2F21B4u) {
        ctx->pc = 0x2F21B4u;
            // 0x2f21b4: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F21B8u;
        goto label_2f21b8;
    }
    ctx->pc = 0x2F21B0u;
    SET_GPR_U32(ctx, 31, 0x2F21B8u);
    ctx->pc = 0x2F21B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F21B0u;
            // 0x2f21b4: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F21B8u; }
        if (ctx->pc != 0x2F21B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F21B8u; }
        if (ctx->pc != 0x2F21B8u) { return; }
    }
    ctx->pc = 0x2F21B8u;
label_2f21b8:
    // 0x2f21b8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2f21b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2f21bc:
    // 0x2f21bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f21bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f21c0:
    // 0x2f21c0: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x2f21c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2f21c4:
    // 0x2f21c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f21c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f21c8:
    // 0x2f21c8: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2f21c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2f21cc:
    // 0x2f21cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f21ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f21d0:
    // 0x2f21d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f21d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f21d4:
    // 0x2f21d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f21d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f21d8:
    // 0x2f21d8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f21d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f21dc:
    // 0x2f21dc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f21e0:
    // 0x2f21e0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2f21e0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f21e4:
    // 0x2f21e4: 0x0  nop
    ctx->pc = 0x2f21e4u;
    // NOP
label_2f21e8:
    // 0x2f21e8: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f21e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f21ec:
    // 0x2f21ec: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f21ecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f21f0:
    // 0x2f21f0: 0x0  nop
    ctx->pc = 0x2f21f0u;
    // NOP
label_2f21f4:
    // 0x2f21f4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f21f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f21f8:
    // 0x2f21f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f21f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f21fc:
    // 0x2f21fc: 0x0  nop
    ctx->pc = 0x2f21fcu;
    // NOP
label_2f2200:
    // 0x2f2200: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f2200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f2204:
    // 0x2f2204: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x2f2204u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2208:
    // 0x2f2208: 0x0  nop
    ctx->pc = 0x2f2208u;
    // NOP
label_2f220c:
    // 0x2f220c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f220cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2210:
    // 0x2f2210: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2f2210u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2214:
    // 0x2f2214: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f2214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2218:
    // 0x2f2218: 0xc0bc284  jal         func_2F0A10
label_2f221c:
    if (ctx->pc == 0x2F221Cu) {
        ctx->pc = 0x2F221Cu;
            // 0x2f221c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F2220u;
        goto label_2f2220;
    }
    ctx->pc = 0x2F2218u;
    SET_GPR_U32(ctx, 31, 0x2F2220u);
    ctx->pc = 0x2F221Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2218u;
            // 0x2f221c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2220u; }
        if (ctx->pc != 0x2F2220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2220u; }
        if (ctx->pc != 0x2F2220u) { return; }
    }
    ctx->pc = 0x2F2220u;
label_2f2220:
    // 0x2f2220: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2f2220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f2224:
    // 0x2f2224: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f2224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f2228:
    // 0x2f2228: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x2f2228u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2f222c:
    // 0x2f222c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f222cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f2230:
    // 0x2f2230: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2f2230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2f2234:
    // 0x2f2234: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2238:
    // 0x2f2238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f223c:
    // 0x2f223c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f223cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2240:
    // 0x2f2240: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f2240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2244:
    // 0x2f2244: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f2244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f2248:
    // 0x2f2248: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x2f2248u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f224c:
    // 0x2f224c: 0x0  nop
    ctx->pc = 0x2f224cu;
    // NOP
label_2f2250:
    // 0x2f2250: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f2250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2254:
    // 0x2f2254: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2f2254u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2258:
    // 0x2f2258: 0x0  nop
    ctx->pc = 0x2f2258u;
    // NOP
label_2f225c:
    // 0x2f225c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f225cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f2260:
    // 0x2f2260: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2f2260u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2264:
    // 0x2f2264: 0x0  nop
    ctx->pc = 0x2f2264u;
    // NOP
label_2f2268:
    // 0x2f2268: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f2268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f226c:
    // 0x2f226c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f226cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2270:
    // 0x2f2270: 0x0  nop
    ctx->pc = 0x2f2270u;
    // NOP
label_2f2274:
    // 0x2f2274: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2278:
    // 0x2f2278: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f2278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f227c:
    // 0x2f227c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f227cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2280:
    // 0x2f2280: 0xc0bc284  jal         func_2F0A10
label_2f2284:
    if (ctx->pc == 0x2F2284u) {
        ctx->pc = 0x2F2284u;
            // 0x2f2284: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F2288u;
        goto label_2f2288;
    }
    ctx->pc = 0x2F2280u;
    SET_GPR_U32(ctx, 31, 0x2F2288u);
    ctx->pc = 0x2F2284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2280u;
            // 0x2f2284: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2288u; }
        if (ctx->pc != 0x2F2288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2288u; }
        if (ctx->pc != 0x2F2288u) { return; }
    }
    ctx->pc = 0x2F2288u;
label_2f2288:
    // 0x2f2288: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f2288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2f228c:
    // 0x2f228c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x2f228cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_2f2290:
    // 0x2f2290: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f2290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f2294:
    // 0x2f2294: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f2294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f2298:
    // 0x2f2298: 0x320f809  jalr        $t9
label_2f229c:
    if (ctx->pc == 0x2F229Cu) {
        ctx->pc = 0x2F22A0u;
        goto label_2f22a0;
    }
    ctx->pc = 0x2F2298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F22A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F22A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F22A0u; }
            if (ctx->pc != 0x2F22A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F22A0u;
label_2f22a0:
    // 0x2f22a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f22a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f22a4:
    // 0x2f22a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2f22a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f22a8:
    // 0x2f22a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2f22a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f22ac:
    // 0x2f22ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f22acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f22b0:
    // 0x2f22b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f22b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f22b4:
    // 0x2f22b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f22b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f22b8:
    // 0x2f22b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f22b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f22bc:
    // 0x2f22bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f22bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f22c0:
    // 0x2f22c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f22c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f22c4:
    // 0x2f22c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f22c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f22c8:
    // 0x2f22c8: 0x3e00008  jr          $ra
label_2f22cc:
    if (ctx->pc == 0x2F22CCu) {
        ctx->pc = 0x2F22CCu;
            // 0x2f22cc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x2F22D0u;
        goto label_fallthrough_0x2f22c8;
    }
    ctx->pc = 0x2F22C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F22CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22C8u;
            // 0x2f22cc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f22c8:
    ctx->pc = 0x2F22D0u;
}
