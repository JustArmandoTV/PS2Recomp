#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C22A0
// Address: 0x4c22a0 - 0x4c27c0
void sub_004C22A0_0x4c22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C22A0_0x4c22a0");
#endif

    switch (ctx->pc) {
        case 0x4c22a0u: goto label_4c22a0;
        case 0x4c22a4u: goto label_4c22a4;
        case 0x4c22a8u: goto label_4c22a8;
        case 0x4c22acu: goto label_4c22ac;
        case 0x4c22b0u: goto label_4c22b0;
        case 0x4c22b4u: goto label_4c22b4;
        case 0x4c22b8u: goto label_4c22b8;
        case 0x4c22bcu: goto label_4c22bc;
        case 0x4c22c0u: goto label_4c22c0;
        case 0x4c22c4u: goto label_4c22c4;
        case 0x4c22c8u: goto label_4c22c8;
        case 0x4c22ccu: goto label_4c22cc;
        case 0x4c22d0u: goto label_4c22d0;
        case 0x4c22d4u: goto label_4c22d4;
        case 0x4c22d8u: goto label_4c22d8;
        case 0x4c22dcu: goto label_4c22dc;
        case 0x4c22e0u: goto label_4c22e0;
        case 0x4c22e4u: goto label_4c22e4;
        case 0x4c22e8u: goto label_4c22e8;
        case 0x4c22ecu: goto label_4c22ec;
        case 0x4c22f0u: goto label_4c22f0;
        case 0x4c22f4u: goto label_4c22f4;
        case 0x4c22f8u: goto label_4c22f8;
        case 0x4c22fcu: goto label_4c22fc;
        case 0x4c2300u: goto label_4c2300;
        case 0x4c2304u: goto label_4c2304;
        case 0x4c2308u: goto label_4c2308;
        case 0x4c230cu: goto label_4c230c;
        case 0x4c2310u: goto label_4c2310;
        case 0x4c2314u: goto label_4c2314;
        case 0x4c2318u: goto label_4c2318;
        case 0x4c231cu: goto label_4c231c;
        case 0x4c2320u: goto label_4c2320;
        case 0x4c2324u: goto label_4c2324;
        case 0x4c2328u: goto label_4c2328;
        case 0x4c232cu: goto label_4c232c;
        case 0x4c2330u: goto label_4c2330;
        case 0x4c2334u: goto label_4c2334;
        case 0x4c2338u: goto label_4c2338;
        case 0x4c233cu: goto label_4c233c;
        case 0x4c2340u: goto label_4c2340;
        case 0x4c2344u: goto label_4c2344;
        case 0x4c2348u: goto label_4c2348;
        case 0x4c234cu: goto label_4c234c;
        case 0x4c2350u: goto label_4c2350;
        case 0x4c2354u: goto label_4c2354;
        case 0x4c2358u: goto label_4c2358;
        case 0x4c235cu: goto label_4c235c;
        case 0x4c2360u: goto label_4c2360;
        case 0x4c2364u: goto label_4c2364;
        case 0x4c2368u: goto label_4c2368;
        case 0x4c236cu: goto label_4c236c;
        case 0x4c2370u: goto label_4c2370;
        case 0x4c2374u: goto label_4c2374;
        case 0x4c2378u: goto label_4c2378;
        case 0x4c237cu: goto label_4c237c;
        case 0x4c2380u: goto label_4c2380;
        case 0x4c2384u: goto label_4c2384;
        case 0x4c2388u: goto label_4c2388;
        case 0x4c238cu: goto label_4c238c;
        case 0x4c2390u: goto label_4c2390;
        case 0x4c2394u: goto label_4c2394;
        case 0x4c2398u: goto label_4c2398;
        case 0x4c239cu: goto label_4c239c;
        case 0x4c23a0u: goto label_4c23a0;
        case 0x4c23a4u: goto label_4c23a4;
        case 0x4c23a8u: goto label_4c23a8;
        case 0x4c23acu: goto label_4c23ac;
        case 0x4c23b0u: goto label_4c23b0;
        case 0x4c23b4u: goto label_4c23b4;
        case 0x4c23b8u: goto label_4c23b8;
        case 0x4c23bcu: goto label_4c23bc;
        case 0x4c23c0u: goto label_4c23c0;
        case 0x4c23c4u: goto label_4c23c4;
        case 0x4c23c8u: goto label_4c23c8;
        case 0x4c23ccu: goto label_4c23cc;
        case 0x4c23d0u: goto label_4c23d0;
        case 0x4c23d4u: goto label_4c23d4;
        case 0x4c23d8u: goto label_4c23d8;
        case 0x4c23dcu: goto label_4c23dc;
        case 0x4c23e0u: goto label_4c23e0;
        case 0x4c23e4u: goto label_4c23e4;
        case 0x4c23e8u: goto label_4c23e8;
        case 0x4c23ecu: goto label_4c23ec;
        case 0x4c23f0u: goto label_4c23f0;
        case 0x4c23f4u: goto label_4c23f4;
        case 0x4c23f8u: goto label_4c23f8;
        case 0x4c23fcu: goto label_4c23fc;
        case 0x4c2400u: goto label_4c2400;
        case 0x4c2404u: goto label_4c2404;
        case 0x4c2408u: goto label_4c2408;
        case 0x4c240cu: goto label_4c240c;
        case 0x4c2410u: goto label_4c2410;
        case 0x4c2414u: goto label_4c2414;
        case 0x4c2418u: goto label_4c2418;
        case 0x4c241cu: goto label_4c241c;
        case 0x4c2420u: goto label_4c2420;
        case 0x4c2424u: goto label_4c2424;
        case 0x4c2428u: goto label_4c2428;
        case 0x4c242cu: goto label_4c242c;
        case 0x4c2430u: goto label_4c2430;
        case 0x4c2434u: goto label_4c2434;
        case 0x4c2438u: goto label_4c2438;
        case 0x4c243cu: goto label_4c243c;
        case 0x4c2440u: goto label_4c2440;
        case 0x4c2444u: goto label_4c2444;
        case 0x4c2448u: goto label_4c2448;
        case 0x4c244cu: goto label_4c244c;
        case 0x4c2450u: goto label_4c2450;
        case 0x4c2454u: goto label_4c2454;
        case 0x4c2458u: goto label_4c2458;
        case 0x4c245cu: goto label_4c245c;
        case 0x4c2460u: goto label_4c2460;
        case 0x4c2464u: goto label_4c2464;
        case 0x4c2468u: goto label_4c2468;
        case 0x4c246cu: goto label_4c246c;
        case 0x4c2470u: goto label_4c2470;
        case 0x4c2474u: goto label_4c2474;
        case 0x4c2478u: goto label_4c2478;
        case 0x4c247cu: goto label_4c247c;
        case 0x4c2480u: goto label_4c2480;
        case 0x4c2484u: goto label_4c2484;
        case 0x4c2488u: goto label_4c2488;
        case 0x4c248cu: goto label_4c248c;
        case 0x4c2490u: goto label_4c2490;
        case 0x4c2494u: goto label_4c2494;
        case 0x4c2498u: goto label_4c2498;
        case 0x4c249cu: goto label_4c249c;
        case 0x4c24a0u: goto label_4c24a0;
        case 0x4c24a4u: goto label_4c24a4;
        case 0x4c24a8u: goto label_4c24a8;
        case 0x4c24acu: goto label_4c24ac;
        case 0x4c24b0u: goto label_4c24b0;
        case 0x4c24b4u: goto label_4c24b4;
        case 0x4c24b8u: goto label_4c24b8;
        case 0x4c24bcu: goto label_4c24bc;
        case 0x4c24c0u: goto label_4c24c0;
        case 0x4c24c4u: goto label_4c24c4;
        case 0x4c24c8u: goto label_4c24c8;
        case 0x4c24ccu: goto label_4c24cc;
        case 0x4c24d0u: goto label_4c24d0;
        case 0x4c24d4u: goto label_4c24d4;
        case 0x4c24d8u: goto label_4c24d8;
        case 0x4c24dcu: goto label_4c24dc;
        case 0x4c24e0u: goto label_4c24e0;
        case 0x4c24e4u: goto label_4c24e4;
        case 0x4c24e8u: goto label_4c24e8;
        case 0x4c24ecu: goto label_4c24ec;
        case 0x4c24f0u: goto label_4c24f0;
        case 0x4c24f4u: goto label_4c24f4;
        case 0x4c24f8u: goto label_4c24f8;
        case 0x4c24fcu: goto label_4c24fc;
        case 0x4c2500u: goto label_4c2500;
        case 0x4c2504u: goto label_4c2504;
        case 0x4c2508u: goto label_4c2508;
        case 0x4c250cu: goto label_4c250c;
        case 0x4c2510u: goto label_4c2510;
        case 0x4c2514u: goto label_4c2514;
        case 0x4c2518u: goto label_4c2518;
        case 0x4c251cu: goto label_4c251c;
        case 0x4c2520u: goto label_4c2520;
        case 0x4c2524u: goto label_4c2524;
        case 0x4c2528u: goto label_4c2528;
        case 0x4c252cu: goto label_4c252c;
        case 0x4c2530u: goto label_4c2530;
        case 0x4c2534u: goto label_4c2534;
        case 0x4c2538u: goto label_4c2538;
        case 0x4c253cu: goto label_4c253c;
        case 0x4c2540u: goto label_4c2540;
        case 0x4c2544u: goto label_4c2544;
        case 0x4c2548u: goto label_4c2548;
        case 0x4c254cu: goto label_4c254c;
        case 0x4c2550u: goto label_4c2550;
        case 0x4c2554u: goto label_4c2554;
        case 0x4c2558u: goto label_4c2558;
        case 0x4c255cu: goto label_4c255c;
        case 0x4c2560u: goto label_4c2560;
        case 0x4c2564u: goto label_4c2564;
        case 0x4c2568u: goto label_4c2568;
        case 0x4c256cu: goto label_4c256c;
        case 0x4c2570u: goto label_4c2570;
        case 0x4c2574u: goto label_4c2574;
        case 0x4c2578u: goto label_4c2578;
        case 0x4c257cu: goto label_4c257c;
        case 0x4c2580u: goto label_4c2580;
        case 0x4c2584u: goto label_4c2584;
        case 0x4c2588u: goto label_4c2588;
        case 0x4c258cu: goto label_4c258c;
        case 0x4c2590u: goto label_4c2590;
        case 0x4c2594u: goto label_4c2594;
        case 0x4c2598u: goto label_4c2598;
        case 0x4c259cu: goto label_4c259c;
        case 0x4c25a0u: goto label_4c25a0;
        case 0x4c25a4u: goto label_4c25a4;
        case 0x4c25a8u: goto label_4c25a8;
        case 0x4c25acu: goto label_4c25ac;
        case 0x4c25b0u: goto label_4c25b0;
        case 0x4c25b4u: goto label_4c25b4;
        case 0x4c25b8u: goto label_4c25b8;
        case 0x4c25bcu: goto label_4c25bc;
        case 0x4c25c0u: goto label_4c25c0;
        case 0x4c25c4u: goto label_4c25c4;
        case 0x4c25c8u: goto label_4c25c8;
        case 0x4c25ccu: goto label_4c25cc;
        case 0x4c25d0u: goto label_4c25d0;
        case 0x4c25d4u: goto label_4c25d4;
        case 0x4c25d8u: goto label_4c25d8;
        case 0x4c25dcu: goto label_4c25dc;
        case 0x4c25e0u: goto label_4c25e0;
        case 0x4c25e4u: goto label_4c25e4;
        case 0x4c25e8u: goto label_4c25e8;
        case 0x4c25ecu: goto label_4c25ec;
        case 0x4c25f0u: goto label_4c25f0;
        case 0x4c25f4u: goto label_4c25f4;
        case 0x4c25f8u: goto label_4c25f8;
        case 0x4c25fcu: goto label_4c25fc;
        case 0x4c2600u: goto label_4c2600;
        case 0x4c2604u: goto label_4c2604;
        case 0x4c2608u: goto label_4c2608;
        case 0x4c260cu: goto label_4c260c;
        case 0x4c2610u: goto label_4c2610;
        case 0x4c2614u: goto label_4c2614;
        case 0x4c2618u: goto label_4c2618;
        case 0x4c261cu: goto label_4c261c;
        case 0x4c2620u: goto label_4c2620;
        case 0x4c2624u: goto label_4c2624;
        case 0x4c2628u: goto label_4c2628;
        case 0x4c262cu: goto label_4c262c;
        case 0x4c2630u: goto label_4c2630;
        case 0x4c2634u: goto label_4c2634;
        case 0x4c2638u: goto label_4c2638;
        case 0x4c263cu: goto label_4c263c;
        case 0x4c2640u: goto label_4c2640;
        case 0x4c2644u: goto label_4c2644;
        case 0x4c2648u: goto label_4c2648;
        case 0x4c264cu: goto label_4c264c;
        case 0x4c2650u: goto label_4c2650;
        case 0x4c2654u: goto label_4c2654;
        case 0x4c2658u: goto label_4c2658;
        case 0x4c265cu: goto label_4c265c;
        case 0x4c2660u: goto label_4c2660;
        case 0x4c2664u: goto label_4c2664;
        case 0x4c2668u: goto label_4c2668;
        case 0x4c266cu: goto label_4c266c;
        case 0x4c2670u: goto label_4c2670;
        case 0x4c2674u: goto label_4c2674;
        case 0x4c2678u: goto label_4c2678;
        case 0x4c267cu: goto label_4c267c;
        case 0x4c2680u: goto label_4c2680;
        case 0x4c2684u: goto label_4c2684;
        case 0x4c2688u: goto label_4c2688;
        case 0x4c268cu: goto label_4c268c;
        case 0x4c2690u: goto label_4c2690;
        case 0x4c2694u: goto label_4c2694;
        case 0x4c2698u: goto label_4c2698;
        case 0x4c269cu: goto label_4c269c;
        case 0x4c26a0u: goto label_4c26a0;
        case 0x4c26a4u: goto label_4c26a4;
        case 0x4c26a8u: goto label_4c26a8;
        case 0x4c26acu: goto label_4c26ac;
        case 0x4c26b0u: goto label_4c26b0;
        case 0x4c26b4u: goto label_4c26b4;
        case 0x4c26b8u: goto label_4c26b8;
        case 0x4c26bcu: goto label_4c26bc;
        case 0x4c26c0u: goto label_4c26c0;
        case 0x4c26c4u: goto label_4c26c4;
        case 0x4c26c8u: goto label_4c26c8;
        case 0x4c26ccu: goto label_4c26cc;
        case 0x4c26d0u: goto label_4c26d0;
        case 0x4c26d4u: goto label_4c26d4;
        case 0x4c26d8u: goto label_4c26d8;
        case 0x4c26dcu: goto label_4c26dc;
        case 0x4c26e0u: goto label_4c26e0;
        case 0x4c26e4u: goto label_4c26e4;
        case 0x4c26e8u: goto label_4c26e8;
        case 0x4c26ecu: goto label_4c26ec;
        case 0x4c26f0u: goto label_4c26f0;
        case 0x4c26f4u: goto label_4c26f4;
        case 0x4c26f8u: goto label_4c26f8;
        case 0x4c26fcu: goto label_4c26fc;
        case 0x4c2700u: goto label_4c2700;
        case 0x4c2704u: goto label_4c2704;
        case 0x4c2708u: goto label_4c2708;
        case 0x4c270cu: goto label_4c270c;
        case 0x4c2710u: goto label_4c2710;
        case 0x4c2714u: goto label_4c2714;
        case 0x4c2718u: goto label_4c2718;
        case 0x4c271cu: goto label_4c271c;
        case 0x4c2720u: goto label_4c2720;
        case 0x4c2724u: goto label_4c2724;
        case 0x4c2728u: goto label_4c2728;
        case 0x4c272cu: goto label_4c272c;
        case 0x4c2730u: goto label_4c2730;
        case 0x4c2734u: goto label_4c2734;
        case 0x4c2738u: goto label_4c2738;
        case 0x4c273cu: goto label_4c273c;
        case 0x4c2740u: goto label_4c2740;
        case 0x4c2744u: goto label_4c2744;
        case 0x4c2748u: goto label_4c2748;
        case 0x4c274cu: goto label_4c274c;
        case 0x4c2750u: goto label_4c2750;
        case 0x4c2754u: goto label_4c2754;
        case 0x4c2758u: goto label_4c2758;
        case 0x4c275cu: goto label_4c275c;
        case 0x4c2760u: goto label_4c2760;
        case 0x4c2764u: goto label_4c2764;
        case 0x4c2768u: goto label_4c2768;
        case 0x4c276cu: goto label_4c276c;
        case 0x4c2770u: goto label_4c2770;
        case 0x4c2774u: goto label_4c2774;
        case 0x4c2778u: goto label_4c2778;
        case 0x4c277cu: goto label_4c277c;
        case 0x4c2780u: goto label_4c2780;
        case 0x4c2784u: goto label_4c2784;
        case 0x4c2788u: goto label_4c2788;
        case 0x4c278cu: goto label_4c278c;
        case 0x4c2790u: goto label_4c2790;
        case 0x4c2794u: goto label_4c2794;
        case 0x4c2798u: goto label_4c2798;
        case 0x4c279cu: goto label_4c279c;
        case 0x4c27a0u: goto label_4c27a0;
        case 0x4c27a4u: goto label_4c27a4;
        case 0x4c27a8u: goto label_4c27a8;
        case 0x4c27acu: goto label_4c27ac;
        case 0x4c27b0u: goto label_4c27b0;
        case 0x4c27b4u: goto label_4c27b4;
        case 0x4c27b8u: goto label_4c27b8;
        case 0x4c27bcu: goto label_4c27bc;
        default: break;
    }

    ctx->pc = 0x4c22a0u;

label_4c22a0:
    // 0x4c22a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4c22a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4c22a4:
    // 0x4c22a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4c22a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4c22a8:
    // 0x4c22a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4c22a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4c22ac:
    // 0x4c22ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c22acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c22b0:
    // 0x4c22b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c22b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c22b4:
    // 0x4c22b4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4c22b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4c22b8:
    // 0x4c22b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c22b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c22bc:
    // 0x4c22bc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x4c22bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4c22c0:
    // 0x4c22c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c22c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c22c4:
    // 0x4c22c4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4c22c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4c22c8:
    // 0x4c22c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c22c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c22cc:
    // 0x4c22cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c22ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c22d0:
    // 0x4c22d0: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x4c22d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4c22d4:
    // 0x4c22d4: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_4c22d8:
    if (ctx->pc == 0x4C22D8u) {
        ctx->pc = 0x4C22D8u;
            // 0x4c22d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C22DCu;
        goto label_4c22dc;
    }
    ctx->pc = 0x4C22D4u;
    {
        const bool branch_taken_0x4c22d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C22D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C22D4u;
            // 0x4c22d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c22d4) {
            ctx->pc = 0x4C24D0u;
            goto label_4c24d0;
        }
    }
    ctx->pc = 0x4C22DCu;
label_4c22dc:
    // 0x4c22dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c22dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c22e0:
    // 0x4c22e0: 0xc04f278  jal         func_13C9E0
label_4c22e4:
    if (ctx->pc == 0x4C22E4u) {
        ctx->pc = 0x4C22E4u;
            // 0x4c22e4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4C22E8u;
        goto label_4c22e8;
    }
    ctx->pc = 0x4C22E0u;
    SET_GPR_U32(ctx, 31, 0x4C22E8u);
    ctx->pc = 0x4C22E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C22E0u;
            // 0x4c22e4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C22E8u; }
        if (ctx->pc != 0x4C22E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C22E8u; }
        if (ctx->pc != 0x4C22E8u) { return; }
    }
    ctx->pc = 0x4C22E8u;
label_4c22e8:
    // 0x4c22e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c22e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c22ec:
    // 0x4c22ec: 0xc04ce80  jal         func_133A00
label_4c22f0:
    if (ctx->pc == 0x4C22F0u) {
        ctx->pc = 0x4C22F0u;
            // 0x4c22f0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x4C22F4u;
        goto label_4c22f4;
    }
    ctx->pc = 0x4C22ECu;
    SET_GPR_U32(ctx, 31, 0x4C22F4u);
    ctx->pc = 0x4C22F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C22ECu;
            // 0x4c22f0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C22F4u; }
        if (ctx->pc != 0x4C22F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C22F4u; }
        if (ctx->pc != 0x4C22F4u) { return; }
    }
    ctx->pc = 0x4C22F4u;
label_4c22f4:
    // 0x4c22f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c22f8:
    // 0x4c22f8: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x4c22f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_4c22fc:
    // 0x4c22fc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4c22fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4c2300:
    // 0x4c2300: 0xc07698c  jal         func_1DA630
label_4c2304:
    if (ctx->pc == 0x4C2304u) {
        ctx->pc = 0x4C2304u;
            // 0x4c2304: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C2308u;
        goto label_4c2308;
    }
    ctx->pc = 0x4C2300u;
    SET_GPR_U32(ctx, 31, 0x4C2308u);
    ctx->pc = 0x4C2304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2300u;
            // 0x4c2304: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2308u; }
        if (ctx->pc != 0x4C2308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2308u; }
        if (ctx->pc != 0x4C2308u) { return; }
    }
    ctx->pc = 0x4C2308u;
label_4c2308:
    // 0x4c2308: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c2308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c230c:
    // 0x4c230c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4c2310:
    if (ctx->pc == 0x4C2310u) {
        ctx->pc = 0x4C2314u;
        goto label_4c2314;
    }
    ctx->pc = 0x4C230Cu;
    {
        const bool branch_taken_0x4c230c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c230c) {
            ctx->pc = 0x4C231Cu;
            goto label_4c231c;
        }
    }
    ctx->pc = 0x4C2314u;
label_4c2314:
    // 0x4c2314: 0x10000033  b           . + 4 + (0x33 << 2)
label_4c2318:
    if (ctx->pc == 0x4C2318u) {
        ctx->pc = 0x4C2318u;
            // 0x4c2318: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4C231Cu;
        goto label_4c231c;
    }
    ctx->pc = 0x4C2314u;
    {
        const bool branch_taken_0x4c2314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2314u;
            // 0x4c2318: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2314) {
            ctx->pc = 0x4C23E4u;
            goto label_4c23e4;
        }
    }
    ctx->pc = 0x4C231Cu;
label_4c231c:
    // 0x4c231c: 0xc0576f4  jal         func_15DBD0
label_4c2320:
    if (ctx->pc == 0x4C2320u) {
        ctx->pc = 0x4C2324u;
        goto label_4c2324;
    }
    ctx->pc = 0x4C231Cu;
    SET_GPR_U32(ctx, 31, 0x4C2324u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2324u; }
        if (ctx->pc != 0x4C2324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2324u; }
        if (ctx->pc != 0x4C2324u) { return; }
    }
    ctx->pc = 0x4C2324u;
label_4c2324:
    // 0x4c2324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4c2324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c2328:
    // 0x4c2328: 0xc076984  jal         func_1DA610
label_4c232c:
    if (ctx->pc == 0x4C232Cu) {
        ctx->pc = 0x4C232Cu;
            // 0x4c232c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C2330u;
        goto label_4c2330;
    }
    ctx->pc = 0x4C2328u;
    SET_GPR_U32(ctx, 31, 0x4C2330u);
    ctx->pc = 0x4C232Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2328u;
            // 0x4c232c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2330u; }
        if (ctx->pc != 0x4C2330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2330u; }
        if (ctx->pc != 0x4C2330u) { return; }
    }
    ctx->pc = 0x4C2330u;
label_4c2330:
    // 0x4c2330: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4c2330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c2334:
    // 0x4c2334: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4c2334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4c2338:
    // 0x4c2338: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c2338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c233c:
    // 0x4c233c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4c233cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c2340:
    // 0x4c2340: 0xc442c7f0  lwc1        $f2, -0x3810($v0)
    ctx->pc = 0x4c2340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c2344:
    // 0x4c2344: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4c2344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c2348:
    // 0x4c2348: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c2348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c234c:
    // 0x4c234c: 0xc441c7f8  lwc1        $f1, -0x3808($v0)
    ctx->pc = 0x4c234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c2350:
    // 0x4c2350: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x4c2350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4c2354:
    // 0x4c2354: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c2354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c2358:
    // 0x4c2358: 0xc440c7fc  lwc1        $f0, -0x3804($v0)
    ctx->pc = 0x4c2358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c235c:
    // 0x4c235c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4c235cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4c2360:
    // 0x4c2360: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c2360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c2364:
    // 0x4c2364: 0x8c42c7f4  lw          $v0, -0x380C($v0)
    ctx->pc = 0x4c2364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952948)));
label_4c2368:
    // 0x4c2368: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4c2368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_4c236c:
    // 0x4c236c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x4c236cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_4c2370:
    // 0x4c2370: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x4c2370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c2374:
    // 0x4c2374: 0xc04cca0  jal         func_133280
label_4c2378:
    if (ctx->pc == 0x4C2378u) {
        ctx->pc = 0x4C2378u;
            // 0x4c2378: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x4C237Cu;
        goto label_4c237c;
    }
    ctx->pc = 0x4C2374u;
    SET_GPR_U32(ctx, 31, 0x4C237Cu);
    ctx->pc = 0x4C2378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2374u;
            // 0x4c2378: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C237Cu; }
        if (ctx->pc != 0x4C237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C237Cu; }
        if (ctx->pc != 0x4C237Cu) { return; }
    }
    ctx->pc = 0x4C237Cu;
label_4c237c:
    // 0x4c237c: 0xc076980  jal         func_1DA600
label_4c2380:
    if (ctx->pc == 0x4C2380u) {
        ctx->pc = 0x4C2380u;
            // 0x4c2380: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C2384u;
        goto label_4c2384;
    }
    ctx->pc = 0x4C237Cu;
    SET_GPR_U32(ctx, 31, 0x4C2384u);
    ctx->pc = 0x4C2380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C237Cu;
            // 0x4c2380: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2384u; }
        if (ctx->pc != 0x4C2384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2384u; }
        if (ctx->pc != 0x4C2384u) { return; }
    }
    ctx->pc = 0x4C2384u;
label_4c2384:
    // 0x4c2384: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4c2384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4c2388:
    // 0x4c2388: 0xc04cc34  jal         func_1330D0
label_4c238c:
    if (ctx->pc == 0x4C238Cu) {
        ctx->pc = 0x4C238Cu;
            // 0x4c238c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C2390u;
        goto label_4c2390;
    }
    ctx->pc = 0x4C2388u;
    SET_GPR_U32(ctx, 31, 0x4C2390u);
    ctx->pc = 0x4C238Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2388u;
            // 0x4c238c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2390u; }
        if (ctx->pc != 0x4C2390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2390u; }
        if (ctx->pc != 0x4C2390u) { return; }
    }
    ctx->pc = 0x4C2390u;
label_4c2390:
    // 0x4c2390: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c2390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4c2394:
    // 0x4c2394: 0xc4617060  lwc1        $f1, 0x7060($v1)
    ctx->pc = 0x4c2394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c2398:
    // 0x4c2398: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4c2398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c239c:
    // 0x4c239c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4c23a0:
    if (ctx->pc == 0x4C23A0u) {
        ctx->pc = 0x4C23A0u;
            // 0x4c23a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C23A4u;
        goto label_4c23a4;
    }
    ctx->pc = 0x4C239Cu;
    {
        const bool branch_taken_0x4c239c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c239c) {
            ctx->pc = 0x4C23A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C239Cu;
            // 0x4c23a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C23ACu;
            goto label_4c23ac;
        }
    }
    ctx->pc = 0x4C23A4u;
label_4c23a4:
    // 0x4c23a4: 0x1000000f  b           . + 4 + (0xF << 2)
label_4c23a8:
    if (ctx->pc == 0x4C23A8u) {
        ctx->pc = 0x4C23A8u;
            // 0x4c23a8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4C23ACu;
        goto label_4c23ac;
    }
    ctx->pc = 0x4C23A4u;
    {
        const bool branch_taken_0x4c23a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C23A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C23A4u;
            // 0x4c23a8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c23a4) {
            ctx->pc = 0x4C23E4u;
            goto label_4c23e4;
        }
    }
    ctx->pc = 0x4C23ACu;
label_4c23ac:
    // 0x4c23ac: 0xc07697c  jal         func_1DA5F0
label_4c23b0:
    if (ctx->pc == 0x4C23B0u) {
        ctx->pc = 0x4C23B4u;
        goto label_4c23b4;
    }
    ctx->pc = 0x4C23ACu;
    SET_GPR_U32(ctx, 31, 0x4C23B4u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C23B4u; }
        if (ctx->pc != 0x4C23B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C23B4u; }
        if (ctx->pc != 0x4C23B4u) { return; }
    }
    ctx->pc = 0x4C23B4u;
label_4c23b4:
    // 0x4c23b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4c23b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c23b8:
    // 0x4c23b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4c23b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4c23bc:
    // 0x4c23bc: 0xc04cd60  jal         func_133580
label_4c23c0:
    if (ctx->pc == 0x4C23C0u) {
        ctx->pc = 0x4C23C0u;
            // 0x4c23c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C23C4u;
        goto label_4c23c4;
    }
    ctx->pc = 0x4C23BCu;
    SET_GPR_U32(ctx, 31, 0x4C23C4u);
    ctx->pc = 0x4C23C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C23BCu;
            // 0x4c23c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C23C4u; }
        if (ctx->pc != 0x4C23C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C23C4u; }
        if (ctx->pc != 0x4C23C4u) { return; }
    }
    ctx->pc = 0x4C23C4u;
label_4c23c4:
    // 0x4c23c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c23c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c23c8:
    // 0x4c23c8: 0xc04c650  jal         func_131940
label_4c23cc:
    if (ctx->pc == 0x4C23CCu) {
        ctx->pc = 0x4C23CCu;
            // 0x4c23cc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C23D0u;
        goto label_4c23d0;
    }
    ctx->pc = 0x4C23C8u;
    SET_GPR_U32(ctx, 31, 0x4C23D0u);
    ctx->pc = 0x4C23CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C23C8u;
            // 0x4c23cc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C23D0u; }
        if (ctx->pc != 0x4C23D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C23D0u; }
        if (ctx->pc != 0x4C23D0u) { return; }
    }
    ctx->pc = 0x4C23D0u;
label_4c23d0:
    // 0x4c23d0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4c23d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4c23d4:
    // 0x4c23d4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4c23d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c23d8:
    // 0x4c23d8: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4c23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_4c23dc:
    // 0x4c23dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c23e0:
    // 0x4c23e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4c23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c23e4:
    // 0x4c23e4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4c23e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4c23e8:
    // 0x4c23e8: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_4c23ec:
    if (ctx->pc == 0x4C23ECu) {
        ctx->pc = 0x4C23ECu;
            // 0x4c23ec: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x4C23F0u;
        goto label_4c23f0;
    }
    ctx->pc = 0x4C23E8u;
    {
        const bool branch_taken_0x4c23e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C23ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C23E8u;
            // 0x4c23ec: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c23e8) {
            ctx->pc = 0x4C24E8u;
            goto label_4c24e8;
        }
    }
    ctx->pc = 0x4C23F0u;
label_4c23f0:
    // 0x4c23f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c23f4:
    // 0x4c23f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c23f8:
    // 0x4c23f8: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x4c23f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4c23fc:
    // 0x4c23fc: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4c23fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4c2400:
    // 0x4c2400: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x4c2400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_4c2404:
    // 0x4c2404: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c2404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c2408:
    // 0x4c2408: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x4c2408u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4c240c:
    // 0x4c240c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c240cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c2410:
    // 0x4c2410: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4c2410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4c2414:
    // 0x4c2414: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4c2414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4c2418:
    // 0x4c2418: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4c2418u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4c241c:
    // 0x4c241c: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x4c241cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4c2420:
    // 0x4c2420: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c2420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c2424:
    // 0x4c2424: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4c2424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_4c2428:
    // 0x4c2428: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c2428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c242c:
    // 0x4c242c: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x4c242cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_4c2430:
    // 0x4c2430: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4c2430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4c2434:
    // 0x4c2434: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4c2434u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4c2438:
    // 0x4c2438: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4c2438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4c243c:
    // 0x4c243c: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x4c243cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4c2440:
    // 0x4c2440: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c2440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c2444:
    // 0x4c2444: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x4c2444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_4c2448:
    // 0x4c2448: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x4c2448u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4c244c:
    // 0x4c244c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c244cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c2450:
    // 0x4c2450: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x4c2450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4c2454:
    // 0x4c2454: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c2454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c2458:
    // 0x4c2458: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x4c2458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_4c245c:
    // 0x4c245c: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x4c245cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_4c2460:
    // 0x4c2460: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4c2460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4c2464:
    // 0x4c2464: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x4c2464u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4c2468:
    // 0x4c2468: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x4c2468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_4c246c:
    // 0x4c246c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c246cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c2470:
    // 0x4c2470: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x4c2470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_4c2474:
    // 0x4c2474: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x4c2474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4c2478:
    // 0x4c2478: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x4c2478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_4c247c:
    // 0x4c247c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x4c247cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4c2480:
    // 0x4c2480: 0xc04e4a4  jal         func_139290
label_4c2484:
    if (ctx->pc == 0x4C2484u) {
        ctx->pc = 0x4C2484u;
            // 0x4c2484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C2488u;
        goto label_4c2488;
    }
    ctx->pc = 0x4C2480u;
    SET_GPR_U32(ctx, 31, 0x4C2488u);
    ctx->pc = 0x4C2484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2480u;
            // 0x4c2484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2488u; }
        if (ctx->pc != 0x4C2488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2488u; }
        if (ctx->pc != 0x4C2488u) { return; }
    }
    ctx->pc = 0x4C2488u;
label_4c2488:
    // 0x4c2488: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x4c2488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4c248c:
    // 0x4c248c: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x4c248cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_4c2490:
    // 0x4c2490: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4c2494:
    if (ctx->pc == 0x4C2494u) {
        ctx->pc = 0x4C2494u;
            // 0x4c2494: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C2498u;
        goto label_4c2498;
    }
    ctx->pc = 0x4C2490u;
    {
        const bool branch_taken_0x4c2490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2490) {
            ctx->pc = 0x4C2494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2490u;
            // 0x4c2494: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C24A0u;
            goto label_4c24a0;
        }
    }
    ctx->pc = 0x4C2498u;
label_4c2498:
    // 0x4c2498: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x4c2498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_4c249c:
    // 0x4c249c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4c249cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c24a0:
    // 0x4c24a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4c24a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c24a4:
    // 0x4c24a4: 0xc04cd60  jal         func_133580
label_4c24a8:
    if (ctx->pc == 0x4C24A8u) {
        ctx->pc = 0x4C24A8u;
            // 0x4c24a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C24ACu;
        goto label_4c24ac;
    }
    ctx->pc = 0x4C24A4u;
    SET_GPR_U32(ctx, 31, 0x4C24ACu);
    ctx->pc = 0x4C24A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C24A4u;
            // 0x4c24a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C24ACu; }
        if (ctx->pc != 0x4C24ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C24ACu; }
        if (ctx->pc != 0x4C24ACu) { return; }
    }
    ctx->pc = 0x4C24ACu;
label_4c24ac:
    // 0x4c24ac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4c24acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4c24b0:
    // 0x4c24b0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4c24b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4c24b4:
    // 0x4c24b4: 0x320f809  jalr        $t9
label_4c24b8:
    if (ctx->pc == 0x4C24B8u) {
        ctx->pc = 0x4C24B8u;
            // 0x4c24b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C24BCu;
        goto label_4c24bc;
    }
    ctx->pc = 0x4C24B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C24BCu);
        ctx->pc = 0x4C24B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C24B4u;
            // 0x4c24b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C24BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C24BCu; }
            if (ctx->pc != 0x4C24BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4C24BCu;
label_4c24bc:
    // 0x4c24bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c24bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c24c0:
    // 0x4c24c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4c24c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c24c4:
    // 0x4c24c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4c24c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c24c8:
    // 0x4c24c8: 0xc054fd4  jal         func_153F50
label_4c24cc:
    if (ctx->pc == 0x4C24CCu) {
        ctx->pc = 0x4C24CCu;
            // 0x4c24cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C24D0u;
        goto label_4c24d0;
    }
    ctx->pc = 0x4C24C8u;
    SET_GPR_U32(ctx, 31, 0x4C24D0u);
    ctx->pc = 0x4C24CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C24C8u;
            // 0x4c24cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C24D0u; }
        if (ctx->pc != 0x4C24D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C24D0u; }
        if (ctx->pc != 0x4C24D0u) { return; }
    }
    ctx->pc = 0x4C24D0u;
label_4c24d0:
    // 0x4c24d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c24d4:
    // 0x4c24d4: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x4c24d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4c24d8:
    // 0x4c24d8: 0xc44c7060  lwc1        $f12, 0x7060($v0)
    ctx->pc = 0x4c24d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c24dc:
    // 0x4c24dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c24dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c24e0:
    // 0x4c24e0: 0xc0e31f8  jal         func_38C7E0
label_4c24e4:
    if (ctx->pc == 0x4C24E4u) {
        ctx->pc = 0x4C24E4u;
            // 0x4c24e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C24E8u;
        goto label_4c24e8;
    }
    ctx->pc = 0x4C24E0u;
    SET_GPR_U32(ctx, 31, 0x4C24E8u);
    ctx->pc = 0x4C24E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C24E0u;
            // 0x4c24e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C24E8u; }
        if (ctx->pc != 0x4C24E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C24E8u; }
        if (ctx->pc != 0x4C24E8u) { return; }
    }
    ctx->pc = 0x4C24E8u;
label_4c24e8:
    // 0x4c24e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4c24e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4c24ec:
    // 0x4c24ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4c24ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c24f0:
    // 0x4c24f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c24f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c24f4:
    // 0x4c24f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c24f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c24f8:
    // 0x4c24f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c24f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c24fc:
    // 0x4c24fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c24fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c2500:
    // 0x4c2500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c2500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c2504:
    // 0x4c2504: 0x3e00008  jr          $ra
label_4c2508:
    if (ctx->pc == 0x4C2508u) {
        ctx->pc = 0x4C2508u;
            // 0x4c2508: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4C250Cu;
        goto label_4c250c;
    }
    ctx->pc = 0x4C2504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2504u;
            // 0x4c2508: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C250Cu;
label_4c250c:
    // 0x4c250c: 0x0  nop
    ctx->pc = 0x4c250cu;
    // NOP
label_4c2510:
    // 0x4c2510: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c2510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c2514:
    // 0x4c2514: 0x3e00008  jr          $ra
label_4c2518:
    if (ctx->pc == 0x4C2518u) {
        ctx->pc = 0x4C2518u;
            // 0x4c2518: 0x24427050  addiu       $v0, $v0, 0x7050 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28752));
        ctx->pc = 0x4C251Cu;
        goto label_4c251c;
    }
    ctx->pc = 0x4C2514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2514u;
            // 0x4c2518: 0x24427050  addiu       $v0, $v0, 0x7050 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C251Cu;
label_4c251c:
    // 0x4c251c: 0x0  nop
    ctx->pc = 0x4c251cu;
    // NOP
label_4c2520:
    // 0x4c2520: 0x3e00008  jr          $ra
label_4c2524:
    if (ctx->pc == 0x4C2524u) {
        ctx->pc = 0x4C2524u;
            // 0x4c2524: 0x24022ef4  addiu       $v0, $zero, 0x2EF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12020));
        ctx->pc = 0x4C2528u;
        goto label_4c2528;
    }
    ctx->pc = 0x4C2520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2520u;
            // 0x4c2524: 0x24022ef4  addiu       $v0, $zero, 0x2EF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2528u;
label_4c2528:
    // 0x4c2528: 0x0  nop
    ctx->pc = 0x4c2528u;
    // NOP
label_4c252c:
    // 0x4c252c: 0x0  nop
    ctx->pc = 0x4c252cu;
    // NOP
label_4c2530:
    // 0x4c2530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c2530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c2534:
    // 0x4c2534: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4c2534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4c2538:
    // 0x4c2538: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c2538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c253c:
    // 0x4c253c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c2540:
    // 0x4c2540: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c2540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c2544:
    // 0x4c2544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c2544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c2548:
    // 0x4c2548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c2548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c254c:
    // 0x4c254c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c2550:
    // 0x4c2550: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4c2550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c2554:
    // 0x4c2554: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4c2558:
    if (ctx->pc == 0x4C2558u) {
        ctx->pc = 0x4C2558u;
            // 0x4c2558: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C255Cu;
        goto label_4c255c;
    }
    ctx->pc = 0x4C2554u;
    {
        const bool branch_taken_0x4c2554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2554u;
            // 0x4c2558: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2554) {
            ctx->pc = 0x4C2598u;
            goto label_4c2598;
        }
    }
    ctx->pc = 0x4C255Cu;
label_4c255c:
    // 0x4c255c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c255cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c2560:
    // 0x4c2560: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c2560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c2564:
    // 0x4c2564: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c2564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c2568:
    // 0x4c2568: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4c2568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4c256c:
    // 0x4c256c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4c256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4c2570:
    // 0x4c2570: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c2570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c2574:
    // 0x4c2574: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c2574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c2578:
    // 0x4c2578: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c2578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c257c:
    // 0x4c257c: 0x320f809  jalr        $t9
label_4c2580:
    if (ctx->pc == 0x4C2580u) {
        ctx->pc = 0x4C2584u;
        goto label_4c2584;
    }
    ctx->pc = 0x4C257Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C2584u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C2584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C2584u; }
            if (ctx->pc != 0x4C2584u) { return; }
        }
        }
    }
    ctx->pc = 0x4C2584u;
label_4c2584:
    // 0x4c2584: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4c2584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4c2588:
    // 0x4c2588: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4c2588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4c258c:
    // 0x4c258c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4c258cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c2590:
    // 0x4c2590: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4c2594:
    if (ctx->pc == 0x4C2594u) {
        ctx->pc = 0x4C2594u;
            // 0x4c2594: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4C2598u;
        goto label_4c2598;
    }
    ctx->pc = 0x4C2590u;
    {
        const bool branch_taken_0x4c2590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2590u;
            // 0x4c2594: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2590) {
            ctx->pc = 0x4C2568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c2568;
        }
    }
    ctx->pc = 0x4C2598u;
label_4c2598:
    // 0x4c2598: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c2598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c259c:
    // 0x4c259c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4c259cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c25a0:
    // 0x4c25a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c25a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c25a4:
    // 0x4c25a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c25a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c25a8:
    // 0x4c25a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c25a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c25ac:
    // 0x4c25ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c25acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c25b0:
    // 0x4c25b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c25b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c25b4:
    // 0x4c25b4: 0x3e00008  jr          $ra
label_4c25b8:
    if (ctx->pc == 0x4C25B8u) {
        ctx->pc = 0x4C25B8u;
            // 0x4c25b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C25BCu;
        goto label_4c25bc;
    }
    ctx->pc = 0x4C25B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C25B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C25B4u;
            // 0x4c25b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C25BCu;
label_4c25bc:
    // 0x4c25bc: 0x0  nop
    ctx->pc = 0x4c25bcu;
    // NOP
label_4c25c0:
    // 0x4c25c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c25c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c25c4:
    // 0x4c25c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c25c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c25c8:
    // 0x4c25c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c25c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c25cc:
    // 0x4c25cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4c25ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4c25d0:
    // 0x4c25d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c25d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c25d4:
    // 0x4c25d4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4c25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4c25d8:
    // 0x4c25d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c25d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c25dc:
    // 0x4c25dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4c25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4c25e0:
    // 0x4c25e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c25e4:
    // 0x4c25e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c25e8:
    // 0x4c25e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4c25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4c25ec:
    // 0x4c25ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4c25ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c25f0:
    // 0x4c25f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4c25f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4c25f4:
    // 0x4c25f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4c25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4c25f8:
    // 0x4c25f8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4c25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4c25fc:
    // 0x4c25fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4c25fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4c2600:
    // 0x4c2600: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4c2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4c2604:
    // 0x4c2604: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c2604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c2608:
    // 0x4c2608: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4c2608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4c260c:
    // 0x4c260c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4c260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c2610:
    // 0x4c2610: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4c2610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4c2614:
    // 0x4c2614: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c2614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c2618:
    // 0x4c2618: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4c2618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c261c:
    // 0x4c261c: 0xc0a997c  jal         func_2A65F0
label_4c2620:
    if (ctx->pc == 0x4C2620u) {
        ctx->pc = 0x4C2620u;
            // 0x4c2620: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4C2624u;
        goto label_4c2624;
    }
    ctx->pc = 0x4C261Cu;
    SET_GPR_U32(ctx, 31, 0x4C2624u);
    ctx->pc = 0x4C2620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C261Cu;
            // 0x4c2620: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2624u; }
        if (ctx->pc != 0x4C2624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2624u; }
        if (ctx->pc != 0x4C2624u) { return; }
    }
    ctx->pc = 0x4C2624u;
label_4c2624:
    // 0x4c2624: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4c2624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4c2628:
    // 0x4c2628: 0xc0d879c  jal         func_361E70
label_4c262c:
    if (ctx->pc == 0x4C262Cu) {
        ctx->pc = 0x4C262Cu;
            // 0x4c262c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C2630u;
        goto label_4c2630;
    }
    ctx->pc = 0x4C2628u;
    SET_GPR_U32(ctx, 31, 0x4C2630u);
    ctx->pc = 0x4C262Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2628u;
            // 0x4c262c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2630u; }
        if (ctx->pc != 0x4C2630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2630u; }
        if (ctx->pc != 0x4C2630u) { return; }
    }
    ctx->pc = 0x4C2630u;
label_4c2630:
    // 0x4c2630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c2630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c2634:
    // 0x4c2634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c2634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c2638:
    // 0x4c2638: 0x3e00008  jr          $ra
label_4c263c:
    if (ctx->pc == 0x4C263Cu) {
        ctx->pc = 0x4C263Cu;
            // 0x4c263c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C2640u;
        goto label_4c2640;
    }
    ctx->pc = 0x4C2638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C263Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2638u;
            // 0x4c263c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2640u;
label_4c2640:
    // 0x4c2640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c2640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c2644:
    // 0x4c2644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c2644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c2648:
    // 0x4c2648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c2648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c264c:
    // 0x4c264c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4c264cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4c2650:
    // 0x4c2650: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4c2654:
    if (ctx->pc == 0x4C2654u) {
        ctx->pc = 0x4C2654u;
            // 0x4c2654: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C2658u;
        goto label_4c2658;
    }
    ctx->pc = 0x4C2650u;
    {
        const bool branch_taken_0x4c2650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2650u;
            // 0x4c2654: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2650) {
            ctx->pc = 0x4C2770u;
            goto label_4c2770;
        }
    }
    ctx->pc = 0x4C2658u;
label_4c2658:
    // 0x4c2658: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c2658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c265c:
    // 0x4c265c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4c265cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4c2660:
    // 0x4c2660: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c2660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c2664:
    // 0x4c2664: 0xc075128  jal         func_1D44A0
label_4c2668:
    if (ctx->pc == 0x4C2668u) {
        ctx->pc = 0x4C2668u;
            // 0x4c2668: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4C266Cu;
        goto label_4c266c;
    }
    ctx->pc = 0x4C2664u;
    SET_GPR_U32(ctx, 31, 0x4C266Cu);
    ctx->pc = 0x4C2668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2664u;
            // 0x4c2668: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C266Cu; }
        if (ctx->pc != 0x4C266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C266Cu; }
        if (ctx->pc != 0x4C266Cu) { return; }
    }
    ctx->pc = 0x4C266Cu;
label_4c266c:
    // 0x4c266c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4c266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c2670:
    // 0x4c2670: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c2670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c2674:
    // 0x4c2674: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4c2678:
    // 0x4c2678: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4c2678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4c267c:
    // 0x4c267c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c267cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c2680:
    // 0x4c2680: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c2684:
    if (ctx->pc == 0x4C2684u) {
        ctx->pc = 0x4C2684u;
            // 0x4c2684: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4C2688u;
        goto label_4c2688;
    }
    ctx->pc = 0x4C2680u;
    {
        const bool branch_taken_0x4c2680 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2680u;
            // 0x4c2684: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2680) {
            ctx->pc = 0x4C2690u;
            goto label_4c2690;
        }
    }
    ctx->pc = 0x4C2688u;
label_4c2688:
    // 0x4c2688: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c2688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c268c:
    // 0x4c268c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4c268cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4c2690:
    // 0x4c2690: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c2690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c2694:
    // 0x4c2694: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c2694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c2698:
    // 0x4c2698: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4c2698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4c269c:
    // 0x4c269c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4c269cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4c26a0:
    // 0x4c26a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c26a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c26a4:
    // 0x4c26a4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c26a8:
    if (ctx->pc == 0x4C26A8u) {
        ctx->pc = 0x4C26A8u;
            // 0x4c26a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4C26ACu;
        goto label_4c26ac;
    }
    ctx->pc = 0x4C26A4u;
    {
        const bool branch_taken_0x4c26a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c26a4) {
            ctx->pc = 0x4C26A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C26A4u;
            // 0x4c26a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C26B8u;
            goto label_4c26b8;
        }
    }
    ctx->pc = 0x4C26ACu;
label_4c26ac:
    // 0x4c26ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c26acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c26b0:
    // 0x4c26b0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4c26b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4c26b4:
    // 0x4c26b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c26b8:
    // 0x4c26b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c26bc:
    // 0x4c26bc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4c26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4c26c0:
    // 0x4c26c0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4c26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4c26c4:
    // 0x4c26c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c26c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c26c8:
    // 0x4c26c8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c26cc:
    if (ctx->pc == 0x4C26CCu) {
        ctx->pc = 0x4C26CCu;
            // 0x4c26cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4C26D0u;
        goto label_4c26d0;
    }
    ctx->pc = 0x4C26C8u;
    {
        const bool branch_taken_0x4c26c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c26c8) {
            ctx->pc = 0x4C26CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C26C8u;
            // 0x4c26cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C26DCu;
            goto label_4c26dc;
        }
    }
    ctx->pc = 0x4C26D0u;
label_4c26d0:
    // 0x4c26d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c26d4:
    // 0x4c26d4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4c26d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4c26d8:
    // 0x4c26d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4c26d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c26dc:
    // 0x4c26dc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4c26dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4c26e0:
    // 0x4c26e0: 0x320f809  jalr        $t9
label_4c26e4:
    if (ctx->pc == 0x4C26E4u) {
        ctx->pc = 0x4C26E4u;
            // 0x4c26e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C26E8u;
        goto label_4c26e8;
    }
    ctx->pc = 0x4C26E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C26E8u);
        ctx->pc = 0x4C26E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C26E0u;
            // 0x4c26e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C26E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C26E8u; }
            if (ctx->pc != 0x4C26E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4C26E8u;
label_4c26e8:
    // 0x4c26e8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4c26e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c26ec:
    // 0x4c26ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c26ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c26f0:
    // 0x4c26f0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4c26f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4c26f4:
    // 0x4c26f4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4c26f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4c26f8:
    // 0x4c26f8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4c26f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c26fc:
    // 0x4c26fc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4c26fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c2700:
    // 0x4c2700: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c2704:
    if (ctx->pc == 0x4C2704u) {
        ctx->pc = 0x4C2704u;
            // 0x4c2704: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4C2708u;
        goto label_4c2708;
    }
    ctx->pc = 0x4C2700u;
    {
        const bool branch_taken_0x4c2700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2700) {
            ctx->pc = 0x4C2704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2700u;
            // 0x4c2704: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C2714u;
            goto label_4c2714;
        }
    }
    ctx->pc = 0x4C2708u;
label_4c2708:
    // 0x4c2708: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c2708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c270c:
    // 0x4c270c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4c270cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4c2710:
    // 0x4c2710: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4c2710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c2714:
    // 0x4c2714: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c2714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c2718:
    // 0x4c2718: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4c2718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4c271c:
    // 0x4c271c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4c271cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4c2720:
    // 0x4c2720: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4c2720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c2724:
    // 0x4c2724: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4c2724u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c2728:
    // 0x4c2728: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c272c:
    if (ctx->pc == 0x4C272Cu) {
        ctx->pc = 0x4C2730u;
        goto label_4c2730;
    }
    ctx->pc = 0x4C2728u;
    {
        const bool branch_taken_0x4c2728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2728) {
            ctx->pc = 0x4C2738u;
            goto label_4c2738;
        }
    }
    ctx->pc = 0x4C2730u;
label_4c2730:
    // 0x4c2730: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c2730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c2734:
    // 0x4c2734: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4c2734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4c2738:
    // 0x4c2738: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c2738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c273c:
    // 0x4c273c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4c273cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4c2740:
    // 0x4c2740: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4c2740u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c2744:
    // 0x4c2744: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c2748:
    if (ctx->pc == 0x4C2748u) {
        ctx->pc = 0x4C274Cu;
        goto label_4c274c;
    }
    ctx->pc = 0x4C2744u;
    {
        const bool branch_taken_0x4c2744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2744) {
            ctx->pc = 0x4C2754u;
            goto label_4c2754;
        }
    }
    ctx->pc = 0x4C274Cu;
label_4c274c:
    // 0x4c274c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c274cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c2750:
    // 0x4c2750: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4c2750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4c2754:
    // 0x4c2754: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c2754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c2758:
    // 0x4c2758: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4c2758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4c275c:
    // 0x4c275c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4c275cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c2760:
    // 0x4c2760: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c2764:
    if (ctx->pc == 0x4C2764u) {
        ctx->pc = 0x4C2764u;
            // 0x4c2764: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4C2768u;
        goto label_4c2768;
    }
    ctx->pc = 0x4C2760u;
    {
        const bool branch_taken_0x4c2760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2760) {
            ctx->pc = 0x4C2764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2760u;
            // 0x4c2764: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C2774u;
            goto label_4c2774;
        }
    }
    ctx->pc = 0x4C2768u;
label_4c2768:
    // 0x4c2768: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c2768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c276c:
    // 0x4c276c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4c276cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4c2770:
    // 0x4c2770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c2770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c2774:
    // 0x4c2774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c2774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c2778:
    // 0x4c2778: 0x3e00008  jr          $ra
label_4c277c:
    if (ctx->pc == 0x4C277Cu) {
        ctx->pc = 0x4C277Cu;
            // 0x4c277c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C2780u;
        goto label_4c2780;
    }
    ctx->pc = 0x4C2778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C277Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2778u;
            // 0x4c277c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2780u;
label_4c2780:
    // 0x4c2780: 0x81304a8  j           func_4C12A0
label_4c2784:
    if (ctx->pc == 0x4C2784u) {
        ctx->pc = 0x4C2784u;
            // 0x4c2784: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C2788u;
        goto label_4c2788;
    }
    ctx->pc = 0x4C2780u;
    ctx->pc = 0x4C2784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2780u;
            // 0x4c2784: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C12A0u;
    {
        auto targetFn = runtime->lookupFunction(0x4C12A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C2788u;
label_4c2788:
    // 0x4c2788: 0x0  nop
    ctx->pc = 0x4c2788u;
    // NOP
label_4c278c:
    // 0x4c278c: 0x0  nop
    ctx->pc = 0x4c278cu;
    // NOP
label_4c2790:
    // 0x4c2790: 0x813034c  j           func_4C0D30
label_4c2794:
    if (ctx->pc == 0x4C2794u) {
        ctx->pc = 0x4C2794u;
            // 0x4c2794: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C2798u;
        goto label_4c2798;
    }
    ctx->pc = 0x4C2790u;
    ctx->pc = 0x4C2794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2790u;
            // 0x4c2794: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C0D30u;
    if (runtime->hasFunction(0x4C0D30u)) {
        auto targetFn = runtime->lookupFunction(0x4C0D30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004C0D30_0x4c0d30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4C2798u;
label_4c2798:
    // 0x4c2798: 0x0  nop
    ctx->pc = 0x4c2798u;
    // NOP
label_4c279c:
    // 0x4c279c: 0x0  nop
    ctx->pc = 0x4c279cu;
    // NOP
label_4c27a0:
    // 0x4c27a0: 0x81303a4  j           func_4C0E90
label_4c27a4:
    if (ctx->pc == 0x4C27A4u) {
        ctx->pc = 0x4C27A4u;
            // 0x4c27a4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4C27A8u;
        goto label_4c27a8;
    }
    ctx->pc = 0x4C27A0u;
    ctx->pc = 0x4C27A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C27A0u;
            // 0x4c27a4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C0E90u;
    {
        auto targetFn = runtime->lookupFunction(0x4C0E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C27A8u;
label_4c27a8:
    // 0x4c27a8: 0x0  nop
    ctx->pc = 0x4c27a8u;
    // NOP
label_4c27ac:
    // 0x4c27ac: 0x0  nop
    ctx->pc = 0x4c27acu;
    // NOP
label_4c27b0:
    // 0x4c27b0: 0x8130328  j           func_4C0CA0
label_4c27b4:
    if (ctx->pc == 0x4C27B4u) {
        ctx->pc = 0x4C27B4u;
            // 0x4c27b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C27B8u;
        goto label_4c27b8;
    }
    ctx->pc = 0x4C27B0u;
    ctx->pc = 0x4C27B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C27B0u;
            // 0x4c27b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C0CA0u;
    {
        auto targetFn = runtime->lookupFunction(0x4C0CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C27B8u;
label_4c27b8:
    // 0x4c27b8: 0x0  nop
    ctx->pc = 0x4c27b8u;
    // NOP
label_4c27bc:
    // 0x4c27bc: 0x0  nop
    ctx->pc = 0x4c27bcu;
    // NOP
}
