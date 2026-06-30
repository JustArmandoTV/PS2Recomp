#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E2170
// Address: 0x4e2170 - 0x4e2bb0
void sub_004E2170_0x4e2170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2170_0x4e2170");
#endif

    switch (ctx->pc) {
        case 0x4e2170u: goto label_4e2170;
        case 0x4e2174u: goto label_4e2174;
        case 0x4e2178u: goto label_4e2178;
        case 0x4e217cu: goto label_4e217c;
        case 0x4e2180u: goto label_4e2180;
        case 0x4e2184u: goto label_4e2184;
        case 0x4e2188u: goto label_4e2188;
        case 0x4e218cu: goto label_4e218c;
        case 0x4e2190u: goto label_4e2190;
        case 0x4e2194u: goto label_4e2194;
        case 0x4e2198u: goto label_4e2198;
        case 0x4e219cu: goto label_4e219c;
        case 0x4e21a0u: goto label_4e21a0;
        case 0x4e21a4u: goto label_4e21a4;
        case 0x4e21a8u: goto label_4e21a8;
        case 0x4e21acu: goto label_4e21ac;
        case 0x4e21b0u: goto label_4e21b0;
        case 0x4e21b4u: goto label_4e21b4;
        case 0x4e21b8u: goto label_4e21b8;
        case 0x4e21bcu: goto label_4e21bc;
        case 0x4e21c0u: goto label_4e21c0;
        case 0x4e21c4u: goto label_4e21c4;
        case 0x4e21c8u: goto label_4e21c8;
        case 0x4e21ccu: goto label_4e21cc;
        case 0x4e21d0u: goto label_4e21d0;
        case 0x4e21d4u: goto label_4e21d4;
        case 0x4e21d8u: goto label_4e21d8;
        case 0x4e21dcu: goto label_4e21dc;
        case 0x4e21e0u: goto label_4e21e0;
        case 0x4e21e4u: goto label_4e21e4;
        case 0x4e21e8u: goto label_4e21e8;
        case 0x4e21ecu: goto label_4e21ec;
        case 0x4e21f0u: goto label_4e21f0;
        case 0x4e21f4u: goto label_4e21f4;
        case 0x4e21f8u: goto label_4e21f8;
        case 0x4e21fcu: goto label_4e21fc;
        case 0x4e2200u: goto label_4e2200;
        case 0x4e2204u: goto label_4e2204;
        case 0x4e2208u: goto label_4e2208;
        case 0x4e220cu: goto label_4e220c;
        case 0x4e2210u: goto label_4e2210;
        case 0x4e2214u: goto label_4e2214;
        case 0x4e2218u: goto label_4e2218;
        case 0x4e221cu: goto label_4e221c;
        case 0x4e2220u: goto label_4e2220;
        case 0x4e2224u: goto label_4e2224;
        case 0x4e2228u: goto label_4e2228;
        case 0x4e222cu: goto label_4e222c;
        case 0x4e2230u: goto label_4e2230;
        case 0x4e2234u: goto label_4e2234;
        case 0x4e2238u: goto label_4e2238;
        case 0x4e223cu: goto label_4e223c;
        case 0x4e2240u: goto label_4e2240;
        case 0x4e2244u: goto label_4e2244;
        case 0x4e2248u: goto label_4e2248;
        case 0x4e224cu: goto label_4e224c;
        case 0x4e2250u: goto label_4e2250;
        case 0x4e2254u: goto label_4e2254;
        case 0x4e2258u: goto label_4e2258;
        case 0x4e225cu: goto label_4e225c;
        case 0x4e2260u: goto label_4e2260;
        case 0x4e2264u: goto label_4e2264;
        case 0x4e2268u: goto label_4e2268;
        case 0x4e226cu: goto label_4e226c;
        case 0x4e2270u: goto label_4e2270;
        case 0x4e2274u: goto label_4e2274;
        case 0x4e2278u: goto label_4e2278;
        case 0x4e227cu: goto label_4e227c;
        case 0x4e2280u: goto label_4e2280;
        case 0x4e2284u: goto label_4e2284;
        case 0x4e2288u: goto label_4e2288;
        case 0x4e228cu: goto label_4e228c;
        case 0x4e2290u: goto label_4e2290;
        case 0x4e2294u: goto label_4e2294;
        case 0x4e2298u: goto label_4e2298;
        case 0x4e229cu: goto label_4e229c;
        case 0x4e22a0u: goto label_4e22a0;
        case 0x4e22a4u: goto label_4e22a4;
        case 0x4e22a8u: goto label_4e22a8;
        case 0x4e22acu: goto label_4e22ac;
        case 0x4e22b0u: goto label_4e22b0;
        case 0x4e22b4u: goto label_4e22b4;
        case 0x4e22b8u: goto label_4e22b8;
        case 0x4e22bcu: goto label_4e22bc;
        case 0x4e22c0u: goto label_4e22c0;
        case 0x4e22c4u: goto label_4e22c4;
        case 0x4e22c8u: goto label_4e22c8;
        case 0x4e22ccu: goto label_4e22cc;
        case 0x4e22d0u: goto label_4e22d0;
        case 0x4e22d4u: goto label_4e22d4;
        case 0x4e22d8u: goto label_4e22d8;
        case 0x4e22dcu: goto label_4e22dc;
        case 0x4e22e0u: goto label_4e22e0;
        case 0x4e22e4u: goto label_4e22e4;
        case 0x4e22e8u: goto label_4e22e8;
        case 0x4e22ecu: goto label_4e22ec;
        case 0x4e22f0u: goto label_4e22f0;
        case 0x4e22f4u: goto label_4e22f4;
        case 0x4e22f8u: goto label_4e22f8;
        case 0x4e22fcu: goto label_4e22fc;
        case 0x4e2300u: goto label_4e2300;
        case 0x4e2304u: goto label_4e2304;
        case 0x4e2308u: goto label_4e2308;
        case 0x4e230cu: goto label_4e230c;
        case 0x4e2310u: goto label_4e2310;
        case 0x4e2314u: goto label_4e2314;
        case 0x4e2318u: goto label_4e2318;
        case 0x4e231cu: goto label_4e231c;
        case 0x4e2320u: goto label_4e2320;
        case 0x4e2324u: goto label_4e2324;
        case 0x4e2328u: goto label_4e2328;
        case 0x4e232cu: goto label_4e232c;
        case 0x4e2330u: goto label_4e2330;
        case 0x4e2334u: goto label_4e2334;
        case 0x4e2338u: goto label_4e2338;
        case 0x4e233cu: goto label_4e233c;
        case 0x4e2340u: goto label_4e2340;
        case 0x4e2344u: goto label_4e2344;
        case 0x4e2348u: goto label_4e2348;
        case 0x4e234cu: goto label_4e234c;
        case 0x4e2350u: goto label_4e2350;
        case 0x4e2354u: goto label_4e2354;
        case 0x4e2358u: goto label_4e2358;
        case 0x4e235cu: goto label_4e235c;
        case 0x4e2360u: goto label_4e2360;
        case 0x4e2364u: goto label_4e2364;
        case 0x4e2368u: goto label_4e2368;
        case 0x4e236cu: goto label_4e236c;
        case 0x4e2370u: goto label_4e2370;
        case 0x4e2374u: goto label_4e2374;
        case 0x4e2378u: goto label_4e2378;
        case 0x4e237cu: goto label_4e237c;
        case 0x4e2380u: goto label_4e2380;
        case 0x4e2384u: goto label_4e2384;
        case 0x4e2388u: goto label_4e2388;
        case 0x4e238cu: goto label_4e238c;
        case 0x4e2390u: goto label_4e2390;
        case 0x4e2394u: goto label_4e2394;
        case 0x4e2398u: goto label_4e2398;
        case 0x4e239cu: goto label_4e239c;
        case 0x4e23a0u: goto label_4e23a0;
        case 0x4e23a4u: goto label_4e23a4;
        case 0x4e23a8u: goto label_4e23a8;
        case 0x4e23acu: goto label_4e23ac;
        case 0x4e23b0u: goto label_4e23b0;
        case 0x4e23b4u: goto label_4e23b4;
        case 0x4e23b8u: goto label_4e23b8;
        case 0x4e23bcu: goto label_4e23bc;
        case 0x4e23c0u: goto label_4e23c0;
        case 0x4e23c4u: goto label_4e23c4;
        case 0x4e23c8u: goto label_4e23c8;
        case 0x4e23ccu: goto label_4e23cc;
        case 0x4e23d0u: goto label_4e23d0;
        case 0x4e23d4u: goto label_4e23d4;
        case 0x4e23d8u: goto label_4e23d8;
        case 0x4e23dcu: goto label_4e23dc;
        case 0x4e23e0u: goto label_4e23e0;
        case 0x4e23e4u: goto label_4e23e4;
        case 0x4e23e8u: goto label_4e23e8;
        case 0x4e23ecu: goto label_4e23ec;
        case 0x4e23f0u: goto label_4e23f0;
        case 0x4e23f4u: goto label_4e23f4;
        case 0x4e23f8u: goto label_4e23f8;
        case 0x4e23fcu: goto label_4e23fc;
        case 0x4e2400u: goto label_4e2400;
        case 0x4e2404u: goto label_4e2404;
        case 0x4e2408u: goto label_4e2408;
        case 0x4e240cu: goto label_4e240c;
        case 0x4e2410u: goto label_4e2410;
        case 0x4e2414u: goto label_4e2414;
        case 0x4e2418u: goto label_4e2418;
        case 0x4e241cu: goto label_4e241c;
        case 0x4e2420u: goto label_4e2420;
        case 0x4e2424u: goto label_4e2424;
        case 0x4e2428u: goto label_4e2428;
        case 0x4e242cu: goto label_4e242c;
        case 0x4e2430u: goto label_4e2430;
        case 0x4e2434u: goto label_4e2434;
        case 0x4e2438u: goto label_4e2438;
        case 0x4e243cu: goto label_4e243c;
        case 0x4e2440u: goto label_4e2440;
        case 0x4e2444u: goto label_4e2444;
        case 0x4e2448u: goto label_4e2448;
        case 0x4e244cu: goto label_4e244c;
        case 0x4e2450u: goto label_4e2450;
        case 0x4e2454u: goto label_4e2454;
        case 0x4e2458u: goto label_4e2458;
        case 0x4e245cu: goto label_4e245c;
        case 0x4e2460u: goto label_4e2460;
        case 0x4e2464u: goto label_4e2464;
        case 0x4e2468u: goto label_4e2468;
        case 0x4e246cu: goto label_4e246c;
        case 0x4e2470u: goto label_4e2470;
        case 0x4e2474u: goto label_4e2474;
        case 0x4e2478u: goto label_4e2478;
        case 0x4e247cu: goto label_4e247c;
        case 0x4e2480u: goto label_4e2480;
        case 0x4e2484u: goto label_4e2484;
        case 0x4e2488u: goto label_4e2488;
        case 0x4e248cu: goto label_4e248c;
        case 0x4e2490u: goto label_4e2490;
        case 0x4e2494u: goto label_4e2494;
        case 0x4e2498u: goto label_4e2498;
        case 0x4e249cu: goto label_4e249c;
        case 0x4e24a0u: goto label_4e24a0;
        case 0x4e24a4u: goto label_4e24a4;
        case 0x4e24a8u: goto label_4e24a8;
        case 0x4e24acu: goto label_4e24ac;
        case 0x4e24b0u: goto label_4e24b0;
        case 0x4e24b4u: goto label_4e24b4;
        case 0x4e24b8u: goto label_4e24b8;
        case 0x4e24bcu: goto label_4e24bc;
        case 0x4e24c0u: goto label_4e24c0;
        case 0x4e24c4u: goto label_4e24c4;
        case 0x4e24c8u: goto label_4e24c8;
        case 0x4e24ccu: goto label_4e24cc;
        case 0x4e24d0u: goto label_4e24d0;
        case 0x4e24d4u: goto label_4e24d4;
        case 0x4e24d8u: goto label_4e24d8;
        case 0x4e24dcu: goto label_4e24dc;
        case 0x4e24e0u: goto label_4e24e0;
        case 0x4e24e4u: goto label_4e24e4;
        case 0x4e24e8u: goto label_4e24e8;
        case 0x4e24ecu: goto label_4e24ec;
        case 0x4e24f0u: goto label_4e24f0;
        case 0x4e24f4u: goto label_4e24f4;
        case 0x4e24f8u: goto label_4e24f8;
        case 0x4e24fcu: goto label_4e24fc;
        case 0x4e2500u: goto label_4e2500;
        case 0x4e2504u: goto label_4e2504;
        case 0x4e2508u: goto label_4e2508;
        case 0x4e250cu: goto label_4e250c;
        case 0x4e2510u: goto label_4e2510;
        case 0x4e2514u: goto label_4e2514;
        case 0x4e2518u: goto label_4e2518;
        case 0x4e251cu: goto label_4e251c;
        case 0x4e2520u: goto label_4e2520;
        case 0x4e2524u: goto label_4e2524;
        case 0x4e2528u: goto label_4e2528;
        case 0x4e252cu: goto label_4e252c;
        case 0x4e2530u: goto label_4e2530;
        case 0x4e2534u: goto label_4e2534;
        case 0x4e2538u: goto label_4e2538;
        case 0x4e253cu: goto label_4e253c;
        case 0x4e2540u: goto label_4e2540;
        case 0x4e2544u: goto label_4e2544;
        case 0x4e2548u: goto label_4e2548;
        case 0x4e254cu: goto label_4e254c;
        case 0x4e2550u: goto label_4e2550;
        case 0x4e2554u: goto label_4e2554;
        case 0x4e2558u: goto label_4e2558;
        case 0x4e255cu: goto label_4e255c;
        case 0x4e2560u: goto label_4e2560;
        case 0x4e2564u: goto label_4e2564;
        case 0x4e2568u: goto label_4e2568;
        case 0x4e256cu: goto label_4e256c;
        case 0x4e2570u: goto label_4e2570;
        case 0x4e2574u: goto label_4e2574;
        case 0x4e2578u: goto label_4e2578;
        case 0x4e257cu: goto label_4e257c;
        case 0x4e2580u: goto label_4e2580;
        case 0x4e2584u: goto label_4e2584;
        case 0x4e2588u: goto label_4e2588;
        case 0x4e258cu: goto label_4e258c;
        case 0x4e2590u: goto label_4e2590;
        case 0x4e2594u: goto label_4e2594;
        case 0x4e2598u: goto label_4e2598;
        case 0x4e259cu: goto label_4e259c;
        case 0x4e25a0u: goto label_4e25a0;
        case 0x4e25a4u: goto label_4e25a4;
        case 0x4e25a8u: goto label_4e25a8;
        case 0x4e25acu: goto label_4e25ac;
        case 0x4e25b0u: goto label_4e25b0;
        case 0x4e25b4u: goto label_4e25b4;
        case 0x4e25b8u: goto label_4e25b8;
        case 0x4e25bcu: goto label_4e25bc;
        case 0x4e25c0u: goto label_4e25c0;
        case 0x4e25c4u: goto label_4e25c4;
        case 0x4e25c8u: goto label_4e25c8;
        case 0x4e25ccu: goto label_4e25cc;
        case 0x4e25d0u: goto label_4e25d0;
        case 0x4e25d4u: goto label_4e25d4;
        case 0x4e25d8u: goto label_4e25d8;
        case 0x4e25dcu: goto label_4e25dc;
        case 0x4e25e0u: goto label_4e25e0;
        case 0x4e25e4u: goto label_4e25e4;
        case 0x4e25e8u: goto label_4e25e8;
        case 0x4e25ecu: goto label_4e25ec;
        case 0x4e25f0u: goto label_4e25f0;
        case 0x4e25f4u: goto label_4e25f4;
        case 0x4e25f8u: goto label_4e25f8;
        case 0x4e25fcu: goto label_4e25fc;
        case 0x4e2600u: goto label_4e2600;
        case 0x4e2604u: goto label_4e2604;
        case 0x4e2608u: goto label_4e2608;
        case 0x4e260cu: goto label_4e260c;
        case 0x4e2610u: goto label_4e2610;
        case 0x4e2614u: goto label_4e2614;
        case 0x4e2618u: goto label_4e2618;
        case 0x4e261cu: goto label_4e261c;
        case 0x4e2620u: goto label_4e2620;
        case 0x4e2624u: goto label_4e2624;
        case 0x4e2628u: goto label_4e2628;
        case 0x4e262cu: goto label_4e262c;
        case 0x4e2630u: goto label_4e2630;
        case 0x4e2634u: goto label_4e2634;
        case 0x4e2638u: goto label_4e2638;
        case 0x4e263cu: goto label_4e263c;
        case 0x4e2640u: goto label_4e2640;
        case 0x4e2644u: goto label_4e2644;
        case 0x4e2648u: goto label_4e2648;
        case 0x4e264cu: goto label_4e264c;
        case 0x4e2650u: goto label_4e2650;
        case 0x4e2654u: goto label_4e2654;
        case 0x4e2658u: goto label_4e2658;
        case 0x4e265cu: goto label_4e265c;
        case 0x4e2660u: goto label_4e2660;
        case 0x4e2664u: goto label_4e2664;
        case 0x4e2668u: goto label_4e2668;
        case 0x4e266cu: goto label_4e266c;
        case 0x4e2670u: goto label_4e2670;
        case 0x4e2674u: goto label_4e2674;
        case 0x4e2678u: goto label_4e2678;
        case 0x4e267cu: goto label_4e267c;
        case 0x4e2680u: goto label_4e2680;
        case 0x4e2684u: goto label_4e2684;
        case 0x4e2688u: goto label_4e2688;
        case 0x4e268cu: goto label_4e268c;
        case 0x4e2690u: goto label_4e2690;
        case 0x4e2694u: goto label_4e2694;
        case 0x4e2698u: goto label_4e2698;
        case 0x4e269cu: goto label_4e269c;
        case 0x4e26a0u: goto label_4e26a0;
        case 0x4e26a4u: goto label_4e26a4;
        case 0x4e26a8u: goto label_4e26a8;
        case 0x4e26acu: goto label_4e26ac;
        case 0x4e26b0u: goto label_4e26b0;
        case 0x4e26b4u: goto label_4e26b4;
        case 0x4e26b8u: goto label_4e26b8;
        case 0x4e26bcu: goto label_4e26bc;
        case 0x4e26c0u: goto label_4e26c0;
        case 0x4e26c4u: goto label_4e26c4;
        case 0x4e26c8u: goto label_4e26c8;
        case 0x4e26ccu: goto label_4e26cc;
        case 0x4e26d0u: goto label_4e26d0;
        case 0x4e26d4u: goto label_4e26d4;
        case 0x4e26d8u: goto label_4e26d8;
        case 0x4e26dcu: goto label_4e26dc;
        case 0x4e26e0u: goto label_4e26e0;
        case 0x4e26e4u: goto label_4e26e4;
        case 0x4e26e8u: goto label_4e26e8;
        case 0x4e26ecu: goto label_4e26ec;
        case 0x4e26f0u: goto label_4e26f0;
        case 0x4e26f4u: goto label_4e26f4;
        case 0x4e26f8u: goto label_4e26f8;
        case 0x4e26fcu: goto label_4e26fc;
        case 0x4e2700u: goto label_4e2700;
        case 0x4e2704u: goto label_4e2704;
        case 0x4e2708u: goto label_4e2708;
        case 0x4e270cu: goto label_4e270c;
        case 0x4e2710u: goto label_4e2710;
        case 0x4e2714u: goto label_4e2714;
        case 0x4e2718u: goto label_4e2718;
        case 0x4e271cu: goto label_4e271c;
        case 0x4e2720u: goto label_4e2720;
        case 0x4e2724u: goto label_4e2724;
        case 0x4e2728u: goto label_4e2728;
        case 0x4e272cu: goto label_4e272c;
        case 0x4e2730u: goto label_4e2730;
        case 0x4e2734u: goto label_4e2734;
        case 0x4e2738u: goto label_4e2738;
        case 0x4e273cu: goto label_4e273c;
        case 0x4e2740u: goto label_4e2740;
        case 0x4e2744u: goto label_4e2744;
        case 0x4e2748u: goto label_4e2748;
        case 0x4e274cu: goto label_4e274c;
        case 0x4e2750u: goto label_4e2750;
        case 0x4e2754u: goto label_4e2754;
        case 0x4e2758u: goto label_4e2758;
        case 0x4e275cu: goto label_4e275c;
        case 0x4e2760u: goto label_4e2760;
        case 0x4e2764u: goto label_4e2764;
        case 0x4e2768u: goto label_4e2768;
        case 0x4e276cu: goto label_4e276c;
        case 0x4e2770u: goto label_4e2770;
        case 0x4e2774u: goto label_4e2774;
        case 0x4e2778u: goto label_4e2778;
        case 0x4e277cu: goto label_4e277c;
        case 0x4e2780u: goto label_4e2780;
        case 0x4e2784u: goto label_4e2784;
        case 0x4e2788u: goto label_4e2788;
        case 0x4e278cu: goto label_4e278c;
        case 0x4e2790u: goto label_4e2790;
        case 0x4e2794u: goto label_4e2794;
        case 0x4e2798u: goto label_4e2798;
        case 0x4e279cu: goto label_4e279c;
        case 0x4e27a0u: goto label_4e27a0;
        case 0x4e27a4u: goto label_4e27a4;
        case 0x4e27a8u: goto label_4e27a8;
        case 0x4e27acu: goto label_4e27ac;
        case 0x4e27b0u: goto label_4e27b0;
        case 0x4e27b4u: goto label_4e27b4;
        case 0x4e27b8u: goto label_4e27b8;
        case 0x4e27bcu: goto label_4e27bc;
        case 0x4e27c0u: goto label_4e27c0;
        case 0x4e27c4u: goto label_4e27c4;
        case 0x4e27c8u: goto label_4e27c8;
        case 0x4e27ccu: goto label_4e27cc;
        case 0x4e27d0u: goto label_4e27d0;
        case 0x4e27d4u: goto label_4e27d4;
        case 0x4e27d8u: goto label_4e27d8;
        case 0x4e27dcu: goto label_4e27dc;
        case 0x4e27e0u: goto label_4e27e0;
        case 0x4e27e4u: goto label_4e27e4;
        case 0x4e27e8u: goto label_4e27e8;
        case 0x4e27ecu: goto label_4e27ec;
        case 0x4e27f0u: goto label_4e27f0;
        case 0x4e27f4u: goto label_4e27f4;
        case 0x4e27f8u: goto label_4e27f8;
        case 0x4e27fcu: goto label_4e27fc;
        case 0x4e2800u: goto label_4e2800;
        case 0x4e2804u: goto label_4e2804;
        case 0x4e2808u: goto label_4e2808;
        case 0x4e280cu: goto label_4e280c;
        case 0x4e2810u: goto label_4e2810;
        case 0x4e2814u: goto label_4e2814;
        case 0x4e2818u: goto label_4e2818;
        case 0x4e281cu: goto label_4e281c;
        case 0x4e2820u: goto label_4e2820;
        case 0x4e2824u: goto label_4e2824;
        case 0x4e2828u: goto label_4e2828;
        case 0x4e282cu: goto label_4e282c;
        case 0x4e2830u: goto label_4e2830;
        case 0x4e2834u: goto label_4e2834;
        case 0x4e2838u: goto label_4e2838;
        case 0x4e283cu: goto label_4e283c;
        case 0x4e2840u: goto label_4e2840;
        case 0x4e2844u: goto label_4e2844;
        case 0x4e2848u: goto label_4e2848;
        case 0x4e284cu: goto label_4e284c;
        case 0x4e2850u: goto label_4e2850;
        case 0x4e2854u: goto label_4e2854;
        case 0x4e2858u: goto label_4e2858;
        case 0x4e285cu: goto label_4e285c;
        case 0x4e2860u: goto label_4e2860;
        case 0x4e2864u: goto label_4e2864;
        case 0x4e2868u: goto label_4e2868;
        case 0x4e286cu: goto label_4e286c;
        case 0x4e2870u: goto label_4e2870;
        case 0x4e2874u: goto label_4e2874;
        case 0x4e2878u: goto label_4e2878;
        case 0x4e287cu: goto label_4e287c;
        case 0x4e2880u: goto label_4e2880;
        case 0x4e2884u: goto label_4e2884;
        case 0x4e2888u: goto label_4e2888;
        case 0x4e288cu: goto label_4e288c;
        case 0x4e2890u: goto label_4e2890;
        case 0x4e2894u: goto label_4e2894;
        case 0x4e2898u: goto label_4e2898;
        case 0x4e289cu: goto label_4e289c;
        case 0x4e28a0u: goto label_4e28a0;
        case 0x4e28a4u: goto label_4e28a4;
        case 0x4e28a8u: goto label_4e28a8;
        case 0x4e28acu: goto label_4e28ac;
        case 0x4e28b0u: goto label_4e28b0;
        case 0x4e28b4u: goto label_4e28b4;
        case 0x4e28b8u: goto label_4e28b8;
        case 0x4e28bcu: goto label_4e28bc;
        case 0x4e28c0u: goto label_4e28c0;
        case 0x4e28c4u: goto label_4e28c4;
        case 0x4e28c8u: goto label_4e28c8;
        case 0x4e28ccu: goto label_4e28cc;
        case 0x4e28d0u: goto label_4e28d0;
        case 0x4e28d4u: goto label_4e28d4;
        case 0x4e28d8u: goto label_4e28d8;
        case 0x4e28dcu: goto label_4e28dc;
        case 0x4e28e0u: goto label_4e28e0;
        case 0x4e28e4u: goto label_4e28e4;
        case 0x4e28e8u: goto label_4e28e8;
        case 0x4e28ecu: goto label_4e28ec;
        case 0x4e28f0u: goto label_4e28f0;
        case 0x4e28f4u: goto label_4e28f4;
        case 0x4e28f8u: goto label_4e28f8;
        case 0x4e28fcu: goto label_4e28fc;
        case 0x4e2900u: goto label_4e2900;
        case 0x4e2904u: goto label_4e2904;
        case 0x4e2908u: goto label_4e2908;
        case 0x4e290cu: goto label_4e290c;
        case 0x4e2910u: goto label_4e2910;
        case 0x4e2914u: goto label_4e2914;
        case 0x4e2918u: goto label_4e2918;
        case 0x4e291cu: goto label_4e291c;
        case 0x4e2920u: goto label_4e2920;
        case 0x4e2924u: goto label_4e2924;
        case 0x4e2928u: goto label_4e2928;
        case 0x4e292cu: goto label_4e292c;
        case 0x4e2930u: goto label_4e2930;
        case 0x4e2934u: goto label_4e2934;
        case 0x4e2938u: goto label_4e2938;
        case 0x4e293cu: goto label_4e293c;
        case 0x4e2940u: goto label_4e2940;
        case 0x4e2944u: goto label_4e2944;
        case 0x4e2948u: goto label_4e2948;
        case 0x4e294cu: goto label_4e294c;
        case 0x4e2950u: goto label_4e2950;
        case 0x4e2954u: goto label_4e2954;
        case 0x4e2958u: goto label_4e2958;
        case 0x4e295cu: goto label_4e295c;
        case 0x4e2960u: goto label_4e2960;
        case 0x4e2964u: goto label_4e2964;
        case 0x4e2968u: goto label_4e2968;
        case 0x4e296cu: goto label_4e296c;
        case 0x4e2970u: goto label_4e2970;
        case 0x4e2974u: goto label_4e2974;
        case 0x4e2978u: goto label_4e2978;
        case 0x4e297cu: goto label_4e297c;
        case 0x4e2980u: goto label_4e2980;
        case 0x4e2984u: goto label_4e2984;
        case 0x4e2988u: goto label_4e2988;
        case 0x4e298cu: goto label_4e298c;
        case 0x4e2990u: goto label_4e2990;
        case 0x4e2994u: goto label_4e2994;
        case 0x4e2998u: goto label_4e2998;
        case 0x4e299cu: goto label_4e299c;
        case 0x4e29a0u: goto label_4e29a0;
        case 0x4e29a4u: goto label_4e29a4;
        case 0x4e29a8u: goto label_4e29a8;
        case 0x4e29acu: goto label_4e29ac;
        case 0x4e29b0u: goto label_4e29b0;
        case 0x4e29b4u: goto label_4e29b4;
        case 0x4e29b8u: goto label_4e29b8;
        case 0x4e29bcu: goto label_4e29bc;
        case 0x4e29c0u: goto label_4e29c0;
        case 0x4e29c4u: goto label_4e29c4;
        case 0x4e29c8u: goto label_4e29c8;
        case 0x4e29ccu: goto label_4e29cc;
        case 0x4e29d0u: goto label_4e29d0;
        case 0x4e29d4u: goto label_4e29d4;
        case 0x4e29d8u: goto label_4e29d8;
        case 0x4e29dcu: goto label_4e29dc;
        case 0x4e29e0u: goto label_4e29e0;
        case 0x4e29e4u: goto label_4e29e4;
        case 0x4e29e8u: goto label_4e29e8;
        case 0x4e29ecu: goto label_4e29ec;
        case 0x4e29f0u: goto label_4e29f0;
        case 0x4e29f4u: goto label_4e29f4;
        case 0x4e29f8u: goto label_4e29f8;
        case 0x4e29fcu: goto label_4e29fc;
        case 0x4e2a00u: goto label_4e2a00;
        case 0x4e2a04u: goto label_4e2a04;
        case 0x4e2a08u: goto label_4e2a08;
        case 0x4e2a0cu: goto label_4e2a0c;
        case 0x4e2a10u: goto label_4e2a10;
        case 0x4e2a14u: goto label_4e2a14;
        case 0x4e2a18u: goto label_4e2a18;
        case 0x4e2a1cu: goto label_4e2a1c;
        case 0x4e2a20u: goto label_4e2a20;
        case 0x4e2a24u: goto label_4e2a24;
        case 0x4e2a28u: goto label_4e2a28;
        case 0x4e2a2cu: goto label_4e2a2c;
        case 0x4e2a30u: goto label_4e2a30;
        case 0x4e2a34u: goto label_4e2a34;
        case 0x4e2a38u: goto label_4e2a38;
        case 0x4e2a3cu: goto label_4e2a3c;
        case 0x4e2a40u: goto label_4e2a40;
        case 0x4e2a44u: goto label_4e2a44;
        case 0x4e2a48u: goto label_4e2a48;
        case 0x4e2a4cu: goto label_4e2a4c;
        case 0x4e2a50u: goto label_4e2a50;
        case 0x4e2a54u: goto label_4e2a54;
        case 0x4e2a58u: goto label_4e2a58;
        case 0x4e2a5cu: goto label_4e2a5c;
        case 0x4e2a60u: goto label_4e2a60;
        case 0x4e2a64u: goto label_4e2a64;
        case 0x4e2a68u: goto label_4e2a68;
        case 0x4e2a6cu: goto label_4e2a6c;
        case 0x4e2a70u: goto label_4e2a70;
        case 0x4e2a74u: goto label_4e2a74;
        case 0x4e2a78u: goto label_4e2a78;
        case 0x4e2a7cu: goto label_4e2a7c;
        case 0x4e2a80u: goto label_4e2a80;
        case 0x4e2a84u: goto label_4e2a84;
        case 0x4e2a88u: goto label_4e2a88;
        case 0x4e2a8cu: goto label_4e2a8c;
        case 0x4e2a90u: goto label_4e2a90;
        case 0x4e2a94u: goto label_4e2a94;
        case 0x4e2a98u: goto label_4e2a98;
        case 0x4e2a9cu: goto label_4e2a9c;
        case 0x4e2aa0u: goto label_4e2aa0;
        case 0x4e2aa4u: goto label_4e2aa4;
        case 0x4e2aa8u: goto label_4e2aa8;
        case 0x4e2aacu: goto label_4e2aac;
        case 0x4e2ab0u: goto label_4e2ab0;
        case 0x4e2ab4u: goto label_4e2ab4;
        case 0x4e2ab8u: goto label_4e2ab8;
        case 0x4e2abcu: goto label_4e2abc;
        case 0x4e2ac0u: goto label_4e2ac0;
        case 0x4e2ac4u: goto label_4e2ac4;
        case 0x4e2ac8u: goto label_4e2ac8;
        case 0x4e2accu: goto label_4e2acc;
        case 0x4e2ad0u: goto label_4e2ad0;
        case 0x4e2ad4u: goto label_4e2ad4;
        case 0x4e2ad8u: goto label_4e2ad8;
        case 0x4e2adcu: goto label_4e2adc;
        case 0x4e2ae0u: goto label_4e2ae0;
        case 0x4e2ae4u: goto label_4e2ae4;
        case 0x4e2ae8u: goto label_4e2ae8;
        case 0x4e2aecu: goto label_4e2aec;
        case 0x4e2af0u: goto label_4e2af0;
        case 0x4e2af4u: goto label_4e2af4;
        case 0x4e2af8u: goto label_4e2af8;
        case 0x4e2afcu: goto label_4e2afc;
        case 0x4e2b00u: goto label_4e2b00;
        case 0x4e2b04u: goto label_4e2b04;
        case 0x4e2b08u: goto label_4e2b08;
        case 0x4e2b0cu: goto label_4e2b0c;
        case 0x4e2b10u: goto label_4e2b10;
        case 0x4e2b14u: goto label_4e2b14;
        case 0x4e2b18u: goto label_4e2b18;
        case 0x4e2b1cu: goto label_4e2b1c;
        case 0x4e2b20u: goto label_4e2b20;
        case 0x4e2b24u: goto label_4e2b24;
        case 0x4e2b28u: goto label_4e2b28;
        case 0x4e2b2cu: goto label_4e2b2c;
        case 0x4e2b30u: goto label_4e2b30;
        case 0x4e2b34u: goto label_4e2b34;
        case 0x4e2b38u: goto label_4e2b38;
        case 0x4e2b3cu: goto label_4e2b3c;
        case 0x4e2b40u: goto label_4e2b40;
        case 0x4e2b44u: goto label_4e2b44;
        case 0x4e2b48u: goto label_4e2b48;
        case 0x4e2b4cu: goto label_4e2b4c;
        case 0x4e2b50u: goto label_4e2b50;
        case 0x4e2b54u: goto label_4e2b54;
        case 0x4e2b58u: goto label_4e2b58;
        case 0x4e2b5cu: goto label_4e2b5c;
        case 0x4e2b60u: goto label_4e2b60;
        case 0x4e2b64u: goto label_4e2b64;
        case 0x4e2b68u: goto label_4e2b68;
        case 0x4e2b6cu: goto label_4e2b6c;
        case 0x4e2b70u: goto label_4e2b70;
        case 0x4e2b74u: goto label_4e2b74;
        case 0x4e2b78u: goto label_4e2b78;
        case 0x4e2b7cu: goto label_4e2b7c;
        case 0x4e2b80u: goto label_4e2b80;
        case 0x4e2b84u: goto label_4e2b84;
        case 0x4e2b88u: goto label_4e2b88;
        case 0x4e2b8cu: goto label_4e2b8c;
        case 0x4e2b90u: goto label_4e2b90;
        case 0x4e2b94u: goto label_4e2b94;
        case 0x4e2b98u: goto label_4e2b98;
        case 0x4e2b9cu: goto label_4e2b9c;
        case 0x4e2ba0u: goto label_4e2ba0;
        case 0x4e2ba4u: goto label_4e2ba4;
        case 0x4e2ba8u: goto label_4e2ba8;
        case 0x4e2bacu: goto label_4e2bac;
        default: break;
    }

    ctx->pc = 0x4e2170u;

label_4e2170:
    // 0x4e2170: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4e2170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4e2174:
    // 0x4e2174: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4e2174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4e2178:
    // 0x4e2178: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4e2178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4e217c:
    // 0x4e217c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4e217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4e2180:
    // 0x4e2180: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x4e2180u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e2184:
    // 0x4e2184: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4e2184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4e2188:
    // 0x4e2188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e2188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e218c:
    // 0x4e218c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e218cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e2190:
    // 0x4e2190: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e2190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e2194:
    // 0x4e2194: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e2194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e2198:
    // 0x4e2198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e2198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e219c:
    // 0x4e219c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4e219cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e21a0:
    // 0x4e21a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e21a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e21a4:
    // 0x4e21a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4e21a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e21a8:
    // 0x4e21a8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x4e21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_4e21ac:
    // 0x4e21ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4e21acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4e21b0:
    // 0x4e21b0: 0xa2a021  addu        $s4, $a1, $v0
    ctx->pc = 0x4e21b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4e21b4:
    // 0x4e21b4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x4e21b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4e21b8:
    // 0x4e21b8: 0xc04e738  jal         func_139CE0
label_4e21bc:
    if (ctx->pc == 0x4E21BCu) {
        ctx->pc = 0x4E21BCu;
            // 0x4e21bc: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E21C0u;
        goto label_4e21c0;
    }
    ctx->pc = 0x4E21B8u;
    SET_GPR_U32(ctx, 31, 0x4E21C0u);
    ctx->pc = 0x4E21BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E21B8u;
            // 0x4e21bc: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E21C0u; }
        if (ctx->pc != 0x4E21C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E21C0u; }
        if (ctx->pc != 0x4E21C0u) { return; }
    }
    ctx->pc = 0x4E21C0u;
label_4e21c0:
    // 0x4e21c0: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x4e21c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_4e21c4:
    // 0x4e21c4: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x4e21c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_4e21c8:
    // 0x4e21c8: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_4e21cc:
    if (ctx->pc == 0x4E21CCu) {
        ctx->pc = 0x4E21D0u;
        goto label_4e21d0;
    }
    ctx->pc = 0x4E21C8u;
    {
        const bool branch_taken_0x4e21c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e21c8) {
            ctx->pc = 0x4E234Cu;
            goto label_4e234c;
        }
    }
    ctx->pc = 0x4E21D0u;
label_4e21d0:
    // 0x4e21d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e21d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e21d4:
    // 0x4e21d4: 0xc04f278  jal         func_13C9E0
label_4e21d8:
    if (ctx->pc == 0x4E21D8u) {
        ctx->pc = 0x4E21D8u;
            // 0x4e21d8: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x4E21DCu;
        goto label_4e21dc;
    }
    ctx->pc = 0x4E21D4u;
    SET_GPR_U32(ctx, 31, 0x4E21DCu);
    ctx->pc = 0x4E21D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E21D4u;
            // 0x4e21d8: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E21DCu; }
        if (ctx->pc != 0x4E21DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E21DCu; }
        if (ctx->pc != 0x4E21DCu) { return; }
    }
    ctx->pc = 0x4E21DCu;
label_4e21dc:
    // 0x4e21dc: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x4e21dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e21e0:
    // 0x4e21e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e21e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e21e4:
    // 0x4e21e4: 0xc66d0034  lwc1        $f13, 0x34($s3)
    ctx->pc = 0x4e21e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4e21e8:
    // 0x4e21e8: 0xc66e0038  lwc1        $f14, 0x38($s3)
    ctx->pc = 0x4e21e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4e21ec:
    // 0x4e21ec: 0xc04ce50  jal         func_133940
label_4e21f0:
    if (ctx->pc == 0x4E21F0u) {
        ctx->pc = 0x4E21F0u;
            // 0x4e21f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E21F4u;
        goto label_4e21f4;
    }
    ctx->pc = 0x4E21ECu;
    SET_GPR_U32(ctx, 31, 0x4E21F4u);
    ctx->pc = 0x4E21F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E21ECu;
            // 0x4e21f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E21F4u; }
        if (ctx->pc != 0x4E21F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E21F4u; }
        if (ctx->pc != 0x4E21F4u) { return; }
    }
    ctx->pc = 0x4E21F4u;
label_4e21f4:
    // 0x4e21f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e21f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e21f8:
    // 0x4e21f8: 0xc04ce80  jal         func_133A00
label_4e21fc:
    if (ctx->pc == 0x4E21FCu) {
        ctx->pc = 0x4E21FCu;
            // 0x4e21fc: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x4E2200u;
        goto label_4e2200;
    }
    ctx->pc = 0x4E21F8u;
    SET_GPR_U32(ctx, 31, 0x4E2200u);
    ctx->pc = 0x4E21FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E21F8u;
            // 0x4e21fc: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2200u; }
        if (ctx->pc != 0x4E2200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2200u; }
        if (ctx->pc != 0x4E2200u) { return; }
    }
    ctx->pc = 0x4E2200u;
label_4e2200:
    // 0x4e2200: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4e2200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4e2204:
    // 0x4e2204: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x4e2204u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_4e2208:
    // 0x4e2208: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x4e2208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4e220c:
    // 0x4e220c: 0x8e960000  lw          $s6, 0x0($s4)
    ctx->pc = 0x4e220cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e2210:
    // 0x4e2210: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e2210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e2214:
    // 0x4e2214: 0x8c750130  lw          $s5, 0x130($v1)
    ctx->pc = 0x4e2214u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_4e2218:
    // 0x4e2218: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4e2218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4e221c:
    // 0x4e221c: 0xc07698c  jal         func_1DA630
label_4e2220:
    if (ctx->pc == 0x4E2220u) {
        ctx->pc = 0x4E2220u;
            // 0x4e2220: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2224u;
        goto label_4e2224;
    }
    ctx->pc = 0x4E221Cu;
    SET_GPR_U32(ctx, 31, 0x4E2224u);
    ctx->pc = 0x4E2220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E221Cu;
            // 0x4e2220: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2224u; }
        if (ctx->pc != 0x4E2224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2224u; }
        if (ctx->pc != 0x4E2224u) { return; }
    }
    ctx->pc = 0x4E2224u;
label_4e2224:
    // 0x4e2224: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4e2224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e2228:
    // 0x4e2228: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4e222c:
    if (ctx->pc == 0x4E222Cu) {
        ctx->pc = 0x4E2230u;
        goto label_4e2230;
    }
    ctx->pc = 0x4E2228u;
    {
        const bool branch_taken_0x4e2228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2228) {
            ctx->pc = 0x4E2238u;
            goto label_4e2238;
        }
    }
    ctx->pc = 0x4E2230u;
label_4e2230:
    // 0x4e2230: 0x10000033  b           . + 4 + (0x33 << 2)
label_4e2234:
    if (ctx->pc == 0x4E2234u) {
        ctx->pc = 0x4E2234u;
            // 0x4e2234: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4E2238u;
        goto label_4e2238;
    }
    ctx->pc = 0x4E2230u;
    {
        const bool branch_taken_0x4e2230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2230u;
            // 0x4e2234: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2230) {
            ctx->pc = 0x4E2300u;
            goto label_4e2300;
        }
    }
    ctx->pc = 0x4E2238u;
label_4e2238:
    // 0x4e2238: 0xc0576f4  jal         func_15DBD0
label_4e223c:
    if (ctx->pc == 0x4E223Cu) {
        ctx->pc = 0x4E2240u;
        goto label_4e2240;
    }
    ctx->pc = 0x4E2238u;
    SET_GPR_U32(ctx, 31, 0x4E2240u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2240u; }
        if (ctx->pc != 0x4E2240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2240u; }
        if (ctx->pc != 0x4E2240u) { return; }
    }
    ctx->pc = 0x4E2240u;
label_4e2240:
    // 0x4e2240: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4e2240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4e2244:
    // 0x4e2244: 0xc076984  jal         func_1DA610
label_4e2248:
    if (ctx->pc == 0x4E2248u) {
        ctx->pc = 0x4E2248u;
            // 0x4e2248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E224Cu;
        goto label_4e224c;
    }
    ctx->pc = 0x4E2244u;
    SET_GPR_U32(ctx, 31, 0x4E224Cu);
    ctx->pc = 0x4E2248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2244u;
            // 0x4e2248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E224Cu; }
        if (ctx->pc != 0x4E224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E224Cu; }
        if (ctx->pc != 0x4E224Cu) { return; }
    }
    ctx->pc = 0x4E224Cu;
label_4e224c:
    // 0x4e224c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4e224cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e2250:
    // 0x4e2250: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4e2250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4e2254:
    // 0x4e2254: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e2254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e2258:
    // 0x4e2258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e2258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e225c:
    // 0x4e225c: 0xc442ca00  lwc1        $f2, -0x3600($v0)
    ctx->pc = 0x4e225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e2260:
    // 0x4e2260: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4e2260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e2264:
    // 0x4e2264: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e2264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e2268:
    // 0x4e2268: 0xc441ca08  lwc1        $f1, -0x35F8($v0)
    ctx->pc = 0x4e2268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e226c:
    // 0x4e226c: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x4e226cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4e2270:
    // 0x4e2270: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e2270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e2274:
    // 0x4e2274: 0xc440ca0c  lwc1        $f0, -0x35F4($v0)
    ctx->pc = 0x4e2274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e2278:
    // 0x4e2278: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x4e2278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4e227c:
    // 0x4e227c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e227cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e2280:
    // 0x4e2280: 0x8c42ca04  lw          $v0, -0x35FC($v0)
    ctx->pc = 0x4e2280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953476)));
label_4e2284:
    // 0x4e2284: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x4e2284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_4e2288:
    // 0x4e2288: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x4e2288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_4e228c:
    // 0x4e228c: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x4e228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e2290:
    // 0x4e2290: 0xc04cca0  jal         func_133280
label_4e2294:
    if (ctx->pc == 0x4E2294u) {
        ctx->pc = 0x4E2294u;
            // 0x4e2294: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x4E2298u;
        goto label_4e2298;
    }
    ctx->pc = 0x4E2290u;
    SET_GPR_U32(ctx, 31, 0x4E2298u);
    ctx->pc = 0x4E2294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2290u;
            // 0x4e2294: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2298u; }
        if (ctx->pc != 0x4E2298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2298u; }
        if (ctx->pc != 0x4E2298u) { return; }
    }
    ctx->pc = 0x4E2298u;
label_4e2298:
    // 0x4e2298: 0xc076980  jal         func_1DA600
label_4e229c:
    if (ctx->pc == 0x4E229Cu) {
        ctx->pc = 0x4E229Cu;
            // 0x4e229c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E22A0u;
        goto label_4e22a0;
    }
    ctx->pc = 0x4E2298u;
    SET_GPR_U32(ctx, 31, 0x4E22A0u);
    ctx->pc = 0x4E229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2298u;
            // 0x4e229c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E22A0u; }
        if (ctx->pc != 0x4E22A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E22A0u; }
        if (ctx->pc != 0x4E22A0u) { return; }
    }
    ctx->pc = 0x4E22A0u;
label_4e22a0:
    // 0x4e22a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e22a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e22a4:
    // 0x4e22a4: 0xc04cc34  jal         func_1330D0
label_4e22a8:
    if (ctx->pc == 0x4E22A8u) {
        ctx->pc = 0x4E22A8u;
            // 0x4e22a8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4E22ACu;
        goto label_4e22ac;
    }
    ctx->pc = 0x4E22A4u;
    SET_GPR_U32(ctx, 31, 0x4E22ACu);
    ctx->pc = 0x4E22A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E22A4u;
            // 0x4e22a8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E22ACu; }
        if (ctx->pc != 0x4E22ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E22ACu; }
        if (ctx->pc != 0x4E22ACu) { return; }
    }
    ctx->pc = 0x4E22ACu;
label_4e22ac:
    // 0x4e22ac: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e22acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e22b0:
    // 0x4e22b0: 0xc4418148  lwc1        $f1, -0x7EB8($v0)
    ctx->pc = 0x4e22b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e22b4:
    // 0x4e22b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e22b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e22b8:
    // 0x4e22b8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4e22bc:
    if (ctx->pc == 0x4E22BCu) {
        ctx->pc = 0x4E22BCu;
            // 0x4e22bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E22C0u;
        goto label_4e22c0;
    }
    ctx->pc = 0x4E22B8u;
    {
        const bool branch_taken_0x4e22b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e22b8) {
            ctx->pc = 0x4E22BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E22B8u;
            // 0x4e22bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E22C8u;
            goto label_4e22c8;
        }
    }
    ctx->pc = 0x4E22C0u;
label_4e22c0:
    // 0x4e22c0: 0x1000000f  b           . + 4 + (0xF << 2)
label_4e22c4:
    if (ctx->pc == 0x4E22C4u) {
        ctx->pc = 0x4E22C4u;
            // 0x4e22c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E22C8u;
        goto label_4e22c8;
    }
    ctx->pc = 0x4E22C0u;
    {
        const bool branch_taken_0x4e22c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E22C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E22C0u;
            // 0x4e22c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e22c0) {
            ctx->pc = 0x4E2300u;
            goto label_4e2300;
        }
    }
    ctx->pc = 0x4E22C8u;
label_4e22c8:
    // 0x4e22c8: 0xc07697c  jal         func_1DA5F0
label_4e22cc:
    if (ctx->pc == 0x4E22CCu) {
        ctx->pc = 0x4E22D0u;
        goto label_4e22d0;
    }
    ctx->pc = 0x4E22C8u;
    SET_GPR_U32(ctx, 31, 0x4E22D0u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E22D0u; }
        if (ctx->pc != 0x4E22D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E22D0u; }
        if (ctx->pc != 0x4E22D0u) { return; }
    }
    ctx->pc = 0x4E22D0u;
label_4e22d0:
    // 0x4e22d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e22d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e22d4:
    // 0x4e22d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4e22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4e22d8:
    // 0x4e22d8: 0xc04cd60  jal         func_133580
label_4e22dc:
    if (ctx->pc == 0x4E22DCu) {
        ctx->pc = 0x4E22DCu;
            // 0x4e22dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E22E0u;
        goto label_4e22e0;
    }
    ctx->pc = 0x4E22D8u;
    SET_GPR_U32(ctx, 31, 0x4E22E0u);
    ctx->pc = 0x4E22DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E22D8u;
            // 0x4e22dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E22E0u; }
        if (ctx->pc != 0x4E22E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E22E0u; }
        if (ctx->pc != 0x4E22E0u) { return; }
    }
    ctx->pc = 0x4E22E0u;
label_4e22e0:
    // 0x4e22e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4e22e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e22e4:
    // 0x4e22e4: 0xc04c650  jal         func_131940
label_4e22e8:
    if (ctx->pc == 0x4E22E8u) {
        ctx->pc = 0x4E22E8u;
            // 0x4e22e8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4E22ECu;
        goto label_4e22ec;
    }
    ctx->pc = 0x4E22E4u;
    SET_GPR_U32(ctx, 31, 0x4E22ECu);
    ctx->pc = 0x4E22E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E22E4u;
            // 0x4e22e8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E22ECu; }
        if (ctx->pc != 0x4E22ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E22ECu; }
        if (ctx->pc != 0x4E22ECu) { return; }
    }
    ctx->pc = 0x4E22ECu;
label_4e22ec:
    // 0x4e22ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4e22ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e22f0:
    // 0x4e22f0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e22f4:
    // 0x4e22f4: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x4e22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_4e22f8:
    // 0x4e22f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e22fc:
    // 0x4e22fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e2300:
    // 0x4e2300: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4e2300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4e2304:
    // 0x4e2304: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_4e2308:
    if (ctx->pc == 0x4E2308u) {
        ctx->pc = 0x4E2308u;
            // 0x4e2308: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4E230Cu;
        goto label_4e230c;
    }
    ctx->pc = 0x4E2304u;
    {
        const bool branch_taken_0x4e2304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2304u;
            // 0x4e2308: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2304) {
            ctx->pc = 0x4E234Cu;
            goto label_4e234c;
        }
    }
    ctx->pc = 0x4E230Cu;
label_4e230c:
    // 0x4e230c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4e230cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4e2310:
    // 0x4e2310: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4e2310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2314:
    // 0x4e2314: 0xc04cd60  jal         func_133580
label_4e2318:
    if (ctx->pc == 0x4E2318u) {
        ctx->pc = 0x4E2318u;
            // 0x4e2318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E231Cu;
        goto label_4e231c;
    }
    ctx->pc = 0x4E2314u;
    SET_GPR_U32(ctx, 31, 0x4E231Cu);
    ctx->pc = 0x4E2318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2314u;
            // 0x4e2318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E231Cu; }
        if (ctx->pc != 0x4E231Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E231Cu; }
        if (ctx->pc != 0x4E231Cu) { return; }
    }
    ctx->pc = 0x4E231Cu;
label_4e231c:
    // 0x4e231c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4e231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e2320:
    // 0x4e2320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e2320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e2324:
    // 0x4e2324: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4e2324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4e2328:
    // 0x4e2328: 0xc04e4a4  jal         func_139290
label_4e232c:
    if (ctx->pc == 0x4E232Cu) {
        ctx->pc = 0x4E232Cu;
            // 0x4e232c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E2330u;
        goto label_4e2330;
    }
    ctx->pc = 0x4E2328u;
    SET_GPR_U32(ctx, 31, 0x4E2330u);
    ctx->pc = 0x4E232Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2328u;
            // 0x4e232c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2330u; }
        if (ctx->pc != 0x4E2330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2330u; }
        if (ctx->pc != 0x4E2330u) { return; }
    }
    ctx->pc = 0x4E2330u;
label_4e2330:
    // 0x4e2330: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4e2330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4e2334:
    // 0x4e2334: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e2334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e2338:
    // 0x4e2338: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4e2338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e233c:
    // 0x4e233c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e233cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e2340:
    // 0x4e2340: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e2340u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e2344:
    // 0x4e2344: 0xc055234  jal         func_1548D0
label_4e2348:
    if (ctx->pc == 0x4E2348u) {
        ctx->pc = 0x4E2348u;
            // 0x4e2348: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4E234Cu;
        goto label_4e234c;
    }
    ctx->pc = 0x4E2344u;
    SET_GPR_U32(ctx, 31, 0x4E234Cu);
    ctx->pc = 0x4E2348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2344u;
            // 0x4e2348: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E234Cu; }
        if (ctx->pc != 0x4E234Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E234Cu; }
        if (ctx->pc != 0x4E234Cu) { return; }
    }
    ctx->pc = 0x4E234Cu;
label_4e234c:
    // 0x4e234c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e2350:
    // 0x4e2350: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2354:
    // 0x4e2354: 0xac40e3d8  sw          $zero, -0x1C28($v0)
    ctx->pc = 0x4e2354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960088), GPR_U32(ctx, 0));
label_4e2358:
    // 0x4e2358: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4e2358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4e235c:
    // 0x4e235c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e2360:
    // 0x4e2360: 0xc44c8148  lwc1        $f12, -0x7EB8($v0)
    ctx->pc = 0x4e2360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e2364:
    // 0x4e2364: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x4e2364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_4e2368:
    // 0x4e2368: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e2368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e236c:
    // 0x4e236c: 0xc0e325c  jal         func_38C970
label_4e2370:
    if (ctx->pc == 0x4E2370u) {
        ctx->pc = 0x4E2370u;
            // 0x4e2370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2374u;
        goto label_4e2374;
    }
    ctx->pc = 0x4E236Cu;
    SET_GPR_U32(ctx, 31, 0x4E2374u);
    ctx->pc = 0x4E2370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E236Cu;
            // 0x4e2370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2374u; }
        if (ctx->pc != 0x4E2374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2374u; }
        if (ctx->pc != 0x4E2374u) { return; }
    }
    ctx->pc = 0x4E2374u;
label_4e2374:
    // 0x4e2374: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2378:
    // 0x4e2378: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4e2378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4e237c:
    // 0x4e237c: 0x5860000e  blezl       $v1, . + 4 + (0xE << 2)
label_4e2380:
    if (ctx->pc == 0x4E2380u) {
        ctx->pc = 0x4E2380u;
            // 0x4e2380: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x4E2384u;
        goto label_4e2384;
    }
    ctx->pc = 0x4E237Cu;
    {
        const bool branch_taken_0x4e237c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4e237c) {
            ctx->pc = 0x4E2380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E237Cu;
            // 0x4e2380: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E23B8u;
            goto label_4e23b8;
        }
    }
    ctx->pc = 0x4E2384u;
label_4e2384:
    // 0x4e2384: 0xc04e738  jal         func_139CE0
label_4e2388:
    if (ctx->pc == 0x4E2388u) {
        ctx->pc = 0x4E2388u;
            // 0x4e2388: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x4E238Cu;
        goto label_4e238c;
    }
    ctx->pc = 0x4E2384u;
    SET_GPR_U32(ctx, 31, 0x4E238Cu);
    ctx->pc = 0x4E2388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2384u;
            // 0x4e2388: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E238Cu; }
        if (ctx->pc != 0x4E238Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E238Cu; }
        if (ctx->pc != 0x4E238Cu) { return; }
    }
    ctx->pc = 0x4E238Cu;
label_4e238c:
    // 0x4e238c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e238cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e2390:
    // 0x4e2390: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4e2390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e2394:
    // 0x4e2394: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4e2394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4e2398:
    // 0x4e2398: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e2398u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e239c:
    // 0x4e239c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e239cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e23a0:
    // 0x4e23a0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4e23a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4e23a4:
    // 0x4e23a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e23a8:
    // 0x4e23a8: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4e23a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4e23ac:
    // 0x4e23ac: 0xc055754  jal         func_155D50
label_4e23b0:
    if (ctx->pc == 0x4E23B0u) {
        ctx->pc = 0x4E23B0u;
            // 0x4e23b0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4E23B4u;
        goto label_4e23b4;
    }
    ctx->pc = 0x4E23ACu;
    SET_GPR_U32(ctx, 31, 0x4E23B4u);
    ctx->pc = 0x4E23B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E23ACu;
            // 0x4e23b0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E23B4u; }
        if (ctx->pc != 0x4E23B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E23B4u; }
        if (ctx->pc != 0x4E23B4u) { return; }
    }
    ctx->pc = 0x4E23B4u;
label_4e23b4:
    // 0x4e23b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4e23b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4e23b8:
    // 0x4e23b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4e23b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e23bc:
    // 0x4e23bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4e23bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e23c0:
    // 0x4e23c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4e23c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e23c4:
    // 0x4e23c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e23c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e23c8:
    // 0x4e23c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e23c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e23cc:
    // 0x4e23cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e23ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e23d0:
    // 0x4e23d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e23d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e23d4:
    // 0x4e23d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e23d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e23d8:
    // 0x4e23d8: 0x3e00008  jr          $ra
label_4e23dc:
    if (ctx->pc == 0x4E23DCu) {
        ctx->pc = 0x4E23DCu;
            // 0x4e23dc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4E23E0u;
        goto label_4e23e0;
    }
    ctx->pc = 0x4E23D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E23DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E23D8u;
            // 0x4e23dc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E23E0u;
label_4e23e0:
    // 0x4e23e0: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x4e23e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4e23e4:
    // 0x4e23e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e23e8:
    // 0x4e23e8: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
label_4e23ec:
    if (ctx->pc == 0x4E23ECu) {
        ctx->pc = 0x4E23F0u;
        goto label_4e23f0;
    }
    ctx->pc = 0x4E23E8u;
    {
        const bool branch_taken_0x4e23e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e23e8) {
            ctx->pc = 0x4E2474u;
            goto label_4e2474;
        }
    }
    ctx->pc = 0x4E23F0u;
label_4e23f0:
    // 0x4e23f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4e23f4:
    if (ctx->pc == 0x4E23F4u) {
        ctx->pc = 0x4E23F8u;
        goto label_4e23f8;
    }
    ctx->pc = 0x4E23F0u;
    {
        const bool branch_taken_0x4e23f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e23f0) {
            ctx->pc = 0x4E2400u;
            goto label_4e2400;
        }
    }
    ctx->pc = 0x4E23F8u;
label_4e23f8:
    // 0x4e23f8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_4e23fc:
    if (ctx->pc == 0x4E23FCu) {
        ctx->pc = 0x4E2400u;
        goto label_4e2400;
    }
    ctx->pc = 0x4E23F8u;
    {
        const bool branch_taken_0x4e23f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e23f8) {
            ctx->pc = 0x4E2474u;
            goto label_4e2474;
        }
    }
    ctx->pc = 0x4E2400u;
label_4e2400:
    // 0x4e2400: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4e2400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4e2404:
    // 0x4e2404: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x4e2404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_4e2408:
    // 0x4e2408: 0x8c670cf8  lw          $a3, 0xCF8($v1)
    ctx->pc = 0x4e2408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3320)));
label_4e240c:
    // 0x4e240c: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x4e240cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4e2410:
    // 0x4e2410: 0x8ce50088  lw          $a1, 0x88($a3)
    ctx->pc = 0x4e2410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_4e2414:
    // 0x4e2414: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x4e2414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4e2418:
    // 0x4e2418: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4e2418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4e241c:
    // 0x4e241c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e241cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2420:
    // 0x4e2420: 0x8ca90030  lw          $t1, 0x30($a1)
    ctx->pc = 0x4e2420u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_4e2424:
    // 0x4e2424: 0xac69000c  sw          $t1, 0xC($v1)
    ctx->pc = 0x4e2424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
label_4e2428:
    // 0x4e2428: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x4e2428u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e242c:
    // 0x4e242c: 0x8c6a0010  lw          $t2, 0x10($v1)
    ctx->pc = 0x4e242cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e2430:
    // 0x4e2430: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4e2430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4e2434:
    // 0x4e2434: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4e2434u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e2438:
    // 0x4e2438: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4e2438u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_4e243c:
    // 0x4e243c: 0x8c65c9e0  lw          $a1, -0x3620($v1)
    ctx->pc = 0x4e243cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953440)));
label_4e2440:
    // 0x4e2440: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x4e2440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_4e2444:
    // 0x4e2444: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4e2444u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_4e2448:
    // 0x4e2448: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4e2448u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4e244c:
    // 0x4e244c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4e244cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4e2450:
    // 0x4e2450: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4e2450u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4e2454:
    // 0x4e2454: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x4e2454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_4e2458:
    // 0x4e2458: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e2458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4e245c:
    // 0x4e245c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4e245cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4e2460:
    // 0x4e2460: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x4e2460u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4e2464:
    // 0x4e2464: 0x1d40fff3  bgtz        $t2, . + 4 + (-0xD << 2)
label_4e2468:
    if (ctx->pc == 0x4E2468u) {
        ctx->pc = 0x4E2468u;
            // 0x4e2468: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x4E246Cu;
        goto label_4e246c;
    }
    ctx->pc = 0x4E2464u;
    {
        const bool branch_taken_0x4e2464 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x4E2468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2464u;
            // 0x4e2468: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2464) {
            ctx->pc = 0x4E2434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e2434;
        }
    }
    ctx->pc = 0x4E246Cu;
label_4e246c:
    // 0x4e246c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e246cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e2470:
    // 0x4e2470: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x4e2470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
label_4e2474:
    // 0x4e2474: 0x3e00008  jr          $ra
label_4e2478:
    if (ctx->pc == 0x4E2478u) {
        ctx->pc = 0x4E247Cu;
        goto label_4e247c;
    }
    ctx->pc = 0x4E2474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E247Cu;
label_4e247c:
    // 0x4e247c: 0x0  nop
    ctx->pc = 0x4e247cu;
    // NOP
label_4e2480:
    // 0x4e2480: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4e2480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4e2484:
    // 0x4e2484: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e2484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4e2488:
    // 0x4e2488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e2488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e248c:
    // 0x4e248c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e248cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e2490:
    // 0x4e2490: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e2490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e2494:
    // 0x4e2494: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e2494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e2498:
    // 0x4e2498: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e2498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e249c:
    // 0x4e249c: 0xc0e34b0  jal         func_38D2C0
label_4e24a0:
    if (ctx->pc == 0x4E24A0u) {
        ctx->pc = 0x4E24A0u;
            // 0x4e24a0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E24A4u;
        goto label_4e24a4;
    }
    ctx->pc = 0x4E249Cu;
    SET_GPR_U32(ctx, 31, 0x4E24A4u);
    ctx->pc = 0x4E24A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E249Cu;
            // 0x4e24a0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E24A4u; }
        if (ctx->pc != 0x4E24A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E24A4u; }
        if (ctx->pc != 0x4E24A4u) { return; }
    }
    ctx->pc = 0x4E24A4u;
label_4e24a4:
    // 0x4e24a4: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4e24a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4e24a8:
    // 0x4e24a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e24ac:
    // 0x4e24ac: 0x54830061  bnel        $a0, $v1, . + 4 + (0x61 << 2)
label_4e24b0:
    if (ctx->pc == 0x4E24B0u) {
        ctx->pc = 0x4E24B0u;
            // 0x4e24b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4E24B4u;
        goto label_4e24b4;
    }
    ctx->pc = 0x4E24ACu;
    {
        const bool branch_taken_0x4e24ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e24ac) {
            ctx->pc = 0x4E24B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E24ACu;
            // 0x4e24b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E2634u;
            goto label_4e2634;
        }
    }
    ctx->pc = 0x4E24B4u;
label_4e24b4:
    // 0x4e24b4: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x4e24b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e24b8:
    // 0x4e24b8: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x4e24b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4e24bc:
    // 0x4e24bc: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x4e24bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4e24c0:
    // 0x4e24c0: 0xc04cbd8  jal         func_132F60
label_4e24c4:
    if (ctx->pc == 0x4E24C4u) {
        ctx->pc = 0x4E24C4u;
            // 0x4e24c4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4E24C8u;
        goto label_4e24c8;
    }
    ctx->pc = 0x4E24C0u;
    SET_GPR_U32(ctx, 31, 0x4E24C8u);
    ctx->pc = 0x4E24C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E24C0u;
            // 0x4e24c4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E24C8u; }
        if (ctx->pc != 0x4E24C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E24C8u; }
        if (ctx->pc != 0x4E24C8u) { return; }
    }
    ctx->pc = 0x4E24C8u;
label_4e24c8:
    // 0x4e24c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4e24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e24cc:
    // 0x4e24cc: 0xc04f278  jal         func_13C9E0
label_4e24d0:
    if (ctx->pc == 0x4E24D0u) {
        ctx->pc = 0x4E24D0u;
            // 0x4e24d0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4E24D4u;
        goto label_4e24d4;
    }
    ctx->pc = 0x4E24CCu;
    SET_GPR_U32(ctx, 31, 0x4E24D4u);
    ctx->pc = 0x4E24D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E24CCu;
            // 0x4e24d0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E24D4u; }
        if (ctx->pc != 0x4E24D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E24D4u; }
        if (ctx->pc != 0x4E24D4u) { return; }
    }
    ctx->pc = 0x4E24D4u;
label_4e24d4:
    // 0x4e24d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4e24d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e24d8:
    // 0x4e24d8: 0xc04ce80  jal         func_133A00
label_4e24dc:
    if (ctx->pc == 0x4E24DCu) {
        ctx->pc = 0x4E24DCu;
            // 0x4e24dc: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x4E24E0u;
        goto label_4e24e0;
    }
    ctx->pc = 0x4E24D8u;
    SET_GPR_U32(ctx, 31, 0x4E24E0u);
    ctx->pc = 0x4E24DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E24D8u;
            // 0x4e24dc: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E24E0u; }
        if (ctx->pc != 0x4E24E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E24E0u; }
        if (ctx->pc != 0x4E24E0u) { return; }
    }
    ctx->pc = 0x4E24E0u;
label_4e24e0:
    // 0x4e24e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4e24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4e24e4:
    // 0x4e24e4: 0xc04cc44  jal         func_133110
label_4e24e8:
    if (ctx->pc == 0x4E24E8u) {
        ctx->pc = 0x4E24E8u;
            // 0x4e24e8: 0x260508d0  addiu       $a1, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->pc = 0x4E24ECu;
        goto label_4e24ec;
    }
    ctx->pc = 0x4E24E4u;
    SET_GPR_U32(ctx, 31, 0x4E24ECu);
    ctx->pc = 0x4E24E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E24E4u;
            // 0x4e24e8: 0x260508d0  addiu       $a1, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E24ECu; }
        if (ctx->pc != 0x4E24ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E24ECu; }
        if (ctx->pc != 0x4E24ECu) { return; }
    }
    ctx->pc = 0x4E24ECu;
label_4e24ec:
    // 0x4e24ec: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x4e24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_4e24f0:
    // 0x4e24f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4e24f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4e24f4:
    // 0x4e24f4: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x4e24f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_4e24f8:
    // 0x4e24f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4e24f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e24fc:
    // 0x4e24fc: 0xc04cc70  jal         func_1331C0
label_4e2500:
    if (ctx->pc == 0x4E2500u) {
        ctx->pc = 0x4E2500u;
            // 0x4e2500: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2504u;
        goto label_4e2504;
    }
    ctx->pc = 0x4E24FCu;
    SET_GPR_U32(ctx, 31, 0x4E2504u);
    ctx->pc = 0x4E2500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E24FCu;
            // 0x4e2500: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2504u; }
        if (ctx->pc != 0x4E2504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2504u; }
        if (ctx->pc != 0x4E2504u) { return; }
    }
    ctx->pc = 0x4E2504u;
label_4e2504:
    // 0x4e2504: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x4e2504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e2508:
    // 0x4e2508: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4e2508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4e250c:
    // 0x4e250c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e250cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e2510:
    // 0x4e2510: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x4e2510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_4e2514:
    // 0x4e2514: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4e2514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e2518:
    // 0x4e2518: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_4e251c:
    if (ctx->pc == 0x4E251Cu) {
        ctx->pc = 0x4E251Cu;
            // 0x4e251c: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->pc = 0x4E2520u;
        goto label_4e2520;
    }
    ctx->pc = 0x4E2518u;
    {
        const bool branch_taken_0x4e2518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e2518) {
            ctx->pc = 0x4E251Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2518u;
            // 0x4e251c: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E2538u;
            goto label_4e2538;
        }
    }
    ctx->pc = 0x4E2520u;
label_4e2520:
    // 0x4e2520: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4e2520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4e2524:
    // 0x4e2524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e2524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e2528:
    // 0x4e2528: 0x0  nop
    ctx->pc = 0x4e2528u;
    // NOP
label_4e252c:
    // 0x4e252c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4e252cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4e2530:
    // 0x4e2530: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x4e2530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4e2534:
    // 0x4e2534: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x4e2534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4e2538:
    // 0x4e2538: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4e2538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e253c:
    // 0x4e253c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4e253cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4e2540:
    // 0x4e2540: 0xc0e30ac  jal         func_38C2B0
label_4e2544:
    if (ctx->pc == 0x4E2544u) {
        ctx->pc = 0x4E2544u;
            // 0x4e2544: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4E2548u;
        goto label_4e2548;
    }
    ctx->pc = 0x4E2540u;
    SET_GPR_U32(ctx, 31, 0x4E2548u);
    ctx->pc = 0x4E2544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2540u;
            // 0x4e2544: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C2B0u;
    if (runtime->hasFunction(0x38C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x38C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2548u; }
        if (ctx->pc != 0x4E2548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C2B0_0x38c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2548u; }
        if (ctx->pc != 0x4E2548u) { return; }
    }
    ctx->pc = 0x4E2548u;
label_4e2548:
    // 0x4e2548: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x4e2548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4e254c:
    // 0x4e254c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e254cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e2550:
    // 0x4e2550: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e2550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e2554:
    // 0x4e2554: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x4e2554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_4e2558:
    // 0x4e2558: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e2558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e255c:
    // 0x4e255c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e2560:
    // 0x4e2560: 0xc08bff0  jal         func_22FFC0
label_4e2564:
    if (ctx->pc == 0x4E2564u) {
        ctx->pc = 0x4E2564u;
            // 0x4e2564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2568u;
        goto label_4e2568;
    }
    ctx->pc = 0x4E2560u;
    SET_GPR_U32(ctx, 31, 0x4E2568u);
    ctx->pc = 0x4E2564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2560u;
            // 0x4e2564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2568u; }
        if (ctx->pc != 0x4E2568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2568u; }
        if (ctx->pc != 0x4E2568u) { return; }
    }
    ctx->pc = 0x4E2568u;
label_4e2568:
    // 0x4e2568: 0x8e020e38  lw          $v0, 0xE38($s0)
    ctx->pc = 0x4e2568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
label_4e256c:
    // 0x4e256c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x4e256cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4e2570:
    // 0x4e2570: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4e2574:
    if (ctx->pc == 0x4E2574u) {
        ctx->pc = 0x4E2574u;
            // 0x4e2574: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2578u;
        goto label_4e2578;
    }
    ctx->pc = 0x4E2570u;
    {
        const bool branch_taken_0x4e2570 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E2574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2570u;
            // 0x4e2574: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2570) {
            ctx->pc = 0x4E2588u;
            goto label_4e2588;
        }
    }
    ctx->pc = 0x4E2578u;
label_4e2578:
    // 0x4e2578: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4e2578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4e257c:
    // 0x4e257c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4e2580:
    if (ctx->pc == 0x4E2580u) {
        ctx->pc = 0x4E2584u;
        goto label_4e2584;
    }
    ctx->pc = 0x4E257Cu;
    {
        const bool branch_taken_0x4e257c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e257c) {
            ctx->pc = 0x4E2588u;
            goto label_4e2588;
        }
    }
    ctx->pc = 0x4E2584u;
label_4e2584:
    // 0x4e2584: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x4e2584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e2588:
    // 0x4e2588: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4e258c:
    if (ctx->pc == 0x4E258Cu) {
        ctx->pc = 0x4E2590u;
        goto label_4e2590;
    }
    ctx->pc = 0x4E2588u;
    {
        const bool branch_taken_0x4e2588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2588) {
            ctx->pc = 0x4E25A4u;
            goto label_4e25a4;
        }
    }
    ctx->pc = 0x4E2590u;
label_4e2590:
    // 0x4e2590: 0xc075eb4  jal         func_1D7AD0
label_4e2594:
    if (ctx->pc == 0x4E2594u) {
        ctx->pc = 0x4E2594u;
            // 0x4e2594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2598u;
        goto label_4e2598;
    }
    ctx->pc = 0x4E2590u;
    SET_GPR_U32(ctx, 31, 0x4E2598u);
    ctx->pc = 0x4E2594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2590u;
            // 0x4e2594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2598u; }
        if (ctx->pc != 0x4E2598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2598u; }
        if (ctx->pc != 0x4E2598u) { return; }
    }
    ctx->pc = 0x4E2598u;
label_4e2598:
    // 0x4e2598: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4e259c:
    if (ctx->pc == 0x4E259Cu) {
        ctx->pc = 0x4E25A0u;
        goto label_4e25a0;
    }
    ctx->pc = 0x4E2598u;
    {
        const bool branch_taken_0x4e2598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2598) {
            ctx->pc = 0x4E25A4u;
            goto label_4e25a4;
        }
    }
    ctx->pc = 0x4E25A0u;
label_4e25a0:
    // 0x4e25a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e25a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e25a4:
    // 0x4e25a4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_4e25a8:
    if (ctx->pc == 0x4E25A8u) {
        ctx->pc = 0x4E25ACu;
        goto label_4e25ac;
    }
    ctx->pc = 0x4E25A4u;
    {
        const bool branch_taken_0x4e25a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e25a4) {
            ctx->pc = 0x4E25F0u;
            goto label_4e25f0;
        }
    }
    ctx->pc = 0x4E25ACu;
label_4e25ac:
    // 0x4e25ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e25acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e25b0:
    // 0x4e25b0: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x4e25b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4e25b4:
    // 0x4e25b4: 0xc040180  jal         func_100600
label_4e25b8:
    if (ctx->pc == 0x4E25B8u) {
        ctx->pc = 0x4E25B8u;
            // 0x4e25b8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x4E25BCu;
        goto label_4e25bc;
    }
    ctx->pc = 0x4E25B4u;
    SET_GPR_U32(ctx, 31, 0x4E25BCu);
    ctx->pc = 0x4E25B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E25B4u;
            // 0x4e25b8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E25BCu; }
        if (ctx->pc != 0x4E25BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E25BCu; }
        if (ctx->pc != 0x4E25BCu) { return; }
    }
    ctx->pc = 0x4E25BCu;
label_4e25bc:
    // 0x4e25bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4e25c0:
    if (ctx->pc == 0x4E25C0u) {
        ctx->pc = 0x4E25C4u;
        goto label_4e25c4;
    }
    ctx->pc = 0x4E25BCu;
    {
        const bool branch_taken_0x4e25bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e25bc) {
            ctx->pc = 0x4E25F0u;
            goto label_4e25f0;
        }
    }
    ctx->pc = 0x4E25C4u;
label_4e25c4:
    // 0x4e25c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e25c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e25c8:
    // 0x4e25c8: 0x820911aa  lb          $t1, 0x11AA($s0)
    ctx->pc = 0x4e25c8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_4e25cc:
    // 0x4e25cc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4e25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4e25d0:
    // 0x4e25d0: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x4e25d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4e25d4:
    // 0x4e25d4: 0x26270458  addiu       $a3, $s1, 0x458
    ctx->pc = 0x4e25d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_4e25d8:
    // 0x4e25d8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4e25d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4e25dc:
    // 0x4e25dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4e25dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e25e0:
    // 0x4e25e0: 0x3445abec  ori         $a1, $v0, 0xABEC
    ctx->pc = 0x4e25e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44012);
label_4e25e4:
    // 0x4e25e4: 0x34088081  ori         $t0, $zero, 0x8081
    ctx->pc = 0x4e25e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32897);
label_4e25e8:
    // 0x4e25e8: 0xc0b9404  jal         func_2E5010
label_4e25ec:
    if (ctx->pc == 0x4E25ECu) {
        ctx->pc = 0x4E25ECu;
            // 0x4e25ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E25F0u;
        goto label_4e25f0;
    }
    ctx->pc = 0x4E25E8u;
    SET_GPR_U32(ctx, 31, 0x4E25F0u);
    ctx->pc = 0x4E25ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E25E8u;
            // 0x4e25ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E25F0u; }
        if (ctx->pc != 0x4E25F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E25F0u; }
        if (ctx->pc != 0x4E25F0u) { return; }
    }
    ctx->pc = 0x4E25F0u;
label_4e25f0:
    // 0x4e25f0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e25f4:
    // 0x4e25f4: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x4e25f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_4e25f8:
    // 0x4e25f8: 0xc441c9e8  lwc1        $f1, -0x3618($v0)
    ctx->pc = 0x4e25f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e25fc:
    // 0x4e25fc: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4e25fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4e2600:
    // 0x4e2600: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e2600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e2604:
    // 0x4e2604: 0xc440c9ec  lwc1        $f0, -0x3614($v0)
    ctx->pc = 0x4e2604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e2608:
    // 0x4e2608: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x4e2608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_4e260c:
    // 0x4e260c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4e260cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4e2610:
    // 0x4e2610: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e2610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e2614:
    // 0x4e2614: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4e2614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4e2618:
    // 0x4e2618: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x4e2618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_4e261c:
    // 0x4e261c: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x4e261cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_4e2620:
    // 0x4e2620: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e2620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e2624:
    // 0x4e2624: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4e2624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_4e2628:
    // 0x4e2628: 0x320f809  jalr        $t9
label_4e262c:
    if (ctx->pc == 0x4E262Cu) {
        ctx->pc = 0x4E262Cu;
            // 0x4e262c: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->pc = 0x4E2630u;
        goto label_4e2630;
    }
    ctx->pc = 0x4E2628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E2630u);
        ctx->pc = 0x4E262Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2628u;
            // 0x4e262c: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E2630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E2630u; }
            if (ctx->pc != 0x4E2630u) { return; }
        }
        }
    }
    ctx->pc = 0x4E2630u;
label_4e2630:
    // 0x4e2630: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e2630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e2634:
    // 0x4e2634: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e2634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e2638:
    // 0x4e2638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e2638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e263c:
    // 0x4e263c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e263cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e2640:
    // 0x4e2640: 0x3e00008  jr          $ra
label_4e2644:
    if (ctx->pc == 0x4E2644u) {
        ctx->pc = 0x4E2644u;
            // 0x4e2644: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4E2648u;
        goto label_4e2648;
    }
    ctx->pc = 0x4E2640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2640u;
            // 0x4e2644: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E2648u;
label_4e2648:
    // 0x4e2648: 0x0  nop
    ctx->pc = 0x4e2648u;
    // NOP
label_4e264c:
    // 0x4e264c: 0x0  nop
    ctx->pc = 0x4e264cu;
    // NOP
label_4e2650:
    // 0x4e2650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e2654:
    // 0x4e2654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e2654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e2658:
    // 0x4e2658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e265c:
    // 0x4e265c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e265cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e2660:
    // 0x4e2660: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x4e2660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4e2664:
    // 0x4e2664: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4e2668:
    if (ctx->pc == 0x4E2668u) {
        ctx->pc = 0x4E2668u;
            // 0x4e2668: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E266Cu;
        goto label_4e266c;
    }
    ctx->pc = 0x4E2664u;
    {
        const bool branch_taken_0x4e2664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2664u;
            // 0x4e2668: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2664) {
            ctx->pc = 0x4E269Cu;
            goto label_4e269c;
        }
    }
    ctx->pc = 0x4E266Cu;
label_4e266c:
    // 0x4e266c: 0xc04008c  jal         func_100230
label_4e2670:
    if (ctx->pc == 0x4E2670u) {
        ctx->pc = 0x4E2670u;
            // 0x4e2670: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E2674u;
        goto label_4e2674;
    }
    ctx->pc = 0x4E266Cu;
    SET_GPR_U32(ctx, 31, 0x4E2674u);
    ctx->pc = 0x4E2670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E266Cu;
            // 0x4e2670: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2674u; }
        if (ctx->pc != 0x4E2674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2674u; }
        if (ctx->pc != 0x4E2674u) { return; }
    }
    ctx->pc = 0x4E2674u;
label_4e2674:
    // 0x4e2674: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4e2674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e2678:
    // 0x4e2678: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4e2678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4e267c:
    // 0x4e267c: 0xc0407c0  jal         func_101F00
label_4e2680:
    if (ctx->pc == 0x4E2680u) {
        ctx->pc = 0x4E2680u;
            // 0x4e2680: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x4E2684u;
        goto label_4e2684;
    }
    ctx->pc = 0x4E267Cu;
    SET_GPR_U32(ctx, 31, 0x4E2684u);
    ctx->pc = 0x4E2680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E267Cu;
            // 0x4e2680: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2684u; }
        if (ctx->pc != 0x4E2684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2684u; }
        if (ctx->pc != 0x4E2684u) { return; }
    }
    ctx->pc = 0x4E2684u;
label_4e2684:
    // 0x4e2684: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4e2684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4e2688:
    // 0x4e2688: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4e2688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4e268c:
    // 0x4e268c: 0xc0407c0  jal         func_101F00
label_4e2690:
    if (ctx->pc == 0x4E2690u) {
        ctx->pc = 0x4E2690u;
            // 0x4e2690: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x4E2694u;
        goto label_4e2694;
    }
    ctx->pc = 0x4E268Cu;
    SET_GPR_U32(ctx, 31, 0x4E2694u);
    ctx->pc = 0x4E2690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E268Cu;
            // 0x4e2690: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2694u; }
        if (ctx->pc != 0x4E2694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2694u; }
        if (ctx->pc != 0x4E2694u) { return; }
    }
    ctx->pc = 0x4E2694u;
label_4e2694:
    // 0x4e2694: 0xc0400a8  jal         func_1002A0
label_4e2698:
    if (ctx->pc == 0x4E2698u) {
        ctx->pc = 0x4E2698u;
            // 0x4e2698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E269Cu;
        goto label_4e269c;
    }
    ctx->pc = 0x4E2694u;
    SET_GPR_U32(ctx, 31, 0x4E269Cu);
    ctx->pc = 0x4E2698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2694u;
            // 0x4e2698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E269Cu; }
        if (ctx->pc != 0x4E269Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E269Cu; }
        if (ctx->pc != 0x4E269Cu) { return; }
    }
    ctx->pc = 0x4E269Cu;
label_4e269c:
    // 0x4e269c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x4e269cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4e26a0:
    // 0x4e26a0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4e26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4e26a4:
    // 0x4e26a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e26a8:
    if (ctx->pc == 0x4E26A8u) {
        ctx->pc = 0x4E26A8u;
            // 0x4e26a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4E26ACu;
        goto label_4e26ac;
    }
    ctx->pc = 0x4E26A4u;
    {
        const bool branch_taken_0x4e26a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e26a4) {
            ctx->pc = 0x4E26A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E26A4u;
            // 0x4e26a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E26C0u;
            goto label_4e26c0;
        }
    }
    ctx->pc = 0x4E26ACu;
label_4e26ac:
    // 0x4e26ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e26acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e26b0:
    // 0x4e26b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e26b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e26b4:
    // 0x4e26b4: 0x320f809  jalr        $t9
label_4e26b8:
    if (ctx->pc == 0x4E26B8u) {
        ctx->pc = 0x4E26B8u;
            // 0x4e26b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E26BCu;
        goto label_4e26bc;
    }
    ctx->pc = 0x4E26B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E26BCu);
        ctx->pc = 0x4E26B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E26B4u;
            // 0x4e26b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E26BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E26BCu; }
            if (ctx->pc != 0x4E26BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4E26BCu;
label_4e26bc:
    // 0x4e26bc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4e26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4e26c0:
    // 0x4e26c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e26c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e26c4:
    // 0x4e26c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e26c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e26c8:
    // 0x4e26c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e26c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e26cc:
    // 0x4e26cc: 0x3e00008  jr          $ra
label_4e26d0:
    if (ctx->pc == 0x4E26D0u) {
        ctx->pc = 0x4E26D0u;
            // 0x4e26d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E26D4u;
        goto label_4e26d4;
    }
    ctx->pc = 0x4E26CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E26D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E26CCu;
            // 0x4e26d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E26D4u;
label_4e26d4:
    // 0x4e26d4: 0x0  nop
    ctx->pc = 0x4e26d4u;
    // NOP
label_4e26d8:
    // 0x4e26d8: 0x0  nop
    ctx->pc = 0x4e26d8u;
    // NOP
label_4e26dc:
    // 0x4e26dc: 0x0  nop
    ctx->pc = 0x4e26dcu;
    // NOP
label_4e26e0:
    // 0x4e26e0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x4e26e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_4e26e4:
    // 0x4e26e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e26e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e26e8:
    // 0x4e26e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e26e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e26ec:
    // 0x4e26ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e26ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e26f0:
    // 0x4e26f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e26f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e26f4:
    // 0x4e26f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e26f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4e26f8:
    // 0x4e26f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4e26f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4e26fc:
    // 0x4e26fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4e26fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4e2700:
    // 0x4e2700: 0xc0892d0  jal         func_224B40
label_4e2704:
    if (ctx->pc == 0x4E2704u) {
        ctx->pc = 0x4E2704u;
            // 0x4e2704: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x4E2708u;
        goto label_4e2708;
    }
    ctx->pc = 0x4E2700u;
    SET_GPR_U32(ctx, 31, 0x4E2708u);
    ctx->pc = 0x4E2704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2700u;
            // 0x4e2704: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2708u; }
        if (ctx->pc != 0x4E2708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2708u; }
        if (ctx->pc != 0x4E2708u) { return; }
    }
    ctx->pc = 0x4E2708u;
label_4e2708:
    // 0x4e2708: 0xc049514  jal         func_125450
label_4e270c:
    if (ctx->pc == 0x4E270Cu) {
        ctx->pc = 0x4E270Cu;
            // 0x4e270c: 0xc64c0038  lwc1        $f12, 0x38($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4E2710u;
        goto label_4e2710;
    }
    ctx->pc = 0x4E2708u;
    SET_GPR_U32(ctx, 31, 0x4E2710u);
    ctx->pc = 0x4E270Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2708u;
            // 0x4e270c: 0xc64c0038  lwc1        $f12, 0x38($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2710u; }
        if (ctx->pc != 0x4E2710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2710u; }
        if (ctx->pc != 0x4E2710u) { return; }
    }
    ctx->pc = 0x4E2710u;
label_4e2710:
    // 0x4e2710: 0xc0474b6  jal         func_11D2D8
label_4e2714:
    if (ctx->pc == 0x4E2714u) {
        ctx->pc = 0x4E2714u;
            // 0x4e2714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2718u;
        goto label_4e2718;
    }
    ctx->pc = 0x4E2710u;
    SET_GPR_U32(ctx, 31, 0x4E2718u);
    ctx->pc = 0x4E2714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2710u;
            // 0x4e2714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2718u; }
        if (ctx->pc != 0x4E2718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2718u; }
        if (ctx->pc != 0x4E2718u) { return; }
    }
    ctx->pc = 0x4E2718u;
label_4e2718:
    // 0x4e2718: 0xc0497dc  jal         func_125F70
label_4e271c:
    if (ctx->pc == 0x4E271Cu) {
        ctx->pc = 0x4E271Cu;
            // 0x4e271c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2720u;
        goto label_4e2720;
    }
    ctx->pc = 0x4E2718u;
    SET_GPR_U32(ctx, 31, 0x4E2720u);
    ctx->pc = 0x4E271Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2718u;
            // 0x4e271c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2720u; }
        if (ctx->pc != 0x4E2720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2720u; }
        if (ctx->pc != 0x4E2720u) { return; }
    }
    ctx->pc = 0x4E2720u;
label_4e2720:
    // 0x4e2720: 0xc64c0034  lwc1        $f12, 0x34($s2)
    ctx->pc = 0x4e2720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e2724:
    // 0x4e2724: 0xc049514  jal         func_125450
label_4e2728:
    if (ctx->pc == 0x4E2728u) {
        ctx->pc = 0x4E2728u;
            // 0x4e2728: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4E272Cu;
        goto label_4e272c;
    }
    ctx->pc = 0x4E2724u;
    SET_GPR_U32(ctx, 31, 0x4E272Cu);
    ctx->pc = 0x4E2728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2724u;
            // 0x4e2728: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E272Cu; }
        if (ctx->pc != 0x4E272Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E272Cu; }
        if (ctx->pc != 0x4E272Cu) { return; }
    }
    ctx->pc = 0x4E272Cu;
label_4e272c:
    // 0x4e272c: 0xc0474b6  jal         func_11D2D8
label_4e2730:
    if (ctx->pc == 0x4E2730u) {
        ctx->pc = 0x4E2730u;
            // 0x4e2730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2734u;
        goto label_4e2734;
    }
    ctx->pc = 0x4E272Cu;
    SET_GPR_U32(ctx, 31, 0x4E2734u);
    ctx->pc = 0x4E2730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E272Cu;
            // 0x4e2730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2734u; }
        if (ctx->pc != 0x4E2734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2734u; }
        if (ctx->pc != 0x4E2734u) { return; }
    }
    ctx->pc = 0x4E2734u;
label_4e2734:
    // 0x4e2734: 0x3c03402a  lui         $v1, 0x402A
    ctx->pc = 0x4e2734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16426 << 16));
label_4e2738:
    // 0x4e2738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e2738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e273c:
    // 0x4e273c: 0xc04963e  jal         func_1258F8
label_4e2740:
    if (ctx->pc == 0x4E2740u) {
        ctx->pc = 0x4E2740u;
            // 0x4e2740: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x4E2744u;
        goto label_4e2744;
    }
    ctx->pc = 0x4E273Cu;
    SET_GPR_U32(ctx, 31, 0x4E2744u);
    ctx->pc = 0x4E2740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E273Cu;
            // 0x4e2740: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2744u; }
        if (ctx->pc != 0x4E2744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2744u; }
        if (ctx->pc != 0x4E2744u) { return; }
    }
    ctx->pc = 0x4E2744u;
label_4e2744:
    // 0x4e2744: 0xc0497dc  jal         func_125F70
label_4e2748:
    if (ctx->pc == 0x4E2748u) {
        ctx->pc = 0x4E2748u;
            // 0x4e2748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E274Cu;
        goto label_4e274c;
    }
    ctx->pc = 0x4E2744u;
    SET_GPR_U32(ctx, 31, 0x4E274Cu);
    ctx->pc = 0x4E2748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2744u;
            // 0x4e2748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E274Cu; }
        if (ctx->pc != 0x4E274Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E274Cu; }
        if (ctx->pc != 0x4E274Cu) { return; }
    }
    ctx->pc = 0x4E274Cu;
label_4e274c:
    // 0x4e274c: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x4e274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e2750:
    // 0x4e2750: 0xc049514  jal         func_125450
label_4e2754:
    if (ctx->pc == 0x4E2754u) {
        ctx->pc = 0x4E2754u;
            // 0x4e2754: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4E2758u;
        goto label_4e2758;
    }
    ctx->pc = 0x4E2750u;
    SET_GPR_U32(ctx, 31, 0x4E2758u);
    ctx->pc = 0x4E2754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2750u;
            // 0x4e2754: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2758u; }
        if (ctx->pc != 0x4E2758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2758u; }
        if (ctx->pc != 0x4E2758u) { return; }
    }
    ctx->pc = 0x4E2758u;
label_4e2758:
    // 0x4e2758: 0xc0474b6  jal         func_11D2D8
label_4e275c:
    if (ctx->pc == 0x4E275Cu) {
        ctx->pc = 0x4E275Cu;
            // 0x4e275c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2760u;
        goto label_4e2760;
    }
    ctx->pc = 0x4E2758u;
    SET_GPR_U32(ctx, 31, 0x4E2760u);
    ctx->pc = 0x4E275Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2758u;
            // 0x4e275c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2760u; }
        if (ctx->pc != 0x4E2760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2760u; }
        if (ctx->pc != 0x4E2760u) { return; }
    }
    ctx->pc = 0x4E2760u;
label_4e2760:
    // 0x4e2760: 0x3c03402c  lui         $v1, 0x402C
    ctx->pc = 0x4e2760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16428 << 16));
label_4e2764:
    // 0x4e2764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e2764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e2768:
    // 0x4e2768: 0xc04963e  jal         func_1258F8
label_4e276c:
    if (ctx->pc == 0x4E276Cu) {
        ctx->pc = 0x4E276Cu;
            // 0x4e276c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x4E2770u;
        goto label_4e2770;
    }
    ctx->pc = 0x4E2768u;
    SET_GPR_U32(ctx, 31, 0x4E2770u);
    ctx->pc = 0x4E276Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2768u;
            // 0x4e276c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2770u; }
        if (ctx->pc != 0x4E2770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2770u; }
        if (ctx->pc != 0x4E2770u) { return; }
    }
    ctx->pc = 0x4E2770u;
label_4e2770:
    // 0x4e2770: 0xc0497dc  jal         func_125F70
label_4e2774:
    if (ctx->pc == 0x4E2774u) {
        ctx->pc = 0x4E2774u;
            // 0x4e2774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2778u;
        goto label_4e2778;
    }
    ctx->pc = 0x4E2770u;
    SET_GPR_U32(ctx, 31, 0x4E2778u);
    ctx->pc = 0x4E2774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2770u;
            // 0x4e2774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2778u; }
        if (ctx->pc != 0x4E2778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2778u; }
        if (ctx->pc != 0x4E2778u) { return; }
    }
    ctx->pc = 0x4E2778u;
label_4e2778:
    // 0x4e2778: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e2778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e277c:
    // 0x4e277c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4e277cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4e2780:
    // 0x4e2780: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e2780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e2784:
    // 0x4e2784: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4e2784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4e2788:
    // 0x4e2788: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4e2788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4e278c:
    // 0x4e278c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4e278cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4e2790:
    // 0x4e2790: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x4e2790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4e2794:
    // 0x4e2794: 0xc0a7a88  jal         func_29EA20
label_4e2798:
    if (ctx->pc == 0x4E2798u) {
        ctx->pc = 0x4E2798u;
            // 0x4e2798: 0xe7b50058  swc1        $f21, 0x58($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->pc = 0x4E279Cu;
        goto label_4e279c;
    }
    ctx->pc = 0x4E2794u;
    SET_GPR_U32(ctx, 31, 0x4E279Cu);
    ctx->pc = 0x4E2798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2794u;
            // 0x4e2798: 0xe7b50058  swc1        $f21, 0x58($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E279Cu; }
        if (ctx->pc != 0x4E279Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E279Cu; }
        if (ctx->pc != 0x4E279Cu) { return; }
    }
    ctx->pc = 0x4E279Cu;
label_4e279c:
    // 0x4e279c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4e279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4e27a0:
    // 0x4e27a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e27a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e27a4:
    // 0x4e27a4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4e27a8:
    if (ctx->pc == 0x4E27A8u) {
        ctx->pc = 0x4E27A8u;
            // 0x4e27a8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E27ACu;
        goto label_4e27ac;
    }
    ctx->pc = 0x4E27A4u;
    {
        const bool branch_taken_0x4e27a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E27A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E27A4u;
            // 0x4e27a8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e27a4) {
            ctx->pc = 0x4E27C0u;
            goto label_4e27c0;
        }
    }
    ctx->pc = 0x4E27ACu;
label_4e27ac:
    // 0x4e27ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4e27acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4e27b0:
    // 0x4e27b0: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4e27b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e27b4:
    // 0x4e27b4: 0xc0804bc  jal         func_2012F0
label_4e27b8:
    if (ctx->pc == 0x4E27B8u) {
        ctx->pc = 0x4E27B8u;
            // 0x4e27b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E27BCu;
        goto label_4e27bc;
    }
    ctx->pc = 0x4E27B4u;
    SET_GPR_U32(ctx, 31, 0x4E27BCu);
    ctx->pc = 0x4E27B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E27B4u;
            // 0x4e27b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E27BCu; }
        if (ctx->pc != 0x4E27BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E27BCu; }
        if (ctx->pc != 0x4E27BCu) { return; }
    }
    ctx->pc = 0x4E27BCu;
label_4e27bc:
    // 0x4e27bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e27bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e27c0:
    // 0x4e27c0: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x4e27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_4e27c4:
    // 0x4e27c4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x4e27c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_4e27c8:
    // 0x4e27c8: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x4e27c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e27cc:
    // 0x4e27cc: 0x344acccd  ori         $t2, $v0, 0xCCCD
    ctx->pc = 0x4e27ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4e27d0:
    // 0x4e27d0: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x4e27d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e27d4:
    // 0x4e27d4: 0x3c0300e0  lui         $v1, 0xE0
    ctx->pc = 0x4e27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)224 << 16));
label_4e27d8:
    // 0x4e27d8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4e27d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e27dc:
    // 0x4e27dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e27dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e27e0:
    // 0x4e27e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e27e4:
    // 0x4e27e4: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x4e27e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
label_4e27e8:
    // 0x4e27e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e27e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e27ec:
    // 0x4e27ec: 0x3c083e80  lui         $t0, 0x3E80
    ctx->pc = 0x4e27ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16000 << 16));
label_4e27f0:
    // 0x4e27f0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x4e27f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4e27f4:
    // 0x4e27f4: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x4e27f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_4e27f8:
    // 0x4e27f8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x4e27f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_4e27fc:
    // 0x4e27fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4e27fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e2800:
    // 0x4e2800: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x4e2800u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_4e2804:
    // 0x4e2804: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x4e2804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_4e2808:
    // 0x4e2808: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x4e2808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4e280c:
    // 0x4e280c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4e280cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4e2810:
    // 0x4e2810: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x4e2810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e2814:
    // 0x4e2814: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4e2814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4e2818:
    // 0x4e2818: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x4e2818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e281c:
    // 0x4e281c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x4e281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e2820:
    // 0x4e2820: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4e2820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4e2824:
    // 0x4e2824: 0xafaa00f8  sw          $t2, 0xF8($sp)
    ctx->pc = 0x4e2824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 10));
label_4e2828:
    // 0x4e2828: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x4e2828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4e282c:
    // 0x4e282c: 0xafa900f0  sw          $t1, 0xF0($sp)
    ctx->pc = 0x4e282cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 9));
label_4e2830:
    // 0x4e2830: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x4e2830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4e2834:
    // 0x4e2834: 0xafa800fc  sw          $t0, 0xFC($sp)
    ctx->pc = 0x4e2834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 8));
label_4e2838:
    // 0x4e2838: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x4e2838u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_4e283c:
    // 0x4e283c: 0xa3a70110  sb          $a3, 0x110($sp)
    ctx->pc = 0x4e283cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 7));
label_4e2840:
    // 0x4e2840: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x4e2840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_4e2844:
    // 0x4e2844: 0xc0a7a88  jal         func_29EA20
label_4e2848:
    if (ctx->pc == 0x4E2848u) {
        ctx->pc = 0x4E2848u;
            // 0x4e2848: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
        ctx->pc = 0x4E284Cu;
        goto label_4e284c;
    }
    ctx->pc = 0x4E2844u;
    SET_GPR_U32(ctx, 31, 0x4E284Cu);
    ctx->pc = 0x4E2848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2844u;
            // 0x4e2848: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E284Cu; }
        if (ctx->pc != 0x4E284Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E284Cu; }
        if (ctx->pc != 0x4E284Cu) { return; }
    }
    ctx->pc = 0x4E284Cu;
label_4e284c:
    // 0x4e284c: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4e284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4e2850:
    // 0x4e2850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e2850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e2854:
    // 0x4e2854: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4e2858:
    if (ctx->pc == 0x4E2858u) {
        ctx->pc = 0x4E2858u;
            // 0x4e2858: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E285Cu;
        goto label_4e285c;
    }
    ctx->pc = 0x4E2854u;
    {
        const bool branch_taken_0x4e2854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2854u;
            // 0x4e2858: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2854) {
            ctx->pc = 0x4E28A4u;
            goto label_4e28a4;
        }
    }
    ctx->pc = 0x4E285Cu;
label_4e285c:
    // 0x4e285c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e285cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2860:
    // 0x4e2860: 0xc088ef4  jal         func_223BD0
label_4e2864:
    if (ctx->pc == 0x4E2864u) {
        ctx->pc = 0x4E2864u;
            // 0x4e2864: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E2868u;
        goto label_4e2868;
    }
    ctx->pc = 0x4E2860u;
    SET_GPR_U32(ctx, 31, 0x4E2868u);
    ctx->pc = 0x4E2864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2860u;
            // 0x4e2864: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2868u; }
        if (ctx->pc != 0x4E2868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2868u; }
        if (ctx->pc != 0x4E2868u) { return; }
    }
    ctx->pc = 0x4E2868u;
label_4e2868:
    // 0x4e2868: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e2868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e286c:
    // 0x4e286c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e286cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e2870:
    // 0x4e2870: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4e2870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4e2874:
    // 0x4e2874: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4e2874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4e2878:
    // 0x4e2878: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e2878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e287c:
    // 0x4e287c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4e287cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_4e2880:
    // 0x4e2880: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e2880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e2884:
    // 0x4e2884: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e2884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e2888:
    // 0x4e2888: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4e2888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4e288c:
    // 0x4e288c: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4e288cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4e2890:
    // 0x4e2890: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x4e2890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_4e2894:
    // 0x4e2894: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e2894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e2898:
    // 0x4e2898: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4e2898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e289c:
    // 0x4e289c: 0xc088b38  jal         func_222CE0
label_4e28a0:
    if (ctx->pc == 0x4E28A0u) {
        ctx->pc = 0x4E28A0u;
            // 0x4e28a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E28A4u;
        goto label_4e28a4;
    }
    ctx->pc = 0x4E289Cu;
    SET_GPR_U32(ctx, 31, 0x4E28A4u);
    ctx->pc = 0x4E28A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E289Cu;
            // 0x4e28a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E28A4u; }
        if (ctx->pc != 0x4E28A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E28A4u; }
        if (ctx->pc != 0x4E28A4u) { return; }
    }
    ctx->pc = 0x4E28A4u;
label_4e28a4:
    // 0x4e28a4: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x4e28a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_4e28a8:
    // 0x4e28a8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4e28ac:
    if (ctx->pc == 0x4E28ACu) {
        ctx->pc = 0x4E28ACu;
            // 0x4e28ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E28B0u;
        goto label_4e28b0;
    }
    ctx->pc = 0x4E28A8u;
    {
        const bool branch_taken_0x4e28a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e28a8) {
            ctx->pc = 0x4E28ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E28A8u;
            // 0x4e28ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E28ECu;
            goto label_4e28ec;
        }
    }
    ctx->pc = 0x4E28B0u;
label_4e28b0:
    // 0x4e28b0: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x4e28b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_4e28b4:
    // 0x4e28b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4e28b8:
    // 0x4e28b8: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x4e28b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_4e28bc:
    // 0x4e28bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4e28bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4e28c0:
    // 0x4e28c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e28c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e28c4:
    // 0x4e28c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4e28c8:
    if (ctx->pc == 0x4E28C8u) {
        ctx->pc = 0x4E28CCu;
        goto label_4e28cc;
    }
    ctx->pc = 0x4E28C4u;
    {
        const bool branch_taken_0x4e28c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e28c4) {
            ctx->pc = 0x4E28E8u;
            goto label_4e28e8;
        }
    }
    ctx->pc = 0x4E28CCu;
label_4e28cc:
    // 0x4e28cc: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4e28d0:
    if (ctx->pc == 0x4E28D0u) {
        ctx->pc = 0x4E28D4u;
        goto label_4e28d4;
    }
    ctx->pc = 0x4E28CCu;
    {
        const bool branch_taken_0x4e28cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e28cc) {
            ctx->pc = 0x4E28E8u;
            goto label_4e28e8;
        }
    }
    ctx->pc = 0x4E28D4u;
label_4e28d4:
    // 0x4e28d4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4e28d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e28d8:
    // 0x4e28d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e28d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e28dc:
    // 0x4e28dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e28dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e28e0:
    // 0x4e28e0: 0x320f809  jalr        $t9
label_4e28e4:
    if (ctx->pc == 0x4E28E4u) {
        ctx->pc = 0x4E28E4u;
            // 0x4e28e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E28E8u;
        goto label_4e28e8;
    }
    ctx->pc = 0x4E28E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E28E8u);
        ctx->pc = 0x4E28E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E28E0u;
            // 0x4e28e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E28E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E28E8u; }
            if (ctx->pc != 0x4E28E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E28E8u;
label_4e28e8:
    // 0x4e28e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e28e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e28ec:
    // 0x4e28ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4e28ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e28f0:
    // 0x4e28f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e28f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e28f4:
    // 0x4e28f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e28f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e28f8:
    // 0x4e28f8: 0xc08914c  jal         func_224530
label_4e28fc:
    if (ctx->pc == 0x4E28FCu) {
        ctx->pc = 0x4E28FCu;
            // 0x4e28fc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x4E2900u;
        goto label_4e2900;
    }
    ctx->pc = 0x4E28F8u;
    SET_GPR_U32(ctx, 31, 0x4E2900u);
    ctx->pc = 0x4E28FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E28F8u;
            // 0x4e28fc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2900u; }
        if (ctx->pc != 0x4E2900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2900u; }
        if (ctx->pc != 0x4E2900u) { return; }
    }
    ctx->pc = 0x4E2900u;
label_4e2900:
    // 0x4e2900: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e2900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e2904:
    // 0x4e2904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e2904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2908:
    // 0x4e2908: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e2908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e290c:
    // 0x4e290c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e290cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e2910:
    // 0x4e2910: 0xc08c164  jal         func_230590
label_4e2914:
    if (ctx->pc == 0x4E2914u) {
        ctx->pc = 0x4E2914u;
            // 0x4e2914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E2918u;
        goto label_4e2918;
    }
    ctx->pc = 0x4E2910u;
    SET_GPR_U32(ctx, 31, 0x4E2918u);
    ctx->pc = 0x4E2914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2910u;
            // 0x4e2914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2918u; }
        if (ctx->pc != 0x4E2918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2918u; }
        if (ctx->pc != 0x4E2918u) { return; }
    }
    ctx->pc = 0x4E2918u;
label_4e2918:
    // 0x4e2918: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x4e2918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_4e291c:
    // 0x4e291c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e291cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e2920:
    // 0x4e2920: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e2920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e2924:
    // 0x4e2924: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4e2924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4e2928:
    // 0x4e2928: 0xc0a7a88  jal         func_29EA20
label_4e292c:
    if (ctx->pc == 0x4E292Cu) {
        ctx->pc = 0x4E292Cu;
            // 0x4e292c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4E2930u;
        goto label_4e2930;
    }
    ctx->pc = 0x4E2928u;
    SET_GPR_U32(ctx, 31, 0x4E2930u);
    ctx->pc = 0x4E292Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2928u;
            // 0x4e292c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2930u; }
        if (ctx->pc != 0x4E2930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2930u; }
        if (ctx->pc != 0x4E2930u) { return; }
    }
    ctx->pc = 0x4E2930u;
label_4e2930:
    // 0x4e2930: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4e2930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4e2934:
    // 0x4e2934: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4e2934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e2938:
    // 0x4e2938: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_4e293c:
    if (ctx->pc == 0x4E293Cu) {
        ctx->pc = 0x4E293Cu;
            // 0x4e293c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E2940u;
        goto label_4e2940;
    }
    ctx->pc = 0x4E2938u;
    {
        const bool branch_taken_0x4e2938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E293Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2938u;
            // 0x4e293c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2938) {
            ctx->pc = 0x4E295Cu;
            goto label_4e295c;
        }
    }
    ctx->pc = 0x4E2940u;
label_4e2940:
    // 0x4e2940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e2940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e2944:
    // 0x4e2944: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e2944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2948:
    // 0x4e2948: 0xc0869d0  jal         func_21A740
label_4e294c:
    if (ctx->pc == 0x4E294Cu) {
        ctx->pc = 0x4E294Cu;
            // 0x4e294c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2950u;
        goto label_4e2950;
    }
    ctx->pc = 0x4E2948u;
    SET_GPR_U32(ctx, 31, 0x4E2950u);
    ctx->pc = 0x4E294Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2948u;
            // 0x4e294c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2950u; }
        if (ctx->pc != 0x4E2950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2950u; }
        if (ctx->pc != 0x4E2950u) { return; }
    }
    ctx->pc = 0x4E2950u;
label_4e2950:
    // 0x4e2950: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e2950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e2954:
    // 0x4e2954: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4e2954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4e2958:
    // 0x4e2958: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e2958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4e295c:
    // 0x4e295c: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x4e295cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_4e2960:
    // 0x4e2960: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e2960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e2964:
    // 0x4e2964: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e2964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e2968:
    // 0x4e2968: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e2968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e296c:
    // 0x4e296c: 0xc08c650  jal         func_231940
label_4e2970:
    if (ctx->pc == 0x4E2970u) {
        ctx->pc = 0x4E2970u;
            // 0x4e2970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2974u;
        goto label_4e2974;
    }
    ctx->pc = 0x4E296Cu;
    SET_GPR_U32(ctx, 31, 0x4E2974u);
    ctx->pc = 0x4E2970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E296Cu;
            // 0x4e2970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2974u; }
        if (ctx->pc != 0x4E2974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2974u; }
        if (ctx->pc != 0x4E2974u) { return; }
    }
    ctx->pc = 0x4E2974u;
label_4e2974:
    // 0x4e2974: 0xc040180  jal         func_100600
label_4e2978:
    if (ctx->pc == 0x4E2978u) {
        ctx->pc = 0x4E2978u;
            // 0x4e2978: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x4E297Cu;
        goto label_4e297c;
    }
    ctx->pc = 0x4E2974u;
    SET_GPR_U32(ctx, 31, 0x4E297Cu);
    ctx->pc = 0x4E2978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2974u;
            // 0x4e2978: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E297Cu; }
        if (ctx->pc != 0x4E297Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E297Cu; }
        if (ctx->pc != 0x4E297Cu) { return; }
    }
    ctx->pc = 0x4E297Cu;
label_4e297c:
    // 0x4e297c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e297cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e2980:
    // 0x4e2980: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_4e2984:
    if (ctx->pc == 0x4E2984u) {
        ctx->pc = 0x4E2988u;
        goto label_4e2988;
    }
    ctx->pc = 0x4E2980u;
    {
        const bool branch_taken_0x4e2980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2980) {
            ctx->pc = 0x4E2A00u;
            goto label_4e2a00;
        }
    }
    ctx->pc = 0x4E2988u;
label_4e2988:
    // 0x4e2988: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4e2988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4e298c:
    // 0x4e298c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4e298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e2990:
    // 0x4e2990: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e2990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e2994:
    // 0x4e2994: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x4e2994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e2998:
    // 0x4e2998: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4e2998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4e299c:
    // 0x4e299c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4e299cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4e29a0:
    // 0x4e29a0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4e29a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4e29a4:
    // 0x4e29a4: 0xc040138  jal         func_1004E0
label_4e29a8:
    if (ctx->pc == 0x4E29A8u) {
        ctx->pc = 0x4E29A8u;
            // 0x4e29a8: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E29ACu;
        goto label_4e29ac;
    }
    ctx->pc = 0x4E29A4u;
    SET_GPR_U32(ctx, 31, 0x4E29ACu);
    ctx->pc = 0x4E29A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E29A4u;
            // 0x4e29a8: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E29ACu; }
        if (ctx->pc != 0x4E29ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E29ACu; }
        if (ctx->pc != 0x4E29ACu) { return; }
    }
    ctx->pc = 0x4E29ACu;
label_4e29ac:
    // 0x4e29ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e29acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e29b0:
    // 0x4e29b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4e29b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e29b4:
    // 0x4e29b4: 0xc040138  jal         func_1004E0
label_4e29b8:
    if (ctx->pc == 0x4E29B8u) {
        ctx->pc = 0x4E29B8u;
            // 0x4e29b8: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->pc = 0x4E29BCu;
        goto label_4e29bc;
    }
    ctx->pc = 0x4E29B4u;
    SET_GPR_U32(ctx, 31, 0x4E29BCu);
    ctx->pc = 0x4E29B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E29B4u;
            // 0x4e29b8: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E29BCu; }
        if (ctx->pc != 0x4E29BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E29BCu; }
        if (ctx->pc != 0x4E29BCu) { return; }
    }
    ctx->pc = 0x4E29BCu;
label_4e29bc:
    // 0x4e29bc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x4e29bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_4e29c0:
    // 0x4e29c0: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x4e29c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_4e29c4:
    // 0x4e29c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e29c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e29c8:
    // 0x4e29c8: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x4e29c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_4e29cc:
    // 0x4e29cc: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x4e29ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_4e29d0:
    // 0x4e29d0: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x4e29d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4e29d4:
    // 0x4e29d4: 0xc040840  jal         func_102100
label_4e29d8:
    if (ctx->pc == 0x4E29D8u) {
        ctx->pc = 0x4E29D8u;
            // 0x4e29d8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E29DCu;
        goto label_4e29dc;
    }
    ctx->pc = 0x4E29D4u;
    SET_GPR_U32(ctx, 31, 0x4E29DCu);
    ctx->pc = 0x4E29D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E29D4u;
            // 0x4e29d8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E29DCu; }
        if (ctx->pc != 0x4E29DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E29DCu; }
        if (ctx->pc != 0x4E29DCu) { return; }
    }
    ctx->pc = 0x4E29DCu;
label_4e29dc:
    // 0x4e29dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e29dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4e29e0:
    // 0x4e29e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4e29e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e29e4:
    // 0x4e29e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e29e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4e29e8:
    // 0x4e29e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4e29ec:
    // 0x4e29ec: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x4e29ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_4e29f0:
    // 0x4e29f0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x4e29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_4e29f4:
    // 0x4e29f4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4e29f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4e29f8:
    // 0x4e29f8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4e29fc:
    if (ctx->pc == 0x4E29FCu) {
        ctx->pc = 0x4E2A00u;
        goto label_4e2a00;
    }
    ctx->pc = 0x4E29F8u;
    {
        const bool branch_taken_0x4e29f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e29f8) {
            ctx->pc = 0x4E29E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e29e4;
        }
    }
    ctx->pc = 0x4E2A00u;
label_4e2a00:
    // 0x4e2a00: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x4e2a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_4e2a04:
    // 0x4e2a04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e2a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e2a08:
    // 0x4e2a08: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x4e2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_4e2a0c:
    // 0x4e2a0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4e2a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e2a10:
    // 0x4e2a10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e2a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e2a14:
    // 0x4e2a14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4e2a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e2a18:
    // 0x4e2a18: 0xc0e7d2c  jal         func_39F4B0
label_4e2a1c:
    if (ctx->pc == 0x4E2A1Cu) {
        ctx->pc = 0x4E2A1Cu;
            // 0x4e2a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2A20u;
        goto label_4e2a20;
    }
    ctx->pc = 0x4E2A18u;
    SET_GPR_U32(ctx, 31, 0x4E2A20u);
    ctx->pc = 0x4E2A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2A18u;
            // 0x4e2a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2A20u; }
        if (ctx->pc != 0x4E2A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2A20u; }
        if (ctx->pc != 0x4E2A20u) { return; }
    }
    ctx->pc = 0x4E2A20u;
label_4e2a20:
    // 0x4e2a20: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x4e2a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_4e2a24:
    // 0x4e2a24: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x4e2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_4e2a28:
    // 0x4e2a28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4e2a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e2a2c:
    // 0x4e2a2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4e2a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e2a30:
    // 0x4e2a30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e2a34:
    // 0x4e2a34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e2a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e2a38:
    // 0x4e2a38: 0xc0e7d2c  jal         func_39F4B0
label_4e2a3c:
    if (ctx->pc == 0x4E2A3Cu) {
        ctx->pc = 0x4E2A3Cu;
            // 0x4e2a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2A40u;
        goto label_4e2a40;
    }
    ctx->pc = 0x4E2A38u;
    SET_GPR_U32(ctx, 31, 0x4E2A40u);
    ctx->pc = 0x4E2A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2A38u;
            // 0x4e2a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2A40u; }
        if (ctx->pc != 0x4E2A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2A40u; }
        if (ctx->pc != 0x4E2A40u) { return; }
    }
    ctx->pc = 0x4E2A40u;
label_4e2a40:
    // 0x4e2a40: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x4e2a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_4e2a44:
    // 0x4e2a44: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x4e2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_4e2a48:
    // 0x4e2a48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4e2a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e2a4c:
    // 0x4e2a4c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4e2a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e2a50:
    // 0x4e2a50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e2a54:
    // 0x4e2a54: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4e2a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e2a58:
    // 0x4e2a58: 0xc0e7d2c  jal         func_39F4B0
label_4e2a5c:
    if (ctx->pc == 0x4E2A5Cu) {
        ctx->pc = 0x4E2A5Cu;
            // 0x4e2a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2A60u;
        goto label_4e2a60;
    }
    ctx->pc = 0x4E2A58u;
    SET_GPR_U32(ctx, 31, 0x4E2A60u);
    ctx->pc = 0x4E2A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2A58u;
            // 0x4e2a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2A60u; }
        if (ctx->pc != 0x4E2A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2A60u; }
        if (ctx->pc != 0x4E2A60u) { return; }
    }
    ctx->pc = 0x4E2A60u;
label_4e2a60:
    // 0x4e2a60: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x4e2a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_4e2a64:
    // 0x4e2a64: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x4e2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_4e2a68:
    // 0x4e2a68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4e2a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e2a6c:
    // 0x4e2a6c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4e2a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4e2a70:
    // 0x4e2a70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e2a74:
    // 0x4e2a74: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4e2a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e2a78:
    // 0x4e2a78: 0xc0e7d2c  jal         func_39F4B0
label_4e2a7c:
    if (ctx->pc == 0x4E2A7Cu) {
        ctx->pc = 0x4E2A7Cu;
            // 0x4e2a7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2A80u;
        goto label_4e2a80;
    }
    ctx->pc = 0x4E2A78u;
    SET_GPR_U32(ctx, 31, 0x4E2A80u);
    ctx->pc = 0x4E2A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2A78u;
            // 0x4e2a7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2A80u; }
        if (ctx->pc != 0x4E2A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2A80u; }
        if (ctx->pc != 0x4E2A80u) { return; }
    }
    ctx->pc = 0x4E2A80u;
label_4e2a80:
    // 0x4e2a80: 0x8e4600b0  lw          $a2, 0xB0($s2)
    ctx->pc = 0x4e2a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_4e2a84:
    // 0x4e2a84: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x4e2a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_4e2a88:
    // 0x4e2a88: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x4e2a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_4e2a8c:
    // 0x4e2a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e2a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e2a90:
    // 0x4e2a90: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4e2a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4e2a94:
    // 0x4e2a94: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x4e2a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_4e2a98:
    // 0x4e2a98: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4e2a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4e2a9c:
    // 0x4e2a9c: 0xae4500b0  sw          $a1, 0xB0($s2)
    ctx->pc = 0x4e2a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 5));
label_4e2aa0:
    // 0x4e2aa0: 0xae4400b0  sw          $a0, 0xB0($s2)
    ctx->pc = 0x4e2aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 4));
label_4e2aa4:
    // 0x4e2aa4: 0xa2400064  sb          $zero, 0x64($s2)
    ctx->pc = 0x4e2aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 0));
label_4e2aa8:
    // 0x4e2aa8: 0xa2430065  sb          $v1, 0x65($s2)
    ctx->pc = 0x4e2aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 3));
label_4e2aac:
    // 0x4e2aac: 0xa2400066  sb          $zero, 0x66($s2)
    ctx->pc = 0x4e2aacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 0));
label_4e2ab0:
    // 0x4e2ab0: 0xa2430067  sb          $v1, 0x67($s2)
    ctx->pc = 0x4e2ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 3));
label_4e2ab4:
    // 0x4e2ab4: 0xa2400068  sb          $zero, 0x68($s2)
    ctx->pc = 0x4e2ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
label_4e2ab8:
    // 0x4e2ab8: 0xa2430069  sb          $v1, 0x69($s2)
    ctx->pc = 0x4e2ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 3));
label_4e2abc:
    // 0x4e2abc: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x4e2abcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_4e2ac0:
    // 0x4e2ac0: 0xa243006b  sb          $v1, 0x6B($s2)
    ctx->pc = 0x4e2ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 3));
label_4e2ac4:
    // 0x4e2ac4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e2ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e2ac8:
    // 0x4e2ac8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4e2ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4e2acc:
    // 0x4e2acc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e2accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e2ad0:
    // 0x4e2ad0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e2ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e2ad4:
    // 0x4e2ad4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e2ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e2ad8:
    // 0x4e2ad8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e2ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2adc:
    // 0x4e2adc: 0x3e00008  jr          $ra
label_4e2ae0:
    if (ctx->pc == 0x4E2AE0u) {
        ctx->pc = 0x4E2AE0u;
            // 0x4e2ae0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4E2AE4u;
        goto label_4e2ae4;
    }
    ctx->pc = 0x4E2ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2ADCu;
            // 0x4e2ae0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E2AE4u;
label_4e2ae4:
    // 0x4e2ae4: 0x0  nop
    ctx->pc = 0x4e2ae4u;
    // NOP
label_4e2ae8:
    // 0x4e2ae8: 0x0  nop
    ctx->pc = 0x4e2ae8u;
    // NOP
label_4e2aec:
    // 0x4e2aec: 0x0  nop
    ctx->pc = 0x4e2aecu;
    // NOP
label_4e2af0:
    // 0x4e2af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e2af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e2af4:
    // 0x4e2af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e2af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e2af8:
    // 0x4e2af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e2af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e2afc:
    // 0x4e2afc: 0xc0e3580  jal         func_38D600
label_4e2b00:
    if (ctx->pc == 0x4E2B00u) {
        ctx->pc = 0x4E2B00u;
            // 0x4e2b00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2B04u;
        goto label_4e2b04;
    }
    ctx->pc = 0x4E2AFCu;
    SET_GPR_U32(ctx, 31, 0x4E2B04u);
    ctx->pc = 0x4E2B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2AFCu;
            // 0x4e2b00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2B04u; }
        if (ctx->pc != 0x4E2B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2B04u; }
        if (ctx->pc != 0x4E2B04u) { return; }
    }
    ctx->pc = 0x4E2B04u;
label_4e2b04:
    // 0x4e2b04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e2b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e2b08:
    // 0x4e2b08: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x4e2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_4e2b0c:
    // 0x4e2b0c: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x4e2b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
label_4e2b10:
    // 0x4e2b10: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x4e2b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_4e2b14:
    // 0x4e2b14: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x4e2b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_4e2b18:
    // 0x4e2b18: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x4e2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_4e2b1c:
    // 0x4e2b1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e2b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2b20:
    // 0x4e2b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e2b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e2b24:
    // 0x4e2b24: 0x3e00008  jr          $ra
label_4e2b28:
    if (ctx->pc == 0x4E2B28u) {
        ctx->pc = 0x4E2B28u;
            // 0x4e2b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E2B2Cu;
        goto label_4e2b2c;
    }
    ctx->pc = 0x4E2B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2B24u;
            // 0x4e2b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E2B2Cu;
label_4e2b2c:
    // 0x4e2b2c: 0x0  nop
    ctx->pc = 0x4e2b2cu;
    // NOP
label_4e2b30:
    // 0x4e2b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e2b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e2b34:
    // 0x4e2b34: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x4e2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_4e2b38:
    // 0x4e2b38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e2b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e2b3c:
    // 0x4e2b3c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x4e2b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_4e2b40:
    // 0x4e2b40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e2b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e2b44:
    // 0x4e2b44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e2b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e2b48:
    // 0x4e2b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e2b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e2b4c:
    // 0x4e2b4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e2b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e2b50:
    // 0x4e2b50: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x4e2b50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4e2b54:
    // 0x4e2b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e2b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e2b58:
    // 0x4e2b58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e2b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e2b5c:
    // 0x4e2b5c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x4e2b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_4e2b60:
    // 0x4e2b60: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e2b64:
    // 0x4e2b64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e2b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e2b68:
    // 0x4e2b68: 0xc08bff0  jal         func_22FFC0
label_4e2b6c:
    if (ctx->pc == 0x4E2B6Cu) {
        ctx->pc = 0x4E2B6Cu;
            // 0x4e2b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2B70u;
        goto label_4e2b70;
    }
    ctx->pc = 0x4E2B68u;
    SET_GPR_U32(ctx, 31, 0x4E2B70u);
    ctx->pc = 0x4E2B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2B68u;
            // 0x4e2b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2B70u; }
        if (ctx->pc != 0x4E2B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2B70u; }
        if (ctx->pc != 0x4E2B70u) { return; }
    }
    ctx->pc = 0x4E2B70u;
label_4e2b70:
    // 0x4e2b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2b74:
    // 0x4e2b74: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4e2b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e2b78:
    // 0x4e2b78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e2b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e2b7c:
    // 0x4e2b7c: 0xc08914c  jal         func_224530
label_4e2b80:
    if (ctx->pc == 0x4E2B80u) {
        ctx->pc = 0x4E2B80u;
            // 0x4e2b80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2B84u;
        goto label_4e2b84;
    }
    ctx->pc = 0x4E2B7Cu;
    SET_GPR_U32(ctx, 31, 0x4E2B84u);
    ctx->pc = 0x4E2B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2B7Cu;
            // 0x4e2b80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2B84u; }
        if (ctx->pc != 0x4E2B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2B84u; }
        if (ctx->pc != 0x4E2B84u) { return; }
    }
    ctx->pc = 0x4E2B84u;
label_4e2b84:
    // 0x4e2b84: 0xc0e393c  jal         func_38E4F0
label_4e2b88:
    if (ctx->pc == 0x4E2B88u) {
        ctx->pc = 0x4E2B88u;
            // 0x4e2b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2B8Cu;
        goto label_4e2b8c;
    }
    ctx->pc = 0x4E2B84u;
    SET_GPR_U32(ctx, 31, 0x4E2B8Cu);
    ctx->pc = 0x4E2B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2B84u;
            // 0x4e2b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2B8Cu; }
        if (ctx->pc != 0x4E2B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2B8Cu; }
        if (ctx->pc != 0x4E2B8Cu) { return; }
    }
    ctx->pc = 0x4E2B8Cu;
label_4e2b8c:
    // 0x4e2b8c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x4e2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_4e2b90:
    // 0x4e2b90: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x4e2b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_4e2b94:
    // 0x4e2b94: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4e2b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4e2b98:
    // 0x4e2b98: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x4e2b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
label_4e2b9c:
    // 0x4e2b9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e2b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e2ba0:
    // 0x4e2ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e2ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2ba4:
    // 0x4e2ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e2ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e2ba8:
    // 0x4e2ba8: 0x3e00008  jr          $ra
label_4e2bac:
    if (ctx->pc == 0x4E2BACu) {
        ctx->pc = 0x4E2BACu;
            // 0x4e2bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E2BB0u;
        goto label_fallthrough_0x4e2ba8;
    }
    ctx->pc = 0x4E2BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2BA8u;
            // 0x4e2bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4e2ba8:
    ctx->pc = 0x4E2BB0u;
}
