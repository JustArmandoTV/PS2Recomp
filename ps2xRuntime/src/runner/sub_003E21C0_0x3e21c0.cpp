#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E21C0
// Address: 0x3e21c0 - 0x3e26f0
void sub_003E21C0_0x3e21c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E21C0_0x3e21c0");
#endif

    switch (ctx->pc) {
        case 0x3e21c0u: goto label_3e21c0;
        case 0x3e21c4u: goto label_3e21c4;
        case 0x3e21c8u: goto label_3e21c8;
        case 0x3e21ccu: goto label_3e21cc;
        case 0x3e21d0u: goto label_3e21d0;
        case 0x3e21d4u: goto label_3e21d4;
        case 0x3e21d8u: goto label_3e21d8;
        case 0x3e21dcu: goto label_3e21dc;
        case 0x3e21e0u: goto label_3e21e0;
        case 0x3e21e4u: goto label_3e21e4;
        case 0x3e21e8u: goto label_3e21e8;
        case 0x3e21ecu: goto label_3e21ec;
        case 0x3e21f0u: goto label_3e21f0;
        case 0x3e21f4u: goto label_3e21f4;
        case 0x3e21f8u: goto label_3e21f8;
        case 0x3e21fcu: goto label_3e21fc;
        case 0x3e2200u: goto label_3e2200;
        case 0x3e2204u: goto label_3e2204;
        case 0x3e2208u: goto label_3e2208;
        case 0x3e220cu: goto label_3e220c;
        case 0x3e2210u: goto label_3e2210;
        case 0x3e2214u: goto label_3e2214;
        case 0x3e2218u: goto label_3e2218;
        case 0x3e221cu: goto label_3e221c;
        case 0x3e2220u: goto label_3e2220;
        case 0x3e2224u: goto label_3e2224;
        case 0x3e2228u: goto label_3e2228;
        case 0x3e222cu: goto label_3e222c;
        case 0x3e2230u: goto label_3e2230;
        case 0x3e2234u: goto label_3e2234;
        case 0x3e2238u: goto label_3e2238;
        case 0x3e223cu: goto label_3e223c;
        case 0x3e2240u: goto label_3e2240;
        case 0x3e2244u: goto label_3e2244;
        case 0x3e2248u: goto label_3e2248;
        case 0x3e224cu: goto label_3e224c;
        case 0x3e2250u: goto label_3e2250;
        case 0x3e2254u: goto label_3e2254;
        case 0x3e2258u: goto label_3e2258;
        case 0x3e225cu: goto label_3e225c;
        case 0x3e2260u: goto label_3e2260;
        case 0x3e2264u: goto label_3e2264;
        case 0x3e2268u: goto label_3e2268;
        case 0x3e226cu: goto label_3e226c;
        case 0x3e2270u: goto label_3e2270;
        case 0x3e2274u: goto label_3e2274;
        case 0x3e2278u: goto label_3e2278;
        case 0x3e227cu: goto label_3e227c;
        case 0x3e2280u: goto label_3e2280;
        case 0x3e2284u: goto label_3e2284;
        case 0x3e2288u: goto label_3e2288;
        case 0x3e228cu: goto label_3e228c;
        case 0x3e2290u: goto label_3e2290;
        case 0x3e2294u: goto label_3e2294;
        case 0x3e2298u: goto label_3e2298;
        case 0x3e229cu: goto label_3e229c;
        case 0x3e22a0u: goto label_3e22a0;
        case 0x3e22a4u: goto label_3e22a4;
        case 0x3e22a8u: goto label_3e22a8;
        case 0x3e22acu: goto label_3e22ac;
        case 0x3e22b0u: goto label_3e22b0;
        case 0x3e22b4u: goto label_3e22b4;
        case 0x3e22b8u: goto label_3e22b8;
        case 0x3e22bcu: goto label_3e22bc;
        case 0x3e22c0u: goto label_3e22c0;
        case 0x3e22c4u: goto label_3e22c4;
        case 0x3e22c8u: goto label_3e22c8;
        case 0x3e22ccu: goto label_3e22cc;
        case 0x3e22d0u: goto label_3e22d0;
        case 0x3e22d4u: goto label_3e22d4;
        case 0x3e22d8u: goto label_3e22d8;
        case 0x3e22dcu: goto label_3e22dc;
        case 0x3e22e0u: goto label_3e22e0;
        case 0x3e22e4u: goto label_3e22e4;
        case 0x3e22e8u: goto label_3e22e8;
        case 0x3e22ecu: goto label_3e22ec;
        case 0x3e22f0u: goto label_3e22f0;
        case 0x3e22f4u: goto label_3e22f4;
        case 0x3e22f8u: goto label_3e22f8;
        case 0x3e22fcu: goto label_3e22fc;
        case 0x3e2300u: goto label_3e2300;
        case 0x3e2304u: goto label_3e2304;
        case 0x3e2308u: goto label_3e2308;
        case 0x3e230cu: goto label_3e230c;
        case 0x3e2310u: goto label_3e2310;
        case 0x3e2314u: goto label_3e2314;
        case 0x3e2318u: goto label_3e2318;
        case 0x3e231cu: goto label_3e231c;
        case 0x3e2320u: goto label_3e2320;
        case 0x3e2324u: goto label_3e2324;
        case 0x3e2328u: goto label_3e2328;
        case 0x3e232cu: goto label_3e232c;
        case 0x3e2330u: goto label_3e2330;
        case 0x3e2334u: goto label_3e2334;
        case 0x3e2338u: goto label_3e2338;
        case 0x3e233cu: goto label_3e233c;
        case 0x3e2340u: goto label_3e2340;
        case 0x3e2344u: goto label_3e2344;
        case 0x3e2348u: goto label_3e2348;
        case 0x3e234cu: goto label_3e234c;
        case 0x3e2350u: goto label_3e2350;
        case 0x3e2354u: goto label_3e2354;
        case 0x3e2358u: goto label_3e2358;
        case 0x3e235cu: goto label_3e235c;
        case 0x3e2360u: goto label_3e2360;
        case 0x3e2364u: goto label_3e2364;
        case 0x3e2368u: goto label_3e2368;
        case 0x3e236cu: goto label_3e236c;
        case 0x3e2370u: goto label_3e2370;
        case 0x3e2374u: goto label_3e2374;
        case 0x3e2378u: goto label_3e2378;
        case 0x3e237cu: goto label_3e237c;
        case 0x3e2380u: goto label_3e2380;
        case 0x3e2384u: goto label_3e2384;
        case 0x3e2388u: goto label_3e2388;
        case 0x3e238cu: goto label_3e238c;
        case 0x3e2390u: goto label_3e2390;
        case 0x3e2394u: goto label_3e2394;
        case 0x3e2398u: goto label_3e2398;
        case 0x3e239cu: goto label_3e239c;
        case 0x3e23a0u: goto label_3e23a0;
        case 0x3e23a4u: goto label_3e23a4;
        case 0x3e23a8u: goto label_3e23a8;
        case 0x3e23acu: goto label_3e23ac;
        case 0x3e23b0u: goto label_3e23b0;
        case 0x3e23b4u: goto label_3e23b4;
        case 0x3e23b8u: goto label_3e23b8;
        case 0x3e23bcu: goto label_3e23bc;
        case 0x3e23c0u: goto label_3e23c0;
        case 0x3e23c4u: goto label_3e23c4;
        case 0x3e23c8u: goto label_3e23c8;
        case 0x3e23ccu: goto label_3e23cc;
        case 0x3e23d0u: goto label_3e23d0;
        case 0x3e23d4u: goto label_3e23d4;
        case 0x3e23d8u: goto label_3e23d8;
        case 0x3e23dcu: goto label_3e23dc;
        case 0x3e23e0u: goto label_3e23e0;
        case 0x3e23e4u: goto label_3e23e4;
        case 0x3e23e8u: goto label_3e23e8;
        case 0x3e23ecu: goto label_3e23ec;
        case 0x3e23f0u: goto label_3e23f0;
        case 0x3e23f4u: goto label_3e23f4;
        case 0x3e23f8u: goto label_3e23f8;
        case 0x3e23fcu: goto label_3e23fc;
        case 0x3e2400u: goto label_3e2400;
        case 0x3e2404u: goto label_3e2404;
        case 0x3e2408u: goto label_3e2408;
        case 0x3e240cu: goto label_3e240c;
        case 0x3e2410u: goto label_3e2410;
        case 0x3e2414u: goto label_3e2414;
        case 0x3e2418u: goto label_3e2418;
        case 0x3e241cu: goto label_3e241c;
        case 0x3e2420u: goto label_3e2420;
        case 0x3e2424u: goto label_3e2424;
        case 0x3e2428u: goto label_3e2428;
        case 0x3e242cu: goto label_3e242c;
        case 0x3e2430u: goto label_3e2430;
        case 0x3e2434u: goto label_3e2434;
        case 0x3e2438u: goto label_3e2438;
        case 0x3e243cu: goto label_3e243c;
        case 0x3e2440u: goto label_3e2440;
        case 0x3e2444u: goto label_3e2444;
        case 0x3e2448u: goto label_3e2448;
        case 0x3e244cu: goto label_3e244c;
        case 0x3e2450u: goto label_3e2450;
        case 0x3e2454u: goto label_3e2454;
        case 0x3e2458u: goto label_3e2458;
        case 0x3e245cu: goto label_3e245c;
        case 0x3e2460u: goto label_3e2460;
        case 0x3e2464u: goto label_3e2464;
        case 0x3e2468u: goto label_3e2468;
        case 0x3e246cu: goto label_3e246c;
        case 0x3e2470u: goto label_3e2470;
        case 0x3e2474u: goto label_3e2474;
        case 0x3e2478u: goto label_3e2478;
        case 0x3e247cu: goto label_3e247c;
        case 0x3e2480u: goto label_3e2480;
        case 0x3e2484u: goto label_3e2484;
        case 0x3e2488u: goto label_3e2488;
        case 0x3e248cu: goto label_3e248c;
        case 0x3e2490u: goto label_3e2490;
        case 0x3e2494u: goto label_3e2494;
        case 0x3e2498u: goto label_3e2498;
        case 0x3e249cu: goto label_3e249c;
        case 0x3e24a0u: goto label_3e24a0;
        case 0x3e24a4u: goto label_3e24a4;
        case 0x3e24a8u: goto label_3e24a8;
        case 0x3e24acu: goto label_3e24ac;
        case 0x3e24b0u: goto label_3e24b0;
        case 0x3e24b4u: goto label_3e24b4;
        case 0x3e24b8u: goto label_3e24b8;
        case 0x3e24bcu: goto label_3e24bc;
        case 0x3e24c0u: goto label_3e24c0;
        case 0x3e24c4u: goto label_3e24c4;
        case 0x3e24c8u: goto label_3e24c8;
        case 0x3e24ccu: goto label_3e24cc;
        case 0x3e24d0u: goto label_3e24d0;
        case 0x3e24d4u: goto label_3e24d4;
        case 0x3e24d8u: goto label_3e24d8;
        case 0x3e24dcu: goto label_3e24dc;
        case 0x3e24e0u: goto label_3e24e0;
        case 0x3e24e4u: goto label_3e24e4;
        case 0x3e24e8u: goto label_3e24e8;
        case 0x3e24ecu: goto label_3e24ec;
        case 0x3e24f0u: goto label_3e24f0;
        case 0x3e24f4u: goto label_3e24f4;
        case 0x3e24f8u: goto label_3e24f8;
        case 0x3e24fcu: goto label_3e24fc;
        case 0x3e2500u: goto label_3e2500;
        case 0x3e2504u: goto label_3e2504;
        case 0x3e2508u: goto label_3e2508;
        case 0x3e250cu: goto label_3e250c;
        case 0x3e2510u: goto label_3e2510;
        case 0x3e2514u: goto label_3e2514;
        case 0x3e2518u: goto label_3e2518;
        case 0x3e251cu: goto label_3e251c;
        case 0x3e2520u: goto label_3e2520;
        case 0x3e2524u: goto label_3e2524;
        case 0x3e2528u: goto label_3e2528;
        case 0x3e252cu: goto label_3e252c;
        case 0x3e2530u: goto label_3e2530;
        case 0x3e2534u: goto label_3e2534;
        case 0x3e2538u: goto label_3e2538;
        case 0x3e253cu: goto label_3e253c;
        case 0x3e2540u: goto label_3e2540;
        case 0x3e2544u: goto label_3e2544;
        case 0x3e2548u: goto label_3e2548;
        case 0x3e254cu: goto label_3e254c;
        case 0x3e2550u: goto label_3e2550;
        case 0x3e2554u: goto label_3e2554;
        case 0x3e2558u: goto label_3e2558;
        case 0x3e255cu: goto label_3e255c;
        case 0x3e2560u: goto label_3e2560;
        case 0x3e2564u: goto label_3e2564;
        case 0x3e2568u: goto label_3e2568;
        case 0x3e256cu: goto label_3e256c;
        case 0x3e2570u: goto label_3e2570;
        case 0x3e2574u: goto label_3e2574;
        case 0x3e2578u: goto label_3e2578;
        case 0x3e257cu: goto label_3e257c;
        case 0x3e2580u: goto label_3e2580;
        case 0x3e2584u: goto label_3e2584;
        case 0x3e2588u: goto label_3e2588;
        case 0x3e258cu: goto label_3e258c;
        case 0x3e2590u: goto label_3e2590;
        case 0x3e2594u: goto label_3e2594;
        case 0x3e2598u: goto label_3e2598;
        case 0x3e259cu: goto label_3e259c;
        case 0x3e25a0u: goto label_3e25a0;
        case 0x3e25a4u: goto label_3e25a4;
        case 0x3e25a8u: goto label_3e25a8;
        case 0x3e25acu: goto label_3e25ac;
        case 0x3e25b0u: goto label_3e25b0;
        case 0x3e25b4u: goto label_3e25b4;
        case 0x3e25b8u: goto label_3e25b8;
        case 0x3e25bcu: goto label_3e25bc;
        case 0x3e25c0u: goto label_3e25c0;
        case 0x3e25c4u: goto label_3e25c4;
        case 0x3e25c8u: goto label_3e25c8;
        case 0x3e25ccu: goto label_3e25cc;
        case 0x3e25d0u: goto label_3e25d0;
        case 0x3e25d4u: goto label_3e25d4;
        case 0x3e25d8u: goto label_3e25d8;
        case 0x3e25dcu: goto label_3e25dc;
        case 0x3e25e0u: goto label_3e25e0;
        case 0x3e25e4u: goto label_3e25e4;
        case 0x3e25e8u: goto label_3e25e8;
        case 0x3e25ecu: goto label_3e25ec;
        case 0x3e25f0u: goto label_3e25f0;
        case 0x3e25f4u: goto label_3e25f4;
        case 0x3e25f8u: goto label_3e25f8;
        case 0x3e25fcu: goto label_3e25fc;
        case 0x3e2600u: goto label_3e2600;
        case 0x3e2604u: goto label_3e2604;
        case 0x3e2608u: goto label_3e2608;
        case 0x3e260cu: goto label_3e260c;
        case 0x3e2610u: goto label_3e2610;
        case 0x3e2614u: goto label_3e2614;
        case 0x3e2618u: goto label_3e2618;
        case 0x3e261cu: goto label_3e261c;
        case 0x3e2620u: goto label_3e2620;
        case 0x3e2624u: goto label_3e2624;
        case 0x3e2628u: goto label_3e2628;
        case 0x3e262cu: goto label_3e262c;
        case 0x3e2630u: goto label_3e2630;
        case 0x3e2634u: goto label_3e2634;
        case 0x3e2638u: goto label_3e2638;
        case 0x3e263cu: goto label_3e263c;
        case 0x3e2640u: goto label_3e2640;
        case 0x3e2644u: goto label_3e2644;
        case 0x3e2648u: goto label_3e2648;
        case 0x3e264cu: goto label_3e264c;
        case 0x3e2650u: goto label_3e2650;
        case 0x3e2654u: goto label_3e2654;
        case 0x3e2658u: goto label_3e2658;
        case 0x3e265cu: goto label_3e265c;
        case 0x3e2660u: goto label_3e2660;
        case 0x3e2664u: goto label_3e2664;
        case 0x3e2668u: goto label_3e2668;
        case 0x3e266cu: goto label_3e266c;
        case 0x3e2670u: goto label_3e2670;
        case 0x3e2674u: goto label_3e2674;
        case 0x3e2678u: goto label_3e2678;
        case 0x3e267cu: goto label_3e267c;
        case 0x3e2680u: goto label_3e2680;
        case 0x3e2684u: goto label_3e2684;
        case 0x3e2688u: goto label_3e2688;
        case 0x3e268cu: goto label_3e268c;
        case 0x3e2690u: goto label_3e2690;
        case 0x3e2694u: goto label_3e2694;
        case 0x3e2698u: goto label_3e2698;
        case 0x3e269cu: goto label_3e269c;
        case 0x3e26a0u: goto label_3e26a0;
        case 0x3e26a4u: goto label_3e26a4;
        case 0x3e26a8u: goto label_3e26a8;
        case 0x3e26acu: goto label_3e26ac;
        case 0x3e26b0u: goto label_3e26b0;
        case 0x3e26b4u: goto label_3e26b4;
        case 0x3e26b8u: goto label_3e26b8;
        case 0x3e26bcu: goto label_3e26bc;
        case 0x3e26c0u: goto label_3e26c0;
        case 0x3e26c4u: goto label_3e26c4;
        case 0x3e26c8u: goto label_3e26c8;
        case 0x3e26ccu: goto label_3e26cc;
        case 0x3e26d0u: goto label_3e26d0;
        case 0x3e26d4u: goto label_3e26d4;
        case 0x3e26d8u: goto label_3e26d8;
        case 0x3e26dcu: goto label_3e26dc;
        case 0x3e26e0u: goto label_3e26e0;
        case 0x3e26e4u: goto label_3e26e4;
        case 0x3e26e8u: goto label_3e26e8;
        case 0x3e26ecu: goto label_3e26ec;
        default: break;
    }

    ctx->pc = 0x3e21c0u;

label_3e21c0:
    // 0x3e21c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e21c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e21c4:
    // 0x3e21c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e21c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e21c8:
    // 0x3e21c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3e21c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3e21cc:
    // 0x3e21cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e21ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e21d0:
    // 0x3e21d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e21d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3e21d4:
    // 0x3e21d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e21d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e21d8:
    // 0x3e21d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e21d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e21dc:
    // 0x3e21dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e21dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e21e0:
    // 0x3e21e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e21e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e21e4:
    // 0x3e21e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e21e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e21e8:
    // 0x3e21e8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e21ec:
    // 0x3e21ec: 0xc4800284  lwc1        $f0, 0x284($a0)
    ctx->pc = 0x3e21ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e21f0:
    // 0x3e21f0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3e21f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e21f4:
    // 0x3e21f4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3e21f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3e21f8:
    // 0x3e21f8: 0xe4810284  swc1        $f1, 0x284($a0)
    ctx->pc = 0x3e21f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 644), bits); }
label_3e21fc:
    // 0x3e21fc: 0xc4800288  lwc1        $f0, 0x288($a0)
    ctx->pc = 0x3e21fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e2200:
    // 0x3e2200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e2200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e2204:
    // 0x3e2204: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3e2208:
    if (ctx->pc == 0x3E2208u) {
        ctx->pc = 0x3E2208u;
            // 0x3e2208: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E220Cu;
        goto label_3e220c;
    }
    ctx->pc = 0x3E2204u;
    {
        const bool branch_taken_0x3e2204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2204u;
            // 0x3e2208: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2204) {
            ctx->pc = 0x3E2210u;
            goto label_3e2210;
        }
    }
    ctx->pc = 0x3E220Cu;
label_3e220c:
    // 0x3e220c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e220cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2210:
    // 0x3e2210: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x3e2210u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3e2214:
    // 0x3e2214: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x3e2214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3e2218:
    // 0x3e2218: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3e2218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3e221c:
    // 0x3e221c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3e2220:
    if (ctx->pc == 0x3E2220u) {
        ctx->pc = 0x3E2220u;
            // 0x3e2220: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3E2224u;
        goto label_3e2224;
    }
    ctx->pc = 0x3E221Cu;
    {
        const bool branch_taken_0x3e221c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e221c) {
            ctx->pc = 0x3E2220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E221Cu;
            // 0x3e2220: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E2230u;
            goto label_3e2230;
        }
    }
    ctx->pc = 0x3E2224u;
label_3e2224:
    // 0x3e2224: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e2224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e2228:
    // 0x3e2228: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e222c:
    if (ctx->pc == 0x3E222Cu) {
        ctx->pc = 0x3E222Cu;
            // 0x3e222c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3E2230u;
        goto label_3e2230;
    }
    ctx->pc = 0x3E2228u;
    {
        const bool branch_taken_0x3e2228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2228u;
            // 0x3e222c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2228) {
            ctx->pc = 0x3E2248u;
            goto label_3e2248;
        }
    }
    ctx->pc = 0x3E2230u;
label_3e2230:
    // 0x3e2230: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3e2230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3e2234:
    // 0x3e2234: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e2234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3e2238:
    // 0x3e2238: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e2238u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e223c:
    // 0x3e223c: 0x0  nop
    ctx->pc = 0x3e223cu;
    // NOP
label_3e2240:
    // 0x3e2240: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e2240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3e2244:
    // 0x3e2244: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e2244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e2248:
    // 0x3e2248: 0xc6000284  lwc1        $f0, 0x284($s0)
    ctx->pc = 0x3e2248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e224c:
    // 0x3e224c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e224cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e2250:
    // 0x3e2250: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
label_3e2254:
    if (ctx->pc == 0x3E2254u) {
        ctx->pc = 0x3E2254u;
            // 0x3e2254: 0xe6000284  swc1        $f0, 0x284($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
        ctx->pc = 0x3E2258u;
        goto label_3e2258;
    }
    ctx->pc = 0x3E2250u;
    {
        const bool branch_taken_0x3e2250 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2250u;
            // 0x3e2254: 0xe6000284  swc1        $f0, 0x284($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2250) {
            ctx->pc = 0x3E2300u;
            goto label_3e2300;
        }
    }
    ctx->pc = 0x3E2258u;
label_3e2258:
    // 0x3e2258: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3e2258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_3e225c:
    // 0x3e225c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e2260:
    // 0x3e2260: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
label_3e2264:
    if (ctx->pc == 0x3E2264u) {
        ctx->pc = 0x3E2268u;
        goto label_3e2268;
    }
    ctx->pc = 0x3E2260u;
    {
        const bool branch_taken_0x3e2260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e2260) {
            ctx->pc = 0x3E2300u;
            goto label_3e2300;
        }
    }
    ctx->pc = 0x3E2268u;
label_3e2268:
    // 0x3e2268: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e2268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e226c:
    // 0x3e226c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2270:
    // 0x3e2270: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3e2270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_3e2274:
    // 0x3e2274: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3e2274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2278:
    // 0x3e2278: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x3e2278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_3e227c:
    // 0x3e227c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e227cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2280:
    // 0x3e2280: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x3e2280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_3e2284:
    // 0x3e2284: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3e2284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2288:
    // 0x3e2288: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e2288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e228c:
    // 0x3e228c: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e2290:
    // 0x3e2290: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e2290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e2294:
    // 0x3e2294: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e2294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e2298:
    // 0x3e2298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e229c:
    // 0x3e229c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e22a0:
    // 0x3e22a0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e22a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e22a4:
    // 0x3e22a4: 0x8e8603a0  lw          $a2, 0x3A0($s4)
    ctx->pc = 0x3e22a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 928)));
label_3e22a8:
    // 0x3e22a8: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e22a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e22ac:
    // 0x3e22ac: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e22acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e22b0:
    // 0x3e22b0: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e22b4:
    // 0x3e22b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e22b8:
    // 0x3e22b8: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e22bc:
    // 0x3e22bc: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e22bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e22c0:
    // 0x3e22c0: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e22c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e22c4:
    // 0x3e22c4: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e22c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e22c8:
    // 0x3e22c8: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e22c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e22cc:
    // 0x3e22cc: 0x8e8303a0  lw          $v1, 0x3A0($s4)
    ctx->pc = 0x3e22ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 928)));
label_3e22d0:
    // 0x3e22d0: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e22d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e22d4:
    // 0x3e22d4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e22d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e22d8:
    // 0x3e22d8: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e22d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e22dc:
    // 0x3e22dc: 0x8e8403a0  lw          $a0, 0x3A0($s4)
    ctx->pc = 0x3e22dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 928)));
label_3e22e0:
    // 0x3e22e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e22e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e22e4:
    // 0x3e22e4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e22e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e22e8:
    // 0x3e22e8: 0x320f809  jalr        $t9
label_3e22ec:
    if (ctx->pc == 0x3E22ECu) {
        ctx->pc = 0x3E22F0u;
        goto label_3e22f0;
    }
    ctx->pc = 0x3E22E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E22F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E22F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E22F0u; }
            if (ctx->pc != 0x3E22F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3E22F0u;
label_3e22f0:
    // 0x3e22f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3e22f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3e22f4:
    // 0x3e22f4: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x3e22f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e22f8:
    // 0x3e22f8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3e22fc:
    if (ctx->pc == 0x3E22FCu) {
        ctx->pc = 0x3E22FCu;
            // 0x3e22fc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x3E2300u;
        goto label_3e2300;
    }
    ctx->pc = 0x3E22F8u;
    {
        const bool branch_taken_0x3e22f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E22FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E22F8u;
            // 0x3e22fc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e22f8) {
            ctx->pc = 0x3E22A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e22a4;
        }
    }
    ctx->pc = 0x3E2300u;
label_3e2300:
    // 0x3e2300: 0x8e070070  lw          $a3, 0x70($s0)
    ctx->pc = 0x3e2300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3e2304:
    // 0x3e2304: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3e2304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e2308:
    // 0x3e2308: 0x10e600c2  beq         $a3, $a2, . + 4 + (0xC2 << 2)
label_3e230c:
    if (ctx->pc == 0x3E230Cu) {
        ctx->pc = 0x3E2310u;
        goto label_3e2310;
    }
    ctx->pc = 0x3E2308u;
    {
        const bool branch_taken_0x3e2308 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x3e2308) {
            ctx->pc = 0x3E2614u;
            goto label_3e2614;
        }
    }
    ctx->pc = 0x3E2310u;
label_3e2310:
    // 0x3e2310: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e2310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e2314:
    // 0x3e2314: 0x10e30089  beq         $a3, $v1, . + 4 + (0x89 << 2)
label_3e2318:
    if (ctx->pc == 0x3E2318u) {
        ctx->pc = 0x3E231Cu;
        goto label_3e231c;
    }
    ctx->pc = 0x3E2314u;
    {
        const bool branch_taken_0x3e2314 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e2314) {
            ctx->pc = 0x3E253Cu;
            goto label_3e253c;
        }
    }
    ctx->pc = 0x3E231Cu;
label_3e231c:
    // 0x3e231c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e231cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e2320:
    // 0x3e2320: 0x10e5003d  beq         $a3, $a1, . + 4 + (0x3D << 2)
label_3e2324:
    if (ctx->pc == 0x3E2324u) {
        ctx->pc = 0x3E2328u;
        goto label_3e2328;
    }
    ctx->pc = 0x3E2320u;
    {
        const bool branch_taken_0x3e2320 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x3e2320) {
            ctx->pc = 0x3E2418u;
            goto label_3e2418;
        }
    }
    ctx->pc = 0x3E2328u;
label_3e2328:
    // 0x3e2328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e2328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e232c:
    // 0x3e232c: 0x10e4000b  beq         $a3, $a0, . + 4 + (0xB << 2)
label_3e2330:
    if (ctx->pc == 0x3E2330u) {
        ctx->pc = 0x3E2334u;
        goto label_3e2334;
    }
    ctx->pc = 0x3E232Cu;
    {
        const bool branch_taken_0x3e232c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e232c) {
            ctx->pc = 0x3E235Cu;
            goto label_3e235c;
        }
    }
    ctx->pc = 0x3E2334u;
label_3e2334:
    // 0x3e2334: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_3e2338:
    if (ctx->pc == 0x3E2338u) {
        ctx->pc = 0x3E2338u;
            // 0x3e2338: 0x8e0302cc  lw          $v1, 0x2CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
        ctx->pc = 0x3E233Cu;
        goto label_3e233c;
    }
    ctx->pc = 0x3E2334u;
    {
        const bool branch_taken_0x3e2334 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2334) {
            ctx->pc = 0x3E2338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2334u;
            // 0x3e2338: 0x8e0302cc  lw          $v1, 0x2CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E2344u;
            goto label_3e2344;
        }
    }
    ctx->pc = 0x3E233Cu;
label_3e233c:
    // 0x3e233c: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_3e2340:
    if (ctx->pc == 0x3E2340u) {
        ctx->pc = 0x3E2340u;
            // 0x3e2340: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3E2344u;
        goto label_3e2344;
    }
    ctx->pc = 0x3E233Cu;
    {
        const bool branch_taken_0x3e233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E233Cu;
            // 0x3e2340: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e233c) {
            ctx->pc = 0x3E26CCu;
            goto label_3e26cc;
        }
    }
    ctx->pc = 0x3E2344u;
label_3e2344:
    // 0x3e2344: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e2344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e2348:
    // 0x3e2348: 0xae0302cc  sw          $v1, 0x2CC($s0)
    ctx->pc = 0x3e2348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 3));
label_3e234c:
    // 0x3e234c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x3e234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3e2350:
    // 0x3e2350: 0xae0302d0  sw          $v1, 0x2D0($s0)
    ctx->pc = 0x3e2350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 3));
label_3e2354:
    // 0x3e2354: 0x100000dc  b           . + 4 + (0xDC << 2)
label_3e2358:
    if (ctx->pc == 0x3E2358u) {
        ctx->pc = 0x3E2358u;
            // 0x3e2358: 0xae040070  sw          $a0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
        ctx->pc = 0x3E235Cu;
        goto label_3e235c;
    }
    ctx->pc = 0x3E2354u;
    {
        const bool branch_taken_0x3e2354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2354u;
            // 0x3e2358: 0xae040070  sw          $a0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2354) {
            ctx->pc = 0x3E26C8u;
            goto label_3e26c8;
        }
    }
    ctx->pc = 0x3E235Cu;
label_3e235c:
    // 0x3e235c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e235cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e2360:
    // 0x3e2360: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e2360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e2364:
    // 0x3e2364: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x3e2364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e2368:
    // 0x3e2368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e2368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e236c:
    // 0x3e236c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3e236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e2370:
    // 0x3e2370: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e2370u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3e2374:
    // 0x3e2374: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e2374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e2378:
    // 0x3e2378: 0x450000d3  bc1f        . + 4 + (0xD3 << 2)
label_3e237c:
    if (ctx->pc == 0x3E237Cu) {
        ctx->pc = 0x3E237Cu;
            // 0x3e237c: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->pc = 0x3E2380u;
        goto label_3e2380;
    }
    ctx->pc = 0x3E2378u;
    {
        const bool branch_taken_0x3e2378 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E237Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2378u;
            // 0x3e237c: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2378) {
            ctx->pc = 0x3E26C8u;
            goto label_3e26c8;
        }
    }
    ctx->pc = 0x3E2380u;
label_3e2380:
    // 0x3e2380: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x3e2380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
label_3e2384:
    // 0x3e2384: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2388:
    // 0x3e2388: 0xae0602d4  sw          $a2, 0x2D4($s0)
    ctx->pc = 0x3e2388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 6));
label_3e238c:
    // 0x3e238c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e238cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2390:
    // 0x3e2390: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x3e2390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_3e2394:
    // 0x3e2394: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e2394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2398:
    // 0x3e2398: 0xa20402da  sb          $a0, 0x2DA($s0)
    ctx->pc = 0x3e2398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 4));
label_3e239c:
    // 0x3e239c: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e239cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e23a0:
    // 0x3e23a0: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e23a4:
    // 0x3e23a4: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e23a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e23a8:
    // 0x3e23a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e23ac:
    // 0x3e23ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e23acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e23b0:
    // 0x3e23b0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e23b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e23b4:
    // 0x3e23b4: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e23b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e23b8:
    // 0x3e23b8: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e23b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e23bc:
    // 0x3e23bc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e23bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e23c0:
    // 0x3e23c0: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e23c4:
    // 0x3e23c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e23c8:
    // 0x3e23c8: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e23c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e23cc:
    // 0x3e23cc: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e23ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e23d0:
    // 0x3e23d0: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e23d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e23d4:
    // 0x3e23d4: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e23d8:
    // 0x3e23d8: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e23d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e23dc:
    // 0x3e23dc: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e23e0:
    // 0x3e23e0: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e23e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e23e4:
    // 0x3e23e4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e23e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e23e8:
    // 0x3e23e8: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e23e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e23ec:
    // 0x3e23ec: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e23ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e23f0:
    // 0x3e23f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e23f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e23f4:
    // 0x3e23f4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e23f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e23f8:
    // 0x3e23f8: 0x320f809  jalr        $t9
label_3e23fc:
    if (ctx->pc == 0x3E23FCu) {
        ctx->pc = 0x3E2400u;
        goto label_3e2400;
    }
    ctx->pc = 0x3E23F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E2400u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E2400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E2400u; }
            if (ctx->pc != 0x3E2400u) { return; }
        }
        }
    }
    ctx->pc = 0x3E2400u;
label_3e2400:
    // 0x3e2400: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e2400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e2404:
    // 0x3e2404: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x3e2404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e2408:
    // 0x3e2408: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3e240c:
    if (ctx->pc == 0x3E240Cu) {
        ctx->pc = 0x3E240Cu;
            // 0x3e240c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E2410u;
        goto label_3e2410;
    }
    ctx->pc = 0x3E2408u;
    {
        const bool branch_taken_0x3e2408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E240Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2408u;
            // 0x3e240c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2408) {
            ctx->pc = 0x3E23B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e23b4;
        }
    }
    ctx->pc = 0x3E2410u;
label_3e2410:
    // 0x3e2410: 0x100000ad  b           . + 4 + (0xAD << 2)
label_3e2414:
    if (ctx->pc == 0x3E2414u) {
        ctx->pc = 0x3E2418u;
        goto label_3e2418;
    }
    ctx->pc = 0x3E2410u;
    {
        const bool branch_taken_0x3e2410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2410) {
            ctx->pc = 0x3E26C8u;
            goto label_3e26c8;
        }
    }
    ctx->pc = 0x3E2418u;
label_3e2418:
    // 0x3e2418: 0x126000ab  beqz        $s3, . + 4 + (0xAB << 2)
label_3e241c:
    if (ctx->pc == 0x3E241Cu) {
        ctx->pc = 0x3E2420u;
        goto label_3e2420;
    }
    ctx->pc = 0x3E2418u;
    {
        const bool branch_taken_0x3e2418 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2418) {
            ctx->pc = 0x3E26C8u;
            goto label_3e26c8;
        }
    }
    ctx->pc = 0x3E2420u;
label_3e2420:
    // 0x3e2420: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2424:
    // 0x3e2424: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3e2424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e2428:
    // 0x3e2428: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e2428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e242c:
    // 0x3e242c: 0x8c850788  lw          $a1, 0x788($a0)
    ctx->pc = 0x3e242cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
label_3e2430:
    // 0x3e2430: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x3e2430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3e2434:
    // 0x3e2434: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3e2434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3e2438:
    // 0x3e2438: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3e2438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e243c:
    // 0x3e243c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3e2440:
    if (ctx->pc == 0x3E2440u) {
        ctx->pc = 0x3E2440u;
            // 0x3e2440: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E2444u;
        goto label_3e2444;
    }
    ctx->pc = 0x3E243Cu;
    {
        const bool branch_taken_0x3e243c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E2440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E243Cu;
            // 0x3e2440: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e243c) {
            ctx->pc = 0x3E2450u;
            goto label_3e2450;
        }
    }
    ctx->pc = 0x3E2444u;
label_3e2444:
    // 0x3e2444: 0x2ca10003  sltiu       $at, $a1, 0x3
    ctx->pc = 0x3e2444u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3e2448:
    // 0x3e2448: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_3e244c:
    if (ctx->pc == 0x3E244Cu) {
        ctx->pc = 0x3E2450u;
        goto label_3e2450;
    }
    ctx->pc = 0x3E2448u;
    {
        const bool branch_taken_0x3e2448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2448) {
            ctx->pc = 0x3E2480u;
            goto label_3e2480;
        }
    }
    ctx->pc = 0x3E2450u;
label_3e2450:
    // 0x3e2450: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3e2450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3e2454:
    // 0x3e2454: 0x24c60e80  addiu       $a2, $a2, 0xE80
    ctx->pc = 0x3e2454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3712));
label_3e2458:
    // 0x3e2458: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x3e2458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3e245c:
    // 0x3e245c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e245cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e2460:
    // 0x3e2460: 0x8e0301e0  lw          $v1, 0x1E0($s0)
    ctx->pc = 0x3e2460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_3e2464:
    // 0x3e2464: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x3e2464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3e2468:
    // 0x3e2468: 0x8c840d98  lw          $a0, 0xD98($a0)
    ctx->pc = 0x3e2468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3480)));
label_3e246c:
    // 0x3e246c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3e246cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3e2470:
    // 0x3e2470: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e2470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e2474:
    // 0x3e2474: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_3e2478:
    if (ctx->pc == 0x3E2478u) {
        ctx->pc = 0x3E2478u;
            // 0x3e2478: 0xa06000b0  sb          $zero, 0xB0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 176), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E247Cu;
        goto label_3e247c;
    }
    ctx->pc = 0x3E2474u;
    {
        const bool branch_taken_0x3e2474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2474u;
            // 0x3e2478: 0xa06000b0  sb          $zero, 0xB0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2474) {
            ctx->pc = 0x3E2458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e2458;
        }
    }
    ctx->pc = 0x3E247Cu;
label_3e247c:
    // 0x3e247c: 0x0  nop
    ctx->pc = 0x3e247cu;
    // NOP
label_3e2480:
    // 0x3e2480: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e2480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e2484:
    // 0x3e2484: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x3e2484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_3e2488:
    // 0x3e2488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e2488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e248c:
    // 0x3e248c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3e248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e2490:
    // 0x3e2490: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e2490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2494:
    // 0x3e2494: 0xae0202d4  sw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e2494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 2));
label_3e2498:
    // 0x3e2498: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e2498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e249c:
    // 0x3e249c: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x3e249cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_3e24a0:
    // 0x3e24a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e24a4:
    // 0x3e24a4: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e24a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e24a8:
    // 0x3e24a8: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e24ac:
    // 0x3e24ac: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e24acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e24b0:
    // 0x3e24b0: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e24b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e24b4:
    // 0x3e24b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e24b8:
    // 0x3e24b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e24bc:
    // 0x3e24bc: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e24bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e24c0:
    // 0x3e24c0: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e24c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e24c4:
    // 0x3e24c4: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e24c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e24c8:
    // 0x3e24c8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e24c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e24cc:
    // 0x3e24cc: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e24ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e24d0:
    // 0x3e24d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e24d4:
    // 0x3e24d4: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e24d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e24d8:
    // 0x3e24d8: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e24dc:
    // 0x3e24dc: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e24dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e24e0:
    // 0x3e24e0: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e24e4:
    // 0x3e24e4: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e24e8:
    // 0x3e24e8: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e24ec:
    // 0x3e24ec: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e24ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e24f0:
    // 0x3e24f0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e24f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e24f4:
    // 0x3e24f4: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e24f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e24f8:
    // 0x3e24f8: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e24fc:
    // 0x3e24fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e24fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e2500:
    // 0x3e2500: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e2500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e2504:
    // 0x3e2504: 0x320f809  jalr        $t9
label_3e2508:
    if (ctx->pc == 0x3E2508u) {
        ctx->pc = 0x3E250Cu;
        goto label_3e250c;
    }
    ctx->pc = 0x3E2504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E250Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E250Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E250Cu; }
            if (ctx->pc != 0x3E250Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3E250Cu;
label_3e250c:
    // 0x3e250c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e250cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e2510:
    // 0x3e2510: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x3e2510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e2514:
    // 0x3e2514: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3e2518:
    if (ctx->pc == 0x3E2518u) {
        ctx->pc = 0x3E2518u;
            // 0x3e2518: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E251Cu;
        goto label_3e251c;
    }
    ctx->pc = 0x3E2514u;
    {
        const bool branch_taken_0x3e2514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2514u;
            // 0x3e2518: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2514) {
            ctx->pc = 0x3E24C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e24c0;
        }
    }
    ctx->pc = 0x3E251Cu;
label_3e251c:
    // 0x3e251c: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x3e251cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
label_3e2520:
    // 0x3e2520: 0xae03027c  sw          $v1, 0x27C($s0)
    ctx->pc = 0x3e2520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 3));
label_3e2524:
    // 0x3e2524: 0x8e0302cc  lw          $v1, 0x2CC($s0)
    ctx->pc = 0x3e2524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
label_3e2528:
    // 0x3e2528: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e2528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e252c:
    // 0x3e252c: 0xae0302cc  sw          $v1, 0x2CC($s0)
    ctx->pc = 0x3e252cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 3));
label_3e2530:
    // 0x3e2530: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x3e2530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3e2534:
    // 0x3e2534: 0x10000064  b           . + 4 + (0x64 << 2)
label_3e2538:
    if (ctx->pc == 0x3E2538u) {
        ctx->pc = 0x3E2538u;
            // 0x3e2538: 0xae0302d0  sw          $v1, 0x2D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 3));
        ctx->pc = 0x3E253Cu;
        goto label_3e253c;
    }
    ctx->pc = 0x3E2534u;
    {
        const bool branch_taken_0x3e2534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2534u;
            // 0x3e2538: 0xae0302d0  sw          $v1, 0x2D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2534) {
            ctx->pc = 0x3E26C8u;
            goto label_3e26c8;
        }
    }
    ctx->pc = 0x3E253Cu;
label_3e253c:
    // 0x3e253c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e253cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e2540:
    // 0x3e2540: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e2540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e2544:
    // 0x3e2544: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x3e2544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e2548:
    // 0x3e2548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e2548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e254c:
    // 0x3e254c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3e254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e2550:
    // 0x3e2550: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e2550u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3e2554:
    // 0x3e2554: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e2554u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e2558:
    // 0x3e2558: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
label_3e255c:
    if (ctx->pc == 0x3E255Cu) {
        ctx->pc = 0x3E255Cu;
            // 0x3e255c: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->pc = 0x3E2560u;
        goto label_3e2560;
    }
    ctx->pc = 0x3E2558u;
    {
        const bool branch_taken_0x3e2558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E255Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2558u;
            // 0x3e255c: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2558) {
            ctx->pc = 0x3E26C8u;
            goto label_3e26c8;
        }
    }
    ctx->pc = 0x3E2560u;
label_3e2560:
    // 0x3e2560: 0x8e0502cc  lw          $a1, 0x2CC($s0)
    ctx->pc = 0x3e2560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
label_3e2564:
    // 0x3e2564: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3e2564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e2568:
    // 0x3e2568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e2568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e256c:
    // 0x3e256c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2570:
    // 0x3e2570: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e2570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2574:
    // 0x3e2574: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e2574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2578:
    // 0x3e2578: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e2578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3e257c:
    // 0x3e257c: 0xae0502cc  sw          $a1, 0x2CC($s0)
    ctx->pc = 0x3e257cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 5));
label_3e2580:
    // 0x3e2580: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x3e2580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3e2584:
    // 0x3e2584: 0xae0502d0  sw          $a1, 0x2D0($s0)
    ctx->pc = 0x3e2584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 5));
label_3e2588:
    // 0x3e2588: 0xae060070  sw          $a2, 0x70($s0)
    ctx->pc = 0x3e2588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 6));
label_3e258c:
    // 0x3e258c: 0xae0402d4  sw          $a0, 0x2D4($s0)
    ctx->pc = 0x3e258cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 4));
label_3e2590:
    // 0x3e2590: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x3e2590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_3e2594:
    // 0x3e2594: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e2594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e2598:
    // 0x3e2598: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e2598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e259c:
    // 0x3e259c: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e25a0:
    // 0x3e25a0: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e25a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e25a4:
    // 0x3e25a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e25a8:
    // 0x3e25a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e25a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e25ac:
    // 0x3e25ac: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e25acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e25b0:
    // 0x3e25b0: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e25b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e25b4:
    // 0x3e25b4: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e25b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e25b8:
    // 0x3e25b8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e25b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e25bc:
    // 0x3e25bc: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e25c0:
    // 0x3e25c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e25c4:
    // 0x3e25c4: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e25c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e25c8:
    // 0x3e25c8: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e25cc:
    // 0x3e25cc: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e25ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e25d0:
    // 0x3e25d0: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e25d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e25d4:
    // 0x3e25d4: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e25d8:
    // 0x3e25d8: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e25dc:
    // 0x3e25dc: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e25dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e25e0:
    // 0x3e25e0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e25e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e25e4:
    // 0x3e25e4: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e25e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e25e8:
    // 0x3e25e8: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e25e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e25ec:
    // 0x3e25ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e25ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e25f0:
    // 0x3e25f0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e25f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e25f4:
    // 0x3e25f4: 0x320f809  jalr        $t9
label_3e25f8:
    if (ctx->pc == 0x3E25F8u) {
        ctx->pc = 0x3E25FCu;
        goto label_3e25fc;
    }
    ctx->pc = 0x3E25F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E25FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E25FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E25FCu; }
            if (ctx->pc != 0x3E25FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3E25FCu;
label_3e25fc:
    // 0x3e25fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e25fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e2600:
    // 0x3e2600: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x3e2600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e2604:
    // 0x3e2604: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3e2608:
    if (ctx->pc == 0x3E2608u) {
        ctx->pc = 0x3E2608u;
            // 0x3e2608: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E260Cu;
        goto label_3e260c;
    }
    ctx->pc = 0x3E2604u;
    {
        const bool branch_taken_0x3e2604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2604u;
            // 0x3e2608: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2604) {
            ctx->pc = 0x3E25B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e25b0;
        }
    }
    ctx->pc = 0x3E260Cu;
label_3e260c:
    // 0x3e260c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3e2610:
    if (ctx->pc == 0x3E2610u) {
        ctx->pc = 0x3E2614u;
        goto label_3e2614;
    }
    ctx->pc = 0x3E260Cu;
    {
        const bool branch_taken_0x3e260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e260c) {
            ctx->pc = 0x3E26C8u;
            goto label_3e26c8;
        }
    }
    ctx->pc = 0x3E2614u;
label_3e2614:
    // 0x3e2614: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
label_3e2618:
    if (ctx->pc == 0x3E2618u) {
        ctx->pc = 0x3E261Cu;
        goto label_3e261c;
    }
    ctx->pc = 0x3E2614u;
    {
        const bool branch_taken_0x3e2614 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2614) {
            ctx->pc = 0x3E26C8u;
            goto label_3e26c8;
        }
    }
    ctx->pc = 0x3E261Cu;
label_3e261c:
    // 0x3e261c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3e261cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_3e2620:
    // 0x3e2620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e2620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2624:
    // 0x3e2624: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x3e2624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_3e2628:
    // 0x3e2628: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e262c:
    // 0x3e262c: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x3e262cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_3e2630:
    // 0x3e2630: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e2630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2634:
    // 0x3e2634: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e2634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e2638:
    // 0x3e2638: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e2638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e263c:
    // 0x3e263c: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e2640:
    // 0x3e2640: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e2640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e2644:
    // 0x3e2644: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e2644u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e2648:
    // 0x3e2648: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e264c:
    // 0x3e264c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e2650:
    // 0x3e2650: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e2650u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e2654:
    // 0x3e2654: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e2654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2658:
    // 0x3e2658: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e2658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e265c:
    // 0x3e265c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e265cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e2660:
    // 0x3e2660: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e2660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e2664:
    // 0x3e2664: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e2664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e2668:
    // 0x3e2668: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e2668u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e266c:
    // 0x3e266c: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e266cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e2670:
    // 0x3e2670: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e2670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e2674:
    // 0x3e2674: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e2674u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e2678:
    // 0x3e2678: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e2678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e267c:
    // 0x3e267c: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2680:
    // 0x3e2680: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e2680u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e2684:
    // 0x3e2684: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e2684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e2688:
    // 0x3e2688: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e2688u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e268c:
    // 0x3e268c: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e268cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2690:
    // 0x3e2690: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e2690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e2694:
    // 0x3e2694: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e2694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e2698:
    // 0x3e2698: 0x320f809  jalr        $t9
label_3e269c:
    if (ctx->pc == 0x3E269Cu) {
        ctx->pc = 0x3E26A0u;
        goto label_3e26a0;
    }
    ctx->pc = 0x3E2698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E26A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E26A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E26A0u; }
            if (ctx->pc != 0x3E26A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3E26A0u;
label_3e26a0:
    // 0x3e26a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e26a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e26a4:
    // 0x3e26a4: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x3e26a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e26a8:
    // 0x3e26a8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3e26ac:
    if (ctx->pc == 0x3E26ACu) {
        ctx->pc = 0x3E26ACu;
            // 0x3e26ac: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E26B0u;
        goto label_3e26b0;
    }
    ctx->pc = 0x3E26A8u;
    {
        const bool branch_taken_0x3e26a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E26ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E26A8u;
            // 0x3e26ac: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e26a8) {
            ctx->pc = 0x3E2654u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e2654;
        }
    }
    ctx->pc = 0x3E26B0u;
label_3e26b0:
    // 0x3e26b0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x3e26b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_3e26b4:
    // 0x3e26b4: 0x820302e8  lb          $v1, 0x2E8($s0)
    ctx->pc = 0x3e26b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 744)));
label_3e26b8:
    // 0x3e26b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3e26bc:
    if (ctx->pc == 0x3E26BCu) {
        ctx->pc = 0x3E26C0u;
        goto label_3e26c0;
    }
    ctx->pc = 0x3E26B8u;
    {
        const bool branch_taken_0x3e26b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e26b8) {
            ctx->pc = 0x3E26C8u;
            goto label_3e26c8;
        }
    }
    ctx->pc = 0x3E26C0u;
label_3e26c0:
    // 0x3e26c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e26c4:
    // 0x3e26c4: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x3e26c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_3e26c8:
    // 0x3e26c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3e26c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3e26cc:
    // 0x3e26cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e26ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e26d0:
    // 0x3e26d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e26d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e26d4:
    // 0x3e26d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e26d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e26d8:
    // 0x3e26d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e26d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e26dc:
    // 0x3e26dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e26dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e26e0:
    // 0x3e26e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e26e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e26e4:
    // 0x3e26e4: 0x3e00008  jr          $ra
label_3e26e8:
    if (ctx->pc == 0x3E26E8u) {
        ctx->pc = 0x3E26E8u;
            // 0x3e26e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3E26ECu;
        goto label_3e26ec;
    }
    ctx->pc = 0x3E26E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E26E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E26E4u;
            // 0x3e26e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E26ECu;
label_3e26ec:
    // 0x3e26ec: 0x0  nop
    ctx->pc = 0x3e26ecu;
    // NOP
}
