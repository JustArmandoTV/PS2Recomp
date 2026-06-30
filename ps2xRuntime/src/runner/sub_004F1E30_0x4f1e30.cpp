#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F1E30
// Address: 0x4f1e30 - 0x4f2700
void sub_004F1E30_0x4f1e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1E30_0x4f1e30");
#endif

    switch (ctx->pc) {
        case 0x4f1e30u: goto label_4f1e30;
        case 0x4f1e34u: goto label_4f1e34;
        case 0x4f1e38u: goto label_4f1e38;
        case 0x4f1e3cu: goto label_4f1e3c;
        case 0x4f1e40u: goto label_4f1e40;
        case 0x4f1e44u: goto label_4f1e44;
        case 0x4f1e48u: goto label_4f1e48;
        case 0x4f1e4cu: goto label_4f1e4c;
        case 0x4f1e50u: goto label_4f1e50;
        case 0x4f1e54u: goto label_4f1e54;
        case 0x4f1e58u: goto label_4f1e58;
        case 0x4f1e5cu: goto label_4f1e5c;
        case 0x4f1e60u: goto label_4f1e60;
        case 0x4f1e64u: goto label_4f1e64;
        case 0x4f1e68u: goto label_4f1e68;
        case 0x4f1e6cu: goto label_4f1e6c;
        case 0x4f1e70u: goto label_4f1e70;
        case 0x4f1e74u: goto label_4f1e74;
        case 0x4f1e78u: goto label_4f1e78;
        case 0x4f1e7cu: goto label_4f1e7c;
        case 0x4f1e80u: goto label_4f1e80;
        case 0x4f1e84u: goto label_4f1e84;
        case 0x4f1e88u: goto label_4f1e88;
        case 0x4f1e8cu: goto label_4f1e8c;
        case 0x4f1e90u: goto label_4f1e90;
        case 0x4f1e94u: goto label_4f1e94;
        case 0x4f1e98u: goto label_4f1e98;
        case 0x4f1e9cu: goto label_4f1e9c;
        case 0x4f1ea0u: goto label_4f1ea0;
        case 0x4f1ea4u: goto label_4f1ea4;
        case 0x4f1ea8u: goto label_4f1ea8;
        case 0x4f1eacu: goto label_4f1eac;
        case 0x4f1eb0u: goto label_4f1eb0;
        case 0x4f1eb4u: goto label_4f1eb4;
        case 0x4f1eb8u: goto label_4f1eb8;
        case 0x4f1ebcu: goto label_4f1ebc;
        case 0x4f1ec0u: goto label_4f1ec0;
        case 0x4f1ec4u: goto label_4f1ec4;
        case 0x4f1ec8u: goto label_4f1ec8;
        case 0x4f1eccu: goto label_4f1ecc;
        case 0x4f1ed0u: goto label_4f1ed0;
        case 0x4f1ed4u: goto label_4f1ed4;
        case 0x4f1ed8u: goto label_4f1ed8;
        case 0x4f1edcu: goto label_4f1edc;
        case 0x4f1ee0u: goto label_4f1ee0;
        case 0x4f1ee4u: goto label_4f1ee4;
        case 0x4f1ee8u: goto label_4f1ee8;
        case 0x4f1eecu: goto label_4f1eec;
        case 0x4f1ef0u: goto label_4f1ef0;
        case 0x4f1ef4u: goto label_4f1ef4;
        case 0x4f1ef8u: goto label_4f1ef8;
        case 0x4f1efcu: goto label_4f1efc;
        case 0x4f1f00u: goto label_4f1f00;
        case 0x4f1f04u: goto label_4f1f04;
        case 0x4f1f08u: goto label_4f1f08;
        case 0x4f1f0cu: goto label_4f1f0c;
        case 0x4f1f10u: goto label_4f1f10;
        case 0x4f1f14u: goto label_4f1f14;
        case 0x4f1f18u: goto label_4f1f18;
        case 0x4f1f1cu: goto label_4f1f1c;
        case 0x4f1f20u: goto label_4f1f20;
        case 0x4f1f24u: goto label_4f1f24;
        case 0x4f1f28u: goto label_4f1f28;
        case 0x4f1f2cu: goto label_4f1f2c;
        case 0x4f1f30u: goto label_4f1f30;
        case 0x4f1f34u: goto label_4f1f34;
        case 0x4f1f38u: goto label_4f1f38;
        case 0x4f1f3cu: goto label_4f1f3c;
        case 0x4f1f40u: goto label_4f1f40;
        case 0x4f1f44u: goto label_4f1f44;
        case 0x4f1f48u: goto label_4f1f48;
        case 0x4f1f4cu: goto label_4f1f4c;
        case 0x4f1f50u: goto label_4f1f50;
        case 0x4f1f54u: goto label_4f1f54;
        case 0x4f1f58u: goto label_4f1f58;
        case 0x4f1f5cu: goto label_4f1f5c;
        case 0x4f1f60u: goto label_4f1f60;
        case 0x4f1f64u: goto label_4f1f64;
        case 0x4f1f68u: goto label_4f1f68;
        case 0x4f1f6cu: goto label_4f1f6c;
        case 0x4f1f70u: goto label_4f1f70;
        case 0x4f1f74u: goto label_4f1f74;
        case 0x4f1f78u: goto label_4f1f78;
        case 0x4f1f7cu: goto label_4f1f7c;
        case 0x4f1f80u: goto label_4f1f80;
        case 0x4f1f84u: goto label_4f1f84;
        case 0x4f1f88u: goto label_4f1f88;
        case 0x4f1f8cu: goto label_4f1f8c;
        case 0x4f1f90u: goto label_4f1f90;
        case 0x4f1f94u: goto label_4f1f94;
        case 0x4f1f98u: goto label_4f1f98;
        case 0x4f1f9cu: goto label_4f1f9c;
        case 0x4f1fa0u: goto label_4f1fa0;
        case 0x4f1fa4u: goto label_4f1fa4;
        case 0x4f1fa8u: goto label_4f1fa8;
        case 0x4f1facu: goto label_4f1fac;
        case 0x4f1fb0u: goto label_4f1fb0;
        case 0x4f1fb4u: goto label_4f1fb4;
        case 0x4f1fb8u: goto label_4f1fb8;
        case 0x4f1fbcu: goto label_4f1fbc;
        case 0x4f1fc0u: goto label_4f1fc0;
        case 0x4f1fc4u: goto label_4f1fc4;
        case 0x4f1fc8u: goto label_4f1fc8;
        case 0x4f1fccu: goto label_4f1fcc;
        case 0x4f1fd0u: goto label_4f1fd0;
        case 0x4f1fd4u: goto label_4f1fd4;
        case 0x4f1fd8u: goto label_4f1fd8;
        case 0x4f1fdcu: goto label_4f1fdc;
        case 0x4f1fe0u: goto label_4f1fe0;
        case 0x4f1fe4u: goto label_4f1fe4;
        case 0x4f1fe8u: goto label_4f1fe8;
        case 0x4f1fecu: goto label_4f1fec;
        case 0x4f1ff0u: goto label_4f1ff0;
        case 0x4f1ff4u: goto label_4f1ff4;
        case 0x4f1ff8u: goto label_4f1ff8;
        case 0x4f1ffcu: goto label_4f1ffc;
        case 0x4f2000u: goto label_4f2000;
        case 0x4f2004u: goto label_4f2004;
        case 0x4f2008u: goto label_4f2008;
        case 0x4f200cu: goto label_4f200c;
        case 0x4f2010u: goto label_4f2010;
        case 0x4f2014u: goto label_4f2014;
        case 0x4f2018u: goto label_4f2018;
        case 0x4f201cu: goto label_4f201c;
        case 0x4f2020u: goto label_4f2020;
        case 0x4f2024u: goto label_4f2024;
        case 0x4f2028u: goto label_4f2028;
        case 0x4f202cu: goto label_4f202c;
        case 0x4f2030u: goto label_4f2030;
        case 0x4f2034u: goto label_4f2034;
        case 0x4f2038u: goto label_4f2038;
        case 0x4f203cu: goto label_4f203c;
        case 0x4f2040u: goto label_4f2040;
        case 0x4f2044u: goto label_4f2044;
        case 0x4f2048u: goto label_4f2048;
        case 0x4f204cu: goto label_4f204c;
        case 0x4f2050u: goto label_4f2050;
        case 0x4f2054u: goto label_4f2054;
        case 0x4f2058u: goto label_4f2058;
        case 0x4f205cu: goto label_4f205c;
        case 0x4f2060u: goto label_4f2060;
        case 0x4f2064u: goto label_4f2064;
        case 0x4f2068u: goto label_4f2068;
        case 0x4f206cu: goto label_4f206c;
        case 0x4f2070u: goto label_4f2070;
        case 0x4f2074u: goto label_4f2074;
        case 0x4f2078u: goto label_4f2078;
        case 0x4f207cu: goto label_4f207c;
        case 0x4f2080u: goto label_4f2080;
        case 0x4f2084u: goto label_4f2084;
        case 0x4f2088u: goto label_4f2088;
        case 0x4f208cu: goto label_4f208c;
        case 0x4f2090u: goto label_4f2090;
        case 0x4f2094u: goto label_4f2094;
        case 0x4f2098u: goto label_4f2098;
        case 0x4f209cu: goto label_4f209c;
        case 0x4f20a0u: goto label_4f20a0;
        case 0x4f20a4u: goto label_4f20a4;
        case 0x4f20a8u: goto label_4f20a8;
        case 0x4f20acu: goto label_4f20ac;
        case 0x4f20b0u: goto label_4f20b0;
        case 0x4f20b4u: goto label_4f20b4;
        case 0x4f20b8u: goto label_4f20b8;
        case 0x4f20bcu: goto label_4f20bc;
        case 0x4f20c0u: goto label_4f20c0;
        case 0x4f20c4u: goto label_4f20c4;
        case 0x4f20c8u: goto label_4f20c8;
        case 0x4f20ccu: goto label_4f20cc;
        case 0x4f20d0u: goto label_4f20d0;
        case 0x4f20d4u: goto label_4f20d4;
        case 0x4f20d8u: goto label_4f20d8;
        case 0x4f20dcu: goto label_4f20dc;
        case 0x4f20e0u: goto label_4f20e0;
        case 0x4f20e4u: goto label_4f20e4;
        case 0x4f20e8u: goto label_4f20e8;
        case 0x4f20ecu: goto label_4f20ec;
        case 0x4f20f0u: goto label_4f20f0;
        case 0x4f20f4u: goto label_4f20f4;
        case 0x4f20f8u: goto label_4f20f8;
        case 0x4f20fcu: goto label_4f20fc;
        case 0x4f2100u: goto label_4f2100;
        case 0x4f2104u: goto label_4f2104;
        case 0x4f2108u: goto label_4f2108;
        case 0x4f210cu: goto label_4f210c;
        case 0x4f2110u: goto label_4f2110;
        case 0x4f2114u: goto label_4f2114;
        case 0x4f2118u: goto label_4f2118;
        case 0x4f211cu: goto label_4f211c;
        case 0x4f2120u: goto label_4f2120;
        case 0x4f2124u: goto label_4f2124;
        case 0x4f2128u: goto label_4f2128;
        case 0x4f212cu: goto label_4f212c;
        case 0x4f2130u: goto label_4f2130;
        case 0x4f2134u: goto label_4f2134;
        case 0x4f2138u: goto label_4f2138;
        case 0x4f213cu: goto label_4f213c;
        case 0x4f2140u: goto label_4f2140;
        case 0x4f2144u: goto label_4f2144;
        case 0x4f2148u: goto label_4f2148;
        case 0x4f214cu: goto label_4f214c;
        case 0x4f2150u: goto label_4f2150;
        case 0x4f2154u: goto label_4f2154;
        case 0x4f2158u: goto label_4f2158;
        case 0x4f215cu: goto label_4f215c;
        case 0x4f2160u: goto label_4f2160;
        case 0x4f2164u: goto label_4f2164;
        case 0x4f2168u: goto label_4f2168;
        case 0x4f216cu: goto label_4f216c;
        case 0x4f2170u: goto label_4f2170;
        case 0x4f2174u: goto label_4f2174;
        case 0x4f2178u: goto label_4f2178;
        case 0x4f217cu: goto label_4f217c;
        case 0x4f2180u: goto label_4f2180;
        case 0x4f2184u: goto label_4f2184;
        case 0x4f2188u: goto label_4f2188;
        case 0x4f218cu: goto label_4f218c;
        case 0x4f2190u: goto label_4f2190;
        case 0x4f2194u: goto label_4f2194;
        case 0x4f2198u: goto label_4f2198;
        case 0x4f219cu: goto label_4f219c;
        case 0x4f21a0u: goto label_4f21a0;
        case 0x4f21a4u: goto label_4f21a4;
        case 0x4f21a8u: goto label_4f21a8;
        case 0x4f21acu: goto label_4f21ac;
        case 0x4f21b0u: goto label_4f21b0;
        case 0x4f21b4u: goto label_4f21b4;
        case 0x4f21b8u: goto label_4f21b8;
        case 0x4f21bcu: goto label_4f21bc;
        case 0x4f21c0u: goto label_4f21c0;
        case 0x4f21c4u: goto label_4f21c4;
        case 0x4f21c8u: goto label_4f21c8;
        case 0x4f21ccu: goto label_4f21cc;
        case 0x4f21d0u: goto label_4f21d0;
        case 0x4f21d4u: goto label_4f21d4;
        case 0x4f21d8u: goto label_4f21d8;
        case 0x4f21dcu: goto label_4f21dc;
        case 0x4f21e0u: goto label_4f21e0;
        case 0x4f21e4u: goto label_4f21e4;
        case 0x4f21e8u: goto label_4f21e8;
        case 0x4f21ecu: goto label_4f21ec;
        case 0x4f21f0u: goto label_4f21f0;
        case 0x4f21f4u: goto label_4f21f4;
        case 0x4f21f8u: goto label_4f21f8;
        case 0x4f21fcu: goto label_4f21fc;
        case 0x4f2200u: goto label_4f2200;
        case 0x4f2204u: goto label_4f2204;
        case 0x4f2208u: goto label_4f2208;
        case 0x4f220cu: goto label_4f220c;
        case 0x4f2210u: goto label_4f2210;
        case 0x4f2214u: goto label_4f2214;
        case 0x4f2218u: goto label_4f2218;
        case 0x4f221cu: goto label_4f221c;
        case 0x4f2220u: goto label_4f2220;
        case 0x4f2224u: goto label_4f2224;
        case 0x4f2228u: goto label_4f2228;
        case 0x4f222cu: goto label_4f222c;
        case 0x4f2230u: goto label_4f2230;
        case 0x4f2234u: goto label_4f2234;
        case 0x4f2238u: goto label_4f2238;
        case 0x4f223cu: goto label_4f223c;
        case 0x4f2240u: goto label_4f2240;
        case 0x4f2244u: goto label_4f2244;
        case 0x4f2248u: goto label_4f2248;
        case 0x4f224cu: goto label_4f224c;
        case 0x4f2250u: goto label_4f2250;
        case 0x4f2254u: goto label_4f2254;
        case 0x4f2258u: goto label_4f2258;
        case 0x4f225cu: goto label_4f225c;
        case 0x4f2260u: goto label_4f2260;
        case 0x4f2264u: goto label_4f2264;
        case 0x4f2268u: goto label_4f2268;
        case 0x4f226cu: goto label_4f226c;
        case 0x4f2270u: goto label_4f2270;
        case 0x4f2274u: goto label_4f2274;
        case 0x4f2278u: goto label_4f2278;
        case 0x4f227cu: goto label_4f227c;
        case 0x4f2280u: goto label_4f2280;
        case 0x4f2284u: goto label_4f2284;
        case 0x4f2288u: goto label_4f2288;
        case 0x4f228cu: goto label_4f228c;
        case 0x4f2290u: goto label_4f2290;
        case 0x4f2294u: goto label_4f2294;
        case 0x4f2298u: goto label_4f2298;
        case 0x4f229cu: goto label_4f229c;
        case 0x4f22a0u: goto label_4f22a0;
        case 0x4f22a4u: goto label_4f22a4;
        case 0x4f22a8u: goto label_4f22a8;
        case 0x4f22acu: goto label_4f22ac;
        case 0x4f22b0u: goto label_4f22b0;
        case 0x4f22b4u: goto label_4f22b4;
        case 0x4f22b8u: goto label_4f22b8;
        case 0x4f22bcu: goto label_4f22bc;
        case 0x4f22c0u: goto label_4f22c0;
        case 0x4f22c4u: goto label_4f22c4;
        case 0x4f22c8u: goto label_4f22c8;
        case 0x4f22ccu: goto label_4f22cc;
        case 0x4f22d0u: goto label_4f22d0;
        case 0x4f22d4u: goto label_4f22d4;
        case 0x4f22d8u: goto label_4f22d8;
        case 0x4f22dcu: goto label_4f22dc;
        case 0x4f22e0u: goto label_4f22e0;
        case 0x4f22e4u: goto label_4f22e4;
        case 0x4f22e8u: goto label_4f22e8;
        case 0x4f22ecu: goto label_4f22ec;
        case 0x4f22f0u: goto label_4f22f0;
        case 0x4f22f4u: goto label_4f22f4;
        case 0x4f22f8u: goto label_4f22f8;
        case 0x4f22fcu: goto label_4f22fc;
        case 0x4f2300u: goto label_4f2300;
        case 0x4f2304u: goto label_4f2304;
        case 0x4f2308u: goto label_4f2308;
        case 0x4f230cu: goto label_4f230c;
        case 0x4f2310u: goto label_4f2310;
        case 0x4f2314u: goto label_4f2314;
        case 0x4f2318u: goto label_4f2318;
        case 0x4f231cu: goto label_4f231c;
        case 0x4f2320u: goto label_4f2320;
        case 0x4f2324u: goto label_4f2324;
        case 0x4f2328u: goto label_4f2328;
        case 0x4f232cu: goto label_4f232c;
        case 0x4f2330u: goto label_4f2330;
        case 0x4f2334u: goto label_4f2334;
        case 0x4f2338u: goto label_4f2338;
        case 0x4f233cu: goto label_4f233c;
        case 0x4f2340u: goto label_4f2340;
        case 0x4f2344u: goto label_4f2344;
        case 0x4f2348u: goto label_4f2348;
        case 0x4f234cu: goto label_4f234c;
        case 0x4f2350u: goto label_4f2350;
        case 0x4f2354u: goto label_4f2354;
        case 0x4f2358u: goto label_4f2358;
        case 0x4f235cu: goto label_4f235c;
        case 0x4f2360u: goto label_4f2360;
        case 0x4f2364u: goto label_4f2364;
        case 0x4f2368u: goto label_4f2368;
        case 0x4f236cu: goto label_4f236c;
        case 0x4f2370u: goto label_4f2370;
        case 0x4f2374u: goto label_4f2374;
        case 0x4f2378u: goto label_4f2378;
        case 0x4f237cu: goto label_4f237c;
        case 0x4f2380u: goto label_4f2380;
        case 0x4f2384u: goto label_4f2384;
        case 0x4f2388u: goto label_4f2388;
        case 0x4f238cu: goto label_4f238c;
        case 0x4f2390u: goto label_4f2390;
        case 0x4f2394u: goto label_4f2394;
        case 0x4f2398u: goto label_4f2398;
        case 0x4f239cu: goto label_4f239c;
        case 0x4f23a0u: goto label_4f23a0;
        case 0x4f23a4u: goto label_4f23a4;
        case 0x4f23a8u: goto label_4f23a8;
        case 0x4f23acu: goto label_4f23ac;
        case 0x4f23b0u: goto label_4f23b0;
        case 0x4f23b4u: goto label_4f23b4;
        case 0x4f23b8u: goto label_4f23b8;
        case 0x4f23bcu: goto label_4f23bc;
        case 0x4f23c0u: goto label_4f23c0;
        case 0x4f23c4u: goto label_4f23c4;
        case 0x4f23c8u: goto label_4f23c8;
        case 0x4f23ccu: goto label_4f23cc;
        case 0x4f23d0u: goto label_4f23d0;
        case 0x4f23d4u: goto label_4f23d4;
        case 0x4f23d8u: goto label_4f23d8;
        case 0x4f23dcu: goto label_4f23dc;
        case 0x4f23e0u: goto label_4f23e0;
        case 0x4f23e4u: goto label_4f23e4;
        case 0x4f23e8u: goto label_4f23e8;
        case 0x4f23ecu: goto label_4f23ec;
        case 0x4f23f0u: goto label_4f23f0;
        case 0x4f23f4u: goto label_4f23f4;
        case 0x4f23f8u: goto label_4f23f8;
        case 0x4f23fcu: goto label_4f23fc;
        case 0x4f2400u: goto label_4f2400;
        case 0x4f2404u: goto label_4f2404;
        case 0x4f2408u: goto label_4f2408;
        case 0x4f240cu: goto label_4f240c;
        case 0x4f2410u: goto label_4f2410;
        case 0x4f2414u: goto label_4f2414;
        case 0x4f2418u: goto label_4f2418;
        case 0x4f241cu: goto label_4f241c;
        case 0x4f2420u: goto label_4f2420;
        case 0x4f2424u: goto label_4f2424;
        case 0x4f2428u: goto label_4f2428;
        case 0x4f242cu: goto label_4f242c;
        case 0x4f2430u: goto label_4f2430;
        case 0x4f2434u: goto label_4f2434;
        case 0x4f2438u: goto label_4f2438;
        case 0x4f243cu: goto label_4f243c;
        case 0x4f2440u: goto label_4f2440;
        case 0x4f2444u: goto label_4f2444;
        case 0x4f2448u: goto label_4f2448;
        case 0x4f244cu: goto label_4f244c;
        case 0x4f2450u: goto label_4f2450;
        case 0x4f2454u: goto label_4f2454;
        case 0x4f2458u: goto label_4f2458;
        case 0x4f245cu: goto label_4f245c;
        case 0x4f2460u: goto label_4f2460;
        case 0x4f2464u: goto label_4f2464;
        case 0x4f2468u: goto label_4f2468;
        case 0x4f246cu: goto label_4f246c;
        case 0x4f2470u: goto label_4f2470;
        case 0x4f2474u: goto label_4f2474;
        case 0x4f2478u: goto label_4f2478;
        case 0x4f247cu: goto label_4f247c;
        case 0x4f2480u: goto label_4f2480;
        case 0x4f2484u: goto label_4f2484;
        case 0x4f2488u: goto label_4f2488;
        case 0x4f248cu: goto label_4f248c;
        case 0x4f2490u: goto label_4f2490;
        case 0x4f2494u: goto label_4f2494;
        case 0x4f2498u: goto label_4f2498;
        case 0x4f249cu: goto label_4f249c;
        case 0x4f24a0u: goto label_4f24a0;
        case 0x4f24a4u: goto label_4f24a4;
        case 0x4f24a8u: goto label_4f24a8;
        case 0x4f24acu: goto label_4f24ac;
        case 0x4f24b0u: goto label_4f24b0;
        case 0x4f24b4u: goto label_4f24b4;
        case 0x4f24b8u: goto label_4f24b8;
        case 0x4f24bcu: goto label_4f24bc;
        case 0x4f24c0u: goto label_4f24c0;
        case 0x4f24c4u: goto label_4f24c4;
        case 0x4f24c8u: goto label_4f24c8;
        case 0x4f24ccu: goto label_4f24cc;
        case 0x4f24d0u: goto label_4f24d0;
        case 0x4f24d4u: goto label_4f24d4;
        case 0x4f24d8u: goto label_4f24d8;
        case 0x4f24dcu: goto label_4f24dc;
        case 0x4f24e0u: goto label_4f24e0;
        case 0x4f24e4u: goto label_4f24e4;
        case 0x4f24e8u: goto label_4f24e8;
        case 0x4f24ecu: goto label_4f24ec;
        case 0x4f24f0u: goto label_4f24f0;
        case 0x4f24f4u: goto label_4f24f4;
        case 0x4f24f8u: goto label_4f24f8;
        case 0x4f24fcu: goto label_4f24fc;
        case 0x4f2500u: goto label_4f2500;
        case 0x4f2504u: goto label_4f2504;
        case 0x4f2508u: goto label_4f2508;
        case 0x4f250cu: goto label_4f250c;
        case 0x4f2510u: goto label_4f2510;
        case 0x4f2514u: goto label_4f2514;
        case 0x4f2518u: goto label_4f2518;
        case 0x4f251cu: goto label_4f251c;
        case 0x4f2520u: goto label_4f2520;
        case 0x4f2524u: goto label_4f2524;
        case 0x4f2528u: goto label_4f2528;
        case 0x4f252cu: goto label_4f252c;
        case 0x4f2530u: goto label_4f2530;
        case 0x4f2534u: goto label_4f2534;
        case 0x4f2538u: goto label_4f2538;
        case 0x4f253cu: goto label_4f253c;
        case 0x4f2540u: goto label_4f2540;
        case 0x4f2544u: goto label_4f2544;
        case 0x4f2548u: goto label_4f2548;
        case 0x4f254cu: goto label_4f254c;
        case 0x4f2550u: goto label_4f2550;
        case 0x4f2554u: goto label_4f2554;
        case 0x4f2558u: goto label_4f2558;
        case 0x4f255cu: goto label_4f255c;
        case 0x4f2560u: goto label_4f2560;
        case 0x4f2564u: goto label_4f2564;
        case 0x4f2568u: goto label_4f2568;
        case 0x4f256cu: goto label_4f256c;
        case 0x4f2570u: goto label_4f2570;
        case 0x4f2574u: goto label_4f2574;
        case 0x4f2578u: goto label_4f2578;
        case 0x4f257cu: goto label_4f257c;
        case 0x4f2580u: goto label_4f2580;
        case 0x4f2584u: goto label_4f2584;
        case 0x4f2588u: goto label_4f2588;
        case 0x4f258cu: goto label_4f258c;
        case 0x4f2590u: goto label_4f2590;
        case 0x4f2594u: goto label_4f2594;
        case 0x4f2598u: goto label_4f2598;
        case 0x4f259cu: goto label_4f259c;
        case 0x4f25a0u: goto label_4f25a0;
        case 0x4f25a4u: goto label_4f25a4;
        case 0x4f25a8u: goto label_4f25a8;
        case 0x4f25acu: goto label_4f25ac;
        case 0x4f25b0u: goto label_4f25b0;
        case 0x4f25b4u: goto label_4f25b4;
        case 0x4f25b8u: goto label_4f25b8;
        case 0x4f25bcu: goto label_4f25bc;
        case 0x4f25c0u: goto label_4f25c0;
        case 0x4f25c4u: goto label_4f25c4;
        case 0x4f25c8u: goto label_4f25c8;
        case 0x4f25ccu: goto label_4f25cc;
        case 0x4f25d0u: goto label_4f25d0;
        case 0x4f25d4u: goto label_4f25d4;
        case 0x4f25d8u: goto label_4f25d8;
        case 0x4f25dcu: goto label_4f25dc;
        case 0x4f25e0u: goto label_4f25e0;
        case 0x4f25e4u: goto label_4f25e4;
        case 0x4f25e8u: goto label_4f25e8;
        case 0x4f25ecu: goto label_4f25ec;
        case 0x4f25f0u: goto label_4f25f0;
        case 0x4f25f4u: goto label_4f25f4;
        case 0x4f25f8u: goto label_4f25f8;
        case 0x4f25fcu: goto label_4f25fc;
        case 0x4f2600u: goto label_4f2600;
        case 0x4f2604u: goto label_4f2604;
        case 0x4f2608u: goto label_4f2608;
        case 0x4f260cu: goto label_4f260c;
        case 0x4f2610u: goto label_4f2610;
        case 0x4f2614u: goto label_4f2614;
        case 0x4f2618u: goto label_4f2618;
        case 0x4f261cu: goto label_4f261c;
        case 0x4f2620u: goto label_4f2620;
        case 0x4f2624u: goto label_4f2624;
        case 0x4f2628u: goto label_4f2628;
        case 0x4f262cu: goto label_4f262c;
        case 0x4f2630u: goto label_4f2630;
        case 0x4f2634u: goto label_4f2634;
        case 0x4f2638u: goto label_4f2638;
        case 0x4f263cu: goto label_4f263c;
        case 0x4f2640u: goto label_4f2640;
        case 0x4f2644u: goto label_4f2644;
        case 0x4f2648u: goto label_4f2648;
        case 0x4f264cu: goto label_4f264c;
        case 0x4f2650u: goto label_4f2650;
        case 0x4f2654u: goto label_4f2654;
        case 0x4f2658u: goto label_4f2658;
        case 0x4f265cu: goto label_4f265c;
        case 0x4f2660u: goto label_4f2660;
        case 0x4f2664u: goto label_4f2664;
        case 0x4f2668u: goto label_4f2668;
        case 0x4f266cu: goto label_4f266c;
        case 0x4f2670u: goto label_4f2670;
        case 0x4f2674u: goto label_4f2674;
        case 0x4f2678u: goto label_4f2678;
        case 0x4f267cu: goto label_4f267c;
        case 0x4f2680u: goto label_4f2680;
        case 0x4f2684u: goto label_4f2684;
        case 0x4f2688u: goto label_4f2688;
        case 0x4f268cu: goto label_4f268c;
        case 0x4f2690u: goto label_4f2690;
        case 0x4f2694u: goto label_4f2694;
        case 0x4f2698u: goto label_4f2698;
        case 0x4f269cu: goto label_4f269c;
        case 0x4f26a0u: goto label_4f26a0;
        case 0x4f26a4u: goto label_4f26a4;
        case 0x4f26a8u: goto label_4f26a8;
        case 0x4f26acu: goto label_4f26ac;
        case 0x4f26b0u: goto label_4f26b0;
        case 0x4f26b4u: goto label_4f26b4;
        case 0x4f26b8u: goto label_4f26b8;
        case 0x4f26bcu: goto label_4f26bc;
        case 0x4f26c0u: goto label_4f26c0;
        case 0x4f26c4u: goto label_4f26c4;
        case 0x4f26c8u: goto label_4f26c8;
        case 0x4f26ccu: goto label_4f26cc;
        case 0x4f26d0u: goto label_4f26d0;
        case 0x4f26d4u: goto label_4f26d4;
        case 0x4f26d8u: goto label_4f26d8;
        case 0x4f26dcu: goto label_4f26dc;
        case 0x4f26e0u: goto label_4f26e0;
        case 0x4f26e4u: goto label_4f26e4;
        case 0x4f26e8u: goto label_4f26e8;
        case 0x4f26ecu: goto label_4f26ec;
        case 0x4f26f0u: goto label_4f26f0;
        case 0x4f26f4u: goto label_4f26f4;
        case 0x4f26f8u: goto label_4f26f8;
        case 0x4f26fcu: goto label_4f26fc;
        default: break;
    }

    ctx->pc = 0x4f1e30u;

label_4f1e30:
    // 0x4f1e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f1e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f1e34:
    // 0x4f1e34: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_4f1e38:
    if (ctx->pc == 0x4F1E38u) {
        ctx->pc = 0x4F1E38u;
            // 0x4f1e38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x4F1E3Cu;
        goto label_4f1e3c;
    }
    ctx->pc = 0x4F1E34u;
    {
        const bool branch_taken_0x4f1e34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1E34u;
            // 0x4f1e38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1e34) {
            ctx->pc = 0x4F1E80u;
            goto label_4f1e80;
        }
    }
    ctx->pc = 0x4F1E3Cu;
label_4f1e3c:
    // 0x4f1e3c: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x4f1e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4f1e40:
    // 0x4f1e40: 0x3c02ff1e  lui         $v0, 0xFF1E
    ctx->pc = 0x4f1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65310 << 16));
label_4f1e44:
    // 0x4f1e44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4f1e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f1e48:
    // 0x4f1e48: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x4f1e48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4f1e4c:
    // 0x4f1e4c: 0x3444ff7f  ori         $a0, $v0, 0xFF7F
    ctx->pc = 0x4f1e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
label_4f1e50:
    // 0x4f1e50: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4f1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4f1e54:
    // 0x4f1e54: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x4f1e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_4f1e58:
    // 0x4f1e58: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x4f1e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_4f1e5c:
    // 0x4f1e5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f1e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f1e60:
    // 0x4f1e60: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4f1e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4f1e64:
    // 0x4f1e64: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4f1e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4f1e68:
    // 0x4f1e68: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f1e6c:
    // 0x4f1e6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4f1e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4f1e70:
    // 0x4f1e70: 0xc08bff0  jal         func_22FFC0
label_4f1e74:
    if (ctx->pc == 0x4F1E74u) {
        ctx->pc = 0x4F1E74u;
            // 0x4f1e74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1E78u;
        goto label_4f1e78;
    }
    ctx->pc = 0x4F1E70u;
    SET_GPR_U32(ctx, 31, 0x4F1E78u);
    ctx->pc = 0x4F1E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1E70u;
            // 0x4f1e74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1E78u; }
        if (ctx->pc != 0x4F1E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1E78u; }
        if (ctx->pc != 0x4F1E78u) { return; }
    }
    ctx->pc = 0x4F1E78u;
label_4f1e78:
    // 0x4f1e78: 0x1000000a  b           . + 4 + (0xA << 2)
label_4f1e7c:
    if (ctx->pc == 0x4F1E7Cu) {
        ctx->pc = 0x4F1E7Cu;
            // 0x4f1e7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4F1E80u;
        goto label_4f1e80;
    }
    ctx->pc = 0x4F1E78u;
    {
        const bool branch_taken_0x4f1e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1E78u;
            // 0x4f1e7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1e78) {
            ctx->pc = 0x4F1EA4u;
            goto label_4f1ea4;
        }
    }
    ctx->pc = 0x4F1E80u;
label_4f1e80:
    // 0x4f1e80: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x4f1e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4f1e84:
    // 0x4f1e84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f1e88:
    // 0x4f1e88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4f1e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f1e8c:
    // 0x4f1e8c: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x4f1e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_4f1e90:
    // 0x4f1e90: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f1e94:
    // 0x4f1e94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4f1e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4f1e98:
    // 0x4f1e98: 0xc08bff0  jal         func_22FFC0
label_4f1e9c:
    if (ctx->pc == 0x4F1E9Cu) {
        ctx->pc = 0x4F1E9Cu;
            // 0x4f1e9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1EA0u;
        goto label_4f1ea0;
    }
    ctx->pc = 0x4F1E98u;
    SET_GPR_U32(ctx, 31, 0x4F1EA0u);
    ctx->pc = 0x4F1E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1E98u;
            // 0x4f1e9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1EA0u; }
        if (ctx->pc != 0x4F1EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1EA0u; }
        if (ctx->pc != 0x4F1EA0u) { return; }
    }
    ctx->pc = 0x4F1EA0u;
label_4f1ea0:
    // 0x4f1ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f1ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f1ea4:
    // 0x4f1ea4: 0x3e00008  jr          $ra
label_4f1ea8:
    if (ctx->pc == 0x4F1EA8u) {
        ctx->pc = 0x4F1EA8u;
            // 0x4f1ea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4F1EACu;
        goto label_4f1eac;
    }
    ctx->pc = 0x4F1EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1EA4u;
            // 0x4f1ea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F1EACu;
label_4f1eac:
    // 0x4f1eac: 0x0  nop
    ctx->pc = 0x4f1eacu;
    // NOP
label_4f1eb0:
    // 0x4f1eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f1eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f1eb4:
    // 0x4f1eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f1eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f1eb8:
    // 0x4f1eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f1eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f1ebc:
    // 0x4f1ebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f1ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1ec0:
    // 0x4f1ec0: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x4f1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_4f1ec4:
    // 0x4f1ec4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f1ec8:
    if (ctx->pc == 0x4F1EC8u) {
        ctx->pc = 0x4F1EC8u;
            // 0x4f1ec8: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x4F1ECCu;
        goto label_4f1ecc;
    }
    ctx->pc = 0x4F1EC4u;
    {
        const bool branch_taken_0x4f1ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1ec4) {
            ctx->pc = 0x4F1EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1EC4u;
            // 0x4f1ec8: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1EE0u;
            goto label_4f1ee0;
        }
    }
    ctx->pc = 0x4F1ECCu;
label_4f1ecc:
    // 0x4f1ecc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f1eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f1ed0:
    // 0x4f1ed0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f1ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f1ed4:
    // 0x4f1ed4: 0x320f809  jalr        $t9
label_4f1ed8:
    if (ctx->pc == 0x4F1ED8u) {
        ctx->pc = 0x4F1ED8u;
            // 0x4f1ed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F1EDCu;
        goto label_4f1edc;
    }
    ctx->pc = 0x4F1ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F1EDCu);
        ctx->pc = 0x4F1ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1ED4u;
            // 0x4f1ed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F1EDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F1EDCu; }
            if (ctx->pc != 0x4F1EDCu) { return; }
        }
        }
    }
    ctx->pc = 0x4F1EDCu;
label_4f1edc:
    // 0x4f1edc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4f1edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_4f1ee0:
    // 0x4f1ee0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4f1ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4f1ee4:
    // 0x4f1ee4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f1ee8:
    if (ctx->pc == 0x4F1EE8u) {
        ctx->pc = 0x4F1EE8u;
            // 0x4f1ee8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4F1EECu;
        goto label_4f1eec;
    }
    ctx->pc = 0x4F1EE4u;
    {
        const bool branch_taken_0x4f1ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1ee4) {
            ctx->pc = 0x4F1EE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1EE4u;
            // 0x4f1ee8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1F00u;
            goto label_4f1f00;
        }
    }
    ctx->pc = 0x4F1EECu;
label_4f1eec:
    // 0x4f1eec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f1eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f1ef0:
    // 0x4f1ef0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f1ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f1ef4:
    // 0x4f1ef4: 0x320f809  jalr        $t9
label_4f1ef8:
    if (ctx->pc == 0x4F1EF8u) {
        ctx->pc = 0x4F1EF8u;
            // 0x4f1ef8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F1EFCu;
        goto label_4f1efc;
    }
    ctx->pc = 0x4F1EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F1EFCu);
        ctx->pc = 0x4F1EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1EF4u;
            // 0x4f1ef8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F1EFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F1EFCu; }
            if (ctx->pc != 0x4F1EFCu) { return; }
        }
        }
    }
    ctx->pc = 0x4F1EFCu;
label_4f1efc:
    // 0x4f1efc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4f1efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4f1f00:
    // 0x4f1f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f1f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f1f04:
    // 0x4f1f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f1f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f1f08:
    // 0x4f1f08: 0x3e00008  jr          $ra
label_4f1f0c:
    if (ctx->pc == 0x4F1F0Cu) {
        ctx->pc = 0x4F1F0Cu;
            // 0x4f1f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F1F10u;
        goto label_4f1f10;
    }
    ctx->pc = 0x4F1F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1F08u;
            // 0x4f1f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F1F10u;
label_4f1f10:
    // 0x4f1f10: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4f1f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4f1f14:
    // 0x4f1f14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f1f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4f1f18:
    // 0x4f1f18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f1f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f1f1c:
    // 0x4f1f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f1f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f1f20:
    // 0x4f1f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f1f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1f24:
    // 0x4f1f24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f1f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f1f28:
    // 0x4f1f28: 0xc0892d0  jal         func_224B40
label_4f1f2c:
    if (ctx->pc == 0x4F1F2Cu) {
        ctx->pc = 0x4F1F2Cu;
            // 0x4f1f2c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4F1F30u;
        goto label_4f1f30;
    }
    ctx->pc = 0x4F1F28u;
    SET_GPR_U32(ctx, 31, 0x4F1F30u);
    ctx->pc = 0x4F1F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1F28u;
            // 0x4f1f2c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F30u; }
        if (ctx->pc != 0x4F1F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F30u; }
        if (ctx->pc != 0x4F1F30u) { return; }
    }
    ctx->pc = 0x4F1F30u;
label_4f1f30:
    // 0x4f1f30: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4f1f34:
    // 0x4f1f34: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4f1f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4f1f38:
    // 0x4f1f38: 0x8c42aa58  lw          $v0, -0x55A8($v0)
    ctx->pc = 0x4f1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945368)));
label_4f1f3c:
    // 0x4f1f3c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x4f1f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4f1f40:
    // 0x4f1f40: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4f1f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4f1f44:
    // 0x4f1f44: 0xc0b6e68  jal         func_2DB9A0
label_4f1f48:
    if (ctx->pc == 0x4F1F48u) {
        ctx->pc = 0x4F1F48u;
            // 0x4f1f48: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4F1F4Cu;
        goto label_4f1f4c;
    }
    ctx->pc = 0x4F1F44u;
    SET_GPR_U32(ctx, 31, 0x4F1F4Cu);
    ctx->pc = 0x4F1F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1F44u;
            // 0x4f1f48: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F4Cu; }
        if (ctx->pc != 0x4F1F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F4Cu; }
        if (ctx->pc != 0x4F1F4Cu) { return; }
    }
    ctx->pc = 0x4F1F4Cu;
label_4f1f4c:
    // 0x4f1f4c: 0xc0b6dac  jal         func_2DB6B0
label_4f1f50:
    if (ctx->pc == 0x4F1F50u) {
        ctx->pc = 0x4F1F50u;
            // 0x4f1f50: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4F1F54u;
        goto label_4f1f54;
    }
    ctx->pc = 0x4F1F4Cu;
    SET_GPR_U32(ctx, 31, 0x4F1F54u);
    ctx->pc = 0x4F1F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1F4Cu;
            // 0x4f1f50: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F54u; }
        if (ctx->pc != 0x4F1F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F54u; }
        if (ctx->pc != 0x4F1F54u) { return; }
    }
    ctx->pc = 0x4F1F54u;
label_4f1f54:
    // 0x4f1f54: 0xc0cac94  jal         func_32B250
label_4f1f58:
    if (ctx->pc == 0x4F1F58u) {
        ctx->pc = 0x4F1F58u;
            // 0x4f1f58: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4F1F5Cu;
        goto label_4f1f5c;
    }
    ctx->pc = 0x4F1F54u;
    SET_GPR_U32(ctx, 31, 0x4F1F5Cu);
    ctx->pc = 0x4F1F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1F54u;
            // 0x4f1f58: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F5Cu; }
        if (ctx->pc != 0x4F1F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F5Cu; }
        if (ctx->pc != 0x4F1F5Cu) { return; }
    }
    ctx->pc = 0x4F1F5Cu;
label_4f1f5c:
    // 0x4f1f5c: 0xc0cac84  jal         func_32B210
label_4f1f60:
    if (ctx->pc == 0x4F1F60u) {
        ctx->pc = 0x4F1F60u;
            // 0x4f1f60: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4F1F64u;
        goto label_4f1f64;
    }
    ctx->pc = 0x4F1F5Cu;
    SET_GPR_U32(ctx, 31, 0x4F1F64u);
    ctx->pc = 0x4F1F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1F5Cu;
            // 0x4f1f60: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F64u; }
        if (ctx->pc != 0x4F1F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F64u; }
        if (ctx->pc != 0x4F1F64u) { return; }
    }
    ctx->pc = 0x4F1F64u;
label_4f1f64:
    // 0x4f1f64: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4f1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4f1f68:
    // 0x4f1f68: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4f1f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4f1f6c:
    // 0x4f1f6c: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x4f1f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4f1f70:
    // 0x4f1f70: 0xc0a5a68  jal         func_2969A0
label_4f1f74:
    if (ctx->pc == 0x4F1F74u) {
        ctx->pc = 0x4F1F74u;
            // 0x4f1f74: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4F1F78u;
        goto label_4f1f78;
    }
    ctx->pc = 0x4F1F70u;
    SET_GPR_U32(ctx, 31, 0x4F1F78u);
    ctx->pc = 0x4F1F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1F70u;
            // 0x4f1f74: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F78u; }
        if (ctx->pc != 0x4F1F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1F78u; }
        if (ctx->pc != 0x4F1F78u) { return; }
    }
    ctx->pc = 0x4F1F78u;
label_4f1f78:
    // 0x4f1f78: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4f1f7c:
    // 0x4f1f7c: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x4f1f7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_4f1f80:
    // 0x4f1f80: 0x8c43aa58  lw          $v1, -0x55A8($v0)
    ctx->pc = 0x4f1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945368)));
label_4f1f84:
    // 0x4f1f84: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x4f1f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f1f88:
    // 0x4f1f88: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x4f1f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f1f8c:
    // 0x4f1f8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4f1f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f1f90:
    // 0x4f1f90: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x4f1f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f1f94:
    // 0x4f1f94: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4f1f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f1f98:
    // 0x4f1f98: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x4f1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_4f1f9c:
    // 0x4f1f9c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4f1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_4f1fa0:
    // 0x4f1fa0: 0x3448cccd  ori         $t0, $v0, 0xCCCD
    ctx->pc = 0x4f1fa0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4f1fa4:
    // 0x4f1fa4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4f1fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4f1fa8:
    // 0x4f1fa8: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4f1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4f1fac:
    // 0x4f1fac: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4f1facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4f1fb0:
    // 0x4f1fb0: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x4f1fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_4f1fb4:
    // 0x4f1fb4: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x4f1fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_4f1fb8:
    // 0x4f1fb8: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x4f1fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_4f1fbc:
    // 0x4f1fbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f1fc0:
    // 0x4f1fc0: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x4f1fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_4f1fc4:
    // 0x4f1fc4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4f1fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4f1fc8:
    // 0x4f1fc8: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x4f1fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4f1fcc:
    // 0x4f1fcc: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x4f1fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4f1fd0:
    // 0x4f1fd0: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x4f1fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4f1fd4:
    // 0x4f1fd4: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x4f1fd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4f1fd8:
    // 0x4f1fd8: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x4f1fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_4f1fdc:
    // 0x4f1fdc: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x4f1fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4f1fe0:
    // 0x4f1fe0: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x4f1fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_4f1fe4:
    // 0x4f1fe4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x4f1fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4f1fe8:
    // 0x4f1fe8: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x4f1fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_4f1fec:
    // 0x4f1fec: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x4f1fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f1ff0:
    // 0x4f1ff0: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x4f1ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_4f1ff4:
    // 0x4f1ff4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x4f1ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f1ff8:
    // 0x4f1ff8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4f1ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4f1ffc:
    // 0x4f1ffc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x4f1ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f2000:
    // 0x4f2000: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4f2000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4f2004:
    // 0x4f2004: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x4f2004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4f2008:
    // 0x4f2008: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x4f2008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4f200c:
    // 0x4f200c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x4f200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4f2010:
    // 0x4f2010: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x4f2010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f2014:
    // 0x4f2014: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x4f2014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f2018:
    // 0x4f2018: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x4f2018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f201c:
    // 0x4f201c: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x4f201cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4f2020:
    // 0x4f2020: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x4f2020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4f2024:
    // 0x4f2024: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x4f2024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4f2028:
    // 0x4f2028: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x4f2028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4f202c:
    // 0x4f202c: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x4f202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4f2030:
    // 0x4f2030: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x4f2030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4f2034:
    // 0x4f2034: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x4f2034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f2038:
    // 0x4f2038: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x4f2038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f203c:
    // 0x4f203c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4f203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f2040:
    // 0x4f2040: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x4f2040u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4f2044:
    // 0x4f2044: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x4f2044u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4f2048:
    // 0x4f2048: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x4f2048u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4f204c:
    // 0x4f204c: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x4f204cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4f2050:
    // 0x4f2050: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x4f2050u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4f2054:
    // 0x4f2054: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x4f2054u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4f2058:
    // 0x4f2058: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x4f2058u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4f205c:
    // 0x4f205c: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x4f205cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4f2060:
    // 0x4f2060: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x4f2060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4f2064:
    // 0x4f2064: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x4f2064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4f2068:
    // 0x4f2068: 0xc0a7a88  jal         func_29EA20
label_4f206c:
    if (ctx->pc == 0x4F206Cu) {
        ctx->pc = 0x4F206Cu;
            // 0x4f206c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4F2070u;
        goto label_4f2070;
    }
    ctx->pc = 0x4F2068u;
    SET_GPR_U32(ctx, 31, 0x4F2070u);
    ctx->pc = 0x4F206Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2068u;
            // 0x4f206c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2070u; }
        if (ctx->pc != 0x4F2070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2070u; }
        if (ctx->pc != 0x4F2070u) { return; }
    }
    ctx->pc = 0x4F2070u;
label_4f2070:
    // 0x4f2070: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4f2070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4f2074:
    // 0x4f2074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4f2074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f2078:
    // 0x4f2078: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4f207c:
    if (ctx->pc == 0x4F207Cu) {
        ctx->pc = 0x4F207Cu;
            // 0x4f207c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4F2080u;
        goto label_4f2080;
    }
    ctx->pc = 0x4F2078u;
    {
        const bool branch_taken_0x4f2078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F207Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2078u;
            // 0x4f207c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2078) {
            ctx->pc = 0x4F20C8u;
            goto label_4f20c8;
        }
    }
    ctx->pc = 0x4F2080u;
label_4f2080:
    // 0x4f2080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f2080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2084:
    // 0x4f2084: 0xc088ef4  jal         func_223BD0
label_4f2088:
    if (ctx->pc == 0x4F2088u) {
        ctx->pc = 0x4F2088u;
            // 0x4f2088: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4F208Cu;
        goto label_4f208c;
    }
    ctx->pc = 0x4F2084u;
    SET_GPR_U32(ctx, 31, 0x4F208Cu);
    ctx->pc = 0x4F2088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2084u;
            // 0x4f2088: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F208Cu; }
        if (ctx->pc != 0x4F208Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F208Cu; }
        if (ctx->pc != 0x4F208Cu) { return; }
    }
    ctx->pc = 0x4F208Cu;
label_4f208c:
    // 0x4f208c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f208cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f2090:
    // 0x4f2090: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f2090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4f2094:
    // 0x4f2094: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4f2094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4f2098:
    // 0x4f2098: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4f2098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4f209c:
    // 0x4f209c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f209cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4f20a0:
    // 0x4f20a0: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4f20a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_4f20a4:
    // 0x4f20a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f20a8:
    // 0x4f20a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f20ac:
    // 0x4f20ac: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4f20acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4f20b0:
    // 0x4f20b0: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4f20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4f20b4:
    // 0x4f20b4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4f20b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4f20b8:
    // 0x4f20b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f20bc:
    // 0x4f20bc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4f20bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f20c0:
    // 0x4f20c0: 0xc088b38  jal         func_222CE0
label_4f20c4:
    if (ctx->pc == 0x4F20C4u) {
        ctx->pc = 0x4F20C4u;
            // 0x4f20c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F20C8u;
        goto label_4f20c8;
    }
    ctx->pc = 0x4F20C0u;
    SET_GPR_U32(ctx, 31, 0x4F20C8u);
    ctx->pc = 0x4F20C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F20C0u;
            // 0x4f20c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F20C8u; }
        if (ctx->pc != 0x4F20C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F20C8u; }
        if (ctx->pc != 0x4F20C8u) { return; }
    }
    ctx->pc = 0x4F20C8u;
label_4f20c8:
    // 0x4f20c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f20c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f20cc:
    // 0x4f20cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4f20ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4f20d0:
    // 0x4f20d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f20d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f20d4:
    // 0x4f20d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f20d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f20d8:
    // 0x4f20d8: 0xc08914c  jal         func_224530
label_4f20dc:
    if (ctx->pc == 0x4F20DCu) {
        ctx->pc = 0x4F20DCu;
            // 0x4f20dc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x4F20E0u;
        goto label_4f20e0;
    }
    ctx->pc = 0x4F20D8u;
    SET_GPR_U32(ctx, 31, 0x4F20E0u);
    ctx->pc = 0x4F20DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F20D8u;
            // 0x4f20dc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F20E0u; }
        if (ctx->pc != 0x4F20E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F20E0u; }
        if (ctx->pc != 0x4F20E0u) { return; }
    }
    ctx->pc = 0x4F20E0u;
label_4f20e0:
    // 0x4f20e0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4f20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f20e4:
    // 0x4f20e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f20e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f20e8:
    // 0x4f20e8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4f20e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f20ec:
    // 0x4f20ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4f20ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4f20f0:
    // 0x4f20f0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4f20f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f20f4:
    // 0x4f20f4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4f20f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4f20f8:
    // 0x4f20f8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4f20f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4f20fc:
    // 0x4f20fc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4f20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4f2100:
    // 0x4f2100: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4f2100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4f2104:
    // 0x4f2104: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4f2104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4f2108:
    // 0x4f2108: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4f2108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4f210c:
    // 0x4f210c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4f210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f2110:
    // 0x4f2110: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4f2110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f2114:
    // 0x4f2114: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4f2114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f2118:
    // 0x4f2118: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4f2118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4f211c:
    // 0x4f211c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4f211cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4f2120:
    // 0x4f2120: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4f2120u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4f2124:
    // 0x4f2124: 0xc0892b0  jal         func_224AC0
label_4f2128:
    if (ctx->pc == 0x4F2128u) {
        ctx->pc = 0x4F2128u;
            // 0x4f2128: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4F212Cu;
        goto label_4f212c;
    }
    ctx->pc = 0x4F2124u;
    SET_GPR_U32(ctx, 31, 0x4F212Cu);
    ctx->pc = 0x4F2128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2124u;
            // 0x4f2128: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F212Cu; }
        if (ctx->pc != 0x4F212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F212Cu; }
        if (ctx->pc != 0x4F212Cu) { return; }
    }
    ctx->pc = 0x4F212Cu;
label_4f212c:
    // 0x4f212c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x4f212cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_4f2130:
    // 0x4f2130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f2130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2134:
    // 0x4f2134: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4f2134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4f2138:
    // 0x4f2138: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4f2138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4f213c:
    // 0x4f213c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4f213cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4f2140:
    // 0x4f2140: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4f2140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4f2144:
    // 0x4f2144: 0xc0891d8  jal         func_224760
label_4f2148:
    if (ctx->pc == 0x4F2148u) {
        ctx->pc = 0x4F2148u;
            // 0x4f2148: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4F214Cu;
        goto label_4f214c;
    }
    ctx->pc = 0x4F2144u;
    SET_GPR_U32(ctx, 31, 0x4F214Cu);
    ctx->pc = 0x4F2148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2144u;
            // 0x4f2148: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F214Cu; }
        if (ctx->pc != 0x4F214Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F214Cu; }
        if (ctx->pc != 0x4F214Cu) { return; }
    }
    ctx->pc = 0x4F214Cu;
label_4f214c:
    // 0x4f214c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f214cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f2150:
    // 0x4f2150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f2150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2154:
    // 0x4f2154: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f2154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f2158:
    // 0x4f2158: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4f2158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4f215c:
    // 0x4f215c: 0xc08c164  jal         func_230590
label_4f2160:
    if (ctx->pc == 0x4F2160u) {
        ctx->pc = 0x4F2160u;
            // 0x4f2160: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F2164u;
        goto label_4f2164;
    }
    ctx->pc = 0x4F215Cu;
    SET_GPR_U32(ctx, 31, 0x4F2164u);
    ctx->pc = 0x4F2160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F215Cu;
            // 0x4f2160: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2164u; }
        if (ctx->pc != 0x4F2164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2164u; }
        if (ctx->pc != 0x4F2164u) { return; }
    }
    ctx->pc = 0x4F2164u;
label_4f2164:
    // 0x4f2164: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4f2164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_4f2168:
    // 0x4f2168: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f2168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f216c:
    // 0x4f216c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4f216cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4f2170:
    // 0x4f2170: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4f2170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4f2174:
    // 0x4f2174: 0xc0a7a88  jal         func_29EA20
label_4f2178:
    if (ctx->pc == 0x4F2178u) {
        ctx->pc = 0x4F2178u;
            // 0x4f2178: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4F217Cu;
        goto label_4f217c;
    }
    ctx->pc = 0x4F2174u;
    SET_GPR_U32(ctx, 31, 0x4F217Cu);
    ctx->pc = 0x4F2178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2174u;
            // 0x4f2178: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F217Cu; }
        if (ctx->pc != 0x4F217Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F217Cu; }
        if (ctx->pc != 0x4F217Cu) { return; }
    }
    ctx->pc = 0x4F217Cu;
label_4f217c:
    // 0x4f217c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4f217cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4f2180:
    // 0x4f2180: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f2180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f2184:
    // 0x4f2184: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4f2188:
    if (ctx->pc == 0x4F2188u) {
        ctx->pc = 0x4F2188u;
            // 0x4f2188: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4F218Cu;
        goto label_4f218c;
    }
    ctx->pc = 0x4F2184u;
    {
        const bool branch_taken_0x4f2184 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2184u;
            // 0x4f2188: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2184) {
            ctx->pc = 0x4F21A8u;
            goto label_4f21a8;
        }
    }
    ctx->pc = 0x4F218Cu;
label_4f218c:
    // 0x4f218c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f2190:
    // 0x4f2190: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f2190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2194:
    // 0x4f2194: 0xc0869d0  jal         func_21A740
label_4f2198:
    if (ctx->pc == 0x4F2198u) {
        ctx->pc = 0x4F2198u;
            // 0x4f2198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F219Cu;
        goto label_4f219c;
    }
    ctx->pc = 0x4F2194u;
    SET_GPR_U32(ctx, 31, 0x4F219Cu);
    ctx->pc = 0x4F2198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2194u;
            // 0x4f2198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F219Cu; }
        if (ctx->pc != 0x4F219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F219Cu; }
        if (ctx->pc != 0x4F219Cu) { return; }
    }
    ctx->pc = 0x4F219Cu;
label_4f219c:
    // 0x4f219c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f219cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f21a0:
    // 0x4f21a0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4f21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4f21a4:
    // 0x4f21a4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4f21a8:
    // 0x4f21a8: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4f21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4f21ac:
    // 0x4f21ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f21acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f21b0:
    // 0x4f21b0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f21b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f21b4:
    // 0x4f21b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4f21b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4f21b8:
    // 0x4f21b8: 0xc08c650  jal         func_231940
label_4f21bc:
    if (ctx->pc == 0x4F21BCu) {
        ctx->pc = 0x4F21BCu;
            // 0x4f21bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F21C0u;
        goto label_4f21c0;
    }
    ctx->pc = 0x4F21B8u;
    SET_GPR_U32(ctx, 31, 0x4F21C0u);
    ctx->pc = 0x4F21BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F21B8u;
            // 0x4f21bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F21C0u; }
        if (ctx->pc != 0x4F21C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F21C0u; }
        if (ctx->pc != 0x4F21C0u) { return; }
    }
    ctx->pc = 0x4F21C0u;
label_4f21c0:
    // 0x4f21c0: 0xc040180  jal         func_100600
label_4f21c4:
    if (ctx->pc == 0x4F21C4u) {
        ctx->pc = 0x4F21C4u;
            // 0x4f21c4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x4F21C8u;
        goto label_4f21c8;
    }
    ctx->pc = 0x4F21C0u;
    SET_GPR_U32(ctx, 31, 0x4F21C8u);
    ctx->pc = 0x4F21C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F21C0u;
            // 0x4f21c4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F21C8u; }
        if (ctx->pc != 0x4F21C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F21C8u; }
        if (ctx->pc != 0x4F21C8u) { return; }
    }
    ctx->pc = 0x4F21C8u;
label_4f21c8:
    // 0x4f21c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4f21c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f21cc:
    // 0x4f21cc: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4f21d0:
    if (ctx->pc == 0x4F21D0u) {
        ctx->pc = 0x4F21D0u;
            // 0x4f21d0: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4F21D4u;
        goto label_4f21d4;
    }
    ctx->pc = 0x4F21CCu;
    {
        const bool branch_taken_0x4f21cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f21cc) {
            ctx->pc = 0x4F21D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F21CCu;
            // 0x4f21d0: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F220Cu;
            goto label_4f220c;
        }
    }
    ctx->pc = 0x4F21D4u;
label_4f21d4:
    // 0x4f21d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f21d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4f21d8:
    // 0x4f21d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f21dc:
    // 0x4f21dc: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4f21dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4f21e0:
    // 0x4f21e0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4f21e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4f21e4:
    // 0x4f21e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f21e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f21e8:
    // 0x4f21e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4f21e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4f21ec:
    // 0x4f21ec: 0xc040138  jal         func_1004E0
label_4f21f0:
    if (ctx->pc == 0x4F21F0u) {
        ctx->pc = 0x4F21F0u;
            // 0x4f21f0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4F21F4u;
        goto label_4f21f4;
    }
    ctx->pc = 0x4F21ECu;
    SET_GPR_U32(ctx, 31, 0x4F21F4u);
    ctx->pc = 0x4F21F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F21ECu;
            // 0x4f21f0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F21F4u; }
        if (ctx->pc != 0x4F21F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F21F4u; }
        if (ctx->pc != 0x4F21F4u) { return; }
    }
    ctx->pc = 0x4F21F4u;
label_4f21f4:
    // 0x4f21f4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4f21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4f21f8:
    // 0x4f21f8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4f21f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4f21fc:
    // 0x4f21fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f21fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2200:
    // 0x4f2200: 0xc04a576  jal         func_1295D8
label_4f2204:
    if (ctx->pc == 0x4F2204u) {
        ctx->pc = 0x4F2204u;
            // 0x4f2204: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4F2208u;
        goto label_4f2208;
    }
    ctx->pc = 0x4F2200u;
    SET_GPR_U32(ctx, 31, 0x4F2208u);
    ctx->pc = 0x4F2204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2200u;
            // 0x4f2204: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2208u; }
        if (ctx->pc != 0x4F2208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2208u; }
        if (ctx->pc != 0x4F2208u) { return; }
    }
    ctx->pc = 0x4F2208u;
label_4f2208:
    // 0x4f2208: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4f2208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_4f220c:
    // 0x4f220c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4f220cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4f2210:
    // 0x4f2210: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4f2210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_4f2214:
    // 0x4f2214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f2214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2218:
    // 0x4f2218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f2218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f221c:
    // 0x4f221c: 0x240610ae  addiu       $a2, $zero, 0x10AE
    ctx->pc = 0x4f221cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4270));
label_4f2220:
    // 0x4f2220: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4f2220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f2224:
    // 0x4f2224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f2224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2228:
    // 0x4f2228: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4f2228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4f222c:
    // 0x4f222c: 0xc122cd8  jal         func_48B360
label_4f2230:
    if (ctx->pc == 0x4F2230u) {
        ctx->pc = 0x4F2230u;
            // 0x4f2230: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->pc = 0x4F2234u;
        goto label_4f2234;
    }
    ctx->pc = 0x4F222Cu;
    SET_GPR_U32(ctx, 31, 0x4F2234u);
    ctx->pc = 0x4F2230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F222Cu;
            // 0x4f2230: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2234u; }
        if (ctx->pc != 0x4F2234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2234u; }
        if (ctx->pc != 0x4F2234u) { return; }
    }
    ctx->pc = 0x4F2234u;
label_4f2234:
    // 0x4f2234: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f2234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4f2238:
    // 0x4f2238: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f2238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f223c:
    // 0x4f223c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f223cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2240:
    // 0x4f2240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2244:
    // 0x4f2244: 0x3e00008  jr          $ra
label_4f2248:
    if (ctx->pc == 0x4F2248u) {
        ctx->pc = 0x4F2248u;
            // 0x4f2248: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4F224Cu;
        goto label_4f224c;
    }
    ctx->pc = 0x4F2244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2244u;
            // 0x4f2248: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F224Cu;
label_4f224c:
    // 0x4f224c: 0x0  nop
    ctx->pc = 0x4f224cu;
    // NOP
label_4f2250:
    // 0x4f2250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f2250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f2254:
    // 0x4f2254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f2254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f2258:
    // 0x4f2258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f2258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f225c:
    // 0x4f225c: 0xc0e3580  jal         func_38D600
label_4f2260:
    if (ctx->pc == 0x4F2260u) {
        ctx->pc = 0x4F2260u;
            // 0x4f2260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2264u;
        goto label_4f2264;
    }
    ctx->pc = 0x4F225Cu;
    SET_GPR_U32(ctx, 31, 0x4F2264u);
    ctx->pc = 0x4F2260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F225Cu;
            // 0x4f2260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2264u; }
        if (ctx->pc != 0x4F2264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2264u; }
        if (ctx->pc != 0x4F2264u) { return; }
    }
    ctx->pc = 0x4F2264u;
label_4f2264:
    // 0x4f2264: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4f2264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f2268:
    // 0x4f2268: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x4f2268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_4f226c:
    // 0x4f226c: 0xae08008c  sw          $t0, 0x8C($s0)
    ctx->pc = 0x4f226cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 8));
label_4f2270:
    // 0x4f2270: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x4f2270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_4f2274:
    // 0x4f2274: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x4f2274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_4f2278:
    // 0x4f2278: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x4f2278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4f227c:
    // 0x4f227c: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x4f227cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_4f2280:
    // 0x4f2280: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4f2280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4f2284:
    // 0x4f2284: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x4f2284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_4f2288:
    // 0x4f2288: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4f2288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4f228c:
    // 0x4f228c: 0xa2080064  sb          $t0, 0x64($s0)
    ctx->pc = 0x4f228cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 8));
label_4f2290:
    // 0x4f2290: 0x3c0542b4  lui         $a1, 0x42B4
    ctx->pc = 0x4f2290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17076 << 16));
label_4f2294:
    // 0x4f2294: 0xa2080065  sb          $t0, 0x65($s0)
    ctx->pc = 0x4f2294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 8));
label_4f2298:
    // 0x4f2298: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4f2298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4f229c:
    // 0x4f229c: 0xa2070068  sb          $a3, 0x68($s0)
    ctx->pc = 0x4f229cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 7));
label_4f22a0:
    // 0x4f22a0: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x4f22a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_4f22a4:
    // 0x4f22a4: 0xa2070069  sb          $a3, 0x69($s0)
    ctx->pc = 0x4f22a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 7));
label_4f22a8:
    // 0x4f22a8: 0xa20600cc  sb          $a2, 0xCC($s0)
    ctx->pc = 0x4f22a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 6));
label_4f22ac:
    // 0x4f22ac: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x4f22acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
label_4f22b0:
    // 0x4f22b0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4f22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4f22b4:
    // 0x4f22b4: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x4f22b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_4f22b8:
    // 0x4f22b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4f22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4f22bc:
    // 0x4f22bc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x4f22bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4f22c0:
    // 0x4f22c0: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4f22c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_4f22c4:
    // 0x4f22c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f22c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f22c8:
    // 0x4f22c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f22c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f22cc:
    // 0x4f22cc: 0x3e00008  jr          $ra
label_4f22d0:
    if (ctx->pc == 0x4F22D0u) {
        ctx->pc = 0x4F22D0u;
            // 0x4f22d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F22D4u;
        goto label_4f22d4;
    }
    ctx->pc = 0x4F22CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F22D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F22CCu;
            // 0x4f22d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F22D4u;
label_4f22d4:
    // 0x4f22d4: 0x0  nop
    ctx->pc = 0x4f22d4u;
    // NOP
label_4f22d8:
    // 0x4f22d8: 0x0  nop
    ctx->pc = 0x4f22d8u;
    // NOP
label_4f22dc:
    // 0x4f22dc: 0x0  nop
    ctx->pc = 0x4f22dcu;
    // NOP
label_4f22e0:
    // 0x4f22e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f22e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f22e4:
    // 0x4f22e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4f22e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f22e8:
    // 0x4f22e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f22e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f22ec:
    // 0x4f22ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f22ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f22f0:
    // 0x4f22f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f22f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f22f4:
    // 0x4f22f4: 0xc0baaa0  jal         func_2EAA80
label_4f22f8:
    if (ctx->pc == 0x4F22F8u) {
        ctx->pc = 0x4F22F8u;
            // 0x4f22f8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4F22FCu;
        goto label_4f22fc;
    }
    ctx->pc = 0x4F22F4u;
    SET_GPR_U32(ctx, 31, 0x4F22FCu);
    ctx->pc = 0x4F22F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F22F4u;
            // 0x4f22f8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F22FCu; }
        if (ctx->pc != 0x4F22FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F22FCu; }
        if (ctx->pc != 0x4F22FCu) { return; }
    }
    ctx->pc = 0x4F22FCu;
label_4f22fc:
    // 0x4f22fc: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x4f22fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_4f2300:
    // 0x4f2300: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4f2300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4f2304:
    // 0x4f2304: 0xc122d2c  jal         func_48B4B0
label_4f2308:
    if (ctx->pc == 0x4F2308u) {
        ctx->pc = 0x4F2308u;
            // 0x4f2308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F230Cu;
        goto label_4f230c;
    }
    ctx->pc = 0x4F2304u;
    SET_GPR_U32(ctx, 31, 0x4F230Cu);
    ctx->pc = 0x4F2308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2304u;
            // 0x4f2308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F230Cu; }
        if (ctx->pc != 0x4F230Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F230Cu; }
        if (ctx->pc != 0x4F230Cu) { return; }
    }
    ctx->pc = 0x4F230Cu;
label_4f230c:
    // 0x4f230c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f230cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2310:
    // 0x4f2310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2314:
    // 0x4f2314: 0x3e00008  jr          $ra
label_4f2318:
    if (ctx->pc == 0x4F2318u) {
        ctx->pc = 0x4F2318u;
            // 0x4f2318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F231Cu;
        goto label_4f231c;
    }
    ctx->pc = 0x4F2314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2314u;
            // 0x4f2318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F231Cu;
label_4f231c:
    // 0x4f231c: 0x0  nop
    ctx->pc = 0x4f231cu;
    // NOP
label_4f2320:
    // 0x4f2320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f2320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f2324:
    // 0x4f2324: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4f2324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4f2328:
    // 0x4f2328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f2328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f232c:
    // 0x4f232c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f232cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f2330:
    // 0x4f2330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f2330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f2334:
    // 0x4f2334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f2334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2338:
    // 0x4f2338: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x4f2338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4f233c:
    // 0x4f233c: 0xc08914c  jal         func_224530
label_4f2340:
    if (ctx->pc == 0x4F2340u) {
        ctx->pc = 0x4F2340u;
            // 0x4f2340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2344u;
        goto label_4f2344;
    }
    ctx->pc = 0x4F233Cu;
    SET_GPR_U32(ctx, 31, 0x4F2344u);
    ctx->pc = 0x4F2340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F233Cu;
            // 0x4f2340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2344u; }
        if (ctx->pc != 0x4F2344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2344u; }
        if (ctx->pc != 0x4F2344u) { return; }
    }
    ctx->pc = 0x4F2344u;
label_4f2344:
    // 0x4f2344: 0xc0e393c  jal         func_38E4F0
label_4f2348:
    if (ctx->pc == 0x4F2348u) {
        ctx->pc = 0x4F2348u;
            // 0x4f2348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F234Cu;
        goto label_4f234c;
    }
    ctx->pc = 0x4F2344u;
    SET_GPR_U32(ctx, 31, 0x4F234Cu);
    ctx->pc = 0x4F2348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2344u;
            // 0x4f2348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F234Cu; }
        if (ctx->pc != 0x4F234Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F234Cu; }
        if (ctx->pc != 0x4F234Cu) { return; }
    }
    ctx->pc = 0x4F234Cu;
label_4f234c:
    // 0x4f234c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4f234cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4f2350:
    // 0x4f2350: 0x9203004e  lbu         $v1, 0x4E($s0)
    ctx->pc = 0x4f2350u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
label_4f2354:
    // 0x4f2354: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_4f2358:
    if (ctx->pc == 0x4F2358u) {
        ctx->pc = 0x4F2358u;
            // 0x4f2358: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4F235Cu;
        goto label_4f235c;
    }
    ctx->pc = 0x4F2354u;
    {
        const bool branch_taken_0x4f2354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2354) {
            ctx->pc = 0x4F2358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2354u;
            // 0x4f2358: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F239Cu;
            goto label_4f239c;
        }
    }
    ctx->pc = 0x4F235Cu;
label_4f235c:
    // 0x4f235c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4f235cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4f2360:
    // 0x4f2360: 0x3c02ff1e  lui         $v0, 0xFF1E
    ctx->pc = 0x4f2360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65310 << 16));
label_4f2364:
    // 0x4f2364: 0x3444ff7f  ori         $a0, $v0, 0xFF7F
    ctx->pc = 0x4f2364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
label_4f2368:
    // 0x4f2368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4f2368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f236c:
    // 0x4f236c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4f236cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4f2370:
    // 0x4f2370: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x4f2370u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4f2374:
    // 0x4f2374: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x4f2374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_4f2378:
    // 0x4f2378: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f2378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f237c:
    // 0x4f237c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x4f237cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_4f2380:
    // 0x4f2380: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4f2380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4f2384:
    // 0x4f2384: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4f2384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4f2388:
    // 0x4f2388: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4f2388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f238c:
    // 0x4f238c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4f238cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4f2390:
    // 0x4f2390: 0xc08bff0  jal         func_22FFC0
label_4f2394:
    if (ctx->pc == 0x4F2394u) {
        ctx->pc = 0x4F2394u;
            // 0x4f2394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2398u;
        goto label_4f2398;
    }
    ctx->pc = 0x4F2390u;
    SET_GPR_U32(ctx, 31, 0x4F2398u);
    ctx->pc = 0x4F2394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2390u;
            // 0x4f2394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2398u; }
        if (ctx->pc != 0x4F2398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2398u; }
        if (ctx->pc != 0x4F2398u) { return; }
    }
    ctx->pc = 0x4F2398u;
label_4f2398:
    // 0x4f2398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f2398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f239c:
    // 0x4f239c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f239cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f23a0:
    // 0x4f23a0: 0x3e00008  jr          $ra
label_4f23a4:
    if (ctx->pc == 0x4F23A4u) {
        ctx->pc = 0x4F23A4u;
            // 0x4f23a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F23A8u;
        goto label_4f23a8;
    }
    ctx->pc = 0x4F23A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F23A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F23A0u;
            // 0x4f23a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F23A8u;
label_4f23a8:
    // 0x4f23a8: 0x0  nop
    ctx->pc = 0x4f23a8u;
    // NOP
label_4f23ac:
    // 0x4f23ac: 0x0  nop
    ctx->pc = 0x4f23acu;
    // NOP
label_4f23b0:
    // 0x4f23b0: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x4f23b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4f23b4:
    // 0x4f23b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f23b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f23b8:
    // 0x4f23b8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4f23bc:
    if (ctx->pc == 0x4F23BCu) {
        ctx->pc = 0x4F23C0u;
        goto label_4f23c0;
    }
    ctx->pc = 0x4F23B8u;
    {
        const bool branch_taken_0x4f23b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f23b8) {
            ctx->pc = 0x4F23C8u;
            goto label_4f23c8;
        }
    }
    ctx->pc = 0x4F23C0u;
label_4f23c0:
    // 0x4f23c0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_4f23c4:
    if (ctx->pc == 0x4F23C4u) {
        ctx->pc = 0x4F23C4u;
            // 0x4f23c4: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x4F23C8u;
        goto label_4f23c8;
    }
    ctx->pc = 0x4F23C0u;
    {
        const bool branch_taken_0x4f23c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f23c0) {
            ctx->pc = 0x4F23C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F23C0u;
            // 0x4f23c4: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F23C8u;
            goto label_4f23c8;
        }
    }
    ctx->pc = 0x4F23C8u;
label_4f23c8:
    // 0x4f23c8: 0x3e00008  jr          $ra
label_4f23cc:
    if (ctx->pc == 0x4F23CCu) {
        ctx->pc = 0x4F23D0u;
        goto label_4f23d0;
    }
    ctx->pc = 0x4F23C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F23D0u;
label_4f23d0:
    // 0x4f23d0: 0x3e00008  jr          $ra
label_4f23d4:
    if (ctx->pc == 0x4F23D4u) {
        ctx->pc = 0x4F23D4u;
            // 0x4f23d4: 0x240242ae  addiu       $v0, $zero, 0x42AE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17070));
        ctx->pc = 0x4F23D8u;
        goto label_4f23d8;
    }
    ctx->pc = 0x4F23D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F23D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F23D0u;
            // 0x4f23d4: 0x240242ae  addiu       $v0, $zero, 0x42AE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17070));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F23D8u;
label_4f23d8:
    // 0x4f23d8: 0x0  nop
    ctx->pc = 0x4f23d8u;
    // NOP
label_4f23dc:
    // 0x4f23dc: 0x0  nop
    ctx->pc = 0x4f23dcu;
    // NOP
label_4f23e0:
    // 0x4f23e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f23e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f23e4:
    // 0x4f23e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4f23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4f23e8:
    // 0x4f23e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f23e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f23ec:
    // 0x4f23ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f23ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f23f0:
    // 0x4f23f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4f23f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f23f4:
    // 0x4f23f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f23f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f23f8:
    // 0x4f23f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f23f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f23fc:
    // 0x4f23fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f23fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f2400:
    // 0x4f2400: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4f2400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f2404:
    // 0x4f2404: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4f2408:
    if (ctx->pc == 0x4F2408u) {
        ctx->pc = 0x4F2408u;
            // 0x4f2408: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F240Cu;
        goto label_4f240c;
    }
    ctx->pc = 0x4F2404u;
    {
        const bool branch_taken_0x4f2404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2404u;
            // 0x4f2408: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2404) {
            ctx->pc = 0x4F2448u;
            goto label_4f2448;
        }
    }
    ctx->pc = 0x4F240Cu;
label_4f240c:
    // 0x4f240c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f240cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2410:
    // 0x4f2410: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f2410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2414:
    // 0x4f2414: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f2414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2418:
    // 0x4f2418: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4f2418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4f241c:
    // 0x4f241c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4f241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4f2420:
    // 0x4f2420: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f2420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f2424:
    // 0x4f2424: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f2424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f2428:
    // 0x4f2428: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4f2428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4f242c:
    // 0x4f242c: 0x320f809  jalr        $t9
label_4f2430:
    if (ctx->pc == 0x4F2430u) {
        ctx->pc = 0x4F2434u;
        goto label_4f2434;
    }
    ctx->pc = 0x4F242Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F2434u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F2434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F2434u; }
            if (ctx->pc != 0x4F2434u) { return; }
        }
        }
    }
    ctx->pc = 0x4F2434u;
label_4f2434:
    // 0x4f2434: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4f2434u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4f2438:
    // 0x4f2438: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4f2438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4f243c:
    // 0x4f243c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4f243cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4f2440:
    // 0x4f2440: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4f2444:
    if (ctx->pc == 0x4F2444u) {
        ctx->pc = 0x4F2444u;
            // 0x4f2444: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4F2448u;
        goto label_4f2448;
    }
    ctx->pc = 0x4F2440u;
    {
        const bool branch_taken_0x4f2440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F2444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2440u;
            // 0x4f2444: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2440) {
            ctx->pc = 0x4F2418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f2418;
        }
    }
    ctx->pc = 0x4F2448u;
label_4f2448:
    // 0x4f2448: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4f2448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f244c:
    // 0x4f244c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4f244cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4f2450:
    // 0x4f2450: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f2450u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f2454:
    // 0x4f2454: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f2454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f2458:
    // 0x4f2458: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f2458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f245c:
    // 0x4f245c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f245cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2460:
    // 0x4f2460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2464:
    // 0x4f2464: 0x3e00008  jr          $ra
label_4f2468:
    if (ctx->pc == 0x4F2468u) {
        ctx->pc = 0x4F2468u;
            // 0x4f2468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4F246Cu;
        goto label_4f246c;
    }
    ctx->pc = 0x4F2464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2464u;
            // 0x4f2468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F246Cu;
label_4f246c:
    // 0x4f246c: 0x0  nop
    ctx->pc = 0x4f246cu;
    // NOP
label_4f2470:
    // 0x4f2470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f2470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f2474:
    // 0x4f2474: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f2474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f2478:
    // 0x4f2478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f2478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f247c:
    // 0x4f247c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4f247cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4f2480:
    // 0x4f2480: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f2480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f2484:
    // 0x4f2484: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4f2484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4f2488:
    // 0x4f2488: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f2488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f248c:
    // 0x4f248c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4f248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4f2490:
    // 0x4f2490: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f2490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f2494:
    // 0x4f2494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f2494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f2498:
    // 0x4f2498: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4f2498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4f249c:
    // 0x4f249c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4f249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f24a0:
    // 0x4f24a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4f24a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4f24a4:
    // 0x4f24a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4f24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4f24a8:
    // 0x4f24a8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4f24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4f24ac:
    // 0x4f24ac: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4f24acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4f24b0:
    // 0x4f24b0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4f24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4f24b4:
    // 0x4f24b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4f24b8:
    // 0x4f24b8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4f24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4f24bc:
    // 0x4f24bc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4f24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f24c0:
    // 0x4f24c0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4f24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4f24c4:
    // 0x4f24c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f24c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f24c8:
    // 0x4f24c8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4f24c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f24cc:
    // 0x4f24cc: 0xc0a997c  jal         func_2A65F0
label_4f24d0:
    if (ctx->pc == 0x4F24D0u) {
        ctx->pc = 0x4F24D0u;
            // 0x4f24d0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4F24D4u;
        goto label_4f24d4;
    }
    ctx->pc = 0x4F24CCu;
    SET_GPR_U32(ctx, 31, 0x4F24D4u);
    ctx->pc = 0x4F24D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F24CCu;
            // 0x4f24d0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F24D4u; }
        if (ctx->pc != 0x4F24D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F24D4u; }
        if (ctx->pc != 0x4F24D4u) { return; }
    }
    ctx->pc = 0x4F24D4u;
label_4f24d4:
    // 0x4f24d4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4f24d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4f24d8:
    // 0x4f24d8: 0xc0d879c  jal         func_361E70
label_4f24dc:
    if (ctx->pc == 0x4F24DCu) {
        ctx->pc = 0x4F24DCu;
            // 0x4f24dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F24E0u;
        goto label_4f24e0;
    }
    ctx->pc = 0x4F24D8u;
    SET_GPR_U32(ctx, 31, 0x4F24E0u);
    ctx->pc = 0x4F24DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F24D8u;
            // 0x4f24dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F24E0u; }
        if (ctx->pc != 0x4F24E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F24E0u; }
        if (ctx->pc != 0x4F24E0u) { return; }
    }
    ctx->pc = 0x4F24E0u;
label_4f24e0:
    // 0x4f24e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f24e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f24e4:
    // 0x4f24e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f24e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f24e8:
    // 0x4f24e8: 0x3e00008  jr          $ra
label_4f24ec:
    if (ctx->pc == 0x4F24ECu) {
        ctx->pc = 0x4F24ECu;
            // 0x4f24ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F24F0u;
        goto label_4f24f0;
    }
    ctx->pc = 0x4F24E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F24ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F24E8u;
            // 0x4f24ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F24F0u;
label_4f24f0:
    // 0x4f24f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f24f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f24f4:
    // 0x4f24f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f24f8:
    // 0x4f24f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f24f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f24fc:
    // 0x4f24fc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4f24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4f2500:
    // 0x4f2500: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4f2504:
    if (ctx->pc == 0x4F2504u) {
        ctx->pc = 0x4F2504u;
            // 0x4f2504: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2508u;
        goto label_4f2508;
    }
    ctx->pc = 0x4F2500u;
    {
        const bool branch_taken_0x4f2500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2500u;
            // 0x4f2504: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2500) {
            ctx->pc = 0x4F2620u;
            goto label_4f2620;
        }
    }
    ctx->pc = 0x4F2508u;
label_4f2508:
    // 0x4f2508: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f2508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f250c:
    // 0x4f250c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4f250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4f2510:
    // 0x4f2510: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f2510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f2514:
    // 0x4f2514: 0xc075128  jal         func_1D44A0
label_4f2518:
    if (ctx->pc == 0x4F2518u) {
        ctx->pc = 0x4F2518u;
            // 0x4f2518: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4F251Cu;
        goto label_4f251c;
    }
    ctx->pc = 0x4F2514u;
    SET_GPR_U32(ctx, 31, 0x4F251Cu);
    ctx->pc = 0x4F2518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2514u;
            // 0x4f2518: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F251Cu; }
        if (ctx->pc != 0x4F251Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F251Cu; }
        if (ctx->pc != 0x4F251Cu) { return; }
    }
    ctx->pc = 0x4F251Cu;
label_4f251c:
    // 0x4f251c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4f251cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f2520:
    // 0x4f2520: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f2520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f2524:
    // 0x4f2524: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4f2524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4f2528:
    // 0x4f2528: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4f2528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f252c:
    // 0x4f252c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f252cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f2530:
    // 0x4f2530: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f2534:
    if (ctx->pc == 0x4F2534u) {
        ctx->pc = 0x4F2534u;
            // 0x4f2534: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4F2538u;
        goto label_4f2538;
    }
    ctx->pc = 0x4F2530u;
    {
        const bool branch_taken_0x4f2530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2530u;
            // 0x4f2534: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2530) {
            ctx->pc = 0x4F2540u;
            goto label_4f2540;
        }
    }
    ctx->pc = 0x4F2538u;
label_4f2538:
    // 0x4f2538: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f2538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f253c:
    // 0x4f253c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4f253cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4f2540:
    // 0x4f2540: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f2540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f2544:
    // 0x4f2544: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f2544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f2548:
    // 0x4f2548: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4f2548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4f254c:
    // 0x4f254c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4f254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4f2550:
    // 0x4f2550: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f2550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f2554:
    // 0x4f2554: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f2558:
    if (ctx->pc == 0x4F2558u) {
        ctx->pc = 0x4F2558u;
            // 0x4f2558: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4F255Cu;
        goto label_4f255c;
    }
    ctx->pc = 0x4F2554u;
    {
        const bool branch_taken_0x4f2554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2554) {
            ctx->pc = 0x4F2558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2554u;
            // 0x4f2558: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F2568u;
            goto label_4f2568;
        }
    }
    ctx->pc = 0x4F255Cu;
label_4f255c:
    // 0x4f255c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f255cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f2560:
    // 0x4f2560: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4f2560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4f2564:
    // 0x4f2564: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f2564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f2568:
    // 0x4f2568: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f2568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f256c:
    // 0x4f256c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4f256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4f2570:
    // 0x4f2570: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4f2570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4f2574:
    // 0x4f2574: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f2574u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f2578:
    // 0x4f2578: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f257c:
    if (ctx->pc == 0x4F257Cu) {
        ctx->pc = 0x4F257Cu;
            // 0x4f257c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4F2580u;
        goto label_4f2580;
    }
    ctx->pc = 0x4F2578u;
    {
        const bool branch_taken_0x4f2578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2578) {
            ctx->pc = 0x4F257Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2578u;
            // 0x4f257c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F258Cu;
            goto label_4f258c;
        }
    }
    ctx->pc = 0x4F2580u;
label_4f2580:
    // 0x4f2580: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f2580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f2584:
    // 0x4f2584: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4f2584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4f2588:
    // 0x4f2588: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4f2588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f258c:
    // 0x4f258c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4f258cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4f2590:
    // 0x4f2590: 0x320f809  jalr        $t9
label_4f2594:
    if (ctx->pc == 0x4F2594u) {
        ctx->pc = 0x4F2594u;
            // 0x4f2594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2598u;
        goto label_4f2598;
    }
    ctx->pc = 0x4F2590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F2598u);
        ctx->pc = 0x4F2594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2590u;
            // 0x4f2594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F2598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F2598u; }
            if (ctx->pc != 0x4F2598u) { return; }
        }
        }
    }
    ctx->pc = 0x4F2598u;
label_4f2598:
    // 0x4f2598: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4f2598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f259c:
    // 0x4f259c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f259cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f25a0:
    // 0x4f25a0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4f25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4f25a4:
    // 0x4f25a4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4f25a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4f25a8:
    // 0x4f25a8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4f25a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4f25ac:
    // 0x4f25ac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4f25acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f25b0:
    // 0x4f25b0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f25b4:
    if (ctx->pc == 0x4F25B4u) {
        ctx->pc = 0x4F25B4u;
            // 0x4f25b4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4F25B8u;
        goto label_4f25b8;
    }
    ctx->pc = 0x4F25B0u;
    {
        const bool branch_taken_0x4f25b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f25b0) {
            ctx->pc = 0x4F25B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F25B0u;
            // 0x4f25b4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F25C4u;
            goto label_4f25c4;
        }
    }
    ctx->pc = 0x4F25B8u;
label_4f25b8:
    // 0x4f25b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f25b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f25bc:
    // 0x4f25bc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4f25bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4f25c0:
    // 0x4f25c0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4f25c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f25c4:
    // 0x4f25c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f25c8:
    // 0x4f25c8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4f25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4f25cc:
    // 0x4f25cc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4f25ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4f25d0:
    // 0x4f25d0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4f25d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4f25d4:
    // 0x4f25d4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4f25d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f25d8:
    // 0x4f25d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f25dc:
    if (ctx->pc == 0x4F25DCu) {
        ctx->pc = 0x4F25E0u;
        goto label_4f25e0;
    }
    ctx->pc = 0x4F25D8u;
    {
        const bool branch_taken_0x4f25d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f25d8) {
            ctx->pc = 0x4F25E8u;
            goto label_4f25e8;
        }
    }
    ctx->pc = 0x4F25E0u;
label_4f25e0:
    // 0x4f25e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f25e4:
    // 0x4f25e4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4f25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4f25e8:
    // 0x4f25e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f25ec:
    // 0x4f25ec: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4f25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4f25f0:
    // 0x4f25f0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4f25f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f25f4:
    // 0x4f25f4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f25f8:
    if (ctx->pc == 0x4F25F8u) {
        ctx->pc = 0x4F25FCu;
        goto label_4f25fc;
    }
    ctx->pc = 0x4F25F4u;
    {
        const bool branch_taken_0x4f25f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f25f4) {
            ctx->pc = 0x4F2604u;
            goto label_4f2604;
        }
    }
    ctx->pc = 0x4F25FCu;
label_4f25fc:
    // 0x4f25fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f25fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f2600:
    // 0x4f2600: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4f2600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4f2604:
    // 0x4f2604: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f2604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f2608:
    // 0x4f2608: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4f2608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4f260c:
    // 0x4f260c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4f260cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f2610:
    // 0x4f2610: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f2614:
    if (ctx->pc == 0x4F2614u) {
        ctx->pc = 0x4F2614u;
            // 0x4f2614: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4F2618u;
        goto label_4f2618;
    }
    ctx->pc = 0x4F2610u;
    {
        const bool branch_taken_0x4f2610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2610) {
            ctx->pc = 0x4F2614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2610u;
            // 0x4f2614: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F2624u;
            goto label_4f2624;
        }
    }
    ctx->pc = 0x4F2618u;
label_4f2618:
    // 0x4f2618: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f2618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f261c:
    // 0x4f261c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4f261cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4f2620:
    // 0x4f2620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f2620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2624:
    // 0x4f2624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2628:
    // 0x4f2628: 0x3e00008  jr          $ra
label_4f262c:
    if (ctx->pc == 0x4F262Cu) {
        ctx->pc = 0x4F262Cu;
            // 0x4f262c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F2630u;
        goto label_4f2630;
    }
    ctx->pc = 0x4F2628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F262Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2628u;
            // 0x4f262c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F2630u;
label_4f2630:
    // 0x4f2630: 0x813c4f0  j           func_4F13C0
label_4f2634:
    if (ctx->pc == 0x4F2634u) {
        ctx->pc = 0x4F2634u;
            // 0x4f2634: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4F2638u;
        goto label_4f2638;
    }
    ctx->pc = 0x4F2630u;
    ctx->pc = 0x4F2634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2630u;
            // 0x4f2634: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F13C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4F13C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4F2638u;
label_4f2638:
    // 0x4f2638: 0x0  nop
    ctx->pc = 0x4f2638u;
    // NOP
label_4f263c:
    // 0x4f263c: 0x0  nop
    ctx->pc = 0x4f263cu;
    // NOP
label_4f2640:
    // 0x4f2640: 0x813c67c  j           func_4F19F0
label_4f2644:
    if (ctx->pc == 0x4F2644u) {
        ctx->pc = 0x4F2644u;
            // 0x4f2644: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F2648u;
        goto label_4f2648;
    }
    ctx->pc = 0x4F2640u;
    ctx->pc = 0x4F2644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2640u;
            // 0x4f2644: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F19F0u;
    {
        auto targetFn = runtime->lookupFunction(0x4F19F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4F2648u;
label_4f2648:
    // 0x4f2648: 0x0  nop
    ctx->pc = 0x4f2648u;
    // NOP
label_4f264c:
    // 0x4f264c: 0x0  nop
    ctx->pc = 0x4f264cu;
    // NOP
label_4f2650:
    // 0x4f2650: 0x813c498  j           func_4F1260
label_4f2654:
    if (ctx->pc == 0x4F2654u) {
        ctx->pc = 0x4F2654u;
            // 0x4f2654: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F2658u;
        goto label_4f2658;
    }
    ctx->pc = 0x4F2650u;
    ctx->pc = 0x4F2654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2650u;
            // 0x4f2654: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F1260u;
    if (runtime->hasFunction(0x4F1260u)) {
        auto targetFn = runtime->lookupFunction(0x4F1260u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004F1260_0x4f1260(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4F2658u;
label_4f2658:
    // 0x4f2658: 0x0  nop
    ctx->pc = 0x4f2658u;
    // NOP
label_4f265c:
    // 0x4f265c: 0x0  nop
    ctx->pc = 0x4f265cu;
    // NOP
label_4f2660:
    // 0x4f2660: 0x813c474  j           func_4F11D0
label_4f2664:
    if (ctx->pc == 0x4F2664u) {
        ctx->pc = 0x4F2664u;
            // 0x4f2664: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F2668u;
        goto label_4f2668;
    }
    ctx->pc = 0x4F2660u;
    ctx->pc = 0x4F2664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2660u;
            // 0x4f2664: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F11D0u;
    {
        auto targetFn = runtime->lookupFunction(0x4F11D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4F2668u;
label_4f2668:
    // 0x4f2668: 0x0  nop
    ctx->pc = 0x4f2668u;
    // NOP
label_4f266c:
    // 0x4f266c: 0x0  nop
    ctx->pc = 0x4f266cu;
    // NOP
label_4f2670:
    // 0x4f2670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f2670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f2674:
    // 0x4f2674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f2674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f2678:
    // 0x4f2678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f2678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f267c:
    // 0x4f267c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f267cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f2680:
    // 0x4f2680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f2680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2684:
    // 0x4f2684: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4f2688:
    if (ctx->pc == 0x4F2688u) {
        ctx->pc = 0x4F2688u;
            // 0x4f2688: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F268Cu;
        goto label_4f268c;
    }
    ctx->pc = 0x4F2684u;
    {
        const bool branch_taken_0x4f2684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2684u;
            // 0x4f2688: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2684) {
            ctx->pc = 0x4F26E0u;
            goto label_4f26e0;
        }
    }
    ctx->pc = 0x4F268Cu;
label_4f268c:
    // 0x4f268c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f268cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f2690:
    // 0x4f2690: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f2690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f2694:
    // 0x4f2694: 0x246341e0  addiu       $v1, $v1, 0x41E0
    ctx->pc = 0x4f2694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16864));
label_4f2698:
    // 0x4f2698: 0x24424218  addiu       $v0, $v0, 0x4218
    ctx->pc = 0x4f2698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16920));
label_4f269c:
    // 0x4f269c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f269cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f26a0:
    // 0x4f26a0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4f26a4:
    if (ctx->pc == 0x4F26A4u) {
        ctx->pc = 0x4F26A4u;
            // 0x4f26a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4F26A8u;
        goto label_4f26a8;
    }
    ctx->pc = 0x4F26A0u;
    {
        const bool branch_taken_0x4f26a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F26A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F26A0u;
            // 0x4f26a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f26a0) {
            ctx->pc = 0x4F26C8u;
            goto label_4f26c8;
        }
    }
    ctx->pc = 0x4F26A8u;
label_4f26a8:
    // 0x4f26a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f26a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f26ac:
    // 0x4f26ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f26acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f26b0:
    // 0x4f26b0: 0x24634290  addiu       $v1, $v1, 0x4290
    ctx->pc = 0x4f26b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17040));
label_4f26b4:
    // 0x4f26b4: 0x244242c8  addiu       $v0, $v0, 0x42C8
    ctx->pc = 0x4f26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17096));
label_4f26b8:
    // 0x4f26b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f26b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f26bc:
    // 0x4f26bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f26bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f26c0:
    // 0x4f26c0: 0xc13c9c0  jal         func_4F2700
label_4f26c4:
    if (ctx->pc == 0x4F26C4u) {
        ctx->pc = 0x4F26C4u;
            // 0x4f26c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4F26C8u;
        goto label_4f26c8;
    }
    ctx->pc = 0x4F26C0u;
    SET_GPR_U32(ctx, 31, 0x4F26C8u);
    ctx->pc = 0x4F26C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F26C0u;
            // 0x4f26c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F2700u;
    if (runtime->hasFunction(0x4F2700u)) {
        auto targetFn = runtime->lookupFunction(0x4F2700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F26C8u; }
        if (ctx->pc != 0x4F26C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F2700_0x4f2700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F26C8u; }
        if (ctx->pc != 0x4F26C8u) { return; }
    }
    ctx->pc = 0x4F26C8u;
label_4f26c8:
    // 0x4f26c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4f26c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4f26cc:
    // 0x4f26cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f26ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f26d0:
    // 0x4f26d0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f26d4:
    if (ctx->pc == 0x4F26D4u) {
        ctx->pc = 0x4F26D4u;
            // 0x4f26d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F26D8u;
        goto label_4f26d8;
    }
    ctx->pc = 0x4F26D0u;
    {
        const bool branch_taken_0x4f26d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f26d0) {
            ctx->pc = 0x4F26D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F26D0u;
            // 0x4f26d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F26E4u;
            goto label_4f26e4;
        }
    }
    ctx->pc = 0x4F26D8u;
label_4f26d8:
    // 0x4f26d8: 0xc0400a8  jal         func_1002A0
label_4f26dc:
    if (ctx->pc == 0x4F26DCu) {
        ctx->pc = 0x4F26DCu;
            // 0x4f26dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F26E0u;
        goto label_4f26e0;
    }
    ctx->pc = 0x4F26D8u;
    SET_GPR_U32(ctx, 31, 0x4F26E0u);
    ctx->pc = 0x4F26DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F26D8u;
            // 0x4f26dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F26E0u; }
        if (ctx->pc != 0x4F26E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F26E0u; }
        if (ctx->pc != 0x4F26E0u) { return; }
    }
    ctx->pc = 0x4F26E0u;
label_4f26e0:
    // 0x4f26e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f26e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f26e4:
    // 0x4f26e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f26e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f26e8:
    // 0x4f26e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f26e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f26ec:
    // 0x4f26ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f26ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f26f0:
    // 0x4f26f0: 0x3e00008  jr          $ra
label_4f26f4:
    if (ctx->pc == 0x4F26F4u) {
        ctx->pc = 0x4F26F4u;
            // 0x4f26f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F26F8u;
        goto label_4f26f8;
    }
    ctx->pc = 0x4F26F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F26F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F26F0u;
            // 0x4f26f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F26F8u;
label_4f26f8:
    // 0x4f26f8: 0x0  nop
    ctx->pc = 0x4f26f8u;
    // NOP
label_4f26fc:
    // 0x4f26fc: 0x0  nop
    ctx->pc = 0x4f26fcu;
    // NOP
}
