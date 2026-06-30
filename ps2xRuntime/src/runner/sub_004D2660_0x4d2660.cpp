#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D2660
// Address: 0x4d2660 - 0x4d2bd0
void sub_004D2660_0x4d2660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2660_0x4d2660");
#endif

    switch (ctx->pc) {
        case 0x4d2660u: goto label_4d2660;
        case 0x4d2664u: goto label_4d2664;
        case 0x4d2668u: goto label_4d2668;
        case 0x4d266cu: goto label_4d266c;
        case 0x4d2670u: goto label_4d2670;
        case 0x4d2674u: goto label_4d2674;
        case 0x4d2678u: goto label_4d2678;
        case 0x4d267cu: goto label_4d267c;
        case 0x4d2680u: goto label_4d2680;
        case 0x4d2684u: goto label_4d2684;
        case 0x4d2688u: goto label_4d2688;
        case 0x4d268cu: goto label_4d268c;
        case 0x4d2690u: goto label_4d2690;
        case 0x4d2694u: goto label_4d2694;
        case 0x4d2698u: goto label_4d2698;
        case 0x4d269cu: goto label_4d269c;
        case 0x4d26a0u: goto label_4d26a0;
        case 0x4d26a4u: goto label_4d26a4;
        case 0x4d26a8u: goto label_4d26a8;
        case 0x4d26acu: goto label_4d26ac;
        case 0x4d26b0u: goto label_4d26b0;
        case 0x4d26b4u: goto label_4d26b4;
        case 0x4d26b8u: goto label_4d26b8;
        case 0x4d26bcu: goto label_4d26bc;
        case 0x4d26c0u: goto label_4d26c0;
        case 0x4d26c4u: goto label_4d26c4;
        case 0x4d26c8u: goto label_4d26c8;
        case 0x4d26ccu: goto label_4d26cc;
        case 0x4d26d0u: goto label_4d26d0;
        case 0x4d26d4u: goto label_4d26d4;
        case 0x4d26d8u: goto label_4d26d8;
        case 0x4d26dcu: goto label_4d26dc;
        case 0x4d26e0u: goto label_4d26e0;
        case 0x4d26e4u: goto label_4d26e4;
        case 0x4d26e8u: goto label_4d26e8;
        case 0x4d26ecu: goto label_4d26ec;
        case 0x4d26f0u: goto label_4d26f0;
        case 0x4d26f4u: goto label_4d26f4;
        case 0x4d26f8u: goto label_4d26f8;
        case 0x4d26fcu: goto label_4d26fc;
        case 0x4d2700u: goto label_4d2700;
        case 0x4d2704u: goto label_4d2704;
        case 0x4d2708u: goto label_4d2708;
        case 0x4d270cu: goto label_4d270c;
        case 0x4d2710u: goto label_4d2710;
        case 0x4d2714u: goto label_4d2714;
        case 0x4d2718u: goto label_4d2718;
        case 0x4d271cu: goto label_4d271c;
        case 0x4d2720u: goto label_4d2720;
        case 0x4d2724u: goto label_4d2724;
        case 0x4d2728u: goto label_4d2728;
        case 0x4d272cu: goto label_4d272c;
        case 0x4d2730u: goto label_4d2730;
        case 0x4d2734u: goto label_4d2734;
        case 0x4d2738u: goto label_4d2738;
        case 0x4d273cu: goto label_4d273c;
        case 0x4d2740u: goto label_4d2740;
        case 0x4d2744u: goto label_4d2744;
        case 0x4d2748u: goto label_4d2748;
        case 0x4d274cu: goto label_4d274c;
        case 0x4d2750u: goto label_4d2750;
        case 0x4d2754u: goto label_4d2754;
        case 0x4d2758u: goto label_4d2758;
        case 0x4d275cu: goto label_4d275c;
        case 0x4d2760u: goto label_4d2760;
        case 0x4d2764u: goto label_4d2764;
        case 0x4d2768u: goto label_4d2768;
        case 0x4d276cu: goto label_4d276c;
        case 0x4d2770u: goto label_4d2770;
        case 0x4d2774u: goto label_4d2774;
        case 0x4d2778u: goto label_4d2778;
        case 0x4d277cu: goto label_4d277c;
        case 0x4d2780u: goto label_4d2780;
        case 0x4d2784u: goto label_4d2784;
        case 0x4d2788u: goto label_4d2788;
        case 0x4d278cu: goto label_4d278c;
        case 0x4d2790u: goto label_4d2790;
        case 0x4d2794u: goto label_4d2794;
        case 0x4d2798u: goto label_4d2798;
        case 0x4d279cu: goto label_4d279c;
        case 0x4d27a0u: goto label_4d27a0;
        case 0x4d27a4u: goto label_4d27a4;
        case 0x4d27a8u: goto label_4d27a8;
        case 0x4d27acu: goto label_4d27ac;
        case 0x4d27b0u: goto label_4d27b0;
        case 0x4d27b4u: goto label_4d27b4;
        case 0x4d27b8u: goto label_4d27b8;
        case 0x4d27bcu: goto label_4d27bc;
        case 0x4d27c0u: goto label_4d27c0;
        case 0x4d27c4u: goto label_4d27c4;
        case 0x4d27c8u: goto label_4d27c8;
        case 0x4d27ccu: goto label_4d27cc;
        case 0x4d27d0u: goto label_4d27d0;
        case 0x4d27d4u: goto label_4d27d4;
        case 0x4d27d8u: goto label_4d27d8;
        case 0x4d27dcu: goto label_4d27dc;
        case 0x4d27e0u: goto label_4d27e0;
        case 0x4d27e4u: goto label_4d27e4;
        case 0x4d27e8u: goto label_4d27e8;
        case 0x4d27ecu: goto label_4d27ec;
        case 0x4d27f0u: goto label_4d27f0;
        case 0x4d27f4u: goto label_4d27f4;
        case 0x4d27f8u: goto label_4d27f8;
        case 0x4d27fcu: goto label_4d27fc;
        case 0x4d2800u: goto label_4d2800;
        case 0x4d2804u: goto label_4d2804;
        case 0x4d2808u: goto label_4d2808;
        case 0x4d280cu: goto label_4d280c;
        case 0x4d2810u: goto label_4d2810;
        case 0x4d2814u: goto label_4d2814;
        case 0x4d2818u: goto label_4d2818;
        case 0x4d281cu: goto label_4d281c;
        case 0x4d2820u: goto label_4d2820;
        case 0x4d2824u: goto label_4d2824;
        case 0x4d2828u: goto label_4d2828;
        case 0x4d282cu: goto label_4d282c;
        case 0x4d2830u: goto label_4d2830;
        case 0x4d2834u: goto label_4d2834;
        case 0x4d2838u: goto label_4d2838;
        case 0x4d283cu: goto label_4d283c;
        case 0x4d2840u: goto label_4d2840;
        case 0x4d2844u: goto label_4d2844;
        case 0x4d2848u: goto label_4d2848;
        case 0x4d284cu: goto label_4d284c;
        case 0x4d2850u: goto label_4d2850;
        case 0x4d2854u: goto label_4d2854;
        case 0x4d2858u: goto label_4d2858;
        case 0x4d285cu: goto label_4d285c;
        case 0x4d2860u: goto label_4d2860;
        case 0x4d2864u: goto label_4d2864;
        case 0x4d2868u: goto label_4d2868;
        case 0x4d286cu: goto label_4d286c;
        case 0x4d2870u: goto label_4d2870;
        case 0x4d2874u: goto label_4d2874;
        case 0x4d2878u: goto label_4d2878;
        case 0x4d287cu: goto label_4d287c;
        case 0x4d2880u: goto label_4d2880;
        case 0x4d2884u: goto label_4d2884;
        case 0x4d2888u: goto label_4d2888;
        case 0x4d288cu: goto label_4d288c;
        case 0x4d2890u: goto label_4d2890;
        case 0x4d2894u: goto label_4d2894;
        case 0x4d2898u: goto label_4d2898;
        case 0x4d289cu: goto label_4d289c;
        case 0x4d28a0u: goto label_4d28a0;
        case 0x4d28a4u: goto label_4d28a4;
        case 0x4d28a8u: goto label_4d28a8;
        case 0x4d28acu: goto label_4d28ac;
        case 0x4d28b0u: goto label_4d28b0;
        case 0x4d28b4u: goto label_4d28b4;
        case 0x4d28b8u: goto label_4d28b8;
        case 0x4d28bcu: goto label_4d28bc;
        case 0x4d28c0u: goto label_4d28c0;
        case 0x4d28c4u: goto label_4d28c4;
        case 0x4d28c8u: goto label_4d28c8;
        case 0x4d28ccu: goto label_4d28cc;
        case 0x4d28d0u: goto label_4d28d0;
        case 0x4d28d4u: goto label_4d28d4;
        case 0x4d28d8u: goto label_4d28d8;
        case 0x4d28dcu: goto label_4d28dc;
        case 0x4d28e0u: goto label_4d28e0;
        case 0x4d28e4u: goto label_4d28e4;
        case 0x4d28e8u: goto label_4d28e8;
        case 0x4d28ecu: goto label_4d28ec;
        case 0x4d28f0u: goto label_4d28f0;
        case 0x4d28f4u: goto label_4d28f4;
        case 0x4d28f8u: goto label_4d28f8;
        case 0x4d28fcu: goto label_4d28fc;
        case 0x4d2900u: goto label_4d2900;
        case 0x4d2904u: goto label_4d2904;
        case 0x4d2908u: goto label_4d2908;
        case 0x4d290cu: goto label_4d290c;
        case 0x4d2910u: goto label_4d2910;
        case 0x4d2914u: goto label_4d2914;
        case 0x4d2918u: goto label_4d2918;
        case 0x4d291cu: goto label_4d291c;
        case 0x4d2920u: goto label_4d2920;
        case 0x4d2924u: goto label_4d2924;
        case 0x4d2928u: goto label_4d2928;
        case 0x4d292cu: goto label_4d292c;
        case 0x4d2930u: goto label_4d2930;
        case 0x4d2934u: goto label_4d2934;
        case 0x4d2938u: goto label_4d2938;
        case 0x4d293cu: goto label_4d293c;
        case 0x4d2940u: goto label_4d2940;
        case 0x4d2944u: goto label_4d2944;
        case 0x4d2948u: goto label_4d2948;
        case 0x4d294cu: goto label_4d294c;
        case 0x4d2950u: goto label_4d2950;
        case 0x4d2954u: goto label_4d2954;
        case 0x4d2958u: goto label_4d2958;
        case 0x4d295cu: goto label_4d295c;
        case 0x4d2960u: goto label_4d2960;
        case 0x4d2964u: goto label_4d2964;
        case 0x4d2968u: goto label_4d2968;
        case 0x4d296cu: goto label_4d296c;
        case 0x4d2970u: goto label_4d2970;
        case 0x4d2974u: goto label_4d2974;
        case 0x4d2978u: goto label_4d2978;
        case 0x4d297cu: goto label_4d297c;
        case 0x4d2980u: goto label_4d2980;
        case 0x4d2984u: goto label_4d2984;
        case 0x4d2988u: goto label_4d2988;
        case 0x4d298cu: goto label_4d298c;
        case 0x4d2990u: goto label_4d2990;
        case 0x4d2994u: goto label_4d2994;
        case 0x4d2998u: goto label_4d2998;
        case 0x4d299cu: goto label_4d299c;
        case 0x4d29a0u: goto label_4d29a0;
        case 0x4d29a4u: goto label_4d29a4;
        case 0x4d29a8u: goto label_4d29a8;
        case 0x4d29acu: goto label_4d29ac;
        case 0x4d29b0u: goto label_4d29b0;
        case 0x4d29b4u: goto label_4d29b4;
        case 0x4d29b8u: goto label_4d29b8;
        case 0x4d29bcu: goto label_4d29bc;
        case 0x4d29c0u: goto label_4d29c0;
        case 0x4d29c4u: goto label_4d29c4;
        case 0x4d29c8u: goto label_4d29c8;
        case 0x4d29ccu: goto label_4d29cc;
        case 0x4d29d0u: goto label_4d29d0;
        case 0x4d29d4u: goto label_4d29d4;
        case 0x4d29d8u: goto label_4d29d8;
        case 0x4d29dcu: goto label_4d29dc;
        case 0x4d29e0u: goto label_4d29e0;
        case 0x4d29e4u: goto label_4d29e4;
        case 0x4d29e8u: goto label_4d29e8;
        case 0x4d29ecu: goto label_4d29ec;
        case 0x4d29f0u: goto label_4d29f0;
        case 0x4d29f4u: goto label_4d29f4;
        case 0x4d29f8u: goto label_4d29f8;
        case 0x4d29fcu: goto label_4d29fc;
        case 0x4d2a00u: goto label_4d2a00;
        case 0x4d2a04u: goto label_4d2a04;
        case 0x4d2a08u: goto label_4d2a08;
        case 0x4d2a0cu: goto label_4d2a0c;
        case 0x4d2a10u: goto label_4d2a10;
        case 0x4d2a14u: goto label_4d2a14;
        case 0x4d2a18u: goto label_4d2a18;
        case 0x4d2a1cu: goto label_4d2a1c;
        case 0x4d2a20u: goto label_4d2a20;
        case 0x4d2a24u: goto label_4d2a24;
        case 0x4d2a28u: goto label_4d2a28;
        case 0x4d2a2cu: goto label_4d2a2c;
        case 0x4d2a30u: goto label_4d2a30;
        case 0x4d2a34u: goto label_4d2a34;
        case 0x4d2a38u: goto label_4d2a38;
        case 0x4d2a3cu: goto label_4d2a3c;
        case 0x4d2a40u: goto label_4d2a40;
        case 0x4d2a44u: goto label_4d2a44;
        case 0x4d2a48u: goto label_4d2a48;
        case 0x4d2a4cu: goto label_4d2a4c;
        case 0x4d2a50u: goto label_4d2a50;
        case 0x4d2a54u: goto label_4d2a54;
        case 0x4d2a58u: goto label_4d2a58;
        case 0x4d2a5cu: goto label_4d2a5c;
        case 0x4d2a60u: goto label_4d2a60;
        case 0x4d2a64u: goto label_4d2a64;
        case 0x4d2a68u: goto label_4d2a68;
        case 0x4d2a6cu: goto label_4d2a6c;
        case 0x4d2a70u: goto label_4d2a70;
        case 0x4d2a74u: goto label_4d2a74;
        case 0x4d2a78u: goto label_4d2a78;
        case 0x4d2a7cu: goto label_4d2a7c;
        case 0x4d2a80u: goto label_4d2a80;
        case 0x4d2a84u: goto label_4d2a84;
        case 0x4d2a88u: goto label_4d2a88;
        case 0x4d2a8cu: goto label_4d2a8c;
        case 0x4d2a90u: goto label_4d2a90;
        case 0x4d2a94u: goto label_4d2a94;
        case 0x4d2a98u: goto label_4d2a98;
        case 0x4d2a9cu: goto label_4d2a9c;
        case 0x4d2aa0u: goto label_4d2aa0;
        case 0x4d2aa4u: goto label_4d2aa4;
        case 0x4d2aa8u: goto label_4d2aa8;
        case 0x4d2aacu: goto label_4d2aac;
        case 0x4d2ab0u: goto label_4d2ab0;
        case 0x4d2ab4u: goto label_4d2ab4;
        case 0x4d2ab8u: goto label_4d2ab8;
        case 0x4d2abcu: goto label_4d2abc;
        case 0x4d2ac0u: goto label_4d2ac0;
        case 0x4d2ac4u: goto label_4d2ac4;
        case 0x4d2ac8u: goto label_4d2ac8;
        case 0x4d2accu: goto label_4d2acc;
        case 0x4d2ad0u: goto label_4d2ad0;
        case 0x4d2ad4u: goto label_4d2ad4;
        case 0x4d2ad8u: goto label_4d2ad8;
        case 0x4d2adcu: goto label_4d2adc;
        case 0x4d2ae0u: goto label_4d2ae0;
        case 0x4d2ae4u: goto label_4d2ae4;
        case 0x4d2ae8u: goto label_4d2ae8;
        case 0x4d2aecu: goto label_4d2aec;
        case 0x4d2af0u: goto label_4d2af0;
        case 0x4d2af4u: goto label_4d2af4;
        case 0x4d2af8u: goto label_4d2af8;
        case 0x4d2afcu: goto label_4d2afc;
        case 0x4d2b00u: goto label_4d2b00;
        case 0x4d2b04u: goto label_4d2b04;
        case 0x4d2b08u: goto label_4d2b08;
        case 0x4d2b0cu: goto label_4d2b0c;
        case 0x4d2b10u: goto label_4d2b10;
        case 0x4d2b14u: goto label_4d2b14;
        case 0x4d2b18u: goto label_4d2b18;
        case 0x4d2b1cu: goto label_4d2b1c;
        case 0x4d2b20u: goto label_4d2b20;
        case 0x4d2b24u: goto label_4d2b24;
        case 0x4d2b28u: goto label_4d2b28;
        case 0x4d2b2cu: goto label_4d2b2c;
        case 0x4d2b30u: goto label_4d2b30;
        case 0x4d2b34u: goto label_4d2b34;
        case 0x4d2b38u: goto label_4d2b38;
        case 0x4d2b3cu: goto label_4d2b3c;
        case 0x4d2b40u: goto label_4d2b40;
        case 0x4d2b44u: goto label_4d2b44;
        case 0x4d2b48u: goto label_4d2b48;
        case 0x4d2b4cu: goto label_4d2b4c;
        case 0x4d2b50u: goto label_4d2b50;
        case 0x4d2b54u: goto label_4d2b54;
        case 0x4d2b58u: goto label_4d2b58;
        case 0x4d2b5cu: goto label_4d2b5c;
        case 0x4d2b60u: goto label_4d2b60;
        case 0x4d2b64u: goto label_4d2b64;
        case 0x4d2b68u: goto label_4d2b68;
        case 0x4d2b6cu: goto label_4d2b6c;
        case 0x4d2b70u: goto label_4d2b70;
        case 0x4d2b74u: goto label_4d2b74;
        case 0x4d2b78u: goto label_4d2b78;
        case 0x4d2b7cu: goto label_4d2b7c;
        case 0x4d2b80u: goto label_4d2b80;
        case 0x4d2b84u: goto label_4d2b84;
        case 0x4d2b88u: goto label_4d2b88;
        case 0x4d2b8cu: goto label_4d2b8c;
        case 0x4d2b90u: goto label_4d2b90;
        case 0x4d2b94u: goto label_4d2b94;
        case 0x4d2b98u: goto label_4d2b98;
        case 0x4d2b9cu: goto label_4d2b9c;
        case 0x4d2ba0u: goto label_4d2ba0;
        case 0x4d2ba4u: goto label_4d2ba4;
        case 0x4d2ba8u: goto label_4d2ba8;
        case 0x4d2bacu: goto label_4d2bac;
        case 0x4d2bb0u: goto label_4d2bb0;
        case 0x4d2bb4u: goto label_4d2bb4;
        case 0x4d2bb8u: goto label_4d2bb8;
        case 0x4d2bbcu: goto label_4d2bbc;
        case 0x4d2bc0u: goto label_4d2bc0;
        case 0x4d2bc4u: goto label_4d2bc4;
        case 0x4d2bc8u: goto label_4d2bc8;
        case 0x4d2bccu: goto label_4d2bcc;
        default: break;
    }

    ctx->pc = 0x4d2660u;

label_4d2660:
    // 0x4d2660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d2660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d2664:
    // 0x4d2664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d2664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d2668:
    // 0x4d2668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d2668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d266c:
    // 0x4d266c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d266cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d2670:
    // 0x4d2670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d2670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d2674:
    // 0x4d2674: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4d2678:
    if (ctx->pc == 0x4D2678u) {
        ctx->pc = 0x4D2678u;
            // 0x4d2678: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D267Cu;
        goto label_4d267c;
    }
    ctx->pc = 0x4D2674u;
    {
        const bool branch_taken_0x4d2674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2674u;
            // 0x4d2678: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2674) {
            ctx->pc = 0x4D27A8u;
            goto label_4d27a8;
        }
    }
    ctx->pc = 0x4D267Cu;
label_4d267c:
    // 0x4d267c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d267cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d2680:
    // 0x4d2680: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d2680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d2684:
    // 0x4d2684: 0x24632370  addiu       $v1, $v1, 0x2370
    ctx->pc = 0x4d2684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9072));
label_4d2688:
    // 0x4d2688: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d2688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d268c:
    // 0x4d268c: 0x244223a8  addiu       $v0, $v0, 0x23A8
    ctx->pc = 0x4d268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9128));
label_4d2690:
    // 0x4d2690: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d2690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d2694:
    // 0x4d2694: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4d2694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4d2698:
    // 0x4d2698: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4d2698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4d269c:
    // 0x4d269c: 0xc0407c0  jal         func_101F00
label_4d26a0:
    if (ctx->pc == 0x4D26A0u) {
        ctx->pc = 0x4D26A0u;
            // 0x4d26a0: 0x24a527c0  addiu       $a1, $a1, 0x27C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10176));
        ctx->pc = 0x4D26A4u;
        goto label_4d26a4;
    }
    ctx->pc = 0x4D269Cu;
    SET_GPR_U32(ctx, 31, 0x4D26A4u);
    ctx->pc = 0x4D26A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D269Cu;
            // 0x4d26a0: 0x24a527c0  addiu       $a1, $a1, 0x27C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D26A4u; }
        if (ctx->pc != 0x4D26A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D26A4u; }
        if (ctx->pc != 0x4D26A4u) { return; }
    }
    ctx->pc = 0x4D26A4u;
label_4d26a4:
    // 0x4d26a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4d26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4d26a8:
    // 0x4d26a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4d26ac:
    if (ctx->pc == 0x4D26ACu) {
        ctx->pc = 0x4D26ACu;
            // 0x4d26ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4D26B0u;
        goto label_4d26b0;
    }
    ctx->pc = 0x4D26A8u;
    {
        const bool branch_taken_0x4d26a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d26a8) {
            ctx->pc = 0x4D26ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D26A8u;
            // 0x4d26ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D26BCu;
            goto label_4d26bc;
        }
    }
    ctx->pc = 0x4D26B0u;
label_4d26b0:
    // 0x4d26b0: 0xc07507c  jal         func_1D41F0
label_4d26b4:
    if (ctx->pc == 0x4D26B4u) {
        ctx->pc = 0x4D26B4u;
            // 0x4d26b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4D26B8u;
        goto label_4d26b8;
    }
    ctx->pc = 0x4D26B0u;
    SET_GPR_U32(ctx, 31, 0x4D26B8u);
    ctx->pc = 0x4D26B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D26B0u;
            // 0x4d26b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D26B8u; }
        if (ctx->pc != 0x4D26B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D26B8u; }
        if (ctx->pc != 0x4D26B8u) { return; }
    }
    ctx->pc = 0x4D26B8u;
label_4d26b8:
    // 0x4d26b8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4d26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4d26bc:
    // 0x4d26bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d26c0:
    if (ctx->pc == 0x4D26C0u) {
        ctx->pc = 0x4D26C0u;
            // 0x4d26c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4D26C4u;
        goto label_4d26c4;
    }
    ctx->pc = 0x4D26BCu;
    {
        const bool branch_taken_0x4d26bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d26bc) {
            ctx->pc = 0x4D26C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D26BCu;
            // 0x4d26c0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D26ECu;
            goto label_4d26ec;
        }
    }
    ctx->pc = 0x4D26C4u;
label_4d26c4:
    // 0x4d26c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d26c8:
    if (ctx->pc == 0x4D26C8u) {
        ctx->pc = 0x4D26CCu;
        goto label_4d26cc;
    }
    ctx->pc = 0x4D26C4u;
    {
        const bool branch_taken_0x4d26c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d26c4) {
            ctx->pc = 0x4D26E8u;
            goto label_4d26e8;
        }
    }
    ctx->pc = 0x4D26CCu;
label_4d26cc:
    // 0x4d26cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d26d0:
    if (ctx->pc == 0x4D26D0u) {
        ctx->pc = 0x4D26D4u;
        goto label_4d26d4;
    }
    ctx->pc = 0x4D26CCu;
    {
        const bool branch_taken_0x4d26cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d26cc) {
            ctx->pc = 0x4D26E8u;
            goto label_4d26e8;
        }
    }
    ctx->pc = 0x4D26D4u;
label_4d26d4:
    // 0x4d26d4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4d26d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4d26d8:
    // 0x4d26d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d26dc:
    if (ctx->pc == 0x4D26DCu) {
        ctx->pc = 0x4D26E0u;
        goto label_4d26e0;
    }
    ctx->pc = 0x4D26D8u;
    {
        const bool branch_taken_0x4d26d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d26d8) {
            ctx->pc = 0x4D26E8u;
            goto label_4d26e8;
        }
    }
    ctx->pc = 0x4D26E0u;
label_4d26e0:
    // 0x4d26e0: 0xc0400a8  jal         func_1002A0
label_4d26e4:
    if (ctx->pc == 0x4D26E4u) {
        ctx->pc = 0x4D26E8u;
        goto label_4d26e8;
    }
    ctx->pc = 0x4D26E0u;
    SET_GPR_U32(ctx, 31, 0x4D26E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D26E8u; }
        if (ctx->pc != 0x4D26E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D26E8u; }
        if (ctx->pc != 0x4D26E8u) { return; }
    }
    ctx->pc = 0x4D26E8u;
label_4d26e8:
    // 0x4d26e8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4d26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4d26ec:
    // 0x4d26ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d26f0:
    if (ctx->pc == 0x4D26F0u) {
        ctx->pc = 0x4D26F0u;
            // 0x4d26f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4D26F4u;
        goto label_4d26f4;
    }
    ctx->pc = 0x4D26ECu;
    {
        const bool branch_taken_0x4d26ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d26ec) {
            ctx->pc = 0x4D26F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D26ECu;
            // 0x4d26f0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D271Cu;
            goto label_4d271c;
        }
    }
    ctx->pc = 0x4D26F4u;
label_4d26f4:
    // 0x4d26f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d26f8:
    if (ctx->pc == 0x4D26F8u) {
        ctx->pc = 0x4D26FCu;
        goto label_4d26fc;
    }
    ctx->pc = 0x4D26F4u;
    {
        const bool branch_taken_0x4d26f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d26f4) {
            ctx->pc = 0x4D2718u;
            goto label_4d2718;
        }
    }
    ctx->pc = 0x4D26FCu;
label_4d26fc:
    // 0x4d26fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d2700:
    if (ctx->pc == 0x4D2700u) {
        ctx->pc = 0x4D2704u;
        goto label_4d2704;
    }
    ctx->pc = 0x4D26FCu;
    {
        const bool branch_taken_0x4d26fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d26fc) {
            ctx->pc = 0x4D2718u;
            goto label_4d2718;
        }
    }
    ctx->pc = 0x4D2704u;
label_4d2704:
    // 0x4d2704: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4d2704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4d2708:
    // 0x4d2708: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d270c:
    if (ctx->pc == 0x4D270Cu) {
        ctx->pc = 0x4D2710u;
        goto label_4d2710;
    }
    ctx->pc = 0x4D2708u;
    {
        const bool branch_taken_0x4d2708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2708) {
            ctx->pc = 0x4D2718u;
            goto label_4d2718;
        }
    }
    ctx->pc = 0x4D2710u;
label_4d2710:
    // 0x4d2710: 0xc0400a8  jal         func_1002A0
label_4d2714:
    if (ctx->pc == 0x4D2714u) {
        ctx->pc = 0x4D2718u;
        goto label_4d2718;
    }
    ctx->pc = 0x4D2710u;
    SET_GPR_U32(ctx, 31, 0x4D2718u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2718u; }
        if (ctx->pc != 0x4D2718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2718u; }
        if (ctx->pc != 0x4D2718u) { return; }
    }
    ctx->pc = 0x4D2718u;
label_4d2718:
    // 0x4d2718: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4d2718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4d271c:
    // 0x4d271c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d2720:
    if (ctx->pc == 0x4D2720u) {
        ctx->pc = 0x4D2724u;
        goto label_4d2724;
    }
    ctx->pc = 0x4D271Cu;
    {
        const bool branch_taken_0x4d271c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d271c) {
            ctx->pc = 0x4D2738u;
            goto label_4d2738;
        }
    }
    ctx->pc = 0x4D2724u;
label_4d2724:
    // 0x4d2724: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d2724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d2728:
    // 0x4d2728: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d2728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d272c:
    // 0x4d272c: 0x24632360  addiu       $v1, $v1, 0x2360
    ctx->pc = 0x4d272cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9056));
label_4d2730:
    // 0x4d2730: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4d2730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4d2734:
    // 0x4d2734: 0xac40aa38  sw          $zero, -0x55C8($v0)
    ctx->pc = 0x4d2734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945336), GPR_U32(ctx, 0));
label_4d2738:
    // 0x4d2738: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4d273c:
    if (ctx->pc == 0x4D273Cu) {
        ctx->pc = 0x4D273Cu;
            // 0x4d273c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4D2740u;
        goto label_4d2740;
    }
    ctx->pc = 0x4D2738u;
    {
        const bool branch_taken_0x4d2738 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2738) {
            ctx->pc = 0x4D273Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2738u;
            // 0x4d273c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D2794u;
            goto label_4d2794;
        }
    }
    ctx->pc = 0x4D2740u;
label_4d2740:
    // 0x4d2740: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d2740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d2744:
    // 0x4d2744: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d2744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d2748:
    // 0x4d2748: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d2748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4d274c:
    // 0x4d274c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4d274cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4d2750:
    // 0x4d2750: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d2754:
    if (ctx->pc == 0x4D2754u) {
        ctx->pc = 0x4D2754u;
            // 0x4d2754: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4D2758u;
        goto label_4d2758;
    }
    ctx->pc = 0x4D2750u;
    {
        const bool branch_taken_0x4d2750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2750) {
            ctx->pc = 0x4D2754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2750u;
            // 0x4d2754: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D276Cu;
            goto label_4d276c;
        }
    }
    ctx->pc = 0x4D2758u;
label_4d2758:
    // 0x4d2758: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d2758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d275c:
    // 0x4d275c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d275cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d2760:
    // 0x4d2760: 0x320f809  jalr        $t9
label_4d2764:
    if (ctx->pc == 0x4D2764u) {
        ctx->pc = 0x4D2764u;
            // 0x4d2764: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D2768u;
        goto label_4d2768;
    }
    ctx->pc = 0x4D2760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D2768u);
        ctx->pc = 0x4D2764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2760u;
            // 0x4d2764: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D2768u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D2768u; }
            if (ctx->pc != 0x4D2768u) { return; }
        }
        }
    }
    ctx->pc = 0x4D2768u;
label_4d2768:
    // 0x4d2768: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4d2768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4d276c:
    // 0x4d276c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d2770:
    if (ctx->pc == 0x4D2770u) {
        ctx->pc = 0x4D2770u;
            // 0x4d2770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2774u;
        goto label_4d2774;
    }
    ctx->pc = 0x4D276Cu;
    {
        const bool branch_taken_0x4d276c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d276c) {
            ctx->pc = 0x4D2770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D276Cu;
            // 0x4d2770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D2788u;
            goto label_4d2788;
        }
    }
    ctx->pc = 0x4D2774u;
label_4d2774:
    // 0x4d2774: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d2774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d2778:
    // 0x4d2778: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d2778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d277c:
    // 0x4d277c: 0x320f809  jalr        $t9
label_4d2780:
    if (ctx->pc == 0x4D2780u) {
        ctx->pc = 0x4D2780u;
            // 0x4d2780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D2784u;
        goto label_4d2784;
    }
    ctx->pc = 0x4D277Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D2784u);
        ctx->pc = 0x4D2780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D277Cu;
            // 0x4d2780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D2784u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D2784u; }
            if (ctx->pc != 0x4D2784u) { return; }
        }
        }
    }
    ctx->pc = 0x4D2784u;
label_4d2784:
    // 0x4d2784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d2784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d2788:
    // 0x4d2788: 0xc075bf8  jal         func_1D6FE0
label_4d278c:
    if (ctx->pc == 0x4D278Cu) {
        ctx->pc = 0x4D278Cu;
            // 0x4d278c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2790u;
        goto label_4d2790;
    }
    ctx->pc = 0x4D2788u;
    SET_GPR_U32(ctx, 31, 0x4D2790u);
    ctx->pc = 0x4D278Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2788u;
            // 0x4d278c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2790u; }
        if (ctx->pc != 0x4D2790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2790u; }
        if (ctx->pc != 0x4D2790u) { return; }
    }
    ctx->pc = 0x4D2790u;
label_4d2790:
    // 0x4d2790: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d2790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d2794:
    // 0x4d2794: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d2794u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d2798:
    // 0x4d2798: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d279c:
    if (ctx->pc == 0x4D279Cu) {
        ctx->pc = 0x4D279Cu;
            // 0x4d279c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D27A0u;
        goto label_4d27a0;
    }
    ctx->pc = 0x4D2798u;
    {
        const bool branch_taken_0x4d2798 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d2798) {
            ctx->pc = 0x4D279Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2798u;
            // 0x4d279c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D27ACu;
            goto label_4d27ac;
        }
    }
    ctx->pc = 0x4D27A0u;
label_4d27a0:
    // 0x4d27a0: 0xc0400a8  jal         func_1002A0
label_4d27a4:
    if (ctx->pc == 0x4D27A4u) {
        ctx->pc = 0x4D27A4u;
            // 0x4d27a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D27A8u;
        goto label_4d27a8;
    }
    ctx->pc = 0x4D27A0u;
    SET_GPR_U32(ctx, 31, 0x4D27A8u);
    ctx->pc = 0x4D27A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D27A0u;
            // 0x4d27a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D27A8u; }
        if (ctx->pc != 0x4D27A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D27A8u; }
        if (ctx->pc != 0x4D27A8u) { return; }
    }
    ctx->pc = 0x4D27A8u;
label_4d27a8:
    // 0x4d27a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d27a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d27ac:
    // 0x4d27ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d27acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d27b0:
    // 0x4d27b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d27b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d27b4:
    // 0x4d27b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d27b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d27b8:
    // 0x4d27b8: 0x3e00008  jr          $ra
label_4d27bc:
    if (ctx->pc == 0x4D27BCu) {
        ctx->pc = 0x4D27BCu;
            // 0x4d27bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D27C0u;
        goto label_4d27c0;
    }
    ctx->pc = 0x4D27B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D27BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D27B8u;
            // 0x4d27bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D27C0u;
label_4d27c0:
    // 0x4d27c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d27c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d27c4:
    // 0x4d27c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d27c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d27c8:
    // 0x4d27c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d27c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d27cc:
    // 0x4d27cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d27ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d27d0:
    // 0x4d27d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d27d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d27d4:
    // 0x4d27d4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_4d27d8:
    if (ctx->pc == 0x4D27D8u) {
        ctx->pc = 0x4D27D8u;
            // 0x4d27d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D27DCu;
        goto label_4d27dc;
    }
    ctx->pc = 0x4D27D4u;
    {
        const bool branch_taken_0x4d27d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D27D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D27D4u;
            // 0x4d27d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d27d4) {
            ctx->pc = 0x4D2848u;
            goto label_4d2848;
        }
    }
    ctx->pc = 0x4D27DCu;
label_4d27dc:
    // 0x4d27dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d27dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d27e0:
    // 0x4d27e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d27e4:
    // 0x4d27e4: 0x246322b0  addiu       $v1, $v1, 0x22B0
    ctx->pc = 0x4d27e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8880));
label_4d27e8:
    // 0x4d27e8: 0x244222f0  addiu       $v0, $v0, 0x22F0
    ctx->pc = 0x4d27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8944));
label_4d27ec:
    // 0x4d27ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d27f0:
    // 0x4d27f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4d27f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4d27f4:
    // 0x4d27f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d27f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d27f8:
    // 0x4d27f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4d27f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4d27fc:
    // 0x4d27fc: 0x320f809  jalr        $t9
label_4d2800:
    if (ctx->pc == 0x4D2800u) {
        ctx->pc = 0x4D2804u;
        goto label_4d2804;
    }
    ctx->pc = 0x4D27FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D2804u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D2804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D2804u; }
            if (ctx->pc != 0x4D2804u) { return; }
        }
        }
    }
    ctx->pc = 0x4D2804u;
label_4d2804:
    // 0x4d2804: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_4d2808:
    if (ctx->pc == 0x4D2808u) {
        ctx->pc = 0x4D2808u;
            // 0x4d2808: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4D280Cu;
        goto label_4d280c;
    }
    ctx->pc = 0x4D2804u;
    {
        const bool branch_taken_0x4d2804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2804) {
            ctx->pc = 0x4D2808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2804u;
            // 0x4d2808: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D2834u;
            goto label_4d2834;
        }
    }
    ctx->pc = 0x4D280Cu;
label_4d280c:
    // 0x4d280c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d280cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d2810:
    // 0x4d2810: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d2810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d2814:
    // 0x4d2814: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x4d2814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_4d2818:
    // 0x4d2818: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x4d2818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_4d281c:
    // 0x4d281c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d281cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d2820:
    // 0x4d2820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d2820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d2824:
    // 0x4d2824: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4d2824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4d2828:
    // 0x4d2828: 0xc0aee40  jal         func_2BB900
label_4d282c:
    if (ctx->pc == 0x4D282Cu) {
        ctx->pc = 0x4D282Cu;
            // 0x4d282c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2830u;
        goto label_4d2830;
    }
    ctx->pc = 0x4D2828u;
    SET_GPR_U32(ctx, 31, 0x4D2830u);
    ctx->pc = 0x4D282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2828u;
            // 0x4d282c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2830u; }
        if (ctx->pc != 0x4D2830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2830u; }
        if (ctx->pc != 0x4D2830u) { return; }
    }
    ctx->pc = 0x4D2830u;
label_4d2830:
    // 0x4d2830: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d2830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4d2834:
    // 0x4d2834: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d2834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d2838:
    // 0x4d2838: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d283c:
    if (ctx->pc == 0x4D283Cu) {
        ctx->pc = 0x4D283Cu;
            // 0x4d283c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2840u;
        goto label_4d2840;
    }
    ctx->pc = 0x4D2838u;
    {
        const bool branch_taken_0x4d2838 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d2838) {
            ctx->pc = 0x4D283Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2838u;
            // 0x4d283c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D284Cu;
            goto label_4d284c;
        }
    }
    ctx->pc = 0x4D2840u;
label_4d2840:
    // 0x4d2840: 0xc0400a8  jal         func_1002A0
label_4d2844:
    if (ctx->pc == 0x4D2844u) {
        ctx->pc = 0x4D2844u;
            // 0x4d2844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2848u;
        goto label_4d2848;
    }
    ctx->pc = 0x4D2840u;
    SET_GPR_U32(ctx, 31, 0x4D2848u);
    ctx->pc = 0x4D2844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2840u;
            // 0x4d2844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2848u; }
        if (ctx->pc != 0x4D2848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2848u; }
        if (ctx->pc != 0x4D2848u) { return; }
    }
    ctx->pc = 0x4D2848u;
label_4d2848:
    // 0x4d2848: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d2848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d284c:
    // 0x4d284c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d284cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d2850:
    // 0x4d2850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d2850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d2854:
    // 0x4d2854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d2854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d2858:
    // 0x4d2858: 0x3e00008  jr          $ra
label_4d285c:
    if (ctx->pc == 0x4D285Cu) {
        ctx->pc = 0x4D285Cu;
            // 0x4d285c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D2860u;
        goto label_4d2860;
    }
    ctx->pc = 0x4D2858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D285Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2858u;
            // 0x4d285c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2860u;
label_4d2860:
    // 0x4d2860: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4d2860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4d2864:
    // 0x4d2864: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4d2864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4d2868:
    // 0x4d2868: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4d2868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4d286c:
    // 0x4d286c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4d286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4d2870:
    // 0x4d2870: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4d2870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4d2874:
    // 0x4d2874: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4d2874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4d2878:
    // 0x4d2878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4d2878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4d287c:
    // 0x4d287c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d2880:
    // 0x4d2880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d2880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d2884:
    // 0x4d2884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d2884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d2888:
    // 0x4d2888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d2888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d288c:
    // 0x4d288c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4d288cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4d2890:
    // 0x4d2890: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4d2890u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4d2894:
    // 0x4d2894: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d2894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d2898:
    // 0x4d2898: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4d289c:
    if (ctx->pc == 0x4D289Cu) {
        ctx->pc = 0x4D289Cu;
            // 0x4d289c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D28A0u;
        goto label_4d28a0;
    }
    ctx->pc = 0x4D2898u;
    {
        const bool branch_taken_0x4d2898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2898u;
            // 0x4d289c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2898) {
            ctx->pc = 0x4D28DCu;
            goto label_4d28dc;
        }
    }
    ctx->pc = 0x4D28A0u;
label_4d28a0:
    // 0x4d28a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d28a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d28a4:
    // 0x4d28a4: 0x50a30044  beql        $a1, $v1, . + 4 + (0x44 << 2)
label_4d28a8:
    if (ctx->pc == 0x4D28A8u) {
        ctx->pc = 0x4D28A8u;
            // 0x4d28a8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x4D28ACu;
        goto label_4d28ac;
    }
    ctx->pc = 0x4D28A4u;
    {
        const bool branch_taken_0x4d28a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d28a4) {
            ctx->pc = 0x4D28A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D28A4u;
            // 0x4d28a8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D29B8u;
            goto label_4d29b8;
        }
    }
    ctx->pc = 0x4D28ACu;
label_4d28ac:
    // 0x4d28ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d28acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d28b0:
    // 0x4d28b0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4d28b4:
    if (ctx->pc == 0x4D28B4u) {
        ctx->pc = 0x4D28B4u;
            // 0x4d28b4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D28B8u;
        goto label_4d28b8;
    }
    ctx->pc = 0x4D28B0u;
    {
        const bool branch_taken_0x4d28b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d28b0) {
            ctx->pc = 0x4D28B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D28B0u;
            // 0x4d28b4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D28C0u;
            goto label_4d28c0;
        }
    }
    ctx->pc = 0x4D28B8u;
label_4d28b8:
    // 0x4d28b8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_4d28bc:
    if (ctx->pc == 0x4D28BCu) {
        ctx->pc = 0x4D28C0u;
        goto label_4d28c0;
    }
    ctx->pc = 0x4D28B8u;
    {
        const bool branch_taken_0x4d28b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d28b8) {
            ctx->pc = 0x4D29B4u;
            goto label_4d29b4;
        }
    }
    ctx->pc = 0x4D28C0u;
label_4d28c0:
    // 0x4d28c0: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4d28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4d28c4:
    // 0x4d28c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4d28c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4d28c8:
    // 0x4d28c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4d28c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4d28cc:
    // 0x4d28cc: 0x320f809  jalr        $t9
label_4d28d0:
    if (ctx->pc == 0x4D28D0u) {
        ctx->pc = 0x4D28D0u;
            // 0x4d28d0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4D28D4u;
        goto label_4d28d4;
    }
    ctx->pc = 0x4D28CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D28D4u);
        ctx->pc = 0x4D28D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D28CCu;
            // 0x4d28d0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D28D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D28D4u; }
            if (ctx->pc != 0x4D28D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4D28D4u;
label_4d28d4:
    // 0x4d28d4: 0x10000037  b           . + 4 + (0x37 << 2)
label_4d28d8:
    if (ctx->pc == 0x4D28D8u) {
        ctx->pc = 0x4D28DCu;
        goto label_4d28dc;
    }
    ctx->pc = 0x4D28D4u;
    {
        const bool branch_taken_0x4d28d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d28d4) {
            ctx->pc = 0x4D29B4u;
            goto label_4d29b4;
        }
    }
    ctx->pc = 0x4D28DCu;
label_4d28dc:
    // 0x4d28dc: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x4d28dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4d28e0:
    // 0x4d28e0: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_4d28e4:
    if (ctx->pc == 0x4D28E4u) {
        ctx->pc = 0x4D28E8u;
        goto label_4d28e8;
    }
    ctx->pc = 0x4D28E0u;
    {
        const bool branch_taken_0x4d28e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d28e0) {
            ctx->pc = 0x4D29B4u;
            goto label_4d29b4;
        }
    }
    ctx->pc = 0x4D28E8u;
label_4d28e8:
    // 0x4d28e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d28e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d28ec:
    // 0x4d28ec: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d28ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d28f0:
    // 0x4d28f0: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4d28f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4d28f4:
    // 0x4d28f4: 0x26b00084  addiu       $s0, $s5, 0x84
    ctx->pc = 0x4d28f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_4d28f8:
    // 0x4d28f8: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x4d28f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4d28fc:
    // 0x4d28fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d2900:
    // 0x4d2900: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x4d2900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4d2904:
    // 0x4d2904: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4d2904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4d2908:
    // 0x4d2908: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x4d2908u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4d290c:
    // 0x4d290c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4d290cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4d2910:
    // 0x4d2910: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x4d2910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_4d2914:
    // 0x4d2914: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4d2914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4d2918:
    // 0x4d2918: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4d2918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4d291c:
    // 0x4d291c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d2920:
    // 0x4d2920: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d2920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d2924:
    // 0x4d2924: 0xc04e738  jal         func_139CE0
label_4d2928:
    if (ctx->pc == 0x4D2928u) {
        ctx->pc = 0x4D2928u;
            // 0x4d2928: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4D292Cu;
        goto label_4d292c;
    }
    ctx->pc = 0x4D2924u;
    SET_GPR_U32(ctx, 31, 0x4D292Cu);
    ctx->pc = 0x4D2928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2924u;
            // 0x4d2928: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D292Cu; }
        if (ctx->pc != 0x4D292Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D292Cu; }
        if (ctx->pc != 0x4D292Cu) { return; }
    }
    ctx->pc = 0x4D292Cu;
label_4d292c:
    // 0x4d292c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d292cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d2930:
    // 0x4d2930: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d2930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d2934:
    // 0x4d2934: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4d2934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4d2938:
    // 0x4d2938: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d2938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d293c:
    // 0x4d293c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4d293cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4d2940:
    // 0x4d2940: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d2940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d2944:
    // 0x4d2944: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x4d2944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4d2948:
    // 0x4d2948: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d2948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d294c:
    // 0x4d294c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4d294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4d2950:
    // 0x4d2950: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4d2950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4d2954:
    // 0x4d2954: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4d2954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d2958:
    // 0x4d2958: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4d2958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d295c:
    // 0x4d295c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4d295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4d2960:
    // 0x4d2960: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4d2960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4d2964:
    // 0x4d2964: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4d2964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4d2968:
    // 0x4d2968: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x4d2968u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_4d296c:
    // 0x4d296c: 0xc134eb8  jal         func_4D3AE0
label_4d2970:
    if (ctx->pc == 0x4D2970u) {
        ctx->pc = 0x4D2970u;
            // 0x4d2970: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4D2974u;
        goto label_4d2974;
    }
    ctx->pc = 0x4D296Cu;
    SET_GPR_U32(ctx, 31, 0x4D2974u);
    ctx->pc = 0x4D2970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D296Cu;
            // 0x4d2970: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D3AE0u;
    if (runtime->hasFunction(0x4D3AE0u)) {
        auto targetFn = runtime->lookupFunction(0x4D3AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2974u; }
        if (ctx->pc != 0x4D2974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D3AE0_0x4d3ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2974u; }
        if (ctx->pc != 0x4D2974u) { return; }
    }
    ctx->pc = 0x4D2974u;
label_4d2974:
    // 0x4d2974: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4d2974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4d2978:
    // 0x4d2978: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4d2978u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4d297c:
    // 0x4d297c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_4d2980:
    if (ctx->pc == 0x4D2980u) {
        ctx->pc = 0x4D2980u;
            // 0x4d2980: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4D2984u;
        goto label_4d2984;
    }
    ctx->pc = 0x4D297Cu;
    {
        const bool branch_taken_0x4d297c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D2980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D297Cu;
            // 0x4d2980: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d297c) {
            ctx->pc = 0x4D2944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d2944;
        }
    }
    ctx->pc = 0x4D2984u;
label_4d2984:
    // 0x4d2984: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d2984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d2988:
    // 0x4d2988: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4d2988u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d298c:
    // 0x4d298c: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4d2990:
    if (ctx->pc == 0x4D2990u) {
        ctx->pc = 0x4D2990u;
            // 0x4d2990: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4D2994u;
        goto label_4d2994;
    }
    ctx->pc = 0x4D298Cu;
    {
        const bool branch_taken_0x4d298c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4D2990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D298Cu;
            // 0x4d2990: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d298c) {
            ctx->pc = 0x4D29B4u;
            goto label_4d29b4;
        }
    }
    ctx->pc = 0x4D2994u;
label_4d2994:
    // 0x4d2994: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d2994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d2998:
    // 0x4d2998: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d2998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d299c:
    // 0x4d299c: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4d299cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4d29a0:
    // 0x4d29a0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4d29a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4d29a4:
    // 0x4d29a4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4d29a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4d29a8:
    // 0x4d29a8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x4d29a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4d29ac:
    // 0x4d29ac: 0xc055ea8  jal         func_157AA0
label_4d29b0:
    if (ctx->pc == 0x4D29B0u) {
        ctx->pc = 0x4D29B0u;
            // 0x4d29b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D29B4u;
        goto label_4d29b4;
    }
    ctx->pc = 0x4D29ACu;
    SET_GPR_U32(ctx, 31, 0x4D29B4u);
    ctx->pc = 0x4D29B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D29ACu;
            // 0x4d29b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D29B4u; }
        if (ctx->pc != 0x4D29B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D29B4u; }
        if (ctx->pc != 0x4D29B4u) { return; }
    }
    ctx->pc = 0x4D29B4u;
label_4d29b4:
    // 0x4d29b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4d29b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4d29b8:
    // 0x4d29b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4d29b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4d29bc:
    // 0x4d29bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4d29bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4d29c0:
    // 0x4d29c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4d29c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4d29c4:
    // 0x4d29c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4d29c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d29c8:
    // 0x4d29c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d29c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d29cc:
    // 0x4d29cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d29ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d29d0:
    // 0x4d29d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d29d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d29d4:
    // 0x4d29d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d29d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d29d8:
    // 0x4d29d8: 0x3e00008  jr          $ra
label_4d29dc:
    if (ctx->pc == 0x4D29DCu) {
        ctx->pc = 0x4D29DCu;
            // 0x4d29dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4D29E0u;
        goto label_4d29e0;
    }
    ctx->pc = 0x4D29D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D29DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D29D8u;
            // 0x4d29dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D29E0u;
label_4d29e0:
    // 0x4d29e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d29e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d29e4:
    // 0x4d29e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d29e8:
    // 0x4d29e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4d29e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4d29ec:
    // 0x4d29ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4d29ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4d29f0:
    // 0x4d29f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d29f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d29f4:
    // 0x4d29f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d29f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d29f8:
    // 0x4d29f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d29f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d29fc:
    // 0x4d29fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d29fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d2a00:
    // 0x4d2a00: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4d2a00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4d2a04:
    // 0x4d2a04: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4d2a08:
    if (ctx->pc == 0x4D2A08u) {
        ctx->pc = 0x4D2A08u;
            // 0x4d2a08: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2A0Cu;
        goto label_4d2a0c;
    }
    ctx->pc = 0x4D2A04u;
    {
        const bool branch_taken_0x4d2a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D2A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2A04u;
            // 0x4d2a08: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2a04) {
            ctx->pc = 0x4D2A38u;
            goto label_4d2a38;
        }
    }
    ctx->pc = 0x4D2A0Cu;
label_4d2a0c:
    // 0x4d2a0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d2a10:
    // 0x4d2a10: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4d2a14:
    if (ctx->pc == 0x4D2A14u) {
        ctx->pc = 0x4D2A14u;
            // 0x4d2a14: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D2A18u;
        goto label_4d2a18;
    }
    ctx->pc = 0x4D2A10u;
    {
        const bool branch_taken_0x4d2a10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d2a10) {
            ctx->pc = 0x4D2A14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2A10u;
            // 0x4d2a14: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D2A2Cu;
            goto label_4d2a2c;
        }
    }
    ctx->pc = 0x4D2A18u;
label_4d2a18:
    // 0x4d2a18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d2a1c:
    // 0x4d2a1c: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
label_4d2a20:
    if (ctx->pc == 0x4D2A20u) {
        ctx->pc = 0x4D2A24u;
        goto label_4d2a24;
    }
    ctx->pc = 0x4D2A1Cu;
    {
        const bool branch_taken_0x4d2a1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d2a1c) {
            ctx->pc = 0x4D2B30u;
            goto label_4d2b30;
        }
    }
    ctx->pc = 0x4D2A24u;
label_4d2a24:
    // 0x4d2a24: 0x10000042  b           . + 4 + (0x42 << 2)
label_4d2a28:
    if (ctx->pc == 0x4D2A28u) {
        ctx->pc = 0x4D2A2Cu;
        goto label_4d2a2c;
    }
    ctx->pc = 0x4D2A24u;
    {
        const bool branch_taken_0x4d2a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2a24) {
            ctx->pc = 0x4D2B30u;
            goto label_4d2b30;
        }
    }
    ctx->pc = 0x4D2A2Cu;
label_4d2a2c:
    // 0x4d2a2c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4d2a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4d2a30:
    // 0x4d2a30: 0x320f809  jalr        $t9
label_4d2a34:
    if (ctx->pc == 0x4D2A34u) {
        ctx->pc = 0x4D2A38u;
        goto label_4d2a38;
    }
    ctx->pc = 0x4D2A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D2A38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D2A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D2A38u; }
            if (ctx->pc != 0x4D2A38u) { return; }
        }
        }
    }
    ctx->pc = 0x4D2A38u;
label_4d2a38:
    // 0x4d2a38: 0x8e910070  lw          $s1, 0x70($s4)
    ctx->pc = 0x4d2a38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_4d2a3c:
    // 0x4d2a3c: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
label_4d2a40:
    if (ctx->pc == 0x4D2A40u) {
        ctx->pc = 0x4D2A44u;
        goto label_4d2a44;
    }
    ctx->pc = 0x4D2A3Cu;
    {
        const bool branch_taken_0x4d2a3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2a3c) {
            ctx->pc = 0x4D2B30u;
            goto label_4d2b30;
        }
    }
    ctx->pc = 0x4D2A44u;
label_4d2a44:
    // 0x4d2a44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d2a44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d2a48:
    // 0x4d2a48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d2a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d2a4c:
    // 0x4d2a4c: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4d2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4d2a50:
    // 0x4d2a50: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4d2a54:
    // 0x4d2a54: 0xc0e3658  jal         func_38D960
label_4d2a58:
    if (ctx->pc == 0x4D2A58u) {
        ctx->pc = 0x4D2A58u;
            // 0x4d2a58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4D2A5Cu;
        goto label_4d2a5c;
    }
    ctx->pc = 0x4D2A54u;
    SET_GPR_U32(ctx, 31, 0x4D2A5Cu);
    ctx->pc = 0x4D2A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2A54u;
            // 0x4d2a58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2A5Cu; }
        if (ctx->pc != 0x4D2A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2A5Cu; }
        if (ctx->pc != 0x4D2A5Cu) { return; }
    }
    ctx->pc = 0x4D2A5Cu;
label_4d2a5c:
    // 0x4d2a5c: 0x8e840074  lw          $a0, 0x74($s4)
    ctx->pc = 0x4d2a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4d2a60:
    // 0x4d2a60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d2a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d2a64:
    // 0x4d2a64: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x4d2a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_4d2a68:
    // 0x4d2a68: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x4d2a68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d2a6c:
    // 0x4d2a6c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d2a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d2a70:
    // 0x4d2a70: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
label_4d2a74:
    if (ctx->pc == 0x4D2A74u) {
        ctx->pc = 0x4D2A78u;
        goto label_4d2a78;
    }
    ctx->pc = 0x4D2A70u;
    {
        const bool branch_taken_0x4d2a70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4d2a70) {
            ctx->pc = 0x4D2AE8u;
            goto label_4d2ae8;
        }
    }
    ctx->pc = 0x4D2A78u;
label_4d2a78:
    // 0x4d2a78: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4d2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4d2a7c:
    // 0x4d2a7c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4d2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4d2a80:
    // 0x4d2a80: 0xc6010140  lwc1        $f1, 0x140($s0)
    ctx->pc = 0x4d2a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d2a84:
    // 0x4d2a84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4d2a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d2a88:
    // 0x4d2a88: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4d2a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d2a8c:
    // 0x4d2a8c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4d2a8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4d2a90:
    // 0x4d2a90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4d2a90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d2a94:
    // 0x4d2a94: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_4d2a98:
    if (ctx->pc == 0x4D2A98u) {
        ctx->pc = 0x4D2A98u;
            // 0x4d2a98: 0xe6010140  swc1        $f1, 0x140($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
        ctx->pc = 0x4D2A9Cu;
        goto label_4d2a9c;
    }
    ctx->pc = 0x4D2A94u;
    {
        const bool branch_taken_0x4d2a94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4D2A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2A94u;
            // 0x4d2a98: 0xe6010140  swc1        $f1, 0x140($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2a94) {
            ctx->pc = 0x4D2AE8u;
            goto label_4d2ae8;
        }
    }
    ctx->pc = 0x4D2A9Cu;
label_4d2a9c:
    // 0x4d2a9c: 0xc040180  jal         func_100600
label_4d2aa0:
    if (ctx->pc == 0x4D2AA0u) {
        ctx->pc = 0x4D2AA0u;
            // 0x4d2aa0: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x4D2AA4u;
        goto label_4d2aa4;
    }
    ctx->pc = 0x4D2A9Cu;
    SET_GPR_U32(ctx, 31, 0x4D2AA4u);
    ctx->pc = 0x4D2AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2A9Cu;
            // 0x4d2aa0: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2AA4u; }
        if (ctx->pc != 0x4D2AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2AA4u; }
        if (ctx->pc != 0x4D2AA4u) { return; }
    }
    ctx->pc = 0x4D2AA4u;
label_4d2aa4:
    // 0x4d2aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d2aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d2aa8:
    // 0x4d2aa8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_4d2aac:
    if (ctx->pc == 0x4D2AACu) {
        ctx->pc = 0x4D2AB0u;
        goto label_4d2ab0;
    }
    ctx->pc = 0x4D2AA8u;
    {
        const bool branch_taken_0x4d2aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2aa8) {
            ctx->pc = 0x4D2AE0u;
            goto label_4d2ae0;
        }
    }
    ctx->pc = 0x4D2AB0u;
label_4d2ab0:
    // 0x4d2ab0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d2ab4:
    // 0x4d2ab4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x4d2ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_4d2ab8:
    // 0x4d2ab8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4d2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4d2abc:
    // 0x4d2abc: 0x3465abd8  ori         $a1, $v1, 0xABD8
    ctx->pc = 0x4d2abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43992);
label_4d2ac0:
    // 0x4d2ac0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d2ac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d2ac4:
    // 0x4d2ac4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d2ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4d2ac8:
    // 0x4d2ac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d2ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d2acc:
    // 0x4d2acc: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x4d2accu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_4d2ad0:
    // 0x4d2ad0: 0x24470678  addiu       $a3, $v0, 0x678
    ctx->pc = 0x4d2ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1656));
label_4d2ad4:
    // 0x4d2ad4: 0x260a0100  addiu       $t2, $s0, 0x100
    ctx->pc = 0x4d2ad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_4d2ad8:
    // 0x4d2ad8: 0xc13d944  jal         func_4F6510
label_4d2adc:
    if (ctx->pc == 0x4D2ADCu) {
        ctx->pc = 0x4D2ADCu;
            // 0x4d2adc: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4D2AE0u;
        goto label_4d2ae0;
    }
    ctx->pc = 0x4D2AD8u;
    SET_GPR_U32(ctx, 31, 0x4D2AE0u);
    ctx->pc = 0x4D2ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2AD8u;
            // 0x4d2adc: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2AE0u; }
        if (ctx->pc != 0x4D2AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2AE0u; }
        if (ctx->pc != 0x4D2AE0u) { return; }
    }
    ctx->pc = 0x4D2AE0u;
label_4d2ae0:
    // 0x4d2ae0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4d2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4d2ae4:
    // 0x4d2ae4: 0xae030140  sw          $v1, 0x140($s0)
    ctx->pc = 0x4d2ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 3));
label_4d2ae8:
    // 0x4d2ae8: 0xc6020164  lwc1        $f2, 0x164($s0)
    ctx->pc = 0x4d2ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d2aec:
    // 0x4d2aec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4d2aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4d2af0:
    // 0x4d2af0: 0x0  nop
    ctx->pc = 0x4d2af0u;
    // NOP
label_4d2af4:
    // 0x4d2af4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4d2af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d2af8:
    // 0x4d2af8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_4d2afc:
    if (ctx->pc == 0x4D2AFCu) {
        ctx->pc = 0x4D2B00u;
        goto label_4d2b00;
    }
    ctx->pc = 0x4D2AF8u;
    {
        const bool branch_taken_0x4d2af8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d2af8) {
            ctx->pc = 0x4D2B20u;
            goto label_4d2b20;
        }
    }
    ctx->pc = 0x4D2B00u;
label_4d2b00:
    // 0x4d2b00: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4d2b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4d2b04:
    // 0x4d2b04: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4d2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4d2b08:
    // 0x4d2b08: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4d2b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d2b0c:
    // 0x4d2b0c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4d2b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4d2b10:
    // 0x4d2b10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4d2b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d2b14:
    // 0x4d2b14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4d2b18:
    if (ctx->pc == 0x4D2B18u) {
        ctx->pc = 0x4D2B18u;
            // 0x4d2b18: 0xe6000164  swc1        $f0, 0x164($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
        ctx->pc = 0x4D2B1Cu;
        goto label_4d2b1c;
    }
    ctx->pc = 0x4D2B14u;
    {
        const bool branch_taken_0x4d2b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4D2B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2B14u;
            // 0x4d2b18: 0xe6000164  swc1        $f0, 0x164($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2b14) {
            ctx->pc = 0x4D2B20u;
            goto label_4d2b20;
        }
    }
    ctx->pc = 0x4D2B1Cu;
label_4d2b1c:
    // 0x4d2b1c: 0xe6010164  swc1        $f1, 0x164($s0)
    ctx->pc = 0x4d2b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
label_4d2b20:
    // 0x4d2b20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4d2b20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4d2b24:
    // 0x4d2b24: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4d2b24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4d2b28:
    // 0x4d2b28: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_4d2b2c:
    if (ctx->pc == 0x4D2B2Cu) {
        ctx->pc = 0x4D2B2Cu;
            // 0x4d2b2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4D2B30u;
        goto label_4d2b30;
    }
    ctx->pc = 0x4D2B28u;
    {
        const bool branch_taken_0x4d2b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D2B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2B28u;
            // 0x4d2b2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2b28) {
            ctx->pc = 0x4D2A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d2a4c;
        }
    }
    ctx->pc = 0x4D2B30u;
label_4d2b30:
    // 0x4d2b30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4d2b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4d2b34:
    // 0x4d2b34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4d2b34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d2b38:
    // 0x4d2b38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d2b38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d2b3c:
    // 0x4d2b3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d2b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d2b40:
    // 0x4d2b40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d2b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d2b44:
    // 0x4d2b44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d2b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d2b48:
    // 0x4d2b48: 0x3e00008  jr          $ra
label_4d2b4c:
    if (ctx->pc == 0x4D2B4Cu) {
        ctx->pc = 0x4D2B4Cu;
            // 0x4d2b4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D2B50u;
        goto label_4d2b50;
    }
    ctx->pc = 0x4D2B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2B48u;
            // 0x4d2b4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2B50u;
label_4d2b50:
    // 0x4d2b50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d2b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d2b54:
    // 0x4d2b54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d2b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d2b58:
    // 0x4d2b58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d2b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d2b5c:
    // 0x4d2b5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d2b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d2b60:
    // 0x4d2b60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d2b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d2b64:
    // 0x4d2b64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d2b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d2b68:
    // 0x4d2b68: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4d2b68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d2b6c:
    // 0x4d2b6c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4d2b70:
    if (ctx->pc == 0x4D2B70u) {
        ctx->pc = 0x4D2B70u;
            // 0x4d2b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2B74u;
        goto label_4d2b74;
    }
    ctx->pc = 0x4D2B6Cu;
    {
        const bool branch_taken_0x4d2b6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2B6Cu;
            // 0x4d2b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2b6c) {
            ctx->pc = 0x4D2BA8u;
            goto label_4d2ba8;
        }
    }
    ctx->pc = 0x4D2B74u;
label_4d2b74:
    // 0x4d2b74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d2b74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d2b78:
    // 0x4d2b78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d2b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d2b7c:
    // 0x4d2b7c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4d2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4d2b80:
    // 0x4d2b80: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d2b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4d2b84:
    // 0x4d2b84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d2b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d2b88:
    // 0x4d2b88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d2b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d2b8c:
    // 0x4d2b8c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4d2b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4d2b90:
    // 0x4d2b90: 0x320f809  jalr        $t9
label_4d2b94:
    if (ctx->pc == 0x4D2B94u) {
        ctx->pc = 0x4D2B98u;
        goto label_4d2b98;
    }
    ctx->pc = 0x4D2B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D2B98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D2B98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D2B98u; }
            if (ctx->pc != 0x4D2B98u) { return; }
        }
        }
    }
    ctx->pc = 0x4D2B98u;
label_4d2b98:
    // 0x4d2b98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4d2b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4d2b9c:
    // 0x4d2b9c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4d2b9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4d2ba0:
    // 0x4d2ba0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4d2ba4:
    if (ctx->pc == 0x4D2BA4u) {
        ctx->pc = 0x4D2BA4u;
            // 0x4d2ba4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4D2BA8u;
        goto label_4d2ba8;
    }
    ctx->pc = 0x4D2BA0u;
    {
        const bool branch_taken_0x4d2ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D2BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2BA0u;
            // 0x4d2ba4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2ba0) {
            ctx->pc = 0x4D2B7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d2b7c;
        }
    }
    ctx->pc = 0x4D2BA8u;
label_4d2ba8:
    // 0x4d2ba8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d2ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d2bac:
    // 0x4d2bac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d2bacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d2bb0:
    // 0x4d2bb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d2bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d2bb4:
    // 0x4d2bb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d2bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d2bb8:
    // 0x4d2bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d2bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d2bbc:
    // 0x4d2bbc: 0x3e00008  jr          $ra
label_4d2bc0:
    if (ctx->pc == 0x4D2BC0u) {
        ctx->pc = 0x4D2BC0u;
            // 0x4d2bc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D2BC4u;
        goto label_4d2bc4;
    }
    ctx->pc = 0x4D2BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2BBCu;
            // 0x4d2bc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2BC4u;
label_4d2bc4:
    // 0x4d2bc4: 0x0  nop
    ctx->pc = 0x4d2bc4u;
    // NOP
label_4d2bc8:
    // 0x4d2bc8: 0x0  nop
    ctx->pc = 0x4d2bc8u;
    // NOP
label_4d2bcc:
    // 0x4d2bcc: 0x0  nop
    ctx->pc = 0x4d2bccu;
    // NOP
}
