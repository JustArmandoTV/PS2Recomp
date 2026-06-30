#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A27A0
// Address: 0x4a27a0 - 0x4a2a40
void sub_004A27A0_0x4a27a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A27A0_0x4a27a0");
#endif

    switch (ctx->pc) {
        case 0x4a27a0u: goto label_4a27a0;
        case 0x4a27a4u: goto label_4a27a4;
        case 0x4a27a8u: goto label_4a27a8;
        case 0x4a27acu: goto label_4a27ac;
        case 0x4a27b0u: goto label_4a27b0;
        case 0x4a27b4u: goto label_4a27b4;
        case 0x4a27b8u: goto label_4a27b8;
        case 0x4a27bcu: goto label_4a27bc;
        case 0x4a27c0u: goto label_4a27c0;
        case 0x4a27c4u: goto label_4a27c4;
        case 0x4a27c8u: goto label_4a27c8;
        case 0x4a27ccu: goto label_4a27cc;
        case 0x4a27d0u: goto label_4a27d0;
        case 0x4a27d4u: goto label_4a27d4;
        case 0x4a27d8u: goto label_4a27d8;
        case 0x4a27dcu: goto label_4a27dc;
        case 0x4a27e0u: goto label_4a27e0;
        case 0x4a27e4u: goto label_4a27e4;
        case 0x4a27e8u: goto label_4a27e8;
        case 0x4a27ecu: goto label_4a27ec;
        case 0x4a27f0u: goto label_4a27f0;
        case 0x4a27f4u: goto label_4a27f4;
        case 0x4a27f8u: goto label_4a27f8;
        case 0x4a27fcu: goto label_4a27fc;
        case 0x4a2800u: goto label_4a2800;
        case 0x4a2804u: goto label_4a2804;
        case 0x4a2808u: goto label_4a2808;
        case 0x4a280cu: goto label_4a280c;
        case 0x4a2810u: goto label_4a2810;
        case 0x4a2814u: goto label_4a2814;
        case 0x4a2818u: goto label_4a2818;
        case 0x4a281cu: goto label_4a281c;
        case 0x4a2820u: goto label_4a2820;
        case 0x4a2824u: goto label_4a2824;
        case 0x4a2828u: goto label_4a2828;
        case 0x4a282cu: goto label_4a282c;
        case 0x4a2830u: goto label_4a2830;
        case 0x4a2834u: goto label_4a2834;
        case 0x4a2838u: goto label_4a2838;
        case 0x4a283cu: goto label_4a283c;
        case 0x4a2840u: goto label_4a2840;
        case 0x4a2844u: goto label_4a2844;
        case 0x4a2848u: goto label_4a2848;
        case 0x4a284cu: goto label_4a284c;
        case 0x4a2850u: goto label_4a2850;
        case 0x4a2854u: goto label_4a2854;
        case 0x4a2858u: goto label_4a2858;
        case 0x4a285cu: goto label_4a285c;
        case 0x4a2860u: goto label_4a2860;
        case 0x4a2864u: goto label_4a2864;
        case 0x4a2868u: goto label_4a2868;
        case 0x4a286cu: goto label_4a286c;
        case 0x4a2870u: goto label_4a2870;
        case 0x4a2874u: goto label_4a2874;
        case 0x4a2878u: goto label_4a2878;
        case 0x4a287cu: goto label_4a287c;
        case 0x4a2880u: goto label_4a2880;
        case 0x4a2884u: goto label_4a2884;
        case 0x4a2888u: goto label_4a2888;
        case 0x4a288cu: goto label_4a288c;
        case 0x4a2890u: goto label_4a2890;
        case 0x4a2894u: goto label_4a2894;
        case 0x4a2898u: goto label_4a2898;
        case 0x4a289cu: goto label_4a289c;
        case 0x4a28a0u: goto label_4a28a0;
        case 0x4a28a4u: goto label_4a28a4;
        case 0x4a28a8u: goto label_4a28a8;
        case 0x4a28acu: goto label_4a28ac;
        case 0x4a28b0u: goto label_4a28b0;
        case 0x4a28b4u: goto label_4a28b4;
        case 0x4a28b8u: goto label_4a28b8;
        case 0x4a28bcu: goto label_4a28bc;
        case 0x4a28c0u: goto label_4a28c0;
        case 0x4a28c4u: goto label_4a28c4;
        case 0x4a28c8u: goto label_4a28c8;
        case 0x4a28ccu: goto label_4a28cc;
        case 0x4a28d0u: goto label_4a28d0;
        case 0x4a28d4u: goto label_4a28d4;
        case 0x4a28d8u: goto label_4a28d8;
        case 0x4a28dcu: goto label_4a28dc;
        case 0x4a28e0u: goto label_4a28e0;
        case 0x4a28e4u: goto label_4a28e4;
        case 0x4a28e8u: goto label_4a28e8;
        case 0x4a28ecu: goto label_4a28ec;
        case 0x4a28f0u: goto label_4a28f0;
        case 0x4a28f4u: goto label_4a28f4;
        case 0x4a28f8u: goto label_4a28f8;
        case 0x4a28fcu: goto label_4a28fc;
        case 0x4a2900u: goto label_4a2900;
        case 0x4a2904u: goto label_4a2904;
        case 0x4a2908u: goto label_4a2908;
        case 0x4a290cu: goto label_4a290c;
        case 0x4a2910u: goto label_4a2910;
        case 0x4a2914u: goto label_4a2914;
        case 0x4a2918u: goto label_4a2918;
        case 0x4a291cu: goto label_4a291c;
        case 0x4a2920u: goto label_4a2920;
        case 0x4a2924u: goto label_4a2924;
        case 0x4a2928u: goto label_4a2928;
        case 0x4a292cu: goto label_4a292c;
        case 0x4a2930u: goto label_4a2930;
        case 0x4a2934u: goto label_4a2934;
        case 0x4a2938u: goto label_4a2938;
        case 0x4a293cu: goto label_4a293c;
        case 0x4a2940u: goto label_4a2940;
        case 0x4a2944u: goto label_4a2944;
        case 0x4a2948u: goto label_4a2948;
        case 0x4a294cu: goto label_4a294c;
        case 0x4a2950u: goto label_4a2950;
        case 0x4a2954u: goto label_4a2954;
        case 0x4a2958u: goto label_4a2958;
        case 0x4a295cu: goto label_4a295c;
        case 0x4a2960u: goto label_4a2960;
        case 0x4a2964u: goto label_4a2964;
        case 0x4a2968u: goto label_4a2968;
        case 0x4a296cu: goto label_4a296c;
        case 0x4a2970u: goto label_4a2970;
        case 0x4a2974u: goto label_4a2974;
        case 0x4a2978u: goto label_4a2978;
        case 0x4a297cu: goto label_4a297c;
        case 0x4a2980u: goto label_4a2980;
        case 0x4a2984u: goto label_4a2984;
        case 0x4a2988u: goto label_4a2988;
        case 0x4a298cu: goto label_4a298c;
        case 0x4a2990u: goto label_4a2990;
        case 0x4a2994u: goto label_4a2994;
        case 0x4a2998u: goto label_4a2998;
        case 0x4a299cu: goto label_4a299c;
        case 0x4a29a0u: goto label_4a29a0;
        case 0x4a29a4u: goto label_4a29a4;
        case 0x4a29a8u: goto label_4a29a8;
        case 0x4a29acu: goto label_4a29ac;
        case 0x4a29b0u: goto label_4a29b0;
        case 0x4a29b4u: goto label_4a29b4;
        case 0x4a29b8u: goto label_4a29b8;
        case 0x4a29bcu: goto label_4a29bc;
        case 0x4a29c0u: goto label_4a29c0;
        case 0x4a29c4u: goto label_4a29c4;
        case 0x4a29c8u: goto label_4a29c8;
        case 0x4a29ccu: goto label_4a29cc;
        case 0x4a29d0u: goto label_4a29d0;
        case 0x4a29d4u: goto label_4a29d4;
        case 0x4a29d8u: goto label_4a29d8;
        case 0x4a29dcu: goto label_4a29dc;
        case 0x4a29e0u: goto label_4a29e0;
        case 0x4a29e4u: goto label_4a29e4;
        case 0x4a29e8u: goto label_4a29e8;
        case 0x4a29ecu: goto label_4a29ec;
        case 0x4a29f0u: goto label_4a29f0;
        case 0x4a29f4u: goto label_4a29f4;
        case 0x4a29f8u: goto label_4a29f8;
        case 0x4a29fcu: goto label_4a29fc;
        case 0x4a2a00u: goto label_4a2a00;
        case 0x4a2a04u: goto label_4a2a04;
        case 0x4a2a08u: goto label_4a2a08;
        case 0x4a2a0cu: goto label_4a2a0c;
        case 0x4a2a10u: goto label_4a2a10;
        case 0x4a2a14u: goto label_4a2a14;
        case 0x4a2a18u: goto label_4a2a18;
        case 0x4a2a1cu: goto label_4a2a1c;
        case 0x4a2a20u: goto label_4a2a20;
        case 0x4a2a24u: goto label_4a2a24;
        case 0x4a2a28u: goto label_4a2a28;
        case 0x4a2a2cu: goto label_4a2a2c;
        case 0x4a2a30u: goto label_4a2a30;
        case 0x4a2a34u: goto label_4a2a34;
        case 0x4a2a38u: goto label_4a2a38;
        case 0x4a2a3cu: goto label_4a2a3c;
        default: break;
    }

    ctx->pc = 0x4a27a0u;

label_4a27a0:
    // 0x4a27a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a27a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4a27a4:
    // 0x4a27a4: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x4a27a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_4a27a8:
    // 0x4a27a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a27a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4a27ac:
    // 0x4a27ac: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4a27acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a27b0:
    // 0x4a27b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4a27b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4a27b4:
    // 0x4a27b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a27b8:
    // 0x4a27b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a27b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4a27bc:
    // 0x4a27bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a27bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a27c0:
    // 0x4a27c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a27c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a27c4:
    // 0x4a27c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a27c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a27c8:
    // 0x4a27c8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4a27c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a27cc:
    // 0x4a27cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a27ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a27d0:
    // 0x4a27d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a27d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a27d4:
    // 0x4a27d4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4a27d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4a27d8:
    // 0x4a27d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a27d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a27dc:
    // 0x4a27dc: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4a27dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4a27e0:
    // 0x4a27e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a27e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a27e4:
    // 0x4a27e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a27e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a27e8:
    // 0x4a27e8: 0x90900070  lbu         $s0, 0x70($a0)
    ctx->pc = 0x4a27e8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
label_4a27ec:
    // 0x4a27ec: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4a27ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4a27f0:
    // 0x4a27f0: 0xc0506ac  jal         func_141AB0
label_4a27f4:
    if (ctx->pc == 0x4A27F4u) {
        ctx->pc = 0x4A27F4u;
            // 0x4a27f4: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4A27F8u;
        goto label_4a27f8;
    }
    ctx->pc = 0x4A27F0u;
    SET_GPR_U32(ctx, 31, 0x4A27F8u);
    ctx->pc = 0x4A27F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A27F0u;
            // 0x4a27f4: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A27F8u; }
        if (ctx->pc != 0x4A27F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A27F8u; }
        if (ctx->pc != 0x4A27F8u) { return; }
    }
    ctx->pc = 0x4A27F8u;
label_4a27f8:
    // 0x4a27f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a27fc:
    // 0x4a27fc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4a27fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a2800:
    // 0x4a2800: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a2800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a2804:
    // 0x4a2804: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a2804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a2808:
    // 0x4a2808: 0x320f809  jalr        $t9
label_4a280c:
    if (ctx->pc == 0x4A280Cu) {
        ctx->pc = 0x4A280Cu;
            // 0x4a280c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A2810u;
        goto label_4a2810;
    }
    ctx->pc = 0x4A2808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A2810u);
        ctx->pc = 0x4A280Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2808u;
            // 0x4a280c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A2810u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A2810u; }
            if (ctx->pc != 0x4A2810u) { return; }
        }
        }
    }
    ctx->pc = 0x4A2810u;
label_4a2810:
    // 0x4a2810: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x4a2810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_4a2814:
    // 0x4a2814: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4a2814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4a2818:
    // 0x4a2818: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x4a2818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_4a281c:
    // 0x4a281c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x4a281cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4a2820:
    // 0x4a2820: 0x520018  mult        $zero, $v0, $s2
    ctx->pc = 0x4a2820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4a2824:
    // 0x4a2824: 0x1247c2  srl         $t0, $s2, 31
    ctx->pc = 0x4a2824u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_4a2828:
    // 0x4a2828: 0xc6240078  lwc1        $f4, 0x78($s1)
    ctx->pc = 0x4a2828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4a282c:
    // 0x4a282c: 0x24a59bc0  addiu       $a1, $a1, -0x6440
    ctx->pc = 0x4a282cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
label_4a2830:
    // 0x4a2830: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a2830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a2834:
    // 0x4a2834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a2834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2838:
    // 0x4a2838: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a2838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4a283c:
    // 0x4a283c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4a283cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4a2840:
    // 0x4a2840: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4a2840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4a2844:
    // 0x4a2844: 0x84512102  lh          $s1, 0x2102($v0)
    ctx->pc = 0x4a2844u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_4a2848:
    // 0x4a2848: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a2848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4a284c:
    // 0x4a284c: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x4a284cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a2850:
    // 0x4a2850: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4a2850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4a2854:
    // 0x4a2854: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a2854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a2858:
    // 0x4a2858: 0x84502100  lh          $s0, 0x2100($v0)
    ctx->pc = 0x4a2858u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_4a285c:
    // 0x4a285c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a285cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a2860:
    // 0x4a2860: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a2860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a2864:
    // 0x4a2864: 0x1010  mfhi        $v0
    ctx->pc = 0x4a2864u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4a2868:
    // 0x4a2868: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x4a2868u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_4a286c:
    // 0x4a286c: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x4a286cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_4a2870:
    // 0x4a2870: 0x2502000d  addiu       $v0, $t0, 0xD
    ctx->pc = 0x4a2870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 13));
label_4a2874:
    // 0x4a2874: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4a2874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4a2878:
    // 0x4a2878: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a2878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4a287c:
    // 0x4a287c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4a287cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4a2880:
    // 0x4a2880: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4a2880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4a2884:
    // 0x4a2884: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x4a2884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a2888:
    // 0x4a2888: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4a2888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a288c:
    // 0x4a288c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x4a288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a2890:
    // 0x4a2890: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a2890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a2894:
    // 0x4a2894: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a2894u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2898:
    // 0x4a2898: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a2898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4a289c:
    // 0x4a289c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4a289cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_4a28a0:
    // 0x4a28a0: 0x2429823  subu        $s3, $s2, $v0
    ctx->pc = 0x4a28a0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4a28a4:
    // 0x4a28a4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4a28a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4a28a8:
    // 0x4a28a8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4a28a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4a28ac:
    // 0x4a28ac: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x4a28acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_4a28b0:
    // 0x4a28b0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a28b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_4a28b4:
    // 0x4a28b4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a28b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a28b8:
    // 0x4a28b8: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x4a28b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a28bc:
    // 0x4a28bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a28bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4a28c0:
    // 0x4a28c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a28c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4a28c4:
    // 0x4a28c4: 0x4601ad00  add.s       $f20, $f21, $f1
    ctx->pc = 0x4a28c4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_4a28c8:
    // 0x4a28c8: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x4a28c8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_4a28cc:
    // 0x4a28cc: 0x4600b301  sub.s       $f12, $f22, $f0
    ctx->pc = 0x4a28ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_4a28d0:
    // 0x4a28d0: 0x4600b380  add.s       $f14, $f22, $f0
    ctx->pc = 0x4a28d0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_4a28d4:
    // 0x4a28d4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a28d4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a28d8:
    // 0x4a28d8: 0x0  nop
    ctx->pc = 0x4a28d8u;
    // NOP
label_4a28dc:
    // 0x4a28dc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a28dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a28e0:
    // 0x4a28e0: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x4a28e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_4a28e4:
    // 0x4a28e4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x4a28e4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_4a28e8:
    // 0x4a28e8: 0xc0bc284  jal         func_2F0A10
label_4a28ec:
    if (ctx->pc == 0x4A28ECu) {
        ctx->pc = 0x4A28ECu;
            // 0x4a28ec: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4A28F0u;
        goto label_4a28f0;
    }
    ctx->pc = 0x4A28E8u;
    SET_GPR_U32(ctx, 31, 0x4A28F0u);
    ctx->pc = 0x4A28ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A28E8u;
            // 0x4a28ec: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A28F0u; }
        if (ctx->pc != 0x4A28F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A28F0u; }
        if (ctx->pc != 0x4A28F0u) { return; }
    }
    ctx->pc = 0x4A28F0u;
label_4a28f0:
    // 0x4a28f0: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x4a28f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_4a28f4:
    // 0x4a28f4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x4a28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_4a28f8:
    // 0x4a28f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a28f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a28fc:
    // 0x4a28fc: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x4a28fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_4a2900:
    // 0x4a2900: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x4a2900u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_4a2904:
    // 0x4a2904: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4a2904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4a2908:
    // 0x4a2908: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x4a2908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4a290c:
    // 0x4a290c: 0x132fc2  srl         $a1, $s3, 31
    ctx->pc = 0x4a290cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
label_4a2910:
    // 0x4a2910: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x4a2910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
label_4a2914:
    // 0x4a2914: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a2914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a2918:
    // 0x4a2918: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a2918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a291c:
    // 0x4a291c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a291cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2920:
    // 0x4a2920: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x4a2920u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2924:
    // 0x4a2924: 0x0  nop
    ctx->pc = 0x4a2924u;
    // NOP
label_4a2928:
    // 0x4a2928: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a292c:
    // 0x4a292c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a292cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a2930:
    // 0x4a2930: 0x4600b301  sub.s       $f12, $f22, $f0
    ctx->pc = 0x4a2930u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_4a2934:
    // 0x4a2934: 0x4600b380  add.s       $f14, $f22, $f0
    ctx->pc = 0x4a2934u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_4a2938:
    // 0x4a2938: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a2938u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a293c:
    // 0x4a293c: 0x0  nop
    ctx->pc = 0x4a293cu;
    // NOP
label_4a2940:
    // 0x4a2940: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a2940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a2944:
    // 0x4a2944: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a2944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a2948:
    // 0x4a2948: 0x1010  mfhi        $v0
    ctx->pc = 0x4a2948u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4a294c:
    // 0x4a294c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4a294cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4a2950:
    // 0x4a2950: 0x454021  addu        $t0, $v0, $a1
    ctx->pc = 0x4a2950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4a2954:
    // 0x4a2954: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a2954u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2958:
    // 0x4a2958: 0x2502000d  addiu       $v0, $t0, 0xD
    ctx->pc = 0x4a2958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 13));
label_4a295c:
    // 0x4a295c: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x4a295cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4a2960:
    // 0x4a2960: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a2960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4a2964:
    // 0x4a2964: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x4a2964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_4a2968:
    // 0x4a2968: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x4a2968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a296c:
    // 0x4a296c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x4a296cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_4a2970:
    // 0x4a2970: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a2970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a2974:
    // 0x4a2974: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x4a2974u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a2978:
    // 0x4a2978: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4a2978u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4a297c:
    // 0x4a297c: 0xc0bc284  jal         func_2F0A10
label_4a2980:
    if (ctx->pc == 0x4A2980u) {
        ctx->pc = 0x4A2980u;
            // 0x4a2980: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A2984u;
        goto label_4a2984;
    }
    ctx->pc = 0x4A297Cu;
    SET_GPR_U32(ctx, 31, 0x4A2984u);
    ctx->pc = 0x4A2980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A297Cu;
            // 0x4a2980: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2984u; }
        if (ctx->pc != 0x4A2984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A2984u; }
        if (ctx->pc != 0x4A2984u) { return; }
    }
    ctx->pc = 0x4A2984u;
label_4a2984:
    // 0x4a2984: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x4a2984u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a2988:
    // 0x4a2988: 0x2662000d  addiu       $v0, $s3, 0xD
    ctx->pc = 0x4a2988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 13));
label_4a298c:
    // 0x4a298c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4a298cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4a2990:
    // 0x4a2990: 0x3c084180  lui         $t0, 0x4180
    ctx->pc = 0x4a2990u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16768 << 16));
label_4a2994:
    // 0x4a2994: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4a2994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4a2998:
    // 0x4a2998: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x4a2998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4a299c:
    // 0x4a299c: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x4a299cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
label_4a29a0:
    // 0x4a29a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a29a4:
    // 0x4a29a4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x4a29a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a29a8:
    // 0x4a29a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a29a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a29ac:
    // 0x4a29ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a29acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a29b0:
    // 0x4a29b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a29b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a29b4:
    // 0x4a29b4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a29b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a29b8:
    // 0x4a29b8: 0x0  nop
    ctx->pc = 0x4a29b8u;
    // NOP
label_4a29bc:
    // 0x4a29bc: 0x4600b080  add.s       $f2, $f22, $f0
    ctx->pc = 0x4a29bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_4a29c0:
    // 0x4a29c0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a29c0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a29c4:
    // 0x4a29c4: 0x0  nop
    ctx->pc = 0x4a29c4u;
    // NOP
label_4a29c8:
    // 0x4a29c8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a29c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a29cc:
    // 0x4a29cc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a29ccu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a29d0:
    // 0x4a29d0: 0x0  nop
    ctx->pc = 0x4a29d0u;
    // NOP
label_4a29d4:
    // 0x4a29d4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a29d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a29d8:
    // 0x4a29d8: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x4a29d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_4a29dc:
    // 0x4a29dc: 0x46011380  add.s       $f14, $f2, $f1
    ctx->pc = 0x4a29dcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4a29e0:
    // 0x4a29e0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4a29e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4a29e4:
    // 0x4a29e4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a29e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a29e8:
    // 0x4a29e8: 0xc0bc284  jal         func_2F0A10
label_4a29ec:
    if (ctx->pc == 0x4A29ECu) {
        ctx->pc = 0x4A29ECu;
            // 0x4a29ec: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A29F0u;
        goto label_4a29f0;
    }
    ctx->pc = 0x4A29E8u;
    SET_GPR_U32(ctx, 31, 0x4A29F0u);
    ctx->pc = 0x4A29ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A29E8u;
            // 0x4a29ec: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A29F0u; }
        if (ctx->pc != 0x4A29F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A29F0u; }
        if (ctx->pc != 0x4A29F0u) { return; }
    }
    ctx->pc = 0x4A29F0u;
label_4a29f0:
    // 0x4a29f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a29f4:
    // 0x4a29f4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4a29f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a29f8:
    // 0x4a29f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a29f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a29fc:
    // 0x4a29fc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a29fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a2a00:
    // 0x4a2a00: 0x320f809  jalr        $t9
label_4a2a04:
    if (ctx->pc == 0x4A2A04u) {
        ctx->pc = 0x4A2A08u;
        goto label_4a2a08;
    }
    ctx->pc = 0x4A2A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A2A08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A2A08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A2A08u; }
            if (ctx->pc != 0x4A2A08u) { return; }
        }
        }
    }
    ctx->pc = 0x4A2A08u;
label_4a2a08:
    // 0x4a2a08: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a2a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4a2a0c:
    // 0x4a2a0c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4a2a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4a2a10:
    // 0x4a2a10: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4a2a10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a2a14:
    // 0x4a2a14: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a2a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a2a18:
    // 0x4a2a18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a2a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a2a1c:
    // 0x4a2a1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a2a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a2a20:
    // 0x4a2a20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a2a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a2a24:
    // 0x4a2a24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a2a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a2a28:
    // 0x4a2a28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a2a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a2a2c:
    // 0x4a2a2c: 0x3e00008  jr          $ra
label_4a2a30:
    if (ctx->pc == 0x4A2A30u) {
        ctx->pc = 0x4A2A30u;
            // 0x4a2a30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4A2A34u;
        goto label_4a2a34;
    }
    ctx->pc = 0x4A2A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2A2Cu;
            // 0x4a2a30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A2A34u;
label_4a2a34:
    // 0x4a2a34: 0x0  nop
    ctx->pc = 0x4a2a34u;
    // NOP
label_4a2a38:
    // 0x4a2a38: 0x0  nop
    ctx->pc = 0x4a2a38u;
    // NOP
label_4a2a3c:
    // 0x4a2a3c: 0x0  nop
    ctx->pc = 0x4a2a3cu;
    // NOP
}
