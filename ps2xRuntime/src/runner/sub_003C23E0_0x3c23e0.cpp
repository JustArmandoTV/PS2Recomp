#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C23E0
// Address: 0x3c23e0 - 0x3c3040
void sub_003C23E0_0x3c23e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C23E0_0x3c23e0");
#endif

    switch (ctx->pc) {
        case 0x3c2414u: goto label_3c2414;
        case 0x3c2424u: goto label_3c2424;
        case 0x3c2438u: goto label_3c2438;
        case 0x3c2450u: goto label_3c2450;
        case 0x3c246cu: goto label_3c246c;
        case 0x3c2478u: goto label_3c2478;
        case 0x3c2490u: goto label_3c2490;
        case 0x3c24a0u: goto label_3c24a0;
        case 0x3c24acu: goto label_3c24ac;
        case 0x3c24b8u: goto label_3c24b8;
        case 0x3c24c4u: goto label_3c24c4;
        case 0x3c24e4u: goto label_3c24e4;
        case 0x3c24f0u: goto label_3c24f0;
        case 0x3c2508u: goto label_3c2508;
        case 0x3c252cu: goto label_3c252c;
        case 0x3c2540u: goto label_3c2540;
        case 0x3c2554u: goto label_3c2554;
        case 0x3c2568u: goto label_3c2568;
        case 0x3c257cu: goto label_3c257c;
        case 0x3c258cu: goto label_3c258c;
        case 0x3c25a0u: goto label_3c25a0;
        case 0x3c25a8u: goto label_3c25a8;
        case 0x3c25b4u: goto label_3c25b4;
        case 0x3c25c0u: goto label_3c25c0;
        case 0x3c25ccu: goto label_3c25cc;
        case 0x3c25ecu: goto label_3c25ec;
        case 0x3c25f8u: goto label_3c25f8;
        case 0x3c2610u: goto label_3c2610;
        case 0x3c2634u: goto label_3c2634;
        case 0x3c2644u: goto label_3c2644;
        case 0x3c264cu: goto label_3c264c;
        case 0x3c2660u: goto label_3c2660;
        case 0x3c2668u: goto label_3c2668;
        case 0x3c2670u: goto label_3c2670;
        case 0x3c2688u: goto label_3c2688;
        case 0x3c2690u: goto label_3c2690;
        case 0x3c2698u: goto label_3c2698;
        case 0x3c26b4u: goto label_3c26b4;
        case 0x3c26bcu: goto label_3c26bc;
        case 0x3c26d0u: goto label_3c26d0;
        case 0x3c26e4u: goto label_3c26e4;
        case 0x3c26f8u: goto label_3c26f8;
        case 0x3c2708u: goto label_3c2708;
        case 0x3c271cu: goto label_3c271c;
        case 0x3c2728u: goto label_3c2728;
        case 0x3c2730u: goto label_3c2730;
        case 0x3c2744u: goto label_3c2744;
        case 0x3c2754u: goto label_3c2754;
        case 0x3c2760u: goto label_3c2760;
        case 0x3c2768u: goto label_3c2768;
        case 0x3c2778u: goto label_3c2778;
        case 0x3c2780u: goto label_3c2780;
        case 0x3c2790u: goto label_3c2790;
        case 0x3c2798u: goto label_3c2798;
        case 0x3c27b0u: goto label_3c27b0;
        case 0x3c27d4u: goto label_3c27d4;
        case 0x3c27dcu: goto label_3c27dc;
        case 0x3c27ecu: goto label_3c27ec;
        case 0x3c27fcu: goto label_3c27fc;
        case 0x3c2804u: goto label_3c2804;
        case 0x3c2814u: goto label_3c2814;
        case 0x3c2820u: goto label_3c2820;
        case 0x3c2828u: goto label_3c2828;
        case 0x3c2834u: goto label_3c2834;
        case 0x3c2844u: goto label_3c2844;
        case 0x3c284cu: goto label_3c284c;
        case 0x3c2858u: goto label_3c2858;
        case 0x3c2864u: goto label_3c2864;
        case 0x3c286cu: goto label_3c286c;
        case 0x3c2878u: goto label_3c2878;
        case 0x3c2884u: goto label_3c2884;
        case 0x3c288cu: goto label_3c288c;
        case 0x3c2898u: goto label_3c2898;
        case 0x3c28a0u: goto label_3c28a0;
        case 0x3c28b4u: goto label_3c28b4;
        case 0x3c28bcu: goto label_3c28bc;
        case 0x3c28c8u: goto label_3c28c8;
        case 0x3c28d0u: goto label_3c28d0;
        case 0x3c28e4u: goto label_3c28e4;
        case 0x3c28ecu: goto label_3c28ec;
        case 0x3c28f8u: goto label_3c28f8;
        case 0x3c2900u: goto label_3c2900;
        case 0x3c2910u: goto label_3c2910;
        case 0x3c291cu: goto label_3c291c;
        case 0x3c2928u: goto label_3c2928;
        case 0x3c2930u: goto label_3c2930;
        case 0x3c2944u: goto label_3c2944;
        case 0x3c294cu: goto label_3c294c;
        case 0x3c2958u: goto label_3c2958;
        case 0x3c2960u: goto label_3c2960;
        case 0x3c2974u: goto label_3c2974;
        case 0x3c2984u: goto label_3c2984;
        case 0x3c298cu: goto label_3c298c;
        case 0x3c299cu: goto label_3c299c;
        case 0x3c29a8u: goto label_3c29a8;
        case 0x3c29b0u: goto label_3c29b0;
        case 0x3c29c0u: goto label_3c29c0;
        case 0x3c29d0u: goto label_3c29d0;
        case 0x3c29e0u: goto label_3c29e0;
        case 0x3c29e8u: goto label_3c29e8;
        case 0x3c29fcu: goto label_3c29fc;
        case 0x3c2a08u: goto label_3c2a08;
        case 0x3c2a14u: goto label_3c2a14;
        case 0x3c2a1cu: goto label_3c2a1c;
        case 0x3c2a28u: goto label_3c2a28;
        case 0x3c2a34u: goto label_3c2a34;
        case 0x3c2a48u: goto label_3c2a48;
        case 0x3c2a54u: goto label_3c2a54;
        case 0x3c2a5cu: goto label_3c2a5c;
        case 0x3c2a68u: goto label_3c2a68;
        case 0x3c2a70u: goto label_3c2a70;
        case 0x3c2a7cu: goto label_3c2a7c;
        case 0x3c2a84u: goto label_3c2a84;
        case 0x3c2a98u: goto label_3c2a98;
        case 0x3c2aa8u: goto label_3c2aa8;
        case 0x3c2ab4u: goto label_3c2ab4;
        case 0x3c2abcu: goto label_3c2abc;
        case 0x3c2ac8u: goto label_3c2ac8;
        case 0x3c2ae0u: goto label_3c2ae0;
        case 0x3c2ae8u: goto label_3c2ae8;
        case 0x3c2af4u: goto label_3c2af4;
        case 0x3c2afcu: goto label_3c2afc;
        case 0x3c2b08u: goto label_3c2b08;
        case 0x3c2b18u: goto label_3c2b18;
        case 0x3c2b24u: goto label_3c2b24;
        case 0x3c2b34u: goto label_3c2b34;
        case 0x3c2b3cu: goto label_3c2b3c;
        case 0x3c2b64u: goto label_3c2b64;
        case 0x3c2b70u: goto label_3c2b70;
        case 0x3c2b7cu: goto label_3c2b7c;
        case 0x3c2b88u: goto label_3c2b88;
        case 0x3c2b90u: goto label_3c2b90;
        case 0x3c2b9cu: goto label_3c2b9c;
        case 0x3c2bb0u: goto label_3c2bb0;
        case 0x3c2bd0u: goto label_3c2bd0;
        case 0x3c2bd8u: goto label_3c2bd8;
        case 0x3c2c1cu: goto label_3c2c1c;
        case 0x3c2c24u: goto label_3c2c24;
        case 0x3c2c98u: goto label_3c2c98;
        case 0x3c2ca4u: goto label_3c2ca4;
        case 0x3c2cacu: goto label_3c2cac;
        case 0x3c2cbcu: goto label_3c2cbc;
        case 0x3c2cc4u: goto label_3c2cc4;
        case 0x3c2cd0u: goto label_3c2cd0;
        case 0x3c2cd8u: goto label_3c2cd8;
        case 0x3c2ce8u: goto label_3c2ce8;
        case 0x3c2cf0u: goto label_3c2cf0;
        case 0x3c2cf8u: goto label_3c2cf8;
        case 0x3c2d04u: goto label_3c2d04;
        case 0x3c2d20u: goto label_3c2d20;
        case 0x3c2d94u: goto label_3c2d94;
        case 0x3c2da4u: goto label_3c2da4;
        case 0x3c2dc4u: goto label_3c2dc4;
        case 0x3c2dccu: goto label_3c2dcc;
        case 0x3c2ddcu: goto label_3c2ddc;
        case 0x3c2decu: goto label_3c2dec;
        case 0x3c2df4u: goto label_3c2df4;
        case 0x3c2e04u: goto label_3c2e04;
        case 0x3c2e0cu: goto label_3c2e0c;
        case 0x3c2e18u: goto label_3c2e18;
        case 0x3c2e2cu: goto label_3c2e2c;
        case 0x3c2e34u: goto label_3c2e34;
        case 0x3c2e40u: goto label_3c2e40;
        case 0x3c2e50u: goto label_3c2e50;
        case 0x3c2e58u: goto label_3c2e58;
        case 0x3c2e60u: goto label_3c2e60;
        case 0x3c2e68u: goto label_3c2e68;
        case 0x3c2e70u: goto label_3c2e70;
        case 0x3c2e84u: goto label_3c2e84;
        case 0x3c2e8cu: goto label_3c2e8c;
        case 0x3c2e94u: goto label_3c2e94;
        case 0x3c2ea4u: goto label_3c2ea4;
        case 0x3c2eacu: goto label_3c2eac;
        case 0x3c2eb8u: goto label_3c2eb8;
        case 0x3c2ec8u: goto label_3c2ec8;
        case 0x3c2ed0u: goto label_3c2ed0;
        case 0x3c2ed8u: goto label_3c2ed8;
        case 0x3c2ee0u: goto label_3c2ee0;
        case 0x3c2ef0u: goto label_3c2ef0;
        case 0x3c2ef8u: goto label_3c2ef8;
        case 0x3c2f08u: goto label_3c2f08;
        case 0x3c2f18u: goto label_3c2f18;
        case 0x3c2f54u: goto label_3c2f54;
        case 0x3c2f74u: goto label_3c2f74;
        case 0x3c2f9cu: goto label_3c2f9c;
        case 0x3c2fa4u: goto label_3c2fa4;
        case 0x3c2fb0u: goto label_3c2fb0;
        case 0x3c2fc0u: goto label_3c2fc0;
        case 0x3c2fd4u: goto label_3c2fd4;
        case 0x3c2fe0u: goto label_3c2fe0;
        case 0x3c2fecu: goto label_3c2fec;
        case 0x3c2ff8u: goto label_3c2ff8;
        case 0x3c3000u: goto label_3c3000;
        case 0x3c300cu: goto label_3c300c;
        default: break;
    }

    ctx->pc = 0x3c23e0u;

    // 0x3c23e0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3c23e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x3c23e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3c23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3c23e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c23e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3c23ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c23ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3c23f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c23f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3c23f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c23f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c23f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c23f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c23fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c23fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c2400: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c2400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c2404: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c2404u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c2408: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c2408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c240c: 0xc0efea4  jal         func_3BFA90
    ctx->pc = 0x3C240Cu;
    SET_GPR_U32(ctx, 31, 0x3C2414u);
    ctx->pc = 0x3C2410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C240Cu;
            // 0x3c2410: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA90u;
    if (runtime->hasFunction(0x3BFA90u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2414u; }
        if (ctx->pc != 0x3C2414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA90_0x3bfa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2414u; }
        if (ctx->pc != 0x3C2414u) { return; }
    }
    ctx->pc = 0x3C2414u;
label_3c2414:
    // 0x3c2414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c2414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2418: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c2418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c241c: 0xc0770e4  jal         func_1DC390
    ctx->pc = 0x3C241Cu;
    SET_GPR_U32(ctx, 31, 0x3C2424u);
    ctx->pc = 0x3C2420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C241Cu;
            // 0x3c2420: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2424u; }
        if (ctx->pc != 0x3C2424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2424u; }
        if (ctx->pc != 0x3C2424u) { return; }
    }
    ctx->pc = 0x3C2424u;
label_3c2424:
    // 0x3c2424: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3c2424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3c2428: 0x1443004c  bne         $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3C2428u;
    {
        const bool branch_taken_0x3c2428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c2428) {
            ctx->pc = 0x3C255Cu;
            goto label_3c255c;
        }
    }
    ctx->pc = 0x3C2430u;
    // 0x3c2430: 0xc0efc4c  jal         func_3BF130
    ctx->pc = 0x3C2430u;
    SET_GPR_U32(ctx, 31, 0x3C2438u);
    ctx->pc = 0x3C2434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2430u;
            // 0x3c2434: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF130u;
    if (runtime->hasFunction(0x3BF130u)) {
        auto targetFn = runtime->lookupFunction(0x3BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2438u; }
        if (ctx->pc != 0x3C2438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF130_0x3bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2438u; }
        if (ctx->pc != 0x3C2438u) { return; }
    }
    ctx->pc = 0x3C2438u;
label_3c2438:
    // 0x3c2438: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c2438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c243c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2440: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C2440u;
    {
        const bool branch_taken_0x3c2440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c2440) {
            ctx->pc = 0x3C2444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2440u;
            // 0x3c2444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2464u;
            goto label_3c2464;
        }
    }
    ctx->pc = 0x3C2448u;
    // 0x3c2448: 0xc0efc4c  jal         func_3BF130
    ctx->pc = 0x3C2448u;
    SET_GPR_U32(ctx, 31, 0x3C2450u);
    ctx->pc = 0x3C244Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2448u;
            // 0x3c244c: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF130u;
    if (runtime->hasFunction(0x3BF130u)) {
        auto targetFn = runtime->lookupFunction(0x3BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2450u; }
        if (ctx->pc != 0x3C2450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF130_0x3bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2450u; }
        if (ctx->pc != 0x3C2450u) { return; }
    }
    ctx->pc = 0x3C2450u;
label_3c2450:
    // 0x3c2450: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c2450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c2454: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c2454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c2458: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3C2458u;
    {
        const bool branch_taken_0x3c2458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c2458) {
            ctx->pc = 0x3C2498u;
            goto label_3c2498;
        }
    }
    ctx->pc = 0x3C2460u;
    // 0x3c2460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2464:
    // 0x3c2464: 0xc077264  jal         func_1DC990
    ctx->pc = 0x3C2464u;
    SET_GPR_U32(ctx, 31, 0x3C246Cu);
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C246Cu; }
        if (ctx->pc != 0x3C246Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C246Cu; }
        if (ctx->pc != 0x3C246Cu) { return; }
    }
    ctx->pc = 0x3C246Cu;
label_3c246c:
    // 0x3c246c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c246cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2470: 0xc0cef94  jal         func_33BE50
    ctx->pc = 0x3C2470u;
    SET_GPR_U32(ctx, 31, 0x3C2478u);
    ctx->pc = 0x3C2474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2470u;
            // 0x3c2474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE50u;
    if (runtime->hasFunction(0x33BE50u)) {
        auto targetFn = runtime->lookupFunction(0x33BE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2478u; }
        if (ctx->pc != 0x3C2478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE50_0x33be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2478u; }
        if (ctx->pc != 0x3C2478u) { return; }
    }
    ctx->pc = 0x3C2478u;
label_3c2478:
    // 0x3c2478: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c2478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c247c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c247cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2480: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c2480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c2484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c2484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c2488: 0xc0b82c4  jal         func_2E0B10
    ctx->pc = 0x3C2488u;
    SET_GPR_U32(ctx, 31, 0x3C2490u);
    ctx->pc = 0x3C248Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2488u;
            // 0x3c248c: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2490u; }
        if (ctx->pc != 0x3C2490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2490u; }
        if (ctx->pc != 0x3C2490u) { return; }
    }
    ctx->pc = 0x3C2490u;
label_3c2490:
    // 0x3c2490: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3C2490u;
    {
        const bool branch_taken_0x3c2490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2490u;
            // 0x3c2494: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2490) {
            ctx->pc = 0x3C24E8u;
            goto label_3c24e8;
        }
    }
    ctx->pc = 0x3C2498u;
label_3c2498:
    // 0x3c2498: 0xc0cf0e4  jal         func_33C390
    ctx->pc = 0x3C2498u;
    SET_GPR_U32(ctx, 31, 0x3C24A0u);
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24A0u; }
        if (ctx->pc != 0x3C24A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24A0u; }
        if (ctx->pc != 0x3C24A0u) { return; }
    }
    ctx->pc = 0x3C24A0u;
label_3c24a0:
    // 0x3c24a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c24a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c24a4: 0xc0ceff0  jal         func_33BFC0
    ctx->pc = 0x3C24A4u;
    SET_GPR_U32(ctx, 31, 0x3C24ACu);
    ctx->pc = 0x3C24A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C24A4u;
            // 0x3c24a8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFC0u;
    if (runtime->hasFunction(0x33BFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24ACu; }
        if (ctx->pc != 0x3C24ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFC0_0x33bfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24ACu; }
        if (ctx->pc != 0x3C24ACu) { return; }
    }
    ctx->pc = 0x3C24ACu;
label_3c24ac:
    // 0x3c24ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c24acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c24b0: 0xc077264  jal         func_1DC990
    ctx->pc = 0x3C24B0u;
    SET_GPR_U32(ctx, 31, 0x3C24B8u);
    ctx->pc = 0x3C24B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C24B0u;
            // 0x3c24b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24B8u; }
        if (ctx->pc != 0x3C24B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24B8u; }
        if (ctx->pc != 0x3C24B8u) { return; }
    }
    ctx->pc = 0x3C24B8u;
label_3c24b8:
    // 0x3c24b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c24b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c24bc: 0xc0cef94  jal         func_33BE50
    ctx->pc = 0x3C24BCu;
    SET_GPR_U32(ctx, 31, 0x3C24C4u);
    ctx->pc = 0x3C24C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C24BCu;
            // 0x3c24c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE50u;
    if (runtime->hasFunction(0x33BE50u)) {
        auto targetFn = runtime->lookupFunction(0x33BE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24C4u; }
        if (ctx->pc != 0x3C24C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE50_0x33be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24C4u; }
        if (ctx->pc != 0x3C24C4u) { return; }
    }
    ctx->pc = 0x3C24C4u;
label_3c24c4:
    // 0x3c24c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c24c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c24c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c24c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c24cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c24d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c24d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c24d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c24d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c24d8: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x3c24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x3c24dc: 0xc0b884c  jal         func_2E2130
    ctx->pc = 0x3C24DCu;
    SET_GPR_U32(ctx, 31, 0x3C24E4u);
    ctx->pc = 0x3C24E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C24DCu;
            // 0x3c24e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24E4u; }
        if (ctx->pc != 0x3C24E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24E4u; }
        if (ctx->pc != 0x3C24E4u) { return; }
    }
    ctx->pc = 0x3C24E4u;
label_3c24e4:
    // 0x3c24e4: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x3c24e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_3c24e8:
    // 0x3c24e8: 0xc0f00cc  jal         func_3C0330
    ctx->pc = 0x3C24E8u;
    SET_GPR_U32(ctx, 31, 0x3C24F0u);
    ctx->pc = 0x3C0330u;
    if (runtime->hasFunction(0x3C0330u)) {
        auto targetFn = runtime->lookupFunction(0x3C0330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24F0u; }
        if (ctx->pc != 0x3C24F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0330_0x3c0330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C24F0u; }
        if (ctx->pc != 0x3C24F0u) { return; }
    }
    ctx->pc = 0x3C24F0u;
label_3c24f0:
    // 0x3c24f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c24f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c24f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c24f8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C24F8u;
    {
        const bool branch_taken_0x3c24f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c24f8) {
            ctx->pc = 0x3C24FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C24F8u;
            // 0x3c24fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C251Cu;
            goto label_3c251c;
        }
    }
    ctx->pc = 0x3C2500u;
    // 0x3c2500: 0xc0f00cc  jal         func_3C0330
    ctx->pc = 0x3C2500u;
    SET_GPR_U32(ctx, 31, 0x3C2508u);
    ctx->pc = 0x3C2504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2500u;
            // 0x3c2504: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C0330u;
    if (runtime->hasFunction(0x3C0330u)) {
        auto targetFn = runtime->lookupFunction(0x3C0330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2508u; }
        if (ctx->pc != 0x3C2508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0330_0x3c0330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2508u; }
        if (ctx->pc != 0x3C2508u) { return; }
    }
    ctx->pc = 0x3C2508u;
label_3c2508:
    // 0x3c2508: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c2508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c250c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c2510: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C2510u;
    {
        const bool branch_taken_0x3c2510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c2510) {
            ctx->pc = 0x3C2534u;
            goto label_3c2534;
        }
    }
    ctx->pc = 0x3C2518u;
    // 0x3c2518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c2518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c251c:
    // 0x3c251c: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x3c251cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x3c2520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c2520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2524: 0xc0fece8  jal         func_3FB3A0
    ctx->pc = 0x3C2524u;
    SET_GPR_U32(ctx, 31, 0x3C252Cu);
    ctx->pc = 0x3C2528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2524u;
            // 0x3c2528: 0x26670070  addiu       $a3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB3A0u;
    if (runtime->hasFunction(0x3FB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x3FB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C252Cu; }
        if (ctx->pc != 0x3C252Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB3A0_0x3fb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C252Cu; }
        if (ctx->pc != 0x3C252Cu) { return; }
    }
    ctx->pc = 0x3C252Cu;
label_3c252c:
    // 0x3c252c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x3C252Cu;
    {
        const bool branch_taken_0x3c252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C252Cu;
            // 0x3c2530: 0x8e620198  lw          $v0, 0x198($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c252c) {
            ctx->pc = 0x3C270Cu;
            goto label_3c270c;
        }
    }
    ctx->pc = 0x3C2534u;
label_3c2534:
    // 0x3c2534: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c2534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c2538: 0xc0770d8  jal         func_1DC360
    ctx->pc = 0x3C2538u;
    SET_GPR_U32(ctx, 31, 0x3C2540u);
    ctx->pc = 0x3C253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2538u;
            // 0x3c253c: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC360u;
    if (runtime->hasFunction(0x1DC360u)) {
        auto targetFn = runtime->lookupFunction(0x1DC360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2540u; }
        if (ctx->pc != 0x3C2540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC360_0x1dc360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2540u; }
        if (ctx->pc != 0x3C2540u) { return; }
    }
    ctx->pc = 0x3C2540u;
label_3c2540:
    // 0x3c2540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c2540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2544: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c2544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2548: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x3c2548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x3c254c: 0xc0fec1c  jal         func_3FB070
    ctx->pc = 0x3C254Cu;
    SET_GPR_U32(ctx, 31, 0x3C2554u);
    ctx->pc = 0x3C2550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C254Cu;
            // 0x3c2550: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB070u;
    if (runtime->hasFunction(0x3FB070u)) {
        auto targetFn = runtime->lookupFunction(0x3FB070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2554u; }
        if (ctx->pc != 0x3C2554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB070_0x3fb070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2554u; }
        if (ctx->pc != 0x3C2554u) { return; }
    }
    ctx->pc = 0x3C2554u;
label_3c2554:
    // 0x3c2554: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3C2554u;
    {
        const bool branch_taken_0x3c2554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2554) {
            ctx->pc = 0x3C2708u;
            goto label_3c2708;
        }
    }
    ctx->pc = 0x3C255Cu;
label_3c255c:
    // 0x3c255c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c255cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c2560: 0xc0770e8  jal         func_1DC3A0
    ctx->pc = 0x3C2560u;
    SET_GPR_U32(ctx, 31, 0x3C2568u);
    ctx->pc = 0x3C2564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2560u;
            // 0x3c2564: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3A0u;
    if (runtime->hasFunction(0x1DC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2568u; }
        if (ctx->pc != 0x3C2568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3A0_0x1dc3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2568u; }
        if (ctx->pc != 0x3C2568u) { return; }
    }
    ctx->pc = 0x3C2568u;
label_3c2568:
    // 0x3c2568: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c2568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3c256c: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x3C256Cu;
    {
        const bool branch_taken_0x3c256c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c256c) {
            ctx->pc = 0x3C2570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C256Cu;
            // 0x3c2570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2700u;
            goto label_3c2700;
        }
    }
    ctx->pc = 0x3C2574u;
    // 0x3c2574: 0xc0f00c8  jal         func_3C0320
    ctx->pc = 0x3C2574u;
    SET_GPR_U32(ctx, 31, 0x3C257Cu);
    ctx->pc = 0x3C2578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2574u;
            // 0x3c2578: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C0320u;
    if (runtime->hasFunction(0x3C0320u)) {
        auto targetFn = runtime->lookupFunction(0x3C0320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C257Cu; }
        if (ctx->pc != 0x3C257Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0320_0x3c0320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C257Cu; }
        if (ctx->pc != 0x3C257Cu) { return; }
    }
    ctx->pc = 0x3C257Cu;
label_3c257c:
    // 0x3c257c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C257Cu;
    {
        const bool branch_taken_0x3c257c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c257c) {
            ctx->pc = 0x3C2580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C257Cu;
            // 0x3c2580: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2598u;
            goto label_3c2598;
        }
    }
    ctx->pc = 0x3C2584u;
    // 0x3c2584: 0xc0f00c4  jal         func_3C0310
    ctx->pc = 0x3C2584u;
    SET_GPR_U32(ctx, 31, 0x3C258Cu);
    ctx->pc = 0x3C2588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2584u;
            // 0x3c2588: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C0310u;
    if (runtime->hasFunction(0x3C0310u)) {
        auto targetFn = runtime->lookupFunction(0x3C0310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C258Cu; }
        if (ctx->pc != 0x3C258Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0310_0x3c0310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C258Cu; }
        if (ctx->pc != 0x3C258Cu) { return; }
    }
    ctx->pc = 0x3C258Cu;
label_3c258c:
    // 0x3c258c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C258Cu;
    {
        const bool branch_taken_0x3c258c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c258c) {
            ctx->pc = 0x3C2590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C258Cu;
            // 0x3c2590: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C25F0u;
            goto label_3c25f0;
        }
    }
    ctx->pc = 0x3C2594u;
    // 0x3c2594: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x3c2594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_3c2598:
    // 0x3c2598: 0xc0f00c0  jal         func_3C0300
    ctx->pc = 0x3C2598u;
    SET_GPR_U32(ctx, 31, 0x3C25A0u);
    ctx->pc = 0x3C0300u;
    if (runtime->hasFunction(0x3C0300u)) {
        auto targetFn = runtime->lookupFunction(0x3C0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25A0u; }
        if (ctx->pc != 0x3C25A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0300_0x3c0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25A0u; }
        if (ctx->pc != 0x3C25A0u) { return; }
    }
    ctx->pc = 0x3C25A0u;
label_3c25a0:
    // 0x3c25a0: 0xc0cf0e4  jal         func_33C390
    ctx->pc = 0x3C25A0u;
    SET_GPR_U32(ctx, 31, 0x3C25A8u);
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25A8u; }
        if (ctx->pc != 0x3C25A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25A8u; }
        if (ctx->pc != 0x3C25A8u) { return; }
    }
    ctx->pc = 0x3C25A8u;
label_3c25a8:
    // 0x3c25a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c25a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25ac: 0xc0ceff0  jal         func_33BFC0
    ctx->pc = 0x3C25ACu;
    SET_GPR_U32(ctx, 31, 0x3C25B4u);
    ctx->pc = 0x3C25B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C25ACu;
            // 0x3c25b0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFC0u;
    if (runtime->hasFunction(0x33BFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25B4u; }
        if (ctx->pc != 0x3C25B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFC0_0x33bfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25B4u; }
        if (ctx->pc != 0x3C25B4u) { return; }
    }
    ctx->pc = 0x3C25B4u;
label_3c25b4:
    // 0x3c25b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c25b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25b8: 0xc077264  jal         func_1DC990
    ctx->pc = 0x3C25B8u;
    SET_GPR_U32(ctx, 31, 0x3C25C0u);
    ctx->pc = 0x3C25BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C25B8u;
            // 0x3c25bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25C0u; }
        if (ctx->pc != 0x3C25C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25C0u; }
        if (ctx->pc != 0x3C25C0u) { return; }
    }
    ctx->pc = 0x3C25C0u;
label_3c25c0:
    // 0x3c25c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c25c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25c4: 0xc0cef94  jal         func_33BE50
    ctx->pc = 0x3C25C4u;
    SET_GPR_U32(ctx, 31, 0x3C25CCu);
    ctx->pc = 0x3C25C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C25C4u;
            // 0x3c25c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE50u;
    if (runtime->hasFunction(0x33BE50u)) {
        auto targetFn = runtime->lookupFunction(0x33BE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25CCu; }
        if (ctx->pc != 0x3C25CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE50_0x33be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25CCu; }
        if (ctx->pc != 0x3C25CCu) { return; }
    }
    ctx->pc = 0x3C25CCu;
label_3c25cc:
    // 0x3c25cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c25ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c25d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c25d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c25d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c25dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c25dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c25e0: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x3c25e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x3c25e4: 0xc0b884c  jal         func_2E2130
    ctx->pc = 0x3C25E4u;
    SET_GPR_U32(ctx, 31, 0x3C25ECu);
    ctx->pc = 0x3C25E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C25E4u;
            // 0x3c25e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25ECu; }
        if (ctx->pc != 0x3C25ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25ECu; }
        if (ctx->pc != 0x3C25ECu) { return; }
    }
    ctx->pc = 0x3C25ECu;
label_3c25ec:
    // 0x3c25ec: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x3c25ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_3c25f0:
    // 0x3c25f0: 0xc0f00cc  jal         func_3C0330
    ctx->pc = 0x3C25F0u;
    SET_GPR_U32(ctx, 31, 0x3C25F8u);
    ctx->pc = 0x3C0330u;
    if (runtime->hasFunction(0x3C0330u)) {
        auto targetFn = runtime->lookupFunction(0x3C0330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25F8u; }
        if (ctx->pc != 0x3C25F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0330_0x3c0330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C25F8u; }
        if (ctx->pc != 0x3C25F8u) { return; }
    }
    ctx->pc = 0x3C25F8u;
label_3c25f8:
    // 0x3c25f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c25f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c25fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2600: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C2600u;
    {
        const bool branch_taken_0x3c2600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c2600) {
            ctx->pc = 0x3C2604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2600u;
            // 0x3c2604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2624u;
            goto label_3c2624;
        }
    }
    ctx->pc = 0x3C2608u;
    // 0x3c2608: 0xc0f00cc  jal         func_3C0330
    ctx->pc = 0x3C2608u;
    SET_GPR_U32(ctx, 31, 0x3C2610u);
    ctx->pc = 0x3C260Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2608u;
            // 0x3c260c: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C0330u;
    if (runtime->hasFunction(0x3C0330u)) {
        auto targetFn = runtime->lookupFunction(0x3C0330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2610u; }
        if (ctx->pc != 0x3C2610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0330_0x3c0330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2610u; }
        if (ctx->pc != 0x3C2610u) { return; }
    }
    ctx->pc = 0x3C2610u;
label_3c2610:
    // 0x3c2610: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c2610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c2614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c2614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c2618: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C2618u;
    {
        const bool branch_taken_0x3c2618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c2618) {
            ctx->pc = 0x3C261Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2618u;
            // 0x3c261c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C263Cu;
            goto label_3c263c;
        }
    }
    ctx->pc = 0x3C2620u;
    // 0x3c2620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c2620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2624:
    // 0x3c2624: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x3c2624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x3c2628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c2628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c262c: 0xc0fece8  jal         func_3FB3A0
    ctx->pc = 0x3C262Cu;
    SET_GPR_U32(ctx, 31, 0x3C2634u);
    ctx->pc = 0x3C2630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C262Cu;
            // 0x3c2630: 0x26670070  addiu       $a3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB3A0u;
    if (runtime->hasFunction(0x3FB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x3FB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2634u; }
        if (ctx->pc != 0x3C2634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB3A0_0x3fb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2634u; }
        if (ctx->pc != 0x3C2634u) { return; }
    }
    ctx->pc = 0x3C2634u;
label_3c2634:
    // 0x3c2634: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3C2634u;
    {
        const bool branch_taken_0x3c2634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2634) {
            ctx->pc = 0x3C2708u;
            goto label_3c2708;
        }
    }
    ctx->pc = 0x3C263Cu;
label_3c263c:
    // 0x3c263c: 0xc0770c0  jal         func_1DC300
    ctx->pc = 0x3C263Cu;
    SET_GPR_U32(ctx, 31, 0x3C2644u);
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2644u; }
        if (ctx->pc != 0x3C2644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2644u; }
        if (ctx->pc != 0x3C2644u) { return; }
    }
    ctx->pc = 0x3C2644u;
label_3c2644:
    // 0x3c2644: 0xc0cef5c  jal         func_33BD70
    ctx->pc = 0x3C2644u;
    SET_GPR_U32(ctx, 31, 0x3C264Cu);
    ctx->pc = 0x3C2648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2644u;
            // 0x3c2648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BD70u;
    if (runtime->hasFunction(0x33BD70u)) {
        auto targetFn = runtime->lookupFunction(0x33BD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C264Cu; }
        if (ctx->pc != 0x3C264Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BD70_0x33bd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C264Cu; }
        if (ctx->pc != 0x3C264Cu) { return; }
    }
    ctx->pc = 0x3C264Cu;
label_3c264c:
    // 0x3c264c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c2650: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3C2650u;
    {
        const bool branch_taken_0x3c2650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c2650) {
            ctx->pc = 0x3C26D8u;
            goto label_3c26d8;
        }
    }
    ctx->pc = 0x3C2658u;
    // 0x3c2658: 0xc0770c0  jal         func_1DC300
    ctx->pc = 0x3C2658u;
    SET_GPR_U32(ctx, 31, 0x3C2660u);
    ctx->pc = 0x3C265Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2658u;
            // 0x3c265c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2660u; }
        if (ctx->pc != 0x3C2660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2660u; }
        if (ctx->pc != 0x3C2660u) { return; }
    }
    ctx->pc = 0x3C2660u;
label_3c2660:
    // 0x3c2660: 0xc0cef98  jal         func_33BE60
    ctx->pc = 0x3C2660u;
    SET_GPR_U32(ctx, 31, 0x3C2668u);
    ctx->pc = 0x3C2664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2660u;
            // 0x3c2664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE60u;
    if (runtime->hasFunction(0x33BE60u)) {
        auto targetFn = runtime->lookupFunction(0x33BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2668u; }
        if (ctx->pc != 0x3C2668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE60_0x33be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2668u; }
        if (ctx->pc != 0x3C2668u) { return; }
    }
    ctx->pc = 0x3C2668u;
label_3c2668:
    // 0x3c2668: 0xc0efc4c  jal         func_3BF130
    ctx->pc = 0x3C2668u;
    SET_GPR_U32(ctx, 31, 0x3C2670u);
    ctx->pc = 0x3C266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2668u;
            // 0x3c266c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF130u;
    if (runtime->hasFunction(0x3BF130u)) {
        auto targetFn = runtime->lookupFunction(0x3BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2670u; }
        if (ctx->pc != 0x3C2670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF130_0x3bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2670u; }
        if (ctx->pc != 0x3C2670u) { return; }
    }
    ctx->pc = 0x3C2670u;
label_3c2670:
    // 0x3c2670: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c2670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c2674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2678: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C2678u;
    {
        const bool branch_taken_0x3c2678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c2678) {
            ctx->pc = 0x3C267Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2678u;
            // 0x3c267c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C26ACu;
            goto label_3c26ac;
        }
    }
    ctx->pc = 0x3C2680u;
    // 0x3c2680: 0xc0770c0  jal         func_1DC300
    ctx->pc = 0x3C2680u;
    SET_GPR_U32(ctx, 31, 0x3C2688u);
    ctx->pc = 0x3C2684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2680u;
            // 0x3c2684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2688u; }
        if (ctx->pc != 0x3C2688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2688u; }
        if (ctx->pc != 0x3C2688u) { return; }
    }
    ctx->pc = 0x3C2688u;
label_3c2688:
    // 0x3c2688: 0xc0cef98  jal         func_33BE60
    ctx->pc = 0x3C2688u;
    SET_GPR_U32(ctx, 31, 0x3C2690u);
    ctx->pc = 0x3C268Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2688u;
            // 0x3c268c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE60u;
    if (runtime->hasFunction(0x33BE60u)) {
        auto targetFn = runtime->lookupFunction(0x33BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2690u; }
        if (ctx->pc != 0x3C2690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE60_0x33be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2690u; }
        if (ctx->pc != 0x3C2690u) { return; }
    }
    ctx->pc = 0x3C2690u;
label_3c2690:
    // 0x3c2690: 0xc0efc4c  jal         func_3BF130
    ctx->pc = 0x3C2690u;
    SET_GPR_U32(ctx, 31, 0x3C2698u);
    ctx->pc = 0x3C2694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2690u;
            // 0x3c2694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF130u;
    if (runtime->hasFunction(0x3BF130u)) {
        auto targetFn = runtime->lookupFunction(0x3BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2698u; }
        if (ctx->pc != 0x3C2698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF130_0x3bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2698u; }
        if (ctx->pc != 0x3C2698u) { return; }
    }
    ctx->pc = 0x3C2698u;
label_3c2698:
    // 0x3c2698: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c2698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c269c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c26a0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C26A0u;
    {
        const bool branch_taken_0x3c26a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c26a0) {
            ctx->pc = 0x3C26D8u;
            goto label_3c26d8;
        }
    }
    ctx->pc = 0x3C26A8u;
    // 0x3c26a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c26a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c26ac:
    // 0x3c26ac: 0xc0770c0  jal         func_1DC300
    ctx->pc = 0x3C26ACu;
    SET_GPR_U32(ctx, 31, 0x3C26B4u);
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C26B4u; }
        if (ctx->pc != 0x3C26B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C26B4u; }
        if (ctx->pc != 0x3C26B4u) { return; }
    }
    ctx->pc = 0x3C26B4u;
label_3c26b4:
    // 0x3c26b4: 0xc0cef98  jal         func_33BE60
    ctx->pc = 0x3C26B4u;
    SET_GPR_U32(ctx, 31, 0x3C26BCu);
    ctx->pc = 0x3C26B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C26B4u;
            // 0x3c26b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE60u;
    if (runtime->hasFunction(0x33BE60u)) {
        auto targetFn = runtime->lookupFunction(0x33BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C26BCu; }
        if (ctx->pc != 0x3C26BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE60_0x33be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C26BCu; }
        if (ctx->pc != 0x3C26BCu) { return; }
    }
    ctx->pc = 0x3C26BCu;
label_3c26bc:
    // 0x3c26bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c26bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c26c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c26c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c26c4: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x3c26c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x3c26c8: 0xc0fece8  jal         func_3FB3A0
    ctx->pc = 0x3C26C8u;
    SET_GPR_U32(ctx, 31, 0x3C26D0u);
    ctx->pc = 0x3C26CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C26C8u;
            // 0x3c26cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB3A0u;
    if (runtime->hasFunction(0x3FB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x3FB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C26D0u; }
        if (ctx->pc != 0x3C26D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB3A0_0x3fb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C26D0u; }
        if (ctx->pc != 0x3C26D0u) { return; }
    }
    ctx->pc = 0x3C26D0u;
label_3c26d0:
    // 0x3c26d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3C26D0u;
    {
        const bool branch_taken_0x3c26d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c26d0) {
            ctx->pc = 0x3C2708u;
            goto label_3c2708;
        }
    }
    ctx->pc = 0x3C26D8u;
label_3c26d8:
    // 0x3c26d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c26dc: 0xc0770d8  jal         func_1DC360
    ctx->pc = 0x3C26DCu;
    SET_GPR_U32(ctx, 31, 0x3C26E4u);
    ctx->pc = 0x3C26E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C26DCu;
            // 0x3c26e0: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC360u;
    if (runtime->hasFunction(0x1DC360u)) {
        auto targetFn = runtime->lookupFunction(0x1DC360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C26E4u; }
        if (ctx->pc != 0x3C26E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC360_0x1dc360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C26E4u; }
        if (ctx->pc != 0x3C26E4u) { return; }
    }
    ctx->pc = 0x3C26E4u;
label_3c26e4:
    // 0x3c26e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c26e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c26e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c26e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c26ec: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x3c26ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x3c26f0: 0xc0fec1c  jal         func_3FB070
    ctx->pc = 0x3C26F0u;
    SET_GPR_U32(ctx, 31, 0x3C26F8u);
    ctx->pc = 0x3C26F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C26F0u;
            // 0x3c26f4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB070u;
    if (runtime->hasFunction(0x3FB070u)) {
        auto targetFn = runtime->lookupFunction(0x3FB070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C26F8u; }
        if (ctx->pc != 0x3C26F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB070_0x3fb070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C26F8u; }
        if (ctx->pc != 0x3C26F8u) { return; }
    }
    ctx->pc = 0x3C26F8u;
label_3c26f8:
    // 0x3c26f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C26F8u;
    {
        const bool branch_taken_0x3c26f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c26f8) {
            ctx->pc = 0x3C2708u;
            goto label_3c2708;
        }
    }
    ctx->pc = 0x3C2700u;
label_3c2700:
    // 0x3c2700: 0xc0febe0  jal         func_3FAF80
    ctx->pc = 0x3C2700u;
    SET_GPR_U32(ctx, 31, 0x3C2708u);
    ctx->pc = 0x3C2704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2700u;
            // 0x3c2704: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FAF80u;
    if (runtime->hasFunction(0x3FAF80u)) {
        auto targetFn = runtime->lookupFunction(0x3FAF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2708u; }
        if (ctx->pc != 0x3C2708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FAF80_0x3faf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2708u; }
        if (ctx->pc != 0x3C2708u) { return; }
    }
    ctx->pc = 0x3C2708u;
label_3c2708:
    // 0x3c2708: 0x8e620198  lw          $v0, 0x198($s3)
    ctx->pc = 0x3c2708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
label_3c270c:
    // 0x3c270c: 0x504000a1  beql        $v0, $zero, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3C270Cu;
    {
        const bool branch_taken_0x3c270c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c270c) {
            ctx->pc = 0x3C2710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C270Cu;
            // 0x3c2710: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2994u;
            goto label_3c2994;
        }
    }
    ctx->pc = 0x3C2714u;
    // 0x3c2714: 0xc0efea4  jal         func_3BFA90
    ctx->pc = 0x3C2714u;
    SET_GPR_U32(ctx, 31, 0x3C271Cu);
    ctx->pc = 0x3C2718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2714u;
            // 0x3c2718: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA90u;
    if (runtime->hasFunction(0x3BFA90u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C271Cu; }
        if (ctx->pc != 0x3C271Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA90_0x3bfa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C271Cu; }
        if (ctx->pc != 0x3C271Cu) { return; }
    }
    ctx->pc = 0x3C271Cu;
label_3c271c:
    // 0x3c271c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c271cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2720: 0xc0f0cf4  jal         func_3C33D0
    ctx->pc = 0x3C2720u;
    SET_GPR_U32(ctx, 31, 0x3C2728u);
    ctx->pc = 0x3C2724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2720u;
            // 0x3c2724: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C33D0u;
    if (runtime->hasFunction(0x3C33D0u)) {
        auto targetFn = runtime->lookupFunction(0x3C33D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2728u; }
        if (ctx->pc != 0x3C2728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C33D0_0x3c33d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2728u; }
        if (ctx->pc != 0x3C2728u) { return; }
    }
    ctx->pc = 0x3C2728u;
label_3c2728:
    // 0x3c2728: 0xc0c05b8  jal         func_3016E0
    ctx->pc = 0x3C2728u;
    SET_GPR_U32(ctx, 31, 0x3C2730u);
    ctx->pc = 0x3C272Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2728u;
            // 0x3c272c: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3016E0u;
    if (runtime->hasFunction(0x3016E0u)) {
        auto targetFn = runtime->lookupFunction(0x3016E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2730u; }
        if (ctx->pc != 0x3C2730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003016E0_0x3016e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2730u; }
        if (ctx->pc != 0x3C2730u) { return; }
    }
    ctx->pc = 0x3C2730u;
label_3c2730:
    // 0x3c2730: 0x84420028  lh          $v0, 0x28($v0)
    ctx->pc = 0x3c2730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x3c2734: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x3c2734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x3c2738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c273c: 0xc0f0cf0  jal         func_3C33C0
    ctx->pc = 0x3C273Cu;
    SET_GPR_U32(ctx, 31, 0x3C2744u);
    ctx->pc = 0x3C2740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C273Cu;
            // 0x3c2740: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C33C0u;
    if (runtime->hasFunction(0x3C33C0u)) {
        auto targetFn = runtime->lookupFunction(0x3C33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2744u; }
        if (ctx->pc != 0x3C2744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C33C0_0x3c33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2744u; }
        if (ctx->pc != 0x3C2744u) { return; }
    }
    ctx->pc = 0x3C2744u;
label_3c2744:
    // 0x3c2744: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c2744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2748: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x3c2748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x3c274c: 0xc0b7d3c  jal         func_2DF4F0
    ctx->pc = 0x3C274Cu;
    SET_GPR_U32(ctx, 31, 0x3C2754u);
    ctx->pc = 0x3C2750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C274Cu;
            // 0x3c2750: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF4F0u;
    if (runtime->hasFunction(0x2DF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2754u; }
        if (ctx->pc != 0x3C2754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF4F0_0x2df4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2754u; }
        if (ctx->pc != 0x3C2754u) { return; }
    }
    ctx->pc = 0x3C2754u;
label_3c2754:
    // 0x3c2754: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3c2754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3c2758: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x3C2758u;
    SET_GPR_U32(ctx, 31, 0x3C2760u);
    ctx->pc = 0x3C275Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2758u;
            // 0x3c275c: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2760u; }
        if (ctx->pc != 0x3C2760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2760u; }
        if (ctx->pc != 0x3C2760u) { return; }
    }
    ctx->pc = 0x3C2760u;
label_3c2760:
    // 0x3c2760: 0xc077264  jal         func_1DC990
    ctx->pc = 0x3C2760u;
    SET_GPR_U32(ctx, 31, 0x3C2768u);
    ctx->pc = 0x3C2764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2760u;
            // 0x3c2764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2768u; }
        if (ctx->pc != 0x3C2768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2768u; }
        if (ctx->pc != 0x3C2768u) { return; }
    }
    ctx->pc = 0x3C2768u;
label_3c2768:
    // 0x3c2768: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c2768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c276c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3c276cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3c2770: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3C2770u;
    SET_GPR_U32(ctx, 31, 0x3C2778u);
    ctx->pc = 0x3C2774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2770u;
            // 0x3c2774: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2778u; }
        if (ctx->pc != 0x3C2778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2778u; }
        if (ctx->pc != 0x3C2778u) { return; }
    }
    ctx->pc = 0x3C2778u;
label_3c2778:
    // 0x3c2778: 0xc077264  jal         func_1DC990
    ctx->pc = 0x3C2778u;
    SET_GPR_U32(ctx, 31, 0x3C2780u);
    ctx->pc = 0x3C277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2778u;
            // 0x3c277c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2780u; }
        if (ctx->pc != 0x3C2780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2780u; }
        if (ctx->pc != 0x3C2780u) { return; }
    }
    ctx->pc = 0x3C2780u;
label_3c2780:
    // 0x3c2780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c2780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2784: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x3c2784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x3c2788: 0xc0b8214  jal         func_2E0850
    ctx->pc = 0x3C2788u;
    SET_GPR_U32(ctx, 31, 0x3C2790u);
    ctx->pc = 0x3C278Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2788u;
            // 0x3c278c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0850u;
    if (runtime->hasFunction(0x2E0850u)) {
        auto targetFn = runtime->lookupFunction(0x2E0850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2790u; }
        if (ctx->pc != 0x3C2790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0850_0x2e0850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2790u; }
        if (ctx->pc != 0x3C2790u) { return; }
    }
    ctx->pc = 0x3C2790u;
label_3c2790:
    // 0x3c2790: 0xc0efc4c  jal         func_3BF130
    ctx->pc = 0x3C2790u;
    SET_GPR_U32(ctx, 31, 0x3C2798u);
    ctx->pc = 0x3C2794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2790u;
            // 0x3c2794: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF130u;
    if (runtime->hasFunction(0x3BF130u)) {
        auto targetFn = runtime->lookupFunction(0x3BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2798u; }
        if (ctx->pc != 0x3C2798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF130_0x3bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2798u; }
        if (ctx->pc != 0x3C2798u) { return; }
    }
    ctx->pc = 0x3C2798u;
label_3c2798:
    // 0x3c2798: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c2798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c279c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c27a0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C27A0u;
    {
        const bool branch_taken_0x3c27a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c27a0) {
            ctx->pc = 0x3C27A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C27A0u;
            // 0x3c27a4: 0x3c023f40  lui         $v0, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C27C4u;
            goto label_3c27c4;
        }
    }
    ctx->pc = 0x3C27A8u;
    // 0x3c27a8: 0xc0efc4c  jal         func_3BF130
    ctx->pc = 0x3C27A8u;
    SET_GPR_U32(ctx, 31, 0x3C27B0u);
    ctx->pc = 0x3C27ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C27A8u;
            // 0x3c27ac: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF130u;
    if (runtime->hasFunction(0x3BF130u)) {
        auto targetFn = runtime->lookupFunction(0x3BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C27B0u; }
        if (ctx->pc != 0x3C27B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF130_0x3bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C27B0u; }
        if (ctx->pc != 0x3C27B0u) { return; }
    }
    ctx->pc = 0x3C27B0u;
label_3c27b0:
    // 0x3c27b0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c27b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c27b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c27b8: 0x54620070  bnel        $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x3C27B8u;
    {
        const bool branch_taken_0x3c27b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c27b8) {
            ctx->pc = 0x3C27BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C27B8u;
            // 0x3c27bc: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C297Cu;
            goto label_3c297c;
        }
    }
    ctx->pc = 0x3C27C0u;
    // 0x3c27c0: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x3c27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_3c27c4:
    // 0x3c27c4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3c27c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3c27c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c27c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c27cc: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x3C27CCu;
    SET_GPR_U32(ctx, 31, 0x3C27D4u);
    ctx->pc = 0x3C27D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C27CCu;
            // 0x3c27d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C27D4u; }
        if (ctx->pc != 0x3C27D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C27D4u; }
        if (ctx->pc != 0x3C27D4u) { return; }
    }
    ctx->pc = 0x3C27D4u;
label_3c27d4:
    // 0x3c27d4: 0xc0e5f64  jal         func_397D90
    ctx->pc = 0x3C27D4u;
    SET_GPR_U32(ctx, 31, 0x3C27DCu);
    ctx->pc = 0x3C27D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C27D4u;
            // 0x3c27d8: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397D90u;
    if (runtime->hasFunction(0x397D90u)) {
        auto targetFn = runtime->lookupFunction(0x397D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C27DCu; }
        if (ctx->pc != 0x3C27DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397D90_0x397d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C27DCu; }
        if (ctx->pc != 0x3C27DCu) { return; }
    }
    ctx->pc = 0x3C27DCu;
label_3c27dc:
    // 0x3c27dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c27dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c27e0: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x3c27e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x3c27e4: 0xc0b7d3c  jal         func_2DF4F0
    ctx->pc = 0x3C27E4u;
    SET_GPR_U32(ctx, 31, 0x3C27ECu);
    ctx->pc = 0x3C27E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C27E4u;
            // 0x3c27e8: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF4F0u;
    if (runtime->hasFunction(0x2DF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C27ECu; }
        if (ctx->pc != 0x3C27ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF4F0_0x2df4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C27ECu; }
        if (ctx->pc != 0x3C27ECu) { return; }
    }
    ctx->pc = 0x3C27ECu;
label_3c27ec:
    // 0x3c27ec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3c27ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3c27f0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3c27f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3c27f4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3C27F4u;
    SET_GPR_U32(ctx, 31, 0x3C27FCu);
    ctx->pc = 0x3C27F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C27F4u;
            // 0x3c27f8: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C27FCu; }
        if (ctx->pc != 0x3C27FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C27FCu; }
        if (ctx->pc != 0x3C27FCu) { return; }
    }
    ctx->pc = 0x3C27FCu;
label_3c27fc:
    // 0x3c27fc: 0xc077264  jal         func_1DC990
    ctx->pc = 0x3C27FCu;
    SET_GPR_U32(ctx, 31, 0x3C2804u);
    ctx->pc = 0x3C2800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C27FCu;
            // 0x3c2800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2804u; }
        if (ctx->pc != 0x3C2804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2804u; }
        if (ctx->pc != 0x3C2804u) { return; }
    }
    ctx->pc = 0x3C2804u;
label_3c2804:
    // 0x3c2804: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c2804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2808: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3c2808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3c280c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3C280Cu;
    SET_GPR_U32(ctx, 31, 0x3C2814u);
    ctx->pc = 0x3C2810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C280Cu;
            // 0x3c2810: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2814u; }
        if (ctx->pc != 0x3C2814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2814u; }
        if (ctx->pc != 0x3C2814u) { return; }
    }
    ctx->pc = 0x3C2814u;
label_3c2814:
    // 0x3c2814: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3c2814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3c2818: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3C2818u;
    SET_GPR_U32(ctx, 31, 0x3C2820u);
    ctx->pc = 0x3C281Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2818u;
            // 0x3c281c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2820u; }
        if (ctx->pc != 0x3C2820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2820u; }
        if (ctx->pc != 0x3C2820u) { return; }
    }
    ctx->pc = 0x3C2820u;
label_3c2820:
    // 0x3c2820: 0xc0e110c  jal         func_384430
    ctx->pc = 0x3C2820u;
    SET_GPR_U32(ctx, 31, 0x3C2828u);
    ctx->pc = 0x3C2824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2820u;
            // 0x3c2824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384430u;
    if (runtime->hasFunction(0x384430u)) {
        auto targetFn = runtime->lookupFunction(0x384430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2828u; }
        if (ctx->pc != 0x3C2828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384430_0x384430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2828u; }
        if (ctx->pc != 0x3C2828u) { return; }
    }
    ctx->pc = 0x3C2828u;
label_3c2828:
    // 0x3c2828: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c2828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c282c: 0xc0783ac  jal         func_1E0EB0
    ctx->pc = 0x3C282Cu;
    SET_GPR_U32(ctx, 31, 0x3C2834u);
    ctx->pc = 0x3C2830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C282Cu;
            // 0x3c2830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2834u; }
        if (ctx->pc != 0x3C2834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2834u; }
        if (ctx->pc != 0x3C2834u) { return; }
    }
    ctx->pc = 0x3C2834u;
label_3c2834:
    // 0x3c2834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2838: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3c2838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3c283c: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x3C283Cu;
    SET_GPR_U32(ctx, 31, 0x3C2844u);
    ctx->pc = 0x3C2840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C283Cu;
            // 0x3c2840: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2844u; }
        if (ctx->pc != 0x3C2844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2844u; }
        if (ctx->pc != 0x3C2844u) { return; }
    }
    ctx->pc = 0x3C2844u;
label_3c2844:
    // 0x3c2844: 0xc0b6d5c  jal         func_2DB570
    ctx->pc = 0x3C2844u;
    SET_GPR_U32(ctx, 31, 0x3C284Cu);
    ctx->pc = 0x3C2848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2844u;
            // 0x3c2848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C284Cu; }
        if (ctx->pc != 0x3C284Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C284Cu; }
        if (ctx->pc != 0x3C284Cu) { return; }
    }
    ctx->pc = 0x3C284Cu;
label_3c284c:
    // 0x3c284c: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x3c284cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x3c2850: 0xc0cefec  jal         func_33BFB0
    ctx->pc = 0x3C2850u;
    SET_GPR_U32(ctx, 31, 0x3C2858u);
    ctx->pc = 0x3C2854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2850u;
            // 0x3c2854: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2858u; }
        if (ctx->pc != 0x3C2858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2858u; }
        if (ctx->pc != 0x3C2858u) { return; }
    }
    ctx->pc = 0x3C2858u;
label_3c2858:
    // 0x3c2858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c285c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3C285Cu;
    SET_GPR_U32(ctx, 31, 0x3C2864u);
    ctx->pc = 0x3C2860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C285Cu;
            // 0x3c2860: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2864u; }
        if (ctx->pc != 0x3C2864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2864u; }
        if (ctx->pc != 0x3C2864u) { return; }
    }
    ctx->pc = 0x3C2864u;
label_3c2864:
    // 0x3c2864: 0xc077280  jal         func_1DCA00
    ctx->pc = 0x3C2864u;
    SET_GPR_U32(ctx, 31, 0x3C286Cu);
    ctx->pc = 0x3C2868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2864u;
            // 0x3c2868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C286Cu; }
        if (ctx->pc != 0x3C286Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C286Cu; }
        if (ctx->pc != 0x3C286Cu) { return; }
    }
    ctx->pc = 0x3C286Cu;
label_3c286c:
    // 0x3c286c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c286cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2870: 0xc0b6d5c  jal         func_2DB570
    ctx->pc = 0x3C2870u;
    SET_GPR_U32(ctx, 31, 0x3C2878u);
    ctx->pc = 0x3C2874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2870u;
            // 0x3c2874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2878u; }
        if (ctx->pc != 0x3C2878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2878u; }
        if (ctx->pc != 0x3C2878u) { return; }
    }
    ctx->pc = 0x3C2878u;
label_3c2878:
    // 0x3c2878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c287c: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x3C287Cu;
    SET_GPR_U32(ctx, 31, 0x3C2884u);
    ctx->pc = 0x3C2880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C287Cu;
            // 0x3c2880: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2884u; }
        if (ctx->pc != 0x3C2884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2884u; }
        if (ctx->pc != 0x3C2884u) { return; }
    }
    ctx->pc = 0x3C2884u;
label_3c2884:
    // 0x3c2884: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2884u;
    SET_GPR_U32(ctx, 31, 0x3C288Cu);
    ctx->pc = 0x3C2888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2884u;
            // 0x3c2888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C288Cu; }
        if (ctx->pc != 0x3C288Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C288Cu; }
        if (ctx->pc != 0x3C288Cu) { return; }
    }
    ctx->pc = 0x3C288Cu;
label_3c288c:
    // 0x3c288c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c288cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2890: 0xc077280  jal         func_1DCA00
    ctx->pc = 0x3C2890u;
    SET_GPR_U32(ctx, 31, 0x3C2898u);
    ctx->pc = 0x3C2894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2890u;
            // 0x3c2894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2898u; }
        if (ctx->pc != 0x3C2898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2898u; }
        if (ctx->pc != 0x3C2898u) { return; }
    }
    ctx->pc = 0x3C2898u;
label_3c2898:
    // 0x3c2898: 0xc07727c  jal         func_1DC9F0
    ctx->pc = 0x3C2898u;
    SET_GPR_U32(ctx, 31, 0x3C28A0u);
    ctx->pc = 0x3C289Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2898u;
            // 0x3c289c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28A0u; }
        if (ctx->pc != 0x3C28A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28A0u; }
        if (ctx->pc != 0x3C28A0u) { return; }
    }
    ctx->pc = 0x3C28A0u;
label_3c28a0:
    // 0x3c28a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c28a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c28a4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3c28a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3c28a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c28a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c28ac: 0xc0c05d4  jal         func_301750
    ctx->pc = 0x3C28ACu;
    SET_GPR_U32(ctx, 31, 0x3C28B4u);
    ctx->pc = 0x3C28B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C28ACu;
            // 0x3c28b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28B4u; }
        if (ctx->pc != 0x3C28B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28B4u; }
        if (ctx->pc != 0x3C28B4u) { return; }
    }
    ctx->pc = 0x3C28B4u;
label_3c28b4:
    // 0x3c28b4: 0xc0c05dc  jal         func_301770
    ctx->pc = 0x3C28B4u;
    SET_GPR_U32(ctx, 31, 0x3C28BCu);
    ctx->pc = 0x3C28B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C28B4u;
            // 0x3c28b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28BCu; }
        if (ctx->pc != 0x3C28BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28BCu; }
        if (ctx->pc != 0x3C28BCu) { return; }
    }
    ctx->pc = 0x3C28BCu;
label_3c28bc:
    // 0x3c28bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c28bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c28c0: 0xc077280  jal         func_1DCA00
    ctx->pc = 0x3C28C0u;
    SET_GPR_U32(ctx, 31, 0x3C28C8u);
    ctx->pc = 0x3C28C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C28C0u;
            // 0x3c28c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28C8u; }
        if (ctx->pc != 0x3C28C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28C8u; }
        if (ctx->pc != 0x3C28C8u) { return; }
    }
    ctx->pc = 0x3C28C8u;
label_3c28c8:
    // 0x3c28c8: 0xc07727c  jal         func_1DC9F0
    ctx->pc = 0x3C28C8u;
    SET_GPR_U32(ctx, 31, 0x3C28D0u);
    ctx->pc = 0x3C28CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C28C8u;
            // 0x3c28cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28D0u; }
        if (ctx->pc != 0x3C28D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28D0u; }
        if (ctx->pc != 0x3C28D0u) { return; }
    }
    ctx->pc = 0x3C28D0u;
label_3c28d0:
    // 0x3c28d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c28d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c28d4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3c28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3c28d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c28d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c28dc: 0xc0c05d4  jal         func_301750
    ctx->pc = 0x3C28DCu;
    SET_GPR_U32(ctx, 31, 0x3C28E4u);
    ctx->pc = 0x3C28E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C28DCu;
            // 0x3c28e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28E4u; }
        if (ctx->pc != 0x3C28E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28E4u; }
        if (ctx->pc != 0x3C28E4u) { return; }
    }
    ctx->pc = 0x3C28E4u;
label_3c28e4:
    // 0x3c28e4: 0xc077280  jal         func_1DCA00
    ctx->pc = 0x3C28E4u;
    SET_GPR_U32(ctx, 31, 0x3C28ECu);
    ctx->pc = 0x3C28E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C28E4u;
            // 0x3c28e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28ECu; }
        if (ctx->pc != 0x3C28ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28ECu; }
        if (ctx->pc != 0x3C28ECu) { return; }
    }
    ctx->pc = 0x3C28ECu;
label_3c28ec:
    // 0x3c28ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c28ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c28f0: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C28F0u;
    SET_GPR_U32(ctx, 31, 0x3C28F8u);
    ctx->pc = 0x3C28F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C28F0u;
            // 0x3c28f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28F8u; }
        if (ctx->pc != 0x3C28F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C28F8u; }
        if (ctx->pc != 0x3C28F8u) { return; }
    }
    ctx->pc = 0x3C28F8u;
label_3c28f8:
    // 0x3c28f8: 0xc0c1bfc  jal         func_306FF0
    ctx->pc = 0x3C28F8u;
    SET_GPR_U32(ctx, 31, 0x3C2900u);
    ctx->pc = 0x3C28FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C28F8u;
            // 0x3c28fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306FF0u;
    if (runtime->hasFunction(0x306FF0u)) {
        auto targetFn = runtime->lookupFunction(0x306FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2900u; }
        if (ctx->pc != 0x3C2900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306FF0_0x306ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2900u; }
        if (ctx->pc != 0x3C2900u) { return; }
    }
    ctx->pc = 0x3C2900u;
label_3c2900:
    // 0x3c2900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2904: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c2904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2908: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x3C2908u;
    SET_GPR_U32(ctx, 31, 0x3C2910u);
    ctx->pc = 0x3C290Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2908u;
            // 0x3c290c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2910u; }
        if (ctx->pc != 0x3C2910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2910u; }
        if (ctx->pc != 0x3C2910u) { return; }
    }
    ctx->pc = 0x3C2910u;
label_3c2910:
    // 0x3c2910: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c2910u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3c2914: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2914u;
    SET_GPR_U32(ctx, 31, 0x3C291Cu);
    ctx->pc = 0x3C2918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2914u;
            // 0x3c2918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C291Cu; }
        if (ctx->pc != 0x3C291Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C291Cu; }
        if (ctx->pc != 0x3C291Cu) { return; }
    }
    ctx->pc = 0x3C291Cu;
label_3c291c:
    // 0x3c291c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c291cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2920: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2920u;
    SET_GPR_U32(ctx, 31, 0x3C2928u);
    ctx->pc = 0x3C2924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2920u;
            // 0x3c2924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2928u; }
        if (ctx->pc != 0x3C2928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2928u; }
        if (ctx->pc != 0x3C2928u) { return; }
    }
    ctx->pc = 0x3C2928u;
label_3c2928:
    // 0x3c2928: 0xc0f0dfc  jal         func_3C37F0
    ctx->pc = 0x3C2928u;
    SET_GPR_U32(ctx, 31, 0x3C2930u);
    ctx->pc = 0x3C292Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2928u;
            // 0x3c292c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C37F0u;
    if (runtime->hasFunction(0x3C37F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2930u; }
        if (ctx->pc != 0x3C2930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37F0_0x3c37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2930u; }
        if (ctx->pc != 0x3C2930u) { return; }
    }
    ctx->pc = 0x3C2930u;
label_3c2930:
    // 0x3c2930: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x3c2930u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3c2934: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3c2934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3c2938: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c2938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3c293c: 0xc0efc40  jal         func_3BF100
    ctx->pc = 0x3C293Cu;
    SET_GPR_U32(ctx, 31, 0x3C2944u);
    ctx->pc = 0x3C2940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C293Cu;
            // 0x3c2940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF100u;
    if (runtime->hasFunction(0x3BF100u)) {
        auto targetFn = runtime->lookupFunction(0x3BF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2944u; }
        if (ctx->pc != 0x3C2944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF100_0x3bf100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2944u; }
        if (ctx->pc != 0x3C2944u) { return; }
    }
    ctx->pc = 0x3C2944u;
label_3c2944:
    // 0x3c2944: 0xc0c05dc  jal         func_301770
    ctx->pc = 0x3C2944u;
    SET_GPR_U32(ctx, 31, 0x3C294Cu);
    ctx->pc = 0x3C2948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2944u;
            // 0x3c2948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C294Cu; }
        if (ctx->pc != 0x3C294Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C294Cu; }
        if (ctx->pc != 0x3C294Cu) { return; }
    }
    ctx->pc = 0x3C294Cu;
label_3c294c:
    // 0x3c294c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c294cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2950: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2950u;
    SET_GPR_U32(ctx, 31, 0x3C2958u);
    ctx->pc = 0x3C2954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2950u;
            // 0x3c2954: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2958u; }
        if (ctx->pc != 0x3C2958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2958u; }
        if (ctx->pc != 0x3C2958u) { return; }
    }
    ctx->pc = 0x3C2958u;
label_3c2958:
    // 0x3c2958: 0xc0f0dfc  jal         func_3C37F0
    ctx->pc = 0x3C2958u;
    SET_GPR_U32(ctx, 31, 0x3C2960u);
    ctx->pc = 0x3C295Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2958u;
            // 0x3c295c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C37F0u;
    if (runtime->hasFunction(0x3C37F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2960u; }
        if (ctx->pc != 0x3C2960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37F0_0x3c37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2960u; }
        if (ctx->pc != 0x3C2960u) { return; }
    }
    ctx->pc = 0x3C2960u;
label_3c2960:
    // 0x3c2960: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x3c2960u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3c2964: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3c2964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3c2968: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3c2968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3c296c: 0xc0efc40  jal         func_3BF100
    ctx->pc = 0x3C296Cu;
    SET_GPR_U32(ctx, 31, 0x3C2974u);
    ctx->pc = 0x3C2970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C296Cu;
            // 0x3c2970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF100u;
    if (runtime->hasFunction(0x3BF100u)) {
        auto targetFn = runtime->lookupFunction(0x3BF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2974u; }
        if (ctx->pc != 0x3C2974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF100_0x3bf100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2974u; }
        if (ctx->pc != 0x3C2974u) { return; }
    }
    ctx->pc = 0x3C2974u;
label_3c2974:
    // 0x3c2974: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x3C2974u;
    {
        const bool branch_taken_0x3c2974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2974u;
            // 0x3c2978: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2974) {
            ctx->pc = 0x3C3010u;
            goto label_3c3010;
        }
    }
    ctx->pc = 0x3C297Cu;
label_3c297c:
    // 0x3c297c: 0xc0f0cec  jal         func_3C33B0
    ctx->pc = 0x3C297Cu;
    SET_GPR_U32(ctx, 31, 0x3C2984u);
    ctx->pc = 0x3C2980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C297Cu;
            // 0x3c2980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C33B0u;
    if (runtime->hasFunction(0x3C33B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C33B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2984u; }
        if (ctx->pc != 0x3C2984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C33B0_0x3c33b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2984u; }
        if (ctx->pc != 0x3C2984u) { return; }
    }
    ctx->pc = 0x3C2984u;
label_3c2984:
    // 0x3c2984: 0xc0f00c0  jal         func_3C0300
    ctx->pc = 0x3C2984u;
    SET_GPR_U32(ctx, 31, 0x3C298Cu);
    ctx->pc = 0x3C2988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2984u;
            // 0x3c2988: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C0300u;
    if (runtime->hasFunction(0x3C0300u)) {
        auto targetFn = runtime->lookupFunction(0x3C0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C298Cu; }
        if (ctx->pc != 0x3C298Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0300_0x3c0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C298Cu; }
        if (ctx->pc != 0x3C298Cu) { return; }
    }
    ctx->pc = 0x3C298Cu;
label_3c298c:
    // 0x3c298c: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x3C298Cu;
    {
        const bool branch_taken_0x3c298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c298c) {
            ctx->pc = 0x3C300Cu;
            goto label_3c300c;
        }
    }
    ctx->pc = 0x3C2994u;
label_3c2994:
    // 0x3c2994: 0xc0efea4  jal         func_3BFA90
    ctx->pc = 0x3C2994u;
    SET_GPR_U32(ctx, 31, 0x3C299Cu);
    ctx->pc = 0x3BFA90u;
    if (runtime->hasFunction(0x3BFA90u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C299Cu; }
        if (ctx->pc != 0x3C299Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA90_0x3bfa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C299Cu; }
        if (ctx->pc != 0x3C299Cu) { return; }
    }
    ctx->pc = 0x3C299Cu;
label_3c299c:
    // 0x3c299c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c299cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c29a0: 0xc07731c  jal         func_1DCC70
    ctx->pc = 0x3C29A0u;
    SET_GPR_U32(ctx, 31, 0x3C29A8u);
    ctx->pc = 0x3C29A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C29A0u;
            // 0x3c29a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29A8u; }
        if (ctx->pc != 0x3C29A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29A8u; }
        if (ctx->pc != 0x3C29A8u) { return; }
    }
    ctx->pc = 0x3C29A8u;
label_3c29a8:
    // 0x3c29a8: 0xc0f0ce8  jal         func_3C33A0
    ctx->pc = 0x3C29A8u;
    SET_GPR_U32(ctx, 31, 0x3C29B0u);
    ctx->pc = 0x3C29ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C29A8u;
            // 0x3c29ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C33A0u;
    if (runtime->hasFunction(0x3C33A0u)) {
        auto targetFn = runtime->lookupFunction(0x3C33A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29B0u; }
        if (ctx->pc != 0x3C29B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C33A0_0x3c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29B0u; }
        if (ctx->pc != 0x3C29B0u) { return; }
    }
    ctx->pc = 0x3C29B0u;
label_3c29b0:
    // 0x3c29b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c29b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c29b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c29b8: 0xc0770d8  jal         func_1DC360
    ctx->pc = 0x3C29B8u;
    SET_GPR_U32(ctx, 31, 0x3C29C0u);
    ctx->pc = 0x3C29BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C29B8u;
            // 0x3c29bc: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC360u;
    if (runtime->hasFunction(0x1DC360u)) {
        auto targetFn = runtime->lookupFunction(0x1DC360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29C0u; }
        if (ctx->pc != 0x3C29C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC360_0x1dc360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29C0u; }
        if (ctx->pc != 0x3C29C0u) { return; }
    }
    ctx->pc = 0x3C29C0u;
label_3c29c0:
    // 0x3c29c0: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x3c29c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x3c29c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c29c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c29c8: 0xc0febd8  jal         func_3FAF60
    ctx->pc = 0x3C29C8u;
    SET_GPR_U32(ctx, 31, 0x3C29D0u);
    ctx->pc = 0x3C29CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C29C8u;
            // 0x3c29cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FAF60u;
    if (runtime->hasFunction(0x3FAF60u)) {
        auto targetFn = runtime->lookupFunction(0x3FAF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29D0u; }
        if (ctx->pc != 0x3C29D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FAF60_0x3faf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29D0u; }
        if (ctx->pc != 0x3C29D0u) { return; }
    }
    ctx->pc = 0x3C29D0u;
label_3c29d0:
    // 0x3c29d0: 0x8e6301b8  lw          $v1, 0x1B8($s3)
    ctx->pc = 0x3c29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x3c29d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c29d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c29d8: 0xc0770c0  jal         func_1DC300
    ctx->pc = 0x3C29D8u;
    SET_GPR_U32(ctx, 31, 0x3C29E0u);
    ctx->pc = 0x3C29DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C29D8u;
            // 0x3c29dc: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29E0u; }
        if (ctx->pc != 0x3C29E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29E0u; }
        if (ctx->pc != 0x3C29E0u) { return; }
    }
    ctx->pc = 0x3C29E0u;
label_3c29e0:
    // 0x3c29e0: 0xc0f0cdc  jal         func_3C3370
    ctx->pc = 0x3C29E0u;
    SET_GPR_U32(ctx, 31, 0x3C29E8u);
    ctx->pc = 0x3C29E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C29E0u;
            // 0x3c29e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3370u;
    if (runtime->hasFunction(0x3C3370u)) {
        auto targetFn = runtime->lookupFunction(0x3C3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29E8u; }
        if (ctx->pc != 0x3C29E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3370_0x3c3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29E8u; }
        if (ctx->pc != 0x3C29E8u) { return; }
    }
    ctx->pc = 0x3C29E8u;
label_3c29e8:
    // 0x3c29e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3c29e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3c29ec: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x3C29ECu;
    {
        const bool branch_taken_0x3c29ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c29ec) {
            ctx->pc = 0x3C29F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C29ECu;
            // 0x3c29f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2B1Cu;
            goto label_3c2b1c;
        }
    }
    ctx->pc = 0x3C29F4u;
    // 0x3c29f4: 0xc0b6d5c  jal         func_2DB570
    ctx->pc = 0x3C29F4u;
    SET_GPR_U32(ctx, 31, 0x3C29FCu);
    ctx->pc = 0x3C29F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C29F4u;
            // 0x3c29f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29FCu; }
        if (ctx->pc != 0x3C29FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C29FCu; }
        if (ctx->pc != 0x3C29FCu) { return; }
    }
    ctx->pc = 0x3C29FCu;
label_3c29fc:
    // 0x3c29fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c29fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2a00: 0xc0f0cd8  jal         func_3C3360
    ctx->pc = 0x3C2A00u;
    SET_GPR_U32(ctx, 31, 0x3C2A08u);
    ctx->pc = 0x3C2A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A00u;
            // 0x3c2a04: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3360u;
    if (runtime->hasFunction(0x3C3360u)) {
        auto targetFn = runtime->lookupFunction(0x3C3360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A08u; }
        if (ctx->pc != 0x3C2A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3360_0x3c3360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A08u; }
        if (ctx->pc != 0x3C2A08u) { return; }
    }
    ctx->pc = 0x3C2A08u;
label_3c2a08:
    // 0x3c2a08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2a0c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3C2A0Cu;
    SET_GPR_U32(ctx, 31, 0x3C2A14u);
    ctx->pc = 0x3C2A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A0Cu;
            // 0x3c2a10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A14u; }
        if (ctx->pc != 0x3C2A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A14u; }
        if (ctx->pc != 0x3C2A14u) { return; }
    }
    ctx->pc = 0x3C2A14u;
label_3c2a14:
    // 0x3c2a14: 0xc077280  jal         func_1DCA00
    ctx->pc = 0x3C2A14u;
    SET_GPR_U32(ctx, 31, 0x3C2A1Cu);
    ctx->pc = 0x3C2A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A14u;
            // 0x3c2a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A1Cu; }
        if (ctx->pc != 0x3C2A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A1Cu; }
        if (ctx->pc != 0x3C2A1Cu) { return; }
    }
    ctx->pc = 0x3C2A1Cu;
label_3c2a1c:
    // 0x3c2a1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c2a1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2a20: 0xc0b6d5c  jal         func_2DB570
    ctx->pc = 0x3C2A20u;
    SET_GPR_U32(ctx, 31, 0x3C2A28u);
    ctx->pc = 0x3C2A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A20u;
            // 0x3c2a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A28u; }
        if (ctx->pc != 0x3C2A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A28u; }
        if (ctx->pc != 0x3C2A28u) { return; }
    }
    ctx->pc = 0x3C2A28u;
label_3c2a28:
    // 0x3c2a28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2a2c: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x3C2A2Cu;
    SET_GPR_U32(ctx, 31, 0x3C2A34u);
    ctx->pc = 0x3C2A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A2Cu;
            // 0x3c2a30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A34u; }
        if (ctx->pc != 0x3C2A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A34u; }
        if (ctx->pc != 0x3C2A34u) { return; }
    }
    ctx->pc = 0x3C2A34u;
label_3c2a34:
    // 0x3c2a34: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x3c2a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x3c2a38: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3C2A38u;
    {
        const bool branch_taken_0x3c2a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2a38) {
            ctx->pc = 0x3C2A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A38u;
            // 0x3c2a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2AA0u;
            goto label_3c2aa0;
        }
    }
    ctx->pc = 0x3C2A40u;
    // 0x3c2a40: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2A40u;
    SET_GPR_U32(ctx, 31, 0x3C2A48u);
    ctx->pc = 0x3C2A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A40u;
            // 0x3c2a44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A48u; }
        if (ctx->pc != 0x3C2A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A48u; }
        if (ctx->pc != 0x3C2A48u) { return; }
    }
    ctx->pc = 0x3C2A48u;
label_3c2a48:
    // 0x3c2a48: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c2a48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2a4c: 0xc077280  jal         func_1DCA00
    ctx->pc = 0x3C2A4Cu;
    SET_GPR_U32(ctx, 31, 0x3C2A54u);
    ctx->pc = 0x3C2A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A4Cu;
            // 0x3c2a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A54u; }
        if (ctx->pc != 0x3C2A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A54u; }
        if (ctx->pc != 0x3C2A54u) { return; }
    }
    ctx->pc = 0x3C2A54u;
label_3c2a54:
    // 0x3c2a54: 0xc07727c  jal         func_1DC9F0
    ctx->pc = 0x3C2A54u;
    SET_GPR_U32(ctx, 31, 0x3C2A5Cu);
    ctx->pc = 0x3C2A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A54u;
            // 0x3c2a58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A5Cu; }
        if (ctx->pc != 0x3C2A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A5Cu; }
        if (ctx->pc != 0x3C2A5Cu) { return; }
    }
    ctx->pc = 0x3C2A5Cu;
label_3c2a5c:
    // 0x3c2a5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2a60: 0xc0c05e0  jal         func_301780
    ctx->pc = 0x3C2A60u;
    SET_GPR_U32(ctx, 31, 0x3C2A68u);
    ctx->pc = 0x3C2A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A60u;
            // 0x3c2a64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A68u; }
        if (ctx->pc != 0x3C2A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A68u; }
        if (ctx->pc != 0x3C2A68u) { return; }
    }
    ctx->pc = 0x3C2A68u;
label_3c2a68:
    // 0x3c2a68: 0xc0c05dc  jal         func_301770
    ctx->pc = 0x3C2A68u;
    SET_GPR_U32(ctx, 31, 0x3C2A70u);
    ctx->pc = 0x3C2A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A68u;
            // 0x3c2a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A70u; }
        if (ctx->pc != 0x3C2A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A70u; }
        if (ctx->pc != 0x3C2A70u) { return; }
    }
    ctx->pc = 0x3C2A70u;
label_3c2a70:
    // 0x3c2a70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c2a70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2a74: 0xc077280  jal         func_1DCA00
    ctx->pc = 0x3C2A74u;
    SET_GPR_U32(ctx, 31, 0x3C2A7Cu);
    ctx->pc = 0x3C2A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A74u;
            // 0x3c2a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A7Cu; }
        if (ctx->pc != 0x3C2A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A7Cu; }
        if (ctx->pc != 0x3C2A7Cu) { return; }
    }
    ctx->pc = 0x3C2A7Cu;
label_3c2a7c:
    // 0x3c2a7c: 0xc07727c  jal         func_1DC9F0
    ctx->pc = 0x3C2A7Cu;
    SET_GPR_U32(ctx, 31, 0x3C2A84u);
    ctx->pc = 0x3C2A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A7Cu;
            // 0x3c2a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A84u; }
        if (ctx->pc != 0x3C2A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A84u; }
        if (ctx->pc != 0x3C2A84u) { return; }
    }
    ctx->pc = 0x3C2A84u;
label_3c2a84:
    // 0x3c2a84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c2a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2a88: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c2a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3c2a8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c2a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c2a90: 0xc0c05d4  jal         func_301750
    ctx->pc = 0x3C2A90u;
    SET_GPR_U32(ctx, 31, 0x3C2A98u);
    ctx->pc = 0x3C2A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2A90u;
            // 0x3c2a94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A98u; }
        if (ctx->pc != 0x3C2A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2A98u; }
        if (ctx->pc != 0x3C2A98u) { return; }
    }
    ctx->pc = 0x3C2A98u;
label_3c2a98:
    // 0x3c2a98: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3C2A98u;
    {
        const bool branch_taken_0x3c2a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2a98) {
            ctx->pc = 0x3C2B18u;
            goto label_3c2b18;
        }
    }
    ctx->pc = 0x3C2AA0u;
label_3c2aa0:
    // 0x3c2aa0: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2AA0u;
    SET_GPR_U32(ctx, 31, 0x3C2AA8u);
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AA8u; }
        if (ctx->pc != 0x3C2AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AA8u; }
        if (ctx->pc != 0x3C2AA8u) { return; }
    }
    ctx->pc = 0x3C2AA8u;
label_3c2aa8:
    // 0x3c2aa8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c2aa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2aac: 0xc077280  jal         func_1DCA00
    ctx->pc = 0x3C2AACu;
    SET_GPR_U32(ctx, 31, 0x3C2AB4u);
    ctx->pc = 0x3C2AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2AACu;
            // 0x3c2ab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AB4u; }
        if (ctx->pc != 0x3C2AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AB4u; }
        if (ctx->pc != 0x3C2AB4u) { return; }
    }
    ctx->pc = 0x3C2AB4u;
label_3c2ab4:
    // 0x3c2ab4: 0xc07727c  jal         func_1DC9F0
    ctx->pc = 0x3C2AB4u;
    SET_GPR_U32(ctx, 31, 0x3C2ABCu);
    ctx->pc = 0x3C2AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2AB4u;
            // 0x3c2ab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2ABCu; }
        if (ctx->pc != 0x3C2ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2ABCu; }
        if (ctx->pc != 0x3C2ABCu) { return; }
    }
    ctx->pc = 0x3C2ABCu;
label_3c2abc:
    // 0x3c2abc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c2abcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ac0: 0xc0f0cd4  jal         func_3C3350
    ctx->pc = 0x3C2AC0u;
    SET_GPR_U32(ctx, 31, 0x3C2AC8u);
    ctx->pc = 0x3C2AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2AC0u;
            // 0x3c2ac4: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3350u;
    if (runtime->hasFunction(0x3C3350u)) {
        auto targetFn = runtime->lookupFunction(0x3C3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AC8u; }
        if (ctx->pc != 0x3C2AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3350_0x3c3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AC8u; }
        if (ctx->pc != 0x3C2AC8u) { return; }
    }
    ctx->pc = 0x3C2AC8u;
label_3c2ac8:
    // 0x3c2ac8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3c2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3c2acc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c2accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ad0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c2ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c2ad4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c2ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ad8: 0xc0c05d4  jal         func_301750
    ctx->pc = 0x3C2AD8u;
    SET_GPR_U32(ctx, 31, 0x3C2AE0u);
    ctx->pc = 0x3C2ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2AD8u;
            // 0x3c2adc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AE0u; }
        if (ctx->pc != 0x3C2AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AE0u; }
        if (ctx->pc != 0x3C2AE0u) { return; }
    }
    ctx->pc = 0x3C2AE0u;
label_3c2ae0:
    // 0x3c2ae0: 0xc0c05dc  jal         func_301770
    ctx->pc = 0x3C2AE0u;
    SET_GPR_U32(ctx, 31, 0x3C2AE8u);
    ctx->pc = 0x3C2AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2AE0u;
            // 0x3c2ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AE8u; }
        if (ctx->pc != 0x3C2AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AE8u; }
        if (ctx->pc != 0x3C2AE8u) { return; }
    }
    ctx->pc = 0x3C2AE8u;
label_3c2ae8:
    // 0x3c2ae8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c2ae8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2aec: 0xc077280  jal         func_1DCA00
    ctx->pc = 0x3C2AECu;
    SET_GPR_U32(ctx, 31, 0x3C2AF4u);
    ctx->pc = 0x3C2AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2AECu;
            // 0x3c2af0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AF4u; }
        if (ctx->pc != 0x3C2AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AF4u; }
        if (ctx->pc != 0x3C2AF4u) { return; }
    }
    ctx->pc = 0x3C2AF4u;
label_3c2af4:
    // 0x3c2af4: 0xc07727c  jal         func_1DC9F0
    ctx->pc = 0x3C2AF4u;
    SET_GPR_U32(ctx, 31, 0x3C2AFCu);
    ctx->pc = 0x3C2AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2AF4u;
            // 0x3c2af8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AFCu; }
        if (ctx->pc != 0x3C2AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2AFCu; }
        if (ctx->pc != 0x3C2AFCu) { return; }
    }
    ctx->pc = 0x3C2AFCu;
label_3c2afc:
    // 0x3c2afc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c2afcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b00: 0xc0f0cd4  jal         func_3C3350
    ctx->pc = 0x3C2B00u;
    SET_GPR_U32(ctx, 31, 0x3C2B08u);
    ctx->pc = 0x3C2B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2B00u;
            // 0x3c2b04: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3350u;
    if (runtime->hasFunction(0x3C3350u)) {
        auto targetFn = runtime->lookupFunction(0x3C3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B08u; }
        if (ctx->pc != 0x3C2B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3350_0x3c3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B08u; }
        if (ctx->pc != 0x3C2B08u) { return; }
    }
    ctx->pc = 0x3C2B08u;
label_3c2b08:
    // 0x3c2b08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c2b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c2b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b10: 0xc0c05d4  jal         func_301750
    ctx->pc = 0x3C2B10u;
    SET_GPR_U32(ctx, 31, 0x3C2B18u);
    ctx->pc = 0x3C2B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2B10u;
            // 0x3c2b14: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B18u; }
        if (ctx->pc != 0x3C2B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B18u; }
        if (ctx->pc != 0x3C2B18u) { return; }
    }
    ctx->pc = 0x3C2B18u;
label_3c2b18:
    // 0x3c2b18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2b1c:
    // 0x3c2b1c: 0xc0e110c  jal         func_384430
    ctx->pc = 0x3C2B1Cu;
    SET_GPR_U32(ctx, 31, 0x3C2B24u);
    ctx->pc = 0x384430u;
    if (runtime->hasFunction(0x384430u)) {
        auto targetFn = runtime->lookupFunction(0x384430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B24u; }
        if (ctx->pc != 0x3C2B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384430_0x384430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B24u; }
        if (ctx->pc != 0x3C2B24u) { return; }
    }
    ctx->pc = 0x3C2B24u;
label_3c2b24:
    // 0x3c2b24: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3c2b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3c2b28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b2c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3C2B2Cu;
    SET_GPR_U32(ctx, 31, 0x3C2B34u);
    ctx->pc = 0x3C2B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2B2Cu;
            // 0x3c2b30: 0x24a58470  addiu       $a1, $a1, -0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B34u; }
        if (ctx->pc != 0x3C2B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B34u; }
        if (ctx->pc != 0x3C2B34u) { return; }
    }
    ctx->pc = 0x3C2B34u;
label_3c2b34:
    // 0x3c2b34: 0xc0f0cd0  jal         func_3C3340
    ctx->pc = 0x3C2B34u;
    SET_GPR_U32(ctx, 31, 0x3C2B3Cu);
    ctx->pc = 0x3C2B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2B34u;
            // 0x3c2b38: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3340u;
    if (runtime->hasFunction(0x3C3340u)) {
        auto targetFn = runtime->lookupFunction(0x3C3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B3Cu; }
        if (ctx->pc != 0x3C2B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3340_0x3c3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B3Cu; }
        if (ctx->pc != 0x3C2B3Cu) { return; }
    }
    ctx->pc = 0x3C2B3Cu;
label_3c2b3c:
    // 0x3c2b3c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x3c2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x3c2b40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c2b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c2b44: 0x0  nop
    ctx->pc = 0x3c2b44u;
    // NOP
    // 0x3c2b48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c2b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c2b4c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2B4Cu;
    {
        const bool branch_taken_0x3c2b4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c2b4c) {
            ctx->pc = 0x3C2B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2B4Cu;
            // 0x3c2b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2B5Cu;
            goto label_3c2b5c;
        }
    }
    ctx->pc = 0x3C2B54u;
    // 0x3c2b54: 0x36310040  ori         $s1, $s1, 0x40
    ctx->pc = 0x3c2b54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
    // 0x3c2b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2b5c:
    // 0x3c2b5c: 0xc077280  jal         func_1DCA00
    ctx->pc = 0x3C2B5Cu;
    SET_GPR_U32(ctx, 31, 0x3C2B64u);
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B64u; }
        if (ctx->pc != 0x3C2B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B64u; }
        if (ctx->pc != 0x3C2B64u) { return; }
    }
    ctx->pc = 0x3C2B64u;
label_3c2b64:
    // 0x3c2b64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c2b64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b68: 0xc0e7ad0  jal         func_39EB40
    ctx->pc = 0x3C2B68u;
    SET_GPR_U32(ctx, 31, 0x3C2B70u);
    ctx->pc = 0x3C2B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2B68u;
            // 0x3c2b6c: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EB40u;
    if (runtime->hasFunction(0x39EB40u)) {
        auto targetFn = runtime->lookupFunction(0x39EB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B70u; }
        if (ctx->pc != 0x3C2B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EB40_0x39eb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B70u; }
        if (ctx->pc != 0x3C2B70u) { return; }
    }
    ctx->pc = 0x3C2B70u;
label_3c2b70:
    // 0x3c2b70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c2b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b74: 0xc0f0ccc  jal         func_3C3330
    ctx->pc = 0x3C2B74u;
    SET_GPR_U32(ctx, 31, 0x3C2B7Cu);
    ctx->pc = 0x3C2B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2B74u;
            // 0x3c2b78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3330u;
    if (runtime->hasFunction(0x3C3330u)) {
        auto targetFn = runtime->lookupFunction(0x3C3330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B7Cu; }
        if (ctx->pc != 0x3C2B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3330_0x3c3330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B7Cu; }
        if (ctx->pc != 0x3C2B7Cu) { return; }
    }
    ctx->pc = 0x3C2B7Cu;
label_3c2b7c:
    // 0x3c2b7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c2b7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3c2b80: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2B80u;
    SET_GPR_U32(ctx, 31, 0x3C2B88u);
    ctx->pc = 0x3C2B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2B80u;
            // 0x3c2b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B88u; }
        if (ctx->pc != 0x3C2B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B88u; }
        if (ctx->pc != 0x3C2B88u) { return; }
    }
    ctx->pc = 0x3C2B88u;
label_3c2b88:
    // 0x3c2b88: 0xc0f0dfc  jal         func_3C37F0
    ctx->pc = 0x3C2B88u;
    SET_GPR_U32(ctx, 31, 0x3C2B90u);
    ctx->pc = 0x3C2B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2B88u;
            // 0x3c2b8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C37F0u;
    if (runtime->hasFunction(0x3C37F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B90u; }
        if (ctx->pc != 0x3C2B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37F0_0x3c37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B90u; }
        if (ctx->pc != 0x3C2B90u) { return; }
    }
    ctx->pc = 0x3C2B90u;
label_3c2b90:
    // 0x3c2b90: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x3c2b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x3c2b94: 0xc0f0c48  jal         func_3C3120
    ctx->pc = 0x3C2B94u;
    SET_GPR_U32(ctx, 31, 0x3C2B9Cu);
    ctx->pc = 0x3C2B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2B94u;
            // 0x3c2b98: 0x27a40178  addiu       $a0, $sp, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3120u;
    if (runtime->hasFunction(0x3C3120u)) {
        auto targetFn = runtime->lookupFunction(0x3C3120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B9Cu; }
        if (ctx->pc != 0x3C2B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3120_0x3c3120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2B9Cu; }
        if (ctx->pc != 0x3C2B9Cu) { return; }
    }
    ctx->pc = 0x3C2B9Cu;
label_3c2b9c:
    // 0x3c2b9c: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x3c2b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c2ba0: 0x27a40174  addiu       $a0, $sp, 0x174
    ctx->pc = 0x3c2ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x3c2ba4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3c2ba4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3c2ba8: 0xc0f0c48  jal         func_3C3120
    ctx->pc = 0x3C2BA8u;
    SET_GPR_U32(ctx, 31, 0x3C2BB0u);
    ctx->pc = 0x3C2BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2BA8u;
            // 0x3c2bac: 0xe7a00174  swc1        $f0, 0x174($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3120u;
    if (runtime->hasFunction(0x3C3120u)) {
        auto targetFn = runtime->lookupFunction(0x3C3120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2BB0u; }
        if (ctx->pc != 0x3C2BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3120_0x3c3120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2BB0u; }
        if (ctx->pc != 0x3C2BB0u) { return; }
    }
    ctx->pc = 0x3C2BB0u;
label_3c2bb0:
    // 0x3c2bb0: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x3c2bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
    // 0x3c2bb4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2BB4u;
    {
        const bool branch_taken_0x3c2bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2bb4) {
            ctx->pc = 0x3C2BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2BB4u;
            // 0x3c2bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2BC8u;
            goto label_3c2bc8;
        }
    }
    ctx->pc = 0x3C2BBCu;
    // 0x3c2bbc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3c2bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3c2bc0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3C2BC0u;
    {
        const bool branch_taken_0x3c2bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2BC0u;
            // 0x3c2bc4: 0xafa0017c  sw          $zero, 0x17C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2bc0) {
            ctx->pc = 0x3C2C60u;
            goto label_3c2c60;
        }
    }
    ctx->pc = 0x3C2BC8u;
label_3c2bc8:
    // 0x3c2bc8: 0xc07731c  jal         func_1DCC70
    ctx->pc = 0x3C2BC8u;
    SET_GPR_U32(ctx, 31, 0x3C2BD0u);
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2BD0u; }
        if (ctx->pc != 0x3C2BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2BD0u; }
        if (ctx->pc != 0x3C2BD0u) { return; }
    }
    ctx->pc = 0x3C2BD0u;
label_3c2bd0:
    // 0x3c2bd0: 0xc0e1114  jal         func_384450
    ctx->pc = 0x3C2BD0u;
    SET_GPR_U32(ctx, 31, 0x3C2BD8u);
    ctx->pc = 0x3C2BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2BD0u;
            // 0x3c2bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384450u;
    if (runtime->hasFunction(0x384450u)) {
        auto targetFn = runtime->lookupFunction(0x384450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2BD8u; }
        if (ctx->pc != 0x3C2BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384450_0x384450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2BD8u; }
        if (ctx->pc != 0x3C2BD8u) { return; }
    }
    ctx->pc = 0x3C2BD8u;
label_3c2bd8:
    // 0x3c2bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2bdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2be0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c2be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c2be4: 0x3c023be4  lui         $v0, 0x3BE4
    ctx->pc = 0x3c2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15332 << 16));
    // 0x3c2be8: 0x3443c388  ori         $v1, $v0, 0xC388
    ctx->pc = 0x3c2be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x3c2bec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3c2becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3c2bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c2bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2bf4: 0x0  nop
    ctx->pc = 0x3c2bf4u;
    // NOP
    // 0x3c2bf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c2bf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c2bfc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3c2bfcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3c2c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2c04: 0x0  nop
    ctx->pc = 0x3c2c04u;
    // NOP
    // 0x3c2c08: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3c2c08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x3c2c0c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3c2c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c2c10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c2c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c2c14: 0xc07731c  jal         func_1DCC70
    ctx->pc = 0x3C2C14u;
    SET_GPR_U32(ctx, 31, 0x3C2C1Cu);
    ctx->pc = 0x3C2C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2C14u;
            // 0x3c2c18: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2C1Cu; }
        if (ctx->pc != 0x3C2C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2C1Cu; }
        if (ctx->pc != 0x3C2C1Cu) { return; }
    }
    ctx->pc = 0x3C2C1Cu;
label_3c2c1c:
    // 0x3c2c1c: 0xc0f0c44  jal         func_3C3110
    ctx->pc = 0x3C2C1Cu;
    SET_GPR_U32(ctx, 31, 0x3C2C24u);
    ctx->pc = 0x3C2C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2C1Cu;
            // 0x3c2c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3110u;
    if (runtime->hasFunction(0x3C3110u)) {
        auto targetFn = runtime->lookupFunction(0x3C3110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2C24u; }
        if (ctx->pc != 0x3C2C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3110_0x3c3110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2C24u; }
        if (ctx->pc != 0x3C2C24u) { return; }
    }
    ctx->pc = 0x3C2C24u;
label_3c2c24:
    // 0x3c2c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2c28: 0x0  nop
    ctx->pc = 0x3c2c28u;
    // NOP
    // 0x3c2c2c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c2c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c2c30: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3c2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x3c2c34: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3c2c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3c2c38: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3c2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3c2c3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c2c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2c40: 0x0  nop
    ctx->pc = 0x3c2c40u;
    // NOP
    // 0x3c2c44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c2c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c2c48: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3c2c48u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3c2c4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2c50: 0x0  nop
    ctx->pc = 0x3c2c50u;
    // NOP
    // 0x3c2c54: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3c2c54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x3c2c58: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3c2c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c2c5c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x3c2c5cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c2c60:
    // 0x3c2c60: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x3c2c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c2c64: 0x3c023d8c  lui         $v0, 0x3D8C
    ctx->pc = 0x3c2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15756 << 16));
    // 0x3c2c68: 0x34425e23  ori         $v0, $v0, 0x5E23
    ctx->pc = 0x3c2c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24099);
    // 0x3c2c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2c70: 0x0  nop
    ctx->pc = 0x3c2c70u;
    // NOP
    // 0x3c2c74: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3c2c74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3c2c78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c2c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c2c7c: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
    ctx->pc = 0x3C2C7Cu;
    {
        const bool branch_taken_0x3c2c7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c2c7c) {
            ctx->pc = 0x3C2C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2C7Cu;
            // 0x3c2c80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2D10u;
            goto label_3c2d10;
        }
    }
    ctx->pc = 0x3C2C84u;
    // 0x3c2c84: 0x3222000a  andi        $v0, $s1, 0xA
    ctx->pc = 0x3c2c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)10);
    // 0x3c2c88: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3C2C88u;
    {
        const bool branch_taken_0x3c2c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2c88) {
            ctx->pc = 0x3C2D0Cu;
            goto label_3c2d0c;
        }
    }
    ctx->pc = 0x3C2C90u;
    // 0x3c2c90: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2C90u;
    SET_GPR_U32(ctx, 31, 0x3C2C98u);
    ctx->pc = 0x3C2C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2C90u;
            // 0x3c2c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2C98u; }
        if (ctx->pc != 0x3C2C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2C98u; }
        if (ctx->pc != 0x3C2C98u) { return; }
    }
    ctx->pc = 0x3C2C98u;
label_3c2c98:
    // 0x3c2c98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c2c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2c9c: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2C9Cu;
    SET_GPR_U32(ctx, 31, 0x3C2CA4u);
    ctx->pc = 0x3C2CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2C9Cu;
            // 0x3c2ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CA4u; }
        if (ctx->pc != 0x3C2CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CA4u; }
        if (ctx->pc != 0x3C2CA4u) { return; }
    }
    ctx->pc = 0x3C2CA4u;
label_3c2ca4:
    // 0x3c2ca4: 0xc0f0dfc  jal         func_3C37F0
    ctx->pc = 0x3C2CA4u;
    SET_GPR_U32(ctx, 31, 0x3C2CACu);
    ctx->pc = 0x3C2CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2CA4u;
            // 0x3c2ca8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C37F0u;
    if (runtime->hasFunction(0x3C37F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CACu; }
        if (ctx->pc != 0x3C2CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37F0_0x3c37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CACu; }
        if (ctx->pc != 0x3C2CACu) { return; }
    }
    ctx->pc = 0x3C2CACu;
label_3c2cac:
    // 0x3c2cac: 0xc7a1017c  lwc1        $f1, 0x17C($sp)
    ctx->pc = 0x3c2cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c2cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2cb4: 0xc0f0c3c  jal         func_3C30F0
    ctx->pc = 0x3C2CB4u;
    SET_GPR_U32(ctx, 31, 0x3C2CBCu);
    ctx->pc = 0x3C2CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2CB4u;
            // 0x3c2cb8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C30F0u;
    if (runtime->hasFunction(0x3C30F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CBCu; }
        if (ctx->pc != 0x3C2CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C30F0_0x3c30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CBCu; }
        if (ctx->pc != 0x3C2CBCu) { return; }
    }
    ctx->pc = 0x3C2CBCu;
label_3c2cbc:
    // 0x3c2cbc: 0xc0c05dc  jal         func_301770
    ctx->pc = 0x3C2CBCu;
    SET_GPR_U32(ctx, 31, 0x3C2CC4u);
    ctx->pc = 0x3C2CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2CBCu;
            // 0x3c2cc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CC4u; }
        if (ctx->pc != 0x3C2CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CC4u; }
        if (ctx->pc != 0x3C2CC4u) { return; }
    }
    ctx->pc = 0x3C2CC4u;
label_3c2cc4:
    // 0x3c2cc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c2cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2cc8: 0xc0c05dc  jal         func_301770
    ctx->pc = 0x3C2CC8u;
    SET_GPR_U32(ctx, 31, 0x3C2CD0u);
    ctx->pc = 0x3C2CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2CC8u;
            // 0x3c2ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CD0u; }
        if (ctx->pc != 0x3C2CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CD0u; }
        if (ctx->pc != 0x3C2CD0u) { return; }
    }
    ctx->pc = 0x3C2CD0u;
label_3c2cd0:
    // 0x3c2cd0: 0xc0f0dfc  jal         func_3C37F0
    ctx->pc = 0x3C2CD0u;
    SET_GPR_U32(ctx, 31, 0x3C2CD8u);
    ctx->pc = 0x3C2CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2CD0u;
            // 0x3c2cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C37F0u;
    if (runtime->hasFunction(0x3C37F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C37F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CD8u; }
        if (ctx->pc != 0x3C2CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C37F0_0x3c37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CD8u; }
        if (ctx->pc != 0x3C2CD8u) { return; }
    }
    ctx->pc = 0x3C2CD8u;
label_3c2cd8:
    // 0x3c2cd8: 0xc7a1017c  lwc1        $f1, 0x17C($sp)
    ctx->pc = 0x3c2cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c2cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ce0: 0xc0f0c3c  jal         func_3C30F0
    ctx->pc = 0x3C2CE0u;
    SET_GPR_U32(ctx, 31, 0x3C2CE8u);
    ctx->pc = 0x3C2CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2CE0u;
            // 0x3c2ce4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C30F0u;
    if (runtime->hasFunction(0x3C30F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CE8u; }
        if (ctx->pc != 0x3C2CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C30F0_0x3c30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CE8u; }
        if (ctx->pc != 0x3C2CE8u) { return; }
    }
    ctx->pc = 0x3C2CE8u;
label_3c2ce8:
    // 0x3c2ce8: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2CE8u;
    SET_GPR_U32(ctx, 31, 0x3C2CF0u);
    ctx->pc = 0x3C2CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2CE8u;
            // 0x3c2cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CF0u; }
        if (ctx->pc != 0x3C2CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CF0u; }
        if (ctx->pc != 0x3C2CF0u) { return; }
    }
    ctx->pc = 0x3C2CF0u;
label_3c2cf0:
    // 0x3c2cf0: 0xc0b6ce8  jal         func_2DB3A0
    ctx->pc = 0x3C2CF0u;
    SET_GPR_U32(ctx, 31, 0x3C2CF8u);
    ctx->pc = 0x3C2CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2CF0u;
            // 0x3c2cf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3A0u;
    if (runtime->hasFunction(0x2DB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CF8u; }
        if (ctx->pc != 0x3C2CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3A0_0x2db3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2CF8u; }
        if (ctx->pc != 0x3C2CF8u) { return; }
    }
    ctx->pc = 0x3C2CF8u;
label_3c2cf8:
    // 0x3c2cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c2cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2cfc: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3C2CFCu;
    SET_GPR_U32(ctx, 31, 0x3C2D04u);
    ctx->pc = 0x3C2D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2CFCu;
            // 0x3c2d00: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2D04u; }
        if (ctx->pc != 0x3C2D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2D04u; }
        if (ctx->pc != 0x3C2D04u) { return; }
    }
    ctx->pc = 0x3C2D04u;
label_3c2d04:
    // 0x3c2d04: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3C2D04u;
    {
        const bool branch_taken_0x3c2d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2d04) {
            ctx->pc = 0x3C2E18u;
            goto label_3c2e18;
        }
    }
    ctx->pc = 0x3C2D0Cu;
label_3c2d0c:
    // 0x3c2d0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c2d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c2d10:
    // 0x3c2d10: 0x27a50174  addiu       $a1, $sp, 0x174
    ctx->pc = 0x3c2d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x3c2d14: 0x27a6017c  addiu       $a2, $sp, 0x17C
    ctx->pc = 0x3c2d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x3c2d18: 0xc0f0c1c  jal         func_3C3070
    ctx->pc = 0x3C2D18u;
    SET_GPR_U32(ctx, 31, 0x3C2D20u);
    ctx->pc = 0x3C2D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2D18u;
            // 0x3c2d1c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3070u;
    if (runtime->hasFunction(0x3C3070u)) {
        auto targetFn = runtime->lookupFunction(0x3C3070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2D20u; }
        if (ctx->pc != 0x3C2D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3070_0x3c3070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2D20u; }
        if (ctx->pc != 0x3C2D20u) { return; }
    }
    ctx->pc = 0x3C2D20u;
label_3c2d20:
    // 0x3c2d20: 0xc7a20174  lwc1        $f2, 0x174($sp)
    ctx->pc = 0x3c2d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c2d24: 0x3c023d74  lui         $v0, 0x3D74
    ctx->pc = 0x3c2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15732 << 16));
    // 0x3c2d28: 0x34428d3f  ori         $v0, $v0, 0x8D3F
    ctx->pc = 0x3c2d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36159);
    // 0x3c2d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2d30: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x3c2d30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3c2d34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c2d34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c2d38: 0x45030026  bc1tl       . + 4 + (0x26 << 2)
    ctx->pc = 0x3C2D38u;
    {
        const bool branch_taken_0x3c2d38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c2d38) {
            ctx->pc = 0x3C2D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2D38u;
            // 0x3c2d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2DD4u;
            goto label_3c2dd4;
        }
    }
    ctx->pc = 0x3C2D40u;
    // 0x3c2d40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c2d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2d44: 0x0  nop
    ctx->pc = 0x3c2d44u;
    // NOP
    // 0x3c2d48: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3c2d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c2d4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C2D4Cu;
    {
        const bool branch_taken_0x3c2d4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C2D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2D4Cu;
            // 0x3c2d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2d4c) {
            ctx->pc = 0x3C2D58u;
            goto label_3c2d58;
        }
    }
    ctx->pc = 0x3C2D54u;
    // 0x3c2d54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c2d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2d58:
    // 0x3c2d58: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2D58u;
    {
        const bool branch_taken_0x3c2d58 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3c2d58) {
            ctx->pc = 0x3C2D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2D58u;
            // 0x3c2d5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2D6Cu;
            goto label_3c2d6c;
        }
    }
    ctx->pc = 0x3C2D60u;
    // 0x3c2d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2d64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C2D64u;
    {
        const bool branch_taken_0x3c2d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2D64u;
            // 0x3c2d68: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2d64) {
            ctx->pc = 0x3C2D84u;
            goto label_3c2d84;
        }
    }
    ctx->pc = 0x3C2D6Cu;
label_3c2d6c:
    // 0x3c2d6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c2d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c2d70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c2d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c2d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c2d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2d78: 0x0  nop
    ctx->pc = 0x3c2d78u;
    // NOP
    // 0x3c2d7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c2d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c2d80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c2d80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c2d84:
    // 0x3c2d84: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3c2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3c2d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c2d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2d8c: 0xc049514  jal         func_125450
    ctx->pc = 0x3C2D8Cu;
    SET_GPR_U32(ctx, 31, 0x3C2D94u);
    ctx->pc = 0x3C2D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2D8Cu;
            // 0x3c2d90: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2D94u; }
        if (ctx->pc != 0x3C2D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2D94u; }
        if (ctx->pc != 0x3C2D94u) { return; }
    }
    ctx->pc = 0x3C2D94u;
label_3c2d94:
    // 0x3c2d94: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x3c2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x3c2d98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c2d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2d9c: 0xc049622  jal         func_125888
    ctx->pc = 0x3C2D9Cu;
    SET_GPR_U32(ctx, 31, 0x3C2DA4u);
    ctx->pc = 0x3C2DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2D9Cu;
            // 0x3c2da0: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DA4u; }
        if (ctx->pc != 0x3C2DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DA4u; }
        if (ctx->pc != 0x3C2DA4u) { return; }
    }
    ctx->pc = 0x3C2DA4u;
label_3c2da4:
    // 0x3c2da4: 0x3c043fcf  lui         $a0, 0x3FCF
    ctx->pc = 0x3c2da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16335 << 16));
    // 0x3c2da8: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x3c2da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x3c2dac: 0x348446bb  ori         $a0, $a0, 0x46BB
    ctx->pc = 0x3c2dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18107);
    // 0x3c2db0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3c2db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3c2db4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3c2db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c2db8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c2db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2dbc: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x3C2DBCu;
    SET_GPR_U32(ctx, 31, 0x3C2DC4u);
    ctx->pc = 0x3C2DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2DBCu;
            // 0x3c2dc0: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DC4u; }
        if (ctx->pc != 0x3C2DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DC4u; }
        if (ctx->pc != 0x3C2DC4u) { return; }
    }
    ctx->pc = 0x3C2DC4u;
label_3c2dc4:
    // 0x3c2dc4: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x3C2DC4u;
    SET_GPR_U32(ctx, 31, 0x3C2DCCu);
    ctx->pc = 0x3C2DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2DC4u;
            // 0x3c2dc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DCCu; }
        if (ctx->pc != 0x3C2DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DCCu; }
        if (ctx->pc != 0x3C2DCCu) { return; }
    }
    ctx->pc = 0x3C2DCCu;
label_3c2dcc:
    // 0x3c2dcc: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x3c2dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x3c2dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2dd4:
    // 0x3c2dd4: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2DD4u;
    SET_GPR_U32(ctx, 31, 0x3C2DDCu);
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DDCu; }
        if (ctx->pc != 0x3C2DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DDCu; }
        if (ctx->pc != 0x3C2DDCu) { return; }
    }
    ctx->pc = 0x3C2DDCu;
label_3c2ddc:
    // 0x3c2ddc: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x3c2ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c2de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2de4: 0xc0f0c3c  jal         func_3C30F0
    ctx->pc = 0x3C2DE4u;
    SET_GPR_U32(ctx, 31, 0x3C2DECu);
    ctx->pc = 0x3C2DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2DE4u;
            // 0x3c2de8: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C30F0u;
    if (runtime->hasFunction(0x3C30F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DECu; }
        if (ctx->pc != 0x3C2DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C30F0_0x3c30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DECu; }
        if (ctx->pc != 0x3C2DECu) { return; }
    }
    ctx->pc = 0x3C2DECu;
label_3c2dec:
    // 0x3c2dec: 0xc0c05dc  jal         func_301770
    ctx->pc = 0x3C2DECu;
    SET_GPR_U32(ctx, 31, 0x3C2DF4u);
    ctx->pc = 0x3C2DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2DECu;
            // 0x3c2df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DF4u; }
        if (ctx->pc != 0x3C2DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2DF4u; }
        if (ctx->pc != 0x3C2DF4u) { return; }
    }
    ctx->pc = 0x3C2DF4u;
label_3c2df4:
    // 0x3c2df4: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x3c2df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c2df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2dfc: 0xc0f0c3c  jal         func_3C30F0
    ctx->pc = 0x3C2DFCu;
    SET_GPR_U32(ctx, 31, 0x3C2E04u);
    ctx->pc = 0x3C2E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2DFCu;
            // 0x3c2e00: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C30F0u;
    if (runtime->hasFunction(0x3C30F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E04u; }
        if (ctx->pc != 0x3C2E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C30F0_0x3c30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E04u; }
        if (ctx->pc != 0x3C2E04u) { return; }
    }
    ctx->pc = 0x3C2E04u;
label_3c2e04:
    // 0x3c2e04: 0xc0f0c18  jal         func_3C3060
    ctx->pc = 0x3C2E04u;
    SET_GPR_U32(ctx, 31, 0x3C2E0Cu);
    ctx->pc = 0x3C2E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E04u;
            // 0x3c2e08: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3060u;
    if (runtime->hasFunction(0x3C3060u)) {
        auto targetFn = runtime->lookupFunction(0x3C3060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E0Cu; }
        if (ctx->pc != 0x3C2E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3060_0x3c3060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E0Cu; }
        if (ctx->pc != 0x3C2E0Cu) { return; }
    }
    ctx->pc = 0x3C2E0Cu;
label_3c2e0c:
    // 0x3c2e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c2e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2e10: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3C2E10u;
    SET_GPR_U32(ctx, 31, 0x3C2E18u);
    ctx->pc = 0x3C2E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E10u;
            // 0x3c2e14: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E18u; }
        if (ctx->pc != 0x3C2E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E18u; }
        if (ctx->pc != 0x3C2E18u) { return; }
    }
    ctx->pc = 0x3C2E18u;
label_3c2e18:
    // 0x3c2e18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c2e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c2e1c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3c2e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3c2e20: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3c2e20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3c2e24: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3C2E24u;
    SET_GPR_U32(ctx, 31, 0x3C2E2Cu);
    ctx->pc = 0x3C2E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E24u;
            // 0x3c2e28: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E2Cu; }
        if (ctx->pc != 0x3C2E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E2Cu; }
        if (ctx->pc != 0x3C2E2Cu) { return; }
    }
    ctx->pc = 0x3C2E2Cu;
label_3c2e2c:
    // 0x3c2e2c: 0xc0e110c  jal         func_384430
    ctx->pc = 0x3C2E2Cu;
    SET_GPR_U32(ctx, 31, 0x3C2E34u);
    ctx->pc = 0x3C2E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E2Cu;
            // 0x3c2e30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384430u;
    if (runtime->hasFunction(0x384430u)) {
        auto targetFn = runtime->lookupFunction(0x384430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E34u; }
        if (ctx->pc != 0x3C2E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384430_0x384430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E34u; }
        if (ctx->pc != 0x3C2E34u) { return; }
    }
    ctx->pc = 0x3C2E34u;
label_3c2e34:
    // 0x3c2e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c2e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2e38: 0xc0f0c14  jal         func_3C3050
    ctx->pc = 0x3C2E38u;
    SET_GPR_U32(ctx, 31, 0x3C2E40u);
    ctx->pc = 0x3C2E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E38u;
            // 0x3c2e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3050u;
    if (runtime->hasFunction(0x3C3050u)) {
        auto targetFn = runtime->lookupFunction(0x3C3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E40u; }
        if (ctx->pc != 0x3C2E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3050_0x3c3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E40u; }
        if (ctx->pc != 0x3C2E40u) { return; }
    }
    ctx->pc = 0x3C2E40u;
label_3c2e40:
    // 0x3c2e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c2e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2e48: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3C2E48u;
    SET_GPR_U32(ctx, 31, 0x3C2E50u);
    ctx->pc = 0x3C2E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E48u;
            // 0x3c2e4c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E50u; }
        if (ctx->pc != 0x3C2E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E50u; }
        if (ctx->pc != 0x3C2E50u) { return; }
    }
    ctx->pc = 0x3C2E50u;
label_3c2e50:
    // 0x3c2e50: 0xc0f0cf4  jal         func_3C33D0
    ctx->pc = 0x3C2E50u;
    SET_GPR_U32(ctx, 31, 0x3C2E58u);
    ctx->pc = 0x3C2E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E50u;
            // 0x3c2e54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C33D0u;
    if (runtime->hasFunction(0x3C33D0u)) {
        auto targetFn = runtime->lookupFunction(0x3C33D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E58u; }
        if (ctx->pc != 0x3C2E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C33D0_0x3c33d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E58u; }
        if (ctx->pc != 0x3C2E58u) { return; }
    }
    ctx->pc = 0x3C2E58u;
label_3c2e58:
    // 0x3c2e58: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2E58u;
    SET_GPR_U32(ctx, 31, 0x3C2E60u);
    ctx->pc = 0x3C2E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E58u;
            // 0x3c2e5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E60u; }
        if (ctx->pc != 0x3C2E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E60u; }
        if (ctx->pc != 0x3C2E60u) { return; }
    }
    ctx->pc = 0x3C2E60u;
label_3c2e60:
    // 0x3c2e60: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x3C2E60u;
    SET_GPR_U32(ctx, 31, 0x3C2E68u);
    ctx->pc = 0x3C2E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E60u;
            // 0x3c2e64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E68u; }
        if (ctx->pc != 0x3C2E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E68u; }
        if (ctx->pc != 0x3C2E68u) { return; }
    }
    ctx->pc = 0x3C2E68u;
label_3c2e68:
    // 0x3c2e68: 0xc0783ac  jal         func_1E0EB0
    ctx->pc = 0x3C2E68u;
    SET_GPR_U32(ctx, 31, 0x3C2E70u);
    ctx->pc = 0x3C2E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E68u;
            // 0x3c2e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E70u; }
        if (ctx->pc != 0x3C2E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E70u; }
        if (ctx->pc != 0x3C2E70u) { return; }
    }
    ctx->pc = 0x3C2E70u;
label_3c2e70:
    // 0x3c2e70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c2e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c2e74: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3c2e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3c2e78: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x3c2e78u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x3c2e7c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3C2E7Cu;
    SET_GPR_U32(ctx, 31, 0x3C2E84u);
    ctx->pc = 0x3C2E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E7Cu;
            // 0x3c2e80: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E84u; }
        if (ctx->pc != 0x3C2E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E84u; }
        if (ctx->pc != 0x3C2E84u) { return; }
    }
    ctx->pc = 0x3C2E84u;
label_3c2e84:
    // 0x3c2e84: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2E84u;
    SET_GPR_U32(ctx, 31, 0x3C2E8Cu);
    ctx->pc = 0x3C2E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E84u;
            // 0x3c2e88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E8Cu; }
        if (ctx->pc != 0x3C2E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E8Cu; }
        if (ctx->pc != 0x3C2E8Cu) { return; }
    }
    ctx->pc = 0x3C2E8Cu;
label_3c2e8c:
    // 0x3c2e8c: 0xc0b6ce8  jal         func_2DB3A0
    ctx->pc = 0x3C2E8Cu;
    SET_GPR_U32(ctx, 31, 0x3C2E94u);
    ctx->pc = 0x3C2E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E8Cu;
            // 0x3c2e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3A0u;
    if (runtime->hasFunction(0x2DB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E94u; }
        if (ctx->pc != 0x3C2E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3A0_0x2db3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2E94u; }
        if (ctx->pc != 0x3C2E94u) { return; }
    }
    ctx->pc = 0x3C2E94u;
label_3c2e94:
    // 0x3c2e94: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3c2e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3c2e98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c2e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2e9c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3C2E9Cu;
    SET_GPR_U32(ctx, 31, 0x3C2EA4u);
    ctx->pc = 0x3C2EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2E9Cu;
            // 0x3c2ea0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EA4u; }
        if (ctx->pc != 0x3C2EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EA4u; }
        if (ctx->pc != 0x3C2EA4u) { return; }
    }
    ctx->pc = 0x3C2EA4u;
label_3c2ea4:
    // 0x3c2ea4: 0xc0e110c  jal         func_384430
    ctx->pc = 0x3C2EA4u;
    SET_GPR_U32(ctx, 31, 0x3C2EACu);
    ctx->pc = 0x3C2EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2EA4u;
            // 0x3c2ea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384430u;
    if (runtime->hasFunction(0x384430u)) {
        auto targetFn = runtime->lookupFunction(0x384430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EACu; }
        if (ctx->pc != 0x3C2EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384430_0x384430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EACu; }
        if (ctx->pc != 0x3C2EACu) { return; }
    }
    ctx->pc = 0x3C2EACu;
label_3c2eac:
    // 0x3c2eac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c2eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2eb0: 0xc0e110c  jal         func_384430
    ctx->pc = 0x3C2EB0u;
    SET_GPR_U32(ctx, 31, 0x3C2EB8u);
    ctx->pc = 0x3C2EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2EB0u;
            // 0x3c2eb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384430u;
    if (runtime->hasFunction(0x384430u)) {
        auto targetFn = runtime->lookupFunction(0x384430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EB8u; }
        if (ctx->pc != 0x3C2EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384430_0x384430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EB8u; }
        if (ctx->pc != 0x3C2EB8u) { return; }
    }
    ctx->pc = 0x3C2EB8u;
label_3c2eb8:
    // 0x3c2eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ebc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c2ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ec0: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x3C2EC0u;
    SET_GPR_U32(ctx, 31, 0x3C2EC8u);
    ctx->pc = 0x3C2EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2EC0u;
            // 0x3c2ec4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EC8u; }
        if (ctx->pc != 0x3C2EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EC8u; }
        if (ctx->pc != 0x3C2EC8u) { return; }
    }
    ctx->pc = 0x3C2EC8u;
label_3c2ec8:
    // 0x3c2ec8: 0xc0e110c  jal         func_384430
    ctx->pc = 0x3C2EC8u;
    SET_GPR_U32(ctx, 31, 0x3C2ED0u);
    ctx->pc = 0x3C2ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2EC8u;
            // 0x3c2ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384430u;
    if (runtime->hasFunction(0x384430u)) {
        auto targetFn = runtime->lookupFunction(0x384430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2ED0u; }
        if (ctx->pc != 0x3C2ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384430_0x384430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2ED0u; }
        if (ctx->pc != 0x3C2ED0u) { return; }
    }
    ctx->pc = 0x3C2ED0u;
label_3c2ed0:
    // 0x3c2ed0: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x3C2ED0u;
    SET_GPR_U32(ctx, 31, 0x3C2ED8u);
    ctx->pc = 0x3C2ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2ED0u;
            // 0x3c2ed4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2ED8u; }
        if (ctx->pc != 0x3C2ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2ED8u; }
        if (ctx->pc != 0x3C2ED8u) { return; }
    }
    ctx->pc = 0x3C2ED8u;
label_3c2ed8:
    // 0x3c2ed8: 0xc0775b4  jal         func_1DD6D0
    ctx->pc = 0x3C2ED8u;
    SET_GPR_U32(ctx, 31, 0x3C2EE0u);
    ctx->pc = 0x3C2EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2ED8u;
            // 0x3c2edc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EE0u; }
        if (ctx->pc != 0x3C2EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EE0u; }
        if (ctx->pc != 0x3C2EE0u) { return; }
    }
    ctx->pc = 0x3C2EE0u;
label_3c2ee0:
    // 0x3c2ee0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c2ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ee4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3c2ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3c2ee8: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x3C2EE8u;
    SET_GPR_U32(ctx, 31, 0x3C2EF0u);
    ctx->pc = 0x3C2EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2EE8u;
            // 0x3c2eec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EF0u; }
        if (ctx->pc != 0x3C2EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EF0u; }
        if (ctx->pc != 0x3C2EF0u) { return; }
    }
    ctx->pc = 0x3C2EF0u;
label_3c2ef0:
    // 0x3c2ef0: 0xc077264  jal         func_1DC990
    ctx->pc = 0x3C2EF0u;
    SET_GPR_U32(ctx, 31, 0x3C2EF8u);
    ctx->pc = 0x3C2EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2EF0u;
            // 0x3c2ef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EF8u; }
        if (ctx->pc != 0x3C2EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2EF8u; }
        if (ctx->pc != 0x3C2EF8u) { return; }
    }
    ctx->pc = 0x3C2EF8u;
label_3c2ef8:
    // 0x3c2ef8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c2ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2efc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3c2efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3c2f00: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x3C2F00u;
    SET_GPR_U32(ctx, 31, 0x3C2F08u);
    ctx->pc = 0x3C2F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2F00u;
            // 0x3c2f04: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2F08u; }
        if (ctx->pc != 0x3C2F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2F08u; }
        if (ctx->pc != 0x3C2F08u) { return; }
    }
    ctx->pc = 0x3C2F08u;
label_3c2f08:
    // 0x3c2f08: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x3c2f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x3c2f0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c2f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2f10: 0xc0feba8  jal         func_3FAEA0
    ctx->pc = 0x3C2F10u;
    SET_GPR_U32(ctx, 31, 0x3C2F18u);
    ctx->pc = 0x3C2F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2F10u;
            // 0x3c2f14: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FAEA0u;
    if (runtime->hasFunction(0x3FAEA0u)) {
        auto targetFn = runtime->lookupFunction(0x3FAEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2F18u; }
        if (ctx->pc != 0x3C2F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FAEA0_0x3faea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2F18u; }
        if (ctx->pc != 0x3C2F18u) { return; }
    }
    ctx->pc = 0x3C2F18u;
label_3c2f18:
    // 0x3c2f18: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x3c2f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c2f1c: 0x3c033d8c  lui         $v1, 0x3D8C
    ctx->pc = 0x3c2f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15756 << 16));
    // 0x3c2f20: 0x34635e23  ori         $v1, $v1, 0x5E23
    ctx->pc = 0x3c2f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24099);
    // 0x3c2f24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c2f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c2f28: 0x0  nop
    ctx->pc = 0x3c2f28u;
    // NOP
    // 0x3c2f2c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3c2f2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3c2f30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c2f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c2f34: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2F34u;
    {
        const bool branch_taken_0x3c2f34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c2f34) {
            ctx->pc = 0x3C2F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2F34u;
            // 0x3c2f38: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C2F4Cu;
            goto label_3c2f4c;
        }
    }
    ctx->pc = 0x3C2F3Cu;
    // 0x3c2f3c: 0x32230004  andi        $v1, $s1, 0x4
    ctx->pc = 0x3c2f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x3c2f40: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3C2F40u;
    {
        const bool branch_taken_0x3c2f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2f40) {
            ctx->pc = 0x3C300Cu;
            goto label_3c300c;
        }
    }
    ctx->pc = 0x3C2F48u;
    // 0x3c2f48: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x3c2f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
label_3c2f4c:
    // 0x3c2f4c: 0xc0f0cd0  jal         func_3C3340
    ctx->pc = 0x3C2F4Cu;
    SET_GPR_U32(ctx, 31, 0x3C2F54u);
    ctx->pc = 0x3C3340u;
    if (runtime->hasFunction(0x3C3340u)) {
        auto targetFn = runtime->lookupFunction(0x3C3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2F54u; }
        if (ctx->pc != 0x3C2F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3340_0x3c3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2F54u; }
        if (ctx->pc != 0x3C2F54u) { return; }
    }
    ctx->pc = 0x3C2F54u;
label_3c2f54:
    // 0x3c2f54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3c2f58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c2f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c2f5c: 0x0  nop
    ctx->pc = 0x3c2f5cu;
    // NOP
    // 0x3c2f60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c2f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c2f64: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x3C2F64u;
    {
        const bool branch_taken_0x3c2f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c2f64) {
            ctx->pc = 0x3C300Cu;
            goto label_3c300c;
        }
    }
    ctx->pc = 0x3C2F6Cu;
    // 0x3c2f6c: 0xc0f0c10  jal         func_3C3040
    ctx->pc = 0x3C2F6Cu;
    SET_GPR_U32(ctx, 31, 0x3C2F74u);
    ctx->pc = 0x3C2F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2F6Cu;
            // 0x3c2f70: 0x266400d0  addiu       $a0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3040u;
    if (runtime->hasFunction(0x3C3040u)) {
        auto targetFn = runtime->lookupFunction(0x3C3040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2F74u; }
        if (ctx->pc != 0x3C2F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3040_0x3c3040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2F74u; }
        if (ctx->pc != 0x3C2F74u) { return; }
    }
    ctx->pc = 0x3C2F74u;
label_3c2f74:
    // 0x3c2f74: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c2f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3c2f78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c2f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c2f7c: 0x0  nop
    ctx->pc = 0x3c2f7cu;
    // NOP
    // 0x3c2f80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3c2f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c2f84: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x3C2F84u;
    {
        const bool branch_taken_0x3c2f84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c2f84) {
            ctx->pc = 0x3C300Cu;
            goto label_3c300c;
        }
    }
    ctx->pc = 0x3C2F8Cu;
    // 0x3c2f8c: 0x266400d0  addiu       $a0, $s3, 0xD0
    ctx->pc = 0x3c2f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x3c2f90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c2f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2f94: 0xc0feb54  jal         func_3FAD50
    ctx->pc = 0x3C2F94u;
    SET_GPR_U32(ctx, 31, 0x3C2F9Cu);
    ctx->pc = 0x3C2F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2F94u;
            // 0x3c2f98: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FAD50u;
    if (runtime->hasFunction(0x3FAD50u)) {
        auto targetFn = runtime->lookupFunction(0x3FAD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2F9Cu; }
        if (ctx->pc != 0x3C2F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FAD50_0x3fad50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2F9Cu; }
        if (ctx->pc != 0x3C2F9Cu) { return; }
    }
    ctx->pc = 0x3C2F9Cu;
label_3c2f9c:
    // 0x3c2f9c: 0xc0e110c  jal         func_384430
    ctx->pc = 0x3C2F9Cu;
    SET_GPR_U32(ctx, 31, 0x3C2FA4u);
    ctx->pc = 0x3C2FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2F9Cu;
            // 0x3c2fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384430u;
    if (runtime->hasFunction(0x384430u)) {
        auto targetFn = runtime->lookupFunction(0x384430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FA4u; }
        if (ctx->pc != 0x3C2FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384430_0x384430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FA4u; }
        if (ctx->pc != 0x3C2FA4u) { return; }
    }
    ctx->pc = 0x3C2FA4u;
label_3c2fa4:
    // 0x3c2fa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c2fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2fa8: 0xc0783ac  jal         func_1E0EB0
    ctx->pc = 0x3C2FA8u;
    SET_GPR_U32(ctx, 31, 0x3C2FB0u);
    ctx->pc = 0x3C2FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2FA8u;
            // 0x3c2fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EB0u;
    if (runtime->hasFunction(0x1E0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FB0u; }
        if (ctx->pc != 0x3C2FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EB0_0x1e0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FB0u; }
        if (ctx->pc != 0x3C2FB0u) { return; }
    }
    ctx->pc = 0x3C2FB0u;
label_3c2fb0:
    // 0x3c2fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2fb4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3c2fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3c2fb8: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x3C2FB8u;
    SET_GPR_U32(ctx, 31, 0x3C2FC0u);
    ctx->pc = 0x3C2FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2FB8u;
            // 0x3c2fbc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FC0u; }
        if (ctx->pc != 0x3C2FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FC0u; }
        if (ctx->pc != 0x3C2FC0u) { return; }
    }
    ctx->pc = 0x3C2FC0u;
label_3c2fc0:
    // 0x3c2fc0: 0x32230004  andi        $v1, $s1, 0x4
    ctx->pc = 0x3c2fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x3c2fc4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C2FC4u;
    {
        const bool branch_taken_0x3c2fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2fc4) {
            ctx->pc = 0x3C300Cu;
            goto label_3c300c;
        }
    }
    ctx->pc = 0x3C2FCCu;
    // 0x3c2fcc: 0xc077280  jal         func_1DCA00
    ctx->pc = 0x3C2FCCu;
    SET_GPR_U32(ctx, 31, 0x3C2FD4u);
    ctx->pc = 0x3C2FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2FCCu;
            // 0x3c2fd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FD4u; }
        if (ctx->pc != 0x3C2FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FD4u; }
        if (ctx->pc != 0x3C2FD4u) { return; }
    }
    ctx->pc = 0x3C2FD4u;
label_3c2fd4:
    // 0x3c2fd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2fd8: 0xc0f0ccc  jal         func_3C3330
    ctx->pc = 0x3C2FD8u;
    SET_GPR_U32(ctx, 31, 0x3C2FE0u);
    ctx->pc = 0x3C2FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2FD8u;
            // 0x3c2fdc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3330u;
    if (runtime->hasFunction(0x3C3330u)) {
        auto targetFn = runtime->lookupFunction(0x3C3330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FE0u; }
        if (ctx->pc != 0x3C2FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3330_0x3c3330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FE0u; }
        if (ctx->pc != 0x3C2FE0u) { return; }
    }
    ctx->pc = 0x3C2FE0u;
label_3c2fe0:
    // 0x3c2fe0: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x3c2fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x3c2fe4: 0xc0b6cec  jal         func_2DB3B0
    ctx->pc = 0x3C2FE4u;
    SET_GPR_U32(ctx, 31, 0x3C2FECu);
    ctx->pc = 0x3C2FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2FE4u;
            // 0x3c2fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FECu; }
        if (ctx->pc != 0x3C2FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FECu; }
        if (ctx->pc != 0x3C2FECu) { return; }
    }
    ctx->pc = 0x3C2FECu;
label_3c2fec:
    // 0x3c2fec: 0xc7ac017c  lwc1        $f12, 0x17C($sp)
    ctx->pc = 0x3c2fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c2ff0: 0xc0f0c3c  jal         func_3C30F0
    ctx->pc = 0x3C2FF0u;
    SET_GPR_U32(ctx, 31, 0x3C2FF8u);
    ctx->pc = 0x3C2FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2FF0u;
            // 0x3c2ff4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C30F0u;
    if (runtime->hasFunction(0x3C30F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FF8u; }
        if (ctx->pc != 0x3C2FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C30F0_0x3c30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C2FF8u; }
        if (ctx->pc != 0x3C2FF8u) { return; }
    }
    ctx->pc = 0x3C2FF8u;
label_3c2ff8:
    // 0x3c2ff8: 0xc0c05dc  jal         func_301770
    ctx->pc = 0x3C2FF8u;
    SET_GPR_U32(ctx, 31, 0x3C3000u);
    ctx->pc = 0x3C2FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C2FF8u;
            // 0x3c2ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3000u; }
        if (ctx->pc != 0x3C3000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3000u; }
        if (ctx->pc != 0x3C3000u) { return; }
    }
    ctx->pc = 0x3C3000u;
label_3c3000:
    // 0x3c3000: 0xc7ac017c  lwc1        $f12, 0x17C($sp)
    ctx->pc = 0x3c3000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c3004: 0xc0f0c3c  jal         func_3C30F0
    ctx->pc = 0x3C3004u;
    SET_GPR_U32(ctx, 31, 0x3C300Cu);
    ctx->pc = 0x3C3008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3004u;
            // 0x3c3008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C30F0u;
    if (runtime->hasFunction(0x3C30F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C300Cu; }
        if (ctx->pc != 0x3C300Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C30F0_0x3c30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C300Cu; }
        if (ctx->pc != 0x3C300Cu) { return; }
    }
    ctx->pc = 0x3C300Cu;
label_3c300c:
    // 0x3c300c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3c300cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3c3010:
    // 0x3c3010: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c3010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3c3014: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c3014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c3018: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c3018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c301c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c301cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c3020: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c3020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c3024: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c3024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c3028: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c3028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c302c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c302cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c3030: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3030u;
            // 0x3c3034: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3038u;
    // 0x3c3038: 0x0  nop
    ctx->pc = 0x3c3038u;
    // NOP
    // 0x3c303c: 0x0  nop
    ctx->pc = 0x3c303cu;
    // NOP
}
