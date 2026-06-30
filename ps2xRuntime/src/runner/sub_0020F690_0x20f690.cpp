#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F690
// Address: 0x20f690 - 0x20f788
void sub_0020F690_0x20f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F690_0x20f690");
#endif

    ctx->pc = 0x20f690u;

    // 0x20f690: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x20f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f694: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x20f694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20f698: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x20f698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f69c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x20f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20f6a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20f6a4: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x20f6a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x20f6a8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x20f6a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x20f6ac: 0xd89b0000  lqc2        $vf27, 0x0($a0)
    ctx->pc = 0x20f6acu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f6b0: 0xd8fc0000  lqc2        $vf28, 0x0($a3)
    ctx->pc = 0x20f6b0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20f6b4: 0x4bd3dfac  vsub.xyz    $vf30, $vf27, $vf19
    ctx->pc = 0x20f6b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20f6b8: 0x4bd8e7ec  vsub.xyz    $vf31, $vf28, $vf24
    ctx->pc = 0x20f6b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20f6bc: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x20f6bcu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f6c0: 0x4bddf2fe  vopmula.xyz $ACC, $vf30, $vf29
    ctx->pc = 0x20f6c0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[29]);
    // 0x20f6c4: 0x4bdeefae  vopmsub.xyz $vf30, $vf29, $vf30
    ctx->pc = 0x20f6c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[30]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f6c8: 0x4bdfeafe  vopmula.xyz $ACC, $vf29, $vf31
    ctx->pc = 0x20f6c8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[31]);
    // 0x20f6cc: 0x4bddffee  vopmsub.xyz $vf31, $vf31, $vf29
    ctx->pc = 0x20f6ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[29]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f6d0: 0x4bdde86a  vmul.xyz    $vf1, $vf29, $vf29
    ctx->pc = 0x20f6d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f6d4: 0x4bde81bc  vmulax.xyz  $ACC, $vf16, $vf30x
    ctx->pc = 0x20f6d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20f6d8: 0x4bde88bd  vmadday.xyz $ACC, $vf17, $vf30y
    ctx->pc = 0x20f6d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20f6dc: 0x4bde978a  vmaddz.xyz  $vf30, $vf18, $vf30z
    ctx->pc = 0x20f6dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f6e0: 0x4bdfa9bc  vmulax.xyz  $ACC, $vf21, $vf31x
    ctx->pc = 0x20f6e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20f6e4: 0x4bdfb0bd  vmadday.xyz $ACC, $vf22, $vf31y
    ctx->pc = 0x20f6e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20f6e8: 0x4bdfbfca  vmaddz.xyz  $vf31, $vf23, $vf31z
    ctx->pc = 0x20f6e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f6ec: 0x4bf4f0ea  vmul.xyzw   $vf3, $vf30, $vf20
    ctx->pc = 0x20f6ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20f6f0: 0x4bf9f92a  vmul.xyzw   $vf4, $vf31, $vf25
    ctx->pc = 0x20f6f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20f6f4: 0x4bd409bf  vmulaw.xyz  $ACC, $vf1, $vf20w
    ctx->pc = 0x20f6f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x20f6f8: 0x4bd908bf  vmaddaw.xyz $ACC, $vf1, $vf25w
    ctx->pc = 0x20f6f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20f6fc: 0x4bc3f2bd  vmadda.xyz  $ACC, $vf30, $vf3
    ctx->pc = 0x20f6fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[3]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x20f700: 0x4bc4f969  vmadd.xyz   $vf5, $vf31, $vf4
    ctx->pc = 0x20f700u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[4]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f704: 0x4bdbe06c  vsub.xyz    $vf1, $vf28, $vf27
    ctx->pc = 0x20f704u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f708: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x20f708u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x20f70c: 0x48a93000  qmtc2.ni    $t1, $vf6
    ctx->pc = 0x20f70cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x20f710: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x20f710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20f714: 0x4bdd086a  vmul.xyz    $vf1, $vf1, $vf29
    ctx->pc = 0x20f714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f718: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x20f718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20f71c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x20f71cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f720: 0x4a2007ac  vsub.w      $vf30, $vf0, $vf0
    ctx->pc = 0x20f720u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20f724: 0x4a0533bc  vdiv        $Q, $vf6x, $vf5x
    ctx->pc = 0x20f724u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x20f728: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x20f728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f72c: 0x4a25f7c0  vaddx.w     $vf31, $vf30, $vf5x
    ctx->pc = 0x20f72cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20f730: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x20f730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f734: 0x4a210758  vmulx.w     $vf29, $vf0, $vf1x
    ctx->pc = 0x20f734u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20f738: 0x4a0003bf  vwaitq
    ctx->pc = 0x20f738u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x20f73c: 0x4a20f7a0  vaddq.w     $vf30, $vf30, $Q
    ctx->pc = 0x20f73cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20f740: 0xf87f0020  sqc2        $vf31, 0x20($v1)
    ctx->pc = 0x20f740u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x20f744: 0xf87d0000  sqc2        $vf29, 0x0($v1)
    ctx->pc = 0x20f744u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x20f748: 0xf87e0010  sqc2        $vf30, 0x10($v1)
    ctx->pc = 0x20f748u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x20f74c: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x20f74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f750: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x20f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f754: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20f754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20f758: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x20f758u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x20f75c: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x20f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f760: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20f764: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x20f764u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20f768: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x20f768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x20f76c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20f76cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20f770: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x20f770u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x20f774: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x20f774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x20f778: 0xe4420034  swc1        $f2, 0x34($v0)
    ctx->pc = 0x20f778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x20f77c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F77Cu;
            // 0x20f780: 0xe4400030  swc1        $f0, 0x30($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F784u;
    // 0x20f784: 0x0  nop
    ctx->pc = 0x20f784u;
    // NOP
}
