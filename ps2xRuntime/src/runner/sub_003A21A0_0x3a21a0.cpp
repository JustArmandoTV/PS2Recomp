#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A21A0
// Address: 0x3a21a0 - 0x3a24b0
void sub_003A21A0_0x3a21a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A21A0_0x3a21a0");
#endif

    switch (ctx->pc) {
        case 0x3a21a0u: goto label_3a21a0;
        case 0x3a21a4u: goto label_3a21a4;
        case 0x3a21a8u: goto label_3a21a8;
        case 0x3a21acu: goto label_3a21ac;
        case 0x3a21b0u: goto label_3a21b0;
        case 0x3a21b4u: goto label_3a21b4;
        case 0x3a21b8u: goto label_3a21b8;
        case 0x3a21bcu: goto label_3a21bc;
        case 0x3a21c0u: goto label_3a21c0;
        case 0x3a21c4u: goto label_3a21c4;
        case 0x3a21c8u: goto label_3a21c8;
        case 0x3a21ccu: goto label_3a21cc;
        case 0x3a21d0u: goto label_3a21d0;
        case 0x3a21d4u: goto label_3a21d4;
        case 0x3a21d8u: goto label_3a21d8;
        case 0x3a21dcu: goto label_3a21dc;
        case 0x3a21e0u: goto label_3a21e0;
        case 0x3a21e4u: goto label_3a21e4;
        case 0x3a21e8u: goto label_3a21e8;
        case 0x3a21ecu: goto label_3a21ec;
        case 0x3a21f0u: goto label_3a21f0;
        case 0x3a21f4u: goto label_3a21f4;
        case 0x3a21f8u: goto label_3a21f8;
        case 0x3a21fcu: goto label_3a21fc;
        case 0x3a2200u: goto label_3a2200;
        case 0x3a2204u: goto label_3a2204;
        case 0x3a2208u: goto label_3a2208;
        case 0x3a220cu: goto label_3a220c;
        case 0x3a2210u: goto label_3a2210;
        case 0x3a2214u: goto label_3a2214;
        case 0x3a2218u: goto label_3a2218;
        case 0x3a221cu: goto label_3a221c;
        case 0x3a2220u: goto label_3a2220;
        case 0x3a2224u: goto label_3a2224;
        case 0x3a2228u: goto label_3a2228;
        case 0x3a222cu: goto label_3a222c;
        case 0x3a2230u: goto label_3a2230;
        case 0x3a2234u: goto label_3a2234;
        case 0x3a2238u: goto label_3a2238;
        case 0x3a223cu: goto label_3a223c;
        case 0x3a2240u: goto label_3a2240;
        case 0x3a2244u: goto label_3a2244;
        case 0x3a2248u: goto label_3a2248;
        case 0x3a224cu: goto label_3a224c;
        case 0x3a2250u: goto label_3a2250;
        case 0x3a2254u: goto label_3a2254;
        case 0x3a2258u: goto label_3a2258;
        case 0x3a225cu: goto label_3a225c;
        case 0x3a2260u: goto label_3a2260;
        case 0x3a2264u: goto label_3a2264;
        case 0x3a2268u: goto label_3a2268;
        case 0x3a226cu: goto label_3a226c;
        case 0x3a2270u: goto label_3a2270;
        case 0x3a2274u: goto label_3a2274;
        case 0x3a2278u: goto label_3a2278;
        case 0x3a227cu: goto label_3a227c;
        case 0x3a2280u: goto label_3a2280;
        case 0x3a2284u: goto label_3a2284;
        case 0x3a2288u: goto label_3a2288;
        case 0x3a228cu: goto label_3a228c;
        case 0x3a2290u: goto label_3a2290;
        case 0x3a2294u: goto label_3a2294;
        case 0x3a2298u: goto label_3a2298;
        case 0x3a229cu: goto label_3a229c;
        case 0x3a22a0u: goto label_3a22a0;
        case 0x3a22a4u: goto label_3a22a4;
        case 0x3a22a8u: goto label_3a22a8;
        case 0x3a22acu: goto label_3a22ac;
        case 0x3a22b0u: goto label_3a22b0;
        case 0x3a22b4u: goto label_3a22b4;
        case 0x3a22b8u: goto label_3a22b8;
        case 0x3a22bcu: goto label_3a22bc;
        case 0x3a22c0u: goto label_3a22c0;
        case 0x3a22c4u: goto label_3a22c4;
        case 0x3a22c8u: goto label_3a22c8;
        case 0x3a22ccu: goto label_3a22cc;
        case 0x3a22d0u: goto label_3a22d0;
        case 0x3a22d4u: goto label_3a22d4;
        case 0x3a22d8u: goto label_3a22d8;
        case 0x3a22dcu: goto label_3a22dc;
        case 0x3a22e0u: goto label_3a22e0;
        case 0x3a22e4u: goto label_3a22e4;
        case 0x3a22e8u: goto label_3a22e8;
        case 0x3a22ecu: goto label_3a22ec;
        case 0x3a22f0u: goto label_3a22f0;
        case 0x3a22f4u: goto label_3a22f4;
        case 0x3a22f8u: goto label_3a22f8;
        case 0x3a22fcu: goto label_3a22fc;
        case 0x3a2300u: goto label_3a2300;
        case 0x3a2304u: goto label_3a2304;
        case 0x3a2308u: goto label_3a2308;
        case 0x3a230cu: goto label_3a230c;
        case 0x3a2310u: goto label_3a2310;
        case 0x3a2314u: goto label_3a2314;
        case 0x3a2318u: goto label_3a2318;
        case 0x3a231cu: goto label_3a231c;
        case 0x3a2320u: goto label_3a2320;
        case 0x3a2324u: goto label_3a2324;
        case 0x3a2328u: goto label_3a2328;
        case 0x3a232cu: goto label_3a232c;
        case 0x3a2330u: goto label_3a2330;
        case 0x3a2334u: goto label_3a2334;
        case 0x3a2338u: goto label_3a2338;
        case 0x3a233cu: goto label_3a233c;
        case 0x3a2340u: goto label_3a2340;
        case 0x3a2344u: goto label_3a2344;
        case 0x3a2348u: goto label_3a2348;
        case 0x3a234cu: goto label_3a234c;
        case 0x3a2350u: goto label_3a2350;
        case 0x3a2354u: goto label_3a2354;
        case 0x3a2358u: goto label_3a2358;
        case 0x3a235cu: goto label_3a235c;
        case 0x3a2360u: goto label_3a2360;
        case 0x3a2364u: goto label_3a2364;
        case 0x3a2368u: goto label_3a2368;
        case 0x3a236cu: goto label_3a236c;
        case 0x3a2370u: goto label_3a2370;
        case 0x3a2374u: goto label_3a2374;
        case 0x3a2378u: goto label_3a2378;
        case 0x3a237cu: goto label_3a237c;
        case 0x3a2380u: goto label_3a2380;
        case 0x3a2384u: goto label_3a2384;
        case 0x3a2388u: goto label_3a2388;
        case 0x3a238cu: goto label_3a238c;
        case 0x3a2390u: goto label_3a2390;
        case 0x3a2394u: goto label_3a2394;
        case 0x3a2398u: goto label_3a2398;
        case 0x3a239cu: goto label_3a239c;
        case 0x3a23a0u: goto label_3a23a0;
        case 0x3a23a4u: goto label_3a23a4;
        case 0x3a23a8u: goto label_3a23a8;
        case 0x3a23acu: goto label_3a23ac;
        case 0x3a23b0u: goto label_3a23b0;
        case 0x3a23b4u: goto label_3a23b4;
        case 0x3a23b8u: goto label_3a23b8;
        case 0x3a23bcu: goto label_3a23bc;
        case 0x3a23c0u: goto label_3a23c0;
        case 0x3a23c4u: goto label_3a23c4;
        case 0x3a23c8u: goto label_3a23c8;
        case 0x3a23ccu: goto label_3a23cc;
        case 0x3a23d0u: goto label_3a23d0;
        case 0x3a23d4u: goto label_3a23d4;
        case 0x3a23d8u: goto label_3a23d8;
        case 0x3a23dcu: goto label_3a23dc;
        case 0x3a23e0u: goto label_3a23e0;
        case 0x3a23e4u: goto label_3a23e4;
        case 0x3a23e8u: goto label_3a23e8;
        case 0x3a23ecu: goto label_3a23ec;
        case 0x3a23f0u: goto label_3a23f0;
        case 0x3a23f4u: goto label_3a23f4;
        case 0x3a23f8u: goto label_3a23f8;
        case 0x3a23fcu: goto label_3a23fc;
        case 0x3a2400u: goto label_3a2400;
        case 0x3a2404u: goto label_3a2404;
        case 0x3a2408u: goto label_3a2408;
        case 0x3a240cu: goto label_3a240c;
        case 0x3a2410u: goto label_3a2410;
        case 0x3a2414u: goto label_3a2414;
        case 0x3a2418u: goto label_3a2418;
        case 0x3a241cu: goto label_3a241c;
        case 0x3a2420u: goto label_3a2420;
        case 0x3a2424u: goto label_3a2424;
        case 0x3a2428u: goto label_3a2428;
        case 0x3a242cu: goto label_3a242c;
        case 0x3a2430u: goto label_3a2430;
        case 0x3a2434u: goto label_3a2434;
        case 0x3a2438u: goto label_3a2438;
        case 0x3a243cu: goto label_3a243c;
        case 0x3a2440u: goto label_3a2440;
        case 0x3a2444u: goto label_3a2444;
        case 0x3a2448u: goto label_3a2448;
        case 0x3a244cu: goto label_3a244c;
        case 0x3a2450u: goto label_3a2450;
        case 0x3a2454u: goto label_3a2454;
        case 0x3a2458u: goto label_3a2458;
        case 0x3a245cu: goto label_3a245c;
        case 0x3a2460u: goto label_3a2460;
        case 0x3a2464u: goto label_3a2464;
        case 0x3a2468u: goto label_3a2468;
        case 0x3a246cu: goto label_3a246c;
        case 0x3a2470u: goto label_3a2470;
        case 0x3a2474u: goto label_3a2474;
        case 0x3a2478u: goto label_3a2478;
        case 0x3a247cu: goto label_3a247c;
        case 0x3a2480u: goto label_3a2480;
        case 0x3a2484u: goto label_3a2484;
        case 0x3a2488u: goto label_3a2488;
        case 0x3a248cu: goto label_3a248c;
        case 0x3a2490u: goto label_3a2490;
        case 0x3a2494u: goto label_3a2494;
        case 0x3a2498u: goto label_3a2498;
        case 0x3a249cu: goto label_3a249c;
        case 0x3a24a0u: goto label_3a24a0;
        case 0x3a24a4u: goto label_3a24a4;
        case 0x3a24a8u: goto label_3a24a8;
        case 0x3a24acu: goto label_3a24ac;
        default: break;
    }

    ctx->pc = 0x3a21a0u;

label_3a21a0:
    // 0x3a21a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a21a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3a21a4:
    // 0x3a21a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a21a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3a21a8:
    // 0x3a21a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a21a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a21ac:
    // 0x3a21ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a21acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a21b0:
    // 0x3a21b0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3a21b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a21b4:
    // 0x3a21b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a21b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a21b8:
    // 0x3a21b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a21b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a21bc:
    // 0x3a21bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a21bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a21c0:
    // 0x3a21c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a21c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a21c4:
    // 0x3a21c4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3a21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3a21c8:
    // 0x3a21c8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x3a21c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3a21cc:
    // 0x3a21cc: 0x14200081  bnez        $at, . + 4 + (0x81 << 2)
label_3a21d0:
    if (ctx->pc == 0x3A21D0u) {
        ctx->pc = 0x3A21D0u;
            // 0x3a21d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A21D4u;
        goto label_3a21d4;
    }
    ctx->pc = 0x3A21CCu;
    {
        const bool branch_taken_0x3a21cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A21D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A21CCu;
            // 0x3a21d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a21cc) {
            ctx->pc = 0x3A23D4u;
            goto label_3a23d4;
        }
    }
    ctx->pc = 0x3A21D4u;
label_3a21d4:
    // 0x3a21d4: 0x8e710034  lw          $s1, 0x34($s3)
    ctx->pc = 0x3a21d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3a21d8:
    // 0x3a21d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a21dc:
    // 0x3a21dc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3a21dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3a21e0:
    // 0x3a21e0: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a21e4:
    // 0x3a21e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a21e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a21e8:
    // 0x3a21e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a21e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a21ec:
    // 0x3a21ec: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x3a21ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_3a21f0:
    // 0x3a21f0: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x3a21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
label_3a21f4:
    // 0x3a21f4: 0xafa6008c  sw          $a2, 0x8C($sp)
    ctx->pc = 0x3a21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 6));
label_3a21f8:
    // 0x3a21f8: 0xafb10088  sw          $s1, 0x88($sp)
    ctx->pc = 0x3a21f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 17));
label_3a21fc:
    // 0x3a21fc: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3a21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3a2200:
    // 0x3a2200: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3a2200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3a2204:
    // 0x3a2204: 0xc0fe54c  jal         func_3F9530
label_3a2208:
    if (ctx->pc == 0x3A2208u) {
        ctx->pc = 0x3A2208u;
            // 0x3a2208: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->pc = 0x3A220Cu;
        goto label_3a220c;
    }
    ctx->pc = 0x3A2204u;
    SET_GPR_U32(ctx, 31, 0x3A220Cu);
    ctx->pc = 0x3A2208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2204u;
            // 0x3a2208: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A220Cu; }
        if (ctx->pc != 0x3A220Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A220Cu; }
        if (ctx->pc != 0x3A220Cu) { return; }
    }
    ctx->pc = 0x3A220Cu;
label_3a220c:
    // 0x3a220c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3a220cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a2210:
    // 0x3a2210: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3a2210u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_3a2214:
    // 0x3a2214: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x3a2214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
label_3a2218:
    // 0x3a2218: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3a2218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3a221c:
    // 0x3a221c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x3a221cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_3a2220:
    // 0x3a2220: 0x2463fd30  addiu       $v1, $v1, -0x2D0
    ctx->pc = 0x3a2220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966576));
label_3a2224:
    // 0x3a2224: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3a2224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_3a2228:
    // 0x3a2228: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x3a2228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_3a222c:
    // 0x3a222c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x3a222cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_3a2230:
    // 0x3a2230: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3a2230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3a2234:
    // 0x3a2234: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a2234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a2238:
    // 0x3a2238: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a223c:
    if (ctx->pc == 0x3A223Cu) {
        ctx->pc = 0x3A223Cu;
            // 0x3a223c: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->pc = 0x3A2240u;
        goto label_3a2240;
    }
    ctx->pc = 0x3A2238u;
    {
        const bool branch_taken_0x3a2238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2238u;
            // 0x3a223c: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2238) {
            ctx->pc = 0x3A2254u;
            goto label_3a2254;
        }
    }
    ctx->pc = 0x3A2240u;
label_3a2240:
    // 0x3a2240: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x3a2240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_3a2244:
    // 0x3a2244: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3a2244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3a2248:
    // 0x3a2248: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x3a2248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_3a224c:
    // 0x3a224c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a2250:
    if (ctx->pc == 0x3A2250u) {
        ctx->pc = 0x3A2250u;
            // 0x3a2250: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2254u;
        goto label_3a2254;
    }
    ctx->pc = 0x3A224Cu;
    {
        const bool branch_taken_0x3a224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A224Cu;
            // 0x3a2250: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a224c) {
            ctx->pc = 0x3A2264u;
            goto label_3a2264;
        }
    }
    ctx->pc = 0x3A2254u;
label_3a2254:
    // 0x3a2254: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x3a2254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_3a2258:
    // 0x3a2258: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3a2258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3a225c:
    // 0x3a225c: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x3a225cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_3a2260:
    // 0x3a2260: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3a2260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3a2264:
    // 0x3a2264: 0x8e66003c  lw          $a2, 0x3C($s3)
    ctx->pc = 0x3a2264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_3a2268:
    // 0x3a2268: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
label_3a226c:
    if (ctx->pc == 0x3A226Cu) {
        ctx->pc = 0x3A226Cu;
            // 0x3a226c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x3A2270u;
        goto label_3a2270;
    }
    ctx->pc = 0x3A2268u;
    {
        const bool branch_taken_0x3a2268 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2268) {
            ctx->pc = 0x3A226Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2268u;
            // 0x3a226c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A229Cu;
            goto label_3a229c;
        }
    }
    ctx->pc = 0x3A2270u;
label_3a2270:
    // 0x3a2270: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3a2270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_3a2274:
    // 0x3a2274: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x3a2274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3a2278:
    // 0x3a2278: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a2278u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a227c:
    // 0x3a227c: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a227cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a2280:
    // 0x3a2280: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a2280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a2284:
    // 0x3a2284: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2288:
    // 0x3a2288: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a2288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a228c:
    // 0x3a228c: 0x320f809  jalr        $t9
label_3a2290:
    if (ctx->pc == 0x3A2290u) {
        ctx->pc = 0x3A2290u;
            // 0x3a2290: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A2294u;
        goto label_3a2294;
    }
    ctx->pc = 0x3A228Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2294u);
        ctx->pc = 0x3A2290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A228Cu;
            // 0x3a2290: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2294u; }
            if (ctx->pc != 0x3A2294u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2294u;
label_3a2294:
    // 0x3a2294: 0x1000000b  b           . + 4 + (0xB << 2)
label_3a2298:
    if (ctx->pc == 0x3A2298u) {
        ctx->pc = 0x3A2298u;
            // 0x3a2298: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A229Cu;
        goto label_3a229c;
    }
    ctx->pc = 0x3A2294u;
    {
        const bool branch_taken_0x3a2294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2294u;
            // 0x3a2298: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2294) {
            ctx->pc = 0x3A22C4u;
            goto label_3a22c4;
        }
    }
    ctx->pc = 0x3A229Cu;
label_3a229c:
    // 0x3a229c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x3a229cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3a22a0:
    // 0x3a22a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a22a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a22a4:
    // 0x3a22a4: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x3a22a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_3a22a8:
    // 0x3a22a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a22a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a22ac:
    // 0x3a22ac: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a22acu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a22b0:
    // 0x3a22b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a22b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a22b4:
    // 0x3a22b4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a22b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a22b8:
    // 0x3a22b8: 0x320f809  jalr        $t9
label_3a22bc:
    if (ctx->pc == 0x3A22BCu) {
        ctx->pc = 0x3A22BCu;
            // 0x3a22bc: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A22C0u;
        goto label_3a22c0;
    }
    ctx->pc = 0x3A22B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A22C0u);
        ctx->pc = 0x3A22BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A22B8u;
            // 0x3a22bc: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A22C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A22C0u; }
            if (ctx->pc != 0x3A22C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3A22C0u;
label_3a22c0:
    // 0x3a22c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a22c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a22c4:
    // 0x3a22c4: 0x643000d  bgezl       $s2, . + 4 + (0xD << 2)
label_3a22c8:
    if (ctx->pc == 0x3A22C8u) {
        ctx->pc = 0x3A22C8u;
            // 0x3a22c8: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x3A22CCu;
        goto label_3a22cc;
    }
    ctx->pc = 0x3A22C4u;
    {
        const bool branch_taken_0x3a22c4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x3a22c4) {
            ctx->pc = 0x3A22C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A22C4u;
            // 0x3a22c8: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A22FCu;
            goto label_3a22fc;
        }
    }
    ctx->pc = 0x3A22CCu;
label_3a22cc:
    // 0x3a22cc: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x3a22ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_3a22d0:
    // 0x3a22d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a22d4:
    // 0x3a22d4: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a22d8:
    // 0x3a22d8: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
label_3a22dc:
    if (ctx->pc == 0x3A22DCu) {
        ctx->pc = 0x3A22DCu;
            // 0x3a22dc: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x3A22E0u;
        goto label_3a22e0;
    }
    ctx->pc = 0x3A22D8u;
    {
        const bool branch_taken_0x3a22d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A22DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A22D8u;
            // 0x3a22dc: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a22d8) {
            ctx->pc = 0x3A2488u;
            goto label_3a2488;
        }
    }
    ctx->pc = 0x3A22E0u;
label_3a22e0:
    // 0x3a22e0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x3a22e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_3a22e4:
    // 0x3a22e4: 0x50a00069  beql        $a1, $zero, . + 4 + (0x69 << 2)
label_3a22e8:
    if (ctx->pc == 0x3A22E8u) {
        ctx->pc = 0x3A22E8u;
            // 0x3a22e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A22ECu;
        goto label_3a22ec;
    }
    ctx->pc = 0x3A22E4u;
    {
        const bool branch_taken_0x3a22e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a22e4) {
            ctx->pc = 0x3A22E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A22E4u;
            // 0x3a22e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A248Cu;
            goto label_3a248c;
        }
    }
    ctx->pc = 0x3A22ECu;
label_3a22ec:
    // 0x3a22ec: 0xc0fe48c  jal         func_3F9230
label_3a22f0:
    if (ctx->pc == 0x3A22F0u) {
        ctx->pc = 0x3A22F4u;
        goto label_3a22f4;
    }
    ctx->pc = 0x3A22ECu;
    SET_GPR_U32(ctx, 31, 0x3A22F4u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A22F4u; }
        if (ctx->pc != 0x3A22F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A22F4u; }
        if (ctx->pc != 0x3A22F4u) { return; }
    }
    ctx->pc = 0x3A22F4u;
label_3a22f4:
    // 0x3a22f4: 0x10000064  b           . + 4 + (0x64 << 2)
label_3a22f8:
    if (ctx->pc == 0x3A22F8u) {
        ctx->pc = 0x3A22F8u;
            // 0x3a22f8: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->pc = 0x3A22FCu;
        goto label_3a22fc;
    }
    ctx->pc = 0x3A22F4u;
    {
        const bool branch_taken_0x3a22f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A22F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A22F4u;
            // 0x3a22f8: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a22f4) {
            ctx->pc = 0x3A2488u;
            goto label_3a2488;
        }
    }
    ctx->pc = 0x3A22FCu;
label_3a22fc:
    // 0x3a22fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a22fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2300:
    // 0x3a2300: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a2300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a2304:
    // 0x3a2304: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x3a2304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3a2308:
    // 0x3a2308: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3a2308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_3a230c:
    // 0x3a230c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3a230cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3a2310:
    // 0x3a2310: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3a2310u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3a2314:
    // 0x3a2314: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a2314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3a2318:
    // 0x3a2318: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a2318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a231c:
    // 0x3a231c: 0x8c4500a0  lw          $a1, 0xA0($v0)
    ctx->pc = 0x3a231cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_3a2320:
    // 0x3a2320: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a2320u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a2324:
    // 0x3a2324: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2328:
    // 0x3a2328: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x3a2328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_3a232c:
    // 0x3a232c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a232cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a2330:
    // 0x3a2330: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a2330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3a2334:
    // 0x3a2334: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a2334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a2338:
    // 0x3a2338: 0x8c4600a0  lw          $a2, 0xA0($v0)
    ctx->pc = 0x3a2338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_3a233c:
    // 0x3a233c: 0x320f809  jalr        $t9
label_3a2340:
    if (ctx->pc == 0x3A2340u) {
        ctx->pc = 0x3A2340u;
            // 0x3a2340: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A2344u;
        goto label_3a2344;
    }
    ctx->pc = 0x3A233Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2344u);
        ctx->pc = 0x3A2340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A233Cu;
            // 0x3a2340: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2344u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2344u; }
            if (ctx->pc != 0x3A2344u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2344u;
label_3a2344:
    // 0x3a2344: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a2344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2348:
    // 0x3a2348: 0x643000d  bgezl       $s2, . + 4 + (0xD << 2)
label_3a234c:
    if (ctx->pc == 0x3A234Cu) {
        ctx->pc = 0x3A234Cu;
            // 0x3a234c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x3A2350u;
        goto label_3a2350;
    }
    ctx->pc = 0x3A2348u;
    {
        const bool branch_taken_0x3a2348 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x3a2348) {
            ctx->pc = 0x3A234Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2348u;
            // 0x3a234c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2380u;
            goto label_3a2380;
        }
    }
    ctx->pc = 0x3A2350u;
label_3a2350:
    // 0x3a2350: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x3a2350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_3a2354:
    // 0x3a2354: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a2354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a2358:
    // 0x3a2358: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a2358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a235c:
    // 0x3a235c: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
label_3a2360:
    if (ctx->pc == 0x3A2360u) {
        ctx->pc = 0x3A2360u;
            // 0x3a2360: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2364u;
        goto label_3a2364;
    }
    ctx->pc = 0x3A235Cu;
    {
        const bool branch_taken_0x3a235c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A235Cu;
            // 0x3a2360: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a235c) {
            ctx->pc = 0x3A2488u;
            goto label_3a2488;
        }
    }
    ctx->pc = 0x3A2364u;
label_3a2364:
    // 0x3a2364: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x3a2364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_3a2368:
    // 0x3a2368: 0x10a00047  beqz        $a1, . + 4 + (0x47 << 2)
label_3a236c:
    if (ctx->pc == 0x3A236Cu) {
        ctx->pc = 0x3A2370u;
        goto label_3a2370;
    }
    ctx->pc = 0x3A2368u;
    {
        const bool branch_taken_0x3a2368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2368) {
            ctx->pc = 0x3A2488u;
            goto label_3a2488;
        }
    }
    ctx->pc = 0x3A2370u;
label_3a2370:
    // 0x3a2370: 0xc0fe48c  jal         func_3F9230
label_3a2374:
    if (ctx->pc == 0x3A2374u) {
        ctx->pc = 0x3A2378u;
        goto label_3a2378;
    }
    ctx->pc = 0x3A2370u;
    SET_GPR_U32(ctx, 31, 0x3A2378u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2378u; }
        if (ctx->pc != 0x3A2378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2378u; }
        if (ctx->pc != 0x3A2378u) { return; }
    }
    ctx->pc = 0x3A2378u;
label_3a2378:
    // 0x3a2378: 0x10000043  b           . + 4 + (0x43 << 2)
label_3a237c:
    if (ctx->pc == 0x3A237Cu) {
        ctx->pc = 0x3A237Cu;
            // 0x3a237c: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->pc = 0x3A2380u;
        goto label_3a2380;
    }
    ctx->pc = 0x3A2378u;
    {
        const bool branch_taken_0x3a2378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A237Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2378u;
            // 0x3a237c: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2378) {
            ctx->pc = 0x3A2488u;
            goto label_3a2488;
        }
    }
    ctx->pc = 0x3A2380u;
label_3a2380:
    // 0x3a2380: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a2380u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a2384:
    // 0x3a2384: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x3a2384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3a2388:
    // 0x3a2388: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x3a2388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_3a238c:
    // 0x3a238c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a238cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a2390:
    // 0x3a2390: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x3a2390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_3a2394:
    // 0x3a2394: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3a2394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3a2398:
    // 0x3a2398: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a2398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3a239c:
    // 0x3a239c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_3a23a0:
    if (ctx->pc == 0x3A23A0u) {
        ctx->pc = 0x3A23A0u;
            // 0x3a23a0: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x3A23A4u;
        goto label_3a23a4;
    }
    ctx->pc = 0x3A239Cu;
    {
        const bool branch_taken_0x3a239c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A23A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A239Cu;
            // 0x3a23a0: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a239c) {
            ctx->pc = 0x3A2308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a2308;
        }
    }
    ctx->pc = 0x3A23A4u;
label_3a23a4:
    // 0x3a23a4: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x3a23a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_3a23a8:
    // 0x3a23a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a23ac:
    // 0x3a23ac: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a23acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a23b0:
    // 0x3a23b0: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
label_3a23b4:
    if (ctx->pc == 0x3A23B4u) {
        ctx->pc = 0x3A23B4u;
            // 0x3a23b4: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x3A23B8u;
        goto label_3a23b8;
    }
    ctx->pc = 0x3A23B0u;
    {
        const bool branch_taken_0x3a23b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A23B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A23B0u;
            // 0x3a23b4: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a23b0) {
            ctx->pc = 0x3A2488u;
            goto label_3a2488;
        }
    }
    ctx->pc = 0x3A23B8u;
label_3a23b8:
    // 0x3a23b8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x3a23b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_3a23bc:
    // 0x3a23bc: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
label_3a23c0:
    if (ctx->pc == 0x3A23C0u) {
        ctx->pc = 0x3A23C4u;
        goto label_3a23c4;
    }
    ctx->pc = 0x3A23BCu;
    {
        const bool branch_taken_0x3a23bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a23bc) {
            ctx->pc = 0x3A2488u;
            goto label_3a2488;
        }
    }
    ctx->pc = 0x3A23C4u;
label_3a23c4:
    // 0x3a23c4: 0xc0fe48c  jal         func_3F9230
label_3a23c8:
    if (ctx->pc == 0x3A23C8u) {
        ctx->pc = 0x3A23CCu;
        goto label_3a23cc;
    }
    ctx->pc = 0x3A23C4u;
    SET_GPR_U32(ctx, 31, 0x3A23CCu);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A23CCu; }
        if (ctx->pc != 0x3A23CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A23CCu; }
        if (ctx->pc != 0x3A23CCu) { return; }
    }
    ctx->pc = 0x3A23CCu;
label_3a23cc:
    // 0x3a23cc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3a23d0:
    if (ctx->pc == 0x3A23D0u) {
        ctx->pc = 0x3A23D0u;
            // 0x3a23d0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->pc = 0x3A23D4u;
        goto label_3a23d4;
    }
    ctx->pc = 0x3A23CCu;
    {
        const bool branch_taken_0x3a23cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A23D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A23CCu;
            // 0x3a23d0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a23cc) {
            ctx->pc = 0x3A2488u;
            goto label_3a2488;
        }
    }
    ctx->pc = 0x3A23D4u;
label_3a23d4:
    // 0x3a23d4: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x3a23d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_3a23d8:
    // 0x3a23d8: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
label_3a23dc:
    if (ctx->pc == 0x3A23DCu) {
        ctx->pc = 0x3A23DCu;
            // 0x3a23dc: 0x8e66003c  lw          $a2, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->pc = 0x3A23E0u;
        goto label_3a23e0;
    }
    ctx->pc = 0x3A23D8u;
    {
        const bool branch_taken_0x3a23d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a23d8) {
            ctx->pc = 0x3A23DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A23D8u;
            // 0x3a23dc: 0x8e66003c  lw          $a2, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2434u;
            goto label_3a2434;
        }
    }
    ctx->pc = 0x3A23E0u;
label_3a23e0:
    // 0x3a23e0: 0x8e66003c  lw          $a2, 0x3C($s3)
    ctx->pc = 0x3a23e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_3a23e4:
    // 0x3a23e4: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
label_3a23e8:
    if (ctx->pc == 0x3A23E8u) {
        ctx->pc = 0x3A23E8u;
            // 0x3a23e8: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->pc = 0x3A23ECu;
        goto label_3a23ec;
    }
    ctx->pc = 0x3A23E4u;
    {
        const bool branch_taken_0x3a23e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a23e4) {
            ctx->pc = 0x3A23E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A23E4u;
            // 0x3a23e8: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2410u;
            goto label_3a2410;
        }
    }
    ctx->pc = 0x3A23ECu;
label_3a23ec:
    // 0x3a23ec: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3a23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3a23f0:
    // 0x3a23f0: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a23f0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a23f4:
    // 0x3a23f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a23f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a23f8:
    // 0x3a23f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a23f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a23fc:
    // 0x3a23fc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a23fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a2400:
    // 0x3a2400: 0x320f809  jalr        $t9
label_3a2404:
    if (ctx->pc == 0x3A2404u) {
        ctx->pc = 0x3A2404u;
            // 0x3a2404: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A2408u;
        goto label_3a2408;
    }
    ctx->pc = 0x3A2400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2408u);
        ctx->pc = 0x3A2404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2400u;
            // 0x3a2404: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2408u; }
            if (ctx->pc != 0x3A2408u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2408u;
label_3a2408:
    // 0x3a2408: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3a240c:
    if (ctx->pc == 0x3A240Cu) {
        ctx->pc = 0x3A240Cu;
            // 0x3a240c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A2410u;
        goto label_3a2410;
    }
    ctx->pc = 0x3A2408u;
    {
        const bool branch_taken_0x3a2408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A240Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2408u;
            // 0x3a240c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2408) {
            ctx->pc = 0x3A2488u;
            goto label_3a2488;
        }
    }
    ctx->pc = 0x3A2410u;
label_3a2410:
    // 0x3a2410: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x3a2410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_3a2414:
    // 0x3a2414: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a2414u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a2418:
    // 0x3a2418: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a2418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a241c:
    // 0x3a241c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a241cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2420:
    // 0x3a2420: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a2420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a2424:
    // 0x3a2424: 0x320f809  jalr        $t9
label_3a2428:
    if (ctx->pc == 0x3A2428u) {
        ctx->pc = 0x3A2428u;
            // 0x3a2428: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A242Cu;
        goto label_3a242c;
    }
    ctx->pc = 0x3A2424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A242Cu);
        ctx->pc = 0x3A2428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2424u;
            // 0x3a2428: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A242Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A242Cu; }
            if (ctx->pc != 0x3A242Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A242Cu;
label_3a242c:
    // 0x3a242c: 0x10000016  b           . + 4 + (0x16 << 2)
label_3a2430:
    if (ctx->pc == 0x3A2430u) {
        ctx->pc = 0x3A2430u;
            // 0x3a2430: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A2434u;
        goto label_3a2434;
    }
    ctx->pc = 0x3A242Cu;
    {
        const bool branch_taken_0x3a242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A242Cu;
            // 0x3a2430: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a242c) {
            ctx->pc = 0x3A2488u;
            goto label_3a2488;
        }
    }
    ctx->pc = 0x3A2434u;
label_3a2434:
    // 0x3a2434: 0x50c0000b  beql        $a2, $zero, . + 4 + (0xB << 2)
label_3a2438:
    if (ctx->pc == 0x3A2438u) {
        ctx->pc = 0x3A2438u;
            // 0x3a2438: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->pc = 0x3A243Cu;
        goto label_3a243c;
    }
    ctx->pc = 0x3A2434u;
    {
        const bool branch_taken_0x3a2434 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2434) {
            ctx->pc = 0x3A2438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2434u;
            // 0x3a2438: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2464u;
            goto label_3a2464;
        }
    }
    ctx->pc = 0x3A243Cu;
label_3a243c:
    // 0x3a243c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3a243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3a2440:
    // 0x3a2440: 0x8e650048  lw          $a1, 0x48($s3)
    ctx->pc = 0x3a2440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_3a2444:
    // 0x3a2444: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a2444u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a2448:
    // 0x3a2448: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a2448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a244c:
    // 0x3a244c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a244cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2450:
    // 0x3a2450: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a2450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a2454:
    // 0x3a2454: 0x320f809  jalr        $t9
label_3a2458:
    if (ctx->pc == 0x3A2458u) {
        ctx->pc = 0x3A2458u;
            // 0x3a2458: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A245Cu;
        goto label_3a245c;
    }
    ctx->pc = 0x3A2454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A245Cu);
        ctx->pc = 0x3A2458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2454u;
            // 0x3a2458: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A245Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A245Cu; }
            if (ctx->pc != 0x3A245Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A245Cu;
label_3a245c:
    // 0x3a245c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a2460:
    if (ctx->pc == 0x3A2460u) {
        ctx->pc = 0x3A2460u;
            // 0x3a2460: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A2464u;
        goto label_3a2464;
    }
    ctx->pc = 0x3A245Cu;
    {
        const bool branch_taken_0x3a245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A245Cu;
            // 0x3a2460: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a245c) {
            ctx->pc = 0x3A2488u;
            goto label_3a2488;
        }
    }
    ctx->pc = 0x3A2464u;
label_3a2464:
    // 0x3a2464: 0x8e650048  lw          $a1, 0x48($s3)
    ctx->pc = 0x3a2464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_3a2468:
    // 0x3a2468: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x3a2468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_3a246c:
    // 0x3a246c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a2470:
    // 0x3a2470: 0x92670038  lbu         $a3, 0x38($s3)
    ctx->pc = 0x3a2470u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_3a2474:
    // 0x3a2474: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2478:
    // 0x3a2478: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3a2478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3a247c:
    // 0x3a247c: 0x320f809  jalr        $t9
label_3a2480:
    if (ctx->pc == 0x3A2480u) {
        ctx->pc = 0x3A2480u;
            // 0x3a2480: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x3A2484u;
        goto label_3a2484;
    }
    ctx->pc = 0x3A247Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2484u);
        ctx->pc = 0x3A2480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A247Cu;
            // 0x3a2480: 0x26680024  addiu       $t0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2484u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2484u; }
            if (ctx->pc != 0x3A2484u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2484u;
label_3a2484:
    // 0x3a2484: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a2484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2488:
    // 0x3a2488: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3a2488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a248c:
    // 0x3a248c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a248cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a2490:
    // 0x3a2490: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a2490u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a2494:
    // 0x3a2494: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a2494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a2498:
    // 0x3a2498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a2498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a249c:
    // 0x3a249c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a249cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a24a0:
    // 0x3a24a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a24a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a24a4:
    // 0x3a24a4: 0x3e00008  jr          $ra
label_3a24a8:
    if (ctx->pc == 0x3A24A8u) {
        ctx->pc = 0x3A24A8u;
            // 0x3a24a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3A24ACu;
        goto label_3a24ac;
    }
    ctx->pc = 0x3A24A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A24A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A24A4u;
            // 0x3a24a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A24ACu;
label_3a24ac:
    // 0x3a24ac: 0x0  nop
    ctx->pc = 0x3a24acu;
    // NOP
}
