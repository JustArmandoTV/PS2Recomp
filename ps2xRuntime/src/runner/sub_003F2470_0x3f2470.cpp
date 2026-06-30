#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F2470
// Address: 0x3f2470 - 0x3f2cd0
void sub_003F2470_0x3f2470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2470_0x3f2470");
#endif

    switch (ctx->pc) {
        case 0x3f2470u: goto label_3f2470;
        case 0x3f2474u: goto label_3f2474;
        case 0x3f2478u: goto label_3f2478;
        case 0x3f247cu: goto label_3f247c;
        case 0x3f2480u: goto label_3f2480;
        case 0x3f2484u: goto label_3f2484;
        case 0x3f2488u: goto label_3f2488;
        case 0x3f248cu: goto label_3f248c;
        case 0x3f2490u: goto label_3f2490;
        case 0x3f2494u: goto label_3f2494;
        case 0x3f2498u: goto label_3f2498;
        case 0x3f249cu: goto label_3f249c;
        case 0x3f24a0u: goto label_3f24a0;
        case 0x3f24a4u: goto label_3f24a4;
        case 0x3f24a8u: goto label_3f24a8;
        case 0x3f24acu: goto label_3f24ac;
        case 0x3f24b0u: goto label_3f24b0;
        case 0x3f24b4u: goto label_3f24b4;
        case 0x3f24b8u: goto label_3f24b8;
        case 0x3f24bcu: goto label_3f24bc;
        case 0x3f24c0u: goto label_3f24c0;
        case 0x3f24c4u: goto label_3f24c4;
        case 0x3f24c8u: goto label_3f24c8;
        case 0x3f24ccu: goto label_3f24cc;
        case 0x3f24d0u: goto label_3f24d0;
        case 0x3f24d4u: goto label_3f24d4;
        case 0x3f24d8u: goto label_3f24d8;
        case 0x3f24dcu: goto label_3f24dc;
        case 0x3f24e0u: goto label_3f24e0;
        case 0x3f24e4u: goto label_3f24e4;
        case 0x3f24e8u: goto label_3f24e8;
        case 0x3f24ecu: goto label_3f24ec;
        case 0x3f24f0u: goto label_3f24f0;
        case 0x3f24f4u: goto label_3f24f4;
        case 0x3f24f8u: goto label_3f24f8;
        case 0x3f24fcu: goto label_3f24fc;
        case 0x3f2500u: goto label_3f2500;
        case 0x3f2504u: goto label_3f2504;
        case 0x3f2508u: goto label_3f2508;
        case 0x3f250cu: goto label_3f250c;
        case 0x3f2510u: goto label_3f2510;
        case 0x3f2514u: goto label_3f2514;
        case 0x3f2518u: goto label_3f2518;
        case 0x3f251cu: goto label_3f251c;
        case 0x3f2520u: goto label_3f2520;
        case 0x3f2524u: goto label_3f2524;
        case 0x3f2528u: goto label_3f2528;
        case 0x3f252cu: goto label_3f252c;
        case 0x3f2530u: goto label_3f2530;
        case 0x3f2534u: goto label_3f2534;
        case 0x3f2538u: goto label_3f2538;
        case 0x3f253cu: goto label_3f253c;
        case 0x3f2540u: goto label_3f2540;
        case 0x3f2544u: goto label_3f2544;
        case 0x3f2548u: goto label_3f2548;
        case 0x3f254cu: goto label_3f254c;
        case 0x3f2550u: goto label_3f2550;
        case 0x3f2554u: goto label_3f2554;
        case 0x3f2558u: goto label_3f2558;
        case 0x3f255cu: goto label_3f255c;
        case 0x3f2560u: goto label_3f2560;
        case 0x3f2564u: goto label_3f2564;
        case 0x3f2568u: goto label_3f2568;
        case 0x3f256cu: goto label_3f256c;
        case 0x3f2570u: goto label_3f2570;
        case 0x3f2574u: goto label_3f2574;
        case 0x3f2578u: goto label_3f2578;
        case 0x3f257cu: goto label_3f257c;
        case 0x3f2580u: goto label_3f2580;
        case 0x3f2584u: goto label_3f2584;
        case 0x3f2588u: goto label_3f2588;
        case 0x3f258cu: goto label_3f258c;
        case 0x3f2590u: goto label_3f2590;
        case 0x3f2594u: goto label_3f2594;
        case 0x3f2598u: goto label_3f2598;
        case 0x3f259cu: goto label_3f259c;
        case 0x3f25a0u: goto label_3f25a0;
        case 0x3f25a4u: goto label_3f25a4;
        case 0x3f25a8u: goto label_3f25a8;
        case 0x3f25acu: goto label_3f25ac;
        case 0x3f25b0u: goto label_3f25b0;
        case 0x3f25b4u: goto label_3f25b4;
        case 0x3f25b8u: goto label_3f25b8;
        case 0x3f25bcu: goto label_3f25bc;
        case 0x3f25c0u: goto label_3f25c0;
        case 0x3f25c4u: goto label_3f25c4;
        case 0x3f25c8u: goto label_3f25c8;
        case 0x3f25ccu: goto label_3f25cc;
        case 0x3f25d0u: goto label_3f25d0;
        case 0x3f25d4u: goto label_3f25d4;
        case 0x3f25d8u: goto label_3f25d8;
        case 0x3f25dcu: goto label_3f25dc;
        case 0x3f25e0u: goto label_3f25e0;
        case 0x3f25e4u: goto label_3f25e4;
        case 0x3f25e8u: goto label_3f25e8;
        case 0x3f25ecu: goto label_3f25ec;
        case 0x3f25f0u: goto label_3f25f0;
        case 0x3f25f4u: goto label_3f25f4;
        case 0x3f25f8u: goto label_3f25f8;
        case 0x3f25fcu: goto label_3f25fc;
        case 0x3f2600u: goto label_3f2600;
        case 0x3f2604u: goto label_3f2604;
        case 0x3f2608u: goto label_3f2608;
        case 0x3f260cu: goto label_3f260c;
        case 0x3f2610u: goto label_3f2610;
        case 0x3f2614u: goto label_3f2614;
        case 0x3f2618u: goto label_3f2618;
        case 0x3f261cu: goto label_3f261c;
        case 0x3f2620u: goto label_3f2620;
        case 0x3f2624u: goto label_3f2624;
        case 0x3f2628u: goto label_3f2628;
        case 0x3f262cu: goto label_3f262c;
        case 0x3f2630u: goto label_3f2630;
        case 0x3f2634u: goto label_3f2634;
        case 0x3f2638u: goto label_3f2638;
        case 0x3f263cu: goto label_3f263c;
        case 0x3f2640u: goto label_3f2640;
        case 0x3f2644u: goto label_3f2644;
        case 0x3f2648u: goto label_3f2648;
        case 0x3f264cu: goto label_3f264c;
        case 0x3f2650u: goto label_3f2650;
        case 0x3f2654u: goto label_3f2654;
        case 0x3f2658u: goto label_3f2658;
        case 0x3f265cu: goto label_3f265c;
        case 0x3f2660u: goto label_3f2660;
        case 0x3f2664u: goto label_3f2664;
        case 0x3f2668u: goto label_3f2668;
        case 0x3f266cu: goto label_3f266c;
        case 0x3f2670u: goto label_3f2670;
        case 0x3f2674u: goto label_3f2674;
        case 0x3f2678u: goto label_3f2678;
        case 0x3f267cu: goto label_3f267c;
        case 0x3f2680u: goto label_3f2680;
        case 0x3f2684u: goto label_3f2684;
        case 0x3f2688u: goto label_3f2688;
        case 0x3f268cu: goto label_3f268c;
        case 0x3f2690u: goto label_3f2690;
        case 0x3f2694u: goto label_3f2694;
        case 0x3f2698u: goto label_3f2698;
        case 0x3f269cu: goto label_3f269c;
        case 0x3f26a0u: goto label_3f26a0;
        case 0x3f26a4u: goto label_3f26a4;
        case 0x3f26a8u: goto label_3f26a8;
        case 0x3f26acu: goto label_3f26ac;
        case 0x3f26b0u: goto label_3f26b0;
        case 0x3f26b4u: goto label_3f26b4;
        case 0x3f26b8u: goto label_3f26b8;
        case 0x3f26bcu: goto label_3f26bc;
        case 0x3f26c0u: goto label_3f26c0;
        case 0x3f26c4u: goto label_3f26c4;
        case 0x3f26c8u: goto label_3f26c8;
        case 0x3f26ccu: goto label_3f26cc;
        case 0x3f26d0u: goto label_3f26d0;
        case 0x3f26d4u: goto label_3f26d4;
        case 0x3f26d8u: goto label_3f26d8;
        case 0x3f26dcu: goto label_3f26dc;
        case 0x3f26e0u: goto label_3f26e0;
        case 0x3f26e4u: goto label_3f26e4;
        case 0x3f26e8u: goto label_3f26e8;
        case 0x3f26ecu: goto label_3f26ec;
        case 0x3f26f0u: goto label_3f26f0;
        case 0x3f26f4u: goto label_3f26f4;
        case 0x3f26f8u: goto label_3f26f8;
        case 0x3f26fcu: goto label_3f26fc;
        case 0x3f2700u: goto label_3f2700;
        case 0x3f2704u: goto label_3f2704;
        case 0x3f2708u: goto label_3f2708;
        case 0x3f270cu: goto label_3f270c;
        case 0x3f2710u: goto label_3f2710;
        case 0x3f2714u: goto label_3f2714;
        case 0x3f2718u: goto label_3f2718;
        case 0x3f271cu: goto label_3f271c;
        case 0x3f2720u: goto label_3f2720;
        case 0x3f2724u: goto label_3f2724;
        case 0x3f2728u: goto label_3f2728;
        case 0x3f272cu: goto label_3f272c;
        case 0x3f2730u: goto label_3f2730;
        case 0x3f2734u: goto label_3f2734;
        case 0x3f2738u: goto label_3f2738;
        case 0x3f273cu: goto label_3f273c;
        case 0x3f2740u: goto label_3f2740;
        case 0x3f2744u: goto label_3f2744;
        case 0x3f2748u: goto label_3f2748;
        case 0x3f274cu: goto label_3f274c;
        case 0x3f2750u: goto label_3f2750;
        case 0x3f2754u: goto label_3f2754;
        case 0x3f2758u: goto label_3f2758;
        case 0x3f275cu: goto label_3f275c;
        case 0x3f2760u: goto label_3f2760;
        case 0x3f2764u: goto label_3f2764;
        case 0x3f2768u: goto label_3f2768;
        case 0x3f276cu: goto label_3f276c;
        case 0x3f2770u: goto label_3f2770;
        case 0x3f2774u: goto label_3f2774;
        case 0x3f2778u: goto label_3f2778;
        case 0x3f277cu: goto label_3f277c;
        case 0x3f2780u: goto label_3f2780;
        case 0x3f2784u: goto label_3f2784;
        case 0x3f2788u: goto label_3f2788;
        case 0x3f278cu: goto label_3f278c;
        case 0x3f2790u: goto label_3f2790;
        case 0x3f2794u: goto label_3f2794;
        case 0x3f2798u: goto label_3f2798;
        case 0x3f279cu: goto label_3f279c;
        case 0x3f27a0u: goto label_3f27a0;
        case 0x3f27a4u: goto label_3f27a4;
        case 0x3f27a8u: goto label_3f27a8;
        case 0x3f27acu: goto label_3f27ac;
        case 0x3f27b0u: goto label_3f27b0;
        case 0x3f27b4u: goto label_3f27b4;
        case 0x3f27b8u: goto label_3f27b8;
        case 0x3f27bcu: goto label_3f27bc;
        case 0x3f27c0u: goto label_3f27c0;
        case 0x3f27c4u: goto label_3f27c4;
        case 0x3f27c8u: goto label_3f27c8;
        case 0x3f27ccu: goto label_3f27cc;
        case 0x3f27d0u: goto label_3f27d0;
        case 0x3f27d4u: goto label_3f27d4;
        case 0x3f27d8u: goto label_3f27d8;
        case 0x3f27dcu: goto label_3f27dc;
        case 0x3f27e0u: goto label_3f27e0;
        case 0x3f27e4u: goto label_3f27e4;
        case 0x3f27e8u: goto label_3f27e8;
        case 0x3f27ecu: goto label_3f27ec;
        case 0x3f27f0u: goto label_3f27f0;
        case 0x3f27f4u: goto label_3f27f4;
        case 0x3f27f8u: goto label_3f27f8;
        case 0x3f27fcu: goto label_3f27fc;
        case 0x3f2800u: goto label_3f2800;
        case 0x3f2804u: goto label_3f2804;
        case 0x3f2808u: goto label_3f2808;
        case 0x3f280cu: goto label_3f280c;
        case 0x3f2810u: goto label_3f2810;
        case 0x3f2814u: goto label_3f2814;
        case 0x3f2818u: goto label_3f2818;
        case 0x3f281cu: goto label_3f281c;
        case 0x3f2820u: goto label_3f2820;
        case 0x3f2824u: goto label_3f2824;
        case 0x3f2828u: goto label_3f2828;
        case 0x3f282cu: goto label_3f282c;
        case 0x3f2830u: goto label_3f2830;
        case 0x3f2834u: goto label_3f2834;
        case 0x3f2838u: goto label_3f2838;
        case 0x3f283cu: goto label_3f283c;
        case 0x3f2840u: goto label_3f2840;
        case 0x3f2844u: goto label_3f2844;
        case 0x3f2848u: goto label_3f2848;
        case 0x3f284cu: goto label_3f284c;
        case 0x3f2850u: goto label_3f2850;
        case 0x3f2854u: goto label_3f2854;
        case 0x3f2858u: goto label_3f2858;
        case 0x3f285cu: goto label_3f285c;
        case 0x3f2860u: goto label_3f2860;
        case 0x3f2864u: goto label_3f2864;
        case 0x3f2868u: goto label_3f2868;
        case 0x3f286cu: goto label_3f286c;
        case 0x3f2870u: goto label_3f2870;
        case 0x3f2874u: goto label_3f2874;
        case 0x3f2878u: goto label_3f2878;
        case 0x3f287cu: goto label_3f287c;
        case 0x3f2880u: goto label_3f2880;
        case 0x3f2884u: goto label_3f2884;
        case 0x3f2888u: goto label_3f2888;
        case 0x3f288cu: goto label_3f288c;
        case 0x3f2890u: goto label_3f2890;
        case 0x3f2894u: goto label_3f2894;
        case 0x3f2898u: goto label_3f2898;
        case 0x3f289cu: goto label_3f289c;
        case 0x3f28a0u: goto label_3f28a0;
        case 0x3f28a4u: goto label_3f28a4;
        case 0x3f28a8u: goto label_3f28a8;
        case 0x3f28acu: goto label_3f28ac;
        case 0x3f28b0u: goto label_3f28b0;
        case 0x3f28b4u: goto label_3f28b4;
        case 0x3f28b8u: goto label_3f28b8;
        case 0x3f28bcu: goto label_3f28bc;
        case 0x3f28c0u: goto label_3f28c0;
        case 0x3f28c4u: goto label_3f28c4;
        case 0x3f28c8u: goto label_3f28c8;
        case 0x3f28ccu: goto label_3f28cc;
        case 0x3f28d0u: goto label_3f28d0;
        case 0x3f28d4u: goto label_3f28d4;
        case 0x3f28d8u: goto label_3f28d8;
        case 0x3f28dcu: goto label_3f28dc;
        case 0x3f28e0u: goto label_3f28e0;
        case 0x3f28e4u: goto label_3f28e4;
        case 0x3f28e8u: goto label_3f28e8;
        case 0x3f28ecu: goto label_3f28ec;
        case 0x3f28f0u: goto label_3f28f0;
        case 0x3f28f4u: goto label_3f28f4;
        case 0x3f28f8u: goto label_3f28f8;
        case 0x3f28fcu: goto label_3f28fc;
        case 0x3f2900u: goto label_3f2900;
        case 0x3f2904u: goto label_3f2904;
        case 0x3f2908u: goto label_3f2908;
        case 0x3f290cu: goto label_3f290c;
        case 0x3f2910u: goto label_3f2910;
        case 0x3f2914u: goto label_3f2914;
        case 0x3f2918u: goto label_3f2918;
        case 0x3f291cu: goto label_3f291c;
        case 0x3f2920u: goto label_3f2920;
        case 0x3f2924u: goto label_3f2924;
        case 0x3f2928u: goto label_3f2928;
        case 0x3f292cu: goto label_3f292c;
        case 0x3f2930u: goto label_3f2930;
        case 0x3f2934u: goto label_3f2934;
        case 0x3f2938u: goto label_3f2938;
        case 0x3f293cu: goto label_3f293c;
        case 0x3f2940u: goto label_3f2940;
        case 0x3f2944u: goto label_3f2944;
        case 0x3f2948u: goto label_3f2948;
        case 0x3f294cu: goto label_3f294c;
        case 0x3f2950u: goto label_3f2950;
        case 0x3f2954u: goto label_3f2954;
        case 0x3f2958u: goto label_3f2958;
        case 0x3f295cu: goto label_3f295c;
        case 0x3f2960u: goto label_3f2960;
        case 0x3f2964u: goto label_3f2964;
        case 0x3f2968u: goto label_3f2968;
        case 0x3f296cu: goto label_3f296c;
        case 0x3f2970u: goto label_3f2970;
        case 0x3f2974u: goto label_3f2974;
        case 0x3f2978u: goto label_3f2978;
        case 0x3f297cu: goto label_3f297c;
        case 0x3f2980u: goto label_3f2980;
        case 0x3f2984u: goto label_3f2984;
        case 0x3f2988u: goto label_3f2988;
        case 0x3f298cu: goto label_3f298c;
        case 0x3f2990u: goto label_3f2990;
        case 0x3f2994u: goto label_3f2994;
        case 0x3f2998u: goto label_3f2998;
        case 0x3f299cu: goto label_3f299c;
        case 0x3f29a0u: goto label_3f29a0;
        case 0x3f29a4u: goto label_3f29a4;
        case 0x3f29a8u: goto label_3f29a8;
        case 0x3f29acu: goto label_3f29ac;
        case 0x3f29b0u: goto label_3f29b0;
        case 0x3f29b4u: goto label_3f29b4;
        case 0x3f29b8u: goto label_3f29b8;
        case 0x3f29bcu: goto label_3f29bc;
        case 0x3f29c0u: goto label_3f29c0;
        case 0x3f29c4u: goto label_3f29c4;
        case 0x3f29c8u: goto label_3f29c8;
        case 0x3f29ccu: goto label_3f29cc;
        case 0x3f29d0u: goto label_3f29d0;
        case 0x3f29d4u: goto label_3f29d4;
        case 0x3f29d8u: goto label_3f29d8;
        case 0x3f29dcu: goto label_3f29dc;
        case 0x3f29e0u: goto label_3f29e0;
        case 0x3f29e4u: goto label_3f29e4;
        case 0x3f29e8u: goto label_3f29e8;
        case 0x3f29ecu: goto label_3f29ec;
        case 0x3f29f0u: goto label_3f29f0;
        case 0x3f29f4u: goto label_3f29f4;
        case 0x3f29f8u: goto label_3f29f8;
        case 0x3f29fcu: goto label_3f29fc;
        case 0x3f2a00u: goto label_3f2a00;
        case 0x3f2a04u: goto label_3f2a04;
        case 0x3f2a08u: goto label_3f2a08;
        case 0x3f2a0cu: goto label_3f2a0c;
        case 0x3f2a10u: goto label_3f2a10;
        case 0x3f2a14u: goto label_3f2a14;
        case 0x3f2a18u: goto label_3f2a18;
        case 0x3f2a1cu: goto label_3f2a1c;
        case 0x3f2a20u: goto label_3f2a20;
        case 0x3f2a24u: goto label_3f2a24;
        case 0x3f2a28u: goto label_3f2a28;
        case 0x3f2a2cu: goto label_3f2a2c;
        case 0x3f2a30u: goto label_3f2a30;
        case 0x3f2a34u: goto label_3f2a34;
        case 0x3f2a38u: goto label_3f2a38;
        case 0x3f2a3cu: goto label_3f2a3c;
        case 0x3f2a40u: goto label_3f2a40;
        case 0x3f2a44u: goto label_3f2a44;
        case 0x3f2a48u: goto label_3f2a48;
        case 0x3f2a4cu: goto label_3f2a4c;
        case 0x3f2a50u: goto label_3f2a50;
        case 0x3f2a54u: goto label_3f2a54;
        case 0x3f2a58u: goto label_3f2a58;
        case 0x3f2a5cu: goto label_3f2a5c;
        case 0x3f2a60u: goto label_3f2a60;
        case 0x3f2a64u: goto label_3f2a64;
        case 0x3f2a68u: goto label_3f2a68;
        case 0x3f2a6cu: goto label_3f2a6c;
        case 0x3f2a70u: goto label_3f2a70;
        case 0x3f2a74u: goto label_3f2a74;
        case 0x3f2a78u: goto label_3f2a78;
        case 0x3f2a7cu: goto label_3f2a7c;
        case 0x3f2a80u: goto label_3f2a80;
        case 0x3f2a84u: goto label_3f2a84;
        case 0x3f2a88u: goto label_3f2a88;
        case 0x3f2a8cu: goto label_3f2a8c;
        case 0x3f2a90u: goto label_3f2a90;
        case 0x3f2a94u: goto label_3f2a94;
        case 0x3f2a98u: goto label_3f2a98;
        case 0x3f2a9cu: goto label_3f2a9c;
        case 0x3f2aa0u: goto label_3f2aa0;
        case 0x3f2aa4u: goto label_3f2aa4;
        case 0x3f2aa8u: goto label_3f2aa8;
        case 0x3f2aacu: goto label_3f2aac;
        case 0x3f2ab0u: goto label_3f2ab0;
        case 0x3f2ab4u: goto label_3f2ab4;
        case 0x3f2ab8u: goto label_3f2ab8;
        case 0x3f2abcu: goto label_3f2abc;
        case 0x3f2ac0u: goto label_3f2ac0;
        case 0x3f2ac4u: goto label_3f2ac4;
        case 0x3f2ac8u: goto label_3f2ac8;
        case 0x3f2accu: goto label_3f2acc;
        case 0x3f2ad0u: goto label_3f2ad0;
        case 0x3f2ad4u: goto label_3f2ad4;
        case 0x3f2ad8u: goto label_3f2ad8;
        case 0x3f2adcu: goto label_3f2adc;
        case 0x3f2ae0u: goto label_3f2ae0;
        case 0x3f2ae4u: goto label_3f2ae4;
        case 0x3f2ae8u: goto label_3f2ae8;
        case 0x3f2aecu: goto label_3f2aec;
        case 0x3f2af0u: goto label_3f2af0;
        case 0x3f2af4u: goto label_3f2af4;
        case 0x3f2af8u: goto label_3f2af8;
        case 0x3f2afcu: goto label_3f2afc;
        case 0x3f2b00u: goto label_3f2b00;
        case 0x3f2b04u: goto label_3f2b04;
        case 0x3f2b08u: goto label_3f2b08;
        case 0x3f2b0cu: goto label_3f2b0c;
        case 0x3f2b10u: goto label_3f2b10;
        case 0x3f2b14u: goto label_3f2b14;
        case 0x3f2b18u: goto label_3f2b18;
        case 0x3f2b1cu: goto label_3f2b1c;
        case 0x3f2b20u: goto label_3f2b20;
        case 0x3f2b24u: goto label_3f2b24;
        case 0x3f2b28u: goto label_3f2b28;
        case 0x3f2b2cu: goto label_3f2b2c;
        case 0x3f2b30u: goto label_3f2b30;
        case 0x3f2b34u: goto label_3f2b34;
        case 0x3f2b38u: goto label_3f2b38;
        case 0x3f2b3cu: goto label_3f2b3c;
        case 0x3f2b40u: goto label_3f2b40;
        case 0x3f2b44u: goto label_3f2b44;
        case 0x3f2b48u: goto label_3f2b48;
        case 0x3f2b4cu: goto label_3f2b4c;
        case 0x3f2b50u: goto label_3f2b50;
        case 0x3f2b54u: goto label_3f2b54;
        case 0x3f2b58u: goto label_3f2b58;
        case 0x3f2b5cu: goto label_3f2b5c;
        case 0x3f2b60u: goto label_3f2b60;
        case 0x3f2b64u: goto label_3f2b64;
        case 0x3f2b68u: goto label_3f2b68;
        case 0x3f2b6cu: goto label_3f2b6c;
        case 0x3f2b70u: goto label_3f2b70;
        case 0x3f2b74u: goto label_3f2b74;
        case 0x3f2b78u: goto label_3f2b78;
        case 0x3f2b7cu: goto label_3f2b7c;
        case 0x3f2b80u: goto label_3f2b80;
        case 0x3f2b84u: goto label_3f2b84;
        case 0x3f2b88u: goto label_3f2b88;
        case 0x3f2b8cu: goto label_3f2b8c;
        case 0x3f2b90u: goto label_3f2b90;
        case 0x3f2b94u: goto label_3f2b94;
        case 0x3f2b98u: goto label_3f2b98;
        case 0x3f2b9cu: goto label_3f2b9c;
        case 0x3f2ba0u: goto label_3f2ba0;
        case 0x3f2ba4u: goto label_3f2ba4;
        case 0x3f2ba8u: goto label_3f2ba8;
        case 0x3f2bacu: goto label_3f2bac;
        case 0x3f2bb0u: goto label_3f2bb0;
        case 0x3f2bb4u: goto label_3f2bb4;
        case 0x3f2bb8u: goto label_3f2bb8;
        case 0x3f2bbcu: goto label_3f2bbc;
        case 0x3f2bc0u: goto label_3f2bc0;
        case 0x3f2bc4u: goto label_3f2bc4;
        case 0x3f2bc8u: goto label_3f2bc8;
        case 0x3f2bccu: goto label_3f2bcc;
        case 0x3f2bd0u: goto label_3f2bd0;
        case 0x3f2bd4u: goto label_3f2bd4;
        case 0x3f2bd8u: goto label_3f2bd8;
        case 0x3f2bdcu: goto label_3f2bdc;
        case 0x3f2be0u: goto label_3f2be0;
        case 0x3f2be4u: goto label_3f2be4;
        case 0x3f2be8u: goto label_3f2be8;
        case 0x3f2becu: goto label_3f2bec;
        case 0x3f2bf0u: goto label_3f2bf0;
        case 0x3f2bf4u: goto label_3f2bf4;
        case 0x3f2bf8u: goto label_3f2bf8;
        case 0x3f2bfcu: goto label_3f2bfc;
        case 0x3f2c00u: goto label_3f2c00;
        case 0x3f2c04u: goto label_3f2c04;
        case 0x3f2c08u: goto label_3f2c08;
        case 0x3f2c0cu: goto label_3f2c0c;
        case 0x3f2c10u: goto label_3f2c10;
        case 0x3f2c14u: goto label_3f2c14;
        case 0x3f2c18u: goto label_3f2c18;
        case 0x3f2c1cu: goto label_3f2c1c;
        case 0x3f2c20u: goto label_3f2c20;
        case 0x3f2c24u: goto label_3f2c24;
        case 0x3f2c28u: goto label_3f2c28;
        case 0x3f2c2cu: goto label_3f2c2c;
        case 0x3f2c30u: goto label_3f2c30;
        case 0x3f2c34u: goto label_3f2c34;
        case 0x3f2c38u: goto label_3f2c38;
        case 0x3f2c3cu: goto label_3f2c3c;
        case 0x3f2c40u: goto label_3f2c40;
        case 0x3f2c44u: goto label_3f2c44;
        case 0x3f2c48u: goto label_3f2c48;
        case 0x3f2c4cu: goto label_3f2c4c;
        case 0x3f2c50u: goto label_3f2c50;
        case 0x3f2c54u: goto label_3f2c54;
        case 0x3f2c58u: goto label_3f2c58;
        case 0x3f2c5cu: goto label_3f2c5c;
        case 0x3f2c60u: goto label_3f2c60;
        case 0x3f2c64u: goto label_3f2c64;
        case 0x3f2c68u: goto label_3f2c68;
        case 0x3f2c6cu: goto label_3f2c6c;
        case 0x3f2c70u: goto label_3f2c70;
        case 0x3f2c74u: goto label_3f2c74;
        case 0x3f2c78u: goto label_3f2c78;
        case 0x3f2c7cu: goto label_3f2c7c;
        case 0x3f2c80u: goto label_3f2c80;
        case 0x3f2c84u: goto label_3f2c84;
        case 0x3f2c88u: goto label_3f2c88;
        case 0x3f2c8cu: goto label_3f2c8c;
        case 0x3f2c90u: goto label_3f2c90;
        case 0x3f2c94u: goto label_3f2c94;
        case 0x3f2c98u: goto label_3f2c98;
        case 0x3f2c9cu: goto label_3f2c9c;
        case 0x3f2ca0u: goto label_3f2ca0;
        case 0x3f2ca4u: goto label_3f2ca4;
        case 0x3f2ca8u: goto label_3f2ca8;
        case 0x3f2cacu: goto label_3f2cac;
        case 0x3f2cb0u: goto label_3f2cb0;
        case 0x3f2cb4u: goto label_3f2cb4;
        case 0x3f2cb8u: goto label_3f2cb8;
        case 0x3f2cbcu: goto label_3f2cbc;
        case 0x3f2cc0u: goto label_3f2cc0;
        case 0x3f2cc4u: goto label_3f2cc4;
        case 0x3f2cc8u: goto label_3f2cc8;
        case 0x3f2cccu: goto label_3f2ccc;
        default: break;
    }

    ctx->pc = 0x3f2470u;

label_3f2470:
    // 0x3f2470: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f2470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f2474:
    // 0x3f2474: 0x8c426f10  lw          $v0, 0x6F10($v0)
    ctx->pc = 0x3f2474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28432)));
label_3f2478:
    // 0x3f2478: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x3f2478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f247c:
    // 0x3f247c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x3f247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3f2480:
    // 0x3f2480: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3f2480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f2484:
    // 0x3f2484: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f2484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f2488:
    // 0x3f2488: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_3f248c:
    if (ctx->pc == 0x3F248Cu) {
        ctx->pc = 0x3F248Cu;
            // 0x3f248c: 0xac800060  sw          $zero, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x3F2490u;
        goto label_3f2490;
    }
    ctx->pc = 0x3F2488u;
    {
        const bool branch_taken_0x3f2488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f2488) {
            ctx->pc = 0x3F248Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2488u;
            // 0x3f248c: 0xac800060  sw          $zero, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F24ACu;
            goto label_3f24ac;
        }
    }
    ctx->pc = 0x3F2490u;
label_3f2490:
    // 0x3f2490: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3f2490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3f2494:
    // 0x3f2494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f2494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f2498:
    // 0x3f2498: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3f2498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3f249c:
    // 0x3f249c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3f249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f24a0:
    // 0x3f24a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3f24a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f24a4:
    // 0x3f24a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3f24a8:
    if (ctx->pc == 0x3F24A8u) {
        ctx->pc = 0x3F24A8u;
            // 0x3f24a8: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->pc = 0x3F24ACu;
        goto label_3f24ac;
    }
    ctx->pc = 0x3F24A4u;
    {
        const bool branch_taken_0x3f24a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F24A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F24A4u;
            // 0x3f24a8: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f24a4) {
            ctx->pc = 0x3F24B0u;
            goto label_3f24b0;
        }
    }
    ctx->pc = 0x3F24ACu;
label_3f24ac:
    // 0x3f24ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f24acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f24b0:
    // 0x3f24b0: 0x3e00008  jr          $ra
label_3f24b4:
    if (ctx->pc == 0x3F24B4u) {
        ctx->pc = 0x3F24B8u;
        goto label_3f24b8;
    }
    ctx->pc = 0x3F24B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F24B8u;
label_3f24b8:
    // 0x3f24b8: 0x0  nop
    ctx->pc = 0x3f24b8u;
    // NOP
label_3f24bc:
    // 0x3f24bc: 0x0  nop
    ctx->pc = 0x3f24bcu;
    // NOP
label_3f24c0:
    // 0x3f24c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f24c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f24c4:
    // 0x3f24c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f24c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f24c8:
    // 0x3f24c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f24c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f24cc:
    // 0x3f24cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f24ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f24d0:
    // 0x3f24d0: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x3f24d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3f24d4:
    // 0x3f24d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f24d8:
    if (ctx->pc == 0x3F24D8u) {
        ctx->pc = 0x3F24D8u;
            // 0x3f24d8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x3F24DCu;
        goto label_3f24dc;
    }
    ctx->pc = 0x3F24D4u;
    {
        const bool branch_taken_0x3f24d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f24d4) {
            ctx->pc = 0x3F24D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F24D4u;
            // 0x3f24d8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F24F0u;
            goto label_3f24f0;
        }
    }
    ctx->pc = 0x3F24DCu;
label_3f24dc:
    // 0x3f24dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f24dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f24e0:
    // 0x3f24e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f24e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f24e4:
    // 0x3f24e4: 0x320f809  jalr        $t9
label_3f24e8:
    if (ctx->pc == 0x3F24E8u) {
        ctx->pc = 0x3F24E8u;
            // 0x3f24e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F24ECu;
        goto label_3f24ec;
    }
    ctx->pc = 0x3F24E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F24ECu);
        ctx->pc = 0x3F24E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F24E4u;
            // 0x3f24e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F24ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F24ECu; }
            if (ctx->pc != 0x3F24ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3F24ECu;
label_3f24ec:
    // 0x3f24ec: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3f24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3f24f0:
    // 0x3f24f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f24f4:
    if (ctx->pc == 0x3F24F4u) {
        ctx->pc = 0x3F24F4u;
            // 0x3f24f4: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x3F24F8u;
        goto label_3f24f8;
    }
    ctx->pc = 0x3F24F0u;
    {
        const bool branch_taken_0x3f24f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f24f0) {
            ctx->pc = 0x3F24F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F24F0u;
            // 0x3f24f4: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F250Cu;
            goto label_3f250c;
        }
    }
    ctx->pc = 0x3F24F8u;
label_3f24f8:
    // 0x3f24f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f24f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f24fc:
    // 0x3f24fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f24fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f2500:
    // 0x3f2500: 0x320f809  jalr        $t9
label_3f2504:
    if (ctx->pc == 0x3F2504u) {
        ctx->pc = 0x3F2504u;
            // 0x3f2504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F2508u;
        goto label_3f2508;
    }
    ctx->pc = 0x3F2500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F2508u);
        ctx->pc = 0x3F2504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2500u;
            // 0x3f2504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F2508u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F2508u; }
            if (ctx->pc != 0x3F2508u) { return; }
        }
        }
    }
    ctx->pc = 0x3F2508u;
label_3f2508:
    // 0x3f2508: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x3f2508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_3f250c:
    // 0x3f250c: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x3f250cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_3f2510:
    // 0x3f2510: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f2514:
    if (ctx->pc == 0x3F2514u) {
        ctx->pc = 0x3F2514u;
            // 0x3f2514: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x3F2518u;
        goto label_3f2518;
    }
    ctx->pc = 0x3F2510u;
    {
        const bool branch_taken_0x3f2510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2510) {
            ctx->pc = 0x3F2514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2510u;
            // 0x3f2514: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F252Cu;
            goto label_3f252c;
        }
    }
    ctx->pc = 0x3F2518u;
label_3f2518:
    // 0x3f2518: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f2518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f251c:
    // 0x3f251c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f251cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f2520:
    // 0x3f2520: 0x320f809  jalr        $t9
label_3f2524:
    if (ctx->pc == 0x3F2524u) {
        ctx->pc = 0x3F2524u;
            // 0x3f2524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F2528u;
        goto label_3f2528;
    }
    ctx->pc = 0x3F2520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F2528u);
        ctx->pc = 0x3F2524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2520u;
            // 0x3f2524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F2528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F2528u; }
            if (ctx->pc != 0x3F2528u) { return; }
        }
        }
    }
    ctx->pc = 0x3F2528u;
label_3f2528:
    // 0x3f2528: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x3f2528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_3f252c:
    // 0x3f252c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f252cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f2530:
    // 0x3f2530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f2534:
    // 0x3f2534: 0x3e00008  jr          $ra
label_3f2538:
    if (ctx->pc == 0x3F2538u) {
        ctx->pc = 0x3F2538u;
            // 0x3f2538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F253Cu;
        goto label_3f253c;
    }
    ctx->pc = 0x3F2534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2534u;
            // 0x3f2538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F253Cu;
label_3f253c:
    // 0x3f253c: 0x0  nop
    ctx->pc = 0x3f253cu;
    // NOP
label_3f2540:
    // 0x3f2540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f2544:
    // 0x3f2544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f2544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f2548:
    // 0x3f2548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f2548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f254c:
    // 0x3f254c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f2550:
    // 0x3f2550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2554:
    // 0x3f2554: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_3f2558:
    if (ctx->pc == 0x3F2558u) {
        ctx->pc = 0x3F2558u;
            // 0x3f2558: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F255Cu;
        goto label_3f255c;
    }
    ctx->pc = 0x3F2554u;
    {
        const bool branch_taken_0x3f2554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2554u;
            // 0x3f2558: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2554) {
            ctx->pc = 0x3F25B8u;
            goto label_3f25b8;
        }
    }
    ctx->pc = 0x3F255Cu;
label_3f255c:
    // 0x3f255c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f255cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f2560:
    // 0x3f2560: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x3f2560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
label_3f2564:
    // 0x3f2564: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_3f2568:
    if (ctx->pc == 0x3F2568u) {
        ctx->pc = 0x3F2568u;
            // 0x3f2568: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3F256Cu;
        goto label_3f256c;
    }
    ctx->pc = 0x3F2564u;
    {
        const bool branch_taken_0x3f2564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2564u;
            // 0x3f2568: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2564) {
            ctx->pc = 0x3F25A0u;
            goto label_3f25a0;
        }
    }
    ctx->pc = 0x3F256Cu;
label_3f256c:
    // 0x3f256c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f2570:
    // 0x3f2570: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x3f2570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_3f2574:
    // 0x3f2574: 0xc0d37dc  jal         func_34DF70
label_3f2578:
    if (ctx->pc == 0x3F2578u) {
        ctx->pc = 0x3F2578u;
            // 0x3f2578: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3F257Cu;
        goto label_3f257c;
    }
    ctx->pc = 0x3F2574u;
    SET_GPR_U32(ctx, 31, 0x3F257Cu);
    ctx->pc = 0x3F2578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2574u;
            // 0x3f2578: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F257Cu; }
        if (ctx->pc != 0x3F257Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F257Cu; }
        if (ctx->pc != 0x3F257Cu) { return; }
    }
    ctx->pc = 0x3F257Cu;
label_3f257c:
    // 0x3f257c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_3f2580:
    if (ctx->pc == 0x3F2580u) {
        ctx->pc = 0x3F2580u;
            // 0x3f2580: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3F2584u;
        goto label_3f2584;
    }
    ctx->pc = 0x3F257Cu;
    {
        const bool branch_taken_0x3f257c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f257c) {
            ctx->pc = 0x3F2580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F257Cu;
            // 0x3f2580: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F25A4u;
            goto label_3f25a4;
        }
    }
    ctx->pc = 0x3F2584u;
label_3f2584:
    // 0x3f2584: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f2584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f2588:
    // 0x3f2588: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x3f2588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_3f258c:
    // 0x3f258c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_3f2590:
    if (ctx->pc == 0x3F2590u) {
        ctx->pc = 0x3F2590u;
            // 0x3f2590: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3F2594u;
        goto label_3f2594;
    }
    ctx->pc = 0x3F258Cu;
    {
        const bool branch_taken_0x3f258c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F258Cu;
            // 0x3f2590: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f258c) {
            ctx->pc = 0x3F25A0u;
            goto label_3f25a0;
        }
    }
    ctx->pc = 0x3F2594u;
label_3f2594:
    // 0x3f2594: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f2594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f2598:
    // 0x3f2598: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3f2598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3f259c:
    // 0x3f259c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3f259cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3f25a0:
    // 0x3f25a0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3f25a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3f25a4:
    // 0x3f25a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f25a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f25a8:
    // 0x3f25a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3f25ac:
    if (ctx->pc == 0x3F25ACu) {
        ctx->pc = 0x3F25ACu;
            // 0x3f25ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F25B0u;
        goto label_3f25b0;
    }
    ctx->pc = 0x3F25A8u;
    {
        const bool branch_taken_0x3f25a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f25a8) {
            ctx->pc = 0x3F25ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F25A8u;
            // 0x3f25ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F25BCu;
            goto label_3f25bc;
        }
    }
    ctx->pc = 0x3F25B0u;
label_3f25b0:
    // 0x3f25b0: 0xc0400a8  jal         func_1002A0
label_3f25b4:
    if (ctx->pc == 0x3F25B4u) {
        ctx->pc = 0x3F25B4u;
            // 0x3f25b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F25B8u;
        goto label_3f25b8;
    }
    ctx->pc = 0x3F25B0u;
    SET_GPR_U32(ctx, 31, 0x3F25B8u);
    ctx->pc = 0x3F25B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F25B0u;
            // 0x3f25b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F25B8u; }
        if (ctx->pc != 0x3F25B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F25B8u; }
        if (ctx->pc != 0x3F25B8u) { return; }
    }
    ctx->pc = 0x3F25B8u;
label_3f25b8:
    // 0x3f25b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f25b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f25bc:
    // 0x3f25bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f25bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f25c0:
    // 0x3f25c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f25c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f25c4:
    // 0x3f25c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f25c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f25c8:
    // 0x3f25c8: 0x3e00008  jr          $ra
label_3f25cc:
    if (ctx->pc == 0x3F25CCu) {
        ctx->pc = 0x3F25CCu;
            // 0x3f25cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F25D0u;
        goto label_3f25d0;
    }
    ctx->pc = 0x3F25C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F25CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F25C8u;
            // 0x3f25cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F25D0u;
label_3f25d0:
    // 0x3f25d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f25d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f25d4:
    // 0x3f25d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f25d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f25d8:
    // 0x3f25d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f25d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f25dc:
    // 0x3f25dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f25dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f25e0:
    // 0x3f25e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f25e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f25e4:
    // 0x3f25e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f25e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f25e8:
    // 0x3f25e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f25e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f25ec:
    // 0x3f25ec: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x3f25ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f25f0:
    // 0x3f25f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3f25f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f25f4:
    // 0x3f25f4: 0x45010044  bc1t        . + 4 + (0x44 << 2)
label_3f25f8:
    if (ctx->pc == 0x3F25F8u) {
        ctx->pc = 0x3F25F8u;
            // 0x3f25f8: 0xe4810080  swc1        $f1, 0x80($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
        ctx->pc = 0x3F25FCu;
        goto label_3f25fc;
    }
    ctx->pc = 0x3F25F4u;
    {
        const bool branch_taken_0x3f25f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F25F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F25F4u;
            // 0x3f25f8: 0xe4810080  swc1        $f1, 0x80($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f25f4) {
            ctx->pc = 0x3F2708u;
            goto label_3f2708;
        }
    }
    ctx->pc = 0x3F25FCu;
label_3f25fc:
    // 0x3f25fc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3f25fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3f2600:
    // 0x3f2600: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3f2600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3f2604:
    // 0x3f2604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f2604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f2608:
    // 0x3f2608: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x3f2608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_3f260c:
    // 0x3f260c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3f260cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3f2610:
    // 0x3f2610: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3f2610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3f2614:
    // 0x3f2614: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3f2614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_3f2618:
    // 0x3f2618: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3f2618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3f261c:
    // 0x3f261c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f261cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f2620:
    // 0x3f2620: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x3f2620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_3f2624:
    // 0x3f2624: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3f2624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3f2628:
    // 0x3f2628: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3f2628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3f262c:
    // 0x3f262c: 0xc0a7a88  jal         func_29EA20
label_3f2630:
    if (ctx->pc == 0x3F2630u) {
        ctx->pc = 0x3F2630u;
            // 0x3f2630: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->pc = 0x3F2634u;
        goto label_3f2634;
    }
    ctx->pc = 0x3F262Cu;
    SET_GPR_U32(ctx, 31, 0x3F2634u);
    ctx->pc = 0x3F2630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F262Cu;
            // 0x3f2630: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2634u; }
        if (ctx->pc != 0x3F2634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2634u; }
        if (ctx->pc != 0x3F2634u) { return; }
    }
    ctx->pc = 0x3F2634u;
label_3f2634:
    // 0x3f2634: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3f2634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3f2638:
    // 0x3f2638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f2638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f263c:
    // 0x3f263c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_3f2640:
    if (ctx->pc == 0x3F2640u) {
        ctx->pc = 0x3F2640u;
            // 0x3f2640: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3F2644u;
        goto label_3f2644;
    }
    ctx->pc = 0x3F263Cu;
    {
        const bool branch_taken_0x3f263c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F263Cu;
            // 0x3f2640: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f263c) {
            ctx->pc = 0x3F265Cu;
            goto label_3f265c;
        }
    }
    ctx->pc = 0x3F2644u;
label_3f2644:
    // 0x3f2644: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3f2644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3f2648:
    // 0x3f2648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f264c:
    // 0x3f264c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3f264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3f2650:
    // 0x3f2650: 0xc0804bc  jal         func_2012F0
label_3f2654:
    if (ctx->pc == 0x3F2654u) {
        ctx->pc = 0x3F2654u;
            // 0x3f2654: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F2658u;
        goto label_3f2658;
    }
    ctx->pc = 0x3F2650u;
    SET_GPR_U32(ctx, 31, 0x3F2658u);
    ctx->pc = 0x3F2654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2650u;
            // 0x3f2654: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2658u; }
        if (ctx->pc != 0x3F2658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2658u; }
        if (ctx->pc != 0x3F2658u) { return; }
    }
    ctx->pc = 0x3F2658u;
label_3f2658:
    // 0x3f2658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f2658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f265c:
    // 0x3f265c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3f265cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3f2660:
    // 0x3f2660: 0xc04c968  jal         func_1325A0
label_3f2664:
    if (ctx->pc == 0x3F2664u) {
        ctx->pc = 0x3F2664u;
            // 0x3f2664: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3F2668u;
        goto label_3f2668;
    }
    ctx->pc = 0x3F2660u;
    SET_GPR_U32(ctx, 31, 0x3F2668u);
    ctx->pc = 0x3F2664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2660u;
            // 0x3f2664: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2668u; }
        if (ctx->pc != 0x3F2668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2668u; }
        if (ctx->pc != 0x3F2668u) { return; }
    }
    ctx->pc = 0x3F2668u;
label_3f2668:
    // 0x3f2668: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x3f2668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f266c:
    // 0x3f266c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3f266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3f2670:
    // 0x3f2670: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x3f2670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f2674:
    // 0x3f2674: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3f2674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2678:
    // 0x3f2678: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3f2678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f267c:
    // 0x3f267c: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x3f267cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_3f2680:
    // 0x3f2680: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3f2680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f2684:
    // 0x3f2684: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x3f2684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_3f2688:
    // 0x3f2688: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3f2688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f268c:
    // 0x3f268c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x3f268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f2690:
    // 0x3f2690: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3f2690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f2694:
    // 0x3f2694: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x3f2694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_3f2698:
    // 0x3f2698: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3f2698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f269c:
    // 0x3f269c: 0xc04c74c  jal         func_131D30
label_3f26a0:
    if (ctx->pc == 0x3F26A0u) {
        ctx->pc = 0x3F26A0u;
            // 0x3f26a0: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->pc = 0x3F26A4u;
        goto label_3f26a4;
    }
    ctx->pc = 0x3F269Cu;
    SET_GPR_U32(ctx, 31, 0x3F26A4u);
    ctx->pc = 0x3F26A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F269Cu;
            // 0x3f26a0: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F26A4u; }
        if (ctx->pc != 0x3F26A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F26A4u; }
        if (ctx->pc != 0x3F26A4u) { return; }
    }
    ctx->pc = 0x3F26A4u;
label_3f26a4:
    // 0x3f26a4: 0xc040180  jal         func_100600
label_3f26a8:
    if (ctx->pc == 0x3F26A8u) {
        ctx->pc = 0x3F26A8u;
            // 0x3f26a8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3F26ACu;
        goto label_3f26ac;
    }
    ctx->pc = 0x3F26A4u;
    SET_GPR_U32(ctx, 31, 0x3F26ACu);
    ctx->pc = 0x3F26A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F26A4u;
            // 0x3f26a8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F26ACu; }
        if (ctx->pc != 0x3F26ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F26ACu; }
        if (ctx->pc != 0x3F26ACu) { return; }
    }
    ctx->pc = 0x3F26ACu;
label_3f26ac:
    // 0x3f26ac: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3f26b0:
    if (ctx->pc == 0x3F26B0u) {
        ctx->pc = 0x3F26B0u;
            // 0x3f26b0: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x3F26B4u;
        goto label_3f26b4;
    }
    ctx->pc = 0x3F26ACu;
    {
        const bool branch_taken_0x3f26ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f26ac) {
            ctx->pc = 0x3F26B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F26ACu;
            // 0x3f26b0: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F26F0u;
            goto label_3f26f0;
        }
    }
    ctx->pc = 0x3F26B4u;
label_3f26b4:
    // 0x3f26b4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3f26b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3f26b8:
    // 0x3f26b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3f26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3f26bc:
    // 0x3f26bc: 0x2484cfe0  addiu       $a0, $a0, -0x3020
    ctx->pc = 0x3f26bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954976));
label_3f26c0:
    // 0x3f26c0: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x3f26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
label_3f26c4:
    // 0x3f26c4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3f26c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3f26c8:
    // 0x3f26c8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3f26c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3f26cc:
    // 0x3f26cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3f26ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3f26d0:
    // 0x3f26d0: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x3f26d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_3f26d4:
    // 0x3f26d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f26d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f26d8:
    // 0x3f26d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3f26d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3f26dc:
    // 0x3f26dc: 0x2463a1f0  addiu       $v1, $v1, -0x5E10
    ctx->pc = 0x3f26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943216));
label_3f26e0:
    // 0x3f26e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3f26e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3f26e4:
    // 0x3f26e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3f26e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3f26e8:
    // 0x3f26e8: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x3f26e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_3f26ec:
    // 0x3f26ec: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x3f26ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_3f26f0:
    // 0x3f26f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f26f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f26f4:
    // 0x3f26f4: 0x26250064  addiu       $a1, $s1, 0x64
    ctx->pc = 0x3f26f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3f26f8:
    // 0x3f26f8: 0x26260070  addiu       $a2, $s1, 0x70
    ctx->pc = 0x3f26f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3f26fc:
    // 0x3f26fc: 0xc0d37ec  jal         func_34DFB0
label_3f2700:
    if (ctx->pc == 0x3F2700u) {
        ctx->pc = 0x3F2700u;
            // 0x3f2700: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F2704u;
        goto label_3f2704;
    }
    ctx->pc = 0x3F26FCu;
    SET_GPR_U32(ctx, 31, 0x3F2704u);
    ctx->pc = 0x3F2700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F26FCu;
            // 0x3f2700: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2704u; }
        if (ctx->pc != 0x3F2704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2704u; }
        if (ctx->pc != 0x3F2704u) { return; }
    }
    ctx->pc = 0x3F2704u;
label_3f2704:
    // 0x3f2704: 0xae30005c  sw          $s0, 0x5C($s1)
    ctx->pc = 0x3f2704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 16));
label_3f2708:
    // 0x3f2708: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x3f2708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_3f270c:
    // 0x3f270c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3f270cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3f2710:
    // 0x3f2710: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x3f2710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_3f2714:
    // 0x3f2714: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f2714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f2718:
    // 0x3f2718: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x3f2718u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3f271c:
    // 0x3f271c: 0xc040180  jal         func_100600
label_3f2720:
    if (ctx->pc == 0x3F2720u) {
        ctx->pc = 0x3F2720u;
            // 0x3f2720: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x3F2724u;
        goto label_3f2724;
    }
    ctx->pc = 0x3F271Cu;
    SET_GPR_U32(ctx, 31, 0x3F2724u);
    ctx->pc = 0x3F2720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F271Cu;
            // 0x3f2720: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2724u; }
        if (ctx->pc != 0x3F2724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2724u; }
        if (ctx->pc != 0x3F2724u) { return; }
    }
    ctx->pc = 0x3F2724u;
label_3f2724:
    // 0x3f2724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f2724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f2728:
    // 0x3f2728: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_3f272c:
    if (ctx->pc == 0x3F272Cu) {
        ctx->pc = 0x3F272Cu;
            // 0x3f272c: 0xae3000d0  sw          $s0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 16));
        ctx->pc = 0x3F2730u;
        goto label_3f2730;
    }
    ctx->pc = 0x3F2728u;
    {
        const bool branch_taken_0x3f2728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2728) {
            ctx->pc = 0x3F272Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2728u;
            // 0x3f272c: 0xae3000d0  sw          $s0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2768u;
            goto label_3f2768;
        }
    }
    ctx->pc = 0x3F2730u;
label_3f2730:
    // 0x3f2730: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3f2730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3f2734:
    // 0x3f2734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f2734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f2738:
    // 0x3f2738: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x3f2738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_3f273c:
    // 0x3f273c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3f273cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3f2740:
    // 0x3f2740: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f2740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3f2744:
    // 0x3f2744: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3f2744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3f2748:
    // 0x3f2748: 0xc040138  jal         func_1004E0
label_3f274c:
    if (ctx->pc == 0x3F274Cu) {
        ctx->pc = 0x3F274Cu;
            // 0x3f274c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3F2750u;
        goto label_3f2750;
    }
    ctx->pc = 0x3F2748u;
    SET_GPR_U32(ctx, 31, 0x3F2750u);
    ctx->pc = 0x3F274Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2748u;
            // 0x3f274c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2750u; }
        if (ctx->pc != 0x3F2750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2750u; }
        if (ctx->pc != 0x3F2750u) { return; }
    }
    ctx->pc = 0x3F2750u;
label_3f2750:
    // 0x3f2750: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3f2750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3f2754:
    // 0x3f2754: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x3f2754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3f2758:
    // 0x3f2758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f2758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f275c:
    // 0x3f275c: 0xc04a576  jal         func_1295D8
label_3f2760:
    if (ctx->pc == 0x3F2760u) {
        ctx->pc = 0x3F2760u;
            // 0x3f2760: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3F2764u;
        goto label_3f2764;
    }
    ctx->pc = 0x3F275Cu;
    SET_GPR_U32(ctx, 31, 0x3F2764u);
    ctx->pc = 0x3F2760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F275Cu;
            // 0x3f2760: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2764u; }
        if (ctx->pc != 0x3F2764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2764u; }
        if (ctx->pc != 0x3F2764u) { return; }
    }
    ctx->pc = 0x3F2764u;
label_3f2764:
    // 0x3f2764: 0xae3000d0  sw          $s0, 0xD0($s1)
    ctx->pc = 0x3f2764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 16));
label_3f2768:
    // 0x3f2768: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3f2768u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3f276c:
    // 0x3f276c: 0x92470c6a  lbu         $a3, 0xC6A($s2)
    ctx->pc = 0x3f276cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3178)));
label_3f2770:
    // 0x3f2770: 0x3c034774  lui         $v1, 0x4774
    ctx->pc = 0x3f2770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18292 << 16));
label_3f2774:
    // 0x3f2774: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f2774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3f2778:
    // 0x3f2778: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x3f2778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_3f277c:
    // 0x3f277c: 0x24c6a338  addiu       $a2, $a2, -0x5CC8
    ctx->pc = 0x3f277cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943544));
label_3f2780:
    // 0x3f2780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f2784:
    // 0x3f2784: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x3f2784u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3f2788:
    // 0x3f2788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f2788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f278c:
    // 0x3f278c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3f278cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_3f2790:
    // 0x3f2790: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3f2790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3f2794:
    // 0x3f2794: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3f2794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f2798:
    // 0x3f2798: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f2798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f279c:
    // 0x3f279c: 0xc122cd8  jal         func_48B360
label_3f27a0:
    if (ctx->pc == 0x3F27A0u) {
        ctx->pc = 0x3F27A0u;
            // 0x3f27a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F27A4u;
        goto label_3f27a4;
    }
    ctx->pc = 0x3F279Cu;
    SET_GPR_U32(ctx, 31, 0x3F27A4u);
    ctx->pc = 0x3F27A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F279Cu;
            // 0x3f27a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F27A4u; }
        if (ctx->pc != 0x3F27A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F27A4u; }
        if (ctx->pc != 0x3F27A4u) { return; }
    }
    ctx->pc = 0x3F27A4u;
label_3f27a4:
    // 0x3f27a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f27a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f27a8:
    // 0x3f27a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f27a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f27ac:
    // 0x3f27ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f27acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f27b0:
    // 0x3f27b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f27b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f27b4:
    // 0x3f27b4: 0x3e00008  jr          $ra
label_3f27b8:
    if (ctx->pc == 0x3F27B8u) {
        ctx->pc = 0x3F27B8u;
            // 0x3f27b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F27BCu;
        goto label_3f27bc;
    }
    ctx->pc = 0x3F27B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F27B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F27B4u;
            // 0x3f27b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F27BCu;
label_3f27bc:
    // 0x3f27bc: 0x0  nop
    ctx->pc = 0x3f27bcu;
    // NOP
label_3f27c0:
    // 0x3f27c0: 0x3e00008  jr          $ra
label_3f27c4:
    if (ctx->pc == 0x3F27C4u) {
        ctx->pc = 0x3F27C8u;
        goto label_3f27c8;
    }
    ctx->pc = 0x3F27C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F27C8u;
label_3f27c8:
    // 0x3f27c8: 0x0  nop
    ctx->pc = 0x3f27c8u;
    // NOP
label_3f27cc:
    // 0x3f27cc: 0x0  nop
    ctx->pc = 0x3f27ccu;
    // NOP
label_3f27d0:
    // 0x3f27d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f27d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f27d4:
    // 0x3f27d4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3f27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3f27d8:
    // 0x3f27d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f27d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f27dc:
    // 0x3f27dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f27dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f27e0:
    // 0x3f27e0: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x3f27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_3f27e4:
    // 0x3f27e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f27e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f27e8:
    // 0x3f27e8: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x3f27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_3f27ec:
    // 0x3f27ec: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x3f27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_3f27f0:
    // 0x3f27f0: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x3f27f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_3f27f4:
    // 0x3f27f4: 0x8c840088  lw          $a0, 0x88($a0)
    ctx->pc = 0x3f27f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_3f27f8:
    // 0x3f27f8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3f27fc:
    if (ctx->pc == 0x3F27FCu) {
        ctx->pc = 0x3F27FCu;
            // 0x3f27fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F2800u;
        goto label_3f2800;
    }
    ctx->pc = 0x3F27F8u;
    {
        const bool branch_taken_0x3f27f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f27f8) {
            ctx->pc = 0x3F27FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F27F8u;
            // 0x3f27fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2818u;
            goto label_3f2818;
        }
    }
    ctx->pc = 0x3F2800u;
label_3f2800:
    // 0x3f2800: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f2800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f2804:
    // 0x3f2804: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f2804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f2808:
    // 0x3f2808: 0x320f809  jalr        $t9
label_3f280c:
    if (ctx->pc == 0x3F280Cu) {
        ctx->pc = 0x3F280Cu;
            // 0x3f280c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F2810u;
        goto label_3f2810;
    }
    ctx->pc = 0x3F2808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F2810u);
        ctx->pc = 0x3F280Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2808u;
            // 0x3f280c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F2810u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F2810u; }
            if (ctx->pc != 0x3F2810u) { return; }
        }
        }
    }
    ctx->pc = 0x3F2810u;
label_3f2810:
    // 0x3f2810: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3f2810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_3f2814:
    // 0x3f2814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f2814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f2818:
    // 0x3f2818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f281c:
    // 0x3f281c: 0x3e00008  jr          $ra
label_3f2820:
    if (ctx->pc == 0x3F2820u) {
        ctx->pc = 0x3F2820u;
            // 0x3f2820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F2824u;
        goto label_3f2824;
    }
    ctx->pc = 0x3F281Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F281Cu;
            // 0x3f2820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F2824u;
label_3f2824:
    // 0x3f2824: 0x0  nop
    ctx->pc = 0x3f2824u;
    // NOP
label_3f2828:
    // 0x3f2828: 0x0  nop
    ctx->pc = 0x3f2828u;
    // NOP
label_3f282c:
    // 0x3f282c: 0x0  nop
    ctx->pc = 0x3f282cu;
    // NOP
label_3f2830:
    // 0x3f2830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f2830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f2834:
    // 0x3f2834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f2834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f2838:
    // 0x3f2838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f2838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f283c:
    // 0x3f283c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x3f283cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3f2840:
    // 0x3f2840: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3f2840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3f2844:
    // 0x3f2844: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_3f2848:
    if (ctx->pc == 0x3F2848u) {
        ctx->pc = 0x3F2848u;
            // 0x3f2848: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F284Cu;
        goto label_3f284c;
    }
    ctx->pc = 0x3F2844u;
    {
        const bool branch_taken_0x3f2844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2844) {
            ctx->pc = 0x3F2848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2844u;
            // 0x3f2848: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F288Cu;
            goto label_3f288c;
        }
    }
    ctx->pc = 0x3F284Cu;
label_3f284c:
    // 0x3f284c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f2850:
    // 0x3f2850: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3f2850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3f2854:
    // 0x3f2854: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x3f2854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_3f2858:
    // 0x3f2858: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_3f285c:
    if (ctx->pc == 0x3F285Cu) {
        ctx->pc = 0x3F2860u;
        goto label_3f2860;
    }
    ctx->pc = 0x3F2858u;
    {
        const bool branch_taken_0x3f2858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2858) {
            ctx->pc = 0x3F2888u;
            goto label_3f2888;
        }
    }
    ctx->pc = 0x3F2860u;
label_3f2860:
    // 0x3f2860: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f2860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f2864:
    // 0x3f2864: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f2864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f2868:
    // 0x3f2868: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3f2868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3f286c:
    // 0x3f286c: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x3f286cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_3f2870:
    // 0x3f2870: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x3f2870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_3f2874:
    // 0x3f2874: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x3f2874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3f2878:
    // 0x3f2878: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f2878u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f287c:
    // 0x3f287c: 0xc0bb0e8  jal         func_2EC3A0
label_3f2880:
    if (ctx->pc == 0x3F2880u) {
        ctx->pc = 0x3F2880u;
            // 0x3f2880: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3F2884u;
        goto label_3f2884;
    }
    ctx->pc = 0x3F287Cu;
    SET_GPR_U32(ctx, 31, 0x3F2884u);
    ctx->pc = 0x3F2880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F287Cu;
            // 0x3f2880: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2884u; }
        if (ctx->pc != 0x3F2884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2884u; }
        if (ctx->pc != 0x3F2884u) { return; }
    }
    ctx->pc = 0x3F2884u;
label_3f2884:
    // 0x3f2884: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x3f2884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_3f2888:
    // 0x3f2888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f2888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f288c:
    // 0x3f288c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f288cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f2890:
    // 0x3f2890: 0x3e00008  jr          $ra
label_3f2894:
    if (ctx->pc == 0x3F2894u) {
        ctx->pc = 0x3F2894u;
            // 0x3f2894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F2898u;
        goto label_3f2898;
    }
    ctx->pc = 0x3F2890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2890u;
            // 0x3f2894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F2898u;
label_3f2898:
    // 0x3f2898: 0x0  nop
    ctx->pc = 0x3f2898u;
    // NOP
label_3f289c:
    // 0x3f289c: 0x0  nop
    ctx->pc = 0x3f289cu;
    // NOP
label_3f28a0:
    // 0x3f28a0: 0x3e00008  jr          $ra
label_3f28a4:
    if (ctx->pc == 0x3F28A4u) {
        ctx->pc = 0x3F28A4u;
            // 0x3f28a4: 0x240236ce  addiu       $v0, $zero, 0x36CE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14030));
        ctx->pc = 0x3F28A8u;
        goto label_3f28a8;
    }
    ctx->pc = 0x3F28A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F28A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F28A0u;
            // 0x3f28a4: 0x240236ce  addiu       $v0, $zero, 0x36CE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F28A8u;
label_3f28a8:
    // 0x3f28a8: 0x0  nop
    ctx->pc = 0x3f28a8u;
    // NOP
label_3f28ac:
    // 0x3f28ac: 0x0  nop
    ctx->pc = 0x3f28acu;
    // NOP
label_3f28b0:
    // 0x3f28b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3f28b4:
    // 0x3f28b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f28b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f28b8:
    // 0x3f28b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f28b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f28bc:
    // 0x3f28bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f28bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f28c0:
    // 0x3f28c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3f28c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f28c4:
    // 0x3f28c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f28c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f28c8:
    // 0x3f28c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f28c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f28cc:
    // 0x3f28cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f28d0:
    // 0x3f28d0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3f28d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3f28d4:
    // 0x3f28d4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3f28d8:
    if (ctx->pc == 0x3F28D8u) {
        ctx->pc = 0x3F28D8u;
            // 0x3f28d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F28DCu;
        goto label_3f28dc;
    }
    ctx->pc = 0x3F28D4u;
    {
        const bool branch_taken_0x3f28d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F28D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F28D4u;
            // 0x3f28d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f28d4) {
            ctx->pc = 0x3F2918u;
            goto label_3f2918;
        }
    }
    ctx->pc = 0x3F28DCu;
label_3f28dc:
    // 0x3f28dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f28dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f28e0:
    // 0x3f28e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f28e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f28e4:
    // 0x3f28e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f28e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f28e8:
    // 0x3f28e8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3f28e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3f28ec:
    // 0x3f28ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3f28ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3f28f0:
    // 0x3f28f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3f28f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f28f4:
    // 0x3f28f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f28f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f28f8:
    // 0x3f28f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3f28f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3f28fc:
    // 0x3f28fc: 0x320f809  jalr        $t9
label_3f2900:
    if (ctx->pc == 0x3F2900u) {
        ctx->pc = 0x3F2904u;
        goto label_3f2904;
    }
    ctx->pc = 0x3F28FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F2904u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F2904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F2904u; }
            if (ctx->pc != 0x3F2904u) { return; }
        }
        }
    }
    ctx->pc = 0x3F2904u;
label_3f2904:
    // 0x3f2904: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3f2904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3f2908:
    // 0x3f2908: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3f2908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3f290c:
    // 0x3f290c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3f290cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3f2910:
    // 0x3f2910: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3f2914:
    if (ctx->pc == 0x3F2914u) {
        ctx->pc = 0x3F2914u;
            // 0x3f2914: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3F2918u;
        goto label_3f2918;
    }
    ctx->pc = 0x3F2910u;
    {
        const bool branch_taken_0x3f2910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2910u;
            // 0x3f2914: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2910) {
            ctx->pc = 0x3F28E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f28e8;
        }
    }
    ctx->pc = 0x3F2918u;
label_3f2918:
    // 0x3f2918: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3f2918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f291c:
    // 0x3f291c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f291cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f2920:
    // 0x3f2920: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f2920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f2924:
    // 0x3f2924: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f2924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f2928:
    // 0x3f2928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f2928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f292c:
    // 0x3f292c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f292cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f2930:
    // 0x3f2930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f2934:
    // 0x3f2934: 0x3e00008  jr          $ra
label_3f2938:
    if (ctx->pc == 0x3F2938u) {
        ctx->pc = 0x3F2938u;
            // 0x3f2938: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F293Cu;
        goto label_3f293c;
    }
    ctx->pc = 0x3F2934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2934u;
            // 0x3f2938: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F293Cu;
label_3f293c:
    // 0x3f293c: 0x0  nop
    ctx->pc = 0x3f293cu;
    // NOP
label_3f2940:
    // 0x3f2940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f2944:
    // 0x3f2944: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f2944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f2948:
    // 0x3f2948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f2948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f294c:
    // 0x3f294c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3f294cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3f2950:
    // 0x3f2950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f2950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f2954:
    // 0x3f2954: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3f2954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3f2958:
    // 0x3f2958: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f2958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f295c:
    // 0x3f295c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3f295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3f2960:
    // 0x3f2960: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f2960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3f2964:
    // 0x3f2964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f2964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f2968:
    // 0x3f2968: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3f2968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3f296c:
    // 0x3f296c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3f296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f2970:
    // 0x3f2970: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3f2970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3f2974:
    // 0x3f2974: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3f2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3f2978:
    // 0x3f2978: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3f2978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3f297c:
    // 0x3f297c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3f297cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3f2980:
    // 0x3f2980: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3f2980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3f2984:
    // 0x3f2984: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f2984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3f2988:
    // 0x3f2988: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3f2988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3f298c:
    // 0x3f298c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3f298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3f2990:
    // 0x3f2990: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3f2990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3f2994:
    // 0x3f2994: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f2994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3f2998:
    // 0x3f2998: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3f2998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f299c:
    // 0x3f299c: 0xc0a997c  jal         func_2A65F0
label_3f29a0:
    if (ctx->pc == 0x3F29A0u) {
        ctx->pc = 0x3F29A0u;
            // 0x3f29a0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3F29A4u;
        goto label_3f29a4;
    }
    ctx->pc = 0x3F299Cu;
    SET_GPR_U32(ctx, 31, 0x3F29A4u);
    ctx->pc = 0x3F29A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F299Cu;
            // 0x3f29a0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F29A4u; }
        if (ctx->pc != 0x3F29A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F29A4u; }
        if (ctx->pc != 0x3F29A4u) { return; }
    }
    ctx->pc = 0x3F29A4u;
label_3f29a4:
    // 0x3f29a4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3f29a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3f29a8:
    // 0x3f29a8: 0xc0d879c  jal         func_361E70
label_3f29ac:
    if (ctx->pc == 0x3F29ACu) {
        ctx->pc = 0x3F29ACu;
            // 0x3f29ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F29B0u;
        goto label_3f29b0;
    }
    ctx->pc = 0x3F29A8u;
    SET_GPR_U32(ctx, 31, 0x3F29B0u);
    ctx->pc = 0x3F29ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F29A8u;
            // 0x3f29ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F29B0u; }
        if (ctx->pc != 0x3F29B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F29B0u; }
        if (ctx->pc != 0x3F29B0u) { return; }
    }
    ctx->pc = 0x3F29B0u;
label_3f29b0:
    // 0x3f29b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f29b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f29b4:
    // 0x3f29b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f29b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f29b8:
    // 0x3f29b8: 0x3e00008  jr          $ra
label_3f29bc:
    if (ctx->pc == 0x3F29BCu) {
        ctx->pc = 0x3F29BCu;
            // 0x3f29bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F29C0u;
        goto label_3f29c0;
    }
    ctx->pc = 0x3F29B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F29BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F29B8u;
            // 0x3f29bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F29C0u;
label_3f29c0:
    // 0x3f29c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f29c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f29c4:
    // 0x3f29c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f29c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f29c8:
    // 0x3f29c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f29c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f29cc:
    // 0x3f29cc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3f29ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3f29d0:
    // 0x3f29d0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3f29d4:
    if (ctx->pc == 0x3F29D4u) {
        ctx->pc = 0x3F29D4u;
            // 0x3f29d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F29D8u;
        goto label_3f29d8;
    }
    ctx->pc = 0x3F29D0u;
    {
        const bool branch_taken_0x3f29d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F29D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F29D0u;
            // 0x3f29d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f29d0) {
            ctx->pc = 0x3F2AF0u;
            goto label_3f2af0;
        }
    }
    ctx->pc = 0x3F29D8u;
label_3f29d8:
    // 0x3f29d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3f29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3f29dc:
    // 0x3f29dc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3f29dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3f29e0:
    // 0x3f29e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3f29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3f29e4:
    // 0x3f29e4: 0xc075128  jal         func_1D44A0
label_3f29e8:
    if (ctx->pc == 0x3F29E8u) {
        ctx->pc = 0x3F29E8u;
            // 0x3f29e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3F29ECu;
        goto label_3f29ec;
    }
    ctx->pc = 0x3F29E4u;
    SET_GPR_U32(ctx, 31, 0x3F29ECu);
    ctx->pc = 0x3F29E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F29E4u;
            // 0x3f29e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F29ECu; }
        if (ctx->pc != 0x3F29ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F29ECu; }
        if (ctx->pc != 0x3F29ECu) { return; }
    }
    ctx->pc = 0x3F29ECu;
label_3f29ec:
    // 0x3f29ec: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3f29ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3f29f0:
    // 0x3f29f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f29f4:
    // 0x3f29f4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3f29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3f29f8:
    // 0x3f29f8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3f29f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3f29fc:
    // 0x3f29fc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3f29fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f2a00:
    // 0x3f2a00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3f2a04:
    if (ctx->pc == 0x3F2A04u) {
        ctx->pc = 0x3F2A04u;
            // 0x3f2a04: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3F2A08u;
        goto label_3f2a08;
    }
    ctx->pc = 0x3F2A00u;
    {
        const bool branch_taken_0x3f2a00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2A00u;
            // 0x3f2a04: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a00) {
            ctx->pc = 0x3F2A10u;
            goto label_3f2a10;
        }
    }
    ctx->pc = 0x3F2A08u;
label_3f2a08:
    // 0x3f2a08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f2a0c:
    // 0x3f2a0c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3f2a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3f2a10:
    // 0x3f2a10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f2a14:
    // 0x3f2a14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f2a18:
    // 0x3f2a18: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3f2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3f2a1c:
    // 0x3f2a1c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3f2a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3f2a20:
    // 0x3f2a20: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3f2a20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f2a24:
    // 0x3f2a24: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3f2a28:
    if (ctx->pc == 0x3F2A28u) {
        ctx->pc = 0x3F2A28u;
            // 0x3f2a28: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3F2A2Cu;
        goto label_3f2a2c;
    }
    ctx->pc = 0x3F2A24u;
    {
        const bool branch_taken_0x3f2a24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2a24) {
            ctx->pc = 0x3F2A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2A24u;
            // 0x3f2a28: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2A38u;
            goto label_3f2a38;
        }
    }
    ctx->pc = 0x3F2A2Cu;
label_3f2a2c:
    // 0x3f2a2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f2a30:
    // 0x3f2a30: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3f2a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3f2a34:
    // 0x3f2a34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f2a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f2a38:
    // 0x3f2a38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f2a3c:
    // 0x3f2a3c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3f2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3f2a40:
    // 0x3f2a40: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3f2a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3f2a44:
    // 0x3f2a44: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3f2a44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f2a48:
    // 0x3f2a48: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3f2a4c:
    if (ctx->pc == 0x3F2A4Cu) {
        ctx->pc = 0x3F2A4Cu;
            // 0x3f2a4c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3F2A50u;
        goto label_3f2a50;
    }
    ctx->pc = 0x3F2A48u;
    {
        const bool branch_taken_0x3f2a48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2a48) {
            ctx->pc = 0x3F2A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2A48u;
            // 0x3f2a4c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2A5Cu;
            goto label_3f2a5c;
        }
    }
    ctx->pc = 0x3F2A50u;
label_3f2a50:
    // 0x3f2a50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f2a54:
    // 0x3f2a54: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3f2a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3f2a58:
    // 0x3f2a58: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3f2a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f2a5c:
    // 0x3f2a5c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3f2a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3f2a60:
    // 0x3f2a60: 0x320f809  jalr        $t9
label_3f2a64:
    if (ctx->pc == 0x3F2A64u) {
        ctx->pc = 0x3F2A64u;
            // 0x3f2a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A68u;
        goto label_3f2a68;
    }
    ctx->pc = 0x3F2A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F2A68u);
        ctx->pc = 0x3F2A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2A60u;
            // 0x3f2a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F2A68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F2A68u; }
            if (ctx->pc != 0x3F2A68u) { return; }
        }
        }
    }
    ctx->pc = 0x3F2A68u;
label_3f2a68:
    // 0x3f2a68: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3f2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3f2a6c:
    // 0x3f2a6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f2a70:
    // 0x3f2a70: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3f2a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3f2a74:
    // 0x3f2a74: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3f2a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3f2a78:
    // 0x3f2a78: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3f2a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3f2a7c:
    // 0x3f2a7c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3f2a7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3f2a80:
    // 0x3f2a80: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3f2a84:
    if (ctx->pc == 0x3F2A84u) {
        ctx->pc = 0x3F2A84u;
            // 0x3f2a84: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x3F2A88u;
        goto label_3f2a88;
    }
    ctx->pc = 0x3F2A80u;
    {
        const bool branch_taken_0x3f2a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2a80) {
            ctx->pc = 0x3F2A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2A80u;
            // 0x3f2a84: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2A94u;
            goto label_3f2a94;
        }
    }
    ctx->pc = 0x3F2A88u;
label_3f2a88:
    // 0x3f2a88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f2a8c:
    // 0x3f2a8c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3f2a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3f2a90:
    // 0x3f2a90: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3f2a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3f2a94:
    // 0x3f2a94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f2a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f2a98:
    // 0x3f2a98: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3f2a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3f2a9c:
    // 0x3f2a9c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3f2a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3f2aa0:
    // 0x3f2aa0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3f2aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3f2aa4:
    // 0x3f2aa4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3f2aa4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3f2aa8:
    // 0x3f2aa8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3f2aac:
    if (ctx->pc == 0x3F2AACu) {
        ctx->pc = 0x3F2AB0u;
        goto label_3f2ab0;
    }
    ctx->pc = 0x3F2AA8u;
    {
        const bool branch_taken_0x3f2aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2aa8) {
            ctx->pc = 0x3F2AB8u;
            goto label_3f2ab8;
        }
    }
    ctx->pc = 0x3F2AB0u;
label_3f2ab0:
    // 0x3f2ab0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f2ab4:
    // 0x3f2ab4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3f2ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3f2ab8:
    // 0x3f2ab8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f2ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f2abc:
    // 0x3f2abc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3f2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3f2ac0:
    // 0x3f2ac0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3f2ac0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3f2ac4:
    // 0x3f2ac4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3f2ac8:
    if (ctx->pc == 0x3F2AC8u) {
        ctx->pc = 0x3F2ACCu;
        goto label_3f2acc;
    }
    ctx->pc = 0x3F2AC4u;
    {
        const bool branch_taken_0x3f2ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2ac4) {
            ctx->pc = 0x3F2AD4u;
            goto label_3f2ad4;
        }
    }
    ctx->pc = 0x3F2ACCu;
label_3f2acc:
    // 0x3f2acc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f2accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f2ad0:
    // 0x3f2ad0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3f2ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3f2ad4:
    // 0x3f2ad4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f2ad8:
    // 0x3f2ad8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3f2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3f2adc:
    // 0x3f2adc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3f2adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3f2ae0:
    // 0x3f2ae0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3f2ae4:
    if (ctx->pc == 0x3F2AE4u) {
        ctx->pc = 0x3F2AE4u;
            // 0x3f2ae4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F2AE8u;
        goto label_3f2ae8;
    }
    ctx->pc = 0x3F2AE0u;
    {
        const bool branch_taken_0x3f2ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2ae0) {
            ctx->pc = 0x3F2AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2AE0u;
            // 0x3f2ae4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2AF4u;
            goto label_3f2af4;
        }
    }
    ctx->pc = 0x3F2AE8u;
label_3f2ae8:
    // 0x3f2ae8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f2aec:
    // 0x3f2aec: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3f2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3f2af0:
    // 0x3f2af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f2af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f2af4:
    // 0x3f2af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f2af8:
    // 0x3f2af8: 0x3e00008  jr          $ra
label_3f2afc:
    if (ctx->pc == 0x3F2AFCu) {
        ctx->pc = 0x3F2AFCu;
            // 0x3f2afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F2B00u;
        goto label_3f2b00;
    }
    ctx->pc = 0x3F2AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2AF8u;
            // 0x3f2afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F2B00u;
label_3f2b00:
    // 0x3f2b00: 0x80fc7ec  j           func_3F1FB0
label_3f2b04:
    if (ctx->pc == 0x3F2B04u) {
        ctx->pc = 0x3F2B04u;
            // 0x3f2b04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3F2B08u;
        goto label_3f2b08;
    }
    ctx->pc = 0x3F2B00u;
    ctx->pc = 0x3F2B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2B00u;
            // 0x3f2b04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1FB0u;
    {
        auto targetFn = runtime->lookupFunction(0x3F1FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3F2B08u;
label_3f2b08:
    // 0x3f2b08: 0x0  nop
    ctx->pc = 0x3f2b08u;
    // NOP
label_3f2b0c:
    // 0x3f2b0c: 0x0  nop
    ctx->pc = 0x3f2b0cu;
    // NOP
label_3f2b10:
    // 0x3f2b10: 0x80fc59c  j           func_3F1670
label_3f2b14:
    if (ctx->pc == 0x3F2B14u) {
        ctx->pc = 0x3F2B14u;
            // 0x3f2b14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3F2B18u;
        goto label_3f2b18;
    }
    ctx->pc = 0x3F2B10u;
    ctx->pc = 0x3F2B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2B10u;
            // 0x3f2b14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F1670u;
    if (runtime->hasFunction(0x3F1670u)) {
        auto targetFn = runtime->lookupFunction(0x3F1670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003F1670_0x3f1670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3F2B18u;
label_3f2b18:
    // 0x3f2b18: 0x0  nop
    ctx->pc = 0x3f2b18u;
    // NOP
label_3f2b1c:
    // 0x3f2b1c: 0x0  nop
    ctx->pc = 0x3f2b1cu;
    // NOP
label_3f2b20:
    // 0x3f2b20: 0x80fc578  j           func_3F15E0
label_3f2b24:
    if (ctx->pc == 0x3F2B24u) {
        ctx->pc = 0x3F2B24u;
            // 0x3f2b24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3F2B28u;
        goto label_3f2b28;
    }
    ctx->pc = 0x3F2B20u;
    ctx->pc = 0x3F2B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2B20u;
            // 0x3f2b24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F15E0u;
    {
        auto targetFn = runtime->lookupFunction(0x3F15E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3F2B28u;
label_3f2b28:
    // 0x3f2b28: 0x0  nop
    ctx->pc = 0x3f2b28u;
    // NOP
label_3f2b2c:
    // 0x3f2b2c: 0x0  nop
    ctx->pc = 0x3f2b2cu;
    // NOP
label_3f2b30:
    // 0x3f2b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f2b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f2b34:
    // 0x3f2b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f2b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f2b38:
    // 0x3f2b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f2b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f2b3c:
    // 0x3f2b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f2b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f2b40:
    // 0x3f2b40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f2b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f2b44:
    // 0x3f2b44: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x3f2b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_3f2b48:
    // 0x3f2b48: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3f2b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3f2b4c:
    // 0x3f2b4c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3f2b50:
    if (ctx->pc == 0x3F2B50u) {
        ctx->pc = 0x3F2B50u;
            // 0x3f2b50: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F2B54u;
        goto label_3f2b54;
    }
    ctx->pc = 0x3F2B4Cu;
    {
        const bool branch_taken_0x3f2b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2B4Cu;
            // 0x3f2b50: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2b4c) {
            ctx->pc = 0x3F2B70u;
            goto label_3f2b70;
        }
    }
    ctx->pc = 0x3F2B54u;
label_3f2b54:
    // 0x3f2b54: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x3f2b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3f2b58:
    // 0x3f2b58: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3f2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3f2b5c:
    // 0x3f2b5c: 0x0  nop
    ctx->pc = 0x3f2b5cu;
    // NOP
label_3f2b60:
    // 0x3f2b60: 0x0  nop
    ctx->pc = 0x3f2b60u;
    // NOP
label_3f2b64:
    // 0x3f2b64: 0x0  nop
    ctx->pc = 0x3f2b64u;
    // NOP
label_3f2b68:
    // 0x3f2b68: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3f2b6c:
    if (ctx->pc == 0x3F2B6Cu) {
        ctx->pc = 0x3F2B70u;
        goto label_3f2b70;
    }
    ctx->pc = 0x3F2B68u;
    {
        const bool branch_taken_0x3f2b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2b68) {
            ctx->pc = 0x3F2B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f2b54;
        }
    }
    ctx->pc = 0x3F2B70u;
label_3f2b70:
    // 0x3f2b70: 0x80a40018  lb          $a0, 0x18($a1)
    ctx->pc = 0x3f2b70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_3f2b74:
    // 0x3f2b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f2b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f2b78:
    // 0x3f2b78: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_3f2b7c:
    if (ctx->pc == 0x3F2B7Cu) {
        ctx->pc = 0x3F2B7Cu;
            // 0x3f2b7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F2B80u;
        goto label_3f2b80;
    }
    ctx->pc = 0x3F2B78u;
    {
        const bool branch_taken_0x3f2b78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f2b78) {
            ctx->pc = 0x3F2B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2B78u;
            // 0x3f2b7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2B88u;
            goto label_3f2b88;
        }
    }
    ctx->pc = 0x3F2B80u;
label_3f2b80:
    // 0x3f2b80: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x3f2b80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_3f2b84:
    // 0x3f2b84: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x3f2b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3f2b88:
    // 0x3f2b88: 0x5080004c  beql        $a0, $zero, . + 4 + (0x4C << 2)
label_3f2b8c:
    if (ctx->pc == 0x3F2B8Cu) {
        ctx->pc = 0x3F2B8Cu;
            // 0x3f2b8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3F2B90u;
        goto label_3f2b90;
    }
    ctx->pc = 0x3F2B88u;
    {
        const bool branch_taken_0x3f2b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2b88) {
            ctx->pc = 0x3F2B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2B88u;
            // 0x3f2b8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2CBCu;
            goto label_3f2cbc;
        }
    }
    ctx->pc = 0x3F2B90u;
label_3f2b90:
    // 0x3f2b90: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x3f2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3f2b94:
    // 0x3f2b94: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_3f2b98:
    if (ctx->pc == 0x3F2B98u) {
        ctx->pc = 0x3F2B98u;
            // 0x3f2b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F2B9Cu;
        goto label_3f2b9c;
    }
    ctx->pc = 0x3F2B94u;
    {
        const bool branch_taken_0x3f2b94 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3F2B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2B94u;
            // 0x3f2b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2b94) {
            ctx->pc = 0x3F2BD0u;
            goto label_3f2bd0;
        }
    }
    ctx->pc = 0x3F2B9Cu;
label_3f2b9c:
    // 0x3f2b9c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3f2ba0:
    // 0x3f2ba0: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x3f2ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_3f2ba4:
    // 0x3f2ba4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x3f2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_3f2ba8:
    // 0x3f2ba8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3f2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3f2bac:
    // 0x3f2bac: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_3f2bb0:
    if (ctx->pc == 0x3F2BB0u) {
        ctx->pc = 0x3F2BB0u;
            // 0x3f2bb0: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x3F2BB4u;
        goto label_3f2bb4;
    }
    ctx->pc = 0x3F2BACu;
    {
        const bool branch_taken_0x3f2bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f2bac) {
            ctx->pc = 0x3F2BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2BACu;
            // 0x3f2bb0: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2BBCu;
            goto label_3f2bbc;
        }
    }
    ctx->pc = 0x3F2BB4u;
label_3f2bb4:
    // 0x3f2bb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f2bb8:
    if (ctx->pc == 0x3F2BB8u) {
        ctx->pc = 0x3F2BB8u;
            // 0x3f2bb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F2BBCu;
        goto label_3f2bbc;
    }
    ctx->pc = 0x3F2BB4u;
    {
        const bool branch_taken_0x3f2bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2BB4u;
            // 0x3f2bb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2bb4) {
            ctx->pc = 0x3F2BD4u;
            goto label_3f2bd4;
        }
    }
    ctx->pc = 0x3F2BBCu;
label_3f2bbc:
    // 0x3f2bbc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3f2bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3f2bc0:
    // 0x3f2bc0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3f2bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3f2bc4:
    // 0x3f2bc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_3f2bc8:
    if (ctx->pc == 0x3F2BC8u) {
        ctx->pc = 0x3F2BC8u;
            // 0x3f2bc8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x3F2BCCu;
        goto label_3f2bcc;
    }
    ctx->pc = 0x3F2BC4u;
    {
        const bool branch_taken_0x3f2bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2BC4u;
            // 0x3f2bc8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2bc4) {
            ctx->pc = 0x3F2BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f2ba8;
        }
    }
    ctx->pc = 0x3F2BCCu;
label_3f2bcc:
    // 0x3f2bcc: 0x0  nop
    ctx->pc = 0x3f2bccu;
    // NOP
label_3f2bd0:
    // 0x3f2bd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f2bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f2bd4:
    // 0x3f2bd4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3f2bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_3f2bd8:
    // 0x3f2bd8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3f2bd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_3f2bdc:
    // 0x3f2bdc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_3f2be0:
    if (ctx->pc == 0x3F2BE0u) {
        ctx->pc = 0x3F2BE0u;
            // 0x3f2be0: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x3F2BE4u;
        goto label_3f2be4;
    }
    ctx->pc = 0x3F2BDCu;
    {
        const bool branch_taken_0x3f2bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2bdc) {
            ctx->pc = 0x3F2BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2BDCu;
            // 0x3f2be0: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2C24u;
            goto label_3f2c24;
        }
    }
    ctx->pc = 0x3F2BE4u;
label_3f2be4:
    // 0x3f2be4: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x3f2be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3f2be8:
    // 0x3f2be8: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x3f2be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3f2bec:
    // 0x3f2bec: 0xc60e0018  lwc1        $f14, 0x18($s0)
    ctx->pc = 0x3f2becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3f2bf0:
    // 0x3f2bf0: 0xc04cbd8  jal         func_132F60
label_3f2bf4:
    if (ctx->pc == 0x3F2BF4u) {
        ctx->pc = 0x3F2BF4u;
            // 0x3f2bf4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F2BF8u;
        goto label_3f2bf8;
    }
    ctx->pc = 0x3F2BF0u;
    SET_GPR_U32(ctx, 31, 0x3F2BF8u);
    ctx->pc = 0x3F2BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2BF0u;
            // 0x3f2bf4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2BF8u; }
        if (ctx->pc != 0x3F2BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2BF8u; }
        if (ctx->pc != 0x3F2BF8u) { return; }
    }
    ctx->pc = 0x3F2BF8u;
label_3f2bf8:
    // 0x3f2bf8: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x3f2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_3f2bfc:
    // 0x3f2bfc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f2bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f2c00:
    // 0x3f2c00: 0xc04cc08  jal         func_133020
label_3f2c04:
    if (ctx->pc == 0x3F2C04u) {
        ctx->pc = 0x3F2C04u;
            // 0x3f2c04: 0x244405d0  addiu       $a0, $v0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1488));
        ctx->pc = 0x3F2C08u;
        goto label_3f2c08;
    }
    ctx->pc = 0x3F2C00u;
    SET_GPR_U32(ctx, 31, 0x3F2C08u);
    ctx->pc = 0x3F2C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2C00u;
            // 0x3f2c04: 0x244405d0  addiu       $a0, $v0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2C08u; }
        if (ctx->pc != 0x3F2C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2C08u; }
        if (ctx->pc != 0x3F2C08u) { return; }
    }
    ctx->pc = 0x3F2C08u;
label_3f2c08:
    // 0x3f2c08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3f2c08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f2c0c:
    // 0x3f2c0c: 0x0  nop
    ctx->pc = 0x3f2c0cu;
    // NOP
label_3f2c10:
    // 0x3f2c10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f2c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f2c14:
    // 0x3f2c14: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
label_3f2c18:
    if (ctx->pc == 0x3F2C18u) {
        ctx->pc = 0x3F2C18u;
            // 0x3f2c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C1Cu;
        goto label_3f2c1c;
    }
    ctx->pc = 0x3F2C14u;
    {
        const bool branch_taken_0x3f2c14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f2c14) {
            ctx->pc = 0x3F2C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2C14u;
            // 0x3f2c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2CB0u;
            goto label_3f2cb0;
        }
    }
    ctx->pc = 0x3F2C1Cu;
label_3f2c1c:
    // 0x3f2c1c: 0x10000026  b           . + 4 + (0x26 << 2)
label_3f2c20:
    if (ctx->pc == 0x3F2C20u) {
        ctx->pc = 0x3F2C24u;
        goto label_3f2c24;
    }
    ctx->pc = 0x3F2C1Cu;
    {
        const bool branch_taken_0x3f2c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2c1c) {
            ctx->pc = 0x3F2CB8u;
            goto label_3f2cb8;
        }
    }
    ctx->pc = 0x3F2C24u;
label_3f2c24:
    // 0x3f2c24: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_3f2c28:
    if (ctx->pc == 0x3F2C28u) {
        ctx->pc = 0x3F2C28u;
            // 0x3f2c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C2Cu;
        goto label_3f2c2c;
    }
    ctx->pc = 0x3F2C24u;
    {
        const bool branch_taken_0x3f2c24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3F2C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2C24u;
            // 0x3f2c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c24) {
            ctx->pc = 0x3F2C58u;
            goto label_3f2c58;
        }
    }
    ctx->pc = 0x3F2C2Cu;
label_3f2c2c:
    // 0x3f2c2c: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x3f2c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_3f2c30:
    // 0x3f2c30: 0x24030848  addiu       $v1, $zero, 0x848
    ctx->pc = 0x3f2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2120));
label_3f2c34:
    // 0x3f2c34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3f2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3f2c38:
    // 0x3f2c38: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_3f2c3c:
    if (ctx->pc == 0x3F2C3Cu) {
        ctx->pc = 0x3F2C3Cu;
            // 0x3f2c3c: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x3F2C40u;
        goto label_3f2c40;
    }
    ctx->pc = 0x3F2C38u;
    {
        const bool branch_taken_0x3f2c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f2c38) {
            ctx->pc = 0x3F2C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2C38u;
            // 0x3f2c3c: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2C48u;
            goto label_3f2c48;
        }
    }
    ctx->pc = 0x3F2C40u;
label_3f2c40:
    // 0x3f2c40: 0x10000006  b           . + 4 + (0x6 << 2)
label_3f2c44:
    if (ctx->pc == 0x3F2C44u) {
        ctx->pc = 0x3F2C44u;
            // 0x3f2c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F2C48u;
        goto label_3f2c48;
    }
    ctx->pc = 0x3F2C40u;
    {
        const bool branch_taken_0x3f2c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2C40u;
            // 0x3f2c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c40) {
            ctx->pc = 0x3F2C5Cu;
            goto label_3f2c5c;
        }
    }
    ctx->pc = 0x3F2C48u;
label_3f2c48:
    // 0x3f2c48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3f2c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3f2c4c:
    // 0x3f2c4c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3f2c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3f2c50:
    // 0x3f2c50: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_3f2c54:
    if (ctx->pc == 0x3F2C54u) {
        ctx->pc = 0x3F2C54u;
            // 0x3f2c54: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x3F2C58u;
        goto label_3f2c58;
    }
    ctx->pc = 0x3F2C50u;
    {
        const bool branch_taken_0x3f2c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2C50u;
            // 0x3f2c54: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c50) {
            ctx->pc = 0x3F2C34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f2c34;
        }
    }
    ctx->pc = 0x3F2C58u;
label_3f2c58:
    // 0x3f2c58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f2c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f2c5c:
    // 0x3f2c5c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3f2c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_3f2c60:
    // 0x3f2c60: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3f2c60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_3f2c64:
    // 0x3f2c64: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3f2c68:
    if (ctx->pc == 0x3F2C68u) {
        ctx->pc = 0x3F2C6Cu;
        goto label_3f2c6c;
    }
    ctx->pc = 0x3F2C64u;
    {
        const bool branch_taken_0x3f2c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2c64) {
            ctx->pc = 0x3F2CACu;
            goto label_3f2cac;
        }
    }
    ctx->pc = 0x3F2C6Cu;
label_3f2c6c:
    // 0x3f2c6c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3f2c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3f2c70:
    // 0x3f2c70: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x3f2c70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3f2c74:
    // 0x3f2c74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3f2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3f2c78:
    // 0x3f2c78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3f2c7c:
    if (ctx->pc == 0x3F2C7Cu) {
        ctx->pc = 0x3F2C7Cu;
            // 0x3f2c7c: 0x8e2301a0  lw          $v1, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->pc = 0x3F2C80u;
        goto label_3f2c80;
    }
    ctx->pc = 0x3F2C78u;
    {
        const bool branch_taken_0x3f2c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2C78u;
            // 0x3f2c7c: 0x8e2301a0  lw          $v1, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c78) {
            ctx->pc = 0x3F2C88u;
            goto label_3f2c88;
        }
    }
    ctx->pc = 0x3F2C80u;
label_3f2c80:
    // 0x3f2c80: 0x10000002  b           . + 4 + (0x2 << 2)
label_3f2c84:
    if (ctx->pc == 0x3F2C84u) {
        ctx->pc = 0x3F2C84u;
            // 0x3f2c84: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x3F2C88u;
        goto label_3f2c88;
    }
    ctx->pc = 0x3F2C80u;
    {
        const bool branch_taken_0x3f2c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2C80u;
            // 0x3f2c84: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c80) {
            ctx->pc = 0x3F2C8Cu;
            goto label_3f2c8c;
        }
    }
    ctx->pc = 0x3F2C88u;
label_3f2c88:
    // 0x3f2c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f2c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f2c8c:
    // 0x3f2c8c: 0x246403d0  addiu       $a0, $v1, 0x3D0
    ctx->pc = 0x3f2c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
label_3f2c90:
    // 0x3f2c90: 0xc04cc08  jal         func_133020
label_3f2c94:
    if (ctx->pc == 0x3F2C94u) {
        ctx->pc = 0x3F2C94u;
            // 0x3f2c94: 0x244500e0  addiu       $a1, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->pc = 0x3F2C98u;
        goto label_3f2c98;
    }
    ctx->pc = 0x3F2C90u;
    SET_GPR_U32(ctx, 31, 0x3F2C98u);
    ctx->pc = 0x3F2C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2C90u;
            // 0x3f2c94: 0x244500e0  addiu       $a1, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2C98u; }
        if (ctx->pc != 0x3F2C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2C98u; }
        if (ctx->pc != 0x3F2C98u) { return; }
    }
    ctx->pc = 0x3F2C98u;
label_3f2c98:
    // 0x3f2c98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3f2c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f2c9c:
    // 0x3f2c9c: 0x0  nop
    ctx->pc = 0x3f2c9cu;
    // NOP
label_3f2ca0:
    // 0x3f2ca0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f2ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f2ca4:
    // 0x3f2ca4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3f2ca8:
    if (ctx->pc == 0x3F2CA8u) {
        ctx->pc = 0x3F2CACu;
        goto label_3f2cac;
    }
    ctx->pc = 0x3F2CA4u;
    {
        const bool branch_taken_0x3f2ca4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f2ca4) {
            ctx->pc = 0x3F2CB8u;
            goto label_3f2cb8;
        }
    }
    ctx->pc = 0x3F2CACu;
label_3f2cac:
    // 0x3f2cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f2cb0:
    // 0x3f2cb0: 0xc07f7dc  jal         func_1FDF70
label_3f2cb4:
    if (ctx->pc == 0x3F2CB4u) {
        ctx->pc = 0x3F2CB4u;
            // 0x3f2cb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F2CB8u;
        goto label_3f2cb8;
    }
    ctx->pc = 0x3F2CB0u;
    SET_GPR_U32(ctx, 31, 0x3F2CB8u);
    ctx->pc = 0x3F2CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2CB0u;
            // 0x3f2cb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDF70u;
    if (runtime->hasFunction(0x1FDF70u)) {
        auto targetFn = runtime->lookupFunction(0x1FDF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2CB8u; }
        if (ctx->pc != 0x3F2CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDF70_0x1fdf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2CB8u; }
        if (ctx->pc != 0x3F2CB8u) { return; }
    }
    ctx->pc = 0x3F2CB8u;
label_3f2cb8:
    // 0x3f2cb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f2cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f2cbc:
    // 0x3f2cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f2cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f2cc0:
    // 0x3f2cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f2cc4:
    // 0x3f2cc4: 0x3e00008  jr          $ra
label_3f2cc8:
    if (ctx->pc == 0x3F2CC8u) {
        ctx->pc = 0x3F2CC8u;
            // 0x3f2cc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F2CCCu;
        goto label_3f2ccc;
    }
    ctx->pc = 0x3F2CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2CC4u;
            // 0x3f2cc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F2CCCu;
label_3f2ccc:
    // 0x3f2ccc: 0x0  nop
    ctx->pc = 0x3f2cccu;
    // NOP
}
