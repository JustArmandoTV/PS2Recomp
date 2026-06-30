#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A2340
// Address: 0x4a2340 - 0x4a27a0
void sub_004A2340_0x4a2340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2340_0x4a2340");
#endif

    switch (ctx->pc) {
        case 0x4a2340u: goto label_4a2340;
        case 0x4a2344u: goto label_4a2344;
        case 0x4a2348u: goto label_4a2348;
        case 0x4a234cu: goto label_4a234c;
        case 0x4a2350u: goto label_4a2350;
        case 0x4a2354u: goto label_4a2354;
        case 0x4a2358u: goto label_4a2358;
        case 0x4a235cu: goto label_4a235c;
        case 0x4a2360u: goto label_4a2360;
        case 0x4a2364u: goto label_4a2364;
        case 0x4a2368u: goto label_4a2368;
        case 0x4a236cu: goto label_4a236c;
        case 0x4a2370u: goto label_4a2370;
        case 0x4a2374u: goto label_4a2374;
        case 0x4a2378u: goto label_4a2378;
        case 0x4a237cu: goto label_4a237c;
        case 0x4a2380u: goto label_4a2380;
        case 0x4a2384u: goto label_4a2384;
        case 0x4a2388u: goto label_4a2388;
        case 0x4a238cu: goto label_4a238c;
        case 0x4a2390u: goto label_4a2390;
        case 0x4a2394u: goto label_4a2394;
        case 0x4a2398u: goto label_4a2398;
        case 0x4a239cu: goto label_4a239c;
        case 0x4a23a0u: goto label_4a23a0;
        case 0x4a23a4u: goto label_4a23a4;
        case 0x4a23a8u: goto label_4a23a8;
        case 0x4a23acu: goto label_4a23ac;
        case 0x4a23b0u: goto label_4a23b0;
        case 0x4a23b4u: goto label_4a23b4;
        case 0x4a23b8u: goto label_4a23b8;
        case 0x4a23bcu: goto label_4a23bc;
        case 0x4a23c0u: goto label_4a23c0;
        case 0x4a23c4u: goto label_4a23c4;
        case 0x4a23c8u: goto label_4a23c8;
        case 0x4a23ccu: goto label_4a23cc;
        case 0x4a23d0u: goto label_4a23d0;
        case 0x4a23d4u: goto label_4a23d4;
        case 0x4a23d8u: goto label_4a23d8;
        case 0x4a23dcu: goto label_4a23dc;
        case 0x4a23e0u: goto label_4a23e0;
        case 0x4a23e4u: goto label_4a23e4;
        case 0x4a23e8u: goto label_4a23e8;
        case 0x4a23ecu: goto label_4a23ec;
        case 0x4a23f0u: goto label_4a23f0;
        case 0x4a23f4u: goto label_4a23f4;
        case 0x4a23f8u: goto label_4a23f8;
        case 0x4a23fcu: goto label_4a23fc;
        case 0x4a2400u: goto label_4a2400;
        case 0x4a2404u: goto label_4a2404;
        case 0x4a2408u: goto label_4a2408;
        case 0x4a240cu: goto label_4a240c;
        case 0x4a2410u: goto label_4a2410;
        case 0x4a2414u: goto label_4a2414;
        case 0x4a2418u: goto label_4a2418;
        case 0x4a241cu: goto label_4a241c;
        case 0x4a2420u: goto label_4a2420;
        case 0x4a2424u: goto label_4a2424;
        case 0x4a2428u: goto label_4a2428;
        case 0x4a242cu: goto label_4a242c;
        case 0x4a2430u: goto label_4a2430;
        case 0x4a2434u: goto label_4a2434;
        case 0x4a2438u: goto label_4a2438;
        case 0x4a243cu: goto label_4a243c;
        case 0x4a2440u: goto label_4a2440;
        case 0x4a2444u: goto label_4a2444;
        case 0x4a2448u: goto label_4a2448;
        case 0x4a244cu: goto label_4a244c;
        case 0x4a2450u: goto label_4a2450;
        case 0x4a2454u: goto label_4a2454;
        case 0x4a2458u: goto label_4a2458;
        case 0x4a245cu: goto label_4a245c;
        case 0x4a2460u: goto label_4a2460;
        case 0x4a2464u: goto label_4a2464;
        case 0x4a2468u: goto label_4a2468;
        case 0x4a246cu: goto label_4a246c;
        case 0x4a2470u: goto label_4a2470;
        case 0x4a2474u: goto label_4a2474;
        case 0x4a2478u: goto label_4a2478;
        case 0x4a247cu: goto label_4a247c;
        case 0x4a2480u: goto label_4a2480;
        case 0x4a2484u: goto label_4a2484;
        case 0x4a2488u: goto label_4a2488;
        case 0x4a248cu: goto label_4a248c;
        case 0x4a2490u: goto label_4a2490;
        case 0x4a2494u: goto label_4a2494;
        case 0x4a2498u: goto label_4a2498;
        case 0x4a249cu: goto label_4a249c;
        case 0x4a24a0u: goto label_4a24a0;
        case 0x4a24a4u: goto label_4a24a4;
        case 0x4a24a8u: goto label_4a24a8;
        case 0x4a24acu: goto label_4a24ac;
        case 0x4a24b0u: goto label_4a24b0;
        case 0x4a24b4u: goto label_4a24b4;
        case 0x4a24b8u: goto label_4a24b8;
        case 0x4a24bcu: goto label_4a24bc;
        case 0x4a24c0u: goto label_4a24c0;
        case 0x4a24c4u: goto label_4a24c4;
        case 0x4a24c8u: goto label_4a24c8;
        case 0x4a24ccu: goto label_4a24cc;
        case 0x4a24d0u: goto label_4a24d0;
        case 0x4a24d4u: goto label_4a24d4;
        case 0x4a24d8u: goto label_4a24d8;
        case 0x4a24dcu: goto label_4a24dc;
        case 0x4a24e0u: goto label_4a24e0;
        case 0x4a24e4u: goto label_4a24e4;
        case 0x4a24e8u: goto label_4a24e8;
        case 0x4a24ecu: goto label_4a24ec;
        case 0x4a24f0u: goto label_4a24f0;
        case 0x4a24f4u: goto label_4a24f4;
        case 0x4a24f8u: goto label_4a24f8;
        case 0x4a24fcu: goto label_4a24fc;
        case 0x4a2500u: goto label_4a2500;
        case 0x4a2504u: goto label_4a2504;
        case 0x4a2508u: goto label_4a2508;
        case 0x4a250cu: goto label_4a250c;
        case 0x4a2510u: goto label_4a2510;
        case 0x4a2514u: goto label_4a2514;
        case 0x4a2518u: goto label_4a2518;
        case 0x4a251cu: goto label_4a251c;
        case 0x4a2520u: goto label_4a2520;
        case 0x4a2524u: goto label_4a2524;
        case 0x4a2528u: goto label_4a2528;
        case 0x4a252cu: goto label_4a252c;
        case 0x4a2530u: goto label_4a2530;
        case 0x4a2534u: goto label_4a2534;
        case 0x4a2538u: goto label_4a2538;
        case 0x4a253cu: goto label_4a253c;
        case 0x4a2540u: goto label_4a2540;
        case 0x4a2544u: goto label_4a2544;
        case 0x4a2548u: goto label_4a2548;
        case 0x4a254cu: goto label_4a254c;
        case 0x4a2550u: goto label_4a2550;
        case 0x4a2554u: goto label_4a2554;
        case 0x4a2558u: goto label_4a2558;
        case 0x4a255cu: goto label_4a255c;
        case 0x4a2560u: goto label_4a2560;
        case 0x4a2564u: goto label_4a2564;
        case 0x4a2568u: goto label_4a2568;
        case 0x4a256cu: goto label_4a256c;
        case 0x4a2570u: goto label_4a2570;
        case 0x4a2574u: goto label_4a2574;
        case 0x4a2578u: goto label_4a2578;
        case 0x4a257cu: goto label_4a257c;
        case 0x4a2580u: goto label_4a2580;
        case 0x4a2584u: goto label_4a2584;
        case 0x4a2588u: goto label_4a2588;
        case 0x4a258cu: goto label_4a258c;
        case 0x4a2590u: goto label_4a2590;
        case 0x4a2594u: goto label_4a2594;
        case 0x4a2598u: goto label_4a2598;
        case 0x4a259cu: goto label_4a259c;
        case 0x4a25a0u: goto label_4a25a0;
        case 0x4a25a4u: goto label_4a25a4;
        case 0x4a25a8u: goto label_4a25a8;
        case 0x4a25acu: goto label_4a25ac;
        case 0x4a25b0u: goto label_4a25b0;
        case 0x4a25b4u: goto label_4a25b4;
        case 0x4a25b8u: goto label_4a25b8;
        case 0x4a25bcu: goto label_4a25bc;
        case 0x4a25c0u: goto label_4a25c0;
        case 0x4a25c4u: goto label_4a25c4;
        case 0x4a25c8u: goto label_4a25c8;
        case 0x4a25ccu: goto label_4a25cc;
        case 0x4a25d0u: goto label_4a25d0;
        case 0x4a25d4u: goto label_4a25d4;
        case 0x4a25d8u: goto label_4a25d8;
        case 0x4a25dcu: goto label_4a25dc;
        case 0x4a25e0u: goto label_4a25e0;
        case 0x4a25e4u: goto label_4a25e4;
        case 0x4a25e8u: goto label_4a25e8;
        case 0x4a25ecu: goto label_4a25ec;
        case 0x4a25f0u: goto label_4a25f0;
        case 0x4a25f4u: goto label_4a25f4;
        case 0x4a25f8u: goto label_4a25f8;
        case 0x4a25fcu: goto label_4a25fc;
        case 0x4a2600u: goto label_4a2600;
        case 0x4a2604u: goto label_4a2604;
        case 0x4a2608u: goto label_4a2608;
        case 0x4a260cu: goto label_4a260c;
        case 0x4a2610u: goto label_4a2610;
        case 0x4a2614u: goto label_4a2614;
        case 0x4a2618u: goto label_4a2618;
        case 0x4a261cu: goto label_4a261c;
        case 0x4a2620u: goto label_4a2620;
        case 0x4a2624u: goto label_4a2624;
        case 0x4a2628u: goto label_4a2628;
        case 0x4a262cu: goto label_4a262c;
        case 0x4a2630u: goto label_4a2630;
        case 0x4a2634u: goto label_4a2634;
        case 0x4a2638u: goto label_4a2638;
        case 0x4a263cu: goto label_4a263c;
        case 0x4a2640u: goto label_4a2640;
        case 0x4a2644u: goto label_4a2644;
        case 0x4a2648u: goto label_4a2648;
        case 0x4a264cu: goto label_4a264c;
        case 0x4a2650u: goto label_4a2650;
        case 0x4a2654u: goto label_4a2654;
        case 0x4a2658u: goto label_4a2658;
        case 0x4a265cu: goto label_4a265c;
        case 0x4a2660u: goto label_4a2660;
        case 0x4a2664u: goto label_4a2664;
        case 0x4a2668u: goto label_4a2668;
        case 0x4a266cu: goto label_4a266c;
        case 0x4a2670u: goto label_4a2670;
        case 0x4a2674u: goto label_4a2674;
        case 0x4a2678u: goto label_4a2678;
        case 0x4a267cu: goto label_4a267c;
        case 0x4a2680u: goto label_4a2680;
        case 0x4a2684u: goto label_4a2684;
        case 0x4a2688u: goto label_4a2688;
        case 0x4a268cu: goto label_4a268c;
        case 0x4a2690u: goto label_4a2690;
        case 0x4a2694u: goto label_4a2694;
        case 0x4a2698u: goto label_4a2698;
        case 0x4a269cu: goto label_4a269c;
        case 0x4a26a0u: goto label_4a26a0;
        case 0x4a26a4u: goto label_4a26a4;
        case 0x4a26a8u: goto label_4a26a8;
        case 0x4a26acu: goto label_4a26ac;
        case 0x4a26b0u: goto label_4a26b0;
        case 0x4a26b4u: goto label_4a26b4;
        case 0x4a26b8u: goto label_4a26b8;
        case 0x4a26bcu: goto label_4a26bc;
        case 0x4a26c0u: goto label_4a26c0;
        case 0x4a26c4u: goto label_4a26c4;
        case 0x4a26c8u: goto label_4a26c8;
        case 0x4a26ccu: goto label_4a26cc;
        case 0x4a26d0u: goto label_4a26d0;
        case 0x4a26d4u: goto label_4a26d4;
        case 0x4a26d8u: goto label_4a26d8;
        case 0x4a26dcu: goto label_4a26dc;
        case 0x4a26e0u: goto label_4a26e0;
        case 0x4a26e4u: goto label_4a26e4;
        case 0x4a26e8u: goto label_4a26e8;
        case 0x4a26ecu: goto label_4a26ec;
        case 0x4a26f0u: goto label_4a26f0;
        case 0x4a26f4u: goto label_4a26f4;
        case 0x4a26f8u: goto label_4a26f8;
        case 0x4a26fcu: goto label_4a26fc;
        case 0x4a2700u: goto label_4a2700;
        case 0x4a2704u: goto label_4a2704;
        case 0x4a2708u: goto label_4a2708;
        case 0x4a270cu: goto label_4a270c;
        case 0x4a2710u: goto label_4a2710;
        case 0x4a2714u: goto label_4a2714;
        case 0x4a2718u: goto label_4a2718;
        case 0x4a271cu: goto label_4a271c;
        case 0x4a2720u: goto label_4a2720;
        case 0x4a2724u: goto label_4a2724;
        case 0x4a2728u: goto label_4a2728;
        case 0x4a272cu: goto label_4a272c;
        case 0x4a2730u: goto label_4a2730;
        case 0x4a2734u: goto label_4a2734;
        case 0x4a2738u: goto label_4a2738;
        case 0x4a273cu: goto label_4a273c;
        case 0x4a2740u: goto label_4a2740;
        case 0x4a2744u: goto label_4a2744;
        case 0x4a2748u: goto label_4a2748;
        case 0x4a274cu: goto label_4a274c;
        case 0x4a2750u: goto label_4a2750;
        case 0x4a2754u: goto label_4a2754;
        case 0x4a2758u: goto label_4a2758;
        case 0x4a275cu: goto label_4a275c;
        case 0x4a2760u: goto label_4a2760;
        case 0x4a2764u: goto label_4a2764;
        case 0x4a2768u: goto label_4a2768;
        case 0x4a276cu: goto label_4a276c;
        case 0x4a2770u: goto label_4a2770;
        case 0x4a2774u: goto label_4a2774;
        case 0x4a2778u: goto label_4a2778;
        case 0x4a277cu: goto label_4a277c;
        case 0x4a2780u: goto label_4a2780;
        case 0x4a2784u: goto label_4a2784;
        case 0x4a2788u: goto label_4a2788;
        case 0x4a278cu: goto label_4a278c;
        case 0x4a2790u: goto label_4a2790;
        case 0x4a2794u: goto label_4a2794;
        case 0x4a2798u: goto label_4a2798;
        case 0x4a279cu: goto label_4a279c;
        default: break;
    }

    ctx->pc = 0x4a2340u;

label_4a2340:
    // 0x4a2340: 0x3e00008  jr          $ra
label_4a2344:
    if (ctx->pc == 0x4A2344u) {
        ctx->pc = 0x4A2344u;
            // 0x4a2344: 0x8c8200f4  lw          $v0, 0xF4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
        ctx->pc = 0x4A2348u;
        goto label_4a2348;
    }
    ctx->pc = 0x4A2340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2340u;
            // 0x4a2344: 0x8c8200f4  lw          $v0, 0xF4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A2348u;
label_4a2348:
    // 0x4a2348: 0x0  nop
    ctx->pc = 0x4a2348u;
    // NOP
label_4a234c:
    // 0x4a234c: 0x0  nop
    ctx->pc = 0x4a234cu;
    // NOP
label_4a2350:
    // 0x4a2350: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x4a2350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a2354:
    // 0x4a2354: 0x3c03413c  lui         $v1, 0x413C
    ctx->pc = 0x4a2354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16700 << 16));
label_4a2358:
    // 0x4a2358: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a2358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a235c:
    // 0x4a235c: 0x0  nop
    ctx->pc = 0x4a235cu;
    // NOP
label_4a2360:
    // 0x4a2360: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x4a2360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
label_4a2364:
    // 0x4a2364: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x4a2364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a2368:
    // 0x4a2368: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x4a2368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_4a236c:
    // 0x4a236c: 0xc48000f0  lwc1        $f0, 0xF0($a0)
    ctx->pc = 0x4a236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a2370:
    // 0x4a2370: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4a2370u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4a2374:
    // 0x4a2374: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x4a2374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
label_4a2378:
    // 0x4a2378: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x4a2378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
label_4a237c:
    // 0x4a237c: 0xe4800104  swc1        $f0, 0x104($a0)
    ctx->pc = 0x4a237cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
label_4a2380:
    // 0x4a2380: 0xac800108  sw          $zero, 0x108($a0)
    ctx->pc = 0x4a2380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
label_4a2384:
    // 0x4a2384: 0xac80010c  sw          $zero, 0x10C($a0)
    ctx->pc = 0x4a2384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 0));
label_4a2388:
    // 0x4a2388: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x4a2388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
label_4a238c:
    // 0x4a238c: 0xe4800114  swc1        $f0, 0x114($a0)
    ctx->pc = 0x4a238cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
label_4a2390:
    // 0x4a2390: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x4a2390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
label_4a2394:
    // 0x4a2394: 0x3e00008  jr          $ra
label_4a2398:
    if (ctx->pc == 0x4A2398u) {
        ctx->pc = 0x4A2398u;
            // 0x4a2398: 0xac80011c  sw          $zero, 0x11C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
        ctx->pc = 0x4A239Cu;
        goto label_4a239c;
    }
    ctx->pc = 0x4A2394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2394u;
            // 0x4a2398: 0xac80011c  sw          $zero, 0x11C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A239Cu;
label_4a239c:
    // 0x4a239c: 0x0  nop
    ctx->pc = 0x4a239cu;
    // NOP
label_4a23a0:
    // 0x4a23a0: 0x8ca40d60  lw          $a0, 0xD60($a1)
    ctx->pc = 0x4a23a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
label_4a23a4:
    // 0x4a23a4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4a23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4a23a8:
    // 0x4a23a8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4a23a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4a23ac:
    // 0x4a23ac: 0x344516a9  ori         $a1, $v0, 0x16A9
    ctx->pc = 0x4a23acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5801);
label_4a23b0:
    // 0x4a23b0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4a23b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4a23b4:
    // 0x4a23b4: 0x3200008  jr          $t9
label_4a23b8:
    if (ctx->pc == 0x4A23B8u) {
        ctx->pc = 0x4A23BCu;
        goto label_4a23bc;
    }
    ctx->pc = 0x4A23B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A23BCu;
label_4a23bc:
    // 0x4a23bc: 0x0  nop
    ctx->pc = 0x4a23bcu;
    // NOP
label_4a23c0:
    // 0x4a23c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a23c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4a23c4:
    // 0x4a23c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a23c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a23c8:
    // 0x4a23c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a23c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a23cc:
    // 0x4a23cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a23ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a23d0:
    // 0x4a23d0: 0xc0e393c  jal         func_38E4F0
label_4a23d4:
    if (ctx->pc == 0x4A23D4u) {
        ctx->pc = 0x4A23D4u;
            // 0x4a23d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A23D8u;
        goto label_4a23d8;
    }
    ctx->pc = 0x4A23D0u;
    SET_GPR_U32(ctx, 31, 0x4A23D8u);
    ctx->pc = 0x4A23D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A23D0u;
            // 0x4a23d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A23D8u; }
        if (ctx->pc != 0x4A23D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A23D8u; }
        if (ctx->pc != 0x4A23D8u) { return; }
    }
    ctx->pc = 0x4A23D8u;
label_4a23d8:
    // 0x4a23d8: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x4a23d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_4a23dc:
    // 0x4a23dc: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x4a23dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_4a23e0:
    // 0x4a23e0: 0xc60c0130  lwc1        $f12, 0x130($s0)
    ctx->pc = 0x4a23e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a23e4:
    // 0x4a23e4: 0xc60d0134  lwc1        $f13, 0x134($s0)
    ctx->pc = 0x4a23e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4a23e8:
    // 0x4a23e8: 0xc60e0138  lwc1        $f14, 0x138($s0)
    ctx->pc = 0x4a23e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4a23ec:
    // 0x4a23ec: 0xc04cbd8  jal         func_132F60
label_4a23f0:
    if (ctx->pc == 0x4A23F0u) {
        ctx->pc = 0x4A23F0u;
            // 0x4a23f0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4A23F4u;
        goto label_4a23f4;
    }
    ctx->pc = 0x4A23ECu;
    SET_GPR_U32(ctx, 31, 0x4A23F4u);
    ctx->pc = 0x4A23F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A23ECu;
            // 0x4a23f0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A23F4u; }
        if (ctx->pc != 0x4A23F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A23F4u; }
        if (ctx->pc != 0x4A23F4u) { return; }
    }
    ctx->pc = 0x4A23F4u;
label_4a23f4:
    // 0x4a23f4: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x4a23f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a23f8:
    // 0x4a23f8: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x4a23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_4a23fc:
    // 0x4a23fc: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x4a23fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_4a2400:
    // 0x4a2400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a2400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2404:
    // 0x4a2404: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a2404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a2408:
    // 0x4a2408: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x4a2408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
label_4a240c:
    // 0x4a240c: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4a240cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4a2410:
    // 0x4a2410: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4a2410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4a2414:
    // 0x4a2414: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4a2414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4a2418:
    // 0x4a2418: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4a2418u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4a241c:
    // 0x4a241c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4a241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4a2420:
    // 0x4a2420: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4a2420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a2424:
    // 0x4a2424: 0xc08bff0  jal         func_22FFC0
label_4a2428:
    if (ctx->pc == 0x4A2428u) {
        ctx->pc = 0x4A2428u;
            // 0x4a2428: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A242Cu;
        goto label_4a242c;
    }
    ctx->pc = 0x4A2424u;
    SET_GPR_U32(ctx, 31, 0x4A242Cu);
    ctx->pc = 0x4A2428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2424u;
            // 0x4a2428: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A242Cu; }
        if (ctx->pc != 0x4A242Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A242Cu; }
        if (ctx->pc != 0x4A242Cu) { return; }
    }
    ctx->pc = 0x4A242Cu;
label_4a242c:
    // 0x4a242c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4a242cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4a2430:
    // 0x4a2430: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4a2430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4a2434:
    // 0x4a2434: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a2434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a2438:
    // 0x4a2438: 0xc08914c  jal         func_224530
label_4a243c:
    if (ctx->pc == 0x4A243Cu) {
        ctx->pc = 0x4A243Cu;
            // 0x4a243c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A2440u;
        goto label_4a2440;
    }
    ctx->pc = 0x4A2438u;
    SET_GPR_U32(ctx, 31, 0x4A2440u);
    ctx->pc = 0x4A243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2438u;
            // 0x4a243c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2440u; }
        if (ctx->pc != 0x4A2440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2440u; }
        if (ctx->pc != 0x4A2440u) { return; }
    }
    ctx->pc = 0x4A2440u;
label_4a2440:
    // 0x4a2440: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4a2440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4a2444:
    // 0x4a2444: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x4a2444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a2448:
    // 0x4a2448: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x4a2448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a244c:
    // 0x4a244c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4a244cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4a2450:
    // 0x4a2450: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x4a2450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a2454:
    // 0x4a2454: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4a2454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4a2458:
    // 0x4a2458: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4a2458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4a245c:
    // 0x4a245c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4a245cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4a2460:
    // 0x4a2460: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4a2460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4a2464:
    // 0x4a2464: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4a2464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4a2468:
    // 0x4a2468: 0xc60300e8  lwc1        $f3, 0xE8($s0)
    ctx->pc = 0x4a2468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4a246c:
    // 0x4a246c: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x4a246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a2470:
    // 0x4a2470: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x4a2470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a2474:
    // 0x4a2474: 0xc60000dc  lwc1        $f0, 0xDC($s0)
    ctx->pc = 0x4a2474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a2478:
    // 0x4a2478: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4a2478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4a247c:
    // 0x4a247c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4a247cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4a2480:
    // 0x4a2480: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x4a2480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4a2484:
    // 0x4a2484: 0xc0892b0  jal         func_224AC0
label_4a2488:
    if (ctx->pc == 0x4A2488u) {
        ctx->pc = 0x4A2488u;
            // 0x4a2488: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x4A248Cu;
        goto label_4a248c;
    }
    ctx->pc = 0x4A2484u;
    SET_GPR_U32(ctx, 31, 0x4A248Cu);
    ctx->pc = 0x4A2488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2484u;
            // 0x4a2488: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A248Cu; }
        if (ctx->pc != 0x4A248Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A248Cu; }
        if (ctx->pc != 0x4A248Cu) { return; }
    }
    ctx->pc = 0x4A248Cu;
label_4a248c:
    // 0x4a248c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4a248cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_4a2490:
    // 0x4a2490: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4a2490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4a2494:
    // 0x4a2494: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4a2494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_4a2498:
    // 0x4a2498: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4a2498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4a249c:
    // 0x4a249c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4a249cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4a24a0:
    // 0x4a24a0: 0xc088b74  jal         func_222DD0
label_4a24a4:
    if (ctx->pc == 0x4A24A4u) {
        ctx->pc = 0x4A24A4u;
            // 0x4a24a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A24A8u;
        goto label_4a24a8;
    }
    ctx->pc = 0x4A24A0u;
    SET_GPR_U32(ctx, 31, 0x4A24A8u);
    ctx->pc = 0x4A24A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A24A0u;
            // 0x4a24a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A24A8u; }
        if (ctx->pc != 0x4A24A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A24A8u; }
        if (ctx->pc != 0x4A24A8u) { return; }
    }
    ctx->pc = 0x4A24A8u;
label_4a24a8:
    // 0x4a24a8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4a24a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4a24ac:
    // 0x4a24ac: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4a24acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4a24b0:
    // 0x4a24b0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4a24b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4a24b4:
    // 0x4a24b4: 0x320f809  jalr        $t9
label_4a24b8:
    if (ctx->pc == 0x4A24B8u) {
        ctx->pc = 0x4A24B8u;
            // 0x4a24b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A24BCu;
        goto label_4a24bc;
    }
    ctx->pc = 0x4A24B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A24BCu);
        ctx->pc = 0x4A24B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A24B4u;
            // 0x4a24b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A24BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A24BCu; }
            if (ctx->pc != 0x4A24BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4A24BCu;
label_4a24bc:
    // 0x4a24bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a24bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a24c0:
    // 0x4a24c0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4a24c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4a24c4:
    // 0x4a24c4: 0xa2050064  sb          $a1, 0x64($s0)
    ctx->pc = 0x4a24c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 5));
label_4a24c8:
    // 0x4a24c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a24cc:
    // 0x4a24cc: 0xa2050065  sb          $a1, 0x65($s0)
    ctx->pc = 0x4a24ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 5));
label_4a24d0:
    // 0x4a24d0: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x4a24d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_4a24d4:
    // 0x4a24d4: 0xa2040069  sb          $a0, 0x69($s0)
    ctx->pc = 0x4a24d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 4));
label_4a24d8:
    // 0x4a24d8: 0xa203006a  sb          $v1, 0x6A($s0)
    ctx->pc = 0x4a24d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 3));
label_4a24dc:
    // 0x4a24dc: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x4a24dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
label_4a24e0:
    // 0x4a24e0: 0xa2000144  sb          $zero, 0x144($s0)
    ctx->pc = 0x4a24e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 324), (uint8_t)GPR_U32(ctx, 0));
label_4a24e4:
    // 0x4a24e4: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x4a24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
label_4a24e8:
    // 0x4a24e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a24e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a24ec:
    // 0x4a24ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a24ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a24f0:
    // 0x4a24f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a24f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a24f4:
    // 0x4a24f4: 0x3e00008  jr          $ra
label_4a24f8:
    if (ctx->pc == 0x4A24F8u) {
        ctx->pc = 0x4A24F8u;
            // 0x4a24f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4A24FCu;
        goto label_4a24fc;
    }
    ctx->pc = 0x4A24F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A24F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A24F4u;
            // 0x4a24f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A24FCu;
label_4a24fc:
    // 0x4a24fc: 0x0  nop
    ctx->pc = 0x4a24fcu;
    // NOP
label_4a2500:
    // 0x4a2500: 0x3e00008  jr          $ra
label_4a2504:
    if (ctx->pc == 0x4A2504u) {
        ctx->pc = 0x4A2504u;
            // 0x4a2504: 0x24025a28  addiu       $v0, $zero, 0x5A28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23080));
        ctx->pc = 0x4A2508u;
        goto label_4a2508;
    }
    ctx->pc = 0x4A2500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2500u;
            // 0x4a2504: 0x24025a28  addiu       $v0, $zero, 0x5A28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A2508u;
label_4a2508:
    // 0x4a2508: 0x0  nop
    ctx->pc = 0x4a2508u;
    // NOP
label_4a250c:
    // 0x4a250c: 0x0  nop
    ctx->pc = 0x4a250cu;
    // NOP
label_4a2510:
    // 0x4a2510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a2510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4a2514:
    // 0x4a2514: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4a2514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4a2518:
    // 0x4a2518: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a2518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a251c:
    // 0x4a251c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a2520:
    // 0x4a2520: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a2520u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a2524:
    // 0x4a2524: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a2524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a2528:
    // 0x4a2528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a2528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a252c:
    // 0x4a252c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a2530:
    // 0x4a2530: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4a2530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4a2534:
    // 0x4a2534: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4a2538:
    if (ctx->pc == 0x4A2538u) {
        ctx->pc = 0x4A2538u;
            // 0x4a2538: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A253Cu;
        goto label_4a253c;
    }
    ctx->pc = 0x4A2534u;
    {
        const bool branch_taken_0x4a2534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2534u;
            // 0x4a2538: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2534) {
            ctx->pc = 0x4A2578u;
            goto label_4a2578;
        }
    }
    ctx->pc = 0x4A253Cu;
label_4a253c:
    // 0x4a253c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a253cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2540:
    // 0x4a2540: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a2540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2544:
    // 0x4a2544: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a2544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2548:
    // 0x4a2548: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4a2548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4a254c:
    // 0x4a254c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4a254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4a2550:
    // 0x4a2550: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a2550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a2554:
    // 0x4a2554: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a2554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a2558:
    // 0x4a2558: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a2558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a255c:
    // 0x4a255c: 0x320f809  jalr        $t9
label_4a2560:
    if (ctx->pc == 0x4A2560u) {
        ctx->pc = 0x4A2564u;
        goto label_4a2564;
    }
    ctx->pc = 0x4A255Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A2564u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A2564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A2564u; }
            if (ctx->pc != 0x4A2564u) { return; }
        }
        }
    }
    ctx->pc = 0x4A2564u;
label_4a2564:
    // 0x4a2564: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4a2564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a2568:
    // 0x4a2568: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4a2568u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4a256c:
    // 0x4a256c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4a256cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4a2570:
    // 0x4a2570: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4a2574:
    if (ctx->pc == 0x4A2574u) {
        ctx->pc = 0x4A2574u;
            // 0x4a2574: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4A2578u;
        goto label_4a2578;
    }
    ctx->pc = 0x4A2570u;
    {
        const bool branch_taken_0x4a2570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2570u;
            // 0x4a2574: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2570) {
            ctx->pc = 0x4A2548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a2548;
        }
    }
    ctx->pc = 0x4A2578u;
label_4a2578:
    // 0x4a2578: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4a2578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a257c:
    // 0x4a257c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4a257cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4a2580:
    // 0x4a2580: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a2580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a2584:
    // 0x4a2584: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a2584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a2588:
    // 0x4a2588: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a2588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a258c:
    // 0x4a258c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a258cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a2590:
    // 0x4a2590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a2590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a2594:
    // 0x4a2594: 0x3e00008  jr          $ra
label_4a2598:
    if (ctx->pc == 0x4A2598u) {
        ctx->pc = 0x4A2598u;
            // 0x4a2598: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4A259Cu;
        goto label_4a259c;
    }
    ctx->pc = 0x4A2594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2594u;
            // 0x4a2598: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A259Cu;
label_4a259c:
    // 0x4a259c: 0x0  nop
    ctx->pc = 0x4a259cu;
    // NOP
label_4a25a0:
    // 0x4a25a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a25a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a25a4:
    // 0x4a25a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a25a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a25a8:
    // 0x4a25a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a25a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a25ac:
    // 0x4a25ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4a25acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4a25b0:
    // 0x4a25b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a25b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a25b4:
    // 0x4a25b4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4a25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4a25b8:
    // 0x4a25b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a25b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a25bc:
    // 0x4a25bc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4a25bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4a25c0:
    // 0x4a25c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a25c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a25c4:
    // 0x4a25c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a25c8:
    // 0x4a25c8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4a25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4a25cc:
    // 0x4a25cc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4a25ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a25d0:
    // 0x4a25d0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4a25d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4a25d4:
    // 0x4a25d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4a25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4a25d8:
    // 0x4a25d8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4a25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4a25dc:
    // 0x4a25dc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4a25dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4a25e0:
    // 0x4a25e0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4a25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4a25e4:
    // 0x4a25e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a25e8:
    // 0x4a25e8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4a25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4a25ec:
    // 0x4a25ec: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4a25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4a25f0:
    // 0x4a25f0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4a25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4a25f4:
    // 0x4a25f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a25f8:
    // 0x4a25f8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4a25f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a25fc:
    // 0x4a25fc: 0xc0a997c  jal         func_2A65F0
label_4a2600:
    if (ctx->pc == 0x4A2600u) {
        ctx->pc = 0x4A2600u;
            // 0x4a2600: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4A2604u;
        goto label_4a2604;
    }
    ctx->pc = 0x4A25FCu;
    SET_GPR_U32(ctx, 31, 0x4A2604u);
    ctx->pc = 0x4A2600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A25FCu;
            // 0x4a2600: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2604u; }
        if (ctx->pc != 0x4A2604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2604u; }
        if (ctx->pc != 0x4A2604u) { return; }
    }
    ctx->pc = 0x4A2604u;
label_4a2604:
    // 0x4a2604: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4a2604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4a2608:
    // 0x4a2608: 0xc0d879c  jal         func_361E70
label_4a260c:
    if (ctx->pc == 0x4A260Cu) {
        ctx->pc = 0x4A260Cu;
            // 0x4a260c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A2610u;
        goto label_4a2610;
    }
    ctx->pc = 0x4A2608u;
    SET_GPR_U32(ctx, 31, 0x4A2610u);
    ctx->pc = 0x4A260Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2608u;
            // 0x4a260c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2610u; }
        if (ctx->pc != 0x4A2610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2610u; }
        if (ctx->pc != 0x4A2610u) { return; }
    }
    ctx->pc = 0x4A2610u;
label_4a2610:
    // 0x4a2610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a2610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a2614:
    // 0x4a2614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a2614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a2618:
    // 0x4a2618: 0x3e00008  jr          $ra
label_4a261c:
    if (ctx->pc == 0x4A261Cu) {
        ctx->pc = 0x4A261Cu;
            // 0x4a261c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A2620u;
        goto label_4a2620;
    }
    ctx->pc = 0x4A2618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A261Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2618u;
            // 0x4a261c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A2620u;
label_4a2620:
    // 0x4a2620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a2620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a2624:
    // 0x4a2624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a2624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a2628:
    // 0x4a2628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a2628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a262c:
    // 0x4a262c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4a262cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4a2630:
    // 0x4a2630: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4a2634:
    if (ctx->pc == 0x4A2634u) {
        ctx->pc = 0x4A2634u;
            // 0x4a2634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A2638u;
        goto label_4a2638;
    }
    ctx->pc = 0x4A2630u;
    {
        const bool branch_taken_0x4a2630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2630u;
            // 0x4a2634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2630) {
            ctx->pc = 0x4A2750u;
            goto label_4a2750;
        }
    }
    ctx->pc = 0x4A2638u;
label_4a2638:
    // 0x4a2638: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a2638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4a263c:
    // 0x4a263c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4a263cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4a2640:
    // 0x4a2640: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4a2640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4a2644:
    // 0x4a2644: 0xc075128  jal         func_1D44A0
label_4a2648:
    if (ctx->pc == 0x4A2648u) {
        ctx->pc = 0x4A2648u;
            // 0x4a2648: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4A264Cu;
        goto label_4a264c;
    }
    ctx->pc = 0x4A2644u;
    SET_GPR_U32(ctx, 31, 0x4A264Cu);
    ctx->pc = 0x4A2648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2644u;
            // 0x4a2648: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A264Cu; }
        if (ctx->pc != 0x4A264Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A264Cu; }
        if (ctx->pc != 0x4A264Cu) { return; }
    }
    ctx->pc = 0x4A264Cu;
label_4a264c:
    // 0x4a264c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4a264cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4a2650:
    // 0x4a2650: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a2650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a2654:
    // 0x4a2654: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4a2654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4a2658:
    // 0x4a2658: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4a2658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4a265c:
    // 0x4a265c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4a265cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4a2660:
    // 0x4a2660: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4a2664:
    if (ctx->pc == 0x4A2664u) {
        ctx->pc = 0x4A2664u;
            // 0x4a2664: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4A2668u;
        goto label_4a2668;
    }
    ctx->pc = 0x4A2660u;
    {
        const bool branch_taken_0x4a2660 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2660u;
            // 0x4a2664: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2660) {
            ctx->pc = 0x4A2670u;
            goto label_4a2670;
        }
    }
    ctx->pc = 0x4A2668u;
label_4a2668:
    // 0x4a2668: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a2668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a266c:
    // 0x4a266c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4a266cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4a2670:
    // 0x4a2670: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a2670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a2674:
    // 0x4a2674: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a2674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a2678:
    // 0x4a2678: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4a2678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4a267c:
    // 0x4a267c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4a267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4a2680:
    // 0x4a2680: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4a2680u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4a2684:
    // 0x4a2684: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4a2688:
    if (ctx->pc == 0x4A2688u) {
        ctx->pc = 0x4A2688u;
            // 0x4a2688: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4A268Cu;
        goto label_4a268c;
    }
    ctx->pc = 0x4A2684u;
    {
        const bool branch_taken_0x4a2684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2684) {
            ctx->pc = 0x4A2688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2684u;
            // 0x4a2688: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A2698u;
            goto label_4a2698;
        }
    }
    ctx->pc = 0x4A268Cu;
label_4a268c:
    // 0x4a268c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a268cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a2690:
    // 0x4a2690: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4a2690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4a2694:
    // 0x4a2694: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a2694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a2698:
    // 0x4a2698: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a2698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a269c:
    // 0x4a269c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4a269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4a26a0:
    // 0x4a26a0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4a26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4a26a4:
    // 0x4a26a4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4a26a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4a26a8:
    // 0x4a26a8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4a26ac:
    if (ctx->pc == 0x4A26ACu) {
        ctx->pc = 0x4A26ACu;
            // 0x4a26ac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4A26B0u;
        goto label_4a26b0;
    }
    ctx->pc = 0x4A26A8u;
    {
        const bool branch_taken_0x4a26a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a26a8) {
            ctx->pc = 0x4A26ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A26A8u;
            // 0x4a26ac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A26BCu;
            goto label_4a26bc;
        }
    }
    ctx->pc = 0x4A26B0u;
label_4a26b0:
    // 0x4a26b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a26b4:
    // 0x4a26b4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4a26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4a26b8:
    // 0x4a26b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a26b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a26bc:
    // 0x4a26bc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4a26bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4a26c0:
    // 0x4a26c0: 0x320f809  jalr        $t9
label_4a26c4:
    if (ctx->pc == 0x4A26C4u) {
        ctx->pc = 0x4A26C4u;
            // 0x4a26c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A26C8u;
        goto label_4a26c8;
    }
    ctx->pc = 0x4A26C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A26C8u);
        ctx->pc = 0x4A26C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A26C0u;
            // 0x4a26c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A26C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A26C8u; }
            if (ctx->pc != 0x4A26C8u) { return; }
        }
        }
    }
    ctx->pc = 0x4A26C8u;
label_4a26c8:
    // 0x4a26c8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4a26c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4a26cc:
    // 0x4a26cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a26d0:
    // 0x4a26d0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4a26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4a26d4:
    // 0x4a26d4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4a26d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4a26d8:
    // 0x4a26d8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4a26d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a26dc:
    // 0x4a26dc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4a26dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4a26e0:
    // 0x4a26e0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4a26e4:
    if (ctx->pc == 0x4A26E4u) {
        ctx->pc = 0x4A26E4u;
            // 0x4a26e4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4A26E8u;
        goto label_4a26e8;
    }
    ctx->pc = 0x4A26E0u;
    {
        const bool branch_taken_0x4a26e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a26e0) {
            ctx->pc = 0x4A26E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A26E0u;
            // 0x4a26e4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A26F4u;
            goto label_4a26f4;
        }
    }
    ctx->pc = 0x4A26E8u;
label_4a26e8:
    // 0x4a26e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a26e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a26ec:
    // 0x4a26ec: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4a26ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4a26f0:
    // 0x4a26f0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4a26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4a26f4:
    // 0x4a26f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a26f8:
    // 0x4a26f8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4a26f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4a26fc:
    // 0x4a26fc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4a26fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4a2700:
    // 0x4a2700: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4a2700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a2704:
    // 0x4a2704: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4a2704u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4a2708:
    // 0x4a2708: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4a270c:
    if (ctx->pc == 0x4A270Cu) {
        ctx->pc = 0x4A2710u;
        goto label_4a2710;
    }
    ctx->pc = 0x4A2708u;
    {
        const bool branch_taken_0x4a2708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2708) {
            ctx->pc = 0x4A2718u;
            goto label_4a2718;
        }
    }
    ctx->pc = 0x4A2710u;
label_4a2710:
    // 0x4a2710: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a2710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a2714:
    // 0x4a2714: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4a2714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4a2718:
    // 0x4a2718: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a2718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a271c:
    // 0x4a271c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4a271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4a2720:
    // 0x4a2720: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4a2720u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a2724:
    // 0x4a2724: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4a2728:
    if (ctx->pc == 0x4A2728u) {
        ctx->pc = 0x4A272Cu;
        goto label_4a272c;
    }
    ctx->pc = 0x4A2724u;
    {
        const bool branch_taken_0x4a2724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2724) {
            ctx->pc = 0x4A2734u;
            goto label_4a2734;
        }
    }
    ctx->pc = 0x4A272Cu;
label_4a272c:
    // 0x4a272c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a272cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a2730:
    // 0x4a2730: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4a2730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4a2734:
    // 0x4a2734: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a2734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a2738:
    // 0x4a2738: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4a2738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4a273c:
    // 0x4a273c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4a273cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a2740:
    // 0x4a2740: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4a2744:
    if (ctx->pc == 0x4A2744u) {
        ctx->pc = 0x4A2744u;
            // 0x4a2744: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4A2748u;
        goto label_4a2748;
    }
    ctx->pc = 0x4A2740u;
    {
        const bool branch_taken_0x4a2740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2740) {
            ctx->pc = 0x4A2744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2740u;
            // 0x4a2744: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A2754u;
            goto label_4a2754;
        }
    }
    ctx->pc = 0x4A2748u;
label_4a2748:
    // 0x4a2748: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4a2748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4a274c:
    // 0x4a274c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4a274cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4a2750:
    // 0x4a2750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a2750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a2754:
    // 0x4a2754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a2754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a2758:
    // 0x4a2758: 0x3e00008  jr          $ra
label_4a275c:
    if (ctx->pc == 0x4A275Cu) {
        ctx->pc = 0x4A275Cu;
            // 0x4a275c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4A2760u;
        goto label_4a2760;
    }
    ctx->pc = 0x4A2758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A275Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2758u;
            // 0x4a275c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A2760u;
label_4a2760:
    // 0x4a2760: 0x81284f0  j           func_4A13C0
label_4a2764:
    if (ctx->pc == 0x4A2764u) {
        ctx->pc = 0x4A2764u;
            // 0x4a2764: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4A2768u;
        goto label_4a2768;
    }
    ctx->pc = 0x4A2760u;
    ctx->pc = 0x4A2764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2760u;
            // 0x4a2764: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A13C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4A13C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4A2768u;
label_4a2768:
    // 0x4a2768: 0x0  nop
    ctx->pc = 0x4a2768u;
    // NOP
label_4a276c:
    // 0x4a276c: 0x0  nop
    ctx->pc = 0x4a276cu;
    // NOP
label_4a2770:
    // 0x4a2770: 0x81282fc  j           func_4A0BF0
label_4a2774:
    if (ctx->pc == 0x4A2774u) {
        ctx->pc = 0x4A2774u;
            // 0x4a2774: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4A2778u;
        goto label_4a2778;
    }
    ctx->pc = 0x4A2770u;
    ctx->pc = 0x4A2774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2770u;
            // 0x4a2774: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A0BF0u;
    if (runtime->hasFunction(0x4A0BF0u)) {
        auto targetFn = runtime->lookupFunction(0x4A0BF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004A0BF0_0x4a0bf0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4A2778u;
label_4a2778:
    // 0x4a2778: 0x0  nop
    ctx->pc = 0x4a2778u;
    // NOP
label_4a277c:
    // 0x4a277c: 0x0  nop
    ctx->pc = 0x4a277cu;
    // NOP
label_4a2780:
    // 0x4a2780: 0x8128354  j           func_4A0D50
label_4a2784:
    if (ctx->pc == 0x4A2784u) {
        ctx->pc = 0x4A2784u;
            // 0x4a2784: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4A2788u;
        goto label_4a2788;
    }
    ctx->pc = 0x4A2780u;
    ctx->pc = 0x4A2784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2780u;
            // 0x4a2784: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A0D50u;
    {
        auto targetFn = runtime->lookupFunction(0x4A0D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4A2788u;
label_4a2788:
    // 0x4a2788: 0x0  nop
    ctx->pc = 0x4a2788u;
    // NOP
label_4a278c:
    // 0x4a278c: 0x0  nop
    ctx->pc = 0x4a278cu;
    // NOP
label_4a2790:
    // 0x4a2790: 0x81282d8  j           func_4A0B60
label_4a2794:
    if (ctx->pc == 0x4A2794u) {
        ctx->pc = 0x4A2794u;
            // 0x4a2794: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4A2798u;
        goto label_4a2798;
    }
    ctx->pc = 0x4A2790u;
    ctx->pc = 0x4A2794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2790u;
            // 0x4a2794: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A0B60u;
    {
        auto targetFn = runtime->lookupFunction(0x4A0B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4A2798u;
label_4a2798:
    // 0x4a2798: 0x0  nop
    ctx->pc = 0x4a2798u;
    // NOP
label_4a279c:
    // 0x4a279c: 0x0  nop
    ctx->pc = 0x4a279cu;
    // NOP
}
