#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F578
// Address: 0x20f578 - 0x20f690
void sub_0020F578_0x20f578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F578_0x20f578");
#endif

    ctx->pc = 0x20f578u;

    // 0x20f578: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x20f578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f57c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x20f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20f580: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x20f580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f584: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20f584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20f588: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x20f588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x20f58c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x20f58cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x20f590: 0xd89b0000  lqc2        $vf27, 0x0($a0)
    ctx->pc = 0x20f590u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f594: 0xd89c0000  lqc2        $vf28, 0x0($a0)
    ctx->pc = 0x20f594u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f598: 0x4bd3dfac  vsub.xyz    $vf30, $vf27, $vf19
    ctx->pc = 0x20f598u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20f59c: 0x4bd8e7ec  vsub.xyz    $vf31, $vf28, $vf24
    ctx->pc = 0x20f59cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20f5a0: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x20f5a0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f5a4: 0x4bddf2fe  vopmula.xyz $ACC, $vf30, $vf29
    ctx->pc = 0x20f5a4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[29]);
    // 0x20f5a8: 0x4bdeefae  vopmsub.xyz $vf30, $vf29, $vf30
    ctx->pc = 0x20f5a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[30]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f5ac: 0x4bdfeafe  vopmula.xyz $ACC, $vf29, $vf31
    ctx->pc = 0x20f5acu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[31]);
    // 0x20f5b0: 0x4bddffee  vopmsub.xyz $vf31, $vf31, $vf29
    ctx->pc = 0x20f5b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[29]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f5b4: 0x4bdde86a  vmul.xyz    $vf1, $vf29, $vf29
    ctx->pc = 0x20f5b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f5b8: 0x4bde81bc  vmulax.xyz  $ACC, $vf16, $vf30x
    ctx->pc = 0x20f5b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20f5bc: 0x4bde88bd  vmadday.xyz $ACC, $vf17, $vf30y
    ctx->pc = 0x20f5bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20f5c0: 0x4bde978a  vmaddz.xyz  $vf30, $vf18, $vf30z
    ctx->pc = 0x20f5c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f5c4: 0x4bdfa9bc  vmulax.xyz  $ACC, $vf21, $vf31x
    ctx->pc = 0x20f5c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20f5c8: 0x4bdfb0bd  vmadday.xyz $ACC, $vf22, $vf31y
    ctx->pc = 0x20f5c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20f5cc: 0x4bdfbfca  vmaddz.xyz  $vf31, $vf23, $vf31z
    ctx->pc = 0x20f5ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f5d0: 0x4bf4f0ea  vmul.xyzw   $vf3, $vf30, $vf20
    ctx->pc = 0x20f5d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20f5d4: 0x4bf9f92a  vmul.xyzw   $vf4, $vf31, $vf25
    ctx->pc = 0x20f5d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20f5d8: 0x4bd409bf  vmulaw.xyz  $ACC, $vf1, $vf20w
    ctx->pc = 0x20f5d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x20f5dc: 0x4bd908bf  vmaddaw.xyz $ACC, $vf1, $vf25w
    ctx->pc = 0x20f5dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20f5e0: 0x4bc3f2bd  vmadda.xyz  $ACC, $vf30, $vf3
    ctx->pc = 0x20f5e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[3]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x20f5e4: 0x4bc4f969  vmadd.xyz   $vf5, $vf31, $vf4
    ctx->pc = 0x20f5e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[4]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f5e8: 0x4bdbe06c  vsub.xyz    $vf1, $vf28, $vf27
    ctx->pc = 0x20f5e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f5ec: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x20f5ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x20f5f0: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x20f5f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x20f5f4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x20f5f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20f5f8: 0x4bdd086a  vmul.xyz    $vf1, $vf1, $vf29
    ctx->pc = 0x20f5f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f5fc: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x20f5fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20f600: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x20f600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f604: 0x4a2007ac  vsub.w      $vf30, $vf0, $vf0
    ctx->pc = 0x20f604u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20f608: 0x4a0533bc  vdiv        $Q, $vf6x, $vf5x
    ctx->pc = 0x20f608u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x20f60c: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x20f60cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f610: 0x4a25f7c0  vaddx.w     $vf31, $vf30, $vf5x
    ctx->pc = 0x20f610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20f614: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x20f614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20f618: 0x4a210758  vmulx.w     $vf29, $vf0, $vf1x
    ctx->pc = 0x20f618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20f61c: 0x4a0003bf  vwaitq
    ctx->pc = 0x20f61cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x20f620: 0x4a20f7a0  vaddq.w     $vf30, $vf30, $Q
    ctx->pc = 0x20f620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20f624: 0xf87f0020  sqc2        $vf31, 0x20($v1)
    ctx->pc = 0x20f624u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x20f628: 0xf87d0000  sqc2        $vf29, 0x0($v1)
    ctx->pc = 0x20f628u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x20f62c: 0xf87e0010  sqc2        $vf30, 0x10($v1)
    ctx->pc = 0x20f62cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x20f630: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x20f630u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f634: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x20f634u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x20f638: 0x4be239ec  vsub.xyzw   $vf7, $vf7, $vf2
    ctx->pc = 0x20f638u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x20f63c: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x20f63cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x20f640: 0x4bc138aa  vmul.xyz    $vf2, $vf7, $vf1
    ctx->pc = 0x20f640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20f644: 0x4b0000c3  vaddw.x     $vf3, $vf0, $vf0w
    ctx->pc = 0x20f644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20f648: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x20f648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x20f64c: 0x4b02188a  vmaddz.x    $vf2, $vf3, $vf2z
    ctx->pc = 0x20f64cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20f650: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x20f650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f654: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x20f654u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20f658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f65c: 0x0  nop
    ctx->pc = 0x20f65cu;
    // NOP
    // 0x20f660: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20f660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20f664: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x20f664u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20f668: 0xf87d0000  sqc2        $vf29, 0x0($v1)
    ctx->pc = 0x20f668u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x20f66c: 0xf87e0010  sqc2        $vf30, 0x10($v1)
    ctx->pc = 0x20f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x20f670: 0xf87f0020  sqc2        $vf31, 0x20($v1)
    ctx->pc = 0x20f670u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x20f674: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20f674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20f678: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x20f678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x20f67c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20f680: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x20f680u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20f684: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20f684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20f688: 0x3e00008  jr          $ra
    ctx->pc = 0x20F688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F688u;
            // 0x20f68c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F690u;
}
