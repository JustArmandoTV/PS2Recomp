#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F2700
// Address: 0x4f2700 - 0x4f2b80
void sub_004F2700_0x4f2700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2700_0x4f2700");
#endif

    switch (ctx->pc) {
        case 0x4f2700u: goto label_4f2700;
        case 0x4f2704u: goto label_4f2704;
        case 0x4f2708u: goto label_4f2708;
        case 0x4f270cu: goto label_4f270c;
        case 0x4f2710u: goto label_4f2710;
        case 0x4f2714u: goto label_4f2714;
        case 0x4f2718u: goto label_4f2718;
        case 0x4f271cu: goto label_4f271c;
        case 0x4f2720u: goto label_4f2720;
        case 0x4f2724u: goto label_4f2724;
        case 0x4f2728u: goto label_4f2728;
        case 0x4f272cu: goto label_4f272c;
        case 0x4f2730u: goto label_4f2730;
        case 0x4f2734u: goto label_4f2734;
        case 0x4f2738u: goto label_4f2738;
        case 0x4f273cu: goto label_4f273c;
        case 0x4f2740u: goto label_4f2740;
        case 0x4f2744u: goto label_4f2744;
        case 0x4f2748u: goto label_4f2748;
        case 0x4f274cu: goto label_4f274c;
        case 0x4f2750u: goto label_4f2750;
        case 0x4f2754u: goto label_4f2754;
        case 0x4f2758u: goto label_4f2758;
        case 0x4f275cu: goto label_4f275c;
        case 0x4f2760u: goto label_4f2760;
        case 0x4f2764u: goto label_4f2764;
        case 0x4f2768u: goto label_4f2768;
        case 0x4f276cu: goto label_4f276c;
        case 0x4f2770u: goto label_4f2770;
        case 0x4f2774u: goto label_4f2774;
        case 0x4f2778u: goto label_4f2778;
        case 0x4f277cu: goto label_4f277c;
        case 0x4f2780u: goto label_4f2780;
        case 0x4f2784u: goto label_4f2784;
        case 0x4f2788u: goto label_4f2788;
        case 0x4f278cu: goto label_4f278c;
        case 0x4f2790u: goto label_4f2790;
        case 0x4f2794u: goto label_4f2794;
        case 0x4f2798u: goto label_4f2798;
        case 0x4f279cu: goto label_4f279c;
        case 0x4f27a0u: goto label_4f27a0;
        case 0x4f27a4u: goto label_4f27a4;
        case 0x4f27a8u: goto label_4f27a8;
        case 0x4f27acu: goto label_4f27ac;
        case 0x4f27b0u: goto label_4f27b0;
        case 0x4f27b4u: goto label_4f27b4;
        case 0x4f27b8u: goto label_4f27b8;
        case 0x4f27bcu: goto label_4f27bc;
        case 0x4f27c0u: goto label_4f27c0;
        case 0x4f27c4u: goto label_4f27c4;
        case 0x4f27c8u: goto label_4f27c8;
        case 0x4f27ccu: goto label_4f27cc;
        case 0x4f27d0u: goto label_4f27d0;
        case 0x4f27d4u: goto label_4f27d4;
        case 0x4f27d8u: goto label_4f27d8;
        case 0x4f27dcu: goto label_4f27dc;
        case 0x4f27e0u: goto label_4f27e0;
        case 0x4f27e4u: goto label_4f27e4;
        case 0x4f27e8u: goto label_4f27e8;
        case 0x4f27ecu: goto label_4f27ec;
        case 0x4f27f0u: goto label_4f27f0;
        case 0x4f27f4u: goto label_4f27f4;
        case 0x4f27f8u: goto label_4f27f8;
        case 0x4f27fcu: goto label_4f27fc;
        case 0x4f2800u: goto label_4f2800;
        case 0x4f2804u: goto label_4f2804;
        case 0x4f2808u: goto label_4f2808;
        case 0x4f280cu: goto label_4f280c;
        case 0x4f2810u: goto label_4f2810;
        case 0x4f2814u: goto label_4f2814;
        case 0x4f2818u: goto label_4f2818;
        case 0x4f281cu: goto label_4f281c;
        case 0x4f2820u: goto label_4f2820;
        case 0x4f2824u: goto label_4f2824;
        case 0x4f2828u: goto label_4f2828;
        case 0x4f282cu: goto label_4f282c;
        case 0x4f2830u: goto label_4f2830;
        case 0x4f2834u: goto label_4f2834;
        case 0x4f2838u: goto label_4f2838;
        case 0x4f283cu: goto label_4f283c;
        case 0x4f2840u: goto label_4f2840;
        case 0x4f2844u: goto label_4f2844;
        case 0x4f2848u: goto label_4f2848;
        case 0x4f284cu: goto label_4f284c;
        case 0x4f2850u: goto label_4f2850;
        case 0x4f2854u: goto label_4f2854;
        case 0x4f2858u: goto label_4f2858;
        case 0x4f285cu: goto label_4f285c;
        case 0x4f2860u: goto label_4f2860;
        case 0x4f2864u: goto label_4f2864;
        case 0x4f2868u: goto label_4f2868;
        case 0x4f286cu: goto label_4f286c;
        case 0x4f2870u: goto label_4f2870;
        case 0x4f2874u: goto label_4f2874;
        case 0x4f2878u: goto label_4f2878;
        case 0x4f287cu: goto label_4f287c;
        case 0x4f2880u: goto label_4f2880;
        case 0x4f2884u: goto label_4f2884;
        case 0x4f2888u: goto label_4f2888;
        case 0x4f288cu: goto label_4f288c;
        case 0x4f2890u: goto label_4f2890;
        case 0x4f2894u: goto label_4f2894;
        case 0x4f2898u: goto label_4f2898;
        case 0x4f289cu: goto label_4f289c;
        case 0x4f28a0u: goto label_4f28a0;
        case 0x4f28a4u: goto label_4f28a4;
        case 0x4f28a8u: goto label_4f28a8;
        case 0x4f28acu: goto label_4f28ac;
        case 0x4f28b0u: goto label_4f28b0;
        case 0x4f28b4u: goto label_4f28b4;
        case 0x4f28b8u: goto label_4f28b8;
        case 0x4f28bcu: goto label_4f28bc;
        case 0x4f28c0u: goto label_4f28c0;
        case 0x4f28c4u: goto label_4f28c4;
        case 0x4f28c8u: goto label_4f28c8;
        case 0x4f28ccu: goto label_4f28cc;
        case 0x4f28d0u: goto label_4f28d0;
        case 0x4f28d4u: goto label_4f28d4;
        case 0x4f28d8u: goto label_4f28d8;
        case 0x4f28dcu: goto label_4f28dc;
        case 0x4f28e0u: goto label_4f28e0;
        case 0x4f28e4u: goto label_4f28e4;
        case 0x4f28e8u: goto label_4f28e8;
        case 0x4f28ecu: goto label_4f28ec;
        case 0x4f28f0u: goto label_4f28f0;
        case 0x4f28f4u: goto label_4f28f4;
        case 0x4f28f8u: goto label_4f28f8;
        case 0x4f28fcu: goto label_4f28fc;
        case 0x4f2900u: goto label_4f2900;
        case 0x4f2904u: goto label_4f2904;
        case 0x4f2908u: goto label_4f2908;
        case 0x4f290cu: goto label_4f290c;
        case 0x4f2910u: goto label_4f2910;
        case 0x4f2914u: goto label_4f2914;
        case 0x4f2918u: goto label_4f2918;
        case 0x4f291cu: goto label_4f291c;
        case 0x4f2920u: goto label_4f2920;
        case 0x4f2924u: goto label_4f2924;
        case 0x4f2928u: goto label_4f2928;
        case 0x4f292cu: goto label_4f292c;
        case 0x4f2930u: goto label_4f2930;
        case 0x4f2934u: goto label_4f2934;
        case 0x4f2938u: goto label_4f2938;
        case 0x4f293cu: goto label_4f293c;
        case 0x4f2940u: goto label_4f2940;
        case 0x4f2944u: goto label_4f2944;
        case 0x4f2948u: goto label_4f2948;
        case 0x4f294cu: goto label_4f294c;
        case 0x4f2950u: goto label_4f2950;
        case 0x4f2954u: goto label_4f2954;
        case 0x4f2958u: goto label_4f2958;
        case 0x4f295cu: goto label_4f295c;
        case 0x4f2960u: goto label_4f2960;
        case 0x4f2964u: goto label_4f2964;
        case 0x4f2968u: goto label_4f2968;
        case 0x4f296cu: goto label_4f296c;
        case 0x4f2970u: goto label_4f2970;
        case 0x4f2974u: goto label_4f2974;
        case 0x4f2978u: goto label_4f2978;
        case 0x4f297cu: goto label_4f297c;
        case 0x4f2980u: goto label_4f2980;
        case 0x4f2984u: goto label_4f2984;
        case 0x4f2988u: goto label_4f2988;
        case 0x4f298cu: goto label_4f298c;
        case 0x4f2990u: goto label_4f2990;
        case 0x4f2994u: goto label_4f2994;
        case 0x4f2998u: goto label_4f2998;
        case 0x4f299cu: goto label_4f299c;
        case 0x4f29a0u: goto label_4f29a0;
        case 0x4f29a4u: goto label_4f29a4;
        case 0x4f29a8u: goto label_4f29a8;
        case 0x4f29acu: goto label_4f29ac;
        case 0x4f29b0u: goto label_4f29b0;
        case 0x4f29b4u: goto label_4f29b4;
        case 0x4f29b8u: goto label_4f29b8;
        case 0x4f29bcu: goto label_4f29bc;
        case 0x4f29c0u: goto label_4f29c0;
        case 0x4f29c4u: goto label_4f29c4;
        case 0x4f29c8u: goto label_4f29c8;
        case 0x4f29ccu: goto label_4f29cc;
        case 0x4f29d0u: goto label_4f29d0;
        case 0x4f29d4u: goto label_4f29d4;
        case 0x4f29d8u: goto label_4f29d8;
        case 0x4f29dcu: goto label_4f29dc;
        case 0x4f29e0u: goto label_4f29e0;
        case 0x4f29e4u: goto label_4f29e4;
        case 0x4f29e8u: goto label_4f29e8;
        case 0x4f29ecu: goto label_4f29ec;
        case 0x4f29f0u: goto label_4f29f0;
        case 0x4f29f4u: goto label_4f29f4;
        case 0x4f29f8u: goto label_4f29f8;
        case 0x4f29fcu: goto label_4f29fc;
        case 0x4f2a00u: goto label_4f2a00;
        case 0x4f2a04u: goto label_4f2a04;
        case 0x4f2a08u: goto label_4f2a08;
        case 0x4f2a0cu: goto label_4f2a0c;
        case 0x4f2a10u: goto label_4f2a10;
        case 0x4f2a14u: goto label_4f2a14;
        case 0x4f2a18u: goto label_4f2a18;
        case 0x4f2a1cu: goto label_4f2a1c;
        case 0x4f2a20u: goto label_4f2a20;
        case 0x4f2a24u: goto label_4f2a24;
        case 0x4f2a28u: goto label_4f2a28;
        case 0x4f2a2cu: goto label_4f2a2c;
        case 0x4f2a30u: goto label_4f2a30;
        case 0x4f2a34u: goto label_4f2a34;
        case 0x4f2a38u: goto label_4f2a38;
        case 0x4f2a3cu: goto label_4f2a3c;
        case 0x4f2a40u: goto label_4f2a40;
        case 0x4f2a44u: goto label_4f2a44;
        case 0x4f2a48u: goto label_4f2a48;
        case 0x4f2a4cu: goto label_4f2a4c;
        case 0x4f2a50u: goto label_4f2a50;
        case 0x4f2a54u: goto label_4f2a54;
        case 0x4f2a58u: goto label_4f2a58;
        case 0x4f2a5cu: goto label_4f2a5c;
        case 0x4f2a60u: goto label_4f2a60;
        case 0x4f2a64u: goto label_4f2a64;
        case 0x4f2a68u: goto label_4f2a68;
        case 0x4f2a6cu: goto label_4f2a6c;
        case 0x4f2a70u: goto label_4f2a70;
        case 0x4f2a74u: goto label_4f2a74;
        case 0x4f2a78u: goto label_4f2a78;
        case 0x4f2a7cu: goto label_4f2a7c;
        case 0x4f2a80u: goto label_4f2a80;
        case 0x4f2a84u: goto label_4f2a84;
        case 0x4f2a88u: goto label_4f2a88;
        case 0x4f2a8cu: goto label_4f2a8c;
        case 0x4f2a90u: goto label_4f2a90;
        case 0x4f2a94u: goto label_4f2a94;
        case 0x4f2a98u: goto label_4f2a98;
        case 0x4f2a9cu: goto label_4f2a9c;
        case 0x4f2aa0u: goto label_4f2aa0;
        case 0x4f2aa4u: goto label_4f2aa4;
        case 0x4f2aa8u: goto label_4f2aa8;
        case 0x4f2aacu: goto label_4f2aac;
        case 0x4f2ab0u: goto label_4f2ab0;
        case 0x4f2ab4u: goto label_4f2ab4;
        case 0x4f2ab8u: goto label_4f2ab8;
        case 0x4f2abcu: goto label_4f2abc;
        case 0x4f2ac0u: goto label_4f2ac0;
        case 0x4f2ac4u: goto label_4f2ac4;
        case 0x4f2ac8u: goto label_4f2ac8;
        case 0x4f2accu: goto label_4f2acc;
        case 0x4f2ad0u: goto label_4f2ad0;
        case 0x4f2ad4u: goto label_4f2ad4;
        case 0x4f2ad8u: goto label_4f2ad8;
        case 0x4f2adcu: goto label_4f2adc;
        case 0x4f2ae0u: goto label_4f2ae0;
        case 0x4f2ae4u: goto label_4f2ae4;
        case 0x4f2ae8u: goto label_4f2ae8;
        case 0x4f2aecu: goto label_4f2aec;
        case 0x4f2af0u: goto label_4f2af0;
        case 0x4f2af4u: goto label_4f2af4;
        case 0x4f2af8u: goto label_4f2af8;
        case 0x4f2afcu: goto label_4f2afc;
        case 0x4f2b00u: goto label_4f2b00;
        case 0x4f2b04u: goto label_4f2b04;
        case 0x4f2b08u: goto label_4f2b08;
        case 0x4f2b0cu: goto label_4f2b0c;
        case 0x4f2b10u: goto label_4f2b10;
        case 0x4f2b14u: goto label_4f2b14;
        case 0x4f2b18u: goto label_4f2b18;
        case 0x4f2b1cu: goto label_4f2b1c;
        case 0x4f2b20u: goto label_4f2b20;
        case 0x4f2b24u: goto label_4f2b24;
        case 0x4f2b28u: goto label_4f2b28;
        case 0x4f2b2cu: goto label_4f2b2c;
        case 0x4f2b30u: goto label_4f2b30;
        case 0x4f2b34u: goto label_4f2b34;
        case 0x4f2b38u: goto label_4f2b38;
        case 0x4f2b3cu: goto label_4f2b3c;
        case 0x4f2b40u: goto label_4f2b40;
        case 0x4f2b44u: goto label_4f2b44;
        case 0x4f2b48u: goto label_4f2b48;
        case 0x4f2b4cu: goto label_4f2b4c;
        case 0x4f2b50u: goto label_4f2b50;
        case 0x4f2b54u: goto label_4f2b54;
        case 0x4f2b58u: goto label_4f2b58;
        case 0x4f2b5cu: goto label_4f2b5c;
        case 0x4f2b60u: goto label_4f2b60;
        case 0x4f2b64u: goto label_4f2b64;
        case 0x4f2b68u: goto label_4f2b68;
        case 0x4f2b6cu: goto label_4f2b6c;
        case 0x4f2b70u: goto label_4f2b70;
        case 0x4f2b74u: goto label_4f2b74;
        case 0x4f2b78u: goto label_4f2b78;
        case 0x4f2b7cu: goto label_4f2b7c;
        default: break;
    }

    ctx->pc = 0x4f2700u;

label_4f2700:
    // 0x4f2700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f2700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f2704:
    // 0x4f2704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f2704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f2708:
    // 0x4f2708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f2708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f270c:
    // 0x4f270c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f2710:
    // 0x4f2710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f2710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2714:
    // 0x4f2714: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4f2718:
    if (ctx->pc == 0x4F2718u) {
        ctx->pc = 0x4F2718u;
            // 0x4f2718: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F271Cu;
        goto label_4f271c;
    }
    ctx->pc = 0x4F2714u;
    {
        const bool branch_taken_0x4f2714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2714u;
            // 0x4f2718: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2714) {
            ctx->pc = 0x4F2848u;
            goto label_4f2848;
        }
    }
    ctx->pc = 0x4F271Cu;
label_4f271c:
    // 0x4f271c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f271cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f2720:
    // 0x4f2720: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f2720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4f2724:
    // 0x4f2724: 0x24634240  addiu       $v1, $v1, 0x4240
    ctx->pc = 0x4f2724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16960));
label_4f2728:
    // 0x4f2728: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f2728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_4f272c:
    // 0x4f272c: 0x24424278  addiu       $v0, $v0, 0x4278
    ctx->pc = 0x4f272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17016));
label_4f2730:
    // 0x4f2730: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f2730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4f2734:
    // 0x4f2734: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4f2734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4f2738:
    // 0x4f2738: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4f2738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4f273c:
    // 0x4f273c: 0xc0407c0  jal         func_101F00
label_4f2740:
    if (ctx->pc == 0x4F2740u) {
        ctx->pc = 0x4F2740u;
            // 0x4f2740: 0x24a537d0  addiu       $a1, $a1, 0x37D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14288));
        ctx->pc = 0x4F2744u;
        goto label_4f2744;
    }
    ctx->pc = 0x4F273Cu;
    SET_GPR_U32(ctx, 31, 0x4F2744u);
    ctx->pc = 0x4F2740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F273Cu;
            // 0x4f2740: 0x24a537d0  addiu       $a1, $a1, 0x37D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2744u; }
        if (ctx->pc != 0x4F2744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2744u; }
        if (ctx->pc != 0x4F2744u) { return; }
    }
    ctx->pc = 0x4F2744u;
label_4f2744:
    // 0x4f2744: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4f2744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4f2748:
    // 0x4f2748: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4f274c:
    if (ctx->pc == 0x4F274Cu) {
        ctx->pc = 0x4F274Cu;
            // 0x4f274c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4F2750u;
        goto label_4f2750;
    }
    ctx->pc = 0x4F2748u;
    {
        const bool branch_taken_0x4f2748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2748) {
            ctx->pc = 0x4F274Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2748u;
            // 0x4f274c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F275Cu;
            goto label_4f275c;
        }
    }
    ctx->pc = 0x4F2750u;
label_4f2750:
    // 0x4f2750: 0xc07507c  jal         func_1D41F0
label_4f2754:
    if (ctx->pc == 0x4F2754u) {
        ctx->pc = 0x4F2754u;
            // 0x4f2754: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4F2758u;
        goto label_4f2758;
    }
    ctx->pc = 0x4F2750u;
    SET_GPR_U32(ctx, 31, 0x4F2758u);
    ctx->pc = 0x4F2754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2750u;
            // 0x4f2754: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2758u; }
        if (ctx->pc != 0x4F2758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2758u; }
        if (ctx->pc != 0x4F2758u) { return; }
    }
    ctx->pc = 0x4F2758u;
label_4f2758:
    // 0x4f2758: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4f2758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4f275c:
    // 0x4f275c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4f2760:
    if (ctx->pc == 0x4F2760u) {
        ctx->pc = 0x4F2760u;
            // 0x4f2760: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4F2764u;
        goto label_4f2764;
    }
    ctx->pc = 0x4F275Cu;
    {
        const bool branch_taken_0x4f275c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f275c) {
            ctx->pc = 0x4F2760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F275Cu;
            // 0x4f2760: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F278Cu;
            goto label_4f278c;
        }
    }
    ctx->pc = 0x4F2764u;
label_4f2764:
    // 0x4f2764: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4f2768:
    if (ctx->pc == 0x4F2768u) {
        ctx->pc = 0x4F276Cu;
        goto label_4f276c;
    }
    ctx->pc = 0x4F2764u;
    {
        const bool branch_taken_0x4f2764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2764) {
            ctx->pc = 0x4F2788u;
            goto label_4f2788;
        }
    }
    ctx->pc = 0x4F276Cu;
label_4f276c:
    // 0x4f276c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f2770:
    if (ctx->pc == 0x4F2770u) {
        ctx->pc = 0x4F2774u;
        goto label_4f2774;
    }
    ctx->pc = 0x4F276Cu;
    {
        const bool branch_taken_0x4f276c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f276c) {
            ctx->pc = 0x4F2788u;
            goto label_4f2788;
        }
    }
    ctx->pc = 0x4F2774u;
label_4f2774:
    // 0x4f2774: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4f2774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4f2778:
    // 0x4f2778: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4f277c:
    if (ctx->pc == 0x4F277Cu) {
        ctx->pc = 0x4F2780u;
        goto label_4f2780;
    }
    ctx->pc = 0x4F2778u;
    {
        const bool branch_taken_0x4f2778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2778) {
            ctx->pc = 0x4F2788u;
            goto label_4f2788;
        }
    }
    ctx->pc = 0x4F2780u;
label_4f2780:
    // 0x4f2780: 0xc0400a8  jal         func_1002A0
label_4f2784:
    if (ctx->pc == 0x4F2784u) {
        ctx->pc = 0x4F2788u;
        goto label_4f2788;
    }
    ctx->pc = 0x4F2780u;
    SET_GPR_U32(ctx, 31, 0x4F2788u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2788u; }
        if (ctx->pc != 0x4F2788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2788u; }
        if (ctx->pc != 0x4F2788u) { return; }
    }
    ctx->pc = 0x4F2788u;
label_4f2788:
    // 0x4f2788: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4f2788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4f278c:
    // 0x4f278c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4f2790:
    if (ctx->pc == 0x4F2790u) {
        ctx->pc = 0x4F2790u;
            // 0x4f2790: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4F2794u;
        goto label_4f2794;
    }
    ctx->pc = 0x4F278Cu;
    {
        const bool branch_taken_0x4f278c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f278c) {
            ctx->pc = 0x4F2790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F278Cu;
            // 0x4f2790: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F27BCu;
            goto label_4f27bc;
        }
    }
    ctx->pc = 0x4F2794u;
label_4f2794:
    // 0x4f2794: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4f2798:
    if (ctx->pc == 0x4F2798u) {
        ctx->pc = 0x4F279Cu;
        goto label_4f279c;
    }
    ctx->pc = 0x4F2794u;
    {
        const bool branch_taken_0x4f2794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2794) {
            ctx->pc = 0x4F27B8u;
            goto label_4f27b8;
        }
    }
    ctx->pc = 0x4F279Cu;
label_4f279c:
    // 0x4f279c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f27a0:
    if (ctx->pc == 0x4F27A0u) {
        ctx->pc = 0x4F27A4u;
        goto label_4f27a4;
    }
    ctx->pc = 0x4F279Cu;
    {
        const bool branch_taken_0x4f279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f279c) {
            ctx->pc = 0x4F27B8u;
            goto label_4f27b8;
        }
    }
    ctx->pc = 0x4F27A4u;
label_4f27a4:
    // 0x4f27a4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4f27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4f27a8:
    // 0x4f27a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4f27ac:
    if (ctx->pc == 0x4F27ACu) {
        ctx->pc = 0x4F27B0u;
        goto label_4f27b0;
    }
    ctx->pc = 0x4F27A8u;
    {
        const bool branch_taken_0x4f27a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f27a8) {
            ctx->pc = 0x4F27B8u;
            goto label_4f27b8;
        }
    }
    ctx->pc = 0x4F27B0u;
label_4f27b0:
    // 0x4f27b0: 0xc0400a8  jal         func_1002A0
label_4f27b4:
    if (ctx->pc == 0x4F27B4u) {
        ctx->pc = 0x4F27B8u;
        goto label_4f27b8;
    }
    ctx->pc = 0x4F27B0u;
    SET_GPR_U32(ctx, 31, 0x4F27B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F27B8u; }
        if (ctx->pc != 0x4F27B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F27B8u; }
        if (ctx->pc != 0x4F27B8u) { return; }
    }
    ctx->pc = 0x4F27B8u;
label_4f27b8:
    // 0x4f27b8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4f27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4f27bc:
    // 0x4f27bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4f27c0:
    if (ctx->pc == 0x4F27C0u) {
        ctx->pc = 0x4F27C4u;
        goto label_4f27c4;
    }
    ctx->pc = 0x4F27BCu;
    {
        const bool branch_taken_0x4f27bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f27bc) {
            ctx->pc = 0x4F27D8u;
            goto label_4f27d8;
        }
    }
    ctx->pc = 0x4F27C4u;
label_4f27c4:
    // 0x4f27c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4f27c8:
    // 0x4f27c8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f27c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4f27cc:
    // 0x4f27cc: 0x24634228  addiu       $v1, $v1, 0x4228
    ctx->pc = 0x4f27ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16936));
label_4f27d0:
    // 0x4f27d0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4f27d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4f27d4:
    // 0x4f27d4: 0xac40aae0  sw          $zero, -0x5520($v0)
    ctx->pc = 0x4f27d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945504), GPR_U32(ctx, 0));
label_4f27d8:
    // 0x4f27d8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4f27dc:
    if (ctx->pc == 0x4F27DCu) {
        ctx->pc = 0x4F27DCu;
            // 0x4f27dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4F27E0u;
        goto label_4f27e0;
    }
    ctx->pc = 0x4F27D8u;
    {
        const bool branch_taken_0x4f27d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f27d8) {
            ctx->pc = 0x4F27DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F27D8u;
            // 0x4f27dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F2834u;
            goto label_4f2834;
        }
    }
    ctx->pc = 0x4F27E0u;
label_4f27e0:
    // 0x4f27e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4f27e4:
    // 0x4f27e4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4f27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4f27e8:
    // 0x4f27e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4f27ec:
    // 0x4f27ec: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4f27ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4f27f0:
    // 0x4f27f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f27f4:
    if (ctx->pc == 0x4F27F4u) {
        ctx->pc = 0x4F27F4u;
            // 0x4f27f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4F27F8u;
        goto label_4f27f8;
    }
    ctx->pc = 0x4F27F0u;
    {
        const bool branch_taken_0x4f27f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f27f0) {
            ctx->pc = 0x4F27F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F27F0u;
            // 0x4f27f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F280Cu;
            goto label_4f280c;
        }
    }
    ctx->pc = 0x4F27F8u;
label_4f27f8:
    // 0x4f27f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f27f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f27fc:
    // 0x4f27fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f27fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f2800:
    // 0x4f2800: 0x320f809  jalr        $t9
label_4f2804:
    if (ctx->pc == 0x4F2804u) {
        ctx->pc = 0x4F2804u;
            // 0x4f2804: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F2808u;
        goto label_4f2808;
    }
    ctx->pc = 0x4F2800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F2808u);
        ctx->pc = 0x4F2804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2800u;
            // 0x4f2804: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F2808u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F2808u; }
            if (ctx->pc != 0x4F2808u) { return; }
        }
        }
    }
    ctx->pc = 0x4F2808u;
label_4f2808:
    // 0x4f2808: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4f2808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4f280c:
    // 0x4f280c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4f2810:
    if (ctx->pc == 0x4F2810u) {
        ctx->pc = 0x4F2810u;
            // 0x4f2810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2814u;
        goto label_4f2814;
    }
    ctx->pc = 0x4F280Cu;
    {
        const bool branch_taken_0x4f280c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f280c) {
            ctx->pc = 0x4F2810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F280Cu;
            // 0x4f2810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F2828u;
            goto label_4f2828;
        }
    }
    ctx->pc = 0x4F2814u;
label_4f2814:
    // 0x4f2814: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f2814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f2818:
    // 0x4f2818: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4f2818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4f281c:
    // 0x4f281c: 0x320f809  jalr        $t9
label_4f2820:
    if (ctx->pc == 0x4F2820u) {
        ctx->pc = 0x4F2820u;
            // 0x4f2820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F2824u;
        goto label_4f2824;
    }
    ctx->pc = 0x4F281Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F2824u);
        ctx->pc = 0x4F2820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F281Cu;
            // 0x4f2820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F2824u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F2824u; }
            if (ctx->pc != 0x4F2824u) { return; }
        }
        }
    }
    ctx->pc = 0x4F2824u;
label_4f2824:
    // 0x4f2824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f2824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f2828:
    // 0x4f2828: 0xc075bf8  jal         func_1D6FE0
label_4f282c:
    if (ctx->pc == 0x4F282Cu) {
        ctx->pc = 0x4F282Cu;
            // 0x4f282c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2830u;
        goto label_4f2830;
    }
    ctx->pc = 0x4F2828u;
    SET_GPR_U32(ctx, 31, 0x4F2830u);
    ctx->pc = 0x4F282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2828u;
            // 0x4f282c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2830u; }
        if (ctx->pc != 0x4F2830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2830u; }
        if (ctx->pc != 0x4F2830u) { return; }
    }
    ctx->pc = 0x4F2830u;
label_4f2830:
    // 0x4f2830: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4f2830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4f2834:
    // 0x4f2834: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f2834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4f2838:
    // 0x4f2838: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4f283c:
    if (ctx->pc == 0x4F283Cu) {
        ctx->pc = 0x4F283Cu;
            // 0x4f283c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2840u;
        goto label_4f2840;
    }
    ctx->pc = 0x4F2838u;
    {
        const bool branch_taken_0x4f2838 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f2838) {
            ctx->pc = 0x4F283Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2838u;
            // 0x4f283c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F284Cu;
            goto label_4f284c;
        }
    }
    ctx->pc = 0x4F2840u;
label_4f2840:
    // 0x4f2840: 0xc0400a8  jal         func_1002A0
label_4f2844:
    if (ctx->pc == 0x4F2844u) {
        ctx->pc = 0x4F2844u;
            // 0x4f2844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2848u;
        goto label_4f2848;
    }
    ctx->pc = 0x4F2840u;
    SET_GPR_U32(ctx, 31, 0x4F2848u);
    ctx->pc = 0x4F2844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2840u;
            // 0x4f2844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2848u; }
        if (ctx->pc != 0x4F2848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2848u; }
        if (ctx->pc != 0x4F2848u) { return; }
    }
    ctx->pc = 0x4F2848u;
label_4f2848:
    // 0x4f2848: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f2848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f284c:
    // 0x4f284c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f284cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f2850:
    // 0x4f2850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f2850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2854:
    // 0x4f2854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2858:
    // 0x4f2858: 0x3e00008  jr          $ra
label_4f285c:
    if (ctx->pc == 0x4F285Cu) {
        ctx->pc = 0x4F285Cu;
            // 0x4f285c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F2860u;
        goto label_4f2860;
    }
    ctx->pc = 0x4F2858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F285Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2858u;
            // 0x4f285c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F2860u;
label_4f2860:
    // 0x4f2860: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4f2860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4f2864:
    // 0x4f2864: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f2864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f2868:
    // 0x4f2868: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4f2868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4f286c:
    // 0x4f286c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4f286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4f2870:
    // 0x4f2870: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4f2870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4f2874:
    // 0x4f2874: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4f2874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4f2878:
    // 0x4f2878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f2878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f287c:
    // 0x4f287c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f2880:
    // 0x4f2880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f2880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f2884:
    // 0x4f2884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f2884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f2888:
    // 0x4f2888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f2888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f288c:
    // 0x4f288c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4f288cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4f2890:
    // 0x4f2890: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4f2894:
    if (ctx->pc == 0x4F2894u) {
        ctx->pc = 0x4F2894u;
            // 0x4f2894: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2898u;
        goto label_4f2898;
    }
    ctx->pc = 0x4F2890u;
    {
        const bool branch_taken_0x4f2890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4F2894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2890u;
            // 0x4f2894: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2890) {
            ctx->pc = 0x4F28E0u;
            goto label_4f28e0;
        }
    }
    ctx->pc = 0x4F2898u;
label_4f2898:
    // 0x4f2898: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4f2898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f289c:
    // 0x4f289c: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
label_4f28a0:
    if (ctx->pc == 0x4F28A0u) {
        ctx->pc = 0x4F28A4u;
        goto label_4f28a4;
    }
    ctx->pc = 0x4F289Cu;
    {
        const bool branch_taken_0x4f289c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f289c) {
            ctx->pc = 0x4F2970u;
            goto label_4f2970;
        }
    }
    ctx->pc = 0x4F28A4u;
label_4f28a4:
    // 0x4f28a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f28a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f28a8:
    // 0x4f28a8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4f28ac:
    if (ctx->pc == 0x4F28ACu) {
        ctx->pc = 0x4F28B0u;
        goto label_4f28b0;
    }
    ctx->pc = 0x4F28A8u;
    {
        const bool branch_taken_0x4f28a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f28a8) {
            ctx->pc = 0x4F28B8u;
            goto label_4f28b8;
        }
    }
    ctx->pc = 0x4F28B0u;
label_4f28b0:
    // 0x4f28b0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_4f28b4:
    if (ctx->pc == 0x4F28B4u) {
        ctx->pc = 0x4F28B8u;
        goto label_4f28b8;
    }
    ctx->pc = 0x4F28B0u;
    {
        const bool branch_taken_0x4f28b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f28b0) {
            ctx->pc = 0x4F2970u;
            goto label_4f2970;
        }
    }
    ctx->pc = 0x4F28B8u;
label_4f28b8:
    // 0x4f28b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f28bc:
    // 0x4f28bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f28bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f28c0:
    // 0x4f28c0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4f28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4f28c4:
    // 0x4f28c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4f28c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4f28c8:
    // 0x4f28c8: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4f28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4f28cc:
    // 0x4f28cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4f28ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4f28d0:
    // 0x4f28d0: 0x320f809  jalr        $t9
label_4f28d4:
    if (ctx->pc == 0x4F28D4u) {
        ctx->pc = 0x4F28D4u;
            // 0x4f28d4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4F28D8u;
        goto label_4f28d8;
    }
    ctx->pc = 0x4F28D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F28D8u);
        ctx->pc = 0x4F28D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F28D0u;
            // 0x4f28d4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F28D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F28D8u; }
            if (ctx->pc != 0x4F28D8u) { return; }
        }
        }
    }
    ctx->pc = 0x4F28D8u;
label_4f28d8:
    // 0x4f28d8: 0x10000025  b           . + 4 + (0x25 << 2)
label_4f28dc:
    if (ctx->pc == 0x4F28DCu) {
        ctx->pc = 0x4F28E0u;
        goto label_4f28e0;
    }
    ctx->pc = 0x4F28D8u;
    {
        const bool branch_taken_0x4f28d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f28d8) {
            ctx->pc = 0x4F2970u;
            goto label_4f2970;
        }
    }
    ctx->pc = 0x4F28E0u;
label_4f28e0:
    // 0x4f28e0: 0x8e740070  lw          $s4, 0x70($s3)
    ctx->pc = 0x4f28e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4f28e4:
    // 0x4f28e4: 0x12800022  beqz        $s4, . + 4 + (0x22 << 2)
label_4f28e8:
    if (ctx->pc == 0x4F28E8u) {
        ctx->pc = 0x4F28ECu;
        goto label_4f28ec;
    }
    ctx->pc = 0x4F28E4u;
    {
        const bool branch_taken_0x4f28e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f28e4) {
            ctx->pc = 0x4F2970u;
            goto label_4f2970;
        }
    }
    ctx->pc = 0x4F28ECu;
label_4f28ec:
    // 0x4f28ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f28f0:
    // 0x4f28f0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4f28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4f28f4:
    // 0x4f28f4: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4f28f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4f28f8:
    // 0x4f28f8: 0x26770084  addiu       $s7, $s3, 0x84
    ctx->pc = 0x4f28f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_4f28fc:
    // 0x4f28fc: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x4f28fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4f2900:
    // 0x4f2900: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f2900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f2904:
    // 0x4f2904: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x4f2904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4f2908:
    // 0x4f2908: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4f2908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4f290c:
    // 0x4f290c: 0x8c50e370  lw          $s0, -0x1C90($v0)
    ctx->pc = 0x4f290cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4f2910:
    // 0x4f2910: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4f2910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4f2914:
    // 0x4f2914: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x4f2914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_4f2918:
    // 0x4f2918: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4f2918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4f291c:
    // 0x4f291c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4f291cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f2920:
    // 0x4f2920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f2920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f2924:
    // 0x4f2924: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f2924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f2928:
    // 0x4f2928: 0xc04e738  jal         func_139CE0
label_4f292c:
    if (ctx->pc == 0x4F292Cu) {
        ctx->pc = 0x4F292Cu;
            // 0x4f292c: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4F2930u;
        goto label_4f2930;
    }
    ctx->pc = 0x4F2928u;
    SET_GPR_U32(ctx, 31, 0x4F2930u);
    ctx->pc = 0x4F292Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2928u;
            // 0x4f292c: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2930u; }
        if (ctx->pc != 0x4F2930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2930u; }
        if (ctx->pc != 0x4F2930u) { return; }
    }
    ctx->pc = 0x4F2930u;
label_4f2930:
    // 0x4f2930: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4f2930u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2934:
    // 0x4f2934: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4f2934u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2938:
    // 0x4f2938: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4f2938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4f293c:
    // 0x4f293c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4f293cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4f2940:
    // 0x4f2940: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f2940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2944:
    // 0x4f2944: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f2944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f2948:
    // 0x4f2948: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4f2948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f294c:
    // 0x4f294c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4f294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4f2950:
    // 0x4f2950: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f2950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f2954:
    // 0x4f2954: 0xc13cbf0  jal         func_4F2FC0
label_4f2958:
    if (ctx->pc == 0x4F2958u) {
        ctx->pc = 0x4F2958u;
            // 0x4f2958: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4F295Cu;
        goto label_4f295c;
    }
    ctx->pc = 0x4F2954u;
    SET_GPR_U32(ctx, 31, 0x4F295Cu);
    ctx->pc = 0x4F2958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2954u;
            // 0x4f2958: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F2FC0u;
    if (runtime->hasFunction(0x4F2FC0u)) {
        auto targetFn = runtime->lookupFunction(0x4F2FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F295Cu; }
        if (ctx->pc != 0x4F295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F2FC0_0x4f2fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F295Cu; }
        if (ctx->pc != 0x4F295Cu) { return; }
    }
    ctx->pc = 0x4F295Cu;
label_4f295c:
    // 0x4f295c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4f295cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4f2960:
    // 0x4f2960: 0x2d4182b  sltu        $v1, $s6, $s4
    ctx->pc = 0x4f2960u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4f2964:
    // 0x4f2964: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_4f2968:
    if (ctx->pc == 0x4F2968u) {
        ctx->pc = 0x4F2968u;
            // 0x4f2968: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x4F296Cu;
        goto label_4f296c;
    }
    ctx->pc = 0x4F2964u;
    {
        const bool branch_taken_0x4f2964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F2968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2964u;
            // 0x4f2968: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2964) {
            ctx->pc = 0x4F2938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f2938;
        }
    }
    ctx->pc = 0x4F296Cu;
label_4f296c:
    // 0x4f296c: 0x0  nop
    ctx->pc = 0x4f296cu;
    // NOP
label_4f2970:
    // 0x4f2970: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4f2970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4f2974:
    // 0x4f2974: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4f2974u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f2978:
    // 0x4f2978: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4f2978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f297c:
    // 0x4f297c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4f297cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f2980:
    // 0x4f2980: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f2980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f2984:
    // 0x4f2984: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f2984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f2988:
    // 0x4f2988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f2988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f298c:
    // 0x4f298c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f298cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2990:
    // 0x4f2990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2994:
    // 0x4f2994: 0x3e00008  jr          $ra
label_4f2998:
    if (ctx->pc == 0x4F2998u) {
        ctx->pc = 0x4F2998u;
            // 0x4f2998: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4F299Cu;
        goto label_4f299c;
    }
    ctx->pc = 0x4F2994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2994u;
            // 0x4f2998: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F299Cu;
label_4f299c:
    // 0x4f299c: 0x0  nop
    ctx->pc = 0x4f299cu;
    // NOP
label_4f29a0:
    // 0x4f29a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f29a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f29a4:
    // 0x4f29a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f29a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f29a8:
    // 0x4f29a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4f29a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4f29ac:
    // 0x4f29ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f29acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f29b0:
    // 0x4f29b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f29b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f29b4:
    // 0x4f29b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f29b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f29b8:
    // 0x4f29b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f29b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f29bc:
    // 0x4f29bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f29bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f29c0:
    // 0x4f29c0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4f29c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4f29c4:
    // 0x4f29c4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4f29c8:
    if (ctx->pc == 0x4F29C8u) {
        ctx->pc = 0x4F29C8u;
            // 0x4f29c8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F29CCu;
        goto label_4f29cc;
    }
    ctx->pc = 0x4F29C4u;
    {
        const bool branch_taken_0x4f29c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4F29C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F29C4u;
            // 0x4f29c8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f29c4) {
            ctx->pc = 0x4F29F8u;
            goto label_4f29f8;
        }
    }
    ctx->pc = 0x4F29CCu;
label_4f29cc:
    // 0x4f29cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4f29ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f29d0:
    // 0x4f29d0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4f29d4:
    if (ctx->pc == 0x4F29D4u) {
        ctx->pc = 0x4F29D4u;
            // 0x4f29d4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4F29D8u;
        goto label_4f29d8;
    }
    ctx->pc = 0x4F29D0u;
    {
        const bool branch_taken_0x4f29d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f29d0) {
            ctx->pc = 0x4F29D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F29D0u;
            // 0x4f29d4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F29ECu;
            goto label_4f29ec;
        }
    }
    ctx->pc = 0x4F29D8u;
label_4f29d8:
    // 0x4f29d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f29d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f29dc:
    // 0x4f29dc: 0x10a3003e  beq         $a1, $v1, . + 4 + (0x3E << 2)
label_4f29e0:
    if (ctx->pc == 0x4F29E0u) {
        ctx->pc = 0x4F29E4u;
        goto label_4f29e4;
    }
    ctx->pc = 0x4F29DCu;
    {
        const bool branch_taken_0x4f29dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f29dc) {
            ctx->pc = 0x4F2AD8u;
            goto label_4f2ad8;
        }
    }
    ctx->pc = 0x4F29E4u;
label_4f29e4:
    // 0x4f29e4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_4f29e8:
    if (ctx->pc == 0x4F29E8u) {
        ctx->pc = 0x4F29ECu;
        goto label_4f29ec;
    }
    ctx->pc = 0x4F29E4u;
    {
        const bool branch_taken_0x4f29e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f29e4) {
            ctx->pc = 0x4F2AD8u;
            goto label_4f2ad8;
        }
    }
    ctx->pc = 0x4F29ECu;
label_4f29ec:
    // 0x4f29ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4f29ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4f29f0:
    // 0x4f29f0: 0x320f809  jalr        $t9
label_4f29f4:
    if (ctx->pc == 0x4F29F4u) {
        ctx->pc = 0x4F29F8u;
        goto label_4f29f8;
    }
    ctx->pc = 0x4F29F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F29F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F29F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F29F8u; }
            if (ctx->pc != 0x4F29F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4F29F8u;
label_4f29f8:
    // 0x4f29f8: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x4f29f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_4f29fc:
    // 0x4f29fc: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_4f2a00:
    if (ctx->pc == 0x4F2A00u) {
        ctx->pc = 0x4F2A04u;
        goto label_4f2a04;
    }
    ctx->pc = 0x4F29FCu;
    {
        const bool branch_taken_0x4f29fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f29fc) {
            ctx->pc = 0x4F2AD8u;
            goto label_4f2ad8;
        }
    }
    ctx->pc = 0x4F2A04u;
label_4f2a04:
    // 0x4f2a04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f2a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4f2a08:
    // 0x4f2a08: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4f2a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4f2a0c:
    // 0x4f2a0c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4f2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4f2a10:
    // 0x4f2a10: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x4f2a10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_4f2a14:
    // 0x4f2a14: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_4f2a18:
    if (ctx->pc == 0x4F2A18u) {
        ctx->pc = 0x4F2A1Cu;
        goto label_4f2a1c;
    }
    ctx->pc = 0x4F2A14u;
    {
        const bool branch_taken_0x4f2a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f2a14) {
            ctx->pc = 0x4F2AD8u;
            goto label_4f2ad8;
        }
    }
    ctx->pc = 0x4F2A1Cu;
label_4f2a1c:
    // 0x4f2a1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f2a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2a20:
    // 0x4f2a20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f2a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2a24:
    // 0x4f2a24: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4f2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4f2a28:
    // 0x4f2a28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4f2a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4f2a2c:
    // 0x4f2a2c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4f2a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f2a30:
    // 0x4f2a30: 0xc0f4cb0  jal         func_3D32C0
label_4f2a34:
    if (ctx->pc == 0x4F2A34u) {
        ctx->pc = 0x4F2A34u;
            // 0x4f2a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2A38u;
        goto label_4f2a38;
    }
    ctx->pc = 0x4F2A30u;
    SET_GPR_U32(ctx, 31, 0x4F2A38u);
    ctx->pc = 0x4F2A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2A30u;
            // 0x4f2a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D32C0u;
    if (runtime->hasFunction(0x3D32C0u)) {
        auto targetFn = runtime->lookupFunction(0x3D32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2A38u; }
        if (ctx->pc != 0x4F2A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D32C0_0x3d32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2A38u; }
        if (ctx->pc != 0x4F2A38u) { return; }
    }
    ctx->pc = 0x4F2A38u;
label_4f2a38:
    // 0x4f2a38: 0xc0e3658  jal         func_38D960
label_4f2a3c:
    if (ctx->pc == 0x4F2A3Cu) {
        ctx->pc = 0x4F2A3Cu;
            // 0x4f2a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2A40u;
        goto label_4f2a40;
    }
    ctx->pc = 0x4F2A38u;
    SET_GPR_U32(ctx, 31, 0x4F2A40u);
    ctx->pc = 0x4F2A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2A38u;
            // 0x4f2a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2A40u; }
        if (ctx->pc != 0x4F2A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2A40u; }
        if (ctx->pc != 0x4F2A40u) { return; }
    }
    ctx->pc = 0x4F2A40u;
label_4f2a40:
    // 0x4f2a40: 0xc0f4ac4  jal         func_3D2B10
label_4f2a44:
    if (ctx->pc == 0x4F2A44u) {
        ctx->pc = 0x4F2A44u;
            // 0x4f2a44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2A48u;
        goto label_4f2a48;
    }
    ctx->pc = 0x4F2A40u;
    SET_GPR_U32(ctx, 31, 0x4F2A48u);
    ctx->pc = 0x4F2A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2A40u;
            // 0x4f2a44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2B10u;
    if (runtime->hasFunction(0x3D2B10u)) {
        auto targetFn = runtime->lookupFunction(0x3D2B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2A48u; }
        if (ctx->pc != 0x4F2A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2B10_0x3d2b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2A48u; }
        if (ctx->pc != 0x4F2A48u) { return; }
    }
    ctx->pc = 0x4F2A48u;
label_4f2a48:
    // 0x4f2a48: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x4f2a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_4f2a4c:
    // 0x4f2a4c: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4f2a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4f2a50:
    // 0x4f2a50: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x4f2a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_4f2a54:
    // 0x4f2a54: 0xc640027c  lwc1        $f0, 0x27C($s2)
    ctx->pc = 0x4f2a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f2a58:
    // 0x4f2a58: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x4f2a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f2a5c:
    // 0x4f2a5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4f2a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4f2a60:
    // 0x4f2a60: 0xe640027c  swc1        $f0, 0x27C($s2)
    ctx->pc = 0x4f2a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 636), bits); }
label_4f2a64:
    // 0x4f2a64: 0x8c63aae0  lw          $v1, -0x5520($v1)
    ctx->pc = 0x4f2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945504)));
label_4f2a68:
    // 0x4f2a68: 0xc640027c  lwc1        $f0, 0x27C($s2)
    ctx->pc = 0x4f2a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f2a6c:
    // 0x4f2a6c: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x4f2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_4f2a70:
    // 0x4f2a70: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4f2a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f2a74:
    // 0x4f2a74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4f2a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f2a78:
    // 0x4f2a78: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4f2a7c:
    if (ctx->pc == 0x4F2A7Cu) {
        ctx->pc = 0x4F2A80u;
        goto label_4f2a80;
    }
    ctx->pc = 0x4F2A78u;
    {
        const bool branch_taken_0x4f2a78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f2a78) {
            ctx->pc = 0x4F2A88u;
            goto label_4f2a88;
        }
    }
    ctx->pc = 0x4F2A80u;
label_4f2a80:
    // 0x4f2a80: 0xae40027c  sw          $zero, 0x27C($s2)
    ctx->pc = 0x4f2a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 0));
label_4f2a84:
    // 0x4f2a84: 0x0  nop
    ctx->pc = 0x4f2a84u;
    // NOP
label_4f2a88:
    // 0x4f2a88: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4f2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4f2a8c:
    // 0x4f2a8c: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x4f2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4f2a90:
    // 0x4f2a90: 0xc6400280  lwc1        $f0, 0x280($s2)
    ctx->pc = 0x4f2a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f2a94:
    // 0x4f2a94: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x4f2a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f2a98:
    // 0x4f2a98: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4f2a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4f2a9c:
    // 0x4f2a9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4f2a9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4f2aa0:
    // 0x4f2aa0: 0xe6400280  swc1        $f0, 0x280($s2)
    ctx->pc = 0x4f2aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
label_4f2aa4:
    // 0x4f2aa4: 0x8c63aae0  lw          $v1, -0x5520($v1)
    ctx->pc = 0x4f2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945504)));
label_4f2aa8:
    // 0x4f2aa8: 0xc6400280  lwc1        $f0, 0x280($s2)
    ctx->pc = 0x4f2aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f2aac:
    // 0x4f2aac: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x4f2aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_4f2ab0:
    // 0x4f2ab0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4f2ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f2ab4:
    // 0x4f2ab4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4f2ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f2ab8:
    // 0x4f2ab8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4f2abc:
    if (ctx->pc == 0x4F2ABCu) {
        ctx->pc = 0x4F2AC0u;
        goto label_4f2ac0;
    }
    ctx->pc = 0x4F2AB8u;
    {
        const bool branch_taken_0x4f2ab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f2ab8) {
            ctx->pc = 0x4F2AC8u;
            goto label_4f2ac8;
        }
    }
    ctx->pc = 0x4F2AC0u;
label_4f2ac0:
    // 0x4f2ac0: 0xae400280  sw          $zero, 0x280($s2)
    ctx->pc = 0x4f2ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 640), GPR_U32(ctx, 0));
label_4f2ac4:
    // 0x4f2ac4: 0x0  nop
    ctx->pc = 0x4f2ac4u;
    // NOP
label_4f2ac8:
    // 0x4f2ac8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4f2ac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4f2acc:
    // 0x4f2acc: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x4f2accu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4f2ad0:
    // 0x4f2ad0: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_4f2ad4:
    if (ctx->pc == 0x4F2AD4u) {
        ctx->pc = 0x4F2AD4u;
            // 0x4f2ad4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4F2AD8u;
        goto label_4f2ad8;
    }
    ctx->pc = 0x4F2AD0u;
    {
        const bool branch_taken_0x4f2ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F2AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2AD0u;
            // 0x4f2ad4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2ad0) {
            ctx->pc = 0x4F2A24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f2a24;
        }
    }
    ctx->pc = 0x4F2AD8u;
label_4f2ad8:
    // 0x4f2ad8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4f2ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4f2adc:
    // 0x4f2adc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f2adcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f2ae0:
    // 0x4f2ae0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f2ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f2ae4:
    // 0x4f2ae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f2ae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f2ae8:
    // 0x4f2ae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f2ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2aec:
    // 0x4f2aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2af0:
    // 0x4f2af0: 0x3e00008  jr          $ra
label_4f2af4:
    if (ctx->pc == 0x4F2AF4u) {
        ctx->pc = 0x4F2AF4u;
            // 0x4f2af4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4F2AF8u;
        goto label_4f2af8;
    }
    ctx->pc = 0x4F2AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2AF0u;
            // 0x4f2af4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F2AF8u;
label_4f2af8:
    // 0x4f2af8: 0x0  nop
    ctx->pc = 0x4f2af8u;
    // NOP
label_4f2afc:
    // 0x4f2afc: 0x0  nop
    ctx->pc = 0x4f2afcu;
    // NOP
label_4f2b00:
    // 0x4f2b00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f2b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f2b04:
    // 0x4f2b04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4f2b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4f2b08:
    // 0x4f2b08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f2b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f2b0c:
    // 0x4f2b0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f2b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f2b10:
    // 0x4f2b10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f2b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f2b14:
    // 0x4f2b14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f2b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f2b18:
    // 0x4f2b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f2b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f2b1c:
    // 0x4f2b1c: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4f2b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f2b20:
    // 0x4f2b20: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_4f2b24:
    if (ctx->pc == 0x4F2B24u) {
        ctx->pc = 0x4F2B24u;
            // 0x4f2b24: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F2B28u;
        goto label_4f2b28;
    }
    ctx->pc = 0x4F2B20u;
    {
        const bool branch_taken_0x4f2b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2B20u;
            // 0x4f2b24: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2b20) {
            ctx->pc = 0x4F2B60u;
            goto label_4f2b60;
        }
    }
    ctx->pc = 0x4F2B28u;
label_4f2b28:
    // 0x4f2b28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f2b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2b2c:
    // 0x4f2b2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f2b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2b30:
    // 0x4f2b30: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4f2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4f2b34:
    // 0x4f2b34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4f2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4f2b38:
    // 0x4f2b38: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4f2b38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f2b3c:
    // 0x4f2b3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4f2b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f2b40:
    // 0x4f2b40: 0xc0f4cc8  jal         func_3D3320
label_4f2b44:
    if (ctx->pc == 0x4F2B44u) {
        ctx->pc = 0x4F2B44u;
            // 0x4f2b44: 0xae8000e0  sw          $zero, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x4F2B48u;
        goto label_4f2b48;
    }
    ctx->pc = 0x4F2B40u;
    SET_GPR_U32(ctx, 31, 0x4F2B48u);
    ctx->pc = 0x4F2B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2B40u;
            // 0x4f2b44: 0xae8000e0  sw          $zero, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D3320u;
    if (runtime->hasFunction(0x3D3320u)) {
        auto targetFn = runtime->lookupFunction(0x3D3320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2B48u; }
        if (ctx->pc != 0x4F2B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D3320_0x3d3320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2B48u; }
        if (ctx->pc != 0x4F2B48u) { return; }
    }
    ctx->pc = 0x4F2B48u;
label_4f2b48:
    // 0x4f2b48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4f2b48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4f2b4c:
    // 0x4f2b4c: 0xae80020c  sw          $zero, 0x20C($s4)
    ctx->pc = 0x4f2b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 524), GPR_U32(ctx, 0));
label_4f2b50:
    // 0x4f2b50: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4f2b50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4f2b54:
    // 0x4f2b54: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4f2b58:
    if (ctx->pc == 0x4F2B58u) {
        ctx->pc = 0x4F2B58u;
            // 0x4f2b58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4F2B5Cu;
        goto label_4f2b5c;
    }
    ctx->pc = 0x4F2B54u;
    {
        const bool branch_taken_0x4f2b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F2B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2B54u;
            // 0x4f2b58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2b54) {
            ctx->pc = 0x4F2B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f2b30;
        }
    }
    ctx->pc = 0x4F2B5Cu;
label_4f2b5c:
    // 0x4f2b5c: 0x0  nop
    ctx->pc = 0x4f2b5cu;
    // NOP
label_4f2b60:
    // 0x4f2b60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4f2b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4f2b64:
    // 0x4f2b64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f2b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f2b68:
    // 0x4f2b68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f2b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f2b6c:
    // 0x4f2b6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f2b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f2b70:
    // 0x4f2b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f2b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2b74:
    // 0x4f2b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2b78:
    // 0x4f2b78: 0x3e00008  jr          $ra
label_4f2b7c:
    if (ctx->pc == 0x4F2B7Cu) {
        ctx->pc = 0x4F2B7Cu;
            // 0x4f2b7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4F2B80u;
        goto label_fallthrough_0x4f2b78;
    }
    ctx->pc = 0x4F2B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2B78u;
            // 0x4f2b7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4f2b78:
    ctx->pc = 0x4F2B80u;
}
