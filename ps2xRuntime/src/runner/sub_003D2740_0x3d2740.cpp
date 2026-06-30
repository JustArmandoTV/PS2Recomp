#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D2740
// Address: 0x3d2740 - 0x3d2a90
void sub_003D2740_0x3d2740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2740_0x3d2740");
#endif

    switch (ctx->pc) {
        case 0x3d2740u: goto label_3d2740;
        case 0x3d2744u: goto label_3d2744;
        case 0x3d2748u: goto label_3d2748;
        case 0x3d274cu: goto label_3d274c;
        case 0x3d2750u: goto label_3d2750;
        case 0x3d2754u: goto label_3d2754;
        case 0x3d2758u: goto label_3d2758;
        case 0x3d275cu: goto label_3d275c;
        case 0x3d2760u: goto label_3d2760;
        case 0x3d2764u: goto label_3d2764;
        case 0x3d2768u: goto label_3d2768;
        case 0x3d276cu: goto label_3d276c;
        case 0x3d2770u: goto label_3d2770;
        case 0x3d2774u: goto label_3d2774;
        case 0x3d2778u: goto label_3d2778;
        case 0x3d277cu: goto label_3d277c;
        case 0x3d2780u: goto label_3d2780;
        case 0x3d2784u: goto label_3d2784;
        case 0x3d2788u: goto label_3d2788;
        case 0x3d278cu: goto label_3d278c;
        case 0x3d2790u: goto label_3d2790;
        case 0x3d2794u: goto label_3d2794;
        case 0x3d2798u: goto label_3d2798;
        case 0x3d279cu: goto label_3d279c;
        case 0x3d27a0u: goto label_3d27a0;
        case 0x3d27a4u: goto label_3d27a4;
        case 0x3d27a8u: goto label_3d27a8;
        case 0x3d27acu: goto label_3d27ac;
        case 0x3d27b0u: goto label_3d27b0;
        case 0x3d27b4u: goto label_3d27b4;
        case 0x3d27b8u: goto label_3d27b8;
        case 0x3d27bcu: goto label_3d27bc;
        case 0x3d27c0u: goto label_3d27c0;
        case 0x3d27c4u: goto label_3d27c4;
        case 0x3d27c8u: goto label_3d27c8;
        case 0x3d27ccu: goto label_3d27cc;
        case 0x3d27d0u: goto label_3d27d0;
        case 0x3d27d4u: goto label_3d27d4;
        case 0x3d27d8u: goto label_3d27d8;
        case 0x3d27dcu: goto label_3d27dc;
        case 0x3d27e0u: goto label_3d27e0;
        case 0x3d27e4u: goto label_3d27e4;
        case 0x3d27e8u: goto label_3d27e8;
        case 0x3d27ecu: goto label_3d27ec;
        case 0x3d27f0u: goto label_3d27f0;
        case 0x3d27f4u: goto label_3d27f4;
        case 0x3d27f8u: goto label_3d27f8;
        case 0x3d27fcu: goto label_3d27fc;
        case 0x3d2800u: goto label_3d2800;
        case 0x3d2804u: goto label_3d2804;
        case 0x3d2808u: goto label_3d2808;
        case 0x3d280cu: goto label_3d280c;
        case 0x3d2810u: goto label_3d2810;
        case 0x3d2814u: goto label_3d2814;
        case 0x3d2818u: goto label_3d2818;
        case 0x3d281cu: goto label_3d281c;
        case 0x3d2820u: goto label_3d2820;
        case 0x3d2824u: goto label_3d2824;
        case 0x3d2828u: goto label_3d2828;
        case 0x3d282cu: goto label_3d282c;
        case 0x3d2830u: goto label_3d2830;
        case 0x3d2834u: goto label_3d2834;
        case 0x3d2838u: goto label_3d2838;
        case 0x3d283cu: goto label_3d283c;
        case 0x3d2840u: goto label_3d2840;
        case 0x3d2844u: goto label_3d2844;
        case 0x3d2848u: goto label_3d2848;
        case 0x3d284cu: goto label_3d284c;
        case 0x3d2850u: goto label_3d2850;
        case 0x3d2854u: goto label_3d2854;
        case 0x3d2858u: goto label_3d2858;
        case 0x3d285cu: goto label_3d285c;
        case 0x3d2860u: goto label_3d2860;
        case 0x3d2864u: goto label_3d2864;
        case 0x3d2868u: goto label_3d2868;
        case 0x3d286cu: goto label_3d286c;
        case 0x3d2870u: goto label_3d2870;
        case 0x3d2874u: goto label_3d2874;
        case 0x3d2878u: goto label_3d2878;
        case 0x3d287cu: goto label_3d287c;
        case 0x3d2880u: goto label_3d2880;
        case 0x3d2884u: goto label_3d2884;
        case 0x3d2888u: goto label_3d2888;
        case 0x3d288cu: goto label_3d288c;
        case 0x3d2890u: goto label_3d2890;
        case 0x3d2894u: goto label_3d2894;
        case 0x3d2898u: goto label_3d2898;
        case 0x3d289cu: goto label_3d289c;
        case 0x3d28a0u: goto label_3d28a0;
        case 0x3d28a4u: goto label_3d28a4;
        case 0x3d28a8u: goto label_3d28a8;
        case 0x3d28acu: goto label_3d28ac;
        case 0x3d28b0u: goto label_3d28b0;
        case 0x3d28b4u: goto label_3d28b4;
        case 0x3d28b8u: goto label_3d28b8;
        case 0x3d28bcu: goto label_3d28bc;
        case 0x3d28c0u: goto label_3d28c0;
        case 0x3d28c4u: goto label_3d28c4;
        case 0x3d28c8u: goto label_3d28c8;
        case 0x3d28ccu: goto label_3d28cc;
        case 0x3d28d0u: goto label_3d28d0;
        case 0x3d28d4u: goto label_3d28d4;
        case 0x3d28d8u: goto label_3d28d8;
        case 0x3d28dcu: goto label_3d28dc;
        case 0x3d28e0u: goto label_3d28e0;
        case 0x3d28e4u: goto label_3d28e4;
        case 0x3d28e8u: goto label_3d28e8;
        case 0x3d28ecu: goto label_3d28ec;
        case 0x3d28f0u: goto label_3d28f0;
        case 0x3d28f4u: goto label_3d28f4;
        case 0x3d28f8u: goto label_3d28f8;
        case 0x3d28fcu: goto label_3d28fc;
        case 0x3d2900u: goto label_3d2900;
        case 0x3d2904u: goto label_3d2904;
        case 0x3d2908u: goto label_3d2908;
        case 0x3d290cu: goto label_3d290c;
        case 0x3d2910u: goto label_3d2910;
        case 0x3d2914u: goto label_3d2914;
        case 0x3d2918u: goto label_3d2918;
        case 0x3d291cu: goto label_3d291c;
        case 0x3d2920u: goto label_3d2920;
        case 0x3d2924u: goto label_3d2924;
        case 0x3d2928u: goto label_3d2928;
        case 0x3d292cu: goto label_3d292c;
        case 0x3d2930u: goto label_3d2930;
        case 0x3d2934u: goto label_3d2934;
        case 0x3d2938u: goto label_3d2938;
        case 0x3d293cu: goto label_3d293c;
        case 0x3d2940u: goto label_3d2940;
        case 0x3d2944u: goto label_3d2944;
        case 0x3d2948u: goto label_3d2948;
        case 0x3d294cu: goto label_3d294c;
        case 0x3d2950u: goto label_3d2950;
        case 0x3d2954u: goto label_3d2954;
        case 0x3d2958u: goto label_3d2958;
        case 0x3d295cu: goto label_3d295c;
        case 0x3d2960u: goto label_3d2960;
        case 0x3d2964u: goto label_3d2964;
        case 0x3d2968u: goto label_3d2968;
        case 0x3d296cu: goto label_3d296c;
        case 0x3d2970u: goto label_3d2970;
        case 0x3d2974u: goto label_3d2974;
        case 0x3d2978u: goto label_3d2978;
        case 0x3d297cu: goto label_3d297c;
        case 0x3d2980u: goto label_3d2980;
        case 0x3d2984u: goto label_3d2984;
        case 0x3d2988u: goto label_3d2988;
        case 0x3d298cu: goto label_3d298c;
        case 0x3d2990u: goto label_3d2990;
        case 0x3d2994u: goto label_3d2994;
        case 0x3d2998u: goto label_3d2998;
        case 0x3d299cu: goto label_3d299c;
        case 0x3d29a0u: goto label_3d29a0;
        case 0x3d29a4u: goto label_3d29a4;
        case 0x3d29a8u: goto label_3d29a8;
        case 0x3d29acu: goto label_3d29ac;
        case 0x3d29b0u: goto label_3d29b0;
        case 0x3d29b4u: goto label_3d29b4;
        case 0x3d29b8u: goto label_3d29b8;
        case 0x3d29bcu: goto label_3d29bc;
        case 0x3d29c0u: goto label_3d29c0;
        case 0x3d29c4u: goto label_3d29c4;
        case 0x3d29c8u: goto label_3d29c8;
        case 0x3d29ccu: goto label_3d29cc;
        case 0x3d29d0u: goto label_3d29d0;
        case 0x3d29d4u: goto label_3d29d4;
        case 0x3d29d8u: goto label_3d29d8;
        case 0x3d29dcu: goto label_3d29dc;
        case 0x3d29e0u: goto label_3d29e0;
        case 0x3d29e4u: goto label_3d29e4;
        case 0x3d29e8u: goto label_3d29e8;
        case 0x3d29ecu: goto label_3d29ec;
        case 0x3d29f0u: goto label_3d29f0;
        case 0x3d29f4u: goto label_3d29f4;
        case 0x3d29f8u: goto label_3d29f8;
        case 0x3d29fcu: goto label_3d29fc;
        case 0x3d2a00u: goto label_3d2a00;
        case 0x3d2a04u: goto label_3d2a04;
        case 0x3d2a08u: goto label_3d2a08;
        case 0x3d2a0cu: goto label_3d2a0c;
        case 0x3d2a10u: goto label_3d2a10;
        case 0x3d2a14u: goto label_3d2a14;
        case 0x3d2a18u: goto label_3d2a18;
        case 0x3d2a1cu: goto label_3d2a1c;
        case 0x3d2a20u: goto label_3d2a20;
        case 0x3d2a24u: goto label_3d2a24;
        case 0x3d2a28u: goto label_3d2a28;
        case 0x3d2a2cu: goto label_3d2a2c;
        case 0x3d2a30u: goto label_3d2a30;
        case 0x3d2a34u: goto label_3d2a34;
        case 0x3d2a38u: goto label_3d2a38;
        case 0x3d2a3cu: goto label_3d2a3c;
        case 0x3d2a40u: goto label_3d2a40;
        case 0x3d2a44u: goto label_3d2a44;
        case 0x3d2a48u: goto label_3d2a48;
        case 0x3d2a4cu: goto label_3d2a4c;
        case 0x3d2a50u: goto label_3d2a50;
        case 0x3d2a54u: goto label_3d2a54;
        case 0x3d2a58u: goto label_3d2a58;
        case 0x3d2a5cu: goto label_3d2a5c;
        case 0x3d2a60u: goto label_3d2a60;
        case 0x3d2a64u: goto label_3d2a64;
        case 0x3d2a68u: goto label_3d2a68;
        case 0x3d2a6cu: goto label_3d2a6c;
        case 0x3d2a70u: goto label_3d2a70;
        case 0x3d2a74u: goto label_3d2a74;
        case 0x3d2a78u: goto label_3d2a78;
        case 0x3d2a7cu: goto label_3d2a7c;
        case 0x3d2a80u: goto label_3d2a80;
        case 0x3d2a84u: goto label_3d2a84;
        case 0x3d2a88u: goto label_3d2a88;
        case 0x3d2a8cu: goto label_3d2a8c;
        default: break;
    }

    ctx->pc = 0x3d2740u;

label_3d2740:
    // 0x3d2740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d2740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d2744:
    // 0x3d2744: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3d2744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3d2748:
    // 0x3d2748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d2748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d274c:
    // 0x3d274c: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x3d274cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_3d2750:
    // 0x3d2750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d2750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d2754:
    // 0x3d2754: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d2754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d2758:
    // 0x3d2758: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x3d2758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3d275c:
    // 0x3d275c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d275cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d2760:
    // 0x3d2760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d2760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d2764:
    // 0x3d2764: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3d2764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_3d2768:
    // 0x3d2768: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d2768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d276c:
    // 0x3d276c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d276cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d2770:
    // 0x3d2770: 0xc08bff0  jal         func_22FFC0
label_3d2774:
    if (ctx->pc == 0x3D2774u) {
        ctx->pc = 0x3D2774u;
            // 0x3d2774: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2778u;
        goto label_3d2778;
    }
    ctx->pc = 0x3D2770u;
    SET_GPR_U32(ctx, 31, 0x3D2778u);
    ctx->pc = 0x3D2774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2770u;
            // 0x3d2774: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2778u; }
        if (ctx->pc != 0x3D2778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2778u; }
        if (ctx->pc != 0x3D2778u) { return; }
    }
    ctx->pc = 0x3D2778u;
label_3d2778:
    // 0x3d2778: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d2778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d277c:
    // 0x3d277c: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x3d277cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_3d2780:
    // 0x3d2780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d2780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2784:
    // 0x3d2784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d2788:
    // 0x3d2788: 0x3e00008  jr          $ra
label_3d278c:
    if (ctx->pc == 0x3D278Cu) {
        ctx->pc = 0x3D278Cu;
            // 0x3d278c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D2790u;
        goto label_3d2790;
    }
    ctx->pc = 0x3D2788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2788u;
            // 0x3d278c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D2790u;
label_3d2790:
    // 0x3d2790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d2790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d2794:
    // 0x3d2794: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d2794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3d2798:
    // 0x3d2798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d279c:
    // 0x3d279c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d27a0:
    // 0x3d27a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d27a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d27a4:
    // 0x3d27a4: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x3d27a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3d27a8:
    // 0x3d27a8: 0x8c8400e0  lw          $a0, 0xE0($a0)
    ctx->pc = 0x3d27a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_3d27ac:
    // 0x3d27ac: 0x4182a  slt         $v1, $zero, $a0
    ctx->pc = 0x3d27acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3d27b0:
    // 0x3d27b0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_3d27b4:
    if (ctx->pc == 0x3D27B4u) {
        ctx->pc = 0x3D27B4u;
            // 0x3d27b4: 0xc4a30018  lwc1        $f3, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x3D27B8u;
        goto label_3d27b8;
    }
    ctx->pc = 0x3D27B0u;
    {
        const bool branch_taken_0x3d27b0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3D27B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D27B0u;
            // 0x3d27b4: 0xc4a30018  lwc1        $f3, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d27b0) {
            ctx->pc = 0x3D27C4u;
            goto label_3d27c4;
        }
    }
    ctx->pc = 0x3D27B8u;
label_3d27b8:
    // 0x3d27b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d27b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d27bc:
    // 0x3d27bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d27c0:
    if (ctx->pc == 0x3D27C0u) {
        ctx->pc = 0x3D27C0u;
            // 0x3d27c0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3D27C4u;
        goto label_3d27c4;
    }
    ctx->pc = 0x3D27BCu;
    {
        const bool branch_taken_0x3d27bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D27C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D27BCu;
            // 0x3d27c0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d27bc) {
            ctx->pc = 0x3D27E0u;
            goto label_3d27e0;
        }
    }
    ctx->pc = 0x3D27C4u;
label_3d27c4:
    // 0x3d27c4: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3d27c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3d27c8:
    // 0x3d27c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d27c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3d27cc:
    // 0x3d27cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d27ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3d27d0:
    // 0x3d27d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d27d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d27d4:
    // 0x3d27d4: 0x0  nop
    ctx->pc = 0x3d27d4u;
    // NOP
label_3d27d8:
    // 0x3d27d8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d27d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3d27dc:
    // 0x3d27dc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d27dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d27e0:
    // 0x3d27e0: 0xc6010210  lwc1        $f1, 0x210($s0)
    ctx->pc = 0x3d27e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d27e4:
    // 0x3d27e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d27e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d27e8:
    // 0x3d27e8: 0x0  nop
    ctx->pc = 0x3d27e8u;
    // NOP
label_3d27ec:
    // 0x3d27ec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3d27ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d27f0:
    // 0x3d27f0: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x3d27f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_3d27f4:
    // 0x3d27f4: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x3d27f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
label_3d27f8:
    // 0x3d27f8: 0x8e050218  lw          $a1, 0x218($s0)
    ctx->pc = 0x3d27f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_3d27fc:
    // 0x3d27fc: 0x58a0000a  blezl       $a1, . + 4 + (0xA << 2)
label_3d2800:
    if (ctx->pc == 0x3D2800u) {
        ctx->pc = 0x3D2800u;
            // 0x3d2800: 0xc6010210  lwc1        $f1, 0x210($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3D2804u;
        goto label_3d2804;
    }
    ctx->pc = 0x3D27FCu;
    {
        const bool branch_taken_0x3d27fc = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x3d27fc) {
            ctx->pc = 0x3D2800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D27FCu;
            // 0x3d2800: 0xc6010210  lwc1        $f1, 0x210($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2828u;
            goto label_3d2828;
        }
    }
    ctx->pc = 0x3D2804u;
label_3d2804:
    // 0x3d2804: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d2804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d2808:
    // 0x3d2808: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x3d2808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3d280c:
    // 0x3d280c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d280cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d2810:
    // 0x3d2810: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3d2810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3d2814:
    // 0x3d2814: 0x320f809  jalr        $t9
label_3d2818:
    if (ctx->pc == 0x3D2818u) {
        ctx->pc = 0x3D281Cu;
        goto label_3d281c;
    }
    ctx->pc = 0x3D2814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D281Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D281Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D281Cu; }
            if (ctx->pc != 0x3D281Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3D281Cu;
label_3d281c:
    // 0x3d281c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d2820:
    // 0x3d2820: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x3d2820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
label_3d2824:
    // 0x3d2824: 0xc6010210  lwc1        $f1, 0x210($s0)
    ctx->pc = 0x3d2824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2828:
    // 0x3d2828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d2828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d282c:
    // 0x3d282c: 0x0  nop
    ctx->pc = 0x3d282cu;
    // NOP
label_3d2830:
    // 0x3d2830: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d2830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d2834:
    // 0x3d2834: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_3d2838:
    if (ctx->pc == 0x3D2838u) {
        ctx->pc = 0x3D2838u;
            // 0x3d2838: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3D283Cu;
        goto label_3d283c;
    }
    ctx->pc = 0x3D2834u;
    {
        const bool branch_taken_0x3d2834 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d2834) {
            ctx->pc = 0x3D2838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2834u;
            // 0x3d2838: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2860u;
            goto label_3d2860;
        }
    }
    ctx->pc = 0x3D283Cu;
label_3d283c:
    // 0x3d283c: 0x8e03021c  lw          $v1, 0x21C($s0)
    ctx->pc = 0x3d283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
label_3d2840:
    // 0x3d2840: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d2840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3d2844:
    // 0x3d2844: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_3d2848:
    if (ctx->pc == 0x3D2848u) {
        ctx->pc = 0x3D2848u;
            // 0x3d2848: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3D284Cu;
        goto label_3d284c;
    }
    ctx->pc = 0x3D2844u;
    {
        const bool branch_taken_0x3d2844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2844) {
            ctx->pc = 0x3D2848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2844u;
            // 0x3d2848: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2858u;
            goto label_3d2858;
        }
    }
    ctx->pc = 0x3D284Cu;
label_3d284c:
    // 0x3d284c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d2850:
    // 0x3d2850: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d2854:
    if (ctx->pc == 0x3D2854u) {
        ctx->pc = 0x3D2854u;
            // 0x3d2854: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x3D2858u;
        goto label_3d2858;
    }
    ctx->pc = 0x3D2850u;
    {
        const bool branch_taken_0x3d2850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2850u;
            // 0x3d2854: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2850) {
            ctx->pc = 0x3D285Cu;
            goto label_3d285c;
        }
    }
    ctx->pc = 0x3D2858u;
label_3d2858:
    // 0x3d2858: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x3d2858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_3d285c:
    // 0x3d285c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d285cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2860:
    // 0x3d2860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d2864:
    // 0x3d2864: 0x3e00008  jr          $ra
label_3d2868:
    if (ctx->pc == 0x3D2868u) {
        ctx->pc = 0x3D2868u;
            // 0x3d2868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D286Cu;
        goto label_3d286c;
    }
    ctx->pc = 0x3D2864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2864u;
            // 0x3d2868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D286Cu;
label_3d286c:
    // 0x3d286c: 0x0  nop
    ctx->pc = 0x3d286cu;
    // NOP
label_3d2870:
    // 0x3d2870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2874:
    // 0x3d2874: 0x3e00008  jr          $ra
label_3d2878:
    if (ctx->pc == 0x3D2878u) {
        ctx->pc = 0x3D2878u;
            // 0x3d2878: 0xa0830216  sb          $v1, 0x216($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 534), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D287Cu;
        goto label_3d287c;
    }
    ctx->pc = 0x3D2874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2874u;
            // 0x3d2878: 0xa0830216  sb          $v1, 0x216($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 534), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D287Cu;
label_3d287c:
    // 0x3d287c: 0x0  nop
    ctx->pc = 0x3d287cu;
    // NOP
label_3d2880:
    // 0x3d2880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d2880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d2884:
    // 0x3d2884: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d2884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d2888:
    // 0x3d2888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d2888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d288c:
    // 0x3d288c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d2890:
    // 0x3d2890: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x3d2890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_3d2894:
    // 0x3d2894: 0x10a3003e  beq         $a1, $v1, . + 4 + (0x3E << 2)
label_3d2898:
    if (ctx->pc == 0x3D2898u) {
        ctx->pc = 0x3D2898u;
            // 0x3d2898: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D289Cu;
        goto label_3d289c;
    }
    ctx->pc = 0x3D2894u;
    {
        const bool branch_taken_0x3d2894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D2898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2894u;
            // 0x3d2898: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2894) {
            ctx->pc = 0x3D2990u;
            goto label_3d2990;
        }
    }
    ctx->pc = 0x3D289Cu;
label_3d289c:
    // 0x3d289c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d289cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d28a0:
    // 0x3d28a0: 0x50a30030  beql        $a1, $v1, . + 4 + (0x30 << 2)
label_3d28a4:
    if (ctx->pc == 0x3D28A4u) {
        ctx->pc = 0x3D28A4u;
            // 0x3d28a4: 0x8e050218  lw          $a1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->pc = 0x3D28A8u;
        goto label_3d28a8;
    }
    ctx->pc = 0x3D28A0u;
    {
        const bool branch_taken_0x3d28a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d28a0) {
            ctx->pc = 0x3D28A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D28A0u;
            // 0x3d28a4: 0x8e050218  lw          $a1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2964u;
            goto label_3d2964;
        }
    }
    ctx->pc = 0x3D28A8u;
label_3d28a8:
    // 0x3d28a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d28a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d28ac:
    // 0x3d28ac: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
label_3d28b0:
    if (ctx->pc == 0x3D28B0u) {
        ctx->pc = 0x3D28B4u;
        goto label_3d28b4;
    }
    ctx->pc = 0x3D28ACu;
    {
        const bool branch_taken_0x3d28ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d28ac) {
            ctx->pc = 0x3D2918u;
            goto label_3d2918;
        }
    }
    ctx->pc = 0x3D28B4u;
label_3d28b4:
    // 0x3d28b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d28b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d28b8:
    // 0x3d28b8: 0x50a3000f  beql        $a1, $v1, . + 4 + (0xF << 2)
label_3d28bc:
    if (ctx->pc == 0x3D28BCu) {
        ctx->pc = 0x3D28BCu;
            // 0x3d28bc: 0xc601020c  lwc1        $f1, 0x20C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3D28C0u;
        goto label_3d28c0;
    }
    ctx->pc = 0x3D28B8u;
    {
        const bool branch_taken_0x3d28b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d28b8) {
            ctx->pc = 0x3D28BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D28B8u;
            // 0x3d28bc: 0xc601020c  lwc1        $f1, 0x20C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D28F8u;
            goto label_3d28f8;
        }
    }
    ctx->pc = 0x3D28C0u;
label_3d28c0:
    // 0x3d28c0: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_3d28c4:
    if (ctx->pc == 0x3D28C4u) {
        ctx->pc = 0x3D28C4u;
            // 0x3d28c4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D28C8u;
        goto label_3d28c8;
    }
    ctx->pc = 0x3D28C0u;
    {
        const bool branch_taken_0x3d28c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d28c0) {
            ctx->pc = 0x3D28C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D28C0u;
            // 0x3d28c4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D28D0u;
            goto label_3d28d0;
        }
    }
    ctx->pc = 0x3D28C8u;
label_3d28c8:
    // 0x3d28c8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3d28cc:
    if (ctx->pc == 0x3D28CCu) {
        ctx->pc = 0x3D28CCu;
            // 0x3d28cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3D28D0u;
        goto label_3d28d0;
    }
    ctx->pc = 0x3D28C8u;
    {
        const bool branch_taken_0x3d28c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D28CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D28C8u;
            // 0x3d28cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d28c8) {
            ctx->pc = 0x3D29C0u;
            goto label_3d29c0;
        }
    }
    ctx->pc = 0x3D28D0u;
label_3d28d0:
    // 0x3d28d0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x3d28d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_3d28d4:
    // 0x3d28d4: 0x320f809  jalr        $t9
label_3d28d8:
    if (ctx->pc == 0x3D28D8u) {
        ctx->pc = 0x3D28DCu;
        goto label_3d28dc;
    }
    ctx->pc = 0x3D28D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D28DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D28DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D28DCu; }
            if (ctx->pc != 0x3D28DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3D28DCu;
label_3d28dc:
    // 0x3d28dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3d28dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d28e0:
    // 0x3d28e0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3d28e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3d28e4:
    // 0x3d28e4: 0x320f809  jalr        $t9
label_3d28e8:
    if (ctx->pc == 0x3D28E8u) {
        ctx->pc = 0x3D28E8u;
            // 0x3d28e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D28ECu;
        goto label_3d28ec;
    }
    ctx->pc = 0x3D28E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D28ECu);
        ctx->pc = 0x3D28E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D28E4u;
            // 0x3d28e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D28ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D28ECu; }
            if (ctx->pc != 0x3D28ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3D28ECu;
label_3d28ec:
    // 0x3d28ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d28f0:
    // 0x3d28f0: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x3d28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_3d28f4:
    // 0x3d28f4: 0xc601020c  lwc1        $f1, 0x20C($s0)
    ctx->pc = 0x3d28f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d28f8:
    // 0x3d28f8: 0xc6000208  lwc1        $f0, 0x208($s0)
    ctx->pc = 0x3d28f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d28fc:
    // 0x3d28fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d28fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d2900:
    // 0x3d2900: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
label_3d2904:
    if (ctx->pc == 0x3D2904u) {
        ctx->pc = 0x3D2908u;
        goto label_3d2908;
    }
    ctx->pc = 0x3D2900u;
    {
        const bool branch_taken_0x3d2900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d2900) {
            ctx->pc = 0x3D29BCu;
            goto label_3d29bc;
        }
    }
    ctx->pc = 0x3D2908u;
label_3d2908:
    // 0x3d2908: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x3d2908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_3d290c:
    // 0x3d290c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d290cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d2910:
    // 0x3d2910: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3d2914:
    if (ctx->pc == 0x3D2914u) {
        ctx->pc = 0x3D2914u;
            // 0x3d2914: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x3D2918u;
        goto label_3d2918;
    }
    ctx->pc = 0x3D2910u;
    {
        const bool branch_taken_0x3d2910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2910u;
            // 0x3d2914: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2910) {
            ctx->pc = 0x3D29BCu;
            goto label_3d29bc;
        }
    }
    ctx->pc = 0x3D2918u;
label_3d2918:
    // 0x3d2918: 0xc0f4b0c  jal         func_3D2C30
label_3d291c:
    if (ctx->pc == 0x3D291Cu) {
        ctx->pc = 0x3D2920u;
        goto label_3d2920;
    }
    ctx->pc = 0x3D2918u;
    SET_GPR_U32(ctx, 31, 0x3D2920u);
    ctx->pc = 0x3D2C30u;
    if (runtime->hasFunction(0x3D2C30u)) {
        auto targetFn = runtime->lookupFunction(0x3D2C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2920u; }
        if (ctx->pc != 0x3D2920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2C30_0x3d2c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2920u; }
        if (ctx->pc != 0x3D2920u) { return; }
    }
    ctx->pc = 0x3D2920u;
label_3d2920:
    // 0x3d2920: 0x92030216  lbu         $v1, 0x216($s0)
    ctx->pc = 0x3d2920u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 534)));
label_3d2924:
    // 0x3d2924: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_3d2928:
    if (ctx->pc == 0x3D2928u) {
        ctx->pc = 0x3D292Cu;
        goto label_3d292c;
    }
    ctx->pc = 0x3D2924u;
    {
        const bool branch_taken_0x3d2924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2924) {
            ctx->pc = 0x3D29BCu;
            goto label_3d29bc;
        }
    }
    ctx->pc = 0x3D292Cu;
label_3d292c:
    // 0x3d292c: 0xa2000216  sb          $zero, 0x216($s0)
    ctx->pc = 0x3d292cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 534), (uint8_t)GPR_U32(ctx, 0));
label_3d2930:
    // 0x3d2930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d2930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2934:
    // 0x3d2934: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3d2934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3d2938:
    // 0x3d2938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d2938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d293c:
    // 0x3d293c: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x3d293cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2940:
    // 0x3d2940: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d2940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d2944:
    // 0x3d2944: 0xc0e32a4  jal         func_38CA90
label_3d2948:
    if (ctx->pc == 0x3D2948u) {
        ctx->pc = 0x3D2948u;
            // 0x3d2948: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x3D294Cu;
        goto label_3d294c;
    }
    ctx->pc = 0x3D2944u;
    SET_GPR_U32(ctx, 31, 0x3D294Cu);
    ctx->pc = 0x3D2948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2944u;
            // 0x3d2948: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D294Cu; }
        if (ctx->pc != 0x3D294Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D294Cu; }
        if (ctx->pc != 0x3D294Cu) { return; }
    }
    ctx->pc = 0x3D294Cu;
label_3d294c:
    // 0x3d294c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3d294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d2950:
    // 0x3d2950: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3d2950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d2954:
    // 0x3d2954: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x3d2954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_3d2958:
    // 0x3d2958: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x3d2958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_3d295c:
    // 0x3d295c: 0x10000017  b           . + 4 + (0x17 << 2)
label_3d2960:
    if (ctx->pc == 0x3D2960u) {
        ctx->pc = 0x3D2960u;
            // 0x3d2960: 0xae0400e0  sw          $a0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
        ctx->pc = 0x3D2964u;
        goto label_3d2964;
    }
    ctx->pc = 0x3D295Cu;
    {
        const bool branch_taken_0x3d295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D295Cu;
            // 0x3d2960: 0xae0400e0  sw          $a0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d295c) {
            ctx->pc = 0x3D29BCu;
            goto label_3d29bc;
        }
    }
    ctx->pc = 0x3D2964u;
label_3d2964:
    // 0x3d2964: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_3d2968:
    if (ctx->pc == 0x3D2968u) {
        ctx->pc = 0x3D296Cu;
        goto label_3d296c;
    }
    ctx->pc = 0x3D2964u;
    {
        const bool branch_taken_0x3d2964 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x3d2964) {
            ctx->pc = 0x3D29BCu;
            goto label_3d29bc;
        }
    }
    ctx->pc = 0x3D296Cu;
label_3d296c:
    // 0x3d296c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d296cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d2970:
    // 0x3d2970: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x3d2970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3d2974:
    // 0x3d2974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d2974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d2978:
    // 0x3d2978: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3d2978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3d297c:
    // 0x3d297c: 0x320f809  jalr        $t9
label_3d2980:
    if (ctx->pc == 0x3D2980u) {
        ctx->pc = 0x3D2984u;
        goto label_3d2984;
    }
    ctx->pc = 0x3D297Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D2984u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D2984u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D2984u; }
            if (ctx->pc != 0x3D2984u) { return; }
        }
        }
    }
    ctx->pc = 0x3D2984u;
label_3d2984:
    // 0x3d2984: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d2984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d2988:
    // 0x3d2988: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d298c:
    if (ctx->pc == 0x3D298Cu) {
        ctx->pc = 0x3D298Cu;
            // 0x3d298c: 0xae030218  sw          $v1, 0x218($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
        ctx->pc = 0x3D2990u;
        goto label_3d2990;
    }
    ctx->pc = 0x3D2988u;
    {
        const bool branch_taken_0x3d2988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D298Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2988u;
            // 0x3d298c: 0xae030218  sw          $v1, 0x218($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2988) {
            ctx->pc = 0x3D29BCu;
            goto label_3d29bc;
        }
    }
    ctx->pc = 0x3D2990u;
label_3d2990:
    // 0x3d2990: 0x8e050218  lw          $a1, 0x218($s0)
    ctx->pc = 0x3d2990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_3d2994:
    // 0x3d2994: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
label_3d2998:
    if (ctx->pc == 0x3D2998u) {
        ctx->pc = 0x3D299Cu;
        goto label_3d299c;
    }
    ctx->pc = 0x3D2994u;
    {
        const bool branch_taken_0x3d2994 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x3d2994) {
            ctx->pc = 0x3D29BCu;
            goto label_3d29bc;
        }
    }
    ctx->pc = 0x3D299Cu;
label_3d299c:
    // 0x3d299c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d299cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d29a0:
    // 0x3d29a0: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x3d29a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3d29a4:
    // 0x3d29a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d29a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d29a8:
    // 0x3d29a8: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3d29a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3d29ac:
    // 0x3d29ac: 0x320f809  jalr        $t9
label_3d29b0:
    if (ctx->pc == 0x3D29B0u) {
        ctx->pc = 0x3D29B4u;
        goto label_3d29b4;
    }
    ctx->pc = 0x3D29ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D29B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D29B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D29B4u; }
            if (ctx->pc != 0x3D29B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3D29B4u;
label_3d29b4:
    // 0x3d29b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d29b8:
    // 0x3d29b8: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x3d29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
label_3d29bc:
    // 0x3d29bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d29bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d29c0:
    // 0x3d29c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d29c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d29c4:
    // 0x3d29c4: 0x3e00008  jr          $ra
label_3d29c8:
    if (ctx->pc == 0x3D29C8u) {
        ctx->pc = 0x3D29C8u;
            // 0x3d29c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D29CCu;
        goto label_3d29cc;
    }
    ctx->pc = 0x3D29C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D29C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D29C4u;
            // 0x3d29c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D29CCu;
label_3d29cc:
    // 0x3d29cc: 0x0  nop
    ctx->pc = 0x3d29ccu;
    // NOP
label_3d29d0:
    // 0x3d29d0: 0x3e00008  jr          $ra
label_3d29d4:
    if (ctx->pc == 0x3D29D4u) {
        ctx->pc = 0x3D29D8u;
        goto label_3d29d8;
    }
    ctx->pc = 0x3D29D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D29D8u;
label_3d29d8:
    // 0x3d29d8: 0x0  nop
    ctx->pc = 0x3d29d8u;
    // NOP
label_3d29dc:
    // 0x3d29dc: 0x0  nop
    ctx->pc = 0x3d29dcu;
    // NOP
label_3d29e0:
    // 0x3d29e0: 0x80e3580  j           func_38D600
label_3d29e4:
    if (ctx->pc == 0x3D29E4u) {
        ctx->pc = 0x3D29E8u;
        goto label_3d29e8;
    }
    ctx->pc = 0x3D29E0u;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0038D600_0x38d600(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3D29E8u;
label_3d29e8:
    // 0x3d29e8: 0x0  nop
    ctx->pc = 0x3d29e8u;
    // NOP
label_3d29ec:
    // 0x3d29ec: 0x0  nop
    ctx->pc = 0x3d29ecu;
    // NOP
label_3d29f0:
    // 0x3d29f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d29f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d29f4:
    // 0x3d29f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d29f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d29f8:
    // 0x3d29f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d29f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d29fc:
    // 0x3d29fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d29fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d2a00:
    // 0x3d2a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d2a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d2a04:
    // 0x3d2a04: 0xc0baaa0  jal         func_2EAA80
label_3d2a08:
    if (ctx->pc == 0x3D2A08u) {
        ctx->pc = 0x3D2A08u;
            // 0x3d2a08: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3D2A0Cu;
        goto label_3d2a0c;
    }
    ctx->pc = 0x3D2A04u;
    SET_GPR_U32(ctx, 31, 0x3D2A0Cu);
    ctx->pc = 0x3D2A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2A04u;
            // 0x3d2a08: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2A0Cu; }
        if (ctx->pc != 0x3D2A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2A0Cu; }
        if (ctx->pc != 0x3D2A0Cu) { return; }
    }
    ctx->pc = 0x3D2A0Cu;
label_3d2a0c:
    // 0x3d2a0c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3d2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3d2a10:
    // 0x3d2a10: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3d2a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d2a14:
    // 0x3d2a14: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3d2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3d2a18:
    // 0x3d2a18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d2a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d2a1c:
    // 0x3d2a1c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3d2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3d2a20:
    // 0x3d2a20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d2a24:
    // 0x3d2a24: 0xc04cc90  jal         func_133240
label_3d2a28:
    if (ctx->pc == 0x3D2A28u) {
        ctx->pc = 0x3D2A28u;
            // 0x3d2a28: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x3D2A2Cu;
        goto label_3d2a2c;
    }
    ctx->pc = 0x3D2A24u;
    SET_GPR_U32(ctx, 31, 0x3D2A2Cu);
    ctx->pc = 0x3D2A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2A24u;
            // 0x3d2a28: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2A2Cu; }
        if (ctx->pc != 0x3D2A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2A2Cu; }
        if (ctx->pc != 0x3D2A2Cu) { return; }
    }
    ctx->pc = 0x3D2A2Cu;
label_3d2a2c:
    // 0x3d2a2c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x3d2a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d2a30:
    // 0x3d2a30: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3d2a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_3d2a34:
    // 0x3d2a34: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x3d2a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2a38:
    // 0x3d2a38: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x3d2a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d2a3c:
    // 0x3d2a3c: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x3d2a3cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_3d2a40:
    // 0x3d2a40: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x3d2a40u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_3d2a44:
    // 0x3d2a44: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x3d2a44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_3d2a48:
    // 0x3d2a48: 0x46010044  c1          0x10044
    ctx->pc = 0x3d2a48u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_3d2a4c:
    // 0x3d2a4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d2a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d2a50:
    // 0x3d2a50: 0x0  nop
    ctx->pc = 0x3d2a50u;
    // NOP
label_3d2a54:
    // 0x3d2a54: 0x0  nop
    ctx->pc = 0x3d2a54u;
    // NOP
label_3d2a58:
    // 0x3d2a58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d2a58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d2a5c:
    // 0x3d2a5c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_3d2a60:
    if (ctx->pc == 0x3D2A60u) {
        ctx->pc = 0x3D2A60u;
            // 0x3d2a60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3D2A64u;
        goto label_3d2a64;
    }
    ctx->pc = 0x3D2A5Cu;
    {
        const bool branch_taken_0x3d2a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d2a5c) {
            ctx->pc = 0x3D2A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2A5Cu;
            // 0x3d2a60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2A84u;
            goto label_3d2a84;
        }
    }
    ctx->pc = 0x3D2A64u;
label_3d2a64:
    // 0x3d2a64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d2a68:
    // 0x3d2a68: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3d2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3d2a6c:
    // 0x3d2a6c: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x3d2a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3d2a70:
    // 0x3d2a70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d2a70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d2a74:
    // 0x3d2a74: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x3d2a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_3d2a78:
    // 0x3d2a78: 0x320f809  jalr        $t9
label_3d2a7c:
    if (ctx->pc == 0x3D2A7Cu) {
        ctx->pc = 0x3D2A7Cu;
            // 0x3d2a7c: 0x346501ae  ori         $a1, $v1, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)430);
        ctx->pc = 0x3D2A80u;
        goto label_3d2a80;
    }
    ctx->pc = 0x3D2A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D2A80u);
        ctx->pc = 0x3D2A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2A78u;
            // 0x3d2a7c: 0x346501ae  ori         $a1, $v1, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)430);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D2A80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D2A80u; }
            if (ctx->pc != 0x3D2A80u) { return; }
        }
        }
    }
    ctx->pc = 0x3D2A80u;
label_3d2a80:
    // 0x3d2a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d2a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2a84:
    // 0x3d2a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d2a88:
    // 0x3d2a88: 0x3e00008  jr          $ra
label_3d2a8c:
    if (ctx->pc == 0x3D2A8Cu) {
        ctx->pc = 0x3D2A8Cu;
            // 0x3d2a8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D2A90u;
        goto label_fallthrough_0x3d2a88;
    }
    ctx->pc = 0x3D2A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2A88u;
            // 0x3d2a8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3d2a88:
    ctx->pc = 0x3D2A90u;
}
