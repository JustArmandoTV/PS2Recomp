#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1EA0
// Address: 0x2a1ea0 - 0x2a2430
void sub_002A1EA0_0x2a1ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1EA0_0x2a1ea0");
#endif

    switch (ctx->pc) {
        case 0x2a1ea0u: goto label_2a1ea0;
        case 0x2a1ea4u: goto label_2a1ea4;
        case 0x2a1ea8u: goto label_2a1ea8;
        case 0x2a1eacu: goto label_2a1eac;
        case 0x2a1eb0u: goto label_2a1eb0;
        case 0x2a1eb4u: goto label_2a1eb4;
        case 0x2a1eb8u: goto label_2a1eb8;
        case 0x2a1ebcu: goto label_2a1ebc;
        case 0x2a1ec0u: goto label_2a1ec0;
        case 0x2a1ec4u: goto label_2a1ec4;
        case 0x2a1ec8u: goto label_2a1ec8;
        case 0x2a1eccu: goto label_2a1ecc;
        case 0x2a1ed0u: goto label_2a1ed0;
        case 0x2a1ed4u: goto label_2a1ed4;
        case 0x2a1ed8u: goto label_2a1ed8;
        case 0x2a1edcu: goto label_2a1edc;
        case 0x2a1ee0u: goto label_2a1ee0;
        case 0x2a1ee4u: goto label_2a1ee4;
        case 0x2a1ee8u: goto label_2a1ee8;
        case 0x2a1eecu: goto label_2a1eec;
        case 0x2a1ef0u: goto label_2a1ef0;
        case 0x2a1ef4u: goto label_2a1ef4;
        case 0x2a1ef8u: goto label_2a1ef8;
        case 0x2a1efcu: goto label_2a1efc;
        case 0x2a1f00u: goto label_2a1f00;
        case 0x2a1f04u: goto label_2a1f04;
        case 0x2a1f08u: goto label_2a1f08;
        case 0x2a1f0cu: goto label_2a1f0c;
        case 0x2a1f10u: goto label_2a1f10;
        case 0x2a1f14u: goto label_2a1f14;
        case 0x2a1f18u: goto label_2a1f18;
        case 0x2a1f1cu: goto label_2a1f1c;
        case 0x2a1f20u: goto label_2a1f20;
        case 0x2a1f24u: goto label_2a1f24;
        case 0x2a1f28u: goto label_2a1f28;
        case 0x2a1f2cu: goto label_2a1f2c;
        case 0x2a1f30u: goto label_2a1f30;
        case 0x2a1f34u: goto label_2a1f34;
        case 0x2a1f38u: goto label_2a1f38;
        case 0x2a1f3cu: goto label_2a1f3c;
        case 0x2a1f40u: goto label_2a1f40;
        case 0x2a1f44u: goto label_2a1f44;
        case 0x2a1f48u: goto label_2a1f48;
        case 0x2a1f4cu: goto label_2a1f4c;
        case 0x2a1f50u: goto label_2a1f50;
        case 0x2a1f54u: goto label_2a1f54;
        case 0x2a1f58u: goto label_2a1f58;
        case 0x2a1f5cu: goto label_2a1f5c;
        case 0x2a1f60u: goto label_2a1f60;
        case 0x2a1f64u: goto label_2a1f64;
        case 0x2a1f68u: goto label_2a1f68;
        case 0x2a1f6cu: goto label_2a1f6c;
        case 0x2a1f70u: goto label_2a1f70;
        case 0x2a1f74u: goto label_2a1f74;
        case 0x2a1f78u: goto label_2a1f78;
        case 0x2a1f7cu: goto label_2a1f7c;
        case 0x2a1f80u: goto label_2a1f80;
        case 0x2a1f84u: goto label_2a1f84;
        case 0x2a1f88u: goto label_2a1f88;
        case 0x2a1f8cu: goto label_2a1f8c;
        case 0x2a1f90u: goto label_2a1f90;
        case 0x2a1f94u: goto label_2a1f94;
        case 0x2a1f98u: goto label_2a1f98;
        case 0x2a1f9cu: goto label_2a1f9c;
        case 0x2a1fa0u: goto label_2a1fa0;
        case 0x2a1fa4u: goto label_2a1fa4;
        case 0x2a1fa8u: goto label_2a1fa8;
        case 0x2a1facu: goto label_2a1fac;
        case 0x2a1fb0u: goto label_2a1fb0;
        case 0x2a1fb4u: goto label_2a1fb4;
        case 0x2a1fb8u: goto label_2a1fb8;
        case 0x2a1fbcu: goto label_2a1fbc;
        case 0x2a1fc0u: goto label_2a1fc0;
        case 0x2a1fc4u: goto label_2a1fc4;
        case 0x2a1fc8u: goto label_2a1fc8;
        case 0x2a1fccu: goto label_2a1fcc;
        case 0x2a1fd0u: goto label_2a1fd0;
        case 0x2a1fd4u: goto label_2a1fd4;
        case 0x2a1fd8u: goto label_2a1fd8;
        case 0x2a1fdcu: goto label_2a1fdc;
        case 0x2a1fe0u: goto label_2a1fe0;
        case 0x2a1fe4u: goto label_2a1fe4;
        case 0x2a1fe8u: goto label_2a1fe8;
        case 0x2a1fecu: goto label_2a1fec;
        case 0x2a1ff0u: goto label_2a1ff0;
        case 0x2a1ff4u: goto label_2a1ff4;
        case 0x2a1ff8u: goto label_2a1ff8;
        case 0x2a1ffcu: goto label_2a1ffc;
        case 0x2a2000u: goto label_2a2000;
        case 0x2a2004u: goto label_2a2004;
        case 0x2a2008u: goto label_2a2008;
        case 0x2a200cu: goto label_2a200c;
        case 0x2a2010u: goto label_2a2010;
        case 0x2a2014u: goto label_2a2014;
        case 0x2a2018u: goto label_2a2018;
        case 0x2a201cu: goto label_2a201c;
        case 0x2a2020u: goto label_2a2020;
        case 0x2a2024u: goto label_2a2024;
        case 0x2a2028u: goto label_2a2028;
        case 0x2a202cu: goto label_2a202c;
        case 0x2a2030u: goto label_2a2030;
        case 0x2a2034u: goto label_2a2034;
        case 0x2a2038u: goto label_2a2038;
        case 0x2a203cu: goto label_2a203c;
        case 0x2a2040u: goto label_2a2040;
        case 0x2a2044u: goto label_2a2044;
        case 0x2a2048u: goto label_2a2048;
        case 0x2a204cu: goto label_2a204c;
        case 0x2a2050u: goto label_2a2050;
        case 0x2a2054u: goto label_2a2054;
        case 0x2a2058u: goto label_2a2058;
        case 0x2a205cu: goto label_2a205c;
        case 0x2a2060u: goto label_2a2060;
        case 0x2a2064u: goto label_2a2064;
        case 0x2a2068u: goto label_2a2068;
        case 0x2a206cu: goto label_2a206c;
        case 0x2a2070u: goto label_2a2070;
        case 0x2a2074u: goto label_2a2074;
        case 0x2a2078u: goto label_2a2078;
        case 0x2a207cu: goto label_2a207c;
        case 0x2a2080u: goto label_2a2080;
        case 0x2a2084u: goto label_2a2084;
        case 0x2a2088u: goto label_2a2088;
        case 0x2a208cu: goto label_2a208c;
        case 0x2a2090u: goto label_2a2090;
        case 0x2a2094u: goto label_2a2094;
        case 0x2a2098u: goto label_2a2098;
        case 0x2a209cu: goto label_2a209c;
        case 0x2a20a0u: goto label_2a20a0;
        case 0x2a20a4u: goto label_2a20a4;
        case 0x2a20a8u: goto label_2a20a8;
        case 0x2a20acu: goto label_2a20ac;
        case 0x2a20b0u: goto label_2a20b0;
        case 0x2a20b4u: goto label_2a20b4;
        case 0x2a20b8u: goto label_2a20b8;
        case 0x2a20bcu: goto label_2a20bc;
        case 0x2a20c0u: goto label_2a20c0;
        case 0x2a20c4u: goto label_2a20c4;
        case 0x2a20c8u: goto label_2a20c8;
        case 0x2a20ccu: goto label_2a20cc;
        case 0x2a20d0u: goto label_2a20d0;
        case 0x2a20d4u: goto label_2a20d4;
        case 0x2a20d8u: goto label_2a20d8;
        case 0x2a20dcu: goto label_2a20dc;
        case 0x2a20e0u: goto label_2a20e0;
        case 0x2a20e4u: goto label_2a20e4;
        case 0x2a20e8u: goto label_2a20e8;
        case 0x2a20ecu: goto label_2a20ec;
        case 0x2a20f0u: goto label_2a20f0;
        case 0x2a20f4u: goto label_2a20f4;
        case 0x2a20f8u: goto label_2a20f8;
        case 0x2a20fcu: goto label_2a20fc;
        case 0x2a2100u: goto label_2a2100;
        case 0x2a2104u: goto label_2a2104;
        case 0x2a2108u: goto label_2a2108;
        case 0x2a210cu: goto label_2a210c;
        case 0x2a2110u: goto label_2a2110;
        case 0x2a2114u: goto label_2a2114;
        case 0x2a2118u: goto label_2a2118;
        case 0x2a211cu: goto label_2a211c;
        case 0x2a2120u: goto label_2a2120;
        case 0x2a2124u: goto label_2a2124;
        case 0x2a2128u: goto label_2a2128;
        case 0x2a212cu: goto label_2a212c;
        case 0x2a2130u: goto label_2a2130;
        case 0x2a2134u: goto label_2a2134;
        case 0x2a2138u: goto label_2a2138;
        case 0x2a213cu: goto label_2a213c;
        case 0x2a2140u: goto label_2a2140;
        case 0x2a2144u: goto label_2a2144;
        case 0x2a2148u: goto label_2a2148;
        case 0x2a214cu: goto label_2a214c;
        case 0x2a2150u: goto label_2a2150;
        case 0x2a2154u: goto label_2a2154;
        case 0x2a2158u: goto label_2a2158;
        case 0x2a215cu: goto label_2a215c;
        case 0x2a2160u: goto label_2a2160;
        case 0x2a2164u: goto label_2a2164;
        case 0x2a2168u: goto label_2a2168;
        case 0x2a216cu: goto label_2a216c;
        case 0x2a2170u: goto label_2a2170;
        case 0x2a2174u: goto label_2a2174;
        case 0x2a2178u: goto label_2a2178;
        case 0x2a217cu: goto label_2a217c;
        case 0x2a2180u: goto label_2a2180;
        case 0x2a2184u: goto label_2a2184;
        case 0x2a2188u: goto label_2a2188;
        case 0x2a218cu: goto label_2a218c;
        case 0x2a2190u: goto label_2a2190;
        case 0x2a2194u: goto label_2a2194;
        case 0x2a2198u: goto label_2a2198;
        case 0x2a219cu: goto label_2a219c;
        case 0x2a21a0u: goto label_2a21a0;
        case 0x2a21a4u: goto label_2a21a4;
        case 0x2a21a8u: goto label_2a21a8;
        case 0x2a21acu: goto label_2a21ac;
        case 0x2a21b0u: goto label_2a21b0;
        case 0x2a21b4u: goto label_2a21b4;
        case 0x2a21b8u: goto label_2a21b8;
        case 0x2a21bcu: goto label_2a21bc;
        case 0x2a21c0u: goto label_2a21c0;
        case 0x2a21c4u: goto label_2a21c4;
        case 0x2a21c8u: goto label_2a21c8;
        case 0x2a21ccu: goto label_2a21cc;
        case 0x2a21d0u: goto label_2a21d0;
        case 0x2a21d4u: goto label_2a21d4;
        case 0x2a21d8u: goto label_2a21d8;
        case 0x2a21dcu: goto label_2a21dc;
        case 0x2a21e0u: goto label_2a21e0;
        case 0x2a21e4u: goto label_2a21e4;
        case 0x2a21e8u: goto label_2a21e8;
        case 0x2a21ecu: goto label_2a21ec;
        case 0x2a21f0u: goto label_2a21f0;
        case 0x2a21f4u: goto label_2a21f4;
        case 0x2a21f8u: goto label_2a21f8;
        case 0x2a21fcu: goto label_2a21fc;
        case 0x2a2200u: goto label_2a2200;
        case 0x2a2204u: goto label_2a2204;
        case 0x2a2208u: goto label_2a2208;
        case 0x2a220cu: goto label_2a220c;
        case 0x2a2210u: goto label_2a2210;
        case 0x2a2214u: goto label_2a2214;
        case 0x2a2218u: goto label_2a2218;
        case 0x2a221cu: goto label_2a221c;
        case 0x2a2220u: goto label_2a2220;
        case 0x2a2224u: goto label_2a2224;
        case 0x2a2228u: goto label_2a2228;
        case 0x2a222cu: goto label_2a222c;
        case 0x2a2230u: goto label_2a2230;
        case 0x2a2234u: goto label_2a2234;
        case 0x2a2238u: goto label_2a2238;
        case 0x2a223cu: goto label_2a223c;
        case 0x2a2240u: goto label_2a2240;
        case 0x2a2244u: goto label_2a2244;
        case 0x2a2248u: goto label_2a2248;
        case 0x2a224cu: goto label_2a224c;
        case 0x2a2250u: goto label_2a2250;
        case 0x2a2254u: goto label_2a2254;
        case 0x2a2258u: goto label_2a2258;
        case 0x2a225cu: goto label_2a225c;
        case 0x2a2260u: goto label_2a2260;
        case 0x2a2264u: goto label_2a2264;
        case 0x2a2268u: goto label_2a2268;
        case 0x2a226cu: goto label_2a226c;
        case 0x2a2270u: goto label_2a2270;
        case 0x2a2274u: goto label_2a2274;
        case 0x2a2278u: goto label_2a2278;
        case 0x2a227cu: goto label_2a227c;
        case 0x2a2280u: goto label_2a2280;
        case 0x2a2284u: goto label_2a2284;
        case 0x2a2288u: goto label_2a2288;
        case 0x2a228cu: goto label_2a228c;
        case 0x2a2290u: goto label_2a2290;
        case 0x2a2294u: goto label_2a2294;
        case 0x2a2298u: goto label_2a2298;
        case 0x2a229cu: goto label_2a229c;
        case 0x2a22a0u: goto label_2a22a0;
        case 0x2a22a4u: goto label_2a22a4;
        case 0x2a22a8u: goto label_2a22a8;
        case 0x2a22acu: goto label_2a22ac;
        case 0x2a22b0u: goto label_2a22b0;
        case 0x2a22b4u: goto label_2a22b4;
        case 0x2a22b8u: goto label_2a22b8;
        case 0x2a22bcu: goto label_2a22bc;
        case 0x2a22c0u: goto label_2a22c0;
        case 0x2a22c4u: goto label_2a22c4;
        case 0x2a22c8u: goto label_2a22c8;
        case 0x2a22ccu: goto label_2a22cc;
        case 0x2a22d0u: goto label_2a22d0;
        case 0x2a22d4u: goto label_2a22d4;
        case 0x2a22d8u: goto label_2a22d8;
        case 0x2a22dcu: goto label_2a22dc;
        case 0x2a22e0u: goto label_2a22e0;
        case 0x2a22e4u: goto label_2a22e4;
        case 0x2a22e8u: goto label_2a22e8;
        case 0x2a22ecu: goto label_2a22ec;
        case 0x2a22f0u: goto label_2a22f0;
        case 0x2a22f4u: goto label_2a22f4;
        case 0x2a22f8u: goto label_2a22f8;
        case 0x2a22fcu: goto label_2a22fc;
        case 0x2a2300u: goto label_2a2300;
        case 0x2a2304u: goto label_2a2304;
        case 0x2a2308u: goto label_2a2308;
        case 0x2a230cu: goto label_2a230c;
        case 0x2a2310u: goto label_2a2310;
        case 0x2a2314u: goto label_2a2314;
        case 0x2a2318u: goto label_2a2318;
        case 0x2a231cu: goto label_2a231c;
        case 0x2a2320u: goto label_2a2320;
        case 0x2a2324u: goto label_2a2324;
        case 0x2a2328u: goto label_2a2328;
        case 0x2a232cu: goto label_2a232c;
        case 0x2a2330u: goto label_2a2330;
        case 0x2a2334u: goto label_2a2334;
        case 0x2a2338u: goto label_2a2338;
        case 0x2a233cu: goto label_2a233c;
        case 0x2a2340u: goto label_2a2340;
        case 0x2a2344u: goto label_2a2344;
        case 0x2a2348u: goto label_2a2348;
        case 0x2a234cu: goto label_2a234c;
        case 0x2a2350u: goto label_2a2350;
        case 0x2a2354u: goto label_2a2354;
        case 0x2a2358u: goto label_2a2358;
        case 0x2a235cu: goto label_2a235c;
        case 0x2a2360u: goto label_2a2360;
        case 0x2a2364u: goto label_2a2364;
        case 0x2a2368u: goto label_2a2368;
        case 0x2a236cu: goto label_2a236c;
        case 0x2a2370u: goto label_2a2370;
        case 0x2a2374u: goto label_2a2374;
        case 0x2a2378u: goto label_2a2378;
        case 0x2a237cu: goto label_2a237c;
        case 0x2a2380u: goto label_2a2380;
        case 0x2a2384u: goto label_2a2384;
        case 0x2a2388u: goto label_2a2388;
        case 0x2a238cu: goto label_2a238c;
        case 0x2a2390u: goto label_2a2390;
        case 0x2a2394u: goto label_2a2394;
        case 0x2a2398u: goto label_2a2398;
        case 0x2a239cu: goto label_2a239c;
        case 0x2a23a0u: goto label_2a23a0;
        case 0x2a23a4u: goto label_2a23a4;
        case 0x2a23a8u: goto label_2a23a8;
        case 0x2a23acu: goto label_2a23ac;
        case 0x2a23b0u: goto label_2a23b0;
        case 0x2a23b4u: goto label_2a23b4;
        case 0x2a23b8u: goto label_2a23b8;
        case 0x2a23bcu: goto label_2a23bc;
        case 0x2a23c0u: goto label_2a23c0;
        case 0x2a23c4u: goto label_2a23c4;
        case 0x2a23c8u: goto label_2a23c8;
        case 0x2a23ccu: goto label_2a23cc;
        case 0x2a23d0u: goto label_2a23d0;
        case 0x2a23d4u: goto label_2a23d4;
        case 0x2a23d8u: goto label_2a23d8;
        case 0x2a23dcu: goto label_2a23dc;
        case 0x2a23e0u: goto label_2a23e0;
        case 0x2a23e4u: goto label_2a23e4;
        case 0x2a23e8u: goto label_2a23e8;
        case 0x2a23ecu: goto label_2a23ec;
        case 0x2a23f0u: goto label_2a23f0;
        case 0x2a23f4u: goto label_2a23f4;
        case 0x2a23f8u: goto label_2a23f8;
        case 0x2a23fcu: goto label_2a23fc;
        case 0x2a2400u: goto label_2a2400;
        case 0x2a2404u: goto label_2a2404;
        case 0x2a2408u: goto label_2a2408;
        case 0x2a240cu: goto label_2a240c;
        case 0x2a2410u: goto label_2a2410;
        case 0x2a2414u: goto label_2a2414;
        case 0x2a2418u: goto label_2a2418;
        case 0x2a241cu: goto label_2a241c;
        case 0x2a2420u: goto label_2a2420;
        case 0x2a2424u: goto label_2a2424;
        case 0x2a2428u: goto label_2a2428;
        case 0x2a242cu: goto label_2a242c;
        default: break;
    }

    ctx->pc = 0x2a1ea0u;

label_2a1ea0:
    // 0x2a1ea0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a1ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2a1ea4:
    // 0x2a1ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a1ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a1ea8:
    // 0x2a1ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a1eac:
    // 0x2a1eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a1eb0:
    // 0x2a1eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a1eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a1eb4:
    // 0x2a1eb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a1eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a1eb8:
    // 0x2a1eb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a1eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1ebc:
    // 0x2a1ebc: 0xc040c00  jal         func_103000
label_2a1ec0:
    if (ctx->pc == 0x2A1EC0u) {
        ctx->pc = 0x2A1EC0u;
            // 0x2a1ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1EC4u;
        goto label_2a1ec4;
    }
    ctx->pc = 0x2A1EBCu;
    SET_GPR_U32(ctx, 31, 0x2A1EC4u);
    ctx->pc = 0x2A1EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1EBCu;
            // 0x2a1ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103000u;
    if (runtime->hasFunction(0x103000u)) {
        auto targetFn = runtime->lookupFunction(0x103000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1EC4u; }
        if (ctx->pc != 0x2A1EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103000_0x103000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1EC4u; }
        if (ctx->pc != 0x2A1EC4u) { return; }
    }
    ctx->pc = 0x2A1EC4u;
label_2a1ec4:
    // 0x2a1ec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1ec8:
    // 0x2a1ec8: 0x52020018  beql        $s0, $v0, . + 4 + (0x18 << 2)
label_2a1ecc:
    if (ctx->pc == 0x2A1ECCu) {
        ctx->pc = 0x2A1ECCu;
            // 0x2a1ecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1ED0u;
        goto label_2a1ed0;
    }
    ctx->pc = 0x2A1EC8u;
    {
        const bool branch_taken_0x2a1ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1ec8) {
            ctx->pc = 0x2A1ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1EC8u;
            // 0x2a1ecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A1F2Cu;
            goto label_2a1f2c;
        }
    }
    ctx->pc = 0x2A1ED0u;
label_2a1ed0:
    // 0x2a1ed0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a1ed4:
    // 0x2a1ed4: 0x5202000f  beql        $s0, $v0, . + 4 + (0xF << 2)
label_2a1ed8:
    if (ctx->pc == 0x2A1ED8u) {
        ctx->pc = 0x2A1ED8u;
            // 0x2a1ed8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1EDCu;
        goto label_2a1edc;
    }
    ctx->pc = 0x2A1ED4u;
    {
        const bool branch_taken_0x2a1ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1ed4) {
            ctx->pc = 0x2A1ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1ED4u;
            // 0x2a1ed8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A1F14u;
            goto label_2a1f14;
        }
    }
    ctx->pc = 0x2A1EDCu;
label_2a1edc:
    // 0x2a1edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1ee0:
    // 0x2a1ee0: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_2a1ee4:
    if (ctx->pc == 0x2A1EE4u) {
        ctx->pc = 0x2A1EE8u;
        goto label_2a1ee8;
    }
    ctx->pc = 0x2A1EE0u;
    {
        const bool branch_taken_0x2a1ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1ee0) {
            ctx->pc = 0x2A1F10u;
            goto label_2a1f10;
        }
    }
    ctx->pc = 0x2A1EE8u;
label_2a1ee8:
    // 0x2a1ee8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2a1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a1eec:
    // 0x2a1eec: 0x52020002  beql        $s0, $v0, . + 4 + (0x2 << 2)
label_2a1ef0:
    if (ctx->pc == 0x2A1EF0u) {
        ctx->pc = 0x2A1EF0u;
            // 0x2a1ef0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1EF4u;
        goto label_2a1ef4;
    }
    ctx->pc = 0x2A1EECu;
    {
        const bool branch_taken_0x2a1eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1eec) {
            ctx->pc = 0x2A1EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1EECu;
            // 0x2a1ef0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A1EF8u;
            goto label_2a1ef8;
        }
    }
    ctx->pc = 0x2A1EF4u;
label_2a1ef4:
    // 0x2a1ef4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a1ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1ef8:
    // 0x2a1ef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1efc:
    // 0x2a1efc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a1efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1f00:
    // 0x2a1f00: 0xc0408f6  jal         func_1023D8
label_2a1f04:
    if (ctx->pc == 0x2A1F04u) {
        ctx->pc = 0x2A1F04u;
            // 0x2a1f04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F08u;
        goto label_2a1f08;
    }
    ctx->pc = 0x2A1F00u;
    SET_GPR_U32(ctx, 31, 0x2A1F08u);
    ctx->pc = 0x2A1F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F00u;
            // 0x2a1f04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023D8u;
    if (runtime->hasFunction(0x1023D8u)) {
        auto targetFn = runtime->lookupFunction(0x1023D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F08u; }
        if (ctx->pc != 0x2A1F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001023D8_0x1023d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F08u; }
        if (ctx->pc != 0x2A1F08u) { return; }
    }
    ctx->pc = 0x2A1F08u;
label_2a1f08:
    // 0x2a1f08: 0x1000000d  b           . + 4 + (0xD << 2)
label_2a1f0c:
    if (ctx->pc == 0x2A1F0Cu) {
        ctx->pc = 0x2A1F0Cu;
            // 0x2a1f0c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2A1F10u;
        goto label_2a1f10;
    }
    ctx->pc = 0x2A1F08u;
    {
        const bool branch_taken_0x2a1f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F08u;
            // 0x2a1f0c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f08) {
            ctx->pc = 0x2A1F40u;
            goto label_2a1f40;
        }
    }
    ctx->pc = 0x2A1F10u;
label_2a1f10:
    // 0x2a1f10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a1f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f14:
    // 0x2a1f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f18:
    // 0x2a1f18: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2a1f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2a1f1c:
    // 0x2a1f1c: 0xc0408f6  jal         func_1023D8
label_2a1f20:
    if (ctx->pc == 0x2A1F20u) {
        ctx->pc = 0x2A1F20u;
            // 0x2a1f20: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A1F24u;
        goto label_2a1f24;
    }
    ctx->pc = 0x2A1F1Cu;
    SET_GPR_U32(ctx, 31, 0x2A1F24u);
    ctx->pc = 0x2A1F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F1Cu;
            // 0x2a1f20: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023D8u;
    if (runtime->hasFunction(0x1023D8u)) {
        auto targetFn = runtime->lookupFunction(0x1023D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F24u; }
        if (ctx->pc != 0x2A1F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001023D8_0x1023d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F24u; }
        if (ctx->pc != 0x2A1F24u) { return; }
    }
    ctx->pc = 0x2A1F24u;
label_2a1f24:
    // 0x2a1f24: 0x10000005  b           . + 4 + (0x5 << 2)
label_2a1f28:
    if (ctx->pc == 0x2A1F28u) {
        ctx->pc = 0x2A1F2Cu;
        goto label_2a1f2c;
    }
    ctx->pc = 0x2A1F24u;
    {
        const bool branch_taken_0x2a1f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1f24) {
            ctx->pc = 0x2A1F3Cu;
            goto label_2a1f3c;
        }
    }
    ctx->pc = 0x2A1F2Cu;
label_2a1f2c:
    // 0x2a1f2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1f30:
    // 0x2a1f30: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a1f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a1f34:
    // 0x2a1f34: 0xc0408f6  jal         func_1023D8
label_2a1f38:
    if (ctx->pc == 0x2A1F38u) {
        ctx->pc = 0x2A1F38u;
            // 0x2a1f38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F3Cu;
        goto label_2a1f3c;
    }
    ctx->pc = 0x2A1F34u;
    SET_GPR_U32(ctx, 31, 0x2A1F3Cu);
    ctx->pc = 0x2A1F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F34u;
            // 0x2a1f38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023D8u;
    if (runtime->hasFunction(0x1023D8u)) {
        auto targetFn = runtime->lookupFunction(0x1023D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F3Cu; }
        if (ctx->pc != 0x2A1F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001023D8_0x1023d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F3Cu; }
        if (ctx->pc != 0x2A1F3Cu) { return; }
    }
    ctx->pc = 0x2A1F3Cu;
label_2a1f3c:
    // 0x2a1f3c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2a1f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2a1f40:
    // 0x2a1f40: 0xc0a8a18  jal         func_2A2860
label_2a1f44:
    if (ctx->pc == 0x2A1F44u) {
        ctx->pc = 0x2A1F44u;
            // 0x2a1f44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F48u;
        goto label_2a1f48;
    }
    ctx->pc = 0x2A1F40u;
    SET_GPR_U32(ctx, 31, 0x2A1F48u);
    ctx->pc = 0x2A1F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F40u;
            // 0x2a1f44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2860u;
    if (runtime->hasFunction(0x2A2860u)) {
        auto targetFn = runtime->lookupFunction(0x2A2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F48u; }
        if (ctx->pc != 0x2A1F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2860_0x2a2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F48u; }
        if (ctx->pc != 0x2A1F48u) { return; }
    }
    ctx->pc = 0x2A1F48u;
label_2a1f48:
    // 0x2a1f48: 0xc0a890c  jal         func_2A2430
label_2a1f4c:
    if (ctx->pc == 0x2A1F4Cu) {
        ctx->pc = 0x2A1F4Cu;
            // 0x2a1f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F50u;
        goto label_2a1f50;
    }
    ctx->pc = 0x2A1F48u;
    SET_GPR_U32(ctx, 31, 0x2A1F50u);
    ctx->pc = 0x2A1F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F48u;
            // 0x2a1f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2430u;
    if (runtime->hasFunction(0x2A2430u)) {
        auto targetFn = runtime->lookupFunction(0x2A2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F50u; }
        if (ctx->pc != 0x2A1F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2430_0x2a2430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F50u; }
        if (ctx->pc != 0x2A1F50u) { return; }
    }
    ctx->pc = 0x2A1F50u;
label_2a1f50:
    // 0x2a1f50: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2a1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_2a1f54:
    // 0x2a1f54: 0xc040cc6  jal         func_103318
label_2a1f58:
    if (ctx->pc == 0x2A1F58u) {
        ctx->pc = 0x2A1F58u;
            // 0x2a1f58: 0x24847e70  addiu       $a0, $a0, 0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32368));
        ctx->pc = 0x2A1F5Cu;
        goto label_2a1f5c;
    }
    ctx->pc = 0x2A1F54u;
    SET_GPR_U32(ctx, 31, 0x2A1F5Cu);
    ctx->pc = 0x2A1F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F54u;
            // 0x2a1f58: 0x24847e70  addiu       $a0, $a0, 0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103318u;
    if (runtime->hasFunction(0x103318u)) {
        auto targetFn = runtime->lookupFunction(0x103318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F5Cu; }
        if (ctx->pc != 0x2A1F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103318_0x103318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F5Cu; }
        if (ctx->pc != 0x2A1F5Cu) { return; }
    }
    ctx->pc = 0x2A1F5Cu;
label_2a1f5c:
    // 0x2a1f5c: 0xc040eb6  jal         func_103AD8
label_2a1f60:
    if (ctx->pc == 0x2A1F60u) {
        ctx->pc = 0x2A1F60u;
            // 0x2a1f60: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2A1F64u;
        goto label_2a1f64;
    }
    ctx->pc = 0x2A1F5Cu;
    SET_GPR_U32(ctx, 31, 0x2A1F64u);
    ctx->pc = 0x2A1F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F5Cu;
            // 0x2a1f60: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AD8u;
    if (runtime->hasFunction(0x103AD8u)) {
        auto targetFn = runtime->lookupFunction(0x103AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F64u; }
        if (ctx->pc != 0x2A1F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AD8_0x103ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F64u; }
        if (ctx->pc != 0x2A1F64u) { return; }
    }
    ctx->pc = 0x2A1F64u;
label_2a1f64:
    // 0x2a1f64: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2a1f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2a1f68:
    // 0x2a1f68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f6c:
    // 0x2a1f6c: 0x24a5dcf0  addiu       $a1, $a1, -0x2310
    ctx->pc = 0x2a1f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958320));
label_2a1f70:
    // 0x2a1f70: 0xc040f9c  jal         func_103E70
label_2a1f74:
    if (ctx->pc == 0x2A1F74u) {
        ctx->pc = 0x2A1F74u;
            // 0x2a1f74: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2A1F78u;
        goto label_2a1f78;
    }
    ctx->pc = 0x2A1F70u;
    SET_GPR_U32(ctx, 31, 0x2A1F78u);
    ctx->pc = 0x2A1F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F70u;
            // 0x2a1f74: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103E70u;
    if (runtime->hasFunction(0x103E70u)) {
        auto targetFn = runtime->lookupFunction(0x103E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F78u; }
        if (ctx->pc != 0x2A1F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103E70_0x103e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F78u; }
        if (ctx->pc != 0x2A1F78u) { return; }
    }
    ctx->pc = 0x2A1F78u;
label_2a1f78:
    // 0x2a1f78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a1f7c:
    // 0x2a1f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f80:
    // 0x2a1f80: 0xc04a576  jal         func_1295D8
label_2a1f84:
    if (ctx->pc == 0x2A1F84u) {
        ctx->pc = 0x2A1F84u;
            // 0x2a1f84: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2A1F88u;
        goto label_2a1f88;
    }
    ctx->pc = 0x2A1F80u;
    SET_GPR_U32(ctx, 31, 0x2A1F88u);
    ctx->pc = 0x2A1F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F80u;
            // 0x2a1f84: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F88u; }
        if (ctx->pc != 0x2A1F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F88u; }
        if (ctx->pc != 0x2A1F88u) { return; }
    }
    ctx->pc = 0x2A1F88u;
label_2a1f88:
    // 0x2a1f88: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2a1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2a1f8c:
    // 0x2a1f8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a1f90:
    // 0x2a1f90: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2a1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_2a1f94:
    // 0x2a1f94: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x2a1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
label_2a1f98:
    // 0x2a1f98: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2a1f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_2a1f9c:
    // 0x2a1f9c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x2a1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_2a1fa0:
    // 0x2a1fa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a1fa4:
    // 0x2a1fa4: 0x2442ee40  addiu       $v0, $v0, -0x11C0
    ctx->pc = 0x2a1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
label_2a1fa8:
    // 0x2a1fa8: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2a1fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_2a1fac:
    // 0x2a1fac: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2a1facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_2a1fb0:
    // 0x2a1fb0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2a1fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_2a1fb4:
    // 0x2a1fb4: 0xc0569fc  jal         func_15A7F0
label_2a1fb8:
    if (ctx->pc == 0x2A1FB8u) {
        ctx->pc = 0x2A1FB8u;
            // 0x2a1fb8: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x2A1FBCu;
        goto label_2a1fbc;
    }
    ctx->pc = 0x2A1FB4u;
    SET_GPR_U32(ctx, 31, 0x2A1FBCu);
    ctx->pc = 0x2A1FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1FB4u;
            // 0x2a1fb8: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A7F0u;
    if (runtime->hasFunction(0x15A7F0u)) {
        auto targetFn = runtime->lookupFunction(0x15A7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1FBCu; }
        if (ctx->pc != 0x2A1FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A7F0_0x15a7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1FBCu; }
        if (ctx->pc != 0x2A1FBCu) { return; }
    }
    ctx->pc = 0x2A1FBCu;
label_2a1fbc:
    // 0x2a1fbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1fc0:
    // 0x2a1fc0: 0x52020010  beql        $s0, $v0, . + 4 + (0x10 << 2)
label_2a1fc4:
    if (ctx->pc == 0x2A1FC4u) {
        ctx->pc = 0x2A1FC4u;
            // 0x2a1fc4: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->pc = 0x2A1FC8u;
        goto label_2a1fc8;
    }
    ctx->pc = 0x2A1FC0u;
    {
        const bool branch_taken_0x2a1fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1fc0) {
            ctx->pc = 0x2A1FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1FC0u;
            // 0x2a1fc4: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2004u;
            goto label_2a2004;
        }
    }
    ctx->pc = 0x2A1FC8u;
label_2a1fc8:
    // 0x2a1fc8: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x2a1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_2a1fcc:
    // 0x2a1fcc: 0x3c02c360  lui         $v0, 0xC360
    ctx->pc = 0x2a1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50016 << 16));
label_2a1fd0:
    // 0x2a1fd0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a1fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1fd4:
    // 0x2a1fd4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a1fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a1fd8:
    // 0x2a1fd8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a1fdc:
    // 0x2a1fdc: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2a1fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_2a1fe0:
    // 0x2a1fe0: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x2a1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
label_2a1fe4:
    // 0x2a1fe4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2a1fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a1fe8:
    // 0x2a1fe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a1fec:
    // 0x2a1fec: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x2a1fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_2a1ff0:
    // 0x2a1ff0: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x2a1ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_2a1ff4:
    // 0x2a1ff4: 0xc0573c0  jal         func_15CF00
label_2a1ff8:
    if (ctx->pc == 0x2A1FF8u) {
        ctx->pc = 0x2A1FF8u;
            // 0x2a1ff8: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x2A1FFCu;
        goto label_2a1ffc;
    }
    ctx->pc = 0x2A1FF4u;
    SET_GPR_U32(ctx, 31, 0x2A1FFCu);
    ctx->pc = 0x2A1FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1FF4u;
            // 0x2a1ff8: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF00u;
    if (runtime->hasFunction(0x15CF00u)) {
        auto targetFn = runtime->lookupFunction(0x15CF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1FFCu; }
        if (ctx->pc != 0x2A1FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF00_0x15cf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1FFCu; }
        if (ctx->pc != 0x2A1FFCu) { return; }
    }
    ctx->pc = 0x2A1FFCu;
label_2a1ffc:
    // 0x2a1ffc: 0x1000000e  b           . + 4 + (0xE << 2)
label_2a2000:
    if (ctx->pc == 0x2A2000u) {
        ctx->pc = 0x2A2000u;
            // 0x2a2000: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2A2004u;
        goto label_2a2004;
    }
    ctx->pc = 0x2A1FFCu;
    {
        const bool branch_taken_0x2a1ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1FFCu;
            // 0x2a2000: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ffc) {
            ctx->pc = 0x2A2038u;
            goto label_2a2038;
        }
    }
    ctx->pc = 0x2A2004u;
label_2a2004:
    // 0x2a2004: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x2a2004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
label_2a2008:
    // 0x2a2008: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a2008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a200c:
    // 0x2a200c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a2010:
    // 0x2a2010: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a2010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a2014:
    // 0x2a2014: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2a2014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_2a2018:
    // 0x2a2018: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x2a2018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
label_2a201c:
    // 0x2a201c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2a201cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a2020:
    // 0x2a2020: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a2020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a2024:
    // 0x2a2024: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x2a2024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_2a2028:
    // 0x2a2028: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x2a2028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_2a202c:
    // 0x2a202c: 0xc0573c0  jal         func_15CF00
label_2a2030:
    if (ctx->pc == 0x2A2030u) {
        ctx->pc = 0x2A2030u;
            // 0x2a2030: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x2A2034u;
        goto label_2a2034;
    }
    ctx->pc = 0x2A202Cu;
    SET_GPR_U32(ctx, 31, 0x2A2034u);
    ctx->pc = 0x2A2030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A202Cu;
            // 0x2a2030: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF00u;
    if (runtime->hasFunction(0x15CF00u)) {
        auto targetFn = runtime->lookupFunction(0x15CF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2034u; }
        if (ctx->pc != 0x2A2034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF00_0x15cf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2034u; }
        if (ctx->pc != 0x2A2034u) { return; }
    }
    ctx->pc = 0x2A2034u;
label_2a2034:
    // 0x2a2034: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a2034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a2038:
    // 0x2a2038: 0xc0573cc  jal         func_15CF30
label_2a203c:
    if (ctx->pc == 0x2A203Cu) {
        ctx->pc = 0x2A2040u;
        goto label_2a2040;
    }
    ctx->pc = 0x2A2038u;
    SET_GPR_U32(ctx, 31, 0x2A2040u);
    ctx->pc = 0x15CF30u;
    if (runtime->hasFunction(0x15CF30u)) {
        auto targetFn = runtime->lookupFunction(0x15CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2040u; }
        if (ctx->pc != 0x2A2040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF30_0x15cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2040u; }
        if (ctx->pc != 0x2A2040u) { return; }
    }
    ctx->pc = 0x2A2040u;
label_2a2040:
    // 0x2a2040: 0xc0574b8  jal         func_15D2E0
label_2a2044:
    if (ctx->pc == 0x2A2044u) {
        ctx->pc = 0x2A2044u;
            // 0x2a2044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2048u;
        goto label_2a2048;
    }
    ctx->pc = 0x2A2040u;
    SET_GPR_U32(ctx, 31, 0x2A2048u);
    ctx->pc = 0x2A2044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2040u;
            // 0x2a2044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D2E0u;
    if (runtime->hasFunction(0x15D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x15D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2048u; }
        if (ctx->pc != 0x2A2048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D2E0_0x15d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2048u; }
        if (ctx->pc != 0x2A2048u) { return; }
    }
    ctx->pc = 0x2A2048u;
label_2a2048:
    // 0x2a2048: 0xc0574b8  jal         func_15D2E0
label_2a204c:
    if (ctx->pc == 0x2A204Cu) {
        ctx->pc = 0x2A204Cu;
            // 0x2a204c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A2050u;
        goto label_2a2050;
    }
    ctx->pc = 0x2A2048u;
    SET_GPR_U32(ctx, 31, 0x2A2050u);
    ctx->pc = 0x2A204Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2048u;
            // 0x2a204c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D2E0u;
    if (runtime->hasFunction(0x15D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x15D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2050u; }
        if (ctx->pc != 0x2A2050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D2E0_0x15d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2050u; }
        if (ctx->pc != 0x2A2050u) { return; }
    }
    ctx->pc = 0x2A2050u;
label_2a2050:
    // 0x2a2050: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a2050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a2054:
    // 0x2a2054: 0x52020060  beql        $s0, $v0, . + 4 + (0x60 << 2)
label_2a2058:
    if (ctx->pc == 0x2A2058u) {
        ctx->pc = 0x2A2058u;
            // 0x2a2058: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2A205Cu;
        goto label_2a205c;
    }
    ctx->pc = 0x2A2054u;
    {
        const bool branch_taken_0x2a2054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a2054) {
            ctx->pc = 0x2A2058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2054u;
            // 0x2a2058: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A21D8u;
            goto label_2a21d8;
        }
    }
    ctx->pc = 0x2A205Cu;
label_2a205c:
    // 0x2a205c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a2060:
    // 0x2a2060: 0x52020033  beql        $s0, $v0, . + 4 + (0x33 << 2)
label_2a2064:
    if (ctx->pc == 0x2A2064u) {
        ctx->pc = 0x2A2064u;
            // 0x2a2064: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2A2068u;
        goto label_2a2068;
    }
    ctx->pc = 0x2A2060u;
    {
        const bool branch_taken_0x2a2060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a2060) {
            ctx->pc = 0x2A2064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2060u;
            // 0x2a2064: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2130u;
            goto label_2a2130;
        }
    }
    ctx->pc = 0x2A2068u;
label_2a2068:
    // 0x2a2068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a206c:
    // 0x2a206c: 0x1202002f  beq         $s0, $v0, . + 4 + (0x2F << 2)
label_2a2070:
    if (ctx->pc == 0x2A2070u) {
        ctx->pc = 0x2A2074u;
        goto label_2a2074;
    }
    ctx->pc = 0x2A206Cu;
    {
        const bool branch_taken_0x2a206c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a206c) {
            ctx->pc = 0x2A212Cu;
            goto label_2a212c;
        }
    }
    ctx->pc = 0x2A2074u;
label_2a2074:
    // 0x2a2074: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2a2074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a2078:
    // 0x2a2078: 0x52020002  beql        $s0, $v0, . + 4 + (0x2 << 2)
label_2a207c:
    if (ctx->pc == 0x2A207Cu) {
        ctx->pc = 0x2A207Cu;
            // 0x2a207c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2A2080u;
        goto label_2a2080;
    }
    ctx->pc = 0x2A2078u;
    {
        const bool branch_taken_0x2a2078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a2078) {
            ctx->pc = 0x2A207Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2078u;
            // 0x2a207c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2084u;
            goto label_2a2084;
        }
    }
    ctx->pc = 0x2A2080u;
label_2a2080:
    // 0x2a2080: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a2080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a2084:
    // 0x2a2084: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2a2084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2a2088:
    // 0x2a2088: 0xa7a20032  sh          $v0, 0x32($sp)
    ctx->pc = 0x2a2088u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 2));
label_2a208c:
    // 0x2a208c: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x2a208cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_2a2090:
    // 0x2a2090: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x2a2090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_2a2094:
    // 0x2a2094: 0xa7a3003e  sh          $v1, 0x3E($sp)
    ctx->pc = 0x2a2094u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 3));
label_2a2098:
    // 0x2a2098: 0xa7a20040  sh          $v0, 0x40($sp)
    ctx->pc = 0x2a2098u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 2));
label_2a209c:
    // 0x2a209c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a209cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2a20a0:
    // 0x2a20a0: 0xa7a3003a  sh          $v1, 0x3A($sp)
    ctx->pc = 0x2a20a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 58), (uint16_t)GPR_U32(ctx, 3));
label_2a20a4:
    // 0x2a20a4: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x2a20a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2a20a8:
    // 0x2a20a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a20a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2a20ac:
    // 0x2a20ac: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2a20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2a20b0:
    // 0x2a20b0: 0xa0a20078  sb          $v0, 0x78($a1)
    ctx->pc = 0x2a20b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 2));
label_2a20b4:
    // 0x2a20b4: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x2a20b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_2a20b8:
    // 0x2a20b8: 0x3c024682  lui         $v0, 0x4682
    ctx->pc = 0x2a20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18050 << 16));
label_2a20bc:
    // 0x2a20bc: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x2a20bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_2a20c0:
    // 0x2a20c0: 0x34423555  ori         $v0, $v0, 0x3555
    ctx->pc = 0x2a20c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13653);
label_2a20c4:
    // 0x2a20c4: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2a20c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a20c8:
    // 0x2a20c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a20c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a20cc:
    // 0x2a20cc: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x2a20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_2a20d0:
    // 0x2a20d0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a20d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2a20d4:
    // 0x2a20d4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x2a20d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_2a20d8:
    // 0x2a20d8: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x2a20d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_2a20dc:
    // 0x2a20dc: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x2a20dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_2a20e0:
    // 0x2a20e0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2a20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a20e4:
    // 0x2a20e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a20e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2a20e8:
    // 0x2a20e8: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x2a20e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_2a20ec:
    // 0x2a20ec: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2a20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a20f0:
    // 0x2a20f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a20f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a20f4:
    // 0x2a20f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a20f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a20f8:
    // 0x2a20f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a20f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2a20fc:
    // 0x2a20fc: 0x0  nop
    ctx->pc = 0x2a20fcu;
    // NOP
label_2a2100:
    // 0x2a2100: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x2a2100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_2a2104:
    // 0x2a2104: 0x90a40078  lbu         $a0, 0x78($a1)
    ctx->pc = 0x2a2104u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
label_2a2108:
    // 0x2a2108: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2a2108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2a210c:
    // 0x2a210c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2a210cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2a2110:
    // 0x2a2110: 0x0  nop
    ctx->pc = 0x2a2110u;
    // NOP
label_2a2114:
    // 0x2a2114: 0x1010  mfhi        $v0
    ctx->pc = 0x2a2114u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2a2118:
    // 0x2a2118: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a2118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a211c:
    // 0x2a211c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2a211cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_2a2120:
    // 0x2a2120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a2124:
    // 0x2a2124: 0x10000056  b           . + 4 + (0x56 << 2)
label_2a2128:
    if (ctx->pc == 0x2A2128u) {
        ctx->pc = 0x2A2128u;
            // 0x2a2128: 0xa0a20079  sb          $v0, 0x79($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2A212Cu;
        goto label_2a212c;
    }
    ctx->pc = 0x2A2124u;
    {
        const bool branch_taken_0x2a2124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2124u;
            // 0x2a2128: 0xa0a20079  sb          $v0, 0x79($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2124) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A212Cu;
label_2a212c:
    // 0x2a212c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2a212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2a2130:
    // 0x2a2130: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2a2130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2a2134:
    // 0x2a2134: 0xa7a20032  sh          $v0, 0x32($sp)
    ctx->pc = 0x2a2134u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 2));
label_2a2138:
    // 0x2a2138: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x2a2138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_2a213c:
    // 0x2a213c: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x2a213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_2a2140:
    // 0x2a2140: 0xa7a3003e  sh          $v1, 0x3E($sp)
    ctx->pc = 0x2a2140u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 3));
label_2a2144:
    // 0x2a2144: 0xa7a20040  sh          $v0, 0x40($sp)
    ctx->pc = 0x2a2144u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 2));
label_2a2148:
    // 0x2a2148: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a2148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2a214c:
    // 0x2a214c: 0xa7a3003a  sh          $v1, 0x3A($sp)
    ctx->pc = 0x2a214cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 58), (uint16_t)GPR_U32(ctx, 3));
label_2a2150:
    // 0x2a2150: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x2a2150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2a2154:
    // 0x2a2154: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a2154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2a2158:
    // 0x2a2158: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2a2158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2a215c:
    // 0x2a215c: 0xa0a20078  sb          $v0, 0x78($a1)
    ctx->pc = 0x2a215cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 2));
label_2a2160:
    // 0x2a2160: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x2a2160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_2a2164:
    // 0x2a2164: 0x3c024682  lui         $v0, 0x4682
    ctx->pc = 0x2a2164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18050 << 16));
label_2a2168:
    // 0x2a2168: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x2a2168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_2a216c:
    // 0x2a216c: 0x34423555  ori         $v0, $v0, 0x3555
    ctx->pc = 0x2a216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13653);
label_2a2170:
    // 0x2a2170: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2a2170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2174:
    // 0x2a2174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a2178:
    // 0x2a2178: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x2a2178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_2a217c:
    // 0x2a217c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a217cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2a2180:
    // 0x2a2180: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x2a2180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_2a2184:
    // 0x2a2184: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x2a2184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_2a2188:
    // 0x2a2188: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x2a2188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_2a218c:
    // 0x2a218c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2a218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2190:
    // 0x2a2190: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a2190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2a2194:
    // 0x2a2194: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x2a2194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_2a2198:
    // 0x2a2198: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2a2198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a219c:
    // 0x2a219c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a219cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a21a0:
    // 0x2a21a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a21a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a21a4:
    // 0x2a21a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a21a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2a21a8:
    // 0x2a21a8: 0x0  nop
    ctx->pc = 0x2a21a8u;
    // NOP
label_2a21ac:
    // 0x2a21ac: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x2a21acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_2a21b0:
    // 0x2a21b0: 0x90a40078  lbu         $a0, 0x78($a1)
    ctx->pc = 0x2a21b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
label_2a21b4:
    // 0x2a21b4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2a21b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2a21b8:
    // 0x2a21b8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2a21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2a21bc:
    // 0x2a21bc: 0x0  nop
    ctx->pc = 0x2a21bcu;
    // NOP
label_2a21c0:
    // 0x2a21c0: 0x1010  mfhi        $v0
    ctx->pc = 0x2a21c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2a21c4:
    // 0x2a21c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a21c8:
    // 0x2a21c8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2a21c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_2a21cc:
    // 0x2a21cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a21d0:
    // 0x2a21d0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2a21d4:
    if (ctx->pc == 0x2A21D4u) {
        ctx->pc = 0x2A21D4u;
            // 0x2a21d4: 0xa0a20079  sb          $v0, 0x79($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2A21D8u;
        goto label_2a21d8;
    }
    ctx->pc = 0x2A21D0u;
    {
        const bool branch_taken_0x2a21d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A21D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A21D0u;
            // 0x2a21d4: 0xa0a20079  sb          $v0, 0x79($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21d0) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A21D8u;
label_2a21d8:
    // 0x2a21d8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2a21d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2a21dc:
    // 0x2a21dc: 0xa7a20032  sh          $v0, 0x32($sp)
    ctx->pc = 0x2a21dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 2));
label_2a21e0:
    // 0x2a21e0: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2a21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2a21e4:
    // 0x2a21e4: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x2a21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2a21e8:
    // 0x2a21e8: 0xa7a6003e  sh          $a2, 0x3E($sp)
    ctx->pc = 0x2a21e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 6));
label_2a21ec:
    // 0x2a21ec: 0xa7a20040  sh          $v0, 0x40($sp)
    ctx->pc = 0x2a21ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 2));
label_2a21f0:
    // 0x2a21f0: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x2a21f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_2a21f4:
    // 0x2a21f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2a21f8:
    // 0x2a21f8: 0xa7a6003a  sh          $a2, 0x3A($sp)
    ctx->pc = 0x2a21f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 58), (uint16_t)GPR_U32(ctx, 6));
label_2a21fc:
    // 0x2a21fc: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x2a21fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2a2200:
    // 0x2a2200: 0xa0a30078  sb          $v1, 0x78($a1)
    ctx->pc = 0x2a2200u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 3));
label_2a2204:
    // 0x2a2204: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x2a2204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_2a2208:
    // 0x2a2208: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x2a2208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2a220c:
    // 0x2a220c: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x2a220cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_2a2210:
    // 0x2a2210: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x2a2210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_2a2214:
    // 0x2a2214: 0x3c023f55  lui         $v0, 0x3F55
    ctx->pc = 0x2a2214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16213 << 16));
label_2a2218:
    // 0x2a2218: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2a2218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a221c:
    // 0x2a221c: 0x34445555  ori         $a0, $v0, 0x5555
    ctx->pc = 0x2a221cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
label_2a2220:
    // 0x2a2220: 0x3c024682  lui         $v0, 0x4682
    ctx->pc = 0x2a2220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18050 << 16));
label_2a2224:
    // 0x2a2224: 0x34433555  ori         $v1, $v0, 0x3555
    ctx->pc = 0x2a2224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13653);
label_2a2228:
    // 0x2a2228: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a2228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2a222c:
    // 0x2a222c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2a222cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_2a2230:
    // 0x2a2230: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2a2230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_2a2234:
    // 0x2a2234: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x2a2234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_2a2238:
    // 0x2a2238: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x2a2238u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
label_2a223c:
    // 0x2a223c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a223cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a2240:
    // 0x2a2240: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2a2240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2244:
    // 0x2a2244: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a2244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2a2248:
    // 0x2a2248: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x2a2248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_2a224c:
    // 0x2a224c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2a224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2250:
    // 0x2a2250: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a2250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a2254:
    // 0x2a2254: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a2254u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a2258:
    // 0x2a2258: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a2258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2a225c:
    // 0x2a225c: 0x0  nop
    ctx->pc = 0x2a225cu;
    // NOP
label_2a2260:
    // 0x2a2260: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x2a2260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_2a2264:
    // 0x2a2264: 0x90a30078  lbu         $v1, 0x78($a1)
    ctx->pc = 0x2a2264u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
label_2a2268:
    // 0x2a2268: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2a2268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2a226c:
    // 0x2a226c: 0x1010  mfhi        $v0
    ctx->pc = 0x2a226cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2a2270:
    // 0x2a2270: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2a2270u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_2a2274:
    // 0x2a2274: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2a2274u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2a2278:
    // 0x2a2278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a227c:
    // 0x2a227c: 0xa0a20079  sb          $v0, 0x79($a1)
    ctx->pc = 0x2a227cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 2));
label_2a2280:
    // 0x2a2280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2284:
    // 0x2a2284: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x2a2284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2a2288:
    // 0x2a2288: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x2a2288u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
label_2a228c:
    // 0x2a228c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a2290:
    // 0x2a2290: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a2290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a2294:
    // 0x2a2294: 0xa7a30038  sh          $v1, 0x38($sp)
    ctx->pc = 0x2a2294u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 3));
label_2a2298:
    // 0x2a2298: 0xa7a20036  sh          $v0, 0x36($sp)
    ctx->pc = 0x2a2298u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 2));
label_2a229c:
    // 0x2a229c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2a229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2a22a0:
    // 0x2a22a0: 0xa7a3003c  sh          $v1, 0x3C($sp)
    ctx->pc = 0x2a22a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 60), (uint16_t)GPR_U32(ctx, 3));
label_2a22a4:
    // 0x2a22a4: 0xa7a20042  sh          $v0, 0x42($sp)
    ctx->pc = 0x2a22a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 2));
label_2a22a8:
    // 0x2a22a8: 0xc04f554  jal         func_13D550
label_2a22ac:
    if (ctx->pc == 0x2A22ACu) {
        ctx->pc = 0x2A22ACu;
            // 0x2a22ac: 0xa7a00034  sh          $zero, 0x34($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2A22B0u;
        goto label_2a22b0;
    }
    ctx->pc = 0x2A22A8u;
    SET_GPR_U32(ctx, 31, 0x2A22B0u);
    ctx->pc = 0x2A22ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22A8u;
            // 0x2a22ac: 0xa7a00034  sh          $zero, 0x34($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D550u;
    if (runtime->hasFunction(0x13D550u)) {
        auto targetFn = runtime->lookupFunction(0x13D550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22B0u; }
        if (ctx->pc != 0x2A22B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D550_0x13d550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22B0u; }
        if (ctx->pc != 0x2A22B0u) { return; }
    }
    ctx->pc = 0x2A22B0u;
label_2a22b0:
    // 0x2a22b0: 0xc04e6d4  jal         func_139B50
label_2a22b4:
    if (ctx->pc == 0x2A22B4u) {
        ctx->pc = 0x2A22B4u;
            // 0x2a22b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A22B8u;
        goto label_2a22b8;
    }
    ctx->pc = 0x2A22B0u;
    SET_GPR_U32(ctx, 31, 0x2A22B8u);
    ctx->pc = 0x2A22B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22B0u;
            // 0x2a22b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139B50u;
    if (runtime->hasFunction(0x139B50u)) {
        auto targetFn = runtime->lookupFunction(0x139B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22B8u; }
        if (ctx->pc != 0x2A22B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139B50_0x139b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22B8u; }
        if (ctx->pc != 0x2A22B8u) { return; }
    }
    ctx->pc = 0x2A22B8u;
label_2a22b8:
    // 0x2a22b8: 0xc04e6d4  jal         func_139B50
label_2a22bc:
    if (ctx->pc == 0x2A22BCu) {
        ctx->pc = 0x2A22BCu;
            // 0x2a22bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A22C0u;
        goto label_2a22c0;
    }
    ctx->pc = 0x2A22B8u;
    SET_GPR_U32(ctx, 31, 0x2A22C0u);
    ctx->pc = 0x2A22BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22B8u;
            // 0x2a22bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139B50u;
    if (runtime->hasFunction(0x139B50u)) {
        auto targetFn = runtime->lookupFunction(0x139B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22C0u; }
        if (ctx->pc != 0x2A22C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139B50_0x139b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22C0u; }
        if (ctx->pc != 0x2A22C0u) { return; }
    }
    ctx->pc = 0x2A22C0u;
label_2a22c0:
    // 0x2a22c0: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x2a22c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
label_2a22c4:
    // 0x2a22c4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2a22c8:
    if (ctx->pc == 0x2A22C8u) {
        ctx->pc = 0x2A22C8u;
            // 0x2a22c8: 0x3c04001e  lui         $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
        ctx->pc = 0x2A22CCu;
        goto label_2a22cc;
    }
    ctx->pc = 0x2A22C4u;
    {
        const bool branch_taken_0x2a22c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a22c4) {
            ctx->pc = 0x2A22C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22C4u;
            // 0x2a22c8: 0x3c04001e  lui         $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A22E8u;
            goto label_2a22e8;
        }
    }
    ctx->pc = 0x2A22CCu;
label_2a22cc:
    // 0x2a22cc: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x2a22ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
label_2a22d0:
    // 0x2a22d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x2a22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_2a22d4:
    // 0x2a22d4: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x2a22d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_2a22d8:
    // 0x2a22d8: 0xc04e6dc  jal         func_139B70
label_2a22dc:
    if (ctx->pc == 0x2A22DCu) {
        ctx->pc = 0x2A22DCu;
            // 0x2a22dc: 0x3445c000  ori         $a1, $v0, 0xC000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
        ctx->pc = 0x2A22E0u;
        goto label_2a22e0;
    }
    ctx->pc = 0x2A22D8u;
    SET_GPR_U32(ctx, 31, 0x2A22E0u);
    ctx->pc = 0x2A22DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22D8u;
            // 0x2a22dc: 0x3445c000  ori         $a1, $v0, 0xC000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139B70u;
    if (runtime->hasFunction(0x139B70u)) {
        auto targetFn = runtime->lookupFunction(0x139B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22E0u; }
        if (ctx->pc != 0x2A22E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139B70_0x139b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22E0u; }
        if (ctx->pc != 0x2A22E0u) { return; }
    }
    ctx->pc = 0x2A22E0u;
label_2a22e0:
    // 0x2a22e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a22e4:
    if (ctx->pc == 0x2A22E4u) {
        ctx->pc = 0x2A22E8u;
        goto label_2a22e8;
    }
    ctx->pc = 0x2A22E0u;
    {
        const bool branch_taken_0x2a22e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a22e0) {
            ctx->pc = 0x2A22F0u;
            goto label_2a22f0;
        }
    }
    ctx->pc = 0x2A22E8u;
label_2a22e8:
    // 0x2a22e8: 0xc04e6dc  jal         func_139B70
label_2a22ec:
    if (ctx->pc == 0x2A22ECu) {
        ctx->pc = 0x2A22ECu;
            // 0x2a22ec: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x2A22F0u;
        goto label_2a22f0;
    }
    ctx->pc = 0x2A22E8u;
    SET_GPR_U32(ctx, 31, 0x2A22F0u);
    ctx->pc = 0x2A22ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22E8u;
            // 0x2a22ec: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139B70u;
    if (runtime->hasFunction(0x139B70u)) {
        auto targetFn = runtime->lookupFunction(0x139B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22F0u; }
        if (ctx->pc != 0x2A22F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139B70_0x139b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22F0u; }
        if (ctx->pc != 0x2A22F0u) { return; }
    }
    ctx->pc = 0x2A22F0u;
label_2a22f0:
    // 0x2a22f0: 0xc04e808  jal         func_13A020
label_2a22f4:
    if (ctx->pc == 0x2A22F4u) {
        ctx->pc = 0x2A22F8u;
        goto label_2a22f8;
    }
    ctx->pc = 0x2A22F0u;
    SET_GPR_U32(ctx, 31, 0x2A22F8u);
    ctx->pc = 0x13A020u;
    if (runtime->hasFunction(0x13A020u)) {
        auto targetFn = runtime->lookupFunction(0x13A020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22F8u; }
        if (ctx->pc != 0x2A22F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A020_0x13a020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22F8u; }
        if (ctx->pc != 0x2A22F8u) { return; }
    }
    ctx->pc = 0x2A22F8u;
label_2a22f8:
    // 0x2a22f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a22f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a22fc:
    // 0x2a22fc: 0xc04e800  jal         func_13A000
label_2a2300:
    if (ctx->pc == 0x2A2300u) {
        ctx->pc = 0x2A2300u;
            // 0x2a2300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2304u;
        goto label_2a2304;
    }
    ctx->pc = 0x2A22FCu;
    SET_GPR_U32(ctx, 31, 0x2A2304u);
    ctx->pc = 0x2A2300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A22FCu;
            // 0x2a2300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A000u;
    if (runtime->hasFunction(0x13A000u)) {
        auto targetFn = runtime->lookupFunction(0x13A000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2304u; }
        if (ctx->pc != 0x2A2304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A000_0x13a000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2304u; }
        if (ctx->pc != 0x2A2304u) { return; }
    }
    ctx->pc = 0x2A2304u;
label_2a2304:
    // 0x2a2304: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x2a2304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
label_2a2308:
    // 0x2a2308: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a2308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a230c:
    // 0x2a230c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2a230cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_2a2310:
    // 0x2a2310: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a2310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2314:
    // 0x2a2314: 0x2484ef00  addiu       $a0, $a0, -0x1100
    ctx->pc = 0x2a2314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962944));
label_2a2318:
    // 0x2a2318: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2a2318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_2a231c:
    // 0x2a231c: 0xc04fbac  jal         func_13EEB0
label_2a2320:
    if (ctx->pc == 0x2A2320u) {
        ctx->pc = 0x2A2320u;
            // 0x2a2320: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2A2324u;
        goto label_2a2324;
    }
    ctx->pc = 0x2A231Cu;
    SET_GPR_U32(ctx, 31, 0x2A2324u);
    ctx->pc = 0x2A2320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A231Cu;
            // 0x2a2320: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EEB0u;
    if (runtime->hasFunction(0x13EEB0u)) {
        auto targetFn = runtime->lookupFunction(0x13EEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2324u; }
        if (ctx->pc != 0x2A2324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EEB0_0x13eeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2324u; }
        if (ctx->pc != 0x2A2324u) { return; }
    }
    ctx->pc = 0x2A2324u;
label_2a2324:
    // 0x2a2324: 0xc074aa4  jal         func_1D2A90
label_2a2328:
    if (ctx->pc == 0x2A2328u) {
        ctx->pc = 0x2A232Cu;
        goto label_2a232c;
    }
    ctx->pc = 0x2A2324u;
    SET_GPR_U32(ctx, 31, 0x2A232Cu);
    ctx->pc = 0x1D2A90u;
    if (runtime->hasFunction(0x1D2A90u)) {
        auto targetFn = runtime->lookupFunction(0x1D2A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A232Cu; }
        if (ctx->pc != 0x2A232Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2A90_0x1d2a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A232Cu; }
        if (ctx->pc != 0x2A232Cu) { return; }
    }
    ctx->pc = 0x2A232Cu;
label_2a232c:
    // 0x2a232c: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x2a232cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
label_2a2330:
    // 0x2a2330: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2a2330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2a2334:
    // 0x2a2334: 0x2484eec0  addiu       $a0, $a0, -0x1140
    ctx->pc = 0x2a2334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962880));
label_2a2338:
    // 0x2a2338: 0xc05750c  jal         func_15D430
label_2a233c:
    if (ctx->pc == 0x2A233Cu) {
        ctx->pc = 0x2A233Cu;
            // 0x2a233c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2A2340u;
        goto label_2a2340;
    }
    ctx->pc = 0x2A2338u;
    SET_GPR_U32(ctx, 31, 0x2A2340u);
    ctx->pc = 0x2A233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2338u;
            // 0x2a233c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2340u; }
        if (ctx->pc != 0x2A2340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2340u; }
        if (ctx->pc != 0x2A2340u) { return; }
    }
    ctx->pc = 0x2A2340u;
label_2a2340:
    // 0x2a2340: 0x3c036273  lui         $v1, 0x6273
    ctx->pc = 0x2a2340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25203 << 16));
label_2a2344:
    // 0x2a2344: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2a2344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_2a2348:
    // 0x2a2348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a234c:
    // 0x2a234c: 0x34630415  ori         $v1, $v1, 0x415
    ctx->pc = 0x2a234cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1045);
label_2a2350:
    // 0x2a2350: 0x3c027362  lui         $v0, 0x7362
    ctx->pc = 0x2a2350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29538 << 16));
label_2a2354:
    // 0x2a2354: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a2354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2a2358:
    // 0x2a2358: 0x34421504  ori         $v0, $v0, 0x1504
    ctx->pc = 0x2a2358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5380);
label_2a235c:
    // 0x2a235c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a235cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2360:
    // 0x2a2360: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x2a2360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2a2364:
    // 0x2a2364: 0xc057540  jal         func_15D500
label_2a2368:
    if (ctx->pc == 0x2A2368u) {
        ctx->pc = 0x2A2368u;
            // 0x2a2368: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x2A236Cu;
        goto label_2a236c;
    }
    ctx->pc = 0x2A2364u;
    SET_GPR_U32(ctx, 31, 0x2A236Cu);
    ctx->pc = 0x2A2368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2364u;
            // 0x2a2368: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A236Cu; }
        if (ctx->pc != 0x2A236Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A236Cu; }
        if (ctx->pc != 0x2A236Cu) { return; }
    }
    ctx->pc = 0x2A236Cu;
label_2a236c:
    // 0x2a236c: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x2a236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2a2370:
    // 0x2a2370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a2370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2374:
    // 0x2a2374: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x2a2374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_2a2378:
    // 0x2a2378: 0xc057540  jal         func_15D500
label_2a237c:
    if (ctx->pc == 0x2A237Cu) {
        ctx->pc = 0x2A237Cu;
            // 0x2a237c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2380u;
        goto label_2a2380;
    }
    ctx->pc = 0x2A2378u;
    SET_GPR_U32(ctx, 31, 0x2A2380u);
    ctx->pc = 0x2A237Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2378u;
            // 0x2a237c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2380u; }
        if (ctx->pc != 0x2A2380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2380u; }
        if (ctx->pc != 0x2A2380u) { return; }
    }
    ctx->pc = 0x2A2380u;
label_2a2380:
    // 0x2a2380: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x2a2380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2a2384:
    // 0x2a2384: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a2388:
    // 0x2a2388: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x2a2388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2a238c:
    // 0x2a238c: 0xc057540  jal         func_15D500
label_2a2390:
    if (ctx->pc == 0x2A2390u) {
        ctx->pc = 0x2A2390u;
            // 0x2a2390: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2394u;
        goto label_2a2394;
    }
    ctx->pc = 0x2A238Cu;
    SET_GPR_U32(ctx, 31, 0x2A2394u);
    ctx->pc = 0x2A2390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A238Cu;
            // 0x2a2390: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2394u; }
        if (ctx->pc != 0x2A2394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2394u; }
        if (ctx->pc != 0x2A2394u) { return; }
    }
    ctx->pc = 0x2A2394u;
label_2a2394:
    // 0x2a2394: 0xc057520  jal         func_15D480
label_2a2398:
    if (ctx->pc == 0x2A2398u) {
        ctx->pc = 0x2A2398u;
            // 0x2a2398: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x2A239Cu;
        goto label_2a239c;
    }
    ctx->pc = 0x2A2394u;
    SET_GPR_U32(ctx, 31, 0x2A239Cu);
    ctx->pc = 0x2A2398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2394u;
            // 0x2a2398: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D480u;
    if (runtime->hasFunction(0x15D480u)) {
        auto targetFn = runtime->lookupFunction(0x15D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A239Cu; }
        if (ctx->pc != 0x2A239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D480_0x15d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A239Cu; }
        if (ctx->pc != 0x2A239Cu) { return; }
    }
    ctx->pc = 0x2A239Cu;
label_2a239c:
    // 0x2a239c: 0xc05068c  jal         func_141A30
label_2a23a0:
    if (ctx->pc == 0x2A23A0u) {
        ctx->pc = 0x2A23A0u;
            // 0x2a23a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A23A4u;
        goto label_2a23a4;
    }
    ctx->pc = 0x2A239Cu;
    SET_GPR_U32(ctx, 31, 0x2A23A4u);
    ctx->pc = 0x2A23A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A239Cu;
            // 0x2a23a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A23A4u; }
        if (ctx->pc != 0x2A23A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A23A4u; }
        if (ctx->pc != 0x2A23A4u) { return; }
    }
    ctx->pc = 0x2A23A4u;
label_2a23a4:
    // 0x2a23a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a23a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a23a8:
    // 0x2a23a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2a23a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a23ac:
    // 0x2a23ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a23acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a23b0:
    // 0x2a23b0: 0xc051868  jal         func_1461A0
label_2a23b4:
    if (ctx->pc == 0x2A23B4u) {
        ctx->pc = 0x2A23B4u;
            // 0x2a23b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A23B8u;
        goto label_2a23b8;
    }
    ctx->pc = 0x2A23B0u;
    SET_GPR_U32(ctx, 31, 0x2A23B8u);
    ctx->pc = 0x2A23B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A23B0u;
            // 0x2a23b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1461A0u;
    if (runtime->hasFunction(0x1461A0u)) {
        auto targetFn = runtime->lookupFunction(0x1461A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A23B8u; }
        if (ctx->pc != 0x2A23B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001461A0_0x1461a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A23B8u; }
        if (ctx->pc != 0x2A23B8u) { return; }
    }
    ctx->pc = 0x2A23B8u;
label_2a23b8:
    // 0x2a23b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a23b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a23bc:
    // 0x2a23bc: 0xc0518ac  jal         func_1462B0
label_2a23c0:
    if (ctx->pc == 0x2A23C0u) {
        ctx->pc = 0x2A23C0u;
            // 0x2a23c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A23C4u;
        goto label_2a23c4;
    }
    ctx->pc = 0x2A23BCu;
    SET_GPR_U32(ctx, 31, 0x2A23C4u);
    ctx->pc = 0x2A23C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A23BCu;
            // 0x2a23c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1462B0u;
    if (runtime->hasFunction(0x1462B0u)) {
        auto targetFn = runtime->lookupFunction(0x1462B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A23C4u; }
        if (ctx->pc != 0x2A23C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001462B0_0x1462b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A23C4u; }
        if (ctx->pc != 0x2A23C4u) { return; }
    }
    ctx->pc = 0x2A23C4u;
label_2a23c4:
    // 0x2a23c4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a23c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a23c8:
    // 0x2a23c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a23c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a23cc:
    // 0x2a23cc: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x2a23ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_2a23d0:
    // 0x2a23d0: 0x320f809  jalr        $t9
label_2a23d4:
    if (ctx->pc == 0x2A23D4u) {
        ctx->pc = 0x2A23D4u;
            // 0x2a23d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2A23D8u;
        goto label_2a23d8;
    }
    ctx->pc = 0x2A23D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A23D8u);
        ctx->pc = 0x2A23D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A23D0u;
            // 0x2a23d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A23D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A23D8u; }
            if (ctx->pc != 0x2A23D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A23D8u;
label_2a23d8:
    // 0x2a23d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a23d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a23dc:
    // 0x2a23dc: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2a23dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2a23e0:
    // 0x2a23e0: 0x320f809  jalr        $t9
label_2a23e4:
    if (ctx->pc == 0x2A23E4u) {
        ctx->pc = 0x2A23E4u;
            // 0x2a23e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A23E8u;
        goto label_2a23e8;
    }
    ctx->pc = 0x2A23E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A23E8u);
        ctx->pc = 0x2A23E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A23E0u;
            // 0x2a23e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A23E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A23E8u; }
            if (ctx->pc != 0x2A23E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A23E8u;
label_2a23e8:
    // 0x2a23e8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a23e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a23ec:
    // 0x2a23ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a23ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a23f0:
    // 0x2a23f0: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x2a23f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_2a23f4:
    // 0x2a23f4: 0x320f809  jalr        $t9
label_2a23f8:
    if (ctx->pc == 0x2A23F8u) {
        ctx->pc = 0x2A23F8u;
            // 0x2a23f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A23FCu;
        goto label_2a23fc;
    }
    ctx->pc = 0x2A23F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A23FCu);
        ctx->pc = 0x2A23F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A23F4u;
            // 0x2a23f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A23FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A23FCu; }
            if (ctx->pc != 0x2A23FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2A23FCu;
label_2a23fc:
    // 0x2a23fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a23fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2400:
    // 0x2a2400: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a2400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2404:
    // 0x2a2404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2408:
    // 0x2a2408: 0xc0506b8  jal         func_141AE0
label_2a240c:
    if (ctx->pc == 0x2A240Cu) {
        ctx->pc = 0x2A240Cu;
            // 0x2a240c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A2410u;
        goto label_2a2410;
    }
    ctx->pc = 0x2A2408u;
    SET_GPR_U32(ctx, 31, 0x2A2410u);
    ctx->pc = 0x2A240Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2408u;
            // 0x2a240c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2410u; }
        if (ctx->pc != 0x2A2410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2410u; }
        if (ctx->pc != 0x2A2410u) { return; }
    }
    ctx->pc = 0x2A2410u;
label_2a2410:
    // 0x2a2410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a2410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a2414:
    // 0x2a2414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a2418:
    // 0x2a2418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a241c:
    // 0x2a241c: 0x3e00008  jr          $ra
label_2a2420:
    if (ctx->pc == 0x2A2420u) {
        ctx->pc = 0x2A2420u;
            // 0x2a2420: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2A2424u;
        goto label_2a2424;
    }
    ctx->pc = 0x2A241Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A241Cu;
            // 0x2a2420: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2424u;
label_2a2424:
    // 0x2a2424: 0x0  nop
    ctx->pc = 0x2a2424u;
    // NOP
label_2a2428:
    // 0x2a2428: 0x0  nop
    ctx->pc = 0x2a2428u;
    // NOP
label_2a242c:
    // 0x2a242c: 0x0  nop
    ctx->pc = 0x2a242cu;
    // NOP
}
