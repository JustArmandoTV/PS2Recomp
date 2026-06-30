#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E26F0
// Address: 0x3e26f0 - 0x3e3080
void sub_003E26F0_0x3e26f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E26F0_0x3e26f0");
#endif

    switch (ctx->pc) {
        case 0x3e26f0u: goto label_3e26f0;
        case 0x3e26f4u: goto label_3e26f4;
        case 0x3e26f8u: goto label_3e26f8;
        case 0x3e26fcu: goto label_3e26fc;
        case 0x3e2700u: goto label_3e2700;
        case 0x3e2704u: goto label_3e2704;
        case 0x3e2708u: goto label_3e2708;
        case 0x3e270cu: goto label_3e270c;
        case 0x3e2710u: goto label_3e2710;
        case 0x3e2714u: goto label_3e2714;
        case 0x3e2718u: goto label_3e2718;
        case 0x3e271cu: goto label_3e271c;
        case 0x3e2720u: goto label_3e2720;
        case 0x3e2724u: goto label_3e2724;
        case 0x3e2728u: goto label_3e2728;
        case 0x3e272cu: goto label_3e272c;
        case 0x3e2730u: goto label_3e2730;
        case 0x3e2734u: goto label_3e2734;
        case 0x3e2738u: goto label_3e2738;
        case 0x3e273cu: goto label_3e273c;
        case 0x3e2740u: goto label_3e2740;
        case 0x3e2744u: goto label_3e2744;
        case 0x3e2748u: goto label_3e2748;
        case 0x3e274cu: goto label_3e274c;
        case 0x3e2750u: goto label_3e2750;
        case 0x3e2754u: goto label_3e2754;
        case 0x3e2758u: goto label_3e2758;
        case 0x3e275cu: goto label_3e275c;
        case 0x3e2760u: goto label_3e2760;
        case 0x3e2764u: goto label_3e2764;
        case 0x3e2768u: goto label_3e2768;
        case 0x3e276cu: goto label_3e276c;
        case 0x3e2770u: goto label_3e2770;
        case 0x3e2774u: goto label_3e2774;
        case 0x3e2778u: goto label_3e2778;
        case 0x3e277cu: goto label_3e277c;
        case 0x3e2780u: goto label_3e2780;
        case 0x3e2784u: goto label_3e2784;
        case 0x3e2788u: goto label_3e2788;
        case 0x3e278cu: goto label_3e278c;
        case 0x3e2790u: goto label_3e2790;
        case 0x3e2794u: goto label_3e2794;
        case 0x3e2798u: goto label_3e2798;
        case 0x3e279cu: goto label_3e279c;
        case 0x3e27a0u: goto label_3e27a0;
        case 0x3e27a4u: goto label_3e27a4;
        case 0x3e27a8u: goto label_3e27a8;
        case 0x3e27acu: goto label_3e27ac;
        case 0x3e27b0u: goto label_3e27b0;
        case 0x3e27b4u: goto label_3e27b4;
        case 0x3e27b8u: goto label_3e27b8;
        case 0x3e27bcu: goto label_3e27bc;
        case 0x3e27c0u: goto label_3e27c0;
        case 0x3e27c4u: goto label_3e27c4;
        case 0x3e27c8u: goto label_3e27c8;
        case 0x3e27ccu: goto label_3e27cc;
        case 0x3e27d0u: goto label_3e27d0;
        case 0x3e27d4u: goto label_3e27d4;
        case 0x3e27d8u: goto label_3e27d8;
        case 0x3e27dcu: goto label_3e27dc;
        case 0x3e27e0u: goto label_3e27e0;
        case 0x3e27e4u: goto label_3e27e4;
        case 0x3e27e8u: goto label_3e27e8;
        case 0x3e27ecu: goto label_3e27ec;
        case 0x3e27f0u: goto label_3e27f0;
        case 0x3e27f4u: goto label_3e27f4;
        case 0x3e27f8u: goto label_3e27f8;
        case 0x3e27fcu: goto label_3e27fc;
        case 0x3e2800u: goto label_3e2800;
        case 0x3e2804u: goto label_3e2804;
        case 0x3e2808u: goto label_3e2808;
        case 0x3e280cu: goto label_3e280c;
        case 0x3e2810u: goto label_3e2810;
        case 0x3e2814u: goto label_3e2814;
        case 0x3e2818u: goto label_3e2818;
        case 0x3e281cu: goto label_3e281c;
        case 0x3e2820u: goto label_3e2820;
        case 0x3e2824u: goto label_3e2824;
        case 0x3e2828u: goto label_3e2828;
        case 0x3e282cu: goto label_3e282c;
        case 0x3e2830u: goto label_3e2830;
        case 0x3e2834u: goto label_3e2834;
        case 0x3e2838u: goto label_3e2838;
        case 0x3e283cu: goto label_3e283c;
        case 0x3e2840u: goto label_3e2840;
        case 0x3e2844u: goto label_3e2844;
        case 0x3e2848u: goto label_3e2848;
        case 0x3e284cu: goto label_3e284c;
        case 0x3e2850u: goto label_3e2850;
        case 0x3e2854u: goto label_3e2854;
        case 0x3e2858u: goto label_3e2858;
        case 0x3e285cu: goto label_3e285c;
        case 0x3e2860u: goto label_3e2860;
        case 0x3e2864u: goto label_3e2864;
        case 0x3e2868u: goto label_3e2868;
        case 0x3e286cu: goto label_3e286c;
        case 0x3e2870u: goto label_3e2870;
        case 0x3e2874u: goto label_3e2874;
        case 0x3e2878u: goto label_3e2878;
        case 0x3e287cu: goto label_3e287c;
        case 0x3e2880u: goto label_3e2880;
        case 0x3e2884u: goto label_3e2884;
        case 0x3e2888u: goto label_3e2888;
        case 0x3e288cu: goto label_3e288c;
        case 0x3e2890u: goto label_3e2890;
        case 0x3e2894u: goto label_3e2894;
        case 0x3e2898u: goto label_3e2898;
        case 0x3e289cu: goto label_3e289c;
        case 0x3e28a0u: goto label_3e28a0;
        case 0x3e28a4u: goto label_3e28a4;
        case 0x3e28a8u: goto label_3e28a8;
        case 0x3e28acu: goto label_3e28ac;
        case 0x3e28b0u: goto label_3e28b0;
        case 0x3e28b4u: goto label_3e28b4;
        case 0x3e28b8u: goto label_3e28b8;
        case 0x3e28bcu: goto label_3e28bc;
        case 0x3e28c0u: goto label_3e28c0;
        case 0x3e28c4u: goto label_3e28c4;
        case 0x3e28c8u: goto label_3e28c8;
        case 0x3e28ccu: goto label_3e28cc;
        case 0x3e28d0u: goto label_3e28d0;
        case 0x3e28d4u: goto label_3e28d4;
        case 0x3e28d8u: goto label_3e28d8;
        case 0x3e28dcu: goto label_3e28dc;
        case 0x3e28e0u: goto label_3e28e0;
        case 0x3e28e4u: goto label_3e28e4;
        case 0x3e28e8u: goto label_3e28e8;
        case 0x3e28ecu: goto label_3e28ec;
        case 0x3e28f0u: goto label_3e28f0;
        case 0x3e28f4u: goto label_3e28f4;
        case 0x3e28f8u: goto label_3e28f8;
        case 0x3e28fcu: goto label_3e28fc;
        case 0x3e2900u: goto label_3e2900;
        case 0x3e2904u: goto label_3e2904;
        case 0x3e2908u: goto label_3e2908;
        case 0x3e290cu: goto label_3e290c;
        case 0x3e2910u: goto label_3e2910;
        case 0x3e2914u: goto label_3e2914;
        case 0x3e2918u: goto label_3e2918;
        case 0x3e291cu: goto label_3e291c;
        case 0x3e2920u: goto label_3e2920;
        case 0x3e2924u: goto label_3e2924;
        case 0x3e2928u: goto label_3e2928;
        case 0x3e292cu: goto label_3e292c;
        case 0x3e2930u: goto label_3e2930;
        case 0x3e2934u: goto label_3e2934;
        case 0x3e2938u: goto label_3e2938;
        case 0x3e293cu: goto label_3e293c;
        case 0x3e2940u: goto label_3e2940;
        case 0x3e2944u: goto label_3e2944;
        case 0x3e2948u: goto label_3e2948;
        case 0x3e294cu: goto label_3e294c;
        case 0x3e2950u: goto label_3e2950;
        case 0x3e2954u: goto label_3e2954;
        case 0x3e2958u: goto label_3e2958;
        case 0x3e295cu: goto label_3e295c;
        case 0x3e2960u: goto label_3e2960;
        case 0x3e2964u: goto label_3e2964;
        case 0x3e2968u: goto label_3e2968;
        case 0x3e296cu: goto label_3e296c;
        case 0x3e2970u: goto label_3e2970;
        case 0x3e2974u: goto label_3e2974;
        case 0x3e2978u: goto label_3e2978;
        case 0x3e297cu: goto label_3e297c;
        case 0x3e2980u: goto label_3e2980;
        case 0x3e2984u: goto label_3e2984;
        case 0x3e2988u: goto label_3e2988;
        case 0x3e298cu: goto label_3e298c;
        case 0x3e2990u: goto label_3e2990;
        case 0x3e2994u: goto label_3e2994;
        case 0x3e2998u: goto label_3e2998;
        case 0x3e299cu: goto label_3e299c;
        case 0x3e29a0u: goto label_3e29a0;
        case 0x3e29a4u: goto label_3e29a4;
        case 0x3e29a8u: goto label_3e29a8;
        case 0x3e29acu: goto label_3e29ac;
        case 0x3e29b0u: goto label_3e29b0;
        case 0x3e29b4u: goto label_3e29b4;
        case 0x3e29b8u: goto label_3e29b8;
        case 0x3e29bcu: goto label_3e29bc;
        case 0x3e29c0u: goto label_3e29c0;
        case 0x3e29c4u: goto label_3e29c4;
        case 0x3e29c8u: goto label_3e29c8;
        case 0x3e29ccu: goto label_3e29cc;
        case 0x3e29d0u: goto label_3e29d0;
        case 0x3e29d4u: goto label_3e29d4;
        case 0x3e29d8u: goto label_3e29d8;
        case 0x3e29dcu: goto label_3e29dc;
        case 0x3e29e0u: goto label_3e29e0;
        case 0x3e29e4u: goto label_3e29e4;
        case 0x3e29e8u: goto label_3e29e8;
        case 0x3e29ecu: goto label_3e29ec;
        case 0x3e29f0u: goto label_3e29f0;
        case 0x3e29f4u: goto label_3e29f4;
        case 0x3e29f8u: goto label_3e29f8;
        case 0x3e29fcu: goto label_3e29fc;
        case 0x3e2a00u: goto label_3e2a00;
        case 0x3e2a04u: goto label_3e2a04;
        case 0x3e2a08u: goto label_3e2a08;
        case 0x3e2a0cu: goto label_3e2a0c;
        case 0x3e2a10u: goto label_3e2a10;
        case 0x3e2a14u: goto label_3e2a14;
        case 0x3e2a18u: goto label_3e2a18;
        case 0x3e2a1cu: goto label_3e2a1c;
        case 0x3e2a20u: goto label_3e2a20;
        case 0x3e2a24u: goto label_3e2a24;
        case 0x3e2a28u: goto label_3e2a28;
        case 0x3e2a2cu: goto label_3e2a2c;
        case 0x3e2a30u: goto label_3e2a30;
        case 0x3e2a34u: goto label_3e2a34;
        case 0x3e2a38u: goto label_3e2a38;
        case 0x3e2a3cu: goto label_3e2a3c;
        case 0x3e2a40u: goto label_3e2a40;
        case 0x3e2a44u: goto label_3e2a44;
        case 0x3e2a48u: goto label_3e2a48;
        case 0x3e2a4cu: goto label_3e2a4c;
        case 0x3e2a50u: goto label_3e2a50;
        case 0x3e2a54u: goto label_3e2a54;
        case 0x3e2a58u: goto label_3e2a58;
        case 0x3e2a5cu: goto label_3e2a5c;
        case 0x3e2a60u: goto label_3e2a60;
        case 0x3e2a64u: goto label_3e2a64;
        case 0x3e2a68u: goto label_3e2a68;
        case 0x3e2a6cu: goto label_3e2a6c;
        case 0x3e2a70u: goto label_3e2a70;
        case 0x3e2a74u: goto label_3e2a74;
        case 0x3e2a78u: goto label_3e2a78;
        case 0x3e2a7cu: goto label_3e2a7c;
        case 0x3e2a80u: goto label_3e2a80;
        case 0x3e2a84u: goto label_3e2a84;
        case 0x3e2a88u: goto label_3e2a88;
        case 0x3e2a8cu: goto label_3e2a8c;
        case 0x3e2a90u: goto label_3e2a90;
        case 0x3e2a94u: goto label_3e2a94;
        case 0x3e2a98u: goto label_3e2a98;
        case 0x3e2a9cu: goto label_3e2a9c;
        case 0x3e2aa0u: goto label_3e2aa0;
        case 0x3e2aa4u: goto label_3e2aa4;
        case 0x3e2aa8u: goto label_3e2aa8;
        case 0x3e2aacu: goto label_3e2aac;
        case 0x3e2ab0u: goto label_3e2ab0;
        case 0x3e2ab4u: goto label_3e2ab4;
        case 0x3e2ab8u: goto label_3e2ab8;
        case 0x3e2abcu: goto label_3e2abc;
        case 0x3e2ac0u: goto label_3e2ac0;
        case 0x3e2ac4u: goto label_3e2ac4;
        case 0x3e2ac8u: goto label_3e2ac8;
        case 0x3e2accu: goto label_3e2acc;
        case 0x3e2ad0u: goto label_3e2ad0;
        case 0x3e2ad4u: goto label_3e2ad4;
        case 0x3e2ad8u: goto label_3e2ad8;
        case 0x3e2adcu: goto label_3e2adc;
        case 0x3e2ae0u: goto label_3e2ae0;
        case 0x3e2ae4u: goto label_3e2ae4;
        case 0x3e2ae8u: goto label_3e2ae8;
        case 0x3e2aecu: goto label_3e2aec;
        case 0x3e2af0u: goto label_3e2af0;
        case 0x3e2af4u: goto label_3e2af4;
        case 0x3e2af8u: goto label_3e2af8;
        case 0x3e2afcu: goto label_3e2afc;
        case 0x3e2b00u: goto label_3e2b00;
        case 0x3e2b04u: goto label_3e2b04;
        case 0x3e2b08u: goto label_3e2b08;
        case 0x3e2b0cu: goto label_3e2b0c;
        case 0x3e2b10u: goto label_3e2b10;
        case 0x3e2b14u: goto label_3e2b14;
        case 0x3e2b18u: goto label_3e2b18;
        case 0x3e2b1cu: goto label_3e2b1c;
        case 0x3e2b20u: goto label_3e2b20;
        case 0x3e2b24u: goto label_3e2b24;
        case 0x3e2b28u: goto label_3e2b28;
        case 0x3e2b2cu: goto label_3e2b2c;
        case 0x3e2b30u: goto label_3e2b30;
        case 0x3e2b34u: goto label_3e2b34;
        case 0x3e2b38u: goto label_3e2b38;
        case 0x3e2b3cu: goto label_3e2b3c;
        case 0x3e2b40u: goto label_3e2b40;
        case 0x3e2b44u: goto label_3e2b44;
        case 0x3e2b48u: goto label_3e2b48;
        case 0x3e2b4cu: goto label_3e2b4c;
        case 0x3e2b50u: goto label_3e2b50;
        case 0x3e2b54u: goto label_3e2b54;
        case 0x3e2b58u: goto label_3e2b58;
        case 0x3e2b5cu: goto label_3e2b5c;
        case 0x3e2b60u: goto label_3e2b60;
        case 0x3e2b64u: goto label_3e2b64;
        case 0x3e2b68u: goto label_3e2b68;
        case 0x3e2b6cu: goto label_3e2b6c;
        case 0x3e2b70u: goto label_3e2b70;
        case 0x3e2b74u: goto label_3e2b74;
        case 0x3e2b78u: goto label_3e2b78;
        case 0x3e2b7cu: goto label_3e2b7c;
        case 0x3e2b80u: goto label_3e2b80;
        case 0x3e2b84u: goto label_3e2b84;
        case 0x3e2b88u: goto label_3e2b88;
        case 0x3e2b8cu: goto label_3e2b8c;
        case 0x3e2b90u: goto label_3e2b90;
        case 0x3e2b94u: goto label_3e2b94;
        case 0x3e2b98u: goto label_3e2b98;
        case 0x3e2b9cu: goto label_3e2b9c;
        case 0x3e2ba0u: goto label_3e2ba0;
        case 0x3e2ba4u: goto label_3e2ba4;
        case 0x3e2ba8u: goto label_3e2ba8;
        case 0x3e2bacu: goto label_3e2bac;
        case 0x3e2bb0u: goto label_3e2bb0;
        case 0x3e2bb4u: goto label_3e2bb4;
        case 0x3e2bb8u: goto label_3e2bb8;
        case 0x3e2bbcu: goto label_3e2bbc;
        case 0x3e2bc0u: goto label_3e2bc0;
        case 0x3e2bc4u: goto label_3e2bc4;
        case 0x3e2bc8u: goto label_3e2bc8;
        case 0x3e2bccu: goto label_3e2bcc;
        case 0x3e2bd0u: goto label_3e2bd0;
        case 0x3e2bd4u: goto label_3e2bd4;
        case 0x3e2bd8u: goto label_3e2bd8;
        case 0x3e2bdcu: goto label_3e2bdc;
        case 0x3e2be0u: goto label_3e2be0;
        case 0x3e2be4u: goto label_3e2be4;
        case 0x3e2be8u: goto label_3e2be8;
        case 0x3e2becu: goto label_3e2bec;
        case 0x3e2bf0u: goto label_3e2bf0;
        case 0x3e2bf4u: goto label_3e2bf4;
        case 0x3e2bf8u: goto label_3e2bf8;
        case 0x3e2bfcu: goto label_3e2bfc;
        case 0x3e2c00u: goto label_3e2c00;
        case 0x3e2c04u: goto label_3e2c04;
        case 0x3e2c08u: goto label_3e2c08;
        case 0x3e2c0cu: goto label_3e2c0c;
        case 0x3e2c10u: goto label_3e2c10;
        case 0x3e2c14u: goto label_3e2c14;
        case 0x3e2c18u: goto label_3e2c18;
        case 0x3e2c1cu: goto label_3e2c1c;
        case 0x3e2c20u: goto label_3e2c20;
        case 0x3e2c24u: goto label_3e2c24;
        case 0x3e2c28u: goto label_3e2c28;
        case 0x3e2c2cu: goto label_3e2c2c;
        case 0x3e2c30u: goto label_3e2c30;
        case 0x3e2c34u: goto label_3e2c34;
        case 0x3e2c38u: goto label_3e2c38;
        case 0x3e2c3cu: goto label_3e2c3c;
        case 0x3e2c40u: goto label_3e2c40;
        case 0x3e2c44u: goto label_3e2c44;
        case 0x3e2c48u: goto label_3e2c48;
        case 0x3e2c4cu: goto label_3e2c4c;
        case 0x3e2c50u: goto label_3e2c50;
        case 0x3e2c54u: goto label_3e2c54;
        case 0x3e2c58u: goto label_3e2c58;
        case 0x3e2c5cu: goto label_3e2c5c;
        case 0x3e2c60u: goto label_3e2c60;
        case 0x3e2c64u: goto label_3e2c64;
        case 0x3e2c68u: goto label_3e2c68;
        case 0x3e2c6cu: goto label_3e2c6c;
        case 0x3e2c70u: goto label_3e2c70;
        case 0x3e2c74u: goto label_3e2c74;
        case 0x3e2c78u: goto label_3e2c78;
        case 0x3e2c7cu: goto label_3e2c7c;
        case 0x3e2c80u: goto label_3e2c80;
        case 0x3e2c84u: goto label_3e2c84;
        case 0x3e2c88u: goto label_3e2c88;
        case 0x3e2c8cu: goto label_3e2c8c;
        case 0x3e2c90u: goto label_3e2c90;
        case 0x3e2c94u: goto label_3e2c94;
        case 0x3e2c98u: goto label_3e2c98;
        case 0x3e2c9cu: goto label_3e2c9c;
        case 0x3e2ca0u: goto label_3e2ca0;
        case 0x3e2ca4u: goto label_3e2ca4;
        case 0x3e2ca8u: goto label_3e2ca8;
        case 0x3e2cacu: goto label_3e2cac;
        case 0x3e2cb0u: goto label_3e2cb0;
        case 0x3e2cb4u: goto label_3e2cb4;
        case 0x3e2cb8u: goto label_3e2cb8;
        case 0x3e2cbcu: goto label_3e2cbc;
        case 0x3e2cc0u: goto label_3e2cc0;
        case 0x3e2cc4u: goto label_3e2cc4;
        case 0x3e2cc8u: goto label_3e2cc8;
        case 0x3e2cccu: goto label_3e2ccc;
        case 0x3e2cd0u: goto label_3e2cd0;
        case 0x3e2cd4u: goto label_3e2cd4;
        case 0x3e2cd8u: goto label_3e2cd8;
        case 0x3e2cdcu: goto label_3e2cdc;
        case 0x3e2ce0u: goto label_3e2ce0;
        case 0x3e2ce4u: goto label_3e2ce4;
        case 0x3e2ce8u: goto label_3e2ce8;
        case 0x3e2cecu: goto label_3e2cec;
        case 0x3e2cf0u: goto label_3e2cf0;
        case 0x3e2cf4u: goto label_3e2cf4;
        case 0x3e2cf8u: goto label_3e2cf8;
        case 0x3e2cfcu: goto label_3e2cfc;
        case 0x3e2d00u: goto label_3e2d00;
        case 0x3e2d04u: goto label_3e2d04;
        case 0x3e2d08u: goto label_3e2d08;
        case 0x3e2d0cu: goto label_3e2d0c;
        case 0x3e2d10u: goto label_3e2d10;
        case 0x3e2d14u: goto label_3e2d14;
        case 0x3e2d18u: goto label_3e2d18;
        case 0x3e2d1cu: goto label_3e2d1c;
        case 0x3e2d20u: goto label_3e2d20;
        case 0x3e2d24u: goto label_3e2d24;
        case 0x3e2d28u: goto label_3e2d28;
        case 0x3e2d2cu: goto label_3e2d2c;
        case 0x3e2d30u: goto label_3e2d30;
        case 0x3e2d34u: goto label_3e2d34;
        case 0x3e2d38u: goto label_3e2d38;
        case 0x3e2d3cu: goto label_3e2d3c;
        case 0x3e2d40u: goto label_3e2d40;
        case 0x3e2d44u: goto label_3e2d44;
        case 0x3e2d48u: goto label_3e2d48;
        case 0x3e2d4cu: goto label_3e2d4c;
        case 0x3e2d50u: goto label_3e2d50;
        case 0x3e2d54u: goto label_3e2d54;
        case 0x3e2d58u: goto label_3e2d58;
        case 0x3e2d5cu: goto label_3e2d5c;
        case 0x3e2d60u: goto label_3e2d60;
        case 0x3e2d64u: goto label_3e2d64;
        case 0x3e2d68u: goto label_3e2d68;
        case 0x3e2d6cu: goto label_3e2d6c;
        case 0x3e2d70u: goto label_3e2d70;
        case 0x3e2d74u: goto label_3e2d74;
        case 0x3e2d78u: goto label_3e2d78;
        case 0x3e2d7cu: goto label_3e2d7c;
        case 0x3e2d80u: goto label_3e2d80;
        case 0x3e2d84u: goto label_3e2d84;
        case 0x3e2d88u: goto label_3e2d88;
        case 0x3e2d8cu: goto label_3e2d8c;
        case 0x3e2d90u: goto label_3e2d90;
        case 0x3e2d94u: goto label_3e2d94;
        case 0x3e2d98u: goto label_3e2d98;
        case 0x3e2d9cu: goto label_3e2d9c;
        case 0x3e2da0u: goto label_3e2da0;
        case 0x3e2da4u: goto label_3e2da4;
        case 0x3e2da8u: goto label_3e2da8;
        case 0x3e2dacu: goto label_3e2dac;
        case 0x3e2db0u: goto label_3e2db0;
        case 0x3e2db4u: goto label_3e2db4;
        case 0x3e2db8u: goto label_3e2db8;
        case 0x3e2dbcu: goto label_3e2dbc;
        case 0x3e2dc0u: goto label_3e2dc0;
        case 0x3e2dc4u: goto label_3e2dc4;
        case 0x3e2dc8u: goto label_3e2dc8;
        case 0x3e2dccu: goto label_3e2dcc;
        case 0x3e2dd0u: goto label_3e2dd0;
        case 0x3e2dd4u: goto label_3e2dd4;
        case 0x3e2dd8u: goto label_3e2dd8;
        case 0x3e2ddcu: goto label_3e2ddc;
        case 0x3e2de0u: goto label_3e2de0;
        case 0x3e2de4u: goto label_3e2de4;
        case 0x3e2de8u: goto label_3e2de8;
        case 0x3e2decu: goto label_3e2dec;
        case 0x3e2df0u: goto label_3e2df0;
        case 0x3e2df4u: goto label_3e2df4;
        case 0x3e2df8u: goto label_3e2df8;
        case 0x3e2dfcu: goto label_3e2dfc;
        case 0x3e2e00u: goto label_3e2e00;
        case 0x3e2e04u: goto label_3e2e04;
        case 0x3e2e08u: goto label_3e2e08;
        case 0x3e2e0cu: goto label_3e2e0c;
        case 0x3e2e10u: goto label_3e2e10;
        case 0x3e2e14u: goto label_3e2e14;
        case 0x3e2e18u: goto label_3e2e18;
        case 0x3e2e1cu: goto label_3e2e1c;
        case 0x3e2e20u: goto label_3e2e20;
        case 0x3e2e24u: goto label_3e2e24;
        case 0x3e2e28u: goto label_3e2e28;
        case 0x3e2e2cu: goto label_3e2e2c;
        case 0x3e2e30u: goto label_3e2e30;
        case 0x3e2e34u: goto label_3e2e34;
        case 0x3e2e38u: goto label_3e2e38;
        case 0x3e2e3cu: goto label_3e2e3c;
        case 0x3e2e40u: goto label_3e2e40;
        case 0x3e2e44u: goto label_3e2e44;
        case 0x3e2e48u: goto label_3e2e48;
        case 0x3e2e4cu: goto label_3e2e4c;
        case 0x3e2e50u: goto label_3e2e50;
        case 0x3e2e54u: goto label_3e2e54;
        case 0x3e2e58u: goto label_3e2e58;
        case 0x3e2e5cu: goto label_3e2e5c;
        case 0x3e2e60u: goto label_3e2e60;
        case 0x3e2e64u: goto label_3e2e64;
        case 0x3e2e68u: goto label_3e2e68;
        case 0x3e2e6cu: goto label_3e2e6c;
        case 0x3e2e70u: goto label_3e2e70;
        case 0x3e2e74u: goto label_3e2e74;
        case 0x3e2e78u: goto label_3e2e78;
        case 0x3e2e7cu: goto label_3e2e7c;
        case 0x3e2e80u: goto label_3e2e80;
        case 0x3e2e84u: goto label_3e2e84;
        case 0x3e2e88u: goto label_3e2e88;
        case 0x3e2e8cu: goto label_3e2e8c;
        case 0x3e2e90u: goto label_3e2e90;
        case 0x3e2e94u: goto label_3e2e94;
        case 0x3e2e98u: goto label_3e2e98;
        case 0x3e2e9cu: goto label_3e2e9c;
        case 0x3e2ea0u: goto label_3e2ea0;
        case 0x3e2ea4u: goto label_3e2ea4;
        case 0x3e2ea8u: goto label_3e2ea8;
        case 0x3e2eacu: goto label_3e2eac;
        case 0x3e2eb0u: goto label_3e2eb0;
        case 0x3e2eb4u: goto label_3e2eb4;
        case 0x3e2eb8u: goto label_3e2eb8;
        case 0x3e2ebcu: goto label_3e2ebc;
        case 0x3e2ec0u: goto label_3e2ec0;
        case 0x3e2ec4u: goto label_3e2ec4;
        case 0x3e2ec8u: goto label_3e2ec8;
        case 0x3e2eccu: goto label_3e2ecc;
        case 0x3e2ed0u: goto label_3e2ed0;
        case 0x3e2ed4u: goto label_3e2ed4;
        case 0x3e2ed8u: goto label_3e2ed8;
        case 0x3e2edcu: goto label_3e2edc;
        case 0x3e2ee0u: goto label_3e2ee0;
        case 0x3e2ee4u: goto label_3e2ee4;
        case 0x3e2ee8u: goto label_3e2ee8;
        case 0x3e2eecu: goto label_3e2eec;
        case 0x3e2ef0u: goto label_3e2ef0;
        case 0x3e2ef4u: goto label_3e2ef4;
        case 0x3e2ef8u: goto label_3e2ef8;
        case 0x3e2efcu: goto label_3e2efc;
        case 0x3e2f00u: goto label_3e2f00;
        case 0x3e2f04u: goto label_3e2f04;
        case 0x3e2f08u: goto label_3e2f08;
        case 0x3e2f0cu: goto label_3e2f0c;
        case 0x3e2f10u: goto label_3e2f10;
        case 0x3e2f14u: goto label_3e2f14;
        case 0x3e2f18u: goto label_3e2f18;
        case 0x3e2f1cu: goto label_3e2f1c;
        case 0x3e2f20u: goto label_3e2f20;
        case 0x3e2f24u: goto label_3e2f24;
        case 0x3e2f28u: goto label_3e2f28;
        case 0x3e2f2cu: goto label_3e2f2c;
        case 0x3e2f30u: goto label_3e2f30;
        case 0x3e2f34u: goto label_3e2f34;
        case 0x3e2f38u: goto label_3e2f38;
        case 0x3e2f3cu: goto label_3e2f3c;
        case 0x3e2f40u: goto label_3e2f40;
        case 0x3e2f44u: goto label_3e2f44;
        case 0x3e2f48u: goto label_3e2f48;
        case 0x3e2f4cu: goto label_3e2f4c;
        case 0x3e2f50u: goto label_3e2f50;
        case 0x3e2f54u: goto label_3e2f54;
        case 0x3e2f58u: goto label_3e2f58;
        case 0x3e2f5cu: goto label_3e2f5c;
        case 0x3e2f60u: goto label_3e2f60;
        case 0x3e2f64u: goto label_3e2f64;
        case 0x3e2f68u: goto label_3e2f68;
        case 0x3e2f6cu: goto label_3e2f6c;
        case 0x3e2f70u: goto label_3e2f70;
        case 0x3e2f74u: goto label_3e2f74;
        case 0x3e2f78u: goto label_3e2f78;
        case 0x3e2f7cu: goto label_3e2f7c;
        case 0x3e2f80u: goto label_3e2f80;
        case 0x3e2f84u: goto label_3e2f84;
        case 0x3e2f88u: goto label_3e2f88;
        case 0x3e2f8cu: goto label_3e2f8c;
        case 0x3e2f90u: goto label_3e2f90;
        case 0x3e2f94u: goto label_3e2f94;
        case 0x3e2f98u: goto label_3e2f98;
        case 0x3e2f9cu: goto label_3e2f9c;
        case 0x3e2fa0u: goto label_3e2fa0;
        case 0x3e2fa4u: goto label_3e2fa4;
        case 0x3e2fa8u: goto label_3e2fa8;
        case 0x3e2facu: goto label_3e2fac;
        case 0x3e2fb0u: goto label_3e2fb0;
        case 0x3e2fb4u: goto label_3e2fb4;
        case 0x3e2fb8u: goto label_3e2fb8;
        case 0x3e2fbcu: goto label_3e2fbc;
        case 0x3e2fc0u: goto label_3e2fc0;
        case 0x3e2fc4u: goto label_3e2fc4;
        case 0x3e2fc8u: goto label_3e2fc8;
        case 0x3e2fccu: goto label_3e2fcc;
        case 0x3e2fd0u: goto label_3e2fd0;
        case 0x3e2fd4u: goto label_3e2fd4;
        case 0x3e2fd8u: goto label_3e2fd8;
        case 0x3e2fdcu: goto label_3e2fdc;
        case 0x3e2fe0u: goto label_3e2fe0;
        case 0x3e2fe4u: goto label_3e2fe4;
        case 0x3e2fe8u: goto label_3e2fe8;
        case 0x3e2fecu: goto label_3e2fec;
        case 0x3e2ff0u: goto label_3e2ff0;
        case 0x3e2ff4u: goto label_3e2ff4;
        case 0x3e2ff8u: goto label_3e2ff8;
        case 0x3e2ffcu: goto label_3e2ffc;
        case 0x3e3000u: goto label_3e3000;
        case 0x3e3004u: goto label_3e3004;
        case 0x3e3008u: goto label_3e3008;
        case 0x3e300cu: goto label_3e300c;
        case 0x3e3010u: goto label_3e3010;
        case 0x3e3014u: goto label_3e3014;
        case 0x3e3018u: goto label_3e3018;
        case 0x3e301cu: goto label_3e301c;
        case 0x3e3020u: goto label_3e3020;
        case 0x3e3024u: goto label_3e3024;
        case 0x3e3028u: goto label_3e3028;
        case 0x3e302cu: goto label_3e302c;
        case 0x3e3030u: goto label_3e3030;
        case 0x3e3034u: goto label_3e3034;
        case 0x3e3038u: goto label_3e3038;
        case 0x3e303cu: goto label_3e303c;
        case 0x3e3040u: goto label_3e3040;
        case 0x3e3044u: goto label_3e3044;
        case 0x3e3048u: goto label_3e3048;
        case 0x3e304cu: goto label_3e304c;
        case 0x3e3050u: goto label_3e3050;
        case 0x3e3054u: goto label_3e3054;
        case 0x3e3058u: goto label_3e3058;
        case 0x3e305cu: goto label_3e305c;
        case 0x3e3060u: goto label_3e3060;
        case 0x3e3064u: goto label_3e3064;
        case 0x3e3068u: goto label_3e3068;
        case 0x3e306cu: goto label_3e306c;
        case 0x3e3070u: goto label_3e3070;
        case 0x3e3074u: goto label_3e3074;
        case 0x3e3078u: goto label_3e3078;
        case 0x3e307cu: goto label_3e307c;
        default: break;
    }

    ctx->pc = 0x3e26f0u;

label_3e26f0:
    // 0x3e26f0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x3e26f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_3e26f4:
    // 0x3e26f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e26f8:
    // 0x3e26f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e26f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3e26fc:
    // 0x3e26fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e26fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2700:
    // 0x3e2700: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e2700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e2704:
    // 0x3e2704: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e2704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e2708:
    // 0x3e2708: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e2708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e270c:
    // 0x3e270c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e2710:
    // 0x3e2710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e2710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e2714:
    // 0x3e2714: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e2714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e2718:
    // 0x3e2718: 0xc4800284  lwc1        $f0, 0x284($a0)
    ctx->pc = 0x3e2718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e271c:
    // 0x3e271c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3e271cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e2720:
    // 0x3e2720: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3e2720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3e2724:
    // 0x3e2724: 0xe4810284  swc1        $f1, 0x284($a0)
    ctx->pc = 0x3e2724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 644), bits); }
label_3e2728:
    // 0x3e2728: 0xc4800288  lwc1        $f0, 0x288($a0)
    ctx->pc = 0x3e2728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e272c:
    // 0x3e272c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e272cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e2730:
    // 0x3e2730: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3e2734:
    if (ctx->pc == 0x3E2734u) {
        ctx->pc = 0x3E2734u;
            // 0x3e2734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E2738u;
        goto label_3e2738;
    }
    ctx->pc = 0x3E2730u;
    {
        const bool branch_taken_0x3e2730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2730u;
            // 0x3e2734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2730) {
            ctx->pc = 0x3E273Cu;
            goto label_3e273c;
        }
    }
    ctx->pc = 0x3E2738u;
label_3e2738:
    // 0x3e2738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e2738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e273c:
    // 0x3e273c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x3e273cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3e2740:
    // 0x3e2740: 0x6182b  sltu        $v1, $zero, $a2
    ctx->pc = 0x3e2740u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3e2744:
    // 0x3e2744: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3e2744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3e2748:
    // 0x3e2748: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3e274c:
    if (ctx->pc == 0x3E274Cu) {
        ctx->pc = 0x3E274Cu;
            // 0x3e274c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3E2750u;
        goto label_3e2750;
    }
    ctx->pc = 0x3E2748u;
    {
        const bool branch_taken_0x3e2748 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e2748) {
            ctx->pc = 0x3E274Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2748u;
            // 0x3e274c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E275Cu;
            goto label_3e275c;
        }
    }
    ctx->pc = 0x3E2750u;
label_3e2750:
    // 0x3e2750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e2750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e2754:
    // 0x3e2754: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e2758:
    if (ctx->pc == 0x3E2758u) {
        ctx->pc = 0x3E2758u;
            // 0x3e2758: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3E275Cu;
        goto label_3e275c;
    }
    ctx->pc = 0x3E2754u;
    {
        const bool branch_taken_0x3e2754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2754u;
            // 0x3e2758: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2754) {
            ctx->pc = 0x3E2774u;
            goto label_3e2774;
        }
    }
    ctx->pc = 0x3E275Cu;
label_3e275c:
    // 0x3e275c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3e275cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3e2760:
    // 0x3e2760: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e2760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3e2764:
    // 0x3e2764: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e2764u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e2768:
    // 0x3e2768: 0x0  nop
    ctx->pc = 0x3e2768u;
    // NOP
label_3e276c:
    // 0x3e276c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e276cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3e2770:
    // 0x3e2770: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e2770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e2774:
    // 0x3e2774: 0xc6000284  lwc1        $f0, 0x284($s0)
    ctx->pc = 0x3e2774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e2778:
    // 0x3e2778: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e2778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e277c:
    // 0x3e277c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e277cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e2780:
    // 0x3e2780: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x3e2780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_3e2784:
    // 0x3e2784: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x3e2784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3e2788:
    // 0x3e2788: 0x10a301d2  beq         $a1, $v1, . + 4 + (0x1D2 << 2)
label_3e278c:
    if (ctx->pc == 0x3E278Cu) {
        ctx->pc = 0x3E2790u;
        goto label_3e2790;
    }
    ctx->pc = 0x3E2788u;
    {
        const bool branch_taken_0x3e2788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e2788) {
            ctx->pc = 0x3E2ED4u;
            goto label_3e2ed4;
        }
    }
    ctx->pc = 0x3E2790u;
label_3e2790:
    // 0x3e2790: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3e2790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e2794:
    // 0x3e2794: 0x10a4016a  beq         $a1, $a0, . + 4 + (0x16A << 2)
label_3e2798:
    if (ctx->pc == 0x3E2798u) {
        ctx->pc = 0x3E279Cu;
        goto label_3e279c;
    }
    ctx->pc = 0x3E2794u;
    {
        const bool branch_taken_0x3e2794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e2794) {
            ctx->pc = 0x3E2D40u;
            goto label_3e2d40;
        }
    }
    ctx->pc = 0x3E279Cu;
label_3e279c:
    // 0x3e279c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e27a0:
    // 0x3e27a0: 0x10a30110  beq         $a1, $v1, . + 4 + (0x110 << 2)
label_3e27a4:
    if (ctx->pc == 0x3E27A4u) {
        ctx->pc = 0x3E27A8u;
        goto label_3e27a8;
    }
    ctx->pc = 0x3E27A0u;
    {
        const bool branch_taken_0x3e27a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e27a0) {
            ctx->pc = 0x3E2BE4u;
            goto label_3e2be4;
        }
    }
    ctx->pc = 0x3E27A8u;
label_3e27a8:
    // 0x3e27a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_3e27ac:
    if (ctx->pc == 0x3E27ACu) {
        ctx->pc = 0x3E27B0u;
        goto label_3e27b0;
    }
    ctx->pc = 0x3E27A8u;
    {
        const bool branch_taken_0x3e27a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e27a8) {
            ctx->pc = 0x3E27B8u;
            goto label_3e27b8;
        }
    }
    ctx->pc = 0x3E27B0u;
label_3e27b0:
    // 0x3e27b0: 0x10000229  b           . + 4 + (0x229 << 2)
label_3e27b4:
    if (ctx->pc == 0x3E27B4u) {
        ctx->pc = 0x3E27B4u;
            // 0x3e27b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3E27B8u;
        goto label_3e27b8;
    }
    ctx->pc = 0x3E27B0u;
    {
        const bool branch_taken_0x3e27b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E27B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E27B0u;
            // 0x3e27b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e27b0) {
            ctx->pc = 0x3E3058u;
            goto label_3e3058;
        }
    }
    ctx->pc = 0x3E27B8u;
label_3e27b8:
    // 0x3e27b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e27bc:
    // 0x3e27bc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3e27bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3e27c0:
    // 0x3e27c0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3e27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e27c4:
    // 0x3e27c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e27c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e27c8:
    // 0x3e27c8: 0x24840e80  addiu       $a0, $a0, 0xE80
    ctx->pc = 0x3e27c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
label_3e27cc:
    // 0x3e27cc: 0x8c43077c  lw          $v1, 0x77C($v0)
    ctx->pc = 0x3e27ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_3e27d0:
    // 0x3e27d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3e27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3e27d4:
    // 0x3e27d4: 0x80420e3f  lb          $v0, 0xE3F($v0)
    ctx->pc = 0x3e27d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3647)));
label_3e27d8:
    // 0x3e27d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e27dc:
    if (ctx->pc == 0x3E27DCu) {
        ctx->pc = 0x3E27E0u;
        goto label_3e27e0;
    }
    ctx->pc = 0x3E27D8u;
    {
        const bool branch_taken_0x3e27d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e27d8) {
            ctx->pc = 0x3E27F0u;
            goto label_3e27f0;
        }
    }
    ctx->pc = 0x3E27E0u;
label_3e27e0:
    // 0x3e27e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e27e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3e27e4:
    // 0x3e27e4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3e27e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e27e8:
    // 0x3e27e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_3e27ec:
    if (ctx->pc == 0x3E27ECu) {
        ctx->pc = 0x3E27ECu;
            // 0x3e27ec: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3E27F0u;
        goto label_3e27f0;
    }
    ctx->pc = 0x3E27E8u;
    {
        const bool branch_taken_0x3e27e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E27ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E27E8u;
            // 0x3e27ec: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e27e8) {
            ctx->pc = 0x3E27D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e27d0;
        }
    }
    ctx->pc = 0x3E27F0u;
label_3e27f0:
    // 0x3e27f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e27f4:
    // 0x3e27f4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3e27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3e27f8:
    // 0x3e27f8: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x3e27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_3e27fc:
    // 0x3e27fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e2800:
    // 0x3e2800: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3e2800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3e2804:
    // 0x3e2804: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3e2804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e2808:
    // 0x3e2808: 0xc04cc1c  jal         func_133070
label_3e280c:
    if (ctx->pc == 0x3E280Cu) {
        ctx->pc = 0x3E280Cu;
            // 0x3e280c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x3E2810u;
        goto label_3e2810;
    }
    ctx->pc = 0x3E2808u;
    SET_GPR_U32(ctx, 31, 0x3E2810u);
    ctx->pc = 0x3E280Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2808u;
            // 0x3e280c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2810u; }
        if (ctx->pc != 0x3E2810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2810u; }
        if (ctx->pc != 0x3E2810u) { return; }
    }
    ctx->pc = 0x3E2810u;
label_3e2810:
    // 0x3e2810: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3e2810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3e2814:
    // 0x3e2814: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e2814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e2818:
    // 0x3e2818: 0x0  nop
    ctx->pc = 0x3e2818u;
    // NOP
label_3e281c:
    // 0x3e281c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3e281cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e2820:
    // 0x3e2820: 0x450200c5  bc1fl       . + 4 + (0xC5 << 2)
label_3e2824:
    if (ctx->pc == 0x3E2824u) {
        ctx->pc = 0x3E2824u;
            // 0x3e2824: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x3E2828u;
        goto label_3e2828;
    }
    ctx->pc = 0x3E2820u;
    {
        const bool branch_taken_0x3e2820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e2820) {
            ctx->pc = 0x3E2824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2820u;
            // 0x3e2824: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E2B38u;
            goto label_3e2b38;
        }
    }
    ctx->pc = 0x3E2828u;
label_3e2828:
    // 0x3e2828: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e282c:
    // 0x3e282c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e282cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e2830:
    // 0x3e2830: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x3e2830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3e2834:
    // 0x3e2834: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e2834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e2838:
    // 0x3e2838: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3e2838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3e283c:
    // 0x3e283c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e283cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e2840:
    // 0x3e2840: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x3e2840u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e2844:
    // 0x3e2844: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3e2844u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3e2848:
    // 0x3e2848: 0xa7a301e4  sh          $v1, 0x1E4($sp)
    ctx->pc = 0x3e2848u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 484), (uint16_t)GPR_U32(ctx, 3));
label_3e284c:
    // 0x3e284c: 0xafa001d0  sw          $zero, 0x1D0($sp)
    ctx->pc = 0x3e284cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
label_3e2850:
    // 0x3e2850: 0xafa001d4  sw          $zero, 0x1D4($sp)
    ctx->pc = 0x3e2850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 0));
label_3e2854:
    // 0x3e2854: 0xafa001d8  sw          $zero, 0x1D8($sp)
    ctx->pc = 0x3e2854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
label_3e2858:
    // 0x3e2858: 0xa7a001e0  sh          $zero, 0x1E0($sp)
    ctx->pc = 0x3e2858u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 480), (uint16_t)GPR_U32(ctx, 0));
label_3e285c:
    // 0x3e285c: 0xa7a001e2  sh          $zero, 0x1E2($sp)
    ctx->pc = 0x3e285cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 482), (uint16_t)GPR_U32(ctx, 0));
label_3e2860:
    // 0x3e2860: 0xc04cbd8  jal         func_132F60
label_3e2864:
    if (ctx->pc == 0x3E2864u) {
        ctx->pc = 0x3E2864u;
            // 0x3e2864: 0xa7a001e6  sh          $zero, 0x1E6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 486), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E2868u;
        goto label_3e2868;
    }
    ctx->pc = 0x3E2860u;
    SET_GPR_U32(ctx, 31, 0x3E2868u);
    ctx->pc = 0x3E2864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2860u;
            // 0x3e2864: 0xa7a001e6  sh          $zero, 0x1E6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 486), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2868u; }
        if (ctx->pc != 0x3E2868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2868u; }
        if (ctx->pc != 0x3E2868u) { return; }
    }
    ctx->pc = 0x3E2868u;
label_3e2868:
    // 0x3e2868: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e2868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e286c:
    // 0x3e286c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x3e286cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_3e2870:
    // 0x3e2870: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e2870u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e2874:
    // 0x3e2874: 0xc04cbd8  jal         func_132F60
label_3e2878:
    if (ctx->pc == 0x3E2878u) {
        ctx->pc = 0x3E2878u;
            // 0x3e2878: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3E287Cu;
        goto label_3e287c;
    }
    ctx->pc = 0x3E2874u;
    SET_GPR_U32(ctx, 31, 0x3E287Cu);
    ctx->pc = 0x3E2878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2874u;
            // 0x3e2878: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E287Cu; }
        if (ctx->pc != 0x3E287Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E287Cu; }
        if (ctx->pc != 0x3E287Cu) { return; }
    }
    ctx->pc = 0x3E287Cu;
label_3e287c:
    // 0x3e287c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e287cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e2880:
    // 0x3e2880: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x3e2880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_3e2884:
    // 0x3e2884: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e2884u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e2888:
    // 0x3e2888: 0xc04cbd8  jal         func_132F60
label_3e288c:
    if (ctx->pc == 0x3E288Cu) {
        ctx->pc = 0x3E288Cu;
            // 0x3e288c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3E2890u;
        goto label_3e2890;
    }
    ctx->pc = 0x3E2888u;
    SET_GPR_U32(ctx, 31, 0x3E2890u);
    ctx->pc = 0x3E288Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2888u;
            // 0x3e288c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2890u; }
        if (ctx->pc != 0x3E2890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2890u; }
        if (ctx->pc != 0x3E2890u) { return; }
    }
    ctx->pc = 0x3E2890u;
label_3e2890:
    // 0x3e2890: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e2890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e2894:
    // 0x3e2894: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3e2894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3e2898:
    // 0x3e2898: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e2898u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e289c:
    // 0x3e289c: 0xc04cbd8  jal         func_132F60
label_3e28a0:
    if (ctx->pc == 0x3E28A0u) {
        ctx->pc = 0x3E28A0u;
            // 0x3e28a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3E28A4u;
        goto label_3e28a4;
    }
    ctx->pc = 0x3E289Cu;
    SET_GPR_U32(ctx, 31, 0x3E28A4u);
    ctx->pc = 0x3E28A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E289Cu;
            // 0x3e28a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E28A4u; }
        if (ctx->pc != 0x3E28A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E28A4u; }
        if (ctx->pc != 0x3E28A4u) { return; }
    }
    ctx->pc = 0x3E28A4u;
label_3e28a4:
    // 0x3e28a4: 0x920302eb  lbu         $v1, 0x2EB($s0)
    ctx->pc = 0x3e28a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 747)));
label_3e28a8:
    // 0x3e28a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3e28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3e28ac:
    // 0x3e28ac: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3e28acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e28b0:
    // 0x3e28b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e28b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e28b4:
    // 0x3e28b4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3e28b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3e28b8:
    // 0x3e28b8: 0x262602c0  addiu       $a2, $s1, 0x2C0
    ctx->pc = 0x3e28b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_3e28bc:
    // 0x3e28bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e28bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e28c0:
    // 0x3e28c0: 0xa3a301ff  sb          $v1, 0x1FF($sp)
    ctx->pc = 0x3e28c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 511), (uint8_t)GPR_U32(ctx, 3));
label_3e28c4:
    // 0x3e28c4: 0x262703d0  addiu       $a3, $s1, 0x3D0
    ctx->pc = 0x3e28c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
label_3e28c8:
    // 0x3e28c8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x3e28c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e28cc:
    // 0x3e28cc: 0x27a901ff  addiu       $t1, $sp, 0x1FF
    ctx->pc = 0x3e28ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 511));
label_3e28d0:
    // 0x3e28d0: 0xc0b8704  jal         func_2E1C10
label_3e28d4:
    if (ctx->pc == 0x3E28D4u) {
        ctx->pc = 0x3E28D4u;
            // 0x3e28d4: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E28D8u;
        goto label_3e28d8;
    }
    ctx->pc = 0x3E28D0u;
    SET_GPR_U32(ctx, 31, 0x3E28D8u);
    ctx->pc = 0x3E28D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E28D0u;
            // 0x3e28d4: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E28D8u; }
        if (ctx->pc != 0x3E28D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E28D8u; }
        if (ctx->pc != 0x3E28D8u) { return; }
    }
    ctx->pc = 0x3E28D8u;
label_3e28d8:
    // 0x3e28d8: 0x97a201e6  lhu         $v0, 0x1E6($sp)
    ctx->pc = 0x3e28d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 486)));
label_3e28dc:
    // 0x3e28dc: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
label_3e28e0:
    if (ctx->pc == 0x3E28E0u) {
        ctx->pc = 0x3E28E0u;
            // 0x3e28e0: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x3E28E4u;
        goto label_3e28e4;
    }
    ctx->pc = 0x3E28DCu;
    {
        const bool branch_taken_0x3e28dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e28dc) {
            ctx->pc = 0x3E28E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E28DCu;
            // 0x3e28e0: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E2A18u;
            goto label_3e2a18;
        }
    }
    ctx->pc = 0x3E28E4u;
label_3e28e4:
    // 0x3e28e4: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x3e28e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_3e28e8:
    // 0x3e28e8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3e28e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3e28ec:
    // 0x3e28ec: 0x97a601e2  lhu         $a2, 0x1E2($sp)
    ctx->pc = 0x3e28ecu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 482)));
label_3e28f0:
    // 0x3e28f0: 0x97a301e0  lhu         $v1, 0x1E0($sp)
    ctx->pc = 0x3e28f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 480)));
label_3e28f4:
    // 0x3e28f4: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x3e28f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3e28f8:
    // 0x3e28f8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3e28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3e28fc:
    // 0x3e28fc: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x3e28fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3e2900:
    // 0x3e2900: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x3e2900u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3e2904:
    // 0x3e2904: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x3e2904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_3e2908:
    // 0x3e2908: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3e2908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3e290c:
    // 0x3e290c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3e290cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3e2910:
    // 0x3e2910: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x3e2910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3e2914:
    // 0x3e2914: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x3e2914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3e2918:
    // 0x3e2918: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3e2918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3e291c:
    // 0x3e291c: 0xc04cc90  jal         func_133240
label_3e2920:
    if (ctx->pc == 0x3E2920u) {
        ctx->pc = 0x3E2920u;
            // 0x3e2920: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x3E2924u;
        goto label_3e2924;
    }
    ctx->pc = 0x3E291Cu;
    SET_GPR_U32(ctx, 31, 0x3E2924u);
    ctx->pc = 0x3E2920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E291Cu;
            // 0x3e2920: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2924u; }
        if (ctx->pc != 0x3E2924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2924u; }
        if (ctx->pc != 0x3E2924u) { return; }
    }
    ctx->pc = 0x3E2924u;
label_3e2924:
    // 0x3e2924: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3e2924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3e2928:
    // 0x3e2928: 0xc04cc44  jal         func_133110
label_3e292c:
    if (ctx->pc == 0x3E292Cu) {
        ctx->pc = 0x3E292Cu;
            // 0x3e292c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E2930u;
        goto label_3e2930;
    }
    ctx->pc = 0x3E2928u;
    SET_GPR_U32(ctx, 31, 0x3E2930u);
    ctx->pc = 0x3E292Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2928u;
            // 0x3e292c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2930u; }
        if (ctx->pc != 0x3E2930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2930u; }
        if (ctx->pc != 0x3E2930u) { return; }
    }
    ctx->pc = 0x3E2930u;
label_3e2930:
    // 0x3e2930: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3e2930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3e2934:
    // 0x3e2934: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3e2934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3e2938:
    // 0x3e2938: 0xc04cbf0  jal         func_132FC0
label_3e293c:
    if (ctx->pc == 0x3E293Cu) {
        ctx->pc = 0x3E293Cu;
            // 0x3e293c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3E2940u;
        goto label_3e2940;
    }
    ctx->pc = 0x3E2938u;
    SET_GPR_U32(ctx, 31, 0x3E2940u);
    ctx->pc = 0x3E293Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2938u;
            // 0x3e293c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2940u; }
        if (ctx->pc != 0x3E2940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2940u; }
        if (ctx->pc != 0x3E2940u) { return; }
    }
    ctx->pc = 0x3E2940u;
label_3e2940:
    // 0x3e2940: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3e2940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3e2944:
    // 0x3e2944: 0xc04cc44  jal         func_133110
label_3e2948:
    if (ctx->pc == 0x3E2948u) {
        ctx->pc = 0x3E2948u;
            // 0x3e2948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E294Cu;
        goto label_3e294c;
    }
    ctx->pc = 0x3E2944u;
    SET_GPR_U32(ctx, 31, 0x3E294Cu);
    ctx->pc = 0x3E2948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2944u;
            // 0x3e2948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E294Cu; }
        if (ctx->pc != 0x3E294Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E294Cu; }
        if (ctx->pc != 0x3E294Cu) { return; }
    }
    ctx->pc = 0x3E294Cu;
label_3e294c:
    // 0x3e294c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3e294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3e2950:
    // 0x3e2950: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3e2950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3e2954:
    // 0x3e2954: 0xc04cbf0  jal         func_132FC0
label_3e2958:
    if (ctx->pc == 0x3E2958u) {
        ctx->pc = 0x3E2958u;
            // 0x3e2958: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3E295Cu;
        goto label_3e295c;
    }
    ctx->pc = 0x3E2954u;
    SET_GPR_U32(ctx, 31, 0x3E295Cu);
    ctx->pc = 0x3E2958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2954u;
            // 0x3e2958: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E295Cu; }
        if (ctx->pc != 0x3E295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E295Cu; }
        if (ctx->pc != 0x3E295Cu) { return; }
    }
    ctx->pc = 0x3E295Cu;
label_3e295c:
    // 0x3e295c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3e295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3e2960:
    // 0x3e2960: 0xc04cc44  jal         func_133110
label_3e2964:
    if (ctx->pc == 0x3E2964u) {
        ctx->pc = 0x3E2964u;
            // 0x3e2964: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E2968u;
        goto label_3e2968;
    }
    ctx->pc = 0x3E2960u;
    SET_GPR_U32(ctx, 31, 0x3E2968u);
    ctx->pc = 0x3E2964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2960u;
            // 0x3e2964: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2968u; }
        if (ctx->pc != 0x3E2968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2968u; }
        if (ctx->pc != 0x3E2968u) { return; }
    }
    ctx->pc = 0x3E2968u;
label_3e2968:
    // 0x3e2968: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e296c:
    // 0x3e296c: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x3e296cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_3e2970:
    // 0x3e2970: 0xc441a080  lwc1        $f1, -0x5F80($v0)
    ctx->pc = 0x3e2970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e2974:
    // 0x3e2974: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3e2974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3e2978:
    // 0x3e2978: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x3e2978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e297c:
    // 0x3e297c: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x3e297cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_3e2980:
    // 0x3e2980: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x3e2980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3e2984:
    // 0x3e2984: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x3e2984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_3e2988:
    // 0x3e2988: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e298c:
    // 0x3e298c: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x3e298cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
label_3e2990:
    // 0x3e2990: 0xc440a084  lwc1        $f0, -0x5F7C($v0)
    ctx->pc = 0x3e2990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e2994:
    // 0x3e2994: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x3e2994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_3e2998:
    // 0x3e2998: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x3e2998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_3e299c:
    // 0x3e299c: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x3e299cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e29a0:
    // 0x3e29a0: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x3e29a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_3e29a4:
    // 0x3e29a4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e29a8:
    // 0x3e29a8: 0xc441a088  lwc1        $f1, -0x5F78($v0)
    ctx->pc = 0x3e29a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e29ac:
    // 0x3e29ac: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x3e29acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_3e29b0:
    // 0x3e29b0: 0xe7a30150  swc1        $f3, 0x150($sp)
    ctx->pc = 0x3e29b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3e29b4:
    // 0x3e29b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e29b8:
    // 0x3e29b8: 0xc440a08c  lwc1        $f0, -0x5F74($v0)
    ctx->pc = 0x3e29b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e29bc:
    // 0x3e29bc: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x3e29bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_3e29c0:
    // 0x3e29c0: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x3e29c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e29c4:
    // 0x3e29c4: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x3e29c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_3e29c8:
    // 0x3e29c8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x3e29c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e29cc:
    // 0x3e29cc: 0xe7a10160  swc1        $f1, 0x160($sp)
    ctx->pc = 0x3e29ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_3e29d0:
    // 0x3e29d0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x3e29d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e29d4:
    // 0x3e29d4: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x3e29d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_3e29d8:
    // 0x3e29d8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x3e29d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e29dc:
    // 0x3e29dc: 0xe7a10168  swc1        $f1, 0x168($sp)
    ctx->pc = 0x3e29dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_3e29e0:
    // 0x3e29e0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x3e29e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e29e4:
    // 0x3e29e4: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x3e29e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_3e29e8:
    // 0x3e29e8: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x3e29e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e29ec:
    // 0x3e29ec: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x3e29ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3e29f0:
    // 0x3e29f0: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x3e29f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_3e29f4:
    // 0x3e29f4: 0xc04cc90  jal         func_133240
label_3e29f8:
    if (ctx->pc == 0x3E29F8u) {
        ctx->pc = 0x3E29F8u;
            // 0x3e29f8: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->pc = 0x3E29FCu;
        goto label_3e29fc;
    }
    ctx->pc = 0x3E29F4u;
    SET_GPR_U32(ctx, 31, 0x3E29FCu);
    ctx->pc = 0x3E29F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E29F4u;
            // 0x3e29f8: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E29FCu; }
        if (ctx->pc != 0x3E29FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E29FCu; }
        if (ctx->pc != 0x3E29FCu) { return; }
    }
    ctx->pc = 0x3E29FCu;
label_3e29fc:
    // 0x3e29fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3e29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3e2a00:
    // 0x3e2a00: 0xc04ccf4  jal         func_1333D0
label_3e2a04:
    if (ctx->pc == 0x3E2A04u) {
        ctx->pc = 0x3E2A04u;
            // 0x3e2a04: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x3E2A08u;
        goto label_3e2a08;
    }
    ctx->pc = 0x3E2A00u;
    SET_GPR_U32(ctx, 31, 0x3E2A08u);
    ctx->pc = 0x3E2A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2A00u;
            // 0x3e2a04: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2A08u; }
        if (ctx->pc != 0x3E2A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2A08u; }
        if (ctx->pc != 0x3E2A08u) { return; }
    }
    ctx->pc = 0x3E2A08u;
label_3e2a08:
    // 0x3e2a08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3e2a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3e2a0c:
    // 0x3e2a0c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3e2a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3e2a10:
    // 0x3e2a10: 0xc04cca0  jal         func_133280
label_3e2a14:
    if (ctx->pc == 0x3E2A14u) {
        ctx->pc = 0x3E2A14u;
            // 0x3e2a14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E2A18u;
        goto label_3e2a18;
    }
    ctx->pc = 0x3E2A10u;
    SET_GPR_U32(ctx, 31, 0x3E2A18u);
    ctx->pc = 0x3E2A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2A10u;
            // 0x3e2a14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2A18u; }
        if (ctx->pc != 0x3E2A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2A18u; }
        if (ctx->pc != 0x3E2A18u) { return; }
    }
    ctx->pc = 0x3E2A18u;
label_3e2a18:
    // 0x3e2a18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e2a1c:
    // 0x3e2a1c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3e2a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e2a20:
    // 0x3e2a20: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3e2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3e2a24:
    // 0x3e2a24: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3e2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3e2a28:
    // 0x3e2a28: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
label_3e2a2c:
    if (ctx->pc == 0x3E2A2Cu) {
        ctx->pc = 0x3E2A2Cu;
            // 0x3e2a2c: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3E2A30u;
        goto label_3e2a30;
    }
    ctx->pc = 0x3E2A28u;
    {
        const bool branch_taken_0x3e2a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e2a28) {
            ctx->pc = 0x3E2A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2A28u;
            // 0x3e2a2c: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E2A68u;
            goto label_3e2a68;
        }
    }
    ctx->pc = 0x3E2A30u;
label_3e2a30:
    // 0x3e2a30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2a34:
    // 0x3e2a34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e2a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e2a38:
    // 0x3e2a38: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3e2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e2a3c:
    // 0x3e2a3c: 0x8c420cc4  lw          $v0, 0xCC4($v0)
    ctx->pc = 0x3e2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
label_3e2a40:
    // 0x3e2a40: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_3e2a44:
    if (ctx->pc == 0x3E2A44u) {
        ctx->pc = 0x3E2A48u;
        goto label_3e2a48;
    }
    ctx->pc = 0x3E2A40u;
    {
        const bool branch_taken_0x3e2a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e2a40) {
            ctx->pc = 0x3E2A64u;
            goto label_3e2a64;
        }
    }
    ctx->pc = 0x3E2A48u;
label_3e2a48:
    // 0x3e2a48: 0x820302e8  lb          $v1, 0x2E8($s0)
    ctx->pc = 0x3e2a48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 744)));
label_3e2a4c:
    // 0x3e2a4c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e2a50:
    // 0x3e2a50: 0x24429e00  addiu       $v0, $v0, -0x6200
    ctx->pc = 0x3e2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942208));
label_3e2a54:
    // 0x3e2a54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e2a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e2a58:
    // 0x3e2a58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e2a5c:
    // 0x3e2a5c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3e2a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e2a60:
    // 0x3e2a60: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x3e2a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3e2a64:
    // 0x3e2a64: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x3e2a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e2a68:
    // 0x3e2a68: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x3e2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_3e2a6c:
    // 0x3e2a6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3e2a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e2a70:
    // 0x3e2a70: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3e2a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3e2a74:
    // 0x3e2a74: 0xc04cbd8  jal         func_132F60
label_3e2a78:
    if (ctx->pc == 0x3E2A78u) {
        ctx->pc = 0x3E2A78u;
            // 0x3e2a78: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->pc = 0x3E2A7Cu;
        goto label_3e2a7c;
    }
    ctx->pc = 0x3E2A74u;
    SET_GPR_U32(ctx, 31, 0x3E2A7Cu);
    ctx->pc = 0x3E2A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2A74u;
            // 0x3e2a78: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2A7Cu; }
        if (ctx->pc != 0x3E2A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2A7Cu; }
        if (ctx->pc != 0x3E2A7Cu) { return; }
    }
    ctx->pc = 0x3E2A7Cu;
label_3e2a7c:
    // 0x3e2a7c: 0xc6020200  lwc1        $f2, 0x200($s0)
    ctx->pc = 0x3e2a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e2a80:
    // 0x3e2a80: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x3e2a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_3e2a84:
    // 0x3e2a84: 0xc601028c  lwc1        $f1, 0x28C($s0)
    ctx->pc = 0x3e2a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e2a88:
    // 0x3e2a88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2a8c:
    // 0x3e2a8c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e2a8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e2a90:
    // 0x3e2a90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2a94:
    // 0x3e2a94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e2a94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2a98:
    // 0x3e2a98: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e2a98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2a9c:
    // 0x3e2a9c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3e2a9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3e2aa0:
    // 0x3e2aa0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3e2aa0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3e2aa4:
    // 0x3e2aa4: 0xe6000290  swc1        $f0, 0x290($s0)
    ctx->pc = 0x3e2aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_3e2aa8:
    // 0x3e2aa8: 0xae040294  sw          $a0, 0x294($s0)
    ctx->pc = 0x3e2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 4));
label_3e2aac:
    // 0x3e2aac: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x3e2aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_3e2ab0:
    // 0x3e2ab0: 0xae0302d4  sw          $v1, 0x2D4($s0)
    ctx->pc = 0x3e2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 3));
label_3e2ab4:
    // 0x3e2ab4: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x3e2ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_3e2ab8:
    // 0x3e2ab8: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e2ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e2abc:
    // 0x3e2abc: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e2ac0:
    // 0x3e2ac0: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e2ac4:
    // 0x3e2ac4: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e2ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e2ac8:
    // 0x3e2ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e2acc:
    // 0x3e2acc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e2accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e2ad0:
    // 0x3e2ad0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e2ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e2ad4:
    // 0x3e2ad4: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e2ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2ad8:
    // 0x3e2ad8: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e2ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e2adc:
    // 0x3e2adc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e2adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e2ae0:
    // 0x3e2ae0: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e2ae4:
    // 0x3e2ae4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e2ae8:
    // 0x3e2ae8: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e2aec:
    // 0x3e2aec: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e2af0:
    // 0x3e2af0: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e2af0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e2af4:
    // 0x3e2af4: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e2af4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e2af8:
    // 0x3e2af8: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e2af8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e2afc:
    // 0x3e2afc: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2b00:
    // 0x3e2b00: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e2b00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e2b04:
    // 0x3e2b04: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e2b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e2b08:
    // 0x3e2b08: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e2b08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e2b0c:
    // 0x3e2b0c: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e2b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2b10:
    // 0x3e2b10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e2b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e2b14:
    // 0x3e2b14: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e2b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e2b18:
    // 0x3e2b18: 0x320f809  jalr        $t9
label_3e2b1c:
    if (ctx->pc == 0x3E2B1Cu) {
        ctx->pc = 0x3E2B20u;
        goto label_3e2b20;
    }
    ctx->pc = 0x3E2B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E2B20u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E2B20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E2B20u; }
            if (ctx->pc != 0x3E2B20u) { return; }
        }
        }
    }
    ctx->pc = 0x3E2B20u;
label_3e2b20:
    // 0x3e2b20: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e2b20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e2b24:
    // 0x3e2b24: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x3e2b24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e2b28:
    // 0x3e2b28: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3e2b2c:
    if (ctx->pc == 0x3E2B2Cu) {
        ctx->pc = 0x3E2B2Cu;
            // 0x3e2b2c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E2B30u;
        goto label_3e2b30;
    }
    ctx->pc = 0x3E2B28u;
    {
        const bool branch_taken_0x3e2b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2B28u;
            // 0x3e2b2c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2b28) {
            ctx->pc = 0x3E2AD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e2ad4;
        }
    }
    ctx->pc = 0x3E2B30u;
label_3e2b30:
    // 0x3e2b30: 0x10000148  b           . + 4 + (0x148 << 2)
label_3e2b34:
    if (ctx->pc == 0x3E2B34u) {
        ctx->pc = 0x3E2B38u;
        goto label_3e2b38;
    }
    ctx->pc = 0x3E2B30u;
    {
        const bool branch_taken_0x3e2b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2b30) {
            ctx->pc = 0x3E3054u;
            goto label_3e3054;
        }
    }
    ctx->pc = 0x3E2B38u;
label_3e2b38:
    // 0x3e2b38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e2b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2b3c:
    // 0x3e2b3c: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x3e2b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_3e2b40:
    // 0x3e2b40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2b44:
    // 0x3e2b44: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x3e2b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_3e2b48:
    // 0x3e2b48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e2b48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2b4c:
    // 0x3e2b4c: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e2b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e2b50:
    // 0x3e2b50: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e2b50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2b54:
    // 0x3e2b54: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e2b58:
    // 0x3e2b58: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e2b5c:
    // 0x3e2b5c: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e2b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e2b60:
    // 0x3e2b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e2b64:
    // 0x3e2b64: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e2b68:
    // 0x3e2b68: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e2b68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e2b6c:
    // 0x3e2b6c: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e2b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2b70:
    // 0x3e2b70: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e2b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e2b74:
    // 0x3e2b74: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e2b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e2b78:
    // 0x3e2b78: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e2b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e2b7c:
    // 0x3e2b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e2b80:
    // 0x3e2b80: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e2b80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e2b84:
    // 0x3e2b84: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e2b88:
    // 0x3e2b88: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e2b88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e2b8c:
    // 0x3e2b8c: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e2b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e2b90:
    // 0x3e2b90: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e2b90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e2b94:
    // 0x3e2b94: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2b98:
    // 0x3e2b98: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e2b98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e2b9c:
    // 0x3e2b9c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e2b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e2ba0:
    // 0x3e2ba0: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e2ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e2ba4:
    // 0x3e2ba4: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e2ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2ba8:
    // 0x3e2ba8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e2ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e2bac:
    // 0x3e2bac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e2bacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e2bb0:
    // 0x3e2bb0: 0x320f809  jalr        $t9
label_3e2bb4:
    if (ctx->pc == 0x3E2BB4u) {
        ctx->pc = 0x3E2BB8u;
        goto label_3e2bb8;
    }
    ctx->pc = 0x3E2BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E2BB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E2BB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E2BB8u; }
            if (ctx->pc != 0x3E2BB8u) { return; }
        }
        }
    }
    ctx->pc = 0x3E2BB8u;
label_3e2bb8:
    // 0x3e2bb8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e2bb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e2bbc:
    // 0x3e2bbc: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x3e2bbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e2bc0:
    // 0x3e2bc0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3e2bc4:
    if (ctx->pc == 0x3E2BC4u) {
        ctx->pc = 0x3E2BC4u;
            // 0x3e2bc4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E2BC8u;
        goto label_3e2bc8;
    }
    ctx->pc = 0x3E2BC0u;
    {
        const bool branch_taken_0x3e2bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2BC0u;
            // 0x3e2bc4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2bc0) {
            ctx->pc = 0x3E2B6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e2b6c;
        }
    }
    ctx->pc = 0x3E2BC8u;
label_3e2bc8:
    // 0x3e2bc8: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x3e2bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_3e2bcc:
    // 0x3e2bcc: 0x820302e8  lb          $v1, 0x2E8($s0)
    ctx->pc = 0x3e2bccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 744)));
label_3e2bd0:
    // 0x3e2bd0: 0x14600120  bnez        $v1, . + 4 + (0x120 << 2)
label_3e2bd4:
    if (ctx->pc == 0x3E2BD4u) {
        ctx->pc = 0x3E2BD8u;
        goto label_3e2bd8;
    }
    ctx->pc = 0x3E2BD0u;
    {
        const bool branch_taken_0x3e2bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2bd0) {
            ctx->pc = 0x3E3054u;
            goto label_3e3054;
        }
    }
    ctx->pc = 0x3E2BD8u;
label_3e2bd8:
    // 0x3e2bd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e2bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e2bdc:
    // 0x3e2bdc: 0x1000011d  b           . + 4 + (0x11D << 2)
label_3e2be0:
    if (ctx->pc == 0x3E2BE0u) {
        ctx->pc = 0x3E2BE0u;
            // 0x3e2be0: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
        ctx->pc = 0x3E2BE4u;
        goto label_3e2be4;
    }
    ctx->pc = 0x3E2BDCu;
    {
        const bool branch_taken_0x3e2bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2BDCu;
            // 0x3e2be0: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2bdc) {
            ctx->pc = 0x3E3054u;
            goto label_3e3054;
        }
    }
    ctx->pc = 0x3E2BE4u;
label_3e2be4:
    // 0x3e2be4: 0x10c0011b  beqz        $a2, . + 4 + (0x11B << 2)
label_3e2be8:
    if (ctx->pc == 0x3E2BE8u) {
        ctx->pc = 0x3E2BECu;
        goto label_3e2bec;
    }
    ctx->pc = 0x3E2BE4u;
    {
        const bool branch_taken_0x3e2be4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2be4) {
            ctx->pc = 0x3E3054u;
            goto label_3e3054;
        }
    }
    ctx->pc = 0x3E2BECu;
label_3e2bec:
    // 0x3e2bec: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x3e2becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_3e2bf0:
    // 0x3e2bf0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2bf4:
    // 0x3e2bf4: 0xae0402d4  sw          $a0, 0x2D4($s0)
    ctx->pc = 0x3e2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 4));
label_3e2bf8:
    // 0x3e2bf8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e2bf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2bfc:
    // 0x3e2bfc: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x3e2bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_3e2c00:
    // 0x3e2c00: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e2c00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2c04:
    // 0x3e2c04: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e2c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e2c08:
    // 0x3e2c08: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e2c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e2c0c:
    // 0x3e2c0c: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e2c10:
    // 0x3e2c10: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e2c10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e2c14:
    // 0x3e2c14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e2c18:
    // 0x3e2c18: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e2c1c:
    // 0x3e2c1c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e2c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e2c20:
    // 0x3e2c20: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e2c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2c24:
    // 0x3e2c24: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e2c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e2c28:
    // 0x3e2c28: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e2c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e2c2c:
    // 0x3e2c2c: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e2c30:
    // 0x3e2c30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e2c34:
    // 0x3e2c34: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e2c38:
    // 0x3e2c38: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e2c38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e2c3c:
    // 0x3e2c3c: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e2c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e2c40:
    // 0x3e2c40: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e2c40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e2c44:
    // 0x3e2c44: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e2c44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e2c48:
    // 0x3e2c48: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e2c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2c4c:
    // 0x3e2c4c: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e2c4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e2c50:
    // 0x3e2c50: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e2c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e2c54:
    // 0x3e2c54: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e2c54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e2c58:
    // 0x3e2c58: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e2c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2c5c:
    // 0x3e2c5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e2c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e2c60:
    // 0x3e2c60: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e2c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e2c64:
    // 0x3e2c64: 0x320f809  jalr        $t9
label_3e2c68:
    if (ctx->pc == 0x3E2C68u) {
        ctx->pc = 0x3E2C6Cu;
        goto label_3e2c6c;
    }
    ctx->pc = 0x3E2C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E2C6Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E2C6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E2C6Cu; }
            if (ctx->pc != 0x3E2C6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3E2C6Cu;
label_3e2c6c:
    // 0x3e2c6c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e2c6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e2c70:
    // 0x3e2c70: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x3e2c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e2c74:
    // 0x3e2c74: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3e2c78:
    if (ctx->pc == 0x3E2C78u) {
        ctx->pc = 0x3E2C78u;
            // 0x3e2c78: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E2C7Cu;
        goto label_3e2c7c;
    }
    ctx->pc = 0x3E2C74u;
    {
        const bool branch_taken_0x3e2c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2C74u;
            // 0x3e2c78: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2c74) {
            ctx->pc = 0x3E2C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e2c20;
        }
    }
    ctx->pc = 0x3E2C7Cu;
label_3e2c7c:
    // 0x3e2c7c: 0xc072a56  jal         func_1CA958
label_3e2c80:
    if (ctx->pc == 0x3E2C80u) {
        ctx->pc = 0x3E2C80u;
            // 0x3e2c80: 0x920402bc  lbu         $a0, 0x2BC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 700)));
        ctx->pc = 0x3E2C84u;
        goto label_3e2c84;
    }
    ctx->pc = 0x3E2C7Cu;
    SET_GPR_U32(ctx, 31, 0x3E2C84u);
    ctx->pc = 0x3E2C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2C7Cu;
            // 0x3e2c80: 0x920402bc  lbu         $a0, 0x2BC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 700)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2C84u; }
        if (ctx->pc != 0x3E2C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2C84u; }
        if (ctx->pc != 0x3E2C84u) { return; }
    }
    ctx->pc = 0x3E2C84u;
label_3e2c84:
    // 0x3e2c84: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x3e2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_3e2c88:
    // 0x3e2c88: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e2c8c:
    // 0x3e2c8c: 0xae02027c  sw          $v0, 0x27C($s0)
    ctx->pc = 0x3e2c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
label_3e2c90:
    // 0x3e2c90: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3e2c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3e2c94:
    // 0x3e2c94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e2c98:
    // 0x3e2c98: 0x8c633da0  lw          $v1, 0x3DA0($v1)
    ctx->pc = 0x3e2c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
label_3e2c9c:
    // 0x3e2c9c: 0x8c53e360  lw          $s3, -0x1CA0($v0)
    ctx->pc = 0x3e2c9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_3e2ca0:
    // 0x3e2ca0: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e2ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e2ca4:
    // 0x3e2ca4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3e2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3e2ca8:
    // 0x3e2ca8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3e2ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e2cac:
    // 0x3e2cac: 0x8e2202d4  lw          $v0, 0x2D4($s1)
    ctx->pc = 0x3e2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 724)));
label_3e2cb0:
    // 0x3e2cb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e2cb4:
    // 0x3e2cb4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e2cb8:
    // 0x3e2cb8: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x3e2cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e2cbc:
    // 0x3e2cbc: 0xc04f278  jal         func_13C9E0
label_3e2cc0:
    if (ctx->pc == 0x3E2CC0u) {
        ctx->pc = 0x3E2CC0u;
            // 0x3e2cc0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x3E2CC4u;
        goto label_3e2cc4;
    }
    ctx->pc = 0x3E2CBCu;
    SET_GPR_U32(ctx, 31, 0x3E2CC4u);
    ctx->pc = 0x3E2CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2CBCu;
            // 0x3e2cc0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2CC4u; }
        if (ctx->pc != 0x3E2CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2CC4u; }
        if (ctx->pc != 0x3E2CC4u) { return; }
    }
    ctx->pc = 0x3E2CC4u;
label_3e2cc4:
    // 0x3e2cc4: 0x26040310  addiu       $a0, $s0, 0x310
    ctx->pc = 0x3e2cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_3e2cc8:
    // 0x3e2cc8: 0xc04cce8  jal         func_1333A0
label_3e2ccc:
    if (ctx->pc == 0x3E2CCCu) {
        ctx->pc = 0x3E2CCCu;
            // 0x3e2ccc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3E2CD0u;
        goto label_3e2cd0;
    }
    ctx->pc = 0x3E2CC8u;
    SET_GPR_U32(ctx, 31, 0x3E2CD0u);
    ctx->pc = 0x3E2CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2CC8u;
            // 0x3e2ccc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2CD0u; }
        if (ctx->pc != 0x3E2CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2CD0u; }
        if (ctx->pc != 0x3E2CD0u) { return; }
    }
    ctx->pc = 0x3E2CD0u;
label_3e2cd0:
    // 0x3e2cd0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3e2cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3e2cd4:
    // 0x3e2cd4: 0xc04ce80  jal         func_133A00
label_3e2cd8:
    if (ctx->pc == 0x3E2CD8u) {
        ctx->pc = 0x3E2CD8u;
            // 0x3e2cd8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3E2CDCu;
        goto label_3e2cdc;
    }
    ctx->pc = 0x3E2CD4u;
    SET_GPR_U32(ctx, 31, 0x3E2CDCu);
    ctx->pc = 0x3E2CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2CD4u;
            // 0x3e2cd8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2CDCu; }
        if (ctx->pc != 0x3E2CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2CDCu; }
        if (ctx->pc != 0x3E2CDCu) { return; }
    }
    ctx->pc = 0x3E2CDCu;
label_3e2cdc:
    // 0x3e2cdc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e2cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e2ce0:
    // 0x3e2ce0: 0xc62c0284  lwc1        $f12, 0x284($s1)
    ctx->pc = 0x3e2ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e2ce4:
    // 0x3e2ce4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3e2ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e2ce8:
    // 0x3e2ce8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e2ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e2cec:
    // 0x3e2cec: 0xc0528ec  jal         func_14A3B0
label_3e2cf0:
    if (ctx->pc == 0x3E2CF0u) {
        ctx->pc = 0x3E2CF0u;
            // 0x3e2cf0: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3E2CF4u;
        goto label_3e2cf4;
    }
    ctx->pc = 0x3E2CECu;
    SET_GPR_U32(ctx, 31, 0x3E2CF4u);
    ctx->pc = 0x3E2CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2CECu;
            // 0x3e2cf0: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2CF4u; }
        if (ctx->pc != 0x3E2CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2CF4u; }
        if (ctx->pc != 0x3E2CF4u) { return; }
    }
    ctx->pc = 0x3E2CF4u;
label_3e2cf4:
    // 0x3e2cf4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e2cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3e2cf8:
    // 0x3e2cf8: 0x26650300  addiu       $a1, $s3, 0x300
    ctx->pc = 0x3e2cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_3e2cfc:
    // 0x3e2cfc: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x3e2cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_3e2d00:
    // 0x3e2d00: 0xc04cca0  jal         func_133280
label_3e2d04:
    if (ctx->pc == 0x3E2D04u) {
        ctx->pc = 0x3E2D04u;
            // 0x3e2d04: 0x24c6a080  addiu       $a2, $a2, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942848));
        ctx->pc = 0x3E2D08u;
        goto label_3e2d08;
    }
    ctx->pc = 0x3E2D00u;
    SET_GPR_U32(ctx, 31, 0x3E2D08u);
    ctx->pc = 0x3E2D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2D00u;
            // 0x3e2d04: 0x24c6a080  addiu       $a2, $a2, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2D08u; }
        if (ctx->pc != 0x3E2D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2D08u; }
        if (ctx->pc != 0x3E2D08u) { return; }
    }
    ctx->pc = 0x3E2D08u;
label_3e2d08:
    // 0x3e2d08: 0x8e030350  lw          $v1, 0x350($s0)
    ctx->pc = 0x3e2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_3e2d0c:
    // 0x3e2d0c: 0x146000d1  bnez        $v1, . + 4 + (0xD1 << 2)
label_3e2d10:
    if (ctx->pc == 0x3E2D10u) {
        ctx->pc = 0x3E2D14u;
        goto label_3e2d14;
    }
    ctx->pc = 0x3E2D0Cu;
    {
        const bool branch_taken_0x3e2d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2d0c) {
            ctx->pc = 0x3E3054u;
            goto label_3e3054;
        }
    }
    ctx->pc = 0x3E2D14u;
label_3e2d14:
    // 0x3e2d14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2d18:
    // 0x3e2d18: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e2d1c:
    // 0x3e2d1c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3e2d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3e2d20:
    // 0x3e2d20: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x3e2d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_3e2d24:
    // 0x3e2d24: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x3e2d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_3e2d28:
    // 0x3e2d28: 0x260702f0  addiu       $a3, $s0, 0x2F0
    ctx->pc = 0x3e2d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_3e2d2c:
    // 0x3e2d2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e2d2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2d30:
    // 0x3e2d30: 0xc0bb0e8  jal         func_2EC3A0
label_3e2d34:
    if (ctx->pc == 0x3E2D34u) {
        ctx->pc = 0x3E2D34u;
            // 0x3e2d34: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E2D38u;
        goto label_3e2d38;
    }
    ctx->pc = 0x3E2D30u;
    SET_GPR_U32(ctx, 31, 0x3E2D38u);
    ctx->pc = 0x3E2D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2D30u;
            // 0x3e2d34: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2D38u; }
        if (ctx->pc != 0x3E2D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2D38u; }
        if (ctx->pc != 0x3E2D38u) { return; }
    }
    ctx->pc = 0x3E2D38u;
label_3e2d38:
    // 0x3e2d38: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_3e2d3c:
    if (ctx->pc == 0x3E2D3Cu) {
        ctx->pc = 0x3E2D3Cu;
            // 0x3e2d3c: 0xae020350  sw          $v0, 0x350($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
        ctx->pc = 0x3E2D40u;
        goto label_3e2d40;
    }
    ctx->pc = 0x3E2D38u;
    {
        const bool branch_taken_0x3e2d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2D38u;
            // 0x3e2d3c: 0xae020350  sw          $v0, 0x350($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2d38) {
            ctx->pc = 0x3E3054u;
            goto label_3e3054;
        }
    }
    ctx->pc = 0x3E2D40u;
label_3e2d40:
    // 0x3e2d40: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e2d44:
    // 0x3e2d44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e2d48:
    // 0x3e2d48: 0x8c633da0  lw          $v1, 0x3DA0($v1)
    ctx->pc = 0x3e2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
label_3e2d4c:
    // 0x3e2d4c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e2d50:
    // 0x3e2d50: 0x8c53e360  lw          $s3, -0x1CA0($v0)
    ctx->pc = 0x3e2d50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_3e2d54:
    // 0x3e2d54: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e2d54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e2d58:
    // 0x3e2d58: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3e2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3e2d5c:
    // 0x3e2d5c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3e2d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e2d60:
    // 0x3e2d60: 0x8e2202d4  lw          $v0, 0x2D4($s1)
    ctx->pc = 0x3e2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 724)));
label_3e2d64:
    // 0x3e2d64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e2d68:
    // 0x3e2d68: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e2d6c:
    // 0x3e2d6c: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x3e2d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e2d70:
    // 0x3e2d70: 0xc04f278  jal         func_13C9E0
label_3e2d74:
    if (ctx->pc == 0x3E2D74u) {
        ctx->pc = 0x3E2D74u;
            // 0x3e2d74: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x3E2D78u;
        goto label_3e2d78;
    }
    ctx->pc = 0x3E2D70u;
    SET_GPR_U32(ctx, 31, 0x3E2D78u);
    ctx->pc = 0x3E2D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2D70u;
            // 0x3e2d74: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2D78u; }
        if (ctx->pc != 0x3E2D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2D78u; }
        if (ctx->pc != 0x3E2D78u) { return; }
    }
    ctx->pc = 0x3E2D78u;
label_3e2d78:
    // 0x3e2d78: 0x26040310  addiu       $a0, $s0, 0x310
    ctx->pc = 0x3e2d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_3e2d7c:
    // 0x3e2d7c: 0xc04cce8  jal         func_1333A0
label_3e2d80:
    if (ctx->pc == 0x3E2D80u) {
        ctx->pc = 0x3E2D80u;
            // 0x3e2d80: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3E2D84u;
        goto label_3e2d84;
    }
    ctx->pc = 0x3E2D7Cu;
    SET_GPR_U32(ctx, 31, 0x3E2D84u);
    ctx->pc = 0x3E2D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2D7Cu;
            // 0x3e2d80: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2D84u; }
        if (ctx->pc != 0x3E2D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2D84u; }
        if (ctx->pc != 0x3E2D84u) { return; }
    }
    ctx->pc = 0x3E2D84u;
label_3e2d84:
    // 0x3e2d84: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e2d88:
    // 0x3e2d88: 0xc04ce80  jal         func_133A00
label_3e2d8c:
    if (ctx->pc == 0x3E2D8Cu) {
        ctx->pc = 0x3E2D8Cu;
            // 0x3e2d8c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3E2D90u;
        goto label_3e2d90;
    }
    ctx->pc = 0x3E2D88u;
    SET_GPR_U32(ctx, 31, 0x3E2D90u);
    ctx->pc = 0x3E2D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2D88u;
            // 0x3e2d8c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2D90u; }
        if (ctx->pc != 0x3E2D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2D90u; }
        if (ctx->pc != 0x3E2D90u) { return; }
    }
    ctx->pc = 0x3E2D90u;
label_3e2d90:
    // 0x3e2d90: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e2d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e2d94:
    // 0x3e2d94: 0xc62c0284  lwc1        $f12, 0x284($s1)
    ctx->pc = 0x3e2d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e2d98:
    // 0x3e2d98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3e2d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e2d9c:
    // 0x3e2d9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e2d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e2da0:
    // 0x3e2da0: 0xc0528ec  jal         func_14A3B0
label_3e2da4:
    if (ctx->pc == 0x3E2DA4u) {
        ctx->pc = 0x3E2DA4u;
            // 0x3e2da4: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3E2DA8u;
        goto label_3e2da8;
    }
    ctx->pc = 0x3E2DA0u;
    SET_GPR_U32(ctx, 31, 0x3E2DA8u);
    ctx->pc = 0x3E2DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2DA0u;
            // 0x3e2da4: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2DA8u; }
        if (ctx->pc != 0x3E2DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2DA8u; }
        if (ctx->pc != 0x3E2DA8u) { return; }
    }
    ctx->pc = 0x3E2DA8u;
label_3e2da8:
    // 0x3e2da8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e2da8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3e2dac:
    // 0x3e2dac: 0x26650300  addiu       $a1, $s3, 0x300
    ctx->pc = 0x3e2dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_3e2db0:
    // 0x3e2db0: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x3e2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_3e2db4:
    // 0x3e2db4: 0xc04cca0  jal         func_133280
label_3e2db8:
    if (ctx->pc == 0x3E2DB8u) {
        ctx->pc = 0x3E2DB8u;
            // 0x3e2db8: 0x24c6a080  addiu       $a2, $a2, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942848));
        ctx->pc = 0x3E2DBCu;
        goto label_3e2dbc;
    }
    ctx->pc = 0x3E2DB4u;
    SET_GPR_U32(ctx, 31, 0x3E2DBCu);
    ctx->pc = 0x3E2DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2DB4u;
            // 0x3e2db8: 0x24c6a080  addiu       $a2, $a2, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2DBCu; }
        if (ctx->pc != 0x3E2DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2DBCu; }
        if (ctx->pc != 0x3E2DBCu) { return; }
    }
    ctx->pc = 0x3E2DBCu;
label_3e2dbc:
    // 0x3e2dbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e2dc0:
    // 0x3e2dc0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e2dc4:
    // 0x3e2dc4: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x3e2dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e2dc8:
    // 0x3e2dc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e2dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e2dcc:
    // 0x3e2dcc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3e2dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e2dd0:
    // 0x3e2dd0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e2dd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3e2dd4:
    // 0x3e2dd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e2dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e2dd8:
    // 0x3e2dd8: 0x4500009e  bc1f        . + 4 + (0x9E << 2)
label_3e2ddc:
    if (ctx->pc == 0x3E2DDCu) {
        ctx->pc = 0x3E2DDCu;
            // 0x3e2ddc: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->pc = 0x3E2DE0u;
        goto label_3e2de0;
    }
    ctx->pc = 0x3E2DD8u;
    {
        const bool branch_taken_0x3e2dd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2DD8u;
            // 0x3e2ddc: 0xe601027c  swc1        $f1, 0x27C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2dd8) {
            ctx->pc = 0x3E3054u;
            goto label_3e3054;
        }
    }
    ctx->pc = 0x3E2DE0u;
label_3e2de0:
    // 0x3e2de0: 0xc072aaa  jal         func_1CAAA8
label_3e2de4:
    if (ctx->pc == 0x3E2DE4u) {
        ctx->pc = 0x3E2DE4u;
            // 0x3e2de4: 0x920402bc  lbu         $a0, 0x2BC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 700)));
        ctx->pc = 0x3E2DE8u;
        goto label_3e2de8;
    }
    ctx->pc = 0x3E2DE0u;
    SET_GPR_U32(ctx, 31, 0x3E2DE8u);
    ctx->pc = 0x3E2DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2DE0u;
            // 0x3e2de4: 0x920402bc  lbu         $a0, 0x2BC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 700)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2DE8u; }
        if (ctx->pc != 0x3E2DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2DE8u; }
        if (ctx->pc != 0x3E2DE8u) { return; }
    }
    ctx->pc = 0x3E2DE8u;
label_3e2de8:
    // 0x3e2de8: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x3e2de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3e2dec:
    // 0x3e2dec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3e2decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e2df0:
    // 0x3e2df0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2df4:
    // 0x3e2df4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2df8:
    // 0x3e2df8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e2df8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2dfc:
    // 0x3e2dfc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e2dfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2e00:
    // 0x3e2e00: 0xae0502d0  sw          $a1, 0x2D0($s0)
    ctx->pc = 0x3e2e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 5));
label_3e2e04:
    // 0x3e2e04: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x3e2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_3e2e08:
    // 0x3e2e08: 0xae0402d4  sw          $a0, 0x2D4($s0)
    ctx->pc = 0x3e2e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 4));
label_3e2e0c:
    // 0x3e2e0c: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x3e2e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_3e2e10:
    // 0x3e2e10: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e2e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e2e14:
    // 0x3e2e14: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e2e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e2e18:
    // 0x3e2e18: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e2e1c:
    // 0x3e2e1c: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e2e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e2e20:
    // 0x3e2e20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e2e24:
    // 0x3e2e24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e2e28:
    // 0x3e2e28: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e2e28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e2e2c:
    // 0x3e2e2c: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e2e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2e30:
    // 0x3e2e30: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e2e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e2e34:
    // 0x3e2e34: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e2e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e2e38:
    // 0x3e2e38: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e2e3c:
    // 0x3e2e3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e2e40:
    // 0x3e2e40: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e2e40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e2e44:
    // 0x3e2e44: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e2e48:
    // 0x3e2e48: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e2e48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e2e4c:
    // 0x3e2e4c: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e2e50:
    // 0x3e2e50: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e2e54:
    // 0x3e2e54: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e2e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2e58:
    // 0x3e2e58: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e2e58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e2e5c:
    // 0x3e2e5c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e2e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e2e60:
    // 0x3e2e60: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e2e60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e2e64:
    // 0x3e2e64: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e2e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2e68:
    // 0x3e2e68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e2e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e2e6c:
    // 0x3e2e6c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e2e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e2e70:
    // 0x3e2e70: 0x320f809  jalr        $t9
label_3e2e74:
    if (ctx->pc == 0x3E2E74u) {
        ctx->pc = 0x3E2E78u;
        goto label_3e2e78;
    }
    ctx->pc = 0x3E2E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E2E78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E2E78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E2E78u; }
            if (ctx->pc != 0x3E2E78u) { return; }
        }
        }
    }
    ctx->pc = 0x3E2E78u;
label_3e2e78:
    // 0x3e2e78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e2e78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e2e7c:
    // 0x3e2e7c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x3e2e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e2e80:
    // 0x3e2e80: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3e2e84:
    if (ctx->pc == 0x3E2E84u) {
        ctx->pc = 0x3E2E84u;
            // 0x3e2e84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E2E88u;
        goto label_3e2e88;
    }
    ctx->pc = 0x3E2E80u;
    {
        const bool branch_taken_0x3e2e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2E80u;
            // 0x3e2e84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e80) {
            ctx->pc = 0x3E2E2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e2e2c;
        }
    }
    ctx->pc = 0x3E2E88u;
label_3e2e88:
    // 0x3e2e88: 0x8e040350  lw          $a0, 0x350($s0)
    ctx->pc = 0x3e2e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_3e2e8c:
    // 0x3e2e8c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3e2e90:
    if (ctx->pc == 0x3E2E90u) {
        ctx->pc = 0x3E2E94u;
        goto label_3e2e94;
    }
    ctx->pc = 0x3E2E8Cu;
    {
        const bool branch_taken_0x3e2e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2e8c) {
            ctx->pc = 0x3E2EA8u;
            goto label_3e2ea8;
        }
    }
    ctx->pc = 0x3E2E94u;
label_3e2e94:
    // 0x3e2e94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e2e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e2e98:
    // 0x3e2e98: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3e2e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3e2e9c:
    // 0x3e2e9c: 0x320f809  jalr        $t9
label_3e2ea0:
    if (ctx->pc == 0x3E2EA0u) {
        ctx->pc = 0x3E2EA0u;
            // 0x3e2ea0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E2EA4u;
        goto label_3e2ea4;
    }
    ctx->pc = 0x3E2E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E2EA4u);
        ctx->pc = 0x3E2EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2E9Cu;
            // 0x3e2ea0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E2EA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E2EA4u; }
            if (ctx->pc != 0x3E2EA4u) { return; }
        }
        }
    }
    ctx->pc = 0x3E2EA4u;
label_3e2ea4:
    // 0x3e2ea4: 0xae000350  sw          $zero, 0x350($s0)
    ctx->pc = 0x3e2ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
label_3e2ea8:
    // 0x3e2ea8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2eac:
    // 0x3e2eac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e2eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e2eb0:
    // 0x3e2eb0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3e2eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3e2eb4:
    // 0x3e2eb4: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x3e2eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_3e2eb8:
    // 0x3e2eb8: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x3e2eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_3e2ebc:
    // 0x3e2ebc: 0x260702f0  addiu       $a3, $s0, 0x2F0
    ctx->pc = 0x3e2ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_3e2ec0:
    // 0x3e2ec0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e2ec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2ec4:
    // 0x3e2ec4: 0xc0bb404  jal         func_2ED010
label_3e2ec8:
    if (ctx->pc == 0x3E2EC8u) {
        ctx->pc = 0x3E2EC8u;
            // 0x3e2ec8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E2ECCu;
        goto label_3e2ecc;
    }
    ctx->pc = 0x3E2EC4u;
    SET_GPR_U32(ctx, 31, 0x3E2ECCu);
    ctx->pc = 0x3E2EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2EC4u;
            // 0x3e2ec8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2ECCu; }
        if (ctx->pc != 0x3E2ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2ECCu; }
        if (ctx->pc != 0x3E2ECCu) { return; }
    }
    ctx->pc = 0x3E2ECCu;
label_3e2ecc:
    // 0x3e2ecc: 0x10000061  b           . + 4 + (0x61 << 2)
label_3e2ed0:
    if (ctx->pc == 0x3E2ED0u) {
        ctx->pc = 0x3E2ED4u;
        goto label_3e2ed4;
    }
    ctx->pc = 0x3E2ECCu;
    {
        const bool branch_taken_0x3e2ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2ecc) {
            ctx->pc = 0x3E3054u;
            goto label_3e3054;
        }
    }
    ctx->pc = 0x3E2ED4u;
label_3e2ed4:
    // 0x3e2ed4: 0x10c0005f  beqz        $a2, . + 4 + (0x5F << 2)
label_3e2ed8:
    if (ctx->pc == 0x3E2ED8u) {
        ctx->pc = 0x3E2EDCu;
        goto label_3e2edc;
    }
    ctx->pc = 0x3E2ED4u;
    {
        const bool branch_taken_0x3e2ed4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2ed4) {
            ctx->pc = 0x3E3054u;
            goto label_3e3054;
        }
    }
    ctx->pc = 0x3E2EDCu;
label_3e2edc:
    // 0x3e2edc: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x3e2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
label_3e2ee0:
    // 0x3e2ee0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e2ee4:
    // 0x3e2ee4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_3e2ee8:
    if (ctx->pc == 0x3E2EE8u) {
        ctx->pc = 0x3E2EE8u;
            // 0x3e2ee8: 0xae0202cc  sw          $v0, 0x2CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
        ctx->pc = 0x3E2EECu;
        goto label_3e2eec;
    }
    ctx->pc = 0x3E2EE4u;
    {
        const bool branch_taken_0x3e2ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2EE4u;
            // 0x3e2ee8: 0xae0202cc  sw          $v0, 0x2CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2ee4) {
            ctx->pc = 0x3E2F88u;
            goto label_3e2f88;
        }
    }
    ctx->pc = 0x3E2EECu;
label_3e2eec:
    // 0x3e2eec: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3e2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_3e2ef0:
    // 0x3e2ef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2ef4:
    // 0x3e2ef4: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x3e2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_3e2ef8:
    // 0x3e2ef8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2efc:
    // 0x3e2efc: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x3e2efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_3e2f00:
    // 0x3e2f00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e2f00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2f04:
    // 0x3e2f04: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e2f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e2f08:
    // 0x3e2f08: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e2f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2f0c:
    // 0x3e2f0c: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e2f10:
    // 0x3e2f10: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e2f14:
    // 0x3e2f14: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e2f14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e2f18:
    // 0x3e2f18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e2f1c:
    // 0x3e2f1c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e2f20:
    // 0x3e2f20: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e2f20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e2f24:
    // 0x3e2f24: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e2f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2f28:
    // 0x3e2f28: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e2f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e2f2c:
    // 0x3e2f2c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e2f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e2f30:
    // 0x3e2f30: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e2f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e2f34:
    // 0x3e2f34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e2f38:
    // 0x3e2f38: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e2f38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e2f3c:
    // 0x3e2f3c: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e2f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e2f40:
    // 0x3e2f40: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e2f44:
    // 0x3e2f44: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e2f44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e2f48:
    // 0x3e2f48: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e2f48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e2f4c:
    // 0x3e2f4c: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e2f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2f50:
    // 0x3e2f50: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e2f50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e2f54:
    // 0x3e2f54: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e2f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e2f58:
    // 0x3e2f58: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e2f58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e2f5c:
    // 0x3e2f5c: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e2f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2f60:
    // 0x3e2f60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e2f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e2f64:
    // 0x3e2f64: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e2f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e2f68:
    // 0x3e2f68: 0x320f809  jalr        $t9
label_3e2f6c:
    if (ctx->pc == 0x3E2F6Cu) {
        ctx->pc = 0x3E2F70u;
        goto label_3e2f70;
    }
    ctx->pc = 0x3E2F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E2F70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E2F70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E2F70u; }
            if (ctx->pc != 0x3E2F70u) { return; }
        }
        }
    }
    ctx->pc = 0x3E2F70u;
label_3e2f70:
    // 0x3e2f70: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e2f70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e2f74:
    // 0x3e2f74: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x3e2f74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e2f78:
    // 0x3e2f78: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3e2f7c:
    if (ctx->pc == 0x3E2F7Cu) {
        ctx->pc = 0x3E2F7Cu;
            // 0x3e2f7c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E2F80u;
        goto label_3e2f80;
    }
    ctx->pc = 0x3E2F78u;
    {
        const bool branch_taken_0x3e2f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2F78u;
            // 0x3e2f7c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f78) {
            ctx->pc = 0x3E2F24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e2f24;
        }
    }
    ctx->pc = 0x3E2F80u;
label_3e2f80:
    // 0x3e2f80: 0x10000034  b           . + 4 + (0x34 << 2)
label_3e2f84:
    if (ctx->pc == 0x3E2F84u) {
        ctx->pc = 0x3E2F88u;
        goto label_3e2f88;
    }
    ctx->pc = 0x3E2F80u;
    {
        const bool branch_taken_0x3e2f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2f80) {
            ctx->pc = 0x3E3054u;
            goto label_3e3054;
        }
    }
    ctx->pc = 0x3E2F88u;
label_3e2f88:
    // 0x3e2f88: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3e2f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_3e2f8c:
    // 0x3e2f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2f90:
    // 0x3e2f90: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x3e2f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_3e2f94:
    // 0x3e2f94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e2f98:
    // 0x3e2f98: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x3e2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_3e2f9c:
    // 0x3e2f9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e2f9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2fa0:
    // 0x3e2fa0: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e2fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e2fa4:
    // 0x3e2fa4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e2fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2fa8:
    // 0x3e2fa8: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e2fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e2fac:
    // 0x3e2fac: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e2facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e2fb0:
    // 0x3e2fb0: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e2fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e2fb4:
    // 0x3e2fb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e2fb8:
    // 0x3e2fb8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e2fbc:
    // 0x3e2fbc: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e2fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e2fc0:
    // 0x3e2fc0: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e2fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2fc4:
    // 0x3e2fc4: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e2fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e2fc8:
    // 0x3e2fc8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e2fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e2fcc:
    // 0x3e2fcc: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e2fd0:
    // 0x3e2fd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e2fd4:
    // 0x3e2fd4: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e2fd8:
    // 0x3e2fd8: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e2fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e2fdc:
    // 0x3e2fdc: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e2fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e2fe0:
    // 0x3e2fe0: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e2fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e2fe4:
    // 0x3e2fe4: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e2fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e2fe8:
    // 0x3e2fe8: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2fec:
    // 0x3e2fec: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e2fecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e2ff0:
    // 0x3e2ff0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e2ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e2ff4:
    // 0x3e2ff4: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e2ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e2ff8:
    // 0x3e2ff8: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e2ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e2ffc:
    // 0x3e2ffc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e2ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e3000:
    // 0x3e3000: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e3000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e3004:
    // 0x3e3004: 0x320f809  jalr        $t9
label_3e3008:
    if (ctx->pc == 0x3E3008u) {
        ctx->pc = 0x3E300Cu;
        goto label_3e300c;
    }
    ctx->pc = 0x3E3004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E300Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E300Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E300Cu; }
            if (ctx->pc != 0x3E300Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3E300Cu;
label_3e300c:
    // 0x3e300c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e300cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e3010:
    // 0x3e3010: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x3e3010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e3014:
    // 0x3e3014: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3e3018:
    if (ctx->pc == 0x3E3018u) {
        ctx->pc = 0x3E3018u;
            // 0x3e3018: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E301Cu;
        goto label_3e301c;
    }
    ctx->pc = 0x3E3014u;
    {
        const bool branch_taken_0x3e3014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3014u;
            // 0x3e3018: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3014) {
            ctx->pc = 0x3E2FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e2fc0;
        }
    }
    ctx->pc = 0x3E301Cu;
label_3e301c:
    // 0x3e301c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x3e301cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_3e3020:
    // 0x3e3020: 0x820302e8  lb          $v1, 0x2E8($s0)
    ctx->pc = 0x3e3020u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 744)));
label_3e3024:
    // 0x3e3024: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_3e3028:
    if (ctx->pc == 0x3E3028u) {
        ctx->pc = 0x3E3028u;
            // 0x3e3028: 0xc601028c  lwc1        $f1, 0x28C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3E302Cu;
        goto label_3e302c;
    }
    ctx->pc = 0x3E3024u;
    {
        const bool branch_taken_0x3e3024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3024) {
            ctx->pc = 0x3E3028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3024u;
            // 0x3e3028: 0xc601028c  lwc1        $f1, 0x28C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3038u;
            goto label_3e3038;
        }
    }
    ctx->pc = 0x3E302Cu;
label_3e302c:
    // 0x3e302c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e302cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e3030:
    // 0x3e3030: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x3e3030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_3e3034:
    // 0x3e3034: 0xc601028c  lwc1        $f1, 0x28C($s0)
    ctx->pc = 0x3e3034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e3038:
    // 0x3e3038: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3e3038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_3e303c:
    // 0x3e303c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e303cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e3040:
    // 0x3e3040: 0x0  nop
    ctx->pc = 0x3e3040u;
    // NOP
label_3e3044:
    // 0x3e3044: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3e3044u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3e3048:
    // 0x3e3048: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3e3048u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3e304c:
    // 0x3e304c: 0xe6000290  swc1        $f0, 0x290($s0)
    ctx->pc = 0x3e304cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_3e3050:
    // 0x3e3050: 0xae030294  sw          $v1, 0x294($s0)
    ctx->pc = 0x3e3050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
label_3e3054:
    // 0x3e3054: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e3054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e3058:
    // 0x3e3058: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e3058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e305c:
    // 0x3e305c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e305cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e3060:
    // 0x3e3060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e3060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e3064:
    // 0x3e3064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e3064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e3068:
    // 0x3e3068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e3068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e306c:
    // 0x3e306c: 0x3e00008  jr          $ra
label_3e3070:
    if (ctx->pc == 0x3E3070u) {
        ctx->pc = 0x3E3070u;
            // 0x3e3070: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x3E3074u;
        goto label_3e3074;
    }
    ctx->pc = 0x3E306Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E306Cu;
            // 0x3e3070: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E3074u;
label_3e3074:
    // 0x3e3074: 0x0  nop
    ctx->pc = 0x3e3074u;
    // NOP
label_3e3078:
    // 0x3e3078: 0x0  nop
    ctx->pc = 0x3e3078u;
    // NOP
label_3e307c:
    // 0x3e307c: 0x0  nop
    ctx->pc = 0x3e307cu;
    // NOP
}
