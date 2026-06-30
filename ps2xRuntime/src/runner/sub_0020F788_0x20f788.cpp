#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F788
// Address: 0x20f788 - 0x20f9a8
void sub_0020F788_0x20f788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F788_0x20f788");
#endif

    switch (ctx->pc) {
        case 0x20f7ccu: goto label_20f7cc;
        case 0x20f898u: goto label_20f898;
        default: break;
    }

    ctx->pc = 0x20f788u;

    // 0x20f788: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20f788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20f78c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x20f78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x20f790: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x20f790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x20f794: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20f794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f798: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x20f798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x20f79c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x20f79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f7a0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x20f7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x20f7a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20f7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f7a8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x20f7a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x20f7ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20f7acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f7b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20f7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x20f7b4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x20f7b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x20f7b8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x20f7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x20f7bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20f7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20f7c0: 0x8e140030  lw          $s4, 0x30($s0)
    ctx->pc = 0x20f7c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20f7c4: 0xc083c9e  jal         func_20F278
    ctx->pc = 0x20F7C4u;
    SET_GPR_U32(ctx, 31, 0x20F7CCu);
    ctx->pc = 0x20F7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F7C4u;
            // 0x20f7c8: 0x8e150034  lw          $s5, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F278u;
    if (runtime->hasFunction(0x20F278u)) {
        auto targetFn = runtime->lookupFunction(0x20F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F7CCu; }
        if (ctx->pc != 0x20F7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F278_0x20f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F7CCu; }
        if (ctx->pc != 0x20F7CCu) { return; }
    }
    ctx->pc = 0x20F7CCu;
label_20f7cc:
    // 0x20f7cc: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x20f7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f7d0: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x20f7d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20f7d4: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x20f7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f7d8: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x20f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f7dc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x20f7dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20f7e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x20f7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20f7e4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x20f7e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20f7e8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x20f7e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f7ec: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x20f7ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f7f0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x20f7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f7f4: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x20f7f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x20f7f8: 0x4b01104a  vmaddz.x    $vf1, $vf2, $vf1z
    ctx->pc = 0x20f7f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f7fc: 0x4a0103bd  .word       0x4A0103BD                   # vsqrt       $Q, $vf1x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x20f7fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x20f800: 0x4a0003bf  vwaitq
    ctx->pc = 0x20f800u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x20f804: 0x4b000060  vaddq.x     $vf1, $vf0, $Q
    ctx->pc = 0x20f804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f808: 0x4a0002ff  vnop
    ctx->pc = 0x20f808u;
    // NOP operation, no action needed for VU0
    // 0x20f80c: 0x4a0002ff  vnop
    ctx->pc = 0x20f80cu;
    // NOP operation, no action needed for VU0
    // 0x20f810: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x20f810u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x20f814: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x20f814u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20f818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f81c: 0x0  nop
    ctx->pc = 0x20f81cu;
    // NOP
    // 0x20f820: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x20f820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f824: 0x0  nop
    ctx->pc = 0x20f824u;
    // NOP
    // 0x20f828: 0x45020055  bc1fl       . + 4 + (0x55 << 2)
    ctx->pc = 0x20F828u;
    {
        const bool branch_taken_0x20f828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f828) {
            ctx->pc = 0x20F82Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20F828u;
            // 0x20f82c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20F980u;
            goto label_20f980;
        }
    }
    ctx->pc = 0x20F830u;
    // 0x20f830: 0x0  nop
    ctx->pc = 0x20f830u;
    // NOP
    // 0x20f834: 0x0  nop
    ctx->pc = 0x20f834u;
    // NOP
    // 0x20f838: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x20f838u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x20f83c: 0xda810040  lqc2        $vf1, 0x40($s4)
    ctx->pc = 0x20f83cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x20f840: 0x46000504  c1          0x504
    ctx->pc = 0x20f840u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x20f844: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x20f844u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20f848: 0x46140504  c1          0x140504
    ctx->pc = 0x20f848u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x20f84c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x20f84cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20f850: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x20f850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x20f854: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20f854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x20f858: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x20f858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x20f85c: 0x2444d6e0  addiu       $a0, $v0, -0x2920
    ctx->pc = 0x20f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x20f860: 0x4be009bf  vmulaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x20f860u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x20f864: 0x4be208fc  vmsubax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x20f864u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20f868: 0x4be21848  vmaddx.xyzw $vf1, $vf3, $vf2x
    ctx->pc = 0x20f868u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f86c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x20f86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20f870: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x20f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20f874: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20f874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20f878: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x20f878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f87c: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x20f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x20f880: 0xdaa10040  lqc2        $vf1, 0x40($s5)
    ctx->pc = 0x20f880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x20f884: 0x4be009bf  vmulaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x20f884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x20f888: 0x4be208fc  vmsubax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x20f888u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20f88c: 0x4be22088  vmaddx.xyzw $vf2, $vf4, $vf2x
    ctx->pc = 0x20f88cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f890: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x20f890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20f894: 0x0  nop
    ctx->pc = 0x20f894u;
    // NOP
label_20f898:
    // 0x20f898: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x20f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f89c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x20f89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f8a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20f8a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20f8a4: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x20f8a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x20f8a8: 0xd8fb0000  lqc2        $vf27, 0x0($a3)
    ctx->pc = 0x20f8a8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20f8ac: 0xd8dc0000  lqc2        $vf28, 0x0($a2)
    ctx->pc = 0x20f8acu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20f8b0: 0x4bd3dfac  vsub.xyz    $vf30, $vf27, $vf19
    ctx->pc = 0x20f8b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20f8b4: 0x4bd8e7ec  vsub.xyz    $vf31, $vf28, $vf24
    ctx->pc = 0x20f8b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20f8b8: 0xd89d0000  lqc2        $vf29, 0x0($a0)
    ctx->pc = 0x20f8b8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f8bc: 0x4bddf2fe  vopmula.xyz $ACC, $vf30, $vf29
    ctx->pc = 0x20f8bcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[29]);
    // 0x20f8c0: 0x4bdeefae  vopmsub.xyz $vf30, $vf29, $vf30
    ctx->pc = 0x20f8c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[30]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f8c4: 0x4bdfeafe  vopmula.xyz $ACC, $vf29, $vf31
    ctx->pc = 0x20f8c4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[31]);
    // 0x20f8c8: 0x4bddffee  vopmsub.xyz $vf31, $vf31, $vf29
    ctx->pc = 0x20f8c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[29]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f8cc: 0x4bdde86a  vmul.xyz    $vf1, $vf29, $vf29
    ctx->pc = 0x20f8ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f8d0: 0x4bde81bc  vmulax.xyz  $ACC, $vf16, $vf30x
    ctx->pc = 0x20f8d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20f8d4: 0x4bde88bd  vmadday.xyz $ACC, $vf17, $vf30y
    ctx->pc = 0x20f8d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20f8d8: 0x4bde978a  vmaddz.xyz  $vf30, $vf18, $vf30z
    ctx->pc = 0x20f8d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f8dc: 0x4bdfa9bc  vmulax.xyz  $ACC, $vf21, $vf31x
    ctx->pc = 0x20f8dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20f8e0: 0x4bdfb0bd  vmadday.xyz $ACC, $vf22, $vf31y
    ctx->pc = 0x20f8e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20f8e4: 0x4bdfbfca  vmaddz.xyz  $vf31, $vf23, $vf31z
    ctx->pc = 0x20f8e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f8e8: 0x4bf4f0ea  vmul.xyzw   $vf3, $vf30, $vf20
    ctx->pc = 0x20f8e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20f8ec: 0x4bf9f92a  vmul.xyzw   $vf4, $vf31, $vf25
    ctx->pc = 0x20f8ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20f8f0: 0x4bd409bf  vmulaw.xyz  $ACC, $vf1, $vf20w
    ctx->pc = 0x20f8f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x20f8f4: 0x4bd908bf  vmaddaw.xyz $ACC, $vf1, $vf25w
    ctx->pc = 0x20f8f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20f8f8: 0x4bc3f2bd  vmadda.xyz  $ACC, $vf30, $vf3
    ctx->pc = 0x20f8f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[3]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x20f8fc: 0x4bc4f969  vmadd.xyz   $vf5, $vf31, $vf4
    ctx->pc = 0x20f8fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[4]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f900: 0x4bdbe06c  vsub.xyz    $vf1, $vf28, $vf27
    ctx->pc = 0x20f900u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f904: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x20f904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20f908: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x20f908u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x20f90c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x20f90cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20f910: 0x4bdd086a  vmul.xyz    $vf1, $vf1, $vf29
    ctx->pc = 0x20f910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f914: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x20f914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20f918: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x20f918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f91c: 0x4a2007ac  vsub.w      $vf30, $vf0, $vf0
    ctx->pc = 0x20f91cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20f920: 0x4a0533bc  vdiv        $Q, $vf6x, $vf5x
    ctx->pc = 0x20f920u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x20f924: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x20f924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f928: 0x4a25f7c0  vaddx.w     $vf31, $vf30, $vf5x
    ctx->pc = 0x20f928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20f92c: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x20f92cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f930: 0x4a210758  vmulx.w     $vf29, $vf0, $vf1x
    ctx->pc = 0x20f930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20f934: 0x4a0003bf  vwaitq
    ctx->pc = 0x20f934u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x20f938: 0x4a20f7a0  vaddq.w     $vf30, $vf30, $Q
    ctx->pc = 0x20f938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20f93c: 0xf87f0020  sqc2        $vf31, 0x20($v1)
    ctx->pc = 0x20f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x20f940: 0xf87d0000  sqc2        $vf29, 0x0($v1)
    ctx->pc = 0x20f940u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x20f944: 0xf87e0010  sqc2        $vf30, 0x10($v1)
    ctx->pc = 0x20f944u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x20f948: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x20f948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20f94c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x20f94cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x20f950: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x20F950u;
    {
        const bool branch_taken_0x20f950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F950u;
            // 0x20f954: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f950) {
            ctx->pc = 0x20F898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f898;
        }
    }
    ctx->pc = 0x20F958u;
    // 0x20f958: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x20f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f95c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x20f95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f960: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x20f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f964: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x20f964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x20f968: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x20f968u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x20f96c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x20f96cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x20f970: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x20f970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x20f974: 0xe621003c  swc1        $f1, 0x3C($s1)
    ctx->pc = 0x20f974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x20f978: 0xe622006c  swc1        $f2, 0x6C($s1)
    ctx->pc = 0x20f978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x20f97c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x20f97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20f980:
    // 0x20f980: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x20f980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20f984: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x20f984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20f988: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x20f988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20f98c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20f98cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20f990: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x20f990u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f994: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20f994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f998: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x20f998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20f99c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F99Cu;
            // 0x20f9a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F9A4u;
    // 0x20f9a4: 0x0  nop
    ctx->pc = 0x20f9a4u;
    // NOP
}
