#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A24B0
// Address: 0x3a24b0 - 0x3a27c0
void sub_003A24B0_0x3a24b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A24B0_0x3a24b0");
#endif

    switch (ctx->pc) {
        case 0x3a24b0u: goto label_3a24b0;
        case 0x3a24b4u: goto label_3a24b4;
        case 0x3a24b8u: goto label_3a24b8;
        case 0x3a24bcu: goto label_3a24bc;
        case 0x3a24c0u: goto label_3a24c0;
        case 0x3a24c4u: goto label_3a24c4;
        case 0x3a24c8u: goto label_3a24c8;
        case 0x3a24ccu: goto label_3a24cc;
        case 0x3a24d0u: goto label_3a24d0;
        case 0x3a24d4u: goto label_3a24d4;
        case 0x3a24d8u: goto label_3a24d8;
        case 0x3a24dcu: goto label_3a24dc;
        case 0x3a24e0u: goto label_3a24e0;
        case 0x3a24e4u: goto label_3a24e4;
        case 0x3a24e8u: goto label_3a24e8;
        case 0x3a24ecu: goto label_3a24ec;
        case 0x3a24f0u: goto label_3a24f0;
        case 0x3a24f4u: goto label_3a24f4;
        case 0x3a24f8u: goto label_3a24f8;
        case 0x3a24fcu: goto label_3a24fc;
        case 0x3a2500u: goto label_3a2500;
        case 0x3a2504u: goto label_3a2504;
        case 0x3a2508u: goto label_3a2508;
        case 0x3a250cu: goto label_3a250c;
        case 0x3a2510u: goto label_3a2510;
        case 0x3a2514u: goto label_3a2514;
        case 0x3a2518u: goto label_3a2518;
        case 0x3a251cu: goto label_3a251c;
        case 0x3a2520u: goto label_3a2520;
        case 0x3a2524u: goto label_3a2524;
        case 0x3a2528u: goto label_3a2528;
        case 0x3a252cu: goto label_3a252c;
        case 0x3a2530u: goto label_3a2530;
        case 0x3a2534u: goto label_3a2534;
        case 0x3a2538u: goto label_3a2538;
        case 0x3a253cu: goto label_3a253c;
        case 0x3a2540u: goto label_3a2540;
        case 0x3a2544u: goto label_3a2544;
        case 0x3a2548u: goto label_3a2548;
        case 0x3a254cu: goto label_3a254c;
        case 0x3a2550u: goto label_3a2550;
        case 0x3a2554u: goto label_3a2554;
        case 0x3a2558u: goto label_3a2558;
        case 0x3a255cu: goto label_3a255c;
        case 0x3a2560u: goto label_3a2560;
        case 0x3a2564u: goto label_3a2564;
        case 0x3a2568u: goto label_3a2568;
        case 0x3a256cu: goto label_3a256c;
        case 0x3a2570u: goto label_3a2570;
        case 0x3a2574u: goto label_3a2574;
        case 0x3a2578u: goto label_3a2578;
        case 0x3a257cu: goto label_3a257c;
        case 0x3a2580u: goto label_3a2580;
        case 0x3a2584u: goto label_3a2584;
        case 0x3a2588u: goto label_3a2588;
        case 0x3a258cu: goto label_3a258c;
        case 0x3a2590u: goto label_3a2590;
        case 0x3a2594u: goto label_3a2594;
        case 0x3a2598u: goto label_3a2598;
        case 0x3a259cu: goto label_3a259c;
        case 0x3a25a0u: goto label_3a25a0;
        case 0x3a25a4u: goto label_3a25a4;
        case 0x3a25a8u: goto label_3a25a8;
        case 0x3a25acu: goto label_3a25ac;
        case 0x3a25b0u: goto label_3a25b0;
        case 0x3a25b4u: goto label_3a25b4;
        case 0x3a25b8u: goto label_3a25b8;
        case 0x3a25bcu: goto label_3a25bc;
        case 0x3a25c0u: goto label_3a25c0;
        case 0x3a25c4u: goto label_3a25c4;
        case 0x3a25c8u: goto label_3a25c8;
        case 0x3a25ccu: goto label_3a25cc;
        case 0x3a25d0u: goto label_3a25d0;
        case 0x3a25d4u: goto label_3a25d4;
        case 0x3a25d8u: goto label_3a25d8;
        case 0x3a25dcu: goto label_3a25dc;
        case 0x3a25e0u: goto label_3a25e0;
        case 0x3a25e4u: goto label_3a25e4;
        case 0x3a25e8u: goto label_3a25e8;
        case 0x3a25ecu: goto label_3a25ec;
        case 0x3a25f0u: goto label_3a25f0;
        case 0x3a25f4u: goto label_3a25f4;
        case 0x3a25f8u: goto label_3a25f8;
        case 0x3a25fcu: goto label_3a25fc;
        case 0x3a2600u: goto label_3a2600;
        case 0x3a2604u: goto label_3a2604;
        case 0x3a2608u: goto label_3a2608;
        case 0x3a260cu: goto label_3a260c;
        case 0x3a2610u: goto label_3a2610;
        case 0x3a2614u: goto label_3a2614;
        case 0x3a2618u: goto label_3a2618;
        case 0x3a261cu: goto label_3a261c;
        case 0x3a2620u: goto label_3a2620;
        case 0x3a2624u: goto label_3a2624;
        case 0x3a2628u: goto label_3a2628;
        case 0x3a262cu: goto label_3a262c;
        case 0x3a2630u: goto label_3a2630;
        case 0x3a2634u: goto label_3a2634;
        case 0x3a2638u: goto label_3a2638;
        case 0x3a263cu: goto label_3a263c;
        case 0x3a2640u: goto label_3a2640;
        case 0x3a2644u: goto label_3a2644;
        case 0x3a2648u: goto label_3a2648;
        case 0x3a264cu: goto label_3a264c;
        case 0x3a2650u: goto label_3a2650;
        case 0x3a2654u: goto label_3a2654;
        case 0x3a2658u: goto label_3a2658;
        case 0x3a265cu: goto label_3a265c;
        case 0x3a2660u: goto label_3a2660;
        case 0x3a2664u: goto label_3a2664;
        case 0x3a2668u: goto label_3a2668;
        case 0x3a266cu: goto label_3a266c;
        case 0x3a2670u: goto label_3a2670;
        case 0x3a2674u: goto label_3a2674;
        case 0x3a2678u: goto label_3a2678;
        case 0x3a267cu: goto label_3a267c;
        case 0x3a2680u: goto label_3a2680;
        case 0x3a2684u: goto label_3a2684;
        case 0x3a2688u: goto label_3a2688;
        case 0x3a268cu: goto label_3a268c;
        case 0x3a2690u: goto label_3a2690;
        case 0x3a2694u: goto label_3a2694;
        case 0x3a2698u: goto label_3a2698;
        case 0x3a269cu: goto label_3a269c;
        case 0x3a26a0u: goto label_3a26a0;
        case 0x3a26a4u: goto label_3a26a4;
        case 0x3a26a8u: goto label_3a26a8;
        case 0x3a26acu: goto label_3a26ac;
        case 0x3a26b0u: goto label_3a26b0;
        case 0x3a26b4u: goto label_3a26b4;
        case 0x3a26b8u: goto label_3a26b8;
        case 0x3a26bcu: goto label_3a26bc;
        case 0x3a26c0u: goto label_3a26c0;
        case 0x3a26c4u: goto label_3a26c4;
        case 0x3a26c8u: goto label_3a26c8;
        case 0x3a26ccu: goto label_3a26cc;
        case 0x3a26d0u: goto label_3a26d0;
        case 0x3a26d4u: goto label_3a26d4;
        case 0x3a26d8u: goto label_3a26d8;
        case 0x3a26dcu: goto label_3a26dc;
        case 0x3a26e0u: goto label_3a26e0;
        case 0x3a26e4u: goto label_3a26e4;
        case 0x3a26e8u: goto label_3a26e8;
        case 0x3a26ecu: goto label_3a26ec;
        case 0x3a26f0u: goto label_3a26f0;
        case 0x3a26f4u: goto label_3a26f4;
        case 0x3a26f8u: goto label_3a26f8;
        case 0x3a26fcu: goto label_3a26fc;
        case 0x3a2700u: goto label_3a2700;
        case 0x3a2704u: goto label_3a2704;
        case 0x3a2708u: goto label_3a2708;
        case 0x3a270cu: goto label_3a270c;
        case 0x3a2710u: goto label_3a2710;
        case 0x3a2714u: goto label_3a2714;
        case 0x3a2718u: goto label_3a2718;
        case 0x3a271cu: goto label_3a271c;
        case 0x3a2720u: goto label_3a2720;
        case 0x3a2724u: goto label_3a2724;
        case 0x3a2728u: goto label_3a2728;
        case 0x3a272cu: goto label_3a272c;
        case 0x3a2730u: goto label_3a2730;
        case 0x3a2734u: goto label_3a2734;
        case 0x3a2738u: goto label_3a2738;
        case 0x3a273cu: goto label_3a273c;
        case 0x3a2740u: goto label_3a2740;
        case 0x3a2744u: goto label_3a2744;
        case 0x3a2748u: goto label_3a2748;
        case 0x3a274cu: goto label_3a274c;
        case 0x3a2750u: goto label_3a2750;
        case 0x3a2754u: goto label_3a2754;
        case 0x3a2758u: goto label_3a2758;
        case 0x3a275cu: goto label_3a275c;
        case 0x3a2760u: goto label_3a2760;
        case 0x3a2764u: goto label_3a2764;
        case 0x3a2768u: goto label_3a2768;
        case 0x3a276cu: goto label_3a276c;
        case 0x3a2770u: goto label_3a2770;
        case 0x3a2774u: goto label_3a2774;
        case 0x3a2778u: goto label_3a2778;
        case 0x3a277cu: goto label_3a277c;
        case 0x3a2780u: goto label_3a2780;
        case 0x3a2784u: goto label_3a2784;
        case 0x3a2788u: goto label_3a2788;
        case 0x3a278cu: goto label_3a278c;
        case 0x3a2790u: goto label_3a2790;
        case 0x3a2794u: goto label_3a2794;
        case 0x3a2798u: goto label_3a2798;
        case 0x3a279cu: goto label_3a279c;
        case 0x3a27a0u: goto label_3a27a0;
        case 0x3a27a4u: goto label_3a27a4;
        case 0x3a27a8u: goto label_3a27a8;
        case 0x3a27acu: goto label_3a27ac;
        case 0x3a27b0u: goto label_3a27b0;
        case 0x3a27b4u: goto label_3a27b4;
        case 0x3a27b8u: goto label_3a27b8;
        case 0x3a27bcu: goto label_3a27bc;
        default: break;
    }

    ctx->pc = 0x3a24b0u;

label_3a24b0:
    // 0x3a24b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3a24b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3a24b4:
    // 0x3a24b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a24b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3a24b8:
    // 0x3a24b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a24b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a24bc:
    // 0x3a24bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a24bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a24c0:
    // 0x3a24c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3a24c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a24c4:
    // 0x3a24c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a24c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a24c8:
    // 0x3a24c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a24c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a24cc:
    // 0x3a24cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a24ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a24d0:
    // 0x3a24d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a24d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a24d4:
    // 0x3a24d4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3a24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3a24d8:
    // 0x3a24d8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x3a24d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3a24dc:
    // 0x3a24dc: 0x14200081  bnez        $at, . + 4 + (0x81 << 2)
label_3a24e0:
    if (ctx->pc == 0x3A24E0u) {
        ctx->pc = 0x3A24E0u;
            // 0x3a24e0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A24E4u;
        goto label_3a24e4;
    }
    ctx->pc = 0x3A24DCu;
    {
        const bool branch_taken_0x3a24dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A24E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A24DCu;
            // 0x3a24e0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a24dc) {
            ctx->pc = 0x3A26E4u;
            goto label_3a26e4;
        }
    }
    ctx->pc = 0x3A24E4u;
label_3a24e4:
    // 0x3a24e4: 0x8e710034  lw          $s1, 0x34($s3)
    ctx->pc = 0x3a24e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3a24e8:
    // 0x3a24e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a24ec:
    // 0x3a24ec: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3a24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3a24f0:
    // 0x3a24f0: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a24f4:
    // 0x3a24f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a24f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a24f8:
    // 0x3a24f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a24f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a24fc:
    // 0x3a24fc: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x3a24fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_3a2500:
    // 0x3a2500: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x3a2500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
label_3a2504:
    // 0x3a2504: 0xafa6008c  sw          $a2, 0x8C($sp)
    ctx->pc = 0x3a2504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 6));
label_3a2508:
    // 0x3a2508: 0xafb10088  sw          $s1, 0x88($sp)
    ctx->pc = 0x3a2508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 17));
label_3a250c:
    // 0x3a250c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3a250cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3a2510:
    // 0x3a2510: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3a2510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3a2514:
    // 0x3a2514: 0xc0fe54c  jal         func_3F9530
label_3a2518:
    if (ctx->pc == 0x3A2518u) {
        ctx->pc = 0x3A2518u;
            // 0x3a2518: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->pc = 0x3A251Cu;
        goto label_3a251c;
    }
    ctx->pc = 0x3A2514u;
    SET_GPR_U32(ctx, 31, 0x3A251Cu);
    ctx->pc = 0x3A2518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2514u;
            // 0x3a2518: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A251Cu; }
        if (ctx->pc != 0x3A251Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A251Cu; }
        if (ctx->pc != 0x3A251Cu) { return; }
    }
    ctx->pc = 0x3A251Cu;
label_3a251c:
    // 0x3a251c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3a251cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a2520:
    // 0x3a2520: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3a2520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_3a2524:
    // 0x3a2524: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x3a2524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
label_3a2528:
    // 0x3a2528: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3a2528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3a252c:
    // 0x3a252c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x3a252cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_3a2530:
    // 0x3a2530: 0x2463fd30  addiu       $v1, $v1, -0x2D0
    ctx->pc = 0x3a2530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966576));
label_3a2534:
    // 0x3a2534: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3a2534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_3a2538:
    // 0x3a2538: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x3a2538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_3a253c:
    // 0x3a253c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x3a253cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_3a2540:
    // 0x3a2540: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3a2540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3a2544:
    // 0x3a2544: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a2544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a2548:
    // 0x3a2548: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a254c:
    if (ctx->pc == 0x3A254Cu) {
        ctx->pc = 0x3A254Cu;
            // 0x3a254c: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->pc = 0x3A2550u;
        goto label_3a2550;
    }
    ctx->pc = 0x3A2548u;
    {
        const bool branch_taken_0x3a2548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2548u;
            // 0x3a254c: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2548) {
            ctx->pc = 0x3A2564u;
            goto label_3a2564;
        }
    }
    ctx->pc = 0x3A2550u;
label_3a2550:
    // 0x3a2550: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x3a2550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_3a2554:
    // 0x3a2554: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3a2554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3a2558:
    // 0x3a2558: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x3a2558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_3a255c:
    // 0x3a255c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a2560:
    if (ctx->pc == 0x3A2560u) {
        ctx->pc = 0x3A2560u;
            // 0x3a2560: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2564u;
        goto label_3a2564;
    }
    ctx->pc = 0x3A255Cu;
    {
        const bool branch_taken_0x3a255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A255Cu;
            // 0x3a2560: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a255c) {
            ctx->pc = 0x3A2574u;
            goto label_3a2574;
        }
    }
    ctx->pc = 0x3A2564u;
label_3a2564:
    // 0x3a2564: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x3a2564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_3a2568:
    // 0x3a2568: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3a2568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3a256c:
    // 0x3a256c: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x3a256cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_3a2570:
    // 0x3a2570: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x3a2570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_3a2574:
    // 0x3a2574: 0x8e66003c  lw          $a2, 0x3C($s3)
    ctx->pc = 0x3a2574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_3a2578:
    // 0x3a2578: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
label_3a257c:
    if (ctx->pc == 0x3A257Cu) {
        ctx->pc = 0x3A257Cu;
            // 0x3a257c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x3A2580u;
        goto label_3a2580;
    }
    ctx->pc = 0x3A2578u;
    {
        const bool branch_taken_0x3a2578 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2578) {
            ctx->pc = 0x3A257Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2578u;
            // 0x3a257c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A25ACu;
            goto label_3a25ac;
        }
    }
    ctx->pc = 0x3A2580u;
label_3a2580:
    // 0x3a2580: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3a2580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_3a2584:
    // 0x3a2584: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x3a2584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_3a2588:
    // 0x3a2588: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a2588u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a258c:
    // 0x3a258c: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a258cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a2590:
    // 0x3a2590: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x3a2590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3a2594:
    // 0x3a2594: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2598:
    // 0x3a2598: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a2598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a259c:
    // 0x3a259c: 0x320f809  jalr        $t9
label_3a25a0:
    if (ctx->pc == 0x3A25A0u) {
        ctx->pc = 0x3A25A0u;
            // 0x3a25a0: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A25A4u;
        goto label_3a25a4;
    }
    ctx->pc = 0x3A259Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A25A4u);
        ctx->pc = 0x3A25A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A259Cu;
            // 0x3a25a0: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A25A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A25A4u; }
            if (ctx->pc != 0x3A25A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3A25A4u;
label_3a25a4:
    // 0x3a25a4: 0x1000000b  b           . + 4 + (0xB << 2)
label_3a25a8:
    if (ctx->pc == 0x3A25A8u) {
        ctx->pc = 0x3A25A8u;
            // 0x3a25a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A25ACu;
        goto label_3a25ac;
    }
    ctx->pc = 0x3A25A4u;
    {
        const bool branch_taken_0x3a25a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A25A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A25A4u;
            // 0x3a25a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a25a4) {
            ctx->pc = 0x3A25D4u;
            goto label_3a25d4;
        }
    }
    ctx->pc = 0x3A25ACu;
label_3a25ac:
    // 0x3a25ac: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x3a25acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_3a25b0:
    // 0x3a25b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a25b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a25b4:
    // 0x3a25b4: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x3a25b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_3a25b8:
    // 0x3a25b8: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x3a25b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3a25bc:
    // 0x3a25bc: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a25bcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a25c0:
    // 0x3a25c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a25c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a25c4:
    // 0x3a25c4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a25c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a25c8:
    // 0x3a25c8: 0x320f809  jalr        $t9
label_3a25cc:
    if (ctx->pc == 0x3A25CCu) {
        ctx->pc = 0x3A25CCu;
            // 0x3a25cc: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A25D0u;
        goto label_3a25d0;
    }
    ctx->pc = 0x3A25C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A25D0u);
        ctx->pc = 0x3A25CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A25C8u;
            // 0x3a25cc: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A25D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A25D0u; }
            if (ctx->pc != 0x3A25D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3A25D0u;
label_3a25d0:
    // 0x3a25d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a25d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a25d4:
    // 0x3a25d4: 0x643000d  bgezl       $s2, . + 4 + (0xD << 2)
label_3a25d8:
    if (ctx->pc == 0x3A25D8u) {
        ctx->pc = 0x3A25D8u;
            // 0x3a25d8: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x3A25DCu;
        goto label_3a25dc;
    }
    ctx->pc = 0x3A25D4u;
    {
        const bool branch_taken_0x3a25d4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x3a25d4) {
            ctx->pc = 0x3A25D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A25D4u;
            // 0x3a25d8: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A260Cu;
            goto label_3a260c;
        }
    }
    ctx->pc = 0x3A25DCu;
label_3a25dc:
    // 0x3a25dc: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x3a25dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_3a25e0:
    // 0x3a25e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a25e4:
    // 0x3a25e4: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a25e8:
    // 0x3a25e8: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
label_3a25ec:
    if (ctx->pc == 0x3A25ECu) {
        ctx->pc = 0x3A25ECu;
            // 0x3a25ec: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x3A25F0u;
        goto label_3a25f0;
    }
    ctx->pc = 0x3A25E8u;
    {
        const bool branch_taken_0x3a25e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A25ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A25E8u;
            // 0x3a25ec: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a25e8) {
            ctx->pc = 0x3A2798u;
            goto label_3a2798;
        }
    }
    ctx->pc = 0x3A25F0u;
label_3a25f0:
    // 0x3a25f0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x3a25f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_3a25f4:
    // 0x3a25f4: 0x50a00069  beql        $a1, $zero, . + 4 + (0x69 << 2)
label_3a25f8:
    if (ctx->pc == 0x3A25F8u) {
        ctx->pc = 0x3A25F8u;
            // 0x3a25f8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A25FCu;
        goto label_3a25fc;
    }
    ctx->pc = 0x3A25F4u;
    {
        const bool branch_taken_0x3a25f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a25f4) {
            ctx->pc = 0x3A25F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A25F4u;
            // 0x3a25f8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A279Cu;
            goto label_3a279c;
        }
    }
    ctx->pc = 0x3A25FCu;
label_3a25fc:
    // 0x3a25fc: 0xc0fe48c  jal         func_3F9230
label_3a2600:
    if (ctx->pc == 0x3A2600u) {
        ctx->pc = 0x3A2604u;
        goto label_3a2604;
    }
    ctx->pc = 0x3A25FCu;
    SET_GPR_U32(ctx, 31, 0x3A2604u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2604u; }
        if (ctx->pc != 0x3A2604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2604u; }
        if (ctx->pc != 0x3A2604u) { return; }
    }
    ctx->pc = 0x3A2604u;
label_3a2604:
    // 0x3a2604: 0x10000064  b           . + 4 + (0x64 << 2)
label_3a2608:
    if (ctx->pc == 0x3A2608u) {
        ctx->pc = 0x3A2608u;
            // 0x3a2608: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->pc = 0x3A260Cu;
        goto label_3a260c;
    }
    ctx->pc = 0x3A2604u;
    {
        const bool branch_taken_0x3a2604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2604u;
            // 0x3a2608: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2604) {
            ctx->pc = 0x3A2798u;
            goto label_3a2798;
        }
    }
    ctx->pc = 0x3A260Cu;
label_3a260c:
    // 0x3a260c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a260cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2610:
    // 0x3a2610: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a2610u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a2614:
    // 0x3a2614: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x3a2614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3a2618:
    // 0x3a2618: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3a2618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_3a261c:
    // 0x3a261c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3a261cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3a2620:
    // 0x3a2620: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3a2620u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3a2624:
    // 0x3a2624: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a2624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3a2628:
    // 0x3a2628: 0x8c64fffc  lw          $a0, -0x4($v1)
    ctx->pc = 0x3a2628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_3a262c:
    // 0x3a262c: 0x8c4500a8  lw          $a1, 0xA8($v0)
    ctx->pc = 0x3a262cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_3a2630:
    // 0x3a2630: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a2630u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a2634:
    // 0x3a2634: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2638:
    // 0x3a2638: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x3a2638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_3a263c:
    // 0x3a263c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a263cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a2640:
    // 0x3a2640: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a2640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3a2644:
    // 0x3a2644: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a2644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a2648:
    // 0x3a2648: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x3a2648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_3a264c:
    // 0x3a264c: 0x320f809  jalr        $t9
label_3a2650:
    if (ctx->pc == 0x3A2650u) {
        ctx->pc = 0x3A2650u;
            // 0x3a2650: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A2654u;
        goto label_3a2654;
    }
    ctx->pc = 0x3A264Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2654u);
        ctx->pc = 0x3A2650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A264Cu;
            // 0x3a2650: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2654u; }
            if (ctx->pc != 0x3A2654u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2654u;
label_3a2654:
    // 0x3a2654: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a2654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2658:
    // 0x3a2658: 0x643000d  bgezl       $s2, . + 4 + (0xD << 2)
label_3a265c:
    if (ctx->pc == 0x3A265Cu) {
        ctx->pc = 0x3A265Cu;
            // 0x3a265c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x3A2660u;
        goto label_3a2660;
    }
    ctx->pc = 0x3A2658u;
    {
        const bool branch_taken_0x3a2658 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x3a2658) {
            ctx->pc = 0x3A265Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2658u;
            // 0x3a265c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2690u;
            goto label_3a2690;
        }
    }
    ctx->pc = 0x3A2660u;
label_3a2660:
    // 0x3a2660: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x3a2660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_3a2664:
    // 0x3a2664: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a2664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a2668:
    // 0x3a2668: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a2668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a266c:
    // 0x3a266c: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
label_3a2670:
    if (ctx->pc == 0x3A2670u) {
        ctx->pc = 0x3A2670u;
            // 0x3a2670: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2674u;
        goto label_3a2674;
    }
    ctx->pc = 0x3A266Cu;
    {
        const bool branch_taken_0x3a266c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A266Cu;
            // 0x3a2670: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a266c) {
            ctx->pc = 0x3A2798u;
            goto label_3a2798;
        }
    }
    ctx->pc = 0x3A2674u;
label_3a2674:
    // 0x3a2674: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x3a2674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_3a2678:
    // 0x3a2678: 0x10a00047  beqz        $a1, . + 4 + (0x47 << 2)
label_3a267c:
    if (ctx->pc == 0x3A267Cu) {
        ctx->pc = 0x3A2680u;
        goto label_3a2680;
    }
    ctx->pc = 0x3A2678u;
    {
        const bool branch_taken_0x3a2678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2678) {
            ctx->pc = 0x3A2798u;
            goto label_3a2798;
        }
    }
    ctx->pc = 0x3A2680u;
label_3a2680:
    // 0x3a2680: 0xc0fe48c  jal         func_3F9230
label_3a2684:
    if (ctx->pc == 0x3A2684u) {
        ctx->pc = 0x3A2688u;
        goto label_3a2688;
    }
    ctx->pc = 0x3A2680u;
    SET_GPR_U32(ctx, 31, 0x3A2688u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2688u; }
        if (ctx->pc != 0x3A2688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2688u; }
        if (ctx->pc != 0x3A2688u) { return; }
    }
    ctx->pc = 0x3A2688u;
label_3a2688:
    // 0x3a2688: 0x10000043  b           . + 4 + (0x43 << 2)
label_3a268c:
    if (ctx->pc == 0x3A268Cu) {
        ctx->pc = 0x3A268Cu;
            // 0x3a268c: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->pc = 0x3A2690u;
        goto label_3a2690;
    }
    ctx->pc = 0x3A2688u;
    {
        const bool branch_taken_0x3a2688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A268Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2688u;
            // 0x3a268c: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2688) {
            ctx->pc = 0x3A2798u;
            goto label_3a2798;
        }
    }
    ctx->pc = 0x3A2690u;
label_3a2690:
    // 0x3a2690: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a2690u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a2694:
    // 0x3a2694: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x3a2694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3a2698:
    // 0x3a2698: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x3a2698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_3a269c:
    // 0x3a269c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a269cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a26a0:
    // 0x3a26a0: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x3a26a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_3a26a4:
    // 0x3a26a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3a26a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3a26a8:
    // 0x3a26a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a26a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3a26ac:
    // 0x3a26ac: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_3a26b0:
    if (ctx->pc == 0x3A26B0u) {
        ctx->pc = 0x3A26B0u;
            // 0x3a26b0: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x3A26B4u;
        goto label_3a26b4;
    }
    ctx->pc = 0x3A26ACu;
    {
        const bool branch_taken_0x3a26ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A26B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A26ACu;
            // 0x3a26b0: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a26ac) {
            ctx->pc = 0x3A2618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a2618;
        }
    }
    ctx->pc = 0x3A26B4u;
label_3a26b4:
    // 0x3a26b4: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x3a26b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_3a26b8:
    // 0x3a26b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a26bc:
    // 0x3a26bc: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a26c0:
    // 0x3a26c0: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
label_3a26c4:
    if (ctx->pc == 0x3A26C4u) {
        ctx->pc = 0x3A26C4u;
            // 0x3a26c4: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x3A26C8u;
        goto label_3a26c8;
    }
    ctx->pc = 0x3A26C0u;
    {
        const bool branch_taken_0x3a26c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A26C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A26C0u;
            // 0x3a26c4: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a26c0) {
            ctx->pc = 0x3A2798u;
            goto label_3a2798;
        }
    }
    ctx->pc = 0x3A26C8u;
label_3a26c8:
    // 0x3a26c8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x3a26c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_3a26cc:
    // 0x3a26cc: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
label_3a26d0:
    if (ctx->pc == 0x3A26D0u) {
        ctx->pc = 0x3A26D4u;
        goto label_3a26d4;
    }
    ctx->pc = 0x3A26CCu;
    {
        const bool branch_taken_0x3a26cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a26cc) {
            ctx->pc = 0x3A2798u;
            goto label_3a2798;
        }
    }
    ctx->pc = 0x3A26D4u;
label_3a26d4:
    // 0x3a26d4: 0xc0fe48c  jal         func_3F9230
label_3a26d8:
    if (ctx->pc == 0x3A26D8u) {
        ctx->pc = 0x3A26DCu;
        goto label_3a26dc;
    }
    ctx->pc = 0x3A26D4u;
    SET_GPR_U32(ctx, 31, 0x3A26DCu);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A26DCu; }
        if (ctx->pc != 0x3A26DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A26DCu; }
        if (ctx->pc != 0x3A26DCu) { return; }
    }
    ctx->pc = 0x3A26DCu;
label_3a26dc:
    // 0x3a26dc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3a26e0:
    if (ctx->pc == 0x3A26E0u) {
        ctx->pc = 0x3A26E0u;
            // 0x3a26e0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->pc = 0x3A26E4u;
        goto label_3a26e4;
    }
    ctx->pc = 0x3A26DCu;
    {
        const bool branch_taken_0x3a26dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A26E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A26DCu;
            // 0x3a26e0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a26dc) {
            ctx->pc = 0x3A2798u;
            goto label_3a2798;
        }
    }
    ctx->pc = 0x3A26E4u;
label_3a26e4:
    // 0x3a26e4: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x3a26e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_3a26e8:
    // 0x3a26e8: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
label_3a26ec:
    if (ctx->pc == 0x3A26ECu) {
        ctx->pc = 0x3A26ECu;
            // 0x3a26ec: 0x8e66003c  lw          $a2, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->pc = 0x3A26F0u;
        goto label_3a26f0;
    }
    ctx->pc = 0x3A26E8u;
    {
        const bool branch_taken_0x3a26e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a26e8) {
            ctx->pc = 0x3A26ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A26E8u;
            // 0x3a26ec: 0x8e66003c  lw          $a2, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2744u;
            goto label_3a2744;
        }
    }
    ctx->pc = 0x3A26F0u;
label_3a26f0:
    // 0x3a26f0: 0x8e66003c  lw          $a2, 0x3C($s3)
    ctx->pc = 0x3a26f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_3a26f4:
    // 0x3a26f4: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
label_3a26f8:
    if (ctx->pc == 0x3A26F8u) {
        ctx->pc = 0x3A26F8u;
            // 0x3a26f8: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->pc = 0x3A26FCu;
        goto label_3a26fc;
    }
    ctx->pc = 0x3A26F4u;
    {
        const bool branch_taken_0x3a26f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a26f4) {
            ctx->pc = 0x3A26F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A26F4u;
            // 0x3a26f8: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2720u;
            goto label_3a2720;
        }
    }
    ctx->pc = 0x3A26FCu;
label_3a26fc:
    // 0x3a26fc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3a26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3a2700:
    // 0x3a2700: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a2700u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a2704:
    // 0x3a2704: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a2704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a2708:
    // 0x3a2708: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a270c:
    // 0x3a270c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a270cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a2710:
    // 0x3a2710: 0x320f809  jalr        $t9
label_3a2714:
    if (ctx->pc == 0x3A2714u) {
        ctx->pc = 0x3A2714u;
            // 0x3a2714: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A2718u;
        goto label_3a2718;
    }
    ctx->pc = 0x3A2710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2718u);
        ctx->pc = 0x3A2714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2710u;
            // 0x3a2714: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2718u; }
            if (ctx->pc != 0x3A2718u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2718u;
label_3a2718:
    // 0x3a2718: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3a271c:
    if (ctx->pc == 0x3A271Cu) {
        ctx->pc = 0x3A271Cu;
            // 0x3a271c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A2720u;
        goto label_3a2720;
    }
    ctx->pc = 0x3A2718u;
    {
        const bool branch_taken_0x3a2718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A271Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2718u;
            // 0x3a271c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2718) {
            ctx->pc = 0x3A2798u;
            goto label_3a2798;
        }
    }
    ctx->pc = 0x3A2720u;
label_3a2720:
    // 0x3a2720: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x3a2720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_3a2724:
    // 0x3a2724: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a2724u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a2728:
    // 0x3a2728: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a2728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a272c:
    // 0x3a272c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a272cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2730:
    // 0x3a2730: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a2730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a2734:
    // 0x3a2734: 0x320f809  jalr        $t9
label_3a2738:
    if (ctx->pc == 0x3A2738u) {
        ctx->pc = 0x3A2738u;
            // 0x3a2738: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A273Cu;
        goto label_3a273c;
    }
    ctx->pc = 0x3A2734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A273Cu);
        ctx->pc = 0x3A2738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2734u;
            // 0x3a2738: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A273Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A273Cu; }
            if (ctx->pc != 0x3A273Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A273Cu;
label_3a273c:
    // 0x3a273c: 0x10000016  b           . + 4 + (0x16 << 2)
label_3a2740:
    if (ctx->pc == 0x3A2740u) {
        ctx->pc = 0x3A2740u;
            // 0x3a2740: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A2744u;
        goto label_3a2744;
    }
    ctx->pc = 0x3A273Cu;
    {
        const bool branch_taken_0x3a273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A273Cu;
            // 0x3a2740: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a273c) {
            ctx->pc = 0x3A2798u;
            goto label_3a2798;
        }
    }
    ctx->pc = 0x3A2744u;
label_3a2744:
    // 0x3a2744: 0x50c0000b  beql        $a2, $zero, . + 4 + (0xB << 2)
label_3a2748:
    if (ctx->pc == 0x3A2748u) {
        ctx->pc = 0x3A2748u;
            // 0x3a2748: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->pc = 0x3A274Cu;
        goto label_3a274c;
    }
    ctx->pc = 0x3A2744u;
    {
        const bool branch_taken_0x3a2744 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2744) {
            ctx->pc = 0x3A2748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2744u;
            // 0x3a2748: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2774u;
            goto label_3a2774;
        }
    }
    ctx->pc = 0x3A274Cu;
label_3a274c:
    // 0x3a274c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3a274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3a2750:
    // 0x3a2750: 0x8e650048  lw          $a1, 0x48($s3)
    ctx->pc = 0x3a2750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_3a2754:
    // 0x3a2754: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a2754u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a2758:
    // 0x3a2758: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a2758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a275c:
    // 0x3a275c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a275cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2760:
    // 0x3a2760: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a2760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a2764:
    // 0x3a2764: 0x320f809  jalr        $t9
label_3a2768:
    if (ctx->pc == 0x3A2768u) {
        ctx->pc = 0x3A2768u;
            // 0x3a2768: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A276Cu;
        goto label_3a276c;
    }
    ctx->pc = 0x3A2764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A276Cu);
        ctx->pc = 0x3A2768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2764u;
            // 0x3a2768: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A276Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A276Cu; }
            if (ctx->pc != 0x3A276Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A276Cu;
label_3a276c:
    // 0x3a276c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a2770:
    if (ctx->pc == 0x3A2770u) {
        ctx->pc = 0x3A2770u;
            // 0x3a2770: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A2774u;
        goto label_3a2774;
    }
    ctx->pc = 0x3A276Cu;
    {
        const bool branch_taken_0x3a276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A276Cu;
            // 0x3a2770: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a276c) {
            ctx->pc = 0x3A2798u;
            goto label_3a2798;
        }
    }
    ctx->pc = 0x3A2774u;
label_3a2774:
    // 0x3a2774: 0x8e650048  lw          $a1, 0x48($s3)
    ctx->pc = 0x3a2774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_3a2778:
    // 0x3a2778: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x3a2778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_3a277c:
    // 0x3a277c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a277cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a2780:
    // 0x3a2780: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a2780u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a2784:
    // 0x3a2784: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2788:
    // 0x3a2788: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3a2788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3a278c:
    // 0x3a278c: 0x320f809  jalr        $t9
label_3a2790:
    if (ctx->pc == 0x3A2790u) {
        ctx->pc = 0x3A2790u;
            // 0x3a2790: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A2794u;
        goto label_3a2794;
    }
    ctx->pc = 0x3A278Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2794u);
        ctx->pc = 0x3A2790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A278Cu;
            // 0x3a2790: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2794u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2794u; }
            if (ctx->pc != 0x3A2794u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2794u;
label_3a2794:
    // 0x3a2794: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a2794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2798:
    // 0x3a2798: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3a2798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a279c:
    // 0x3a279c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a279cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a27a0:
    // 0x3a27a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a27a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a27a4:
    // 0x3a27a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a27a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a27a8:
    // 0x3a27a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a27a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a27ac:
    // 0x3a27ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a27acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a27b0:
    // 0x3a27b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a27b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a27b4:
    // 0x3a27b4: 0x3e00008  jr          $ra
label_3a27b8:
    if (ctx->pc == 0x3A27B8u) {
        ctx->pc = 0x3A27B8u;
            // 0x3a27b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3A27BCu;
        goto label_3a27bc;
    }
    ctx->pc = 0x3A27B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A27B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A27B4u;
            // 0x3a27b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A27BCu;
label_3a27bc:
    // 0x3a27bc: 0x0  nop
    ctx->pc = 0x3a27bcu;
    // NOP
}
