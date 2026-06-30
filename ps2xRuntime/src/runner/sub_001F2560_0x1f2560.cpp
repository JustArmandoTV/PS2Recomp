#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F2560
// Address: 0x1f2560 - 0x1f2b30
void sub_001F2560_0x1f2560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2560_0x1f2560");
#endif

    switch (ctx->pc) {
        case 0x1f2560u: goto label_1f2560;
        case 0x1f2564u: goto label_1f2564;
        case 0x1f2568u: goto label_1f2568;
        case 0x1f256cu: goto label_1f256c;
        case 0x1f2570u: goto label_1f2570;
        case 0x1f2574u: goto label_1f2574;
        case 0x1f2578u: goto label_1f2578;
        case 0x1f257cu: goto label_1f257c;
        case 0x1f2580u: goto label_1f2580;
        case 0x1f2584u: goto label_1f2584;
        case 0x1f2588u: goto label_1f2588;
        case 0x1f258cu: goto label_1f258c;
        case 0x1f2590u: goto label_1f2590;
        case 0x1f2594u: goto label_1f2594;
        case 0x1f2598u: goto label_1f2598;
        case 0x1f259cu: goto label_1f259c;
        case 0x1f25a0u: goto label_1f25a0;
        case 0x1f25a4u: goto label_1f25a4;
        case 0x1f25a8u: goto label_1f25a8;
        case 0x1f25acu: goto label_1f25ac;
        case 0x1f25b0u: goto label_1f25b0;
        case 0x1f25b4u: goto label_1f25b4;
        case 0x1f25b8u: goto label_1f25b8;
        case 0x1f25bcu: goto label_1f25bc;
        case 0x1f25c0u: goto label_1f25c0;
        case 0x1f25c4u: goto label_1f25c4;
        case 0x1f25c8u: goto label_1f25c8;
        case 0x1f25ccu: goto label_1f25cc;
        case 0x1f25d0u: goto label_1f25d0;
        case 0x1f25d4u: goto label_1f25d4;
        case 0x1f25d8u: goto label_1f25d8;
        case 0x1f25dcu: goto label_1f25dc;
        case 0x1f25e0u: goto label_1f25e0;
        case 0x1f25e4u: goto label_1f25e4;
        case 0x1f25e8u: goto label_1f25e8;
        case 0x1f25ecu: goto label_1f25ec;
        case 0x1f25f0u: goto label_1f25f0;
        case 0x1f25f4u: goto label_1f25f4;
        case 0x1f25f8u: goto label_1f25f8;
        case 0x1f25fcu: goto label_1f25fc;
        case 0x1f2600u: goto label_1f2600;
        case 0x1f2604u: goto label_1f2604;
        case 0x1f2608u: goto label_1f2608;
        case 0x1f260cu: goto label_1f260c;
        case 0x1f2610u: goto label_1f2610;
        case 0x1f2614u: goto label_1f2614;
        case 0x1f2618u: goto label_1f2618;
        case 0x1f261cu: goto label_1f261c;
        case 0x1f2620u: goto label_1f2620;
        case 0x1f2624u: goto label_1f2624;
        case 0x1f2628u: goto label_1f2628;
        case 0x1f262cu: goto label_1f262c;
        case 0x1f2630u: goto label_1f2630;
        case 0x1f2634u: goto label_1f2634;
        case 0x1f2638u: goto label_1f2638;
        case 0x1f263cu: goto label_1f263c;
        case 0x1f2640u: goto label_1f2640;
        case 0x1f2644u: goto label_1f2644;
        case 0x1f2648u: goto label_1f2648;
        case 0x1f264cu: goto label_1f264c;
        case 0x1f2650u: goto label_1f2650;
        case 0x1f2654u: goto label_1f2654;
        case 0x1f2658u: goto label_1f2658;
        case 0x1f265cu: goto label_1f265c;
        case 0x1f2660u: goto label_1f2660;
        case 0x1f2664u: goto label_1f2664;
        case 0x1f2668u: goto label_1f2668;
        case 0x1f266cu: goto label_1f266c;
        case 0x1f2670u: goto label_1f2670;
        case 0x1f2674u: goto label_1f2674;
        case 0x1f2678u: goto label_1f2678;
        case 0x1f267cu: goto label_1f267c;
        case 0x1f2680u: goto label_1f2680;
        case 0x1f2684u: goto label_1f2684;
        case 0x1f2688u: goto label_1f2688;
        case 0x1f268cu: goto label_1f268c;
        case 0x1f2690u: goto label_1f2690;
        case 0x1f2694u: goto label_1f2694;
        case 0x1f2698u: goto label_1f2698;
        case 0x1f269cu: goto label_1f269c;
        case 0x1f26a0u: goto label_1f26a0;
        case 0x1f26a4u: goto label_1f26a4;
        case 0x1f26a8u: goto label_1f26a8;
        case 0x1f26acu: goto label_1f26ac;
        case 0x1f26b0u: goto label_1f26b0;
        case 0x1f26b4u: goto label_1f26b4;
        case 0x1f26b8u: goto label_1f26b8;
        case 0x1f26bcu: goto label_1f26bc;
        case 0x1f26c0u: goto label_1f26c0;
        case 0x1f26c4u: goto label_1f26c4;
        case 0x1f26c8u: goto label_1f26c8;
        case 0x1f26ccu: goto label_1f26cc;
        case 0x1f26d0u: goto label_1f26d0;
        case 0x1f26d4u: goto label_1f26d4;
        case 0x1f26d8u: goto label_1f26d8;
        case 0x1f26dcu: goto label_1f26dc;
        case 0x1f26e0u: goto label_1f26e0;
        case 0x1f26e4u: goto label_1f26e4;
        case 0x1f26e8u: goto label_1f26e8;
        case 0x1f26ecu: goto label_1f26ec;
        case 0x1f26f0u: goto label_1f26f0;
        case 0x1f26f4u: goto label_1f26f4;
        case 0x1f26f8u: goto label_1f26f8;
        case 0x1f26fcu: goto label_1f26fc;
        case 0x1f2700u: goto label_1f2700;
        case 0x1f2704u: goto label_1f2704;
        case 0x1f2708u: goto label_1f2708;
        case 0x1f270cu: goto label_1f270c;
        case 0x1f2710u: goto label_1f2710;
        case 0x1f2714u: goto label_1f2714;
        case 0x1f2718u: goto label_1f2718;
        case 0x1f271cu: goto label_1f271c;
        case 0x1f2720u: goto label_1f2720;
        case 0x1f2724u: goto label_1f2724;
        case 0x1f2728u: goto label_1f2728;
        case 0x1f272cu: goto label_1f272c;
        case 0x1f2730u: goto label_1f2730;
        case 0x1f2734u: goto label_1f2734;
        case 0x1f2738u: goto label_1f2738;
        case 0x1f273cu: goto label_1f273c;
        case 0x1f2740u: goto label_1f2740;
        case 0x1f2744u: goto label_1f2744;
        case 0x1f2748u: goto label_1f2748;
        case 0x1f274cu: goto label_1f274c;
        case 0x1f2750u: goto label_1f2750;
        case 0x1f2754u: goto label_1f2754;
        case 0x1f2758u: goto label_1f2758;
        case 0x1f275cu: goto label_1f275c;
        case 0x1f2760u: goto label_1f2760;
        case 0x1f2764u: goto label_1f2764;
        case 0x1f2768u: goto label_1f2768;
        case 0x1f276cu: goto label_1f276c;
        case 0x1f2770u: goto label_1f2770;
        case 0x1f2774u: goto label_1f2774;
        case 0x1f2778u: goto label_1f2778;
        case 0x1f277cu: goto label_1f277c;
        case 0x1f2780u: goto label_1f2780;
        case 0x1f2784u: goto label_1f2784;
        case 0x1f2788u: goto label_1f2788;
        case 0x1f278cu: goto label_1f278c;
        case 0x1f2790u: goto label_1f2790;
        case 0x1f2794u: goto label_1f2794;
        case 0x1f2798u: goto label_1f2798;
        case 0x1f279cu: goto label_1f279c;
        case 0x1f27a0u: goto label_1f27a0;
        case 0x1f27a4u: goto label_1f27a4;
        case 0x1f27a8u: goto label_1f27a8;
        case 0x1f27acu: goto label_1f27ac;
        case 0x1f27b0u: goto label_1f27b0;
        case 0x1f27b4u: goto label_1f27b4;
        case 0x1f27b8u: goto label_1f27b8;
        case 0x1f27bcu: goto label_1f27bc;
        case 0x1f27c0u: goto label_1f27c0;
        case 0x1f27c4u: goto label_1f27c4;
        case 0x1f27c8u: goto label_1f27c8;
        case 0x1f27ccu: goto label_1f27cc;
        case 0x1f27d0u: goto label_1f27d0;
        case 0x1f27d4u: goto label_1f27d4;
        case 0x1f27d8u: goto label_1f27d8;
        case 0x1f27dcu: goto label_1f27dc;
        case 0x1f27e0u: goto label_1f27e0;
        case 0x1f27e4u: goto label_1f27e4;
        case 0x1f27e8u: goto label_1f27e8;
        case 0x1f27ecu: goto label_1f27ec;
        case 0x1f27f0u: goto label_1f27f0;
        case 0x1f27f4u: goto label_1f27f4;
        case 0x1f27f8u: goto label_1f27f8;
        case 0x1f27fcu: goto label_1f27fc;
        case 0x1f2800u: goto label_1f2800;
        case 0x1f2804u: goto label_1f2804;
        case 0x1f2808u: goto label_1f2808;
        case 0x1f280cu: goto label_1f280c;
        case 0x1f2810u: goto label_1f2810;
        case 0x1f2814u: goto label_1f2814;
        case 0x1f2818u: goto label_1f2818;
        case 0x1f281cu: goto label_1f281c;
        case 0x1f2820u: goto label_1f2820;
        case 0x1f2824u: goto label_1f2824;
        case 0x1f2828u: goto label_1f2828;
        case 0x1f282cu: goto label_1f282c;
        case 0x1f2830u: goto label_1f2830;
        case 0x1f2834u: goto label_1f2834;
        case 0x1f2838u: goto label_1f2838;
        case 0x1f283cu: goto label_1f283c;
        case 0x1f2840u: goto label_1f2840;
        case 0x1f2844u: goto label_1f2844;
        case 0x1f2848u: goto label_1f2848;
        case 0x1f284cu: goto label_1f284c;
        case 0x1f2850u: goto label_1f2850;
        case 0x1f2854u: goto label_1f2854;
        case 0x1f2858u: goto label_1f2858;
        case 0x1f285cu: goto label_1f285c;
        case 0x1f2860u: goto label_1f2860;
        case 0x1f2864u: goto label_1f2864;
        case 0x1f2868u: goto label_1f2868;
        case 0x1f286cu: goto label_1f286c;
        case 0x1f2870u: goto label_1f2870;
        case 0x1f2874u: goto label_1f2874;
        case 0x1f2878u: goto label_1f2878;
        case 0x1f287cu: goto label_1f287c;
        case 0x1f2880u: goto label_1f2880;
        case 0x1f2884u: goto label_1f2884;
        case 0x1f2888u: goto label_1f2888;
        case 0x1f288cu: goto label_1f288c;
        case 0x1f2890u: goto label_1f2890;
        case 0x1f2894u: goto label_1f2894;
        case 0x1f2898u: goto label_1f2898;
        case 0x1f289cu: goto label_1f289c;
        case 0x1f28a0u: goto label_1f28a0;
        case 0x1f28a4u: goto label_1f28a4;
        case 0x1f28a8u: goto label_1f28a8;
        case 0x1f28acu: goto label_1f28ac;
        case 0x1f28b0u: goto label_1f28b0;
        case 0x1f28b4u: goto label_1f28b4;
        case 0x1f28b8u: goto label_1f28b8;
        case 0x1f28bcu: goto label_1f28bc;
        case 0x1f28c0u: goto label_1f28c0;
        case 0x1f28c4u: goto label_1f28c4;
        case 0x1f28c8u: goto label_1f28c8;
        case 0x1f28ccu: goto label_1f28cc;
        case 0x1f28d0u: goto label_1f28d0;
        case 0x1f28d4u: goto label_1f28d4;
        case 0x1f28d8u: goto label_1f28d8;
        case 0x1f28dcu: goto label_1f28dc;
        case 0x1f28e0u: goto label_1f28e0;
        case 0x1f28e4u: goto label_1f28e4;
        case 0x1f28e8u: goto label_1f28e8;
        case 0x1f28ecu: goto label_1f28ec;
        case 0x1f28f0u: goto label_1f28f0;
        case 0x1f28f4u: goto label_1f28f4;
        case 0x1f28f8u: goto label_1f28f8;
        case 0x1f28fcu: goto label_1f28fc;
        case 0x1f2900u: goto label_1f2900;
        case 0x1f2904u: goto label_1f2904;
        case 0x1f2908u: goto label_1f2908;
        case 0x1f290cu: goto label_1f290c;
        case 0x1f2910u: goto label_1f2910;
        case 0x1f2914u: goto label_1f2914;
        case 0x1f2918u: goto label_1f2918;
        case 0x1f291cu: goto label_1f291c;
        case 0x1f2920u: goto label_1f2920;
        case 0x1f2924u: goto label_1f2924;
        case 0x1f2928u: goto label_1f2928;
        case 0x1f292cu: goto label_1f292c;
        case 0x1f2930u: goto label_1f2930;
        case 0x1f2934u: goto label_1f2934;
        case 0x1f2938u: goto label_1f2938;
        case 0x1f293cu: goto label_1f293c;
        case 0x1f2940u: goto label_1f2940;
        case 0x1f2944u: goto label_1f2944;
        case 0x1f2948u: goto label_1f2948;
        case 0x1f294cu: goto label_1f294c;
        case 0x1f2950u: goto label_1f2950;
        case 0x1f2954u: goto label_1f2954;
        case 0x1f2958u: goto label_1f2958;
        case 0x1f295cu: goto label_1f295c;
        case 0x1f2960u: goto label_1f2960;
        case 0x1f2964u: goto label_1f2964;
        case 0x1f2968u: goto label_1f2968;
        case 0x1f296cu: goto label_1f296c;
        case 0x1f2970u: goto label_1f2970;
        case 0x1f2974u: goto label_1f2974;
        case 0x1f2978u: goto label_1f2978;
        case 0x1f297cu: goto label_1f297c;
        case 0x1f2980u: goto label_1f2980;
        case 0x1f2984u: goto label_1f2984;
        case 0x1f2988u: goto label_1f2988;
        case 0x1f298cu: goto label_1f298c;
        case 0x1f2990u: goto label_1f2990;
        case 0x1f2994u: goto label_1f2994;
        case 0x1f2998u: goto label_1f2998;
        case 0x1f299cu: goto label_1f299c;
        case 0x1f29a0u: goto label_1f29a0;
        case 0x1f29a4u: goto label_1f29a4;
        case 0x1f29a8u: goto label_1f29a8;
        case 0x1f29acu: goto label_1f29ac;
        case 0x1f29b0u: goto label_1f29b0;
        case 0x1f29b4u: goto label_1f29b4;
        case 0x1f29b8u: goto label_1f29b8;
        case 0x1f29bcu: goto label_1f29bc;
        case 0x1f29c0u: goto label_1f29c0;
        case 0x1f29c4u: goto label_1f29c4;
        case 0x1f29c8u: goto label_1f29c8;
        case 0x1f29ccu: goto label_1f29cc;
        case 0x1f29d0u: goto label_1f29d0;
        case 0x1f29d4u: goto label_1f29d4;
        case 0x1f29d8u: goto label_1f29d8;
        case 0x1f29dcu: goto label_1f29dc;
        case 0x1f29e0u: goto label_1f29e0;
        case 0x1f29e4u: goto label_1f29e4;
        case 0x1f29e8u: goto label_1f29e8;
        case 0x1f29ecu: goto label_1f29ec;
        case 0x1f29f0u: goto label_1f29f0;
        case 0x1f29f4u: goto label_1f29f4;
        case 0x1f29f8u: goto label_1f29f8;
        case 0x1f29fcu: goto label_1f29fc;
        case 0x1f2a00u: goto label_1f2a00;
        case 0x1f2a04u: goto label_1f2a04;
        case 0x1f2a08u: goto label_1f2a08;
        case 0x1f2a0cu: goto label_1f2a0c;
        case 0x1f2a10u: goto label_1f2a10;
        case 0x1f2a14u: goto label_1f2a14;
        case 0x1f2a18u: goto label_1f2a18;
        case 0x1f2a1cu: goto label_1f2a1c;
        case 0x1f2a20u: goto label_1f2a20;
        case 0x1f2a24u: goto label_1f2a24;
        case 0x1f2a28u: goto label_1f2a28;
        case 0x1f2a2cu: goto label_1f2a2c;
        case 0x1f2a30u: goto label_1f2a30;
        case 0x1f2a34u: goto label_1f2a34;
        case 0x1f2a38u: goto label_1f2a38;
        case 0x1f2a3cu: goto label_1f2a3c;
        case 0x1f2a40u: goto label_1f2a40;
        case 0x1f2a44u: goto label_1f2a44;
        case 0x1f2a48u: goto label_1f2a48;
        case 0x1f2a4cu: goto label_1f2a4c;
        case 0x1f2a50u: goto label_1f2a50;
        case 0x1f2a54u: goto label_1f2a54;
        case 0x1f2a58u: goto label_1f2a58;
        case 0x1f2a5cu: goto label_1f2a5c;
        case 0x1f2a60u: goto label_1f2a60;
        case 0x1f2a64u: goto label_1f2a64;
        case 0x1f2a68u: goto label_1f2a68;
        case 0x1f2a6cu: goto label_1f2a6c;
        case 0x1f2a70u: goto label_1f2a70;
        case 0x1f2a74u: goto label_1f2a74;
        case 0x1f2a78u: goto label_1f2a78;
        case 0x1f2a7cu: goto label_1f2a7c;
        case 0x1f2a80u: goto label_1f2a80;
        case 0x1f2a84u: goto label_1f2a84;
        case 0x1f2a88u: goto label_1f2a88;
        case 0x1f2a8cu: goto label_1f2a8c;
        case 0x1f2a90u: goto label_1f2a90;
        case 0x1f2a94u: goto label_1f2a94;
        case 0x1f2a98u: goto label_1f2a98;
        case 0x1f2a9cu: goto label_1f2a9c;
        case 0x1f2aa0u: goto label_1f2aa0;
        case 0x1f2aa4u: goto label_1f2aa4;
        case 0x1f2aa8u: goto label_1f2aa8;
        case 0x1f2aacu: goto label_1f2aac;
        case 0x1f2ab0u: goto label_1f2ab0;
        case 0x1f2ab4u: goto label_1f2ab4;
        case 0x1f2ab8u: goto label_1f2ab8;
        case 0x1f2abcu: goto label_1f2abc;
        case 0x1f2ac0u: goto label_1f2ac0;
        case 0x1f2ac4u: goto label_1f2ac4;
        case 0x1f2ac8u: goto label_1f2ac8;
        case 0x1f2accu: goto label_1f2acc;
        case 0x1f2ad0u: goto label_1f2ad0;
        case 0x1f2ad4u: goto label_1f2ad4;
        case 0x1f2ad8u: goto label_1f2ad8;
        case 0x1f2adcu: goto label_1f2adc;
        case 0x1f2ae0u: goto label_1f2ae0;
        case 0x1f2ae4u: goto label_1f2ae4;
        case 0x1f2ae8u: goto label_1f2ae8;
        case 0x1f2aecu: goto label_1f2aec;
        case 0x1f2af0u: goto label_1f2af0;
        case 0x1f2af4u: goto label_1f2af4;
        case 0x1f2af8u: goto label_1f2af8;
        case 0x1f2afcu: goto label_1f2afc;
        case 0x1f2b00u: goto label_1f2b00;
        case 0x1f2b04u: goto label_1f2b04;
        case 0x1f2b08u: goto label_1f2b08;
        case 0x1f2b0cu: goto label_1f2b0c;
        case 0x1f2b10u: goto label_1f2b10;
        case 0x1f2b14u: goto label_1f2b14;
        case 0x1f2b18u: goto label_1f2b18;
        case 0x1f2b1cu: goto label_1f2b1c;
        case 0x1f2b20u: goto label_1f2b20;
        case 0x1f2b24u: goto label_1f2b24;
        case 0x1f2b28u: goto label_1f2b28;
        case 0x1f2b2cu: goto label_1f2b2c;
        default: break;
    }

    ctx->pc = 0x1f2560u;

label_1f2560:
    // 0x1f2560: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1f2560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1f2564:
    // 0x1f2564: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f2564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f2568:
    // 0x1f2568: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f2568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f256c:
    // 0x1f256c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f2570:
    // 0x1f2570: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f2570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f2574:
    // 0x1f2574: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f2574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f2578:
    // 0x1f2578: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f2578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f257c:
    // 0x1f257c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f2580:
    // 0x1f2580: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f2580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f2584:
    // 0x1f2584: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1f2584u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f2588:
    // 0x1f2588: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f2588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f258c:
    // 0x1f258c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1f258cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f2590:
    // 0x1f2590: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f2590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f2594:
    // 0x1f2594: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1f2594u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_1f2598:
    // 0x1f2598: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f2598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f259c:
    // 0x1f259c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f259cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f25a0:
    // 0x1f25a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f25a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f25a4:
    // 0x1f25a4: 0x24c6db20  addiu       $a2, $a2, -0x24E0
    ctx->pc = 0x1f25a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957856));
label_1f25a8:
    // 0x1f25a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f25a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f25ac:
    // 0x1f25ac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f25acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f25b0:
    // 0x1f25b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f25b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f25b4:
    // 0x1f25b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f25b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f25b8:
    // 0x1f25b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f25b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f25bc:
    // 0x1f25bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f25c0:
    // 0x1f25c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f25c4:
    // 0x1f25c4: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x1f25c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_1f25c8:
    // 0x1f25c8: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1f25cc:
    // 0x1f25cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f25ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f25d0:
    // 0x1f25d0: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x1f25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_1f25d4:
    // 0x1f25d4: 0xac9e0008  sw          $fp, 0x8($a0)
    ctx->pc = 0x1f25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 30));
label_1f25d8:
    // 0x1f25d8: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x1f25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1f25dc:
    // 0x1f25dc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1f25dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_1f25e0:
    // 0x1f25e0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1f25e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1f25e4:
    // 0x1f25e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1f25e8:
    // 0x1f25e8: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x1f25e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1f25ec:
    // 0x1f25ec: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1f25ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1f25f0:
    // 0x1f25f0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1f25f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_1f25f4:
    // 0x1f25f4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1f25f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1f25f8:
    // 0x1f25f8: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1f25f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f25fc:
    // 0x1f25fc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1f25fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1f2600:
    // 0x1f2600: 0x8e170010  lw          $s7, 0x10($s0)
    ctx->pc = 0x1f2600u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f2604:
    // 0x1f2604: 0x57082a  slt         $at, $v0, $s7
    ctx->pc = 0x1f2604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1f2608:
    // 0x1f2608: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1f260c:
    if (ctx->pc == 0x1F260Cu) {
        ctx->pc = 0x1F260Cu;
            // 0x1f260c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F2610u;
        goto label_1f2610;
    }
    ctx->pc = 0x1F2608u;
    {
        const bool branch_taken_0x1f2608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2608u;
            // 0x1f260c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2608) {
            ctx->pc = 0x1F262Cu;
            goto label_1f262c;
        }
    }
    ctx->pc = 0x1F2610u;
label_1f2610:
    // 0x1f2610: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1f2610u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1f2614:
    // 0x1f2614: 0x2e5082a  slt         $at, $s7, $a1
    ctx->pc = 0x1f2614u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1f2618:
    // 0x1f2618: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_1f261c:
    if (ctx->pc == 0x1F261Cu) {
        ctx->pc = 0x1F261Cu;
            // 0x1f261c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F2620u;
        goto label_1f2620;
    }
    ctx->pc = 0x1F2618u;
    {
        const bool branch_taken_0x1f2618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2618) {
            ctx->pc = 0x1F261Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2618u;
            // 0x1f261c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2620u;
            goto label_1f2620;
        }
    }
    ctx->pc = 0x1F2620u;
label_1f2620:
    // 0x1f2620: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x1f2620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_1f2624:
    // 0x1f2624: 0xc0a725c  jal         func_29C970
label_1f2628:
    if (ctx->pc == 0x1F2628u) {
        ctx->pc = 0x1F2628u;
            // 0x1f2628: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1F262Cu;
        goto label_1f262c;
    }
    ctx->pc = 0x1F2624u;
    SET_GPR_U32(ctx, 31, 0x1F262Cu);
    ctx->pc = 0x1F2628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2624u;
            // 0x1f2628: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F262Cu; }
        if (ctx->pc != 0x1F262Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F262Cu; }
        if (ctx->pc != 0x1F262Cu) { return; }
    }
    ctx->pc = 0x1F262Cu;
label_1f262c:
    // 0x1f262c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f262cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f2630:
    // 0x1f2630: 0xc0827ac  jal         func_209EB0
label_1f2634:
    if (ctx->pc == 0x1F2634u) {
        ctx->pc = 0x1F2634u;
            // 0x1f2634: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1F2638u;
        goto label_1f2638;
    }
    ctx->pc = 0x1F2630u;
    SET_GPR_U32(ctx, 31, 0x1F2638u);
    ctx->pc = 0x1F2634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2630u;
            // 0x1f2634: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2638u; }
        if (ctx->pc != 0x1F2638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2638u; }
        if (ctx->pc != 0x1F2638u) { return; }
    }
    ctx->pc = 0x1F2638u;
label_1f2638:
    // 0x1f2638: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1f2638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f263c:
    // 0x1f263c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1f263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f2640:
    // 0x1f2640: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x1f2640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1f2644:
    // 0x1f2644: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f2644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2648:
    // 0x1f2648: 0xc48f0004  lwc1        $f15, 0x4($a0)
    ctx->pc = 0x1f2648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f264c:
    // 0x1f264c: 0xc48e0008  lwc1        $f14, 0x8($a0)
    ctx->pc = 0x1f264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f2650:
    // 0x1f2650: 0xc48d000c  lwc1        $f13, 0xC($a0)
    ctx->pc = 0x1f2650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f2654:
    // 0x1f2654: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x1f2654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f2658:
    // 0x1f2658: 0xc48b0014  lwc1        $f11, 0x14($a0)
    ctx->pc = 0x1f2658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f265c:
    // 0x1f265c: 0xc48a0018  lwc1        $f10, 0x18($a0)
    ctx->pc = 0x1f265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f2660:
    // 0x1f2660: 0xc489001c  lwc1        $f9, 0x1C($a0)
    ctx->pc = 0x1f2660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f2664:
    // 0x1f2664: 0xc4880020  lwc1        $f8, 0x20($a0)
    ctx->pc = 0x1f2664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f2668:
    // 0x1f2668: 0xc4870024  lwc1        $f7, 0x24($a0)
    ctx->pc = 0x1f2668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f266c:
    // 0x1f266c: 0xc4860028  lwc1        $f6, 0x28($a0)
    ctx->pc = 0x1f266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f2670:
    // 0x1f2670: 0xc485002c  lwc1        $f5, 0x2C($a0)
    ctx->pc = 0x1f2670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f2674:
    // 0x1f2674: 0xc4840030  lwc1        $f4, 0x30($a0)
    ctx->pc = 0x1f2674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f2678:
    // 0x1f2678: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x1f2678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f267c:
    // 0x1f267c: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x1f267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2680:
    // 0x1f2680: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x1f2680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2684:
    // 0x1f2684: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1f2684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2688:
    // 0x1f2688: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f2688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f268c:
    // 0x1f268c: 0xe7af00c4  swc1        $f15, 0xC4($sp)
    ctx->pc = 0x1f268cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f2690:
    // 0x1f2690: 0xe7ae00c8  swc1        $f14, 0xC8($sp)
    ctx->pc = 0x1f2690u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f2694:
    // 0x1f2694: 0xe7ad00cc  swc1        $f13, 0xCC($sp)
    ctx->pc = 0x1f2694u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f2698:
    // 0x1f2698: 0xe7ac00d0  swc1        $f12, 0xD0($sp)
    ctx->pc = 0x1f2698u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f269c:
    // 0x1f269c: 0xe7ab00d4  swc1        $f11, 0xD4($sp)
    ctx->pc = 0x1f269cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f26a0:
    // 0x1f26a0: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x1f26a0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f26a4:
    // 0x1f26a4: 0xe7a900dc  swc1        $f9, 0xDC($sp)
    ctx->pc = 0x1f26a4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f26a8:
    // 0x1f26a8: 0xe7a800e0  swc1        $f8, 0xE0($sp)
    ctx->pc = 0x1f26a8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f26ac:
    // 0x1f26ac: 0xe7a700e4  swc1        $f7, 0xE4($sp)
    ctx->pc = 0x1f26acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f26b0:
    // 0x1f26b0: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x1f26b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f26b4:
    // 0x1f26b4: 0xe7a500ec  swc1        $f5, 0xEC($sp)
    ctx->pc = 0x1f26b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f26b8:
    // 0x1f26b8: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x1f26b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f26bc:
    // 0x1f26bc: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x1f26bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f26c0:
    // 0x1f26c0: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f26c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f26c4:
    // 0x1f26c4: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x1f26c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f26c8:
    // 0x1f26c8: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x1f26c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f26cc:
    // 0x1f26cc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1f26ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f26d0:
    // 0x1f26d0: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x1f26d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f26d4:
    // 0x1f26d4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f26d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f26d8:
    // 0x1f26d8: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x1f26d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f26dc:
    // 0x1f26dc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1f26dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f26e0:
    // 0x1f26e0: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x1f26e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f26e4:
    // 0x1f26e4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f26e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f26e8:
    // 0x1f26e8: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x1f26e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f26ec:
    // 0x1f26ec: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f26ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f26f0:
    // 0x1f26f0: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x1f26f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f26f4:
    // 0x1f26f4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1f26f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f26f8:
    // 0x1f26f8: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x1f26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f26fc:
    // 0x1f26fc: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1f26fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f2700:
    // 0x1f2700: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x1f2700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2704:
    // 0x1f2704: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f2704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f2708:
    // 0x1f2708: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x1f2708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f270c:
    // 0x1f270c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1f2710:
    // 0x1f2710: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x1f2710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2714:
    // 0x1f2714: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f2714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1f2718:
    // 0x1f2718: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x1f2718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f271c:
    // 0x1f271c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f271cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1f2720:
    // 0x1f2720: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x1f2720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2724:
    // 0x1f2724: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f2724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1f2728:
    // 0x1f2728: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x1f2728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f272c:
    // 0x1f272c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1f272cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1f2730:
    // 0x1f2730: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x1f2730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2734:
    // 0x1f2734: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f2734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1f2738:
    // 0x1f2738: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x1f2738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f273c:
    // 0x1f273c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f2740:
    // 0x1f2740: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x1f2740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2744:
    // 0x1f2744: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f2744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1f2748:
    // 0x1f2748: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x1f2748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f274c:
    // 0x1f274c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1f274cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f2750:
    // 0x1f2750: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1f2750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2754:
    // 0x1f2754: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1f2754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1f2758:
    // 0x1f2758: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x1f2758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f275c:
    // 0x1f275c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1f275cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f2760:
    // 0x1f2760: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x1f2760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2764:
    // 0x1f2764: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1f2764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1f2768:
    // 0x1f2768: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x1f2768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f276c:
    // 0x1f276c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1f276cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1f2770:
    // 0x1f2770: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x1f2770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2774:
    // 0x1f2774: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1f2774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_1f2778:
    // 0x1f2778: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x1f2778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f277c:
    // 0x1f277c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1f277cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1f2780:
    // 0x1f2780: 0xc480009c  lwc1        $f0, 0x9C($a0)
    ctx->pc = 0x1f2780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2784:
    // 0x1f2784: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x1f2784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_1f2788:
    // 0x1f2788: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x1f2788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f278c:
    // 0x1f278c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1f278cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1f2790:
    // 0x1f2790: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x1f2790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2794:
    // 0x1f2794: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1f2794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_1f2798:
    // 0x1f2798: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x1f2798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f279c:
    // 0x1f279c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1f279cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1f27a0:
    // 0x1f27a0: 0xc48000ac  lwc1        $f0, 0xAC($a0)
    ctx->pc = 0x1f27a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f27a4:
    // 0x1f27a4: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1f27a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_1f27a8:
    // 0x1f27a8: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x1f27a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f27ac:
    // 0x1f27ac: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x1f27acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1f27b0:
    // 0x1f27b0: 0x948300b4  lhu         $v1, 0xB4($a0)
    ctx->pc = 0x1f27b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 180)));
label_1f27b4:
    // 0x1f27b4: 0xa7a30174  sh          $v1, 0x174($sp)
    ctx->pc = 0x1f27b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 372), (uint16_t)GPR_U32(ctx, 3));
label_1f27b8:
    // 0x1f27b8: 0x948300b6  lhu         $v1, 0xB6($a0)
    ctx->pc = 0x1f27b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 182)));
label_1f27bc:
    // 0x1f27bc: 0xa7a30176  sh          $v1, 0x176($sp)
    ctx->pc = 0x1f27bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 374), (uint16_t)GPR_U32(ctx, 3));
label_1f27c0:
    // 0x1f27c0: 0xc48100b8  lwc1        $f1, 0xB8($a0)
    ctx->pc = 0x1f27c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f27c4:
    // 0x1f27c4: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x1f27c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f27c8:
    // 0x1f27c8: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x1f27c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1f27cc:
    // 0x1f27cc: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1f27ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_1f27d0:
    // 0x1f27d0: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x1f27d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_1f27d4:
    // 0x1f27d4: 0x1ae00072  blez        $s7, . + 4 + (0x72 << 2)
label_1f27d8:
    if (ctx->pc == 0x1F27D8u) {
        ctx->pc = 0x1F27D8u;
            // 0x1f27d8: 0xafb400bc  sw          $s4, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 20));
        ctx->pc = 0x1F27DCu;
        goto label_1f27dc;
    }
    ctx->pc = 0x1F27D4u;
    {
        const bool branch_taken_0x1f27d4 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x1F27D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F27D4u;
            // 0x1f27d8: 0xafb400bc  sw          $s4, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27d4) {
            ctx->pc = 0x1F29A0u;
            goto label_1f29a0;
        }
    }
    ctx->pc = 0x1F27DCu;
label_1f27dc:
    // 0x1f27dc: 0x1ae00070  blez        $s7, . + 4 + (0x70 << 2)
label_1f27e0:
    if (ctx->pc == 0x1F27E0u) {
        ctx->pc = 0x1F27E4u;
        goto label_1f27e4;
    }
    ctx->pc = 0x1F27DCu;
    {
        const bool branch_taken_0x1f27dc = (GPR_S32(ctx, 23) <= 0);
        if (branch_taken_0x1f27dc) {
            ctx->pc = 0x1F29A0u;
            goto label_1f29a0;
        }
    }
    ctx->pc = 0x1F27E4u;
label_1f27e4:
    // 0x1f27e4: 0xc6470004  lwc1        $f7, 0x4($s2)
    ctx->pc = 0x1f27e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f27e8:
    // 0x1f27e8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1f27e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f27ec:
    // 0x1f27ec: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f27ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f27f0:
    // 0x1f27f0: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1f27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1f27f4:
    // 0x1f27f4: 0xc6480000  lwc1        $f8, 0x0($s2)
    ctx->pc = 0x1f27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f27f8:
    // 0x1f27f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f27f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f27fc:
    // 0x1f27fc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1f27fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2800:
    // 0x1f2800: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f2800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f2804:
    // 0x1f2804: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f2804u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f2808:
    // 0x1f2808: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f2808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f280c:
    // 0x1f280c: 0xc7a500e0  lwc1        $f5, 0xE0($sp)
    ctx->pc = 0x1f280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f2810:
    // 0x1f2810: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1f2810u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1f2814:
    // 0x1f2814: 0xc6460008  lwc1        $f6, 0x8($s2)
    ctx->pc = 0x1f2814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f2818:
    // 0x1f2818: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f2818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f281c:
    // 0x1f281c: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x1f281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f2820:
    // 0x1f2820: 0x4605315c  madd.s      $f5, $f6, $f5
    ctx->pc = 0x1f2820u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
label_1f2824:
    // 0x1f2824: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f2824u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f2828:
    // 0x1f2828: 0xc7a400e4  lwc1        $f4, 0xE4($sp)
    ctx->pc = 0x1f2828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f282c:
    // 0x1f282c: 0x4603401e  madda.s     $f8, $f3
    ctx->pc = 0x1f282cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f2830:
    // 0x1f2830: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1f2830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2834:
    // 0x1f2834: 0x460430dc  madd.s      $f3, $f6, $f4
    ctx->pc = 0x1f2834u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f2838:
    // 0x1f2838: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1f2838u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f283c:
    // 0x1f283c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1f283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2840:
    // 0x1f2840: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1f2840u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1f2844:
    // 0x1f2844: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x1f2844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2848:
    // 0x1f2848: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x1f2848u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_1f284c:
    // 0x1f284c: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x1f284cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f2850:
    // 0x1f2850: 0x4602301c  madd.s      $f0, $f6, $f2
    ctx->pc = 0x1f2850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
label_1f2854:
    // 0x1f2854: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1f2854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1f2858:
    // 0x1f2858: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1f2858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_1f285c:
    // 0x1f285c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1f285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2860:
    // 0x1f2860: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x1f2860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f2864:
    // 0x1f2864: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x1f2864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f2868:
    // 0x1f2868: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x1f2868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f286c:
    // 0x1f286c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f286cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1f2870:
    // 0x1f2870: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1f2870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f2874:
    // 0x1f2874: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x1f2874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2878:
    // 0x1f2878: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1f2878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f287c:
    // 0x1f287c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f287cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1f2880:
    // 0x1f2880: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1f2880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f2884:
    // 0x1f2884: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1f2884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2888:
    // 0x1f2888: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f2888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f288c:
    // 0x1f288c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1f288cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f2890:
    // 0x1f2890: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f2890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2894:
    // 0x1f2894: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f2894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f2898:
    // 0x1f2898: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1f2898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f289c:
    // 0x1f289c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1f289cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f28a0:
    // 0x1f28a0: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1f28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f28a4:
    // 0x1f28a4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f28a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1f28a8:
    // 0x1f28a8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1f28a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f28ac:
    // 0x1f28ac: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1f28acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f28b0:
    // 0x1f28b0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f28b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1f28b4:
    // 0x1f28b4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f28b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f28b8:
    // 0x1f28b8: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1f28b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f28bc:
    // 0x1f28bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f28bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f28c0:
    // 0x1f28c0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1f28c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f28c4:
    // 0x1f28c4: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f28c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f28c8:
    // 0x1f28c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f28c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f28cc:
    // 0x1f28cc: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f28ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f28d0:
    // 0x1f28d0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1f28d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f28d4:
    // 0x1f28d4: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1f28d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f28d8:
    // 0x1f28d8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1f28d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1f28dc:
    // 0x1f28dc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f28dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f28e0:
    // 0x1f28e0: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1f28e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f28e4:
    // 0x1f28e4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f28e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1f28e8:
    // 0x1f28e8: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1f28e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f28ec:
    // 0x1f28ec: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f28ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f28f0:
    // 0x1f28f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f28f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f28f4:
    // 0x1f28f4: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1f28f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f28f8:
    // 0x1f28f8: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1f28f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f28fc:
    // 0x1f28fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f28fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f2900:
    // 0x1f2900: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f2900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f2904:
    // 0x1f2904: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1f2904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2908:
    // 0x1f2908: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x1f2908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1f290c:
    // 0x1f290c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1f290cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1f2910:
    // 0x1f2910: 0xafb100b4  sw          $s1, 0xB4($sp)
    ctx->pc = 0x1f2910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 17));
label_1f2914:
    // 0x1f2914: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1f2914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1f2918:
    // 0x1f2918: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f2918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f291c:
    // 0x1f291c: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x1f291cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f2920:
    // 0x1f2920: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x1f2920u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_1f2924:
    // 0x1f2924: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1f2924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1f2928:
    // 0x1f2928: 0x8fa900b0  lw          $t1, 0xB0($sp)
    ctx->pc = 0x1f2928u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1f292c:
    // 0x1f292c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f2930:
    // 0x1f2930: 0x688021  addu        $s0, $v1, $t0
    ctx->pc = 0x1f2930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f2934:
    // 0x1f2934: 0x82630010  lb          $v1, 0x10($s3)
    ctx->pc = 0x1f2934u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_1f2938:
    // 0x1f2938: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x1f2938u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1f293c:
    // 0x1f293c: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x1f293cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1f2940:
    // 0x1f2940: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1f2940u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f2944:
    // 0x1f2944: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x1f2944u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1f2948:
    // 0x1f2948: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f294c:
    if (ctx->pc == 0x1F294Cu) {
        ctx->pc = 0x1F294Cu;
            // 0x1f294c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F2950u;
        goto label_1f2950;
    }
    ctx->pc = 0x1F2948u;
    {
        const bool branch_taken_0x1f2948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F294Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2948u;
            // 0x1f294c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2948) {
            ctx->pc = 0x1F2958u;
            goto label_1f2958;
        }
    }
    ctx->pc = 0x1F2950u;
label_1f2950:
    // 0x1f2950: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f2954:
    if (ctx->pc == 0x1F2954u) {
        ctx->pc = 0x1F2954u;
            // 0x1f2954: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->pc = 0x1F2958u;
        goto label_1f2958;
    }
    ctx->pc = 0x1F2950u;
    {
        const bool branch_taken_0x1f2950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2950u;
            // 0x1f2954: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2950) {
            ctx->pc = 0x1F295Cu;
            goto label_1f295c;
        }
    }
    ctx->pc = 0x1F2958u;
label_1f2958:
    // 0x1f2958: 0x244801a0  addiu       $t0, $v0, 0x1A0
    ctx->pc = 0x1f2958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_1f295c:
    // 0x1f295c: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x1f295cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1f2960:
    // 0x1f2960: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1f2960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1f2964:
    // 0x1f2964: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f2964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1f2968:
    // 0x1f2968: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1f2968u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f296c:
    // 0x1f296c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1f296cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1f2970:
    // 0x1f2970: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f2970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f2974:
    // 0x1f2974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f2974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f2978:
    // 0x1f2978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f297c:
    // 0x1f297c: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1f297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1f2980:
    // 0x1f2980: 0x40f809  jalr        $v0
label_1f2984:
    if (ctx->pc == 0x1F2984u) {
        ctx->pc = 0x1F2988u;
        goto label_1f2988;
    }
    ctx->pc = 0x1F2980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2988u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F2988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F2988u; }
            if (ctx->pc != 0x1F2988u) { return; }
        }
        }
    }
    ctx->pc = 0x1F2988u;
label_1f2988:
    // 0x1f2988: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f2988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f298c:
    // 0x1f298c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1f298cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_1f2990:
    // 0x1f2990: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f2990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f2994:
    // 0x1f2994: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x1f2994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1f2998:
    // 0x1f2998: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
label_1f299c:
    if (ctx->pc == 0x1F299Cu) {
        ctx->pc = 0x1F299Cu;
            // 0x1f299c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x1F29A0u;
        goto label_1f29a0;
    }
    ctx->pc = 0x1F2998u;
    {
        const bool branch_taken_0x1f2998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F299Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2998u;
            // 0x1f299c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2998) {
            ctx->pc = 0x1F27E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f27e4;
        }
    }
    ctx->pc = 0x1F29A0u;
label_1f29a0:
    // 0x1f29a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f29a4:
    // 0x1f29a4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f29a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f29a8:
    // 0x1f29a8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1f29a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f29ac:
    // 0x1f29ac: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x1f29acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
label_1f29b0:
    // 0x1f29b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f29b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f29b4:
    // 0x1f29b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f29b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f29b8:
    // 0x1f29b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f29b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f29bc:
    // 0x1f29bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f29bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f29c0:
    // 0x1f29c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f29c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f29c4:
    // 0x1f29c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f29c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f29c8:
    // 0x1f29c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f29c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f29cc:
    // 0x1f29cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f29ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f29d0:
    // 0x1f29d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f29d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f29d4:
    // 0x1f29d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f29d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f29d8:
    // 0x1f29d8: 0x3e00008  jr          $ra
label_1f29dc:
    if (ctx->pc == 0x1F29DCu) {
        ctx->pc = 0x1F29DCu;
            // 0x1f29dc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x1F29E0u;
        goto label_1f29e0;
    }
    ctx->pc = 0x1F29D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F29DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F29D8u;
            // 0x1f29dc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F29E0u;
label_1f29e0:
    // 0x1f29e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f29e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f29e4:
    // 0x1f29e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f29e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f29e8:
    // 0x1f29e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f29e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f29ec:
    // 0x1f29ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f29ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f29f0:
    // 0x1f29f0: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_1f29f4:
    if (ctx->pc == 0x1F29F4u) {
        ctx->pc = 0x1F29F4u;
            // 0x1f29f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F29F8u;
        goto label_1f29f8;
    }
    ctx->pc = 0x1F29F0u;
    {
        const bool branch_taken_0x1f29f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f29f0) {
            ctx->pc = 0x1F29F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F29F0u;
            // 0x1f29f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2A80u;
            goto label_1f2a80;
        }
    }
    ctx->pc = 0x1F29F8u;
label_1f29f8:
    // 0x1f29f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f29fc:
    // 0x1f29fc: 0x2442e580  addiu       $v0, $v0, -0x1A80
    ctx->pc = 0x1f29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960512));
label_1f2a00:
    // 0x1f2a00: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1f2a04:
    if (ctx->pc == 0x1F2A04u) {
        ctx->pc = 0x1F2A04u;
            // 0x1f2a04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F2A08u;
        goto label_1f2a08;
    }
    ctx->pc = 0x1F2A00u;
    {
        const bool branch_taken_0x1f2a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A00u;
            // 0x1f2a04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a00) {
            ctx->pc = 0x1F2A54u;
            goto label_1f2a54;
        }
    }
    ctx->pc = 0x1F2A08u;
label_1f2a08:
    // 0x1f2a08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f2a0c:
    // 0x1f2a0c: 0x2442e1e0  addiu       $v0, $v0, -0x1E20
    ctx->pc = 0x1f2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959584));
label_1f2a10:
    // 0x1f2a10: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1f2a14:
    if (ctx->pc == 0x1F2A14u) {
        ctx->pc = 0x1F2A14u;
            // 0x1f2a14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F2A18u;
        goto label_1f2a18;
    }
    ctx->pc = 0x1F2A10u;
    {
        const bool branch_taken_0x1f2a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A10u;
            // 0x1f2a14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a10) {
            ctx->pc = 0x1F2A54u;
            goto label_1f2a54;
        }
    }
    ctx->pc = 0x1F2A18u;
label_1f2a18:
    // 0x1f2a18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f2a1c:
    // 0x1f2a1c: 0x2442db60  addiu       $v0, $v0, -0x24A0
    ctx->pc = 0x1f2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957920));
label_1f2a20:
    // 0x1f2a20: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1f2a24:
    if (ctx->pc == 0x1F2A24u) {
        ctx->pc = 0x1F2A24u;
            // 0x1f2a24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F2A28u;
        goto label_1f2a28;
    }
    ctx->pc = 0x1F2A20u;
    {
        const bool branch_taken_0x1f2a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A20u;
            // 0x1f2a24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a20) {
            ctx->pc = 0x1F2A54u;
            goto label_1f2a54;
        }
    }
    ctx->pc = 0x1F2A28u;
label_1f2a28:
    // 0x1f2a28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f2a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f2a2c:
    // 0x1f2a2c: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x1f2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_1f2a30:
    // 0x1f2a30: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1f2a34:
    if (ctx->pc == 0x1F2A34u) {
        ctx->pc = 0x1F2A34u;
            // 0x1f2a34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F2A38u;
        goto label_1f2a38;
    }
    ctx->pc = 0x1F2A30u;
    {
        const bool branch_taken_0x1f2a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A30u;
            // 0x1f2a34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a30) {
            ctx->pc = 0x1F2A54u;
            goto label_1f2a54;
        }
    }
    ctx->pc = 0x1F2A38u;
label_1f2a38:
    // 0x1f2a38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f2a3c:
    // 0x1f2a3c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f2a40:
    // 0x1f2a40: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1f2a44:
    if (ctx->pc == 0x1F2A44u) {
        ctx->pc = 0x1F2A44u;
            // 0x1f2a44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F2A48u;
        goto label_1f2a48;
    }
    ctx->pc = 0x1F2A40u;
    {
        const bool branch_taken_0x1f2a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A40u;
            // 0x1f2a44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a40) {
            ctx->pc = 0x1F2A54u;
            goto label_1f2a54;
        }
    }
    ctx->pc = 0x1F2A48u;
label_1f2a48:
    // 0x1f2a48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f2a4c:
    // 0x1f2a4c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1f2a50:
    // 0x1f2a50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f2a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f2a54:
    // 0x1f2a54: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1f2a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1f2a58:
    // 0x1f2a58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f2a58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1f2a5c:
    // 0x1f2a5c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1f2a60:
    if (ctx->pc == 0x1F2A60u) {
        ctx->pc = 0x1F2A64u;
        goto label_1f2a64;
    }
    ctx->pc = 0x1F2A5Cu;
    {
        const bool branch_taken_0x1f2a5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f2a5c) {
            ctx->pc = 0x1F2A7Cu;
            goto label_1f2a7c;
        }
    }
    ctx->pc = 0x1F2A64u;
label_1f2a64:
    // 0x1f2a64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f2a68:
    // 0x1f2a68: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1f2a68u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1f2a6c:
    // 0x1f2a6c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f2a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f2a70:
    // 0x1f2a70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2a74:
    // 0x1f2a74: 0xc0a7ab4  jal         func_29EAD0
label_1f2a78:
    if (ctx->pc == 0x1F2A78u) {
        ctx->pc = 0x1F2A78u;
            // 0x1f2a78: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x1F2A7Cu;
        goto label_1f2a7c;
    }
    ctx->pc = 0x1F2A74u;
    SET_GPR_U32(ctx, 31, 0x1F2A7Cu);
    ctx->pc = 0x1F2A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A74u;
            // 0x1f2a78: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A7Cu; }
        if (ctx->pc != 0x1F2A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A7Cu; }
        if (ctx->pc != 0x1F2A7Cu) { return; }
    }
    ctx->pc = 0x1F2A7Cu;
label_1f2a7c:
    // 0x1f2a7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f2a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2a80:
    // 0x1f2a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f2a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2a84:
    // 0x1f2a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f2a88:
    // 0x1f2a88: 0x3e00008  jr          $ra
label_1f2a8c:
    if (ctx->pc == 0x1F2A8Cu) {
        ctx->pc = 0x1F2A8Cu;
            // 0x1f2a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F2A90u;
        goto label_1f2a90;
    }
    ctx->pc = 0x1F2A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A88u;
            // 0x1f2a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2A90u;
label_1f2a90:
    // 0x1f2a90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f2a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f2a94:
    // 0x1f2a94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f2a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f2a98:
    // 0x1f2a98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f2a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f2a9c:
    // 0x1f2a9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f2a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f2aa0:
    // 0x1f2aa0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f2aa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2aa4:
    // 0x1f2aa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f2aa8:
    // 0x1f2aa8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f2aa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f2aac:
    // 0x1f2aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f2aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f2ab0:
    // 0x1f2ab0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1f2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1f2ab4:
    // 0x1f2ab4: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_1f2ab8:
    if (ctx->pc == 0x1F2AB8u) {
        ctx->pc = 0x1F2AB8u;
            // 0x1f2ab8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F2ABCu;
        goto label_1f2abc;
    }
    ctx->pc = 0x1F2AB4u;
    {
        const bool branch_taken_0x1f2ab4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F2AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2AB4u;
            // 0x1f2ab8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ab4) {
            ctx->pc = 0x1F2AF0u;
            goto label_1f2af0;
        }
    }
    ctx->pc = 0x1F2ABCu;
label_1f2abc:
    // 0x1f2abc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f2abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2ac0:
    // 0x1f2ac0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1f2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1f2ac4:
    // 0x1f2ac4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f2ac8:
    // 0x1f2ac8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f2acc:
    // 0x1f2acc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f2accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f2ad0:
    // 0x1f2ad0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1f2ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1f2ad4:
    // 0x1f2ad4: 0x320f809  jalr        $t9
label_1f2ad8:
    if (ctx->pc == 0x1F2AD8u) {
        ctx->pc = 0x1F2AD8u;
            // 0x1f2ad8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F2ADCu;
        goto label_1f2adc;
    }
    ctx->pc = 0x1F2AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F2ADCu);
        ctx->pc = 0x1F2AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2AD4u;
            // 0x1f2ad8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F2ADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F2ADCu; }
            if (ctx->pc != 0x1F2ADCu) { return; }
        }
        }
    }
    ctx->pc = 0x1F2ADCu;
label_1f2adc:
    // 0x1f2adc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1f2adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1f2ae0:
    // 0x1f2ae0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f2ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f2ae4:
    // 0x1f2ae4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1f2ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f2ae8:
    // 0x1f2ae8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1f2aec:
    if (ctx->pc == 0x1F2AECu) {
        ctx->pc = 0x1F2AECu;
            // 0x1f2aec: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1F2AF0u;
        goto label_1f2af0;
    }
    ctx->pc = 0x1F2AE8u;
    {
        const bool branch_taken_0x1f2ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2AE8u;
            // 0x1f2aec: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ae8) {
            ctx->pc = 0x1F2AC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2ac0;
        }
    }
    ctx->pc = 0x1F2AF0u;
label_1f2af0:
    // 0x1f2af0: 0x52600007  beql        $s3, $zero, . + 4 + (0x7 << 2)
label_1f2af4:
    if (ctx->pc == 0x1F2AF4u) {
        ctx->pc = 0x1F2AF4u;
            // 0x1f2af4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1F2AF8u;
        goto label_1f2af8;
    }
    ctx->pc = 0x1F2AF0u;
    {
        const bool branch_taken_0x1f2af0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2af0) {
            ctx->pc = 0x1F2AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2AF0u;
            // 0x1f2af4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2B10u;
            goto label_1f2b10;
        }
    }
    ctx->pc = 0x1F2AF8u;
label_1f2af8:
    // 0x1f2af8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1f2af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f2afc:
    // 0x1f2afc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b00:
    // 0x1f2b00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f2b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f2b04:
    // 0x1f2b04: 0x320f809  jalr        $t9
label_1f2b08:
    if (ctx->pc == 0x1F2B08u) {
        ctx->pc = 0x1F2B08u;
            // 0x1f2b08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F2B0Cu;
        goto label_1f2b0c;
    }
    ctx->pc = 0x1F2B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F2B0Cu);
        ctx->pc = 0x1F2B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B04u;
            // 0x1f2b08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F2B0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B0Cu; }
            if (ctx->pc != 0x1F2B0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F2B0Cu;
label_1f2b0c:
    // 0x1f2b0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f2b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f2b10:
    // 0x1f2b10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f2b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2b14:
    // 0x1f2b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f2b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2b18:
    // 0x1f2b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2b1c:
    // 0x1f2b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f2b20:
    // 0x1f2b20: 0x3e00008  jr          $ra
label_1f2b24:
    if (ctx->pc == 0x1F2B24u) {
        ctx->pc = 0x1F2B24u;
            // 0x1f2b24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1F2B28u;
        goto label_1f2b28;
    }
    ctx->pc = 0x1F2B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B20u;
            // 0x1f2b24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2B28u;
label_1f2b28:
    // 0x1f2b28: 0x0  nop
    ctx->pc = 0x1f2b28u;
    // NOP
label_1f2b2c:
    // 0x1f2b2c: 0x0  nop
    ctx->pc = 0x1f2b2cu;
    // NOP
}
