#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F22D0
// Address: 0x2f22d0 - 0x2f3cd0
void sub_002F22D0_0x2f22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F22D0_0x2f22d0");
#endif

    switch (ctx->pc) {
        case 0x2f22d0u: goto label_2f22d0;
        case 0x2f22d4u: goto label_2f22d4;
        case 0x2f22d8u: goto label_2f22d8;
        case 0x2f22dcu: goto label_2f22dc;
        case 0x2f22e0u: goto label_2f22e0;
        case 0x2f22e4u: goto label_2f22e4;
        case 0x2f22e8u: goto label_2f22e8;
        case 0x2f22ecu: goto label_2f22ec;
        case 0x2f22f0u: goto label_2f22f0;
        case 0x2f22f4u: goto label_2f22f4;
        case 0x2f22f8u: goto label_2f22f8;
        case 0x2f22fcu: goto label_2f22fc;
        case 0x2f2300u: goto label_2f2300;
        case 0x2f2304u: goto label_2f2304;
        case 0x2f2308u: goto label_2f2308;
        case 0x2f230cu: goto label_2f230c;
        case 0x2f2310u: goto label_2f2310;
        case 0x2f2314u: goto label_2f2314;
        case 0x2f2318u: goto label_2f2318;
        case 0x2f231cu: goto label_2f231c;
        case 0x2f2320u: goto label_2f2320;
        case 0x2f2324u: goto label_2f2324;
        case 0x2f2328u: goto label_2f2328;
        case 0x2f232cu: goto label_2f232c;
        case 0x2f2330u: goto label_2f2330;
        case 0x2f2334u: goto label_2f2334;
        case 0x2f2338u: goto label_2f2338;
        case 0x2f233cu: goto label_2f233c;
        case 0x2f2340u: goto label_2f2340;
        case 0x2f2344u: goto label_2f2344;
        case 0x2f2348u: goto label_2f2348;
        case 0x2f234cu: goto label_2f234c;
        case 0x2f2350u: goto label_2f2350;
        case 0x2f2354u: goto label_2f2354;
        case 0x2f2358u: goto label_2f2358;
        case 0x2f235cu: goto label_2f235c;
        case 0x2f2360u: goto label_2f2360;
        case 0x2f2364u: goto label_2f2364;
        case 0x2f2368u: goto label_2f2368;
        case 0x2f236cu: goto label_2f236c;
        case 0x2f2370u: goto label_2f2370;
        case 0x2f2374u: goto label_2f2374;
        case 0x2f2378u: goto label_2f2378;
        case 0x2f237cu: goto label_2f237c;
        case 0x2f2380u: goto label_2f2380;
        case 0x2f2384u: goto label_2f2384;
        case 0x2f2388u: goto label_2f2388;
        case 0x2f238cu: goto label_2f238c;
        case 0x2f2390u: goto label_2f2390;
        case 0x2f2394u: goto label_2f2394;
        case 0x2f2398u: goto label_2f2398;
        case 0x2f239cu: goto label_2f239c;
        case 0x2f23a0u: goto label_2f23a0;
        case 0x2f23a4u: goto label_2f23a4;
        case 0x2f23a8u: goto label_2f23a8;
        case 0x2f23acu: goto label_2f23ac;
        case 0x2f23b0u: goto label_2f23b0;
        case 0x2f23b4u: goto label_2f23b4;
        case 0x2f23b8u: goto label_2f23b8;
        case 0x2f23bcu: goto label_2f23bc;
        case 0x2f23c0u: goto label_2f23c0;
        case 0x2f23c4u: goto label_2f23c4;
        case 0x2f23c8u: goto label_2f23c8;
        case 0x2f23ccu: goto label_2f23cc;
        case 0x2f23d0u: goto label_2f23d0;
        case 0x2f23d4u: goto label_2f23d4;
        case 0x2f23d8u: goto label_2f23d8;
        case 0x2f23dcu: goto label_2f23dc;
        case 0x2f23e0u: goto label_2f23e0;
        case 0x2f23e4u: goto label_2f23e4;
        case 0x2f23e8u: goto label_2f23e8;
        case 0x2f23ecu: goto label_2f23ec;
        case 0x2f23f0u: goto label_2f23f0;
        case 0x2f23f4u: goto label_2f23f4;
        case 0x2f23f8u: goto label_2f23f8;
        case 0x2f23fcu: goto label_2f23fc;
        case 0x2f2400u: goto label_2f2400;
        case 0x2f2404u: goto label_2f2404;
        case 0x2f2408u: goto label_2f2408;
        case 0x2f240cu: goto label_2f240c;
        case 0x2f2410u: goto label_2f2410;
        case 0x2f2414u: goto label_2f2414;
        case 0x2f2418u: goto label_2f2418;
        case 0x2f241cu: goto label_2f241c;
        case 0x2f2420u: goto label_2f2420;
        case 0x2f2424u: goto label_2f2424;
        case 0x2f2428u: goto label_2f2428;
        case 0x2f242cu: goto label_2f242c;
        case 0x2f2430u: goto label_2f2430;
        case 0x2f2434u: goto label_2f2434;
        case 0x2f2438u: goto label_2f2438;
        case 0x2f243cu: goto label_2f243c;
        case 0x2f2440u: goto label_2f2440;
        case 0x2f2444u: goto label_2f2444;
        case 0x2f2448u: goto label_2f2448;
        case 0x2f244cu: goto label_2f244c;
        case 0x2f2450u: goto label_2f2450;
        case 0x2f2454u: goto label_2f2454;
        case 0x2f2458u: goto label_2f2458;
        case 0x2f245cu: goto label_2f245c;
        case 0x2f2460u: goto label_2f2460;
        case 0x2f2464u: goto label_2f2464;
        case 0x2f2468u: goto label_2f2468;
        case 0x2f246cu: goto label_2f246c;
        case 0x2f2470u: goto label_2f2470;
        case 0x2f2474u: goto label_2f2474;
        case 0x2f2478u: goto label_2f2478;
        case 0x2f247cu: goto label_2f247c;
        case 0x2f2480u: goto label_2f2480;
        case 0x2f2484u: goto label_2f2484;
        case 0x2f2488u: goto label_2f2488;
        case 0x2f248cu: goto label_2f248c;
        case 0x2f2490u: goto label_2f2490;
        case 0x2f2494u: goto label_2f2494;
        case 0x2f2498u: goto label_2f2498;
        case 0x2f249cu: goto label_2f249c;
        case 0x2f24a0u: goto label_2f24a0;
        case 0x2f24a4u: goto label_2f24a4;
        case 0x2f24a8u: goto label_2f24a8;
        case 0x2f24acu: goto label_2f24ac;
        case 0x2f24b0u: goto label_2f24b0;
        case 0x2f24b4u: goto label_2f24b4;
        case 0x2f24b8u: goto label_2f24b8;
        case 0x2f24bcu: goto label_2f24bc;
        case 0x2f24c0u: goto label_2f24c0;
        case 0x2f24c4u: goto label_2f24c4;
        case 0x2f24c8u: goto label_2f24c8;
        case 0x2f24ccu: goto label_2f24cc;
        case 0x2f24d0u: goto label_2f24d0;
        case 0x2f24d4u: goto label_2f24d4;
        case 0x2f24d8u: goto label_2f24d8;
        case 0x2f24dcu: goto label_2f24dc;
        case 0x2f24e0u: goto label_2f24e0;
        case 0x2f24e4u: goto label_2f24e4;
        case 0x2f24e8u: goto label_2f24e8;
        case 0x2f24ecu: goto label_2f24ec;
        case 0x2f24f0u: goto label_2f24f0;
        case 0x2f24f4u: goto label_2f24f4;
        case 0x2f24f8u: goto label_2f24f8;
        case 0x2f24fcu: goto label_2f24fc;
        case 0x2f2500u: goto label_2f2500;
        case 0x2f2504u: goto label_2f2504;
        case 0x2f2508u: goto label_2f2508;
        case 0x2f250cu: goto label_2f250c;
        case 0x2f2510u: goto label_2f2510;
        case 0x2f2514u: goto label_2f2514;
        case 0x2f2518u: goto label_2f2518;
        case 0x2f251cu: goto label_2f251c;
        case 0x2f2520u: goto label_2f2520;
        case 0x2f2524u: goto label_2f2524;
        case 0x2f2528u: goto label_2f2528;
        case 0x2f252cu: goto label_2f252c;
        case 0x2f2530u: goto label_2f2530;
        case 0x2f2534u: goto label_2f2534;
        case 0x2f2538u: goto label_2f2538;
        case 0x2f253cu: goto label_2f253c;
        case 0x2f2540u: goto label_2f2540;
        case 0x2f2544u: goto label_2f2544;
        case 0x2f2548u: goto label_2f2548;
        case 0x2f254cu: goto label_2f254c;
        case 0x2f2550u: goto label_2f2550;
        case 0x2f2554u: goto label_2f2554;
        case 0x2f2558u: goto label_2f2558;
        case 0x2f255cu: goto label_2f255c;
        case 0x2f2560u: goto label_2f2560;
        case 0x2f2564u: goto label_2f2564;
        case 0x2f2568u: goto label_2f2568;
        case 0x2f256cu: goto label_2f256c;
        case 0x2f2570u: goto label_2f2570;
        case 0x2f2574u: goto label_2f2574;
        case 0x2f2578u: goto label_2f2578;
        case 0x2f257cu: goto label_2f257c;
        case 0x2f2580u: goto label_2f2580;
        case 0x2f2584u: goto label_2f2584;
        case 0x2f2588u: goto label_2f2588;
        case 0x2f258cu: goto label_2f258c;
        case 0x2f2590u: goto label_2f2590;
        case 0x2f2594u: goto label_2f2594;
        case 0x2f2598u: goto label_2f2598;
        case 0x2f259cu: goto label_2f259c;
        case 0x2f25a0u: goto label_2f25a0;
        case 0x2f25a4u: goto label_2f25a4;
        case 0x2f25a8u: goto label_2f25a8;
        case 0x2f25acu: goto label_2f25ac;
        case 0x2f25b0u: goto label_2f25b0;
        case 0x2f25b4u: goto label_2f25b4;
        case 0x2f25b8u: goto label_2f25b8;
        case 0x2f25bcu: goto label_2f25bc;
        case 0x2f25c0u: goto label_2f25c0;
        case 0x2f25c4u: goto label_2f25c4;
        case 0x2f25c8u: goto label_2f25c8;
        case 0x2f25ccu: goto label_2f25cc;
        case 0x2f25d0u: goto label_2f25d0;
        case 0x2f25d4u: goto label_2f25d4;
        case 0x2f25d8u: goto label_2f25d8;
        case 0x2f25dcu: goto label_2f25dc;
        case 0x2f25e0u: goto label_2f25e0;
        case 0x2f25e4u: goto label_2f25e4;
        case 0x2f25e8u: goto label_2f25e8;
        case 0x2f25ecu: goto label_2f25ec;
        case 0x2f25f0u: goto label_2f25f0;
        case 0x2f25f4u: goto label_2f25f4;
        case 0x2f25f8u: goto label_2f25f8;
        case 0x2f25fcu: goto label_2f25fc;
        case 0x2f2600u: goto label_2f2600;
        case 0x2f2604u: goto label_2f2604;
        case 0x2f2608u: goto label_2f2608;
        case 0x2f260cu: goto label_2f260c;
        case 0x2f2610u: goto label_2f2610;
        case 0x2f2614u: goto label_2f2614;
        case 0x2f2618u: goto label_2f2618;
        case 0x2f261cu: goto label_2f261c;
        case 0x2f2620u: goto label_2f2620;
        case 0x2f2624u: goto label_2f2624;
        case 0x2f2628u: goto label_2f2628;
        case 0x2f262cu: goto label_2f262c;
        case 0x2f2630u: goto label_2f2630;
        case 0x2f2634u: goto label_2f2634;
        case 0x2f2638u: goto label_2f2638;
        case 0x2f263cu: goto label_2f263c;
        case 0x2f2640u: goto label_2f2640;
        case 0x2f2644u: goto label_2f2644;
        case 0x2f2648u: goto label_2f2648;
        case 0x2f264cu: goto label_2f264c;
        case 0x2f2650u: goto label_2f2650;
        case 0x2f2654u: goto label_2f2654;
        case 0x2f2658u: goto label_2f2658;
        case 0x2f265cu: goto label_2f265c;
        case 0x2f2660u: goto label_2f2660;
        case 0x2f2664u: goto label_2f2664;
        case 0x2f2668u: goto label_2f2668;
        case 0x2f266cu: goto label_2f266c;
        case 0x2f2670u: goto label_2f2670;
        case 0x2f2674u: goto label_2f2674;
        case 0x2f2678u: goto label_2f2678;
        case 0x2f267cu: goto label_2f267c;
        case 0x2f2680u: goto label_2f2680;
        case 0x2f2684u: goto label_2f2684;
        case 0x2f2688u: goto label_2f2688;
        case 0x2f268cu: goto label_2f268c;
        case 0x2f2690u: goto label_2f2690;
        case 0x2f2694u: goto label_2f2694;
        case 0x2f2698u: goto label_2f2698;
        case 0x2f269cu: goto label_2f269c;
        case 0x2f26a0u: goto label_2f26a0;
        case 0x2f26a4u: goto label_2f26a4;
        case 0x2f26a8u: goto label_2f26a8;
        case 0x2f26acu: goto label_2f26ac;
        case 0x2f26b0u: goto label_2f26b0;
        case 0x2f26b4u: goto label_2f26b4;
        case 0x2f26b8u: goto label_2f26b8;
        case 0x2f26bcu: goto label_2f26bc;
        case 0x2f26c0u: goto label_2f26c0;
        case 0x2f26c4u: goto label_2f26c4;
        case 0x2f26c8u: goto label_2f26c8;
        case 0x2f26ccu: goto label_2f26cc;
        case 0x2f26d0u: goto label_2f26d0;
        case 0x2f26d4u: goto label_2f26d4;
        case 0x2f26d8u: goto label_2f26d8;
        case 0x2f26dcu: goto label_2f26dc;
        case 0x2f26e0u: goto label_2f26e0;
        case 0x2f26e4u: goto label_2f26e4;
        case 0x2f26e8u: goto label_2f26e8;
        case 0x2f26ecu: goto label_2f26ec;
        case 0x2f26f0u: goto label_2f26f0;
        case 0x2f26f4u: goto label_2f26f4;
        case 0x2f26f8u: goto label_2f26f8;
        case 0x2f26fcu: goto label_2f26fc;
        case 0x2f2700u: goto label_2f2700;
        case 0x2f2704u: goto label_2f2704;
        case 0x2f2708u: goto label_2f2708;
        case 0x2f270cu: goto label_2f270c;
        case 0x2f2710u: goto label_2f2710;
        case 0x2f2714u: goto label_2f2714;
        case 0x2f2718u: goto label_2f2718;
        case 0x2f271cu: goto label_2f271c;
        case 0x2f2720u: goto label_2f2720;
        case 0x2f2724u: goto label_2f2724;
        case 0x2f2728u: goto label_2f2728;
        case 0x2f272cu: goto label_2f272c;
        case 0x2f2730u: goto label_2f2730;
        case 0x2f2734u: goto label_2f2734;
        case 0x2f2738u: goto label_2f2738;
        case 0x2f273cu: goto label_2f273c;
        case 0x2f2740u: goto label_2f2740;
        case 0x2f2744u: goto label_2f2744;
        case 0x2f2748u: goto label_2f2748;
        case 0x2f274cu: goto label_2f274c;
        case 0x2f2750u: goto label_2f2750;
        case 0x2f2754u: goto label_2f2754;
        case 0x2f2758u: goto label_2f2758;
        case 0x2f275cu: goto label_2f275c;
        case 0x2f2760u: goto label_2f2760;
        case 0x2f2764u: goto label_2f2764;
        case 0x2f2768u: goto label_2f2768;
        case 0x2f276cu: goto label_2f276c;
        case 0x2f2770u: goto label_2f2770;
        case 0x2f2774u: goto label_2f2774;
        case 0x2f2778u: goto label_2f2778;
        case 0x2f277cu: goto label_2f277c;
        case 0x2f2780u: goto label_2f2780;
        case 0x2f2784u: goto label_2f2784;
        case 0x2f2788u: goto label_2f2788;
        case 0x2f278cu: goto label_2f278c;
        case 0x2f2790u: goto label_2f2790;
        case 0x2f2794u: goto label_2f2794;
        case 0x2f2798u: goto label_2f2798;
        case 0x2f279cu: goto label_2f279c;
        case 0x2f27a0u: goto label_2f27a0;
        case 0x2f27a4u: goto label_2f27a4;
        case 0x2f27a8u: goto label_2f27a8;
        case 0x2f27acu: goto label_2f27ac;
        case 0x2f27b0u: goto label_2f27b0;
        case 0x2f27b4u: goto label_2f27b4;
        case 0x2f27b8u: goto label_2f27b8;
        case 0x2f27bcu: goto label_2f27bc;
        case 0x2f27c0u: goto label_2f27c0;
        case 0x2f27c4u: goto label_2f27c4;
        case 0x2f27c8u: goto label_2f27c8;
        case 0x2f27ccu: goto label_2f27cc;
        case 0x2f27d0u: goto label_2f27d0;
        case 0x2f27d4u: goto label_2f27d4;
        case 0x2f27d8u: goto label_2f27d8;
        case 0x2f27dcu: goto label_2f27dc;
        case 0x2f27e0u: goto label_2f27e0;
        case 0x2f27e4u: goto label_2f27e4;
        case 0x2f27e8u: goto label_2f27e8;
        case 0x2f27ecu: goto label_2f27ec;
        case 0x2f27f0u: goto label_2f27f0;
        case 0x2f27f4u: goto label_2f27f4;
        case 0x2f27f8u: goto label_2f27f8;
        case 0x2f27fcu: goto label_2f27fc;
        case 0x2f2800u: goto label_2f2800;
        case 0x2f2804u: goto label_2f2804;
        case 0x2f2808u: goto label_2f2808;
        case 0x2f280cu: goto label_2f280c;
        case 0x2f2810u: goto label_2f2810;
        case 0x2f2814u: goto label_2f2814;
        case 0x2f2818u: goto label_2f2818;
        case 0x2f281cu: goto label_2f281c;
        case 0x2f2820u: goto label_2f2820;
        case 0x2f2824u: goto label_2f2824;
        case 0x2f2828u: goto label_2f2828;
        case 0x2f282cu: goto label_2f282c;
        case 0x2f2830u: goto label_2f2830;
        case 0x2f2834u: goto label_2f2834;
        case 0x2f2838u: goto label_2f2838;
        case 0x2f283cu: goto label_2f283c;
        case 0x2f2840u: goto label_2f2840;
        case 0x2f2844u: goto label_2f2844;
        case 0x2f2848u: goto label_2f2848;
        case 0x2f284cu: goto label_2f284c;
        case 0x2f2850u: goto label_2f2850;
        case 0x2f2854u: goto label_2f2854;
        case 0x2f2858u: goto label_2f2858;
        case 0x2f285cu: goto label_2f285c;
        case 0x2f2860u: goto label_2f2860;
        case 0x2f2864u: goto label_2f2864;
        case 0x2f2868u: goto label_2f2868;
        case 0x2f286cu: goto label_2f286c;
        case 0x2f2870u: goto label_2f2870;
        case 0x2f2874u: goto label_2f2874;
        case 0x2f2878u: goto label_2f2878;
        case 0x2f287cu: goto label_2f287c;
        case 0x2f2880u: goto label_2f2880;
        case 0x2f2884u: goto label_2f2884;
        case 0x2f2888u: goto label_2f2888;
        case 0x2f288cu: goto label_2f288c;
        case 0x2f2890u: goto label_2f2890;
        case 0x2f2894u: goto label_2f2894;
        case 0x2f2898u: goto label_2f2898;
        case 0x2f289cu: goto label_2f289c;
        case 0x2f28a0u: goto label_2f28a0;
        case 0x2f28a4u: goto label_2f28a4;
        case 0x2f28a8u: goto label_2f28a8;
        case 0x2f28acu: goto label_2f28ac;
        case 0x2f28b0u: goto label_2f28b0;
        case 0x2f28b4u: goto label_2f28b4;
        case 0x2f28b8u: goto label_2f28b8;
        case 0x2f28bcu: goto label_2f28bc;
        case 0x2f28c0u: goto label_2f28c0;
        case 0x2f28c4u: goto label_2f28c4;
        case 0x2f28c8u: goto label_2f28c8;
        case 0x2f28ccu: goto label_2f28cc;
        case 0x2f28d0u: goto label_2f28d0;
        case 0x2f28d4u: goto label_2f28d4;
        case 0x2f28d8u: goto label_2f28d8;
        case 0x2f28dcu: goto label_2f28dc;
        case 0x2f28e0u: goto label_2f28e0;
        case 0x2f28e4u: goto label_2f28e4;
        case 0x2f28e8u: goto label_2f28e8;
        case 0x2f28ecu: goto label_2f28ec;
        case 0x2f28f0u: goto label_2f28f0;
        case 0x2f28f4u: goto label_2f28f4;
        case 0x2f28f8u: goto label_2f28f8;
        case 0x2f28fcu: goto label_2f28fc;
        case 0x2f2900u: goto label_2f2900;
        case 0x2f2904u: goto label_2f2904;
        case 0x2f2908u: goto label_2f2908;
        case 0x2f290cu: goto label_2f290c;
        case 0x2f2910u: goto label_2f2910;
        case 0x2f2914u: goto label_2f2914;
        case 0x2f2918u: goto label_2f2918;
        case 0x2f291cu: goto label_2f291c;
        case 0x2f2920u: goto label_2f2920;
        case 0x2f2924u: goto label_2f2924;
        case 0x2f2928u: goto label_2f2928;
        case 0x2f292cu: goto label_2f292c;
        case 0x2f2930u: goto label_2f2930;
        case 0x2f2934u: goto label_2f2934;
        case 0x2f2938u: goto label_2f2938;
        case 0x2f293cu: goto label_2f293c;
        case 0x2f2940u: goto label_2f2940;
        case 0x2f2944u: goto label_2f2944;
        case 0x2f2948u: goto label_2f2948;
        case 0x2f294cu: goto label_2f294c;
        case 0x2f2950u: goto label_2f2950;
        case 0x2f2954u: goto label_2f2954;
        case 0x2f2958u: goto label_2f2958;
        case 0x2f295cu: goto label_2f295c;
        case 0x2f2960u: goto label_2f2960;
        case 0x2f2964u: goto label_2f2964;
        case 0x2f2968u: goto label_2f2968;
        case 0x2f296cu: goto label_2f296c;
        case 0x2f2970u: goto label_2f2970;
        case 0x2f2974u: goto label_2f2974;
        case 0x2f2978u: goto label_2f2978;
        case 0x2f297cu: goto label_2f297c;
        case 0x2f2980u: goto label_2f2980;
        case 0x2f2984u: goto label_2f2984;
        case 0x2f2988u: goto label_2f2988;
        case 0x2f298cu: goto label_2f298c;
        case 0x2f2990u: goto label_2f2990;
        case 0x2f2994u: goto label_2f2994;
        case 0x2f2998u: goto label_2f2998;
        case 0x2f299cu: goto label_2f299c;
        case 0x2f29a0u: goto label_2f29a0;
        case 0x2f29a4u: goto label_2f29a4;
        case 0x2f29a8u: goto label_2f29a8;
        case 0x2f29acu: goto label_2f29ac;
        case 0x2f29b0u: goto label_2f29b0;
        case 0x2f29b4u: goto label_2f29b4;
        case 0x2f29b8u: goto label_2f29b8;
        case 0x2f29bcu: goto label_2f29bc;
        case 0x2f29c0u: goto label_2f29c0;
        case 0x2f29c4u: goto label_2f29c4;
        case 0x2f29c8u: goto label_2f29c8;
        case 0x2f29ccu: goto label_2f29cc;
        case 0x2f29d0u: goto label_2f29d0;
        case 0x2f29d4u: goto label_2f29d4;
        case 0x2f29d8u: goto label_2f29d8;
        case 0x2f29dcu: goto label_2f29dc;
        case 0x2f29e0u: goto label_2f29e0;
        case 0x2f29e4u: goto label_2f29e4;
        case 0x2f29e8u: goto label_2f29e8;
        case 0x2f29ecu: goto label_2f29ec;
        case 0x2f29f0u: goto label_2f29f0;
        case 0x2f29f4u: goto label_2f29f4;
        case 0x2f29f8u: goto label_2f29f8;
        case 0x2f29fcu: goto label_2f29fc;
        case 0x2f2a00u: goto label_2f2a00;
        case 0x2f2a04u: goto label_2f2a04;
        case 0x2f2a08u: goto label_2f2a08;
        case 0x2f2a0cu: goto label_2f2a0c;
        case 0x2f2a10u: goto label_2f2a10;
        case 0x2f2a14u: goto label_2f2a14;
        case 0x2f2a18u: goto label_2f2a18;
        case 0x2f2a1cu: goto label_2f2a1c;
        case 0x2f2a20u: goto label_2f2a20;
        case 0x2f2a24u: goto label_2f2a24;
        case 0x2f2a28u: goto label_2f2a28;
        case 0x2f2a2cu: goto label_2f2a2c;
        case 0x2f2a30u: goto label_2f2a30;
        case 0x2f2a34u: goto label_2f2a34;
        case 0x2f2a38u: goto label_2f2a38;
        case 0x2f2a3cu: goto label_2f2a3c;
        case 0x2f2a40u: goto label_2f2a40;
        case 0x2f2a44u: goto label_2f2a44;
        case 0x2f2a48u: goto label_2f2a48;
        case 0x2f2a4cu: goto label_2f2a4c;
        case 0x2f2a50u: goto label_2f2a50;
        case 0x2f2a54u: goto label_2f2a54;
        case 0x2f2a58u: goto label_2f2a58;
        case 0x2f2a5cu: goto label_2f2a5c;
        case 0x2f2a60u: goto label_2f2a60;
        case 0x2f2a64u: goto label_2f2a64;
        case 0x2f2a68u: goto label_2f2a68;
        case 0x2f2a6cu: goto label_2f2a6c;
        case 0x2f2a70u: goto label_2f2a70;
        case 0x2f2a74u: goto label_2f2a74;
        case 0x2f2a78u: goto label_2f2a78;
        case 0x2f2a7cu: goto label_2f2a7c;
        case 0x2f2a80u: goto label_2f2a80;
        case 0x2f2a84u: goto label_2f2a84;
        case 0x2f2a88u: goto label_2f2a88;
        case 0x2f2a8cu: goto label_2f2a8c;
        case 0x2f2a90u: goto label_2f2a90;
        case 0x2f2a94u: goto label_2f2a94;
        case 0x2f2a98u: goto label_2f2a98;
        case 0x2f2a9cu: goto label_2f2a9c;
        case 0x2f2aa0u: goto label_2f2aa0;
        case 0x2f2aa4u: goto label_2f2aa4;
        case 0x2f2aa8u: goto label_2f2aa8;
        case 0x2f2aacu: goto label_2f2aac;
        case 0x2f2ab0u: goto label_2f2ab0;
        case 0x2f2ab4u: goto label_2f2ab4;
        case 0x2f2ab8u: goto label_2f2ab8;
        case 0x2f2abcu: goto label_2f2abc;
        case 0x2f2ac0u: goto label_2f2ac0;
        case 0x2f2ac4u: goto label_2f2ac4;
        case 0x2f2ac8u: goto label_2f2ac8;
        case 0x2f2accu: goto label_2f2acc;
        case 0x2f2ad0u: goto label_2f2ad0;
        case 0x2f2ad4u: goto label_2f2ad4;
        case 0x2f2ad8u: goto label_2f2ad8;
        case 0x2f2adcu: goto label_2f2adc;
        case 0x2f2ae0u: goto label_2f2ae0;
        case 0x2f2ae4u: goto label_2f2ae4;
        case 0x2f2ae8u: goto label_2f2ae8;
        case 0x2f2aecu: goto label_2f2aec;
        case 0x2f2af0u: goto label_2f2af0;
        case 0x2f2af4u: goto label_2f2af4;
        case 0x2f2af8u: goto label_2f2af8;
        case 0x2f2afcu: goto label_2f2afc;
        case 0x2f2b00u: goto label_2f2b00;
        case 0x2f2b04u: goto label_2f2b04;
        case 0x2f2b08u: goto label_2f2b08;
        case 0x2f2b0cu: goto label_2f2b0c;
        case 0x2f2b10u: goto label_2f2b10;
        case 0x2f2b14u: goto label_2f2b14;
        case 0x2f2b18u: goto label_2f2b18;
        case 0x2f2b1cu: goto label_2f2b1c;
        case 0x2f2b20u: goto label_2f2b20;
        case 0x2f2b24u: goto label_2f2b24;
        case 0x2f2b28u: goto label_2f2b28;
        case 0x2f2b2cu: goto label_2f2b2c;
        case 0x2f2b30u: goto label_2f2b30;
        case 0x2f2b34u: goto label_2f2b34;
        case 0x2f2b38u: goto label_2f2b38;
        case 0x2f2b3cu: goto label_2f2b3c;
        case 0x2f2b40u: goto label_2f2b40;
        case 0x2f2b44u: goto label_2f2b44;
        case 0x2f2b48u: goto label_2f2b48;
        case 0x2f2b4cu: goto label_2f2b4c;
        case 0x2f2b50u: goto label_2f2b50;
        case 0x2f2b54u: goto label_2f2b54;
        case 0x2f2b58u: goto label_2f2b58;
        case 0x2f2b5cu: goto label_2f2b5c;
        case 0x2f2b60u: goto label_2f2b60;
        case 0x2f2b64u: goto label_2f2b64;
        case 0x2f2b68u: goto label_2f2b68;
        case 0x2f2b6cu: goto label_2f2b6c;
        case 0x2f2b70u: goto label_2f2b70;
        case 0x2f2b74u: goto label_2f2b74;
        case 0x2f2b78u: goto label_2f2b78;
        case 0x2f2b7cu: goto label_2f2b7c;
        case 0x2f2b80u: goto label_2f2b80;
        case 0x2f2b84u: goto label_2f2b84;
        case 0x2f2b88u: goto label_2f2b88;
        case 0x2f2b8cu: goto label_2f2b8c;
        case 0x2f2b90u: goto label_2f2b90;
        case 0x2f2b94u: goto label_2f2b94;
        case 0x2f2b98u: goto label_2f2b98;
        case 0x2f2b9cu: goto label_2f2b9c;
        case 0x2f2ba0u: goto label_2f2ba0;
        case 0x2f2ba4u: goto label_2f2ba4;
        case 0x2f2ba8u: goto label_2f2ba8;
        case 0x2f2bacu: goto label_2f2bac;
        case 0x2f2bb0u: goto label_2f2bb0;
        case 0x2f2bb4u: goto label_2f2bb4;
        case 0x2f2bb8u: goto label_2f2bb8;
        case 0x2f2bbcu: goto label_2f2bbc;
        case 0x2f2bc0u: goto label_2f2bc0;
        case 0x2f2bc4u: goto label_2f2bc4;
        case 0x2f2bc8u: goto label_2f2bc8;
        case 0x2f2bccu: goto label_2f2bcc;
        case 0x2f2bd0u: goto label_2f2bd0;
        case 0x2f2bd4u: goto label_2f2bd4;
        case 0x2f2bd8u: goto label_2f2bd8;
        case 0x2f2bdcu: goto label_2f2bdc;
        case 0x2f2be0u: goto label_2f2be0;
        case 0x2f2be4u: goto label_2f2be4;
        case 0x2f2be8u: goto label_2f2be8;
        case 0x2f2becu: goto label_2f2bec;
        case 0x2f2bf0u: goto label_2f2bf0;
        case 0x2f2bf4u: goto label_2f2bf4;
        case 0x2f2bf8u: goto label_2f2bf8;
        case 0x2f2bfcu: goto label_2f2bfc;
        case 0x2f2c00u: goto label_2f2c00;
        case 0x2f2c04u: goto label_2f2c04;
        case 0x2f2c08u: goto label_2f2c08;
        case 0x2f2c0cu: goto label_2f2c0c;
        case 0x2f2c10u: goto label_2f2c10;
        case 0x2f2c14u: goto label_2f2c14;
        case 0x2f2c18u: goto label_2f2c18;
        case 0x2f2c1cu: goto label_2f2c1c;
        case 0x2f2c20u: goto label_2f2c20;
        case 0x2f2c24u: goto label_2f2c24;
        case 0x2f2c28u: goto label_2f2c28;
        case 0x2f2c2cu: goto label_2f2c2c;
        case 0x2f2c30u: goto label_2f2c30;
        case 0x2f2c34u: goto label_2f2c34;
        case 0x2f2c38u: goto label_2f2c38;
        case 0x2f2c3cu: goto label_2f2c3c;
        case 0x2f2c40u: goto label_2f2c40;
        case 0x2f2c44u: goto label_2f2c44;
        case 0x2f2c48u: goto label_2f2c48;
        case 0x2f2c4cu: goto label_2f2c4c;
        case 0x2f2c50u: goto label_2f2c50;
        case 0x2f2c54u: goto label_2f2c54;
        case 0x2f2c58u: goto label_2f2c58;
        case 0x2f2c5cu: goto label_2f2c5c;
        case 0x2f2c60u: goto label_2f2c60;
        case 0x2f2c64u: goto label_2f2c64;
        case 0x2f2c68u: goto label_2f2c68;
        case 0x2f2c6cu: goto label_2f2c6c;
        case 0x2f2c70u: goto label_2f2c70;
        case 0x2f2c74u: goto label_2f2c74;
        case 0x2f2c78u: goto label_2f2c78;
        case 0x2f2c7cu: goto label_2f2c7c;
        case 0x2f2c80u: goto label_2f2c80;
        case 0x2f2c84u: goto label_2f2c84;
        case 0x2f2c88u: goto label_2f2c88;
        case 0x2f2c8cu: goto label_2f2c8c;
        case 0x2f2c90u: goto label_2f2c90;
        case 0x2f2c94u: goto label_2f2c94;
        case 0x2f2c98u: goto label_2f2c98;
        case 0x2f2c9cu: goto label_2f2c9c;
        case 0x2f2ca0u: goto label_2f2ca0;
        case 0x2f2ca4u: goto label_2f2ca4;
        case 0x2f2ca8u: goto label_2f2ca8;
        case 0x2f2cacu: goto label_2f2cac;
        case 0x2f2cb0u: goto label_2f2cb0;
        case 0x2f2cb4u: goto label_2f2cb4;
        case 0x2f2cb8u: goto label_2f2cb8;
        case 0x2f2cbcu: goto label_2f2cbc;
        case 0x2f2cc0u: goto label_2f2cc0;
        case 0x2f2cc4u: goto label_2f2cc4;
        case 0x2f2cc8u: goto label_2f2cc8;
        case 0x2f2cccu: goto label_2f2ccc;
        case 0x2f2cd0u: goto label_2f2cd0;
        case 0x2f2cd4u: goto label_2f2cd4;
        case 0x2f2cd8u: goto label_2f2cd8;
        case 0x2f2cdcu: goto label_2f2cdc;
        case 0x2f2ce0u: goto label_2f2ce0;
        case 0x2f2ce4u: goto label_2f2ce4;
        case 0x2f2ce8u: goto label_2f2ce8;
        case 0x2f2cecu: goto label_2f2cec;
        case 0x2f2cf0u: goto label_2f2cf0;
        case 0x2f2cf4u: goto label_2f2cf4;
        case 0x2f2cf8u: goto label_2f2cf8;
        case 0x2f2cfcu: goto label_2f2cfc;
        case 0x2f2d00u: goto label_2f2d00;
        case 0x2f2d04u: goto label_2f2d04;
        case 0x2f2d08u: goto label_2f2d08;
        case 0x2f2d0cu: goto label_2f2d0c;
        case 0x2f2d10u: goto label_2f2d10;
        case 0x2f2d14u: goto label_2f2d14;
        case 0x2f2d18u: goto label_2f2d18;
        case 0x2f2d1cu: goto label_2f2d1c;
        case 0x2f2d20u: goto label_2f2d20;
        case 0x2f2d24u: goto label_2f2d24;
        case 0x2f2d28u: goto label_2f2d28;
        case 0x2f2d2cu: goto label_2f2d2c;
        case 0x2f2d30u: goto label_2f2d30;
        case 0x2f2d34u: goto label_2f2d34;
        case 0x2f2d38u: goto label_2f2d38;
        case 0x2f2d3cu: goto label_2f2d3c;
        case 0x2f2d40u: goto label_2f2d40;
        case 0x2f2d44u: goto label_2f2d44;
        case 0x2f2d48u: goto label_2f2d48;
        case 0x2f2d4cu: goto label_2f2d4c;
        case 0x2f2d50u: goto label_2f2d50;
        case 0x2f2d54u: goto label_2f2d54;
        case 0x2f2d58u: goto label_2f2d58;
        case 0x2f2d5cu: goto label_2f2d5c;
        case 0x2f2d60u: goto label_2f2d60;
        case 0x2f2d64u: goto label_2f2d64;
        case 0x2f2d68u: goto label_2f2d68;
        case 0x2f2d6cu: goto label_2f2d6c;
        case 0x2f2d70u: goto label_2f2d70;
        case 0x2f2d74u: goto label_2f2d74;
        case 0x2f2d78u: goto label_2f2d78;
        case 0x2f2d7cu: goto label_2f2d7c;
        case 0x2f2d80u: goto label_2f2d80;
        case 0x2f2d84u: goto label_2f2d84;
        case 0x2f2d88u: goto label_2f2d88;
        case 0x2f2d8cu: goto label_2f2d8c;
        case 0x2f2d90u: goto label_2f2d90;
        case 0x2f2d94u: goto label_2f2d94;
        case 0x2f2d98u: goto label_2f2d98;
        case 0x2f2d9cu: goto label_2f2d9c;
        case 0x2f2da0u: goto label_2f2da0;
        case 0x2f2da4u: goto label_2f2da4;
        case 0x2f2da8u: goto label_2f2da8;
        case 0x2f2dacu: goto label_2f2dac;
        case 0x2f2db0u: goto label_2f2db0;
        case 0x2f2db4u: goto label_2f2db4;
        case 0x2f2db8u: goto label_2f2db8;
        case 0x2f2dbcu: goto label_2f2dbc;
        case 0x2f2dc0u: goto label_2f2dc0;
        case 0x2f2dc4u: goto label_2f2dc4;
        case 0x2f2dc8u: goto label_2f2dc8;
        case 0x2f2dccu: goto label_2f2dcc;
        case 0x2f2dd0u: goto label_2f2dd0;
        case 0x2f2dd4u: goto label_2f2dd4;
        case 0x2f2dd8u: goto label_2f2dd8;
        case 0x2f2ddcu: goto label_2f2ddc;
        case 0x2f2de0u: goto label_2f2de0;
        case 0x2f2de4u: goto label_2f2de4;
        case 0x2f2de8u: goto label_2f2de8;
        case 0x2f2decu: goto label_2f2dec;
        case 0x2f2df0u: goto label_2f2df0;
        case 0x2f2df4u: goto label_2f2df4;
        case 0x2f2df8u: goto label_2f2df8;
        case 0x2f2dfcu: goto label_2f2dfc;
        case 0x2f2e00u: goto label_2f2e00;
        case 0x2f2e04u: goto label_2f2e04;
        case 0x2f2e08u: goto label_2f2e08;
        case 0x2f2e0cu: goto label_2f2e0c;
        case 0x2f2e10u: goto label_2f2e10;
        case 0x2f2e14u: goto label_2f2e14;
        case 0x2f2e18u: goto label_2f2e18;
        case 0x2f2e1cu: goto label_2f2e1c;
        case 0x2f2e20u: goto label_2f2e20;
        case 0x2f2e24u: goto label_2f2e24;
        case 0x2f2e28u: goto label_2f2e28;
        case 0x2f2e2cu: goto label_2f2e2c;
        case 0x2f2e30u: goto label_2f2e30;
        case 0x2f2e34u: goto label_2f2e34;
        case 0x2f2e38u: goto label_2f2e38;
        case 0x2f2e3cu: goto label_2f2e3c;
        case 0x2f2e40u: goto label_2f2e40;
        case 0x2f2e44u: goto label_2f2e44;
        case 0x2f2e48u: goto label_2f2e48;
        case 0x2f2e4cu: goto label_2f2e4c;
        case 0x2f2e50u: goto label_2f2e50;
        case 0x2f2e54u: goto label_2f2e54;
        case 0x2f2e58u: goto label_2f2e58;
        case 0x2f2e5cu: goto label_2f2e5c;
        case 0x2f2e60u: goto label_2f2e60;
        case 0x2f2e64u: goto label_2f2e64;
        case 0x2f2e68u: goto label_2f2e68;
        case 0x2f2e6cu: goto label_2f2e6c;
        case 0x2f2e70u: goto label_2f2e70;
        case 0x2f2e74u: goto label_2f2e74;
        case 0x2f2e78u: goto label_2f2e78;
        case 0x2f2e7cu: goto label_2f2e7c;
        case 0x2f2e80u: goto label_2f2e80;
        case 0x2f2e84u: goto label_2f2e84;
        case 0x2f2e88u: goto label_2f2e88;
        case 0x2f2e8cu: goto label_2f2e8c;
        case 0x2f2e90u: goto label_2f2e90;
        case 0x2f2e94u: goto label_2f2e94;
        case 0x2f2e98u: goto label_2f2e98;
        case 0x2f2e9cu: goto label_2f2e9c;
        case 0x2f2ea0u: goto label_2f2ea0;
        case 0x2f2ea4u: goto label_2f2ea4;
        case 0x2f2ea8u: goto label_2f2ea8;
        case 0x2f2eacu: goto label_2f2eac;
        case 0x2f2eb0u: goto label_2f2eb0;
        case 0x2f2eb4u: goto label_2f2eb4;
        case 0x2f2eb8u: goto label_2f2eb8;
        case 0x2f2ebcu: goto label_2f2ebc;
        case 0x2f2ec0u: goto label_2f2ec0;
        case 0x2f2ec4u: goto label_2f2ec4;
        case 0x2f2ec8u: goto label_2f2ec8;
        case 0x2f2eccu: goto label_2f2ecc;
        case 0x2f2ed0u: goto label_2f2ed0;
        case 0x2f2ed4u: goto label_2f2ed4;
        case 0x2f2ed8u: goto label_2f2ed8;
        case 0x2f2edcu: goto label_2f2edc;
        case 0x2f2ee0u: goto label_2f2ee0;
        case 0x2f2ee4u: goto label_2f2ee4;
        case 0x2f2ee8u: goto label_2f2ee8;
        case 0x2f2eecu: goto label_2f2eec;
        case 0x2f2ef0u: goto label_2f2ef0;
        case 0x2f2ef4u: goto label_2f2ef4;
        case 0x2f2ef8u: goto label_2f2ef8;
        case 0x2f2efcu: goto label_2f2efc;
        case 0x2f2f00u: goto label_2f2f00;
        case 0x2f2f04u: goto label_2f2f04;
        case 0x2f2f08u: goto label_2f2f08;
        case 0x2f2f0cu: goto label_2f2f0c;
        case 0x2f2f10u: goto label_2f2f10;
        case 0x2f2f14u: goto label_2f2f14;
        case 0x2f2f18u: goto label_2f2f18;
        case 0x2f2f1cu: goto label_2f2f1c;
        case 0x2f2f20u: goto label_2f2f20;
        case 0x2f2f24u: goto label_2f2f24;
        case 0x2f2f28u: goto label_2f2f28;
        case 0x2f2f2cu: goto label_2f2f2c;
        case 0x2f2f30u: goto label_2f2f30;
        case 0x2f2f34u: goto label_2f2f34;
        case 0x2f2f38u: goto label_2f2f38;
        case 0x2f2f3cu: goto label_2f2f3c;
        case 0x2f2f40u: goto label_2f2f40;
        case 0x2f2f44u: goto label_2f2f44;
        case 0x2f2f48u: goto label_2f2f48;
        case 0x2f2f4cu: goto label_2f2f4c;
        case 0x2f2f50u: goto label_2f2f50;
        case 0x2f2f54u: goto label_2f2f54;
        case 0x2f2f58u: goto label_2f2f58;
        case 0x2f2f5cu: goto label_2f2f5c;
        case 0x2f2f60u: goto label_2f2f60;
        case 0x2f2f64u: goto label_2f2f64;
        case 0x2f2f68u: goto label_2f2f68;
        case 0x2f2f6cu: goto label_2f2f6c;
        case 0x2f2f70u: goto label_2f2f70;
        case 0x2f2f74u: goto label_2f2f74;
        case 0x2f2f78u: goto label_2f2f78;
        case 0x2f2f7cu: goto label_2f2f7c;
        case 0x2f2f80u: goto label_2f2f80;
        case 0x2f2f84u: goto label_2f2f84;
        case 0x2f2f88u: goto label_2f2f88;
        case 0x2f2f8cu: goto label_2f2f8c;
        case 0x2f2f90u: goto label_2f2f90;
        case 0x2f2f94u: goto label_2f2f94;
        case 0x2f2f98u: goto label_2f2f98;
        case 0x2f2f9cu: goto label_2f2f9c;
        case 0x2f2fa0u: goto label_2f2fa0;
        case 0x2f2fa4u: goto label_2f2fa4;
        case 0x2f2fa8u: goto label_2f2fa8;
        case 0x2f2facu: goto label_2f2fac;
        case 0x2f2fb0u: goto label_2f2fb0;
        case 0x2f2fb4u: goto label_2f2fb4;
        case 0x2f2fb8u: goto label_2f2fb8;
        case 0x2f2fbcu: goto label_2f2fbc;
        case 0x2f2fc0u: goto label_2f2fc0;
        case 0x2f2fc4u: goto label_2f2fc4;
        case 0x2f2fc8u: goto label_2f2fc8;
        case 0x2f2fccu: goto label_2f2fcc;
        case 0x2f2fd0u: goto label_2f2fd0;
        case 0x2f2fd4u: goto label_2f2fd4;
        case 0x2f2fd8u: goto label_2f2fd8;
        case 0x2f2fdcu: goto label_2f2fdc;
        case 0x2f2fe0u: goto label_2f2fe0;
        case 0x2f2fe4u: goto label_2f2fe4;
        case 0x2f2fe8u: goto label_2f2fe8;
        case 0x2f2fecu: goto label_2f2fec;
        case 0x2f2ff0u: goto label_2f2ff0;
        case 0x2f2ff4u: goto label_2f2ff4;
        case 0x2f2ff8u: goto label_2f2ff8;
        case 0x2f2ffcu: goto label_2f2ffc;
        case 0x2f3000u: goto label_2f3000;
        case 0x2f3004u: goto label_2f3004;
        case 0x2f3008u: goto label_2f3008;
        case 0x2f300cu: goto label_2f300c;
        case 0x2f3010u: goto label_2f3010;
        case 0x2f3014u: goto label_2f3014;
        case 0x2f3018u: goto label_2f3018;
        case 0x2f301cu: goto label_2f301c;
        case 0x2f3020u: goto label_2f3020;
        case 0x2f3024u: goto label_2f3024;
        case 0x2f3028u: goto label_2f3028;
        case 0x2f302cu: goto label_2f302c;
        case 0x2f3030u: goto label_2f3030;
        case 0x2f3034u: goto label_2f3034;
        case 0x2f3038u: goto label_2f3038;
        case 0x2f303cu: goto label_2f303c;
        case 0x2f3040u: goto label_2f3040;
        case 0x2f3044u: goto label_2f3044;
        case 0x2f3048u: goto label_2f3048;
        case 0x2f304cu: goto label_2f304c;
        case 0x2f3050u: goto label_2f3050;
        case 0x2f3054u: goto label_2f3054;
        case 0x2f3058u: goto label_2f3058;
        case 0x2f305cu: goto label_2f305c;
        case 0x2f3060u: goto label_2f3060;
        case 0x2f3064u: goto label_2f3064;
        case 0x2f3068u: goto label_2f3068;
        case 0x2f306cu: goto label_2f306c;
        case 0x2f3070u: goto label_2f3070;
        case 0x2f3074u: goto label_2f3074;
        case 0x2f3078u: goto label_2f3078;
        case 0x2f307cu: goto label_2f307c;
        case 0x2f3080u: goto label_2f3080;
        case 0x2f3084u: goto label_2f3084;
        case 0x2f3088u: goto label_2f3088;
        case 0x2f308cu: goto label_2f308c;
        case 0x2f3090u: goto label_2f3090;
        case 0x2f3094u: goto label_2f3094;
        case 0x2f3098u: goto label_2f3098;
        case 0x2f309cu: goto label_2f309c;
        case 0x2f30a0u: goto label_2f30a0;
        case 0x2f30a4u: goto label_2f30a4;
        case 0x2f30a8u: goto label_2f30a8;
        case 0x2f30acu: goto label_2f30ac;
        case 0x2f30b0u: goto label_2f30b0;
        case 0x2f30b4u: goto label_2f30b4;
        case 0x2f30b8u: goto label_2f30b8;
        case 0x2f30bcu: goto label_2f30bc;
        case 0x2f30c0u: goto label_2f30c0;
        case 0x2f30c4u: goto label_2f30c4;
        case 0x2f30c8u: goto label_2f30c8;
        case 0x2f30ccu: goto label_2f30cc;
        case 0x2f30d0u: goto label_2f30d0;
        case 0x2f30d4u: goto label_2f30d4;
        case 0x2f30d8u: goto label_2f30d8;
        case 0x2f30dcu: goto label_2f30dc;
        case 0x2f30e0u: goto label_2f30e0;
        case 0x2f30e4u: goto label_2f30e4;
        case 0x2f30e8u: goto label_2f30e8;
        case 0x2f30ecu: goto label_2f30ec;
        case 0x2f30f0u: goto label_2f30f0;
        case 0x2f30f4u: goto label_2f30f4;
        case 0x2f30f8u: goto label_2f30f8;
        case 0x2f30fcu: goto label_2f30fc;
        case 0x2f3100u: goto label_2f3100;
        case 0x2f3104u: goto label_2f3104;
        case 0x2f3108u: goto label_2f3108;
        case 0x2f310cu: goto label_2f310c;
        case 0x2f3110u: goto label_2f3110;
        case 0x2f3114u: goto label_2f3114;
        case 0x2f3118u: goto label_2f3118;
        case 0x2f311cu: goto label_2f311c;
        case 0x2f3120u: goto label_2f3120;
        case 0x2f3124u: goto label_2f3124;
        case 0x2f3128u: goto label_2f3128;
        case 0x2f312cu: goto label_2f312c;
        case 0x2f3130u: goto label_2f3130;
        case 0x2f3134u: goto label_2f3134;
        case 0x2f3138u: goto label_2f3138;
        case 0x2f313cu: goto label_2f313c;
        case 0x2f3140u: goto label_2f3140;
        case 0x2f3144u: goto label_2f3144;
        case 0x2f3148u: goto label_2f3148;
        case 0x2f314cu: goto label_2f314c;
        case 0x2f3150u: goto label_2f3150;
        case 0x2f3154u: goto label_2f3154;
        case 0x2f3158u: goto label_2f3158;
        case 0x2f315cu: goto label_2f315c;
        case 0x2f3160u: goto label_2f3160;
        case 0x2f3164u: goto label_2f3164;
        case 0x2f3168u: goto label_2f3168;
        case 0x2f316cu: goto label_2f316c;
        case 0x2f3170u: goto label_2f3170;
        case 0x2f3174u: goto label_2f3174;
        case 0x2f3178u: goto label_2f3178;
        case 0x2f317cu: goto label_2f317c;
        case 0x2f3180u: goto label_2f3180;
        case 0x2f3184u: goto label_2f3184;
        case 0x2f3188u: goto label_2f3188;
        case 0x2f318cu: goto label_2f318c;
        case 0x2f3190u: goto label_2f3190;
        case 0x2f3194u: goto label_2f3194;
        case 0x2f3198u: goto label_2f3198;
        case 0x2f319cu: goto label_2f319c;
        case 0x2f31a0u: goto label_2f31a0;
        case 0x2f31a4u: goto label_2f31a4;
        case 0x2f31a8u: goto label_2f31a8;
        case 0x2f31acu: goto label_2f31ac;
        case 0x2f31b0u: goto label_2f31b0;
        case 0x2f31b4u: goto label_2f31b4;
        case 0x2f31b8u: goto label_2f31b8;
        case 0x2f31bcu: goto label_2f31bc;
        case 0x2f31c0u: goto label_2f31c0;
        case 0x2f31c4u: goto label_2f31c4;
        case 0x2f31c8u: goto label_2f31c8;
        case 0x2f31ccu: goto label_2f31cc;
        case 0x2f31d0u: goto label_2f31d0;
        case 0x2f31d4u: goto label_2f31d4;
        case 0x2f31d8u: goto label_2f31d8;
        case 0x2f31dcu: goto label_2f31dc;
        case 0x2f31e0u: goto label_2f31e0;
        case 0x2f31e4u: goto label_2f31e4;
        case 0x2f31e8u: goto label_2f31e8;
        case 0x2f31ecu: goto label_2f31ec;
        case 0x2f31f0u: goto label_2f31f0;
        case 0x2f31f4u: goto label_2f31f4;
        case 0x2f31f8u: goto label_2f31f8;
        case 0x2f31fcu: goto label_2f31fc;
        case 0x2f3200u: goto label_2f3200;
        case 0x2f3204u: goto label_2f3204;
        case 0x2f3208u: goto label_2f3208;
        case 0x2f320cu: goto label_2f320c;
        case 0x2f3210u: goto label_2f3210;
        case 0x2f3214u: goto label_2f3214;
        case 0x2f3218u: goto label_2f3218;
        case 0x2f321cu: goto label_2f321c;
        case 0x2f3220u: goto label_2f3220;
        case 0x2f3224u: goto label_2f3224;
        case 0x2f3228u: goto label_2f3228;
        case 0x2f322cu: goto label_2f322c;
        case 0x2f3230u: goto label_2f3230;
        case 0x2f3234u: goto label_2f3234;
        case 0x2f3238u: goto label_2f3238;
        case 0x2f323cu: goto label_2f323c;
        case 0x2f3240u: goto label_2f3240;
        case 0x2f3244u: goto label_2f3244;
        case 0x2f3248u: goto label_2f3248;
        case 0x2f324cu: goto label_2f324c;
        case 0x2f3250u: goto label_2f3250;
        case 0x2f3254u: goto label_2f3254;
        case 0x2f3258u: goto label_2f3258;
        case 0x2f325cu: goto label_2f325c;
        case 0x2f3260u: goto label_2f3260;
        case 0x2f3264u: goto label_2f3264;
        case 0x2f3268u: goto label_2f3268;
        case 0x2f326cu: goto label_2f326c;
        case 0x2f3270u: goto label_2f3270;
        case 0x2f3274u: goto label_2f3274;
        case 0x2f3278u: goto label_2f3278;
        case 0x2f327cu: goto label_2f327c;
        case 0x2f3280u: goto label_2f3280;
        case 0x2f3284u: goto label_2f3284;
        case 0x2f3288u: goto label_2f3288;
        case 0x2f328cu: goto label_2f328c;
        case 0x2f3290u: goto label_2f3290;
        case 0x2f3294u: goto label_2f3294;
        case 0x2f3298u: goto label_2f3298;
        case 0x2f329cu: goto label_2f329c;
        case 0x2f32a0u: goto label_2f32a0;
        case 0x2f32a4u: goto label_2f32a4;
        case 0x2f32a8u: goto label_2f32a8;
        case 0x2f32acu: goto label_2f32ac;
        case 0x2f32b0u: goto label_2f32b0;
        case 0x2f32b4u: goto label_2f32b4;
        case 0x2f32b8u: goto label_2f32b8;
        case 0x2f32bcu: goto label_2f32bc;
        case 0x2f32c0u: goto label_2f32c0;
        case 0x2f32c4u: goto label_2f32c4;
        case 0x2f32c8u: goto label_2f32c8;
        case 0x2f32ccu: goto label_2f32cc;
        case 0x2f32d0u: goto label_2f32d0;
        case 0x2f32d4u: goto label_2f32d4;
        case 0x2f32d8u: goto label_2f32d8;
        case 0x2f32dcu: goto label_2f32dc;
        case 0x2f32e0u: goto label_2f32e0;
        case 0x2f32e4u: goto label_2f32e4;
        case 0x2f32e8u: goto label_2f32e8;
        case 0x2f32ecu: goto label_2f32ec;
        case 0x2f32f0u: goto label_2f32f0;
        case 0x2f32f4u: goto label_2f32f4;
        case 0x2f32f8u: goto label_2f32f8;
        case 0x2f32fcu: goto label_2f32fc;
        case 0x2f3300u: goto label_2f3300;
        case 0x2f3304u: goto label_2f3304;
        case 0x2f3308u: goto label_2f3308;
        case 0x2f330cu: goto label_2f330c;
        case 0x2f3310u: goto label_2f3310;
        case 0x2f3314u: goto label_2f3314;
        case 0x2f3318u: goto label_2f3318;
        case 0x2f331cu: goto label_2f331c;
        case 0x2f3320u: goto label_2f3320;
        case 0x2f3324u: goto label_2f3324;
        case 0x2f3328u: goto label_2f3328;
        case 0x2f332cu: goto label_2f332c;
        case 0x2f3330u: goto label_2f3330;
        case 0x2f3334u: goto label_2f3334;
        case 0x2f3338u: goto label_2f3338;
        case 0x2f333cu: goto label_2f333c;
        case 0x2f3340u: goto label_2f3340;
        case 0x2f3344u: goto label_2f3344;
        case 0x2f3348u: goto label_2f3348;
        case 0x2f334cu: goto label_2f334c;
        case 0x2f3350u: goto label_2f3350;
        case 0x2f3354u: goto label_2f3354;
        case 0x2f3358u: goto label_2f3358;
        case 0x2f335cu: goto label_2f335c;
        case 0x2f3360u: goto label_2f3360;
        case 0x2f3364u: goto label_2f3364;
        case 0x2f3368u: goto label_2f3368;
        case 0x2f336cu: goto label_2f336c;
        case 0x2f3370u: goto label_2f3370;
        case 0x2f3374u: goto label_2f3374;
        case 0x2f3378u: goto label_2f3378;
        case 0x2f337cu: goto label_2f337c;
        case 0x2f3380u: goto label_2f3380;
        case 0x2f3384u: goto label_2f3384;
        case 0x2f3388u: goto label_2f3388;
        case 0x2f338cu: goto label_2f338c;
        case 0x2f3390u: goto label_2f3390;
        case 0x2f3394u: goto label_2f3394;
        case 0x2f3398u: goto label_2f3398;
        case 0x2f339cu: goto label_2f339c;
        case 0x2f33a0u: goto label_2f33a0;
        case 0x2f33a4u: goto label_2f33a4;
        case 0x2f33a8u: goto label_2f33a8;
        case 0x2f33acu: goto label_2f33ac;
        case 0x2f33b0u: goto label_2f33b0;
        case 0x2f33b4u: goto label_2f33b4;
        case 0x2f33b8u: goto label_2f33b8;
        case 0x2f33bcu: goto label_2f33bc;
        case 0x2f33c0u: goto label_2f33c0;
        case 0x2f33c4u: goto label_2f33c4;
        case 0x2f33c8u: goto label_2f33c8;
        case 0x2f33ccu: goto label_2f33cc;
        case 0x2f33d0u: goto label_2f33d0;
        case 0x2f33d4u: goto label_2f33d4;
        case 0x2f33d8u: goto label_2f33d8;
        case 0x2f33dcu: goto label_2f33dc;
        case 0x2f33e0u: goto label_2f33e0;
        case 0x2f33e4u: goto label_2f33e4;
        case 0x2f33e8u: goto label_2f33e8;
        case 0x2f33ecu: goto label_2f33ec;
        case 0x2f33f0u: goto label_2f33f0;
        case 0x2f33f4u: goto label_2f33f4;
        case 0x2f33f8u: goto label_2f33f8;
        case 0x2f33fcu: goto label_2f33fc;
        case 0x2f3400u: goto label_2f3400;
        case 0x2f3404u: goto label_2f3404;
        case 0x2f3408u: goto label_2f3408;
        case 0x2f340cu: goto label_2f340c;
        case 0x2f3410u: goto label_2f3410;
        case 0x2f3414u: goto label_2f3414;
        case 0x2f3418u: goto label_2f3418;
        case 0x2f341cu: goto label_2f341c;
        case 0x2f3420u: goto label_2f3420;
        case 0x2f3424u: goto label_2f3424;
        case 0x2f3428u: goto label_2f3428;
        case 0x2f342cu: goto label_2f342c;
        case 0x2f3430u: goto label_2f3430;
        case 0x2f3434u: goto label_2f3434;
        case 0x2f3438u: goto label_2f3438;
        case 0x2f343cu: goto label_2f343c;
        case 0x2f3440u: goto label_2f3440;
        case 0x2f3444u: goto label_2f3444;
        case 0x2f3448u: goto label_2f3448;
        case 0x2f344cu: goto label_2f344c;
        case 0x2f3450u: goto label_2f3450;
        case 0x2f3454u: goto label_2f3454;
        case 0x2f3458u: goto label_2f3458;
        case 0x2f345cu: goto label_2f345c;
        case 0x2f3460u: goto label_2f3460;
        case 0x2f3464u: goto label_2f3464;
        case 0x2f3468u: goto label_2f3468;
        case 0x2f346cu: goto label_2f346c;
        case 0x2f3470u: goto label_2f3470;
        case 0x2f3474u: goto label_2f3474;
        case 0x2f3478u: goto label_2f3478;
        case 0x2f347cu: goto label_2f347c;
        case 0x2f3480u: goto label_2f3480;
        case 0x2f3484u: goto label_2f3484;
        case 0x2f3488u: goto label_2f3488;
        case 0x2f348cu: goto label_2f348c;
        case 0x2f3490u: goto label_2f3490;
        case 0x2f3494u: goto label_2f3494;
        case 0x2f3498u: goto label_2f3498;
        case 0x2f349cu: goto label_2f349c;
        case 0x2f34a0u: goto label_2f34a0;
        case 0x2f34a4u: goto label_2f34a4;
        case 0x2f34a8u: goto label_2f34a8;
        case 0x2f34acu: goto label_2f34ac;
        case 0x2f34b0u: goto label_2f34b0;
        case 0x2f34b4u: goto label_2f34b4;
        case 0x2f34b8u: goto label_2f34b8;
        case 0x2f34bcu: goto label_2f34bc;
        case 0x2f34c0u: goto label_2f34c0;
        case 0x2f34c4u: goto label_2f34c4;
        case 0x2f34c8u: goto label_2f34c8;
        case 0x2f34ccu: goto label_2f34cc;
        case 0x2f34d0u: goto label_2f34d0;
        case 0x2f34d4u: goto label_2f34d4;
        case 0x2f34d8u: goto label_2f34d8;
        case 0x2f34dcu: goto label_2f34dc;
        case 0x2f34e0u: goto label_2f34e0;
        case 0x2f34e4u: goto label_2f34e4;
        case 0x2f34e8u: goto label_2f34e8;
        case 0x2f34ecu: goto label_2f34ec;
        case 0x2f34f0u: goto label_2f34f0;
        case 0x2f34f4u: goto label_2f34f4;
        case 0x2f34f8u: goto label_2f34f8;
        case 0x2f34fcu: goto label_2f34fc;
        case 0x2f3500u: goto label_2f3500;
        case 0x2f3504u: goto label_2f3504;
        case 0x2f3508u: goto label_2f3508;
        case 0x2f350cu: goto label_2f350c;
        case 0x2f3510u: goto label_2f3510;
        case 0x2f3514u: goto label_2f3514;
        case 0x2f3518u: goto label_2f3518;
        case 0x2f351cu: goto label_2f351c;
        case 0x2f3520u: goto label_2f3520;
        case 0x2f3524u: goto label_2f3524;
        case 0x2f3528u: goto label_2f3528;
        case 0x2f352cu: goto label_2f352c;
        case 0x2f3530u: goto label_2f3530;
        case 0x2f3534u: goto label_2f3534;
        case 0x2f3538u: goto label_2f3538;
        case 0x2f353cu: goto label_2f353c;
        case 0x2f3540u: goto label_2f3540;
        case 0x2f3544u: goto label_2f3544;
        case 0x2f3548u: goto label_2f3548;
        case 0x2f354cu: goto label_2f354c;
        case 0x2f3550u: goto label_2f3550;
        case 0x2f3554u: goto label_2f3554;
        case 0x2f3558u: goto label_2f3558;
        case 0x2f355cu: goto label_2f355c;
        case 0x2f3560u: goto label_2f3560;
        case 0x2f3564u: goto label_2f3564;
        case 0x2f3568u: goto label_2f3568;
        case 0x2f356cu: goto label_2f356c;
        case 0x2f3570u: goto label_2f3570;
        case 0x2f3574u: goto label_2f3574;
        case 0x2f3578u: goto label_2f3578;
        case 0x2f357cu: goto label_2f357c;
        case 0x2f3580u: goto label_2f3580;
        case 0x2f3584u: goto label_2f3584;
        case 0x2f3588u: goto label_2f3588;
        case 0x2f358cu: goto label_2f358c;
        case 0x2f3590u: goto label_2f3590;
        case 0x2f3594u: goto label_2f3594;
        case 0x2f3598u: goto label_2f3598;
        case 0x2f359cu: goto label_2f359c;
        case 0x2f35a0u: goto label_2f35a0;
        case 0x2f35a4u: goto label_2f35a4;
        case 0x2f35a8u: goto label_2f35a8;
        case 0x2f35acu: goto label_2f35ac;
        case 0x2f35b0u: goto label_2f35b0;
        case 0x2f35b4u: goto label_2f35b4;
        case 0x2f35b8u: goto label_2f35b8;
        case 0x2f35bcu: goto label_2f35bc;
        case 0x2f35c0u: goto label_2f35c0;
        case 0x2f35c4u: goto label_2f35c4;
        case 0x2f35c8u: goto label_2f35c8;
        case 0x2f35ccu: goto label_2f35cc;
        case 0x2f35d0u: goto label_2f35d0;
        case 0x2f35d4u: goto label_2f35d4;
        case 0x2f35d8u: goto label_2f35d8;
        case 0x2f35dcu: goto label_2f35dc;
        case 0x2f35e0u: goto label_2f35e0;
        case 0x2f35e4u: goto label_2f35e4;
        case 0x2f35e8u: goto label_2f35e8;
        case 0x2f35ecu: goto label_2f35ec;
        case 0x2f35f0u: goto label_2f35f0;
        case 0x2f35f4u: goto label_2f35f4;
        case 0x2f35f8u: goto label_2f35f8;
        case 0x2f35fcu: goto label_2f35fc;
        case 0x2f3600u: goto label_2f3600;
        case 0x2f3604u: goto label_2f3604;
        case 0x2f3608u: goto label_2f3608;
        case 0x2f360cu: goto label_2f360c;
        case 0x2f3610u: goto label_2f3610;
        case 0x2f3614u: goto label_2f3614;
        case 0x2f3618u: goto label_2f3618;
        case 0x2f361cu: goto label_2f361c;
        case 0x2f3620u: goto label_2f3620;
        case 0x2f3624u: goto label_2f3624;
        case 0x2f3628u: goto label_2f3628;
        case 0x2f362cu: goto label_2f362c;
        case 0x2f3630u: goto label_2f3630;
        case 0x2f3634u: goto label_2f3634;
        case 0x2f3638u: goto label_2f3638;
        case 0x2f363cu: goto label_2f363c;
        case 0x2f3640u: goto label_2f3640;
        case 0x2f3644u: goto label_2f3644;
        case 0x2f3648u: goto label_2f3648;
        case 0x2f364cu: goto label_2f364c;
        case 0x2f3650u: goto label_2f3650;
        case 0x2f3654u: goto label_2f3654;
        case 0x2f3658u: goto label_2f3658;
        case 0x2f365cu: goto label_2f365c;
        case 0x2f3660u: goto label_2f3660;
        case 0x2f3664u: goto label_2f3664;
        case 0x2f3668u: goto label_2f3668;
        case 0x2f366cu: goto label_2f366c;
        case 0x2f3670u: goto label_2f3670;
        case 0x2f3674u: goto label_2f3674;
        case 0x2f3678u: goto label_2f3678;
        case 0x2f367cu: goto label_2f367c;
        case 0x2f3680u: goto label_2f3680;
        case 0x2f3684u: goto label_2f3684;
        case 0x2f3688u: goto label_2f3688;
        case 0x2f368cu: goto label_2f368c;
        case 0x2f3690u: goto label_2f3690;
        case 0x2f3694u: goto label_2f3694;
        case 0x2f3698u: goto label_2f3698;
        case 0x2f369cu: goto label_2f369c;
        case 0x2f36a0u: goto label_2f36a0;
        case 0x2f36a4u: goto label_2f36a4;
        case 0x2f36a8u: goto label_2f36a8;
        case 0x2f36acu: goto label_2f36ac;
        case 0x2f36b0u: goto label_2f36b0;
        case 0x2f36b4u: goto label_2f36b4;
        case 0x2f36b8u: goto label_2f36b8;
        case 0x2f36bcu: goto label_2f36bc;
        case 0x2f36c0u: goto label_2f36c0;
        case 0x2f36c4u: goto label_2f36c4;
        case 0x2f36c8u: goto label_2f36c8;
        case 0x2f36ccu: goto label_2f36cc;
        case 0x2f36d0u: goto label_2f36d0;
        case 0x2f36d4u: goto label_2f36d4;
        case 0x2f36d8u: goto label_2f36d8;
        case 0x2f36dcu: goto label_2f36dc;
        case 0x2f36e0u: goto label_2f36e0;
        case 0x2f36e4u: goto label_2f36e4;
        case 0x2f36e8u: goto label_2f36e8;
        case 0x2f36ecu: goto label_2f36ec;
        case 0x2f36f0u: goto label_2f36f0;
        case 0x2f36f4u: goto label_2f36f4;
        case 0x2f36f8u: goto label_2f36f8;
        case 0x2f36fcu: goto label_2f36fc;
        case 0x2f3700u: goto label_2f3700;
        case 0x2f3704u: goto label_2f3704;
        case 0x2f3708u: goto label_2f3708;
        case 0x2f370cu: goto label_2f370c;
        case 0x2f3710u: goto label_2f3710;
        case 0x2f3714u: goto label_2f3714;
        case 0x2f3718u: goto label_2f3718;
        case 0x2f371cu: goto label_2f371c;
        case 0x2f3720u: goto label_2f3720;
        case 0x2f3724u: goto label_2f3724;
        case 0x2f3728u: goto label_2f3728;
        case 0x2f372cu: goto label_2f372c;
        case 0x2f3730u: goto label_2f3730;
        case 0x2f3734u: goto label_2f3734;
        case 0x2f3738u: goto label_2f3738;
        case 0x2f373cu: goto label_2f373c;
        case 0x2f3740u: goto label_2f3740;
        case 0x2f3744u: goto label_2f3744;
        case 0x2f3748u: goto label_2f3748;
        case 0x2f374cu: goto label_2f374c;
        case 0x2f3750u: goto label_2f3750;
        case 0x2f3754u: goto label_2f3754;
        case 0x2f3758u: goto label_2f3758;
        case 0x2f375cu: goto label_2f375c;
        case 0x2f3760u: goto label_2f3760;
        case 0x2f3764u: goto label_2f3764;
        case 0x2f3768u: goto label_2f3768;
        case 0x2f376cu: goto label_2f376c;
        case 0x2f3770u: goto label_2f3770;
        case 0x2f3774u: goto label_2f3774;
        case 0x2f3778u: goto label_2f3778;
        case 0x2f377cu: goto label_2f377c;
        case 0x2f3780u: goto label_2f3780;
        case 0x2f3784u: goto label_2f3784;
        case 0x2f3788u: goto label_2f3788;
        case 0x2f378cu: goto label_2f378c;
        case 0x2f3790u: goto label_2f3790;
        case 0x2f3794u: goto label_2f3794;
        case 0x2f3798u: goto label_2f3798;
        case 0x2f379cu: goto label_2f379c;
        case 0x2f37a0u: goto label_2f37a0;
        case 0x2f37a4u: goto label_2f37a4;
        case 0x2f37a8u: goto label_2f37a8;
        case 0x2f37acu: goto label_2f37ac;
        case 0x2f37b0u: goto label_2f37b0;
        case 0x2f37b4u: goto label_2f37b4;
        case 0x2f37b8u: goto label_2f37b8;
        case 0x2f37bcu: goto label_2f37bc;
        case 0x2f37c0u: goto label_2f37c0;
        case 0x2f37c4u: goto label_2f37c4;
        case 0x2f37c8u: goto label_2f37c8;
        case 0x2f37ccu: goto label_2f37cc;
        case 0x2f37d0u: goto label_2f37d0;
        case 0x2f37d4u: goto label_2f37d4;
        case 0x2f37d8u: goto label_2f37d8;
        case 0x2f37dcu: goto label_2f37dc;
        case 0x2f37e0u: goto label_2f37e0;
        case 0x2f37e4u: goto label_2f37e4;
        case 0x2f37e8u: goto label_2f37e8;
        case 0x2f37ecu: goto label_2f37ec;
        case 0x2f37f0u: goto label_2f37f0;
        case 0x2f37f4u: goto label_2f37f4;
        case 0x2f37f8u: goto label_2f37f8;
        case 0x2f37fcu: goto label_2f37fc;
        case 0x2f3800u: goto label_2f3800;
        case 0x2f3804u: goto label_2f3804;
        case 0x2f3808u: goto label_2f3808;
        case 0x2f380cu: goto label_2f380c;
        case 0x2f3810u: goto label_2f3810;
        case 0x2f3814u: goto label_2f3814;
        case 0x2f3818u: goto label_2f3818;
        case 0x2f381cu: goto label_2f381c;
        case 0x2f3820u: goto label_2f3820;
        case 0x2f3824u: goto label_2f3824;
        case 0x2f3828u: goto label_2f3828;
        case 0x2f382cu: goto label_2f382c;
        case 0x2f3830u: goto label_2f3830;
        case 0x2f3834u: goto label_2f3834;
        case 0x2f3838u: goto label_2f3838;
        case 0x2f383cu: goto label_2f383c;
        case 0x2f3840u: goto label_2f3840;
        case 0x2f3844u: goto label_2f3844;
        case 0x2f3848u: goto label_2f3848;
        case 0x2f384cu: goto label_2f384c;
        case 0x2f3850u: goto label_2f3850;
        case 0x2f3854u: goto label_2f3854;
        case 0x2f3858u: goto label_2f3858;
        case 0x2f385cu: goto label_2f385c;
        case 0x2f3860u: goto label_2f3860;
        case 0x2f3864u: goto label_2f3864;
        case 0x2f3868u: goto label_2f3868;
        case 0x2f386cu: goto label_2f386c;
        case 0x2f3870u: goto label_2f3870;
        case 0x2f3874u: goto label_2f3874;
        case 0x2f3878u: goto label_2f3878;
        case 0x2f387cu: goto label_2f387c;
        case 0x2f3880u: goto label_2f3880;
        case 0x2f3884u: goto label_2f3884;
        case 0x2f3888u: goto label_2f3888;
        case 0x2f388cu: goto label_2f388c;
        case 0x2f3890u: goto label_2f3890;
        case 0x2f3894u: goto label_2f3894;
        case 0x2f3898u: goto label_2f3898;
        case 0x2f389cu: goto label_2f389c;
        case 0x2f38a0u: goto label_2f38a0;
        case 0x2f38a4u: goto label_2f38a4;
        case 0x2f38a8u: goto label_2f38a8;
        case 0x2f38acu: goto label_2f38ac;
        case 0x2f38b0u: goto label_2f38b0;
        case 0x2f38b4u: goto label_2f38b4;
        case 0x2f38b8u: goto label_2f38b8;
        case 0x2f38bcu: goto label_2f38bc;
        case 0x2f38c0u: goto label_2f38c0;
        case 0x2f38c4u: goto label_2f38c4;
        case 0x2f38c8u: goto label_2f38c8;
        case 0x2f38ccu: goto label_2f38cc;
        case 0x2f38d0u: goto label_2f38d0;
        case 0x2f38d4u: goto label_2f38d4;
        case 0x2f38d8u: goto label_2f38d8;
        case 0x2f38dcu: goto label_2f38dc;
        case 0x2f38e0u: goto label_2f38e0;
        case 0x2f38e4u: goto label_2f38e4;
        case 0x2f38e8u: goto label_2f38e8;
        case 0x2f38ecu: goto label_2f38ec;
        case 0x2f38f0u: goto label_2f38f0;
        case 0x2f38f4u: goto label_2f38f4;
        case 0x2f38f8u: goto label_2f38f8;
        case 0x2f38fcu: goto label_2f38fc;
        case 0x2f3900u: goto label_2f3900;
        case 0x2f3904u: goto label_2f3904;
        case 0x2f3908u: goto label_2f3908;
        case 0x2f390cu: goto label_2f390c;
        case 0x2f3910u: goto label_2f3910;
        case 0x2f3914u: goto label_2f3914;
        case 0x2f3918u: goto label_2f3918;
        case 0x2f391cu: goto label_2f391c;
        case 0x2f3920u: goto label_2f3920;
        case 0x2f3924u: goto label_2f3924;
        case 0x2f3928u: goto label_2f3928;
        case 0x2f392cu: goto label_2f392c;
        case 0x2f3930u: goto label_2f3930;
        case 0x2f3934u: goto label_2f3934;
        case 0x2f3938u: goto label_2f3938;
        case 0x2f393cu: goto label_2f393c;
        case 0x2f3940u: goto label_2f3940;
        case 0x2f3944u: goto label_2f3944;
        case 0x2f3948u: goto label_2f3948;
        case 0x2f394cu: goto label_2f394c;
        case 0x2f3950u: goto label_2f3950;
        case 0x2f3954u: goto label_2f3954;
        case 0x2f3958u: goto label_2f3958;
        case 0x2f395cu: goto label_2f395c;
        case 0x2f3960u: goto label_2f3960;
        case 0x2f3964u: goto label_2f3964;
        case 0x2f3968u: goto label_2f3968;
        case 0x2f396cu: goto label_2f396c;
        case 0x2f3970u: goto label_2f3970;
        case 0x2f3974u: goto label_2f3974;
        case 0x2f3978u: goto label_2f3978;
        case 0x2f397cu: goto label_2f397c;
        case 0x2f3980u: goto label_2f3980;
        case 0x2f3984u: goto label_2f3984;
        case 0x2f3988u: goto label_2f3988;
        case 0x2f398cu: goto label_2f398c;
        case 0x2f3990u: goto label_2f3990;
        case 0x2f3994u: goto label_2f3994;
        case 0x2f3998u: goto label_2f3998;
        case 0x2f399cu: goto label_2f399c;
        case 0x2f39a0u: goto label_2f39a0;
        case 0x2f39a4u: goto label_2f39a4;
        case 0x2f39a8u: goto label_2f39a8;
        case 0x2f39acu: goto label_2f39ac;
        case 0x2f39b0u: goto label_2f39b0;
        case 0x2f39b4u: goto label_2f39b4;
        case 0x2f39b8u: goto label_2f39b8;
        case 0x2f39bcu: goto label_2f39bc;
        case 0x2f39c0u: goto label_2f39c0;
        case 0x2f39c4u: goto label_2f39c4;
        case 0x2f39c8u: goto label_2f39c8;
        case 0x2f39ccu: goto label_2f39cc;
        case 0x2f39d0u: goto label_2f39d0;
        case 0x2f39d4u: goto label_2f39d4;
        case 0x2f39d8u: goto label_2f39d8;
        case 0x2f39dcu: goto label_2f39dc;
        case 0x2f39e0u: goto label_2f39e0;
        case 0x2f39e4u: goto label_2f39e4;
        case 0x2f39e8u: goto label_2f39e8;
        case 0x2f39ecu: goto label_2f39ec;
        case 0x2f39f0u: goto label_2f39f0;
        case 0x2f39f4u: goto label_2f39f4;
        case 0x2f39f8u: goto label_2f39f8;
        case 0x2f39fcu: goto label_2f39fc;
        case 0x2f3a00u: goto label_2f3a00;
        case 0x2f3a04u: goto label_2f3a04;
        case 0x2f3a08u: goto label_2f3a08;
        case 0x2f3a0cu: goto label_2f3a0c;
        case 0x2f3a10u: goto label_2f3a10;
        case 0x2f3a14u: goto label_2f3a14;
        case 0x2f3a18u: goto label_2f3a18;
        case 0x2f3a1cu: goto label_2f3a1c;
        case 0x2f3a20u: goto label_2f3a20;
        case 0x2f3a24u: goto label_2f3a24;
        case 0x2f3a28u: goto label_2f3a28;
        case 0x2f3a2cu: goto label_2f3a2c;
        case 0x2f3a30u: goto label_2f3a30;
        case 0x2f3a34u: goto label_2f3a34;
        case 0x2f3a38u: goto label_2f3a38;
        case 0x2f3a3cu: goto label_2f3a3c;
        case 0x2f3a40u: goto label_2f3a40;
        case 0x2f3a44u: goto label_2f3a44;
        case 0x2f3a48u: goto label_2f3a48;
        case 0x2f3a4cu: goto label_2f3a4c;
        case 0x2f3a50u: goto label_2f3a50;
        case 0x2f3a54u: goto label_2f3a54;
        case 0x2f3a58u: goto label_2f3a58;
        case 0x2f3a5cu: goto label_2f3a5c;
        case 0x2f3a60u: goto label_2f3a60;
        case 0x2f3a64u: goto label_2f3a64;
        case 0x2f3a68u: goto label_2f3a68;
        case 0x2f3a6cu: goto label_2f3a6c;
        case 0x2f3a70u: goto label_2f3a70;
        case 0x2f3a74u: goto label_2f3a74;
        case 0x2f3a78u: goto label_2f3a78;
        case 0x2f3a7cu: goto label_2f3a7c;
        case 0x2f3a80u: goto label_2f3a80;
        case 0x2f3a84u: goto label_2f3a84;
        case 0x2f3a88u: goto label_2f3a88;
        case 0x2f3a8cu: goto label_2f3a8c;
        case 0x2f3a90u: goto label_2f3a90;
        case 0x2f3a94u: goto label_2f3a94;
        case 0x2f3a98u: goto label_2f3a98;
        case 0x2f3a9cu: goto label_2f3a9c;
        case 0x2f3aa0u: goto label_2f3aa0;
        case 0x2f3aa4u: goto label_2f3aa4;
        case 0x2f3aa8u: goto label_2f3aa8;
        case 0x2f3aacu: goto label_2f3aac;
        case 0x2f3ab0u: goto label_2f3ab0;
        case 0x2f3ab4u: goto label_2f3ab4;
        case 0x2f3ab8u: goto label_2f3ab8;
        case 0x2f3abcu: goto label_2f3abc;
        case 0x2f3ac0u: goto label_2f3ac0;
        case 0x2f3ac4u: goto label_2f3ac4;
        case 0x2f3ac8u: goto label_2f3ac8;
        case 0x2f3accu: goto label_2f3acc;
        case 0x2f3ad0u: goto label_2f3ad0;
        case 0x2f3ad4u: goto label_2f3ad4;
        case 0x2f3ad8u: goto label_2f3ad8;
        case 0x2f3adcu: goto label_2f3adc;
        case 0x2f3ae0u: goto label_2f3ae0;
        case 0x2f3ae4u: goto label_2f3ae4;
        case 0x2f3ae8u: goto label_2f3ae8;
        case 0x2f3aecu: goto label_2f3aec;
        case 0x2f3af0u: goto label_2f3af0;
        case 0x2f3af4u: goto label_2f3af4;
        case 0x2f3af8u: goto label_2f3af8;
        case 0x2f3afcu: goto label_2f3afc;
        case 0x2f3b00u: goto label_2f3b00;
        case 0x2f3b04u: goto label_2f3b04;
        case 0x2f3b08u: goto label_2f3b08;
        case 0x2f3b0cu: goto label_2f3b0c;
        case 0x2f3b10u: goto label_2f3b10;
        case 0x2f3b14u: goto label_2f3b14;
        case 0x2f3b18u: goto label_2f3b18;
        case 0x2f3b1cu: goto label_2f3b1c;
        case 0x2f3b20u: goto label_2f3b20;
        case 0x2f3b24u: goto label_2f3b24;
        case 0x2f3b28u: goto label_2f3b28;
        case 0x2f3b2cu: goto label_2f3b2c;
        case 0x2f3b30u: goto label_2f3b30;
        case 0x2f3b34u: goto label_2f3b34;
        case 0x2f3b38u: goto label_2f3b38;
        case 0x2f3b3cu: goto label_2f3b3c;
        case 0x2f3b40u: goto label_2f3b40;
        case 0x2f3b44u: goto label_2f3b44;
        case 0x2f3b48u: goto label_2f3b48;
        case 0x2f3b4cu: goto label_2f3b4c;
        case 0x2f3b50u: goto label_2f3b50;
        case 0x2f3b54u: goto label_2f3b54;
        case 0x2f3b58u: goto label_2f3b58;
        case 0x2f3b5cu: goto label_2f3b5c;
        case 0x2f3b60u: goto label_2f3b60;
        case 0x2f3b64u: goto label_2f3b64;
        case 0x2f3b68u: goto label_2f3b68;
        case 0x2f3b6cu: goto label_2f3b6c;
        case 0x2f3b70u: goto label_2f3b70;
        case 0x2f3b74u: goto label_2f3b74;
        case 0x2f3b78u: goto label_2f3b78;
        case 0x2f3b7cu: goto label_2f3b7c;
        case 0x2f3b80u: goto label_2f3b80;
        case 0x2f3b84u: goto label_2f3b84;
        case 0x2f3b88u: goto label_2f3b88;
        case 0x2f3b8cu: goto label_2f3b8c;
        case 0x2f3b90u: goto label_2f3b90;
        case 0x2f3b94u: goto label_2f3b94;
        case 0x2f3b98u: goto label_2f3b98;
        case 0x2f3b9cu: goto label_2f3b9c;
        case 0x2f3ba0u: goto label_2f3ba0;
        case 0x2f3ba4u: goto label_2f3ba4;
        case 0x2f3ba8u: goto label_2f3ba8;
        case 0x2f3bacu: goto label_2f3bac;
        case 0x2f3bb0u: goto label_2f3bb0;
        case 0x2f3bb4u: goto label_2f3bb4;
        case 0x2f3bb8u: goto label_2f3bb8;
        case 0x2f3bbcu: goto label_2f3bbc;
        case 0x2f3bc0u: goto label_2f3bc0;
        case 0x2f3bc4u: goto label_2f3bc4;
        case 0x2f3bc8u: goto label_2f3bc8;
        case 0x2f3bccu: goto label_2f3bcc;
        case 0x2f3bd0u: goto label_2f3bd0;
        case 0x2f3bd4u: goto label_2f3bd4;
        case 0x2f3bd8u: goto label_2f3bd8;
        case 0x2f3bdcu: goto label_2f3bdc;
        case 0x2f3be0u: goto label_2f3be0;
        case 0x2f3be4u: goto label_2f3be4;
        case 0x2f3be8u: goto label_2f3be8;
        case 0x2f3becu: goto label_2f3bec;
        case 0x2f3bf0u: goto label_2f3bf0;
        case 0x2f3bf4u: goto label_2f3bf4;
        case 0x2f3bf8u: goto label_2f3bf8;
        case 0x2f3bfcu: goto label_2f3bfc;
        case 0x2f3c00u: goto label_2f3c00;
        case 0x2f3c04u: goto label_2f3c04;
        case 0x2f3c08u: goto label_2f3c08;
        case 0x2f3c0cu: goto label_2f3c0c;
        case 0x2f3c10u: goto label_2f3c10;
        case 0x2f3c14u: goto label_2f3c14;
        case 0x2f3c18u: goto label_2f3c18;
        case 0x2f3c1cu: goto label_2f3c1c;
        case 0x2f3c20u: goto label_2f3c20;
        case 0x2f3c24u: goto label_2f3c24;
        case 0x2f3c28u: goto label_2f3c28;
        case 0x2f3c2cu: goto label_2f3c2c;
        case 0x2f3c30u: goto label_2f3c30;
        case 0x2f3c34u: goto label_2f3c34;
        case 0x2f3c38u: goto label_2f3c38;
        case 0x2f3c3cu: goto label_2f3c3c;
        case 0x2f3c40u: goto label_2f3c40;
        case 0x2f3c44u: goto label_2f3c44;
        case 0x2f3c48u: goto label_2f3c48;
        case 0x2f3c4cu: goto label_2f3c4c;
        case 0x2f3c50u: goto label_2f3c50;
        case 0x2f3c54u: goto label_2f3c54;
        case 0x2f3c58u: goto label_2f3c58;
        case 0x2f3c5cu: goto label_2f3c5c;
        case 0x2f3c60u: goto label_2f3c60;
        case 0x2f3c64u: goto label_2f3c64;
        case 0x2f3c68u: goto label_2f3c68;
        case 0x2f3c6cu: goto label_2f3c6c;
        case 0x2f3c70u: goto label_2f3c70;
        case 0x2f3c74u: goto label_2f3c74;
        case 0x2f3c78u: goto label_2f3c78;
        case 0x2f3c7cu: goto label_2f3c7c;
        case 0x2f3c80u: goto label_2f3c80;
        case 0x2f3c84u: goto label_2f3c84;
        case 0x2f3c88u: goto label_2f3c88;
        case 0x2f3c8cu: goto label_2f3c8c;
        case 0x2f3c90u: goto label_2f3c90;
        case 0x2f3c94u: goto label_2f3c94;
        case 0x2f3c98u: goto label_2f3c98;
        case 0x2f3c9cu: goto label_2f3c9c;
        case 0x2f3ca0u: goto label_2f3ca0;
        case 0x2f3ca4u: goto label_2f3ca4;
        case 0x2f3ca8u: goto label_2f3ca8;
        case 0x2f3cacu: goto label_2f3cac;
        case 0x2f3cb0u: goto label_2f3cb0;
        case 0x2f3cb4u: goto label_2f3cb4;
        case 0x2f3cb8u: goto label_2f3cb8;
        case 0x2f3cbcu: goto label_2f3cbc;
        case 0x2f3cc0u: goto label_2f3cc0;
        case 0x2f3cc4u: goto label_2f3cc4;
        case 0x2f3cc8u: goto label_2f3cc8;
        case 0x2f3cccu: goto label_2f3ccc;
        default: break;
    }

    ctx->pc = 0x2f22d0u;

label_2f22d0:
    // 0x2f22d0: 0x27bdfca0  addiu       $sp, $sp, -0x360
    ctx->pc = 0x2f22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966432));
label_2f22d4:
    // 0x2f22d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f22d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2f22d8:
    // 0x2f22d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f22d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2f22dc:
    // 0x2f22dc: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x2f22dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2f22e0:
    // 0x2f22e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2f22e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2f22e4:
    // 0x2f22e4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2f22e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2f22e8:
    // 0x2f22e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f22e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2f22ec:
    // 0x2f22ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f22ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f22f0:
    // 0x2f22f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f22f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f22f4:
    // 0x2f22f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f22f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f22f8:
    // 0x2f22f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f22f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f22fc:
    // 0x2f22fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f22fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f2300:
    // 0x2f2300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f2300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f2304:
    // 0x2f2304: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f2304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f2308:
    // 0x2f2308: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x2f2308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_2f230c:
    // 0x2f230c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f230cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f2310:
    // 0x2f2310: 0x8c630788  lw          $v1, 0x788($v1)
    ctx->pc = 0x2f2310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
label_2f2314:
    // 0x2f2314: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2f2314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2f2318:
    // 0x2f2318: 0x10200661  beqz        $at, . + 4 + (0x661 << 2)
label_2f231c:
    if (ctx->pc == 0x2F231Cu) {
        ctx->pc = 0x2F231Cu;
            // 0x2f231c: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x2F2320u;
        goto label_2f2320;
    }
    ctx->pc = 0x2F2318u;
    {
        const bool branch_taken_0x2f2318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2318u;
            // 0x2f231c: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2318) {
            ctx->pc = 0x2F3CA0u;
            goto label_2f3ca0;
        }
    }
    ctx->pc = 0x2F2320u;
label_2f2320:
    // 0x2f2320: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2f2320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2f2324:
    // 0x2f2324: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2f2324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2f2328:
    // 0x2f2328: 0x24842140  addiu       $a0, $a0, 0x2140
    ctx->pc = 0x2f2328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8512));
label_2f232c:
    // 0x2f232c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f232cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f2330:
    // 0x2f2330: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f2330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f2334:
    // 0x2f2334: 0x600008  jr          $v1
label_2f2338:
    if (ctx->pc == 0x2F2338u) {
        ctx->pc = 0x2F233Cu;
        goto label_2f233c;
    }
    ctx->pc = 0x2F2334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F233Cu: goto label_2f233c;
            case 0x2F2740u: goto label_2f2740;
            case 0x2F2928u: goto label_2f2928;
            case 0x2F2D10u: goto label_2f2d10;
            case 0x2F3118u: goto label_2f3118;
            case 0x2F32F0u: goto label_2f32f0;
            case 0x2F3498u: goto label_2f3498;
            case 0x2F38A0u: goto label_2f38a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F233Cu;
label_2f233c:
    // 0x2f233c: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x2f233cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2f2340:
    // 0x2f2340: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x2f2340u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_2f2344:
    // 0x2f2344: 0x50b821  addu        $s7, $v0, $s0
    ctx->pc = 0x2f2344u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2f2348:
    // 0x2f2348: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x2f2348u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_2f234c:
    // 0x2f234c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f2350:
    // 0x2f2350: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x2f2350u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_2f2354:
    // 0x2f2354: 0x8c530eac  lw          $s3, 0xEAC($v0)
    ctx->pc = 0x2f2354u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_2f2358:
    // 0x2f2358: 0x26d62130  addiu       $s6, $s6, 0x2130
    ctx->pc = 0x2f2358u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8496));
label_2f235c:
    // 0x2f235c: 0x27deab70  addiu       $fp, $fp, -0x5490
    ctx->pc = 0x2f235cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945648));
label_2f2360:
    // 0x2f2360: 0x26522110  addiu       $s2, $s2, 0x2110
    ctx->pc = 0x2f2360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8464));
label_2f2364:
    // 0x2f2364: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f2364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f2368:
    // 0x2f2368: 0x9044ee08  lbu         $a0, -0x11F8($v0)
    ctx->pc = 0x2f2368u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962696)));
label_2f236c:
    // 0x2f236c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f236cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f2370:
    // 0x2f2370: 0xa3a4035c  sb          $a0, 0x35C($sp)
    ctx->pc = 0x2f2370u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 860), (uint8_t)GPR_U32(ctx, 4));
label_2f2374:
    // 0x2f2374: 0x9043ee09  lbu         $v1, -0x11F7($v0)
    ctx->pc = 0x2f2374u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962697)));
label_2f2378:
    // 0x2f2378: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f2378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f237c:
    // 0x2f237c: 0xa3a3035d  sb          $v1, 0x35D($sp)
    ctx->pc = 0x2f237cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 861), (uint8_t)GPR_U32(ctx, 3));
label_2f2380:
    // 0x2f2380: 0x9042ee0a  lbu         $v0, -0x11F6($v0)
    ctx->pc = 0x2f2380u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962698)));
label_2f2384:
    // 0x2f2384: 0xc077318  jal         func_1DCC60
label_2f2388:
    if (ctx->pc == 0x2F2388u) {
        ctx->pc = 0x2F2388u;
            // 0x2f2388: 0xa3a2035e  sb          $v0, 0x35E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 862), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2F238Cu;
        goto label_2f238c;
    }
    ctx->pc = 0x2F2384u;
    SET_GPR_U32(ctx, 31, 0x2F238Cu);
    ctx->pc = 0x2F2388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2384u;
            // 0x2f2388: 0xa3a2035e  sb          $v0, 0x35E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 862), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F238Cu; }
        if (ctx->pc != 0x2F238Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F238Cu; }
        if (ctx->pc != 0x2F238Cu) { return; }
    }
    ctx->pc = 0x2F238Cu;
label_2f238c:
    // 0x2f238c: 0xc0bcf40  jal         func_2F3D00
label_2f2390:
    if (ctx->pc == 0x2F2390u) {
        ctx->pc = 0x2F2390u;
            // 0x2f2390: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2F2394u;
        goto label_2f2394;
    }
    ctx->pc = 0x2F238Cu;
    SET_GPR_U32(ctx, 31, 0x2F2394u);
    ctx->pc = 0x2F2390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F238Cu;
            // 0x2f2390: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D00u;
    if (runtime->hasFunction(0x2F3D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F3D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2394u; }
        if (ctx->pc != 0x2F2394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3D00_0x2f3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2394u; }
        if (ctx->pc != 0x2F2394u) { return; }
    }
    ctx->pc = 0x2F2394u;
label_2f2394:
    // 0x2f2394: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f2394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f2398:
    // 0x2f2398: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f2398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f239c:
    // 0x2f239c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f23a0:
    // 0x2f23a0: 0xc0bcf3c  jal         func_2F3CF0
label_2f23a4:
    if (ctx->pc == 0x2F23A4u) {
        ctx->pc = 0x2F23A4u;
            // 0x2f23a4: 0x438823  subu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F23A8u;
        goto label_2f23a8;
    }
    ctx->pc = 0x2F23A0u;
    SET_GPR_U32(ctx, 31, 0x2F23A8u);
    ctx->pc = 0x2F23A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F23A0u;
            // 0x2f23a4: 0x438823  subu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CF0u;
    if (runtime->hasFunction(0x2F3CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23A8u; }
        if (ctx->pc != 0x2F23A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CF0_0x2f3cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23A8u; }
        if (ctx->pc != 0x2F23A8u) { return; }
    }
    ctx->pc = 0x2F23A8u;
label_2f23a8:
    // 0x2f23a8: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f23a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f23ac:
    // 0x2f23ac: 0xc0bcf38  jal         func_2F3CE0
label_2f23b0:
    if (ctx->pc == 0x2F23B0u) {
        ctx->pc = 0x2F23B0u;
            // 0x2f23b0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F23B4u;
        goto label_2f23b4;
    }
    ctx->pc = 0x2F23ACu;
    SET_GPR_U32(ctx, 31, 0x2F23B4u);
    ctx->pc = 0x2F23B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F23ACu;
            // 0x2f23b0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CE0u;
    if (runtime->hasFunction(0x2F3CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23B4u; }
        if (ctx->pc != 0x2F23B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CE0_0x2f3ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23B4u; }
        if (ctx->pc != 0x2F23B4u) { return; }
    }
    ctx->pc = 0x2F23B4u;
label_2f23b4:
    // 0x2f23b4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f23b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f23b8:
    // 0x2f23b8: 0x26240002  addiu       $a0, $s1, 0x2
    ctx->pc = 0x2f23b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_2f23bc:
    // 0x2f23bc: 0x90732134  lbu         $s3, 0x2134($v1)
    ctx->pc = 0x2f23bcu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8500)));
label_2f23c0:
    // 0x2f23c0: 0x903023  subu        $a2, $a0, $s0
    ctx->pc = 0x2f23c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2f23c4:
    // 0x2f23c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f23c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f23c8:
    // 0x2f23c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f23c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f23cc:
    // 0x2f23cc: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2f23ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f23d0:
    // 0x2f23d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f23d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f23d4:
    // 0x2f23d4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f23d8:
    // 0x2f23d8: 0x2663818  mult        $a3, $s3, $a2
    ctx->pc = 0x2f23d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_2f23dc:
    // 0x2f23dc: 0x94742130  lhu         $s4, 0x2130($v1)
    ctx->pc = 0x2f23dcu;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8496)));
label_2f23e0:
    // 0x2f23e0: 0x71843  sra         $v1, $a3, 1
    ctx->pc = 0x2f23e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 1));
label_2f23e4:
    // 0x2f23e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f23e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f23e8:
    // 0x2f23e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f23ec:
    // 0x2f23ec: 0xc0bc760  jal         func_2F1D80
label_2f23f0:
    if (ctx->pc == 0x2F23F0u) {
        ctx->pc = 0x2F23F0u;
            // 0x2f23f0: 0x7fa20330  sq          $v0, 0x330($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 2));
        ctx->pc = 0x2F23F4u;
        goto label_2f23f4;
    }
    ctx->pc = 0x2F23ECu;
    SET_GPR_U32(ctx, 31, 0x2F23F4u);
    ctx->pc = 0x2F23F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F23ECu;
            // 0x2f23f0: 0x7fa20330  sq          $v0, 0x330($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D80u;
    if (runtime->hasFunction(0x2F1D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23F4u; }
        if (ctx->pc != 0x2F23F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D80_0x2f1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23F4u; }
        if (ctx->pc != 0x2F23F4u) { return; }
    }
    ctx->pc = 0x2F23F4u;
label_2f23f4:
    // 0x2f23f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f23f8:
    // 0x2f23f8: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x2f23f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_2f23fc:
    // 0x2f23fc: 0xc0506ac  jal         func_141AB0
label_2f2400:
    if (ctx->pc == 0x2F2400u) {
        ctx->pc = 0x2F2400u;
            // 0x2f2400: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F2404u;
        goto label_2f2404;
    }
    ctx->pc = 0x2F23FCu;
    SET_GPR_U32(ctx, 31, 0x2F2404u);
    ctx->pc = 0x2F2400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F23FCu;
            // 0x2f2400: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2404u; }
        if (ctx->pc != 0x2F2404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2404u; }
        if (ctx->pc != 0x2F2404u) { return; }
    }
    ctx->pc = 0x2F2404u;
label_2f2404:
    // 0x2f2404: 0xc0bcf34  jal         func_2F3CD0
label_2f2408:
    if (ctx->pc == 0x2F2408u) {
        ctx->pc = 0x2F240Cu;
        goto label_2f240c;
    }
    ctx->pc = 0x2F2404u;
    SET_GPR_U32(ctx, 31, 0x2F240Cu);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F240Cu; }
        if (ctx->pc != 0x2F240Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F240Cu; }
        if (ctx->pc != 0x2F240Cu) { return; }
    }
    ctx->pc = 0x2F240Cu;
label_2f240c:
    // 0x2f240c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f240cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2410:
    // 0x2f2410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2414:
    // 0x2f2414: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f2414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f2418:
    // 0x2f2418: 0x320f809  jalr        $t9
label_2f241c:
    if (ctx->pc == 0x2F241Cu) {
        ctx->pc = 0x2F241Cu;
            // 0x2f241c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F2420u;
        goto label_2f2420;
    }
    ctx->pc = 0x2F2418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F2420u);
        ctx->pc = 0x2F241Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2418u;
            // 0x2f241c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F2420u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F2420u; }
            if (ctx->pc != 0x2F2420u) { return; }
        }
        }
    }
    ctx->pc = 0x2F2420u;
label_2f2420:
    // 0x2f2420: 0x7ba30330  lq          $v1, 0x330($sp)
    ctx->pc = 0x2f2420u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_2f2424:
    // 0x2f2424: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2f2424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_2f2428:
    // 0x2f2428: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2f2428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2f242c:
    // 0x2f242c: 0x7fa20320  sq          $v0, 0x320($sp)
    ctx->pc = 0x2f242cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 2));
label_2f2430:
    // 0x2f2430: 0x24a5add0  addiu       $a1, $a1, -0x5230
    ctx->pc = 0x2f2430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946256));
label_2f2434:
    // 0x2f2434: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x2f2434u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f2438:
    // 0x2f2438: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2f2438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f243c:
    // 0x2f243c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2440:
    // 0x2f2440: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f2440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f2444:
    // 0x2f2444: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f2444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f2448:
    // 0x2f2448: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2f2448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f244c:
    // 0x2f244c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f244cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2450:
    // 0x2f2450: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2f2450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f2454:
    // 0x2f2454: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x2f2454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2458:
    // 0x2f2458: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2f2458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f245c:
    // 0x2f245c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f245cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2460:
    // 0x2f2460: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f2460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2464:
    // 0x2f2464: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2f2464u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2f2468:
    // 0x2f2468: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2f2468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2f246c:
    // 0x2f246c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f246cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_2f2470:
    // 0x2f2470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2474:
    // 0x2f2474: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x2f2474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f2478:
    // 0x2f2478: 0x0  nop
    ctx->pc = 0x2f2478u;
    // NOP
label_2f247c:
    // 0x2f247c: 0x2a91021  addu        $v0, $s5, $t1
    ctx->pc = 0x2f247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_2f2480:
    // 0x2f2480: 0x7fa20310  sq          $v0, 0x310($sp)
    ctx->pc = 0x2f2480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 2));
label_2f2484:
    // 0x2f2484: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f2488:
    // 0x2f2488: 0x2a91023  subu        $v0, $s5, $t1
    ctx->pc = 0x2f2488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_2f248c:
    // 0x2f248c: 0x7fa20300  sq          $v0, 0x300($sp)
    ctx->pc = 0x2f248cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 2));
label_2f2490:
    // 0x2f2490: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2f2490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f2494:
    // 0x2f2494: 0x0  nop
    ctx->pc = 0x2f2494u;
    // NOP
label_2f2498:
    // 0x2f2498: 0x2624823  subu        $t1, $s3, $v0
    ctx->pc = 0x2f2498u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f249c:
    // 0x2f249c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f249cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f24a0:
    // 0x2f24a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2f24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f24a4:
    // 0x2f24a4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f24a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f24a8:
    // 0x2f24a8: 0x0  nop
    ctx->pc = 0x2f24a8u;
    // NOP
label_2f24ac:
    // 0x2f24ac: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f24acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f24b0:
    // 0x2f24b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f24b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f24b4:
    // 0x2f24b4: 0x0  nop
    ctx->pc = 0x2f24b4u;
    // NOP
label_2f24b8:
    // 0x2f24b8: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f24b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f24bc:
    // 0x2f24bc: 0x7ba20300  lq          $v0, 0x300($sp)
    ctx->pc = 0x2f24bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_2f24c0:
    // 0x2f24c0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f24c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f24c4:
    // 0x2f24c4: 0x0  nop
    ctx->pc = 0x2f24c4u;
    // NOP
label_2f24c8:
    // 0x2f24c8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f24c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f24cc:
    // 0x2f24cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f24ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f24d0:
    // 0x2f24d0: 0x0  nop
    ctx->pc = 0x2f24d0u;
    // NOP
label_2f24d4:
    // 0x2f24d4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f24d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f24d8:
    // 0x2f24d8: 0x7ba20310  lq          $v0, 0x310($sp)
    ctx->pc = 0x2f24d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_2f24dc:
    // 0x2f24dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f24dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f24e0:
    // 0x2f24e0: 0xc0bc284  jal         func_2F0A10
label_2f24e4:
    if (ctx->pc == 0x2F24E4u) {
        ctx->pc = 0x2F24E4u;
            // 0x2f24e4: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F24E8u;
        goto label_2f24e8;
    }
    ctx->pc = 0x2F24E0u;
    SET_GPR_U32(ctx, 31, 0x2F24E8u);
    ctx->pc = 0x2F24E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24E0u;
            // 0x2f24e4: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24E8u; }
        if (ctx->pc != 0x2F24E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24E8u; }
        if (ctx->pc != 0x2F24E8u) { return; }
    }
    ctx->pc = 0x2F24E8u;
label_2f24e8:
    // 0x2f24e8: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x2f24e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_2f24ec:
    // 0x2f24ec: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x2f24ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
label_2f24f0:
    // 0x2f24f0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f24f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2f24f4:
    // 0x2f24f4: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x2f24f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_2f24f8:
    // 0x2f24f8: 0x7fa202b0  sq          $v0, 0x2B0($sp)
    ctx->pc = 0x2f24f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 2));
label_2f24fc:
    // 0x2f24fc: 0x2694ad50  addiu       $s4, $s4, -0x52B0
    ctx->pc = 0x2f24fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946128));
label_2f2500:
    // 0x2f2500: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f2500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f2504:
    // 0x2f2504: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f2504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f2508:
    // 0x2f2508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f250c:
    // 0x2f250c: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x2f250cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2510:
    // 0x2f2510: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2f2510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2f2514:
    // 0x2f2514: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2518:
    // 0x2f2518: 0x90422133  lbu         $v0, 0x2133($v0)
    ctx->pc = 0x2f2518u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8499)));
label_2f251c:
    // 0x2f251c: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2f251cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2520:
    // 0x2f2520: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f2520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2524:
    // 0x2f2524: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2528:
    // 0x2f2528: 0x44889000  mtc1        $t0, $f18
    ctx->pc = 0x2f2528u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f252c:
    // 0x2f252c: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x2f252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
label_2f2530:
    // 0x2f2530: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f2530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f2534:
    // 0x2f2534: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x2f2534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_2f2538:
    // 0x2f2538: 0x2a22823  subu        $a1, $s5, $v0
    ctx->pc = 0x2f2538u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2f253c:
    // 0x2f253c: 0x90622132  lbu         $v0, 0x2132($v1)
    ctx->pc = 0x2f253cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8498)));
label_2f2540:
    // 0x2f2540: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2540u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f2544:
    // 0x2f2544: 0x7fa202c0  sq          $v0, 0x2C0($sp)
    ctx->pc = 0x2f2544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
label_2f2548:
    // 0x2f2548: 0x7ba30300  lq          $v1, 0x300($sp)
    ctx->pc = 0x2f2548u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_2f254c:
    // 0x2f254c: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x2f254cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_2f2550:
    // 0x2f2550: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x2f2550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
label_2f2554:
    // 0x2f2554: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x2f2554u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f2558:
    // 0x2f2558: 0x7ba202c0  lq          $v0, 0x2C0($sp)
    ctx->pc = 0x2f2558u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_2f255c:
    // 0x2f255c: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2f255cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f2560:
    // 0x2f2560: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f2560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f2564:
    // 0x2f2564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2568:
    // 0x2f2568: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f2568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f256c:
    // 0x2f256c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f256cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2570:
    // 0x2f2570: 0x26b1021  addu        $v0, $s3, $t3
    ctx->pc = 0x2f2570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
label_2f2574:
    // 0x2f2574: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x2f2574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
label_2f2578:
    // 0x2f2578: 0x26b1023  subu        $v0, $s3, $t3
    ctx->pc = 0x2f2578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
label_2f257c:
    // 0x2f257c: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x2f257cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
label_2f2580:
    // 0x2f2580: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f2580u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2584:
    // 0x2f2584: 0x0  nop
    ctx->pc = 0x2f2584u;
    // NOP
label_2f2588:
    // 0x2f2588: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f2588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f258c:
    // 0x2f258c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f258cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2590:
    // 0x2f2590: 0x0  nop
    ctx->pc = 0x2f2590u;
    // NOP
label_2f2594:
    // 0x2f2594: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2598:
    // 0x2f2598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f2598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f259c:
    // 0x2f259c: 0x0  nop
    ctx->pc = 0x2f259cu;
    // NOP
label_2f25a0:
    // 0x2f25a0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f25a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f25a4:
    // 0x2f25a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f25a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f25a8:
    // 0x2f25a8: 0x0  nop
    ctx->pc = 0x2f25a8u;
    // NOP
label_2f25ac:
    // 0x2f25ac: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f25acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f25b0:
    // 0x2f25b0: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x2f25b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_2f25b4:
    // 0x2f25b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f25b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f25b8:
    // 0x2f25b8: 0xc0bc284  jal         func_2F0A10
label_2f25bc:
    if (ctx->pc == 0x2F25BCu) {
        ctx->pc = 0x2F25BCu;
            // 0x2f25bc: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F25C0u;
        goto label_2f25c0;
    }
    ctx->pc = 0x2F25B8u;
    SET_GPR_U32(ctx, 31, 0x2F25C0u);
    ctx->pc = 0x2F25BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25B8u;
            // 0x2f25bc: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25C0u; }
        if (ctx->pc != 0x2F25C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25C0u; }
        if (ctx->pc != 0x2F25C0u) { return; }
    }
    ctx->pc = 0x2F25C0u;
label_2f25c0:
    // 0x2f25c0: 0x7ba302e0  lq          $v1, 0x2E0($sp)
    ctx->pc = 0x2f25c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_2f25c4:
    // 0x2f25c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f25c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f25c8:
    // 0x2f25c8: 0x7ba20310  lq          $v0, 0x310($sp)
    ctx->pc = 0x2f25c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_2f25cc:
    // 0x2f25cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f25ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f25d0:
    // 0x2f25d0: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x2f25d0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f25d4:
    // 0x2f25d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f25d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f25d8:
    // 0x2f25d8: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x2f25d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f25dc:
    // 0x2f25dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f25dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f25e0:
    // 0x2f25e0: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x2f25e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f25e4:
    // 0x2f25e4: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x2f25e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_2f25e8:
    // 0x2f25e8: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x2f25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2f25ec:
    // 0x2f25ec: 0x7ba202c0  lq          $v0, 0x2C0($sp)
    ctx->pc = 0x2f25ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_2f25f0:
    // 0x2f25f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f25f4:
    // 0x2f25f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f25f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f25f8:
    // 0x2f25f8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f25f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f25fc:
    // 0x2f25fc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f25fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2600:
    // 0x2f2600: 0x7ba202d0  lq          $v0, 0x2D0($sp)
    ctx->pc = 0x2f2600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_2f2604:
    // 0x2f2604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2608:
    // 0x2f2608: 0x0  nop
    ctx->pc = 0x2f2608u;
    // NOP
label_2f260c:
    // 0x2f260c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f260cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2610:
    // 0x2f2610: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x2f2610u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_2f2614:
    // 0x2f2614: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f2614u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2618:
    // 0x2f2618: 0x0  nop
    ctx->pc = 0x2f2618u;
    // NOP
label_2f261c:
    // 0x2f261c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f261cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f2620:
    // 0x2f2620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2624:
    // 0x2f2624: 0x0  nop
    ctx->pc = 0x2f2624u;
    // NOP
label_2f2628:
    // 0x2f2628: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f2628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f262c:
    // 0x2f262c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f262cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2630:
    // 0x2f2630: 0x0  nop
    ctx->pc = 0x2f2630u;
    // NOP
label_2f2634:
    // 0x2f2634: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2638:
    // 0x2f2638: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f2638u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f263c:
    // 0x2f263c: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f263cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2640:
    // 0x2f2640: 0xc0bc284  jal         func_2F0A10
label_2f2644:
    if (ctx->pc == 0x2F2644u) {
        ctx->pc = 0x2F2644u;
            // 0x2f2644: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F2648u;
        goto label_2f2648;
    }
    ctx->pc = 0x2F2640u;
    SET_GPR_U32(ctx, 31, 0x2F2648u);
    ctx->pc = 0x2F2644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2640u;
            // 0x2f2644: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2648u; }
        if (ctx->pc != 0x2F2648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2648u; }
        if (ctx->pc != 0x2F2648u) { return; }
    }
    ctx->pc = 0x2F2648u;
label_2f2648:
    // 0x2f2648: 0x7ba20320  lq          $v0, 0x320($sp)
    ctx->pc = 0x2f2648u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_2f264c:
    // 0x2f264c: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x2f264cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f2650:
    // 0x2f2650: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2f2650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_2f2654:
    // 0x2f2654: 0x2453035c  addiu       $s3, $v0, 0x35C
    ctx->pc = 0x2f2654u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 860));
label_2f2658:
    // 0x2f2658: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2f2658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_2f265c:
    // 0x2f265c: 0x16170002  bne         $s0, $s7, . + 4 + (0x2 << 2)
label_2f2660:
    if (ctx->pc == 0x2F2660u) {
        ctx->pc = 0x2F2660u;
            // 0x2f2660: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->pc = 0x2F2664u;
        goto label_2f2664;
    }
    ctx->pc = 0x2F265Cu;
    {
        const bool branch_taken_0x2f265c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        ctx->pc = 0x2F2660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F265Cu;
            // 0x2f2660: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f265c) {
            ctx->pc = 0x2F2668u;
            goto label_2f2668;
        }
    }
    ctx->pc = 0x2F2664u;
label_2f2664:
    // 0x2f2664: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f2664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2668:
    // 0x2f2668: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x2f2668u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f266c:
    // 0x2f266c: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2f266cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2f2670:
    // 0x2f2670: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f2670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f2674:
    // 0x2f2674: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f2674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f2678:
    // 0x2f2678: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2f2678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f267c:
    // 0x2f267c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f267cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2680:
    // 0x2f2680: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f2680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f2684:
    // 0x2f2684: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2688:
    // 0x2f2688: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2f2688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2f268c:
    // 0x2f268c: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x2f268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_2f2690:
    // 0x2f2690: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2694:
    // 0x2f2694: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2698:
    // 0x2f2698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f2698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f269c:
    // 0x2f269c: 0x0  nop
    ctx->pc = 0x2f269cu;
    // NOP
label_2f26a0:
    // 0x2f26a0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f26a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f26a4:
    // 0x2f26a4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f26a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f26a8:
    // 0x2f26a8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f26a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f26ac:
    // 0x2f26ac: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f26acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f26b0:
    // 0x2f26b0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f26b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2f26b4:
    // 0x2f26b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f26b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f26b8:
    // 0x2f26b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f26b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f26bc:
    // 0x2f26bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f26bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f26c0:
    // 0x2f26c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f26c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f26c4:
    // 0x2f26c4: 0x0  nop
    ctx->pc = 0x2f26c4u;
    // NOP
label_2f26c8:
    // 0x2f26c8: 0x2a31023  subu        $v0, $s5, $v1
    ctx->pc = 0x2f26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f26cc:
    // 0x2f26cc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x2f26ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f26d0:
    // 0x2f26d0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2f26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f26d4:
    // 0x2f26d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f26d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f26d8:
    // 0x2f26d8: 0x2894023  subu        $t0, $s4, $t1
    ctx->pc = 0x2f26d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f26dc:
    // 0x2f26dc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f26dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f26e0:
    // 0x2f26e0: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x2f26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f26e4:
    // 0x2f26e4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f26e4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f26e8:
    // 0x2f26e8: 0x0  nop
    ctx->pc = 0x2f26e8u;
    // NOP
label_2f26ec:
    // 0x2f26ec: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f26ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f26f0:
    // 0x2f26f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f26f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f26f4:
    // 0x2f26f4: 0x0  nop
    ctx->pc = 0x2f26f4u;
    // NOP
label_2f26f8:
    // 0x2f26f8: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f26f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f26fc:
    // 0x2f26fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f26fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2700:
    // 0x2f2700: 0xc0bc284  jal         func_2F0A10
label_2f2704:
    if (ctx->pc == 0x2F2704u) {
        ctx->pc = 0x2F2704u;
            // 0x2f2704: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F2708u;
        goto label_2f2708;
    }
    ctx->pc = 0x2F2700u;
    SET_GPR_U32(ctx, 31, 0x2F2708u);
    ctx->pc = 0x2F2704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2700u;
            // 0x2f2704: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2708u; }
        if (ctx->pc != 0x2F2708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2708u; }
        if (ctx->pc != 0x2F2708u) { return; }
    }
    ctx->pc = 0x2F2708u;
label_2f2708:
    // 0x2f2708: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x2f2708u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_2f270c:
    // 0x2f270c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f270cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f2710:
    // 0x2f2710: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2f2710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f2714:
    // 0x2f2714: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f2714u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f2718:
    // 0x2f2718: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_2f271c:
    if (ctx->pc == 0x2F271Cu) {
        ctx->pc = 0x2F271Cu;
            // 0x2f271c: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F2720u;
        goto label_2f2720;
    }
    ctx->pc = 0x2F2718u;
    {
        const bool branch_taken_0x2f2718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F271Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2718u;
            // 0x2f271c: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2718) {
            ctx->pc = 0x2F2658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f2658;
        }
    }
    ctx->pc = 0x2F2720u;
label_2f2720:
    // 0x2f2720: 0xc0bcf34  jal         func_2F3CD0
label_2f2724:
    if (ctx->pc == 0x2F2724u) {
        ctx->pc = 0x2F2728u;
        goto label_2f2728;
    }
    ctx->pc = 0x2F2720u;
    SET_GPR_U32(ctx, 31, 0x2F2728u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2728u; }
        if (ctx->pc != 0x2F2728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2728u; }
        if (ctx->pc != 0x2F2728u) { return; }
    }
    ctx->pc = 0x2F2728u;
label_2f2728:
    // 0x2f2728: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f2728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f272c:
    // 0x2f272c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f272cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f2730:
    // 0x2f2730: 0x320f809  jalr        $t9
label_2f2734:
    if (ctx->pc == 0x2F2734u) {
        ctx->pc = 0x2F2734u;
            // 0x2f2734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F2738u;
        goto label_2f2738;
    }
    ctx->pc = 0x2F2730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F2738u);
        ctx->pc = 0x2F2734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2730u;
            // 0x2f2734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F2738u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F2738u; }
            if (ctx->pc != 0x2F2738u) { return; }
        }
        }
    }
    ctx->pc = 0x2F2738u;
label_2f2738:
    // 0x2f2738: 0x1000055a  b           . + 4 + (0x55A << 2)
label_2f273c:
    if (ctx->pc == 0x2F273Cu) {
        ctx->pc = 0x2F273Cu;
            // 0x2f273c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2F2740u;
        goto label_2f2740;
    }
    ctx->pc = 0x2F2738u;
    {
        const bool branch_taken_0x2f2738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F273Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2738u;
            // 0x2f273c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2738) {
            ctx->pc = 0x2F3CA4u;
            goto label_2f3ca4;
        }
    }
    ctx->pc = 0x2F2740u;
label_2f2740:
    // 0x2f2740: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x2f2740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2f2744:
    // 0x2f2744: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x2f2744u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_2f2748:
    // 0x2f2748: 0x50b821  addu        $s7, $v0, $s0
    ctx->pc = 0x2f2748u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2f274c:
    // 0x2f274c: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x2f274cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_2f2750:
    // 0x2f2750: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f2750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f2754:
    // 0x2f2754: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x2f2754u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_2f2758:
    // 0x2f2758: 0x8c530eac  lw          $s3, 0xEAC($v0)
    ctx->pc = 0x2f2758u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_2f275c:
    // 0x2f275c: 0x26d62130  addiu       $s6, $s6, 0x2130
    ctx->pc = 0x2f275cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8496));
label_2f2760:
    // 0x2f2760: 0x27deab70  addiu       $fp, $fp, -0x5490
    ctx->pc = 0x2f2760u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945648));
label_2f2764:
    // 0x2f2764: 0x26312110  addiu       $s1, $s1, 0x2110
    ctx->pc = 0x2f2764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8464));
label_2f2768:
    // 0x2f2768: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f2768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f276c:
    // 0x2f276c: 0x9044ee10  lbu         $a0, -0x11F0($v0)
    ctx->pc = 0x2f276cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962704)));
label_2f2770:
    // 0x2f2770: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f2770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f2774:
    // 0x2f2774: 0xa3a40358  sb          $a0, 0x358($sp)
    ctx->pc = 0x2f2774u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 856), (uint8_t)GPR_U32(ctx, 4));
label_2f2778:
    // 0x2f2778: 0x9045ee11  lbu         $a1, -0x11EF($v0)
    ctx->pc = 0x2f2778u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962705)));
label_2f277c:
    // 0x2f277c: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f2780:
    // 0x2f2780: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f2780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f2784:
    // 0x2f2784: 0xa3a50359  sb          $a1, 0x359($sp)
    ctx->pc = 0x2f2784u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 857), (uint8_t)GPR_U32(ctx, 5));
label_2f2788:
    // 0x2f2788: 0x9043ee12  lbu         $v1, -0x11EE($v0)
    ctx->pc = 0x2f2788u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962706)));
label_2f278c:
    // 0x2f278c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f278cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f2790:
    // 0x2f2790: 0xa3a3035a  sb          $v1, 0x35A($sp)
    ctx->pc = 0x2f2790u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 858), (uint8_t)GPR_U32(ctx, 3));
label_2f2794:
    // 0x2f2794: 0x9042ee13  lbu         $v0, -0x11ED($v0)
    ctx->pc = 0x2f2794u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962707)));
label_2f2798:
    // 0x2f2798: 0xc0bcf3c  jal         func_2F3CF0
label_2f279c:
    if (ctx->pc == 0x2F279Cu) {
        ctx->pc = 0x2F279Cu;
            // 0x2f279c: 0xa3a2035b  sb          $v0, 0x35B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 859), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2F27A0u;
        goto label_2f27a0;
    }
    ctx->pc = 0x2F2798u;
    SET_GPR_U32(ctx, 31, 0x2F27A0u);
    ctx->pc = 0x2F279Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2798u;
            // 0x2f279c: 0xa3a2035b  sb          $v0, 0x35B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 859), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CF0u;
    if (runtime->hasFunction(0x2F3CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27A0u; }
        if (ctx->pc != 0x2F27A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CF0_0x2f3cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27A0u; }
        if (ctx->pc != 0x2F27A0u) { return; }
    }
    ctx->pc = 0x2F27A0u;
label_2f27a0:
    // 0x2f27a0: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f27a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f27a4:
    // 0x2f27a4: 0xc0bcf38  jal         func_2F3CE0
label_2f27a8:
    if (ctx->pc == 0x2F27A8u) {
        ctx->pc = 0x2F27A8u;
            // 0x2f27a8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F27ACu;
        goto label_2f27ac;
    }
    ctx->pc = 0x2F27A4u;
    SET_GPR_U32(ctx, 31, 0x2F27ACu);
    ctx->pc = 0x2F27A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F27A4u;
            // 0x2f27a8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CE0u;
    if (runtime->hasFunction(0x2F3CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27ACu; }
        if (ctx->pc != 0x2F27ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CE0_0x2f3ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27ACu; }
        if (ctx->pc != 0x2F27ACu) { return; }
    }
    ctx->pc = 0x2F27ACu;
label_2f27ac:
    // 0x2f27ac: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f27acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f27b0:
    // 0x2f27b0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2f27b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f27b4:
    // 0x2f27b4: 0x90652134  lbu         $a1, 0x2134($v1)
    ctx->pc = 0x2f27b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8500)));
label_2f27b8:
    // 0x2f27b8: 0x901823  subu        $v1, $a0, $s0
    ctx->pc = 0x2f27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2f27bc:
    // 0x2f27bc: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2f27c0:
    if (ctx->pc == 0x2F27C0u) {
        ctx->pc = 0x2F27C0u;
            // 0x2f27c0: 0xa33818  mult        $a3, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->pc = 0x2F27C4u;
        goto label_2f27c4;
    }
    ctx->pc = 0x2F27BCu;
    {
        const bool branch_taken_0x2f27bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F27C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F27BCu;
            // 0x2f27c0: 0xa33818  mult        $a3, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f27bc) {
            ctx->pc = 0x2F27CCu;
            goto label_2f27cc;
        }
    }
    ctx->pc = 0x2F27C4u;
label_2f27c4:
    // 0x2f27c4: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x2f27c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_2f27c8:
    // 0x2f27c8: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x2f27c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2f27cc:
    // 0x2f27cc: 0x96c60000  lhu         $a2, 0x0($s6)
    ctx->pc = 0x2f27ccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_2f27d0:
    // 0x2f27d0: 0x71843  sra         $v1, $a3, 1
    ctx->pc = 0x2f27d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 1));
label_2f27d4:
    // 0x2f27d4: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x2f27d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f27d8:
    // 0x2f27d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f27d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f27dc:
    // 0x2f27dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f27dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f27e0:
    // 0x2f27e0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2f27e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f27e4:
    // 0x2f27e4: 0xc0bc760  jal         func_2F1D80
label_2f27e8:
    if (ctx->pc == 0x2F27E8u) {
        ctx->pc = 0x2F27E8u;
            // 0x2f27e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F27ECu;
        goto label_2f27ec;
    }
    ctx->pc = 0x2F27E4u;
    SET_GPR_U32(ctx, 31, 0x2F27ECu);
    ctx->pc = 0x2F27E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F27E4u;
            // 0x2f27e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D80u;
    if (runtime->hasFunction(0x2F1D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27ECu; }
        if (ctx->pc != 0x2F27ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D80_0x2f1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27ECu; }
        if (ctx->pc != 0x2F27ECu) { return; }
    }
    ctx->pc = 0x2F27ECu;
label_2f27ec:
    // 0x2f27ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f27f0:
    // 0x2f27f0: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x2f27f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_2f27f4:
    // 0x2f27f4: 0xc0506ac  jal         func_141AB0
label_2f27f8:
    if (ctx->pc == 0x2F27F8u) {
        ctx->pc = 0x2F27F8u;
            // 0x2f27f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F27FCu;
        goto label_2f27fc;
    }
    ctx->pc = 0x2F27F4u;
    SET_GPR_U32(ctx, 31, 0x2F27FCu);
    ctx->pc = 0x2F27F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F27F4u;
            // 0x2f27f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27FCu; }
        if (ctx->pc != 0x2F27FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27FCu; }
        if (ctx->pc != 0x2F27FCu) { return; }
    }
    ctx->pc = 0x2F27FCu;
label_2f27fc:
    // 0x2f27fc: 0xc0bcf34  jal         func_2F3CD0
label_2f2800:
    if (ctx->pc == 0x2F2800u) {
        ctx->pc = 0x2F2804u;
        goto label_2f2804;
    }
    ctx->pc = 0x2F27FCu;
    SET_GPR_U32(ctx, 31, 0x2F2804u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2804u; }
        if (ctx->pc != 0x2F2804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2804u; }
        if (ctx->pc != 0x2F2804u) { return; }
    }
    ctx->pc = 0x2F2804u;
label_2f2804:
    // 0x2f2804: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f2804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2808:
    // 0x2f2808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f280c:
    // 0x2f280c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f280cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f2810:
    // 0x2f2810: 0x320f809  jalr        $t9
label_2f2814:
    if (ctx->pc == 0x2F2814u) {
        ctx->pc = 0x2F2814u;
            // 0x2f2814: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F2818u;
        goto label_2f2818;
    }
    ctx->pc = 0x2F2810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F2818u);
        ctx->pc = 0x2F2814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2810u;
            // 0x2f2814: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F2818u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F2818u; }
            if (ctx->pc != 0x2F2818u) { return; }
        }
        }
    }
    ctx->pc = 0x2F2818u;
label_2f2818:
    // 0x2f2818: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x2f2818u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_2f281c:
    // 0x2f281c: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2f281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_2f2820:
    // 0x2f2820: 0x24530358  addiu       $s3, $v0, 0x358
    ctx->pc = 0x2f2820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 856));
label_2f2824:
    // 0x2f2824: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x2f2824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2f2828:
    // 0x2f2828: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_2f282c:
    if (ctx->pc == 0x2F282Cu) {
        ctx->pc = 0x2F2830u;
        goto label_2f2830;
    }
    ctx->pc = 0x2F2828u;
    {
        const bool branch_taken_0x2f2828 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2828) {
            ctx->pc = 0x2F2840u;
            goto label_2f2840;
        }
    }
    ctx->pc = 0x2F2830u;
label_2f2830:
    // 0x2f2830: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f2830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f2834:
    // 0x2f2834: 0x12020030  beq         $s0, $v0, . + 4 + (0x30 << 2)
label_2f2838:
    if (ctx->pc == 0x2F2838u) {
        ctx->pc = 0x2F283Cu;
        goto label_2f283c;
    }
    ctx->pc = 0x2F2834u;
    {
        const bool branch_taken_0x2f2834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f2834) {
            ctx->pc = 0x2F28F8u;
            goto label_2f28f8;
        }
    }
    ctx->pc = 0x2F283Cu;
label_2f283c:
    // 0x2f283c: 0x0  nop
    ctx->pc = 0x2f283cu;
    // NOP
label_2f2840:
    // 0x2f2840: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2f2840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_2f2844:
    // 0x2f2844: 0x16170002  bne         $s0, $s7, . + 4 + (0x2 << 2)
label_2f2848:
    if (ctx->pc == 0x2F2848u) {
        ctx->pc = 0x2F2848u;
            // 0x2f2848: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->pc = 0x2F284Cu;
        goto label_2f284c;
    }
    ctx->pc = 0x2F2844u;
    {
        const bool branch_taken_0x2f2844 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        ctx->pc = 0x2F2848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2844u;
            // 0x2f2848: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2844) {
            ctx->pc = 0x2F2850u;
            goto label_2f2850;
        }
    }
    ctx->pc = 0x2F284Cu;
label_2f284c:
    // 0x2f284c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f284cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2850:
    // 0x2f2850: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x2f2850u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2854:
    // 0x2f2854: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2f2854u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2f2858:
    // 0x2f2858: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f2858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f285c:
    // 0x2f285c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f285cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f2860:
    // 0x2f2860: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x2f2860u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2f2864:
    // 0x2f2864: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f2864u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2868:
    // 0x2f2868: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f2868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f286c:
    // 0x2f286c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f286cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2870:
    // 0x2f2870: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2f2870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2f2874:
    // 0x2f2874: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x2f2874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_2f2878:
    // 0x2f2878: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f287c:
    // 0x2f287c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f287cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2880:
    // 0x2f2880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f2880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2884:
    // 0x2f2884: 0x0  nop
    ctx->pc = 0x2f2884u;
    // NOP
label_2f2888:
    // 0x2f2888: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f2888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f288c:
    // 0x2f288c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f2890:
    // 0x2f2890: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f2890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2894:
    // 0x2f2894: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f2894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2898:
    // 0x2f2898: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f2898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2f289c:
    // 0x2f289c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f289cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f28a0:
    // 0x2f28a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f28a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f28a4:
    // 0x2f28a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f28a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f28a8:
    // 0x2f28a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f28a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f28ac:
    // 0x2f28ac: 0x0  nop
    ctx->pc = 0x2f28acu;
    // NOP
label_2f28b0:
    // 0x2f28b0: 0x2a31023  subu        $v0, $s5, $v1
    ctx->pc = 0x2f28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f28b4:
    // 0x2f28b4: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x2f28b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f28b8:
    // 0x2f28b8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2f28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f28bc:
    // 0x2f28bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f28bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f28c0:
    // 0x2f28c0: 0x2894023  subu        $t0, $s4, $t1
    ctx->pc = 0x2f28c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f28c4:
    // 0x2f28c4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f28c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f28c8:
    // 0x2f28c8: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x2f28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f28cc:
    // 0x2f28cc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f28ccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f28d0:
    // 0x2f28d0: 0x0  nop
    ctx->pc = 0x2f28d0u;
    // NOP
label_2f28d4:
    // 0x2f28d4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f28d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f28d8:
    // 0x2f28d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f28d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f28dc:
    // 0x2f28dc: 0x0  nop
    ctx->pc = 0x2f28dcu;
    // NOP
label_2f28e0:
    // 0x2f28e0: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f28e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f28e4:
    // 0x2f28e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f28e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f28e8:
    // 0x2f28e8: 0xc0bc284  jal         func_2F0A10
label_2f28ec:
    if (ctx->pc == 0x2F28ECu) {
        ctx->pc = 0x2F28ECu;
            // 0x2f28ec: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F28F0u;
        goto label_2f28f0;
    }
    ctx->pc = 0x2F28E8u;
    SET_GPR_U32(ctx, 31, 0x2F28F0u);
    ctx->pc = 0x2F28ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F28E8u;
            // 0x2f28ec: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F28F0u; }
        if (ctx->pc != 0x2F28F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F28F0u; }
        if (ctx->pc != 0x2F28F0u) { return; }
    }
    ctx->pc = 0x2F28F0u;
label_2f28f0:
    // 0x2f28f0: 0x92c20004  lbu         $v0, 0x4($s6)
    ctx->pc = 0x2f28f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_2f28f4:
    // 0x2f28f4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2f28f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2f28f8:
    // 0x2f28f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f28f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f28fc:
    // 0x2f28fc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2f28fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f2900:
    // 0x2f2900: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_2f2904:
    if (ctx->pc == 0x2F2904u) {
        ctx->pc = 0x2F2904u;
            // 0x2f2904: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2F2908u;
        goto label_2f2908;
    }
    ctx->pc = 0x2F2900u;
    {
        const bool branch_taken_0x2f2900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2900u;
            // 0x2f2904: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2900) {
            ctx->pc = 0x2F2828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f2828;
        }
    }
    ctx->pc = 0x2F2908u;
label_2f2908:
    // 0x2f2908: 0xc0bcf34  jal         func_2F3CD0
label_2f290c:
    if (ctx->pc == 0x2F290Cu) {
        ctx->pc = 0x2F2910u;
        goto label_2f2910;
    }
    ctx->pc = 0x2F2908u;
    SET_GPR_U32(ctx, 31, 0x2F2910u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2910u; }
        if (ctx->pc != 0x2F2910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2910u; }
        if (ctx->pc != 0x2F2910u) { return; }
    }
    ctx->pc = 0x2F2910u;
label_2f2910:
    // 0x2f2910: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f2910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2914:
    // 0x2f2914: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f2914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f2918:
    // 0x2f2918: 0x320f809  jalr        $t9
label_2f291c:
    if (ctx->pc == 0x2F291Cu) {
        ctx->pc = 0x2F291Cu;
            // 0x2f291c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F2920u;
        goto label_2f2920;
    }
    ctx->pc = 0x2F2918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F2920u);
        ctx->pc = 0x2F291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2918u;
            // 0x2f291c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F2920u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F2920u; }
            if (ctx->pc != 0x2F2920u) { return; }
        }
        }
    }
    ctx->pc = 0x2F2920u;
label_2f2920:
    // 0x2f2920: 0x100004df  b           . + 4 + (0x4DF << 2)
label_2f2924:
    if (ctx->pc == 0x2F2924u) {
        ctx->pc = 0x2F2928u;
        goto label_2f2928;
    }
    ctx->pc = 0x2F2920u;
    {
        const bool branch_taken_0x2f2920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2920) {
            ctx->pc = 0x2F3CA0u;
            goto label_2f3ca0;
        }
    }
    ctx->pc = 0x2F2928u;
label_2f2928:
    // 0x2f2928: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f2928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f292c:
    // 0x2f292c: 0x3c170064  lui         $s7, 0x64
    ctx->pc = 0x2f292cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)100 << 16));
label_2f2930:
    // 0x2f2930: 0x8c520eac  lw          $s2, 0xEAC($v0)
    ctx->pc = 0x2f2930u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_2f2934:
    // 0x2f2934: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x2f2934u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_2f2938:
    // 0x2f2938: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x2f2938u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_2f293c:
    // 0x2f293c: 0x26f72130  addiu       $s7, $s7, 0x2130
    ctx->pc = 0x2f293cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8496));
label_2f2940:
    // 0x2f2940: 0x27deab70  addiu       $fp, $fp, -0x5490
    ctx->pc = 0x2f2940u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945648));
label_2f2944:
    // 0x2f2944: 0x26102110  addiu       $s0, $s0, 0x2110
    ctx->pc = 0x2f2944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8464));
label_2f2948:
    // 0x2f2948: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f2948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f294c:
    // 0x2f294c: 0x9045ee18  lbu         $a1, -0x11E8($v0)
    ctx->pc = 0x2f294cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962712)));
label_2f2950:
    // 0x2f2950: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f2950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f2954:
    // 0x2f2954: 0xa3a50354  sb          $a1, 0x354($sp)
    ctx->pc = 0x2f2954u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 852), (uint8_t)GPR_U32(ctx, 5));
label_2f2958:
    // 0x2f2958: 0x9044ee19  lbu         $a0, -0x11E7($v0)
    ctx->pc = 0x2f2958u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962713)));
label_2f295c:
    // 0x2f295c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f2960:
    // 0x2f2960: 0xa3a40355  sb          $a0, 0x355($sp)
    ctx->pc = 0x2f2960u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 853), (uint8_t)GPR_U32(ctx, 4));
label_2f2964:
    // 0x2f2964: 0x9043ee1a  lbu         $v1, -0x11E6($v0)
    ctx->pc = 0x2f2964u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962714)));
label_2f2968:
    // 0x2f2968: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f2968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f296c:
    // 0x2f296c: 0xa3a30356  sb          $v1, 0x356($sp)
    ctx->pc = 0x2f296cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 854), (uint8_t)GPR_U32(ctx, 3));
label_2f2970:
    // 0x2f2970: 0x9042ee1b  lbu         $v0, -0x11E5($v0)
    ctx->pc = 0x2f2970u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962715)));
label_2f2974:
    // 0x2f2974: 0xc077318  jal         func_1DCC60
label_2f2978:
    if (ctx->pc == 0x2F2978u) {
        ctx->pc = 0x2F2978u;
            // 0x2f2978: 0xa3a20357  sb          $v0, 0x357($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 855), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2F297Cu;
        goto label_2f297c;
    }
    ctx->pc = 0x2F2974u;
    SET_GPR_U32(ctx, 31, 0x2F297Cu);
    ctx->pc = 0x2F2978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2974u;
            // 0x2f2978: 0xa3a20357  sb          $v0, 0x357($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 855), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F297Cu; }
        if (ctx->pc != 0x2F297Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F297Cu; }
        if (ctx->pc != 0x2F297Cu) { return; }
    }
    ctx->pc = 0x2F297Cu;
label_2f297c:
    // 0x2f297c: 0xc0bcf40  jal         func_2F3D00
label_2f2980:
    if (ctx->pc == 0x2F2980u) {
        ctx->pc = 0x2F2980u;
            // 0x2f2980: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2F2984u;
        goto label_2f2984;
    }
    ctx->pc = 0x2F297Cu;
    SET_GPR_U32(ctx, 31, 0x2F2984u);
    ctx->pc = 0x2F2980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F297Cu;
            // 0x2f2980: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D00u;
    if (runtime->hasFunction(0x2F3D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F3D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2984u; }
        if (ctx->pc != 0x2F2984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3D00_0x2f3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2984u; }
        if (ctx->pc != 0x2F2984u) { return; }
    }
    ctx->pc = 0x2F2984u;
label_2f2984:
    // 0x2f2984: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f2984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f2988:
    // 0x2f2988: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x2f2988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_2f298c:
    // 0x2f298c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f2990:
    // 0x2f2990: 0xc0bcf3c  jal         func_2F3CF0
label_2f2994:
    if (ctx->pc == 0x2F2994u) {
        ctx->pc = 0x2F2994u;
            // 0x2f2994: 0x43b023  subu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F2998u;
        goto label_2f2998;
    }
    ctx->pc = 0x2F2990u;
    SET_GPR_U32(ctx, 31, 0x2F2998u);
    ctx->pc = 0x2F2994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2990u;
            // 0x2f2994: 0x43b023  subu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CF0u;
    if (runtime->hasFunction(0x2F3CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2998u; }
        if (ctx->pc != 0x2F2998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CF0_0x2f3cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2998u; }
        if (ctx->pc != 0x2F2998u) { return; }
    }
    ctx->pc = 0x2F2998u;
label_2f2998:
    // 0x2f2998: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x2f2998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_2f299c:
    // 0x2f299c: 0xc0bcf38  jal         func_2F3CE0
label_2f29a0:
    if (ctx->pc == 0x2F29A0u) {
        ctx->pc = 0x2F29A0u;
            // 0x2f29a0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F29A4u;
        goto label_2f29a4;
    }
    ctx->pc = 0x2F299Cu;
    SET_GPR_U32(ctx, 31, 0x2F29A4u);
    ctx->pc = 0x2F29A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F299Cu;
            // 0x2f29a0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CE0u;
    if (runtime->hasFunction(0x2F3CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29A4u; }
        if (ctx->pc != 0x2F29A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CE0_0x2f3ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29A4u; }
        if (ctx->pc != 0x2F29A4u) { return; }
    }
    ctx->pc = 0x2F29A4u;
label_2f29a4:
    // 0x2f29a4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f29a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f29a8:
    // 0x2f29a8: 0x26c60002  addiu       $a2, $s6, 0x2
    ctx->pc = 0x2f29a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_2f29ac:
    // 0x2f29ac: 0x90722134  lbu         $s2, 0x2134($v1)
    ctx->pc = 0x2f29acu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8500)));
label_2f29b0:
    // 0x2f29b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f29b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f29b4:
    // 0x2f29b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f29b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f29b8:
    // 0x2f29b8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2f29b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f29bc:
    // 0x2f29bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f29bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f29c0:
    // 0x2f29c0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f29c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f29c4:
    // 0x2f29c4: 0xd23818  mult        $a3, $a2, $s2
    ctx->pc = 0x2f29c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_2f29c8:
    // 0x2f29c8: 0x94732130  lhu         $s3, 0x2130($v1)
    ctx->pc = 0x2f29c8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8496)));
label_2f29cc:
    // 0x2f29cc: 0x71843  sra         $v1, $a3, 1
    ctx->pc = 0x2f29ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 1));
label_2f29d0:
    // 0x2f29d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f29d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f29d4:
    // 0x2f29d4: 0xc0bc760  jal         func_2F1D80
label_2f29d8:
    if (ctx->pc == 0x2F29D8u) {
        ctx->pc = 0x2F29D8u;
            // 0x2f29d8: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F29DCu;
        goto label_2f29dc;
    }
    ctx->pc = 0x2F29D4u;
    SET_GPR_U32(ctx, 31, 0x2F29DCu);
    ctx->pc = 0x2F29D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F29D4u;
            // 0x2f29d8: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D80u;
    if (runtime->hasFunction(0x2F1D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29DCu; }
        if (ctx->pc != 0x2F29DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D80_0x2f1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29DCu; }
        if (ctx->pc != 0x2F29DCu) { return; }
    }
    ctx->pc = 0x2F29DCu;
label_2f29dc:
    // 0x2f29dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f29e0:
    // 0x2f29e0: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x2f29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_2f29e4:
    // 0x2f29e4: 0xc0506ac  jal         func_141AB0
label_2f29e8:
    if (ctx->pc == 0x2F29E8u) {
        ctx->pc = 0x2F29E8u;
            // 0x2f29e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F29ECu;
        goto label_2f29ec;
    }
    ctx->pc = 0x2F29E4u;
    SET_GPR_U32(ctx, 31, 0x2F29ECu);
    ctx->pc = 0x2F29E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F29E4u;
            // 0x2f29e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29ECu; }
        if (ctx->pc != 0x2F29ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29ECu; }
        if (ctx->pc != 0x2F29ECu) { return; }
    }
    ctx->pc = 0x2F29ECu;
label_2f29ec:
    // 0x2f29ec: 0xc0bcf34  jal         func_2F3CD0
label_2f29f0:
    if (ctx->pc == 0x2F29F0u) {
        ctx->pc = 0x2F29F4u;
        goto label_2f29f4;
    }
    ctx->pc = 0x2F29ECu;
    SET_GPR_U32(ctx, 31, 0x2F29F4u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29F4u; }
        if (ctx->pc != 0x2F29F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29F4u; }
        if (ctx->pc != 0x2F29F4u) { return; }
    }
    ctx->pc = 0x2F29F4u;
label_2f29f4:
    // 0x2f29f4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f29f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f29f8:
    // 0x2f29f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f29f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f29fc:
    // 0x2f29fc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f29fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f2a00:
    // 0x2f2a00: 0x320f809  jalr        $t9
label_2f2a04:
    if (ctx->pc == 0x2F2A04u) {
        ctx->pc = 0x2F2A04u;
            // 0x2f2a04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F2A08u;
        goto label_2f2a08;
    }
    ctx->pc = 0x2F2A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F2A08u);
        ctx->pc = 0x2F2A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2A00u;
            // 0x2f2a04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F2A08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A08u; }
            if (ctx->pc != 0x2F2A08u) { return; }
        }
        }
    }
    ctx->pc = 0x2F2A08u;
label_2f2a08:
    // 0x2f2a08: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2f2a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2f2a0c:
    // 0x2f2a0c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x2f2a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_2f2a10:
    // 0x2f2a10: 0x24a5add0  addiu       $a1, $a1, -0x5230
    ctx->pc = 0x2f2a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946256));
label_2f2a14:
    // 0x2f2a14: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f2a18:
    // 0x2f2a18: 0x7fa202a0  sq          $v0, 0x2A0($sp)
    ctx->pc = 0x2f2a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
label_2f2a1c:
    // 0x2f2a1c: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x2f2a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2f2a20:
    // 0x2f2a20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f2a24:
    // 0x2f2a24: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x2f2a24u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2f2a28:
    // 0x2f2a28: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2f2a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f2a2c:
    // 0x2f2a2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2a30:
    // 0x2f2a30: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2f2a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f2a34:
    // 0x2f2a34: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x2f2a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2f2a38:
    // 0x2f2a38: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2f2a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f2a3c:
    // 0x2f2a3c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f2a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2a40:
    // 0x2f2a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a44:
    // 0x2f2a44: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2f2a44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2f2a48:
    // 0x2f2a48: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2f2a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2f2a4c:
    // 0x2f2a4c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2a4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_2f2a50:
    // 0x2f2a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2a54:
    // 0x2f2a54: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x2f2a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f2a58:
    // 0x2f2a58: 0x0  nop
    ctx->pc = 0x2f2a58u;
    // NOP
label_2f2a5c:
    // 0x2f2a5c: 0x2a91021  addu        $v0, $s5, $t1
    ctx->pc = 0x2f2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_2f2a60:
    // 0x2f2a60: 0x2a9a023  subu        $s4, $s5, $t1
    ctx->pc = 0x2f2a60u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_2f2a64:
    // 0x2f2a64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2a64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f2a68:
    // 0x2f2a68: 0x7fa20290  sq          $v0, 0x290($sp)
    ctx->pc = 0x2f2a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
label_2f2a6c:
    // 0x2f2a6c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2f2a6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f2a70:
    // 0x2f2a70: 0x0  nop
    ctx->pc = 0x2f2a70u;
    // NOP
label_2f2a74:
    // 0x2f2a74: 0x2424823  subu        $t1, $s2, $v0
    ctx->pc = 0x2f2a74u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2f2a78:
    // 0x2f2a78: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2a78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2a7c:
    // 0x2f2a7c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2f2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2f2a80:
    // 0x2f2a80: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f2a80u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2a84:
    // 0x2f2a84: 0x0  nop
    ctx->pc = 0x2f2a84u;
    // NOP
label_2f2a88:
    // 0x2f2a88: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f2a88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2a8c:
    // 0x2f2a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2a90:
    // 0x2f2a90: 0x0  nop
    ctx->pc = 0x2f2a90u;
    // NOP
label_2f2a94:
    // 0x2f2a94: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f2a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f2a98:
    // 0x2f2a98: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x2f2a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2f2a9c:
    // 0x2f2a9c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f2a9cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2aa0:
    // 0x2f2aa0: 0x0  nop
    ctx->pc = 0x2f2aa0u;
    // NOP
label_2f2aa4:
    // 0x2f2aa4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f2aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f2aa8:
    // 0x2f2aa8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2f2aa8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2aac:
    // 0x2f2aac: 0x0  nop
    ctx->pc = 0x2f2aacu;
    // NOP
label_2f2ab0:
    // 0x2f2ab0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f2ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2ab4:
    // 0x2f2ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2ab8:
    // 0x2f2ab8: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f2ab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2abc:
    // 0x2f2abc: 0xc0bc284  jal         func_2F0A10
label_2f2ac0:
    if (ctx->pc == 0x2F2AC0u) {
        ctx->pc = 0x2F2AC0u;
            // 0x2f2ac0: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F2AC4u;
        goto label_2f2ac4;
    }
    ctx->pc = 0x2F2ABCu;
    SET_GPR_U32(ctx, 31, 0x2F2AC4u);
    ctx->pc = 0x2F2AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2ABCu;
            // 0x2f2ac0: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2AC4u; }
        if (ctx->pc != 0x2F2AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2AC4u; }
        if (ctx->pc != 0x2F2AC4u) { return; }
    }
    ctx->pc = 0x2F2AC4u;
label_2f2ac4:
    // 0x2f2ac4: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x2f2ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_2f2ac8:
    // 0x2f2ac8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f2acc:
    // 0x2f2acc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f2accu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2f2ad0:
    // 0x2f2ad0: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x2f2ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_2f2ad4:
    // 0x2f2ad4: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x2f2ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
label_2f2ad8:
    // 0x2f2ad8: 0x2673ad50  addiu       $s3, $s3, -0x52B0
    ctx->pc = 0x2f2ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946128));
label_2f2adc:
    // 0x2f2adc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f2ae0:
    // 0x2f2ae0: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x2f2ae0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2f2ae4:
    // 0x2f2ae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2ae8:
    // 0x2f2ae8: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x2f2ae8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2f2aec:
    // 0x2f2aec: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2f2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2f2af0:
    // 0x2f2af0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2af4:
    // 0x2f2af4: 0x90422133  lbu         $v0, 0x2133($v0)
    ctx->pc = 0x2f2af4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8499)));
label_2f2af8:
    // 0x2f2af8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2f2af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2afc:
    // 0x2f2afc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f2afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2b00:
    // 0x2f2b00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b04:
    // 0x2f2b04: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x2f2b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
label_2f2b08:
    // 0x2f2b08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f2b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f2b0c:
    // 0x2f2b0c: 0x7ba20250  lq          $v0, 0x250($sp)
    ctx->pc = 0x2f2b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_2f2b10:
    // 0x2f2b10: 0x2a22823  subu        $a1, $s5, $v0
    ctx->pc = 0x2f2b10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2f2b14:
    // 0x2f2b14: 0x90622132  lbu         $v0, 0x2132($v1)
    ctx->pc = 0x2f2b14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8498)));
label_2f2b18:
    // 0x2f2b18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2b18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f2b1c:
    // 0x2f2b1c: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x2f2b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
label_2f2b20:
    // 0x2f2b20: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f2b24:
    // 0x2f2b24: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x2f2b24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2f2b28:
    // 0x2f2b28: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x2f2b28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
label_2f2b2c:
    // 0x2f2b2c: 0x2825023  subu        $t2, $s4, $v0
    ctx->pc = 0x2f2b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2f2b30:
    // 0x2f2b30: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x2f2b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_2f2b34:
    // 0x2f2b34: 0x24ba021  addu        $s4, $s2, $t3
    ctx->pc = 0x2f2b34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
label_2f2b38:
    // 0x2f2b38: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f2b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2b3c:
    // 0x2f2b3c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f2b40:
    // 0x2f2b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2b44:
    // 0x2f2b44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b48:
    // 0x2f2b48: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f2b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2b4c:
    // 0x2f2b4c: 0x24b1023  subu        $v0, $s2, $t3
    ctx->pc = 0x2f2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
label_2f2b50:
    // 0x2f2b50: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x2f2b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
label_2f2b54:
    // 0x2f2b54: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f2b54u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2b58:
    // 0x2f2b58: 0x0  nop
    ctx->pc = 0x2f2b58u;
    // NOP
label_2f2b5c:
    // 0x2f2b5c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f2b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f2b60:
    // 0x2f2b60: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f2b60u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2b64:
    // 0x2f2b64: 0x0  nop
    ctx->pc = 0x2f2b64u;
    // NOP
label_2f2b68:
    // 0x2f2b68: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2b6c:
    // 0x2f2b6c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f2b6cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2b70:
    // 0x2f2b70: 0x0  nop
    ctx->pc = 0x2f2b70u;
    // NOP
label_2f2b74:
    // 0x2f2b74: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f2b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f2b78:
    // 0x2f2b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2b7c:
    // 0x2f2b7c: 0x0  nop
    ctx->pc = 0x2f2b7cu;
    // NOP
label_2f2b80:
    // 0x2f2b80: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f2b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2b84:
    // 0x2f2b84: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2f2b84u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2b88:
    // 0x2f2b88: 0xc0bc284  jal         func_2F0A10
label_2f2b8c:
    if (ctx->pc == 0x2F2B8Cu) {
        ctx->pc = 0x2F2B8Cu;
            // 0x2f2b8c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F2B90u;
        goto label_2f2b90;
    }
    ctx->pc = 0x2F2B88u;
    SET_GPR_U32(ctx, 31, 0x2F2B90u);
    ctx->pc = 0x2F2B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2B88u;
            // 0x2f2b8c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2B90u; }
        if (ctx->pc != 0x2F2B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2B90u; }
        if (ctx->pc != 0x2F2B90u) { return; }
    }
    ctx->pc = 0x2F2B90u;
label_2f2b90:
    // 0x2f2b90: 0x7ba30280  lq          $v1, 0x280($sp)
    ctx->pc = 0x2f2b90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2f2b94:
    // 0x2f2b94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b98:
    // 0x2f2b98: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x2f2b98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2f2b9c:
    // 0x2f2b9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2ba0:
    // 0x2f2ba0: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x2f2ba0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2f2ba4:
    // 0x2f2ba4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f2ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2ba8:
    // 0x2f2ba8: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x2f2ba8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2f2bac:
    // 0x2f2bac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2bb0:
    // 0x2f2bb0: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x2f2bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f2bb4:
    // 0x2f2bb4: 0x7ba20250  lq          $v0, 0x250($sp)
    ctx->pc = 0x2f2bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_2f2bb8:
    // 0x2f2bb8: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x2f2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2f2bbc:
    // 0x2f2bbc: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x2f2bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_2f2bc0:
    // 0x2f2bc0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f2bc4:
    // 0x2f2bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2bc8:
    // 0x2f2bc8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f2bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f2bcc:
    // 0x2f2bcc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f2bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2bd0:
    // 0x2f2bd0: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x2f2bd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_2f2bd4:
    // 0x2f2bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2bd8:
    // 0x2f2bd8: 0x0  nop
    ctx->pc = 0x2f2bd8u;
    // NOP
label_2f2bdc:
    // 0x2f2bdc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f2bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2be0:
    // 0x2f2be0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f2be0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2be4:
    // 0x2f2be4: 0x0  nop
    ctx->pc = 0x2f2be4u;
    // NOP
label_2f2be8:
    // 0x2f2be8: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f2be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f2bec:
    // 0x2f2bec: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2f2becu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2bf0:
    // 0x2f2bf0: 0x0  nop
    ctx->pc = 0x2f2bf0u;
    // NOP
label_2f2bf4:
    // 0x2f2bf4: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f2bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f2bf8:
    // 0x2f2bf8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f2bf8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2bfc:
    // 0x2f2bfc: 0x0  nop
    ctx->pc = 0x2f2bfcu;
    // NOP
label_2f2c00:
    // 0x2f2c00: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2c04:
    // 0x2f2c04: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f2c04u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2c08:
    // 0x2f2c08: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f2c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2c0c:
    // 0x2f2c0c: 0xc0bc284  jal         func_2F0A10
label_2f2c10:
    if (ctx->pc == 0x2F2C10u) {
        ctx->pc = 0x2F2C10u;
            // 0x2f2c10: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F2C14u;
        goto label_2f2c14;
    }
    ctx->pc = 0x2F2C0Cu;
    SET_GPR_U32(ctx, 31, 0x2F2C14u);
    ctx->pc = 0x2F2C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C0Cu;
            // 0x2f2c10: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2C14u; }
        if (ctx->pc != 0x2F2C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2C14u; }
        if (ctx->pc != 0x2F2C14u) { return; }
    }
    ctx->pc = 0x2F2C14u;
label_2f2c14:
    // 0x2f2c14: 0x7ba202a0  lq          $v0, 0x2A0($sp)
    ctx->pc = 0x2f2c14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_2f2c18:
    // 0x2f2c18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f2c18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2c1c:
    // 0x2f2c1c: 0x242a021  addu        $s4, $s2, $v0
    ctx->pc = 0x2f2c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2f2c20:
    // 0x2f2c20: 0x27b20354  addiu       $s2, $sp, 0x354
    ctx->pc = 0x2f2c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 852));
label_2f2c24:
    // 0x2f2c24: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2f2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_2f2c28:
    // 0x2f2c28: 0x16710003  bne         $s3, $s1, . + 4 + (0x3 << 2)
label_2f2c2c:
    if (ctx->pc == 0x2F2C2Cu) {
        ctx->pc = 0x2F2C2Cu;
            // 0x2f2c2c: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->pc = 0x2F2C30u;
        goto label_2f2c30;
    }
    ctx->pc = 0x2F2C28u;
    {
        const bool branch_taken_0x2f2c28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F2C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C28u;
            // 0x2f2c2c: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c28) {
            ctx->pc = 0x2F2C38u;
            goto label_2f2c38;
        }
    }
    ctx->pc = 0x2F2C30u;
label_2f2c30:
    // 0x2f2c30: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f2c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2c34:
    // 0x2f2c34: 0x0  nop
    ctx->pc = 0x2f2c34u;
    // NOP
label_2f2c38:
    // 0x2f2c38: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x2f2c38u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2f2c3c:
    // 0x2f2c3c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x2f2c3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2c40:
    // 0x2f2c40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f2c44:
    // 0x2f2c44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f2c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f2c48:
    // 0x2f2c48: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2f2c48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2f2c4c:
    // 0x2f2c4c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f2c4cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2c50:
    // 0x2f2c50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f2c54:
    // 0x2f2c54: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2c58:
    // 0x2f2c58: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2f2c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2f2c5c:
    // 0x2f2c5c: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x2f2c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_2f2c60:
    // 0x2f2c60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2c64:
    // 0x2f2c64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2c68:
    // 0x2f2c68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f2c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2c6c:
    // 0x2f2c6c: 0x0  nop
    ctx->pc = 0x2f2c6cu;
    // NOP
label_2f2c70:
    // 0x2f2c70: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f2c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f2c74:
    // 0x2f2c74: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f2c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f2c78:
    // 0x2f2c78: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f2c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2c7c:
    // 0x2f2c7c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f2c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2c80:
    // 0x2f2c80: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f2c80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2f2c84:
    // 0x2f2c84: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f2c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f2c88:
    // 0x2f2c88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f2c8c:
    // 0x2f2c8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2c8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f2c90:
    // 0x2f2c90: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f2c90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f2c94:
    // 0x2f2c94: 0x0  nop
    ctx->pc = 0x2f2c94u;
    // NOP
label_2f2c98:
    // 0x2f2c98: 0x2a31023  subu        $v0, $s5, $v1
    ctx->pc = 0x2f2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f2c9c:
    // 0x2f2c9c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x2f2c9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f2ca0:
    // 0x2f2ca0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2f2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f2ca4:
    // 0x2f2ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2ca8:
    // 0x2f2ca8: 0x2894023  subu        $t0, $s4, $t1
    ctx->pc = 0x2f2ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f2cac:
    // 0x2f2cac: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f2cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2cb0:
    // 0x2f2cb0: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x2f2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f2cb4:
    // 0x2f2cb4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f2cb4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2cb8:
    // 0x2f2cb8: 0x0  nop
    ctx->pc = 0x2f2cb8u;
    // NOP
label_2f2cbc:
    // 0x2f2cbc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f2cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2cc0:
    // 0x2f2cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f2cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2cc4:
    // 0x2f2cc4: 0x0  nop
    ctx->pc = 0x2f2cc4u;
    // NOP
label_2f2cc8:
    // 0x2f2cc8: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f2cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f2ccc:
    // 0x2f2ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2cd0:
    // 0x2f2cd0: 0xc0bc284  jal         func_2F0A10
label_2f2cd4:
    if (ctx->pc == 0x2F2CD4u) {
        ctx->pc = 0x2F2CD4u;
            // 0x2f2cd4: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F2CD8u;
        goto label_2f2cd8;
    }
    ctx->pc = 0x2F2CD0u;
    SET_GPR_U32(ctx, 31, 0x2F2CD8u);
    ctx->pc = 0x2F2CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2CD0u;
            // 0x2f2cd4: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CD8u; }
        if (ctx->pc != 0x2F2CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CD8u; }
        if (ctx->pc != 0x2F2CD8u) { return; }
    }
    ctx->pc = 0x2F2CD8u;
label_2f2cd8:
    // 0x2f2cd8: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x2f2cd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
label_2f2cdc:
    // 0x2f2cdc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f2cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f2ce0:
    // 0x2f2ce0: 0x276102a  slt         $v0, $s3, $s6
    ctx->pc = 0x2f2ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2f2ce4:
    // 0x2f2ce4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f2ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f2ce8:
    // 0x2f2ce8: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2f2cec:
    if (ctx->pc == 0x2F2CECu) {
        ctx->pc = 0x2F2CECu;
            // 0x2f2cec: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F2CF0u;
        goto label_2f2cf0;
    }
    ctx->pc = 0x2F2CE8u;
    {
        const bool branch_taken_0x2f2ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2CE8u;
            // 0x2f2cec: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ce8) {
            ctx->pc = 0x2F2C24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f2c24;
        }
    }
    ctx->pc = 0x2F2CF0u;
label_2f2cf0:
    // 0x2f2cf0: 0xc0bcf34  jal         func_2F3CD0
label_2f2cf4:
    if (ctx->pc == 0x2F2CF4u) {
        ctx->pc = 0x2F2CF8u;
        goto label_2f2cf8;
    }
    ctx->pc = 0x2F2CF0u;
    SET_GPR_U32(ctx, 31, 0x2F2CF8u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CF8u; }
        if (ctx->pc != 0x2F2CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CF8u; }
        if (ctx->pc != 0x2F2CF8u) { return; }
    }
    ctx->pc = 0x2F2CF8u;
label_2f2cf8:
    // 0x2f2cf8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f2cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2cfc:
    // 0x2f2cfc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f2cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f2d00:
    // 0x2f2d00: 0x320f809  jalr        $t9
label_2f2d04:
    if (ctx->pc == 0x2F2D04u) {
        ctx->pc = 0x2F2D04u;
            // 0x2f2d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D08u;
        goto label_2f2d08;
    }
    ctx->pc = 0x2F2D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F2D08u);
        ctx->pc = 0x2F2D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2D00u;
            // 0x2f2d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F2D08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D08u; }
            if (ctx->pc != 0x2F2D08u) { return; }
        }
        }
    }
    ctx->pc = 0x2F2D08u;
label_2f2d08:
    // 0x2f2d08: 0x100003e5  b           . + 4 + (0x3E5 << 2)
label_2f2d0c:
    if (ctx->pc == 0x2F2D0Cu) {
        ctx->pc = 0x2F2D10u;
        goto label_2f2d10;
    }
    ctx->pc = 0x2F2D08u;
    {
        const bool branch_taken_0x2f2d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d08) {
            ctx->pc = 0x2F3CA0u;
            goto label_2f3ca0;
        }
    }
    ctx->pc = 0x2F2D10u;
label_2f2d10:
    // 0x2f2d10: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x2f2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2f2d14:
    // 0x2f2d14: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x2f2d14u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_2f2d18:
    // 0x2f2d18: 0x50b821  addu        $s7, $v0, $s0
    ctx->pc = 0x2f2d18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2f2d1c:
    // 0x2f2d1c: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x2f2d1cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_2f2d20:
    // 0x2f2d20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f2d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f2d24:
    // 0x2f2d24: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x2f2d24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_2f2d28:
    // 0x2f2d28: 0x8c530eac  lw          $s3, 0xEAC($v0)
    ctx->pc = 0x2f2d28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_2f2d2c:
    // 0x2f2d2c: 0x26d62130  addiu       $s6, $s6, 0x2130
    ctx->pc = 0x2f2d2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8496));
label_2f2d30:
    // 0x2f2d30: 0x27deab70  addiu       $fp, $fp, -0x5490
    ctx->pc = 0x2f2d30u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945648));
label_2f2d34:
    // 0x2f2d34: 0x26522110  addiu       $s2, $s2, 0x2110
    ctx->pc = 0x2f2d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8464));
label_2f2d38:
    // 0x2f2d38: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f2d3c:
    // 0x2f2d3c: 0x9044ee08  lbu         $a0, -0x11F8($v0)
    ctx->pc = 0x2f2d3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962696)));
label_2f2d40:
    // 0x2f2d40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f2d44:
    // 0x2f2d44: 0xa3a40350  sb          $a0, 0x350($sp)
    ctx->pc = 0x2f2d44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 848), (uint8_t)GPR_U32(ctx, 4));
label_2f2d48:
    // 0x2f2d48: 0x9043ee09  lbu         $v1, -0x11F7($v0)
    ctx->pc = 0x2f2d48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962697)));
label_2f2d4c:
    // 0x2f2d4c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f2d50:
    // 0x2f2d50: 0xa3a30351  sb          $v1, 0x351($sp)
    ctx->pc = 0x2f2d50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 849), (uint8_t)GPR_U32(ctx, 3));
label_2f2d54:
    // 0x2f2d54: 0x9042ee0a  lbu         $v0, -0x11F6($v0)
    ctx->pc = 0x2f2d54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962698)));
label_2f2d58:
    // 0x2f2d58: 0xc077318  jal         func_1DCC60
label_2f2d5c:
    if (ctx->pc == 0x2F2D5Cu) {
        ctx->pc = 0x2F2D5Cu;
            // 0x2f2d5c: 0xa3a20352  sb          $v0, 0x352($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 850), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2F2D60u;
        goto label_2f2d60;
    }
    ctx->pc = 0x2F2D58u;
    SET_GPR_U32(ctx, 31, 0x2F2D60u);
    ctx->pc = 0x2F2D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2D58u;
            // 0x2f2d5c: 0xa3a20352  sb          $v0, 0x352($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 850), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D60u; }
        if (ctx->pc != 0x2F2D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D60u; }
        if (ctx->pc != 0x2F2D60u) { return; }
    }
    ctx->pc = 0x2F2D60u;
label_2f2d60:
    // 0x2f2d60: 0xc0bcf40  jal         func_2F3D00
label_2f2d64:
    if (ctx->pc == 0x2F2D64u) {
        ctx->pc = 0x2F2D64u;
            // 0x2f2d64: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2F2D68u;
        goto label_2f2d68;
    }
    ctx->pc = 0x2F2D60u;
    SET_GPR_U32(ctx, 31, 0x2F2D68u);
    ctx->pc = 0x2F2D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2D60u;
            // 0x2f2d64: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D00u;
    if (runtime->hasFunction(0x2F3D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F3D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D68u; }
        if (ctx->pc != 0x2F2D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3D00_0x2f3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D68u; }
        if (ctx->pc != 0x2F2D68u) { return; }
    }
    ctx->pc = 0x2F2D68u;
label_2f2d68:
    // 0x2f2d68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f2d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f2d6c:
    // 0x2f2d6c: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f2d70:
    // 0x2f2d70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2d74:
    // 0x2f2d74: 0xc0bcf3c  jal         func_2F3CF0
label_2f2d78:
    if (ctx->pc == 0x2F2D78u) {
        ctx->pc = 0x2F2D78u;
            // 0x2f2d78: 0x438823  subu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F2D7Cu;
        goto label_2f2d7c;
    }
    ctx->pc = 0x2F2D74u;
    SET_GPR_U32(ctx, 31, 0x2F2D7Cu);
    ctx->pc = 0x2F2D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2D74u;
            // 0x2f2d78: 0x438823  subu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CF0u;
    if (runtime->hasFunction(0x2F3CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D7Cu; }
        if (ctx->pc != 0x2F2D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CF0_0x2f3cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D7Cu; }
        if (ctx->pc != 0x2F2D7Cu) { return; }
    }
    ctx->pc = 0x2F2D7Cu;
label_2f2d7c:
    // 0x2f2d7c: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f2d80:
    // 0x2f2d80: 0xc0bcf38  jal         func_2F3CE0
label_2f2d84:
    if (ctx->pc == 0x2F2D84u) {
        ctx->pc = 0x2F2D84u;
            // 0x2f2d84: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D88u;
        goto label_2f2d88;
    }
    ctx->pc = 0x2F2D80u;
    SET_GPR_U32(ctx, 31, 0x2F2D88u);
    ctx->pc = 0x2F2D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2D80u;
            // 0x2f2d84: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CE0u;
    if (runtime->hasFunction(0x2F3CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D88u; }
        if (ctx->pc != 0x2F2D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CE0_0x2f3ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D88u; }
        if (ctx->pc != 0x2F2D88u) { return; }
    }
    ctx->pc = 0x2F2D88u;
label_2f2d88:
    // 0x2f2d88: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f2d8c:
    // 0x2f2d8c: 0x26240002  addiu       $a0, $s1, 0x2
    ctx->pc = 0x2f2d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_2f2d90:
    // 0x2f2d90: 0x90732134  lbu         $s3, 0x2134($v1)
    ctx->pc = 0x2f2d90u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8500)));
label_2f2d94:
    // 0x2f2d94: 0x903023  subu        $a2, $a0, $s0
    ctx->pc = 0x2f2d94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2f2d98:
    // 0x2f2d98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f2d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2d9c:
    // 0x2f2d9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f2d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f2da0:
    // 0x2f2da0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2f2da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f2da4:
    // 0x2f2da4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f2da4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2da8:
    // 0x2f2da8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f2dac:
    // 0x2f2dac: 0x2663818  mult        $a3, $s3, $a2
    ctx->pc = 0x2f2dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_2f2db0:
    // 0x2f2db0: 0x94742130  lhu         $s4, 0x2130($v1)
    ctx->pc = 0x2f2db0u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8496)));
label_2f2db4:
    // 0x2f2db4: 0x71843  sra         $v1, $a3, 1
    ctx->pc = 0x2f2db4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 1));
label_2f2db8:
    // 0x2f2db8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f2db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f2dbc:
    // 0x2f2dbc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f2dc0:
    // 0x2f2dc0: 0xc0bc760  jal         func_2F1D80
label_2f2dc4:
    if (ctx->pc == 0x2F2DC4u) {
        ctx->pc = 0x2F2DC4u;
            // 0x2f2dc4: 0x7fa20240  sq          $v0, 0x240($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
        ctx->pc = 0x2F2DC8u;
        goto label_2f2dc8;
    }
    ctx->pc = 0x2F2DC0u;
    SET_GPR_U32(ctx, 31, 0x2F2DC8u);
    ctx->pc = 0x2F2DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2DC0u;
            // 0x2f2dc4: 0x7fa20240  sq          $v0, 0x240($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D80u;
    if (runtime->hasFunction(0x2F1D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DC8u; }
        if (ctx->pc != 0x2F2DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D80_0x2f1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DC8u; }
        if (ctx->pc != 0x2F2DC8u) { return; }
    }
    ctx->pc = 0x2F2DC8u;
label_2f2dc8:
    // 0x2f2dc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f2dcc:
    // 0x2f2dcc: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x2f2dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_2f2dd0:
    // 0x2f2dd0: 0xc0506ac  jal         func_141AB0
label_2f2dd4:
    if (ctx->pc == 0x2F2DD4u) {
        ctx->pc = 0x2F2DD4u;
            // 0x2f2dd4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F2DD8u;
        goto label_2f2dd8;
    }
    ctx->pc = 0x2F2DD0u;
    SET_GPR_U32(ctx, 31, 0x2F2DD8u);
    ctx->pc = 0x2F2DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2DD0u;
            // 0x2f2dd4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DD8u; }
        if (ctx->pc != 0x2F2DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DD8u; }
        if (ctx->pc != 0x2F2DD8u) { return; }
    }
    ctx->pc = 0x2F2DD8u;
label_2f2dd8:
    // 0x2f2dd8: 0xc0bcf34  jal         func_2F3CD0
label_2f2ddc:
    if (ctx->pc == 0x2F2DDCu) {
        ctx->pc = 0x2F2DE0u;
        goto label_2f2de0;
    }
    ctx->pc = 0x2F2DD8u;
    SET_GPR_U32(ctx, 31, 0x2F2DE0u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DE0u; }
        if (ctx->pc != 0x2F2DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DE0u; }
        if (ctx->pc != 0x2F2DE0u) { return; }
    }
    ctx->pc = 0x2F2DE0u;
label_2f2de0:
    // 0x2f2de0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f2de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2de4:
    // 0x2f2de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2de8:
    // 0x2f2de8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f2de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f2dec:
    // 0x2f2dec: 0x320f809  jalr        $t9
label_2f2df0:
    if (ctx->pc == 0x2F2DF0u) {
        ctx->pc = 0x2F2DF0u;
            // 0x2f2df0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F2DF4u;
        goto label_2f2df4;
    }
    ctx->pc = 0x2F2DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F2DF4u);
        ctx->pc = 0x2F2DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2DECu;
            // 0x2f2df0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F2DF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DF4u; }
            if (ctx->pc != 0x2F2DF4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F2DF4u;
label_2f2df4:
    // 0x2f2df4: 0x7ba30240  lq          $v1, 0x240($sp)
    ctx->pc = 0x2f2df4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_2f2df8:
    // 0x2f2df8: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2f2df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_2f2dfc:
    // 0x2f2dfc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2f2dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2f2e00:
    // 0x2f2e00: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x2f2e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
label_2f2e04:
    // 0x2f2e04: 0x24a5add0  addiu       $a1, $a1, -0x5230
    ctx->pc = 0x2f2e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946256));
label_2f2e08:
    // 0x2f2e08: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x2f2e08u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f2e0c:
    // 0x2f2e0c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2f2e0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f2e10:
    // 0x2f2e10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2e14:
    // 0x2f2e14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f2e18:
    // 0x2f2e18: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f2e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f2e1c:
    // 0x2f2e1c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2f2e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f2e20:
    // 0x2f2e20: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f2e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2e24:
    // 0x2f2e24: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2f2e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f2e28:
    // 0x2f2e28: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x2f2e28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2e2c:
    // 0x2f2e2c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2f2e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f2e30:
    // 0x2f2e30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2e34:
    // 0x2f2e34: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f2e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2e38:
    // 0x2f2e38: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2f2e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2f2e3c:
    // 0x2f2e3c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2f2e3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2f2e40:
    // 0x2f2e40: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2e40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_2f2e44:
    // 0x2f2e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2e48:
    // 0x2f2e48: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x2f2e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f2e4c:
    // 0x2f2e4c: 0x0  nop
    ctx->pc = 0x2f2e4cu;
    // NOP
label_2f2e50:
    // 0x2f2e50: 0x2a91021  addu        $v0, $s5, $t1
    ctx->pc = 0x2f2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_2f2e54:
    // 0x2f2e54: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x2f2e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_2f2e58:
    // 0x2f2e58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f2e5c:
    // 0x2f2e5c: 0x2a91023  subu        $v0, $s5, $t1
    ctx->pc = 0x2f2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_2f2e60:
    // 0x2f2e60: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x2f2e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
label_2f2e64:
    // 0x2f2e64: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2f2e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f2e68:
    // 0x2f2e68: 0x0  nop
    ctx->pc = 0x2f2e68u;
    // NOP
label_2f2e6c:
    // 0x2f2e6c: 0x2624823  subu        $t1, $s3, $v0
    ctx->pc = 0x2f2e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f2e70:
    // 0x2f2e70: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2e74:
    // 0x2f2e74: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2f2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f2e78:
    // 0x2f2e78: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f2e78u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2e7c:
    // 0x2f2e7c: 0x0  nop
    ctx->pc = 0x2f2e7cu;
    // NOP
label_2f2e80:
    // 0x2f2e80: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f2e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2e84:
    // 0x2f2e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2e88:
    // 0x2f2e88: 0x0  nop
    ctx->pc = 0x2f2e88u;
    // NOP
label_2f2e8c:
    // 0x2f2e8c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f2e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f2e90:
    // 0x2f2e90: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x2f2e90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_2f2e94:
    // 0x2f2e94: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f2e94u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2e98:
    // 0x2f2e98: 0x0  nop
    ctx->pc = 0x2f2e98u;
    // NOP
label_2f2e9c:
    // 0x2f2e9c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f2e9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f2ea0:
    // 0x2f2ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2ea4:
    // 0x2f2ea4: 0x0  nop
    ctx->pc = 0x2f2ea4u;
    // NOP
label_2f2ea8:
    // 0x2f2ea8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f2ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2eac:
    // 0x2f2eac: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x2f2eacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_2f2eb0:
    // 0x2f2eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2eb4:
    // 0x2f2eb4: 0xc0bc284  jal         func_2F0A10
label_2f2eb8:
    if (ctx->pc == 0x2F2EB8u) {
        ctx->pc = 0x2F2EB8u;
            // 0x2f2eb8: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F2EBCu;
        goto label_2f2ebc;
    }
    ctx->pc = 0x2F2EB4u;
    SET_GPR_U32(ctx, 31, 0x2F2EBCu);
    ctx->pc = 0x2F2EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2EB4u;
            // 0x2f2eb8: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2EBCu; }
        if (ctx->pc != 0x2F2EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2EBCu; }
        if (ctx->pc != 0x2F2EBCu) { return; }
    }
    ctx->pc = 0x2F2EBCu;
label_2f2ebc:
    // 0x2f2ebc: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x2f2ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_2f2ec0:
    // 0x2f2ec0: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x2f2ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
label_2f2ec4:
    // 0x2f2ec4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f2ec4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2f2ec8:
    // 0x2f2ec8: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x2f2ec8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_2f2ecc:
    // 0x2f2ecc: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x2f2eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
label_2f2ed0:
    // 0x2f2ed0: 0x2694ad50  addiu       $s4, $s4, -0x52B0
    ctx->pc = 0x2f2ed0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946128));
label_2f2ed4:
    // 0x2f2ed4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f2ed8:
    // 0x2f2ed8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f2ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f2edc:
    // 0x2f2edc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2ee0:
    // 0x2f2ee0: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x2f2ee0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2ee4:
    // 0x2f2ee4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2f2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2f2ee8:
    // 0x2f2ee8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2eec:
    // 0x2f2eec: 0x90422133  lbu         $v0, 0x2133($v0)
    ctx->pc = 0x2f2eecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8499)));
label_2f2ef0:
    // 0x2f2ef0: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2f2ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2ef4:
    // 0x2f2ef4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f2ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2ef8:
    // 0x2f2ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2efc:
    // 0x2f2efc: 0x44889000  mtc1        $t0, $f18
    ctx->pc = 0x2f2efcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f2f00:
    // 0x2f2f00: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x2f2f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
label_2f2f04:
    // 0x2f2f04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f2f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f2f08:
    // 0x2f2f08: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x2f2f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2f2f0c:
    // 0x2f2f0c: 0x2a22823  subu        $a1, $s5, $v0
    ctx->pc = 0x2f2f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2f2f10:
    // 0x2f2f10: 0x90622132  lbu         $v0, 0x2132($v1)
    ctx->pc = 0x2f2f10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8498)));
label_2f2f14:
    // 0x2f2f14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2f14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f2f18:
    // 0x2f2f18: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x2f2f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
label_2f2f1c:
    // 0x2f2f1c: 0x7ba30210  lq          $v1, 0x210($sp)
    ctx->pc = 0x2f2f1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_2f2f20:
    // 0x2f2f20: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x2f2f20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_2f2f24:
    // 0x2f2f24: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x2f2f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
label_2f2f28:
    // 0x2f2f28: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x2f2f28u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f2f2c:
    // 0x2f2f2c: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x2f2f2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_2f2f30:
    // 0x2f2f30: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2f2f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f2f34:
    // 0x2f2f34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f2f38:
    // 0x2f2f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2f3c:
    // 0x2f2f3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f2f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f2f40:
    // 0x2f2f40: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f2f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2f44:
    // 0x2f2f44: 0x26b1021  addu        $v0, $s3, $t3
    ctx->pc = 0x2f2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
label_2f2f48:
    // 0x2f2f48: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x2f2f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_2f2f4c:
    // 0x2f2f4c: 0x26b1023  subu        $v0, $s3, $t3
    ctx->pc = 0x2f2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
label_2f2f50:
    // 0x2f2f50: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x2f2f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
label_2f2f54:
    // 0x2f2f54: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f2f54u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2f58:
    // 0x2f2f58: 0x0  nop
    ctx->pc = 0x2f2f58u;
    // NOP
label_2f2f5c:
    // 0x2f2f5c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f2f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f2f60:
    // 0x2f2f60: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f2f60u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2f64:
    // 0x2f2f64: 0x0  nop
    ctx->pc = 0x2f2f64u;
    // NOP
label_2f2f68:
    // 0x2f2f68: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f2f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f2f6c:
    // 0x2f2f6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f2f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2f70:
    // 0x2f2f70: 0x0  nop
    ctx->pc = 0x2f2f70u;
    // NOP
label_2f2f74:
    // 0x2f2f74: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f2f74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f2f78:
    // 0x2f2f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2f7c:
    // 0x2f2f7c: 0x0  nop
    ctx->pc = 0x2f2f7cu;
    // NOP
label_2f2f80:
    // 0x2f2f80: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f2f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2f84:
    // 0x2f2f84: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x2f2f84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_2f2f88:
    // 0x2f2f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2f8c:
    // 0x2f2f8c: 0xc0bc284  jal         func_2F0A10
label_2f2f90:
    if (ctx->pc == 0x2F2F90u) {
        ctx->pc = 0x2F2F90u;
            // 0x2f2f90: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F2F94u;
        goto label_2f2f94;
    }
    ctx->pc = 0x2F2F8Cu;
    SET_GPR_U32(ctx, 31, 0x2F2F94u);
    ctx->pc = 0x2F2F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F8Cu;
            // 0x2f2f90: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F94u; }
        if (ctx->pc != 0x2F2F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F94u; }
        if (ctx->pc != 0x2F2F94u) { return; }
    }
    ctx->pc = 0x2F2F94u;
label_2f2f94:
    // 0x2f2f94: 0x7ba301f0  lq          $v1, 0x1F0($sp)
    ctx->pc = 0x2f2f94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_2f2f98:
    // 0x2f2f98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f2f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f2f9c:
    // 0x2f2f9c: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x2f2f9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_2f2fa0:
    // 0x2f2fa0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f2fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2fa4:
    // 0x2f2fa4: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x2f2fa4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2fa8:
    // 0x2f2fa8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f2fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2fac:
    // 0x2f2fac: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x2f2facu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f2fb0:
    // 0x2f2fb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2fb4:
    // 0x2f2fb4: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x2f2fb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f2fb8:
    // 0x2f2fb8: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x2f2fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2f2fbc:
    // 0x2f2fbc: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x2f2fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2f2fc0:
    // 0x2f2fc0: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x2f2fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_2f2fc4:
    // 0x2f2fc4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f2fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f2fc8:
    // 0x2f2fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2fcc:
    // 0x2f2fcc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f2fd0:
    // 0x2f2fd0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f2fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f2fd4:
    // 0x2f2fd4: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x2f2fd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_2f2fd8:
    // 0x2f2fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2fdc:
    // 0x2f2fdc: 0x0  nop
    ctx->pc = 0x2f2fdcu;
    // NOP
label_2f2fe0:
    // 0x2f2fe0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f2fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f2fe4:
    // 0x2f2fe4: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x2f2fe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_2f2fe8:
    // 0x2f2fe8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f2fe8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2fec:
    // 0x2f2fec: 0x0  nop
    ctx->pc = 0x2f2fecu;
    // NOP
label_2f2ff0:
    // 0x2f2ff0: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f2ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f2ff4:
    // 0x2f2ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2ff8:
    // 0x2f2ff8: 0x0  nop
    ctx->pc = 0x2f2ff8u;
    // NOP
label_2f2ffc:
    // 0x2f2ffc: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f2ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f3000:
    // 0x2f3000: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f3000u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3004:
    // 0x2f3004: 0x0  nop
    ctx->pc = 0x2f3004u;
    // NOP
label_2f3008:
    // 0x2f3008: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f3008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f300c:
    // 0x2f300c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f300cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3010:
    // 0x2f3010: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f3010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f3014:
    // 0x2f3014: 0xc0bc284  jal         func_2F0A10
label_2f3018:
    if (ctx->pc == 0x2F3018u) {
        ctx->pc = 0x2F3018u;
            // 0x2f3018: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F301Cu;
        goto label_2f301c;
    }
    ctx->pc = 0x2F3014u;
    SET_GPR_U32(ctx, 31, 0x2F301Cu);
    ctx->pc = 0x2F3018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3014u;
            // 0x2f3018: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F301Cu; }
        if (ctx->pc != 0x2F301Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F301Cu; }
        if (ctx->pc != 0x2F301Cu) { return; }
    }
    ctx->pc = 0x2F301Cu;
label_2f301c:
    // 0x2f301c: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x2f301cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_2f3020:
    // 0x2f3020: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x2f3020u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f3024:
    // 0x2f3024: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2f3024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_2f3028:
    // 0x2f3028: 0x24530350  addiu       $s3, $v0, 0x350
    ctx->pc = 0x2f3028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
label_2f302c:
    // 0x2f302c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2f302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_2f3030:
    // 0x2f3030: 0x16170003  bne         $s0, $s7, . + 4 + (0x3 << 2)
label_2f3034:
    if (ctx->pc == 0x2F3034u) {
        ctx->pc = 0x2F3034u;
            // 0x2f3034: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->pc = 0x2F3038u;
        goto label_2f3038;
    }
    ctx->pc = 0x2F3030u;
    {
        const bool branch_taken_0x2f3030 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        ctx->pc = 0x2F3034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3030u;
            // 0x2f3034: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3030) {
            ctx->pc = 0x2F3040u;
            goto label_2f3040;
        }
    }
    ctx->pc = 0x2F3038u;
label_2f3038:
    // 0x2f3038: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f3038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f303c:
    // 0x2f303c: 0x0  nop
    ctx->pc = 0x2f303cu;
    // NOP
label_2f3040:
    // 0x2f3040: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x2f3040u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f3044:
    // 0x2f3044: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2f3044u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2f3048:
    // 0x2f3048: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f3048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f304c:
    // 0x2f304c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f304cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f3050:
    // 0x2f3050: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2f3050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f3054:
    // 0x2f3054: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f3054u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3058:
    // 0x2f3058: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f3058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f305c:
    // 0x2f305c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f305cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f3060:
    // 0x2f3060: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2f3060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2f3064:
    // 0x2f3064: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x2f3064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_2f3068:
    // 0x2f3068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f306c:
    // 0x2f306c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f306cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f3070:
    // 0x2f3070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3074:
    // 0x2f3074: 0x0  nop
    ctx->pc = 0x2f3074u;
    // NOP
label_2f3078:
    // 0x2f3078: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f3078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f307c:
    // 0x2f307c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f3080:
    // 0x2f3080: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f3080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3084:
    // 0x2f3084: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f3084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f3088:
    // 0x2f3088: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f3088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2f308c:
    // 0x2f308c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f308cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f3090:
    // 0x2f3090: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3090u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f3094:
    // 0x2f3094: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f3098:
    // 0x2f3098: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f3098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f309c:
    // 0x2f309c: 0x0  nop
    ctx->pc = 0x2f309cu;
    // NOP
label_2f30a0:
    // 0x2f30a0: 0x2a31023  subu        $v0, $s5, $v1
    ctx->pc = 0x2f30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f30a4:
    // 0x2f30a4: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x2f30a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f30a8:
    // 0x2f30a8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2f30a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f30ac:
    // 0x2f30ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f30acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f30b0:
    // 0x2f30b0: 0x2894023  subu        $t0, $s4, $t1
    ctx->pc = 0x2f30b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f30b4:
    // 0x2f30b4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f30b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f30b8:
    // 0x2f30b8: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x2f30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f30bc:
    // 0x2f30bc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f30bcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f30c0:
    // 0x2f30c0: 0x0  nop
    ctx->pc = 0x2f30c0u;
    // NOP
label_2f30c4:
    // 0x2f30c4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f30c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f30c8:
    // 0x2f30c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f30c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f30cc:
    // 0x2f30cc: 0x0  nop
    ctx->pc = 0x2f30ccu;
    // NOP
label_2f30d0:
    // 0x2f30d0: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f30d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f30d4:
    // 0x2f30d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f30d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f30d8:
    // 0x2f30d8: 0xc0bc284  jal         func_2F0A10
label_2f30dc:
    if (ctx->pc == 0x2F30DCu) {
        ctx->pc = 0x2F30DCu;
            // 0x2f30dc: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F30E0u;
        goto label_2f30e0;
    }
    ctx->pc = 0x2F30D8u;
    SET_GPR_U32(ctx, 31, 0x2F30E0u);
    ctx->pc = 0x2F30DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30D8u;
            // 0x2f30dc: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F30E0u; }
        if (ctx->pc != 0x2F30E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F30E0u; }
        if (ctx->pc != 0x2F30E0u) { return; }
    }
    ctx->pc = 0x2F30E0u;
label_2f30e0:
    // 0x2f30e0: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x2f30e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_2f30e4:
    // 0x2f30e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f30e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f30e8:
    // 0x2f30e8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2f30e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f30ec:
    // 0x2f30ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f30ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f30f0:
    // 0x2f30f0: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2f30f4:
    if (ctx->pc == 0x2F30F4u) {
        ctx->pc = 0x2F30F4u;
            // 0x2f30f4: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F30F8u;
        goto label_2f30f8;
    }
    ctx->pc = 0x2F30F0u;
    {
        const bool branch_taken_0x2f30f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F30F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30F0u;
            // 0x2f30f4: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30f0) {
            ctx->pc = 0x2F302Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f302c;
        }
    }
    ctx->pc = 0x2F30F8u;
label_2f30f8:
    // 0x2f30f8: 0xc0bcf34  jal         func_2F3CD0
label_2f30fc:
    if (ctx->pc == 0x2F30FCu) {
        ctx->pc = 0x2F3100u;
        goto label_2f3100;
    }
    ctx->pc = 0x2F30F8u;
    SET_GPR_U32(ctx, 31, 0x2F3100u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3100u; }
        if (ctx->pc != 0x2F3100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3100u; }
        if (ctx->pc != 0x2F3100u) { return; }
    }
    ctx->pc = 0x2F3100u;
label_2f3100:
    // 0x2f3100: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f3100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3104:
    // 0x2f3104: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f3104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f3108:
    // 0x2f3108: 0x320f809  jalr        $t9
label_2f310c:
    if (ctx->pc == 0x2F310Cu) {
        ctx->pc = 0x2F310Cu;
            // 0x2f310c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F3110u;
        goto label_2f3110;
    }
    ctx->pc = 0x2F3108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F3110u);
        ctx->pc = 0x2F310Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3108u;
            // 0x2f310c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F3110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F3110u; }
            if (ctx->pc != 0x2F3110u) { return; }
        }
        }
    }
    ctx->pc = 0x2F3110u;
label_2f3110:
    // 0x2f3110: 0x100002e3  b           . + 4 + (0x2E3 << 2)
label_2f3114:
    if (ctx->pc == 0x2F3114u) {
        ctx->pc = 0x2F3118u;
        goto label_2f3118;
    }
    ctx->pc = 0x2F3110u;
    {
        const bool branch_taken_0x2f3110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3110) {
            ctx->pc = 0x2F3CA0u;
            goto label_2f3ca0;
        }
    }
    ctx->pc = 0x2F3118u;
label_2f3118:
    // 0x2f3118: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x2f3118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2f311c:
    // 0x2f311c: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x2f311cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_2f3120:
    // 0x2f3120: 0x50b821  addu        $s7, $v0, $s0
    ctx->pc = 0x2f3120u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2f3124:
    // 0x2f3124: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x2f3124u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_2f3128:
    // 0x2f3128: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f3128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f312c:
    // 0x2f312c: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x2f312cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_2f3130:
    // 0x2f3130: 0x8c530eac  lw          $s3, 0xEAC($v0)
    ctx->pc = 0x2f3130u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_2f3134:
    // 0x2f3134: 0x26d62130  addiu       $s6, $s6, 0x2130
    ctx->pc = 0x2f3134u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8496));
label_2f3138:
    // 0x2f3138: 0x27deab70  addiu       $fp, $fp, -0x5490
    ctx->pc = 0x2f3138u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945648));
label_2f313c:
    // 0x2f313c: 0x26312110  addiu       $s1, $s1, 0x2110
    ctx->pc = 0x2f313cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8464));
label_2f3140:
    // 0x2f3140: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f3140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f3144:
    // 0x2f3144: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f3144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f3148:
    // 0x2f3148: 0x9045ee20  lbu         $a1, -0x11E0($v0)
    ctx->pc = 0x2f3148u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962720)));
label_2f314c:
    // 0x2f314c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f3150:
    // 0x2f3150: 0xa3a5034c  sb          $a1, 0x34C($sp)
    ctx->pc = 0x2f3150u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 844), (uint8_t)GPR_U32(ctx, 5));
label_2f3154:
    // 0x2f3154: 0x9043ee21  lbu         $v1, -0x11DF($v0)
    ctx->pc = 0x2f3154u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962721)));
label_2f3158:
    // 0x2f3158: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f3158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f315c:
    // 0x2f315c: 0xa3a3034d  sb          $v1, 0x34D($sp)
    ctx->pc = 0x2f315cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 845), (uint8_t)GPR_U32(ctx, 3));
label_2f3160:
    // 0x2f3160: 0x9042ee22  lbu         $v0, -0x11DE($v0)
    ctx->pc = 0x2f3160u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962722)));
label_2f3164:
    // 0x2f3164: 0xc0bcf3c  jal         func_2F3CF0
label_2f3168:
    if (ctx->pc == 0x2F3168u) {
        ctx->pc = 0x2F3168u;
            // 0x2f3168: 0xa3a2034e  sb          $v0, 0x34E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 846), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2F316Cu;
        goto label_2f316c;
    }
    ctx->pc = 0x2F3164u;
    SET_GPR_U32(ctx, 31, 0x2F316Cu);
    ctx->pc = 0x2F3168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3164u;
            // 0x2f3168: 0xa3a2034e  sb          $v0, 0x34E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 846), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CF0u;
    if (runtime->hasFunction(0x2F3CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F316Cu; }
        if (ctx->pc != 0x2F316Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CF0_0x2f3cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F316Cu; }
        if (ctx->pc != 0x2F316Cu) { return; }
    }
    ctx->pc = 0x2F316Cu;
label_2f316c:
    // 0x2f316c: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f316cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f3170:
    // 0x2f3170: 0xc0bcf38  jal         func_2F3CE0
label_2f3174:
    if (ctx->pc == 0x2F3174u) {
        ctx->pc = 0x2F3174u;
            // 0x2f3174: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F3178u;
        goto label_2f3178;
    }
    ctx->pc = 0x2F3170u;
    SET_GPR_U32(ctx, 31, 0x2F3178u);
    ctx->pc = 0x2F3174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3170u;
            // 0x2f3174: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CE0u;
    if (runtime->hasFunction(0x2F3CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3178u; }
        if (ctx->pc != 0x2F3178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CE0_0x2f3ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3178u; }
        if (ctx->pc != 0x2F3178u) { return; }
    }
    ctx->pc = 0x2F3178u;
label_2f3178:
    // 0x2f3178: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f3178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f317c:
    // 0x2f317c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2f317cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f3180:
    // 0x2f3180: 0x90652134  lbu         $a1, 0x2134($v1)
    ctx->pc = 0x2f3180u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8500)));
label_2f3184:
    // 0x2f3184: 0x901823  subu        $v1, $a0, $s0
    ctx->pc = 0x2f3184u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2f3188:
    // 0x2f3188: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2f318c:
    if (ctx->pc == 0x2F318Cu) {
        ctx->pc = 0x2F318Cu;
            // 0x2f318c: 0xa33818  mult        $a3, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->pc = 0x2F3190u;
        goto label_2f3190;
    }
    ctx->pc = 0x2F3188u;
    {
        const bool branch_taken_0x2f3188 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3188u;
            // 0x2f318c: 0xa33818  mult        $a3, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3188) {
            ctx->pc = 0x2F3198u;
            goto label_2f3198;
        }
    }
    ctx->pc = 0x2F3190u;
label_2f3190:
    // 0x2f3190: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x2f3190u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_2f3194:
    // 0x2f3194: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x2f3194u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2f3198:
    // 0x2f3198: 0x96c60000  lhu         $a2, 0x0($s6)
    ctx->pc = 0x2f3198u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_2f319c:
    // 0x2f319c: 0x71843  sra         $v1, $a3, 1
    ctx->pc = 0x2f319cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 1));
label_2f31a0:
    // 0x2f31a0: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x2f31a0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f31a4:
    // 0x2f31a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f31a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f31a8:
    // 0x2f31a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f31a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f31ac:
    // 0x2f31ac: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2f31acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f31b0:
    // 0x2f31b0: 0xc0bc760  jal         func_2F1D80
label_2f31b4:
    if (ctx->pc == 0x2F31B4u) {
        ctx->pc = 0x2F31B4u;
            // 0x2f31b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F31B8u;
        goto label_2f31b8;
    }
    ctx->pc = 0x2F31B0u;
    SET_GPR_U32(ctx, 31, 0x2F31B8u);
    ctx->pc = 0x2F31B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F31B0u;
            // 0x2f31b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D80u;
    if (runtime->hasFunction(0x2F1D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31B8u; }
        if (ctx->pc != 0x2F31B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D80_0x2f1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31B8u; }
        if (ctx->pc != 0x2F31B8u) { return; }
    }
    ctx->pc = 0x2F31B8u;
label_2f31b8:
    // 0x2f31b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f31bc:
    // 0x2f31bc: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x2f31bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_2f31c0:
    // 0x2f31c0: 0xc0506ac  jal         func_141AB0
label_2f31c4:
    if (ctx->pc == 0x2F31C4u) {
        ctx->pc = 0x2F31C4u;
            // 0x2f31c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F31C8u;
        goto label_2f31c8;
    }
    ctx->pc = 0x2F31C0u;
    SET_GPR_U32(ctx, 31, 0x2F31C8u);
    ctx->pc = 0x2F31C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F31C0u;
            // 0x2f31c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31C8u; }
        if (ctx->pc != 0x2F31C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31C8u; }
        if (ctx->pc != 0x2F31C8u) { return; }
    }
    ctx->pc = 0x2F31C8u;
label_2f31c8:
    // 0x2f31c8: 0xc0bcf34  jal         func_2F3CD0
label_2f31cc:
    if (ctx->pc == 0x2F31CCu) {
        ctx->pc = 0x2F31D0u;
        goto label_2f31d0;
    }
    ctx->pc = 0x2F31C8u;
    SET_GPR_U32(ctx, 31, 0x2F31D0u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31D0u; }
        if (ctx->pc != 0x2F31D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31D0u; }
        if (ctx->pc != 0x2F31D0u) { return; }
    }
    ctx->pc = 0x2F31D0u;
label_2f31d0:
    // 0x2f31d0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f31d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f31d4:
    // 0x2f31d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f31d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f31d8:
    // 0x2f31d8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f31d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f31dc:
    // 0x2f31dc: 0x320f809  jalr        $t9
label_2f31e0:
    if (ctx->pc == 0x2F31E0u) {
        ctx->pc = 0x2F31E0u;
            // 0x2f31e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F31E4u;
        goto label_2f31e4;
    }
    ctx->pc = 0x2F31DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F31E4u);
        ctx->pc = 0x2F31E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F31DCu;
            // 0x2f31e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F31E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F31E4u; }
            if (ctx->pc != 0x2F31E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F31E4u;
label_2f31e4:
    // 0x2f31e4: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x2f31e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_2f31e8:
    // 0x2f31e8: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2f31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_2f31ec:
    // 0x2f31ec: 0x2453034c  addiu       $s3, $v0, 0x34C
    ctx->pc = 0x2f31ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 844));
label_2f31f0:
    // 0x2f31f0: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x2f31f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2f31f4:
    // 0x2f31f4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_2f31f8:
    if (ctx->pc == 0x2F31F8u) {
        ctx->pc = 0x2F31FCu;
        goto label_2f31fc;
    }
    ctx->pc = 0x2F31F4u;
    {
        const bool branch_taken_0x2f31f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f31f4) {
            ctx->pc = 0x2F3208u;
            goto label_2f3208;
        }
    }
    ctx->pc = 0x2F31FCu;
label_2f31fc:
    // 0x2f31fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3200:
    // 0x2f3200: 0x1202002f  beq         $s0, $v0, . + 4 + (0x2F << 2)
label_2f3204:
    if (ctx->pc == 0x2F3204u) {
        ctx->pc = 0x2F3208u;
        goto label_2f3208;
    }
    ctx->pc = 0x2F3200u;
    {
        const bool branch_taken_0x2f3200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f3200) {
            ctx->pc = 0x2F32C0u;
            goto label_2f32c0;
        }
    }
    ctx->pc = 0x2F3208u;
label_2f3208:
    // 0x2f3208: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2f3208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_2f320c:
    // 0x2f320c: 0x16170002  bne         $s0, $s7, . + 4 + (0x2 << 2)
label_2f3210:
    if (ctx->pc == 0x2F3210u) {
        ctx->pc = 0x2F3210u;
            // 0x2f3210: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->pc = 0x2F3214u;
        goto label_2f3214;
    }
    ctx->pc = 0x2F320Cu;
    {
        const bool branch_taken_0x2f320c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        ctx->pc = 0x2F3210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F320Cu;
            // 0x2f3210: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f320c) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F3214u;
label_2f3214:
    // 0x2f3214: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f3214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3218:
    // 0x2f3218: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x2f3218u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2f321c:
    // 0x2f321c: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2f321cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2f3220:
    // 0x2f3220: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f3220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f3224:
    // 0x2f3224: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f3224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f3228:
    // 0x2f3228: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x2f3228u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2f322c:
    // 0x2f322c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f322cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3230:
    // 0x2f3230: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f3230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f3234:
    // 0x2f3234: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f3234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f3238:
    // 0x2f3238: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2f3238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2f323c:
    // 0x2f323c: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x2f323cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_2f3240:
    // 0x2f3240: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3244:
    // 0x2f3244: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f3244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f3248:
    // 0x2f3248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f324c:
    // 0x2f324c: 0x0  nop
    ctx->pc = 0x2f324cu;
    // NOP
label_2f3250:
    // 0x2f3250: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f3250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f3254:
    // 0x2f3254: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f3254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f3258:
    // 0x2f3258: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f3258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f325c:
    // 0x2f325c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f325cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f3260:
    // 0x2f3260: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f3260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2f3264:
    // 0x2f3264: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f3264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f3268:
    // 0x2f3268: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f326c:
    // 0x2f326c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f326cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f3270:
    // 0x2f3270: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f3270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f3274:
    // 0x2f3274: 0x0  nop
    ctx->pc = 0x2f3274u;
    // NOP
label_2f3278:
    // 0x2f3278: 0x2a31023  subu        $v0, $s5, $v1
    ctx->pc = 0x2f3278u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f327c:
    // 0x2f327c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x2f327cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f3280:
    // 0x2f3280: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2f3280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f3284:
    // 0x2f3284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3288:
    // 0x2f3288: 0x2894023  subu        $t0, $s4, $t1
    ctx->pc = 0x2f3288u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f328c:
    // 0x2f328c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f328cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f3290:
    // 0x2f3290: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x2f3290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f3294:
    // 0x2f3294: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f3294u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3298:
    // 0x2f3298: 0x0  nop
    ctx->pc = 0x2f3298u;
    // NOP
label_2f329c:
    // 0x2f329c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f329cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f32a0:
    // 0x2f32a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f32a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f32a4:
    // 0x2f32a4: 0x0  nop
    ctx->pc = 0x2f32a4u;
    // NOP
label_2f32a8:
    // 0x2f32a8: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f32a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f32ac:
    // 0x2f32ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f32acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f32b0:
    // 0x2f32b0: 0xc0bc284  jal         func_2F0A10
label_2f32b4:
    if (ctx->pc == 0x2F32B4u) {
        ctx->pc = 0x2F32B4u;
            // 0x2f32b4: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F32B8u;
        goto label_2f32b8;
    }
    ctx->pc = 0x2F32B0u;
    SET_GPR_U32(ctx, 31, 0x2F32B8u);
    ctx->pc = 0x2F32B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F32B0u;
            // 0x2f32b4: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F32B8u; }
        if (ctx->pc != 0x2F32B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F32B8u; }
        if (ctx->pc != 0x2F32B8u) { return; }
    }
    ctx->pc = 0x2F32B8u;
label_2f32b8:
    // 0x2f32b8: 0x92c20004  lbu         $v0, 0x4($s6)
    ctx->pc = 0x2f32b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_2f32bc:
    // 0x2f32bc: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2f32bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2f32c0:
    // 0x2f32c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f32c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f32c4:
    // 0x2f32c4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2f32c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_2f32c8:
    // 0x2f32c8: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_2f32cc:
    if (ctx->pc == 0x2F32CCu) {
        ctx->pc = 0x2F32CCu;
            // 0x2f32cc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2F32D0u;
        goto label_2f32d0;
    }
    ctx->pc = 0x2F32C8u;
    {
        const bool branch_taken_0x2f32c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F32CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F32C8u;
            // 0x2f32cc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32c8) {
            ctx->pc = 0x2F31F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f31f4;
        }
    }
    ctx->pc = 0x2F32D0u;
label_2f32d0:
    // 0x2f32d0: 0xc0bcf34  jal         func_2F3CD0
label_2f32d4:
    if (ctx->pc == 0x2F32D4u) {
        ctx->pc = 0x2F32D8u;
        goto label_2f32d8;
    }
    ctx->pc = 0x2F32D0u;
    SET_GPR_U32(ctx, 31, 0x2F32D8u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F32D8u; }
        if (ctx->pc != 0x2F32D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F32D8u; }
        if (ctx->pc != 0x2F32D8u) { return; }
    }
    ctx->pc = 0x2F32D8u;
label_2f32d8:
    // 0x2f32d8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f32d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f32dc:
    // 0x2f32dc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f32dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f32e0:
    // 0x2f32e0: 0x320f809  jalr        $t9
label_2f32e4:
    if (ctx->pc == 0x2F32E4u) {
        ctx->pc = 0x2F32E4u;
            // 0x2f32e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F32E8u;
        goto label_2f32e8;
    }
    ctx->pc = 0x2F32E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F32E8u);
        ctx->pc = 0x2F32E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F32E0u;
            // 0x2f32e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F32E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F32E8u; }
            if (ctx->pc != 0x2F32E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F32E8u;
label_2f32e8:
    // 0x2f32e8: 0x1000026d  b           . + 4 + (0x26D << 2)
label_2f32ec:
    if (ctx->pc == 0x2F32ECu) {
        ctx->pc = 0x2F32F0u;
        goto label_2f32f0;
    }
    ctx->pc = 0x2F32E8u;
    {
        const bool branch_taken_0x2f32e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f32e8) {
            ctx->pc = 0x2F3CA0u;
            goto label_2f3ca0;
        }
    }
    ctx->pc = 0x2F32F0u;
label_2f32f0:
    // 0x2f32f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f32f4:
    // 0x2f32f4: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x2f32f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_2f32f8:
    // 0x2f32f8: 0x8c520eac  lw          $s2, 0xEAC($v0)
    ctx->pc = 0x2f32f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_2f32fc:
    // 0x2f32fc: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x2f32fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
label_2f3300:
    // 0x2f3300: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x2f3300u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_2f3304:
    // 0x2f3304: 0x26d62130  addiu       $s6, $s6, 0x2130
    ctx->pc = 0x2f3304u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8496));
label_2f3308:
    // 0x2f3308: 0x26f7ab70  addiu       $s7, $s7, -0x5490
    ctx->pc = 0x2f3308u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945648));
label_2f330c:
    // 0x2f330c: 0x26102110  addiu       $s0, $s0, 0x2110
    ctx->pc = 0x2f330cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8464));
label_2f3310:
    // 0x2f3310: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f3310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f3314:
    // 0x2f3314: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x2f3314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_2f3318:
    // 0x2f3318: 0x9043ee28  lbu         $v1, -0x11D8($v0)
    ctx->pc = 0x2f3318u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962728)));
label_2f331c:
    // 0x2f331c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f3320:
    // 0x2f3320: 0xa3a30348  sb          $v1, 0x348($sp)
    ctx->pc = 0x2f3320u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 840), (uint8_t)GPR_U32(ctx, 3));
label_2f3324:
    // 0x2f3324: 0x9042ee29  lbu         $v0, -0x11D7($v0)
    ctx->pc = 0x2f3324u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962729)));
label_2f3328:
    // 0x2f3328: 0xc0bcf3c  jal         func_2F3CF0
label_2f332c:
    if (ctx->pc == 0x2F332Cu) {
        ctx->pc = 0x2F332Cu;
            // 0x2f332c: 0xa3a20349  sb          $v0, 0x349($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 841), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2F3330u;
        goto label_2f3330;
    }
    ctx->pc = 0x2F3328u;
    SET_GPR_U32(ctx, 31, 0x2F3330u);
    ctx->pc = 0x2F332Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3328u;
            // 0x2f332c: 0xa3a20349  sb          $v0, 0x349($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 841), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CF0u;
    if (runtime->hasFunction(0x2F3CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3330u; }
        if (ctx->pc != 0x2F3330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CF0_0x2f3cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3330u; }
        if (ctx->pc != 0x2F3330u) { return; }
    }
    ctx->pc = 0x2F3330u;
label_2f3330:
    // 0x2f3330: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x2f3330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_2f3334:
    // 0x2f3334: 0xc0bcf38  jal         func_2F3CE0
label_2f3338:
    if (ctx->pc == 0x2F3338u) {
        ctx->pc = 0x2F3338u;
            // 0x2f3338: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F333Cu;
        goto label_2f333c;
    }
    ctx->pc = 0x2F3334u;
    SET_GPR_U32(ctx, 31, 0x2F333Cu);
    ctx->pc = 0x2F3338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3334u;
            // 0x2f3338: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CE0u;
    if (runtime->hasFunction(0x2F3CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F333Cu; }
        if (ctx->pc != 0x2F333Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CE0_0x2f3ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F333Cu; }
        if (ctx->pc != 0x2F333Cu) { return; }
    }
    ctx->pc = 0x2F333Cu;
label_2f333c:
    // 0x2f333c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2f333cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2f3340:
    // 0x2f3340: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f3340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f3344:
    // 0x2f3344: 0x90922134  lbu         $s2, 0x2134($a0)
    ctx->pc = 0x2f3344u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8500)));
label_2f3348:
    // 0x2f3348: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f3348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f334c:
    // 0x2f334c: 0x94662130  lhu         $a2, 0x2130($v1)
    ctx->pc = 0x2f334cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8496)));
label_2f3350:
    // 0x2f3350: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2f3350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f3354:
    // 0x2f3354: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f3354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3358:
    // 0x2f3358: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f3358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f335c:
    // 0x2f335c: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2f335cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2f3360:
    // 0x2f3360: 0x723821  addu        $a3, $v1, $s2
    ctx->pc = 0x2f3360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2f3364:
    // 0x2f3364: 0x71843  sra         $v1, $a3, 1
    ctx->pc = 0x2f3364u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 1));
label_2f3368:
    // 0x2f3368: 0xc0bc760  jal         func_2F1D80
label_2f336c:
    if (ctx->pc == 0x2F336Cu) {
        ctx->pc = 0x2F336Cu;
            // 0x2f336c: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F3370u;
        goto label_2f3370;
    }
    ctx->pc = 0x2F3368u;
    SET_GPR_U32(ctx, 31, 0x2F3370u);
    ctx->pc = 0x2F336Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3368u;
            // 0x2f336c: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D80u;
    if (runtime->hasFunction(0x2F1D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3370u; }
        if (ctx->pc != 0x2F3370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D80_0x2f1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3370u; }
        if (ctx->pc != 0x2F3370u) { return; }
    }
    ctx->pc = 0x2F3370u;
label_2f3370:
    // 0x2f3370: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f3370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f3374:
    // 0x2f3374: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x2f3374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_2f3378:
    // 0x2f3378: 0xc0506ac  jal         func_141AB0
label_2f337c:
    if (ctx->pc == 0x2F337Cu) {
        ctx->pc = 0x2F337Cu;
            // 0x2f337c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F3380u;
        goto label_2f3380;
    }
    ctx->pc = 0x2F3378u;
    SET_GPR_U32(ctx, 31, 0x2F3380u);
    ctx->pc = 0x2F337Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3378u;
            // 0x2f337c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3380u; }
        if (ctx->pc != 0x2F3380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3380u; }
        if (ctx->pc != 0x2F3380u) { return; }
    }
    ctx->pc = 0x2F3380u;
label_2f3380:
    // 0x2f3380: 0xc0bcf34  jal         func_2F3CD0
label_2f3384:
    if (ctx->pc == 0x2F3384u) {
        ctx->pc = 0x2F3388u;
        goto label_2f3388;
    }
    ctx->pc = 0x2F3380u;
    SET_GPR_U32(ctx, 31, 0x2F3388u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3388u; }
        if (ctx->pc != 0x2F3388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3388u; }
        if (ctx->pc != 0x2F3388u) { return; }
    }
    ctx->pc = 0x2F3388u;
label_2f3388:
    // 0x2f3388: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f3388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f338c:
    // 0x2f338c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f338cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3390:
    // 0x2f3390: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f3390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f3394:
    // 0x2f3394: 0x320f809  jalr        $t9
label_2f3398:
    if (ctx->pc == 0x2F3398u) {
        ctx->pc = 0x2F3398u;
            // 0x2f3398: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F339Cu;
        goto label_2f339c;
    }
    ctx->pc = 0x2F3394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F339Cu);
        ctx->pc = 0x2F3398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3394u;
            // 0x2f3398: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F339Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F339Cu; }
            if (ctx->pc != 0x2F339Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F339Cu;
label_2f339c:
    // 0x2f339c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x2f339cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_2f33a0:
    // 0x2f33a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f33a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f33a4:
    // 0x2f33a4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2f33a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2f33a8:
    // 0x2f33a8: 0x27b20348  addiu       $s2, $sp, 0x348
    ctx->pc = 0x2f33a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 840));
label_2f33ac:
    // 0x2f33ac: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2f33acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_2f33b0:
    // 0x2f33b0: 0x16710003  bne         $s3, $s1, . + 4 + (0x3 << 2)
label_2f33b4:
    if (ctx->pc == 0x2F33B4u) {
        ctx->pc = 0x2F33B4u;
            // 0x2f33b4: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->pc = 0x2F33B8u;
        goto label_2f33b8;
    }
    ctx->pc = 0x2F33B0u;
    {
        const bool branch_taken_0x2f33b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F33B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F33B0u;
            // 0x2f33b4: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33b0) {
            ctx->pc = 0x2F33C0u;
            goto label_2f33c0;
        }
    }
    ctx->pc = 0x2F33B8u;
label_2f33b8:
    // 0x2f33b8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f33b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f33bc:
    // 0x2f33bc: 0x0  nop
    ctx->pc = 0x2f33bcu;
    // NOP
label_2f33c0:
    // 0x2f33c0: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x2f33c0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2f33c4:
    // 0x2f33c4: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x2f33c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2f33c8:
    // 0x2f33c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f33cc:
    // 0x2f33cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f33ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f33d0:
    // 0x2f33d0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2f33d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2f33d4:
    // 0x2f33d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f33d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f33d8:
    // 0x2f33d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f33dc:
    // 0x2f33dc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f33dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f33e0:
    // 0x2f33e0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2f33e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2f33e4:
    // 0x2f33e4: 0x2e42821  addu        $a1, $s7, $a0
    ctx->pc = 0x2f33e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_2f33e8:
    // 0x2f33e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f33e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f33ec:
    // 0x2f33ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f33ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f33f0:
    // 0x2f33f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f33f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f33f4:
    // 0x2f33f4: 0x0  nop
    ctx->pc = 0x2f33f4u;
    // NOP
label_2f33f8:
    // 0x2f33f8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f33f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f33fc:
    // 0x2f33fc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f33fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f3400:
    // 0x2f3400: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f3400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3404:
    // 0x2f3404: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f3404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f3408:
    // 0x2f3408: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f3408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2f340c:
    // 0x2f340c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f340cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f3410:
    // 0x2f3410: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f3414:
    // 0x2f3414: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3414u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f3418:
    // 0x2f3418: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f3418u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f341c:
    // 0x2f341c: 0x0  nop
    ctx->pc = 0x2f341cu;
    // NOP
label_2f3420:
    // 0x2f3420: 0x2a31023  subu        $v0, $s5, $v1
    ctx->pc = 0x2f3420u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f3424:
    // 0x2f3424: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x2f3424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f3428:
    // 0x2f3428: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2f3428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f342c:
    // 0x2f342c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f342cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3430:
    // 0x2f3430: 0x2894023  subu        $t0, $s4, $t1
    ctx->pc = 0x2f3430u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f3434:
    // 0x2f3434: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f3434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f3438:
    // 0x2f3438: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x2f3438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f343c:
    // 0x2f343c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f343cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3440:
    // 0x2f3440: 0x0  nop
    ctx->pc = 0x2f3440u;
    // NOP
label_2f3444:
    // 0x2f3444: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f3444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f3448:
    // 0x2f3448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f344c:
    // 0x2f344c: 0x0  nop
    ctx->pc = 0x2f344cu;
    // NOP
label_2f3450:
    // 0x2f3450: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f3450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f3454:
    // 0x2f3454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3458:
    // 0x2f3458: 0xc0bc284  jal         func_2F0A10
label_2f345c:
    if (ctx->pc == 0x2F345Cu) {
        ctx->pc = 0x2F345Cu;
            // 0x2f345c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F3460u;
        goto label_2f3460;
    }
    ctx->pc = 0x2F3458u;
    SET_GPR_U32(ctx, 31, 0x2F3460u);
    ctx->pc = 0x2F345Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3458u;
            // 0x2f345c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3460u; }
        if (ctx->pc != 0x2F3460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3460u; }
        if (ctx->pc != 0x2F3460u) { return; }
    }
    ctx->pc = 0x2F3460u;
label_2f3460:
    // 0x2f3460: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x2f3460u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_2f3464:
    // 0x2f3464: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f3464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f3468:
    // 0x2f3468: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x2f3468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f346c:
    // 0x2f346c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f346cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f3470:
    // 0x2f3470: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2f3474:
    if (ctx->pc == 0x2F3474u) {
        ctx->pc = 0x2F3474u;
            // 0x2f3474: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F3478u;
        goto label_2f3478;
    }
    ctx->pc = 0x2F3470u;
    {
        const bool branch_taken_0x2f3470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3470u;
            // 0x2f3474: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3470) {
            ctx->pc = 0x2F33ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f33ac;
        }
    }
    ctx->pc = 0x2F3478u;
label_2f3478:
    // 0x2f3478: 0xc0bcf34  jal         func_2F3CD0
label_2f347c:
    if (ctx->pc == 0x2F347Cu) {
        ctx->pc = 0x2F3480u;
        goto label_2f3480;
    }
    ctx->pc = 0x2F3478u;
    SET_GPR_U32(ctx, 31, 0x2F3480u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3480u; }
        if (ctx->pc != 0x2F3480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3480u; }
        if (ctx->pc != 0x2F3480u) { return; }
    }
    ctx->pc = 0x2F3480u;
label_2f3480:
    // 0x2f3480: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f3480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3484:
    // 0x2f3484: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f3484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f3488:
    // 0x2f3488: 0x320f809  jalr        $t9
label_2f348c:
    if (ctx->pc == 0x2F348Cu) {
        ctx->pc = 0x2F348Cu;
            // 0x2f348c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F3490u;
        goto label_2f3490;
    }
    ctx->pc = 0x2F3488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F3490u);
        ctx->pc = 0x2F348Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3488u;
            // 0x2f348c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F3490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F3490u; }
            if (ctx->pc != 0x2F3490u) { return; }
        }
        }
    }
    ctx->pc = 0x2F3490u;
label_2f3490:
    // 0x2f3490: 0x10000203  b           . + 4 + (0x203 << 2)
label_2f3494:
    if (ctx->pc == 0x2F3494u) {
        ctx->pc = 0x2F3498u;
        goto label_2f3498;
    }
    ctx->pc = 0x2F3490u;
    {
        const bool branch_taken_0x2f3490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3490) {
            ctx->pc = 0x2F3CA0u;
            goto label_2f3ca0;
        }
    }
    ctx->pc = 0x2F3498u;
label_2f3498:
    // 0x2f3498: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x2f3498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2f349c:
    // 0x2f349c: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x2f349cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_2f34a0:
    // 0x2f34a0: 0x50b821  addu        $s7, $v0, $s0
    ctx->pc = 0x2f34a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2f34a4:
    // 0x2f34a4: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x2f34a4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_2f34a8:
    // 0x2f34a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f34ac:
    // 0x2f34ac: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x2f34acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_2f34b0:
    // 0x2f34b0: 0x8c530eac  lw          $s3, 0xEAC($v0)
    ctx->pc = 0x2f34b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_2f34b4:
    // 0x2f34b4: 0x26d62130  addiu       $s6, $s6, 0x2130
    ctx->pc = 0x2f34b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8496));
label_2f34b8:
    // 0x2f34b8: 0x27deab70  addiu       $fp, $fp, -0x5490
    ctx->pc = 0x2f34b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945648));
label_2f34bc:
    // 0x2f34bc: 0x26522110  addiu       $s2, $s2, 0x2110
    ctx->pc = 0x2f34bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8464));
label_2f34c0:
    // 0x2f34c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f34c4:
    // 0x2f34c4: 0x9044ee30  lbu         $a0, -0x11D0($v0)
    ctx->pc = 0x2f34c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962736)));
label_2f34c8:
    // 0x2f34c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f34cc:
    // 0x2f34cc: 0xa3a40344  sb          $a0, 0x344($sp)
    ctx->pc = 0x2f34ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 836), (uint8_t)GPR_U32(ctx, 4));
label_2f34d0:
    // 0x2f34d0: 0x9043ee31  lbu         $v1, -0x11CF($v0)
    ctx->pc = 0x2f34d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962737)));
label_2f34d4:
    // 0x2f34d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f34d8:
    // 0x2f34d8: 0xa3a30345  sb          $v1, 0x345($sp)
    ctx->pc = 0x2f34d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 837), (uint8_t)GPR_U32(ctx, 3));
label_2f34dc:
    // 0x2f34dc: 0x9042ee32  lbu         $v0, -0x11CE($v0)
    ctx->pc = 0x2f34dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962738)));
label_2f34e0:
    // 0x2f34e0: 0xc077318  jal         func_1DCC60
label_2f34e4:
    if (ctx->pc == 0x2F34E4u) {
        ctx->pc = 0x2F34E4u;
            // 0x2f34e4: 0xa3a20346  sb          $v0, 0x346($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 838), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2F34E8u;
        goto label_2f34e8;
    }
    ctx->pc = 0x2F34E0u;
    SET_GPR_U32(ctx, 31, 0x2F34E8u);
    ctx->pc = 0x2F34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F34E0u;
            // 0x2f34e4: 0xa3a20346  sb          $v0, 0x346($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 838), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34E8u; }
        if (ctx->pc != 0x2F34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34E8u; }
        if (ctx->pc != 0x2F34E8u) { return; }
    }
    ctx->pc = 0x2F34E8u;
label_2f34e8:
    // 0x2f34e8: 0xc0bcf40  jal         func_2F3D00
label_2f34ec:
    if (ctx->pc == 0x2F34ECu) {
        ctx->pc = 0x2F34ECu;
            // 0x2f34ec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2F34F0u;
        goto label_2f34f0;
    }
    ctx->pc = 0x2F34E8u;
    SET_GPR_U32(ctx, 31, 0x2F34F0u);
    ctx->pc = 0x2F34ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F34E8u;
            // 0x2f34ec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D00u;
    if (runtime->hasFunction(0x2F3D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F3D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34F0u; }
        if (ctx->pc != 0x2F34F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3D00_0x2f3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F34F0u; }
        if (ctx->pc != 0x2F34F0u) { return; }
    }
    ctx->pc = 0x2F34F0u;
label_2f34f0:
    // 0x2f34f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f34f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f34f4:
    // 0x2f34f4: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f34f8:
    // 0x2f34f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f34fc:
    // 0x2f34fc: 0xc0bcf3c  jal         func_2F3CF0
label_2f3500:
    if (ctx->pc == 0x2F3500u) {
        ctx->pc = 0x2F3500u;
            // 0x2f3500: 0x438823  subu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F3504u;
        goto label_2f3504;
    }
    ctx->pc = 0x2F34FCu;
    SET_GPR_U32(ctx, 31, 0x2F3504u);
    ctx->pc = 0x2F3500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F34FCu;
            // 0x2f3500: 0x438823  subu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CF0u;
    if (runtime->hasFunction(0x2F3CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3504u; }
        if (ctx->pc != 0x2F3504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CF0_0x2f3cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3504u; }
        if (ctx->pc != 0x2F3504u) { return; }
    }
    ctx->pc = 0x2F3504u;
label_2f3504:
    // 0x2f3504: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f3504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f3508:
    // 0x2f3508: 0xc0bcf38  jal         func_2F3CE0
label_2f350c:
    if (ctx->pc == 0x2F350Cu) {
        ctx->pc = 0x2F350Cu;
            // 0x2f350c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F3510u;
        goto label_2f3510;
    }
    ctx->pc = 0x2F3508u;
    SET_GPR_U32(ctx, 31, 0x2F3510u);
    ctx->pc = 0x2F350Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3508u;
            // 0x2f350c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CE0u;
    if (runtime->hasFunction(0x2F3CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3510u; }
        if (ctx->pc != 0x2F3510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CE0_0x2f3ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3510u; }
        if (ctx->pc != 0x2F3510u) { return; }
    }
    ctx->pc = 0x2F3510u;
label_2f3510:
    // 0x2f3510: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f3510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f3514:
    // 0x2f3514: 0x26240002  addiu       $a0, $s1, 0x2
    ctx->pc = 0x2f3514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_2f3518:
    // 0x2f3518: 0x90732134  lbu         $s3, 0x2134($v1)
    ctx->pc = 0x2f3518u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8500)));
label_2f351c:
    // 0x2f351c: 0x903023  subu        $a2, $a0, $s0
    ctx->pc = 0x2f351cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2f3520:
    // 0x2f3520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f3520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3524:
    // 0x2f3524: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f3524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f3528:
    // 0x2f3528: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2f3528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f352c:
    // 0x2f352c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f352cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3530:
    // 0x2f3530: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f3530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f3534:
    // 0x2f3534: 0x2663818  mult        $a3, $s3, $a2
    ctx->pc = 0x2f3534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_2f3538:
    // 0x2f3538: 0x94742130  lhu         $s4, 0x2130($v1)
    ctx->pc = 0x2f3538u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8496)));
label_2f353c:
    // 0x2f353c: 0x71843  sra         $v1, $a3, 1
    ctx->pc = 0x2f353cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 1));
label_2f3540:
    // 0x2f3540: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f3540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f3544:
    // 0x2f3544: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f3544u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f3548:
    // 0x2f3548: 0xc0bc760  jal         func_2F1D80
label_2f354c:
    if (ctx->pc == 0x2F354Cu) {
        ctx->pc = 0x2F354Cu;
            // 0x2f354c: 0x7fa201b0  sq          $v0, 0x1B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
        ctx->pc = 0x2F3550u;
        goto label_2f3550;
    }
    ctx->pc = 0x2F3548u;
    SET_GPR_U32(ctx, 31, 0x2F3550u);
    ctx->pc = 0x2F354Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3548u;
            // 0x2f354c: 0x7fa201b0  sq          $v0, 0x1B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D80u;
    if (runtime->hasFunction(0x2F1D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3550u; }
        if (ctx->pc != 0x2F3550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D80_0x2f1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3550u; }
        if (ctx->pc != 0x2F3550u) { return; }
    }
    ctx->pc = 0x2F3550u;
label_2f3550:
    // 0x2f3550: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f3550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f3554:
    // 0x2f3554: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x2f3554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_2f3558:
    // 0x2f3558: 0xc0506ac  jal         func_141AB0
label_2f355c:
    if (ctx->pc == 0x2F355Cu) {
        ctx->pc = 0x2F355Cu;
            // 0x2f355c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F3560u;
        goto label_2f3560;
    }
    ctx->pc = 0x2F3558u;
    SET_GPR_U32(ctx, 31, 0x2F3560u);
    ctx->pc = 0x2F355Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3558u;
            // 0x2f355c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3560u; }
        if (ctx->pc != 0x2F3560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3560u; }
        if (ctx->pc != 0x2F3560u) { return; }
    }
    ctx->pc = 0x2F3560u;
label_2f3560:
    // 0x2f3560: 0xc0bcf34  jal         func_2F3CD0
label_2f3564:
    if (ctx->pc == 0x2F3564u) {
        ctx->pc = 0x2F3568u;
        goto label_2f3568;
    }
    ctx->pc = 0x2F3560u;
    SET_GPR_U32(ctx, 31, 0x2F3568u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3568u; }
        if (ctx->pc != 0x2F3568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3568u; }
        if (ctx->pc != 0x2F3568u) { return; }
    }
    ctx->pc = 0x2F3568u;
label_2f3568:
    // 0x2f3568: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f3568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f356c:
    // 0x2f356c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3570:
    // 0x2f3570: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f3570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f3574:
    // 0x2f3574: 0x320f809  jalr        $t9
label_2f3578:
    if (ctx->pc == 0x2F3578u) {
        ctx->pc = 0x2F3578u;
            // 0x2f3578: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F357Cu;
        goto label_2f357c;
    }
    ctx->pc = 0x2F3574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F357Cu);
        ctx->pc = 0x2F3578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3574u;
            // 0x2f3578: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F357Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F357Cu; }
            if (ctx->pc != 0x2F357Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F357Cu;
label_2f357c:
    // 0x2f357c: 0x7ba301b0  lq          $v1, 0x1B0($sp)
    ctx->pc = 0x2f357cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2f3580:
    // 0x2f3580: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2f3580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_2f3584:
    // 0x2f3584: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2f3584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2f3588:
    // 0x2f3588: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x2f3588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
label_2f358c:
    // 0x2f358c: 0x24a5add0  addiu       $a1, $a1, -0x5230
    ctx->pc = 0x2f358cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946256));
label_2f3590:
    // 0x2f3590: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x2f3590u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f3594:
    // 0x2f3594: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2f3594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f3598:
    // 0x2f3598: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f3598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f359c:
    // 0x2f359c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f35a0:
    // 0x2f35a0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f35a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f35a4:
    // 0x2f35a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2f35a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f35a8:
    // 0x2f35a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f35a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f35ac:
    // 0x2f35ac: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2f35acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f35b0:
    // 0x2f35b0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x2f35b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f35b4:
    // 0x2f35b4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2f35b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f35b8:
    // 0x2f35b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f35b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f35bc:
    // 0x2f35bc: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f35bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f35c0:
    // 0x2f35c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2f35c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2f35c4:
    // 0x2f35c4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2f35c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2f35c8:
    // 0x2f35c8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f35c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_2f35cc:
    // 0x2f35cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f35ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f35d0:
    // 0x2f35d0: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x2f35d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f35d4:
    // 0x2f35d4: 0x0  nop
    ctx->pc = 0x2f35d4u;
    // NOP
label_2f35d8:
    // 0x2f35d8: 0x2a91021  addu        $v0, $s5, $t1
    ctx->pc = 0x2f35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_2f35dc:
    // 0x2f35dc: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x2f35dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
label_2f35e0:
    // 0x2f35e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f35e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f35e4:
    // 0x2f35e4: 0x2a91023  subu        $v0, $s5, $t1
    ctx->pc = 0x2f35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_2f35e8:
    // 0x2f35e8: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x2f35e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
label_2f35ec:
    // 0x2f35ec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2f35ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f35f0:
    // 0x2f35f0: 0x0  nop
    ctx->pc = 0x2f35f0u;
    // NOP
label_2f35f4:
    // 0x2f35f4: 0x2624823  subu        $t1, $s3, $v0
    ctx->pc = 0x2f35f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f35f8:
    // 0x2f35f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f35f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f35fc:
    // 0x2f35fc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2f35fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f3600:
    // 0x2f3600: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f3600u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3604:
    // 0x2f3604: 0x0  nop
    ctx->pc = 0x2f3604u;
    // NOP
label_2f3608:
    // 0x2f3608: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f3608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f360c:
    // 0x2f360c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f360cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3610:
    // 0x2f3610: 0x0  nop
    ctx->pc = 0x2f3610u;
    // NOP
label_2f3614:
    // 0x2f3614: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f3614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f3618:
    // 0x2f3618: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x2f3618u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2f361c:
    // 0x2f361c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f361cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3620:
    // 0x2f3620: 0x0  nop
    ctx->pc = 0x2f3620u;
    // NOP
label_2f3624:
    // 0x2f3624: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f3624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f3628:
    // 0x2f3628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f362c:
    // 0x2f362c: 0x0  nop
    ctx->pc = 0x2f362cu;
    // NOP
label_2f3630:
    // 0x2f3630: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f3630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f3634:
    // 0x2f3634: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x2f3634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2f3638:
    // 0x2f3638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f363c:
    // 0x2f363c: 0xc0bc284  jal         func_2F0A10
label_2f3640:
    if (ctx->pc == 0x2F3640u) {
        ctx->pc = 0x2F3640u;
            // 0x2f3640: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F3644u;
        goto label_2f3644;
    }
    ctx->pc = 0x2F363Cu;
    SET_GPR_U32(ctx, 31, 0x2F3644u);
    ctx->pc = 0x2F3640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F363Cu;
            // 0x2f3640: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3644u; }
        if (ctx->pc != 0x2F3644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3644u; }
        if (ctx->pc != 0x2F3644u) { return; }
    }
    ctx->pc = 0x2F3644u;
label_2f3644:
    // 0x2f3644: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x2f3644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_2f3648:
    // 0x2f3648: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x2f3648u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
label_2f364c:
    // 0x2f364c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f364cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2f3650:
    // 0x2f3650: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x2f3650u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_2f3654:
    // 0x2f3654: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x2f3654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_2f3658:
    // 0x2f3658: 0x2694ad50  addiu       $s4, $s4, -0x52B0
    ctx->pc = 0x2f3658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946128));
label_2f365c:
    // 0x2f365c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f365cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f3660:
    // 0x2f3660: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f3660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f3664:
    // 0x2f3664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f3668:
    // 0x2f3668: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x2f3668u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f366c:
    // 0x2f366c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2f366cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2f3670:
    // 0x2f3670: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f3670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f3674:
    // 0x2f3674: 0x90422133  lbu         $v0, 0x2133($v0)
    ctx->pc = 0x2f3674u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8499)));
label_2f3678:
    // 0x2f3678: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2f3678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f367c:
    // 0x2f367c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f367cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3680:
    // 0x2f3680: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3684:
    // 0x2f3684: 0x44889000  mtc1        $t0, $f18
    ctx->pc = 0x2f3684u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f3688:
    // 0x2f3688: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x2f3688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
label_2f368c:
    // 0x2f368c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f368cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f3690:
    // 0x2f3690: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x2f3690u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2f3694:
    // 0x2f3694: 0x2a22823  subu        $a1, $s5, $v0
    ctx->pc = 0x2f3694u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2f3698:
    // 0x2f3698: 0x90622132  lbu         $v0, 0x2132($v1)
    ctx->pc = 0x2f3698u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8498)));
label_2f369c:
    // 0x2f369c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f369cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f36a0:
    // 0x2f36a0: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2f36a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_2f36a4:
    // 0x2f36a4: 0x7ba30180  lq          $v1, 0x180($sp)
    ctx->pc = 0x2f36a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2f36a8:
    // 0x2f36a8: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x2f36a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2f36ac:
    // 0x2f36ac: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x2f36acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
label_2f36b0:
    // 0x2f36b0: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x2f36b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f36b4:
    // 0x2f36b4: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x2f36b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2f36b8:
    // 0x2f36b8: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2f36b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f36bc:
    // 0x2f36bc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f36c0:
    // 0x2f36c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f36c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f36c4:
    // 0x2f36c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f36c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f36c8:
    // 0x2f36c8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f36c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f36cc:
    // 0x2f36cc: 0x26b1021  addu        $v0, $s3, $t3
    ctx->pc = 0x2f36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
label_2f36d0:
    // 0x2f36d0: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x2f36d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_2f36d4:
    // 0x2f36d4: 0x26b1023  subu        $v0, $s3, $t3
    ctx->pc = 0x2f36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
label_2f36d8:
    // 0x2f36d8: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x2f36d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_2f36dc:
    // 0x2f36dc: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f36dcu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f36e0:
    // 0x2f36e0: 0x0  nop
    ctx->pc = 0x2f36e0u;
    // NOP
label_2f36e4:
    // 0x2f36e4: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f36e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f36e8:
    // 0x2f36e8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f36e8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f36ec:
    // 0x2f36ec: 0x0  nop
    ctx->pc = 0x2f36ecu;
    // NOP
label_2f36f0:
    // 0x2f36f0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f36f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f36f4:
    // 0x2f36f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f36f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f36f8:
    // 0x2f36f8: 0x0  nop
    ctx->pc = 0x2f36f8u;
    // NOP
label_2f36fc:
    // 0x2f36fc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f36fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f3700:
    // 0x2f3700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3704:
    // 0x2f3704: 0x0  nop
    ctx->pc = 0x2f3704u;
    // NOP
label_2f3708:
    // 0x2f3708: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f3708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f370c:
    // 0x2f370c: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x2f370cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2f3710:
    // 0x2f3710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3714:
    // 0x2f3714: 0xc0bc284  jal         func_2F0A10
label_2f3718:
    if (ctx->pc == 0x2F3718u) {
        ctx->pc = 0x2F3718u;
            // 0x2f3718: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F371Cu;
        goto label_2f371c;
    }
    ctx->pc = 0x2F3714u;
    SET_GPR_U32(ctx, 31, 0x2F371Cu);
    ctx->pc = 0x2F3718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3714u;
            // 0x2f3718: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F371Cu; }
        if (ctx->pc != 0x2F371Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F371Cu; }
        if (ctx->pc != 0x2F371Cu) { return; }
    }
    ctx->pc = 0x2F371Cu;
label_2f371c:
    // 0x2f371c: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x2f371cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2f3720:
    // 0x2f3720: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f3720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f3724:
    // 0x2f3724: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x2f3724u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2f3728:
    // 0x2f3728: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f3728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f372c:
    // 0x2f372c: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x2f372cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f3730:
    // 0x2f3730: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f3730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3734:
    // 0x2f3734: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x2f3734u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f3738:
    // 0x2f3738: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f373c:
    // 0x2f373c: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x2f373cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f3740:
    // 0x2f3740: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x2f3740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2f3744:
    // 0x2f3744: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x2f3744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2f3748:
    // 0x2f3748: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x2f3748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2f374c:
    // 0x2f374c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f374cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f3750:
    // 0x2f3750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3754:
    // 0x2f3754: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f3754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f3758:
    // 0x2f3758: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f3758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f375c:
    // 0x2f375c: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x2f375cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2f3760:
    // 0x2f3760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3764:
    // 0x2f3764: 0x0  nop
    ctx->pc = 0x2f3764u;
    // NOP
label_2f3768:
    // 0x2f3768: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f3768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f376c:
    // 0x2f376c: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x2f376cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2f3770:
    // 0x2f3770: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f3770u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3774:
    // 0x2f3774: 0x0  nop
    ctx->pc = 0x2f3774u;
    // NOP
label_2f3778:
    // 0x2f3778: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f3778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f377c:
    // 0x2f377c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f377cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3780:
    // 0x2f3780: 0x0  nop
    ctx->pc = 0x2f3780u;
    // NOP
label_2f3784:
    // 0x2f3784: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f3784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f3788:
    // 0x2f3788: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f3788u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f378c:
    // 0x2f378c: 0x0  nop
    ctx->pc = 0x2f378cu;
    // NOP
label_2f3790:
    // 0x2f3790: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f3790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f3794:
    // 0x2f3794: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f3794u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3798:
    // 0x2f3798: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f3798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f379c:
    // 0x2f379c: 0xc0bc284  jal         func_2F0A10
label_2f37a0:
    if (ctx->pc == 0x2F37A0u) {
        ctx->pc = 0x2F37A0u;
            // 0x2f37a0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F37A4u;
        goto label_2f37a4;
    }
    ctx->pc = 0x2F379Cu;
    SET_GPR_U32(ctx, 31, 0x2F37A4u);
    ctx->pc = 0x2F37A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F379Cu;
            // 0x2f37a0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F37A4u; }
        if (ctx->pc != 0x2F37A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F37A4u; }
        if (ctx->pc != 0x2F37A4u) { return; }
    }
    ctx->pc = 0x2F37A4u;
label_2f37a4:
    // 0x2f37a4: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x2f37a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2f37a8:
    // 0x2f37a8: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x2f37a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f37ac:
    // 0x2f37ac: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2f37acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_2f37b0:
    // 0x2f37b0: 0x24530344  addiu       $s3, $v0, 0x344
    ctx->pc = 0x2f37b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 836));
label_2f37b4:
    // 0x2f37b4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2f37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_2f37b8:
    // 0x2f37b8: 0x16170003  bne         $s0, $s7, . + 4 + (0x3 << 2)
label_2f37bc:
    if (ctx->pc == 0x2F37BCu) {
        ctx->pc = 0x2F37BCu;
            // 0x2f37bc: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->pc = 0x2F37C0u;
        goto label_2f37c0;
    }
    ctx->pc = 0x2F37B8u;
    {
        const bool branch_taken_0x2f37b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        ctx->pc = 0x2F37BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37B8u;
            // 0x2f37bc: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37b8) {
            ctx->pc = 0x2F37C8u;
            goto label_2f37c8;
        }
    }
    ctx->pc = 0x2F37C0u;
label_2f37c0:
    // 0x2f37c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f37c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f37c4:
    // 0x2f37c4: 0x0  nop
    ctx->pc = 0x2f37c4u;
    // NOP
label_2f37c8:
    // 0x2f37c8: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x2f37c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f37cc:
    // 0x2f37cc: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2f37ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2f37d0:
    // 0x2f37d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f37d4:
    // 0x2f37d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f37d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f37d8:
    // 0x2f37d8: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2f37d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f37dc:
    // 0x2f37dc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f37dcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f37e0:
    // 0x2f37e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f37e4:
    // 0x2f37e4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f37e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f37e8:
    // 0x2f37e8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2f37e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2f37ec:
    // 0x2f37ec: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x2f37ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_2f37f0:
    // 0x2f37f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f37f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f37f4:
    // 0x2f37f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f37f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f37f8:
    // 0x2f37f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f37f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f37fc:
    // 0x2f37fc: 0x0  nop
    ctx->pc = 0x2f37fcu;
    // NOP
label_2f3800:
    // 0x2f3800: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f3800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f3804:
    // 0x2f3804: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f3804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f3808:
    // 0x2f3808: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f3808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f380c:
    // 0x2f380c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f380cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f3810:
    // 0x2f3810: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f3810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2f3814:
    // 0x2f3814: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f3814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f3818:
    // 0x2f3818: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f381c:
    // 0x2f381c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f381cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f3820:
    // 0x2f3820: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f3820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f3824:
    // 0x2f3824: 0x0  nop
    ctx->pc = 0x2f3824u;
    // NOP
label_2f3828:
    // 0x2f3828: 0x2a31023  subu        $v0, $s5, $v1
    ctx->pc = 0x2f3828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f382c:
    // 0x2f382c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x2f382cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f3830:
    // 0x2f3830: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2f3830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f3834:
    // 0x2f3834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3838:
    // 0x2f3838: 0x2894023  subu        $t0, $s4, $t1
    ctx->pc = 0x2f3838u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f383c:
    // 0x2f383c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f383cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f3840:
    // 0x2f3840: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x2f3840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f3844:
    // 0x2f3844: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f3844u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3848:
    // 0x2f3848: 0x0  nop
    ctx->pc = 0x2f3848u;
    // NOP
label_2f384c:
    // 0x2f384c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f384cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f3850:
    // 0x2f3850: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3854:
    // 0x2f3854: 0x0  nop
    ctx->pc = 0x2f3854u;
    // NOP
label_2f3858:
    // 0x2f3858: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f3858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f385c:
    // 0x2f385c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f385cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3860:
    // 0x2f3860: 0xc0bc284  jal         func_2F0A10
label_2f3864:
    if (ctx->pc == 0x2F3864u) {
        ctx->pc = 0x2F3864u;
            // 0x2f3864: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F3868u;
        goto label_2f3868;
    }
    ctx->pc = 0x2F3860u;
    SET_GPR_U32(ctx, 31, 0x2F3868u);
    ctx->pc = 0x2F3864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3860u;
            // 0x2f3864: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3868u; }
        if (ctx->pc != 0x2F3868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3868u; }
        if (ctx->pc != 0x2F3868u) { return; }
    }
    ctx->pc = 0x2F3868u;
label_2f3868:
    // 0x2f3868: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x2f3868u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_2f386c:
    // 0x2f386c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f386cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f3870:
    // 0x2f3870: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2f3870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f3874:
    // 0x2f3874: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f3874u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f3878:
    // 0x2f3878: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2f387c:
    if (ctx->pc == 0x2F387Cu) {
        ctx->pc = 0x2F387Cu;
            // 0x2f387c: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F3880u;
        goto label_2f3880;
    }
    ctx->pc = 0x2F3878u;
    {
        const bool branch_taken_0x2f3878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F387Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3878u;
            // 0x2f387c: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3878) {
            ctx->pc = 0x2F37B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f37b4;
        }
    }
    ctx->pc = 0x2F3880u;
label_2f3880:
    // 0x2f3880: 0xc0bcf34  jal         func_2F3CD0
label_2f3884:
    if (ctx->pc == 0x2F3884u) {
        ctx->pc = 0x2F3888u;
        goto label_2f3888;
    }
    ctx->pc = 0x2F3880u;
    SET_GPR_U32(ctx, 31, 0x2F3888u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3888u; }
        if (ctx->pc != 0x2F3888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3888u; }
        if (ctx->pc != 0x2F3888u) { return; }
    }
    ctx->pc = 0x2F3888u;
label_2f3888:
    // 0x2f3888: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f3888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f388c:
    // 0x2f388c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f388cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f3890:
    // 0x2f3890: 0x320f809  jalr        $t9
label_2f3894:
    if (ctx->pc == 0x2F3894u) {
        ctx->pc = 0x2F3894u;
            // 0x2f3894: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F3898u;
        goto label_2f3898;
    }
    ctx->pc = 0x2F3890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F3898u);
        ctx->pc = 0x2F3894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3890u;
            // 0x2f3894: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F3898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F3898u; }
            if (ctx->pc != 0x2F3898u) { return; }
        }
        }
    }
    ctx->pc = 0x2F3898u;
label_2f3898:
    // 0x2f3898: 0x10000101  b           . + 4 + (0x101 << 2)
label_2f389c:
    if (ctx->pc == 0x2F389Cu) {
        ctx->pc = 0x2F38A0u;
        goto label_2f38a0;
    }
    ctx->pc = 0x2F3898u;
    {
        const bool branch_taken_0x2f3898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3898) {
            ctx->pc = 0x2F3CA0u;
            goto label_2f3ca0;
        }
    }
    ctx->pc = 0x2F38A0u;
label_2f38a0:
    // 0x2f38a0: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x2f38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2f38a4:
    // 0x2f38a4: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x2f38a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_2f38a8:
    // 0x2f38a8: 0x50b821  addu        $s7, $v0, $s0
    ctx->pc = 0x2f38a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2f38ac:
    // 0x2f38ac: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x2f38acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_2f38b0:
    // 0x2f38b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f38b4:
    // 0x2f38b4: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x2f38b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_2f38b8:
    // 0x2f38b8: 0x8c530eac  lw          $s3, 0xEAC($v0)
    ctx->pc = 0x2f38b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_2f38bc:
    // 0x2f38bc: 0x26d62130  addiu       $s6, $s6, 0x2130
    ctx->pc = 0x2f38bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8496));
label_2f38c0:
    // 0x2f38c0: 0x27deab70  addiu       $fp, $fp, -0x5490
    ctx->pc = 0x2f38c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945648));
label_2f38c4:
    // 0x2f38c4: 0x26522110  addiu       $s2, $s2, 0x2110
    ctx->pc = 0x2f38c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8464));
label_2f38c8:
    // 0x2f38c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f38cc:
    // 0x2f38cc: 0x9044ee30  lbu         $a0, -0x11D0($v0)
    ctx->pc = 0x2f38ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962736)));
label_2f38d0:
    // 0x2f38d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f38d4:
    // 0x2f38d4: 0xa3a40340  sb          $a0, 0x340($sp)
    ctx->pc = 0x2f38d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 832), (uint8_t)GPR_U32(ctx, 4));
label_2f38d8:
    // 0x2f38d8: 0x9043ee31  lbu         $v1, -0x11CF($v0)
    ctx->pc = 0x2f38d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962737)));
label_2f38dc:
    // 0x2f38dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f38e0:
    // 0x2f38e0: 0xa3a30341  sb          $v1, 0x341($sp)
    ctx->pc = 0x2f38e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 833), (uint8_t)GPR_U32(ctx, 3));
label_2f38e4:
    // 0x2f38e4: 0x9042ee32  lbu         $v0, -0x11CE($v0)
    ctx->pc = 0x2f38e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962738)));
label_2f38e8:
    // 0x2f38e8: 0xc077318  jal         func_1DCC60
label_2f38ec:
    if (ctx->pc == 0x2F38ECu) {
        ctx->pc = 0x2F38ECu;
            // 0x2f38ec: 0xa3a20342  sb          $v0, 0x342($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 834), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2F38F0u;
        goto label_2f38f0;
    }
    ctx->pc = 0x2F38E8u;
    SET_GPR_U32(ctx, 31, 0x2F38F0u);
    ctx->pc = 0x2F38ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F38E8u;
            // 0x2f38ec: 0xa3a20342  sb          $v0, 0x342($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 834), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F38F0u; }
        if (ctx->pc != 0x2F38F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F38F0u; }
        if (ctx->pc != 0x2F38F0u) { return; }
    }
    ctx->pc = 0x2F38F0u;
label_2f38f0:
    // 0x2f38f0: 0xc0bcf40  jal         func_2F3D00
label_2f38f4:
    if (ctx->pc == 0x2F38F4u) {
        ctx->pc = 0x2F38F4u;
            // 0x2f38f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2F38F8u;
        goto label_2f38f8;
    }
    ctx->pc = 0x2F38F0u;
    SET_GPR_U32(ctx, 31, 0x2F38F8u);
    ctx->pc = 0x2F38F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F38F0u;
            // 0x2f38f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D00u;
    if (runtime->hasFunction(0x2F3D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F3D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F38F8u; }
        if (ctx->pc != 0x2F38F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3D00_0x2f3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F38F8u; }
        if (ctx->pc != 0x2F38F8u) { return; }
    }
    ctx->pc = 0x2F38F8u;
label_2f38f8:
    // 0x2f38f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f38f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f38fc:
    // 0x2f38fc: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f38fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f3900:
    // 0x2f3900: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f3900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f3904:
    // 0x2f3904: 0xc0bcf3c  jal         func_2F3CF0
label_2f3908:
    if (ctx->pc == 0x2F3908u) {
        ctx->pc = 0x2F3908u;
            // 0x2f3908: 0x438823  subu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F390Cu;
        goto label_2f390c;
    }
    ctx->pc = 0x2F3904u;
    SET_GPR_U32(ctx, 31, 0x2F390Cu);
    ctx->pc = 0x2F3908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3904u;
            // 0x2f3908: 0x438823  subu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CF0u;
    if (runtime->hasFunction(0x2F3CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F390Cu; }
        if (ctx->pc != 0x2F390Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CF0_0x2f3cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F390Cu; }
        if (ctx->pc != 0x2F390Cu) { return; }
    }
    ctx->pc = 0x2F390Cu;
label_2f390c:
    // 0x2f390c: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x2f390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_2f3910:
    // 0x2f3910: 0xc0bcf38  jal         func_2F3CE0
label_2f3914:
    if (ctx->pc == 0x2F3914u) {
        ctx->pc = 0x2F3914u;
            // 0x2f3914: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F3918u;
        goto label_2f3918;
    }
    ctx->pc = 0x2F3910u;
    SET_GPR_U32(ctx, 31, 0x2F3918u);
    ctx->pc = 0x2F3914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3910u;
            // 0x2f3914: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CE0u;
    if (runtime->hasFunction(0x2F3CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3918u; }
        if (ctx->pc != 0x2F3918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CE0_0x2f3ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3918u; }
        if (ctx->pc != 0x2F3918u) { return; }
    }
    ctx->pc = 0x2F3918u;
label_2f3918:
    // 0x2f3918: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f3918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f391c:
    // 0x2f391c: 0x26240002  addiu       $a0, $s1, 0x2
    ctx->pc = 0x2f391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_2f3920:
    // 0x2f3920: 0x90732134  lbu         $s3, 0x2134($v1)
    ctx->pc = 0x2f3920u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8500)));
label_2f3924:
    // 0x2f3924: 0x903023  subu        $a2, $a0, $s0
    ctx->pc = 0x2f3924u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2f3928:
    // 0x2f3928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f3928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f392c:
    // 0x2f392c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f392cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f3930:
    // 0x2f3930: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2f3930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f3934:
    // 0x2f3934: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f3934u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3938:
    // 0x2f3938: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f3938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f393c:
    // 0x2f393c: 0x2663818  mult        $a3, $s3, $a2
    ctx->pc = 0x2f393cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_2f3940:
    // 0x2f3940: 0x94742130  lhu         $s4, 0x2130($v1)
    ctx->pc = 0x2f3940u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8496)));
label_2f3944:
    // 0x2f3944: 0x71843  sra         $v1, $a3, 1
    ctx->pc = 0x2f3944u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 1));
label_2f3948:
    // 0x2f3948: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f3948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f394c:
    // 0x2f394c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f394cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f3950:
    // 0x2f3950: 0xc0bc760  jal         func_2F1D80
label_2f3954:
    if (ctx->pc == 0x2F3954u) {
        ctx->pc = 0x2F3954u;
            // 0x2f3954: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->pc = 0x2F3958u;
        goto label_2f3958;
    }
    ctx->pc = 0x2F3950u;
    SET_GPR_U32(ctx, 31, 0x2F3958u);
    ctx->pc = 0x2F3954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3950u;
            // 0x2f3954: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D80u;
    if (runtime->hasFunction(0x2F1D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3958u; }
        if (ctx->pc != 0x2F3958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D80_0x2f1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3958u; }
        if (ctx->pc != 0x2F3958u) { return; }
    }
    ctx->pc = 0x2F3958u;
label_2f3958:
    // 0x2f3958: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f3958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f395c:
    // 0x2f395c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x2f395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_2f3960:
    // 0x2f3960: 0xc0506ac  jal         func_141AB0
label_2f3964:
    if (ctx->pc == 0x2F3964u) {
        ctx->pc = 0x2F3964u;
            // 0x2f3964: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F3968u;
        goto label_2f3968;
    }
    ctx->pc = 0x2F3960u;
    SET_GPR_U32(ctx, 31, 0x2F3968u);
    ctx->pc = 0x2F3964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3960u;
            // 0x2f3964: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3968u; }
        if (ctx->pc != 0x2F3968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3968u; }
        if (ctx->pc != 0x2F3968u) { return; }
    }
    ctx->pc = 0x2F3968u;
label_2f3968:
    // 0x2f3968: 0xc0bcf34  jal         func_2F3CD0
label_2f396c:
    if (ctx->pc == 0x2F396Cu) {
        ctx->pc = 0x2F3970u;
        goto label_2f3970;
    }
    ctx->pc = 0x2F3968u;
    SET_GPR_U32(ctx, 31, 0x2F3970u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3970u; }
        if (ctx->pc != 0x2F3970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3970u; }
        if (ctx->pc != 0x2F3970u) { return; }
    }
    ctx->pc = 0x2F3970u;
label_2f3970:
    // 0x2f3970: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f3970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3974:
    // 0x2f3974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f3974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3978:
    // 0x2f3978: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f3978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f397c:
    // 0x2f397c: 0x320f809  jalr        $t9
label_2f3980:
    if (ctx->pc == 0x2F3980u) {
        ctx->pc = 0x2F3980u;
            // 0x2f3980: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2F3984u;
        goto label_2f3984;
    }
    ctx->pc = 0x2F397Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F3984u);
        ctx->pc = 0x2F3980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F397Cu;
            // 0x2f3980: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F3984u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F3984u; }
            if (ctx->pc != 0x2F3984u) { return; }
        }
        }
    }
    ctx->pc = 0x2F3984u;
label_2f3984:
    // 0x2f3984: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x2f3984u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2f3988:
    // 0x2f3988: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2f3988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_2f398c:
    // 0x2f398c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2f398cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2f3990:
    // 0x2f3990: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2f3990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_2f3994:
    // 0x2f3994: 0x24a5add0  addiu       $a1, $a1, -0x5230
    ctx->pc = 0x2f3994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946256));
label_2f3998:
    // 0x2f3998: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x2f3998u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f399c:
    // 0x2f399c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2f399cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f39a0:
    // 0x2f39a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f39a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f39a4:
    // 0x2f39a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f39a8:
    // 0x2f39a8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f39ac:
    // 0x2f39ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2f39acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f39b0:
    // 0x2f39b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f39b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f39b4:
    // 0x2f39b4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2f39b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f39b8:
    // 0x2f39b8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x2f39b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f39bc:
    // 0x2f39bc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2f39bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f39c0:
    // 0x2f39c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f39c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f39c4:
    // 0x2f39c4: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f39c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f39c8:
    // 0x2f39c8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2f39c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2f39cc:
    // 0x2f39cc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2f39ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2f39d0:
    // 0x2f39d0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f39d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_2f39d4:
    // 0x2f39d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f39d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f39d8:
    // 0x2f39d8: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x2f39d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f39dc:
    // 0x2f39dc: 0x0  nop
    ctx->pc = 0x2f39dcu;
    // NOP
label_2f39e0:
    // 0x2f39e0: 0x2a91021  addu        $v0, $s5, $t1
    ctx->pc = 0x2f39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_2f39e4:
    // 0x2f39e4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2f39e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_2f39e8:
    // 0x2f39e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f39e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f39ec:
    // 0x2f39ec: 0x2a91023  subu        $v0, $s5, $t1
    ctx->pc = 0x2f39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_2f39f0:
    // 0x2f39f0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2f39f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2f39f4:
    // 0x2f39f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2f39f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f39f8:
    // 0x2f39f8: 0x0  nop
    ctx->pc = 0x2f39f8u;
    // NOP
label_2f39fc:
    // 0x2f39fc: 0x2624823  subu        $t1, $s3, $v0
    ctx->pc = 0x2f39fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f3a00:
    // 0x2f3a00: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f3a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f3a04:
    // 0x2f3a04: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2f3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f3a08:
    // 0x2f3a08: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f3a08u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3a0c:
    // 0x2f3a0c: 0x0  nop
    ctx->pc = 0x2f3a0cu;
    // NOP
label_2f3a10:
    // 0x2f3a10: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f3a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f3a14:
    // 0x2f3a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3a18:
    // 0x2f3a18: 0x0  nop
    ctx->pc = 0x2f3a18u;
    // NOP
label_2f3a1c:
    // 0x2f3a1c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f3a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f3a20:
    // 0x2f3a20: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2f3a20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2f3a24:
    // 0x2f3a24: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f3a24u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3a28:
    // 0x2f3a28: 0x0  nop
    ctx->pc = 0x2f3a28u;
    // NOP
label_2f3a2c:
    // 0x2f3a2c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f3a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f3a30:
    // 0x2f3a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3a34:
    // 0x2f3a34: 0x0  nop
    ctx->pc = 0x2f3a34u;
    // NOP
label_2f3a38:
    // 0x2f3a38: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f3a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f3a3c:
    // 0x2f3a3c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2f3a3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2f3a40:
    // 0x2f3a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3a44:
    // 0x2f3a44: 0xc0bc284  jal         func_2F0A10
label_2f3a48:
    if (ctx->pc == 0x2F3A48u) {
        ctx->pc = 0x2F3A48u;
            // 0x2f3a48: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F3A4Cu;
        goto label_2f3a4c;
    }
    ctx->pc = 0x2F3A44u;
    SET_GPR_U32(ctx, 31, 0x2F3A4Cu);
    ctx->pc = 0x2F3A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3A44u;
            // 0x2f3a48: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A4Cu; }
        if (ctx->pc != 0x2F3A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A4Cu; }
        if (ctx->pc != 0x2F3A4Cu) { return; }
    }
    ctx->pc = 0x2F3A4Cu;
label_2f3a4c:
    // 0x2f3a4c: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x2f3a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_2f3a50:
    // 0x2f3a50: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x2f3a50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
label_2f3a54:
    // 0x2f3a54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f3a54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2f3a58:
    // 0x2f3a58: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x2f3a58u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_2f3a5c:
    // 0x2f3a5c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2f3a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2f3a60:
    // 0x2f3a60: 0x2694ad50  addiu       $s4, $s4, -0x52B0
    ctx->pc = 0x2f3a60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946128));
label_2f3a64:
    // 0x2f3a64: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f3a68:
    // 0x2f3a68: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f3a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f3a6c:
    // 0x2f3a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f3a70:
    // 0x2f3a70: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x2f3a70u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f3a74:
    // 0x2f3a74: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2f3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2f3a78:
    // 0x2f3a78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f3a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f3a7c:
    // 0x2f3a7c: 0x90422133  lbu         $v0, 0x2133($v0)
    ctx->pc = 0x2f3a7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8499)));
label_2f3a80:
    // 0x2f3a80: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2f3a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3a84:
    // 0x2f3a84: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f3a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3a88:
    // 0x2f3a88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3a8c:
    // 0x2f3a8c: 0x44889000  mtc1        $t0, $f18
    ctx->pc = 0x2f3a8cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f3a90:
    // 0x2f3a90: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2f3a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2f3a94:
    // 0x2f3a94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f3a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f3a98:
    // 0x2f3a98: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f3a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f3a9c:
    // 0x2f3a9c: 0x2a22823  subu        $a1, $s5, $v0
    ctx->pc = 0x2f3a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2f3aa0:
    // 0x2f3aa0: 0x90622132  lbu         $v0, 0x2132($v1)
    ctx->pc = 0x2f3aa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8498)));
label_2f3aa4:
    // 0x2f3aa4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3aa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f3aa8:
    // 0x2f3aa8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2f3aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2f3aac:
    // 0x2f3aac: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x2f3aacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2f3ab0:
    // 0x2f3ab0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2f3ab0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2f3ab4:
    // 0x2f3ab4: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x2f3ab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
label_2f3ab8:
    // 0x2f3ab8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x2f3ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f3abc:
    // 0x2f3abc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2f3abcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f3ac0:
    // 0x2f3ac0: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2f3ac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f3ac4:
    // 0x2f3ac4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f3ac8:
    // 0x2f3ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3acc:
    // 0x2f3acc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f3accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f3ad0:
    // 0x2f3ad0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f3ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f3ad4:
    // 0x2f3ad4: 0x26b1021  addu        $v0, $s3, $t3
    ctx->pc = 0x2f3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
label_2f3ad8:
    // 0x2f3ad8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2f3ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2f3adc:
    // 0x2f3adc: 0x26b1023  subu        $v0, $s3, $t3
    ctx->pc = 0x2f3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
label_2f3ae0:
    // 0x2f3ae0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2f3ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2f3ae4:
    // 0x2f3ae4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f3ae4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3ae8:
    // 0x2f3ae8: 0x0  nop
    ctx->pc = 0x2f3ae8u;
    // NOP
label_2f3aec:
    // 0x2f3aec: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f3aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f3af0:
    // 0x2f3af0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f3af0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3af4:
    // 0x2f3af4: 0x0  nop
    ctx->pc = 0x2f3af4u;
    // NOP
label_2f3af8:
    // 0x2f3af8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f3af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f3afc:
    // 0x2f3afc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3b00:
    // 0x2f3b00: 0x0  nop
    ctx->pc = 0x2f3b00u;
    // NOP
label_2f3b04:
    // 0x2f3b04: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f3b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f3b08:
    // 0x2f3b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3b0c:
    // 0x2f3b0c: 0x0  nop
    ctx->pc = 0x2f3b0cu;
    // NOP
label_2f3b10:
    // 0x2f3b10: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f3b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f3b14:
    // 0x2f3b14: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2f3b14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2f3b18:
    // 0x2f3b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3b1c:
    // 0x2f3b1c: 0xc0bc284  jal         func_2F0A10
label_2f3b20:
    if (ctx->pc == 0x2F3B20u) {
        ctx->pc = 0x2F3B20u;
            // 0x2f3b20: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F3B24u;
        goto label_2f3b24;
    }
    ctx->pc = 0x2F3B1Cu;
    SET_GPR_U32(ctx, 31, 0x2F3B24u);
    ctx->pc = 0x2F3B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3B1Cu;
            // 0x2f3b20: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3B24u; }
        if (ctx->pc != 0x2F3B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3B24u; }
        if (ctx->pc != 0x2F3B24u) { return; }
    }
    ctx->pc = 0x2F3B24u;
label_2f3b24:
    // 0x2f3b24: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x2f3b24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2f3b28:
    // 0x2f3b28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f3b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b2c:
    // 0x2f3b2c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2f3b2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2f3b30:
    // 0x2f3b30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f3b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f3b34:
    // 0x2f3b34: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x2f3b34u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f3b38:
    // 0x2f3b38: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f3b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3b3c:
    // 0x2f3b3c: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x2f3b3cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f3b40:
    // 0x2f3b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b44:
    // 0x2f3b44: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x2f3b44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f3b48:
    // 0x2f3b48: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f3b48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f3b4c:
    // 0x2f3b4c: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x2f3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2f3b50:
    // 0x2f3b50: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2f3b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f3b54:
    // 0x2f3b54: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f3b58:
    // 0x2f3b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3b5c:
    // 0x2f3b5c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f3b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f3b60:
    // 0x2f3b60: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f3b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f3b64:
    // 0x2f3b64: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2f3b64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2f3b68:
    // 0x2f3b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3b6c:
    // 0x2f3b6c: 0x0  nop
    ctx->pc = 0x2f3b6cu;
    // NOP
label_2f3b70:
    // 0x2f3b70: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f3b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f3b74:
    // 0x2f3b74: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2f3b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2f3b78:
    // 0x2f3b78: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f3b78u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3b7c:
    // 0x2f3b7c: 0x0  nop
    ctx->pc = 0x2f3b7cu;
    // NOP
label_2f3b80:
    // 0x2f3b80: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f3b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f3b84:
    // 0x2f3b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3b88:
    // 0x2f3b88: 0x0  nop
    ctx->pc = 0x2f3b88u;
    // NOP
label_2f3b8c:
    // 0x2f3b8c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2f3b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_2f3b90:
    // 0x2f3b90: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f3b90u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3b94:
    // 0x2f3b94: 0x0  nop
    ctx->pc = 0x2f3b94u;
    // NOP
label_2f3b98:
    // 0x2f3b98: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f3b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f3b9c:
    // 0x2f3b9c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f3b9cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3ba0:
    // 0x2f3ba0: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x2f3ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f3ba4:
    // 0x2f3ba4: 0xc0bc284  jal         func_2F0A10
label_2f3ba8:
    if (ctx->pc == 0x2F3BA8u) {
        ctx->pc = 0x2F3BA8u;
            // 0x2f3ba8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F3BACu;
        goto label_2f3bac;
    }
    ctx->pc = 0x2F3BA4u;
    SET_GPR_U32(ctx, 31, 0x2F3BACu);
    ctx->pc = 0x2F3BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3BA4u;
            // 0x2f3ba8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3BACu; }
        if (ctx->pc != 0x2F3BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3BACu; }
        if (ctx->pc != 0x2F3BACu) { return; }
    }
    ctx->pc = 0x2F3BACu;
label_2f3bac:
    // 0x2f3bac: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x2f3bacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2f3bb0:
    // 0x2f3bb0: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x2f3bb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2f3bb4:
    // 0x2f3bb4: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2f3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_2f3bb8:
    // 0x2f3bb8: 0x24530340  addiu       $s3, $v0, 0x340
    ctx->pc = 0x2f3bb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
label_2f3bbc:
    // 0x2f3bbc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2f3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_2f3bc0:
    // 0x2f3bc0: 0x16170003  bne         $s0, $s7, . + 4 + (0x3 << 2)
label_2f3bc4:
    if (ctx->pc == 0x2F3BC4u) {
        ctx->pc = 0x2F3BC4u;
            // 0x2f3bc4: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->pc = 0x2F3BC8u;
        goto label_2f3bc8;
    }
    ctx->pc = 0x2F3BC0u;
    {
        const bool branch_taken_0x2f3bc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        ctx->pc = 0x2F3BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3BC0u;
            // 0x2f3bc4: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3bc0) {
            ctx->pc = 0x2F3BD0u;
            goto label_2f3bd0;
        }
    }
    ctx->pc = 0x2F3BC8u;
label_2f3bc8:
    // 0x2f3bc8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f3bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3bcc:
    // 0x2f3bcc: 0x0  nop
    ctx->pc = 0x2f3bccu;
    // NOP
label_2f3bd0:
    // 0x2f3bd0: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x2f3bd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2f3bd4:
    // 0x2f3bd4: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2f3bd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2f3bd8:
    // 0x2f3bd8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f3bdc:
    // 0x2f3bdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f3bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f3be0:
    // 0x2f3be0: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2f3be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2f3be4:
    // 0x2f3be4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f3be4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3be8:
    // 0x2f3be8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2f3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2f3bec:
    // 0x2f3bec: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x2f3becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_2f3bf0:
    // 0x2f3bf0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2f3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2f3bf4:
    // 0x2f3bf4: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x2f3bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_2f3bf8:
    // 0x2f3bf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3bfc:
    // 0x2f3bfc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f3bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f3c00:
    // 0x2f3c00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3c04:
    // 0x2f3c04: 0x0  nop
    ctx->pc = 0x2f3c04u;
    // NOP
label_2f3c08:
    // 0x2f3c08: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x2f3c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_2f3c0c:
    // 0x2f3c0c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f3c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f3c10:
    // 0x2f3c10: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f3c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3c14:
    // 0x2f3c14: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x2f3c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2f3c18:
    // 0x2f3c18: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f3c18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2f3c1c:
    // 0x2f3c1c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f3c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f3c20:
    // 0x2f3c20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3c20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f3c24:
    // 0x2f3c24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3c24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f3c28:
    // 0x2f3c28: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f3c28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f3c2c:
    // 0x2f3c2c: 0x0  nop
    ctx->pc = 0x2f3c2cu;
    // NOP
label_2f3c30:
    // 0x2f3c30: 0x2a31023  subu        $v0, $s5, $v1
    ctx->pc = 0x2f3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f3c34:
    // 0x2f3c34: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x2f3c34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2f3c38:
    // 0x2f3c38: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2f3c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f3c3c:
    // 0x2f3c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3c40:
    // 0x2f3c40: 0x2894023  subu        $t0, $s4, $t1
    ctx->pc = 0x2f3c40u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f3c44:
    // 0x2f3c44: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2f3c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2f3c48:
    // 0x2f3c48: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x2f3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
label_2f3c4c:
    // 0x2f3c4c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f3c4cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3c50:
    // 0x2f3c50: 0x0  nop
    ctx->pc = 0x2f3c50u;
    // NOP
label_2f3c54:
    // 0x2f3c54: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2f3c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f3c58:
    // 0x2f3c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3c5c:
    // 0x2f3c5c: 0x0  nop
    ctx->pc = 0x2f3c5cu;
    // NOP
label_2f3c60:
    // 0x2f3c60: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2f3c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_2f3c64:
    // 0x2f3c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3c68:
    // 0x2f3c68: 0xc0bc284  jal         func_2F0A10
label_2f3c6c:
    if (ctx->pc == 0x2F3C6Cu) {
        ctx->pc = 0x2F3C6Cu;
            // 0x2f3c6c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F3C70u;
        goto label_2f3c70;
    }
    ctx->pc = 0x2F3C68u;
    SET_GPR_U32(ctx, 31, 0x2F3C70u);
    ctx->pc = 0x2F3C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3C68u;
            // 0x2f3c6c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3C70u; }
        if (ctx->pc != 0x2F3C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3C70u; }
        if (ctx->pc != 0x2F3C70u) { return; }
    }
    ctx->pc = 0x2F3C70u;
label_2f3c70:
    // 0x2f3c70: 0x92c30004  lbu         $v1, 0x4($s6)
    ctx->pc = 0x2f3c70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
label_2f3c74:
    // 0x2f3c74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f3c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f3c78:
    // 0x2f3c78: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2f3c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f3c7c:
    // 0x2f3c7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f3c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f3c80:
    // 0x2f3c80: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2f3c84:
    if (ctx->pc == 0x2F3C84u) {
        ctx->pc = 0x2F3C84u;
            // 0x2f3c84: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F3C88u;
        goto label_2f3c88;
    }
    ctx->pc = 0x2F3C80u;
    {
        const bool branch_taken_0x2f3c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3C80u;
            // 0x2f3c84: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c80) {
            ctx->pc = 0x2F3BBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3bbc;
        }
    }
    ctx->pc = 0x2F3C88u;
label_2f3c88:
    // 0x2f3c88: 0xc0bcf34  jal         func_2F3CD0
label_2f3c8c:
    if (ctx->pc == 0x2F3C8Cu) {
        ctx->pc = 0x2F3C90u;
        goto label_2f3c90;
    }
    ctx->pc = 0x2F3C88u;
    SET_GPR_U32(ctx, 31, 0x2F3C90u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3C90u; }
        if (ctx->pc != 0x2F3C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3C90u; }
        if (ctx->pc != 0x2F3C90u) { return; }
    }
    ctx->pc = 0x2F3C90u;
label_2f3c90:
    // 0x2f3c90: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2f3c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3c94:
    // 0x2f3c94: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f3c94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f3c98:
    // 0x2f3c98: 0x320f809  jalr        $t9
label_2f3c9c:
    if (ctx->pc == 0x2F3C9Cu) {
        ctx->pc = 0x2F3C9Cu;
            // 0x2f3c9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CA0u;
        goto label_2f3ca0;
    }
    ctx->pc = 0x2F3C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F3CA0u);
        ctx->pc = 0x2F3C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3C98u;
            // 0x2f3c9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F3CA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F3CA0u; }
            if (ctx->pc != 0x2F3CA0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F3CA0u;
label_2f3ca0:
    // 0x2f3ca0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f3ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f3ca4:
    // 0x2f3ca4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2f3ca4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f3ca8:
    // 0x2f3ca8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2f3ca8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f3cac:
    // 0x2f3cac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f3cacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f3cb0:
    // 0x2f3cb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f3cb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3cb4:
    // 0x2f3cb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f3cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f3cb8:
    // 0x2f3cb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f3cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3cbc:
    // 0x2f3cbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f3cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f3cc0:
    // 0x2f3cc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f3cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3cc4:
    // 0x2f3cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3cc8:
    // 0x2f3cc8: 0x3e00008  jr          $ra
label_2f3ccc:
    if (ctx->pc == 0x2F3CCCu) {
        ctx->pc = 0x2F3CCCu;
            // 0x2f3ccc: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x2F3CD0u;
        goto label_fallthrough_0x2f3cc8;
    }
    ctx->pc = 0x2F3CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3CC8u;
            // 0x2f3ccc: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f3cc8:
    ctx->pc = 0x2F3CD0u;
}
