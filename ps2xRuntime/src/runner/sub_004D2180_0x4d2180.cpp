#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D2180
// Address: 0x4d2180 - 0x4d2660
void sub_004D2180_0x4d2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2180_0x4d2180");
#endif

    switch (ctx->pc) {
        case 0x4d2180u: goto label_4d2180;
        case 0x4d2184u: goto label_4d2184;
        case 0x4d2188u: goto label_4d2188;
        case 0x4d218cu: goto label_4d218c;
        case 0x4d2190u: goto label_4d2190;
        case 0x4d2194u: goto label_4d2194;
        case 0x4d2198u: goto label_4d2198;
        case 0x4d219cu: goto label_4d219c;
        case 0x4d21a0u: goto label_4d21a0;
        case 0x4d21a4u: goto label_4d21a4;
        case 0x4d21a8u: goto label_4d21a8;
        case 0x4d21acu: goto label_4d21ac;
        case 0x4d21b0u: goto label_4d21b0;
        case 0x4d21b4u: goto label_4d21b4;
        case 0x4d21b8u: goto label_4d21b8;
        case 0x4d21bcu: goto label_4d21bc;
        case 0x4d21c0u: goto label_4d21c0;
        case 0x4d21c4u: goto label_4d21c4;
        case 0x4d21c8u: goto label_4d21c8;
        case 0x4d21ccu: goto label_4d21cc;
        case 0x4d21d0u: goto label_4d21d0;
        case 0x4d21d4u: goto label_4d21d4;
        case 0x4d21d8u: goto label_4d21d8;
        case 0x4d21dcu: goto label_4d21dc;
        case 0x4d21e0u: goto label_4d21e0;
        case 0x4d21e4u: goto label_4d21e4;
        case 0x4d21e8u: goto label_4d21e8;
        case 0x4d21ecu: goto label_4d21ec;
        case 0x4d21f0u: goto label_4d21f0;
        case 0x4d21f4u: goto label_4d21f4;
        case 0x4d21f8u: goto label_4d21f8;
        case 0x4d21fcu: goto label_4d21fc;
        case 0x4d2200u: goto label_4d2200;
        case 0x4d2204u: goto label_4d2204;
        case 0x4d2208u: goto label_4d2208;
        case 0x4d220cu: goto label_4d220c;
        case 0x4d2210u: goto label_4d2210;
        case 0x4d2214u: goto label_4d2214;
        case 0x4d2218u: goto label_4d2218;
        case 0x4d221cu: goto label_4d221c;
        case 0x4d2220u: goto label_4d2220;
        case 0x4d2224u: goto label_4d2224;
        case 0x4d2228u: goto label_4d2228;
        case 0x4d222cu: goto label_4d222c;
        case 0x4d2230u: goto label_4d2230;
        case 0x4d2234u: goto label_4d2234;
        case 0x4d2238u: goto label_4d2238;
        case 0x4d223cu: goto label_4d223c;
        case 0x4d2240u: goto label_4d2240;
        case 0x4d2244u: goto label_4d2244;
        case 0x4d2248u: goto label_4d2248;
        case 0x4d224cu: goto label_4d224c;
        case 0x4d2250u: goto label_4d2250;
        case 0x4d2254u: goto label_4d2254;
        case 0x4d2258u: goto label_4d2258;
        case 0x4d225cu: goto label_4d225c;
        case 0x4d2260u: goto label_4d2260;
        case 0x4d2264u: goto label_4d2264;
        case 0x4d2268u: goto label_4d2268;
        case 0x4d226cu: goto label_4d226c;
        case 0x4d2270u: goto label_4d2270;
        case 0x4d2274u: goto label_4d2274;
        case 0x4d2278u: goto label_4d2278;
        case 0x4d227cu: goto label_4d227c;
        case 0x4d2280u: goto label_4d2280;
        case 0x4d2284u: goto label_4d2284;
        case 0x4d2288u: goto label_4d2288;
        case 0x4d228cu: goto label_4d228c;
        case 0x4d2290u: goto label_4d2290;
        case 0x4d2294u: goto label_4d2294;
        case 0x4d2298u: goto label_4d2298;
        case 0x4d229cu: goto label_4d229c;
        case 0x4d22a0u: goto label_4d22a0;
        case 0x4d22a4u: goto label_4d22a4;
        case 0x4d22a8u: goto label_4d22a8;
        case 0x4d22acu: goto label_4d22ac;
        case 0x4d22b0u: goto label_4d22b0;
        case 0x4d22b4u: goto label_4d22b4;
        case 0x4d22b8u: goto label_4d22b8;
        case 0x4d22bcu: goto label_4d22bc;
        case 0x4d22c0u: goto label_4d22c0;
        case 0x4d22c4u: goto label_4d22c4;
        case 0x4d22c8u: goto label_4d22c8;
        case 0x4d22ccu: goto label_4d22cc;
        case 0x4d22d0u: goto label_4d22d0;
        case 0x4d22d4u: goto label_4d22d4;
        case 0x4d22d8u: goto label_4d22d8;
        case 0x4d22dcu: goto label_4d22dc;
        case 0x4d22e0u: goto label_4d22e0;
        case 0x4d22e4u: goto label_4d22e4;
        case 0x4d22e8u: goto label_4d22e8;
        case 0x4d22ecu: goto label_4d22ec;
        case 0x4d22f0u: goto label_4d22f0;
        case 0x4d22f4u: goto label_4d22f4;
        case 0x4d22f8u: goto label_4d22f8;
        case 0x4d22fcu: goto label_4d22fc;
        case 0x4d2300u: goto label_4d2300;
        case 0x4d2304u: goto label_4d2304;
        case 0x4d2308u: goto label_4d2308;
        case 0x4d230cu: goto label_4d230c;
        case 0x4d2310u: goto label_4d2310;
        case 0x4d2314u: goto label_4d2314;
        case 0x4d2318u: goto label_4d2318;
        case 0x4d231cu: goto label_4d231c;
        case 0x4d2320u: goto label_4d2320;
        case 0x4d2324u: goto label_4d2324;
        case 0x4d2328u: goto label_4d2328;
        case 0x4d232cu: goto label_4d232c;
        case 0x4d2330u: goto label_4d2330;
        case 0x4d2334u: goto label_4d2334;
        case 0x4d2338u: goto label_4d2338;
        case 0x4d233cu: goto label_4d233c;
        case 0x4d2340u: goto label_4d2340;
        case 0x4d2344u: goto label_4d2344;
        case 0x4d2348u: goto label_4d2348;
        case 0x4d234cu: goto label_4d234c;
        case 0x4d2350u: goto label_4d2350;
        case 0x4d2354u: goto label_4d2354;
        case 0x4d2358u: goto label_4d2358;
        case 0x4d235cu: goto label_4d235c;
        case 0x4d2360u: goto label_4d2360;
        case 0x4d2364u: goto label_4d2364;
        case 0x4d2368u: goto label_4d2368;
        case 0x4d236cu: goto label_4d236c;
        case 0x4d2370u: goto label_4d2370;
        case 0x4d2374u: goto label_4d2374;
        case 0x4d2378u: goto label_4d2378;
        case 0x4d237cu: goto label_4d237c;
        case 0x4d2380u: goto label_4d2380;
        case 0x4d2384u: goto label_4d2384;
        case 0x4d2388u: goto label_4d2388;
        case 0x4d238cu: goto label_4d238c;
        case 0x4d2390u: goto label_4d2390;
        case 0x4d2394u: goto label_4d2394;
        case 0x4d2398u: goto label_4d2398;
        case 0x4d239cu: goto label_4d239c;
        case 0x4d23a0u: goto label_4d23a0;
        case 0x4d23a4u: goto label_4d23a4;
        case 0x4d23a8u: goto label_4d23a8;
        case 0x4d23acu: goto label_4d23ac;
        case 0x4d23b0u: goto label_4d23b0;
        case 0x4d23b4u: goto label_4d23b4;
        case 0x4d23b8u: goto label_4d23b8;
        case 0x4d23bcu: goto label_4d23bc;
        case 0x4d23c0u: goto label_4d23c0;
        case 0x4d23c4u: goto label_4d23c4;
        case 0x4d23c8u: goto label_4d23c8;
        case 0x4d23ccu: goto label_4d23cc;
        case 0x4d23d0u: goto label_4d23d0;
        case 0x4d23d4u: goto label_4d23d4;
        case 0x4d23d8u: goto label_4d23d8;
        case 0x4d23dcu: goto label_4d23dc;
        case 0x4d23e0u: goto label_4d23e0;
        case 0x4d23e4u: goto label_4d23e4;
        case 0x4d23e8u: goto label_4d23e8;
        case 0x4d23ecu: goto label_4d23ec;
        case 0x4d23f0u: goto label_4d23f0;
        case 0x4d23f4u: goto label_4d23f4;
        case 0x4d23f8u: goto label_4d23f8;
        case 0x4d23fcu: goto label_4d23fc;
        case 0x4d2400u: goto label_4d2400;
        case 0x4d2404u: goto label_4d2404;
        case 0x4d2408u: goto label_4d2408;
        case 0x4d240cu: goto label_4d240c;
        case 0x4d2410u: goto label_4d2410;
        case 0x4d2414u: goto label_4d2414;
        case 0x4d2418u: goto label_4d2418;
        case 0x4d241cu: goto label_4d241c;
        case 0x4d2420u: goto label_4d2420;
        case 0x4d2424u: goto label_4d2424;
        case 0x4d2428u: goto label_4d2428;
        case 0x4d242cu: goto label_4d242c;
        case 0x4d2430u: goto label_4d2430;
        case 0x4d2434u: goto label_4d2434;
        case 0x4d2438u: goto label_4d2438;
        case 0x4d243cu: goto label_4d243c;
        case 0x4d2440u: goto label_4d2440;
        case 0x4d2444u: goto label_4d2444;
        case 0x4d2448u: goto label_4d2448;
        case 0x4d244cu: goto label_4d244c;
        case 0x4d2450u: goto label_4d2450;
        case 0x4d2454u: goto label_4d2454;
        case 0x4d2458u: goto label_4d2458;
        case 0x4d245cu: goto label_4d245c;
        case 0x4d2460u: goto label_4d2460;
        case 0x4d2464u: goto label_4d2464;
        case 0x4d2468u: goto label_4d2468;
        case 0x4d246cu: goto label_4d246c;
        case 0x4d2470u: goto label_4d2470;
        case 0x4d2474u: goto label_4d2474;
        case 0x4d2478u: goto label_4d2478;
        case 0x4d247cu: goto label_4d247c;
        case 0x4d2480u: goto label_4d2480;
        case 0x4d2484u: goto label_4d2484;
        case 0x4d2488u: goto label_4d2488;
        case 0x4d248cu: goto label_4d248c;
        case 0x4d2490u: goto label_4d2490;
        case 0x4d2494u: goto label_4d2494;
        case 0x4d2498u: goto label_4d2498;
        case 0x4d249cu: goto label_4d249c;
        case 0x4d24a0u: goto label_4d24a0;
        case 0x4d24a4u: goto label_4d24a4;
        case 0x4d24a8u: goto label_4d24a8;
        case 0x4d24acu: goto label_4d24ac;
        case 0x4d24b0u: goto label_4d24b0;
        case 0x4d24b4u: goto label_4d24b4;
        case 0x4d24b8u: goto label_4d24b8;
        case 0x4d24bcu: goto label_4d24bc;
        case 0x4d24c0u: goto label_4d24c0;
        case 0x4d24c4u: goto label_4d24c4;
        case 0x4d24c8u: goto label_4d24c8;
        case 0x4d24ccu: goto label_4d24cc;
        case 0x4d24d0u: goto label_4d24d0;
        case 0x4d24d4u: goto label_4d24d4;
        case 0x4d24d8u: goto label_4d24d8;
        case 0x4d24dcu: goto label_4d24dc;
        case 0x4d24e0u: goto label_4d24e0;
        case 0x4d24e4u: goto label_4d24e4;
        case 0x4d24e8u: goto label_4d24e8;
        case 0x4d24ecu: goto label_4d24ec;
        case 0x4d24f0u: goto label_4d24f0;
        case 0x4d24f4u: goto label_4d24f4;
        case 0x4d24f8u: goto label_4d24f8;
        case 0x4d24fcu: goto label_4d24fc;
        case 0x4d2500u: goto label_4d2500;
        case 0x4d2504u: goto label_4d2504;
        case 0x4d2508u: goto label_4d2508;
        case 0x4d250cu: goto label_4d250c;
        case 0x4d2510u: goto label_4d2510;
        case 0x4d2514u: goto label_4d2514;
        case 0x4d2518u: goto label_4d2518;
        case 0x4d251cu: goto label_4d251c;
        case 0x4d2520u: goto label_4d2520;
        case 0x4d2524u: goto label_4d2524;
        case 0x4d2528u: goto label_4d2528;
        case 0x4d252cu: goto label_4d252c;
        case 0x4d2530u: goto label_4d2530;
        case 0x4d2534u: goto label_4d2534;
        case 0x4d2538u: goto label_4d2538;
        case 0x4d253cu: goto label_4d253c;
        case 0x4d2540u: goto label_4d2540;
        case 0x4d2544u: goto label_4d2544;
        case 0x4d2548u: goto label_4d2548;
        case 0x4d254cu: goto label_4d254c;
        case 0x4d2550u: goto label_4d2550;
        case 0x4d2554u: goto label_4d2554;
        case 0x4d2558u: goto label_4d2558;
        case 0x4d255cu: goto label_4d255c;
        case 0x4d2560u: goto label_4d2560;
        case 0x4d2564u: goto label_4d2564;
        case 0x4d2568u: goto label_4d2568;
        case 0x4d256cu: goto label_4d256c;
        case 0x4d2570u: goto label_4d2570;
        case 0x4d2574u: goto label_4d2574;
        case 0x4d2578u: goto label_4d2578;
        case 0x4d257cu: goto label_4d257c;
        case 0x4d2580u: goto label_4d2580;
        case 0x4d2584u: goto label_4d2584;
        case 0x4d2588u: goto label_4d2588;
        case 0x4d258cu: goto label_4d258c;
        case 0x4d2590u: goto label_4d2590;
        case 0x4d2594u: goto label_4d2594;
        case 0x4d2598u: goto label_4d2598;
        case 0x4d259cu: goto label_4d259c;
        case 0x4d25a0u: goto label_4d25a0;
        case 0x4d25a4u: goto label_4d25a4;
        case 0x4d25a8u: goto label_4d25a8;
        case 0x4d25acu: goto label_4d25ac;
        case 0x4d25b0u: goto label_4d25b0;
        case 0x4d25b4u: goto label_4d25b4;
        case 0x4d25b8u: goto label_4d25b8;
        case 0x4d25bcu: goto label_4d25bc;
        case 0x4d25c0u: goto label_4d25c0;
        case 0x4d25c4u: goto label_4d25c4;
        case 0x4d25c8u: goto label_4d25c8;
        case 0x4d25ccu: goto label_4d25cc;
        case 0x4d25d0u: goto label_4d25d0;
        case 0x4d25d4u: goto label_4d25d4;
        case 0x4d25d8u: goto label_4d25d8;
        case 0x4d25dcu: goto label_4d25dc;
        case 0x4d25e0u: goto label_4d25e0;
        case 0x4d25e4u: goto label_4d25e4;
        case 0x4d25e8u: goto label_4d25e8;
        case 0x4d25ecu: goto label_4d25ec;
        case 0x4d25f0u: goto label_4d25f0;
        case 0x4d25f4u: goto label_4d25f4;
        case 0x4d25f8u: goto label_4d25f8;
        case 0x4d25fcu: goto label_4d25fc;
        case 0x4d2600u: goto label_4d2600;
        case 0x4d2604u: goto label_4d2604;
        case 0x4d2608u: goto label_4d2608;
        case 0x4d260cu: goto label_4d260c;
        case 0x4d2610u: goto label_4d2610;
        case 0x4d2614u: goto label_4d2614;
        case 0x4d2618u: goto label_4d2618;
        case 0x4d261cu: goto label_4d261c;
        case 0x4d2620u: goto label_4d2620;
        case 0x4d2624u: goto label_4d2624;
        case 0x4d2628u: goto label_4d2628;
        case 0x4d262cu: goto label_4d262c;
        case 0x4d2630u: goto label_4d2630;
        case 0x4d2634u: goto label_4d2634;
        case 0x4d2638u: goto label_4d2638;
        case 0x4d263cu: goto label_4d263c;
        case 0x4d2640u: goto label_4d2640;
        case 0x4d2644u: goto label_4d2644;
        case 0x4d2648u: goto label_4d2648;
        case 0x4d264cu: goto label_4d264c;
        case 0x4d2650u: goto label_4d2650;
        case 0x4d2654u: goto label_4d2654;
        case 0x4d2658u: goto label_4d2658;
        case 0x4d265cu: goto label_4d265c;
        default: break;
    }

    ctx->pc = 0x4d2180u;

label_4d2180:
    // 0x4d2180: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4d2180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4d2184:
    // 0x4d2184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d2184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d2188:
    // 0x4d2188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d2188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d218c:
    // 0x4d218c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d218cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d2190:
    // 0x4d2190: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x4d2190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_4d2194:
    // 0x4d2194: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_4d2198:
    if (ctx->pc == 0x4D2198u) {
        ctx->pc = 0x4D2198u;
            // 0x4d2198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D219Cu;
        goto label_4d219c;
    }
    ctx->pc = 0x4D2194u;
    {
        const bool branch_taken_0x4d2194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D2198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2194u;
            // 0x4d2198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2194) {
            ctx->pc = 0x4D21A8u;
            goto label_4d21a8;
        }
    }
    ctx->pc = 0x4D219Cu;
label_4d219c:
    // 0x4d219c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4d219cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d21a0:
    // 0x4d21a0: 0x1000005f  b           . + 4 + (0x5F << 2)
label_4d21a4:
    if (ctx->pc == 0x4D21A4u) {
        ctx->pc = 0x4D21A4u;
            // 0x4d21a4: 0xae0300e8  sw          $v1, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
        ctx->pc = 0x4D21A8u;
        goto label_4d21a8;
    }
    ctx->pc = 0x4D21A0u;
    {
        const bool branch_taken_0x4d21a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D21A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D21A0u;
            // 0x4d21a4: 0xae0300e8  sw          $v1, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d21a0) {
            ctx->pc = 0x4D2320u;
            goto label_4d2320;
        }
    }
    ctx->pc = 0x4D21A8u;
label_4d21a8:
    // 0x4d21a8: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x4d21a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_4d21ac:
    // 0x4d21ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d21acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d21b0:
    // 0x4d21b0: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
label_4d21b4:
    if (ctx->pc == 0x4D21B4u) {
        ctx->pc = 0x4D21B4u;
            // 0x4d21b4: 0xc6010110  lwc1        $f1, 0x110($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4D21B8u;
        goto label_4d21b8;
    }
    ctx->pc = 0x4D21B0u;
    {
        const bool branch_taken_0x4d21b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d21b0) {
            ctx->pc = 0x4D21B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D21B0u;
            // 0x4d21b4: 0xc6010110  lwc1        $f1, 0x110($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D21DCu;
            goto label_4d21dc;
        }
    }
    ctx->pc = 0x4D21B8u;
label_4d21b8:
    // 0x4d21b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4d21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d21bc:
    // 0x4d21bc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4d21c0:
    if (ctx->pc == 0x4D21C0u) {
        ctx->pc = 0x4D21C4u;
        goto label_4d21c4;
    }
    ctx->pc = 0x4D21BCu;
    {
        const bool branch_taken_0x4d21bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d21bc) {
            ctx->pc = 0x4D21CCu;
            goto label_4d21cc;
        }
    }
    ctx->pc = 0x4D21C4u;
label_4d21c4:
    // 0x4d21c4: 0x10000057  b           . + 4 + (0x57 << 2)
label_4d21c8:
    if (ctx->pc == 0x4D21C8u) {
        ctx->pc = 0x4D21C8u;
            // 0x4d21c8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4D21CCu;
        goto label_4d21cc;
    }
    ctx->pc = 0x4D21C4u;
    {
        const bool branch_taken_0x4d21c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D21C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D21C4u;
            // 0x4d21c8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d21c4) {
            ctx->pc = 0x4D2324u;
            goto label_4d2324;
        }
    }
    ctx->pc = 0x4D21CCu;
label_4d21cc:
    // 0x4d21cc: 0xc134810  jal         func_4D2040
label_4d21d0:
    if (ctx->pc == 0x4D21D0u) {
        ctx->pc = 0x4D21D4u;
        goto label_4d21d4;
    }
    ctx->pc = 0x4D21CCu;
    SET_GPR_U32(ctx, 31, 0x4D21D4u);
    ctx->pc = 0x4D2040u;
    if (runtime->hasFunction(0x4D2040u)) {
        auto targetFn = runtime->lookupFunction(0x4D2040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D21D4u; }
        if (ctx->pc != 0x4D21D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D2040_0x4d2040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D21D4u; }
        if (ctx->pc != 0x4D21D4u) { return; }
    }
    ctx->pc = 0x4D21D4u;
label_4d21d4:
    // 0x4d21d4: 0x10000052  b           . + 4 + (0x52 << 2)
label_4d21d8:
    if (ctx->pc == 0x4D21D8u) {
        ctx->pc = 0x4D21DCu;
        goto label_4d21dc;
    }
    ctx->pc = 0x4D21D4u;
    {
        const bool branch_taken_0x4d21d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d21d4) {
            ctx->pc = 0x4D2320u;
            goto label_4d2320;
        }
    }
    ctx->pc = 0x4D21DCu;
label_4d21dc:
    // 0x4d21dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4d21dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d21e0:
    // 0x4d21e0: 0x0  nop
    ctx->pc = 0x4d21e0u;
    // NOP
label_4d21e4:
    // 0x4d21e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4d21e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d21e8:
    // 0x4d21e8: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
label_4d21ec:
    if (ctx->pc == 0x4D21ECu) {
        ctx->pc = 0x4D21F0u;
        goto label_4d21f0;
    }
    ctx->pc = 0x4D21E8u;
    {
        const bool branch_taken_0x4d21e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d21e8) {
            ctx->pc = 0x4D2320u;
            goto label_4d2320;
        }
    }
    ctx->pc = 0x4D21F0u;
label_4d21f0:
    // 0x4d21f0: 0xc088b74  jal         func_222DD0
label_4d21f4:
    if (ctx->pc == 0x4D21F4u) {
        ctx->pc = 0x4D21F4u;
            // 0x4d21f4: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4D21F8u;
        goto label_4d21f8;
    }
    ctx->pc = 0x4D21F0u;
    SET_GPR_U32(ctx, 31, 0x4D21F8u);
    ctx->pc = 0x4D21F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D21F0u;
            // 0x4d21f4: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D21F8u; }
        if (ctx->pc != 0x4D21F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D21F8u; }
        if (ctx->pc != 0x4D21F8u) { return; }
    }
    ctx->pc = 0x4D21F8u;
label_4d21f8:
    // 0x4d21f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4d21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4d21fc:
    // 0x4d21fc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4d21fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4d2200:
    // 0x4d2200: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x4d2200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4d2204:
    // 0x4d2204: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x4d2204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d2208:
    // 0x4d2208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4d2208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d220c:
    // 0x4d220c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4d220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d2210:
    // 0x4d2210: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4d2210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4d2214:
    // 0x4d2214: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4d2214u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4d2218:
    // 0x4d2218: 0xe6010110  swc1        $f1, 0x110($s0)
    ctx->pc = 0x4d2218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_4d221c:
    // 0x4d221c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x4d221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d2220:
    // 0x4d2220: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4d2220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4d2224:
    // 0x4d2224: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x4d2224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d2228:
    // 0x4d2228: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x4d2228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d222c:
    // 0x4d222c: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x4d222cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_4d2230:
    // 0x4d2230: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x4d2230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_4d2234:
    // 0x4d2234: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x4d2234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d2238:
    // 0x4d2238: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x4d2238u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_4d223c:
    // 0x4d223c: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x4d223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d2240:
    // 0x4d2240: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x4d2240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_4d2244:
    // 0x4d2244: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x4d2244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d2248:
    // 0x4d2248: 0xc6030118  lwc1        $f3, 0x118($s0)
    ctx->pc = 0x4d2248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d224c:
    // 0x4d224c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x4d224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4d2250:
    // 0x4d2250: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4d2250u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4d2254:
    // 0x4d2254: 0xc7ae00a8  lwc1        $f14, 0xA8($sp)
    ctx->pc = 0x4d2254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4d2258:
    // 0x4d2258: 0xc04cbd8  jal         func_132F60
label_4d225c:
    if (ctx->pc == 0x4D225Cu) {
        ctx->pc = 0x4D225Cu;
            // 0x4d225c: 0x46021b5c  madd.s      $f13, $f3, $f2 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->pc = 0x4D2260u;
        goto label_4d2260;
    }
    ctx->pc = 0x4D2258u;
    SET_GPR_U32(ctx, 31, 0x4D2260u);
    ctx->pc = 0x4D225Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2258u;
            // 0x4d225c: 0x46021b5c  madd.s      $f13, $f3, $f2 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2260u; }
        if (ctx->pc != 0x4D2260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2260u; }
        if (ctx->pc != 0x4D2260u) { return; }
    }
    ctx->pc = 0x4D2260u;
label_4d2260:
    // 0x4d2260: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4d2260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d2264:
    // 0x4d2264: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4d2264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4d2268:
    // 0x4d2268: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4d2268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4d226c:
    // 0x4d226c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4d226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4d2270:
    // 0x4d2270: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x4d2270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4d2274:
    // 0x4d2274: 0xc089688  jal         func_225A20
label_4d2278:
    if (ctx->pc == 0x4D2278u) {
        ctx->pc = 0x4D2278u;
            // 0x4d2278: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x4D227Cu;
        goto label_4d227c;
    }
    ctx->pc = 0x4D2274u;
    SET_GPR_U32(ctx, 31, 0x4D227Cu);
    ctx->pc = 0x4D2278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2274u;
            // 0x4d2278: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D227Cu; }
        if (ctx->pc != 0x4D227Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D227Cu; }
        if (ctx->pc != 0x4D227Cu) { return; }
    }
    ctx->pc = 0x4D227Cu;
label_4d227c:
    // 0x4d227c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4d227cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4d2280:
    // 0x4d2280: 0xc0a3828  jal         func_28E0A0
label_4d2284:
    if (ctx->pc == 0x4D2284u) {
        ctx->pc = 0x4D2284u;
            // 0x4d2284: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4D2288u;
        goto label_4d2288;
    }
    ctx->pc = 0x4D2280u;
    SET_GPR_U32(ctx, 31, 0x4D2288u);
    ctx->pc = 0x4D2284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2280u;
            // 0x4d2284: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2288u; }
        if (ctx->pc != 0x4D2288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2288u; }
        if (ctx->pc != 0x4D2288u) { return; }
    }
    ctx->pc = 0x4D2288u;
label_4d2288:
    // 0x4d2288: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x4d2288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d228c:
    // 0x4d228c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4d228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4d2290:
    // 0x4d2290: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x4d2290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d2294:
    // 0x4d2294: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4d2294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4d2298:
    // 0x4d2298: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x4d2298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d229c:
    // 0x4d229c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4d229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_4d22a0:
    // 0x4d22a0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x4d22a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d22a4:
    // 0x4d22a4: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x4d22a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4d22a8:
    // 0x4d22a8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x4d22a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4d22ac:
    // 0x4d22ac: 0xc04c720  jal         func_131C80
label_4d22b0:
    if (ctx->pc == 0x4D22B0u) {
        ctx->pc = 0x4D22B0u;
            // 0x4d22b0: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x4D22B4u;
        goto label_4d22b4;
    }
    ctx->pc = 0x4D22ACu;
    SET_GPR_U32(ctx, 31, 0x4D22B4u);
    ctx->pc = 0x4D22B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D22ACu;
            // 0x4d22b0: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D22B4u; }
        if (ctx->pc != 0x4D22B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D22B4u; }
        if (ctx->pc != 0x4D22B4u) { return; }
    }
    ctx->pc = 0x4D22B4u;
label_4d22b4:
    // 0x4d22b4: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x4d22b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d22b8:
    // 0x4d22b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4d22b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d22bc:
    // 0x4d22bc: 0x0  nop
    ctx->pc = 0x4d22bcu;
    // NOP
label_4d22c0:
    // 0x4d22c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4d22c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d22c4:
    // 0x4d22c4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_4d22c8:
    if (ctx->pc == 0x4D22C8u) {
        ctx->pc = 0x4D22CCu;
        goto label_4d22cc;
    }
    ctx->pc = 0x4D22C4u;
    {
        const bool branch_taken_0x4d22c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d22c4) {
            ctx->pc = 0x4D2320u;
            goto label_4d2320;
        }
    }
    ctx->pc = 0x4D22CCu;
label_4d22cc:
    // 0x4d22cc: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x4d22ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_4d22d0:
    // 0x4d22d0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4d22d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4d22d4:
    // 0x4d22d4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x4d22d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4d22d8:
    // 0x4d22d8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x4d22d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4d22dc:
    // 0x4d22dc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x4d22dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_4d22e0:
    // 0x4d22e0: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4d22e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d22e4:
    // 0x4d22e4: 0xc088b74  jal         func_222DD0
label_4d22e8:
    if (ctx->pc == 0x4D22E8u) {
        ctx->pc = 0x4D22E8u;
            // 0x4d22e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D22ECu;
        goto label_4d22ec;
    }
    ctx->pc = 0x4D22E4u;
    SET_GPR_U32(ctx, 31, 0x4D22ECu);
    ctx->pc = 0x4D22E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D22E4u;
            // 0x4d22e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D22ECu; }
        if (ctx->pc != 0x4D22ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D22ECu; }
        if (ctx->pc != 0x4D22ECu) { return; }
    }
    ctx->pc = 0x4D22ECu;
label_4d22ec:
    // 0x4d22ec: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4d22ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4d22f0:
    // 0x4d22f0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4d22f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4d22f4:
    // 0x4d22f4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4d22f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4d22f8:
    // 0x4d22f8: 0x320f809  jalr        $t9
label_4d22fc:
    if (ctx->pc == 0x4D22FCu) {
        ctx->pc = 0x4D22FCu;
            // 0x4d22fc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4D2300u;
        goto label_4d2300;
    }
    ctx->pc = 0x4D22F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D2300u);
        ctx->pc = 0x4D22FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D22F8u;
            // 0x4d22fc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D2300u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D2300u; }
            if (ctx->pc != 0x4D2300u) { return; }
        }
        }
    }
    ctx->pc = 0x4D2300u;
label_4d2300:
    // 0x4d2300: 0x8e100050  lw          $s0, 0x50($s0)
    ctx->pc = 0x4d2300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d2304:
    // 0x4d2304: 0xc088b74  jal         func_222DD0
label_4d2308:
    if (ctx->pc == 0x4D2308u) {
        ctx->pc = 0x4D2308u;
            // 0x4d2308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D230Cu;
        goto label_4d230c;
    }
    ctx->pc = 0x4D2304u;
    SET_GPR_U32(ctx, 31, 0x4D230Cu);
    ctx->pc = 0x4D2308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2304u;
            // 0x4d2308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D230Cu; }
        if (ctx->pc != 0x4D230Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D230Cu; }
        if (ctx->pc != 0x4D230Cu) { return; }
    }
    ctx->pc = 0x4D230Cu;
label_4d230c:
    // 0x4d230c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4d230cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4d2310:
    // 0x4d2310: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4d2310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4d2314:
    // 0x4d2314: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d2314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d2318:
    // 0x4d2318: 0x320f809  jalr        $t9
label_4d231c:
    if (ctx->pc == 0x4D231Cu) {
        ctx->pc = 0x4D231Cu;
            // 0x4d231c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4D2320u;
        goto label_4d2320;
    }
    ctx->pc = 0x4D2318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D2320u);
        ctx->pc = 0x4D231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2318u;
            // 0x4d231c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D2320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D2320u; }
            if (ctx->pc != 0x4D2320u) { return; }
        }
        }
    }
    ctx->pc = 0x4D2320u;
label_4d2320:
    // 0x4d2320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d2320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d2324:
    // 0x4d2324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d2324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d2328:
    // 0x4d2328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d2328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d232c:
    // 0x4d232c: 0x3e00008  jr          $ra
label_4d2330:
    if (ctx->pc == 0x4D2330u) {
        ctx->pc = 0x4D2330u;
            // 0x4d2330: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4D2334u;
        goto label_4d2334;
    }
    ctx->pc = 0x4D232Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D232Cu;
            // 0x4d2330: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2334u;
label_4d2334:
    // 0x4d2334: 0x0  nop
    ctx->pc = 0x4d2334u;
    // NOP
label_4d2338:
    // 0x4d2338: 0x0  nop
    ctx->pc = 0x4d2338u;
    // NOP
label_4d233c:
    // 0x4d233c: 0x0  nop
    ctx->pc = 0x4d233cu;
    // NOP
label_4d2340:
    // 0x4d2340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d2340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d2344:
    // 0x4d2344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4d2344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4d2348:
    // 0x4d2348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4d2348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4d234c:
    // 0x4d234c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d2350:
    // 0x4d2350: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d2350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d2354:
    // 0x4d2354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d2354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d2358:
    // 0x4d2358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d2358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d235c:
    // 0x4d235c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d235cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d2360:
    // 0x4d2360: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4d2360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d2364:
    // 0x4d2364: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4d2368:
    if (ctx->pc == 0x4D2368u) {
        ctx->pc = 0x4D2368u;
            // 0x4d2368: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D236Cu;
        goto label_4d236c;
    }
    ctx->pc = 0x4D2364u;
    {
        const bool branch_taken_0x4d2364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2364u;
            // 0x4d2368: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2364) {
            ctx->pc = 0x4D23A8u;
            goto label_4d23a8;
        }
    }
    ctx->pc = 0x4D236Cu;
label_4d236c:
    // 0x4d236c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d236cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d2370:
    // 0x4d2370: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d2370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d2374:
    // 0x4d2374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d2374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d2378:
    // 0x4d2378: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4d2378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4d237c:
    // 0x4d237c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d2380:
    // 0x4d2380: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d2380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d2384:
    // 0x4d2384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d2384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d2388:
    // 0x4d2388: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4d2388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4d238c:
    // 0x4d238c: 0x320f809  jalr        $t9
label_4d2390:
    if (ctx->pc == 0x4D2390u) {
        ctx->pc = 0x4D2394u;
        goto label_4d2394;
    }
    ctx->pc = 0x4D238Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D2394u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D2394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D2394u; }
            if (ctx->pc != 0x4D2394u) { return; }
        }
        }
    }
    ctx->pc = 0x4D2394u;
label_4d2394:
    // 0x4d2394: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4d2394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4d2398:
    // 0x4d2398: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d2398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4d239c:
    // 0x4d239c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4d239cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d23a0:
    // 0x4d23a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4d23a4:
    if (ctx->pc == 0x4D23A4u) {
        ctx->pc = 0x4D23A4u;
            // 0x4d23a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4D23A8u;
        goto label_4d23a8;
    }
    ctx->pc = 0x4D23A0u;
    {
        const bool branch_taken_0x4d23a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D23A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D23A0u;
            // 0x4d23a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d23a0) {
            ctx->pc = 0x4D2378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d2378;
        }
    }
    ctx->pc = 0x4D23A8u;
label_4d23a8:
    // 0x4d23a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d23a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d23ac:
    // 0x4d23ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4d23acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4d23b0:
    // 0x4d23b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4d23b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d23b4:
    // 0x4d23b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d23b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d23b8:
    // 0x4d23b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d23b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d23bc:
    // 0x4d23bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d23bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d23c0:
    // 0x4d23c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d23c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d23c4:
    // 0x4d23c4: 0x3e00008  jr          $ra
label_4d23c8:
    if (ctx->pc == 0x4D23C8u) {
        ctx->pc = 0x4D23C8u;
            // 0x4d23c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D23CCu;
        goto label_4d23cc;
    }
    ctx->pc = 0x4D23C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D23C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D23C4u;
            // 0x4d23c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D23CCu;
label_4d23cc:
    // 0x4d23cc: 0x0  nop
    ctx->pc = 0x4d23ccu;
    // NOP
label_4d23d0:
    // 0x4d23d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d23d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d23d4:
    // 0x4d23d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d23d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d23d8:
    // 0x4d23d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d23d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d23dc:
    // 0x4d23dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4d23dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4d23e0:
    // 0x4d23e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d23e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d23e4:
    // 0x4d23e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4d23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d23e8:
    // 0x4d23e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d23e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d23ec:
    // 0x4d23ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4d23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4d23f0:
    // 0x4d23f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d23f4:
    // 0x4d23f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d23f8:
    // 0x4d23f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4d23f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4d23fc:
    // 0x4d23fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4d23fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d2400:
    // 0x4d2400: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d2400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4d2404:
    // 0x4d2404: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4d2404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4d2408:
    // 0x4d2408: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4d2408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4d240c:
    // 0x4d240c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4d240cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4d2410:
    // 0x4d2410: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4d2410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d2414:
    // 0x4d2414: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d2414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d2418:
    // 0x4d2418: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4d2418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4d241c:
    // 0x4d241c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4d241cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d2420:
    // 0x4d2420: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4d2420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4d2424:
    // 0x4d2424: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d2424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d2428:
    // 0x4d2428: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4d2428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d242c:
    // 0x4d242c: 0xc0a997c  jal         func_2A65F0
label_4d2430:
    if (ctx->pc == 0x4D2430u) {
        ctx->pc = 0x4D2430u;
            // 0x4d2430: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4D2434u;
        goto label_4d2434;
    }
    ctx->pc = 0x4D242Cu;
    SET_GPR_U32(ctx, 31, 0x4D2434u);
    ctx->pc = 0x4D2430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D242Cu;
            // 0x4d2430: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2434u; }
        if (ctx->pc != 0x4D2434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2434u; }
        if (ctx->pc != 0x4D2434u) { return; }
    }
    ctx->pc = 0x4D2434u;
label_4d2434:
    // 0x4d2434: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4d2434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4d2438:
    // 0x4d2438: 0xc0d879c  jal         func_361E70
label_4d243c:
    if (ctx->pc == 0x4D243Cu) {
        ctx->pc = 0x4D243Cu;
            // 0x4d243c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2440u;
        goto label_4d2440;
    }
    ctx->pc = 0x4D2438u;
    SET_GPR_U32(ctx, 31, 0x4D2440u);
    ctx->pc = 0x4D243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2438u;
            // 0x4d243c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2440u; }
        if (ctx->pc != 0x4D2440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2440u; }
        if (ctx->pc != 0x4D2440u) { return; }
    }
    ctx->pc = 0x4D2440u;
label_4d2440:
    // 0x4d2440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d2440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d2444:
    // 0x4d2444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d2444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d2448:
    // 0x4d2448: 0x3e00008  jr          $ra
label_4d244c:
    if (ctx->pc == 0x4D244Cu) {
        ctx->pc = 0x4D244Cu;
            // 0x4d244c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D2450u;
        goto label_4d2450;
    }
    ctx->pc = 0x4D2448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D244Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2448u;
            // 0x4d244c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2450u;
label_4d2450:
    // 0x4d2450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d2450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d2454:
    // 0x4d2454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d2454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d2458:
    // 0x4d2458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d2458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d245c:
    // 0x4d245c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4d245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4d2460:
    // 0x4d2460: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4d2464:
    if (ctx->pc == 0x4D2464u) {
        ctx->pc = 0x4D2464u;
            // 0x4d2464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2468u;
        goto label_4d2468;
    }
    ctx->pc = 0x4D2460u;
    {
        const bool branch_taken_0x4d2460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2460u;
            // 0x4d2464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2460) {
            ctx->pc = 0x4D2580u;
            goto label_4d2580;
        }
    }
    ctx->pc = 0x4D2468u;
label_4d2468:
    // 0x4d2468: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d2468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d246c:
    // 0x4d246c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4d2470:
    // 0x4d2470: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4d2470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4d2474:
    // 0x4d2474: 0xc075128  jal         func_1D44A0
label_4d2478:
    if (ctx->pc == 0x4D2478u) {
        ctx->pc = 0x4D2478u;
            // 0x4d2478: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4D247Cu;
        goto label_4d247c;
    }
    ctx->pc = 0x4D2474u;
    SET_GPR_U32(ctx, 31, 0x4D247Cu);
    ctx->pc = 0x4D2478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2474u;
            // 0x4d2478: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D247Cu; }
        if (ctx->pc != 0x4D247Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D247Cu; }
        if (ctx->pc != 0x4D247Cu) { return; }
    }
    ctx->pc = 0x4D247Cu;
label_4d247c:
    // 0x4d247c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4d247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d2480:
    // 0x4d2480: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d2480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d2484:
    // 0x4d2484: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4d2484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4d2488:
    // 0x4d2488: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4d2488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4d248c:
    // 0x4d248c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d248cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d2490:
    // 0x4d2490: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d2494:
    if (ctx->pc == 0x4D2494u) {
        ctx->pc = 0x4D2494u;
            // 0x4d2494: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4D2498u;
        goto label_4d2498;
    }
    ctx->pc = 0x4D2490u;
    {
        const bool branch_taken_0x4d2490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2490u;
            // 0x4d2494: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2490) {
            ctx->pc = 0x4D24A0u;
            goto label_4d24a0;
        }
    }
    ctx->pc = 0x4D2498u;
label_4d2498:
    // 0x4d2498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d2498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d249c:
    // 0x4d249c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4d249cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4d24a0:
    // 0x4d24a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d24a4:
    // 0x4d24a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d24a8:
    // 0x4d24a8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4d24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4d24ac:
    // 0x4d24ac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d24acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d24b0:
    // 0x4d24b0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d24b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d24b4:
    // 0x4d24b4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d24b8:
    if (ctx->pc == 0x4D24B8u) {
        ctx->pc = 0x4D24B8u;
            // 0x4d24b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D24BCu;
        goto label_4d24bc;
    }
    ctx->pc = 0x4D24B4u;
    {
        const bool branch_taken_0x4d24b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d24b4) {
            ctx->pc = 0x4D24B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D24B4u;
            // 0x4d24b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D24C8u;
            goto label_4d24c8;
        }
    }
    ctx->pc = 0x4D24BCu;
label_4d24bc:
    // 0x4d24bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d24c0:
    // 0x4d24c0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4d24c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4d24c4:
    // 0x4d24c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d24c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d24c8:
    // 0x4d24c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d24cc:
    // 0x4d24cc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4d24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4d24d0:
    // 0x4d24d0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d24d4:
    // 0x4d24d4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d24d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d24d8:
    // 0x4d24d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d24dc:
    if (ctx->pc == 0x4D24DCu) {
        ctx->pc = 0x4D24DCu;
            // 0x4d24dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4D24E0u;
        goto label_4d24e0;
    }
    ctx->pc = 0x4D24D8u;
    {
        const bool branch_taken_0x4d24d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d24d8) {
            ctx->pc = 0x4D24DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D24D8u;
            // 0x4d24dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D24ECu;
            goto label_4d24ec;
        }
    }
    ctx->pc = 0x4D24E0u;
label_4d24e0:
    // 0x4d24e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d24e4:
    // 0x4d24e4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4d24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4d24e8:
    // 0x4d24e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4d24e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d24ec:
    // 0x4d24ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d24ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d24f0:
    // 0x4d24f0: 0x320f809  jalr        $t9
label_4d24f4:
    if (ctx->pc == 0x4D24F4u) {
        ctx->pc = 0x4D24F4u;
            // 0x4d24f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D24F8u;
        goto label_4d24f8;
    }
    ctx->pc = 0x4D24F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D24F8u);
        ctx->pc = 0x4D24F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D24F0u;
            // 0x4d24f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D24F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D24F8u; }
            if (ctx->pc != 0x4D24F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4D24F8u;
label_4d24f8:
    // 0x4d24f8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d24fc:
    // 0x4d24fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d2500:
    // 0x4d2500: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4d2500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4d2504:
    // 0x4d2504: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d2504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d2508:
    // 0x4d2508: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d2508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d250c:
    // 0x4d250c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d250cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d2510:
    // 0x4d2510: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d2514:
    if (ctx->pc == 0x4D2514u) {
        ctx->pc = 0x4D2514u;
            // 0x4d2514: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4D2518u;
        goto label_4d2518;
    }
    ctx->pc = 0x4D2510u;
    {
        const bool branch_taken_0x4d2510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2510) {
            ctx->pc = 0x4D2514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2510u;
            // 0x4d2514: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D2524u;
            goto label_4d2524;
        }
    }
    ctx->pc = 0x4D2518u;
label_4d2518:
    // 0x4d2518: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d2518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d251c:
    // 0x4d251c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4d251cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4d2520:
    // 0x4d2520: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d2520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d2524:
    // 0x4d2524: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d2524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d2528:
    // 0x4d2528: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4d2528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4d252c:
    // 0x4d252c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d2530:
    // 0x4d2530: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d2530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d2534:
    // 0x4d2534: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d2534u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d2538:
    // 0x4d2538: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d253c:
    if (ctx->pc == 0x4D253Cu) {
        ctx->pc = 0x4D2540u;
        goto label_4d2540;
    }
    ctx->pc = 0x4D2538u;
    {
        const bool branch_taken_0x4d2538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2538) {
            ctx->pc = 0x4D2548u;
            goto label_4d2548;
        }
    }
    ctx->pc = 0x4D2540u;
label_4d2540:
    // 0x4d2540: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d2540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d2544:
    // 0x4d2544: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4d2544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4d2548:
    // 0x4d2548: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d2548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d254c:
    // 0x4d254c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4d254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4d2550:
    // 0x4d2550: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d2550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d2554:
    // 0x4d2554: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d2558:
    if (ctx->pc == 0x4D2558u) {
        ctx->pc = 0x4D255Cu;
        goto label_4d255c;
    }
    ctx->pc = 0x4D2554u;
    {
        const bool branch_taken_0x4d2554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2554) {
            ctx->pc = 0x4D2564u;
            goto label_4d2564;
        }
    }
    ctx->pc = 0x4D255Cu;
label_4d255c:
    // 0x4d255c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d255cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d2560:
    // 0x4d2560: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4d2560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4d2564:
    // 0x4d2564: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d2564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d2568:
    // 0x4d2568: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4d2568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4d256c:
    // 0x4d256c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d256cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d2570:
    // 0x4d2570: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d2574:
    if (ctx->pc == 0x4D2574u) {
        ctx->pc = 0x4D2574u;
            // 0x4d2574: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4D2578u;
        goto label_4d2578;
    }
    ctx->pc = 0x4D2570u;
    {
        const bool branch_taken_0x4d2570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2570) {
            ctx->pc = 0x4D2574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2570u;
            // 0x4d2574: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D2584u;
            goto label_4d2584;
        }
    }
    ctx->pc = 0x4D2578u;
label_4d2578:
    // 0x4d2578: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d2578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d257c:
    // 0x4d257c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4d257cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4d2580:
    // 0x4d2580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d2580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d2584:
    // 0x4d2584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d2584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d2588:
    // 0x4d2588: 0x3e00008  jr          $ra
label_4d258c:
    if (ctx->pc == 0x4D258Cu) {
        ctx->pc = 0x4D258Cu;
            // 0x4d258c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D2590u;
        goto label_4d2590;
    }
    ctx->pc = 0x4D2588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D258Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2588u;
            // 0x4d258c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2590u;
label_4d2590:
    // 0x4d2590: 0x81343b0  j           func_4D0EC0
label_4d2594:
    if (ctx->pc == 0x4D2594u) {
        ctx->pc = 0x4D2594u;
            // 0x4d2594: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4D2598u;
        goto label_4d2598;
    }
    ctx->pc = 0x4D2590u;
    ctx->pc = 0x4D2594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2590u;
            // 0x4d2594: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0EC0u;
    {
        auto targetFn = runtime->lookupFunction(0x4D0EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D2598u;
label_4d2598:
    // 0x4d2598: 0x0  nop
    ctx->pc = 0x4d2598u;
    // NOP
label_4d259c:
    // 0x4d259c: 0x0  nop
    ctx->pc = 0x4d259cu;
    // NOP
label_4d25a0:
    // 0x4d25a0: 0x8134514  j           func_4D1450
label_4d25a4:
    if (ctx->pc == 0x4D25A4u) {
        ctx->pc = 0x4D25A4u;
            // 0x4d25a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D25A8u;
        goto label_4d25a8;
    }
    ctx->pc = 0x4D25A0u;
    ctx->pc = 0x4D25A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D25A0u;
            // 0x4d25a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D1450u;
    {
        auto targetFn = runtime->lookupFunction(0x4D1450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D25A8u;
label_4d25a8:
    // 0x4d25a8: 0x0  nop
    ctx->pc = 0x4d25a8u;
    // NOP
label_4d25ac:
    // 0x4d25ac: 0x0  nop
    ctx->pc = 0x4d25acu;
    // NOP
label_4d25b0:
    // 0x4d25b0: 0x8134358  j           func_4D0D60
label_4d25b4:
    if (ctx->pc == 0x4D25B4u) {
        ctx->pc = 0x4D25B4u;
            // 0x4d25b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D25B8u;
        goto label_4d25b8;
    }
    ctx->pc = 0x4D25B0u;
    ctx->pc = 0x4D25B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D25B0u;
            // 0x4d25b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0D60u;
    if (runtime->hasFunction(0x4D0D60u)) {
        auto targetFn = runtime->lookupFunction(0x4D0D60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004D0D60_0x4d0d60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4D25B8u;
label_4d25b8:
    // 0x4d25b8: 0x0  nop
    ctx->pc = 0x4d25b8u;
    // NOP
label_4d25bc:
    // 0x4d25bc: 0x0  nop
    ctx->pc = 0x4d25bcu;
    // NOP
label_4d25c0:
    // 0x4d25c0: 0x8134334  j           func_4D0CD0
label_4d25c4:
    if (ctx->pc == 0x4D25C4u) {
        ctx->pc = 0x4D25C4u;
            // 0x4d25c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D25C8u;
        goto label_4d25c8;
    }
    ctx->pc = 0x4D25C0u;
    ctx->pc = 0x4D25C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D25C0u;
            // 0x4d25c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0CD0u;
    {
        auto targetFn = runtime->lookupFunction(0x4D0CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D25C8u;
label_4d25c8:
    // 0x4d25c8: 0x0  nop
    ctx->pc = 0x4d25c8u;
    // NOP
label_4d25cc:
    // 0x4d25cc: 0x0  nop
    ctx->pc = 0x4d25ccu;
    // NOP
label_4d25d0:
    // 0x4d25d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d25d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d25d4:
    // 0x4d25d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d25d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d25d8:
    // 0x4d25d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d25d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d25dc:
    // 0x4d25dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d25dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d25e0:
    // 0x4d25e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d25e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d25e4:
    // 0x4d25e4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4d25e8:
    if (ctx->pc == 0x4D25E8u) {
        ctx->pc = 0x4D25E8u;
            // 0x4d25e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D25ECu;
        goto label_4d25ec;
    }
    ctx->pc = 0x4D25E4u;
    {
        const bool branch_taken_0x4d25e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D25E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D25E4u;
            // 0x4d25e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d25e4) {
            ctx->pc = 0x4D2640u;
            goto label_4d2640;
        }
    }
    ctx->pc = 0x4D25ECu;
label_4d25ec:
    // 0x4d25ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d25f0:
    // 0x4d25f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d25f4:
    // 0x4d25f4: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4d25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4d25f8:
    // 0x4d25f8: 0x24422298  addiu       $v0, $v0, 0x2298
    ctx->pc = 0x4d25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8856));
label_4d25fc:
    // 0x4d25fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d25fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d2600:
    // 0x4d2600: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4d2604:
    if (ctx->pc == 0x4D2604u) {
        ctx->pc = 0x4D2604u;
            // 0x4d2604: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D2608u;
        goto label_4d2608;
    }
    ctx->pc = 0x4D2600u;
    {
        const bool branch_taken_0x4d2600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2600u;
            // 0x4d2604: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2600) {
            ctx->pc = 0x4D2628u;
            goto label_4d2628;
        }
    }
    ctx->pc = 0x4D2608u;
label_4d2608:
    // 0x4d2608: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d2608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d260c:
    // 0x4d260c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d260cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d2610:
    // 0x4d2610: 0x246323c0  addiu       $v1, $v1, 0x23C0
    ctx->pc = 0x4d2610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9152));
label_4d2614:
    // 0x4d2614: 0x244223f8  addiu       $v0, $v0, 0x23F8
    ctx->pc = 0x4d2614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9208));
label_4d2618:
    // 0x4d2618: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d2618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d261c:
    // 0x4d261c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d261cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d2620:
    // 0x4d2620: 0xc134998  jal         func_4D2660
label_4d2624:
    if (ctx->pc == 0x4D2624u) {
        ctx->pc = 0x4D2624u;
            // 0x4d2624: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D2628u;
        goto label_4d2628;
    }
    ctx->pc = 0x4D2620u;
    SET_GPR_U32(ctx, 31, 0x4D2628u);
    ctx->pc = 0x4D2624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2620u;
            // 0x4d2624: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D2660u;
    if (runtime->hasFunction(0x4D2660u)) {
        auto targetFn = runtime->lookupFunction(0x4D2660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2628u; }
        if (ctx->pc != 0x4D2628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D2660_0x4d2660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2628u; }
        if (ctx->pc != 0x4D2628u) { return; }
    }
    ctx->pc = 0x4D2628u;
label_4d2628:
    // 0x4d2628: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d2628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4d262c:
    // 0x4d262c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d262cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d2630:
    // 0x4d2630: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d2634:
    if (ctx->pc == 0x4D2634u) {
        ctx->pc = 0x4D2634u;
            // 0x4d2634: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2638u;
        goto label_4d2638;
    }
    ctx->pc = 0x4D2630u;
    {
        const bool branch_taken_0x4d2630 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d2630) {
            ctx->pc = 0x4D2634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2630u;
            // 0x4d2634: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D2644u;
            goto label_4d2644;
        }
    }
    ctx->pc = 0x4D2638u;
label_4d2638:
    // 0x4d2638: 0xc0400a8  jal         func_1002A0
label_4d263c:
    if (ctx->pc == 0x4D263Cu) {
        ctx->pc = 0x4D263Cu;
            // 0x4d263c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D2640u;
        goto label_4d2640;
    }
    ctx->pc = 0x4D2638u;
    SET_GPR_U32(ctx, 31, 0x4D2640u);
    ctx->pc = 0x4D263Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2638u;
            // 0x4d263c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2640u; }
        if (ctx->pc != 0x4D2640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2640u; }
        if (ctx->pc != 0x4D2640u) { return; }
    }
    ctx->pc = 0x4D2640u;
label_4d2640:
    // 0x4d2640: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d2640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d2644:
    // 0x4d2644: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d2644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d2648:
    // 0x4d2648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d2648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d264c:
    // 0x4d264c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d264cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d2650:
    // 0x4d2650: 0x3e00008  jr          $ra
label_4d2654:
    if (ctx->pc == 0x4D2654u) {
        ctx->pc = 0x4D2654u;
            // 0x4d2654: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D2658u;
        goto label_4d2658;
    }
    ctx->pc = 0x4D2650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2650u;
            // 0x4d2654: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2658u;
label_4d2658:
    // 0x4d2658: 0x0  nop
    ctx->pc = 0x4d2658u;
    // NOP
label_4d265c:
    // 0x4d265c: 0x0  nop
    ctx->pc = 0x4d265cu;
    // NOP
}
