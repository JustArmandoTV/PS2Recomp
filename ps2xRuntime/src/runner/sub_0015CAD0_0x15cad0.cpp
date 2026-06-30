#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015CAD0
// Address: 0x15cad0 - 0x15cc60
void sub_0015CAD0_0x15cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CAD0_0x15cad0");
#endif

    ctx->pc = 0x15cad0u;

    // 0x15cad0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x15cad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15cad4: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x15cad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x15cad8: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x15cad8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x15cadc: 0x4a8311be  vmulaz.y    $ACC, $vf2, $vf3z
    ctx->pc = 0x15cadcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x15cae0: 0x4a82190e  vmsubz.y    $vf4, $vf3, $vf2z
    ctx->pc = 0x15cae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15cae4: 0x4b0219be  vmulaz.x    $ACC, $vf3, $vf2z
    ctx->pc = 0x15cae4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x15cae8: 0x4b03114e  vmsubz.x    $vf5, $vf2, $vf3z
    ctx->pc = 0x15cae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15caec: 0x4b0311bd  vmulay.x    $ACC, $vf2, $vf3y
    ctx->pc = 0x15caecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x15caf0: 0x4b02198d  vmsuby.x    $vf6, $vf3, $vf2y
    ctx->pc = 0x15caf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15caf4: 0x4b040101  vaddy.x     $vf4, $vf0, $vf4y
    ctx->pc = 0x15caf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15caf8: 0x4a8119be  vmulaz.y    $ACC, $vf3, $vf1z
    ctx->pc = 0x15caf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x15cafc: 0x4a83090e  vmsubz.y    $vf4, $vf1, $vf3z
    ctx->pc = 0x15cafcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15cb00: 0x4a4119bc  vmulax.z    $ACC, $vf3, $vf1x
    ctx->pc = 0x15cb00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15cb04: 0x4a43094c  vmsubx.z    $vf5, $vf1, $vf3x
    ctx->pc = 0x15cb04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15cb08: 0x4a8309bc  vmulax.y    $ACC, $vf1, $vf3x
    ctx->pc = 0x15cb08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15cb0c: 0x4a81198c  vmsubx.y    $vf6, $vf3, $vf1x
    ctx->pc = 0x15cb0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15cb10: 0x4a850142  vaddz.y     $vf5, $vf0, $vf5z
    ctx->pc = 0x15cb10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15cb14: 0x4a4111bd  vmulay.z    $ACC, $vf2, $vf1y
    ctx->pc = 0x15cb14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x15cb18: 0x4a42090d  vmsuby.z    $vf4, $vf1, $vf2y
    ctx->pc = 0x15cb18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15cb1c: 0x4a4209bc  vmulax.z    $ACC, $vf1, $vf2x
    ctx->pc = 0x15cb1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15cb20: 0x4a41114c  vmsubx.z    $vf5, $vf2, $vf1x
    ctx->pc = 0x15cb20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15cb24: 0x4a8111bc  vmulax.y    $ACC, $vf2, $vf1x
    ctx->pc = 0x15cb24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15cb28: 0x4a8209cc  vmsubx.y    $vf7, $vf1, $vf2x
    ctx->pc = 0x15cb28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15cb2c: 0x4a470181  vaddy.z     $vf6, $vf0, $vf7y
    ctx->pc = 0x15cb2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15cb30: 0x4b0121bc  vmulax.x    $ACC, $vf4, $vf1x
    ctx->pc = 0x15cb30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15cb34: 0x4b0128bd  vmadday.x   $ACC, $vf5, $vf1y
    ctx->pc = 0x15cb34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15cb38: 0x4b01320a  vmaddz.x    $vf8, $vf6, $vf1z
    ctx->pc = 0x15cb38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15cb3c: 0x4bc82118  vmulx.xyz   $vf4, $vf4, $vf8x
    ctx->pc = 0x15cb3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15cb40: 0x4bc82958  vmulx.xyz   $vf5, $vf5, $vf8x
    ctx->pc = 0x15cb40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15cb44: 0x4bc83198  vmulx.xyz   $vf6, $vf6, $vf8x
    ctx->pc = 0x15cb44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15cb48: 0x4a200118  vmulx.w     $vf4, $vf0, $vf0x
    ctx->pc = 0x15cb48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15cb4c: 0x4a200158  vmulx.w     $vf5, $vf0, $vf0x
    ctx->pc = 0x15cb4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15cb50: 0x4a200198  vmulx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x15cb50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15cb54: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x15cb54u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15cb58: 0xd8a90010  lqc2        $vf9, 0x10($a1)
    ctx->pc = 0x15cb58u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15cb5c: 0xd8aa0020  lqc2        $vf10, 0x20($a1)
    ctx->pc = 0x15cb5cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15cb60: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x15cb60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15cb64: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x15cb64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15cb68: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x15cb68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15cb6c: 0x4be802cb  vmaddw.xyzw $vf11, $vf0, $vf8w
    ctx->pc = 0x15cb6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15cb70: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x15cb70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15cb74: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x15cb74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15cb78: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x15cb78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15cb7c: 0x4be9030b  vmaddw.xyzw $vf12, $vf0, $vf9w
    ctx->pc = 0x15cb7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15cb80: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x15cb80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15cb84: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x15cb84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15cb88: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x15cb88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15cb8c: 0x4bea034b  vmaddw.xyzw $vf13, $vf0, $vf10w
    ctx->pc = 0x15cb8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15cb90: 0x4bcb5baa  vmul.xyz    $vf14, $vf11, $vf11
    ctx->pc = 0x15cb90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cb94: 0x4b0e7381  vaddy.x     $vf14, $vf14, $vf14y
    ctx->pc = 0x15cb94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cb98: 0x4b0e7382  vaddz.x     $vf14, $vf14, $vf14z
    ctx->pc = 0x15cb98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cb9c: 0x4a0e03bd  .word       0x4A0E03BD                   # vsqrt       $Q, $vf14x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15cb9cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15cba0: 0x4a0003bf  vwaitq
    ctx->pc = 0x15cba0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15cba4: 0x4b0003a0  vaddq.x     $vf14, $vf0, $Q
    ctx->pc = 0x15cba4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cba8: 0x4a0002ff  vnop
    ctx->pc = 0x15cba8u;
    // NOP operation, no action needed for VU0
    // 0x15cbac: 0x4a0002ff  vnop
    ctx->pc = 0x15cbacu;
    // NOP operation, no action needed for VU0
    // 0x15cbb0: 0x4a6e03bc  vdiv        $Q, $vf0w, $vf14x
    ctx->pc = 0x15cbb0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15cbb4: 0x4a0003bf  vwaitq
    ctx->pc = 0x15cbb4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15cbb8: 0x4bc05adc  vmulq.xyz   $vf11, $vf11, $Q
    ctx->pc = 0x15cbb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x15cbbc: 0x4bcc63aa  vmul.xyz    $vf14, $vf12, $vf12
    ctx->pc = 0x15cbbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cbc0: 0x4b0e7381  vaddy.x     $vf14, $vf14, $vf14y
    ctx->pc = 0x15cbc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cbc4: 0x4b0e7382  vaddz.x     $vf14, $vf14, $vf14z
    ctx->pc = 0x15cbc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cbc8: 0x4a0e03bd  .word       0x4A0E03BD                   # vsqrt       $Q, $vf14x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15cbc8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15cbcc: 0x4a0003bf  vwaitq
    ctx->pc = 0x15cbccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15cbd0: 0x4b0003a0  vaddq.x     $vf14, $vf0, $Q
    ctx->pc = 0x15cbd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cbd4: 0x4a0002ff  vnop
    ctx->pc = 0x15cbd4u;
    // NOP operation, no action needed for VU0
    // 0x15cbd8: 0x4a0002ff  vnop
    ctx->pc = 0x15cbd8u;
    // NOP operation, no action needed for VU0
    // 0x15cbdc: 0x4a6e03bc  vdiv        $Q, $vf0w, $vf14x
    ctx->pc = 0x15cbdcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15cbe0: 0x4a0003bf  vwaitq
    ctx->pc = 0x15cbe0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15cbe4: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x15cbe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x15cbe8: 0x4bcd6baa  vmul.xyz    $vf14, $vf13, $vf13
    ctx->pc = 0x15cbe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cbec: 0x4b0e7381  vaddy.x     $vf14, $vf14, $vf14y
    ctx->pc = 0x15cbecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cbf0: 0x4b0e7382  vaddz.x     $vf14, $vf14, $vf14z
    ctx->pc = 0x15cbf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cbf4: 0x4a0e03bd  .word       0x4A0E03BD                   # vsqrt       $Q, $vf14x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x15cbf4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x15cbf8: 0x4a0003bf  vwaitq
    ctx->pc = 0x15cbf8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15cbfc: 0x4b0003a0  vaddq.x     $vf14, $vf0, $Q
    ctx->pc = 0x15cbfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x15cc00: 0x4a0002ff  vnop
    ctx->pc = 0x15cc00u;
    // NOP operation, no action needed for VU0
    // 0x15cc04: 0x4a0002ff  vnop
    ctx->pc = 0x15cc04u;
    // NOP operation, no action needed for VU0
    // 0x15cc08: 0x4a6e03bc  vdiv        $Q, $vf0w, $vf14x
    ctx->pc = 0x15cc08u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x15cc0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15cc0cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x15cc10: 0x4bc06b5c  vmulq.xyz   $vf13, $vf13, $Q
    ctx->pc = 0x15cc10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x15cc14: 0x48285800  qmfc2.ni    $t0, $vf11
    ctx->pc = 0x15cc14u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x15cc18: 0x48296000  qmfc2.ni    $t1, $vf12
    ctx->pc = 0x15cc18u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x15cc1c: 0x482a6800  qmfc2.ni    $t2, $vf13
    ctx->pc = 0x15cc1cu;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x15cc20: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x15cc20u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15cc24: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x15cc24u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15cc28: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x15cc28u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15cc2c: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x15cc2cu;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x15cc30: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x15cc30u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x15cc34: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x15cc34u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x15cc38: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x15cc38u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x15cc3c: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x15cc3cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x15cc40: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x15cc40u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x15cc44: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x15cc44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x15cc48: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x15cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x15cc4c: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x15cc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x15cc50: 0x3e00008  jr          $ra
    ctx->pc = 0x15CC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC50u;
            // 0x15cc54: 0x7c8b0030  sq          $t3, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CC58u;
    // 0x15cc58: 0x0  nop
    ctx->pc = 0x15cc58u;
    // NOP
    // 0x15cc5c: 0x0  nop
    ctx->pc = 0x15cc5cu;
    // NOP
}
