#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D2380
// Address: 0x3d2380 - 0x3d2740
void sub_003D2380_0x3d2380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2380_0x3d2380");
#endif

    switch (ctx->pc) {
        case 0x3d2380u: goto label_3d2380;
        case 0x3d2384u: goto label_3d2384;
        case 0x3d2388u: goto label_3d2388;
        case 0x3d238cu: goto label_3d238c;
        case 0x3d2390u: goto label_3d2390;
        case 0x3d2394u: goto label_3d2394;
        case 0x3d2398u: goto label_3d2398;
        case 0x3d239cu: goto label_3d239c;
        case 0x3d23a0u: goto label_3d23a0;
        case 0x3d23a4u: goto label_3d23a4;
        case 0x3d23a8u: goto label_3d23a8;
        case 0x3d23acu: goto label_3d23ac;
        case 0x3d23b0u: goto label_3d23b0;
        case 0x3d23b4u: goto label_3d23b4;
        case 0x3d23b8u: goto label_3d23b8;
        case 0x3d23bcu: goto label_3d23bc;
        case 0x3d23c0u: goto label_3d23c0;
        case 0x3d23c4u: goto label_3d23c4;
        case 0x3d23c8u: goto label_3d23c8;
        case 0x3d23ccu: goto label_3d23cc;
        case 0x3d23d0u: goto label_3d23d0;
        case 0x3d23d4u: goto label_3d23d4;
        case 0x3d23d8u: goto label_3d23d8;
        case 0x3d23dcu: goto label_3d23dc;
        case 0x3d23e0u: goto label_3d23e0;
        case 0x3d23e4u: goto label_3d23e4;
        case 0x3d23e8u: goto label_3d23e8;
        case 0x3d23ecu: goto label_3d23ec;
        case 0x3d23f0u: goto label_3d23f0;
        case 0x3d23f4u: goto label_3d23f4;
        case 0x3d23f8u: goto label_3d23f8;
        case 0x3d23fcu: goto label_3d23fc;
        case 0x3d2400u: goto label_3d2400;
        case 0x3d2404u: goto label_3d2404;
        case 0x3d2408u: goto label_3d2408;
        case 0x3d240cu: goto label_3d240c;
        case 0x3d2410u: goto label_3d2410;
        case 0x3d2414u: goto label_3d2414;
        case 0x3d2418u: goto label_3d2418;
        case 0x3d241cu: goto label_3d241c;
        case 0x3d2420u: goto label_3d2420;
        case 0x3d2424u: goto label_3d2424;
        case 0x3d2428u: goto label_3d2428;
        case 0x3d242cu: goto label_3d242c;
        case 0x3d2430u: goto label_3d2430;
        case 0x3d2434u: goto label_3d2434;
        case 0x3d2438u: goto label_3d2438;
        case 0x3d243cu: goto label_3d243c;
        case 0x3d2440u: goto label_3d2440;
        case 0x3d2444u: goto label_3d2444;
        case 0x3d2448u: goto label_3d2448;
        case 0x3d244cu: goto label_3d244c;
        case 0x3d2450u: goto label_3d2450;
        case 0x3d2454u: goto label_3d2454;
        case 0x3d2458u: goto label_3d2458;
        case 0x3d245cu: goto label_3d245c;
        case 0x3d2460u: goto label_3d2460;
        case 0x3d2464u: goto label_3d2464;
        case 0x3d2468u: goto label_3d2468;
        case 0x3d246cu: goto label_3d246c;
        case 0x3d2470u: goto label_3d2470;
        case 0x3d2474u: goto label_3d2474;
        case 0x3d2478u: goto label_3d2478;
        case 0x3d247cu: goto label_3d247c;
        case 0x3d2480u: goto label_3d2480;
        case 0x3d2484u: goto label_3d2484;
        case 0x3d2488u: goto label_3d2488;
        case 0x3d248cu: goto label_3d248c;
        case 0x3d2490u: goto label_3d2490;
        case 0x3d2494u: goto label_3d2494;
        case 0x3d2498u: goto label_3d2498;
        case 0x3d249cu: goto label_3d249c;
        case 0x3d24a0u: goto label_3d24a0;
        case 0x3d24a4u: goto label_3d24a4;
        case 0x3d24a8u: goto label_3d24a8;
        case 0x3d24acu: goto label_3d24ac;
        case 0x3d24b0u: goto label_3d24b0;
        case 0x3d24b4u: goto label_3d24b4;
        case 0x3d24b8u: goto label_3d24b8;
        case 0x3d24bcu: goto label_3d24bc;
        case 0x3d24c0u: goto label_3d24c0;
        case 0x3d24c4u: goto label_3d24c4;
        case 0x3d24c8u: goto label_3d24c8;
        case 0x3d24ccu: goto label_3d24cc;
        case 0x3d24d0u: goto label_3d24d0;
        case 0x3d24d4u: goto label_3d24d4;
        case 0x3d24d8u: goto label_3d24d8;
        case 0x3d24dcu: goto label_3d24dc;
        case 0x3d24e0u: goto label_3d24e0;
        case 0x3d24e4u: goto label_3d24e4;
        case 0x3d24e8u: goto label_3d24e8;
        case 0x3d24ecu: goto label_3d24ec;
        case 0x3d24f0u: goto label_3d24f0;
        case 0x3d24f4u: goto label_3d24f4;
        case 0x3d24f8u: goto label_3d24f8;
        case 0x3d24fcu: goto label_3d24fc;
        case 0x3d2500u: goto label_3d2500;
        case 0x3d2504u: goto label_3d2504;
        case 0x3d2508u: goto label_3d2508;
        case 0x3d250cu: goto label_3d250c;
        case 0x3d2510u: goto label_3d2510;
        case 0x3d2514u: goto label_3d2514;
        case 0x3d2518u: goto label_3d2518;
        case 0x3d251cu: goto label_3d251c;
        case 0x3d2520u: goto label_3d2520;
        case 0x3d2524u: goto label_3d2524;
        case 0x3d2528u: goto label_3d2528;
        case 0x3d252cu: goto label_3d252c;
        case 0x3d2530u: goto label_3d2530;
        case 0x3d2534u: goto label_3d2534;
        case 0x3d2538u: goto label_3d2538;
        case 0x3d253cu: goto label_3d253c;
        case 0x3d2540u: goto label_3d2540;
        case 0x3d2544u: goto label_3d2544;
        case 0x3d2548u: goto label_3d2548;
        case 0x3d254cu: goto label_3d254c;
        case 0x3d2550u: goto label_3d2550;
        case 0x3d2554u: goto label_3d2554;
        case 0x3d2558u: goto label_3d2558;
        case 0x3d255cu: goto label_3d255c;
        case 0x3d2560u: goto label_3d2560;
        case 0x3d2564u: goto label_3d2564;
        case 0x3d2568u: goto label_3d2568;
        case 0x3d256cu: goto label_3d256c;
        case 0x3d2570u: goto label_3d2570;
        case 0x3d2574u: goto label_3d2574;
        case 0x3d2578u: goto label_3d2578;
        case 0x3d257cu: goto label_3d257c;
        case 0x3d2580u: goto label_3d2580;
        case 0x3d2584u: goto label_3d2584;
        case 0x3d2588u: goto label_3d2588;
        case 0x3d258cu: goto label_3d258c;
        case 0x3d2590u: goto label_3d2590;
        case 0x3d2594u: goto label_3d2594;
        case 0x3d2598u: goto label_3d2598;
        case 0x3d259cu: goto label_3d259c;
        case 0x3d25a0u: goto label_3d25a0;
        case 0x3d25a4u: goto label_3d25a4;
        case 0x3d25a8u: goto label_3d25a8;
        case 0x3d25acu: goto label_3d25ac;
        case 0x3d25b0u: goto label_3d25b0;
        case 0x3d25b4u: goto label_3d25b4;
        case 0x3d25b8u: goto label_3d25b8;
        case 0x3d25bcu: goto label_3d25bc;
        case 0x3d25c0u: goto label_3d25c0;
        case 0x3d25c4u: goto label_3d25c4;
        case 0x3d25c8u: goto label_3d25c8;
        case 0x3d25ccu: goto label_3d25cc;
        case 0x3d25d0u: goto label_3d25d0;
        case 0x3d25d4u: goto label_3d25d4;
        case 0x3d25d8u: goto label_3d25d8;
        case 0x3d25dcu: goto label_3d25dc;
        case 0x3d25e0u: goto label_3d25e0;
        case 0x3d25e4u: goto label_3d25e4;
        case 0x3d25e8u: goto label_3d25e8;
        case 0x3d25ecu: goto label_3d25ec;
        case 0x3d25f0u: goto label_3d25f0;
        case 0x3d25f4u: goto label_3d25f4;
        case 0x3d25f8u: goto label_3d25f8;
        case 0x3d25fcu: goto label_3d25fc;
        case 0x3d2600u: goto label_3d2600;
        case 0x3d2604u: goto label_3d2604;
        case 0x3d2608u: goto label_3d2608;
        case 0x3d260cu: goto label_3d260c;
        case 0x3d2610u: goto label_3d2610;
        case 0x3d2614u: goto label_3d2614;
        case 0x3d2618u: goto label_3d2618;
        case 0x3d261cu: goto label_3d261c;
        case 0x3d2620u: goto label_3d2620;
        case 0x3d2624u: goto label_3d2624;
        case 0x3d2628u: goto label_3d2628;
        case 0x3d262cu: goto label_3d262c;
        case 0x3d2630u: goto label_3d2630;
        case 0x3d2634u: goto label_3d2634;
        case 0x3d2638u: goto label_3d2638;
        case 0x3d263cu: goto label_3d263c;
        case 0x3d2640u: goto label_3d2640;
        case 0x3d2644u: goto label_3d2644;
        case 0x3d2648u: goto label_3d2648;
        case 0x3d264cu: goto label_3d264c;
        case 0x3d2650u: goto label_3d2650;
        case 0x3d2654u: goto label_3d2654;
        case 0x3d2658u: goto label_3d2658;
        case 0x3d265cu: goto label_3d265c;
        case 0x3d2660u: goto label_3d2660;
        case 0x3d2664u: goto label_3d2664;
        case 0x3d2668u: goto label_3d2668;
        case 0x3d266cu: goto label_3d266c;
        case 0x3d2670u: goto label_3d2670;
        case 0x3d2674u: goto label_3d2674;
        case 0x3d2678u: goto label_3d2678;
        case 0x3d267cu: goto label_3d267c;
        case 0x3d2680u: goto label_3d2680;
        case 0x3d2684u: goto label_3d2684;
        case 0x3d2688u: goto label_3d2688;
        case 0x3d268cu: goto label_3d268c;
        case 0x3d2690u: goto label_3d2690;
        case 0x3d2694u: goto label_3d2694;
        case 0x3d2698u: goto label_3d2698;
        case 0x3d269cu: goto label_3d269c;
        case 0x3d26a0u: goto label_3d26a0;
        case 0x3d26a4u: goto label_3d26a4;
        case 0x3d26a8u: goto label_3d26a8;
        case 0x3d26acu: goto label_3d26ac;
        case 0x3d26b0u: goto label_3d26b0;
        case 0x3d26b4u: goto label_3d26b4;
        case 0x3d26b8u: goto label_3d26b8;
        case 0x3d26bcu: goto label_3d26bc;
        case 0x3d26c0u: goto label_3d26c0;
        case 0x3d26c4u: goto label_3d26c4;
        case 0x3d26c8u: goto label_3d26c8;
        case 0x3d26ccu: goto label_3d26cc;
        case 0x3d26d0u: goto label_3d26d0;
        case 0x3d26d4u: goto label_3d26d4;
        case 0x3d26d8u: goto label_3d26d8;
        case 0x3d26dcu: goto label_3d26dc;
        case 0x3d26e0u: goto label_3d26e0;
        case 0x3d26e4u: goto label_3d26e4;
        case 0x3d26e8u: goto label_3d26e8;
        case 0x3d26ecu: goto label_3d26ec;
        case 0x3d26f0u: goto label_3d26f0;
        case 0x3d26f4u: goto label_3d26f4;
        case 0x3d26f8u: goto label_3d26f8;
        case 0x3d26fcu: goto label_3d26fc;
        case 0x3d2700u: goto label_3d2700;
        case 0x3d2704u: goto label_3d2704;
        case 0x3d2708u: goto label_3d2708;
        case 0x3d270cu: goto label_3d270c;
        case 0x3d2710u: goto label_3d2710;
        case 0x3d2714u: goto label_3d2714;
        case 0x3d2718u: goto label_3d2718;
        case 0x3d271cu: goto label_3d271c;
        case 0x3d2720u: goto label_3d2720;
        case 0x3d2724u: goto label_3d2724;
        case 0x3d2728u: goto label_3d2728;
        case 0x3d272cu: goto label_3d272c;
        case 0x3d2730u: goto label_3d2730;
        case 0x3d2734u: goto label_3d2734;
        case 0x3d2738u: goto label_3d2738;
        case 0x3d273cu: goto label_3d273c;
        default: break;
    }

    ctx->pc = 0x3d2380u;

label_3d2380:
    // 0x3d2380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d2380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d2384:
    // 0x3d2384: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3d2384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d2388:
    // 0x3d2388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d2388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d238c:
    // 0x3d238c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d2390:
    // 0x3d2390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d2390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d2394:
    // 0x3d2394: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d2394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d2398:
    // 0x3d2398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d2398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d239c:
    // 0x3d239c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d239cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d23a0:
    // 0x3d23a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d23a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d23a4:
    // 0x3d23a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3d23a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d23a8:
    // 0x3d23a8: 0xc10ca68  jal         func_4329A0
label_3d23ac:
    if (ctx->pc == 0x3D23ACu) {
        ctx->pc = 0x3D23ACu;
            // 0x3d23ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3D23B0u;
        goto label_3d23b0;
    }
    ctx->pc = 0x3D23A8u;
    SET_GPR_U32(ctx, 31, 0x3D23B0u);
    ctx->pc = 0x3D23ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D23A8u;
            // 0x3d23ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D23B0u; }
        if (ctx->pc != 0x3D23B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D23B0u; }
        if (ctx->pc != 0x3D23B0u) { return; }
    }
    ctx->pc = 0x3D23B0u;
label_3d23b0:
    // 0x3d23b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d23b4:
    // 0x3d23b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d23b8:
    // 0x3d23b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3d23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3d23bc:
    // 0x3d23bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3d23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3d23c0:
    // 0x3d23c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3d23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3d23c4:
    // 0x3d23c4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3d23c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_3d23c8:
    // 0x3d23c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3d23c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3d23cc:
    // 0x3d23cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d23d0:
    // 0x3d23d0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3d23d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3d23d4:
    // 0x3d23d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d23d8:
    // 0x3d23d8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x3d23d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_3d23dc:
    // 0x3d23dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3d23dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d23e0:
    // 0x3d23e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3d23e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_3d23e4:
    // 0x3d23e4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x3d23e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_3d23e8:
    // 0x3d23e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3d23e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_3d23ec:
    // 0x3d23ec: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x3d23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_3d23f0:
    // 0x3d23f0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x3d23f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_3d23f4:
    // 0x3d23f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3d23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3d23f8:
    // 0x3d23f8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3d23f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3d23fc:
    // 0x3d23fc: 0xc0582cc  jal         func_160B30
label_3d2400:
    if (ctx->pc == 0x3D2400u) {
        ctx->pc = 0x3D2400u;
            // 0x3d2400: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3D2404u;
        goto label_3d2404;
    }
    ctx->pc = 0x3D23FCu;
    SET_GPR_U32(ctx, 31, 0x3D2404u);
    ctx->pc = 0x3D2400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D23FCu;
            // 0x3d2400: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2404u; }
        if (ctx->pc != 0x3D2404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2404u; }
        if (ctx->pc != 0x3D2404u) { return; }
    }
    ctx->pc = 0x3D2404u;
label_3d2404:
    // 0x3d2404: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d2404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d2408:
    // 0x3d2408: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x3d2408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_3d240c:
    // 0x3d240c: 0x24639268  addiu       $v1, $v1, -0x6D98
    ctx->pc = 0x3d240cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939240));
label_3d2410:
    // 0x3d2410: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x3d2410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_3d2414:
    // 0x3d2414: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3d2414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_3d2418:
    // 0x3d2418: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d2418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d241c:
    // 0x3d241c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d241cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d2420:
    // 0x3d2420: 0xac446ea0  sw          $a0, 0x6EA0($v0)
    ctx->pc = 0x3d2420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28320), GPR_U32(ctx, 4));
label_3d2424:
    // 0x3d2424: 0x24639280  addiu       $v1, $v1, -0x6D80
    ctx->pc = 0x3d2424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939264));
label_3d2428:
    // 0x3d2428: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d2428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d242c:
    // 0x3d242c: 0x244292b8  addiu       $v0, $v0, -0x6D48
    ctx->pc = 0x3d242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939320));
label_3d2430:
    // 0x3d2430: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3d2430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3d2434:
    // 0x3d2434: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x3d2434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_3d2438:
    // 0x3d2438: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3d2438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_3d243c:
    // 0x3d243c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3d243cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_3d2440:
    // 0x3d2440: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3d2440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_3d2444:
    // 0x3d2444: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x3d2444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_3d2448:
    // 0x3d2448: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x3d2448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_3d244c:
    // 0x3d244c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3d244cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_3d2450:
    // 0x3d2450: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3d2450u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_3d2454:
    // 0x3d2454: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x3d2454u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_3d2458:
    // 0x3d2458: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x3d2458u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_3d245c:
    // 0x3d245c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x3d245cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_3d2460:
    // 0x3d2460: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x3d2460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3d2464:
    // 0x3d2464: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_3d2468:
    if (ctx->pc == 0x3D2468u) {
        ctx->pc = 0x3D246Cu;
        goto label_3d246c;
    }
    ctx->pc = 0x3D2464u;
    {
        const bool branch_taken_0x3d2464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2464) {
            ctx->pc = 0x3D24F8u;
            goto label_3d24f8;
        }
    }
    ctx->pc = 0x3D246Cu;
label_3d246c:
    // 0x3d246c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3d246cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3d2470:
    // 0x3d2470: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3d2470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d2474:
    // 0x3d2474: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3d2474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3d2478:
    // 0x3d2478: 0xc040138  jal         func_1004E0
label_3d247c:
    if (ctx->pc == 0x3D247Cu) {
        ctx->pc = 0x3D247Cu;
            // 0x3d247c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3D2480u;
        goto label_3d2480;
    }
    ctx->pc = 0x3D2478u;
    SET_GPR_U32(ctx, 31, 0x3D2480u);
    ctx->pc = 0x3D247Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2478u;
            // 0x3d247c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2480u; }
        if (ctx->pc != 0x3D2480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2480u; }
        if (ctx->pc != 0x3D2480u) { return; }
    }
    ctx->pc = 0x3D2480u;
label_3d2480:
    // 0x3d2480: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d2480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3d2484:
    // 0x3d2484: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x3d2484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_3d2488:
    // 0x3d2488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d2488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d248c:
    // 0x3d248c: 0x24a52520  addiu       $a1, $a1, 0x2520
    ctx->pc = 0x3d248cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9504));
label_3d2490:
    // 0x3d2490: 0x24c66f00  addiu       $a2, $a2, 0x6F00
    ctx->pc = 0x3d2490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28416));
label_3d2494:
    // 0x3d2494: 0x24070220  addiu       $a3, $zero, 0x220
    ctx->pc = 0x3d2494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d2498:
    // 0x3d2498: 0xc040840  jal         func_102100
label_3d249c:
    if (ctx->pc == 0x3D249Cu) {
        ctx->pc = 0x3D249Cu;
            // 0x3d249c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D24A0u;
        goto label_3d24a0;
    }
    ctx->pc = 0x3D2498u;
    SET_GPR_U32(ctx, 31, 0x3D24A0u);
    ctx->pc = 0x3D249Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2498u;
            // 0x3d249c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D24A0u; }
        if (ctx->pc != 0x3D24A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D24A0u; }
        if (ctx->pc != 0x3D24A0u) { return; }
    }
    ctx->pc = 0x3D24A0u;
label_3d24a0:
    // 0x3d24a0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3d24a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_3d24a4:
    // 0x3d24a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d24a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d24a8:
    // 0x3d24a8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3d24a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_3d24ac:
    // 0x3d24ac: 0xc0788fc  jal         func_1E23F0
label_3d24b0:
    if (ctx->pc == 0x3D24B0u) {
        ctx->pc = 0x3D24B0u;
            // 0x3d24b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D24B4u;
        goto label_3d24b4;
    }
    ctx->pc = 0x3D24ACu;
    SET_GPR_U32(ctx, 31, 0x3D24B4u);
    ctx->pc = 0x3D24B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D24ACu;
            // 0x3d24b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D24B4u; }
        if (ctx->pc != 0x3D24B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D24B4u; }
        if (ctx->pc != 0x3D24B4u) { return; }
    }
    ctx->pc = 0x3D24B4u;
label_3d24b4:
    // 0x3d24b4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3d24b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3d24b8:
    // 0x3d24b8: 0xc0788fc  jal         func_1E23F0
label_3d24bc:
    if (ctx->pc == 0x3D24BCu) {
        ctx->pc = 0x3D24BCu;
            // 0x3d24bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D24C0u;
        goto label_3d24c0;
    }
    ctx->pc = 0x3D24B8u;
    SET_GPR_U32(ctx, 31, 0x3D24C0u);
    ctx->pc = 0x3D24BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D24B8u;
            // 0x3d24bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D24C0u; }
        if (ctx->pc != 0x3D24C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D24C0u; }
        if (ctx->pc != 0x3D24C0u) { return; }
    }
    ctx->pc = 0x3D24C0u;
label_3d24c0:
    // 0x3d24c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d24c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d24c4:
    // 0x3d24c4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3d24c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_3d24c8:
    // 0x3d24c8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3d24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3d24cc:
    // 0x3d24cc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3d24ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_3d24d0:
    // 0x3d24d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d24d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d24d4:
    // 0x3d24d4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x3d24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_3d24d8:
    // 0x3d24d8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x3d24d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_3d24dc:
    // 0x3d24dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d24dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d24e0:
    // 0x3d24e0: 0xc0a997c  jal         func_2A65F0
label_3d24e4:
    if (ctx->pc == 0x3D24E4u) {
        ctx->pc = 0x3D24E4u;
            // 0x3d24e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3D24E8u;
        goto label_3d24e8;
    }
    ctx->pc = 0x3D24E0u;
    SET_GPR_U32(ctx, 31, 0x3D24E8u);
    ctx->pc = 0x3D24E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D24E0u;
            // 0x3d24e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D24E8u; }
        if (ctx->pc != 0x3D24E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D24E8u; }
        if (ctx->pc != 0x3D24E8u) { return; }
    }
    ctx->pc = 0x3D24E8u;
label_3d24e8:
    // 0x3d24e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d24e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d24ec:
    // 0x3d24ec: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3d24ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d24f0:
    // 0x3d24f0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3d24f4:
    if (ctx->pc == 0x3D24F4u) {
        ctx->pc = 0x3D24F4u;
            // 0x3d24f4: 0x26520220  addiu       $s2, $s2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
        ctx->pc = 0x3D24F8u;
        goto label_3d24f8;
    }
    ctx->pc = 0x3D24F0u;
    {
        const bool branch_taken_0x3d24f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D24F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D24F0u;
            // 0x3d24f4: 0x26520220  addiu       $s2, $s2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d24f0) {
            ctx->pc = 0x3D24C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d24c4;
        }
    }
    ctx->pc = 0x3D24F8u;
label_3d24f8:
    // 0x3d24f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d24f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d24fc:
    // 0x3d24fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d24fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d2500:
    // 0x3d2500: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d2500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d2504:
    // 0x3d2504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d2504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d2508:
    // 0x3d2508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d2508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d250c:
    // 0x3d250c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d250cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d2510:
    // 0x3d2510: 0x3e00008  jr          $ra
label_3d2514:
    if (ctx->pc == 0x3D2514u) {
        ctx->pc = 0x3D2514u;
            // 0x3d2514: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D2518u;
        goto label_3d2518;
    }
    ctx->pc = 0x3D2510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2510u;
            // 0x3d2514: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D2518u;
label_3d2518:
    // 0x3d2518: 0x0  nop
    ctx->pc = 0x3d2518u;
    // NOP
label_3d251c:
    // 0x3d251c: 0x0  nop
    ctx->pc = 0x3d251cu;
    // NOP
label_3d2520:
    // 0x3d2520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d2520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d2524:
    // 0x3d2524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d2524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d2528:
    // 0x3d2528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d2528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d252c:
    // 0x3d252c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d252cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d2530:
    // 0x3d2530: 0xc0aeebc  jal         func_2BBAF0
label_3d2534:
    if (ctx->pc == 0x3D2534u) {
        ctx->pc = 0x3D2534u;
            // 0x3d2534: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3D2538u;
        goto label_3d2538;
    }
    ctx->pc = 0x3D2530u;
    SET_GPR_U32(ctx, 31, 0x3D2538u);
    ctx->pc = 0x3D2534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2530u;
            // 0x3d2534: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2538u; }
        if (ctx->pc != 0x3D2538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2538u; }
        if (ctx->pc != 0x3D2538u) { return; }
    }
    ctx->pc = 0x3D2538u;
label_3d2538:
    // 0x3d2538: 0xc0aeeb4  jal         func_2BBAD0
label_3d253c:
    if (ctx->pc == 0x3D253Cu) {
        ctx->pc = 0x3D253Cu;
            // 0x3d253c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x3D2540u;
        goto label_3d2540;
    }
    ctx->pc = 0x3D2538u;
    SET_GPR_U32(ctx, 31, 0x3D2540u);
    ctx->pc = 0x3D253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2538u;
            // 0x3d253c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2540u; }
        if (ctx->pc != 0x3D2540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2540u; }
        if (ctx->pc != 0x3D2540u) { return; }
    }
    ctx->pc = 0x3D2540u;
label_3d2540:
    // 0x3d2540: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d2540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d2544:
    // 0x3d2544: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d2544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d2548:
    // 0x3d2548: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3d2548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_3d254c:
    // 0x3d254c: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3d254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_3d2550:
    // 0x3d2550: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d2550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d2554:
    // 0x3d2554: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x3d2554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_3d2558:
    // 0x3d2558: 0xc0aeea4  jal         func_2BBA90
label_3d255c:
    if (ctx->pc == 0x3D255Cu) {
        ctx->pc = 0x3D255Cu;
            // 0x3d255c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x3D2560u;
        goto label_3d2560;
    }
    ctx->pc = 0x3D2558u;
    SET_GPR_U32(ctx, 31, 0x3D2560u);
    ctx->pc = 0x3D255Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2558u;
            // 0x3d255c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2560u; }
        if (ctx->pc != 0x3D2560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2560u; }
        if (ctx->pc != 0x3D2560u) { return; }
    }
    ctx->pc = 0x3D2560u;
label_3d2560:
    // 0x3d2560: 0xc0aee8c  jal         func_2BBA30
label_3d2564:
    if (ctx->pc == 0x3D2564u) {
        ctx->pc = 0x3D2564u;
            // 0x3d2564: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3D2568u;
        goto label_3d2568;
    }
    ctx->pc = 0x3D2560u;
    SET_GPR_U32(ctx, 31, 0x3D2568u);
    ctx->pc = 0x3D2564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2560u;
            // 0x3d2564: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2568u; }
        if (ctx->pc != 0x3D2568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2568u; }
        if (ctx->pc != 0x3D2568u) { return; }
    }
    ctx->pc = 0x3D2568u;
label_3d2568:
    // 0x3d2568: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x3d2568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_3d256c:
    // 0x3d256c: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x3d256cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_3d2570:
    // 0x3d2570: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x3d2570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_3d2574:
    // 0x3d2574: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x3d2574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_3d2578:
    // 0x3d2578: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x3d2578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_3d257c:
    // 0x3d257c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d257cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2580:
    // 0x3d2580: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x3d2580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_3d2584:
    // 0x3d2584: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d2584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d2588:
    // 0x3d2588: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x3d2588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_3d258c:
    // 0x3d258c: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x3d258cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_3d2590:
    // 0x3d2590: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x3d2590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_3d2594:
    // 0x3d2594: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x3d2594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_3d2598:
    // 0x3d2598: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x3d2598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_3d259c:
    // 0x3d259c: 0xae2400c4  sw          $a0, 0xC4($s1)
    ctx->pc = 0x3d259cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 4));
label_3d25a0:
    // 0x3d25a0: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x3d25a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_3d25a4:
    // 0x3d25a4: 0xc0775b8  jal         func_1DD6E0
label_3d25a8:
    if (ctx->pc == 0x3D25A8u) {
        ctx->pc = 0x3D25A8u;
            // 0x3d25a8: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3D25ACu;
        goto label_3d25ac;
    }
    ctx->pc = 0x3D25A4u;
    SET_GPR_U32(ctx, 31, 0x3D25ACu);
    ctx->pc = 0x3D25A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D25A4u;
            // 0x3d25a8: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D25ACu; }
        if (ctx->pc != 0x3D25ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D25ACu; }
        if (ctx->pc != 0x3D25ACu) { return; }
    }
    ctx->pc = 0x3D25ACu;
label_3d25ac:
    // 0x3d25ac: 0xc077314  jal         func_1DCC50
label_3d25b0:
    if (ctx->pc == 0x3D25B0u) {
        ctx->pc = 0x3D25B0u;
            // 0x3d25b0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3D25B4u;
        goto label_3d25b4;
    }
    ctx->pc = 0x3D25ACu;
    SET_GPR_U32(ctx, 31, 0x3D25B4u);
    ctx->pc = 0x3D25B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D25ACu;
            // 0x3d25b0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D25B4u; }
        if (ctx->pc != 0x3D25B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D25B4u; }
        if (ctx->pc != 0x3D25B4u) { return; }
    }
    ctx->pc = 0x3D25B4u;
label_3d25b4:
    // 0x3d25b4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3d25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3d25b8:
    // 0x3d25b8: 0x263000f0  addiu       $s0, $s1, 0xF0
    ctx->pc = 0x3d25b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_3d25bc:
    // 0x3d25bc: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x3d25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_3d25c0:
    // 0x3d25c0: 0x8e2500c8  lw          $a1, 0xC8($s1)
    ctx->pc = 0x3d25c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_3d25c4:
    // 0x3d25c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d25c8:
    // 0x3d25c8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3d25c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_3d25cc:
    // 0x3d25cc: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3d25ccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3d25d0:
    // 0x3d25d0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d25d4:
    // 0x3d25d4: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x3d25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_3d25d8:
    // 0x3d25d8: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x3d25d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3d25dc:
    // 0x3d25dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d25e0:
    // 0x3d25e0: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x3d25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_3d25e4:
    // 0x3d25e4: 0xae2500c8  sw          $a1, 0xC8($s1)
    ctx->pc = 0x3d25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 5));
label_3d25e8:
    // 0x3d25e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d25ec:
    // 0x3d25ec: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d25ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d25f0:
    // 0x3d25f0: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x3d25f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_3d25f4:
    // 0x3d25f4: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x3d25f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
label_3d25f8:
    // 0x3d25f8: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x3d25f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
label_3d25fc:
    // 0x3d25fc: 0xc04c968  jal         func_1325A0
label_3d2600:
    if (ctx->pc == 0x3D2600u) {
        ctx->pc = 0x3D2600u;
            // 0x3d2600: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3D2604u;
        goto label_3d2604;
    }
    ctx->pc = 0x3D25FCu;
    SET_GPR_U32(ctx, 31, 0x3D2604u);
    ctx->pc = 0x3D2600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D25FCu;
            // 0x3d2600: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2604u; }
        if (ctx->pc != 0x3D2604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2604u; }
        if (ctx->pc != 0x3D2604u) { return; }
    }
    ctx->pc = 0x3D2604u;
label_3d2604:
    // 0x3d2604: 0xc04c968  jal         func_1325A0
label_3d2608:
    if (ctx->pc == 0x3D2608u) {
        ctx->pc = 0x3D2608u;
            // 0x3d2608: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x3D260Cu;
        goto label_3d260c;
    }
    ctx->pc = 0x3D2604u;
    SET_GPR_U32(ctx, 31, 0x3D260Cu);
    ctx->pc = 0x3D2608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2604u;
            // 0x3d2608: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D260Cu; }
        if (ctx->pc != 0x3D260Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D260Cu; }
        if (ctx->pc != 0x3D260Cu) { return; }
    }
    ctx->pc = 0x3D260Cu;
label_3d260c:
    // 0x3d260c: 0xc04c968  jal         func_1325A0
label_3d2610:
    if (ctx->pc == 0x3D2610u) {
        ctx->pc = 0x3D2610u;
            // 0x3d2610: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x3D2614u;
        goto label_3d2614;
    }
    ctx->pc = 0x3D260Cu;
    SET_GPR_U32(ctx, 31, 0x3D2614u);
    ctx->pc = 0x3D2610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D260Cu;
            // 0x3d2610: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2614u; }
        if (ctx->pc != 0x3D2614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2614u; }
        if (ctx->pc != 0x3D2614u) { return; }
    }
    ctx->pc = 0x3D2614u;
label_3d2614:
    // 0x3d2614: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3d2614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_3d2618:
    // 0x3d2618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d2618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d261c:
    // 0x3d261c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3d261cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_3d2620:
    // 0x3d2620: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3d2620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_3d2624:
    // 0x3d2624: 0xc04f26c  jal         func_13C9B0
label_3d2628:
    if (ctx->pc == 0x3D2628u) {
        ctx->pc = 0x3D2628u;
            // 0x3d2628: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x3D262Cu;
        goto label_3d262c;
    }
    ctx->pc = 0x3D2624u;
    SET_GPR_U32(ctx, 31, 0x3D262Cu);
    ctx->pc = 0x3D2628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2624u;
            // 0x3d2628: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D262Cu; }
        if (ctx->pc != 0x3D262Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D262Cu; }
        if (ctx->pc != 0x3D262Cu) { return; }
    }
    ctx->pc = 0x3D262Cu;
label_3d262c:
    // 0x3d262c: 0xc04c968  jal         func_1325A0
label_3d2630:
    if (ctx->pc == 0x3D2630u) {
        ctx->pc = 0x3D2630u;
            // 0x3d2630: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x3D2634u;
        goto label_3d2634;
    }
    ctx->pc = 0x3D262Cu;
    SET_GPR_U32(ctx, 31, 0x3D2634u);
    ctx->pc = 0x3D2630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D262Cu;
            // 0x3d2630: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2634u; }
        if (ctx->pc != 0x3D2634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2634u; }
        if (ctx->pc != 0x3D2634u) { return; }
    }
    ctx->pc = 0x3D2634u;
label_3d2634:
    // 0x3d2634: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d2634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3d2638:
    // 0x3d2638: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x3d2638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_3d263c:
    // 0x3d263c: 0xc04cc04  jal         func_133010
label_3d2640:
    if (ctx->pc == 0x3D2640u) {
        ctx->pc = 0x3D2640u;
            // 0x3d2640: 0x24a59300  addiu       $a1, $a1, -0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939392));
        ctx->pc = 0x3D2644u;
        goto label_3d2644;
    }
    ctx->pc = 0x3D263Cu;
    SET_GPR_U32(ctx, 31, 0x3D2644u);
    ctx->pc = 0x3D2640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D263Cu;
            // 0x3d2640: 0x24a59300  addiu       $a1, $a1, -0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2644u; }
        if (ctx->pc != 0x3D2644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2644u; }
        if (ctx->pc != 0x3D2644u) { return; }
    }
    ctx->pc = 0x3D2644u;
label_3d2644:
    // 0x3d2644: 0xae2001e0  sw          $zero, 0x1E0($s1)
    ctx->pc = 0x3d2644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
label_3d2648:
    // 0x3d2648: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d2648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d264c:
    // 0x3d264c: 0xae2001e4  sw          $zero, 0x1E4($s1)
    ctx->pc = 0x3d264cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
label_3d2650:
    // 0x3d2650: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d2650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d2654:
    // 0x3d2654: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x3d2654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
label_3d2658:
    // 0x3d2658: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x3d2658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_3d265c:
    // 0x3d265c: 0xa62001f0  sh          $zero, 0x1F0($s1)
    ctx->pc = 0x3d265cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 496), (uint16_t)GPR_U32(ctx, 0));
label_3d2660:
    // 0x3d2660: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3d2660u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3d2664:
    // 0x3d2664: 0xa62001f2  sh          $zero, 0x1F2($s1)
    ctx->pc = 0x3d2664u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 498), (uint16_t)GPR_U32(ctx, 0));
label_3d2668:
    // 0x3d2668: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3d2668u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3d266c:
    // 0x3d266c: 0xa62201f4  sh          $v0, 0x1F4($s1)
    ctx->pc = 0x3d266cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 500), (uint16_t)GPR_U32(ctx, 2));
label_3d2670:
    // 0x3d2670: 0xc04cbd8  jal         func_132F60
label_3d2674:
    if (ctx->pc == 0x3D2674u) {
        ctx->pc = 0x3D2674u;
            // 0x3d2674: 0xa62001f6  sh          $zero, 0x1F6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3D2678u;
        goto label_3d2678;
    }
    ctx->pc = 0x3D2670u;
    SET_GPR_U32(ctx, 31, 0x3D2678u);
    ctx->pc = 0x3D2674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2670u;
            // 0x3d2674: 0xa62001f6  sh          $zero, 0x1F6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2678u; }
        if (ctx->pc != 0x3D2678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2678u; }
        if (ctx->pc != 0x3D2678u) { return; }
    }
    ctx->pc = 0x3D2678u;
label_3d2678:
    // 0x3d2678: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d2678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d267c:
    // 0x3d267c: 0x262401b0  addiu       $a0, $s1, 0x1B0
    ctx->pc = 0x3d267cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_3d2680:
    // 0x3d2680: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3d2680u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3d2684:
    // 0x3d2684: 0xc04cbd8  jal         func_132F60
label_3d2688:
    if (ctx->pc == 0x3D2688u) {
        ctx->pc = 0x3D2688u;
            // 0x3d2688: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3D268Cu;
        goto label_3d268c;
    }
    ctx->pc = 0x3D2684u;
    SET_GPR_U32(ctx, 31, 0x3D268Cu);
    ctx->pc = 0x3D2688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2684u;
            // 0x3d2688: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D268Cu; }
        if (ctx->pc != 0x3D268Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D268Cu; }
        if (ctx->pc != 0x3D268Cu) { return; }
    }
    ctx->pc = 0x3D268Cu;
label_3d268c:
    // 0x3d268c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d268cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d2690:
    // 0x3d2690: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x3d2690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_3d2694:
    // 0x3d2694: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3d2694u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3d2698:
    // 0x3d2698: 0xc04cbd8  jal         func_132F60
label_3d269c:
    if (ctx->pc == 0x3D269Cu) {
        ctx->pc = 0x3D269Cu;
            // 0x3d269c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3D26A0u;
        goto label_3d26a0;
    }
    ctx->pc = 0x3D2698u;
    SET_GPR_U32(ctx, 31, 0x3D26A0u);
    ctx->pc = 0x3D269Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2698u;
            // 0x3d269c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D26A0u; }
        if (ctx->pc != 0x3D26A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D26A0u; }
        if (ctx->pc != 0x3D26A0u) { return; }
    }
    ctx->pc = 0x3D26A0u;
label_3d26a0:
    // 0x3d26a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d26a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d26a4:
    // 0x3d26a4: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x3d26a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_3d26a8:
    // 0x3d26a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3d26a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3d26ac:
    // 0x3d26ac: 0xc04cbd8  jal         func_132F60
label_3d26b0:
    if (ctx->pc == 0x3D26B0u) {
        ctx->pc = 0x3D26B0u;
            // 0x3d26b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3D26B4u;
        goto label_3d26b4;
    }
    ctx->pc = 0x3D26ACu;
    SET_GPR_U32(ctx, 31, 0x3D26B4u);
    ctx->pc = 0x3D26B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D26ACu;
            // 0x3d26b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D26B4u; }
        if (ctx->pc != 0x3D26B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D26B4u; }
        if (ctx->pc != 0x3D26B4u) { return; }
    }
    ctx->pc = 0x3D26B4u;
label_3d26b4:
    // 0x3d26b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d26b8:
    // 0x3d26b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d26b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d26bc:
    // 0x3d26bc: 0xae230218  sw          $v1, 0x218($s1)
    ctx->pc = 0x3d26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 3));
label_3d26c0:
    // 0x3d26c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d26c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d26c4:
    // 0x3d26c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d26c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d26c8:
    // 0x3d26c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d26c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d26cc:
    // 0x3d26cc: 0x3e00008  jr          $ra
label_3d26d0:
    if (ctx->pc == 0x3D26D0u) {
        ctx->pc = 0x3D26D0u;
            // 0x3d26d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D26D4u;
        goto label_3d26d4;
    }
    ctx->pc = 0x3D26CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D26D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D26CCu;
            // 0x3d26d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D26D4u;
label_3d26d4:
    // 0x3d26d4: 0x0  nop
    ctx->pc = 0x3d26d4u;
    // NOP
label_3d26d8:
    // 0x3d26d8: 0x0  nop
    ctx->pc = 0x3d26d8u;
    // NOP
label_3d26dc:
    // 0x3d26dc: 0x0  nop
    ctx->pc = 0x3d26dcu;
    // NOP
label_3d26e0:
    // 0x3d26e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d26e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d26e4:
    // 0x3d26e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d26e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d26e8:
    // 0x3d26e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d26e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d26ec:
    // 0x3d26ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d26ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d26f0:
    // 0x3d26f0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x3d26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_3d26f4:
    // 0x3d26f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d26f8:
    if (ctx->pc == 0x3D26F8u) {
        ctx->pc = 0x3D26F8u;
            // 0x3d26f8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3D26FCu;
        goto label_3d26fc;
    }
    ctx->pc = 0x3D26F4u;
    {
        const bool branch_taken_0x3d26f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d26f4) {
            ctx->pc = 0x3D26F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D26F4u;
            // 0x3d26f8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2710u;
            goto label_3d2710;
        }
    }
    ctx->pc = 0x3D26FCu;
label_3d26fc:
    // 0x3d26fc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3d26fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3d2700:
    // 0x3d2700: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d2700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d2704:
    // 0x3d2704: 0x320f809  jalr        $t9
label_3d2708:
    if (ctx->pc == 0x3D2708u) {
        ctx->pc = 0x3D2708u;
            // 0x3d2708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D270Cu;
        goto label_3d270c;
    }
    ctx->pc = 0x3D2704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D270Cu);
        ctx->pc = 0x3D2708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2704u;
            // 0x3d2708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D270Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D270Cu; }
            if (ctx->pc != 0x3D270Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3D270Cu;
label_3d270c:
    // 0x3d270c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3d270cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_3d2710:
    // 0x3d2710: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3d2710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d2714:
    // 0x3d2714: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d2718:
    if (ctx->pc == 0x3D2718u) {
        ctx->pc = 0x3D2718u;
            // 0x3d2718: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3D271Cu;
        goto label_3d271c;
    }
    ctx->pc = 0x3D2714u;
    {
        const bool branch_taken_0x3d2714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2714) {
            ctx->pc = 0x3D2718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2714u;
            // 0x3d2718: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2730u;
            goto label_3d2730;
        }
    }
    ctx->pc = 0x3D271Cu;
label_3d271c:
    // 0x3d271c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d271cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d2720:
    // 0x3d2720: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d2720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d2724:
    // 0x3d2724: 0x320f809  jalr        $t9
label_3d2728:
    if (ctx->pc == 0x3D2728u) {
        ctx->pc = 0x3D2728u;
            // 0x3d2728: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D272Cu;
        goto label_3d272c;
    }
    ctx->pc = 0x3D2724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D272Cu);
        ctx->pc = 0x3D2728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2724u;
            // 0x3d2728: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D272Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D272Cu; }
            if (ctx->pc != 0x3D272Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3D272Cu;
label_3d272c:
    // 0x3d272c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3d272cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3d2730:
    // 0x3d2730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d2730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2734:
    // 0x3d2734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d2738:
    // 0x3d2738: 0x3e00008  jr          $ra
label_3d273c:
    if (ctx->pc == 0x3D273Cu) {
        ctx->pc = 0x3D273Cu;
            // 0x3d273c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D2740u;
        goto label_fallthrough_0x3d2738;
    }
    ctx->pc = 0x3D2738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D273Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2738u;
            // 0x3d273c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3d2738:
    ctx->pc = 0x3D2740u;
}
